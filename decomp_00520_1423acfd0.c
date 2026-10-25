// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1423acfd0 FUN_1423acfd0 body=80 status=ok
// SIG undefined FUN_1423acfd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1423acfd0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001468b5b78;
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    *param_2 = _DAT_1468b5b70;
    param_2[1] = uVar1;
    uVar1 = uRam00000001468b5b88;
    param_2[2] = _DAT_1468b5b80;
    param_2[3] = uVar1;
    uVar1 = uRam00000001468b5b98;
    param_2[4] = _DAT_1468b5b90;
    param_2[5] = uVar1;
    return param_2;
  }
  FUN_1423ad020(param_1,param_2,param_3,param_1 + 0x210);
  return param_2;
}



// FUNCTION 1423ad020 FUN_1423ad020 body=2611 status=ok
// SIG undefined FUN_1423ad020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1423ad020(longlong param_1,float *param_2,int param_3,float *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
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
  undefined1 auVar17 [16];
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
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
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
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  lVar9 = FWeakObjectPtr::Get(param_1 + 0x720);
  fVar15 = fRam0000000146af0cfc;
  fVar42 = fRam0000000146af0cf8;
  fVar41 = fRam0000000146af0cf4;
  fVar40 = _DAT_146af0cf0;
  uVar7 = uRam0000000146af0c0c;
  uVar6 = uRam0000000146af0c08;
  uVar5 = uRam0000000146af0c04;
  uVar4 = _DAT_146af0c00;
  fVar31 = fRam0000000146af0bfc;
  fVar30 = fRam0000000146af0bf8;
  fVar29 = fRam0000000146af0bf4;
  fVar28 = _DAT_146af0bf0;
  fVar20 = fRam00000001468b5b8c;
  fVar23 = fRam00000001468b5b88;
  fVar55 = fRam00000001468b5b84;
  fVar19 = _DAT_1468b5b80;
  uVar3 = uRam00000001468b5b78;
  if (lVar9 == 0) {
    lVar9 = (longlong)*(int *)(param_1 + 0x770) + 0x73;
    iVar8 = *(int *)(param_1 + lVar9 * 0x10);
    if ((0 < iVar8) && (param_3 < iVar8)) {
      auVar11 = *(undefined1 (*) [16])(param_4 + 8);
      fVar19 = auVar11._0_4_;
      fVar23 = auVar11._4_4_;
      fVar35 = auVar11._8_4_;
      fVar25 = auVar11._12_4_;
      pfVar10 = (float *)((longlong)param_3 * 0x30 +
                         *(longlong *)(param_1 + 0x728 + (longlong)*(int *)(param_1 + 0x770) * 0x10)
                         );
      *param_2 = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      param_2[3] = fVar31;
      param_2[4] = 0.0;
      param_2[5] = 0.0;
      param_2[6] = 0.0;
      param_2[7] = 0.0;
      param_2[8] = (float)((uint)fVar28 & uVar4);
      param_2[9] = (float)((uint)fVar29 & uVar5);
      param_2[10] = (float)((uint)fVar30 & uVar6);
      param_2[0xb] = (float)((uint)fVar31 & uVar7);
      auVar13 = *(undefined1 (*) [16])(pfVar10 + 8);
      fVar55 = auVar13._0_4_;
      fVar20 = auVar13._4_4_;
      fVar24 = auVar13._8_4_;
      fVar26 = auVar13._12_4_;
      auVar11 = minps(auVar13,auVar11);
      auVar13._4_4_ = -(uint)(auVar11._4_4_ < fVar41);
      auVar13._0_4_ = -(uint)(auVar11._0_4_ < fVar40);
      auVar13._8_4_ = -(uint)(auVar11._8_4_ < fVar42);
      auVar13._12_4_ = -(uint)(auVar11._12_4_ < fVar15);
      iVar8 = movmskps((int)lVar9 * 2,auVar13);
      if (iVar8 != 0) {
        fVar15 = *param_4;
        fVar22 = param_4[1];
        fVar18 = param_4[2];
        fVar39 = param_4[3];
        fVar14 = param_4[4];
        fVar16 = param_4[5];
        fVar21 = param_4[6];
        fVar45 = fVar22 + fVar22;
        fVar32 = fVar18 + fVar18;
        fVar51 = fVar19 * fVar55;
        fVar52 = fVar23 * fVar20;
        fVar53 = fVar35 * fVar24;
        fVar54 = fVar25 * fVar26;
        fVar36 = (fVar15 + fVar15) * fVar15;
        fVar27 = (fVar15 + fVar15) * fVar39;
        fVar48 = (fVar32 * fVar39 + fVar45 * fVar15) * fVar19;
        fVar49 = (fVar27 + fVar32 * fVar22) * fVar23;
        fVar50 = (fVar45 * fVar39 + fVar32 * fVar15) * fVar35;
        fVar33 = fVar23 * (fVar45 * fVar15 - fVar32 * fVar39);
        fVar37 = fVar35 * (fVar32 * fVar22 - fVar27);
        fVar38 = fVar19 * (fVar32 * fVar15 - fVar45 * fVar39);
        fVar39 = (float)((uint)((fVar28 - (fVar32 * fVar18 + fVar45 * fVar22)) * fVar19) & uVar4);
        fVar18 = (float)((uint)((fVar29 - (fVar32 * fVar18 + fVar36)) * fVar23) & uVar5);
        fVar22 = (float)((uint)((fVar30 - (fVar45 * fVar22 + fVar36)) * fVar35) & uVar6);
        fVar25 = (float)((uint)((fVar31 - (fVar36 + fVar36)) * fVar25) & uVar7);
        fVar19 = *pfVar10;
        fVar23 = pfVar10[1];
        fVar15 = pfVar10[2];
        fVar35 = pfVar10[3];
        fVar45 = fVar23 + fVar23;
        fVar32 = fVar15 + fVar15;
        fVar36 = (fVar19 + fVar19) * fVar19;
        fVar27 = (fVar19 + fVar19) * fVar35;
        fVar44 = (fVar32 * fVar35 + fVar45 * fVar19) * fVar55;
        fVar46 = (fVar27 + fVar32 * fVar23) * fVar20;
        fVar47 = (fVar45 * fVar35 + fVar32 * fVar19) * fVar24;
        fVar34 = fVar20 * (fVar45 * fVar19 - fVar32 * fVar35);
        fVar27 = fVar24 * (fVar32 * fVar23 - fVar27);
        fVar43 = fVar55 * (fVar32 * fVar19 - fVar45 * fVar35);
        fVar35 = (float)((uint)((fVar28 - (fVar32 * fVar15 + fVar45 * fVar23)) * fVar55) & uVar4);
        fVar20 = (float)((uint)((fVar29 - (fVar32 * fVar15 + fVar36)) * fVar20) & uVar5);
        fVar15 = (float)((uint)((fVar30 - (fVar45 * fVar23 + fVar36)) * fVar24) & uVar6);
        fVar24 = (float)((uint)((fVar31 - (fVar36 + fVar36)) * fVar26) & uVar7);
        fVar19 = pfVar10[4];
        fVar55 = pfVar10[5];
        fVar23 = pfVar10[6];
        local_f8 = fVar44 * fVar33 + fVar35 * fVar39 + fVar43 * fVar50 + fVar24 * fVar14;
        fStack_f4 = fVar44 * fVar18 + fVar35 * fVar48 + fVar43 * fVar37 + fVar24 * fVar16;
        fStack_f0 = fVar44 * fVar49 + fVar35 * fVar38 + fVar43 * fVar22 + fVar24 * fVar21;
        fStack_ec = fVar44 * fVar25 + fVar35 * fVar25 + fVar43 * fVar25 + fVar24 * fVar31;
        local_e8 = fVar20 * fVar33 + fVar34 * fVar39 + fVar46 * fVar50 + fVar24 * fVar14;
        fStack_e4 = fVar20 * fVar18 + fVar34 * fVar48 + fVar46 * fVar37 + fVar24 * fVar16;
        fStack_e0 = fVar20 * fVar49 + fVar34 * fVar38 + fVar46 * fVar22 + fVar24 * fVar21;
        fStack_dc = fVar20 * fVar25 + fVar34 * fVar25 + fVar46 * fVar25 + fVar24 * fVar31;
        local_d8 = fVar27 * fVar33 + fVar47 * fVar39 + fVar15 * fVar50 + fVar24 * fVar14;
        fStack_d4 = fVar27 * fVar18 + fVar47 * fVar48 + fVar15 * fVar37 + fVar24 * fVar16;
        fStack_d0 = fVar27 * fVar49 + fVar47 * fVar38 + fVar15 * fVar22 + fVar24 * fVar21;
        fStack_cc = fVar27 * fVar25 + fVar47 * fVar25 + fVar15 * fVar25 + fVar24 * fVar31;
        local_c8 = fVar55 * fVar33 + fVar19 * fVar39 + fVar23 * fVar50 + fVar31 * fVar14;
        fStack_c4 = fVar55 * fVar18 + fVar19 * fVar48 + fVar23 * fVar37 + fVar31 * fVar16;
        fStack_c0 = fVar55 * fVar49 + fVar19 * fVar38 + fVar23 * fVar22 + fVar31 * fVar21;
        fStack_bc = fVar55 * fVar25 + fVar19 * fVar25 + fVar23 * fVar25 + fVar31 * fVar31;
        FMatrix::RemoveScaling(&local_f8);
        fVar19 = (float)((_DAT_146af0ce0 ^ (uint)fVar28) & -(uint)(fVar40 <= fVar51) ^
                        _DAT_146af0ce0);
        fVar55 = (float)((uRam0000000146af0ce4 ^ (uint)fVar29) & -(uint)(fVar41 <= fVar52) ^
                        uRam0000000146af0ce4);
        fVar23 = (float)((uRam0000000146af0ce8 ^ (uint)fVar30) & -(uint)(fVar42 <= fVar53) ^
                        uRam0000000146af0ce8);
        local_f8 = local_f8 * fVar19;
        fStack_f4 = fStack_f4 * fVar19;
        fStack_f0 = fStack_f0 * fVar19;
        fStack_e0 = fStack_e0 * fVar55;
        fStack_e4 = fStack_e4 * fVar55;
        local_e8 = local_e8 * fVar55;
        fStack_d0 = fStack_d0 * fVar23;
        local_d8 = local_d8 * fVar23;
        fStack_d4 = fStack_d4 * fVar23;
LAB_1423ad850:
        FQuat::FQuat(&local_108,&local_f8);
        fVar20 = fRam0000000146af0cdc;
        fVar23 = fRam0000000146af0cd8;
        fVar55 = fRam0000000146af0cd4;
        fVar19 = _DAT_146af0cd0;
        param_2[8] = fVar51;
        param_2[9] = fVar52;
        param_2[10] = fVar53;
        param_2[0xb] = fVar54;
        auVar17._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
        auVar17._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
        auVar17._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
        auVar17._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
        fVar40 = auVar17._4_4_ + auVar17._0_4_;
        fVar41 = auVar17._8_4_ + auVar17._4_4_;
        fVar42 = auVar17._12_4_ + auVar17._8_4_;
        fVar15 = auVar17._0_4_ + auVar17._12_4_;
        auVar2._4_4_ = fVar41;
        auVar2._0_4_ = fVar40;
        auVar2._8_4_ = fVar42;
        auVar2._12_4_ = fVar15;
        auVar11 = rsqrtps(auVar17,auVar2);
        fVar28 = auVar11._0_4_;
        fVar29 = auVar11._4_4_;
        fVar30 = auVar11._8_4_;
        fVar31 = auVar11._12_4_;
        fVar28 = (fVar19 - fVar28 * fVar28 * fVar40 * fVar19) * fVar28 + fVar28;
        fVar29 = (fVar55 - fVar29 * fVar29 * fVar41 * fVar55) * fVar29 + fVar29;
        fVar30 = (fVar23 - fVar30 * fVar30 * fVar42 * fVar23) * fVar30 + fVar30;
        fVar31 = (fVar20 - fVar31 * fVar31 * fVar15 * fVar20) * fVar31 + fVar31;
        auVar11._4_4_ = fStack_c4;
        auVar11._0_4_ = local_c8;
        auVar11._8_4_ = fStack_c0;
        fVar19 = (float)(((uint)(((fVar19 - fVar28 * fVar28 * fVar40 * fVar19) * fVar28 + fVar28) *
                                local_108) ^ _DAT_146af0cc0) & -(uint)(1e-08 <= fVar40) ^
                        _DAT_146af0cc0);
        fVar55 = (float)(((uint)(((fVar55 - fVar29 * fVar29 * fVar41 * fVar55) * fVar29 + fVar29) *
                                fStack_104) ^ uRam0000000146af0cc4) & -(uint)(1e-08 <= fVar41) ^
                        uRam0000000146af0cc4);
        fVar23 = (float)(((uint)(((fVar23 - fVar30 * fVar30 * fVar42 * fVar23) * fVar30 + fVar30) *
                                fStack_100) ^ uRam0000000146af0cc8) & -(uint)(1e-08 <= fVar42) ^
                        uRam0000000146af0cc8);
        fVar20 = (float)(((uint)(((fVar20 - fVar31 * fVar31 * fVar15 * fVar20) * fVar31 + fVar31) *
                                fStack_fc) ^ uRam0000000146af0ccc) & -(uint)(1e-08 <= fVar15) ^
                        uRam0000000146af0ccc);
        auVar11._12_4_ = 0;
        *(undefined1 (*) [16])(param_2 + 4) = auVar11;
        *param_2 = fVar19;
        param_2[1] = fVar55;
        param_2[2] = fVar23;
        param_2[3] = fVar20;
        return param_2;
      }
      fVar28 = *param_4;
      fVar29 = param_4[1];
      fVar30 = param_4[2];
      fVar31 = param_4[3];
      fVar40 = *pfVar10;
      fVar41 = pfVar10[1];
      fVar42 = pfVar10[2];
      fVar15 = pfVar10[3];
      fVar37 = pfVar10[4] * fVar19;
      fVar38 = pfVar10[5] * fVar23;
      fVar43 = pfVar10[6] * fVar35;
      fVar44 = pfVar10[7] * fVar25;
      fVar32 = fVar15 * fVar28 * _DAT_146af0cb0;
      fVar36 = fVar42 * fVar28 * fRam0000000146af0cb4;
      fVar33 = fVar41 * fVar28 * fRam0000000146af0cb8;
      fVar34 = fVar40 * fVar28 * fRam0000000146af0cbc;
      fVar16 = fVar29 * fVar42 * _DAT_146af0ca0;
      fVar21 = fVar29 * fVar15 * fRam0000000146af0ca4;
      fVar45 = fVar29 * fVar40 * fRam0000000146af0ca8;
      fVar27 = fVar29 * fVar41 * fRam0000000146af0cac;
      fVar22 = fVar30 * fVar41 * _DAT_146af0c90;
      fVar18 = fVar30 * fVar40 * fRam0000000146af0c94;
      fVar39 = fVar30 * fVar15 * fRam0000000146af0c98;
      fVar14 = fVar30 * fVar42 * fRam0000000146af0c9c;
      param_2[8] = fVar19 * fVar55;
      param_2[9] = fVar23 * fVar20;
      param_2[10] = fVar35 * fVar24;
      param_2[0xb] = fVar25 * fVar26;
      *param_2 = fVar32 + fVar40 * fVar31 + fVar16 + fVar22;
      param_2[1] = fVar36 + fVar41 * fVar31 + fVar21 + fVar18;
      param_2[2] = fVar33 + fVar42 * fVar31 + fVar45 + fVar39;
      param_2[3] = fVar34 + fVar15 * fVar31 + fVar27 + fVar14;
      fVar23 = fVar43 * fVar29 - fVar38 * fVar30;
      fVar20 = fVar37 * fVar30 - fVar43 * fVar28;
      fVar40 = fVar38 * fVar28 - fVar37 * fVar29;
      fVar41 = fVar44 * fVar31 - fVar44 * fVar31;
      fVar23 = fVar23 + fVar23;
      fVar20 = fVar20 + fVar20;
      fVar40 = fVar40 + fVar40;
      fVar41 = fVar41 + fVar41;
      fVar19 = (fVar40 * fVar29 - fVar20 * fVar30) + fVar23 * fVar31 + fVar37 + param_4[4];
      fVar55 = (fVar23 * fVar30 - fVar40 * fVar28) + fVar20 * fVar31 + fVar38 + param_4[5];
      fVar23 = (fVar20 * fVar28 - fVar23 * fVar29) + fVar40 * fVar31 + fVar43 + param_4[6];
      fVar20 = (fVar41 * fVar31 - fVar41 * fVar31) + fVar41 * fVar31 + fVar44 + param_4[7];
      goto LAB_1423ad9fe;
    }
  }
  else if (((*(byte *)(lVar9 + 0xb8) & 1) != 0) && (param_3 < *(int *)(param_1 + 0x790))) {
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x788) + (longlong)param_3 * 4);
    if (iVar8 != -1) {
      lVar1 = (longlong)*(int *)(lVar9 + 0x770) + 0x73;
      if (iVar8 < *(int *)(lVar9 + lVar1 * 0x10)) {
        auVar11 = *(undefined1 (*) [16])(param_4 + 8);
        fVar19 = auVar11._0_4_;
        fVar23 = auVar11._4_4_;
        fVar35 = auVar11._8_4_;
        fVar25 = auVar11._12_4_;
        pfVar10 = (float *)((longlong)iVar8 * 0x30 +
                           *(longlong *)(lVar9 + 0x728 + (longlong)*(int *)(lVar9 + 0x770) * 0x10));
        *param_2 = 0.0;
        param_2[1] = 0.0;
        param_2[2] = 0.0;
        param_2[3] = fVar31;
        param_2[4] = 0.0;
        param_2[5] = 0.0;
        param_2[6] = 0.0;
        param_2[7] = 0.0;
        param_2[8] = (float)((uint)fVar28 & uVar4);
        param_2[9] = (float)((uint)fVar29 & uVar5);
        param_2[10] = (float)((uint)fVar30 & uVar6);
        param_2[0xb] = (float)((uint)fVar31 & uVar7);
        auVar13 = *(undefined1 (*) [16])(pfVar10 + 8);
        fVar55 = auVar13._0_4_;
        fVar20 = auVar13._4_4_;
        fVar24 = auVar13._8_4_;
        fVar26 = auVar13._12_4_;
        auVar11 = minps(auVar13,auVar11);
        auVar12._4_4_ = -(uint)(auVar11._4_4_ < fVar41);
        auVar12._0_4_ = -(uint)(auVar11._0_4_ < fVar40);
        auVar12._8_4_ = -(uint)(auVar11._8_4_ < fVar42);
        auVar12._12_4_ = -(uint)(auVar11._12_4_ < fVar15);
        iVar8 = movmskps((int)lVar1 * 2,auVar12);
        if (iVar8 != 0) {
          fVar15 = *param_4;
          fVar22 = param_4[1];
          fVar18 = param_4[2];
          fVar39 = param_4[3];
          fVar14 = param_4[4];
          fVar16 = param_4[5];
          fVar21 = param_4[6];
          fVar33 = fVar22 + fVar22;
          fVar37 = fVar18 + fVar18;
          fVar51 = fVar19 * fVar55;
          fVar52 = fVar23 * fVar20;
          fVar53 = fVar35 * fVar24;
          fVar54 = fVar25 * fVar26;
          fVar38 = fVar15 * (fVar15 + fVar15);
          fVar34 = (fVar15 + fVar15) * fVar39;
          fVar45 = *pfVar10;
          fVar27 = pfVar10[1];
          fVar32 = pfVar10[2];
          fVar36 = pfVar10[3];
          fVar48 = (fVar37 * fVar39 + fVar33 * fVar15) * fVar19;
          fVar49 = (fVar34 + fVar37 * fVar22) * fVar23;
          fVar50 = (fVar33 * fVar39 + fVar37 * fVar15) * fVar35;
          fVar43 = fVar23 * (fVar33 * fVar15 - fVar37 * fVar39);
          fVar34 = fVar35 * (fVar37 * fVar22 - fVar34);
          fVar44 = fVar19 * (fVar37 * fVar15 - fVar33 * fVar39);
          fVar15 = (float)((uint)((fVar28 - (fVar18 * fVar37 + fVar22 * fVar33)) * fVar19) & uVar4);
          fVar18 = (float)((uint)((fVar29 - (fVar18 * fVar37 + fVar38)) * fVar23) & uVar5);
          fVar22 = (float)((uint)((fVar30 - (fVar22 * fVar33 + fVar38)) * fVar35) & uVar6);
          fVar25 = (float)((uint)((fVar31 - (fVar38 + fVar38)) * fVar25) & uVar7);
          fVar19 = fVar27 + fVar27;
          fVar23 = fVar32 + fVar32;
          fVar39 = fVar45 * (fVar45 + fVar45);
          fVar35 = fVar36 * (fVar45 + fVar45);
          fVar38 = (fVar36 * fVar23 + fVar45 * fVar19) * fVar55;
          fVar46 = (fVar35 + fVar27 * fVar23) * fVar20;
          fVar47 = (fVar36 * fVar19 + fVar45 * fVar23) * fVar24;
          fVar33 = fVar20 * (fVar45 * fVar19 - fVar36 * fVar23);
          fVar37 = fVar24 * (fVar27 * fVar23 - fVar35);
          fVar45 = fVar55 * (fVar45 * fVar23 - fVar36 * fVar19);
          fVar35 = (float)((uint)((fVar28 - (fVar32 * fVar23 + fVar27 * fVar19)) * fVar55) & uVar4);
          fVar20 = (float)((uint)((fVar29 - (fVar32 * fVar23 + fVar39)) * fVar20) & uVar5);
          fVar24 = (float)((uint)((fVar30 - (fVar27 * fVar19 + fVar39)) * fVar24) & uVar6);
          fVar26 = (float)((uint)((fVar31 - (fVar39 + fVar39)) * fVar26) & uVar7);
          fVar19 = pfVar10[4];
          fVar55 = pfVar10[5];
          fVar23 = pfVar10[6];
          local_f8 = fVar38 * fVar43 + fVar35 * fVar15 + fVar45 * fVar50 + fVar26 * fVar14;
          fStack_f4 = fVar38 * fVar18 + fVar35 * fVar48 + fVar45 * fVar34 + fVar26 * fVar16;
          fStack_f0 = fVar38 * fVar49 + fVar35 * fVar44 + fVar45 * fVar22 + fVar26 * fVar21;
          fStack_ec = fVar38 * fVar25 + fVar35 * fVar25 + fVar45 * fVar25 + fVar26 * fVar31;
          local_e8 = fVar20 * fVar43 + fVar33 * fVar15 + fVar46 * fVar50 + fVar26 * fVar14;
          fStack_e4 = fVar20 * fVar18 + fVar33 * fVar48 + fVar46 * fVar34 + fVar26 * fVar16;
          fStack_e0 = fVar20 * fVar49 + fVar33 * fVar44 + fVar46 * fVar22 + fVar26 * fVar21;
          fStack_dc = fVar20 * fVar25 + fVar33 * fVar25 + fVar46 * fVar25 + fVar26 * fVar31;
          local_d8 = fVar37 * fVar43 + fVar47 * fVar15 + fVar24 * fVar50 + fVar26 * fVar14;
          fStack_d4 = fVar37 * fVar18 + fVar47 * fVar48 + fVar24 * fVar34 + fVar26 * fVar16;
          fStack_d0 = fVar37 * fVar49 + fVar47 * fVar44 + fVar24 * fVar22 + fVar26 * fVar21;
          fStack_cc = fVar37 * fVar25 + fVar47 * fVar25 + fVar24 * fVar25 + fVar26 * fVar31;
          local_c8 = fVar55 * fVar43 + fVar19 * fVar15 + fVar23 * fVar50 + fVar31 * fVar14;
          fStack_c4 = fVar55 * fVar18 + fVar19 * fVar48 + fVar23 * fVar34 + fVar31 * fVar16;
          fStack_c0 = fVar55 * fVar49 + fVar19 * fVar44 + fVar23 * fVar22 + fVar31 * fVar21;
          fStack_bc = fVar55 * fVar25 + fVar19 * fVar25 + fVar23 * fVar25 + fVar31 * fVar31;
          FMatrix::RemoveScaling(&local_f8);
          fVar19 = (float)(-(uint)(fVar40 <= fVar51) & (_DAT_146af0ce0 ^ (uint)fVar28) ^
                          _DAT_146af0ce0);
          fVar55 = (float)(-(uint)(fVar41 <= fVar52) & (uRam0000000146af0ce4 ^ (uint)fVar29) ^
                          uRam0000000146af0ce4);
          fVar23 = (float)(-(uint)(fVar42 <= fVar53) & (uRam0000000146af0ce8 ^ (uint)fVar30) ^
                          uRam0000000146af0ce8);
          local_f8 = local_f8 * fVar19;
          fStack_f4 = fStack_f4 * fVar19;
          fStack_f0 = fStack_f0 * fVar19;
          fStack_e0 = fStack_e0 * fVar55;
          fStack_e4 = fStack_e4 * fVar55;
          local_e8 = local_e8 * fVar55;
          fStack_d0 = fStack_d0 * fVar23;
          local_d8 = local_d8 * fVar23;
          fStack_d4 = fStack_d4 * fVar23;
          goto LAB_1423ad850;
        }
        fVar28 = *param_4;
        fVar29 = param_4[1];
        fVar30 = param_4[2];
        fVar31 = param_4[3];
        fVar40 = *pfVar10;
        fVar41 = pfVar10[1];
        fVar42 = pfVar10[2];
        fVar15 = pfVar10[3];
        fVar37 = pfVar10[4] * fVar19;
        fVar38 = pfVar10[5] * fVar23;
        fVar43 = pfVar10[6] * fVar35;
        fVar44 = pfVar10[7] * fVar25;
        fVar32 = fVar15 * fVar28 * _DAT_146af0cb0;
        fVar36 = fVar42 * fVar28 * fRam0000000146af0cb4;
        fVar33 = fVar41 * fVar28 * fRam0000000146af0cb8;
        fVar34 = fVar40 * fVar28 * fRam0000000146af0cbc;
        fVar16 = fVar29 * fVar42 * _DAT_146af0ca0;
        fVar21 = fVar29 * fVar15 * fRam0000000146af0ca4;
        fVar45 = fVar29 * fVar40 * fRam0000000146af0ca8;
        fVar27 = fVar29 * fVar41 * fRam0000000146af0cac;
        fVar22 = fVar30 * fVar41 * _DAT_146af0c90;
        fVar18 = fVar30 * fVar40 * fRam0000000146af0c94;
        fVar39 = fVar30 * fVar15 * fRam0000000146af0c98;
        fVar14 = fVar30 * fVar42 * fRam0000000146af0c9c;
        param_2[8] = fVar55 * fVar19;
        param_2[9] = fVar20 * fVar23;
        param_2[10] = fVar24 * fVar35;
        param_2[0xb] = fVar26 * fVar25;
        *param_2 = fVar32 + fVar31 * fVar40 + fVar16 + fVar22;
        param_2[1] = fVar36 + fVar31 * fVar41 + fVar21 + fVar18;
        param_2[2] = fVar33 + fVar31 * fVar42 + fVar45 + fVar39;
        param_2[3] = fVar34 + fVar31 * fVar15 + fVar27 + fVar14;
        fVar23 = fVar43 * fVar29 - fVar38 * fVar30;
        fVar20 = fVar37 * fVar30 - fVar43 * fVar28;
        fVar40 = fVar38 * fVar28 - fVar37 * fVar29;
        fVar41 = fVar44 * fVar31 - fVar44 * fVar31;
        fVar23 = fVar23 + fVar23;
        fVar20 = fVar20 + fVar20;
        fVar40 = fVar40 + fVar40;
        fVar41 = fVar41 + fVar41;
        fVar19 = (fVar40 * fVar29 - fVar20 * fVar30) + fVar31 * fVar23 + fVar37 + param_4[4];
        fVar55 = (fVar23 * fVar30 - fVar40 * fVar28) + fVar31 * fVar20 + fVar38 + param_4[5];
        fVar23 = (fVar20 * fVar28 - fVar23 * fVar29) + fVar31 * fVar40 + fVar43 + param_4[6];
        fVar20 = (fVar41 * fVar31 - fVar41 * fVar31) + fVar31 * fVar41 + fVar44 + param_4[7];
        goto LAB_1423ad9fe;
      }
    }
  }
  *(undefined8 *)param_2 = _DAT_1468b5b70;
  *(undefined8 *)(param_2 + 2) = uVar3;
  uVar3 = uRam00000001468b5b98;
  *(undefined8 *)(param_2 + 8) = _DAT_1468b5b90;
  *(undefined8 *)(param_2 + 10) = uVar3;
LAB_1423ad9fe:
  param_2[4] = fVar19;
  param_2[5] = fVar55;
  param_2[6] = fVar23;
  param_2[7] = fVar20;
  return param_2;
}



// FUNCTION 1423ada60 GetRingInSouthFacingWestMove body=8 status=ok
// SIG undefined GetRingInSouthFacingWestMove(void)

undefined8 AWrestler_Code::GetRingInSouthFacingWestMove(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xce0);
}



// FUNCTION 1423adac0 FUN_1423adac0 body=335 status=ok
// SIG undefined FUN_1423adac0(void)

undefined8 * FUN_1423adac0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)operator_new(0x120);
  if (puVar8 != (undefined8 *)0x0) {
    FUN_14237e540(puVar8);
    *puVar8 = &PTR_FUN_14506d560;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[0xe] = 0;
    _guard_xfg_dispatch_icall_nop(puVar8 + 0x10,0,0x90);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x2d4);
  uVar5 = *(undefined4 *)(param_1 + 0x2d8);
  uVar6 = *(undefined4 *)(param_1 + 0x2dc);
  *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(param_1 + 0x2d0);
  *(undefined4 *)((longlong)puVar8 + 100) = uVar4;
  *(undefined4 *)(puVar8 + 0xd) = uVar5;
  *(undefined4 *)((longlong)puVar8 + 0x6c) = uVar6;
  lVar2 = *(longlong *)(param_1 + 0x348);
  lVar3 = puVar8[0xe];
  puVar8[0xe] = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x88) = *(int *)(lVar2 + 0x88) + 1;
  }
  if (lVar3 != 0) {
    piVar1 = (int *)(lVar3 + 0x88);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_141edf360(lVar3);
      BeginCleanup(lVar3 + 0x68);
    }
  }
  FRenderCommandFence::Wait(param_1 + 0x498,0);
  uVar7 = *(undefined8 *)(param_1 + 0x358);
  puVar8[0x10] = *(undefined8 *)(param_1 + 0x350);
  puVar8[0x11] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x368);
  puVar8[0x12] = *(undefined8 *)(param_1 + 0x360);
  puVar8[0x13] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x378);
  puVar8[0x14] = *(undefined8 *)(param_1 + 0x370);
  puVar8[0x15] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x388);
  puVar8[0x16] = *(undefined8 *)(param_1 + 0x380);
  puVar8[0x17] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x398);
  puVar8[0x18] = *(undefined8 *)(param_1 + 0x390);
  puVar8[0x19] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x3a8);
  puVar8[0x1a] = *(undefined8 *)(param_1 + 0x3a0);
  puVar8[0x1b] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x3b8);
  puVar8[0x1c] = *(undefined8 *)(param_1 + 0x3b0);
  puVar8[0x1d] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x3c8);
  puVar8[0x1e] = *(undefined8 *)(param_1 + 0x3c0);
  puVar8[0x1f] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x3d8);
  puVar8[0x20] = *(undefined8 *)(param_1 + 0x3d0);
  puVar8[0x21] = uVar7;
  *(undefined4 *)(puVar8 + 0x22) = *(undefined4 *)(param_1 + 0x3e0);
  return puVar8;
}



// FUNCTION 1423adc10 FUN_1423adc10 body=359 status=ok
// SIG undefined FUN_1423adc10(void)

undefined8 * FUN_1423adc10(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14237e540(puVar1,param_1);
    *puVar1 = &PTR_FUN_14506e090;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *(undefined1 *)(puVar1 + 0xe) = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    *(undefined1 *)(puVar1 + 0x11) = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    *(undefined1 *)(puVar1 + 0x14) = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    *(undefined1 *)(puVar1 + 0x17) = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined1 *)(puVar1 + 0x1a) = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined1 *)(puVar1 + 0x1d) = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    *(undefined1 *)(puVar1 + 0x20) = 0;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    *(undefined1 *)(puVar1 + 0x23) = 0;
  }
  if (*(char *)(param_1 + 0x7bd) == '\0') {
    *(undefined1 *)(puVar1 + 0x24) = 0;
    return puVar1;
  }
  FInterpCurveVector::operator=(puVar1 + 0xc,param_1 + 0x6f0);
  FInterpCurveQuat::operator=(puVar1 + 0xf,param_1 + 0x708);
  FInterpCurveVector::operator=(puVar1 + 0x12,param_1 + 0x720);
  FInterpCurveFloat::operator=(puVar1 + 0x15,param_1 + 0x738);
  *(undefined1 *)(puVar1 + 0x24) = *(undefined1 *)(param_1 + 0x7bd);
  return puVar1;
}



// FUNCTION 1423add80 FUN_1423add80 body=46 status=ok
// SIG undefined FUN_1423add80(void)

void FUN_1423add80(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1427eb040(param_2,param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x718) + 0x40),param_3,0);
  return;
}



// FUNCTION 1423addb0 FUN_1423addb0 body=210 status=ok
// SIG undefined FUN_1423addb0(void)

float * FUN_1423addb0(longlong param_1,float *param_2,int param_3)

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
  
  if (param_3 == 1) {
    fVar1 = *(float *)(param_1 + 0x210);
    fVar2 = *(float *)(param_1 + 0x214);
    fVar3 = *(float *)(param_1 + 0x218);
    fVar4 = *(float *)(param_1 + 0x21c);
    fVar8 = *(float *)(param_1 + 0x7c8) * *(float *)(param_1 + 0x230);
    fVar9 = *(float *)(param_1 + 0x7cc) * *(float *)(param_1 + 0x234);
    fVar10 = *(float *)(param_1 + 2000) * *(float *)(param_1 + 0x238);
    fVar5 = fVar10 * fVar2 - fVar9 * fVar3;
    fVar6 = fVar8 * fVar3 - fVar10 * fVar1;
    fVar7 = fVar9 * fVar1 - fVar8 * fVar2;
    fVar5 = fVar5 + fVar5;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    *param_2 = (fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5 + fVar8;
    param_2[2] = (fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7 + fVar10;
    param_2[1] = (fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6 + fVar9;
    return param_2;
  }
  *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x7c8);
  param_2[2] = *(float *)(param_1 + 2000);
  return param_2;
}



// FUNCTION 1423ade90 FUN_1423ade90 body=215 status=ok
// SIG undefined FUN_1423ade90(void)

longlong * FUN_1423ade90(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar2 = *(longlong **)(param_1 + 0x718);
  if (plVar2 == (longlong *)0x0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x10);
    iVar1 = (int)param_2[1] + 0x10;
    *(int *)(param_2 + 1) = iVar1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    builtin_wcsncpy((wchar_t *)*param_2,L"No_SkeletalMesh",0x10);
  }
  else {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2,local_18);
    if (param_2 != plVar2) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = *plVar2;
      *plVar2 = 0;
      *(int *)(param_2 + 1) = (int)plVar2[1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
      plVar2[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1423adf70 FUN_1423adf70 body=89 status=ok
// SIG undefined FUN_1423adf70(void)

undefined8 FUN_1423adf70(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  uVar1 = FInterpCurve<float>::Eval(param_1 + 0x738,param_3,local_res8);
  FUN_1423adfd0(param_1,param_2,uVar1,param_4);
  return param_2;
}



// FUNCTION 1423adfd0 FUN_1423adfd0 body=474 status=ok
// SIG undefined FUN_1423adfd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1423adfd0(longlong param_1,float *param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 local_48 [64];
  
  pfVar6 = (float *)FInterpCurve<FVector>::EvalDerivative
                              (param_1 + 0x6f0,local_48,param_3,&DAT_1468b5d90);
  fVar11 = DAT_1468b5d98;
  fVar1 = pfVar6[1];
  fVar2 = *pfVar6;
  fVar3 = pfVar6[2];
  fVar7 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  if (fVar7 == 1.0) {
    fVar1 = pfVar6[2];
    *(undefined8 *)param_2 = *(undefined8 *)pfVar6;
    param_2[2] = fVar1;
  }
  else if (1e-08 <= fVar7) {
    auVar12 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar11 = auVar12._0_4_;
    fVar11 = fVar11 + fVar11 * (0.5 - fVar7 * 0.5 * fVar11 * fVar11);
    fVar11 = fVar11 + fVar11 * (0.5 - fVar7 * 0.5 * fVar11 * fVar11);
    *param_2 = fVar2 * fVar11;
    param_2[1] = fVar1 * fVar11;
    param_2[2] = fVar3 * fVar11;
  }
  else {
    *(undefined8 *)param_2 = _DAT_1468b5d90;
    param_2[2] = fVar11;
  }
  if (param_4 == 1) {
    fVar11 = *(float *)(param_1 + 0x210);
    fVar7 = *(float *)(param_1 + 0x214);
    fVar4 = *(float *)(param_1 + 0x218);
    fVar5 = *(float *)(param_1 + 0x21c);
    fVar1 = param_2[2];
    fVar2 = param_2[1];
    fVar3 = *param_2;
    fVar8 = fVar1 * fVar7 - fVar2 * fVar4;
    fVar9 = fVar3 * fVar4 - fVar1 * fVar11;
    fVar10 = fVar2 * fVar11 - fVar3 * fVar7;
    fVar8 = fVar8 + fVar8;
    fVar9 = fVar9 + fVar9;
    fVar10 = fVar10 + fVar10;
    *(ulonglong *)param_2 =
         CONCAT44((fVar8 * fVar4 - fVar10 * fVar11) + fVar5 * fVar9 + fVar2,
                  (fVar10 * fVar7 - fVar9 * fVar4) + fVar5 * fVar8 + fVar3);
    param_2[2] = (fVar9 * fVar11 - fVar8 * fVar7) + fVar5 * fVar10 + fVar1;
  }
  return param_2;
}



// FUNCTION 1423ae1b0 FUN_1423ae1b0 body=584 status=ok
// SIG undefined FUN_1423ae1b0(void)

undefined8 * FUN_1423ae1b0(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  
  puVar8 = &local_58;
  iVar4 = *(int *)(param_1 + 0x6f8);
  if (iVar4 < 1) {
    puVar9 = &DAT_146531e60;
  }
  else if ((*(char *)(param_1 + 0x7c1) == '\0') || (param_3 < iVar4)) {
    if (param_3 < 0) {
      puVar9 = *(undefined **)(param_1 + 0x6f0);
    }
    else {
      iVar7 = iVar4 + -1;
      if (param_3 < iVar4 + -1) {
        iVar7 = param_3;
      }
      puVar9 = (undefined *)((longlong)iVar7 * 0x2c + *(longlong *)(param_1 + 0x6f0));
    }
  }
  else {
    puVar9 = *(undefined **)(param_1 + 0x6f0);
  }
  fVar1 = *(float *)(puVar9 + 0x20);
  fVar2 = *(float *)(puVar9 + 0x1c);
  fVar3 = *(float *)(puVar9 + 0x24);
  fVar10 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  if (fVar10 == 1.0) {
    local_58 = *(undefined8 *)(puVar9 + 0x1c);
    local_50 = *(float *)(puVar9 + 0x24);
    fVar16 = (float)((ulonglong)local_58 >> 0x20);
    uVar6 = local_58;
    fVar15 = (float)local_58;
    local_58 = uVar6;
  }
  else {
    fVar16 = DAT_1468b5d94;
    local_50 = DAT_1468b5d98;
    fVar15 = DAT_1468b5d90;
    if (1e-08 <= fVar10) {
      auVar14 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar15 = auVar14._0_4_;
      fVar15 = fVar15 + fVar15 * (0.5 - fVar10 * 0.5 * fVar15 * fVar15);
      fVar15 = fVar15 + fVar15 * (0.5 - fVar10 * 0.5 * fVar15 * fVar15);
      fVar16 = fVar1 * fVar15;
      local_50 = fVar3 * fVar15;
      fVar15 = fVar2 * fVar15;
    }
    local_58 = CONCAT44(fVar16,fVar15);
  }
  if (param_4 == 1) {
    fVar1 = *(float *)(param_1 + 0x210);
    fVar2 = *(float *)(param_1 + 0x214);
    fVar3 = *(float *)(param_1 + 0x218);
    fVar10 = *(float *)(param_1 + 0x21c);
    fVar15 = fVar15 * *(float *)(param_1 + 0x230);
    fVar16 = fVar16 * *(float *)(param_1 + 0x234);
    local_50 = local_50 * *(float *)(param_1 + 0x238);
    fVar11 = local_50 * fVar2 - fVar16 * fVar3;
    fVar12 = fVar15 * fVar3 - local_50 * fVar1;
    fVar13 = fVar16 * fVar1 - fVar15 * fVar2;
    fVar11 = fVar11 + fVar11;
    fVar12 = fVar12 + fVar12;
    fVar13 = fVar13 + fVar13;
    local_50 = (fVar12 * fVar1 - fVar11 * fVar2) + fVar10 * fVar13 + local_50;
    local_58 = CONCAT44((fVar11 * fVar3 - fVar13 * fVar1) + fVar10 * fVar12 + fVar16,
                        (fVar13 * fVar2 - fVar12 * fVar3) + fVar10 * fVar11 + fVar15);
  }
  else {
    local_40 = local_50;
    puVar8 = &local_48;
    local_48 = local_58;
  }
  uVar5 = *(undefined4 *)(puVar8 + 1);
  *param_2 = *puVar8;
  *(undefined4 *)(param_2 + 1) = uVar5;
  return param_2;
}



// FUNCTION 1423ae400 FUN_1423ae400 body=231 status=ok
// SIG undefined FUN_1423ae400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1423ae400(longlong param_1,undefined8 *param_2,float param_3,undefined8 param_4,char param_5)

{
  float fVar1;
  undefined4 local_res8 [2];
  
  fVar1 = 0.0;
  if (*(float *)(param_1 + 0x7b8) == 0.0) {
    *param_2 = _DAT_1468b5d90;
    *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
    return param_2;
  }
  if (param_5 != '\0') {
    if (0 < *(int *)(param_1 + 0x740)) {
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x738) + -0x14 +
                        (longlong)*(int *)(param_1 + 0x740) * 0x14);
    }
    local_res8[0] = 0;
    FInterpCurve<float>::Eval
              (param_1 + 0x738,(param_3 / *(float *)(param_1 + 0x7b8)) * fVar1,local_res8);
  }
  FUN_1423adfd0(param_1,param_2);
  return param_2;
}



// FUNCTION 1423ae4f0 IsBlueOrbVisible body=8 status=ok
// SIG undefined IsBlueOrbVisible(void)

undefined1 ASophiaCharacter::IsBlueOrbVisible(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xa68);
}



// FUNCTION 1423ae500 FUN_1423ae500 body=181 status=ok
// SIG undefined FUN_1423ae500(void)

float FUN_1423ae500(longlong param_1,float param_2)

{
  uint uVar1;
  float *pfVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x740);
  if ((int)uVar1 < 1) {
    return 0.0;
  }
  uVar3 = 0;
  uVar5 = 0;
  if (0 < (int)uVar1) {
    pfVar2 = (float *)(*(longlong *)(param_1 + 0x738) + 4);
    uVar6 = uVar3;
    do {
      uVar5 = (uint)uVar6;
      if (param_2 < *pfVar2) break;
      uVar5 = uVar5 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar3 = uVar3 + 1;
      pfVar2 = pfVar2 + 5;
    } while ((longlong)uVar3 < (longlong)(int)uVar1);
  }
  if (uVar5 == uVar1) {
    return *(float *)(*(longlong *)(param_1 + 0x738) + -0x14 +
                     (longlong)*(int *)(param_1 + 0x740) * 0x14);
  }
  pfVar2 = *(float **)(param_1 + 0x738);
  if ((int)uVar5 < 1) {
    return *pfVar2;
  }
  lVar4 = (longlong)(int)uVar5;
  return ((param_2 - pfVar2[lVar4 * 5 + -4]) / (pfVar2[lVar4 * 5 + 1] - pfVar2[lVar4 * 5 + -4])) *
         (pfVar2[lVar4 * 5] - pfVar2[lVar4 * 5 + -5]) + pfVar2[lVar4 * 5 + -5];
}



// FUNCTION 1423ae5c0 FUN_1423ae5c0 body=69 status=ok
// SIG undefined FUN_1423ae5c0(void)

undefined4 FUN_1423ae5c0(longlong param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    iVar1 = *(int *)(param_1 + 0x6f8);
    if (*(char *)(param_1 + 0x7c1) == '\0') {
      iVar1 = *(int *)(param_1 + 0x6f8) + -1;
    }
    if (param_2 < iVar1 + 1) {
      return *(undefined4 *)
              (*(longlong *)(param_1 + 0x738) +
              (longlong)(*(int *)(param_1 + 0x7b4) * param_2) * 0x14);
    }
  }
  return 0;
}



// FUNCTION 1423ae610 FUN_1423ae610 body=1212 status=ok
// SIG undefined FUN_1423ae610(void)

void FUN_1423ae610(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 *in_stack_fffffffffffffe58;
  uint in_stack_fffffffffffffe60;
  uint in_stack_fffffffffffffe68;
  float local_168;
  float local_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [12];
  undefined1 local_e4 [12];
  undefined1 local_d8 [160];
  
  iVar12 = 0;
  if (0 < (int)param_2[1]) {
    uVar10 = 1;
    lVar11 = 0;
    do {
      if ((param_4 & uVar10) != 0) {
        pfVar8 = (float *)(param_1 + 0x80);
        lVar4 = *(longlong *)(lVar11 + *param_2);
        lVar9 = *(longlong *)(param_5 + 0x88);
        if (*(longlong *)(param_5 + 0x88) == 0) {
          lVar9 = param_5 + 0x78;
        }
        uVar5 = *(undefined8 *)(lVar9 + lVar11);
        FLinearColor::FLinearColor(local_100,param_1 + 0x3a4);
        uVar6 = *(uint *)(param_1 + 0x18);
        in_stack_fffffffffffffe68 =
             CONCAT31((int3)(in_stack_fffffffffffffe68 >> 8),(char)(uVar6 >> 9)) & 0xffffff01;
        in_stack_fffffffffffffe60 = in_stack_fffffffffffffe60 & 0xffffff00;
        in_stack_fffffffffffffe58 =
             (undefined1 *)
             (CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe58 >> 8),(char)(uVar6 >> 10)) &
             0xffffffffffffff01);
        GetViewSelectionColor
                  (local_110,local_100,lVar4,(uVar6 & 0x300) != 0,in_stack_fffffffffffffe58,
                   in_stack_fffffffffffffe60,in_stack_fffffffffffffe68);
        fVar1 = *(float *)(param_1 + 0xb0);
        fVar2 = *(float *)(param_1 + 0xb4);
        fVar14 = *(float *)(lVar4 + 0x8dc) - fVar1;
        fVar3 = *(float *)(param_1 + 0xb8);
        fVar15 = *(float *)(lVar4 + 0x8e0) - fVar2;
        fVar13 = *(float *)(lVar4 + 0x8e4) - fVar3;
        fVar13 = fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13;
        if ((*(float *)(param_1 + 0x180) * *(float *)(param_1 + 0x180) <= fVar13) &&
           (fVar13 <= *(float *)(param_1 + 0x17c) * *(float *)(param_1 + 0x17c))) {
          fVar13 = SQRT(*(float *)(param_1 + 0x94) * *(float *)(param_1 + 0x94) +
                        *(float *)(param_1 + 0x90) * *(float *)(param_1 + 0x90) +
                        *(float *)(param_1 + 0x98) * *(float *)(param_1 + 0x98));
          fVar14 = SQRT(*(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x84) + *pfVar8 * *pfVar8
                        + *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x88));
          if (fVar14 <= fVar13) {
            fVar13 = fVar14;
          }
          fVar14 = SQRT(*(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0xa4) +
                        *(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0xa0) +
                        *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0xa8));
          if (fVar14 <= fVar13) {
            fVar13 = fVar14;
          }
          pfVar7 = (float *)FMatrix::GetUnitAxis(pfVar8,local_f0,1);
          local_160 = fVar13 * pfVar7[2];
          local_164 = fVar13 * pfVar7[1];
          local_168 = fVar13 * *pfVar7;
          pfVar7 = (float *)FMatrix::GetUnitAxis(pfVar8,local_e4,2);
          local_140 = fVar13 * pfVar7[2];
          local_144 = fVar13 * pfVar7[1];
          local_148 = fVar13 * *pfVar7;
          pfVar8 = (float *)FMatrix::GetUnitAxis(pfVar8,local_d8,3);
          local_154 = fVar13 * pfVar8[1];
          local_150 = fVar13 * pfVar8[2];
          local_158 = fVar13 * *pfVar8;
          uVar6 = (uint)(*(float *)(param_1 + 0x3a8) * 0.25);
          if ((int)uVar6 < 0x10) {
            in_stack_fffffffffffffe68 = 0x10;
          }
          else {
            in_stack_fffffffffffffe68 = 0x40;
            if ((int)uVar6 < 0x40) {
              in_stack_fffffffffffffe68 = uVar6;
            }
          }
          local_138 = fVar1;
          local_134 = fVar2;
          local_130 = fVar3;
          DrawCircle(uVar5,&local_138,&local_168,&local_148,local_110,*(float *)(param_1 + 0x3a8),
                     in_stack_fffffffffffffe68,0,0,0,0);
          local_12c = *(undefined4 *)(param_1 + 0xb0);
          local_128 = *(undefined4 *)(param_1 + 0xb4);
          local_124 = *(undefined4 *)(param_1 + 0xb8);
          DrawCircle(uVar5,&local_12c,&local_168,&local_158,local_110,
                     *(undefined4 *)(param_1 + 0x3a8),in_stack_fffffffffffffe68,0,0,0,0);
          local_120 = *(undefined4 *)(param_1 + 0xb0);
          in_stack_fffffffffffffe58 = local_110;
          local_11c = *(undefined4 *)(param_1 + 0xb4);
          local_118 = *(undefined4 *)(param_1 + 0xb8);
          in_stack_fffffffffffffe60 = *(uint *)(param_1 + 0x3a8);
          DrawCircle(uVar5,&local_120,&local_148,&local_158,in_stack_fffffffffffffe58,
                     in_stack_fffffffffffffe60,in_stack_fffffffffffffe68,0,0,0,0);
        }
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      lVar11 = lVar11 + 8;
    } while (iVar12 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1423aead0 FUN_1423aead0 body=111 status=ok
// SIG undefined FUN_1423aead0(void)

float FUN_1423aead0(longlong param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  undefined4 local_res8 [8];
  
  if (*(int *)(param_1 + 0x6f8) < 2) {
    return 0.0;
  }
  fVar2 = (float)*(int *)(param_1 + 0x6f8);
  if (*(char *)(param_1 + 0x7c1) == '\0') {
    fVar2 = fVar2 - 1.0;
  }
  local_res8[0] = 0;
  fVar1 = (float)FInterpCurve<float>::Eval(param_1 + 0x738,param_2,local_res8);
  return fVar1 * (*(float *)(param_1 + 0x7b8) / fVar2);
}



// FUNCTION 1423aeb40 GetInterpolationAlpha body=95 status=ok
// SIG undefined GetInterpolationAlpha(void)

float FAnimUpdateRateParameters::GetInterpolationAlpha(char *param_1)

{
  int iVar1;
  float fVar2;
  
  if (*param_1 == '\0') {
    iVar1 = 2;
    if (1 < *(int *)(param_1 + 8)) {
      iVar1 = *(int *)(param_1 + 8);
    }
    return 1.0 / (float)(iVar1 * 2) + 0.25;
  }
  if ((*param_1 == '\x01') &&
     (fVar2 = *(float *)(param_1 + 0x14) / (*(float *)(param_1 + 0x14) + *(float *)(param_1 + 0xc)),
     0.0 <= fVar2)) {
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    return fVar2;
  }
  return 0.0;
}



// FUNCTION 1423aeba0 FUN_1423aeba0 body=313 status=ok
// SIG undefined FUN_1423aeba0(void)

undefined8 * FUN_1423aeba0(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_28;
  float local_20;
  
  iVar1 = *(int *)(param_1 + 0x6f8);
  if (iVar1 < 1) {
    puVar7 = &DAT_146531e60;
  }
  else if ((*(char *)(param_1 + 0x7c1) == '\0') || (param_3 < iVar1)) {
    if (param_3 < 0) {
      puVar7 = *(undefined **)(param_1 + 0x6f0);
    }
    else {
      iVar6 = iVar1 + -1;
      if (param_3 < iVar1 + -1) {
        iVar6 = param_3;
      }
      puVar7 = (undefined *)((longlong)iVar6 * 0x2c + *(longlong *)(param_1 + 0x6f0));
    }
  }
  else {
    puVar7 = *(undefined **)(param_1 + 0x6f0);
  }
  if (param_4 == 1) {
    fVar2 = *(float *)(param_1 + 0x210);
    fVar3 = *(float *)(param_1 + 0x214);
    fVar4 = *(float *)(param_1 + 0x218);
    fVar5 = *(float *)(param_1 + 0x21c);
    fVar11 = *(float *)(puVar7 + 0x1c) * *(float *)(param_1 + 0x230);
    fVar12 = *(float *)(puVar7 + 0x20) * *(float *)(param_1 + 0x234);
    fVar13 = *(float *)(puVar7 + 0x24) * *(float *)(param_1 + 0x238);
    fVar8 = fVar13 * fVar3 - fVar12 * fVar4;
    fVar9 = fVar11 * fVar4 - fVar13 * fVar2;
    fVar10 = fVar12 * fVar2 - fVar11 * fVar3;
    fVar8 = fVar8 + fVar8;
    fVar9 = fVar9 + fVar9;
    fVar10 = fVar10 + fVar10;
    local_20 = (fVar9 * fVar2 - fVar8 * fVar3) + fVar5 * fVar10 + fVar13;
    local_28 = CONCAT44((fVar8 * fVar4 - fVar10 * fVar2) + fVar5 * fVar9 + fVar12,
                        (fVar10 * fVar3 - fVar9 * fVar4) + fVar5 * fVar8 + fVar11);
  }
  else {
    local_28 = *(undefined8 *)(puVar7 + 0x1c);
    local_20 = *(float *)(puVar7 + 0x24);
  }
  *param_2 = local_28;
  *(float *)(param_2 + 1) = local_20;
  return param_2;
}



// FUNCTION 1423aece0 FUN_1423aece0 body=232 status=ok
// SIG undefined FUN_1423aece0(void)

void FUN_1423aece0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af1010) && (_Init_thread_header(&DAT_146af1010), DAT_146af1010 == -1))
  {
    uVar1 = AAfrPlayerState::GetPrivateStaticClass();
    AAfrPlayerState::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bEnabled",1);
    DAT_146af1008 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af1010);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146af1008 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146af1008 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af1008 + 0x30));
  }
  return;
}



// FUNCTION 1423aedd0 FUN_1423aedd0 body=189 status=ok
// SIG undefined FUN_1423aedd0(void)

void FUN_1423aedd0(longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined1 local_28 [32];
  
  iVar2 = *(int *)(param_1 + 0x710);
  if (iVar2 < 1) {
    puVar5 = &DAT_146af0f20;
  }
  else {
    if (((*(char *)(param_1 + 0x7c1) == '\0') || (param_2 < iVar2)) && (-1 < param_2)) {
      iVar3 = iVar2 + -1;
      if (param_2 < iVar2 + -1) {
        iVar3 = param_2;
      }
    }
    else {
      iVar3 = 0;
    }
    puVar5 = (undefined4 *)((longlong)iVar3 * 0x50 + *(longlong *)(param_1 + 0x708));
  }
  uVar1 = *puVar5;
  puVar4 = (undefined8 *)FUN_1423aeef0(param_1,local_28,uVar1,param_5);
  *param_3 = *puVar4;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar4 + 1);
  puVar4 = (undefined8 *)FUN_1423b14a0(param_1,local_28,uVar1,param_5);
  *param_4 = *puVar4;
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar4 + 1);
  return;
}



// FUNCTION 1423aee90 FUN_1423aee90 body=89 status=ok
// SIG undefined FUN_1423aee90(void)

undefined8 FUN_1423aee90(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  uVar1 = FInterpCurve<float>::Eval(param_1 + 0x738,param_3,local_res8);
  FUN_1423aeef0(param_1,param_2,uVar1,param_4);
  return param_2;
}



// FUNCTION 1423aeef0 FUN_1423aeef0 body=241 status=ok
// SIG undefined FUN_1423aeef0(void)

float * FUN_1423aeef0(longlong param_1,float *param_2,undefined4 param_3,int param_4)

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
  
  FInterpCurve<FVector>::Eval(param_1 + 0x6f0,param_2,param_3,&DAT_1468b5d90);
  if (param_4 == 1) {
    fVar1 = *(float *)(param_1 + 0x210);
    fVar2 = *(float *)(param_1 + 0x214);
    fVar3 = *(float *)(param_1 + 0x218);
    fVar4 = *(float *)(param_1 + 0x21c);
    fVar9 = *param_2 * *(float *)(param_1 + 0x230);
    fVar10 = param_2[1] * *(float *)(param_1 + 0x234);
    fVar11 = param_2[2] * *(float *)(param_1 + 0x238);
    fVar6 = fVar11 * fVar2 - fVar10 * fVar3;
    fVar7 = fVar9 * fVar3 - fVar11 * fVar1;
    fVar8 = fVar10 * fVar1 - fVar9 * fVar2;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    fVar8 = fVar8 + fVar8;
    fVar5 = *(float *)(param_1 + 0x228);
    *(ulonglong *)param_2 =
         CONCAT44((fVar6 * fVar3 - fVar8 * fVar1) + fVar4 * fVar7 + fVar10 +
                  *(float *)(param_1 + 0x224),
                  (fVar8 * fVar2 - fVar7 * fVar3) + fVar4 * fVar6 + fVar9 +
                  *(float *)(param_1 + 0x220));
    param_2[2] = (fVar7 * fVar1 - fVar6 * fVar2) + fVar4 * fVar8 + fVar11 + fVar5;
  }
  return param_2;
}



// FUNCTION 1423aeff0 FUN_1423aeff0 body=321 status=ok
// SIG undefined FUN_1423aeff0(void)

undefined8 * FUN_1423aeff0(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_28;
  float local_20;
  
  iVar1 = *(int *)(param_1 + 0x6f8);
  if (iVar1 < 1) {
    puVar7 = &DAT_146531e60;
  }
  else if ((*(char *)(param_1 + 0x7c1) == '\0') || (param_3 < iVar1)) {
    if (param_3 < 0) {
      puVar7 = *(undefined **)(param_1 + 0x6f0);
    }
    else {
      iVar6 = iVar1 + -1;
      if (param_3 < iVar1 + -1) {
        iVar6 = param_3;
      }
      puVar7 = (undefined *)((longlong)iVar6 * 0x2c + *(longlong *)(param_1 + 0x6f0));
    }
  }
  else {
    puVar7 = *(undefined **)(param_1 + 0x6f0);
  }
  if (param_4 == 1) {
    fVar2 = *(float *)(param_1 + 0x210);
    fVar3 = *(float *)(param_1 + 0x214);
    fVar4 = *(float *)(param_1 + 0x218);
    fVar5 = *(float *)(param_1 + 0x21c);
    fVar11 = *(float *)(puVar7 + 4) * *(float *)(param_1 + 0x230);
    fVar12 = *(float *)(puVar7 + 8) * *(float *)(param_1 + 0x234);
    fVar13 = *(float *)(puVar7 + 0xc) * *(float *)(param_1 + 0x238);
    fVar8 = fVar13 * fVar3 - fVar12 * fVar4;
    fVar9 = fVar11 * fVar4 - fVar13 * fVar2;
    fVar10 = fVar12 * fVar2 - fVar11 * fVar3;
    fVar8 = fVar8 + fVar8;
    fVar9 = fVar9 + fVar9;
    fVar10 = fVar10 + fVar10;
    local_20 = (fVar9 * fVar2 - fVar8 * fVar3) + fVar5 * fVar10 + fVar13 +
               *(float *)(param_1 + 0x228);
    local_28 = CONCAT44((fVar8 * fVar4 - fVar10 * fVar2) + fVar5 * fVar9 + fVar12 +
                        *(float *)(param_1 + 0x224),
                        (fVar10 * fVar3 - fVar9 * fVar4) + fVar5 * fVar8 + fVar11 +
                        *(float *)(param_1 + 0x220));
  }
  else {
    local_28 = *(undefined8 *)(puVar7 + 4);
    local_20 = *(float *)(puVar7 + 0xc);
  }
  *param_2 = local_28;
  *(float *)(param_2 + 1) = local_20;
  return param_2;
}



// FUNCTION 1423af140 FUN_1423af140 body=231 status=ok
// SIG undefined FUN_1423af140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1423af140(longlong param_1,undefined8 *param_2,float param_3,undefined8 param_4,char param_5)

{
  float fVar1;
  undefined4 local_res8 [2];
  
  fVar1 = 0.0;
  if (*(float *)(param_1 + 0x7b8) == 0.0) {
    *param_2 = _DAT_1468b5d90;
    *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
    return param_2;
  }
  if (param_5 != '\0') {
    if (0 < *(int *)(param_1 + 0x740)) {
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x738) + -0x14 +
                        (longlong)*(int *)(param_1 + 0x740) * 0x14);
    }
    local_res8[0] = 0;
    FInterpCurve<float>::Eval
              (param_1 + 0x738,(param_3 / *(float *)(param_1 + 0x7b8)) * fVar1,local_res8);
  }
  FUN_1423aeef0(param_1,param_2);
  return param_2;
}



// FUNCTION 1423af2e0 FUN_1423af2e0 body=156 status=ok
// SIG undefined FUN_1423af2e0(void)

longlong * FUN_1423af2e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = *(longlong *)(param_1 + 0x718);
  if ((lVar2 != 0) && (uVar5 = uVar4, 0 < *(int *)(lVar2 + 0xa8))) {
    do {
      iVar1 = (int)param_2[1];
      lVar2 = *(longlong *)(lVar2 + 0xa0);
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + 0x10 + uVar5);
      lVar2 = *(longlong *)(param_1 + 0x718);
      uVar5 = uVar5 + 0x30;
    } while ((int)uVar3 < *(int *)(lVar2 + 0xa8));
  }
  return param_2;
}



// FUNCTION 1423af380 FUN_1423af380 body=125 status=ok
// SIG undefined FUN_1423af380(void)

undefined8 FUN_1423af380(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  
  if (param_1[0xe3] != 0) {
    lVar1 = (**(code **)(*param_1 + 0x560))();
    *param_3 = lVar1;
    lVar1 = USkeletalMesh::GetUVChannelData(param_1[0xe3],param_2);
    param_3[1] = lVar1;
    *(undefined4 *)(param_3 + 2) = 0xffff0000;
  }
  if (((*param_3 != 0) && (param_3[1] != 0)) && ((int)param_3[2] != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1423af400 FUN_1423af400 body=156 status=ok
// SIG undefined FUN_1423af400(void)

undefined4 FUN_1423af400(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0xd58) != *(int *)(param_1 + 0xd84)) {
    lVar2 = *(longlong *)(param_1 + 0xd90);
    if (*(longlong *)(param_1 + 0xd90) == 0) {
      lVar2 = param_1 + 0xd88;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0xd98) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0xd50) + (longlong)iVar1 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0xd50) + (longlong)iVar1 * 0x18) == param_2) {
          if (iVar1 != -1) goto LAB_1423af483;
          break;
        }
        iVar1 = puVar4[4];
      } while (iVar1 != -1);
    }
  }
  puVar4 = (undefined4 *)0x0;
LAB_1423af483:
  puVar3 = puVar4 + 2;
  if (puVar4 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  return *puVar3;
}



// FUNCTION 1423af4d0 FUN_1423af4d0 body=20 status=ok
// SIG undefined FUN_1423af4d0(void)

undefined4 FUN_1423af4d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x718) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x718) + 0x160);
  }
  return 0;
}



// FUNCTION 1423af4f0 FUN_1423af4f0 body=40 status=ok
// SIG undefined FUN_1423af4f0(void)

undefined4 FUN_1423af4f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x888);
  if (((lVar1 != 0) || (lVar1 = *(longlong *)(param_1 + 0x718), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x40) != 0)) {
    return *(undefined4 *)(*(longlong *)(lVar1 + 0x40) + 8);
  }
  return 0;
}



// FUNCTION 1423af540 FUN_1423af540 body=82 status=ok
// SIG undefined FUN_1423af540(void)

undefined8 * FUN_1423af540(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  
  *param_2 = 0;
  iVar2 = FUN_1423ac950(param_1,param_3);
  if (0 < iVar2) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x158);
    *param_2 = *(undefined8 *)
                (lVar1 + (longlong)*(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10) * 0x10);
  }
  return param_2;
}



// FUNCTION 1423af5a0 FUN_1423af5a0 body=39 status=ok
// SIG undefined FUN_1423af5a0(void)

longlong FUN_1423af5a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x828);
  if ((lVar1 == 0) &&
     ((*(longlong *)(param_1 + 0x718) == 0 ||
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x100), lVar1 == 0)))) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1423af5d0 FUN_1423af5d0 body=94 status=ok
// SIG undefined FUN_1423af5d0(void)

undefined8 FUN_1423af5d0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xa48);
  if (lVar1 != 0) {
    lVar3 = FUN_1428f7290();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = FUN_1422ac6b0(lVar1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1423af630 FUN_1423af630 body=94 status=ok
// SIG undefined FUN_1423af630(void)

undefined8 FUN_1423af630(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xa48);
  if (lVar1 != 0) {
    lVar3 = FUN_1428f7290();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = FUN_1422aace0(lVar1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1423af690 GetClothingSimulationInteractor body=8 status=ok
// SIG undefined GetClothingSimulationInteractor(void)

undefined8 USkeletalMeshComponent::GetClothingSimulationInteractor(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xa60);
}



// FUNCTION 1423af6a0 FUN_1423af6a0 body=89 status=ok
// SIG undefined FUN_1423af6a0(void)

undefined8 FUN_1423af6a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  uVar1 = FInterpCurve<float>::Eval(param_1 + 0x738,param_3,local_res8);
  FUN_1423af700(param_1,param_2,uVar1,param_4);
  return param_2;
}



// FUNCTION 1423af700 FUN_1423af700 body=971 status=ok
// SIG undefined FUN_1423af700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1423af700(longlong param_1,float *param_2,undefined4 param_3,int param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 in_R8;
  float fVar5;
  float fVar6;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [176];
  
  FUN_141f794d0(param_1 + 0x708,&local_c8,in_R8,&DAT_1464aa810);
  auVar3._0_4_ = local_c8 * local_c8 + fStack_c0 * fStack_c0;
  auVar3._4_4_ = fStack_c4 * fStack_c4 + fStack_bc * fStack_bc;
  auVar3._8_4_ = fStack_c0 * fStack_c0 + local_c8 * local_c8;
  auVar3._12_4_ = fStack_bc * fStack_bc + fStack_c4 * fStack_c4;
  fVar15 = auVar3._4_4_ + auVar3._0_4_;
  fVar16 = auVar3._8_4_ + auVar3._4_4_;
  fVar18 = auVar3._12_4_ + auVar3._8_4_;
  fVar20 = auVar3._0_4_ + auVar3._12_4_;
  auVar4._4_4_ = fVar16;
  auVar4._0_4_ = fVar15;
  auVar4._8_4_ = fVar18;
  auVar4._12_4_ = fVar20;
  auVar4 = rsqrtps(auVar3,auVar4);
  fVar8 = auVar4._0_4_;
  fVar9 = auVar4._4_4_;
  fVar10 = auVar4._8_4_;
  fVar11 = auVar4._12_4_;
  fVar8 = (_DAT_146af0cd0 - fVar8 * fVar8 * _DAT_146af0cd0 * fVar15) * fVar8 + fVar8;
  fVar9 = (fRam0000000146af0cd4 - fVar9 * fVar9 * fRam0000000146af0cd4 * fVar16) * fVar9 + fVar9;
  fVar10 = (fRam0000000146af0cd8 - fVar10 * fVar10 * fRam0000000146af0cd8 * fVar18) * fVar10 +
           fVar10;
  fVar11 = (fRam0000000146af0cdc - fVar11 * fVar11 * fRam0000000146af0cdc * fVar20) * fVar11 +
           fVar11;
  local_c8 = (float)(((uint)(((_DAT_146af0cd0 - fVar8 * fVar8 * _DAT_146af0cd0 * fVar15) * fVar8 +
                             fVar8) * local_c8) ^ _DAT_146af0cc0) & -(uint)(1e-08 <= fVar15) ^
                    _DAT_146af0cc0);
  fStack_c4 = (float)(((uint)(((fRam0000000146af0cd4 - fVar9 * fVar9 * fRam0000000146af0cd4 * fVar16
                               ) * fVar9 + fVar9) * fStack_c4) ^ uRam0000000146af0cc4) &
                      -(uint)(1e-08 <= fVar16) ^ uRam0000000146af0cc4);
  fStack_c0 = (float)(((uint)(((fRam0000000146af0cd8 -
                               fVar10 * fVar10 * fRam0000000146af0cd8 * fVar18) * fVar10 + fVar10) *
                             fStack_c0) ^ uRam0000000146af0cc8) & -(uint)(1e-08 <= fVar18) ^
                     uRam0000000146af0cc8);
  fStack_bc = (float)(((uint)(((fRam0000000146af0cdc -
                               fVar11 * fVar11 * fRam0000000146af0cdc * fVar20) * fVar11 + fVar11) *
                             fStack_bc) ^ uRam0000000146af0ccc) & -(uint)(1e-08 <= fVar20) ^
                     uRam0000000146af0ccc);
  pfVar1 = (float *)FInterpCurve<FVector>::EvalDerivative
                              (param_1 + 0x6f0,&local_e8,param_3,&DAT_1468b5d90);
  fVar8 = pfVar1[1];
  fVar9 = *pfVar1;
  local_f0 = pfVar1[2];
  fVar10 = fVar9 * fVar9 + fVar8 * fVar8 + local_f0 * local_f0;
  if (fVar10 == 1.0) {
    local_f8 = *(undefined8 *)pfVar1;
    local_f0 = pfVar1[2];
  }
  else if (1e-08 <= fVar10) {
    auVar4 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
    fVar11 = auVar4._0_4_;
    fVar11 = fVar11 + fVar11 * (0.5 - fVar10 * 0.5 * fVar11 * fVar11);
    fVar11 = fVar11 + fVar11 * (0.5 - fVar10 * 0.5 * fVar11 * fVar11);
    local_f0 = local_f0 * fVar11;
    local_f8 = CONCAT44(fVar8 * fVar11,fVar9 * fVar11);
  }
  else {
    local_f0 = DAT_1468b5d98;
    local_f8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  local_e8 = *(undefined8 *)(param_1 + 0x7c8);
  local_e0 = *(float *)(param_1 + 2000);
  fVar8 = (float)((ulonglong)local_e8 >> 0x20);
  fVar11 = local_e0 * fStack_c4 - fVar8 * fStack_c0;
  fVar10 = (float)local_e8 * fStack_c0 - local_e0 * local_c8;
  fVar11 = fVar11 + fVar11;
  fVar9 = fVar8 * local_c8 - (float)local_e8 * fStack_c4;
  fVar10 = fVar10 + fVar10;
  fVar9 = fVar9 + fVar9;
  local_d8 = (fVar9 * fStack_c4 - fVar10 * fStack_c0) + (float)local_e8 + fVar11 * fStack_bc;
  local_d0 = (fVar10 * local_c8 - fVar11 * fStack_c4) + fVar9 * fStack_bc + local_e0;
  local_d4 = (fVar11 * fStack_c0 - fVar9 * local_c8) + fVar10 * fStack_bc + fVar8;
  uVar2 = FRotationMatrix::MakeFromXZ(local_b8,&local_f8,&local_d8);
  FMatrix::ToQuat(uVar2,param_2);
  if (param_4 == 1) {
    fVar8 = *(float *)(param_1 + 0x210);
    fVar9 = *(float *)(param_1 + 0x214);
    fVar10 = *(float *)(param_1 + 0x218);
    fVar11 = *(float *)(param_1 + 0x21c);
    fVar15 = *param_2;
    fVar16 = param_2[1];
    fVar18 = param_2[2];
    fVar20 = param_2[3];
    fVar12 = fVar8 * fVar18 * fRam0000000146af0cb4;
    fVar13 = fVar8 * fVar16 * fRam0000000146af0cb8;
    fVar14 = fVar8 * fVar15 * fRam0000000146af0cbc;
    fVar5 = fVar9 * fVar20 * fRam0000000146af0ca4;
    fVar6 = fVar9 * fVar15 * fRam0000000146af0ca8;
    fVar7 = fVar9 * fVar16 * fRam0000000146af0cac;
    fVar17 = fVar10 * fVar15 * fRam0000000146af0c94;
    fVar19 = fVar10 * fVar20 * fRam0000000146af0c98;
    fVar21 = fVar10 * fVar18 * fRam0000000146af0c9c;
    *param_2 = fVar8 * fVar20 * _DAT_146af0cb0 + fVar11 * fVar15 + fVar9 * fVar18 * _DAT_146af0ca0 +
               fVar10 * fVar16 * _DAT_146af0c90;
    param_2[1] = fVar12 + fVar11 * fVar16 + fVar5 + fVar17;
    param_2[2] = fVar13 + fVar11 * fVar18 + fVar6 + fVar19;
    param_2[3] = fVar14 + fVar11 * fVar20 + fVar7 + fVar21;
  }
  return param_2;
}



// FUNCTION 1423afad0 FUN_1423afad0 body=102 status=ok
// SIG undefined FUN_1423afad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1423afad0(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x718);
  if (((lVar2 != 0) && (-1 < param_3)) && (param_3 < *(int *)(lVar2 + 0x160))) {
    puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 0x168) + 0x10 + (longlong)param_3 * 0x30);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    *(undefined4 *)param_2 = *puVar1;
    *(undefined4 *)(param_2 + 1) = uVar4;
    *(undefined4 *)((longlong)param_2 + 4) = uVar3;
    return param_2;
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  return param_2;
}



// FUNCTION 1423afb40 FUN_1423afb40 body=143 status=ok
// SIG undefined FUN_1423afb40(void)

void FUN_1423afb40(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  
  FUN_14238d310();
  plVar1 = *(longlong **)(param_1 + 0x888);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x78))(plVar1,param_2);
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xbf8)) {
    lVar3 = 0;
    do {
      if ((*(longlong *)(lVar3 + *(longlong *)(param_1 + 0xbf0)) != 0) &&
         (cVar2 = FBodyInstance::IsValidBodyInstance(), cVar2 != '\0')) {
        FUN_142696210(*(undefined8 *)(*(longlong *)(param_1 + 0xbf0) + lVar3),param_2);
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar4 < *(int *)(param_1 + 0xbf8));
  }
  return;
}



// FUNCTION 1423afbd0 FUN_1423afbd0 body=53 status=ok
// SIG undefined FUN_1423afbd0(void)

void FUN_1423afbd0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_14238d310();
  plVar1 = *(longlong **)(param_1 + 0x888);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x78))(plVar1,param_2);
  }
  return;
}



// FUNCTION 1423afc10 FUN_1423afc10 body=89 status=ok
// SIG undefined FUN_1423afc10(void)

undefined8 FUN_1423afc10(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  uVar1 = FInterpCurve<float>::Eval(param_1 + 0x738,param_3,local_res8);
  FUN_1423afc70(param_1,param_2,uVar1,param_4);
  return param_2;
}



// FUNCTION 1423afc70 FUN_1423afc70 body=516 status=ok
// SIG undefined FUN_1423afc70(void)

float * FUN_1423afc70(longlong param_1,float *param_2,undefined4 param_3,int param_4)

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
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  
  FUN_1423af700(param_1,&local_68,param_3,0);
  fVar7 = DAT_1464aa7c0 * local_64 - DAT_1464aa7b8._4_4_ * local_60;
  fVar8 = (float)DAT_1464aa7b8 * local_60 - DAT_1464aa7c0 * local_68;
  fVar7 = fVar7 + fVar7;
  fVar6 = DAT_1464aa7b8._4_4_ * local_68 - (float)DAT_1464aa7b8 * local_64;
  fVar8 = fVar8 + fVar8;
  fVar6 = fVar6 + fVar6;
  fVar10 = (fVar6 * local_64 - fVar8 * local_60) + fVar7 * local_5c + (float)DAT_1464aa7b8;
  *param_2 = fVar10;
  fVar9 = (fVar8 * local_68 - fVar7 * local_64) + fVar6 * local_5c + DAT_1464aa7c0;
  fVar6 = (fVar7 * local_60 - fVar6 * local_68) + fVar8 * local_5c + DAT_1464aa7b8._4_4_;
  param_2[2] = fVar9;
  param_2[1] = fVar6;
  if (param_4 == 1) {
    fVar7 = *(float *)(param_1 + 0x210);
    fVar8 = *(float *)(param_1 + 0x214);
    fVar1 = *(float *)(param_1 + 0x218);
    fVar2 = *(float *)(param_1 + 0x21c);
    fVar3 = fVar9 * fVar8 - fVar6 * fVar1;
    fVar4 = fVar10 * fVar1 - fVar9 * fVar7;
    fVar5 = fVar6 * fVar7 - fVar10 * fVar8;
    fVar3 = fVar3 + fVar3;
    fVar4 = fVar4 + fVar4;
    fVar5 = fVar5 + fVar5;
    *(ulonglong *)param_2 =
         CONCAT44((fVar3 * fVar1 - fVar5 * fVar7) + fVar2 * fVar4 + fVar6,
                  (fVar5 * fVar8 - fVar4 * fVar1) + fVar2 * fVar3 + fVar10);
    param_2[2] = (fVar4 * fVar7 - fVar3 * fVar8) + fVar2 * fVar5 + fVar9;
  }
  return param_2;
}



// FUNCTION 1423afe80 FUN_1423afe80 body=101 status=ok
// SIG undefined FUN_1423afe80(void)

undefined8 FUN_1423afe80(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x710);
  if (iVar1 < 1) {
    puVar3 = &DAT_146af0f20;
  }
  else {
    if (((*(char *)(param_1 + 0x7c1) == '\0') || (param_3 < iVar1)) && (-1 < param_3)) {
      iVar2 = iVar1 + -1;
      if (param_3 < iVar1 + -1) {
        iVar2 = param_3;
      }
    }
    else {
      iVar2 = 0;
    }
    puVar3 = (undefined4 *)((longlong)iVar2 * 0x50 + *(longlong *)(param_1 + 0x708));
  }
  FUN_1423afc70(param_1,param_2,*puVar3);
  return param_2;
}



// FUNCTION 1423afef0 FUN_1423afef0 body=231 status=ok
// SIG undefined FUN_1423afef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1423afef0(longlong param_1,undefined8 *param_2,float param_3,undefined8 param_4,char param_5)

{
  float fVar1;
  undefined4 local_res8 [2];
  
  fVar1 = 0.0;
  if (*(float *)(param_1 + 0x7b8) == 0.0) {
    *param_2 = _DAT_1468b5d90;
    *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
    return param_2;
  }
  if (param_5 != '\0') {
    if (0 < *(int *)(param_1 + 0x740)) {
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x738) + -0x14 +
                        (longlong)*(int *)(param_1 + 0x740) * 0x14);
    }
    local_res8[0] = 0;
    FInterpCurve<float>::Eval
              (param_1 + 0x738,(param_3 / *(float *)(param_1 + 0x7b8)) * fVar1,local_res8);
  }
  FUN_1423afc70(param_1,param_2);
  return param_2;
}



// FUNCTION 1423affe0 FUN_1423affe0 body=91 status=ok
// SIG undefined FUN_1423affe0(void)

undefined4 FUN_1423affe0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined1 local_18 [16];
  
  local_res8[0] = 0;
  uVar2 = FInterpCurve<float>::Eval(param_1 + 0x738,param_2,local_res8);
  uVar1 = FUN_1423af700(param_1,local_18,uVar2,param_3);
  FQuat::Rotator(uVar1,local_28);
  return local_20;
}



// FUNCTION 1423b0040 FUN_1423b0040 body=115 status=ok
// SIG undefined FUN_1423b0040(void)

undefined4 FUN_1423b0040(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined1 local_18 [24];
  
  iVar1 = *(int *)(param_1 + 0x710);
  if (iVar1 < 1) {
    puVar4 = &DAT_146af0f20;
  }
  else {
    if (((*(char *)(param_1 + 0x7c1) == '\0') || (param_2 < iVar1)) && (-1 < param_2)) {
      iVar2 = iVar1 + -1;
      if (param_2 < iVar1 + -1) {
        iVar2 = param_2;
      }
    }
    else {
      iVar2 = 0;
    }
    puVar4 = (undefined4 *)((longlong)iVar2 * 0x50 + *(longlong *)(param_1 + 0x708));
  }
  uVar3 = FUN_1423af700(param_1,local_18,*puVar4,param_3);
  FQuat::Rotator(uVar3,local_28);
  return local_20;
}



// FUNCTION 1423b00c0 FUN_1423b00c0 body=192 status=ok
// SIG undefined FUN_1423b00c0(void)

float FUN_1423b00c0(longlong param_1,float param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 local_res8 [2];
  undefined1 local_28 [8];
  float local_20;
  undefined1 local_18 [16];
  
  fVar2 = 0.0;
  if (*(float *)(param_1 + 0x7b8) != 0.0) {
    if (param_4 != '\0') {
      if (0 < *(int *)(param_1 + 0x740)) {
        fVar2 = *(float *)(*(longlong *)(param_1 + 0x738) + -0x14 +
                          (longlong)*(int *)(param_1 + 0x740) * 0x14);
      }
      local_res8[0] = 0;
      FInterpCurve<float>::Eval
                (param_1 + 0x738,(param_2 / *(float *)(param_1 + 0x7b8)) * fVar2,local_res8);
    }
    uVar1 = FUN_1423af700(param_1,local_18);
    FQuat::Rotator(uVar1,local_28);
    fVar2 = local_20;
  }
  return fVar2;
}



// FUNCTION 1423b0180 FUN_1423b0180 body=102 status=ok
// SIG undefined FUN_1423b0180(void)

undefined8 FUN_1423b0180(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  undefined1 local_18 [16];
  
  local_res8[0] = 0;
  uVar2 = FInterpCurve<float>::Eval(param_1 + 0x738,param_3,local_res8);
  uVar1 = FUN_1423af700(param_1,local_18,uVar2,param_4);
  FQuat::Rotator(uVar1,param_2);
  return param_2;
}



// FUNCTION 1423b01f0 FUN_1423b01f0 body=117 status=ok
// SIG undefined FUN_1423b01f0(void)

undefined8 FUN_1423b01f0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 local_18 [16];
  
  iVar1 = *(int *)(param_1 + 0x710);
  if (iVar1 < 1) {
    puVar4 = &DAT_146af0f20;
  }
  else {
    if (((*(char *)(param_1 + 0x7c1) == '\0') || (param_3 < iVar1)) && (-1 < param_3)) {
      iVar2 = iVar1 + -1;
      if (param_3 < iVar1 + -1) {
        iVar2 = param_3;
      }
    }
    else {
      iVar2 = 0;
    }
    puVar4 = (undefined4 *)((longlong)iVar2 * 0x50 + *(longlong *)(param_1 + 0x708));
  }
  uVar3 = FUN_1423af700(param_1,local_18,*puVar4);
  FQuat::Rotator(uVar3,param_2);
  return param_2;
}



// FUNCTION 1423b0270 FUN_1423b0270 body=197 status=ok
// SIG undefined FUN_1423b0270(void)

undefined8 *
FUN_1423b0270(longlong param_1,undefined8 *param_2,float param_3,undefined8 param_4,char param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_18 [16];
  
  if (*(float *)(param_1 + 0x7b8) == 0.0) {
    *param_2 = DAT_1468b5da0;
    *(undefined4 *)(param_2 + 1) = DAT_1468b5da8;
    return param_2;
  }
  if (param_5 != '\0') {
    FUN_1423b0180(param_1);
    return param_2;
  }
  iVar2 = *(int *)(param_1 + 0x6f8);
  if (*(char *)(param_1 + 0x7c1) == '\0') {
    iVar2 = *(int *)(param_1 + 0x6f8) + -1;
  }
  uVar1 = FUN_1423af700(param_1,local_18,((float)iVar2 / *(float *)(param_1 + 0x7b8)) * param_3);
  FQuat::Rotator(uVar1,param_2);
  return param_2;
}



// FUNCTION 1423b0340 FUN_1423b0340 body=106 status=ok
// SIG undefined FUN_1423b0340(void)

undefined8 FUN_1423b0340(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_res8 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  local_res8[0] = 0;
  local_10 = 0x3f800000;
  uVar1 = FInterpCurve<float>::Eval(param_1 + 0x738,param_3,local_res8);
  FInterpCurve<FVector>::Eval(param_1 + 0x720,param_2,uVar1,&local_18);
  return param_2;
}



// FUNCTION 1423b03b0 FUN_1423b03b0 body=133 status=ok
// SIG undefined FUN_1423b03b0(void)

undefined8 * FUN_1423b03b0(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar2 = DAT_146af0f7c;
  iVar1 = *(int *)(param_1 + 0x728);
  if (iVar1 < 1) {
    *param_2 = DAT_146af0f74;
    *(undefined4 *)(param_2 + 1) = uVar2;
    return param_2;
  }
  if (((*(char *)(param_1 + 0x7c1) == '\0') || (param_3 < iVar1)) && (-1 < param_3)) {
    iVar3 = iVar1 + -1;
    if (param_3 < iVar1 + -1) {
      iVar3 = param_3;
    }
    lVar4 = (longlong)iVar3 * 0x2c + *(longlong *)(param_1 + 0x720);
    uVar2 = *(undefined4 *)(lVar4 + 0xc);
    *param_2 = *(undefined8 *)(lVar4 + 4);
    *(undefined4 *)(param_2 + 1) = uVar2;
    return param_2;
  }
  uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x720) + 0xc);
  *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x720) + 4);
  *(undefined4 *)(param_2 + 1) = uVar2;
  return param_2;
}



// FUNCTION 1423b0440 FUN_1423b0440 body=261 status=ok
// SIG undefined FUN_1423b0440(void)

undefined4 * FUN_1423b0440(longlong param_1,undefined4 *param_2,float param_3,char param_4)

{
  float fVar1;
  undefined4 local_res8 [2];
  
  fVar1 = 0.0;
  if (*(float *)(param_1 + 0x7b8) == 0.0) {
    *param_2 = 0x3f800000;
    param_2[1] = 0x3f800000;
    param_2[2] = 0x3f800000;
    return param_2;
  }
  if (param_4 != '\0') {
    if (0 < *(int *)(param_1 + 0x740)) {
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x738) + -0x14 +
                        (longlong)*(int *)(param_1 + 0x740) * 0x14);
    }
    local_res8[0] = 0;
    FInterpCurve<float>::Eval
              (param_1 + 0x738,(param_3 / *(float *)(param_1 + 0x7b8)) * fVar1,local_res8);
  }
  FInterpCurve<FVector>::Eval(param_1 + 0x720,param_2);
  return param_2;
}



// FUNCTION 1423b0550 GetSegmentLength body=820 status=ok
// SIG undefined GetSegmentLength(void)

float FSplineCurves::GetSegmentLength
                (longlong *param_1,int param_2,float param_3,undefined8 param_4,float *param_5)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  undefined **ppuVar4;
  longlong lVar5;
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
  float local_b8;
  float fStack_b4;
  
  lVar5 = (longlong)param_2 * 0x2c + *param_1;
  iVar2 = 0;
  if (param_2 != (int)param_1[1] + -1) {
    iVar2 = param_2 + 1;
  }
  lVar3 = (longlong)iVar2 * 0x2c + *param_1;
  if (*(char *)(lVar5 + 0x28) == '\0') {
    fVar6 = (*(float *)(lVar3 + 0xc) - *(float *)(lVar5 + 0xc)) * param_5[2];
    fVar10 = (*(float *)(lVar3 + 4) - *(float *)(lVar5 + 4)) * *param_5;
    fVar8 = (*(float *)(lVar3 + 8) - *(float *)(lVar5 + 8)) * param_5[1];
    return SQRT(fVar8 * fVar8 + fVar10 * fVar10 + fVar6 * fVar6) * param_3;
  }
  if (*(char *)(lVar5 + 0x28) == '\x02') {
    return 0.0;
  }
  fVar6 = *(float *)(lVar3 + 0x14);
  fVar8 = *(float *)(lVar3 + 0x10);
  fVar10 = *(float *)(lVar3 + 0x18);
  fVar15 = *(float *)(lVar5 + 0xc) - *(float *)(lVar3 + 0xc);
  fVar13 = *(float *)(lVar5 + 4) - *(float *)(lVar3 + 4);
  fVar14 = *(float *)(lVar5 + 8) - *(float *)(lVar3 + 8);
  fVar12 = 0.0;
  ppuVar4 = (undefined **)&DAT_14506e068;
  do {
    fVar7 = (*(float *)ppuVar4 + 1.0) * param_3 * 0.5;
    fStack_b4 = (float)((ulonglong)*(undefined8 *)(lVar5 + 0x1c) >> 0x20);
    local_b8 = (float)*(undefined8 *)(lVar5 + 0x1c);
    fVar9 = (((fVar15 + fVar15 + *(float *)(lVar5 + 0x24) + fVar10) * 3.0 * fVar7 +
             (((*(float *)(lVar3 + 0xc) - *(float *)(lVar5 + 0xc)) * 6.0 -
              *(float *)(lVar5 + 0x24) * 4.0) - (fVar10 + fVar10))) * fVar7 +
            *(float *)(lVar5 + 0x24)) * param_5[2];
    fVar11 = (((fVar14 + fVar14 + *(float *)(lVar5 + 0x20) + fVar6) * 3.0 * fVar7 +
              (((*(float *)(lVar3 + 8) - *(float *)(lVar5 + 8)) * 6.0 -
               *(float *)(lVar5 + 0x20) * 4.0) - (fVar6 + fVar6))) * fVar7 + fStack_b4) * param_5[1]
    ;
    fVar7 = (((fVar13 + fVar13 + *(float *)(lVar5 + 0x1c) + fVar8) * 3.0 * fVar7 +
             (((*(float *)(lVar3 + 4) - *(float *)(lVar5 + 4)) * 6.0 -
              *(float *)(lVar5 + 0x1c) * 4.0) - (fVar8 + fVar8))) * fVar7 + local_b8) * *param_5;
    pfVar1 = (float *)((longlong)ppuVar4 + 4);
    ppuVar4 = ppuVar4 + 1;
    fVar12 = fVar12 + SQRT(fVar11 * fVar11 + fVar7 * fVar7 + fVar9 * fVar9) * *pfVar1;
  } while (ppuVar4 != &PTR_FUN_14506e090);
  return fVar12 * param_3 * 0.5;
}



// FUNCTION 1423b0890 FUN_1423b0890 body=89 status=ok
// SIG undefined FUN_1423b0890(void)

longlong FUN_1423b0890(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa48);
  if (lVar1 != 0) {
    lVar3 = FUN_1428f7290();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1423b08f0 FUN_1423b08f0 body=30 status=ok
// SIG undefined FUN_1423b08f0(void)

undefined8 FUN_1423b08f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x888);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x718);
    if (lVar1 == 0) {
      return 0;
    }
  }
  return *(undefined8 *)(lVar1 + 0x40);
}



// FUNCTION 1423b0910 FUN_1423b0910 body=100 status=ok
// SIG undefined FUN_1423b0910(void)

longlong FUN_1423b0910(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((*(longlong *)(param_1 + 0x718) != 0) &&
       (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x40), plVar1 != (longlong *)0x0))
      && (-1 < param_2)) && (param_2 < (int)plVar1[1])) {
    lVar2 = *(longlong *)(*plVar1 + (longlong)param_2 * 8);
    if (((param_2 < *(int *)(param_1 + 0x860)) &&
        (lVar3 = *(longlong *)((longlong)param_2 * 0x38 + 0x30 + *(longlong *)(param_1 + 0x858)),
        lVar3 != 0)) && (*(int *)(lVar3 + 0x5c) == *(int *)(lVar2 + 0x16c))) {
      return lVar3;
    }
    return lVar2 + 0x238;
  }
  return 0;
}



// FUNCTION 1423b0980 FUN_1423b0980 body=221 status=ok
// SIG undefined FUN_1423b0980(void)

longlong * FUN_1423b0980(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x718) == 0) goto LAB_1423b0a42;
  lVar2 = param_3;
  if (param_3 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x960);
    plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x968) * 2;
    for (; plVar3 != plVar4; plVar3 = plVar3 + 2) {
      if (*plVar3 == param_3) goto LAB_1423b0a27;
    }
    plVar3 = *(longlong **)(param_1 + 0x910);
    plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x918) * 2;
    for (; plVar3 != plVar4; plVar3 = plVar3 + 2) {
      if (*plVar3 == param_3) goto LAB_1423b0a27;
    }
  }
  goto LAB_1423b0a11;
LAB_1423b0a27:
  lVar2 = plVar3[1];
LAB_1423b0a11:
  lVar2 = FUN_142777810(*(longlong *)(param_1 + 0x718),lVar2);
  if (lVar2 != 0) {
    *param_2 = *(longlong *)(lVar2 + 0x30);
    return param_2;
  }
  iVar1 = FUN_1423ac950(param_1,param_3);
  if (iVar1 != -1) {
    *param_2 = param_3;
    return param_2;
  }
LAB_1423b0a42:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1423b0a60 FUN_1423b0a60 body=148 status=ok
// SIG undefined FUN_1423b0a60(void)

void FUN_1423b0a60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x718);
  if (lVar1 != 0) {
    if (param_2 != 0) {
      plVar2 = *(longlong **)(param_1 + 0x960);
      plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x968) * 2;
      for (; plVar2 != plVar3; plVar2 = plVar2 + 2) {
        if (*plVar2 == param_2) goto LAB_1423b0ae3;
      }
      plVar2 = *(longlong **)(param_1 + 0x910);
      plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x918) * 2;
      if (plVar2 != plVar3) {
        while (*plVar2 != param_2) {
          plVar2 = plVar2 + 2;
          if (plVar2 == plVar3) {
            FUN_142777810(lVar1);
            return;
          }
        }
LAB_1423b0ae3:
        param_2 = plVar2[1];
      }
    }
    FUN_142777810(lVar1,param_2);
  }
  return;
}



// FUNCTION 1423b0b00 FUN_1423b0b00 body=2126 status=ok
// SIG undefined FUN_1423b0b00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1423b0b00(longlong param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
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
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  puVar11 = (undefined8 *)(param_1 + 0x210);
  local_148 = *puVar11;
  uStack_140 = *(undefined8 *)(param_1 + 0x218);
  local_138 = *(undefined8 *)(param_1 + 0x220);
  uStack_130 = *(undefined8 *)(param_1 + 0x228);
  local_128 = *(undefined8 *)(param_1 + 0x230);
  uStack_120 = *(undefined8 *)(param_1 + 0x238);
  local_1a8 = 0;
  if (param_3 != 0) {
    if (*(longlong *)(param_1 + 0x718) != 0) {
      local_1a8 = 0;
      lVar8 = param_3;
      if (param_3 != 0) {
        plVar9 = *(longlong **)(param_1 + 0x960);
        plVar12 = plVar9 + (longlong)*(int *)(param_1 + 0x968) * 2;
        for (; plVar9 != plVar12; plVar9 = plVar9 + 2) {
          if (*plVar9 == param_3) goto LAB_1423b0c13;
        }
        plVar9 = *(longlong **)(param_1 + 0x910);
        plVar12 = plVar9 + (longlong)*(int *)(param_1 + 0x918) * 2;
        for (; plVar9 != plVar12; plVar9 = plVar9 + 2) {
          if (*plVar9 == param_3) goto LAB_1423b0c13;
        }
      }
      goto LAB_1423b0bd9;
    }
    goto LAB_1423b11e4;
  }
  goto LAB_1423b11bc;
LAB_1423b0c13:
  lVar8 = plVar9[1];
LAB_1423b0bd9:
  lVar8 = FUN_142777810(*(longlong *)(param_1 + 0x718),lVar8);
  if (lVar8 == 0) {
LAB_1423b11e4:
    iVar7 = FUN_1423ac950(param_1,param_3);
    if (iVar7 != -1) {
      if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
        fVar47 = _DAT_1468b5b90;
        fVar15 = fRam00000001468b5b94;
        fVar48 = fRam00000001468b5b98;
        fVar25 = fRam00000001468b5b9c;
        local_138 = CONCAT44(fRam00000001468b5b84,_DAT_1468b5b80);
        uStack_130 = CONCAT44(fRam00000001468b5b8c,fRam00000001468b5b88);
        local_148 = CONCAT44(fRam00000001468b5b74,_DAT_1468b5b70);
        uStack_140 = CONCAT44(fRam00000001468b5b7c,fRam00000001468b5b78);
      }
      else {
        FUN_1423ad020(param_1,&local_188,iVar7,puVar11);
        fVar47 = (float)local_168;
        fVar15 = local_168._4_4_;
        fVar48 = (float)uStack_160;
        fVar25 = uStack_160._4_4_;
        local_138 = local_178;
        uStack_130 = uStack_170;
        local_148 = local_188;
        uStack_140 = uStack_180;
      }
      local_128 = CONCAT44(fVar15,fVar47);
      uStack_120 = CONCAT44(fVar25,fVar48);
      if (param_4 == 3) {
        local_1a8 = 0;
        iVar7 = FUN_1423ac950(param_1,param_3);
        uVar10 = local_1a8;
        if (0 < iVar7) {
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x158);
          uVar10 = *(undefined8 *)
                    (lVar8 + (longlong)*(int *)(lVar8 + 8 + (longlong)iVar7 * 0x10) * 0x10);
        }
        iVar7 = FUN_1423ac950(param_1,uVar10);
        if (iVar7 != -1) {
          uVar10 = FUN_1423acfd0(param_1,&local_188,iVar7);
          FUN_14162bcf0(&local_148,param_2,uVar10);
          return param_2;
        }
        goto LAB_1423b11d0;
      }
    }
  }
  else {
    USkeletalMeshSocket::GetSocketLocalTransform(lVar8,&local_118);
    if (param_4 == 3) {
      local_138 = CONCAT44(fStack_104,local_108);
      uStack_130 = CONCAT44(fStack_fc,fStack_100);
      *param_2 = CONCAT44(fStack_114,local_118);
      param_2[1] = CONCAT44(fStack_10c,fStack_110);
      goto LAB_1423b131c;
    }
    iVar7 = FUN_1423ac950(param_1,*(undefined8 *)(lVar8 + 0x30));
    if (iVar7 != -1) {
      fVar15 = _DAT_1468b5b70;
      fVar25 = fRam00000001468b5b74;
      fVar17 = fRam00000001468b5b78;
      fVar26 = fRam00000001468b5b7c;
      fVar37 = _DAT_1468b5b90;
      fVar39 = fRam00000001468b5b94;
      fVar41 = fRam00000001468b5b98;
      fVar43 = fRam00000001468b5b9c;
      fVar47 = _DAT_1468b5b80;
      fVar48 = fRam00000001468b5b84;
      fVar28 = fRam00000001468b5b88;
      fVar21 = fRam00000001468b5b8c;
      if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
        iVar7 = FUN_1423ad020(param_1,&local_188,iVar7,puVar11);
        fVar15 = (float)local_188;
        fVar25 = local_188._4_4_;
        fVar17 = (float)uStack_180;
        fVar26 = uStack_180._4_4_;
        fVar37 = (float)local_168;
        fVar39 = local_168._4_4_;
        fVar41 = (float)uStack_160;
        fVar43 = uStack_160._4_4_;
        fVar47 = (float)local_178;
        fVar48 = local_178._4_4_;
        fVar28 = (float)uStack_170;
        fVar21 = uStack_170._4_4_;
      }
      fVar36 = fRam0000000146af0cf8;
      fVar35 = fRam0000000146af0cf4;
      fVar20 = _DAT_146af0cf0;
      fVar19 = fRam0000000146af0bf8;
      fVar18 = fRam0000000146af0bf4;
      fVar31 = _DAT_146af0bf0;
      auVar6._8_8_ = uStack_f0;
      auVar6._0_8_ = local_f8;
      fVar1 = (float)local_f8;
      fVar2 = (float)((ulonglong)local_f8 >> 0x20);
      fVar3 = (float)uStack_f0;
      fVar4 = (float)((ulonglong)uStack_f0 >> 0x20);
      auVar13._4_4_ = fVar39;
      auVar13._0_4_ = fVar37;
      auVar13._8_4_ = fVar41;
      auVar13._12_4_ = fVar43;
      auVar13 = minps(auVar6,auVar13);
      auVar14._4_4_ = -(uint)(auVar13._4_4_ < fRam0000000146af0cf4);
      auVar14._0_4_ = -(uint)(auVar13._0_4_ < _DAT_146af0cf0);
      auVar14._8_4_ = -(uint)(auVar13._8_4_ < fRam0000000146af0cf8);
      auVar14._12_4_ = -(uint)(auVar13._12_4_ < fRam0000000146af0cfc);
      iVar7 = movmskps(iVar7,auVar14);
      if (iVar7 == 0) {
        local_108 = fVar37 * local_108;
        fStack_104 = fVar39 * fStack_104;
        fStack_100 = fVar41 * fStack_100;
        fStack_fc = fVar43 * fStack_fc;
        fVar35 = fVar15 * fStack_10c * _DAT_146af0cb0 + fVar26 * local_118 +
                 fVar25 * fStack_110 * _DAT_146af0ca0 + fVar17 * fStack_114 * _DAT_146af0c90;
        fVar36 = fVar15 * fStack_110 * fRam0000000146af0cb4 + fVar26 * fStack_114 +
                 fVar25 * fStack_10c * fRam0000000146af0ca4 +
                 fVar17 * local_118 * fRam0000000146af0c94;
        fVar22 = fVar15 * fStack_114 * fRam0000000146af0cb8 + fVar26 * fStack_110 +
                 fVar25 * local_118 * fRam0000000146af0ca8 +
                 fVar17 * fStack_10c * fRam0000000146af0c98;
        fVar23 = fVar15 * local_118 * fRam0000000146af0cbc + fVar26 * fStack_10c +
                 fVar25 * fStack_114 * fRam0000000146af0cac +
                 fVar17 * fStack_110 * fRam0000000146af0c9c;
        fVar31 = fStack_100 * fVar25 - fStack_104 * fVar17;
        fVar18 = local_108 * fVar17 - fStack_100 * fVar15;
        fVar19 = fStack_104 * fVar15 - local_108 * fVar25;
        fVar20 = fStack_fc * fVar26 - fStack_fc * fVar26;
        fVar31 = fVar31 + fVar31;
        fVar18 = fVar18 + fVar18;
        fVar19 = fVar19 + fVar19;
        fVar20 = fVar20 + fVar20;
        fVar47 = (fVar19 * fVar25 - fVar18 * fVar17) + fVar26 * fVar31 + local_108 + fVar47;
        fVar48 = (fVar31 * fVar17 - fVar19 * fVar15) + fVar26 * fVar18 + fStack_104 + fVar48;
        fVar28 = (fVar18 * fVar15 - fVar31 * fVar25) + fVar26 * fVar19 + fStack_100 + fVar28;
        fVar21 = (fVar20 * fVar26 - fVar20 * fVar26) + fVar26 * fVar20 + fStack_fc + fVar21;
      }
      else {
        fVar21 = fVar25 + fVar25;
        fVar23 = fVar17 + fVar17;
        fVar24 = (fVar15 + fVar15) * fVar15;
        fVar22 = (fVar15 + fVar15) * fVar26;
        fVar44 = (fVar23 * fVar26 + fVar21 * fVar15) * fVar37;
        fVar45 = (fVar22 + fVar23 * fVar25) * fVar39;
        fVar46 = (fVar21 * fVar26 + fVar23 * fVar15) * fVar41;
        fVar27 = fVar39 * (fVar21 * fVar15 - fVar23 * fVar26);
        fVar29 = fVar41 * (fVar23 * fVar25 - fVar22);
        fVar30 = fVar37 * (fVar23 * fVar15 - fVar21 * fVar26);
        fVar15 = (float)((uint)((_DAT_146af0bf0 - (fVar23 * fVar17 + fVar21 * fVar25)) * fVar37) &
                        _DAT_146af0c00);
        fVar17 = (float)((uint)((fRam0000000146af0bf4 - (fVar23 * fVar17 + fVar24)) * fVar39) &
                        uRam0000000146af0c04);
        fVar21 = (float)((uint)((fRam0000000146af0bf8 - (fVar21 * fVar25 + fVar24)) * fVar41) &
                        uRam0000000146af0c08);
        fVar23 = (float)((uint)((fRam0000000146af0bfc - (fVar24 + fVar24)) * fVar43) &
                        uRam0000000146af0c0c);
        fVar22 = fStack_114 + fStack_114;
        fVar26 = fStack_110 + fStack_110;
        fVar24 = (local_118 + local_118) * local_118;
        fVar25 = (local_118 + local_118) * fStack_10c;
        fVar38 = (fVar26 * fStack_10c + fVar22 * local_118) * fVar1;
        fVar40 = (fVar25 + fVar26 * fStack_114) * fVar2;
        fVar42 = (fVar22 * fStack_10c + fVar26 * local_118) * fVar3;
        fVar32 = fVar2 * (fVar22 * local_118 - fVar26 * fStack_10c);
        fVar33 = fVar3 * (fVar26 * fStack_114 - fVar25);
        fVar34 = fVar1 * (fVar26 * local_118 - fVar22 * fStack_10c);
        fVar25 = (float)((uint)((_DAT_146af0bf0 - (fVar26 * fStack_110 + fVar22 * fStack_114)) *
                               fVar1) & _DAT_146af0c00);
        fVar26 = (float)((uint)((fRam0000000146af0bf4 - (fVar26 * fStack_110 + fVar24)) * fVar2) &
                        uRam0000000146af0c04);
        fVar22 = (float)((uint)((fRam0000000146af0bf8 - (fVar22 * fStack_114 + fVar24)) * fVar3) &
                        uRam0000000146af0c08);
        fVar24 = (float)((uint)((fRam0000000146af0bfc - (fVar24 + fVar24)) * fVar4) &
                        uRam0000000146af0c0c);
        local_188._0_4_ = fVar38 * fVar27 + fVar25 * fVar15 + fVar34 * fVar46 + fVar24 * fVar47;
        local_188._4_4_ = fVar38 * fVar17 + fVar25 * fVar44 + fVar34 * fVar29 + fVar24 * fVar48;
        uStack_180._0_4_ = fVar38 * fVar45 + fVar25 * fVar30 + fVar34 * fVar21 + fVar24 * fVar28;
        uStack_180._4_4_ =
             fVar38 * fVar23 + fVar25 * fVar23 + fVar34 * fVar23 + fVar24 * fRam0000000146af0bfc;
        local_178._0_4_ = fVar26 * fVar27 + fVar32 * fVar15 + fVar40 * fVar46 + fVar24 * fVar47;
        local_178._4_4_ = fVar26 * fVar17 + fVar32 * fVar44 + fVar40 * fVar29 + fVar24 * fVar48;
        uStack_170._0_4_ = fVar26 * fVar45 + fVar32 * fVar30 + fVar40 * fVar21 + fVar24 * fVar28;
        uStack_170._4_4_ =
             fVar26 * fVar23 + fVar32 * fVar23 + fVar40 * fVar23 + fVar24 * fRam0000000146af0bfc;
        local_168._0_4_ = fVar33 * fVar27 + fVar42 * fVar15 + fVar22 * fVar46 + fVar24 * fVar47;
        local_168._4_4_ = fVar33 * fVar17 + fVar42 * fVar44 + fVar22 * fVar29 + fVar24 * fVar48;
        uStack_160._0_4_ = fVar33 * fVar45 + fVar42 * fVar30 + fVar22 * fVar21 + fVar24 * fVar28;
        uStack_160._4_4_ =
             fVar33 * fVar23 + fVar42 * fVar23 + fVar22 * fVar23 + fVar24 * fRam0000000146af0bfc;
        local_158 = fStack_104 * fVar27 + local_108 * fVar15 + fStack_100 * fVar46 +
                    fRam0000000146af0bfc * fVar47;
        fStack_154 = fStack_104 * fVar17 + local_108 * fVar44 + fStack_100 * fVar29 +
                     fRam0000000146af0bfc * fVar48;
        fStack_150 = fStack_104 * fVar45 + local_108 * fVar30 + fStack_100 * fVar21 +
                     fRam0000000146af0bfc * fVar28;
        fStack_14c = fStack_104 * fVar23 + local_108 * fVar23 + fStack_100 * fVar23 +
                     fRam0000000146af0bfc * fRam0000000146af0bfc;
        FMatrix::RemoveScaling(&local_188);
        fVar47 = (float)(-(uint)(fVar20 <= fVar37 * fVar1) & (_DAT_146af0ce0 ^ (uint)fVar31) ^
                        _DAT_146af0ce0);
        fVar15 = (float)(-(uint)(fVar35 <= fVar39 * fVar2) & (uRam0000000146af0ce4 ^ (uint)fVar18) ^
                        uRam0000000146af0ce4);
        fVar48 = (float)(-(uint)(fVar36 <= fVar41 * fVar3) & (uRam0000000146af0ce8 ^ (uint)fVar19) ^
                        uRam0000000146af0ce8);
        local_188 = CONCAT44(local_188._4_4_ * fVar47,(float)local_188 * fVar47);
        uStack_180 = CONCAT44(uStack_180._4_4_,(float)uStack_180 * fVar47);
        uStack_170 = CONCAT44(uStack_170._4_4_,(float)uStack_170 * fVar15);
        uStack_160 = CONCAT44(uStack_160._4_4_,(float)uStack_160 * fVar48);
        local_178 = CONCAT44(local_178._4_4_ * fVar15,(float)local_178 * fVar15);
        local_168 = CONCAT44(local_168._4_4_ * fVar48,(float)local_168 * fVar48);
        FQuat::FQuat(&local_198,&local_188);
        local_1a8 = CONCAT44(local_1a8._4_4_,0x322bcc77);
        auVar16._0_4_ = local_198 * local_198 + fStack_190 * fStack_190;
        auVar16._4_4_ = fStack_194 * fStack_194 + fStack_18c * fStack_18c;
        auVar16._8_4_ = fStack_190 * fStack_190 + local_198 * local_198;
        auVar16._12_4_ = fStack_18c * fStack_18c + fStack_194 * fStack_194;
        fVar28 = auVar16._4_4_ + auVar16._0_4_;
        fVar17 = auVar16._8_4_ + auVar16._4_4_;
        fVar26 = auVar16._12_4_ + auVar16._8_4_;
        fVar31 = auVar16._0_4_ + auVar16._12_4_;
        auVar5._4_4_ = fVar17;
        auVar5._0_4_ = fVar28;
        auVar5._8_4_ = fVar26;
        auVar5._12_4_ = fVar31;
        auVar13 = rsqrtps(auVar16,auVar5);
        fVar47 = auVar13._0_4_;
        fVar15 = auVar13._4_4_;
        fVar48 = auVar13._8_4_;
        fVar25 = auVar13._12_4_;
        fVar47 = (_DAT_146af0cd0 - fVar47 * fVar47 * fVar28 * _DAT_146af0cd0) * fVar47 + fVar47;
        fVar15 = (fRam0000000146af0cd4 - fVar15 * fVar15 * fVar17 * fRam0000000146af0cd4) * fVar15 +
                 fVar15;
        fVar48 = (fRam0000000146af0cd8 - fVar48 * fVar48 * fVar26 * fRam0000000146af0cd8) * fVar48 +
                 fVar48;
        fVar25 = (fRam0000000146af0cdc - fVar25 * fVar25 * fVar31 * fRam0000000146af0cdc) * fVar25 +
                 fVar25;
        fVar21 = 0.0;
        fVar35 = (float)(((uint)(((_DAT_146af0cd0 - fVar47 * fVar47 * fVar28 * _DAT_146af0cd0) *
                                  fVar47 + fVar47) * local_198) ^ _DAT_146af0cc0) &
                         -(uint)(1e-08 <= fVar28) ^ _DAT_146af0cc0);
        fVar36 = (float)(((uint)(((fRam0000000146af0cd4 -
                                  fVar15 * fVar15 * fVar17 * fRam0000000146af0cd4) * fVar15 + fVar15
                                 ) * fStack_194) ^ uRam0000000146af0cc4) & -(uint)(1e-08 <= fVar17)
                        ^ uRam0000000146af0cc4);
        fVar22 = (float)(((uint)(((fRam0000000146af0cd8 -
                                  fVar48 * fVar48 * fVar26 * fRam0000000146af0cd8) * fVar48 + fVar48
                                 ) * fStack_190) ^ uRam0000000146af0cc8) & -(uint)(1e-08 <= fVar26)
                        ^ uRam0000000146af0cc8);
        fVar23 = (float)(((uint)(((fRam0000000146af0cdc -
                                  fVar25 * fVar25 * fVar31 * fRam0000000146af0cdc) * fVar25 + fVar25
                                 ) * fStack_18c) ^ uRam0000000146af0ccc) & -(uint)(1e-08 <= fVar31)
                        ^ uRam0000000146af0ccc);
        fVar47 = local_158;
        fVar48 = fStack_154;
        fVar28 = fStack_150;
      }
      local_148 = CONCAT44(fVar36,fVar35);
      uStack_140 = CONCAT44(fVar23,fVar22);
      local_128 = CONCAT44(fVar39 * fVar2,fVar37 * fVar1);
      uStack_120 = CONCAT44(fVar43 * fVar4,fVar41 * fVar3);
      local_138 = CONCAT44(fVar48,fVar47);
      uStack_130 = CONCAT44(fVar21,fVar28);
    }
  }
LAB_1423b11bc:
  if (param_4 == 1) {
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
      if (lVar8 == 0) {
        puVar11 = (undefined8 *)&DAT_1468b5b70;
      }
      else {
        puVar11 = (undefined8 *)(lVar8 + 0x210);
      }
      local_188 = *puVar11;
      uStack_180 = puVar11[1];
      local_178 = puVar11[2];
      uStack_170 = puVar11[3];
      local_168 = puVar11[4];
      uStack_160 = puVar11[5];
      FUN_14162bcf0(&local_148,param_2,&local_188);
      return param_2;
    }
  }
  else if (param_4 == 2) {
LAB_1423b11d0:
    FUN_14162bcf0(&local_148,param_2,puVar11);
    return param_2;
  }
  *param_2 = local_148;
  param_2[1] = uStack_140;
  local_f8 = local_128;
  uStack_f0 = uStack_120;
LAB_1423b131c:
  param_2[4] = local_f8;
  param_2[5] = uStack_f0;
  param_2[2] = local_138;
  param_2[3] = uStack_130;
  return param_2;
}



// FUNCTION 1423b1350 GetSplineLength body=29 status=ok
// SIG undefined GetSplineLength(void)

undefined4 FSplineCurves::GetSplineLength(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x50)) {
    return *(undefined4 *)
            (*(longlong *)(param_1 + 0x48) + -0x14 + (longlong)*(int *)(param_1 + 0x50) * 0x14);
  }
  return 0;
}



// FUNCTION 1423b1370 FUN_1423b1370 body=38 status=ok
// SIG undefined FUN_1423b1370(void)

undefined4 FUN_1423b1370(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x740)) {
    return *(undefined4 *)
            (*(longlong *)(param_1 + 0x738) + -0x14 + (longlong)*(int *)(param_1 + 0x740) * 0x14);
  }
  return 0;
}



// FUNCTION 1423b13a0 FUN_1423b13a0 body=80 status=ok
// SIG undefined FUN_1423b13a0(void)

undefined8 FUN_1423b13a0(longlong param_1,int param_2)

{
  char cVar1;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x6f8))) {
    cVar1 = *(char *)((longlong)param_2 * 0x2c + 0x28 + *(longlong *)(param_1 + 0x6f0));
    if (cVar1 == '\0') {
      return 0;
    }
    if (cVar1 == '\x01') {
      return 1;
    }
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        return 4;
      }
      if (cVar1 == '\x05') {
        return 3;
      }
    }
  }
  return 2;
}



// FUNCTION 1423b13f0 FUN_1423b13f0 body=67 status=ok
// SIG undefined FUN_1423b13f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423b13f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar2 = *(uint *)(param_1 + 0x230) & _DAT_146af0d10;
  uVar3 = *(uint *)(param_1 + 0x234) & uRam0000000146af0d14;
  uVar4 = *(uint *)(param_1 + 0x238) & uRam0000000146af0d18;
  uVar5 = *(uint *)(param_1 + 0x23c) & uRam0000000146af0d1c;
  auVar6._4_4_ = uVar3;
  auVar6._0_4_ = uVar2;
  auVar6._8_4_ = uVar4;
  auVar6._12_4_ = uVar5;
  auVar7._4_4_ = uVar4;
  auVar7._0_4_ = uVar3;
  auVar7._8_4_ = uVar2;
  auVar7._12_4_ = uVar5;
  auVar7 = maxps(auVar6,auVar7);
  auVar1._4_4_ = uVar2;
  auVar1._0_4_ = uVar4;
  auVar1._8_4_ = uVar3;
  auVar1._12_4_ = uVar5;
  auVar7 = maxps(auVar7,auVar1);
  FUN_1423700c0(uVar3,uVar4,0,auVar7._0_4_ * *(float *)(param_1 + 0x850),param_3);
  return;
}



// FUNCTION 1423b1440 FUN_1423b1440 body=89 status=ok
// SIG undefined FUN_1423b1440(void)

undefined8 FUN_1423b1440(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  uVar1 = FInterpCurve<float>::Eval(param_1 + 0x738,param_3,local_res8);
  FUN_1423b14a0(param_1,param_2,uVar1,param_4);
  return param_2;
}



// FUNCTION 1423b14a0 FUN_1423b14a0 body=234 status=ok
// SIG undefined FUN_1423b14a0(void)

float * FUN_1423b14a0(longlong param_1,float *param_2,undefined4 param_3,int param_4)

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
  
  FInterpCurve<FVector>::EvalDerivative(param_1 + 0x6f0,param_2,param_3,&DAT_1468b5d90);
  if (param_4 == 1) {
    fVar1 = *(float *)(param_1 + 0x210);
    fVar2 = *(float *)(param_1 + 0x214);
    fVar3 = *(float *)(param_1 + 0x218);
    fVar4 = *(float *)(param_1 + 0x21c);
    fVar8 = *param_2 * *(float *)(param_1 + 0x230);
    fVar9 = param_2[1] * *(float *)(param_1 + 0x234);
    fVar10 = param_2[2] * *(float *)(param_1 + 0x238);
    fVar5 = fVar10 * fVar2 - fVar9 * fVar3;
    fVar6 = fVar8 * fVar3 - fVar10 * fVar1;
    fVar7 = fVar9 * fVar1 - fVar8 * fVar2;
    fVar5 = fVar5 + fVar5;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    *(ulonglong *)param_2 =
         CONCAT44((fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6 + fVar9,
                  (fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5 + fVar8);
    param_2[2] = (fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7 + fVar10;
  }
  return param_2;
}



// FUNCTION 1423b1590 FUN_1423b1590 body=231 status=ok
// SIG undefined FUN_1423b1590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1423b1590(longlong param_1,undefined8 *param_2,float param_3,undefined8 param_4,char param_5)

{
  float fVar1;
  undefined4 local_res8 [2];
  
  fVar1 = 0.0;
  if (*(float *)(param_1 + 0x7b8) == 0.0) {
    *param_2 = _DAT_1468b5d90;
    *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
    return param_2;
  }
  if (param_5 != '\0') {
    if (0 < *(int *)(param_1 + 0x740)) {
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x738) + -0x14 +
                        (longlong)*(int *)(param_1 + 0x740) * 0x14);
    }
    local_res8[0] = 0;
    FInterpCurve<float>::Eval
              (param_1 + 0x738,(param_3 / *(float *)(param_1 + 0x7b8)) * fVar1,local_res8);
  }
  FUN_1423b14a0(param_1,param_2);
  return param_2;
}



// FUNCTION 1423b1680 FUN_1423b1680 body=9 status=ok
// SIG undefined FUN_1423b1680(void)

undefined4 FUN_1423b1680(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc70);
}



// FUNCTION 1423b1690 FUN_1423b1690 body=98 status=ok
// SIG undefined FUN_1423b1690(void)

undefined8
FUN_1423b1690(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  uVar1 = FInterpCurve<float>::Eval(param_1 + 0x738,param_3,local_res8);
  FUN_1423b1700(param_1,param_2,uVar1,param_4,param_5);
  return param_2;
}



// FUNCTION 1423b1700 FUN_1423b1700 body=1626 status=ok
// SIG undefined FUN_1423b1700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1423b1700(longlong param_1,float *param_2,undefined4 param_3,int param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  int iVar9;
  undefined1 (*pauVar10) [12];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar16;
  float fVar17;
  undefined1 auVar15 [16];
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
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 local_128;
  undefined4 local_124;
  float local_120;
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
  float local_d4;
  float local_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  FInterpCurve<FVector>::Eval(param_1 + 0x6f0,&local_d8,param_3,&DAT_1468b5d90);
  FUN_1423af700(param_1,&local_b8,param_3,0);
  local_128 = 0x3f800000;
  local_124 = 0x3f800000;
  local_120 = 1.0;
  if (param_5 == '\0') {
    pauVar10 = (undefined1 (*) [12])&local_128;
  }
  else {
    FInterpCurve<FVector>::Eval(param_1 + 0x720,&local_c8,param_3,&local_128);
    pauVar10 = (undefined1 (*) [12])&local_c8;
  }
  fVar22 = (float)*(undefined8 *)*pauVar10;
  fVar26 = (float)((ulonglong)*(undefined8 *)*pauVar10 >> 0x20);
  auVar7._4_4_ = local_d4;
  auVar7._0_4_ = local_d8;
  auVar7._8_4_ = local_d0;
  fVar1 = *(float *)(*pauVar10 + 8);
  auVar8 = *pauVar10;
  auVar12._12_4_ = 0;
  auVar12._0_12_ = *pauVar10;
  *(undefined1 (*) [16])(param_2 + 8) = auVar12;
  *param_2 = local_b8;
  param_2[1] = fStack_b4;
  param_2[2] = fStack_b0;
  param_2[3] = fStack_ac;
  auVar7._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 4) = auVar7;
  fVar32 = fRam0000000146af0bf8;
  fVar29 = fRam0000000146af0bf4;
  fVar25 = _DAT_146af0bf0;
  if (param_4 == 1) {
    auVar12 = *(undefined1 (*) [16])(param_1 + 0x230);
    fVar2 = auVar12._0_4_;
    fVar3 = auVar12._4_4_;
    fVar4 = auVar12._8_4_;
    fVar5 = auVar12._12_4_;
    auVar11._12_4_ = 0;
    auVar11._0_12_ = auVar8;
    fVar14 = *(float *)(param_1 + 0x210);
    fVar42 = *(float *)(param_1 + 0x214);
    fVar16 = *(float *)(param_1 + 0x218);
    fVar17 = *(float *)(param_1 + 0x21c);
    auVar12 = minps(auVar11,auVar12);
    auVar13._4_4_ = -(uint)(auVar12._4_4_ < fRam0000000146af0cf4);
    auVar13._0_4_ = -(uint)(auVar12._0_4_ < _DAT_146af0cf0);
    auVar13._8_4_ = -(uint)(auVar12._8_4_ < fRam0000000146af0cf8);
    auVar13._12_4_ = -(uint)(auVar12._12_4_ < fRam0000000146af0cfc);
    iVar9 = movmskps(fVar1,auVar13);
    if (iVar9 == 0) {
      local_d8 = fVar2 * local_d8;
      local_d4 = fVar3 * local_d4;
      local_d0 = fVar4 * local_d0;
      fVar34 = fVar5 * 0.0;
      fVar36 = fVar14 * fStack_ac * _DAT_146af0cb0 + local_b8 * fVar17 +
               fVar42 * fStack_b0 * _DAT_146af0ca0 + fVar16 * fStack_b4 * _DAT_146af0c90;
      fVar18 = fVar14 * fStack_b0 * fRam0000000146af0cb4 + fStack_b4 * fVar17 +
               fVar42 * fStack_ac * fRam0000000146af0ca4 + fVar16 * local_b8 * fRam0000000146af0c94;
      fVar19 = fVar14 * fStack_b4 * fRam0000000146af0cb8 + fStack_b0 * fVar17 +
               fVar42 * local_b8 * fRam0000000146af0ca8 + fVar16 * fStack_ac * fRam0000000146af0c98;
      fVar20 = fVar14 * local_b8 * fRam0000000146af0cbc + fStack_ac * fVar17 +
               fVar42 * fStack_b4 * fRam0000000146af0cac + fVar16 * fStack_b0 * fRam0000000146af0c9c
      ;
      fVar25 = local_d0 * fVar42 - local_d4 * fVar16;
      fVar29 = local_d8 * fVar16 - local_d0 * fVar14;
      fVar32 = local_d4 * fVar14 - local_d8 * fVar42;
      fVar33 = fVar34 * fVar17 - fVar34 * fVar17;
      fVar25 = fVar25 + fVar25;
      fVar29 = fVar29 + fVar29;
      fVar32 = fVar32 + fVar32;
      fVar33 = fVar33 + fVar33;
      local_e8 = (fVar32 * fVar42 - fVar29 * fVar16) + fVar25 * fVar17 + local_d8 +
                 *(float *)(param_1 + 0x220);
      fStack_e4 = (fVar25 * fVar16 - fVar32 * fVar14) + fVar29 * fVar17 + local_d4 +
                  *(float *)(param_1 + 0x224);
      fStack_e0 = (fVar29 * fVar14 - fVar25 * fVar42) + fVar32 * fVar17 + local_d0 +
                  *(float *)(param_1 + 0x228);
      fVar25 = (fVar33 * fVar17 - fVar33 * fVar17) + fVar33 * fVar17 + fVar34 +
               *(float *)(param_1 + 0x22c);
    }
    else {
      fVar33 = *(float *)(param_1 + 0x220);
      fVar34 = *(float *)(param_1 + 0x224);
      fVar36 = *(float *)(param_1 + 0x228);
      fVar18 = fVar42 + fVar42;
      fVar20 = fVar16 + fVar16;
      fVar21 = fVar14 * (fVar14 + fVar14);
      fVar19 = (fVar14 + fVar14) * fVar17;
      fVar39 = (fVar20 * fVar17 + fVar18 * fVar14) * fVar2;
      fVar40 = (fVar19 + fVar20 * fVar42) * fVar3;
      fVar41 = (fVar18 * fVar17 + fVar20 * fVar14) * fVar4;
      fVar23 = fVar3 * (fVar18 * fVar14 - fVar20 * fVar17);
      fVar27 = fVar4 * (fVar20 * fVar42 - fVar19);
      fVar30 = fVar2 * (fVar20 * fVar14 - fVar18 * fVar17);
      fVar14 = (float)((uint)((_DAT_146af0bf0 - (fVar16 * fVar20 + fVar42 * fVar18)) * fVar2) &
                      _DAT_146af0c00);
      fVar16 = (float)((uint)((fRam0000000146af0bf4 - (fVar16 * fVar20 + fVar21)) * fVar3) &
                      uRam0000000146af0c04);
      fVar19 = (float)((uint)((fRam0000000146af0bf8 - (fVar42 * fVar18 + fVar21)) * fVar4) &
                      uRam0000000146af0c08);
      fVar20 = (float)((uint)((fRam0000000146af0bfc - (fVar21 + fVar21)) * fVar5) &
                      uRam0000000146af0c0c);
      fVar17 = fStack_b4 + fStack_b4;
      fVar18 = fStack_b0 + fStack_b0;
      fVar21 = (local_b8 + local_b8) * local_b8;
      fVar42 = fStack_ac * (local_b8 + local_b8);
      fVar35 = (fStack_ac * fVar18 + local_b8 * fVar17) * fVar22;
      fVar37 = (fVar42 + fStack_b4 * fVar18) * fVar26;
      fVar38 = (fStack_ac * fVar17 + local_b8 * fVar18) * fVar1;
      fVar24 = fVar26 * (local_b8 * fVar17 - fStack_ac * fVar18);
      fVar28 = fVar1 * (fStack_b4 * fVar18 - fVar42);
      fVar31 = fVar22 * (local_b8 * fVar18 - fStack_ac * fVar17);
      fVar42 = (float)((uint)((_DAT_146af0bf0 - (fVar18 * fStack_b0 + fVar17 * fStack_b4)) * fVar22)
                      & _DAT_146af0c00);
      fVar18 = (float)((uint)((fRam0000000146af0bf4 - (fVar18 * fStack_b0 + fVar21)) * fVar26) &
                      uRam0000000146af0c04);
      fVar17 = (float)((uint)((fRam0000000146af0bf8 - (fVar17 * fStack_b4 + fVar21)) * fVar1) &
                      uRam0000000146af0c08);
      fVar21 = (float)((uint)((fRam0000000146af0bfc - (fVar21 + fVar21)) * 0.0) &
                      uRam0000000146af0c0c);
      local_118 = fVar35 * fVar23 + fVar42 * fVar14 + fVar31 * fVar41 + fVar21 * fVar33;
      fStack_114 = fVar35 * fVar16 + fVar42 * fVar39 + fVar31 * fVar27 + fVar21 * fVar34;
      fStack_110 = fVar35 * fVar40 + fVar42 * fVar30 + fVar31 * fVar19 + fVar21 * fVar36;
      fStack_10c = fVar35 * fVar20 + fVar42 * fVar20 + fVar31 * fVar20 +
                   fVar21 * fRam0000000146af0bfc;
      local_108 = fVar18 * fVar23 + fVar24 * fVar14 + fVar37 * fVar41 + fVar21 * fVar33;
      fStack_104 = fVar18 * fVar16 + fVar24 * fVar39 + fVar37 * fVar27 + fVar21 * fVar34;
      fStack_100 = fVar18 * fVar40 + fVar24 * fVar30 + fVar37 * fVar19 + fVar21 * fVar36;
      fStack_fc = fVar18 * fVar20 + fVar24 * fVar20 + fVar37 * fVar20 +
                  fVar21 * fRam0000000146af0bfc;
      local_f8 = fVar28 * fVar23 + fVar38 * fVar14 + fVar17 * fVar41 + fVar21 * fVar33;
      fStack_f4 = fVar28 * fVar16 + fVar38 * fVar39 + fVar17 * fVar27 + fVar21 * fVar34;
      fStack_f0 = fVar28 * fVar40 + fVar38 * fVar30 + fVar17 * fVar19 + fVar21 * fVar36;
      fStack_ec = fVar28 * fVar20 + fVar38 * fVar20 + fVar17 * fVar20 +
                  fVar21 * fRam0000000146af0bfc;
      local_e8 = local_d4 * fVar23 + local_d8 * fVar14 + local_d0 * fVar41 +
                 fRam0000000146af0bfc * fVar33;
      fStack_e4 = local_d4 * fVar16 + local_d8 * fVar39 + local_d0 * fVar27 +
                  fRam0000000146af0bfc * fVar34;
      fStack_e0 = local_d4 * fVar40 + local_d8 * fVar30 + local_d0 * fVar19 +
                  fRam0000000146af0bfc * fVar36;
      fStack_dc = local_d4 * fVar20 + local_d8 * fVar20 + local_d0 * fVar20 +
                  fRam0000000146af0bfc * fRam0000000146af0bfc;
      local_120 = fVar1;
      FMatrix::RemoveScaling(&local_118);
      fVar25 = (float)(-(uint)(_DAT_146af0cf0 <= fVar2 * fVar22) & (_DAT_146af0ce0 ^ (uint)fVar25) ^
                      _DAT_146af0ce0);
      fVar29 = (float)(-(uint)(fRam0000000146af0cf4 <= fVar3 * fVar26) &
                       (uRam0000000146af0ce4 ^ (uint)fVar29) ^ uRam0000000146af0ce4);
      fVar32 = (float)(-(uint)(fRam0000000146af0cf8 <= fVar4 * fVar1) &
                       (uRam0000000146af0ce8 ^ (uint)fVar32) ^ uRam0000000146af0ce8);
      local_118 = local_118 * fVar25;
      fStack_114 = fStack_114 * fVar25;
      fStack_110 = fStack_110 * fVar25;
      fStack_104 = fStack_104 * fVar29;
      fStack_100 = fStack_100 * fVar29;
      local_108 = local_108 * fVar29;
      fStack_f4 = fStack_f4 * fVar32;
      fStack_f0 = fStack_f0 * fVar32;
      local_f8 = local_f8 * fVar32;
      FQuat::FQuat(&local_c8,&local_118);
      auVar15._0_4_ = local_c8 * local_c8 + fStack_c0 * fStack_c0;
      auVar15._4_4_ = fStack_c4 * fStack_c4 + fStack_bc * fStack_bc;
      auVar15._8_4_ = fStack_c0 * fStack_c0 + local_c8 * local_c8;
      auVar15._12_4_ = fStack_bc * fStack_bc + fStack_c4 * fStack_c4;
      fVar16 = auVar15._4_4_ + auVar15._0_4_;
      fVar17 = auVar15._8_4_ + auVar15._4_4_;
      fVar33 = auVar15._12_4_ + auVar15._8_4_;
      fVar34 = auVar15._0_4_ + auVar15._12_4_;
      auVar6._4_4_ = fVar17;
      auVar6._0_4_ = fVar16;
      auVar6._8_4_ = fVar33;
      auVar6._12_4_ = fVar34;
      auVar12 = rsqrtps(auVar15,auVar6);
      fVar29 = auVar12._0_4_;
      fVar32 = auVar12._4_4_;
      fVar14 = auVar12._8_4_;
      fVar42 = auVar12._12_4_;
      fVar29 = (_DAT_146af0cd0 - fVar29 * fVar29 * fVar16 * _DAT_146af0cd0) * fVar29 + fVar29;
      fVar32 = (fRam0000000146af0cd4 - fVar32 * fVar32 * fVar17 * fRam0000000146af0cd4) * fVar32 +
               fVar32;
      fVar14 = (fRam0000000146af0cd8 - fVar14 * fVar14 * fVar33 * fRam0000000146af0cd8) * fVar14 +
               fVar14;
      fVar42 = (fRam0000000146af0cdc - fVar42 * fVar42 * fVar34 * fRam0000000146af0cdc) * fVar42 +
               fVar42;
      fVar25 = 0.0;
      fVar36 = (float)(((uint)(((_DAT_146af0cd0 - fVar29 * fVar29 * fVar16 * _DAT_146af0cd0) *
                                fVar29 + fVar29) * local_c8) ^ _DAT_146af0cc0) &
                       -(uint)(1e-08 <= fVar16) ^ _DAT_146af0cc0);
      fVar18 = (float)(((uint)(((fRam0000000146af0cd4 -
                                fVar32 * fVar32 * fVar17 * fRam0000000146af0cd4) * fVar32 + fVar32)
                              * fStack_c4) ^ uRam0000000146af0cc4) & -(uint)(1e-08 <= fVar17) ^
                      uRam0000000146af0cc4);
      fVar19 = (float)(((uint)(((fRam0000000146af0cd8 -
                                fVar14 * fVar14 * fVar33 * fRam0000000146af0cd8) * fVar14 + fVar14)
                              * fStack_c0) ^ uRam0000000146af0cc8) & -(uint)(1e-08 <= fVar33) ^
                      uRam0000000146af0cc8);
      fVar20 = (float)(((uint)(((fRam0000000146af0cdc -
                                fVar42 * fVar42 * fVar34 * fRam0000000146af0cdc) * fVar42 + fVar42)
                              * fStack_bc) ^ uRam0000000146af0ccc) & -(uint)(1e-08 <= fVar34) ^
                      uRam0000000146af0ccc);
    }
    param_2[4] = local_e8;
    param_2[5] = fStack_e4;
    param_2[6] = fStack_e0;
    param_2[7] = fVar25;
    param_2[8] = fVar2 * fVar22;
    param_2[9] = fVar3 * fVar26;
    param_2[10] = fVar4 * fVar1;
    param_2[0xb] = fVar5 * 0.0;
    *param_2 = fVar36;
    param_2[1] = fVar18;
    param_2[2] = fVar19;
    param_2[3] = fVar20;
  }
  return param_2;
}



// FUNCTION 1423b1d60 FUN_1423b1d60 body=110 status=ok
// SIG undefined FUN_1423b1d60(void)

undefined8
FUN_1423b1d60(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x710);
  if (iVar1 < 1) {
    puVar3 = &DAT_146af0f20;
  }
  else {
    if (((*(char *)(param_1 + 0x7c1) == '\0') || (param_3 < iVar1)) && (-1 < param_3)) {
      iVar2 = iVar1 + -1;
      if (param_3 < iVar1 + -1) {
        iVar2 = param_3;
      }
    }
    else {
      iVar2 = 0;
    }
    puVar3 = (undefined4 *)((longlong)iVar2 * 0x50 + *(longlong *)(param_1 + 0x708));
  }
  FUN_1423b1700(param_1,param_2,*puVar3,param_4,param_5);
  return param_2;
}



// FUNCTION 1423b1dd0 FUN_1423b1dd0 body=248 status=ok
// SIG undefined FUN_1423b1dd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1423b1dd0(longlong param_1,undefined8 *param_2,float param_3,undefined8 param_4,char param_5)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 local_res8 [2];
  
  uVar1 = uRam00000001468b5b78;
  fVar2 = 0.0;
  if (*(float *)(param_1 + 0x7b8) == 0.0) {
    *param_2 = _DAT_1468b5b70;
    param_2[1] = uVar1;
    uVar1 = uRam00000001468b5b88;
    param_2[2] = _DAT_1468b5b80;
    param_2[3] = uVar1;
    uVar1 = uRam00000001468b5b98;
    param_2[4] = _DAT_1468b5b90;
    param_2[5] = uVar1;
    return param_2;
  }
  if (param_5 != '\0') {
    if (0 < *(int *)(param_1 + 0x740)) {
      fVar2 = *(float *)(*(longlong *)(param_1 + 0x738) + -0x14 +
                        (longlong)*(int *)(param_1 + 0x740) * 0x14);
    }
    local_res8[0] = 0;
    FInterpCurve<float>::Eval
              (param_1 + 0x738,(param_3 / *(float *)(param_1 + 0x7b8)) * fVar2,local_res8);
  }
  FUN_1423b1700(param_1,param_2);
  return param_2;
}



// FUNCTION 1423b1ee0 FUN_1423b1ee0 body=89 status=ok
// SIG undefined FUN_1423b1ee0(void)

undefined8 FUN_1423b1ee0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  uVar1 = FInterpCurve<float>::Eval(param_1 + 0x738,param_3,local_res8);
  FUN_1423b1f40(param_1,param_2,uVar1,param_4);
  return param_2;
}



// FUNCTION 1423b1f40 FUN_1423b1f40 body=516 status=ok
// SIG undefined FUN_1423b1f40(void)

float * FUN_1423b1f40(longlong param_1,float *param_2,undefined4 param_3,int param_4)

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
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  
  FUN_1423af700(param_1,&local_68,param_3,0);
  fVar7 = DAT_1464aa7a0 * local_64 - DAT_1464aa798._4_4_ * local_60;
  fVar8 = (float)DAT_1464aa798 * local_60 - DAT_1464aa7a0 * local_68;
  fVar7 = fVar7 + fVar7;
  fVar6 = DAT_1464aa798._4_4_ * local_68 - (float)DAT_1464aa798 * local_64;
  fVar8 = fVar8 + fVar8;
  fVar6 = fVar6 + fVar6;
  fVar10 = (fVar6 * local_64 - fVar8 * local_60) + fVar7 * local_5c + (float)DAT_1464aa798;
  *param_2 = fVar10;
  fVar9 = (fVar8 * local_68 - fVar7 * local_64) + fVar6 * local_5c + DAT_1464aa7a0;
  fVar6 = (fVar7 * local_60 - fVar6 * local_68) + fVar8 * local_5c + DAT_1464aa798._4_4_;
  param_2[2] = fVar9;
  param_2[1] = fVar6;
  if (param_4 == 1) {
    fVar7 = *(float *)(param_1 + 0x210);
    fVar8 = *(float *)(param_1 + 0x214);
    fVar1 = *(float *)(param_1 + 0x218);
    fVar2 = *(float *)(param_1 + 0x21c);
    fVar3 = fVar9 * fVar8 - fVar6 * fVar1;
    fVar4 = fVar10 * fVar1 - fVar9 * fVar7;
    fVar5 = fVar6 * fVar7 - fVar10 * fVar8;
    fVar3 = fVar3 + fVar3;
    fVar4 = fVar4 + fVar4;
    fVar5 = fVar5 + fVar5;
    *(ulonglong *)param_2 =
         CONCAT44((fVar3 * fVar1 - fVar5 * fVar7) + fVar2 * fVar4 + fVar6,
                  (fVar5 * fVar8 - fVar4 * fVar1) + fVar2 * fVar3 + fVar10);
    param_2[2] = (fVar4 * fVar7 - fVar3 * fVar8) + fVar2 * fVar5 + fVar9;
  }
  return param_2;
}



// FUNCTION 1423b2150 FUN_1423b2150 body=101 status=ok
// SIG undefined FUN_1423b2150(void)

undefined8 FUN_1423b2150(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x710);
  if (iVar1 < 1) {
    puVar3 = &DAT_146af0f20;
  }
  else {
    if (((*(char *)(param_1 + 0x7c1) == '\0') || (param_3 < iVar1)) && (-1 < param_3)) {
      iVar2 = iVar1 + -1;
      if (param_3 < iVar1 + -1) {
        iVar2 = param_3;
      }
    }
    else {
      iVar2 = 0;
    }
    puVar3 = (undefined4 *)((longlong)iVar2 * 0x50 + *(longlong *)(param_1 + 0x708));
  }
  FUN_1423b1f40(param_1,param_2,*puVar3);
  return param_2;
}



// FUNCTION 1423b21c0 FUN_1423b21c0 body=231 status=ok
// SIG undefined FUN_1423b21c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1423b21c0(longlong param_1,undefined8 *param_2,float param_3,undefined8 param_4,char param_5)

{
  float fVar1;
  undefined4 local_res8 [2];
  
  fVar1 = 0.0;
  if (*(float *)(param_1 + 0x7b8) == 0.0) {
    *param_2 = _DAT_1468b5d90;
    *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
    return param_2;
  }
  if (param_5 != '\0') {
    if (0 < *(int *)(param_1 + 0x740)) {
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x738) + -0x14 +
                        (longlong)*(int *)(param_1 + 0x740) * 0x14);
    }
    local_res8[0] = 0;
    FInterpCurve<float>::Eval
              (param_1 + 0x738,(param_3 / *(float *)(param_1 + 0x7b8)) * fVar1,local_res8);
  }
  FUN_1423b1f40(param_1,param_2);
  return param_2;
}



// FUNCTION 1423b22b0 FUN_1423b22b0 body=603 status=ok
// SIG undefined FUN_1423b22b0(void)

longlong FUN_1423b22b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_res18;
  
  if (param_1 != 0) {
    if ((*(longlong *)(param_1 + 0x118) == 0) ||
       (local_res10 = *(longlong *)(param_1 + 0x118), (*(byte *)(param_1 + 0x881) & 0x20) != 0)) {
      local_res10 = param_1;
    }
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_146531e10,local_res8);
    plVar4 = (longlong *)0x0;
    plVar3 = plVar4;
    if (local_res8[0] != -1) {
      plVar3 = (longlong *)(DAT_146531e10 + (longlong)local_res8[0] * 0x18);
    }
    plVar5 = plVar3 + 1;
    if (plVar3 == (longlong *)0x0) {
      plVar5 = plVar4;
    }
    if (plVar5 == (longlong *)0x0) {
      local_res18 = &local_res10;
      FUN_14239e870(&DAT_146531e10,local_res8,&local_res18,0);
      plVar5 = (longlong *)(DAT_146531e10 + ((longlong)local_res8[0] * 3 + 1) * 8);
      plVar3 = (longlong *)operator_new(0xa0);
      if (plVar3 != (longlong *)0x0) {
        *(byte *)((longlong)plVar3 + 2) = *(byte *)((longlong)plVar3 + 2) & 0xe0;
        *(undefined2 *)plVar3 = 0;
        *(undefined4 *)((longlong)plVar3 + 4) = 1;
        plVar3[1] = 1;
        plVar3[2] = 0;
        *(undefined4 *)(plVar3 + 3) = 4;
        *(undefined4 *)((longlong)plVar3 + 0x1c) = 6;
        plVar3[4] = 0;
        plVar3[5] = 0;
        plVar3[6] = 0;
        plVar3[7] = 0;
        plVar3[10] = 0;
        plVar3[0xb] = 0;
        *(undefined4 *)(plVar3 + 0xc) = 0xffffffff;
        *(undefined4 *)((longlong)plVar3 + 100) = 0;
        plVar3[0xe] = 0;
        *(undefined4 *)(plVar3 + 0xf) = 0;
        plVar3[0x10] = 0;
        iVar1 = (int)plVar3[5];
        *(int *)(plVar3 + 5) = iVar1 + 1;
        if (*(int *)((longlong)plVar3 + 0x2c) < iVar1 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar3 + 4,iVar1);
        }
        *(undefined4 *)(plVar3[4] + (longlong)iVar1 * 4) = 0x3c23d70a;
        iVar1 = (int)plVar3[5];
        *(int *)(plVar3 + 5) = iVar1 + 1;
        if (*(int *)((longlong)plVar3 + 0x2c) < iVar1 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar3 + 4,iVar1);
        }
        *(undefined4 *)(plVar3[4] + (longlong)iVar1 * 4) = 0x3a83126f;
        iVar1 = (int)plVar3[5];
        *(int *)(plVar3 + 5) = iVar1 + 1;
        if (*(int *)((longlong)plVar3 + 0x2c) < iVar1 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar3 + 4,iVar1);
        }
        *(undefined4 *)(plVar3[4] + (longlong)iVar1 * 4) = 0x3a03126f;
        iVar1 = (int)plVar3[5];
        *(int *)(plVar3 + 5) = iVar1 + 1;
        if (*(int *)((longlong)plVar3 + 0x2c) < iVar1 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar3 + 4,iVar1);
        }
        *(undefined4 *)(plVar3[4] + (longlong)iVar1 * 4) = 0x3983126f;
        *(undefined4 *)(plVar3 + 0x11) = 0;
        *(undefined1 *)((longlong)plVar3 + 0x8c) = 0;
        plVar3[0x12] = 0;
        plVar3[0x13] = 0;
        plVar4 = plVar3;
      }
      *plVar5 = (longlong)plVar4;
    }
    lVar2 = *plVar5;
    iVar1 = *(int *)(lVar2 + 0x98);
    *(int *)(lVar2 + 0x98) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x9c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x90,iVar1);
    }
    *(longlong *)(*(longlong *)(lVar2 + 0x90) + (longlong)iVar1 * 8) = param_1;
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x8e0,lVar2);
    return lVar2;
  }
  return 0;
}



// FUNCTION 1423b2510 FUN_1423b2510 body=257 status=ok
// SIG undefined FUN_1423b2510(void)

void FUN_1423b2510(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (param_1[0xe3] != 0) {
    iVar4 = *(int *)(param_1[0xe3] + 0xa8);
    iVar2 = (int)param_1[0xdf];
    if ((int)param_1[0xdf] <= iVar4) {
      iVar2 = iVar4;
    }
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        uVar3 = (**(code **)(*param_1 + 0x560))(param_1,iVar4);
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        iVar4 = iVar4 + 1;
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar3;
      } while (iVar4 < iVar2);
    }
  }
  if (param_1[0xff] != 0) {
    iVar4 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
    }
    *(longlong *)(*param_2 + (longlong)iVar4 * 8) = param_1[0xff];
  }
  if (param_1[0x100] != 0) {
    iVar4 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
    }
    *(longlong *)(*param_2 + (longlong)iVar4 * 8) = param_1[0x100];
  }
  return;
}



// FUNCTION 1423b2620 GetValidElementCount body=55 status=ok
// SIG undefined GetValidElementCount(void)

int FBaseBlendedCurve<TMemStackAllocator<0>_>::GetValidElementCount(undefined8 *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  
  iVar3 = 0;
  if ((param_1 != (undefined8 *)0x0) && (lVar5 = (longlong)*(int *)(param_1 + 1), 0 < lVar5)) {
    psVar4 = (short *)*param_1;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
      iVar2 = iVar3 + 1;
      if (sVar1 == -1) {
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return iVar3;
}



// FUNCTION 1423b2660 FUN_1423b2660 body=322 status=ok
// SIG undefined FUN_1423b2660(void)

undefined4 * FUN_1423b2660(longlong param_1,undefined4 *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int local_res8 [2];
  int local_28 [4];
  
  local_res8[0] = -1;
  if ((*(longlong *)(param_1 + 0x718) != 0) && (*(longlong *)(param_1 + 0x888) != 0)) {
    if ((0 < *(int *)(param_1 + 0x860)) &&
       ((-1 < param_4 && (lVar2 = *(longlong *)(param_1 + 0x858), param_4 < *(int *)(lVar2 + 0x28)))
       )) {
      lVar4 = *(longlong *)(lVar2 + 0x20);
      if (*(longlong *)(lVar2 + 0x20) == 0) {
        lVar4 = lVar2 + 0x10;
      }
      lVar2 = *(longlong *)(lVar4 + (longlong)param_4 * 8);
      if (((lVar2 != 0) && (*(char *)(lVar2 + 0x28) != '\0')) && (param_3 < *(int *)(lVar2 + 0x54)))
      {
        *param_2 = *(undefined4 *)
                    ((ulonglong)(uint)(*(int *)(lVar2 + 0x50) * param_3) +
                    *(longlong *)(lVar2 + 0x48));
        return param_2;
      }
    }
    lVar2 = (longlong)param_4;
    plVar1 = *(longlong **)**(undefined8 **)(*(longlong *)(param_1 + 0x888) + 0x40);
    plVar3 = (longlong *)plVar1[0x44];
    if ((longlong *)plVar1[0x44] == (longlong *)0x0) {
      plVar3 = plVar1 + 0x2e;
    }
    if ((char)plVar3[lVar2 * 0xb + 5] != '\0') {
      FSkeletalMeshLODRenderData::GetSectionFromVertexIndex(plVar1,param_3,local_res8,local_28);
      plVar3 = (longlong *)plVar1[0x44];
      if ((longlong *)plVar1[0x44] == (longlong *)0x0) {
        plVar3 = plVar1 + 0x2e;
      }
      *param_2 = *(undefined4 *)
                  ((ulonglong)
                   (uint)((*(int *)((longlong)local_res8[0] * 0x108 + 0x10 + *plVar1) + local_28[0])
                         * (int)plVar3[lVar2 * 0xb + 10]) + plVar3[lVar2 * 0xb + 9]);
      return param_2;
    }
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 1423b27b0 FUN_1423b27b0 body=801 status=ok
// SIG undefined FUN_1423b27b0(void)

uint * FUN_1423b27b0(longlong param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  float fVar10;
  uint local_res8 [2];
  uint local_38;
  int local_34 [3];
  
  if (((*(longlong *)(param_1 + 0x718) == 0) || (*(longlong *)(param_1 + 0x888) == 0)) ||
     (plVar2 = *(longlong **)**(undefined8 **)(*(longlong *)(param_1 + 0x888) + 0x40),
     (char)plVar2[0xb] == '\0')) {
    *(undefined8 *)param_2 = DAT_1468b5d88;
    return param_2;
  }
  FSkeletalMeshLODRenderData::GetSectionFromVertexIndex(plVar2,param_3,local_res8,local_34);
  uVar8 = (ulonglong)*(uint *)(plVar2 + 0x21);
  uVar7 = uVar8;
  if (param_4 <= *(uint *)(plVar2 + 0x21)) {
    uVar7 = (ulonglong)param_4;
  }
  uVar4 = (ulonglong)
          (uint)(local_34[0] + *(int *)((longlong)(int)local_res8[0] * 0x108 + *plVar2 + 0x10));
  if ((char)plVar2[0x22] == '\0') {
    lVar5 = uVar4 * uVar8 * 4 + plVar2[0x1f];
    uVar1 = *(ushort *)(lVar5 + 2 + uVar7 * 4);
    uVar6 = (uint)uVar1;
    local_38 = (uVar6 & 0xffff8000) << 0x10;
    if ((uVar1 & 0x7c00) == 0) {
      if ((uVar1 & 0x3ff) != 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_1468509dc) &&
           (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
          DAT_1468509d8 = 1.442695;
          _Init_thread_footer(&DAT_1468509dc);
        }
        fVar10 = _guard_xfg_dispatch_icall_nop((float)(uVar6 & 0x3ff));
        iVar9 = 10 - (int)(fVar10 * DAT_1468509d8);
        local_38 = (uVar6 & 0x3ff) << ((char)iVar9 + 0xdU & 0x1f) & 0x7fffff |
                   (0x71U - iVar9 & 0xff) << 0x17 | local_38;
      }
    }
    else if ((uVar1 & 0x7c00) == 0x7c00) {
      local_38 = local_38 | 0x477fe000;
    }
    else {
      local_38 = ((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar6 & 0x3ff) << 0xd | local_38;
    }
    uVar1 = *(ushort *)(lVar5 + uVar7 * 4);
    uVar6 = (uVar1 & 0xffff8000) << 0x10;
    if ((uVar1 & 0x7c00) == 0) {
      uVar3 = uVar1 & 0x3ff;
      local_res8[0] = uVar6;
      if ((uVar1 & 0x3ff) != 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_1468509dc) &&
           (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
          DAT_1468509d8 = 1.442695;
          _Init_thread_footer(&DAT_1468509dc);
        }
        fVar10 = _guard_xfg_dispatch_icall_nop((float)uVar3);
        iVar9 = 10 - (int)(fVar10 * DAT_1468509d8);
        local_res8[0] =
             uVar3 << ((char)iVar9 + 0xdU & 0x1f) & 0x7fffff | (0x71U - iVar9 & 0xff) << 0x17 |
             uVar6;
      }
    }
    else if ((uVar1 & 0x7c00) == 0x7c00) {
      local_res8[0] = uVar6 | 0x477fe000;
    }
    else {
      local_res8[0] = ((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd | uVar6;
    }
    *param_2 = local_res8[0];
    param_2[1] = local_38;
    return param_2;
  }
  *(undefined8 *)param_2 = *(undefined8 *)(plVar2[0x1f] + (uVar4 * uVar8 + uVar7) * 8);
  return param_2;
}



// FUNCTION 1423b2ae0 FUN_1423b2ae0 body=343 status=ok
// SIG undefined FUN_1423b2ae0(void)

undefined8 * FUN_1423b2ae0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(uint *)(param_1 + 0x18) & 0x300;
  if (((*(byte *)(param_1 + 0x3a0) & 1) == 0) || (uVar5 != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af1028) && (_Init_thread_header(&DAT_146af1028), DAT_146af1028 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146af1020 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Editor.OverrideDrawOnlyIfSelected");
    _Init_thread_footer(&DAT_146af1028);
  }
  uVar6 = 0;
  if (((DAT_146af1020 != (longlong *)0x0) &&
      (iVar4 = (**(code **)(*DAT_146af1020 + 0x68))(), iVar4 == 1)) && (uVar5 == 0)) {
    bVar1 = false;
  }
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  cVar2 = FUN_142730ad0(param_1,param_3);
  if ((cVar2 != '\0') && (bVar1)) {
    uVar6 = 0x400;
  }
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | uVar6 | 0x200;
  bVar3 = FUN_142730880(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) =
       (*(uint *)((longlong)param_2 + 4) & 0xfffff7ff | (uint)bVar3 << 0xb) & 0xffff7fff;
  return param_2;
}



// FUNCTION 1423b2c40 FUN_1423b2c40 body=294 status=ok
// SIG undefined FUN_1423b2c40(void)

void FUN_1423b2c40(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(longlong *)(param_1 + 0xcf8) == 0) {
    return;
  }
  uVar5 = FTaskGraphInterface::Get();
  FTaskGraphInterface::WaitUntilTaskCompletes(uVar5,param_1 + 0xcf8,2);
  lVar6 = *(longlong *)(param_1 + 0xcf8);
  if (lVar6 == 0) {
    return;
  }
  lVar8 = 0;
  *(undefined8 *)(param_1 + 0xcf8) = 0;
  if (lVar6 != 0) {
    LOCK();
    piVar1 = (int *)(lVar6 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (*(longlong *)(param_1 + 0xcd0) != 0) {
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x720);
    if (cVar4 != '\0') {
      lVar6 = FWeakObjectPtr::Get(param_1 + 0x720);
      if (lVar6 != 0) {
        lVar7 = FUN_142a0cc80();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar8 = lVar6;
        }
      }
      if (*(int *)(param_1 + 0x790) == 0) {
        TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
        ::Reset(param_1 + 0xd00);
        goto LAB_1423b2d43;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0xcd0) + 0x50))
              (*(longlong **)(param_1 + 0xcd0),param_1 + 0xd00,param_1,lVar8);
  }
LAB_1423b2d43:
  if (*(char *)(param_1 + 0xead) != '\0') {
    FUN_1426c0650(param_1,0);
  }
  return;
}



// FUNCTION 1423b2d70 FUN_1423b2d70 body=110 status=ok
// SIG undefined FUN_1423b2d70(void)

undefined1 FUN_1423b2d70(longlong param_1,char param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xe08) != 0) {
    if (param_2 != '\0') {
      uVar1 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar1,param_1 + 0xe08,2);
      FUN_1423a6c80(param_1,param_3);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1423b2e00 FUN_1423b2e00 body=26 status=ok
// SIG undefined FUN_1423b2e00(void)

undefined1 FUN_1423b2e00(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0xa48) == 0) && (*(longlong *)(param_1 + 0xa60) == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 1423b2e20 FUN_1423b2e20 body=208 status=ok
// SIG undefined FUN_1423b2e20(void)

void FUN_1423b2e20(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x720);
  if ((cVar2 == '\0') && (param_2 < *(int *)(param_1 + 0x870))) {
    *(undefined1 *)(lVar3 + *(longlong *)(param_1 + 0x868)) = 2;
    FUN_1423b6f00(param_1);
  }
  if (((*(longlong *)(param_1 + 0x718) != 0) && (-1 < param_2)) &&
     (param_2 < *(int *)(param_1 + 0xa90))) {
    auVar1._4_4_ = DAT_1468b5d94;
    auVar1._0_4_ = DAT_1468b5d90;
    auVar1._8_4_ = DAT_1468b5d98;
    auVar1._12_4_ = 0;
    *(undefined1 (*) [16])(*(longlong *)(param_1 + 0xa88) + 0x20 + lVar3 * 0x30) = auVar1;
    *(byte *)(param_1 + 0xb1d) = *(byte *)(param_1 + 0xb1d) & 0xf7;
    if (param_3 != 0) {
      if (param_3 == 1) {
        FUN_1427e86c0(param_1,*(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x718) + 0x158) + lVar3 * 0x10
                               ));
      }
    }
  }
  return;
}



// FUNCTION 1423b2ef0 FUN_1423b2ef0 body=70 status=ok
// SIG undefined FUN_1423b2ef0(void)

void FUN_1423b2ef0(longlong param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x720);
  if ((cVar1 == '\0') && (param_2 < *(int *)(param_1 + 0x870))) {
    *(undefined1 *)((longlong)param_2 + *(longlong *)(param_1 + 0x868)) = 2;
    FUN_1423b6f00(param_1);
  }
  return;
}



// FUNCTION 1423b2f40 FUN_1423b2f40 body=55 status=ok
// SIG undefined FUN_1423b2f40(void)

void FUN_1423b2f40(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1423ac950();
  if (iVar1 != -1) {
    (**(code **)(*param_1 + 0x9d0))(param_1,iVar1,param_3);
  }
  return;
}



// FUNCTION 1423b2f80 FUN_1423b2f80 body=933 status=ok
// SIG undefined FUN_1423b2f80(void)

void FUN_1423b2f80(longlong *param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  
  if (param_1[0xe3] == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
    return;
  }
  plVar17 = param_1 + 0x103;
  lVar16 = 0;
  *(undefined2 *)(param_1 + 0x166) = 0;
  bVar3 = *(byte *)((longlong)param_1 + 0xb1c);
  *(byte *)((longlong)param_1 + 0xb1c) = bVar3 & 0xfb;
  iVar2 = (int)param_1[0x104];
  iVar4 = *(int *)(param_1[0xe3] + 0x128);
  if (iVar2 < iVar4) {
    *(int *)(param_1 + 0x104) = iVar4;
    if (*(int *)((longlong)param_1 + 0x824) < iVar4) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar17);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar17 + (longlong)iVar2 * 4),0,(longlong)(iVar4 - iVar2) << 2);
  }
  else if ((iVar4 < iVar2) && (iVar4 != iVar2)) {
    *(int *)(param_1 + 0x104) = iVar4;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar17);
  }
  plVar17 = param_1 + 0x1c1;
  if (*plVar17 != 0) {
    uVar13 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes(uVar13,plVar17,2);
    lVar5 = *plVar17;
    *plVar17 = 0;
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    param_1[0x1c3] = 0;
    param_1[0x1c4] = 0;
  }
  if (param_1[0x148] != 0) {
    lVar14 = FUN_1428eccf0();
    lVar5 = param_1[0x148];
    lVar6 = lVar5;
joined_r0x0001423b309f:
    if (lVar6 != 0) {
      if (lVar6 != lVar14) goto code_r0x0001423b30a6;
      if ((lVar5 != 0) && (param_1[0x149] != 0)) {
        lVar6 = *(longlong *)(param_1[0x149] + 0x10);
        lVar14 = lVar16;
        if (lVar5 != 0) {
          lVar15 = FUN_1428eccf0();
          for (lVar5 = param_1[0x148];
              (lVar14 = lVar16, lVar5 != 0 && (lVar14 = param_1[0x148], lVar5 != lVar15));
              lVar5 = *(longlong *)(lVar5 + 0x30)) {
          }
        }
        if (lVar6 == lVar14) goto LAB_1423b30af;
        bVar8 = true;
        goto LAB_1423b30b2;
      }
    }
  }
LAB_1423b30af:
  bVar8 = false;
LAB_1423b30b2:
  lVar5 = param_1[0x149];
  if ((lVar5 == 0) || (lVar16 = *(longlong *)(lVar5 + 0x28), lVar16 != 0)) {
    bVar10 = false;
    if ((lVar16 == 0) || (*(longlong *)(lVar5 + 0x28) == *(longlong *)(param_1[0xe3] + 0x48)))
    goto LAB_1423b30d2;
    bVar7 = true;
  }
  else {
    bVar10 = true;
LAB_1423b30d2:
    bVar7 = false;
  }
  if (((lVar16 == 0) || (bVar7)) || (cVar11 = FUN_1422af470(lVar16,param_1[0xe3]), cVar11 != '\0'))
  {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  *(undefined4 *)(param_1 + 400) = 0;
  if (((bVar8) || (bVar7)) || ((bVar9 || (bVar10)))) {
    if (param_1[0x149] != 0) {
      FUN_14225ceb0();
    }
    param_1[0x149] = 0;
    *(undefined4 *)(param_1 + 0x14b) = 0;
    if (*(int *)((longlong)param_1 + 0xa5c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x14a,0);
    }
  }
  FUN_1423b6f90(param_1,*(undefined4 *)((longlong)param_1 + 0x83c));
  cVar11 = FUN_1423b3e90(param_1,param_2);
  cVar12 = FWeakObjectPtr::IsValid(param_1 + 0xe4);
  if ((cVar12 != '\0') || ((cVar11 == '\0' && (param_1[0x149] != 0)))) goto LAB_1423b32ef;
  lVar16 = param_1[0x24];
  if (lVar16 == 0) {
    lVar16 = FUN_1423407b0(param_1);
  }
  if ((*(int *)(lVar16 + 0x708) == 2) && ((*(byte *)((longlong)param_1 + 0xb1c) & 0x10) == 0)) {
LAB_1423b326a:
    FUN_1423be6d0(param_1,0,0);
    (**(code **)(*param_1 + 0x960))(param_1,0);
  }
  else {
    plVar17 = (longlong *)FUN_1428e5be0();
    lVar16 = plVar17[0x1f];
    if (lVar16 == 0) {
      (**(code **)(*plVar17 + 0x368))(plVar17);
      lVar16 = plVar17[0x1f];
    }
    if (*(char *)(lVar16 + 0x6f) != '\0') goto LAB_1423b326a;
    TArray<FTransform,FDefaultAllocator>::operator=(param_1 + 0x151,param_1[0xe3] + 0x168);
    FUN_1423aaee0(param_1,param_1[0xe3],param_1 + 0x151,
                  param_1 + (longlong)*(int *)((longlong)param_1 + 0x76c) * 2 + 0xe5);
    *(byte *)((longlong)param_1 + 0x881) = *(byte *)((longlong)param_1 + 0x881) | 2;
    FUN_1423ac670(param_1);
  }
  if (cVar11 != '\0') {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x1b4,0);
  }
LAB_1423b32ef:
  FUN_140942fb0(param_1,0,0);
  *(byte *)((longlong)param_1 + 0xb1c) =
       *(byte *)((longlong)param_1 + 0xb1c) ^ (*(byte *)((longlong)param_1 + 0xb1c) ^ bVar3) & 4;
  return;
code_r0x0001423b30a6:
  lVar6 = *(longlong *)(lVar6 + 0x30);
  goto joined_r0x0001423b309f;
}



// FUNCTION 1423b3330 InitFrom body=184 status=ok
// SIG undefined InitFrom(void)

void FBaseBlendedCurve<FDefaultAllocator>::InitFrom(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined2 uVar3;
  short *psVar4;
  int iVar5;
  longlong lVar6;
  
  param_1[2] = (longlong)param_2;
  uVar3 = 0;
  if ((param_2 != (undefined8 *)0x0) && (lVar6 = (longlong)*(int *)(param_2 + 1), 0 < lVar6)) {
    psVar4 = (short *)*param_2;
    iVar5 = 0;
    do {
      iVar2 = iVar5 + 1;
      if (*psVar4 == -1) {
        iVar2 = iVar5;
      }
      uVar3 = (undefined2)iVar2;
      lVar6 = lVar6 + -1;
      psVar4 = psVar4 + 1;
      iVar5 = iVar2;
    } while (lVar6 != 0);
  }
  *(undefined2 *)(param_1 + 3) = uVar3;
  *(undefined4 *)(param_1 + 1) = 0;
  iVar5 = 0;
  if ((*(int *)((longlong)param_1 + 0xc) < 0) && (iVar5 = 0, *(int *)((longlong)param_1 + 0xc) != 0)
     ) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1);
    iVar5 = (int)param_1[1];
  }
  uVar1 = *(ushort *)(param_1 + 3);
  iVar2 = iVar5 + (uint)uVar1;
  *(int *)(param_1 + 1) = iVar2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
  }
  ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar5 * 8),0,(ulonglong)uVar1 << 3);
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}



// FUNCTION 1423b33f0 FUN_1423b33f0 body=129 status=ok
// SIG undefined FUN_1423b33f0(void)

void FUN_1423b33f0(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if (((param_2 != 0) && (cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xe4), cVar1 == '\0')) &&
     (iVar2 = 0, 0 < *(int *)(param_2 + 0x870))) {
    lVar3 = 0;
    do {
      if (*(char *)(lVar3 + *(longlong *)(param_2 + 0x868)) == '\x02') {
        (**(code **)(*param_1 + 0x9d0))(param_1,iVar2,0);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (iVar2 < *(int *)(param_2 + 0x870));
  }
  return;
}



// FUNCTION 1423b3480 FUN_1423b3480 body=309 status=ok
// SIG undefined FUN_1423b3480(void)

void FUN_1423b3480(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  if ((*(longlong *)(param_1 + 0x718) != 0) &&
     (iVar2 = *(int *)(*(longlong *)(param_1 + 0x718) + 0xd0), iVar2 != *(int *)(param_1 + 0x860)))
  {
    plVar1 = (longlong *)(param_1 + 0x858);
    plVar4 = (longlong *)*plVar1;
    iVar6 = 0;
    for (iVar5 = *(int *)(param_1 + 0x860); iVar5 != 0; iVar5 = iVar5 + -1) {
      FUN_1423a66a0(plVar4);
      puVar3 = (undefined8 *)plVar4[6];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
        plVar4[6] = 0;
      }
      if (plVar4[4] != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 7;
    }
    *(undefined4 *)(param_1 + 0x860) = 0;
    if (*(int *)(param_1 + 0x864) != iVar2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
                (plVar1,iVar2);
    }
    if (0 < *(int *)(*(longlong *)(param_1 + 0x718) + 0xd0)) {
      do {
        iVar2 = *(int *)(param_1 + 0x860);
        *(int *)(param_1 + 0x860) = iVar2 + 1;
        if (*(int *)(param_1 + 0x864) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar1,iVar2);
        }
        puVar3 = (undefined8 *)((longlong)iVar2 * 0x38 + *plVar1);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[4] = 0;
          puVar3[5] = 0;
          puVar3[6] = 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(*(longlong *)(param_1 + 0x718) + 0xd0));
    }
  }
  return;
}



// FUNCTION 1423b35c0 FUN_1423b35c0 body=705 status=ok
// SIG undefined FUN_1423b35c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423b35c0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  longlong local_b0 [2];
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  wchar_t *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  iVar4 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) == 4) {
    iVar4 = DAT_1464c9c14;
  }
  if ((1 < iVar4) || (DAT_1464c9c5a != '\0')) {
    local_50 = L"SkyTextureCube";
    local_c0 = &local_78;
    local_d0 = *(undefined4 *)(param_1 + 0x74);
    lVar7 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 1;
    local_64 = _DAT_1468b5d78;
    uStack_60 = uRam00000001468b5d7c;
    uStack_5c = uRam00000001468b5d80;
    uStack_58 = uRam00000001468b5d84;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    local_c8 = 0;
    local_d8 = *(undefined1 *)(param_1 + 0x78);
    (**(code **)(*DAT_146ab6358 + 0x660))
              (DAT_146ab6358,&local_b8,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x70));
    plVar8 = (longlong *)(param_1 + 0x80);
    if (plVar8 != &local_b8) {
      puVar2 = (undefined8 *)*plVar8;
      *plVar8 = local_b8;
      local_b8 = 0;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          if ((*(char *)(puVar2 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
            LOCK();
            bVar9 = *(int *)((longlong)puVar2 + 0xc) == 0;
            if (bVar9) {
              *(int *)((longlong)puVar2 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar9) {
              uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
              lVar6 = lVar7;
              if (uVar5 != 0) {
                lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar6 + 8) = puVar2;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_b8);
    TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,*plVar8);
    local_94 = 0x7f7fffff;
    local_a0 = 0x1010102;
    local_9c = 0;
    local_90 = 0;
    local_88 = 0;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_b0,&local_a0);
    plVar8 = (longlong *)(param_1 + 0x38);
    if (plVar8 != local_b0) {
      puVar2 = (undefined8 *)*plVar8;
      *plVar8 = local_b0[0];
      local_b0[0] = 0;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          if ((*(char *)(puVar2 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
            LOCK();
            bVar9 = *(int *)((longlong)puVar2 + 0xc) == 0;
            if (bVar9) {
              *(int *)((longlong)puVar2 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar9) {
              uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar5 != 0) {
                lVar7 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar7 + 8) = puVar2;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar5);
            }
          }
          else {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_b0);
  }
  return;
}



// FUNCTION 1423b3890 FUN_1423b3890 body=1535 status=ok
// SIG undefined FUN_1423b3890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423b3890(longlong param_1,float param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float *pfVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auStack_298 [32];
  float local_278;
  undefined8 local_268;
  undefined8 uStack_260;
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
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
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
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [144];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  if (0.0 <= param_2) {
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  *(float *)(param_1 + 0x10) = param_2;
  if ((param_2 <= 0.0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    uVar8 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 0x78) = uVar8;
    uVar8 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_1 + 0x88) = uVar8;
    uVar8 = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0x98) = uVar8;
    uVar8 = *(undefined8 *)(param_3 + 0xe);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_3 + 0xc);
    *(undefined8 *)(param_1 + 0xa8) = uVar8;
    uVar8 = *(undefined8 *)(param_3 + 0x12);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_1 + 0xb8) = uVar8;
    uVar8 = *(undefined8 *)(param_3 + 0x16);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_3 + 0x14);
    *(undefined8 *)(param_1 + 200) = uVar8;
    uVar8 = *(undefined8 *)(param_3 + 0x1a);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_1 + 0xd8) = uVar8;
    uVar8 = *(undefined8 *)(param_3 + 0x1e);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_3 + 0x1c);
    *(undefined8 *)(param_1 + 0xe8) = uVar8;
    uVar8 = *(undefined8 *)(param_3 + 0x22);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(param_1 + 0xf8) = uVar8;
    fVar2 = *param_5;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(float *)(param_1 + 0x100) = fVar2;
  }
  else if (1.0 <= param_2) {
    uVar8 = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)param_4;
    *(undefined8 *)(param_1 + 0x78) = uVar8;
    uVar8 = *(undefined8 *)(param_4 + 6);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_4 + 4);
    *(undefined8 *)(param_1 + 0x88) = uVar8;
    uVar8 = *(undefined8 *)(param_4 + 10);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)(param_1 + 0x98) = uVar8;
    uVar8 = *(undefined8 *)(param_4 + 0xe);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_4 + 0xc);
    *(undefined8 *)(param_1 + 0xa8) = uVar8;
    uVar8 = *(undefined8 *)(param_4 + 0x12);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(param_1 + 0xb8) = uVar8;
    uVar8 = *(undefined8 *)(param_4 + 0x16);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_4 + 0x14);
    *(undefined8 *)(param_1 + 200) = uVar8;
    uVar8 = *(undefined8 *)(param_4 + 0x1a);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_4 + 0x18);
    *(undefined8 *)(param_1 + 0xd8) = uVar8;
    uVar8 = *(undefined8 *)(param_4 + 0x1e);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_4 + 0x1c);
    *(undefined8 *)(param_1 + 0xe8) = uVar8;
    uVar8 = *(undefined8 *)(param_4 + 0x22);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_4 + 0x20);
    *(undefined8 *)(param_1 + 0xf8) = uVar8;
    *(float *)(param_1 + 0x100) = *param_6;
  }
  else {
    local_278 = 1.0 - param_2;
    _guard_xfg_dispatch_icall_nop(&local_1a8,0,0x90);
    fVar2 = *(float *)(param_1 + 0x10);
    lVar24 = 3;
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    lVar21 = 3;
    uStack_250 = 0;
    local_248 = 0;
    uStack_240 = 0;
    pfVar20 = param_4;
    do {
      fVar3 = *pfVar20;
      fVar4 = pfVar20[1];
      fVar5 = pfVar20[2];
      fVar6 = pfVar20[3];
      pfVar20 = pfVar20 + 4;
      pfVar1 = (float *)(((longlong)&local_278 - (longlong)param_4) + (longlong)pfVar20);
      *pfVar1 = fVar3 * fVar2;
      pfVar1[1] = fVar4 * fVar2;
      pfVar1[2] = fVar5 * fVar2;
      pfVar1[3] = fVar6 * fVar2;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar23 = 0;
    local_1a8 = local_268;
    uStack_1a0 = uStack_260;
    lVar22 = 3;
    local_188 = local_248;
    uStack_180 = uStack_240;
    local_198 = local_258;
    uStack_190 = uStack_250;
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_248 = 0;
    uStack_240 = 0;
    lVar21 = 0;
    do {
      pfVar20 = (float *)((longlong)param_4 + lVar21 + 0x30);
      fVar3 = pfVar20[1];
      fVar4 = pfVar20[2];
      fVar5 = pfVar20[3];
      *(float *)((longlong)&local_268 + lVar21) = *pfVar20 * fVar2;
      *(float *)((longlong)&local_268 + lVar21 + 4) = fVar3 * fVar2;
      *(float *)((longlong)&uStack_260 + lVar21) = fVar4 * fVar2;
      *(float *)((longlong)&uStack_260 + lVar21 + 4) = fVar5 * fVar2;
      lVar22 = lVar22 + -1;
      lVar21 = lVar21 + 0x10;
    } while (lVar22 != 0);
    lVar22 = 3;
    local_178 = local_268;
    uStack_170 = uStack_260;
    local_158 = local_248;
    uStack_150 = uStack_240;
    local_168 = local_258;
    uStack_160 = uStack_250;
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_248 = 0;
    uStack_240 = 0;
    lVar21 = 0;
    do {
      pfVar20 = (float *)((longlong)param_4 + lVar21 + 0x60);
      fVar3 = pfVar20[1];
      fVar4 = pfVar20[2];
      fVar5 = pfVar20[3];
      *(float *)((longlong)&local_268 + lVar21) = *pfVar20 * fVar2;
      *(float *)((longlong)&local_268 + lVar21 + 4) = fVar3 * fVar2;
      *(float *)((longlong)&uStack_260 + lVar21) = fVar4 * fVar2;
      *(float *)((longlong)&uStack_260 + lVar21 + 4) = fVar5 * fVar2;
      lVar22 = lVar22 + -1;
      lVar21 = lVar21 + 0x10;
    } while (lVar22 != 0);
    local_148 = local_268;
    uStack_140 = uStack_260;
    local_128 = local_248;
    uStack_120 = uStack_240;
    local_138 = local_258;
    uStack_130 = uStack_250;
    _guard_xfg_dispatch_icall_nop(&local_238,0,0x90);
    fVar2 = local_278;
    local_268 = 0;
    uStack_260 = 0;
    lVar21 = 3;
    local_258 = 0;
    uStack_250 = 0;
    local_248 = 0;
    uStack_240 = 0;
    pfVar20 = param_3;
    do {
      fVar3 = *pfVar20;
      fVar4 = pfVar20[1];
      fVar5 = pfVar20[2];
      fVar6 = pfVar20[3];
      pfVar20 = pfVar20 + 4;
      pfVar1 = (float *)(((longlong)&local_278 - (longlong)param_3) + (longlong)pfVar20);
      *pfVar1 = fVar3 * fVar2;
      pfVar1[1] = fVar4 * fVar2;
      pfVar1[2] = fVar5 * fVar2;
      pfVar1[3] = fVar6 * fVar2;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar22 = 3;
    local_238 = local_268;
    uStack_230 = uStack_260;
    local_218 = local_248;
    uStack_210 = uStack_240;
    local_228 = local_258;
    uStack_220 = uStack_250;
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_248 = 0;
    uStack_240 = 0;
    lVar21 = 0;
    do {
      pfVar20 = (float *)((longlong)param_3 + lVar21 + 0x30);
      fVar3 = pfVar20[1];
      fVar4 = pfVar20[2];
      fVar5 = pfVar20[3];
      *(float *)((longlong)&local_268 + lVar21) = *pfVar20 * fVar2;
      *(float *)((longlong)&local_268 + lVar21 + 4) = fVar3 * fVar2;
      *(float *)((longlong)&uStack_260 + lVar21) = fVar4 * fVar2;
      *(float *)((longlong)&uStack_260 + lVar21 + 4) = fVar5 * fVar2;
      lVar22 = lVar22 + -1;
      lVar21 = lVar21 + 0x10;
    } while (lVar22 != 0);
    lVar22 = 3;
    local_208 = local_268;
    uStack_200 = uStack_260;
    local_1e8 = local_248;
    uStack_1e0 = uStack_240;
    local_1f8 = local_258;
    uStack_1f0 = uStack_250;
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_248 = 0;
    uStack_240 = 0;
    lVar21 = 0;
    do {
      pfVar20 = (float *)((longlong)param_3 + lVar21 + 0x60);
      fVar3 = pfVar20[1];
      fVar4 = pfVar20[2];
      fVar5 = pfVar20[3];
      *(float *)((longlong)&local_268 + lVar21) = *pfVar20 * fVar2;
      *(float *)((longlong)&local_268 + lVar21 + 4) = fVar3 * fVar2;
      *(float *)((longlong)&uStack_260 + lVar21) = fVar4 * fVar2;
      *(float *)((longlong)&uStack_260 + lVar21 + 4) = fVar5 * fVar2;
      lVar22 = lVar22 + -1;
      lVar21 = lVar21 + 0x10;
    } while (lVar22 != 0);
    local_1d8 = local_268;
    uStack_1d0 = uStack_260;
    local_1b8 = local_248;
    uStack_1b0 = uStack_240;
    local_1c8 = local_258;
    uStack_1c0 = uStack_250;
    _guard_xfg_dispatch_icall_nop(local_118,0,0x90);
    lVar21 = 0;
    lVar22 = 3;
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_248 = 0;
    uStack_240 = 0;
    do {
      fVar2 = *(float *)((longlong)&local_238 + lVar21 + 4);
      fVar3 = *(float *)((longlong)&uStack_230 + lVar21);
      fVar4 = *(float *)((longlong)&uStack_230 + lVar21 + 4);
      fVar5 = *(float *)((longlong)&local_1a8 + lVar21 + 4);
      fVar6 = *(float *)((longlong)&uStack_1a0 + lVar21);
      fVar7 = *(float *)((longlong)&uStack_1a0 + lVar21 + 4);
      *(float *)((longlong)&local_268 + lVar21) =
           *(float *)((longlong)&local_238 + lVar21) + *(float *)((longlong)&local_1a8 + lVar21);
      uVar8 = local_268;
      *(float *)((longlong)&local_268 + lVar21 + 4) = fVar2 + fVar5;
      *(float *)((longlong)&uStack_260 + lVar21) = fVar3 + fVar6;
      uVar10 = uStack_260;
      *(float *)((longlong)&uStack_260 + lVar21 + 4) = fVar4 + fVar7;
      uVar18 = uStack_240;
      uVar16 = local_248;
      uVar14 = uStack_250;
      uVar12 = local_258;
      lVar21 = lVar21 + 0x10;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar21 = 0;
    lVar22 = 3;
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_248 = 0;
    uStack_240 = 0;
    do {
      fVar2 = *(float *)((longlong)&local_208 + lVar21 + 4);
      fVar3 = *(float *)((longlong)&uStack_200 + lVar21);
      fVar4 = *(float *)((longlong)&uStack_200 + lVar21 + 4);
      fVar5 = *(float *)((longlong)&local_178 + lVar21 + 4);
      fVar6 = *(float *)((longlong)&uStack_170 + lVar21);
      fVar7 = *(float *)((longlong)&uStack_170 + lVar21 + 4);
      *(float *)((longlong)&local_268 + lVar21) =
           *(float *)((longlong)&local_208 + lVar21) + *(float *)((longlong)&local_178 + lVar21);
      uVar9 = local_268;
      *(float *)((longlong)&local_268 + lVar21 + 4) = fVar2 + fVar5;
      *(float *)((longlong)&uStack_260 + lVar21) = fVar3 + fVar6;
      uVar11 = uStack_260;
      *(float *)((longlong)&uStack_260 + lVar21 + 4) = fVar4 + fVar7;
      uVar19 = uStack_240;
      uVar17 = local_248;
      uVar15 = uStack_250;
      uVar13 = local_258;
      lVar21 = lVar21 + 0x10;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_248 = 0;
    uStack_240 = 0;
    do {
      fVar2 = *(float *)((longlong)&local_1d8 + lVar23 + 4);
      fVar3 = *(float *)((longlong)&uStack_1d0 + lVar23);
      fVar4 = *(float *)((longlong)&uStack_1d0 + lVar23 + 4);
      fVar5 = *(float *)((longlong)&local_148 + lVar23 + 4);
      fVar6 = *(float *)((longlong)&uStack_140 + lVar23);
      fVar7 = *(float *)((longlong)&uStack_140 + lVar23 + 4);
      *(float *)((longlong)&local_268 + lVar23) =
           *(float *)((longlong)&local_1d8 + lVar23) + *(float *)((longlong)&local_148 + lVar23);
      *(float *)((longlong)&local_268 + lVar23 + 4) = fVar2 + fVar5;
      *(float *)((longlong)&uStack_260 + lVar23) = fVar3 + fVar6;
      *(float *)((longlong)&uStack_260 + lVar23 + 4) = fVar4 + fVar7;
      lVar23 = lVar23 + 0x10;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    *(undefined8 *)(param_1 + 0x70) = uVar8;
    *(undefined8 *)(param_1 + 0x78) = uVar10;
    *(undefined8 *)(param_1 + 0x80) = uVar12;
    *(undefined8 *)(param_1 + 0x88) = uVar14;
    *(undefined8 *)(param_1 + 0x90) = uVar16;
    *(undefined8 *)(param_1 + 0x98) = uVar18;
    *(undefined8 *)(param_1 + 0xa0) = uVar9;
    *(undefined8 *)(param_1 + 0xa8) = uVar11;
    *(undefined8 *)(param_1 + 0xb0) = uVar13;
    *(undefined8 *)(param_1 + 0xb8) = uVar15;
    *(undefined8 *)(param_1 + 0xc0) = uVar17;
    *(undefined8 *)(param_1 + 200) = uVar19;
    *(undefined8 *)(param_1 + 0xd0) = local_268;
    *(undefined8 *)(param_1 + 0xd8) = uStack_260;
    *(undefined8 *)(param_1 + 0xe0) = local_258;
    *(undefined8 *)(param_1 + 0xe8) = uStack_250;
    *(undefined8 *)(param_1 + 0xf0) = local_248;
    *(undefined8 *)(param_1 + 0xf8) = uStack_240;
    *(float *)(param_1 + 0x100) = (1.0 - param_2) * *param_5 + param_2 * *param_6;
  }
  return;
}



// FUNCTION 1423b3e90 FUN_1423b3e90 body=1501 status=ok
// SIG undefined FUN_1423b3e90(void)

undefined8 FUN_1423b3e90(longlong *param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  ulonglong in_stack_ffffffffffffff88;
  uint uVar17;
  ulonglong in_stack_ffffffffffffff90;
  ulonglong in_stack_ffffffffffffff98;
  longlong local_48;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  bVar16 = false;
  bVar2 = false;
  if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
    return 0;
  }
  cVar3 = FUN_1423b4f30();
  uVar17 = (uint)(in_stack_ffffffffffffff88 >> 0x20);
  uVar15 = 0;
  if (cVar3 == '\0') {
    if (((param_1[0xe3] != 0) && (*(longlong *)(param_1[0xe3] + 0x48) != 0)) &&
       ((char)param_1[0x163] == '\x01')) {
      uVar14 = uVar15;
      if (param_2 == '\0') {
        uVar14 = param_1[0x149];
        if (uVar14 != 0) {
          lVar6 = FUN_1428f7290();
          if ((*(int *)(*(longlong *)(uVar14 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar14 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          if (bVar16) goto LAB_1423b3fd1;
        }
        uVar14 = 0;
      }
LAB_1423b3fd1:
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar7 = FUN_1428f7290();
      in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffffffffff00;
      in_stack_ffffffffffffff90 = 0;
      in_stack_ffffffffffffff88 = (ulonglong)uVar17 << 0x20;
      lVar6 = FUN_1417985e0(uVar7,param_1,0,0,in_stack_ffffffffffffff88,0,in_stack_ffffffffffffff98,
                            0,0);
      param_1[0x149] = lVar6;
      bVar16 = lVar6 != 0;
      uVar8 = 0;
      if (bVar16) {
        FUN_142276240(lVar6);
        uVar8 = param_1[0x149];
      }
      if ((uVar14 == 0) || (uVar8 == 0)) {
        if (uVar8 == 0) {
LAB_1423b40fd:
          uVar8 = uVar15;
        }
        else {
          lVar6 = FUN_1428f7290();
          if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_1423b40fd;
        }
        plVar13 = param_1 + 0x14e;
      }
      else {
        local_40 = local_40 | 3;
        local_38 = 0x3f800000;
        local_3c = 0;
        local_48 = 0;
        FSingleAnimationPlayData::PopulateFrom(&local_48,uVar14);
        uVar8 = param_1[0x149];
        if (uVar8 == 0) {
LAB_1423b40b5:
          uVar8 = uVar15;
        }
        else {
          lVar6 = FUN_1428f7290();
          if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_1423b40b5;
        }
        plVar13 = &local_48;
      }
      FUN_14277bf60(plVar13,uVar8);
    }
    if ((((param_1[0xe3] != 0) && (*(longlong *)(param_1[0xe3] + 0x48) != 0)) &&
        ((char)param_1[0x163] == '\x03')) && (param_1[0x149] == 0)) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar7 = FUN_14294b8d0();
      in_stack_ffffffffffffff90 = 0;
      lVar6 = FUN_1417985e0(uVar7,param_1,0,0,in_stack_ffffffffffffff88 & 0xffffffff00000000,0,
                            in_stack_ffffffffffffff98 & 0xffffffffffffff00,0,0);
      param_1[0x149] = lVar6;
      if (lVar6 != 0) goto LAB_1423b4187;
    }
  }
  else {
    uVar14 = uVar15;
    if (param_1[0x148] != 0) {
      uVar5 = FUN_1428eccf0();
      for (uVar8 = param_1[0x148];
          (uVar14 = uVar15, uVar8 != 0 && (uVar14 = param_1[0x148], uVar8 != uVar5));
          uVar8 = *(ulonglong *)(uVar8 + 0x30)) {
      }
    }
    in_stack_ffffffffffffff90 = in_stack_ffffffffffffff90 & 0xffffffffffffff00;
    lVar6 = NewObject<USaveGame>(param_1,uVar14,0,0,0,in_stack_ffffffffffffff90,0);
    param_1[0x149] = lVar6;
    if (lVar6 != 0) {
      *(undefined4 *)(param_1 + 0x14b) = 0;
      if (*(int *)((longlong)param_1 + 0xa5c) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x14a,0);
      }
      lVar6 = param_1[0x149];
LAB_1423b4187:
      FUN_142276240(lVar6);
      bVar16 = true;
    }
  }
  lVar6 = param_1[0xe3];
  if (*(longlong *)(lVar6 + 0x2b0) != 0) {
    uVar5 = FUN_1428eccf0();
    uVar14 = *(ulonglong *)(lVar6 + 0x2b0);
    uVar8 = uVar14;
    if (uVar14 != 0) {
LAB_1423b41b4:
      if (uVar8 != uVar5) goto code_r0x0001423b41b9;
      if (uVar14 != 0) {
        uVar8 = uVar15;
        if (param_1[0x148] != 0) {
          uVar10 = FUN_1428eccf0();
          for (uVar5 = param_1[0x148];
              (uVar8 = uVar15, uVar5 != 0 && (uVar8 = param_1[0x148], uVar5 != uVar10));
              uVar5 = *(ulonglong *)(uVar5 + 0x30)) {
          }
        }
        if (uVar14 == uVar8) goto LAB_1423b41fd;
        goto LAB_1423b4204;
      }
    }
  }
LAB_1423b41fd:
  param_1[0x14c] = 0;
LAB_1423b4204:
  if (param_1[0xe3] != 0) {
    uVar14 = uVar15;
    if (param_1[0x148] != 0) {
      uVar5 = FUN_1428eccf0();
      for (uVar8 = param_1[0x148];
          (uVar14 = uVar15, uVar8 != 0 && (uVar14 = param_1[0x148], uVar8 != uVar5));
          uVar8 = *(ulonglong *)(uVar8 + 0x30)) {
      }
    }
    lVar6 = param_1[0xe3];
    uVar8 = uVar15;
    if (*(longlong *)(lVar6 + 0x2b0) != 0) {
      uVar9 = FUN_1428eccf0();
      uVar5 = *(ulonglong *)(lVar6 + 0x2b0);
      for (uVar10 = uVar5; (uVar8 = uVar15, uVar10 != 0 && (uVar8 = uVar5, uVar10 != uVar9));
          uVar10 = *(ulonglong *)(uVar10 + 0x30)) {
      }
    }
    uVar5 = uVar15;
    if (param_1[0x14c] != 0) {
      uVar5 = *(ulonglong *)(param_1[0x14c] + 0x10);
    }
    if ((uVar8 != 0) && (((uVar8 != uVar5 || (param_2 != '\0')) && (uVar14 != uVar8)))) {
      lVar6 = param_1[0xe3];
      uVar14 = uVar15;
      if (*(longlong *)(lVar6 + 0x2b0) != 0) {
        uVar10 = FUN_1428eccf0();
        uVar8 = *(ulonglong *)(lVar6 + 0x2b0);
        for (uVar5 = uVar8; (uVar14 = uVar15, uVar5 != 0 && (uVar14 = uVar8, uVar5 != uVar10));
            uVar5 = *(ulonglong *)(uVar5 + 0x30)) {
        }
      }
      lVar6 = NewObject<USaveGame>
                        (param_1,uVar14,0,0,0,in_stack_ffffffffffffff90 & 0xffffffffffffff00,0);
      param_1[0x14c] = lVar6;
      if (lVar6 != 0) {
        FUN_142276240(lVar6);
        lVar6 = FUN_142274fe0(param_1[0x14c]);
        if (lVar6 != 0) {
          lVar11 = FUN_1422743b0(param_1[0x14c]);
          *(longlong *)(lVar6 + 0x40) = lVar11;
          iVar4 = *(int *)(lVar11 + 8);
          if ((*(int *)(lVar6 + 0x3c) < iVar4) &&
             (*(undefined4 *)(lVar6 + 0x38) = 0, iVar4 != *(int *)(lVar6 + 0x3c))) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeTo(lVar6 + 0x30,iVar4);
            uVar15 = (ulonglong)*(uint *)(lVar6 + 0x38);
          }
          iVar4 = iVar4 + (int)uVar15;
          *(int *)(lVar6 + 0x38) = iVar4;
          if (*(int *)(lVar6 + 0x3c) < iVar4) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(lVar6 + 0x30,uVar15);
          }
        }
        bVar2 = true;
      }
      goto LAB_1423b43cc;
    }
  }
  lVar6 = param_1[0xe3];
  if (*(longlong *)(lVar6 + 0x2b0) != 0) {
    lVar12 = FUN_1428eccf0();
    lVar6 = *(longlong *)(lVar6 + 0x2b0);
    for (lVar11 = lVar6; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
      if (lVar11 == lVar12) {
        if (lVar6 != 0) goto LAB_1423b43cc;
        break;
      }
    }
  }
  param_1[0x14c] = 0;
LAB_1423b43cc:
  if (((param_1[0x149] != 0) && (!bVar16)) &&
     ((param_2 != '\0' || (*(char *)((longlong)param_1 + 0xeac) != '\0')))) {
    FUN_142276240();
    bVar16 = true;
  }
  if (((param_1[0x14c] != 0) && (!bVar2)) && (param_2 != '\0')) {
    FUN_142276240();
    bVar2 = true;
  }
  (**(code **)(*param_1 + 0x9e0))(param_1);
  if (!bVar16) {
    if (!bVar2) {
      return 0;
    }
    return 1;
  }
  *(undefined1 *)((longlong)param_1 + 0xeac) = 0;
  return 1;
code_r0x0001423b41b9:
  uVar8 = *(ulonglong *)(uVar8 + 0x30);
  if (uVar8 == 0) goto LAB_1423b41fd;
  goto LAB_1423b41b4;
}



// FUNCTION 1423b4470 InitializeComponent body=34 status=ok
// SIG undefined InitializeComponent(void)

void USkeletalMeshComponent::InitializeComponent(longlong *param_1)

{
  FUN_142340f20();
                    /* WARNING: Could not recover jumptable at 0x0001423b448b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa40))(param_1,0);
  return;
}



// FUNCTION 1423b44a0 Insert body=242 status=ok
// SIG undefined Insert(void)

int TArray<FInterpCurvePoint<FQuat>,FDefaultAllocator>::Insert
              (longlong *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  lVar3 = (longlong)param_3 * 0x50;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*param_1 + lVar3 + 0x50),(void *)(*param_1 + lVar3),
             (longlong)(iVar1 - param_3) * 0x50);
  lVar2 = *param_1;
  *(undefined4 *)(lVar3 + lVar2) = *param_2;
  *(undefined4 *)(lVar3 + 0x10 + lVar2) = param_2[4];
  *(undefined4 *)(lVar3 + 0x14 + lVar2) = param_2[5];
  *(undefined4 *)(lVar3 + 0x18 + lVar2) = param_2[6];
  *(undefined4 *)(lVar3 + 0x1c + lVar2) = param_2[7];
  *(undefined4 *)(lVar3 + 0x20 + lVar2) = param_2[8];
  *(undefined4 *)(lVar3 + 0x24 + lVar2) = param_2[9];
  *(undefined4 *)(lVar3 + 0x28 + lVar2) = param_2[10];
  *(undefined4 *)(lVar3 + 0x2c + lVar2) = param_2[0xb];
  *(undefined4 *)(lVar3 + 0x30 + lVar2) = param_2[0xc];
  *(undefined4 *)(lVar3 + 0x34 + lVar2) = param_2[0xd];
  *(undefined4 *)(lVar3 + 0x38 + lVar2) = param_2[0xe];
  *(undefined4 *)(lVar3 + 0x3c + lVar2) = param_2[0xf];
  *(undefined1 *)(lVar3 + 0x40 + lVar2) = *(undefined1 *)(param_2 + 0x10);
  return param_3;
}



// FUNCTION 1423b45a0 Insert body=191 status=ok
// SIG undefined Insert(void)

int TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::Insert
              (longlong *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  lVar3 = (longlong)param_3 * 0x2c;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*param_1 + lVar3 + 0x2c),(void *)(*param_1 + lVar3),
             (longlong)(iVar1 - param_3) * 0x2c);
  lVar2 = *param_1;
  *(undefined4 *)(lVar3 + lVar2) = *param_2;
  *(undefined8 *)(lVar3 + 4 + lVar2) = *(undefined8 *)(param_2 + 1);
  *(undefined4 *)(lVar3 + 0xc + lVar2) = param_2[3];
  *(undefined8 *)(lVar3 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 4);
  *(undefined4 *)(lVar3 + 0x18 + lVar2) = param_2[6];
  *(undefined8 *)(lVar3 + 0x1c + lVar2) = *(undefined8 *)(param_2 + 7);
  *(undefined4 *)(lVar3 + 0x24 + lVar2) = param_2[9];
  *(undefined1 *)(lVar3 + 0x28 + lVar2) = *(undefined1 *)(param_2 + 10);
  return param_3;
}



// FUNCTION 1423b4660 FUN_1423b4660 body=248 status=ok
// SIG undefined FUN_1423b4660(void)

void FUN_1423b4660(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  
  *(byte *)(param_1 + 0x881) = *(byte *)(param_1 + 0x881) & 0xfb;
  if (0 < *(int *)(param_1 + 0x780)) {
    iVar6 = 0;
    while( true ) {
      if ((iVar6 < 0) || (*(int *)(param_1 + 0x780) <= iVar6)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) break;
      local_res8 = *(undefined4 *)(*(longlong *)(param_1 + 0x778) + (longlong)iVar6 * 8);
      local_resc = *(undefined4 *)(*(longlong *)(param_1 + 0x778) + (longlong)iVar6 * 8 + 4);
      cVar3 = FWeakObjectPtr::IsValid(&local_res8);
      if (cVar3 != '\0') {
        lVar4 = FWeakObjectPtr::Get(&local_res8);
        *(byte *)(lVar4 + 0x881) = *(byte *)(lVar4 + 0x881) & 0xfb;
      }
      iVar6 = iVar6 + 1;
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x1a0);
  plVar1 = plVar7 + *(int *)(param_1 + 0x1a8);
  for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    lVar4 = *plVar7;
    if (lVar4 != 0) {
      lVar5 = FUN_142a0cc80();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && ((*(byte *)(lVar4 + 0x881) & 4) != 0)) {
        FUN_1423b4660(lVar4);
      }
    }
  }
  return;
}



// FUNCTION 1423b4760 FUN_1423b4760 body=124 status=ok
// SIG undefined FUN_1423b4760(void)

undefined8 FUN_1423b4760(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xbf8)) {
    lVar4 = 0;
    do {
      uVar1 = *(undefined8 *)(lVar4 + *(longlong *)(param_1 + 0xbf0));
      cVar2 = FUN_1426aaac0(uVar1);
      if ((cVar2 != '\0') && (cVar2 = FBodyInstance::IsValidBodyInstance(uVar1), cVar2 != '\0')) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0xbf8));
  }
  return 0;
}



// FUNCTION 1423b47e0 FUN_1423b47e0 body=144 status=ok
// SIG undefined FUN_1423b47e0(void)

ulonglong FUN_1423b47e0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  
  while( true ) {
    uVar1 = FWeakObjectPtr::IsValid(param_1 + 0x720);
    if (((char)uVar1 == '\0') && (param_2 < *(int *)(param_1 + 0x870))) break;
    uVar1 = FUN_14044af00(param_1 + 0x720,0);
    if ((char)uVar1 == '\0') goto LAB_1423b485e;
    param_1 = FWeakObjectPtr::Get(param_1 + 0x720);
  }
  if (param_2 != -1) {
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x868) >> 8),
                    *(char *)((longlong)param_2 + *(longlong *)(param_1 + 0x868)) != '\x01');
  }
LAB_1423b485e:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1423b4870 IsBoneHiddenByName body=42 status=ok
// SIG undefined IsBoneHiddenByName(void)

undefined4 USkinnedMeshComponent::IsBoneHiddenByName(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1423ac950();
  if (iVar1 != -1) {
    uVar2 = FUN_1423b47e0(param_1,iVar1);
    return uVar2;
  }
  return 0xffffff00;
}



// FUNCTION 1423b48a0 GetShowEnemyHealthBars body=8 status=ok
// SIG undefined GetShowEnemyHealthBars(void)

undefined1 UIndianaGameUserSettings::GetShowEnemyHealthBars(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x7c1);
}



// FUNCTION 1423b48b0 FUN_1423b48b0 body=11 status=ok
// SIG undefined FUN_1423b48b0(void)

byte FUN_1423b48b0(longlong param_1)

{
  return *(byte *)(param_1 + 0xb1d) >> 7;
}



// FUNCTION 1423b48c0 FUN_1423b48c0 body=58 status=ok
// SIG undefined FUN_1423b48c0(void)

bool FUN_1423b48c0(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = '\0';
  if ((((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x860))) &&
      (plVar1 = (longlong *)((longlong)param_3 * 0x38 + *(longlong *)(param_1 + 0x858)),
      -1 < param_2)) && (param_2 < (int)plVar1[1])) {
    cVar2 = *(char *)((longlong)param_2 + *plVar1);
  }
  return cVar2 == '\0';
}



// FUNCTION 1423b4900 IsMaterialSlotNameValid body=23 status=ok
// SIG undefined IsMaterialSlotNameValid(void)

bool UHoudiniStaticMeshComponent::IsMaterialSlotNameValid(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x8f0))();
  return -1 < iVar1;
}



// FUNCTION 1423b4920 FUN_1423b4920 body=43 status=ok
// SIG undefined FUN_1423b4920(void)

undefined1 FUN_1423b4920(longlong param_1)

{
  char cVar1;
  
  if (((*(byte *)(param_1 + 0x700) & 4) == 0) || ((*(byte *)(param_1 + 0xc0) & 1) == 0)) {
    cVar1 = FUN_1423908b0();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1423b4950 FUN_1423b4950 body=93 status=ok
// SIG undefined FUN_1423b4950(void)

ulonglong FUN_1423b4950(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0xa48);
  if (lVar2 != 0) {
    lVar3 = FUN_1428f7290();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      uVar4 = FUN_1422af760(lVar2);
      return uVar4;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1423b49b0 FUN_1423b49b0 body=79 status=ok
// SIG undefined FUN_1423b49b0(void)

byte FUN_1423b49b0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = 0;
  if (*(longlong *)(param_1 + 0xa48) != 0) {
    bVar1 = FUN_142276ee0();
  }
  if (*(longlong *)(param_1 + 0xa60) != 0) {
    bVar2 = FUN_142276ee0();
    return bVar2 | bVar1;
  }
  return bVar1;
}



// FUNCTION 1423b4a00 FUN_1423b4a00 body=85 status=ok
// SIG undefined FUN_1423b4a00(void)

bool FUN_1423b4a00(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0xa48) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xa48) + 0x30) == '\x03')) {
    cVar1 = FUN_142285b90();
    if (cVar1 != '\0') {
      return true;
    }
    lVar2 = FUN_142274500(*(undefined8 *)(param_1 + 0xa48));
    if (lVar2 != 0) {
      return *(int *)(lVar2 + 0x188) < 1;
    }
  }
  return false;
}



// FUNCTION 1423b4a60 FUN_1423b4a60 body=52 status=ok
// SIG undefined FUN_1423b4a60(void)

undefined1 FUN_1423b4a60(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x9f8))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x9f0))(param_1);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1423b4ac0 IsReadyForFinishDestroy body=26 status=ok
// SIG undefined IsReadyForFinishDestroy(void)

bool UPlanarReflectionComponent::IsReadyForFinishDestroy(longlong param_1)

{
  char cVar1;
  
  cVar1 = FRenderCommandFence::IsFenceComplete(param_1 + 0x4a0);
  return cVar1 != '\0';
}



// FUNCTION 1423b4ae0 FUN_1423b4ae0 body=79 status=ok
// SIG undefined FUN_1423b4ae0(void)

undefined8 FUN_1423b4ae0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar2 = FUN_1423407b0(), lVar2 == 0)) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  cVar1 = UWorld::IsGameWorld(lVar2);
  if (cVar1 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 1423b4b50 FUN_1423b4b50 body=263 status=ok
// SIG undefined FUN_1423b4b50(void)

void FUN_1423b4b50(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    param_1[0x148] = 0;
    if (param_1[0x149] != 0) {
      FUN_14225ceb0();
    }
    param_1[0x149] = 0;
    *(undefined4 *)(param_1 + 0x14b) = 0;
    if (*(int *)((longlong)param_1 + 0xa5c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x14a,0);
      return;
    }
  }
  else {
    lVar2 = param_1[0x163];
    *(undefined1 *)(param_1 + 0x163) = 0;
    lVar4 = 0;
    if (param_1[0x148] != 0) {
      lVar3 = FUN_1428eccf0();
      for (lVar1 = param_1[0x148];
          (lVar4 = 0, lVar1 != 0 && (lVar4 = param_1[0x148], lVar1 != lVar3));
          lVar1 = *(longlong *)(lVar1 + 0x30)) {
      }
    }
    if ((param_2 != lVar4) || ((char)lVar2 != '\0')) {
      param_1[0x148] = param_2;
      if (param_1[0x149] != 0) {
        FUN_14225ceb0();
      }
      param_1[0x149] = 0;
      *(undefined4 *)(param_1 + 0x14b) = 0;
      if (*(int *)((longlong)param_1 + 0xa5c) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x14a,0);
      }
      (**(code **)(*param_1 + 0xa40))(param_1,1);
    }
  }
  return;
}



// FUNCTION 1423b4c60 FUN_1423b4c60 body=142 status=ok
// SIG undefined FUN_1423b4c60(void)

void FUN_1423b4c60(longlong *param_1,longlong *param_2,float param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  longlong lVar8;
  short *psVar9;
  int iVar10;
  
  if (1e-05 < ABS(param_3)) {
    if (ABS(param_3 - 1.0) <= 1e-05) {
      if (param_2 != param_1) {
        puVar3 = (undefined8 *)param_2[2];
        param_1[2] = (longlong)puVar3;
        sVar7 = 0;
        if ((puVar3 != (undefined8 *)0x0) &&
           (lVar8 = (longlong)*(int *)(puVar3 + 1), sVar7 = 0, 0 < lVar8)) {
          psVar9 = (short *)*puVar3;
          sVar6 = 0;
          do {
            sVar7 = sVar6 + 1;
            if (*psVar9 == -1) {
              sVar7 = sVar6;
            }
            lVar8 = lVar8 + -1;
            psVar9 = psVar9 + 1;
            sVar6 = sVar7;
          } while (lVar8 != 0);
        }
        *(short *)(param_1 + 3) = sVar7;
        *(undefined4 *)(param_1 + 1) = 0;
        iVar10 = 0;
        if ((*(int *)((longlong)param_1 + 0xc) < 0) &&
           (iVar10 = 0, *(int *)((longlong)param_1 + 0xc) != 0)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_1);
          iVar10 = (int)param_1[1];
        }
        uVar1 = *(ushort *)(param_1 + 3);
        iVar5 = iVar10 + (uint)uVar1;
        *(int *)(param_1 + 1) = iVar5;
        if (*(int *)((longlong)param_1 + 0xc) < iVar5) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar10 * 8),0,(ulonglong)uVar1 << 3);
        *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      if ((*(int *)((longlong)param_1 + 0xc) < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
      }
      iVar10 = (int)param_2[1];
      if (iVar10 != 0) {
        iVar5 = (int)param_1[1];
        if (*(int *)((longlong)param_1 + 0xc) < iVar5 + iVar10) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_1);
          iVar5 = (int)param_1[1];
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar5 * 8),(void *)*param_2,(longlong)iVar10 << 3);
        *(int *)(param_1 + 1) = (int)param_1[1] + iVar10;
      }
      return;
    }
    iVar10 = 0;
    if (0 < (int)param_1[1]) {
      lVar8 = 0;
      do {
        if ((*(char *)(lVar8 + 4 + *param_1) == '\0') && (*(char *)(*param_2 + 4 + lVar8) == '\0'))
        {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        *(undefined1 *)(lVar8 + 4 + *param_1) = uVar4;
        iVar10 = iVar10 + 1;
        lVar2 = *param_1;
        *(float *)(lVar8 + lVar2) =
             (*(float *)(*param_2 + lVar8) - *(float *)(lVar8 + lVar2)) * param_3 +
             *(float *)(lVar8 + lVar2);
        lVar8 = lVar8 + 8;
      } while (iVar10 < (int)param_1[1]);
    }
  }
  return;
}



// FUNCTION 1423b4cf0 MergeInBoneIndexArrays body=235 status=ok
// SIG undefined MergeInBoneIndexArrays(void)

void MergeInBoneIndexArrays(longlong *param_1,longlong *param_2)

{
  void *_Src;
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar5 = 0;
  iVar6 = 0;
  if (0 < (int)param_2[1]) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      iVar3 = (int)param_1[1];
      uVar1 = *(ushort *)(lVar8 + *param_2);
      if (iVar5 == iVar3) {
        *(int *)(param_1 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
        }
        *(ushort *)(*param_1 + (longlong)iVar3 * 2) = uVar1;
LAB_1423b4da8:
        iVar6 = iVar6 + 1;
        lVar8 = lVar8 + 2;
      }
      else {
        lVar4 = *param_1;
        uVar2 = *(ushort *)(lVar4 + lVar7 * 2);
        if (uVar1 <= uVar2) {
          if (uVar2 != uVar1) {
            *(int *)(param_1 + 1) = iVar3 + 1;
            if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
              lVar4 = *param_1;
            }
            _Src = (void *)(lVar4 + (longlong)iVar5 * 2);
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)_Src + 2),_Src,(longlong)(iVar3 - iVar5) * 2);
            *(ushort *)(*param_1 + lVar7 * 2) = uVar1;
          }
          goto LAB_1423b4da8;
        }
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 1;
    } while (iVar6 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1423b4de0 FUN_1423b4de0 body=333 status=ok
// SIG undefined FUN_1423b4de0(void)

char FUN_1423b4de0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,char param_7)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  cVar5 = param_7;
  cVar4 = FUN_142391b90();
  if ((cVar4 != '\0') && (param_7 != '\0')) {
    if (*(longlong *)(param_1 + 0xa48) != 0) {
      FUN_14227db20(*(longlong *)(param_1 + 0xa48),param_7,param_3,param_4,param_5,param_6,cVar5);
    }
    uVar10 = 0;
    puVar8 = *(undefined8 **)(param_1 + 0xa50);
    uVar12 = (longlong)*(int *)(param_1 + 0xa58) & 0x1fffffffffffffff;
    if (puVar8 + *(int *)(param_1 + 0xa58) < puVar8) {
      uVar12 = uVar10;
    }
    if (uVar12 != 0) {
      do {
        FUN_14227db20(*puVar8,param_7,param_3,param_4,param_5,param_6,cVar5);
        uVar10 = uVar10 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar10 != uVar12);
    }
    if (*(longlong *)(param_1 + 0xa60) != 0) {
      FUN_14227db20(*(longlong *)(param_1 + 0xa60),param_7,param_3,param_4,param_5,param_6,cVar5);
    }
    bVar3 = false;
    *(int *)(param_1 + 0xea4) = *(int *)(param_1 + 0xea4) + 1;
    iVar7 = *(int *)(param_1 + 0xea4);
    iVar6 = *(int *)(param_1 + 0xe98) + -1;
    lVar11 = (longlong)iVar6;
    if (-1 < iVar6) {
      lVar9 = lVar11 << 4;
      bVar3 = false;
      do {
        lVar1 = *(longlong *)(param_1 + 0xe90);
        if (((*(int *)(lVar9 + 8 + lVar1) == 0) ||
            (plVar2 = *(longlong **)(lVar9 + lVar1), plVar2 == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(*plVar2 + 0x40))(), cVar5 == '\0')) {
          bVar3 = true;
        }
        lVar9 = lVar9 + -0x10;
        lVar11 = lVar11 + -1;
      } while (-1 < lVar11);
      iVar7 = *(int *)(param_1 + 0xea4);
    }
    *(int *)(param_1 + 0xea4) = iVar7 + -1;
    if (bVar3) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0xe90),0)
      ;
    }
  }
  return cVar4;
}



// FUNCTION 1423b4f30 FUN_1423b4f30 body=430 status=ok
// SIG undefined FUN_1423b4f30(void)

undefined8 FUN_1423b4f30(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    plVar4 = (longlong *)FUN_1428eccf0();
    plVar1 = *(longlong **)(param_1 + 0xa40);
    for (plVar7 = plVar1; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[6]) {
      if (plVar7 == plVar4) {
        if (plVar1 == (longlong *)0x0) break;
        uVar6 = UAnimClassInterface::GetPrivateStaticClass();
        plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar1,uVar6);
        if (plVar7 == (longlong *)0x0) {
          lVar8 = UDynamicClass::GetPrivateStaticClass();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) break;
          if (plVar1[0x1f] == 0) {
            (**(code **)(*plVar1 + 0x368))(plVar1);
          }
          lVar8 = plVar1[0x4c];
          if (lVar8 == 0) break;
          UAnimClassInterface::GetPrivateStaticClass();
          plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar8);
          if (plVar7 == (longlong *)0x0) break;
        }
        lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
        if (((lVar8 != 0) && (*(longlong *)(param_1 + 0x718) != 0)) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x718) + 0x48) == lVar8)) {
          FUN_1422af470(lVar8);
        }
        goto LAB_1423b4f74;
      }
    }
  }
  lVar8 = 0;
LAB_1423b4f74:
  if (((*(char *)(param_1 + 0xb18) != '\0') || (lVar8 == 0)) ||
     (*(longlong *)(param_1 + 0x718) == 0)) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0xa48) != 0) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa48) + 0x10);
    if (*(longlong *)(param_1 + 0xa40) != 0) {
      lVar5 = FUN_1428eccf0();
      lVar9 = *(longlong *)(param_1 + 0xa40);
      for (lVar2 = lVar9; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar5) goto LAB_1423b4fd6;
      }
    }
    lVar9 = 0;
LAB_1423b4fd6:
    if ((lVar8 == lVar9) && (*(longlong *)(*(longlong *)(param_1 + 0xa48) + 0x20) == param_1)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1423b50e0 FUN_1423b50e0 body=84 status=ok
// SIG undefined FUN_1423b50e0(void)

void FUN_1423b50e0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  thunk_FUN_1423424e0();
  cVar2 = (**(code **)(*param_1 + 0x460))(param_1);
  if ((cVar2 == '\0') && (cVar2 = UActorComponent::IsComponentTickEnabled(param_1), cVar2 == '\0'))
  {
    return;
  }
  lVar1 = *param_1;
  cVar2 = (**(code **)(lVar1 + 0xa08))(param_1);
  (**(code **)(lVar1 + 0x358))(param_1,cVar2 == '\0');
  return;
}



// FUNCTION 1423b5140 FUN_1423b5140 body=772 status=ok
// SIG undefined FUN_1423b5140(void)

void FUN_1423b5140(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_18;
  int local_10;
  
  FUN_1427e9920();
  lVar2 = FUN_14248a5b0(param_1);
  param_1[0x140] = lVar2;
  lVar2 = FUN_1423b22b0(param_1);
  param_1[0x11e] = lVar2;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xe4);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x9a8))(param_1);
  }
  else {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0xe4);
    FUN_1423ba9f0(param_1,uVar3,1);
  }
  FUN_1423937b0(param_1);
  (**(code **)(*param_1 + 0x980))(param_1,0);
  FUN_1423b4660(param_1);
  if (((param_1[0xe3] != 0) && (lVar2 = *(longlong *)(param_1[0xe3] + 0x348), lVar2 != 0)) &&
     ((int)param_1[0x121] == 0)) {
    FUN_142497a70(lVar2,param_1);
  }
  *(undefined4 *)(param_1 + 0x14b) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xa5c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x14a,0);
  }
  (**(code **)(*param_1 + 0xa40))(param_1,1);
  if (-1 < (char)param_1[0x110]) {
    if ((char)param_1[0x10f] != '\x04') goto LAB_1423b527a;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468509e4) &&
       (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
      uVar3 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar3,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
    if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0'))
    goto LAB_1423b527a;
  }
  (**(code **)(*param_1 + 0x358))(param_1,0);
LAB_1423b527a:
  if ((char)param_1[0x10f] == -2) {
    (**(code **)(*param_1 + 0x358))(param_1,0);
  }
  if (param_1[0x16f] != 0) {
    lVar4 = UClothingSimulationFactory::GetPrivateStaticClass();
    for (lVar2 = param_1[0x16f]; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar4) {
        if (param_1[0x16f] != 0) goto LAB_1423b530d;
        break;
      }
    }
  }
  uVar3 = FUN_141593110();
  IModularFeatures::GetModularFeatureImplementations<IInputDeviceModule>
            (uVar3,&local_18,DAT_146aedc70);
  if (0 < local_10) {
    lVar2 = (**(code **)**(undefined8 **)(local_18 + (longlong)(local_10 + -1) * 8))();
    param_1[0x16f] = lVar2;
  }
  if (local_18 != 0) {
    FMemory::Free(local_18);
  }
LAB_1423b530d:
  FUN_1427e3320(param_1);
  if (param_1[0x16f] != 0) {
    plVar5 = (longlong *)UClothingSimulationFactory::GetPrivateStaticClass();
    plVar6 = (longlong *)param_1[0x16f];
    plVar7 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      while (plVar7 != plVar5) {
        plVar7 = (longlong *)plVar7[6];
        if (plVar7 == (longlong *)0x0) {
          return;
        }
      }
      if (plVar6 != (longlong *)0x0) {
        plVar7 = (longlong *)plVar6[0x1f];
        if (plVar7 == (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x368))(plVar6);
          plVar7 = (longlong *)plVar6[0x1f];
        }
        plVar6 = (longlong *)(**(code **)(*plVar7 + 0x278))(plVar7);
        param_1[0x19a] = (longlong)plVar6;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x20))(plVar6);
          lVar2 = (**(code **)(*(longlong *)param_1[0x19a] + 0x10))();
          param_1[0x19b] = lVar2;
          cVar1 = (**(code **)(*plVar7 + 0x290))(plVar7);
          if (cVar1 != '\0') {
            lVar2 = (**(code **)(*plVar7 + 0x298))(plVar7);
            param_1[0x19c] = lVar2;
          }
          if (param_1[0xe3] != 0) {
            FUN_1427e3320(param_1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1423b5450 FUN_1423b5450 body=178 status=ok
// SIG undefined FUN_1423b5450(void)

void FUN_1423b5450(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_14248a5b0();
  param_1[0x140] = lVar2;
  lVar2 = FUN_1423b22b0(param_1);
  param_1[0x11e] = lVar2;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xe4);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x9a8))(param_1);
  }
  else {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0xe4);
    FUN_1423ba9f0(param_1,uVar3,1);
  }
  FUN_1423937b0(param_1);
  (**(code **)(*param_1 + 0x980))(param_1,0);
  FUN_1423b4660(param_1);
  if (((param_1[0xe3] != 0) && (lVar2 = *(longlong *)(param_1[0xe3] + 0x348), lVar2 != 0)) &&
     ((int)param_1[0x121] == 0)) {
    FUN_142497a70(lVar2,param_1);
  }
  return;
}



// FUNCTION 1423b5510 FUN_1423b5510 body=228 status=ok
// SIG undefined FUN_1423b5510(void)

void FUN_1423b5510(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  if ((*(byte *)(param_1 + 0x999) & 2) == 0) {
    *(undefined1 *)(param_1 + 0x998) = 1;
  }
  else {
    *(byte *)(param_1 + 0x999) = *(byte *)(param_1 + 0x999) & 0xfd;
  }
  if (((*(char *)(param_1 + 0x3f) != '\0') && (1 < *(int *)(param_1 + 0xbf8))) &&
     ((cVar1 = FUN_1426bda10(), cVar1 != '\0' || ((*(byte *)(param_1 + 0xb1a) & 8) != 0)))) {
    if ((*(char *)(param_1 + 0xdbd) == '\0') || (*(char *)(param_1 + 0xdbf) == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 0xf1d) = uVar3;
    if (*(char *)(param_1 + 0xdbd) != '\x01') {
      cVar1 = FUN_1423521e0(param_1,param_1 + 0xdb0);
      if (cVar1 != '\0') {
        lVar2 = *(longlong *)(param_1 + 0x120);
        *(longlong *)(param_1 + 0xe00) = param_1;
        if ((lVar2 != 0) || (lVar2 = FUN_1423407b0(param_1), lVar2 != 0)) {
          FTickFunction::AddPrerequisite(param_1 + 0xdb0,lVar2,lVar2 + 0x640);
        }
      }
    }
    FUN_14288e3d0(param_1 + 0xdb0,1);
    *(undefined1 *)(param_1 + 0xf1c) = 1;
  }
  return;
}



// FUNCTION 1423b5620 FUN_1423b5620 body=796 status=ok
// SIG undefined FUN_1423b5620(void)

void FUN_1423b5620(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  
  plVar9 = (longlong *)0x0;
  if (param_1[0x1c1] != 0) {
    uVar5 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes(uVar5,param_1 + 0x1c1,2);
    lVar7 = param_1[0x1c1];
    param_1[0x1c1] = 0;
    if (lVar7 != 0) {
      LOCK();
      piVar1 = (int *)(lVar7 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    param_1[0x1c3] = 0;
    param_1[0x1c4] = 0;
  }
  if (param_1[0x19f] == 0) goto LAB_1423b5790;
  uVar5 = FTaskGraphInterface::Get();
  FTaskGraphInterface::WaitUntilTaskCompletes(uVar5,param_1 + 0x19f,2);
  lVar7 = param_1[0x19f];
  if (lVar7 == 0) goto LAB_1423b5790;
  param_1[0x19f] = 0;
  LOCK();
  piVar1 = (int *)(lVar7 + 0x48);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    FGraphEvent::Recycle();
  }
  if (param_1[0x19a] != 0) {
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xe4);
    plVar6 = plVar9;
    if (cVar4 != '\0') {
      plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xe4);
      if (plVar6 == (longlong *)0x0) {
LAB_1423b574a:
        plVar6 = plVar9;
      }
      else {
        lVar7 = FUN_142a0cc80();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_1423b574a;
      }
      if ((int)param_1[0xf2] == 0) {
        TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
        ::Reset(param_1 + 0x1a0);
        goto LAB_1423b577d;
      }
    }
    (**(code **)(*(longlong *)param_1[0x19a] + 0x50))
              ((longlong *)param_1[0x19a],param_1 + 0x1a0,param_1,plVar6);
  }
LAB_1423b577d:
  if (*(char *)((longlong)param_1 + 0xead) != '\0') {
    FUN_1426c0650(param_1,0);
  }
LAB_1423b5790:
  FUN_1427e3db0(param_1);
  if (param_1[0x149] != 0) {
    FUN_142283dd0();
    *(undefined1 *)((longlong)param_1 + 0xeac) = 1;
  }
  puVar11 = (undefined8 *)param_1[0x14a];
  plVar6 = (longlong *)((longlong)(int)param_1[0x14b] & 0x1fffffffffffffff);
  if (puVar11 + (int)param_1[0x14b] < puVar11) {
    plVar6 = plVar9;
  }
  plVar10 = plVar9;
  if (plVar6 != (longlong *)0x0) {
    do {
      FUN_142283dd0(*puVar11);
      plVar10 = (longlong *)((longlong)plVar10 + 1);
      puVar11 = puVar11 + 1;
    } while (plVar10 != plVar6);
  }
  *(undefined4 *)(param_1 + 0x14b) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xa5c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x14a,0);
  }
  if (param_1[0x14c] != 0) {
    FUN_142283dd0();
  }
  if (param_1[0x16f] != 0) {
    plVar8 = (longlong *)UClothingSimulationFactory::GetPrivateStaticClass();
    plVar6 = (longlong *)param_1[0x16f];
    for (plVar10 = plVar6; plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[6]) {
      if (plVar10 == plVar8) {
        if ((plVar6 != (longlong *)0x0) &&
           (plVar9 = (longlong *)plVar6[0x1f], plVar9 == (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x368))(plVar6);
          plVar9 = (longlong *)plVar6[0x1f];
        }
        break;
      }
    }
  }
  plVar6 = (longlong *)param_1[0x19a];
  if ((plVar6 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x48))(plVar6,param_1[0x19b]);
    (**(code **)(*(longlong *)param_1[0x19a] + 0x40))();
    (**(code **)(*(longlong *)param_1[0x19a] + 0x28))();
    (**(code **)(*plVar9 + 0x280))(plVar9,param_1[0x19a]);
    param_1[0x19a] = 0;
    param_1[0x19b] = 0;
  }
  (**(code **)(*param_1 + 0x9b0))(param_1);
  FUN_142393f60(param_1);
  if (param_1[0x11e] != 0) {
    FUN_1423a6750(param_1);
    param_1[0x11e] = 0;
  }
  if (param_1[0x140] != 0) {
    FUN_142491970(param_1);
    param_1[0x140] = 0;
  }
  return;
}



// FUNCTION 1423b5940 FUN_1423b5940 body=90 status=ok
// SIG undefined FUN_1423b5940(void)

void FUN_1423b5940(longlong *param_1)

{
  (**(code **)(*param_1 + 0x9b0))();
  FUN_142393f60(param_1);
  if (param_1[0x11e] != 0) {
    FUN_1423a6750(param_1);
    param_1[0x11e] = 0;
  }
  if (param_1[0x140] != 0) {
    FUN_142491970(param_1);
    param_1[0x140] = 0;
  }
  return;
}



// FUNCTION 1423b59a0 FUN_1423b59a0 body=356 status=ok
// SIG undefined FUN_1423b59a0(void)

void FUN_1423b59a0(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  local_18 = -1;
  local_28 = 0;
  local_20 = 0;
  uVar4 = UAtmosphericFogComponent::GetPrivateStaticClass();
  FUN_1417a5560(uVar4,&local_28,1,0x10,0);
  uVar7 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)uVar7 <= local_18)) {
        if (local_28 != 0) {
          FMemory::Free(local_28);
        }
        FUN_1423c0eb0(param_1);
        return;
      }
      lVar1 = *(longlong *)(local_28 + (longlong)local_18 * 8);
      cVar2 = UWorld::ContainsActor(param_1,*(undefined8 *)(lVar1 + 0x118));
      if (cVar2 != '\0') {
        uVar3 = *(uint *)(lVar1 + 0xc);
        lVar5 = 0;
        if ((int)uVar3 < (int)DAT_1469e91c4) {
          uVar6 = uVar3 & 0xffff;
          if ((int)uVar3 < 0) {
            uVar3 = uVar3 + 0xffff;
            uVar6 = uVar6 - 0x10000;
          }
          lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                  (longlong)(int)uVar6 * 0x18;
        }
        if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
          FUN_1423b9ca0(lVar1);
        }
      }
      uVar7 = local_20 & 0xffffffff;
      local_18 = local_18 + 1;
    } while ((int)local_20 <= local_18);
    do {
      if (*(longlong *)(local_28 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)local_20);
  } while( true );
}



// FUNCTION 1423b5b10 FUN_1423b5b10 body=59 status=ok
// SIG undefined FUN_1423b5b10(void)

void FUN_1423b5b10(longlong param_1)

{
  thunk_FUN_1423424e0();
  if (((*(byte *)(param_1 + 0x24c) & 0x20) != 0) && (*(char *)(param_1 + 0x346) == '\0')) {
    FUN_1423b9ca0(param_1);
    FUN_1423b9b90(param_1);
    return;
  }
  return;
}



// FUNCTION 1423b5b50 Override body=298 status=ok
// SIG undefined Override(void)

void FBaseBlendedCurve<FDefaultAllocator>::Override(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short *psVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_2 != param_1) {
    puVar2 = (undefined8 *)param_2[2];
    param_1[2] = (longlong)puVar2;
    sVar5 = 0;
    if ((puVar2 != (undefined8 *)0x0) &&
       (lVar8 = (longlong)*(int *)(puVar2 + 1), sVar5 = 0, 0 < lVar8)) {
      psVar6 = (short *)*puVar2;
      sVar4 = 0;
      do {
        sVar5 = sVar4 + 1;
        if (*psVar6 == -1) {
          sVar5 = sVar4;
        }
        lVar8 = lVar8 + -1;
        psVar6 = psVar6 + 1;
        sVar4 = sVar5;
      } while (lVar8 != 0);
    }
    *(short *)(param_1 + 3) = sVar5;
    *(undefined4 *)(param_1 + 1) = 0;
    iVar7 = 0;
    if ((*(int *)((longlong)param_1 + 0xc) < 0) &&
       (iVar7 = 0, *(int *)((longlong)param_1 + 0xc) != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1);
      iVar7 = (int)param_1[1];
    }
    uVar1 = *(ushort *)(param_1 + 3);
    iVar3 = iVar7 + (uint)uVar1;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar7 * 8),0,(ulonglong)uVar1 << 3);
    *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((*(int *)((longlong)param_1 + 0xc) < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  iVar7 = (int)param_2[1];
  if (iVar7 != 0) {
    iVar3 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar3 + iVar7) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1);
      iVar3 = (int)param_1[1];
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar3 * 8),(void *)*param_2,(longlong)iVar7 << 3);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar7;
  }
  return;
}



// FUNCTION 1423b5c80 FUN_1423b5c80 body=122 status=ok
// SIG undefined FUN_1423b5c80(void)

void FUN_1423b5c80(longlong *param_1,longlong param_2,uint param_3,byte param_4,undefined4 param_5,
                  undefined4 param_6)

{
  *(uint *)(param_1 + 0x14f) = *(uint *)(param_1 + 0x14f) & 0xfffffffe;
  param_1[0x14e] = param_2;
  *(undefined4 *)((longlong)param_1 + 0xa7c) = param_5;
  *(undefined4 *)(param_1 + 0x150) = param_6;
  *(uint *)(param_1 + 0x14f) =
       (param_3 & 0xff | *(uint *)(param_1 + 0x14f)) & 0xfffffffd | (uint)param_4 * 2;
  FUN_1423b9af0(param_5,1);
  FUN_1423be6d0(param_1,0,0);
                    /* WARNING: Could not recover jumptable at 0x0001423b5cf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x960))(param_1,0);
  return;
}



// FUNCTION 1423b5d00 FUN_1423b5d00 body=84 status=ok
// SIG undefined FUN_1423b5d00(void)

void FUN_1423b5d00(longlong param_1)

{
  FUN_1423b5d60(param_1,*(undefined8 *)(param_1 + 0xe20),*(undefined8 *)(param_1 + 0xe18),
                *(undefined1 *)(param_1 + 0xe55),param_1 + 0xe28,param_1 + 0xe38,param_1 + 0xe48,
                param_1 + 0xe58);
  return;
}



// FUNCTION 1423b5d60 FUN_1423b5d60 body=487 status=ok
// SIG undefined FUN_1423b5d60(void)

void FUN_1423b5d60(longlong param_1,longlong param_2,longlong param_3,char param_4,longlong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined *local_78;
  undefined1 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  longlong local_40;
  char local_38;
  undefined8 local_30;
  
  if ((param_2 != 0) && (*(int *)(param_5 + 8) != 0)) {
    if ((param_3 != 0) && (cVar1 = UAnimInstance::NeedsUpdate(param_3), cVar1 != '\0')) {
      FUN_142279cb0(param_3);
    }
    if (((*(longlong *)(param_1 + 0xa60) != 0) &&
        (cVar1 = UAnimInstance::NeedsUpdate(), cVar1 != '\0')) &&
       (*(char *)(param_1 + 0xa68) == '\0')) {
      FUN_142279cb0(*(undefined8 *)(param_1 + 0xa60));
    }
    if (param_4 != '\0') {
      puStack_70 = local_res10;
      local_78 = &DAT_14060d670;
      local_res10[0] = 0;
      lVar2 = FUN_1415d8310(&local_78,&DAT_146216a38);
      local_50 = (undefined8 *)(lVar2 + 0x18);
      local_48 = *local_50;
      local_40 = *(longlong *)(lVar2 + 0x28);
      local_38 = '\0';
      local_30 = *(undefined8 *)(lVar2 + 0x30);
      *(undefined8 ***)(lVar2 + 0x30) = &local_50;
      *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + 1;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      FUN_1423aa410(param_1,param_2,param_3,param_6,param_7,param_8,&local_68);
      FUN_1423aa4c0(param_1,param_6,&local_68,param_8,param_2,param_7);
      FUN_1423ab600(param_1,param_2,param_6,param_7,&local_68);
      FUN_1423aaee0(param_1,param_2,param_6,param_5);
      if (local_38 == '\0') {
        local_38 = 1;
        *(int *)(local_50 + 4) = *(int *)(local_50 + 4) + -1;
        if (local_40 != local_50[2]) {
          FMemStackBase::FreeChunks();
        }
        *local_50 = local_48;
        local_50[3] = local_30;
      }
    }
  }
  return;
}



// FUNCTION 1423b5f50 FUN_1423b5f50 body=140 status=ok
// SIG undefined FUN_1423b5f50(void)

void FUN_1423b5f50(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = param_1[0x149];
  if (lVar1 != 0) {
    lVar3 = FUN_1428f7290();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1422b3fc0(lVar1,1);
      FUN_1422b3d30(lVar1,param_2);
      (**(code **)(*param_1 + 0x358))(param_1,1);
    }
  }
  return;
}



// FUNCTION 1423b5fe0 FUN_1423b5fe0 body=266 status=ok
// SIG undefined FUN_1423b5fe0(void)

void FUN_1423b5fe0(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_1423b9af0(param_1,1);
  plVar1 = (longlong *)param_1[0x149];
  if (plVar1 != (longlong *)0x0) {
    lVar4 = FUN_1428f7290();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar1 + 0x340))(plVar1,param_2,0,0x3f800000);
      FUN_1422b3fc0(plVar1,0);
    }
  }
  lVar4 = param_1[0x149];
  if (lVar4 != 0) {
    lVar5 = FUN_1428f7290();
    lVar2 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_1422b3fc0(lVar4,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
      FUN_1422b3d30(lVar4,param_3);
      (**(code **)(*param_1 + 0x358))(param_1,1);
    }
  }
  return;
}



// FUNCTION 1423b60f0 FUN_1423b60f0 body=227 status=ok
// SIG undefined FUN_1423b60f0(void)

void FUN_1423b60f0(longlong *param_1,longlong *param_2,char param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  FUN_1423b9af0(param_1,1);
  plVar1 = (longlong *)param_1[0x149];
  if (plVar1 == (longlong *)0x0) goto LAB_1423b61b0;
  lVar4 = FUN_1428f7290();
  if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_1423b61b0;
  if ((param_3 == '\0') || (param_2 == (longlong *)0x0)) {
LAB_1423b617d:
    uVar5 = 0;
  }
  else {
    cVar3 = (**(code **)(*param_2 + 0x298))(param_2);
    if (cVar3 != '\0') goto LAB_1423b617d;
    uVar5 = 1;
  }
  (**(code **)(*plVar1 + 0x340))(plVar1,param_2,uVar5,param_6);
  FUN_1422b40f0(plVar1,param_5,1);
  FUN_1422b3fc0(plVar1,1);
LAB_1423b61b0:
                    /* WARNING: Could not recover jumptable at 0x0001423b61cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x358))(param_1,1);
  return;
}



// FUNCTION 1423b61e0 FUN_1423b61e0 body=17 status=ok
// SIG undefined FUN_1423b61e0(void)

undefined4 FUN_1423b61e0(longlong param_1)

{
  return CONCAT31((int3)(*(uint *)(param_1 + 0xc80) >> 8),
                  DAT_1468c21b0 == *(uint *)(param_1 + 0xc80));
}



// FUNCTION 1423b6200 FUN_1423b6200 body=1109 status=ok
// SIG undefined FUN_1423b6200(void)

void FUN_1423b6200(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  if (*(longlong *)(param_1 + 0x120) == 0) {
    FUN_1423407b0();
  }
  uVar4 = 0;
  if ((*param_2 != 0) && (cVar1 = UAnimInstance::NeedsUpdate(), cVar1 != '\0')) {
    FUN_14227aad0(*param_2);
    puVar2 = *(undefined8 **)(param_1 + 0xa50);
    uVar5 = (longlong)*(int *)(param_1 + 0xa58) & 0x1fffffffffffffff;
    if (puVar2 + *(int *)(param_1 + 0xa58) < puVar2) {
      uVar5 = uVar4;
    }
    uVar3 = uVar4;
    if (uVar5 != 0) {
      do {
        FUN_14227aad0(*puVar2);
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar3 != uVar5);
    }
  }
  if (((*(longlong *)(param_1 + 0xa60) != 0) &&
      (cVar1 = UAnimInstance::NeedsUpdate(), cVar1 != '\0')) && (*(char *)(param_1 + 0xa68) == '\0')
     ) {
    FUN_14227aad0(*(undefined8 *)(param_1 + 0xa60));
  }
  if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
    if (*(char *)((longlong)param_2 + 0x3f) != '\0') {
      FBaseBlendedCurve<FDefaultAllocator>::CopyFrom(param_1 + 0xaf0,param_1 + 0xab0);
    }
    if (*(char *)((longlong)param_2 + 0x3e) != '\0') {
      *(undefined4 *)(param_1 + 0xae8) = 0;
      if ((*(int *)(param_1 + 0xaec) < 0) && (*(int *)(param_1 + 0xaec) != 0)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(param_1 + 0xae0,0);
      }
      TArray<FTransform,TSizedDefaultAllocator<32>_>::Append<FTransform,TSizedDefaultAllocator<32>_>
                (param_1 + 0xae0,param_1 + 0x728 + (longlong)*(int *)(param_1 + 0x76c) * 0x10);
      *(undefined4 *)(param_1 + 0xad8) = 0;
      if ((*(int *)(param_1 + 0xadc) < 0) && (*(int *)(param_1 + 0xadc) != 0)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(param_1 + 0xad0,0);
      }
      TArray<FTransform,TSizedDefaultAllocator<32>_>::Append<FTransform,TSizedDefaultAllocator<32>_>
                (param_1 + 0xad0,param_1 + 0xa88);
    }
    if ((*(char *)((longlong)param_2 + 0x3c) != '\0') && (DAT_146af0b54 == 0)) {
      if (*(longlong **)(param_1 + 0xa48) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xa48) + 0x2b8))();
      }
      puVar2 = *(undefined8 **)(param_1 + 0xa50);
      uVar5 = (longlong)*(int *)(param_1 + 0xa58) & 0x1fffffffffffffff;
      if (puVar2 + *(int *)(param_1 + 0xa58) < puVar2) {
        uVar5 = uVar4;
      }
      uVar3 = uVar4;
      if (uVar5 != 0) {
        do {
          (**(code **)(*(longlong *)*puVar2 + 0x2b8))();
          uVar3 = uVar3 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar3 != uVar5);
      }
      if (*(longlong **)(param_1 + 0xa60) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xa60) + 0x2b8))();
      }
      if (*(longlong *)(param_1 + 0x8f0) == 0) {
        uVar6 = 0x3f800000;
      }
      else {
        uVar6 = FAnimUpdateRateParameters::GetInterpolationAlpha();
      }
      FUN_1422514f0(param_1 + 0xa88,param_1 + 0xad0,uVar6,param_1 + 0xbd0);
      FUN_1423aaee0(param_1,*(undefined8 *)(param_1 + 0x718),param_1 + 0xa88,
                    param_1 + 0x728 + (longlong)*(int *)(param_1 + 0x76c) * 0x10);
      FUN_1423b4c60(param_1 + 0xab0,param_1 + 0xaf0,uVar6);
    }
    if ((*(char *)((longlong)param_2 + 0x3d) == '\0') &&
       (*(char *)((longlong)param_2 + 0x3c) == '\0')) {
      FUN_1423a75f0(param_1);
    }
    else {
      FUN_1423b8ff0(param_1);
      if (*(longlong *)(param_1 + 0xa48) != 0) {
        FUN_1422850a0(*(longlong *)(param_1 + 0xa48),param_1 + 0xab0);
        puVar2 = *(undefined8 **)(param_1 + 0xa50);
        uVar5 = (longlong)*(int *)(param_1 + 0xa58) & 0x1fffffffffffffff;
        if (puVar2 + *(int *)(param_1 + 0xa58) < puVar2) {
          uVar5 = uVar4;
        }
        uVar3 = uVar4;
        if (uVar5 != 0) {
          do {
            FUN_14225c210(*puVar2,*(undefined8 *)(param_1 + 0xa48));
            uVar3 = uVar3 + 1;
            puVar2 = puVar2 + 1;
          } while (uVar3 != uVar5);
        }
      }
      if ((*(longlong *)(param_1 + 0x718) != 0) &&
         (0 < *(int *)(param_1 + 0xd58) - *(int *)(param_1 + 0xd84))) {
        FUN_142246e20(*(longlong *)(param_1 + 0x718),param_1 + 0xd50,param_1 + 0x808,param_1 + 0x818
                     );
      }
      if (*(longlong *)(param_1 + 0xa60) != 0) {
        if (*(longlong *)(param_1 + 0xa48) == 0) {
          FUN_1422850a0(*(longlong *)(param_1 + 0xa60),param_1 + 0xab0);
        }
        else {
          FUN_14225c210();
        }
      }
      if (*(char *)((longlong)param_2 + 0x3d) != '\0') {
        if (*(longlong *)(param_1 + 0xa48) != 0) {
          FUN_14227a380();
          puVar2 = *(undefined8 **)(param_1 + 0xa50);
          uVar5 = (longlong)*(int *)(param_1 + 0xa58) & 0x1fffffffffffffff;
          if (puVar2 + *(int *)(param_1 + 0xa58) < puVar2) {
            uVar5 = uVar4;
          }
          if (uVar5 != 0) {
            do {
              FUN_14227a380(*puVar2);
              uVar4 = uVar4 + 1;
              puVar2 = puVar2 + 1;
            } while (uVar4 != uVar5);
          }
        }
        if (*(longlong *)(param_1 + 0xa60) != 0) {
          FUN_14227a380();
        }
      }
      *(byte *)(param_1 + 0x881) = *(byte *)(param_1 + 0x881) | 2;
      if ((0 < *(int *)(param_1 + 0xbf8)) || ((*(byte *)(param_1 + 0xb1c) & 0x20) != 0)) {
        FUN_1426ce440(param_1,param_1 + 0x728 + (longlong)*(int *)(param_1 + 0x76c) * 0x10,0,1,0);
        FUN_1426d0150(param_1);
      }
      cVar1 = FUN_1426ce250(param_1);
      if (cVar1 == '\0') {
        FUN_1426c0650(param_1,*(undefined1 *)(param_1 + 0x2ec));
      }
    }
    *(undefined8 *)(param_1 + 0xe18) = 0;
    *(undefined8 *)(param_1 + 0xe20) = 0;
  }
  return;
}



// FUNCTION 1423b6660 FUN_1423b6660 body=123 status=ok
// SIG undefined FUN_1423b6660(void)

void FUN_1423b6660(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  FUN_142394440();
  puVar1 = (undefined1 *)(param_1 + 0x878);
  *(undefined1 **)(param_1 + 0x9a8) = puVar1;
  puVar2 = (undefined1 *)(param_1 + 0x9a0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar2 = *puVar1;
    if (*(undefined1 **)(param_1 + 0x9a8) != (undefined1 *)0x0) {
      if (*(int *)(param_1 + 0x9f8) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x9f0);
        if (*(longlong *)(param_1 + 0x9f0) == 0) {
          lVar3 = param_1 + 0x9b0;
        }
        puVar2 = (undefined1 *)((longlong)*(int *)(param_1 + 0x9f8) * 0x10 + -0x10 + lVar3);
      }
      **(undefined1 **)(param_1 + 0x9a8) = *puVar2;
    }
  }
  return;
}



// FUNCTION 1423b66e0 FUN_1423b66e0 body=197 status=ok
// SIG undefined FUN_1423b66e0(void)

void FUN_1423b66e0(longlong param_1)

{
  int iVar1;
  BOOL BVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (((*(byte *)(param_1 + 8) & 0x30) == 0) && (*(char *)(param_1 + 0x315) == '\0')) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
    }
    iVar1 = DAT_146af0ef8;
    lVar4 = (longlong)DAT_146af0ef8;
    for (plVar3 = DAT_146af0ef0; plVar3 != DAT_146af0ef0 + lVar4; plVar3 = plVar3 + 1) {
      if (*plVar3 == param_1) {
        if ((int)((longlong)plVar3 - (longlong)DAT_146af0ef0 >> 3) != -1) goto LAB_1423b6786;
        break;
      }
    }
    DAT_146af0ef8 = DAT_146af0ef8 + 1;
    if (DAT_146af0efc < DAT_146af0ef8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146af0ef0,iVar1);
    }
    DAT_146af0ef0[lVar4] = param_1;
LAB_1423b6786:
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
  }
  FUN_142349c40(param_1);
  return;
}



// FUNCTION 1423b67b0 FUN_1423b67b0 body=462 status=ok
// SIG undefined FUN_1423b67b0(void)

void FUN_1423b67b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar2 < DAT_146af0fd0) {
    _Init_thread_header(&DAT_146af0fd0);
    if (DAT_146af0fd0 == -1) {
      FName::FName(&DAT_146af0fc8,L"LightColor",1);
      _Init_thread_footer(&DAT_146af0fd0);
    }
  }
  if (*piVar2 < DAT_146af0fe0) {
    _Init_thread_header(&DAT_146af0fe0);
    if (DAT_146af0fe0 == -1) {
      FName::FName(&DAT_146af0fd8,L"Intensity",1);
      _Init_thread_footer(&DAT_146af0fe0);
    }
  }
  if (*piVar2 < DAT_146af0ff0) {
    _Init_thread_header(&DAT_146af0ff0);
    if (DAT_146af0ff0 == -1) {
      FName::FName(&DAT_146af0fe8,L"IndirectLightingIntensity",1);
      _Init_thread_footer(&DAT_146af0ff0);
    }
  }
  if (*piVar2 < DAT_146af1000) {
    _Init_thread_header(&DAT_146af1000);
    if (DAT_146af1000 == -1) {
      FName::FName(&DAT_146af0ff8,L"VolumetricScatteringIntensity",1);
      _Init_thread_footer(&DAT_146af1000);
    }
  }
  lVar1 = *(longlong *)(param_2 + 0x18);
  if ((((lVar1 != DAT_146af0fc8) && (lVar1 != DAT_146af0fd8)) && (lVar1 != DAT_146af0fe8)) &&
     (lVar1 != DAT_146af0ff8)) {
    FUN_142394530(param_1,param_2);
    return;
  }
  FUN_1423c0450(param_1);
  return;
}



// FUNCTION 1423b6980 FUN_1423b6980 body=265 status=ok
// SIG undefined FUN_1423b6980(void)

void FUN_1423b6980(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  
  FUN_1423945d0();
  iVar4 = *(int *)(param_1 + 0x860);
  if (((((1 < iVar4) && (*(longlong *)(param_1 + 0x718) != 0)) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x40), lVar1 != 0)) &&
      ((0 < *(int *)(lVar1 + 0x20) && (*(int *)(lVar1 + 0x20) == iVar4)))) &&
     (iVar4 = iVar4 + -1, -1 < iVar4)) {
    lVar5 = (longlong)iVar4 * 0x1c;
    do {
      lVar2 = *(longlong *)(lVar1 + 0x18);
      bVar3 = FUN_142433a10();
      if (*(char *)(lVar5 + (ulonglong)bVar3 * 8 + lVar2) == '\0') {
        FUN_1423b86e0(param_1 + 0x858,iVar4,1,1);
      }
      lVar5 = lVar5 + -0x1c;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  if (*(char *)(param_1 + 0x95c) == '\0') {
    if (((*(longlong *)(param_1 + 0x718) != 0) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x348), lVar1 != 0)) &&
       (*(int *)(param_1 + 0x908) != 0)) {
      FUN_1424a3300(lVar1,param_1,param_1 + 0x920);
    }
  }
  else {
    FUN_1423b8db0(param_1 + 0x8f8,0);
  }
  if (0 < *(int *)(param_1 + 0x838)) {
    *(undefined1 *)(param_1 + 0x834) = 1;
  }
  return;
}



// FUNCTION 1423b6a90 FUN_1423b6a90 body=257 status=ok
// SIG undefined FUN_1423b6a90(void)

void FUN_1423b6a90(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  
  FUN_1423945d0();
  iVar4 = *(int *)(param_1 + 0x860);
  if (((((1 < iVar4) && (*(longlong *)(param_1 + 0x718) != 0)) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x40), lVar1 != 0)) &&
      ((0 < *(int *)(lVar1 + 0x20) && (*(int *)(lVar1 + 0x20) == iVar4)))) &&
     (iVar4 = iVar4 + -1, -1 < iVar4)) {
    lVar5 = (longlong)iVar4 * 0x1c;
    do {
      lVar2 = *(longlong *)(lVar1 + 0x18);
      bVar3 = FUN_142433a10();
      if (*(char *)(lVar5 + (ulonglong)bVar3 * 8 + lVar2) == '\0') {
        FUN_1423b86e0(param_1 + 0x858,iVar4,1,1);
      }
      lVar5 = lVar5 + -0x1c;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  if (*(char *)(param_1 + 0x95c) == '\0') {
    if (((*(longlong *)(param_1 + 0x718) != 0) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x348), lVar1 != 0)) &&
       (*(int *)(param_1 + 0x908) != 0)) {
      FUN_1424a3300(lVar1,param_1,param_1 + 0x920);
      return;
    }
    return;
  }
  FUN_1423b8db0(param_1 + 0x8f8,0);
  return;
}



// FUNCTION 1423b6ba0 FUN_1423b6ba0 body=201 status=ok
// SIG undefined FUN_1423b6ba0(void)

void FUN_1423b6ba0(longlong param_1)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong local_res8 [4];
  
  FUN_142349c80();
  uVar1 = *(uint *)(param_1 + 0x30c);
  iVar4 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  iVar3 = 0x20;
  if (uVar1 != 0) {
    iVar3 = 0x1f - iVar4;
  }
  uVar1 = uVar1 - 1;
  iVar4 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  if (uVar1 == 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x1f' - (char)iVar4;
  }
  iVar4 = 1 << (0x20U - cVar5 & ~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x1f);
  if (iVar4 < 0x40) {
    iVar3 = 0x40;
  }
  else {
    iVar3 = 0x400;
    if (iVar4 < 0x400) {
      iVar3 = iVar4;
    }
  }
  *(int *)(param_1 + 0x30c) = iVar3;
  if (((*(byte *)(param_1 + 0x24c) & 0x20) != 0) && ((*(byte *)(param_1 + 8) & 0x30) == 0)) {
    return;
  }
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
  }
  local_res8[0] = param_1;
  TArray<FName,FDefaultAllocator>::Remove(&DAT_146af0ef0,local_res8);
                    /* WARNING: Could not recover jumptable at 0x0001423b6c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
  return;
}



// FUNCTION 1423b6c70 FUN_1423b6c70 body=314 status=ok
// SIG undefined FUN_1423b6c70(void)

void FUN_1423b6c70(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res8 [2];
  longlong local_res20;
  
  FUN_142349f80();
  if ((*(longlong *)(param_1 + 0x8f0) != 0) && (param_2 != *(longlong *)(param_1 + 0x20))) {
    lVar2 = param_1;
    if (param_2 != 0) {
      lVar2 = param_2;
    }
    local_res20 = param_1;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_146531e10,local_res8,lVar2);
    if (local_res8[0] == -1) {
      lVar3 = 0;
    }
    else {
      lVar3 = DAT_146531e10 + (longlong)local_res8[0] * 0x18;
    }
    lVar3 = *(longlong *)(lVar3 + 8);
    TArray<FName,FDefaultAllocator>::Remove(lVar3 + 0x90,&local_res20);
    if (*(int *)(lVar3 + 0x98) == 0) {
      TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
      ::Remove(&DAT_146531e10,lVar2);
      if (*(longlong *)(lVar3 + 0x90) != 0) {
        FMemory::Free();
      }
      *(undefined4 *)(lVar3 + 0x78) = 0;
      if (*(longlong *)(lVar3 + 0x70) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar3 + 0x30);
      if (*(longlong *)(lVar3 + 0x20) != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(lVar3,0xa0);
    }
    *(undefined8 *)(param_1 + 0x8f0) = 0;
    uVar1 = FUN_1423b22b0(param_1);
    *(undefined8 *)(param_1 + 0x8f0) = uVar1;
    FUN_142491ab0(param_1,param_2);
    uVar1 = FUN_14248a5b0(param_1);
    *(undefined8 *)(param_1 + 0xa00) = uVar1;
  }
  return;
}



// FUNCTION 1423b6dc0 FUN_1423b6dc0 body=313 status=ok
// SIG undefined FUN_1423b6dc0(void)

void FUN_1423b6dc0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_28;
  int local_20;
  
  if (*(longlong *)(param_1 + 0x718) != 0) {
    FUN_142777cb0(*(longlong *)(param_1 + 0x718),&local_28);
    uVar8 = 0;
    uVar6 = uVar8;
    uVar7 = uVar8;
    if (0 < local_20) {
      do {
        lVar3 = *(longlong *)(uVar7 + local_28);
        if (lVar3 != 0) {
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
          }
          puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = *(undefined8 *)(lVar3 + 0x28);
            *(undefined1 *)(puVar4 + 1) = 2;
          }
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        uVar7 = uVar7 + 8;
      } while ((int)uVar5 < local_20);
    }
    lVar3 = *(longlong *)(param_1 + 0x718);
    uVar6 = uVar8;
    if (0 < *(int *)(lVar3 + 0x160)) {
      do {
        iVar1 = (int)param_2[1];
        uVar2 = *(undefined8 *)(uVar8 + *(longlong *)(lVar3 + 0x158));
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
        }
        puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = uVar2;
          *(undefined1 *)(puVar4 + 1) = 1;
        }
        lVar3 = *(longlong *)(param_1 + 0x718);
        uVar5 = (int)uVar6 + 1;
        uVar8 = uVar8 + 0x10;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < *(int *)(lVar3 + 0x160));
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1423b6f00 FUN_1423b6f00 body=143 status=ok
// SIG undefined FUN_1423b6f00(void)

void FUN_1423b6f00(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x720);
  if ((cVar3 == '\0') && (iVar5 = 0, 0 < *(int *)(param_1 + 0x870))) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x868);
      if (1 < (byte)(*(char *)(lVar2 + lVar6) - 2U)) {
        iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x718) + 0x158) + 8 + lVar7);
        if ((iVar1 == -1) || (cVar3 = *(char *)(iVar1 + lVar2), cVar3 == '\x01')) {
          *(undefined1 *)(lVar2 + lVar6) = 1;
        }
        else {
          uVar4 = 0;
          if (cVar3 == '\x03') {
            uVar4 = 3;
          }
          *(undefined1 *)(lVar2 + lVar6) = uVar4;
        }
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (iVar5 < *(int *)(param_1 + 0x870));
  }
  return;
}



// FUNCTION 1423b6f90 FUN_1423b6f90 body=606 status=ok
// SIG undefined FUN_1423b6f90(void)

void FUN_1423b6f90(longlong param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  
  if (*(longlong *)(param_1 + 0x718) != 0) {
    FUN_1423a6f40(param_1,param_1 + 0xbd0,param_1 + 0xbe0,param_2,0);
    if ((*(byte *)(param_1 + 0xb1c) & 4) == 0) {
      TArray<FTransform,FDefaultAllocator>::operator=
                (param_1 + 0xa88,*(longlong *)(param_1 + 0x718) + 0x168);
    }
    if (*(longlong *)(param_1 + 0xa48) != 0) {
      FUN_14227c660();
    }
    uVar9 = 0;
    puVar11 = *(undefined8 **)(param_1 + 0xa50);
    uVar8 = (longlong)*(int *)(param_1 + 0xa58) & 0x1fffffffffffffff;
    if (puVar11 + *(int *)(param_1 + 0xa58) < puVar11) {
      uVar8 = uVar9;
    }
    uVar10 = uVar9;
    if (uVar8 != 0) {
      do {
        FUN_14227c660(*puVar11);
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar10 != uVar8);
    }
    if (*(longlong *)(param_1 + 0xa60) != 0) {
      FUN_14227c660();
    }
    if ((*(longlong *)(param_1 + 0x718) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x48), lVar3 != 0)) {
      *(undefined2 *)(param_1 + 0xb30) = *(undefined2 *)(lVar3 + 0x250);
    }
    *(byte *)(param_1 + 0xb1d) = *(byte *)(param_1 + 0xb1d) | 8;
    *(undefined4 *)(param_1 + 0xad8) = 0;
    if (*(int *)(param_1 + 0xadc) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0xad0,0);
    }
    *(undefined4 *)(param_1 + 0xae8) = 0;
    if (*(int *)(param_1 + 0xaec) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0xae0,0);
    }
    *(undefined8 *)(param_1 + 0xb00) = 0;
    *(undefined4 *)(param_1 + 0xaf8) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0xafc)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xaf0,0);
    }
    *(undefined2 *)(param_1 + 0xb08) = 0;
    *(undefined1 *)(param_1 + 0xb0a) = 0;
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x720);
    if ((cVar5 == '\0') &&
       (bVar4 = false, uVar8 = uVar9, uVar10 = uVar9, 0 < *(int *)(param_1 + 0xbd8))) {
      do {
        uVar1 = *(ushort *)(uVar10 + *(longlong *)(param_1 + 0xbd0));
        if ((int)(uint)uVar1 < *(int *)(param_1 + 0x870)) {
          if (*(char *)(*(longlong *)(param_1 + 0x868) + (ulonglong)uVar1) == '\x03') {
            bVar4 = true;
            *(undefined1 *)(*(longlong *)(param_1 + 0x868) + (ulonglong)uVar1) = 1;
          }
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar10 = uVar10 + 2;
      } while ((int)uVar7 < *(int *)(param_1 + 0xbd8));
      if (((bVar4) && (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x720), cVar5 == '\0')) &&
         (uVar8 = uVar9, uVar10 = uVar9, 0 < *(int *)(param_1 + 0x870))) {
        do {
          lVar3 = *(longlong *)(param_1 + 0x868);
          if (1 < (byte)(*(char *)(lVar3 + uVar8) - 2U)) {
            iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x718) + 0x158) + 8 + uVar10);
            if ((iVar2 == -1) || (cVar5 = *(char *)(iVar2 + lVar3), cVar5 == '\x01')) {
              *(undefined1 *)(lVar3 + uVar8) = 1;
            }
            else {
              uVar6 = 0;
              if (cVar5 == '\x03') {
                uVar6 = 3;
              }
              *(undefined1 *)(lVar3 + uVar8) = uVar6;
            }
          }
          uVar7 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar7;
          uVar8 = uVar8 + 1;
          uVar10 = uVar10 + 0x10;
        } while ((int)uVar7 < *(int *)(param_1 + 0x870));
      }
    }
  }
  return;
}



// FUNCTION 1423b71f0 FUN_1423b71f0 body=247 status=ok
// SIG undefined FUN_1423b71f0(void)

void FUN_1423b71f0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte local_28 [8];
  longlong local_20;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x718) != 0) {
    local_28[0] = *(byte *)(param_1 + 0xb1a) >> 7;
    local_20 = param_1 + 0xb20;
    local_18 = *(undefined4 *)(param_1 + 0x83c);
    if (*(longlong *)(param_1 + 0xa48) != 0) {
      FUN_14227c7a0(*(longlong *)(param_1 + 0xa48),local_28);
    }
    uVar3 = 0;
    puVar2 = *(undefined8 **)(param_1 + 0xa50);
    uVar4 = (longlong)*(int *)(param_1 + 0xa58) & 0x1fffffffffffffff;
    if (puVar2 + *(int *)(param_1 + 0xa58) < puVar2) {
      uVar4 = uVar3;
    }
    if (uVar4 != 0) {
      do {
        FUN_14227c7a0(*puVar2,local_28);
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar3 != uVar4);
    }
    if (*(longlong *)(param_1 + 0xa60) != 0) {
      FUN_14227c7a0(*(longlong *)(param_1 + 0xa60),local_28);
    }
    if ((*(longlong *)(param_1 + 0x718) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x48), lVar1 != 0)) {
      *(undefined2 *)(param_1 + 0xb30) = *(undefined2 *)(lVar1 + 0x250);
    }
  }
  return;
}



// FUNCTION 1423b7300 FUN_1423b7300 body=1946 status=ok
// SIG undefined FUN_1423b7300(void)

void FUN_1423b7300(longlong *param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  undefined1 uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  
  if (DAT_146af0b54 != 0) {
    FUN_1423b7b00();
    return;
  }
  if (param_1[0xe3] == 0) {
    return;
  }
  if ((int)param_1[((longlong)(int)param_1[0xee] + 0x73) * 2] == 0) {
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0xb1d) & 8) == 0) {
    FUN_1423b6f90(param_1,*(undefined4 *)((longlong)param_1 + 0x83c));
  }
  else {
    cVar7 = FUN_1423a47f0();
    if (cVar7 == '\0') {
      FUN_1423b71f0(param_1);
    }
  }
  cVar7 = FUN_1423bdc20(param_1);
  if ((cVar7 == '\0') ||
     ((*(char *)param_1[0x11e] != '\x01' && (*(int *)((char *)param_1[0x11e] + 8) < 2)))) {
    bVar6 = false;
LAB_1423b73e9:
    bVar1 = bVar6;
    bVar6 = false;
  }
  else {
    bVar1 = true;
    if ((((int)param_1[0x152] == *(int *)(param_1[0xe3] + 0x160)) &&
        ((int)param_1[0x152] == (int)param_1[0x15b])) &&
       (bVar6 = true, (int)param_1[((longlong)(int)param_1[0xee] + 0x73) * 2] == (int)param_1[0x15d]
       )) goto LAB_1423b73e9;
    bVar6 = true;
  }
  if (param_1[0x149] == 0) {
    lVar12 = 0;
LAB_1423b7422:
    iVar11 = 0;
  }
  else {
    lVar12 = FUN_1422743b0();
    lVar12 = lVar12 + 0xc0;
    if (lVar12 == 0) goto LAB_1423b7422;
    iVar11 = FBaseBlendedCurve<TMemStackAllocator<0>_>::GetValidElementCount(lVar12);
  }
  if (((bVar1) && (lVar12 != 0)) && ((param_1[0x160] != lVar12 || ((int)param_1[0x15f] != iVar11))))
  {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (((*(byte *)((longlong)param_1 + 0xb1c) & 4) != 0) ||
     (((bVar1 && (!bVar6)) && ((!bVar4 && ((*(byte *)(param_1[0x11e] + 2) & 0x10) != 0)))))) {
    cVar7 = '\0';
  }
  else {
    cVar7 = '\x01';
  }
  if ((*DAT_146af0b68 == 0) || (cVar8 = FUN_141636a40(), cVar8 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((longlong *)param_1[0x149] == (longlong *)0x0) ||
     (cVar8 = (**(code **)(*(longlong *)param_1[0x149] + 0x290))(), cVar8 != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((longlong *)param_1[0x14c] == (longlong *)0x0) {
LAB_1423b74d6:
    bVar5 = true;
  }
  else {
    cVar8 = (**(code **)(*(longlong *)param_1[0x14c] + 0x290))();
    bVar5 = false;
    if (cVar8 != '\0') goto LAB_1423b74d6;
  }
  plVar13 = (longlong *)param_1[0x149];
  if (((((plVar13 == (longlong *)0x0) && (param_1[0x14c] == 0)) || (!bVar2)) ||
      ((!bVar5 || (!bVar3)))) ||
     (((cVar7 == '\0' || (param_2 == 0)) ||
      (((*(byte *)(param_2 + 10) != *(byte *)(param_2 + 8) &&
        (*(byte *)(param_2 + 0xb) <= *(byte *)(param_2 + 8))) ||
       (*(longlong *)(param_2 + 0x18) == 0)))))) {
    bVar9 = 0;
  }
  else {
    bVar9 = 1;
  }
  if (((plVar13 == (longlong *)0x0) || (cVar8 = (**(code **)(*plVar13 + 0x290))(), cVar8 == '\0'))
     || (cVar8 = UAnimInstance::NeedsUpdate(), cVar8 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((((bVar3) && (param_2 != 0)) &&
      ((*(byte *)(param_2 + 10) == *(byte *)(param_2 + 8) ||
       (*(byte *)(param_2 + 8) < *(byte *)(param_2 + 0xb))))) &&
     (*(longlong *)(param_2 + 0x18) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (((!bVar2) || (DAT_146af0b4a == '\0')) || (bVar2 = true, !bVar3)) {
    bVar2 = false;
  }
  cVar8 = FUN_1423b2d70(param_1,bVar9 ^ 1,1);
  if (cVar8 != '\0') {
    return;
  }
  param_1[0x1c4] = param_1[0xe3];
  param_1[0x1c3] = param_1[0x149];
  if (lVar12 == 0) {
    FBaseBlendedCurve<FDefaultAllocator>::Empty(param_1 + 0x1cb);
    FBaseBlendedCurve<FDefaultAllocator>::Empty();
  }
  else {
    if (((int)param_1[0x1cc] != iVar11) || (param_1[0x1cd] != lVar12)) {
      FBaseBlendedCurve<FDefaultAllocator>::InitFrom(param_1 + 0x1cb,lVar12);
    }
    if ((param_1[0x158] != lVar12) || ((int)param_1[0x157] != iVar11)) {
      FBaseBlendedCurve<FDefaultAllocator>::InitFrom(param_1 + 0x156,lVar12);
    }
  }
  *(char *)((longlong)param_1 + 0xe55) = cVar7;
  if ((((!bVar1) || (bVar6)) || ((*(byte *)(param_1[0x11e] + 2) & 1) == 0)) ||
     ((lVar12 == 0 || ((char)param_1[0x1d6] != '\0')))) {
    cVar8 = '\0';
  }
  else {
    cVar8 = '\x01';
  }
  *(char *)((longlong)param_1 + 0xe54) = cVar8;
  if ((bVar6) || (((bVar1 && (cVar7 != '\0')) && (cVar8 == '\0')))) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0xe56) = uVar10;
  if ((bVar4) || ((((bVar1 && (cVar7 != '\0')) && (cVar8 == '\0')) && (lVar12 != 0)))) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  uVar17 = 0;
  *(undefined1 *)((longlong)param_1 + 0xe57) = uVar10;
  if (!bVar1) {
    *(undefined4 *)(param_1 + 0x15b) = 0;
    if ((*(int *)((longlong)param_1 + 0xadc) < 0) && (*(int *)((longlong)param_1 + 0xadc) != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0x15a,0);
    }
    *(undefined4 *)(param_1 + 0x15d) = 0;
    if ((*(int *)((longlong)param_1 + 0xaec) < 0) && (*(int *)((longlong)param_1 + 0xaec) != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0x15c,0);
    }
    FBaseBlendedCurve<FDefaultAllocator>::Empty(param_1 + 0x15e);
  }
  if (cVar7 != '\0') {
    if ((param_1[0x149] == 0) || (cVar7 = UAnimInstance::NeedsUpdate(), cVar7 != '\0')) {
LAB_1423b77b6:
      cVar7 = FUN_1423bd730(param_1);
      if ((cVar7 != '\0') &&
         ((plVar13 = (longlong *)FUN_142275530(param_1[0x14c]), (short)plVar13[1] == -1 ||
          (*plVar13 == -1)))) goto LAB_1423b77db;
    }
    else {
      plVar13 = (longlong *)FUN_142275530();
      if (((short)plVar13[1] == -1) || (*plVar13 == -1)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      plVar13 = (longlong *)param_1[0x14a];
      uVar19 = (longlong)(int)param_1[0x14b] & 0x1fffffffffffffff;
      if (plVar13 + (int)param_1[0x14b] < plVar13) {
        uVar19 = uVar17;
      }
      uVar16 = uVar17;
      if (uVar19 != 0) {
        do {
          if ((bVar6) ||
             ((*plVar13 != 0 &&
              ((plVar14 = (longlong *)FUN_142275530(), (short)plVar14[1] == -1 || (*plVar14 == -1)))
              ))) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
          plVar13 = plVar13 + 1;
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar19);
      }
      if (!bVar6) goto LAB_1423b77b6;
LAB_1423b77db:
      FUN_1423be6d0(param_1,0,0);
    }
    if (param_1[0x149] != 0) {
      FUN_14227af00();
      puVar18 = (undefined8 *)param_1[0x14a];
      uVar19 = (longlong)(int)param_1[0x14b] & 0x1fffffffffffffff;
      if (puVar18 + (int)param_1[0x14b] < puVar18) {
        uVar19 = uVar17;
      }
      if (uVar19 != 0) {
        do {
          FUN_14227af00(*puVar18);
          puVar18 = puVar18 + 1;
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar19);
      }
    }
    if ((param_1[0x14c] != 0) && ((char)param_1[0x14d] == '\0')) {
      FUN_14227af00();
    }
  }
  if (bVar9 != 0) {
    FUN_1423a96a0(param_1,param_2);
    goto LAB_1423b7a4e;
  }
  if (*(char *)((longlong)param_1 + 0xe55) == '\0') {
    if ((*(byte *)((longlong)param_1 + 0xb1c) & 4) == 0) {
      if (*(char *)((longlong)param_1 + 0xe54) == '\0') {
        *(undefined4 *)(param_1 + 0x152) = 0;
        if ((*(int *)((longlong)param_1 + 0xa94) < 0) && (*(int *)((longlong)param_1 + 0xa94) != 0))
        {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(param_1 + 0x151,0);
        }
        TArray<FTransform,TSizedDefaultAllocator<32>_>::
        Append<FTransform,TSizedDefaultAllocator<32>_>(param_1 + 0x151,param_1 + 0x15a);
        plVar13 = param_1 + (longlong)*(int *)((longlong)param_1 + 0x76c) * 2 + 0xe5;
        *(undefined4 *)(plVar13 + 1) = 0;
        if ((*(int *)((longlong)plVar13 + 0xc) < 0) && (*(int *)((longlong)plVar13 + 0xc) != 0)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(plVar13,0);
        }
        TArray<FTransform,TSizedDefaultAllocator<32>_>::
        Append<FTransform,TSizedDefaultAllocator<32>_>(plVar13,param_1 + 0x15c);
        if ((param_1[0x160] != 0) &&
           (*(uint *)(param_1 + 0x15f) == (uint)*(ushort *)(param_1 + 0x161))) {
          FBaseBlendedCurve<FDefaultAllocator>::CopyFrom(param_1 + 0x156,param_1 + 0x15e);
        }
      }
    }
    else {
      FUN_1423aaee0(param_1,param_1[0xe3],param_1 + 0x151,
                    param_1 + (longlong)*(int *)((longlong)param_1 + 0x76c) * 2 + 0xe5);
    }
    if (bVar2) {
      (**(code **)(*param_1 + 0x968))(param_1,param_2);
      goto LAB_1423b7a03;
    }
    if ((param_1[0x149] != 0) && (cVar7 = UAnimInstance::NeedsUpdate(), cVar7 != '\0')) {
      FUN_142279cb0(param_1[0x149]);
    }
    cVar7 = FUN_1423bd730(param_1);
    if (cVar7 != '\0') {
      FUN_142279cb0(param_1[0x14c]);
    }
  }
  else {
    if (*(char *)((longlong)param_1 + 0xe54) == '\0') {
      lVar15 = 0xa88;
      plVar13 = param_1 + (longlong)*(int *)((longlong)param_1 + 0x76c) * 2 + 0xe5;
      lVar12 = 0xab0;
    }
    else {
      lVar15 = 0xad0;
      plVar13 = param_1 + 0x15c;
      lVar12 = 0xaf0;
    }
    FUN_1423b5d60(param_1,param_1[0xe3],param_1[0x149],1,plVar13,lVar15 + (longlong)param_1,
                  param_1 + 0x153,lVar12 + (longlong)param_1);
LAB_1423b7a03:
    if (bVar2) goto LAB_1423b7a4e;
  }
  FUN_1423b6200(param_1,param_1 + 0x1c3);
LAB_1423b7a4e:
  if ((param_2 == 0) && (cVar7 = FUN_1426ce250(param_1), cVar7 != '\0')) {
    (**(code **)(*param_1 + 0x990))(param_1);
  }
  return;
}



// FUNCTION 1423b7aa0 FUN_1423b7aa0 body=83 status=ok
// SIG undefined FUN_1423b7aa0(void)

void FUN_1423b7aa0(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Components/SkinnedMeshComponent.h"
             ,0x391,L"Pure virtual not implemented (%s)",
             L"USkinnedMeshComponent::RefreshBoneTransforms");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Components/SkinnedMeshComponent.h"
             ,0x391,L"Pure virtual not implemented (%s)",
             L"USkinnedMeshComponent::RefreshBoneTransforms");
  return;
}



// FUNCTION 1423b7b00 FUN_1423b7b00 body=1713 status=ok
// SIG undefined FUN_1423b7b00(void)

void FUN_1423b7b00(longlong *param_1,longlong param_2)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  short *psVar15;
  bool bVar16;
  byte bVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  char local_res8;
  
  if (param_1[0xe3] == 0) {
    return;
  }
  if ((int)param_1[((longlong)(int)param_1[0xee] + 0x73) * 2] == 0) {
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0xb1d) & 8) == 0) {
    FUN_1423b6f90(param_1,*(undefined4 *)((longlong)param_1 + 0x83c));
  }
  else {
    lVar12 = *(longlong *)(param_1[0xe3] + 0x48);
    if ((lVar12 != 0) && ((short)param_1[0x166] != *(short *)(lVar12 + 0x250))) {
      FUN_1423b71f0(param_1);
    }
  }
  cVar9 = FUN_1423bdc20(param_1);
  if ((cVar9 == '\0') ||
     ((*(char *)param_1[0x11e] != '\x01' && (*(int *)((char *)param_1[0x11e] + 8) < 2)))) {
    bVar8 = false;
LAB_1423b7be7:
    bVar2 = bVar8;
    bVar8 = false;
  }
  else {
    bVar2 = true;
    if ((((int)param_1[0x152] == *(int *)(param_1[0xe3] + 0x160)) &&
        ((int)param_1[0x152] == (int)param_1[0x15b])) &&
       (bVar8 = true, (int)param_1[((longlong)(int)param_1[0xee] + 0x73) * 2] == (int)param_1[0x15d]
       )) goto LAB_1423b7be7;
    bVar8 = true;
  }
  if (param_1[0x149] == 0) {
    puVar21 = (undefined8 *)0x0;
LAB_1423b7c4b:
    iVar20 = 0;
  }
  else {
    lVar12 = FUN_1422743b0();
    puVar21 = (undefined8 *)(lVar12 + 0xc0);
    if (puVar21 == (undefined8 *)0x0) goto LAB_1423b7c4b;
    lVar12 = (longlong)*(int *)(lVar12 + 200);
    iVar20 = 0;
    if (0 < lVar12) {
      psVar15 = (short *)*puVar21;
      do {
        sVar1 = *psVar15;
        psVar15 = psVar15 + 1;
        iVar7 = iVar20 + 1;
        if (sVar1 == -1) {
          iVar7 = iVar20;
        }
        iVar20 = iVar7;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  if (((bVar2) && (puVar21 != (undefined8 *)0x0)) &&
     (((undefined8 *)param_1[0x160] != puVar21 || ((int)param_1[0x15f] != iVar20)))) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (((*(byte *)((longlong)param_1 + 0xb1c) & 4) != 0) ||
     (((bVar2 && (!bVar8)) && ((!bVar6 && ((*(byte *)(param_1[0x11e] + 2) & 0x10) != 0)))))) {
    local_res8 = '\0';
  }
  else {
    local_res8 = '\x01';
  }
  if ((((!bVar2) || (bVar8)) || ((*(byte *)(param_1[0x11e] + 2) & 1) == 0)) ||
     ((puVar21 == (undefined8 *)0x0 || ((char)param_1[0x1d6] != '\0')))) {
    cVar9 = '\0';
  }
  else {
    cVar9 = '\x01';
  }
  if ((*DAT_146af0b68 == 0) || (cVar10 = FUN_141636a40(), cVar10 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (((longlong *)param_1[0x149] == (longlong *)0x0) ||
     (cVar10 = (**(code **)(*(longlong *)param_1[0x149] + 0x290))(), cVar10 != '\0')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((longlong *)param_1[0x14c] == (longlong *)0x0) {
LAB_1423b7d29:
    bVar16 = true;
  }
  else {
    cVar10 = (**(code **)(*(longlong *)param_1[0x14c] + 0x290))();
    bVar16 = false;
    if (cVar10 != '\0') goto LAB_1423b7d29;
  }
  if ((((param_1[0x149] == 0) && (param_1[0x14c] == 0)) || (!bVar3)) || (!bVar16)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((bVar4) && (param_2 != 0)) &&
      ((*(byte *)(param_2 + 10) == *(byte *)(param_2 + 8) ||
       (*(byte *)(param_2 + 8) < *(byte *)(param_2 + 0xb))))) &&
     (*(longlong *)(param_2 + 0x18) != 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (((bVar3) && (local_res8 != '\0')) && (bVar4)) {
    bVar16 = true;
  }
  else {
    bVar16 = false;
  }
  if ((((param_1[0x149] == 0) || (cVar10 = UAnimInstance::NeedsUpdate(), cVar10 == '\0')) ||
      (!bVar3)) || ((DAT_146af0b4a == '\0' || (!bVar4)))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((cVar9 == '\0') || (!bVar3)) || (!bVar4)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (((bVar16) || (bVar5)) || (bVar17 = 0, bVar4)) {
    bVar17 = 1;
  }
  cVar10 = FUN_1423b2d70(param_1,bVar17 ^ 1,1);
  if (cVar10 != '\0') {
    return;
  }
  param_1[0x1c4] = param_1[0xe3];
  param_1[0x1c3] = param_1[0x149];
  if (puVar21 == (undefined8 *)0x0) {
    FBaseBlendedCurve<FDefaultAllocator>::Empty(param_1 + 0x1cb);
    FBaseBlendedCurve<FDefaultAllocator>::Empty(param_1 + 0x156);
  }
  else {
    if (((int)param_1[0x1cc] != iVar20) || ((undefined8 *)param_1[0x1cd] != puVar21)) {
      FBaseBlendedCurve<FDefaultAllocator>::InitFrom(param_1 + 0x1cb,puVar21);
    }
    if (((undefined8 *)param_1[0x158] != puVar21) || ((int)param_1[0x157] != iVar20)) {
      FBaseBlendedCurve<FDefaultAllocator>::InitFrom(param_1 + 0x156,puVar21);
    }
  }
  *(char *)((longlong)param_1 + 0xe55) = local_res8;
  *(char *)((longlong)param_1 + 0xe54) = cVar9;
  if ((bVar8) || (((bVar2 && (local_res8 != '\0')) && (cVar9 == '\0')))) {
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0xe56) = uVar11;
  if ((bVar6) ||
     (((bVar2 && (local_res8 != '\0')) && ((cVar9 == '\0' && (puVar21 != (undefined8 *)0x0)))))) {
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0xe57) = uVar11;
  if ((cVar9 == '\0') || (param_1[0x11e] == 0)) {
    uVar23 = 0x3f800000;
  }
  else {
    uVar23 = FAnimUpdateRateParameters::GetInterpolationAlpha();
  }
  uVar19 = 0;
  *(undefined4 *)(param_1 + 0x1e3) = uVar23;
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x15b) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0xadc)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0x15a,0);
    }
    *(undefined4 *)(param_1 + 0x15d) = 0;
    if ((*(int *)((longlong)param_1 + 0xaec) < 0) && (*(int *)((longlong)param_1 + 0xaec) != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0x15c,0);
    }
    FBaseBlendedCurve<FDefaultAllocator>::Empty(param_1 + 0x15e);
  }
  if (local_res8 == '\0') goto LAB_1423b8093;
  if ((param_1[0x149] == 0) || (cVar9 = UAnimInstance::NeedsUpdate(), cVar9 != '\0')) {
LAB_1423b7ff4:
    cVar9 = FUN_1423bd730(param_1);
    if ((cVar9 != '\0') &&
       ((plVar13 = (longlong *)FUN_142275530(param_1[0x14c]), (short)plVar13[1] == -1 ||
        (*plVar13 == -1)))) goto LAB_1423b8019;
  }
  else {
    plVar13 = (longlong *)FUN_142275530();
    if (((short)plVar13[1] == -1) || (*plVar13 == -1)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    plVar13 = (longlong *)param_1[0x14a];
    uVar22 = (longlong)(int)param_1[0x14b] & 0x1fffffffffffffff;
    if (plVar13 + (int)param_1[0x14b] < plVar13) {
      uVar22 = uVar19;
    }
    uVar18 = uVar19;
    if (uVar22 != 0) {
      do {
        if ((bVar8) ||
           ((*plVar13 != 0 &&
            ((plVar14 = (longlong *)FUN_142275530(), (short)plVar14[1] == -1 || (*plVar14 == -1)))))
           ) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        plVar13 = plVar13 + 1;
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar22);
    }
    if (!bVar8) goto LAB_1423b7ff4;
LAB_1423b8019:
    FUN_1423be6d0(param_1,0,0);
  }
  if (param_1[0x149] != 0) {
    FUN_14227af00();
    puVar21 = (undefined8 *)param_1[0x14a];
    uVar22 = (longlong)(int)param_1[0x14b] & 0x1fffffffffffffff;
    if (puVar21 + (int)param_1[0x14b] < puVar21) {
      uVar22 = uVar19;
    }
    if (uVar22 != 0) {
      do {
        FUN_14227af00(*puVar21);
        uVar19 = uVar19 + 1;
        puVar21 = puVar21 + 1;
      } while (uVar19 != uVar22);
    }
  }
  if ((param_1[0x14c] != 0) && ((char)param_1[0x14d] == '\0')) {
    FUN_14227af00();
  }
LAB_1423b8093:
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  if ((*(int *)((longlong)param_1 + 0xe44) < 0) && (*(int *)((longlong)param_1 + 0xe44) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x1c7,0);
  }
  TArray<FTransform,TSizedDefaultAllocator<32>_>::Append<FTransform,TSizedDefaultAllocator<32>_>
            (param_1 + 0x1c7,param_1 + 0x151);
  *(undefined4 *)(param_1 + 0x1c6) = 0;
  if ((*(int *)((longlong)param_1 + 0xe34) < 0) && (*(int *)((longlong)param_1 + 0xe34) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x1c5,0);
  }
  TArray<FTransform,TSizedDefaultAllocator<32>_>::Append<FTransform,TSizedDefaultAllocator<32>_>
            (param_1 + 0x1c5,param_1 + (longlong)(int)param_1[0xee] * 2 + 0xe5);
  if ((*(byte *)((longlong)param_1 + 0xb1c) & 4) == 0) {
    if (bVar17 == 0) {
      FUN_1423a9ae0(param_1);
      FUN_1423a6b20(param_1);
    }
    else {
      FUN_1423a8540(param_1,param_2);
    }
  }
  else {
    FUN_1423aaee0(param_1,param_1[0xe3],param_1 + 0x151,
                  param_1 + (longlong)*(int *)((longlong)param_1 + 0x76c) * 2 + 0xe5);
  }
  if ((param_2 == 0) && (cVar9 = FUN_1426ce250(param_1), cVar9 != '\0')) {
    (**(code **)(*param_1 + 0x990))(param_1);
  }
  return;
}



// FUNCTION 1423b81c0 FUN_1423b81c0 body=314 status=ok
// SIG undefined FUN_1423b81c0(void)

void FUN_1423b81c0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  FUN_1423b8ff0();
  if ((*(longlong *)(param_1 + 0x718) == 0) || (*(longlong *)(param_1 + 0xa48) == 0)) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x720);
    if (lVar2 == 0) goto LAB_1423b82b4;
    lVar3 = FUN_142a07000();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1423b82b4;
    lVar2 = *(longlong *)(lVar2 + 0xa48);
  }
  else {
    FUN_14227cb40(*(longlong *)(param_1 + 0xa48),param_1);
    uVar4 = 0;
    puVar5 = *(undefined8 **)(param_1 + 0xa50);
    uVar6 = (longlong)*(int *)(param_1 + 0xa58) & 0x1fffffffffffffff;
    if (puVar5 + *(int *)(param_1 + 0xa58) < puVar5) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      do {
        FUN_14227cb40(*puVar5,param_1);
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != uVar6);
    }
    lVar2 = *(longlong *)(param_1 + 0xa60);
  }
  if (lVar2 != 0) {
    FUN_14227cb40(lVar2,param_1);
  }
LAB_1423b82b4:
  if ((*(longlong *)(param_1 + 0x718) != 0) &&
     (0 < *(int *)(param_1 + 0xd58) - *(int *)(param_1 + 0xd84))) {
    FUN_142246e20(*(longlong *)(param_1 + 0x718),param_1 + 0xd50,param_1 + 0x808,param_1 + 0x818);
    return;
  }
  return;
}



// FUNCTION 1423b8300 FUN_1423b8300 body=119 status=ok
// SIG undefined FUN_1423b8300(void)

void FUN_1423b8300(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (0 < *(int *)(param_1 + 0x780)) {
    for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(param_1 + 0x780))); iVar3 = iVar3 + 1) {
      local_res8 = *(undefined4 *)(*(longlong *)(param_1 + 0x778) + (longlong)iVar3 * 8);
      local_resc = *(undefined4 *)(*(longlong *)(param_1 + 0x778) + (longlong)iVar3 * 8 + 4);
      cVar1 = FWeakObjectPtr::IsValid(&local_res8);
      if (cVar1 != '\0') {
        uVar2 = FWeakObjectPtr::Get(&local_res8);
        FUN_1423424c0(uVar2);
      }
    }
  }
  return;
}



// FUNCTION 1423b8380 FUN_1423b8380 body=108 status=ok
// SIG undefined FUN_1423b8380(void)

void FUN_1423b8380(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x8f0) != 0) {
    FUN_1423a6750();
    *(undefined8 *)(param_1 + 0x8f0) = 0;
    FUN_142491970(param_1);
    *(undefined8 *)(param_1 + 0xa00) = 0;
  }
  uVar1 = FUN_1423b22b0(param_1);
  *(undefined8 *)(param_1 + 0x8f0) = uVar1;
  uVar1 = FUN_14248a5b0(param_1);
  *(undefined8 *)(param_1 + 0xa00) = uVar1;
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound
            (param_1 + 0x8e0,*(undefined8 *)(param_1 + 0x8f0));
  return;
}



// FUNCTION 1423b83f0 FUN_1423b83f0 body=87 status=ok
// SIG undefined FUN_1423b83f0(void)

void FUN_1423b83f0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_142395230();
  if (*(char *)((longlong)param_1 + 0x3d) == '\0') {
LAB_1423b8430:
    uVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x400))(param_1,0);
    if (cVar1 == '\0') {
      cVar1 = FUN_1426ce250(param_1);
      if (cVar1 == '\0') goto LAB_1423b8430;
    }
    uVar2 = 1;
  }
  FUN_1423b8450(param_1,uVar2);
  FUN_1423c0050(param_1);
  return;
}



// FUNCTION 1423b8450 FUN_1423b8450 body=129 status=ok
// SIG undefined FUN_1423b8450(void)

void FUN_1423b8450(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (param_2 != *(char *)(param_1 + 0xdbd)) {
    if (param_2 == '\0') {
      FTickFunction::UnRegisterTickFunction(param_1 + 0xdb0);
    }
    else {
      cVar1 = FUN_1423521e0(param_1,param_1 + 0xdb0);
      if (cVar1 != '\0') {
        lVar2 = *(longlong *)(param_1 + 0x120);
        *(longlong *)(param_1 + 0xe00) = param_1;
        if ((lVar2 != 0) || (lVar2 = FUN_1423407b0(param_1), lVar2 != 0)) {
          FTickFunction::AddPrerequisite(param_1 + 0xdb0,lVar2,lVar2 + 0x640);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1423b84e0 FUN_1423b84e0 body=30 status=ok
// SIG undefined FUN_1423b84e0(void)

undefined8 FUN_1423b84e0(longlong param_1,undefined8 param_2)

{
  TBaseMulticastDelegate<void>::Add(param_1 + 0xe78);
  return param_2;
}



// FUNCTION 1423b8500 RegisterOnPhysicsCreatedDelegate body=30 status=ok
// SIG undefined RegisterOnPhysicsCreatedDelegate(void)

undefined8
USkeletalMeshComponent::RegisterOnPhysicsCreatedDelegate(longlong param_1,undefined8 param_2)

{
  TBaseMulticastDelegate<void>::Add(param_1 + 0xe90);
  return param_2;
}



// FUNCTION 1423b8520 FUN_1423b8520 body=63 status=ok
// SIG undefined FUN_1423b8520(void)

void FUN_1423b8520(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_141edf360();
    FUN_141ee24f0(0);
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
  }
  return;
}



// FUNCTION 1423b8560 FUN_1423b8560 body=317 status=ok
// SIG undefined FUN_1423b8560(void)

void FUN_1423b8560(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  bVar2 = false;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x28) <= param_2)) {
    uVar5 = 0;
    plVar3 = *(longlong **)(param_1 + 0x20);
    if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
      plVar3 = (longlong *)(param_1 + 0x10);
    }
    uVar4 = (longlong)*(int *)(param_1 + 0x28) & 0x1fffffffffffffff;
    if (plVar3 + *(int *)(param_1 + 0x28) < plVar3) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
      return;
    }
    do {
      if (*plVar3 != 0) {
        FUN_141edf360();
        bVar2 = true;
      }
      plVar3 = plVar3 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar4);
    if (!bVar2) {
      return;
    }
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar6 = param_1 + 0x10;
    }
    FUN_141edf360(*(undefined8 *)(lVar6 + (longlong)param_2 * 8));
  }
  uVar5 = 0;
  FUN_141ee24f0(0);
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    plVar3 = (longlong *)(param_1 + 0x10);
  }
  uVar4 = (longlong)*(int *)(param_1 + 0x28) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x28) < plVar3) {
    uVar4 = uVar5;
  }
  if (uVar4 != 0) {
    do {
      puVar1 = (undefined8 *)*plVar3;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar3 = plVar3 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar4);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
    ::ResizeTo((longlong *)(param_1 + 0x10),0);
  }
  return;
}



// FUNCTION 1423b86a0 ReleaseRHI body=58 status=ok
// SIG undefined ReleaseRHI(void)

void FSkyTextureCubeResource::ReleaseRHI(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x80,0);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x40,0);
  return;
}



// FUNCTION 1423b86e0 FUN_1423b86e0 body=232 status=ok
// SIG undefined FUN_1423b86e0(void)

void FUN_1423b86e0(longlong *param_1,int param_2,int param_3,char param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_3 != 0) {
    plVar3 = (longlong *)(*param_1 + (longlong)param_2 * 0x38);
    iVar4 = param_3;
    do {
      FUN_1423a66a0(plVar3);
      puVar1 = (undefined8 *)plVar3[6];
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        plVar3[6] = 0;
      }
      if (plVar3[4] != 0) {
        FMemory::Free();
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 7;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = (int)param_1[1];
    iVar2 = (iVar4 - param_2) - param_3;
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x38),
                 (void *)((longlong)(param_2 + param_3) * 0x38 + *param_1),(longlong)iVar2 * 0x38);
      iVar4 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar4 - param_3;
    if (param_4 != '\0') {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
      ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1423b87d0 FUN_1423b87d0 body=249 status=ok
// SIG undefined FUN_1423b87d0(void)

void FUN_1423b87d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  FWeakObjectPtr::operator=(local_res8);
  iVar1 = *(int *)(param_1 + 0x780);
  if (iVar1 != 0) {
    iVar5 = 0;
    cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                      (*(undefined8 *)(param_1 + 0x778),local_res8);
    bVar6 = cVar3 == '\0';
    iVar4 = 0;
    do {
      iVar2 = iVar4;
      do {
        iVar2 = iVar2 + 1;
        if (iVar1 <= iVar2) break;
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (*(longlong *)(param_1 + 0x778) + (longlong)iVar2 * 8,local_res8);
      } while (bVar6 == (cVar3 == '\0'));
      if (bVar6 != false) {
        if (iVar5 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x778) + (longlong)iVar5 * 8),
                     (void *)(*(longlong *)(param_1 + 0x778) + (longlong)iVar4 * 8),
                     (longlong)(iVar2 - iVar4) << 3);
        }
        iVar5 = iVar5 + (iVar2 - iVar4);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar4 = iVar2;
    } while (iVar2 < iVar1);
    *(int *)(param_1 + 0x780) = iVar5;
  }
  return;
}



// FUNCTION 1423b88d0 FUN_1423b88d0 body=877 status=ok
// SIG undefined FUN_1423b88d0(void)

void FUN_1423b88d0(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar6 = (longlong)param_2;
  if ((-1 < param_2) && (iVar1 = *(int *)(param_1 + 0x6f8), param_2 < iVar1)) {
    lVar8 = (longlong)(param_2 + 1);
    iVar4 = (iVar1 - param_2) + -1;
    iVar2 = iVar1;
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x6f0) + lVar6 * 0x2c),
                 (void *)(lVar8 * 0x2c + *(longlong *)(param_1 + 0x6f0)),(longlong)iVar4 * 0x2c);
      iVar2 = *(int *)(param_1 + 0x6f8);
    }
    *(int *)(param_1 + 0x6f8) = iVar2 + -1;
    iVar2 = *(int *)(param_1 + 0x710);
    iVar4 = (iVar2 - param_2) + -1;
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar6 * 0x50 + *(longlong *)(param_1 + 0x708)),
                 (void *)(lVar8 * 0x50 + *(longlong *)(param_1 + 0x708)),(longlong)iVar4 * 0x50);
      iVar2 = *(int *)(param_1 + 0x710);
    }
    *(int *)(param_1 + 0x710) = iVar2 + -1;
    iVar2 = *(int *)(param_1 + 0x728);
    iVar4 = (iVar2 - param_2) + -1;
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x720) + lVar6 * 0x2c),
                 (void *)(lVar8 * 0x2c + *(longlong *)(param_1 + 0x720)),(longlong)iVar4 * 0x2c);
      iVar2 = *(int *)(param_1 + 0x728);
    }
    lVar8 = lVar6 * 0x2c;
    *(int *)(param_1 + 0x728) = iVar2 + -1;
    lVar7 = (longlong)(iVar1 + -1);
    if (lVar6 < lVar7) {
      if (3 < lVar7 - lVar6) {
        lVar5 = lVar6 * 0x50;
        lVar3 = ((lVar7 - lVar6) - 4U >> 2) + 1;
        lVar6 = lVar3 * 4 + lVar6;
        do {
          *(float *)(*(longlong *)(param_1 + 0x6f0) + lVar8) =
               *(float *)(*(longlong *)(param_1 + 0x6f0) + lVar8) - 1.0;
          *(float *)(*(longlong *)(param_1 + 0x708) + lVar5) =
               *(float *)(*(longlong *)(param_1 + 0x708) + lVar5) - 1.0;
          *(float *)(*(longlong *)(param_1 + 0x720) + lVar8) =
               *(float *)(*(longlong *)(param_1 + 0x720) + lVar8) - 1.0;
          *(float *)(*(longlong *)(param_1 + 0x6f0) + 0x2c + lVar8) =
               *(float *)(*(longlong *)(param_1 + 0x6f0) + 0x2c + lVar8) - 1.0;
          *(float *)(*(longlong *)(param_1 + 0x708) + 0x50 + lVar5) =
               *(float *)(*(longlong *)(param_1 + 0x708) + 0x50 + lVar5) - 1.0;
          *(float *)(*(longlong *)(param_1 + 0x720) + 0x2c + lVar8) =
               *(float *)(*(longlong *)(param_1 + 0x720) + 0x2c + lVar8) - 1.0;
          *(float *)(lVar8 + 0x58 + *(longlong *)(param_1 + 0x6f0)) =
               *(float *)(lVar8 + 0x58 + *(longlong *)(param_1 + 0x6f0)) - 1.0;
          *(float *)(lVar5 + 0xa0 + *(longlong *)(param_1 + 0x708)) =
               *(float *)(lVar5 + 0xa0 + *(longlong *)(param_1 + 0x708)) - 1.0;
          *(float *)(lVar8 + 0x58 + *(longlong *)(param_1 + 0x720)) =
               *(float *)(lVar8 + 0x58 + *(longlong *)(param_1 + 0x720)) - 1.0;
          *(float *)(lVar8 + 0x84 + *(longlong *)(param_1 + 0x6f0)) =
               *(float *)(lVar8 + 0x84 + *(longlong *)(param_1 + 0x6f0)) - 1.0;
          *(float *)(lVar5 + 0xf0 + *(longlong *)(param_1 + 0x708)) =
               *(float *)(lVar5 + 0xf0 + *(longlong *)(param_1 + 0x708)) - 1.0;
          lVar5 = lVar5 + 0x140;
          *(float *)(lVar8 + 0x84 + *(longlong *)(param_1 + 0x720)) =
               *(float *)(lVar8 + 0x84 + *(longlong *)(param_1 + 0x720)) - 1.0;
          lVar8 = lVar8 + 0xb0;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      if (lVar6 < lVar7) {
        lVar3 = lVar6 * 0x50;
        lVar8 = lVar6 * 0x2c;
        lVar7 = lVar7 - lVar6;
        do {
          *(float *)(lVar8 + *(longlong *)(param_1 + 0x6f0)) =
               *(float *)(lVar8 + *(longlong *)(param_1 + 0x6f0)) - 1.0;
          *(float *)(lVar3 + *(longlong *)(param_1 + 0x708)) =
               *(float *)(lVar3 + *(longlong *)(param_1 + 0x708)) - 1.0;
          lVar3 = lVar3 + 0x50;
          *(float *)(lVar8 + *(longlong *)(param_1 + 0x720)) =
               *(float *)(lVar8 + *(longlong *)(param_1 + 0x720)) - 1.0;
          lVar8 = lVar8 + 0x2c;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    if (*(char *)(param_1 + 0x7c2) != '\0') {
      *(float *)(param_1 + 0x7c4) = *(float *)(param_1 + 0x7c4) - 1.0;
    }
  }
  if (param_3 == '\0') {
    return;
  }
  FUN_1423c1a10(param_1);
  return;
}



// FUNCTION 1423b8c40 FUN_1423b8c40 body=64 status=ok
// SIG undefined FUN_1423b8c40(void)

void FUN_1423b8c40(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_1423bd9c0();
  if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x3f) == '\0')) {
    (**(code **)(*param_1 + 0x358))(param_1,1);
    *(byte *)((longlong)param_1 + 0x999) = *(byte *)((longlong)param_1 + 0x999) & 0xfd;
    *(bool *)((longlong)param_1 + 0x99a) = *(char *)((longlong)param_1 + 0x3f) != '\0';
  }
  return;
}



// FUNCTION 1423b8c80 Reset body=294 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  void *_Dst;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar3 = (longlong)local_1c * 0xa0 + *local_38;
      if (*(longlong *)(lVar3 + 0x20) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  uVar4 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1423b8db0 FUN_1423b8db0 body=159 status=ok
// SIG undefined FUN_1423b8db0(void)

undefined8 FUN_1423b8db0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = param_2;
  plVar1 = (longlong *)param_1[1];
  for (iVar2 = *(int *)(param_1 + 2); iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 1,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 3,0);
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 1;
  return 0;
}



// FUNCTION 1423b8e50 FUN_1423b8e50 body=56 status=ok
// SIG undefined FUN_1423b8e50(void)

void FUN_1423b8e50(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xb28) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xb2c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xb20,0);
  }
  *(undefined2 *)(param_1 + 0xb30) = 0;
  return;
}



// FUNCTION 1423b8e90 FUN_1423b8e90 body=168 status=ok
// SIG undefined FUN_1423b8e90(void)

void FUN_1423b8e90(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0xa48) != 0) {
    FUN_14227db20();
  }
  uVar2 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0xa50);
  uVar3 = (longlong)*(int *)(param_1 + 0xa58) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0xa58) < puVar1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      FUN_14227db20(*puVar1,param_2);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 != uVar3);
  }
  if (*(longlong *)(param_1 + 0xa60) != 0) {
    FUN_14227db20(*(longlong *)(param_1 + 0xa60),param_2);
  }
  return;
}



// FUNCTION 1423b8f40 FUN_1423b8f40 body=168 status=ok
// SIG undefined FUN_1423b8f40(void)

void FUN_1423b8f40(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0xa48) != 0) {
    FUN_14227dbc0();
  }
  uVar2 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0xa50);
  uVar3 = (longlong)*(int *)(param_1 + 0xa58) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0xa58) < puVar1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      FUN_14227dbc0(*puVar1,param_2);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 != uVar3);
  }
  if (*(longlong *)(param_1 + 0xa60) != 0) {
    FUN_14227dbc0(*(longlong *)(param_1 + 0xa60),param_2);
  }
  return;
}



// FUNCTION 1423b8ff0 FUN_1423b8ff0 body=240 status=ok
// SIG undefined FUN_1423b8ff0(void)

void FUN_1423b8ff0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x810) = 0;
  if ((*(int *)(param_1 + 0x814) < 0) && (*(int *)(param_1 + 0x814) != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
  }
  plVar1 = (longlong *)(param_1 + 0x818);
  if (*(longlong *)(param_1 + 0x718) == 0) {
    *(undefined4 *)(param_1 + 0x820) = 0;
    if ((*(int *)(param_1 + 0x824) < 0) && (*(int *)(param_1 + 0x824) != 0)) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar1,0);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x820);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x718) + 0x128);
    if (iVar2 < iVar3) {
      *(int *)(param_1 + 0x820) = iVar3;
      if (*(int *)(param_1 + 0x824) < iVar3) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + (longlong)iVar2 * 4),0,(longlong)(iVar3 - iVar2) << 2);
    }
    else if ((iVar3 < iVar2) && (iVar3 != iVar2)) {
      *(int *)(param_1 + 0x820) = iVar3;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar1);
    }
    if (0 < *(int *)(param_1 + 0x820)) {
      _guard_xfg_dispatch_icall_nop
                ((void *)*plVar1,0,(ulonglong)(uint)(*(int *)(param_1 + 0x824) << 2));
      return;
    }
  }
  return;
}



// FUNCTION 1423b90e0 FUN_1423b90e0 body=53 status=ok
// SIG undefined FUN_1423b90e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423b90e0(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0xb90) = 0xffffffff;
  uVar1 = uRam00000001468b5b78;
  *(undefined8 *)(param_1 + 0xba0) = _DAT_1468b5b70;
  *(undefined8 *)(param_1 + 0xba8) = uVar1;
  uVar1 = uRam00000001468b5b88;
  *(undefined8 *)(param_1 + 0xbb0) = _DAT_1468b5b80;
  *(undefined8 *)(param_1 + 3000) = uVar1;
  uVar1 = uRam00000001468b5b98;
  *(undefined8 *)(param_1 + 0xbc0) = _DAT_1468b5b90;
  *(undefined8 *)(param_1 + 0xbc8) = uVar1;
  return;
}



// FUNCTION 1423b9120 FUN_1423b9120 body=19 status=ok
// SIG undefined FUN_1423b9120(void)

longlong FUN_1423b9120(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  char *pcVar9;
  
  lVar3 = *(longlong *)(param_1 + 0xa48);
  if (lVar3 == 0) {
    return 0;
  }
  plVar8 = *(longlong **)(lVar3 + 0x418);
  plVar1 = plVar8 + *(int *)(lVar3 + 0x420);
  for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
    lVar6 = *plVar8;
    if ((lVar6 != 0) && (lVar2 = *param_2, *(int *)(lVar6 + 0x90) != *(int *)(lVar6 + 0xbc))) {
      lVar7 = *(longlong *)(lVar6 + 200);
      if (*(longlong *)(lVar6 + 200) == 0) {
        lVar7 = lVar6 + 0xc0;
      }
      iVar4 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                               (longlong)*(int *)(lVar6 + 0xd0) - 1U) * 4);
      if (iVar4 != -1) {
        lVar6 = *(longlong *)(lVar6 + 0x88);
        do {
          lVar7 = (longlong)iVar4;
          if (*(longlong *)(lVar6 + lVar7 * 0x18) == lVar2) {
            if (((iVar4 != -1) && (lVar6 = lVar6 + lVar7 * 0x18, lVar6 != 0)) &&
               (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
              return lVar6;
            }
            break;
          }
          iVar4 = *(int *)(lVar6 + 0x10 + lVar7 * 0x18);
        } while (iVar4 != -1);
      }
    }
  }
  if (0 < *(int *)(lVar3 + 0x410)) {
    pcVar9 = *(char **)(lVar3 + 0x408);
    lVar6 = 0;
    do {
      if (((*pcVar9 != '\0') && (lVar2 = *(longlong *)(pcVar9 + 8), lVar2 != 0)) &&
         (lVar7 = *param_2, *(int *)(lVar2 + 0x90) != *(int *)(lVar2 + 0xbc))) {
        lVar5 = *(longlong *)(lVar2 + 200);
        if (*(longlong *)(lVar2 + 200) == 0) {
          lVar5 = lVar2 + 0xc0;
        }
        iVar4 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar7 >> 0x20) + (int)lVar7) &
                                 (longlong)*(int *)(lVar2 + 0xd0) - 1U) * 4);
        if (iVar4 != -1) {
          lVar2 = *(longlong *)(lVar2 + 0x88);
          do {
            lVar5 = (longlong)iVar4;
            if (*(longlong *)(lVar2 + lVar5 * 0x18) == lVar7) {
              if (((iVar4 != -1) && (lVar2 = lVar2 + lVar5 * 0x18, lVar2 != 0)) &&
                 (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) {
                return lVar2;
              }
              break;
            }
            iVar4 = *(int *)(lVar2 + 0x10 + lVar5 * 0x18);
          } while (iVar4 != -1);
        }
      }
      lVar6 = lVar6 + 1;
      pcVar9 = pcVar9 + 0x10;
    } while (lVar6 < *(int *)(lVar3 + 0x410));
  }
  return 0;
}



// FUNCTION 1423b9150 FUN_1423b9150 body=209 status=ok
// SIG undefined FUN_1423b9150(void)

void FUN_1423b9150(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_14234e7b0();
  if (((*(longlong *)(param_1 + 0x888) != 0) && (*(longlong *)(param_1 + 0x718) != 0)) &&
     (((*(byte *)(param_1 + 0x881) & 0x10) != 0 ||
      ((((*(byte *)(param_1 + 0x880) & 2) != 0 || (*(char *)(param_1 + 0x878) == '\0')) ||
       (*(char *)(*(longlong *)(param_1 + 0x888) + 0x38) == '\0')))))) {
    uVar1 = *(undefined4 *)(param_1 + 0x83c);
    if (((*(byte *)(param_1 + 0x879) & 8) != 0) || (*DAT_146af0d80 == 0)) {
      *(undefined4 *)(param_1 + 0x810) = 0;
      if (*(int *)(param_1 + 0x814) != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x808,0);
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x888) + 0x20))
              (*(longlong **)(param_1 + 0x888),uVar1,param_1,param_1 + 0x808,param_1 + 0x818,0);
    *(undefined1 *)(*(longlong *)(param_1 + 0x888) + 0x38) = 1;
    FUN_1423c0940(param_1);
  }
  return;
}



// FUNCTION 1423b9230 FUN_1423b9230 body=441 status=ok
// SIG undefined FUN_1423b9230(void)

void FUN_1423b9230(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  
  FUN_142396660();
  if ((*(byte *)((longlong)param_2 + 0x2a) & 0x20) != 0) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 0x730) * 0x30,
               (longlong)*(int *)(param_1 + 0x734) * 0x30);
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 0x740) * 0x30,
               (longlong)*(int *)(param_1 + 0x744) * 0x30);
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 0x790) << 2,
               (longlong)*(int *)(param_1 + 0x794) << 2);
    if ((*(byte *)((longlong)param_2 + 0x2a) & 0x20) != 0) {
      (**(code **)(*param_2 + 0x78))
                (param_2,(longlong)*(int *)(param_1 + 0xa90) * 0x30,
                 (longlong)*(int *)(param_1 + 0xa94) * 0x30);
      (**(code **)(*param_2 + 0x78))
                (param_2,(longlong)*(int *)(param_1 + 0xbd8) * 2,
                 (longlong)*(int *)(param_1 + 0xbdc) * 2);
    }
  }
  if (((int)param_2[8] < 0x19a) && ((*(byte *)(param_1 + 0xb1c) & 0x20) != 0)) {
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0xb58);
  }
  if ((*(byte *)(param_1 + 0x3c0) & 8) != 0) {
    *(byte *)(param_1 + 0xb1a) = *(byte *)(param_1 + 0xb1a) | 8;
  }
  bVar1 = *(byte *)(param_2 + 5);
  if ((((bVar1 & 1) != 0) && ((int)param_2[8] < 0x1ed)) && (*(longlong *)(param_1 + 0xa38) != 0)) {
    *(longlong *)(param_1 + 0xa40) = *(longlong *)(param_1 + 0xa38);
    bVar1 = *(byte *)(param_2 + 5);
  }
  if ((bVar1 & 1) != 0) {
    if (*(longlong *)(param_1 + 0xa38) != 0) {
      *(undefined8 *)(param_1 + 0xa38) = 0;
      bVar1 = *(byte *)(param_2 + 5);
    }
    if (((bVar1 & 1) != 0) && ((int)param_2[8] < 0x189)) {
      *(byte *)(param_1 + 0x3c0) = *(byte *)(param_1 + 0x3c0) & 0xbf;
    }
  }
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0138);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar2 = FArchive::CustomVer(param_2,&DAT_1464b0138);
    if (iVar2 < 0xb) {
      *(byte *)(param_1 + 0xb1a) = *(byte *)(param_1 + 0xb1a) & 0x7f;
      *(byte *)(param_1 + 0xb1a) = *(byte *)(param_1 + 0xb1a) | ~*(byte *)(param_1 + 0xb1b) << 7;
    }
  }
  return;
}



// FUNCTION 1423b93f0 FUN_1423b93f0 body=149 status=ok
// SIG undefined FUN_1423b93f0(void)

void FUN_1423b93f0(longlong param_1,longlong *param_2)

{
  FUN_142396660();
  if ((*(byte *)((longlong)param_2 + 0x2a) & 0x20) != 0) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 0x730) * 0x30,
               (longlong)*(int *)(param_1 + 0x734) * 0x30);
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 0x740) * 0x30,
               (longlong)*(int *)(param_1 + 0x744) * 0x30);
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 0x790) << 2,
               (longlong)*(int *)(param_1 + 0x794) << 2);
  }
  return;
}



// FUNCTION 1423b9490 Serialize body=185 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void USkyLightComponent::Serialize(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FArchive::UsingCustomVersion(param_2,&DAT_1464af950);
  FUN_142375c80(param_1,param_2);
  if (0x1ff < *(int *)(param_2 + 0x40)) {
    iVar1 = FArchive::CustomVer(param_2);
    if (iVar1 < 9) {
      ::_guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
      uVar2 = FUN_1423a1500(param_2,local_a8);
      uVar2 = FUN_1423a1500(uVar2,local_78);
      FUN_1423a1500(uVar2,local_48);
    }
  }
  return;
}



// FUNCTION 1423b9550 FUN_1423b9550 body=888 status=ok
// SIG undefined FUN_1423b9550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423b9550(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  
  FUN_142396660();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0068);
  iVar4 = FArchive::CustomVer(param_2,&DAT_1464b0068);
  if ((iVar4 < 6) && ((*(byte *)(param_2 + 0x28) & 1) != 0)) {
    FInterpCurveVector::operator=(param_1 + 0x6f0,param_1 + 0x750);
    FInterpCurveQuat::operator=(param_1 + 0x708,param_1 + 0x768);
    FInterpCurveVector::operator=(param_1 + 0x720,param_1 + 0x780);
    FInterpCurveFloat::operator=(param_1 + 0x738,param_1 + 0x798);
  }
  if (*(int *)(param_2 + 0x40) < 0x1c4) {
    uVar8 = *(uint *)(param_1 + 0x6f8);
    lVar9 = (longlong)(int)uVar8;
    if (*(char *)(param_1 + 0x7c1) != '\0') {
      lVar3 = *(longlong *)(param_1 + 0x6f0);
      lVar6 = lVar9 * 0x2c;
      if (((*(float *)(lVar6 + -0x28 + lVar3) == *(float *)(lVar3 + 4)) &&
          (*(float *)(lVar6 + -0x24 + lVar3) == *(float *)(lVar3 + 8))) &&
         (*(float *)(lVar6 + -0x20 + lVar3) == *(float *)(lVar3 + 0xc))) {
        iVar4 = *(int *)(param_1 + 0x6f8);
        uVar8 = uVar8 - 1;
        iVar5 = (iVar4 - uVar8) + -1;
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)(int)uVar8 * 0x2c + lVar3),(void *)(lVar9 * 0x2c + lVar3),
                     (longlong)iVar5 * 0x2c);
          iVar4 = *(int *)(param_1 + 0x6f8);
        }
        *(int *)(param_1 + 0x6f8) = iVar4 + -1;
      }
    }
    plVar1 = (longlong *)(param_1 + 0x708);
    *(undefined4 *)(param_1 + 0x710) = 0;
    if (*(int *)(param_1 + 0x714) < (int)uVar8) {
      TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(plVar1,uVar8);
    }
    plVar2 = (longlong *)(param_1 + 0x720);
    *(undefined4 *)(param_1 + 0x728) = 0;
    if (*(int *)(param_1 + 0x72c) < (int)uVar8) {
      TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(plVar2,uVar8);
    }
    if (0 < (int)uVar8) {
      local_38 = 0x3f800000;
      uStack_34 = 0x3f800000;
      local_30 = 0x3f800000;
      uVar10 = (ulonglong)uVar8;
      do {
        iVar4 = *(int *)(param_1 + 0x710);
        *(int *)(param_1 + 0x710) = iVar4 + 1;
        if (*(int *)(param_1 + 0x714) < iVar4 + 1) {
          TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
        }
        puVar7 = (undefined4 *)((longlong)iVar4 * 0x50 + *plVar1);
        *puVar7 = 0;
        puVar7[4] = DAT_1464aa810;
        puVar7[5] = DAT_1464aa814;
        puVar7[6] = DAT_1464aa818;
        puVar7[7] = DAT_1464aa81c;
        puVar7[8] = DAT_1464aa810;
        puVar7[9] = DAT_1464aa814;
        puVar7[10] = DAT_1464aa818;
        puVar7[0xb] = DAT_1464aa81c;
        puVar7[0xc] = DAT_1464aa810;
        puVar7[0xd] = DAT_1464aa814;
        puVar7[0xe] = DAT_1464aa818;
        puVar7[0xf] = DAT_1464aa81c;
        *(undefined1 *)(puVar7 + 0x10) = 1;
        iVar4 = *(int *)(param_1 + 0x728);
        *(int *)(param_1 + 0x728) = iVar4 + 1;
        if (*(int *)(param_1 + 0x72c) < iVar4 + 1) {
          TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(plVar2,iVar4);
        }
        puVar7 = (undefined4 *)((longlong)iVar4 * 0x2c + *plVar2);
        *(undefined8 *)(puVar7 + 1) = 0x3f8000003f800000;
        puVar7[3] = 0x3f800000;
        *puVar7 = 0;
        *(undefined8 *)(puVar7 + 4) = _DAT_1468b5d90;
        puVar7[6] = DAT_1468b5d98;
        *(undefined8 *)(puVar7 + 7) = _DAT_1468b5d90;
        puVar7[9] = DAT_1468b5d98;
        *(undefined1 *)(puVar7 + 10) = 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    local_38 = *(undefined4 *)(param_1 + 0x230);
    uStack_34 = *(undefined4 *)(param_1 + 0x234);
    local_30 = *(undefined4 *)(param_1 + 0x238);
    FSplineCurves::UpdateSpline
              (param_1 + 0x6f0,*(undefined1 *)(param_1 + 0x7c1),*(undefined1 *)(param_1 + 0x7bc),
               *(undefined4 *)(param_1 + 0x7b4),*(undefined1 *)(param_1 + 0x7c2),
               *(undefined4 *)(param_1 + 0x7c4),&local_38);
  }
  return;
}



// FUNCTION 1423b98d0 FUN_1423b98d0 body=46 status=ok
// SIG undefined FUN_1423b98d0(void)

void FUN_1423b98d0(longlong param_1,byte param_2)

{
  if (*(byte *)(param_1 + 0xb1a) >> 7 != param_2) {
    *(byte *)(param_1 + 0xb1a) = *(byte *)(param_1 + 0xb1a) & 0x7f | param_2 << 7;
    *(undefined2 *)(param_1 + 0xb30) = 0;
  }
  return;
}



// FUNCTION 1423b9900 FUN_1423b9900 body=360 status=ok
// SIG undefined FUN_1423b9900(void)

void FUN_1423b9900(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong local_18 [2];
  
  plVar1 = (longlong *)(param_1 + 0xb20);
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0xb28) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xb2c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  *(undefined2 *)(param_1 + 0xb30) = 0;
  if (param_3 == '\0') {
    TArray<FName,FDefaultAllocator>::operator=(plVar1,param_2);
  }
  else if (((*(longlong *)(param_1 + 0x718) != 0) &&
           (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x48), lVar4 != 0)) &&
          (lVar4 = USkeleton::GetSmartNameContainer(lVar4,&DAT_146aef308), lVar4 != 0)) {
    local_18[0] = 0;
    local_18[1] = 0;
    UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(lVar4,local_18);
    TArray<FName,FDefaultAllocator>::operator=(plVar1,local_18);
    uVar9 = uVar7;
    if (0 < *(int *)(param_1 + 0xb28)) {
      do {
        plVar5 = (longlong *)*param_2;
        lVar4 = *plVar1;
        plVar2 = plVar5 + (int)param_2[1];
        iVar8 = (int)uVar9;
        if (plVar5 != plVar2) {
          do {
            if (*plVar5 == *(longlong *)(uVar7 + lVar4)) {
              iVar6 = *(int *)(param_1 + 0xb28);
              iVar3 = (iVar6 - iVar8) + -1;
              if (0 < iVar3) {
                iVar3 = 1;
              }
              if (iVar3 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(lVar4 + (longlong)iVar8 * 8),
                           (void *)(lVar4 + (longlong)(iVar6 - iVar3) * 8),(longlong)iVar3 << 3);
                iVar6 = *(int *)(param_1 + 0xb28);
              }
              *(int *)(param_1 + 0xb28) = iVar6 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
              goto LAB_1423b99eb;
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar2);
        }
        uVar9 = (ulonglong)(iVar8 + 1);
        uVar7 = uVar7 + 8;
LAB_1423b99eb:
      } while ((int)uVar9 < *(int *)(param_1 + 0xb28));
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1423b9a70 FUN_1423b9a70 body=127 status=ok
// SIG undefined FUN_1423b9a70(void)

void FUN_1423b9a70(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0xa48);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_1428f7290();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x340))(plVar1,param_2,0,0x3f800000);
      FUN_1422b3fc0(plVar1,0);
    }
  }
  return;
}



// FUNCTION 1423b9af0 FUN_1423b9af0 body=153 status=ok
// SIG undefined FUN_1423b9af0(void)

void FUN_1423b9af0(longlong param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = *(byte *)(param_1 + 0xb18);
  if (bVar1 != param_2) {
    *(char *)(param_1 + 0xb18) = (char)param_2;
    if (*(longlong *)(param_1 + 0xa48) != 0) {
      FUN_14225ceb0();
    }
    *(undefined8 *)(param_1 + 0xa48) = 0;
    *(undefined4 *)(param_1 + 0xa58) = 0;
    if (*(int *)(param_1 + 0xa5c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xa50,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x718) != 0) &&
     ((bVar1 != param_2 || (*(char *)(param_1 + 0xb18) == '\0')))) {
    cVar2 = FUN_1423b3e90(param_1,1);
    if (cVar2 != '\0') {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xda0,0)
      ;
    }
  }
  return;
}



// FUNCTION 1423b9b90 FUN_1423b9b90 body=229 status=ok
// SIG undefined FUN_1423b9b90(void)

void FUN_1423b9b90(longlong param_1)

{
  int iVar1;
  BOOL BVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (((((*(byte *)(param_1 + 0x24c) & 0x20) != 0) && ((*(byte *)(param_1 + 0x2ec) & 1) != 0)) &&
      (*(longlong *)(param_1 + 1000) != 0)) && (*(char *)(param_1 + 0x315) == '\0')) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
    }
    iVar1 = DAT_146af0f08;
    lVar4 = (longlong)DAT_146af0f08;
    for (plVar3 = DAT_146af0f00; plVar3 != DAT_146af0f00 + lVar4; plVar3 = plVar3 + 1) {
      if (*plVar3 == param_1) {
        if ((int)((longlong)plVar3 - (longlong)DAT_146af0f00 >> 3) != -1) goto LAB_1423b9c56;
        break;
      }
    }
    DAT_146af0f08 = DAT_146af0f08 + 1;
    if (DAT_146af0f0c < DAT_146af0f08) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146af0f00,iVar1);
    }
    DAT_146af0f00[lVar4] = param_1;
LAB_1423b9c56:
    *(undefined1 *)(param_1 + 0x345) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
  }
  return;
}



// FUNCTION 1423b9c80 FUN_1423b9c80 body=23 status=ok
// SIG undefined FUN_1423b9c80(void)

void FUN_1423b9c80(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x890)) {
    *(float *)(param_1 + 0x890) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1423b9ca0 FUN_1423b9ca0 body=213 status=ok
// SIG undefined FUN_1423b9ca0(void)

void FUN_1423b9ca0(longlong param_1)

{
  int iVar1;
  BOOL BVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((((*(byte *)(param_1 + 0x24c) & 0x20) != 0) && ((*(byte *)(param_1 + 0x2ec) & 1) != 0)) &&
     (*(char *)(param_1 + 0x315) == '\0')) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
    }
    iVar1 = DAT_146af0ef8;
    lVar4 = (longlong)DAT_146af0ef8;
    for (plVar3 = DAT_146af0ef0; plVar3 != DAT_146af0ef0 + lVar4; plVar3 = plVar3 + 1) {
      if (*plVar3 == param_1) {
        if ((int)((longlong)plVar3 - (longlong)DAT_146af0ef0 >> 3) != -1) goto LAB_1423b9d56;
        break;
      }
    }
    DAT_146af0ef8 = DAT_146af0ef8 + 1;
    if (DAT_146af0efc < DAT_146af0ef8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146af0ef0,iVar1);
    }
    DAT_146af0ef0[lVar4] = param_1;
LAB_1423b9d56:
    *(undefined1 *)(param_1 + 0x345) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
  }
  return;
}



// FUNCTION 1423b9d80 FUN_1423b9d80 body=44 status=ok
// SIG undefined FUN_1423b9d80(void)

void FUN_1423b9d80(longlong param_1,byte param_2)

{
  if (param_2 != (*(byte *)(param_1 + 0x880) >> 2 & 1)) {
    *(byte *)(param_1 + 0x880) = *(byte *)(param_1 + 0x880) & 0xfb | param_2 << 2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1423b9db0 FUN_1423b9db0 body=44 status=ok
// SIG undefined FUN_1423b9db0(void)

void FUN_1423b9db0(longlong param_1,byte param_2)

{
  if (param_2 != (*(byte *)(param_1 + 0x880) >> 3 & 1)) {
    *(byte *)(param_1 + 0x880) = *(byte *)(param_1 + 0x880) & 0xf7 | param_2 << 3;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1423b9de0 FUN_1423b9de0 body=23 status=ok
// SIG undefined FUN_1423b9de0(void)

void FUN_1423b9de0(longlong param_1,undefined1 param_2,char param_3)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  *(undefined1 *)(param_1 + 0x7c1) = param_2;
  *(undefined1 *)(param_1 + 0x7c2) = 0;
  if (param_3 == '\0') {
    return;
  }
  uStack_18 = *(undefined4 *)(param_1 + 0x230);
  uStack_14 = *(undefined4 *)(param_1 + 0x234);
  uStack_10 = *(undefined4 *)(param_1 + 0x238);
  FSplineCurves::UpdateSpline
            (param_1 + 0x6f0,*(undefined1 *)(param_1 + 0x7c1),*(undefined1 *)(param_1 + 0x7bc),
             *(undefined4 *)(param_1 + 0x7b4),*(undefined1 *)(param_1 + 0x7c2),
             *(undefined4 *)(param_1 + 0x7c4),&uStack_18);
  return;
}



// FUNCTION 1423b9e00 FUN_1423b9e00 body=30 status=ok
// SIG undefined FUN_1423b9e00(void)

void FUN_1423b9e00(longlong param_1,undefined1 param_2,undefined4 param_3,char param_4)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  *(undefined4 *)(param_1 + 0x7c4) = param_3;
  *(undefined1 *)(param_1 + 0x7c1) = param_2;
  *(undefined1 *)(param_1 + 0x7c2) = param_2;
  if (param_4 == '\0') {
    return;
  }
  uStack_18 = *(undefined4 *)(param_1 + 0x230);
  uStack_14 = *(undefined4 *)(param_1 + 0x234);
  uStack_10 = *(undefined4 *)(param_1 + 0x238);
  FSplineCurves::UpdateSpline
            (param_1 + 0x6f0,*(undefined1 *)(param_1 + 0x7c1),*(undefined1 *)(param_1 + 0x7bc),
             *(undefined4 *)(param_1 + 0x7b4),*(undefined1 *)(param_1 + 0x7c2),
             *(undefined4 *)(param_1 + 0x7c4),&uStack_18);
  return;
}



// FUNCTION 1423b9e20 FUN_1423b9e20 body=49 status=ok
// SIG undefined FUN_1423b9e20(void)

void FUN_1423b9e20(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x881) = *(byte *)(param_1 + 0x881) & 0xfe | param_2;
  if ((param_2 & 1) != 0) {
    *(int *)(param_1 + 0x76c) = 1 - *(int *)(param_1 + 0x770);
    return;
  }
  *(undefined8 *)(param_1 + 0x76c) = 0;
  return;
}



// FUNCTION 1423b9e60 FUN_1423b9e60 body=193 status=ok
// SIG undefined FUN_1423b9e60(void)

void FUN_1423b9e60(longlong param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  UActorComponent::SetComponentTickEnabled();
  cVar2 = UActorComponent::IsComponentTickEnabled(param_1);
  if (cVar2 == '\0') {
    if (*(longlong *)(param_1 + 0xa00) != 0) {
      FUN_142491970(param_1);
      *(undefined8 *)(param_1 + 0xa00) = 0;
    }
  }
  else if (*(longlong *)(param_1 + 0xa00) == 0) {
    uVar1 = FUN_14248a5b0(param_1);
    *(undefined8 *)(param_1 + 0xa00) = uVar1;
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound
              (param_1 + 0x8e0,*(undefined8 *)(param_1 + 0x8f0));
  }
  if (param_2 == '\0') {
    if ((*(char *)(param_1 + 0xead) == '\0') && (*(char *)(param_1 + 0xc25) != '\0')) {
      FTickFunction::UnRegisterTickFunction(param_1 + 0xc18);
    }
  }
  else {
    FUN_1423c0050(param_1);
    *(undefined1 *)(param_1 + 0x998) = 0;
    if (*(char *)(param_1 + 0x99a) != '\0') {
      *(byte *)(param_1 + 0x999) = *(byte *)(param_1 + 0x999) | 2;
      return;
    }
  }
  return;
}



// FUNCTION 1423b9f30 FUN_1423b9f30 body=107 status=ok
// SIG undefined FUN_1423b9f30(void)

void FUN_1423b9f30(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  UActorComponent::SetComponentTickEnabled();
  cVar2 = UActorComponent::IsComponentTickEnabled(param_1);
  if (cVar2 == '\0') {
    if (*(longlong *)(param_1 + 0xa00) != 0) {
      FUN_142491970(param_1);
      *(undefined8 *)(param_1 + 0xa00) = 0;
    }
  }
  else if (*(longlong *)(param_1 + 0xa00) == 0) {
    uVar1 = FUN_14248a5b0(param_1);
    *(undefined8 *)(param_1 + 0xa00) = uVar1;
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound
              (param_1 + 0x8e0,*(undefined8 *)(param_1 + 0x8f0));
    return;
  }
  return;
}



// FUNCTION 1423b9fa0 FUN_1423b9fa0 body=85 status=ok
// SIG undefined FUN_1423b9fa0(void)

void FUN_1423b9fa0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (*(longlong *)(param_1 + 0x300) != param_2)) {
    *(longlong *)(param_1 + 0x300) = param_2;
    FUN_1423424e0(param_1);
    FUN_1423b9ca0(param_1);
  }
  return;
}



// FUNCTION 1423ba000 FUN_1423ba000 body=841 status=ok
// SIG undefined FUN_1423ba000(void)

void FUN_1423ba000(longlong param_1,longlong param_2,longlong param_3,float param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  LARGE_INTEGER local_68;
  longlong local_60;
  LARGE_INTEGER local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  cVar5 = FUN_142341170();
  if ((((cVar5 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) &&
     ((((*(longlong *)(param_1 + 0x300) != param_2 || (*(longlong *)(param_1 + 1000) != param_3)) ||
       (param_4 != *(float *)(param_1 + 0x3e4))) && (*(char *)(param_1 + 0x2f8) == '\x01')))) {
    if (*(longlong *)(param_1 + 0x300) != param_2) {
      *(longlong *)(param_1 + 0x300) = param_2;
      FUN_1423b9ca0(param_1);
    }
    if (*(longlong *)(param_1 + 1000) != param_3) {
      *(longlong *)(param_1 + 1000) = param_3;
      FUN_1423b9b90(param_1);
    }
    if ((param_4 != *(float *)(param_1 + 0x3e4)) &&
       (*(float *)(param_1 + 0x3e4) = param_4, *(longlong *)(param_1 + 0x4a8) != 0)) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
        uVar3 = *(undefined4 *)(param_1 + 0x3e4);
        uVar4 = *(undefined8 *)(param_1 + 0x4a8);
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_58);
        FUN_1423b3890(uVar4,uVar3,param_1 + 0x350,param_1 + 0x400,param_1 + 0x3e0,param_1 + 0x490);
        QueryPerformanceCounter(&local_68);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_68.s.LowPart - local_58._0_4_);
      }
      else {
        pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar8 = TlsGetValue(*pDVar7);
        plVar11 = (longlong *)0x0;
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)operator_new(0x18);
          if (plVar8 != (longlong *)0x0) {
            *plVar8 = 0;
            plVar8[1] = 0;
            *(undefined4 *)(plVar8 + 2) = 0;
            plVar11 = plVar8;
          }
          TlsSetValue(*pDVar7,plVar11);
          plVar8 = plVar11;
        }
        plVar11 = (longlong *)plVar8[1];
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)*plVar8;
          if (plVar11 == (longlong *)0x0) {
            lVar9 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
            plVar8[1] = lVar9;
            if (lVar9 == 0) {
              puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar8[1] = (longlong)puVar10;
              lVar9 = 0x1f;
              do {
                puVar2 = puVar10 + 0x20;
                *puVar10 = puVar2;
                lVar9 = lVar9 + -1;
                puVar10 = puVar2;
              } while (lVar9 != 0);
              *puVar2 = 0;
            }
            plVar11 = (longlong *)plVar8[1];
            iVar12 = 0x20;
            *(undefined4 *)(plVar8 + 2) = 0x20;
          }
          else {
            iVar12 = 0x20;
            plVar8[1] = (longlong)plVar11;
            *(undefined4 *)(plVar8 + 2) = 0x20;
            *plVar8 = 0;
          }
        }
        else {
          iVar12 = (int)plVar8[2];
        }
        plVar8[1] = *plVar11;
        *(int *)(plVar8 + 2) = iVar12 + -1;
        *plVar11 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar11 + 1) = 0xff;
        local_50 = 0;
        local_48 = 0;
        *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
        *(undefined1 *)(plVar11 + 8) = 0;
        *plVar11 = (longlong)&PTR_FUN_14506d520;
        plVar11[9] = 0;
        lVar9 = *(longlong *)(param_1 + 0x4a8);
        uVar3 = *(undefined4 *)(param_1 + 0x3e4);
        plVar11[2] = param_1 + 0x350;
        plVar11[3] = param_1 + 0x400;
        *(undefined4 *)(plVar11 + 6) = uVar3;
        plVar11[7] = lVar9;
        plVar11[4] = param_1 + 0x3e0;
        plVar11[5] = param_1 + 0x490;
        lVar9 = plVar11[9];
        piVar1 = (int *)(lVar9 + 0x48);
        if (lVar9 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_60 = lVar9;
        FUN_140489ef0(uVar3,0,0xff,1);
        if (lVar9 != 0) {
          LOCK();
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            FGraphEvent::Recycle(local_60);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1423ba350 FUN_1423ba350 body=145 status=ok
// SIG undefined FUN_1423ba350(void)

void FUN_1423ba350(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)0x0;
  plVar4 = (longlong *)0x0;
  if (param_2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*param_2 + 0x290))(param_2);
    if ((((lVar3 != 0) && (uVar1 = *(uint *)(lVar3 + 0x708), (char)uVar1 < '\0')) &&
        (plVar5 = plVar4, (uVar1 >> 0x16 & 1) != 0)) && ((uVar1 >> 0x12 & 1) != 0)) {
      iVar2 = (**(code **)(*param_2 + 0x460))(param_2);
      if (iVar2 == 3) {
        iVar2 = (**(code **)(*param_2 + 0x468))(param_2);
        if (iVar2 == 0) {
          plVar5 = param_2;
        }
      }
    }
  }
  *(longlong **)(param_1 + 0x800) = plVar5;
  if (*(longlong *)(param_1 + 0x640) != 0) {
    FUN_14273c620(*(longlong *)(param_1 + 0x640),plVar5);
  }
  return;
}



// FUNCTION 1423ba3f0 FUN_1423ba3f0 body=146 status=ok
// SIG undefined FUN_1423ba3f0(void)

void FUN_1423ba3f0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)0x0;
  plVar4 = (longlong *)0x0;
  if (param_2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*param_2 + 0x290))(param_2);
    if ((((lVar3 != 0) && (uVar1 = *(uint *)(lVar3 + 0x708), (char)uVar1 < '\0')) &&
        (plVar5 = plVar4, (uVar1 >> 0x16 & 1) != 0)) && ((uVar1 >> 0x12 & 1) != 0)) {
      iVar2 = (**(code **)(*param_2 + 0x460))(param_2);
      if (iVar2 == 1) {
        iVar2 = (**(code **)(*param_2 + 0x468))(param_2);
        if (iVar2 == 1) {
          plVar5 = param_2;
        }
      }
    }
  }
  *(longlong **)(param_1 + 0x7f8) = plVar5;
  if (*(longlong *)(param_1 + 0x640) != 0) {
    FUN_14273c720(*(longlong *)(param_1 + 0x640),plVar5);
  }
  return;
}



// FUNCTION 1423ba490 FUN_1423ba490 body=326 status=ok
// SIG undefined FUN_1423ba490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423ba490(longlong param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 in_XMM5 [16];
  undefined1 auVar11 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (param_3 == 1) {
    fVar1 = param_2[2];
    fVar2 = param_2[1];
    auVar11 = *(undefined1 (*) [16])(param_1 + 0x230);
    fVar5 = auVar11._0_4_;
    fVar6 = auVar11._4_4_;
    fVar14 = auVar11._8_4_;
    fVar15 = *(float *)(param_1 + 0x210) * _DAT_146af0eb0;
    fVar16 = *(float *)(param_1 + 0x214) * fRam0000000146af0eb4;
    fVar17 = *(float *)(param_1 + 0x218) * fRam0000000146af0eb8;
    fVar18 = *(float *)(param_1 + 0x21c) * fRam0000000146af0ebc;
    auVar11 = rcpps(in_XMM5,auVar11);
    fVar3 = *param_2;
    fVar7 = fVar1 * fVar16 - fVar2 * fVar17;
    fVar8 = fVar3 * fVar17 - fVar1 * fVar15;
    fVar9 = fVar2 * fVar15 - fVar3 * fVar16;
    fVar10 = auVar11._0_4_;
    fVar12 = auVar11._4_4_;
    fVar13 = auVar11._8_4_;
    fVar7 = fVar7 + fVar7;
    fVar8 = fVar8 + fVar8;
    fVar9 = fVar9 + fVar9;
    fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar5;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar6;
    fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar14;
    bVar4 = (float)((uint)fVar14 & uRam0000000146af0d18) <= fRam0000000146af0ea8;
    fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar5;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar6;
    fVar14 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar14;
    *(ulonglong *)(param_1 + 0x7c8) =
         CONCAT44(((fVar7 * fVar17 - fVar9 * fVar15) + fVar18 * fVar8 + fVar2) *
                  (float)(-(uint)((float)((uint)fVar6 & uRam0000000146af0d14) <=
                                 fRam0000000146af0ea4) & (uint)fVar12 ^ (uint)fVar12),
                  ((fVar9 * fVar16 - fVar8 * fVar17) + fVar18 * fVar7 + fVar3) *
                  (float)(-(uint)((float)((uint)fVar5 & _DAT_146af0d10) <= _DAT_146af0ea0) &
                          (uint)fVar10 ^ (uint)fVar10));
    *(float *)(param_1 + 2000) =
         ((fVar8 * fVar15 - fVar7 * fVar16) + fVar18 * fVar9 + fVar1) *
         (float)(-(uint)bVar4 & (uint)fVar14 ^ (uint)fVar14);
    FUN_1423c1a10();
    return;
  }
  *(undefined8 *)(param_1 + 0x7c8) = *(undefined8 *)param_2;
  *(float *)(param_1 + 2000) = param_2[2];
  FUN_1423c1a10();
  return;
}



// FUNCTION 1423ba5e0 FUN_1423ba5e0 body=49 status=ok
// SIG undefined FUN_1423ba5e0(void)

void FUN_1423ba5e0(longlong param_1,byte param_2)

{
  if (*(byte *)(param_1 + 0xb1a) >> 7 != (param_2 ^ 1)) {
    *(byte *)(param_1 + 0xb1a) = *(byte *)(param_1 + 0xb1a) & 0x7f | (param_2 ^ 1) << 7;
    *(undefined2 *)(param_1 + 0xb30) = 0;
  }
  return;
}



// FUNCTION 1423ba620 FUN_1423ba620 body=81 status=ok
// SIG undefined FUN_1423ba620(void)

void FUN_1423ba620(longlong param_1,char param_2)

{
  if ((param_2 == '\0') && (*(char *)(param_1 + 0xa68) != '\0')) {
    if (*(longlong *)(param_1 + 0xa60) != 0) {
      FUN_142276240();
    }
    *(undefined1 *)(param_1 + 0xa68) = 0;
    return;
  }
  *(char *)(param_1 + 0xa68) = param_2;
  return;
}



// FUNCTION 1423ba680 FUN_1423ba680 body=11 status=ok
// SIG undefined FUN_1423ba680(void)

void FUN_1423ba680(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x7c0) = param_2;
  FUN_1423424e0();
  return;
}



// FUNCTION 1423ba690 FUN_1423ba690 body=66 status=ok
// SIG undefined FUN_1423ba690(void)

void FUN_1423ba690(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x888);
  if (((lVar2 != 0) || (lVar2 = *(longlong *)(param_1 + 0x718), iVar1 = 0, lVar2 != 0)) &&
     (iVar1 = 0, *(longlong *)(lVar2 + 0x40) != 0)) {
    iVar1 = *(int *)(*(longlong *)(lVar2 + 0x40) + 8);
  }
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x830) = 0;
    return;
  }
  if (param_2 < iVar1) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x830) = iVar1;
  return;
}



// FUNCTION 1423ba6e0 FUN_1423ba6e0 body=79 status=ok
// SIG undefined FUN_1423ba6e0(void)

void FUN_1423ba6e0(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x2f0))) {
    *(float *)(param_1 + 0x2f0) = param_2;
    FUN_1423c0450(param_1);
  }
  return;
}



// FUNCTION 1423ba730 FUN_1423ba730 body=79 status=ok
// SIG undefined FUN_1423ba730(void)

void FUN_1423ba730(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x2e4))) {
    *(float *)(param_1 + 0x2e4) = param_2;
    FUN_1423c0450(param_1);
  }
  return;
}



// FUNCTION 1423ba780 FUN_1423ba780 body=89 status=ok
// SIG undefined FUN_1423ba780(void)

void FUN_1423ba780(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int local_res18 [4];
  
  FLinearColor::ToFColor(param_2,local_res18,1);
  cVar1 = FUN_142341170(param_1);
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (*(int *)(param_1 + 0x2e8) != local_res18[0])) {
    *(int *)(param_1 + 0x2e8) = local_res18[0];
    FUN_1423c0450(param_1);
  }
  return;
}



// FUNCTION 1423ba7e0 FUN_1423ba7e0 body=393 status=ok
// SIG undefined FUN_1423ba7e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423ba7e0(longlong param_1,int param_2,float *param_3,int param_4,char param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  undefined1 in_XMM5 [16];
  undefined1 auVar9 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_48;
  float local_40;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x6f8))) {
    if (param_4 == 1) {
      auVar9 = *(undefined1 (*) [16])(param_1 + 0x230);
      fVar2 = auVar9._0_4_;
      fVar3 = auVar9._4_4_;
      fVar4 = auVar9._8_4_;
      fVar12 = *(float *)(param_1 + 0x210) * _DAT_146af0eb0;
      fVar13 = *(float *)(param_1 + 0x214) * fRam0000000146af0eb4;
      fVar14 = *(float *)(param_1 + 0x218) * fRam0000000146af0eb8;
      fVar15 = *(float *)(param_1 + 0x21c) * fRam0000000146af0ebc;
      auVar9 = rcpps(in_XMM5,auVar9);
      fVar16 = (float)((uint)(*param_3 - *(float *)(param_1 + 0x220)) & _DAT_146af0c00);
      fVar17 = (float)((uint)(param_3[1] - *(float *)(param_1 + 0x224)) & uRam0000000146af0c04);
      fVar18 = (float)((uint)(param_3[2] - *(float *)(param_1 + 0x228)) & uRam0000000146af0c08);
      fVar5 = fVar18 * fVar13 - fVar17 * fVar14;
      fVar6 = fVar16 * fVar14 - fVar18 * fVar12;
      fVar7 = fVar17 * fVar12 - fVar16 * fVar13;
      fVar8 = auVar9._0_4_;
      fVar10 = auVar9._4_4_;
      fVar11 = auVar9._8_4_;
      fVar5 = fVar5 + fVar5;
      fVar6 = fVar6 + fVar6;
      fVar7 = fVar7 + fVar7;
      fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar2;
      fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar3;
      fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar4;
      fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar2;
      fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar3;
      fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar4;
      local_40 = ((fVar6 * fVar12 - fVar5 * fVar13) + fVar15 * fVar7 + fVar18) *
                 (float)(-(uint)((float)((uint)fVar4 & uRam0000000146af0d18) <= fRam0000000146af0ea8
                                ) & (uint)fVar11 ^ (uint)fVar11);
      local_48 = CONCAT44(((fVar5 * fVar14 - fVar7 * fVar12) + fVar15 * fVar6 + fVar17) *
                          (float)(-(uint)((float)((uint)fVar3 & uRam0000000146af0d14) <=
                                         fRam0000000146af0ea4) & (uint)fVar10 ^ (uint)fVar10),
                          ((fVar7 * fVar13 - fVar6 * fVar14) + fVar15 * fVar5 + fVar16) *
                          (float)(-(uint)((float)((uint)fVar2 & _DAT_146af0d10) <= _DAT_146af0ea0) &
                                  (uint)fVar8 ^ (uint)fVar8));
    }
    else {
      local_48 = *(undefined8 *)param_3;
      local_40 = param_3[2];
    }
    lVar1 = *(longlong *)(param_1 + 0x6f0);
    *(undefined8 *)((longlong)param_2 * 0x2c + 4 + lVar1) = local_48;
    *(float *)((longlong)param_2 * 0x2c + 0xc + lVar1) = local_40;
    if (param_5 != '\0') {
      FUN_1423c1a10(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1423ba970 FUN_1423ba970 body=126 status=ok
// SIG undefined FUN_1423ba970(void)

void FUN_1423ba970(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  
  cVar4 = FUN_142341170();
  if ((((cVar4 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) &&
     (((*param_2 != *(float *)(param_1 + 800) || (param_2[1] != *(float *)(param_1 + 0x324))) ||
      ((param_2[2] != *(float *)(param_1 + 0x328) || (param_2[3] != *(float *)(param_1 + 0x32c))))))
     ) {
    fVar1 = param_2[1];
    fVar2 = param_2[2];
    fVar3 = param_2[3];
    *(float *)(param_1 + 800) = *param_2;
    *(float *)(param_1 + 0x324) = fVar1;
    *(float *)(param_1 + 0x328) = fVar2;
    *(float *)(param_1 + 0x32c) = fVar3;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 1423ba9f0 FUN_1423ba9f0 body=657 status=ok
// SIG undefined FUN_1423ba9f0(void)

void FUN_1423ba9f0(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 local_res20;
  undefined4 local_res24;
  
  if ((param_3 != '\0') ||
     (cVar2 = operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>
                        (param_2,param_1 + 0xe4), cVar2 == '\0')) {
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xe4);
    iVar9 = 0;
    if (param_2 != (longlong *)0x0) {
      cVar2 = FWeakObjectPtr::IsValid(param_2 + 0xe4);
      while (cVar2 != '\0') {
        param_2 = (longlong *)FWeakObjectPtr::Get(param_2 + 0xe4);
        if (param_2 == param_1) {
          param_2 = (longlong *)0x0;
          break;
        }
        cVar2 = FWeakObjectPtr::IsValid(param_2 + 0xe4);
      }
    }
    FWeakObjectPtr::operator=(param_1 + 0xe4,param_2);
    if (param_2 != (longlong *)0x0) {
      plVar1 = param_2 + 0xef;
      iVar11 = 1;
      iVar12 = 1;
      iVar10 = iVar9;
      while ((-1 < iVar10 && (iVar10 < (int)param_2[0xf0]))) {
        lVar6 = (longlong)iVar10 * 8;
        local_res20 = *(undefined4 *)(*plVar1 + (longlong)iVar10 * 8);
        local_res24 = *(undefined4 *)(*plVar1 + 4 + lVar6);
        cVar2 = FWeakObjectPtr::IsValid(&local_res20);
        if (cVar2 == '\0') {
          iVar8 = (int)param_2[0xf0];
          iVar3 = (iVar8 - iVar10) + -1;
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + lVar6),(void *)(*plVar1 + (longlong)iVar12 * 8),
                       (longlong)iVar3 << 3);
            iVar8 = (int)param_2[0xf0];
          }
          *(int *)(param_2 + 0xf0) = iVar8 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        }
        else {
          plVar5 = (longlong *)FWeakObjectPtr::Get(&local_res20);
          if (plVar5 == param_1) {
            iVar11 = iVar9;
          }
          iVar10 = iVar10 + 1;
          iVar12 = iVar12 + 1;
        }
      }
      if ((char)iVar11 != '\0') {
        (**(code **)(*param_2 + 0x9b8))(param_2,param_1);
      }
      FTickFunction::AddPrerequisite(param_1 + 6,param_2,param_2 + 6);
      if (((*(byte *)(param_1 + 0x19) & 0x20) != 0) &&
         (lVar6 = FWeakObjectPtr::Get(param_1 + 0xe4), (*(byte *)(lVar6 + 200) & 0x20) != 0)) {
        lVar6 = FWeakObjectPtr::Get(param_1 + 0xe4);
        (**(code **)(*param_1 + 0x358))(param_1,*(char *)(lVar6 + 0x3f) != '\0');
      }
    }
    if ((plVar4 != (longlong *)0x0) && (plVar4 != param_2)) {
      (**(code **)(*plVar4 + 0x9c0))(plVar4,param_1);
      FTickFunction::RemovePrerequisite(param_1 + 6,plVar4,plVar4 + 6);
    }
    (**(code **)(*param_1 + 0x9a8))(param_1);
    FUN_14234b040(param_1);
    FUN_1423c07d0(param_1);
    if (param_2 != (longlong *)0x0) {
      if (0 < (int)param_1[0xf0]) {
        for (; (-1 < iVar9 && (iVar9 < (int)param_1[0xf0])); iVar9 = iVar9 + 1) {
          uVar7 = FWeakObjectPtr::Get(param_1[0xef] + (longlong)iVar9 * 8);
          FUN_1423ba9f0(uVar7,param_2,0);
        }
      }
      (**(code **)(*param_1 + 0x978))(param_1);
    }
  }
  return;
}



// FUNCTION 1423bac90 FUN_1423bac90 body=71 status=ok
// SIG undefined FUN_1423bac90(void)

void FUN_1423bac90(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x888);
  if (((lVar2 != 0) || (lVar2 = *(longlong *)(param_1 + 0x718), iVar3 = 0, lVar2 != 0)) &&
     (iVar3 = 0, *(longlong *)(lVar2 + 0x40) != 0)) {
    iVar3 = *(int *)(*(longlong *)(lVar2 + 0x40) + 8);
  }
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x838) = 0;
    return;
  }
  iVar1 = iVar3 + -1;
  if (param_2 < iVar3 + -1) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x838) = iVar1;
  return;
}



// FUNCTION 1423bace0 FUN_1423bace0 body=79 status=ok
// SIG undefined FUN_1423bace0(void)

void FUN_1423bace0(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x33c))) {
    *(float *)(param_1 + 0x33c) = param_2;
    FUN_1423c0bd0(param_1);
  }
  return;
}



// FUNCTION 1423bad30 FUN_1423bad30 body=242 status=ok
// SIG undefined FUN_1423bad30(void)

void FUN_1423bad30(longlong param_1,longlong param_2,float param_3,char param_4)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  longlong local_res10;
  float local_res18 [2];
  undefined1 local_res20 [8];
  longlong *local_18;
  float *local_10;
  
  plVar1 = (longlong *)(param_1 + 0xd50);
  if (*(int *)(param_1 + 0xd58) != *(int *)(param_1 + 0xd84)) {
    lVar3 = *(longlong *)(param_1 + 0xd90);
    if (*(longlong *)(param_1 + 0xd90) == 0) {
      lVar3 = param_1 + 0xd88;
    }
    fVar2 = *(float *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                               (longlong)*(int *)(param_1 + 0xd98) - 1U) * 4);
    if (fVar2 != -NAN) {
      do {
        pfVar5 = (float *)(*plVar1 + (longlong)(int)fVar2 * 0x18);
        if (*(longlong *)(*plVar1 + (longlong)(int)fVar2 * 0x18) == param_2) {
          if (fVar2 != -NAN) goto LAB_1423badb3;
          break;
        }
        fVar2 = pfVar5[4];
      } while (fVar2 != -NAN);
    }
  }
  pfVar5 = (float *)0x0;
LAB_1423badb3:
  pfVar4 = pfVar5 + 2;
  if (pfVar5 == (float *)0x0) {
    pfVar4 = (float *)0x0;
  }
  local_res10 = param_2;
  local_res18[0] = param_3;
  if ((param_4 != '\0') && (ABS(param_3) <= 1e-05)) {
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    Remove(plVar1);
    return;
  }
  if (pfVar4 == (float *)0x0) {
    local_18 = &local_res10;
    local_10 = local_res18;
    FUN_1417e05c0(plVar1,local_res20,&local_18,0);
    return;
  }
  *pfVar4 = param_3;
  return;
}



// FUNCTION 1423bae30 FUN_1423bae30 body=79 status=ok
// SIG undefined FUN_1423bae30(void)

void FUN_1423bae30(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x334))) {
    *(float *)(param_1 + 0x334) = param_2;
    FUN_1423c0bd0(param_1);
  }
  return;
}



// FUNCTION 1423bae80 FUN_1423bae80 body=79 status=ok
// SIG undefined FUN_1423bae80(void)

void FUN_1423bae80(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x338))) {
    *(float *)(param_1 + 0x338) = param_2;
    FUN_1423c0bd0(param_1);
  }
  return;
}



// FUNCTION 1423baed0 FUN_1423baed0 body=77 status=ok
// SIG undefined FUN_1423baed0(void)

void FUN_1423baed0(longlong param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (*(int *)(param_1 + 0x340) != *param_2)) {
    *(int *)(param_1 + 0x340) = *param_2;
    FUN_1423c0bd0(param_1);
  }
  return;
}



// FUNCTION 1423baf20 FUN_1423baf20 body=102 status=ok
// SIG undefined FUN_1423baf20(void)

void FUN_1423baf20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa48);
  if (lVar1 != 0) {
    lVar3 = FUN_1428f7290();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_142280390(lVar1,param_2);
    }
  }
  return;
}



// FUNCTION 1423baf90 FUN_1423baf90 body=57 status=ok
// SIG undefined FUN_1423baf90(void)

void FUN_1423baf90(longlong *param_1,byte param_2)

{
  if ((*(byte *)((longlong)param_1 + 0xb1c) >> 3 & 1) != param_2) {
    *(byte *)((longlong)param_1 + 0xb1c) =
         *(byte *)((longlong)param_1 + 0xb1c) & 0xf7 | param_2 << 3;
    if ((param_2 << 3 & 8) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001423bafc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x358))(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1423bafd0 SSL_set_default_read_buffer_len body=8 status=ok
// SIG undefined SSL_set_default_read_buffer_len(void)

void SSL_set_default_read_buffer_len(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x828) = param_2;
  return;
}



// FUNCTION 1423bafe0 FUN_1423bafe0 body=102 status=ok
// SIG undefined FUN_1423bafe0(void)

void FUN_1423bafe0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa48);
  if (lVar1 != 0) {
    lVar3 = FUN_1428f7290();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1422b3f10(lVar1,param_2);
    }
  }
  return;
}



// FUNCTION 1423bb050 FUN_1423bb050 body=119 status=ok
// SIG undefined FUN_1423bb050(void)

void FUN_1423bb050(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa48);
  if (lVar1 != 0) {
    lVar3 = FUN_1428f7290();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1422b40f0(lVar1,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 1423bb0d0 FUN_1423bb0d0 body=27 status=ok
// SIG undefined FUN_1423bb0d0(void)

void FUN_1423bb0d0(longlong param_1)

{
  FUN_1423bb0f0();
  *(byte *)(param_1 + 0xb1d) = *(byte *)(param_1 + 0xb1d) & 0xf7;
  return;
}



// FUNCTION 1423bb0f0 FUN_1423bb0f0 body=1197 status=ok
// SIG undefined FUN_1423bb0f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423bb0f0(longlong param_1,longlong param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  longlong lVar4;
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
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  float *pfVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  int iVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  longlong lVar44;
  float *pfVar45;
  int iVar46;
  float *pfVar47;
  float *pfVar48;
  float *pfVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
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
  float fVar63;
  float fVar64;
  float *local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [192];
  
  if (*(longlong *)(param_1 + 0x718) != 0) {
    iVar46 = *(int *)(*(longlong *)(param_1 + 0x718) + 0x140);
    lVar44 = (longlong)iVar46;
    if (iVar46 == *(int *)(param_2 + 8)) {
      lVar4 = *(longlong *)(param_1 + 0x7f0);
      if (lVar4 == 0) {
        puVar43 = (undefined8 *)operator_new(0x20);
        puVar42 = (undefined8 *)0x0;
        if (puVar43 != (undefined8 *)0x0) {
          *puVar43 = 0;
          puVar43[1] = 0;
          puVar43[2] = 0;
          puVar43[3] = 0;
          puVar42 = puVar43;
        }
        *(undefined8 **)(param_1 + 0x7f0) = puVar42;
      }
      else {
        *(undefined4 *)(lVar4 + 8) = 0;
        if (0x7fffffff < *(uint *)(lVar4 + 0xc)) {
          TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(lVar4,0);
        }
        lVar4 = *(longlong *)(param_1 + 0x7f0);
        *(undefined4 *)(lVar4 + 0x18) = 0;
        if ((*(int *)(lVar4 + 0x1c) < 0) && (*(int *)(lVar4 + 0x1c) != 0)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(lVar4 + 0x10,0);
        }
        puVar42 = *(undefined8 **)(param_1 + 0x7f0);
      }
      pfVar47 = (float *)0x0;
      TArray<FTransform,FDefaultAllocator>::operator=(puVar42 + 2,param_2);
      lVar4 = *(longlong *)(param_1 + 0x7f0);
      iVar41 = *(int *)(lVar4 + 8) + iVar46;
      *(int *)(lVar4 + 8) = iVar41;
      if (*(int *)(lVar4 + 0xc) < iVar41) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow();
      }
      local_f8 = (float *)0x0;
      local_ec = 0;
      pfVar28 = pfVar47;
      local_f0 = iVar46;
      if (0 < iVar46) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_f8,0);
        pfVar28 = local_f8;
        fVar40 = fRam0000000146af0d0c;
        fVar39 = fRam0000000146af0d08;
        fVar38 = fRam0000000146af0d04;
        fVar37 = _DAT_146af0d00;
        fVar36 = fRam0000000146af0cdc;
        fVar35 = fRam0000000146af0cd8;
        fVar34 = fRam0000000146af0cd4;
        fVar33 = _DAT_146af0cd0;
        uVar32 = uRam0000000146af0c0c;
        uVar31 = uRam0000000146af0c08;
        uVar30 = uRam0000000146af0c04;
        uVar29 = _DAT_146af0c00;
        pfVar45 = local_f8;
        pfVar48 = pfVar47;
        pfVar49 = pfVar47;
        do {
          fVar10 = fRam0000000146af0bfc;
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x7f0) + 0x10);
          pfVar1 = (float *)(lVar4 + (longlong)pfVar48);
          fVar64 = *pfVar1;
          fVar54 = pfVar1[1];
          fVar55 = pfVar1[2];
          fVar56 = pfVar1[3];
          pfVar1 = (float *)(lVar4 + 0x20 + (longlong)pfVar48);
          fVar59 = *pfVar1;
          fVar5 = pfVar1[1];
          fVar6 = pfVar1[2];
          pfVar2 = (float *)(lVar4 + 0x10 + (longlong)pfVar48);
          fVar7 = *pfVar2;
          fVar8 = pfVar2[1];
          fVar9 = pfVar2[2];
          auVar50._0_4_ = fVar64 * fVar64 + fVar55 * fVar55;
          auVar50._4_4_ = fVar54 * fVar54 + fVar56 * fVar56;
          auVar50._8_4_ = fVar55 * fVar55 + fVar64 * fVar64;
          auVar50._12_4_ = fVar56 * fVar56 + fVar54 * fVar54;
          fVar60 = auVar50._4_4_ + auVar50._0_4_;
          fVar61 = auVar50._8_4_ + auVar50._4_4_;
          fVar62 = auVar50._12_4_ + auVar50._8_4_;
          fVar63 = auVar50._0_4_ + auVar50._12_4_;
          auVar51._4_4_ = fVar61;
          auVar51._0_4_ = fVar60;
          auVar51._8_4_ = fVar62;
          auVar51._12_4_ = fVar63;
          auVar51 = rsqrtps(auVar50,auVar51);
          fVar52 = auVar51._0_4_;
          fVar53 = auVar51._4_4_;
          fVar57 = auVar51._8_4_;
          fVar58 = auVar51._12_4_;
          fVar52 = (fVar33 - fVar52 * fVar52 * fVar60 * fVar33) * fVar52 + fVar52;
          fVar53 = (fVar34 - fVar53 * fVar53 * fVar61 * fVar34) * fVar53 + fVar53;
          fVar57 = (fVar35 - fVar57 * fVar57 * fVar62 * fVar35) * fVar57 + fVar57;
          fVar58 = (fVar36 - fVar58 * fVar58 * fVar63 * fVar36) * fVar58 + fVar58;
          fVar60 = (float)(((uint)(((fVar33 - fVar52 * fVar52 * fVar60 * fVar33) * fVar52 + fVar52)
                                  * fVar64) ^ _DAT_146af0cc0) & -(uint)(fVar37 <= fVar60) ^
                          _DAT_146af0cc0);
          fVar61 = (float)(((uint)(((fVar34 - fVar53 * fVar53 * fVar61 * fVar34) * fVar53 + fVar53)
                                  * fVar54) ^ uRam0000000146af0cc4) & -(uint)(fVar38 <= fVar61) ^
                          uRam0000000146af0cc4);
          fVar64 = (float)(((uint)(((fVar35 - fVar57 * fVar57 * fVar62 * fVar35) * fVar57 + fVar57)
                                  * fVar55) ^ uRam0000000146af0cc8) & -(uint)(fVar39 <= fVar62) ^
                          uRam0000000146af0cc8);
          fVar62 = (float)(((uint)(((fVar36 - fVar58 * fVar58 * fVar63 * fVar36) * fVar58 + fVar58)
                                  * fVar56) ^ uRam0000000146af0ccc) & -(uint)(fVar40 <= fVar63) ^
                          uRam0000000146af0ccc);
          fVar54 = fVar61 + fVar61;
          fVar52 = fVar64 + fVar64;
          fVar57 = fVar60 * (fVar60 + fVar60);
          fVar55 = (fVar60 + fVar60) * fVar62;
          fVar56 = fRam0000000146af0bf4 - (fVar64 * fVar52 + fVar57);
          fVar53 = fRam0000000146af0bf8 - (fVar61 * fVar54 + fVar57);
          fVar63 = (fVar52 * fVar62 + fVar54 * fVar60) * fVar59;
          fVar58 = fVar59 * (fVar52 * fVar60 - fVar54 * fVar62);
          fVar64 = (float)((uint)((_DAT_146af0bf0 - (fVar64 * fVar52 + fVar61 * fVar54)) * fVar59) &
                          uVar29);
          fVar59 = (float)((uint)((fRam0000000146af0bfc - (fVar57 + fVar57)) * pfVar1[3]) & uVar32);
          *pfVar45 = fVar64;
          pfVar45[1] = fVar63;
          pfVar45[2] = fVar58;
          pfVar45[3] = fVar59;
          pfVar45[4] = fVar5 * (fVar54 * fVar60 - fVar52 * fVar62);
          pfVar45[5] = (float)((uint)(fVar56 * fVar5) & uVar30);
          pfVar45[6] = (fVar55 + fVar52 * fVar61) * fVar5;
          pfVar45[7] = fVar59;
          pfVar45[8] = (fVar54 * fVar62 + fVar52 * fVar60) * fVar6;
          pfVar45[9] = fVar6 * (fVar52 * fVar61 - fVar55);
          pfVar45[10] = (float)((uint)(fVar53 * fVar6) & uVar31);
          pfVar45[0xb] = fVar59;
          pfVar45[0xc] = fVar7;
          pfVar45[0xd] = fVar8;
          pfVar45[0xe] = fVar9;
          pfVar45[0xf] = fVar10;
          iVar46 = (int)pfVar47;
          if (0 < iVar46) {
            pfVar47 = pfVar28 + (longlong)
                                *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x718) + 0x138) + 8 +
                                        (longlong)pfVar49) * 0x10;
            fVar54 = pfVar47[4];
            fVar55 = pfVar47[5];
            fVar56 = pfVar47[6];
            fVar5 = pfVar47[7];
            fVar6 = *pfVar47;
            fVar7 = pfVar47[1];
            fVar8 = pfVar47[2];
            fVar9 = pfVar47[3];
            fVar10 = pfVar47[8];
            fVar52 = pfVar47[9];
            fVar53 = pfVar47[10];
            fVar57 = pfVar47[0xb];
            fVar60 = pfVar47[0xc];
            fVar61 = pfVar47[0xd];
            fVar62 = pfVar47[0xe];
            fVar11 = pfVar47[0xf];
            fVar12 = pfVar45[4];
            fVar13 = pfVar45[5];
            fVar14 = pfVar45[6];
            fVar15 = pfVar45[7];
            fVar16 = pfVar45[8];
            fVar17 = pfVar45[9];
            fVar18 = pfVar45[10];
            fVar19 = pfVar45[0xb];
            fVar20 = pfVar45[0xc];
            fVar21 = pfVar45[0xd];
            fVar22 = pfVar45[0xe];
            fVar23 = pfVar45[0xf];
            *pfVar45 = fVar64 * fVar6 + fVar63 * fVar54 + fVar58 * fVar10 + fVar59 * fVar60;
            pfVar45[1] = fVar64 * fVar7 + fVar63 * fVar55 + fVar58 * fVar52 + fVar59 * fVar61;
            pfVar45[2] = fVar64 * fVar8 + fVar63 * fVar56 + fVar58 * fVar53 + fVar59 * fVar62;
            pfVar45[3] = fVar64 * fVar9 + fVar63 * fVar5 + fVar58 * fVar57 + fVar59 * fVar11;
            pfVar45[4] = fVar12 * fVar6 + fVar13 * fVar54 + fVar14 * fVar10 + fVar15 * fVar60;
            pfVar45[5] = fVar12 * fVar7 + fVar13 * fVar55 + fVar14 * fVar52 + fVar15 * fVar61;
            pfVar45[6] = fVar12 * fVar8 + fVar13 * fVar56 + fVar14 * fVar53 + fVar15 * fVar62;
            pfVar45[7] = fVar12 * fVar9 + fVar13 * fVar5 + fVar14 * fVar57 + fVar15 * fVar11;
            pfVar45[8] = fVar16 * fVar6 + fVar17 * fVar54 + fVar18 * fVar10 + fVar19 * fVar60;
            pfVar45[9] = fVar16 * fVar7 + fVar17 * fVar55 + fVar18 * fVar52 + fVar19 * fVar61;
            pfVar45[10] = fVar16 * fVar8 + fVar17 * fVar56 + fVar18 * fVar53 + fVar19 * fVar62;
            pfVar45[0xb] = fVar16 * fVar9 + fVar17 * fVar5 + fVar18 * fVar57 + fVar19 * fVar11;
            pfVar45[0xc] = fVar20 * fVar6 + fVar21 * fVar54 + fVar22 * fVar10 + fVar23 * fVar60;
            pfVar45[0xd] = fVar20 * fVar7 + fVar21 * fVar55 + fVar22 * fVar52 + fVar23 * fVar61;
            pfVar45[0xe] = fVar20 * fVar8 + fVar21 * fVar56 + fVar22 * fVar53 + fVar23 * fVar62;
            pfVar45[0xf] = fVar20 * fVar9 + fVar21 * fVar5 + fVar22 * fVar57 + fVar23 * fVar11;
          }
          lVar4 = **(longlong **)(param_1 + 0x7f0);
          puVar43 = (undefined8 *)FMatrix::Inverse(pfVar28 + (longlong)iVar46 * 0x10,local_e8);
          pfVar47 = (float *)(ulonglong)(iVar46 + 1);
          pfVar48 = pfVar48 + 0xc;
          pfVar49 = pfVar49 + 4;
          uVar27 = puVar43[1];
          puVar42 = (undefined8 *)((longlong)pfVar45 + (lVar4 - (longlong)pfVar28));
          *puVar42 = *puVar43;
          puVar42[1] = uVar27;
          uVar27 = puVar43[3];
          puVar42 = (undefined8 *)((longlong)pfVar45 + lVar4 + (0x10 - (longlong)pfVar28));
          *puVar42 = puVar43[2];
          puVar42[1] = uVar27;
          uVar24 = *(undefined4 *)((longlong)puVar43 + 0x24);
          uVar25 = *(undefined4 *)(puVar43 + 5);
          uVar26 = *(undefined4 *)((longlong)puVar43 + 0x2c);
          puVar3 = (undefined4 *)((longlong)pfVar45 + lVar4 + (0x20 - (longlong)pfVar28));
          *puVar3 = *(undefined4 *)(puVar43 + 4);
          puVar3[1] = uVar24;
          puVar3[2] = uVar25;
          puVar3[3] = uVar26;
          uVar27 = puVar43[7];
          puVar42 = (undefined8 *)((longlong)pfVar45 + lVar4 + (0x30 - (longlong)pfVar28));
          *puVar42 = puVar43[6];
          puVar42[1] = uVar27;
          lVar44 = lVar44 + -1;
          pfVar45 = pfVar45 + 0x10;
        } while (lVar44 != 0);
      }
      if (pfVar28 != (float *)0x0) {
        FMemory::Free(pfVar28);
      }
    }
  }
  return;
}



// FUNCTION 1423bb5a0 FUN_1423bb5a0 body=42 status=ok
// SIG undefined FUN_1423bb5a0(void)

void FUN_1423bb5a0(longlong param_1,byte param_2)

{
  if (*(byte *)(param_1 + 0x880) >> 7 != param_2) {
    *(byte *)(param_1 + 0x880) = *(byte *)(param_1 + 0x880) & 0x7f | param_2 << 7;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1423bb5d0 FUN_1423bb5d0 body=269 status=ok
// SIG undefined FUN_1423bb5d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423bb5d0(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78 [48];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  if (param_2 != -1) {
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
    *(int *)(param_1 + 0xb90) = param_2;
    uVar2 = uRam00000001468b5b78;
    *(undefined8 *)(param_1 + 0xba0) = _DAT_1468b5b70;
    *(undefined8 *)(param_1 + 0xba8) = uVar2;
    uVar6 = uRam00000001468b5b8c;
    uVar5 = uRam00000001468b5b88;
    uVar4 = uRam00000001468b5b84;
    *(undefined4 *)(param_1 + 0xbb0) = _DAT_1468b5b80;
    *(undefined4 *)(param_1 + 0xbb4) = uVar4;
    *(undefined4 *)(param_1 + 3000) = uVar5;
    *(undefined4 *)(param_1 + 0xbbc) = uVar6;
    uVar6 = uRam00000001468b5b9c;
    uVar5 = uRam00000001468b5b98;
    uVar4 = uRam00000001468b5b94;
    *(undefined4 *)(param_1 + 0xbc0) = _DAT_1468b5b90;
    *(undefined4 *)(param_1 + 0xbc4) = uVar4;
    *(undefined4 *)(param_1 + 0xbc8) = uVar5;
    *(undefined4 *)(param_1 + 0xbcc) = uVar6;
    if (0 < *(int *)(param_1 + 0xbf8)) {
      iVar1 = *(int *)(param_1 + 0xb90);
      if ((iVar1 < 0) || (*(int *)(param_1 + 0xbf8) <= iVar1)) {
        *(undefined4 *)(param_1 + 0xb90) = 0xffffffff;
        uVar2 = uRam00000001468b5b78;
        *(undefined8 *)(param_1 + 0xba0) = _DAT_1468b5b70;
        *(undefined8 *)(param_1 + 0xba8) = uVar2;
        uVar2 = CONCAT44(uRam00000001468b5b8c,uRam00000001468b5b88);
        *(ulonglong *)(param_1 + 0xbb0) = CONCAT44(uRam00000001468b5b84,_DAT_1468b5b80);
        *(undefined8 *)(param_1 + 3000) = uVar2;
        uVar4 = _DAT_1468b5b90;
        uVar5 = uRam00000001468b5b94;
        uVar6 = uRam00000001468b5b98;
        uVar7 = uRam00000001468b5b9c;
      }
      else {
        uVar2 = FUN_142699110(*(undefined8 *)(*(longlong *)(param_1 + 0xbf0) + (longlong)iVar1 * 8),
                              local_78,1,0);
        puVar3 = (undefined8 *)FUN_14162bcf0(param_1 + 0x210,local_48,uVar2);
        uVar2 = puVar3[1];
        *(undefined8 *)(param_1 + 0xba0) = *puVar3;
        *(undefined8 *)(param_1 + 0xba8) = uVar2;
        uVar2 = puVar3[3];
        *(undefined8 *)(param_1 + 0xbb0) = puVar3[2];
        *(undefined8 *)(param_1 + 3000) = uVar2;
        uVar4 = *(undefined4 *)(puVar3 + 4);
        uVar5 = *(undefined4 *)((longlong)puVar3 + 0x24);
        uVar6 = *(undefined4 *)(puVar3 + 5);
        uVar7 = *(undefined4 *)((longlong)puVar3 + 0x2c);
      }
      *(undefined4 *)(param_1 + 0xbc0) = uVar4;
      *(undefined4 *)(param_1 + 0xbc4) = uVar5;
      *(undefined4 *)(param_1 + 0xbc8) = uVar6;
      *(undefined4 *)(param_1 + 0xbcc) = uVar7;
    }
  }
  return;
}



// FUNCTION 1423bb6e0 FUN_1423bb6e0 body=230 status=ok
// SIG undefined FUN_1423bb6e0(void)

void FUN_1423bb6e0(longlong param_1,byte param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  
  bVar3 = *(byte *)(param_1 + 0x881);
  if ((bVar3 >> 5 & 1) != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x8f0);
    if (lVar1 != 0) {
      FUN_1423a6750(param_1);
      *(undefined8 *)(param_1 + 0x8f0) = 0;
      FUN_142491970(param_1);
      bVar3 = *(byte *)(param_1 + 0x881);
      *(undefined8 *)(param_1 + 0xa00) = 0;
    }
    *(byte *)(param_1 + 0x881) = bVar3 & 0xdf | param_2 << 5;
    if (lVar1 != 0) {
      if (*(longlong *)(param_1 + 0x8f0) != 0) {
        FUN_1423a6750(param_1);
        *(undefined8 *)(param_1 + 0x8f0) = 0;
        FUN_142491970(param_1);
        *(undefined8 *)(param_1 + 0xa00) = 0;
      }
      uVar2 = FUN_1423b22b0(param_1);
      *(undefined8 *)(param_1 + 0x8f0) = uVar2;
      uVar2 = FUN_14248a5b0(param_1);
      *(undefined8 *)(param_1 + 0xa00) = uVar2;
      TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound
                (param_1 + 0x8e0,*(undefined8 *)(param_1 + 0x8f0));
    }
  }
  return;
}



// FUNCTION 1423bb7d0 FUN_1423bb7d0 body=693 status=ok
// SIG undefined FUN_1423bb7d0(void)

void FUN_1423bb7d0(longlong *param_1,longlong param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (param_2 != param_1[0xe3]) {
    if ((param_3 == '\0') && (param_1[0x1c1] != 0)) {
      uVar4 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar4,param_1 + 0x1c1,2);
      FUN_1423a6c80(param_1,1);
    }
    lVar7 = param_1[0x105];
    if ((lVar7 == 0) &&
       ((param_1[0xe3] == 0 || (lVar7 = *(longlong *)(param_1[0xe3] + 0x100), lVar7 == 0)))) {
      lVar7 = 0;
    }
    bVar1 = *(byte *)(param_1 + 0x17);
    if ((bVar1 & 2) != 0) {
      (**(code **)(*param_1 + 0x300))(param_1);
    }
    if (param_2 != param_1[0xe3]) {
      bVar2 = *(byte *)(param_1 + 0x17);
      if ((bVar2 & 2) != 0) {
        (**(code **)(*param_1 + 0x300))(param_1);
      }
      param_1[0xe3] = param_2;
      if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
        (**(code **)(*param_1 + 0x9a8))(param_1);
        FUN_1423c07d0(param_1);
        FUN_1423b4660(param_1);
        *(undefined4 *)(param_1 + 0x102) = 0;
        if (*(int *)((longlong)param_1 + 0x814) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x101,0);
        }
        *(undefined4 *)(param_1 + 0x104) = 0;
        if (*(int *)((longlong)param_1 + 0x824) != 0) {
          TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x103,0);
        }
      }
      if (((bVar2 & 2) != 0) && ((*(byte *)(param_1 + 0x17) & 1) != 0)) {
        (**(code **)(*param_1 + 0x2e8))(param_1);
      }
      lVar5 = param_1[0xe3];
      if (param_1[0x11f] != lVar5) {
        FUN_1423b8db0(param_1 + 0x11f,0);
        lVar5 = param_1[0xe3];
      }
      if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x348) != 0)) && ((int)param_1[0x121] == 0)) {
        FUN_142497a70(*(longlong *)(lVar5 + 0x348),param_1);
      }
      if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
        (**(code **)(*param_1 + 0x980))(param_1,0);
      }
    }
    if ((*(byte *)(param_1 + 0x17) & 4) != 0) {
      lVar5 = param_1[0x105];
      if ((lVar5 == 0) &&
         ((param_1[0xe3] == 0 || (lVar5 = *(longlong *)(param_1[0xe3] + 0x100), lVar5 == 0)))) {
        lVar5 = 0;
      }
      if (((lVar5 == lVar7) && (lVar7 != 0)) && ((int)param_1[0x17f] == *(int *)(lVar7 + 0x48))) {
        FUN_1427e90b0(param_1);
      }
      else {
        FUN_14234b040(param_1);
      }
    }
    FUN_1427e9920(param_1);
    (**(code **)(*param_1 + 0xa40))(param_1,param_3);
    FUN_1427e3320(param_1);
    if (((bVar1 & 2) != 0) && ((*(byte *)(param_1 + 0x17) & 1) != 0)) {
      (**(code **)(*param_1 + 0x2e8))(param_1);
    }
    FUN_142372d60(param_1);
    plVar6 = (longlong *)IStreamingManager::Get();
    (**(code **)(*plVar6 + 0x70))(plVar6,param_1);
    if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
      cVar3 = FUN_1423cc4e0(param_1);
      if ((cVar3 != '\0') && ((param_1[0x23] == 0 || ((*(byte *)(param_1[0x23] + 0x93) & 4) != 0))))
      {
        lVar7 = param_1[0x24];
        if (lVar7 == 0) {
          lVar7 = FUN_1423407b0(param_1);
        }
        FUN_1428daf80(lVar7,0,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1423bba90 FUN_1423bba90 body=279 status=ok
// SIG undefined FUN_1423bba90(void)

void FUN_1423bba90(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if (param_2 != param_1[0xe3]) {
    bVar1 = *(byte *)(param_1 + 0x17);
    if ((bVar1 & 2) != 0) {
      (**(code **)(*param_1 + 0x300))();
    }
    param_1[0xe3] = param_2;
    if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
      (**(code **)(*param_1 + 0x9a8))(param_1);
      FUN_1423c07d0(param_1);
      FUN_1423b4660(param_1);
      *(undefined4 *)(param_1 + 0x102) = 0;
      if (*(int *)((longlong)param_1 + 0x814) != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x101,0);
      }
      *(undefined4 *)(param_1 + 0x104) = 0;
      if (*(int *)((longlong)param_1 + 0x824) != 0) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x103,0);
      }
    }
    if (((bVar1 & 2) != 0) && ((*(byte *)(param_1 + 0x17) & 1) != 0)) {
      (**(code **)(*param_1 + 0x2e8))(param_1);
    }
    lVar2 = param_1[0xe3];
    if (param_1[0x11f] != lVar2) {
      FUN_1423b8db0(param_1 + 0x11f,0);
      lVar2 = param_1[0xe3];
    }
    if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x348) != 0)) && ((int)param_1[0x121] == 0)) {
      FUN_142497a70(*(longlong *)(lVar2 + 0x348),param_1);
    }
    if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
      (**(code **)(*param_1 + 0x980))(param_1,0);
    }
  }
  return;
}



// FUNCTION 1423bbbb0 FUN_1423bbbb0 body=27 status=ok
// SIG undefined FUN_1423bbbb0(void)

void FUN_1423bbbb0(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0xc24) = *(byte *)(param_1 + 0xc24) & 0xfe;
  *(byte *)(param_1 + 0xdbc) = *(byte *)(param_1 + 0xdbc) & 0xfe;
  *(byte *)(param_1 + 0xc24) = *(byte *)(param_1 + 0xc24) | param_2;
  *(byte *)(param_1 + 0xdbc) = *(byte *)(param_1 + 0xdbc) | param_2;
  return;
}



// FUNCTION 1423bbbd0 FUN_1423bbbd0 body=1077 status=ok
// SIG undefined FUN_1423bbbd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423bbbd0(longlong param_1,int param_2,longlong param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *_Dst;
  undefined8 uVar6;
  size_t _Size;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  void *_Src;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined1 auStack_128 [32];
  void **local_108;
  void **local_100;
  uint local_f8 [2];
  uint local_f0 [2];
  void *local_e8;
  ulonglong local_e0;
  void *local_d8;
  ulonglong local_d0;
  undefined1 local_c8 [8];
  longlong local_c0;
  longlong local_b8;
  uint *local_b0;
  uint *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_c0 = param_3;
  local_a0 = param_1;
  FUN_1423b3480();
  lVar8 = *(longlong *)(param_1 + 0x888);
  if ((lVar8 == 0) && (lVar8 = *(longlong *)(param_1 + 0x718), lVar8 == 0)) {
    return;
  }
  plVar13 = *(longlong **)(lVar8 + 0x40);
  if (plVar13 == (longlong *)0x0) {
    return;
  }
  if (param_2 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x860) <= param_2) {
    return;
  }
  if ((int)plVar13[1] <= param_2) {
    return;
  }
  lVar8 = (longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x858);
  local_b8 = lVar8;
  if (*(longlong *)(lVar8 + 0x30) != 0) {
    FUN_1423b8520(lVar8);
  }
  plVar13 = *(longlong **)(*plVar13 + (longlong)param_2 * 8);
  if (*(int *)(param_3 + 8) < *(int *)((longlong)plVar13 + 0x16c)) {
    return;
  }
  cVar1 = *(char *)((longlong)plVar13 + 0x279);
  lVar3 = operator_new(0x60);
  uVar9 = 0;
  uVar4 = uVar9;
  if (lVar3 != 0) {
    uVar4 = FSkinWeightVertexBuffer::FSkinWeightVertexBuffer(lVar3);
  }
  *(ulonglong *)(lVar8 + 0x30) = uVar4;
  *(undefined1 *)(uVar4 + 0x40) = 1;
  *(char *)(*(longlong *)(lVar8 + 0x30) + 0x41) = cVar1;
  if (cVar1 == '\0') {
    local_e8 = (void *)0x0;
    local_e0 = 0;
    uVar4 = uVar9;
    uVar10 = uVar9;
    uVar12 = uVar9;
    if (0 < (int)plVar13[1]) {
      do {
        lVar8 = *plVar13 + uVar4;
        local_f8[0] = 0;
        iVar7 = *(int *)(lVar8 + 0x38);
        local_98 = 0;
        local_90 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0xffffffff;
        local_64 = 0;
        local_58 = 0;
        local_50 = 0;
        if (0 < *(int *)(lVar8 + 0x30)) {
          local_b0 = local_f0;
          local_a8 = local_f8;
          uVar5 = uVar9;
          do {
            local_f0[0] = (uint)*(ushort *)(*(longlong *)(lVar8 + 0x28) + (longlong)(int)uVar5 * 2);
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_&&>_>(&local_98,local_c8,&local_b0,0);
            local_f8[0] = local_f8[0] + 1;
            uVar5 = (ulonglong)local_f8[0];
          } while ((int)local_f8[0] < *(int *)(lVar8 + 0x30));
        }
        local_100 = &local_d8;
        local_108 = &local_e8;
        local_d8 = (void *)0x0;
        local_d0 = 0;
        CreateSectionSkinWeightsArray<0>(local_c0,uVar10,iVar7);
        uVar10 = (ulonglong)(uint)((int)uVar10 + iVar7);
        if (local_d8 != (void *)0x0) {
          FMemory::Free(local_d8);
        }
        local_50 = 0;
        if (local_58 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_98);
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        uVar4 = uVar4 + 0x108;
      } while ((int)uVar11 < (int)plVar13[1]);
      uVar9 = local_e0 & 0xffffffff;
    }
    lVar3 = local_b8;
    _Src = local_e8;
    lVar8 = *(longlong *)(local_b8 + 0x30);
    FUN_1427215a0(lVar8);
    plVar13 = *(longlong **)(lVar8 + 0x48);
    iVar7 = (int)uVar9;
    (**(code **)(*plVar13 + 8))(plVar13,uVar9,0);
    if (iVar7 == 0) goto LAB_1423bbf93;
    _Size = (longlong)iVar7 << 3;
  }
  else {
    local_d8 = (void *)0x0;
    local_d0 = 0;
    uVar4 = uVar9;
    uVar10 = uVar9;
    uVar12 = uVar9;
    if (0 < (int)plVar13[1]) {
      do {
        lVar8 = *plVar13 + uVar4;
        local_f8[0] = 0;
        iVar7 = *(int *)(lVar8 + 0x38);
        local_98 = 0;
        local_90 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0xffffffff;
        local_64 = 0;
        local_58 = 0;
        local_50 = 0;
        if (0 < *(int *)(lVar8 + 0x30)) {
          local_b0 = local_f0;
          local_a8 = local_f8;
          uVar5 = uVar9;
          do {
            local_f0[0] = (uint)*(ushort *)(*(longlong *)(lVar8 + 0x28) + (longlong)(int)uVar5 * 2);
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_&&>_>(&local_98,local_c8,&local_b0,0);
            local_f8[0] = local_f8[0] + 1;
            uVar5 = (ulonglong)local_f8[0];
          } while ((int)local_f8[0] < *(int *)(lVar8 + 0x30));
        }
        local_100 = &local_e8;
        local_108 = &local_d8;
        local_e8 = (void *)0x0;
        local_e0 = 0;
        CreateSectionSkinWeightsArray<1>(local_c0,uVar10,iVar7);
        if (local_e8 != (void *)0x0) {
          FMemory::Free(local_e8);
        }
        local_50 = 0;
        if (local_58 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_98);
        uVar11 = (int)uVar12 + 1;
        uVar4 = uVar4 + 0x108;
        uVar10 = (ulonglong)(uint)((int)uVar10 + iVar7);
        uVar12 = (ulonglong)uVar11;
      } while ((int)uVar11 < (int)plVar13[1]);
      uVar9 = local_d0 & 0xffffffff;
    }
    lVar3 = local_b8;
    _Src = local_d8;
    lVar8 = *(longlong *)(local_b8 + 0x30);
    FUN_1427215a0(lVar8);
    plVar13 = *(longlong **)(lVar8 + 0x48);
    iVar7 = (int)uVar9;
    (**(code **)(*plVar13 + 8))(plVar13,uVar9,0);
    if (iVar7 == 0) goto LAB_1423bbf93;
    _Size = (longlong)iVar7 << 4;
  }
  _Dst = (void *)(**(code **)(*plVar13 + 0x30))(plVar13);
  _guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
LAB_1423bbf93:
  uVar6 = (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x30))();
  *(undefined8 *)(lVar8 + 0x50) = uVar6;
  uVar2 = (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x20))();
  *(int *)(lVar8 + 0x5c) = iVar7;
  *(undefined4 *)(lVar8 + 0x58) = uVar2;
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  FUN_141edf270(*(undefined8 *)(lVar3 + 0x30));
  FUN_1423424e0(local_a0);
  return;
}



// FUNCTION 1423bc010 FUN_1423bc010 body=181 status=ok
// SIG undefined FUN_1423bc010(void)

void FUN_1423bc010(longlong *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  *(undefined4 *)(param_1 + 0xe2) = param_2;
  (**(code **)(*param_1 + 0x4b8))();
  (**(code **)(*param_1 + 0x8e8))(param_1);
  FUN_1423424e0(param_1);
  if ((*(byte *)(param_1 + 0x17) & 4) != 0) {
    local_18 = (undefined4)param_1[0x46];
    local_14 = *(undefined4 *)((longlong)param_1 + 0x234);
    local_10 = (undefined4)param_1[0x47];
    FUN_1426aef60(param_1 + 0x76,&local_18,1);
    if (param_3 != '\0') {
      iVar1 = (**(code **)(*param_1 + 0x4e8))(param_1);
      if ((iVar1 != 0) && (param_1[0x23] != 0)) {
        (**(code **)(*param_1 + 0x488))(param_1,0,1,0);
      }
    }
  }
  return;
}



// FUNCTION 1423bc0d0 FUN_1423bc0d0 body=99 status=ok
// SIG undefined FUN_1423bc0d0(void)

void FUN_1423bc0d0(longlong param_1,int param_2,int param_3,char param_4)

{
  undefined1 uVar1;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x6f8))) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else if (param_3 == 1) {
      uVar1 = 1;
    }
    else if (param_3 == 2) {
      uVar1 = 2;
    }
    else if (param_3 == 3) {
      uVar1 = 5;
    }
    else if (param_3 == 4) {
      uVar1 = 3;
    }
    else {
      uVar1 = 6;
    }
    *(undefined1 *)((longlong)param_2 * 0x2c + 0x28 + *(longlong *)(param_1 + 0x6f0)) = uVar1;
    if (param_4 != '\0') {
      FUN_1423c1a10(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1423bc140 FUN_1423bc140 body=1197 status=ok
// SIG undefined FUN_1423bc140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423bc140(longlong param_1,undefined8 *param_2,int param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  undefined1 in_XMM5 [16];
  undefined1 auVar17 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_bc;
  float fStack_b8;
  float local_b4;
  undefined8 local_b0;
  float local_a8;
  
  plVar1 = (longlong *)(param_1 + 0x6f0);
  iVar6 = *(int *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  if (*(int *)(param_1 + 0x6fc) < iVar6) {
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(plVar1,iVar6);
  }
  plVar2 = (longlong *)(param_1 + 0x708);
  *(undefined4 *)(param_1 + 0x710) = 0;
  if (*(int *)(param_1 + 0x714) < iVar6) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(plVar2,iVar6);
  }
  plVar3 = (longlong *)(param_1 + 0x720);
  *(undefined4 *)(param_1 + 0x728) = 0;
  if (*(int *)(param_1 + 0x72c) < iVar6) {
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(plVar3,iVar6);
  }
  pfVar12 = (float *)*param_2;
  fVar28 = 0.0;
  pfVar4 = pfVar12 + (longlong)*(int *)(param_2 + 1) * 3;
  for (; pfVar12 != pfVar4; pfVar12 = pfVar12 + 3) {
    if (param_3 == 1) {
      auVar5 = *(undefined1 (*) [16])(param_1 + 0x230);
      fVar7 = auVar5._0_4_;
      fVar8 = auVar5._4_4_;
      fVar9 = auVar5._8_4_;
      pfVar11 = &local_bc;
      fVar21 = _DAT_146af0eb0 * *(float *)(param_1 + 0x210);
      fVar22 = fRam0000000146af0eb4 * *(float *)(param_1 + 0x214);
      fVar23 = fRam0000000146af0eb8 * *(float *)(param_1 + 0x218);
      fVar24 = fRam0000000146af0ebc * *(float *)(param_1 + 0x21c);
      auVar17 = rcpps(in_XMM5,auVar5);
      fVar25 = (float)((uint)(*pfVar12 - *(float *)(param_1 + 0x220)) & _DAT_146af0c00);
      fVar26 = (float)((uint)(pfVar12[1] - *(float *)(param_1 + 0x224)) & uRam0000000146af0c04);
      fVar27 = (float)((uint)(pfVar12[2] - *(float *)(param_1 + 0x228)) & uRam0000000146af0c08);
      fVar13 = fVar27 * fVar22 - fVar26 * fVar23;
      fVar14 = fVar25 * fVar23 - fVar27 * fVar21;
      fVar15 = fVar26 * fVar21 - fVar25 * fVar22;
      fVar16 = auVar17._0_4_;
      fVar18 = auVar17._4_4_;
      fVar19 = auVar17._8_4_;
      fVar20 = auVar17._12_4_;
      fVar13 = fVar13 + fVar13;
      fVar14 = fVar14 + fVar14;
      fVar15 = fVar15 + fVar15;
      fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar7;
      fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar8;
      fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * fVar9;
      fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * auVar5._12_4_;
      in_XMM5._0_4_ = (fVar16 + fVar16) - fVar16 * fVar16 * fVar7;
      in_XMM5._4_4_ = (fVar18 + fVar18) - fVar18 * fVar18 * fVar8;
      in_XMM5._8_4_ = (fVar19 + fVar19) - fVar19 * fVar19 * fVar9;
      in_XMM5._12_4_ = (fVar20 + fVar20) - fVar20 * fVar20 * auVar5._12_4_;
      local_bc = ((fVar15 * fVar22 - fVar14 * fVar23) + fVar24 * fVar13 + fVar25) *
                 (float)(-(uint)((float)((uint)fVar7 & _DAT_146af0d10) <= _DAT_146af0ea0) &
                         (uint)in_XMM5._0_4_ ^ (uint)in_XMM5._0_4_);
      local_b4 = ((fVar14 * fVar21 - fVar13 * fVar22) + fVar24 * fVar15 + fVar27) *
                 (float)(-(uint)((float)((uint)fVar9 & uRam0000000146af0d18) <= fRam0000000146af0ea8
                                ) & (uint)in_XMM5._8_4_ ^ (uint)in_XMM5._8_4_);
      fStack_b8 = ((fVar13 * fVar23 - fVar15 * fVar21) + fVar24 * fVar14 + fVar26) *
                  (float)(-(uint)((float)((uint)fVar8 & uRam0000000146af0d14) <=
                                 fRam0000000146af0ea4) & (uint)in_XMM5._4_4_ ^ (uint)in_XMM5._4_4_);
    }
    else {
      pfVar11 = (float *)&local_b0;
      local_b0 = *(undefined8 *)pfVar12;
      local_a8 = pfVar12[2];
    }
    iVar6 = *(int *)(param_1 + 0x6f8);
    *(int *)(param_1 + 0x6f8) = iVar6 + 1;
    if (*(int *)(param_1 + 0x6fc) < iVar6 + 1) {
      TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
    }
    fVar7 = pfVar11[2];
    pfVar10 = (float *)((longlong)iVar6 * 0x2c + *plVar1);
    *(undefined8 *)(pfVar10 + 1) = *(undefined8 *)pfVar11;
    pfVar10[3] = fVar7;
    *pfVar10 = fVar28;
    *(undefined8 *)(pfVar10 + 4) = _DAT_1468b5d90;
    pfVar10[6] = DAT_1468b5d98;
    *(undefined8 *)(pfVar10 + 7) = _DAT_1468b5d90;
    pfVar10[9] = DAT_1468b5d98;
    *(undefined1 *)(pfVar10 + 10) = 1;
    iVar6 = *(int *)(param_1 + 0x710);
    *(int *)(param_1 + 0x710) = iVar6 + 1;
    if (*(int *)(param_1 + 0x714) < iVar6 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar2,iVar6);
    }
    pfVar11 = (float *)((longlong)iVar6 * 0x50 + *plVar2);
    *pfVar11 = fVar28;
    pfVar11[4] = DAT_1464aa810;
    pfVar11[5] = DAT_1464aa814;
    pfVar11[6] = DAT_1464aa818;
    pfVar11[7] = DAT_1464aa81c;
    pfVar11[8] = DAT_1464aa810;
    pfVar11[9] = DAT_1464aa814;
    pfVar11[10] = DAT_1464aa818;
    pfVar11[0xb] = DAT_1464aa81c;
    pfVar11[0xc] = DAT_1464aa810;
    pfVar11[0xd] = DAT_1464aa814;
    pfVar11[0xe] = DAT_1464aa818;
    pfVar11[0xf] = DAT_1464aa81c;
    *(undefined1 *)(pfVar11 + 0x10) = 1;
    iVar6 = *(int *)(param_1 + 0x728);
    *(int *)(param_1 + 0x728) = iVar6 + 1;
    if (*(int *)(param_1 + 0x72c) < iVar6 + 1) {
      TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(plVar3,iVar6);
    }
    pfVar11 = (float *)((longlong)iVar6 * 0x2c + *plVar3);
    pfVar11[1] = 1.0;
    pfVar11[2] = 1.0;
    *pfVar11 = fVar28;
    fVar28 = fVar28 + 1.0;
    pfVar11[3] = 1.0;
    *(undefined8 *)(pfVar11 + 4) = _DAT_1468b5d90;
    pfVar11[6] = DAT_1468b5d98;
    *(undefined8 *)(pfVar11 + 7) = _DAT_1468b5d90;
    pfVar11[9] = DAT_1468b5d98;
    *(undefined1 *)(pfVar11 + 10) = 1;
  }
  *(undefined1 *)(param_1 + 0x7c2) = 0;
  if (param_4 != '\0') {
    local_bc = *(float *)(param_1 + 0x230);
    fStack_b8 = *(float *)(param_1 + 0x234);
    local_b4 = *(float *)(param_1 + 0x238);
    FSplineCurves::UpdateSpline
              (plVar1,*(undefined1 *)(param_1 + 0x7c1),*(undefined1 *)(param_1 + 0x7bc),
               *(undefined4 *)(param_1 + 0x7b4),0,*(undefined4 *)(param_1 + 0x7c4),&local_bc);
  }
  return;
}



// FUNCTION 1423bc5f0 FUN_1423bc5f0 body=406 status=ok
// SIG undefined FUN_1423bc5f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423bc5f0(longlong param_1,int param_2,float *param_3,int param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 in_XMM5 [16];
  undefined1 auVar13 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_48;
  float local_40;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x6f8))) {
    if (param_4 == 1) {
      fVar1 = param_3[2];
      fVar2 = param_3[1];
      auVar13 = *(undefined1 (*) [16])(param_1 + 0x230);
      fVar5 = auVar13._0_4_;
      fVar6 = auVar13._4_4_;
      fVar7 = auVar13._8_4_;
      fVar16 = *(float *)(param_1 + 0x210) * _DAT_146af0eb0;
      fVar17 = *(float *)(param_1 + 0x214) * fRam0000000146af0eb4;
      fVar18 = *(float *)(param_1 + 0x218) * fRam0000000146af0eb8;
      fVar19 = *(float *)(param_1 + 0x21c) * fRam0000000146af0ebc;
      auVar13 = rcpps(in_XMM5,auVar13);
      fVar3 = *param_3;
      fVar9 = fVar1 * fVar17 - fVar2 * fVar18;
      fVar10 = fVar3 * fVar18 - fVar1 * fVar16;
      fVar11 = fVar2 * fVar16 - fVar3 * fVar17;
      fVar12 = auVar13._0_4_;
      fVar14 = auVar13._4_4_;
      fVar15 = auVar13._8_4_;
      fVar9 = fVar9 + fVar9;
      fVar10 = fVar10 + fVar10;
      fVar11 = fVar11 + fVar11;
      fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar5;
      fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar6;
      fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar7;
      fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar5;
      fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar6;
      fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar7;
      local_40 = ((fVar10 * fVar16 - fVar9 * fVar17) + fVar19 * fVar11 + fVar1) *
                 (float)(-(uint)((float)((uint)fVar7 & uRam0000000146af0d18) <= fRam0000000146af0ea8
                                ) & (uint)fVar15 ^ (uint)fVar15);
      local_48 = CONCAT44(((fVar9 * fVar18 - fVar11 * fVar16) + fVar19 * fVar10 + fVar2) *
                          (float)(-(uint)((float)((uint)fVar6 & uRam0000000146af0d14) <=
                                         fRam0000000146af0ea4) & (uint)fVar14 ^ (uint)fVar14),
                          ((fVar11 * fVar17 - fVar10 * fVar18) + fVar19 * fVar9 + fVar3) *
                          (float)(-(uint)((float)((uint)fVar5 & _DAT_146af0d10) <= _DAT_146af0ea0) &
                                  (uint)fVar12 ^ (uint)fVar12));
    }
    else {
      local_48 = *(undefined8 *)param_3;
      local_40 = param_3[2];
    }
    lVar4 = *(longlong *)(param_1 + 0x6f0);
    lVar8 = (longlong)param_2 * 0x2c;
    *(undefined8 *)(lVar8 + 0x1c + lVar4) = local_48;
    *(float *)(lVar8 + 0x24 + lVar4) = local_40;
    lVar4 = *(longlong *)(param_1 + 0x6f0);
    *(undefined8 *)(lVar8 + 0x10 + lVar4) = local_48;
    *(float *)(lVar8 + 0x18 + lVar4) = local_40;
    *(undefined1 *)(lVar8 + 0x28 + *(longlong *)(param_1 + 0x6f0)) = 3;
    if (param_5 != '\0') {
      FUN_1423c1a10(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1423bc790 FUN_1423bc790 body=640 status=ok
// SIG undefined FUN_1423bc790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423bc790(longlong param_1,int param_2,float *param_3,float *param_4,int param_5,
                  char param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar14 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_88;
  float local_80;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x6f8))) {
    if (param_5 == 1) {
      fVar11 = param_3[2];
      fVar10 = param_3[1];
      fVar9 = *param_3;
      auVar14 = *(undefined1 (*) [16])(param_1 + 0x230);
      fVar2 = auVar14._0_4_;
      fVar3 = auVar14._4_4_;
      fVar4 = auVar14._8_4_;
      fVar19 = *(float *)(param_1 + 0x210) * _DAT_146af0eb0;
      fVar20 = *(float *)(param_1 + 0x214) * fRam0000000146af0eb4;
      fVar21 = *(float *)(param_1 + 0x218) * fRam0000000146af0eb8;
      fVar22 = *(float *)(param_1 + 0x21c) * fRam0000000146af0ebc;
      auVar14 = rcpps(unaff_XMM8,auVar14);
      fVar6 = fVar11 * fVar20 - fVar10 * fVar21;
      fVar7 = fVar9 * fVar21 - fVar11 * fVar19;
      fVar8 = fVar10 * fVar19 - fVar9 * fVar20;
      fVar12 = auVar14._0_4_;
      fVar15 = auVar14._4_4_;
      fVar17 = auVar14._8_4_;
      fVar6 = fVar6 + fVar6;
      fVar7 = fVar7 + fVar7;
      fVar8 = fVar8 + fVar8;
      fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar2;
      fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar3;
      fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar4;
      fVar13 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar2;
      fVar16 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar3;
      fVar18 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar4;
      fVar12 = *param_4;
      fVar9 = ((fVar8 * fVar20 - fVar7 * fVar21) + fVar22 * fVar6 + fVar9) *
              (float)(-(uint)((float)((uint)fVar2 & _DAT_146af0d10) <= _DAT_146af0ea0) &
                      (uint)fVar13 ^ (uint)fVar13);
      fVar10 = ((fVar6 * fVar21 - fVar8 * fVar19) + fVar22 * fVar7 + fVar10) *
               (float)(-(uint)((float)((uint)fVar3 & uRam0000000146af0d14) <= fRam0000000146af0ea4)
                       & (uint)fVar16 ^ (uint)fVar16);
      fVar11 = ((fVar7 * fVar19 - fVar6 * fVar20) + fVar22 * fVar8 + fVar11) *
               (float)(-(uint)((float)((uint)fVar4 & uRam0000000146af0d18) <= fRam0000000146af0ea8)
                       & (uint)fVar18 ^ (uint)fVar18);
      fVar6 = param_4[1];
      fVar7 = param_4[2];
      fVar8 = fVar7 * fVar20 - fVar6 * fVar21;
      fVar15 = fVar12 * fVar21 - fVar7 * fVar19;
      fVar17 = fVar6 * fVar19 - fVar12 * fVar20;
      fVar8 = fVar8 + fVar8;
      fVar15 = fVar15 + fVar15;
      fVar17 = fVar17 + fVar17;
      local_80 = ((fVar15 * fVar19 - fVar8 * fVar20) + fVar22 * fVar17 + fVar7) *
                 (float)(-(uint)((float)((uint)fVar4 & uRam0000000146af0d18) <= fRam0000000146af0ea8
                                ) & (uint)fVar18 ^ (uint)fVar18);
      local_88 = CONCAT44(((fVar8 * fVar21 - fVar17 * fVar19) + fVar22 * fVar15 + fVar6) *
                          (float)(-(uint)((float)((uint)fVar3 & uRam0000000146af0d14) <=
                                         fRam0000000146af0ea4) & (uint)fVar16 ^ (uint)fVar16),
                          ((fVar17 * fVar20 - fVar15 * fVar21) + fVar22 * fVar8 + fVar12) *
                          (float)(-(uint)((float)((uint)fVar2 & _DAT_146af0d10) <= _DAT_146af0ea0) &
                                  (uint)fVar13 ^ (uint)fVar13));
    }
    else {
      local_88 = *(undefined8 *)param_4;
      local_80 = param_4[2];
      fVar9 = (float)*(undefined8 *)param_3;
      fVar10 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
      fVar11 = param_3[2];
    }
    lVar5 = (longlong)param_2 * 0x2c;
    lVar1 = *(longlong *)(param_1 + 0x6f0);
    *(ulonglong *)(lVar5 + 0x10 + lVar1) = CONCAT44(fVar10,fVar9);
    *(float *)(lVar5 + 0x18 + lVar1) = fVar11;
    lVar1 = *(longlong *)(param_1 + 0x6f0);
    *(undefined8 *)(lVar5 + 0x1c + lVar1) = local_88;
    *(float *)(lVar5 + 0x24 + lVar1) = local_80;
    *(undefined1 *)(lVar5 + 0x28 + *(longlong *)(param_1 + 0x6f0)) = 3;
    if (param_6 != '\0') {
      FUN_1423c1a10(param_1);
    }
  }
  return;
}



// FUNCTION 1423bca10 FUN_1423bca10 body=21 status=ok
// SIG undefined FUN_1423bca10(void)

void FUN_1423bca10(longlong param_1,float param_2)

{
  *(float *)(param_1 + 0xc70) = param_2;
  *(float *)(param_1 + 0xc7c) = param_2 * param_2;
  return;
}



// FUNCTION 1423bca30 FUN_1423bca30 body=47 status=ok
// SIG undefined FUN_1423bca30(void)

void FUN_1423bca30(longlong param_1,float param_2)

{
  float fVar1;
  
  *(float *)(param_1 + 0xc74) = param_2;
  fVar1 = _guard_xfg_dispatch_icall_nop(param_2 * 0.017453292);
  *(float *)(param_1 + 0xc78) = fVar1;
  return;
}



// FUNCTION 1423bca60 FUN_1423bca60 body=505 status=ok
// SIG undefined FUN_1423bca60(void)

void FUN_1423bca60(undefined1 *param_1,float param_2,ulonglong param_3,int param_4,int param_5,
                  char param_6)

{
  float fVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  
  *param_1 = 0;
  iVar9 = 1;
  if (0 < param_4) {
    iVar9 = param_4;
  }
  *(int *)(param_1 + 4) = iVar9;
  param_5 = param_5 - param_5 % iVar9;
  *(float *)(param_1 + 0x14) = param_2;
  iVar9 = 1;
  if (0 < param_5) {
    iVar9 = param_5;
  }
  *(int *)(param_1 + 8) = iVar9;
  lVar11 = DAT_146af0e10;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  bVar14 = 0;
  if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), lVar8 = 4, DVar6 == DAT_1468c21c0)) {
    lVar8 = 0;
  }
  lVar3 = DAT_146af0df8;
  iVar9 = 0;
  if (*(int *)(lVar8 + lVar11) == 0) {
    if ((param_6 == '\0') || (*(int *)(param_1 + 0x1c) <= *(int *)(param_1 + 8))) {
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar4 != '\0') ||
         ((DAT_1468c21ae == '\0' ||
          (DVar6 = GetCurrentThreadId(), lVar11 = 4, DVar6 == DAT_1468c21c0)))) {
        lVar11 = 0;
      }
      if (*(int *)(lVar11 + lVar3) != 1) goto LAB_1423bcb50;
    }
    bVar5 = 1;
  }
  else {
LAB_1423bcb50:
    bVar5 = 0;
  }
  bVar2 = param_1[2];
  param_1[2] = bVar2 & 0xfe | bVar5;
  uVar10 = ((param_3 & 0xff) + DAT_1468c21b0) % 0xffffffff;
  bVar12 = bVar14;
  if ((int)(uVar10 % (ulonglong)*(uint *)(param_1 + 4)) != 0) {
    bVar12 = 8;
  }
  if ((int)(uVar10 % (ulonglong)*(uint *)(param_1 + 8)) != 0) {
    bVar14 = 0x10;
  }
  bVar13 = bVar12 | bVar2 & 0xe6 | bVar5 | bVar14;
  param_1[2] = bVar13;
  iVar7 = iVar9;
  if (bVar12 != 0) {
    iVar7 = *(int *)(param_1 + 0x80) + 1;
  }
  *(int *)(param_1 + 0x80) = iVar7;
  if (bVar14 != 0) {
    iVar9 = *(int *)(param_1 + 0x84) + 1;
  }
  *(int *)(param_1 + 0x84) = iVar9;
  if (((int)*(uint *)(param_1 + 4) <= iVar7) || ((int)*(uint *)(param_1 + 8) <= iVar9)) {
    bVar13 = bVar2 & 0xe6 | bVar5;
    *(undefined8 *)(param_1 + 0x80) = 0;
    param_1[2] = bVar13;
  }
  fVar1 = *(float *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((bVar13 & 8) == 0) {
    if (fVar1 < 0.0) {
      *(float *)(param_1 + 0x10) = -fVar1;
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    *(float *)(param_1 + 0xc) = fVar1 - param_2;
  }
  return;
}



// FUNCTION 1423bcc60 FUN_1423bcc60 body=827 status=ok
// SIG undefined FUN_1423bcc60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423bcc60(longlong param_1,int param_2,float *param_3,int param_4,char param_5)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 in_XMM5 [16];
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_58;
  float fStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  float local_40;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x6f8))) {
    fStack_50 = param_3[2];
    fVar2 = *param_3;
    fVar3 = param_3[1];
    fVar4 = fVar2 * fVar2 + fVar3 * fVar3 + fStack_50 * fStack_50;
    if (param_4 == 1) {
      if (fVar4 == 1.0) {
        local_58._0_4_ = (float)*(undefined8 *)param_3;
        fVar8 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
        fVar13 = param_3[2];
      }
      else {
        fVar8 = DAT_1468b5d94;
        fVar13 = DAT_1468b5d98;
        local_58._0_4_ = DAT_1468b5d90;
        if (1e-08 <= fVar4) {
          auVar10 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
          fVar8 = auVar10._0_4_;
          in_XMM5._4_12_ = auVar10._4_12_;
          fVar8 = fVar8 + fVar8 * (0.5 - fVar4 * 0.5 * fVar8 * fVar8);
          in_XMM5._0_4_ = fVar8 + fVar8 * (0.5 - fVar4 * 0.5 * fVar8 * fVar8);
          local_58._0_4_ = fVar2 * in_XMM5._0_4_;
          fVar8 = fVar3 * in_XMM5._0_4_;
          fVar13 = fStack_50 * in_XMM5._0_4_;
        }
      }
      fVar14 = *(float *)(param_1 + 0x210) * _DAT_146af0eb0;
      fVar15 = *(float *)(param_1 + 0x214) * fRam0000000146af0eb4;
      fVar16 = *(float *)(param_1 + 0x218) * fRam0000000146af0eb8;
      fVar17 = *(float *)(param_1 + 0x21c) * fRam0000000146af0ebc;
      auVar10 = *(undefined1 (*) [16])(param_1 + 0x230);
      fVar2 = auVar10._0_4_;
      fVar3 = auVar10._4_4_;
      fVar4 = auVar10._8_4_;
      auVar10 = rcpps(in_XMM5,auVar10);
      fVar5 = fVar13 * fVar15 - fVar8 * fVar16;
      fVar6 = (float)local_58 * fVar16 - fVar13 * fVar14;
      fVar7 = fVar8 * fVar14 - (float)local_58 * fVar15;
      fVar9 = auVar10._0_4_;
      fVar11 = auVar10._4_4_;
      fVar12 = auVar10._8_4_;
      fVar5 = fVar5 + fVar5;
      fVar6 = fVar6 + fVar6;
      fVar7 = fVar7 + fVar7;
      fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar2;
      fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar3;
      fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar4;
      fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar2;
      fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar3;
      fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar4;
      fStack_50 = ((fVar6 * fVar14 - fVar5 * fVar15) + fVar17 * fVar7 + fVar13) *
                  (float)(-(uint)((float)((uint)fVar4 & uRam0000000146af0d18) <=
                                 fRam0000000146af0ea8) & (uint)fVar12 ^ (uint)fVar12);
      local_58 = CONCAT44(((fVar5 * fVar16 - fVar7 * fVar14) + fVar17 * fVar6 + fVar8) *
                          (float)(-(uint)((float)((uint)fVar3 & uRam0000000146af0d14) <=
                                         fRam0000000146af0ea4) & (uint)fVar11 ^ (uint)fVar11),
                          ((fVar7 * fVar15 - fVar6 * fVar16) + fVar17 * fVar5 + (float)local_58) *
                          (float)(-(uint)((float)((uint)fVar2 & _DAT_146af0d10) <= _DAT_146af0ea0) &
                                  (uint)fVar9 ^ (uint)fVar9));
    }
    else if (fVar4 == 1.0) {
      local_58 = *(undefined8 *)param_3;
      fStack_50 = param_3[2];
    }
    else if (1e-08 <= fVar4) {
      auVar10 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar8 = auVar10._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar4 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar4 * 0.5 * fVar8 * fVar8);
      fStack_50 = fStack_50 * fVar8;
      local_58 = CONCAT44(fVar3 * fVar8,fVar2 * fVar8);
    }
    else {
      fStack_50 = DAT_1468b5d98;
      local_58 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    local_48 = local_58;
    local_40 = fStack_50;
    FQuat::FindBetweenVectors(&local_58,param_1 + 0x7c8,&local_48);
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x708) + 0x10 + (longlong)param_2 * 0x50);
    *puVar1 = (float)local_58;
    puVar1[1] = local_58._4_4_;
    puVar1[2] = fStack_50;
    puVar1[3] = uStack_4c;
    if (param_5 != '\0') {
      FUN_1423c1a10(param_1);
    }
  }
  return;
}



// FUNCTION 1423bcfa0 FUN_1423bcfa0 body=544 status=ok
// SIG undefined FUN_1423bcfa0(void)

void FUN_1423bcfa0(longlong param_1,int param_2,int param_3,undefined4 **param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint uVar10;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined4 *local_38;
  ulonglong local_30;
  ulonglong uVar11;
  
  FUN_1423b3480();
  lVar12 = *(longlong *)(param_1 + 0x888);
  if (((((lVar12 != 0) || (lVar12 = *(longlong *)(param_1 + 0x718), lVar12 != 0)) &&
       (plVar4 = *(longlong **)(lVar12 + 0x40), plVar4 != (longlong *)0x0)) &&
      ((-1 < param_3 && (param_3 < *(int *)(param_1 + 0x860))))) && (param_3 < (int)plVar4[1])) {
    lVar12 = (longlong)param_3 * 0x38 + *(longlong *)(param_1 + 0x858);
    uVar7 = 0;
    if ((-1 < param_2) && (param_2 < *(int *)(lVar12 + 0x28))) {
      lVar6 = *(longlong *)(lVar12 + 0x20);
      if (*(longlong *)(lVar12 + 0x20) == 0) {
        lVar6 = lVar12 + 0x10;
      }
      if (*(longlong *)(lVar6 + (longlong)param_2 * 8) != 0) {
        FUN_1423b8560(lVar12);
      }
    }
    local_38 = (undefined4 *)0x0;
    local_30 = 0;
    uVar2 = *(uint *)(*(longlong *)(*plVar4 + (longlong)param_3 * 8) + 0x16c);
    if (*(uint *)(param_4 + 1) != uVar2) {
      local_30 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_38,0);
        puVar9 = local_38;
        uVar11 = uVar7;
        do {
          uVar5 = DAT_1464aa730;
          if ((int)uVar11 < *(int *)(param_4 + 1)) {
            uVar5 = *(undefined4 *)(((longlong)*param_4 - (longlong)local_38) + (longlong)puVar9);
          }
          *puVar9 = uVar5;
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          puVar9 = puVar9 + 1;
        } while ((int)uVar10 < (int)uVar2);
      }
      param_4 = &local_38;
    }
    puVar9 = local_38;
    if (*(int *)(lVar12 + 0x28) <= param_2) {
      iVar3 = *(int *)(lVar12 + 0x28);
      iVar14 = (param_2 - *(int *)(lVar12 + 0x28)) + 1;
      iVar1 = iVar3 + iVar14;
      *(int *)(lVar12 + 0x28) = iVar1;
      if (*(int *)(lVar12 + 0x2c) < iVar1) {
        TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
        ::ResizeGrow(lVar12 + 0x10);
      }
      lVar6 = *(longlong *)(lVar12 + 0x20);
      if (*(longlong *)(lVar12 + 0x20) == 0) {
        lVar6 = lVar12 + 0x10;
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar6 + (longlong)iVar3 * 8),0,(longlong)iVar14 << 3);
    }
    lVar6 = operator_new(0x58);
    if (lVar6 != 0) {
      uVar7 = FUN_14271d780(lVar6);
    }
    lVar6 = (longlong)param_2 * 8;
    lVar13 = lVar12 + 0x10;
    lVar8 = *(longlong *)(lVar12 + 0x20);
    if (*(longlong *)(lVar12 + 0x20) == 0) {
      lVar8 = lVar13;
    }
    *(ulonglong *)(lVar8 + lVar6) = uVar7;
    lVar8 = *(longlong *)(lVar12 + 0x20);
    if (*(longlong *)(lVar12 + 0x20) == 0) {
      lVar8 = lVar13;
    }
    FColorVertexBuffer::InitFromColorArray
              (*(undefined8 *)(lVar8 + lVar6),*param_4,*(undefined4 *)(param_4 + 1),4);
    lVar8 = *(longlong *)(lVar12 + 0x20);
    if (*(longlong *)(lVar12 + 0x20) == 0) {
      lVar8 = lVar13;
    }
    FUN_141edf270(*(undefined8 *)(lVar8 + lVar6));
    FUN_1423424e0(param_1);
    if (puVar9 != (undefined4 *)0x0) {
      FMemory::Free(puVar9);
    }
  }
  return;
}



// FUNCTION 1423bd1c0 FUN_1423bd1c0 body=208 status=ok
// SIG undefined FUN_1423bd1c0(void)

void FUN_1423bd1c0(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_res20 [8];
  undefined4 *local_28;
  ulonglong local_20;
  
  iVar2 = 0;
  local_28 = (undefined4 *)0x0;
  local_20 = 0;
  if (0 < (int)*(uint *)(param_4 + 1)) {
    local_20 = (ulonglong)*(uint *)(param_4 + 1);
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    if (0 < (int)param_4[1]) {
      do {
        puVar1 = (undefined4 *)
                 FLinearColor::ToFColor((longlong)iVar2 * 0x10 + *param_4,local_res20,0);
        iVar2 = iVar2 + 1;
        *puVar3 = *puVar1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < (int)param_4[1]);
    }
  }
  FUN_1423bcfa0(param_1,param_2,param_3,&local_28);
  if (local_28 == (undefined4 *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1423bd290 FUN_1423bd290 body=79 status=ok
// SIG undefined FUN_1423bd290(void)

void FUN_1423bd290(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x2f4))) {
    *(float *)(param_1 + 0x2f4) = param_2;
    FUN_1423c0450(param_1);
  }
  return;
}



// FUNCTION 1423bd2e0 FUN_1423bd2e0 body=691 status=ok
// SIG undefined FUN_1423bd2e0(void)

void FUN_1423bd2e0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146af0bd8 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146af0bd8 != 0x1000)) ||
     (uVar3 = DAT_146af0be0, iVar4 != 0)) {
    uVar3 = DAT_146af0bdc | DAT_146af0bd8;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_1423bd4e7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_1423bd4e7:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 1423bd5a0 FUN_1423bd5a0 body=325 status=ok
// SIG undefined FUN_1423bd5a0(void)

undefined8 FUN_1423bd5a0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)param_1[0x149];
  if ((*(byte *)((longlong)param_1 + 0xb1c) & 8) == 0) {
    cVar6 = (**(code **)(*param_1 + 0x460))();
    if ((((cVar6 == '\0') && ((*(byte *)(param_1 + 0x73) & 1) == 0)) || ((char)param_1[0x10f] == -2)
        ) || ((param_1[0xe3] == 0 ||
              (((char)param_1[0x163] != '\x02' && (plVar1 == (longlong *)0x0))))))
    goto LAB_1423bd63d;
    if (((char)param_1[0x163] == '\x01') && (plVar1 != (longlong *)0x0)) {
      cVar6 = (**(code **)(*plVar1 + 0x338))(plVar1);
      if (cVar6 == '\0') goto LAB_1423bd63d;
    }
    if (((char)param_1[0x163] == '\x03') && (plVar1 != (longlong *)0x0)) {
      cVar6 = FUN_142276ee0(plVar1);
      if (cVar6 == '\0') goto LAB_1423bd63d;
    }
    if ((char)param_1[0x133] != '\0') goto LAB_1423bd63d;
    bVar2 = false;
  }
  else {
LAB_1423bd63d:
    bVar2 = true;
  }
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0xe4);
  if (cVar6 != '\0') {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0xe4);
    if (*(char *)(lVar7 + 0x3f) != '\0') {
      bVar5 = true;
      goto LAB_1423bd669;
    }
  }
  bVar5 = false;
LAB_1423bd669:
  cVar6 = (**(code **)(*param_1 + 0x408))(param_1);
  if ((cVar6 == '\0') || ((char)param_1[0x133] != '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar6 = (**(code **)(*param_1 + 0xa78))(param_1);
  if ((cVar6 == '\0') || ((char)param_1[0x133] != '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((((bVar2) && (!bVar3)) && (!bVar4)) && (!bVar5)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1423bd710 FUN_1423bd710 body=32 status=ok
// SIG undefined FUN_1423bd710(void)

undefined1 FUN_1423bd710(longlong param_1,float param_2)

{
  if (((*(char *)(param_1 + 0x878) == '\x03') && ((*(byte *)(param_1 + 0x880) & 2) == 0)) &&
     (0.0 < param_2)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1423bd730 FUN_1423bd730 body=55 status=ok
// SIG undefined FUN_1423bd730(void)

undefined1 FUN_1423bd730(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0xa60) != 0) {
    cVar1 = UAnimInstance::NeedsUpdate();
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0xa68) == '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1423bd770 FUN_1423bd770 body=60 status=ok
// SIG undefined FUN_1423bd770(void)

undefined8 FUN_1423bd770(longlong param_1)

{
  char cVar1;
  
  if (((-1 < *(char *)(param_1 + 0xb1d)) && (*(longlong *)(param_1 + 0x718) != 0)) &&
     (*(char *)(param_1 + 0xeae) != '\0')) {
    cVar1 = FUN_14277bb60(*(longlong *)(param_1 + 0x718));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1423bd7b0 FUN_1423bd7b0 body=242 status=ok
// SIG undefined FUN_1423bd7b0(void)

undefined8 FUN_1423bd7b0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_1 + 0xb1c) & 4) == 0) {
    if (*(longlong *)(param_1 + 0x8f0) == 0) {
      return 1;
    }
    if ((*(byte *)(*(longlong *)(param_1 + 0x8f0) + 2) & 0x10) == 0) {
      return 1;
    }
    cVar1 = FUN_1423bdc20();
    if (cVar1 == '\0') {
      return 1;
    }
    if ((**(char **)(param_1 + 0x8f0) != '\x01') && (*(int *)(*(char **)(param_1 + 0x8f0) + 8) < 2))
    {
      return 1;
    }
    if (*(longlong *)(param_1 + 0x718) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x718) + 0x160);
    }
    if (*(int *)(param_1 + 0xa90) != iVar2) {
      return 1;
    }
    if (*(int *)(param_1 + 0xa90) != *(int *)(param_1 + 0xad8)) {
      return 1;
    }
    if (*(int *)(param_1 + ((longlong)*(int *)(param_1 + 0x770) + 0x73) * 0x10) !=
        *(int *)(param_1 + 0xae8)) {
      return 1;
    }
    if (*(longlong *)(param_1 + 0xa48) != 0) {
      lVar3 = FUN_1422743b0();
      if (*(longlong *)(param_1 + 0xb00) != lVar3 + 0xc0) {
        return 1;
      }
      iVar2 = FBaseBlendedCurve<TMemStackAllocator<0>_>::GetValidElementCount(lVar3 + 0xc0);
      if (*(int *)(param_1 + 0xaf8) != iVar2) {
        return 1;
      }
    }
  }
  cVar1 = FUN_1423bdc20(param_1);
  if ((*(longlong *)(param_1 + 0x8f0) != 0) &&
     ((cVar1 == '\0' || ((*(byte *)(*(longlong *)(param_1 + 0x8f0) + 2) & 8) == 0)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1423bd8b0 FUN_1423bd8b0 body=228 status=ok
// SIG undefined FUN_1423bd8b0(void)

undefined8 FUN_1423bd8b0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  if (((*(byte *)((longlong)param_1 + 0xb1d) & 1) == 0) &&
     ((*(char *)((longlong)param_1 + 0xb1c) < '\0' || (DAT_1468c21b0 == *(uint *)(param_1 + 400)))))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((((*(byte *)(param_1 + 0x10f) & 0xfc) != 0) || (*(byte *)(param_1 + 0x10f) == 2)) &&
      ((*(byte *)(param_1 + 0x110) & 2) == 0)) &&
     (cVar2 = (**(code **)(*param_1 + 0x9f0))(), cVar2 == '\0')) {
    if (param_1[0x11e] == 0) {
      return 0;
    }
    if ((*(byte *)(param_1[0x11e] + 2) & 8) != 0) {
      return 0;
    }
    if ((char)param_1[0x10f] != '\x02') {
      return 0;
    }
  }
  if ((((bVar1) && ((*(byte *)(param_1 + 0x17) & 1) != 0)) &&
      ((param_1[0x149] != 0 || (param_1[0x14c] != 0)))) &&
     ((*(byte *)((longlong)param_1 + 0xb1c) & 8) == 0)) {
    lVar3 = param_1[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    cVar2 = FUN_1428c5cc0(lVar3);
    if ((cVar2 != '\0') && ((*(byte *)((longlong)param_1 + 0xb1c) & 4) == 0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1423bd9c0 FUN_1423bd9c0 body=263 status=ok
// SIG undefined FUN_1423bd9c0(void)

bool FUN_1423bd9c0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  if (*(longlong *)(param_1 + 0x718) == 0) {
    *(undefined4 *)(param_1 + 0x83c) = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x888) != 0) {
      iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x888) + 0x40) + 8) + -1;
    }
    iVar3 = *(int *)(param_1 + 0x830);
    if (iVar3 < 1) {
      cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x720);
      if (cVar1 == '\0') {
        iVar4 = iVar5;
        if (((*(longlong *)(param_1 + 0x888) != 0) &&
            (iVar3 = DAT_146af0b40 + *(int *)(*(longlong *)(param_1 + 0x888) + 0x28), iVar4 = 0,
            -1 < iVar3)) && (iVar4 = iVar5, iVar3 < iVar5)) {
          iVar4 = iVar3;
        }
      }
      else {
        lVar2 = FWeakObjectPtr::Get(param_1 + 0x720);
        iVar3 = *(int *)(lVar2 + 0x83c);
        iVar4 = 0;
        if ((-1 < iVar3) && (iVar4 = iVar5, iVar3 < iVar5)) {
          iVar4 = iVar3;
        }
      }
      *(int *)(param_1 + 0x83c) = iVar4;
      iVar3 = *(int *)(param_1 + 0x838);
      if ((0 < iVar3) && (iVar3 <= iVar5)) {
        if ((iVar3 <= iVar4) && (iVar3 = iVar5, iVar4 < iVar5)) {
          iVar3 = iVar4;
        }
        *(int *)(param_1 + 0x83c) = iVar3;
      }
      iVar4 = *(int *)(param_1 + 0x83c);
    }
    else {
      iVar4 = 0;
      if ((-1 < iVar3 + -1) && (iVar4 = iVar5, iVar3 <= iVar5)) {
        iVar4 = iVar3 + -1;
      }
      *(int *)(param_1 + 0x83c) = iVar4;
    }
  }
  return iVar4 != *(int *)(param_1 + 0x840);
}



// FUNCTION 1423bdad0 FUN_1423bdad0 body=283 status=ok
// SIG undefined FUN_1423bdad0(void)

undefined8 FUN_1423bdad0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  bool bVar6;
  
  bVar4 = *(byte *)(param_1 + 0xb1c);
  if ((((bVar4 & 0x40) != 0) && ((*(byte *)(param_1 + 0xb1d) & 2) != 0)) &&
     (*(int *)(param_1 + 0xd58) == *(int *)(param_1 + 0xd84))) {
    if (*(longlong *)(param_1 + 0xa48) == 0) {
      bVar6 = true;
    }
    else {
      cVar2 = UUserWidget::IsAnyAnimationPlaying();
      bVar4 = *(byte *)(param_1 + 0xb1c);
      bVar6 = cVar2 == '\0';
    }
    if (bVar6) {
      bVar6 = true;
      goto LAB_1423bdb3d;
    }
  }
  bVar6 = false;
LAB_1423bdb3d:
  if ((((bVar4 & 4) == 0) && (!bVar6)) &&
     ((((*(byte *)(param_1 + 0x880) & 2) != 0 || (*(char *)(param_1 + 0x878) == '\0')) ||
      (((*(longlong *)(param_1 + 0x8f0) != 0 &&
        ((*(byte *)(*(longlong *)(param_1 + 0x8f0) + 2) & 8) == 0)) &&
       (*(char *)(param_1 + 0x878) == '\x02')))))) {
    return 1;
  }
  lVar5 = *(longlong *)(param_1 + 0x778);
  lVar1 = lVar5 + (longlong)*(int *)(param_1 + 0x780) * 8;
  while( true ) {
    if (lVar5 == lVar1) {
      return 0;
    }
    cVar2 = FWeakObjectPtr::IsValid(lVar5);
    if (((cVar2 != '\0') &&
        (plVar3 = (longlong *)FWeakObjectPtr::Get(lVar5), plVar3 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*plVar3 + 0x998))(plVar3,param_2), cVar2 != '\0')) break;
    lVar5 = lVar5 + 8;
  }
  return 1;
}



// FUNCTION 1423bdc20 FUN_1423bdc20 body=170 status=ok
// SIG undefined FUN_1423bdc20(void)

undefined8 FUN_1423bdc20(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = DAT_146af0d68;
  lVar5 = 4;
  if ((*(byte *)(param_1 + 0x880) & 0x20) == 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      lVar4 = 4;
    }
    else {
      lVar4 = 0;
    }
    if (*(int *)(lVar4 + lVar1) < 1) {
      return 0;
    }
  }
  lVar1 = DAT_146af0c88;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)) {
    lVar5 = 0;
  }
  if (*(int *)(lVar5 + lVar1) < 1) {
    return 0;
  }
  return 1;
}



// FUNCTION 1423bdcd0 FUN_1423bdcd0 body=761 status=ok
// SIG undefined FUN_1423bdcd0(void)

void FUN_1423bdcd0(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  void *_Src;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  size_t _Size;
  longlong *lpTlsValue;
  longlong *plVar12;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  int local_48;
  
  FUN_1423b3480();
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x860))) &&
     (plVar12 = (longlong *)((longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x858)),
     0 < (int)plVar12[1])) {
    lpTlsValue = (longlong *)0x0;
    plVar6 = lpTlsValue;
    plVar11 = lpTlsValue;
    do {
      uVar9 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar9;
      *(undefined1 *)((longlong)plVar11 + *plVar12) = 0;
      plVar11 = (longlong *)((longlong)plVar11 + 1);
    } while ((int)uVar9 < (int)plVar12[1]);
    if (*(longlong *)(param_1 + 0x888) != 0) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
        local_50 = (int)plVar12[1];
        _Size = (size_t)local_50;
        local_60 = *(undefined8 *)(param_1 + 0x888);
        _Src = (void *)*plVar12;
        local_58 = (void *)0x0;
        if (local_50 == 0) {
          local_4c = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
          _guard_xfg_dispatch_icall_nop(local_58,_Src,_Size);
        }
        local_48 = param_2;
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_78);
        FSkeletalMeshObject::SetHiddenMaterials(local_60,local_48,&local_58);
        QueryPerformanceCounter(&local_res20);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_78._0_4_);
        if (local_58 != (void *)0x0) {
          FMemory::Free();
        }
      }
      else {
        pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar6 = TlsGetValue(*pDVar5);
        if (plVar6 == (longlong *)0x0) {
          plVar6 = (longlong *)operator_new(0x18);
          if (plVar6 != (longlong *)0x0) {
            *plVar6 = 0;
            plVar6[1] = 0;
            *(undefined4 *)(plVar6 + 2) = 0;
            lpTlsValue = plVar6;
          }
          TlsSetValue(*pDVar5,lpTlsValue);
          plVar6 = lpTlsValue;
        }
        plVar11 = (longlong *)plVar6[1];
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)*plVar6;
          if (plVar11 == (longlong *)0x0) {
            lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
            plVar6[1] = lVar7;
            if (lVar7 == 0) {
              puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar6[1] = (longlong)puVar8;
              lVar7 = 0x1f;
              do {
                puVar2 = puVar8 + 0x20;
                *puVar8 = puVar2;
                lVar7 = lVar7 + -1;
                puVar8 = puVar2;
              } while (lVar7 != 0);
              *puVar2 = 0;
            }
            plVar11 = (longlong *)plVar6[1];
            iVar10 = 0x20;
            *(undefined4 *)(plVar6 + 2) = 0x20;
          }
          else {
            iVar10 = 0x20;
            plVar6[1] = (longlong)plVar11;
            *(undefined4 *)(plVar6 + 2) = 0x20;
            *plVar6 = 0;
          }
        }
        else {
          iVar10 = (int)plVar6[2];
        }
        plVar6[1] = *plVar11;
        local_70 = 0;
        *(int *)(plVar6 + 2) = iVar10 + -1;
        *(undefined4 *)(plVar11 + 1) = 0xff;
        *plVar11 = (longlong)&PTR_FUN_143f3edd8;
        local_68 = 0;
        *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
        *plVar11 = (longlong)&PTR_FUN_14506c7f0;
        *(undefined1 *)(plVar11 + 6) = 0;
        plVar11[7] = 0;
        `USkinnedMeshComponent::ShowMaterialSection'::`23'::EURCMacro_FUpdateHiddenSectionCommand::
        EURCMacro_FUpdateHiddenSectionCommand
                  (plVar11 + 2,*(undefined8 *)(param_1 + 0x888),plVar12,param_2);
        lVar7 = plVar11[7];
        piVar1 = (int *)(lVar7 + 0x48);
        if (lVar7 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_14048a640(plVar11,0,0xff,1);
        if (lVar7 != 0) {
          LOCK();
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            FGraphEvent::Recycle(lVar7);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1423bdfd0 FUN_1423bdfd0 body=931 status=ok
// SIG undefined FUN_1423bdfd0(void)

void FUN_1423bdfd0(longlong param_1,int param_2,byte param_3,int param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  size_t _Size;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  int local_30;
  
  if (*(longlong *)(param_1 + 0x718) == 0) {
    return;
  }
  FUN_1423b3480();
  if (param_4 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x860) <= param_4) {
    return;
  }
  lVar8 = *(longlong *)(param_1 + 0x718);
  lVar12 = 0;
  if (param_4 < *(int *)(lVar8 + 0xd0)) {
    lVar12 = (longlong)param_4 * 0x30 + *(longlong *)(lVar8 + 200);
  }
  iVar15 = *(int *)(lVar8 + 0xa8);
  plVar13 = (longlong *)((longlong)param_4 * 0x38 + *(longlong *)(param_1 + 0x858));
  if ((int)plVar13[1] != iVar15) {
    iVar10 = *(int *)((longlong)plVar13 + 0xc);
    iVar14 = 0;
    *(undefined4 *)(plVar13 + 1) = 0;
    if (iVar10 != iVar15) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar13);
      iVar10 = *(int *)((longlong)plVar13 + 0xc);
      iVar14 = (int)plVar13[1];
    }
    iVar15 = *(int *)(*(longlong *)(param_1 + 0x718) + 0xa8);
    iVar4 = iVar14 + iVar15;
    *(int *)(plVar13 + 1) = iVar4;
    if (iVar10 < iVar4) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar13);
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar14 + *plVar13),0,(longlong)iVar15);
  }
  plVar11 = (longlong *)0x0;
  iVar15 = 0;
  if (param_4 < 1) goto LAB_1423be0e8;
  if (param_2 < 0) goto LAB_1423be0ff;
  if (param_2 < *(int *)(lVar12 + 0x10)) {
    iVar10 = *(int *)(*(longlong *)(lVar12 + 8) + (longlong)param_2 * 4);
    if (-1 < iVar10) {
      param_2 = (int)plVar13[1];
      if (iVar10 < (int)plVar13[1]) {
        param_2 = iVar10;
      }
      goto LAB_1423be0e8;
    }
  }
  else {
LAB_1423be0e8:
    iVar15 = param_2;
    if (iVar15 < 0) goto LAB_1423be0ff;
  }
  if (iVar15 < (int)plVar13[1]) {
    *(byte *)((longlong)iVar15 + *plVar13) = param_3 ^ 1;
  }
LAB_1423be0ff:
  if (*(longlong *)(param_1 + 0x888) != 0) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
      local_38 = (int)plVar13[1];
      _Size = (size_t)local_38;
      local_48 = *(undefined8 *)(param_1 + 0x888);
      _Src = (void *)*plVar13;
      local_40 = (void *)0x0;
      if (local_38 == 0) {
        local_34 = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_40,local_38,0);
        _guard_xfg_dispatch_icall_nop(local_40,_Src,_Size);
      }
      local_30 = param_4;
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_60);
      FSkeletalMeshObject::SetHiddenMaterials(local_48,local_30,&local_40);
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_60._0_4_);
      if (local_40 != (void *)0x0) {
        FMemory::Free();
      }
    }
    else {
      pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar7 = TlsGetValue(*pDVar6);
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)operator_new(0x18);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = 0;
          plVar7[1] = 0;
          *(undefined4 *)(plVar7 + 2) = 0;
          plVar11 = plVar7;
        }
        TlsSetValue(*pDVar6,plVar11);
        plVar7 = plVar11;
      }
      plVar11 = (longlong *)plVar7[1];
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)*plVar7;
        if (plVar11 == (longlong *)0x0) {
          lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
          plVar7[1] = lVar8;
          if (lVar8 == 0) {
            puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar7[1] = (longlong)puVar9;
            lVar8 = 0x1f;
            do {
              puVar2 = puVar9 + 0x20;
              *puVar9 = puVar2;
              lVar8 = lVar8 + -1;
              puVar9 = puVar2;
            } while (lVar8 != 0);
            *puVar2 = 0;
          }
          plVar11 = (longlong *)plVar7[1];
          iVar15 = 0x20;
          *(undefined4 *)(plVar7 + 2) = 0x20;
        }
        else {
          iVar15 = 0x20;
          plVar7[1] = (longlong)plVar11;
          *(undefined4 *)(plVar7 + 2) = 0x20;
          *plVar7 = 0;
        }
      }
      else {
        iVar15 = (int)plVar7[2];
      }
      plVar7[1] = *plVar11;
      local_58 = 0;
      *(int *)(plVar7 + 2) = iVar15 + -1;
      *(undefined4 *)(plVar11 + 1) = 0xff;
      *plVar11 = (longlong)&PTR_FUN_143f3edd8;
      local_50 = 0;
      *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
      *plVar11 = (longlong)&PTR_FUN_14506c7f0;
      *(undefined1 *)(plVar11 + 6) = 0;
      plVar11[7] = 0;
      `USkinnedMeshComponent::ShowMaterialSection'::`23'::EURCMacro_FUpdateHiddenSectionCommand::
      EURCMacro_FUpdateHiddenSectionCommand
                (plVar11 + 2,*(undefined8 *)(param_1 + 0x888),plVar13,param_4);
      lVar8 = plVar11[7];
      piVar1 = (int *)(lVar8 + 0x48);
      if (lVar8 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_14048a640(plVar11,0,0xff,1);
      if (lVar8 != 0) {
        LOCK();
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          FGraphEvent::Recycle(lVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 1423be380 SkelMeshCompOnParticleSystemFinished body=41 status=ok
// SIG undefined SkelMeshCompOnParticleSystemFinished(void)

void USkeletalMeshComponent::SkelMeshCompOnParticleSystemFinished
               (undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x418))(param_2,&DAT_14653218c);
  FUN_142359580(param_2);
  return;
}


