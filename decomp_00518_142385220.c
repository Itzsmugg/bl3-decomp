// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142385220 FUN_142385220 body=27 status=ok
// SIG undefined FUN_142385220(void)

void FUN_142385220(undefined8 param_1)

{
  FUN_142330a70();
  FUN_14238f550(param_1);
  return;
}



// FUNCTION 142385240 FUN_142385240 body=361 status=ok
// SIG undefined FUN_142385240(void)

void FUN_142385240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6,byte *param_7)

{
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  byte local_98 [4];
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_a0 = param_5;
  local_8c = *(undefined4 *)(param_7 + 0xc);
  local_88 = *(undefined4 *)(param_7 + 0x10);
  local_9c = param_6;
  local_84 = *(undefined8 *)(param_7 + 0x14);
  local_98[0] = local_98[0] ^ (*param_7 ^ local_98[0]) & 3;
  local_78 = *(undefined8 *)(param_7 + 0x20);
  local_94 = *(undefined4 *)(param_7 + 4);
  local_6c = *(undefined8 *)(param_7 + 0x2c);
  local_90 = local_90 ^ (*(uint *)(param_7 + 8) ^ local_90) & 1;
  local_7c = *(undefined4 *)(param_7 + 0x1c);
  local_70 = *(undefined4 *)(param_7 + 0x28);
  local_64 = *(undefined4 *)(param_7 + 0x34);
  local_58 = *(undefined4 *)(param_7 + 0x40);
  local_4c = *(undefined4 *)(param_7 + 0x4c);
  local_40 = *(undefined4 *)(param_7 + 0x58);
  local_38 = *(undefined4 *)(param_7 + 0x60);
  local_34 = *(undefined4 *)(param_7 + 100);
  local_30 = *(undefined4 *)(param_7 + 0x68);
  local_2c = *(undefined4 *)(param_7 + 0x6c);
  local_28 = *(undefined4 *)(param_7 + 0x70);
  local_60 = *(undefined8 *)(param_7 + 0x38);
  local_24 = *(undefined4 *)(param_7 + 0x74);
  local_54 = *(undefined8 *)(param_7 + 0x44);
  local_20 = *(undefined4 *)(param_7 + 0x78);
  local_18 = *(undefined8 *)(param_7 + 0x80);
  local_48 = *(undefined8 *)(param_7 + 0x50);
  local_10 = *(undefined8 *)(param_7 + 0x88);
  local_3c = *(undefined4 *)(param_7 + 0x5c);
  local_b8 = param_2;
  local_b0 = param_3;
  local_a8 = param_4;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1,&local_b8);
  return;
}



// FUNCTION 1423853f0 CalcBounds body=83 status=ok
// SIG undefined CalcBounds(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * USceneComponent::CalcBounds(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined4 *)(param_3 + 0x10);
  uVar2 = *(undefined4 *)(param_3 + 0x14);
  uVar3 = *(undefined4 *)(param_3 + 0x18);
  param_2[6] = 0;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  uVar4 = _DAT_1468b5d90;
  param_2[2] = uVar3;
  uVar1 = DAT_1468b5d98;
  *(undefined8 *)(param_2 + 3) = uVar4;
  param_2[5] = uVar1;
  return param_2;
}



// FUNCTION 142385450 FUN_142385450 body=1535 status=ok
// SIG undefined FUN_142385450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142385450(longlong param_1,float *param_2,float *param_3,longlong *param_4,
                     undefined8 param_5)

{
  undefined1 auVar1 [16];
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
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
  undefined1 auStack_178 [48];
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
  undefined1 local_d8 [16];
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if (param_4 == (longlong *)0x0) {
    uVar6 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = uVar6;
    uVar6 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_2 + 6) = uVar6;
    uVar6 = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_2 + 10) = uVar6;
  }
  else {
    uVar7 = (**(code **)(*param_4 + 0x420))(param_4,&local_f8,param_5,0);
    fVar26 = fRam0000000146af09c8;
    fVar25 = fRam0000000146af09c4;
    fVar16 = _DAT_146af09c0;
    fVar45 = fRam0000000146af0838;
    fVar44 = fRam0000000146af0834;
    fVar43 = _DAT_146af0830;
    auVar1 = *(undefined1 (*) [16])(param_3 + 8);
    fVar39 = auVar1._0_4_;
    fVar40 = auVar1._4_4_;
    fVar41 = auVar1._8_4_;
    fVar3 = local_d8._0_4_;
    fVar4 = local_d8._4_4_;
    fVar5 = local_d8._8_4_;
    fVar42 = local_d8._12_4_;
    auVar9 = minps(auVar1,local_d8);
    auVar10._4_4_ = -(uint)(auVar9._4_4_ < fRam0000000146af09c4);
    auVar10._0_4_ = -(uint)(auVar9._0_4_ < _DAT_146af09c0);
    auVar10._8_4_ = -(uint)(auVar9._8_4_ < fRam0000000146af09c8);
    auVar10._12_4_ = -(uint)(auVar9._12_4_ < fRam0000000146af09cc);
    iVar8 = movmskps(uVar7,auVar10);
    if (iVar8 == 0) {
      fVar43 = *param_3;
      fVar44 = param_3[1];
      fVar45 = param_3[2];
      fVar16 = param_3[3];
      fVar21 = param_3[4] * fVar3;
      fVar23 = param_3[5] * fVar4;
      fVar11 = param_3[6] * fVar5;
      fVar13 = param_3[7] * fVar42;
      fVar25 = local_f8 * fVar16 * _DAT_146af08d0 + fStack_ec * fVar43 +
               fStack_f4 * fVar45 * _DAT_146af08c0 + fStack_f0 * fVar44 * _DAT_146af08b0;
      fVar26 = local_f8 * fVar45 * fRam0000000146af08d4 + fStack_ec * fVar44 +
               fStack_f4 * fVar16 * fRam0000000146af08c4 + fStack_f0 * fVar43 * fRam0000000146af08b4
      ;
      fVar17 = local_f8 * fVar44 * fRam0000000146af08d8 + fStack_ec * fVar45 +
               fStack_f4 * fVar43 * fRam0000000146af08c8 + fStack_f0 * fVar16 * fRam0000000146af08b8
      ;
      fVar43 = local_f8 * fVar43 * fRam0000000146af08dc + fStack_ec * fVar16 +
               fStack_f4 * fVar44 * fRam0000000146af08cc + fStack_f0 * fVar45 * fRam0000000146af08bc
      ;
      fVar44 = fVar11 * fStack_f4 - fVar23 * fStack_f0;
      fVar45 = fVar21 * fStack_f0 - fVar11 * local_f8;
      fVar16 = fVar23 * local_f8 - fVar21 * fStack_f4;
      fVar18 = fVar13 * fStack_ec - fVar13 * fStack_ec;
      fVar44 = fVar44 + fVar44;
      fVar45 = fVar45 + fVar45;
      fVar16 = fVar16 + fVar16;
      fVar18 = fVar18 + fVar18;
      local_118 = (fVar16 * fStack_f4 - fVar45 * fStack_f0) + fStack_ec * fVar44 + fVar21 + local_e8
      ;
      fStack_114 = (fVar44 * fStack_f0 - fVar16 * local_f8) + fStack_ec * fVar45 + fVar23 +
                   fStack_e4;
      fStack_110 = (fVar45 * local_f8 - fVar44 * fStack_f4) + fStack_ec * fVar16 + fVar11 +
                   fStack_e0;
      fStack_dc = (fVar18 * fStack_ec - fVar18 * fStack_ec) + fStack_ec * fVar18 + fVar13 +
                  fStack_dc;
    }
    else {
      fVar17 = fStack_f4 + fStack_f4;
      fVar21 = fStack_f0 + fStack_f0;
      fVar23 = (local_f8 + local_f8) * local_f8;
      fVar18 = (local_f8 + local_f8) * fStack_ec;
      fVar36 = (fVar21 * fStack_ec + fVar17 * local_f8) * fVar3;
      fVar37 = (fVar18 + fVar21 * fStack_f4) * fVar4;
      fVar38 = (fVar17 * fStack_ec + fVar21 * local_f8) * fVar5;
      fVar27 = fVar4 * (fVar17 * local_f8 - fVar21 * fStack_ec);
      fVar29 = fVar5 * (fVar21 * fStack_f4 - fVar18);
      fVar31 = fVar3 * (fVar21 * local_f8 - fVar17 * fStack_ec);
      fVar11 = (float)((uint)((_DAT_146af0830 - (fVar21 * fStack_f0 + fVar17 * fStack_f4)) * fVar3)
                      & _DAT_146af0840);
      fVar13 = (float)((uint)((fRam0000000146af0834 - (fVar21 * fStack_f0 + fVar23)) * fVar4) &
                      uRam0000000146af0844);
      fVar14 = (float)((uint)((fRam0000000146af0838 - (fVar17 * fStack_f4 + fVar23)) * fVar5) &
                      uRam0000000146af0848);
      fVar15 = (float)((uint)((fRam0000000146af083c - (fVar23 + fVar23)) * fVar42) &
                      uRam0000000146af084c);
      fVar17 = *param_3;
      fVar18 = param_3[1];
      fVar21 = param_3[2];
      fVar23 = param_3[3];
      fVar19 = fVar18 + fVar18;
      fVar22 = fVar21 + fVar21;
      fVar24 = fVar17 * (fVar17 + fVar17);
      fVar20 = (fVar17 + fVar17) * fVar23;
      fVar33 = (fVar22 * fVar23 + fVar19 * fVar17) * fVar39;
      fVar34 = (fVar20 + fVar22 * fVar18) * fVar40;
      fVar35 = (fVar19 * fVar23 + fVar22 * fVar17) * fVar41;
      fVar28 = fVar40 * (fVar19 * fVar17 - fVar22 * fVar23);
      fVar30 = fVar41 * (fVar22 * fVar18 - fVar20);
      fVar32 = fVar39 * (fVar22 * fVar17 - fVar19 * fVar23);
      fVar23 = (float)((uint)((_DAT_146af0830 - (fVar21 * fVar22 + fVar18 * fVar19)) * fVar39) &
                      _DAT_146af0840);
      fVar20 = (float)((uint)((fRam0000000146af0834 - (fVar21 * fVar22 + fVar24)) * fVar40) &
                      uRam0000000146af0844);
      fVar19 = (float)((uint)((fRam0000000146af0838 - (fVar18 * fVar19 + fVar24)) * fVar41) &
                      uRam0000000146af0848);
      fVar22 = (float)((uint)((fRam0000000146af083c - (fVar24 + fVar24)) * auVar1._12_4_) &
                      uRam0000000146af084c);
      fVar17 = param_3[4];
      fVar18 = param_3[5];
      fVar21 = param_3[6];
      local_148 = fVar33 * fVar27 + fVar23 * fVar11 + fVar32 * fVar38 + fVar22 * local_e8;
      fStack_144 = fVar33 * fVar13 + fVar23 * fVar36 + fVar32 * fVar29 + fVar22 * fStack_e4;
      fStack_140 = fVar33 * fVar37 + fVar23 * fVar31 + fVar32 * fVar14 + fVar22 * fStack_e0;
      fStack_13c = fVar33 * fVar15 + fVar23 * fVar15 + fVar32 * fVar15 +
                   fVar22 * fRam0000000146af083c;
      local_138 = fVar20 * fVar27 + fVar28 * fVar11 + fVar34 * fVar38 + fVar22 * local_e8;
      fStack_134 = fVar20 * fVar13 + fVar28 * fVar36 + fVar34 * fVar29 + fVar22 * fStack_e4;
      fStack_130 = fVar20 * fVar37 + fVar28 * fVar31 + fVar34 * fVar14 + fVar22 * fStack_e0;
      fStack_12c = fVar20 * fVar15 + fVar28 * fVar15 + fVar34 * fVar15 +
                   fVar22 * fRam0000000146af083c;
      local_128 = fVar30 * fVar27 + fVar35 * fVar11 + fVar19 * fVar38 + fVar22 * local_e8;
      fStack_124 = fVar30 * fVar13 + fVar35 * fVar36 + fVar19 * fVar29 + fVar22 * fStack_e4;
      fStack_120 = fVar30 * fVar37 + fVar35 * fVar31 + fVar19 * fVar14 + fVar22 * fStack_e0;
      fStack_11c = fVar30 * fVar15 + fVar35 * fVar15 + fVar19 * fVar15 +
                   fVar22 * fRam0000000146af083c;
      local_118 = fVar18 * fVar27 + fVar17 * fVar11 + fVar21 * fVar38 +
                  fRam0000000146af083c * local_e8;
      fStack_114 = fVar18 * fVar13 + fVar17 * fVar36 + fVar21 * fVar29 +
                   fRam0000000146af083c * fStack_e4;
      fStack_110 = fVar18 * fVar37 + fVar17 * fVar31 + fVar21 * fVar14 +
                   fRam0000000146af083c * fStack_e0;
      fStack_10c = fVar18 * fVar15 + fVar17 * fVar15 + fVar21 * fVar15 +
                   fRam0000000146af083c * fRam0000000146af083c;
      FMatrix::RemoveScaling(&local_148);
      fVar43 = (float)(-(uint)(fVar16 <= fVar39 * fVar3) & (_DAT_146af09b0 ^ (uint)fVar43) ^
                      _DAT_146af09b0);
      fVar44 = (float)(-(uint)(fVar25 <= fVar40 * fVar4) & (uRam0000000146af09b4 ^ (uint)fVar44) ^
                      uRam0000000146af09b4);
      fVar45 = (float)(-(uint)(fVar26 <= fVar41 * fVar5) & (uRam0000000146af09b8 ^ (uint)fVar45) ^
                      uRam0000000146af09b8);
      local_148 = local_148 * fVar43;
      fStack_144 = fStack_144 * fVar43;
      fStack_140 = fStack_140 * fVar43;
      fStack_134 = fStack_134 * fVar44;
      fStack_130 = fStack_130 * fVar44;
      local_138 = local_138 * fVar44;
      fStack_124 = fStack_124 * fVar45;
      fStack_120 = fStack_120 * fVar45;
      local_128 = local_128 * fVar45;
      FQuat::FQuat(&local_108,&local_148);
      auVar12._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
      auVar12._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
      auVar12._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
      auVar12._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
      fVar25 = auVar12._4_4_ + auVar12._0_4_;
      fVar26 = auVar12._8_4_ + auVar12._4_4_;
      fVar17 = auVar12._12_4_ + auVar12._8_4_;
      fVar18 = auVar12._0_4_ + auVar12._12_4_;
      auVar9._4_4_ = fVar26;
      auVar9._0_4_ = fVar25;
      auVar9._8_4_ = fVar17;
      auVar9._12_4_ = fVar18;
      auVar9 = rsqrtps(auVar12,auVar9);
      fVar43 = auVar9._0_4_;
      fVar44 = auVar9._4_4_;
      fVar45 = auVar9._8_4_;
      fVar16 = auVar9._12_4_;
      fVar43 = (_DAT_146af09a0 - fVar43 * fVar43 * fVar25 * _DAT_146af09a0) * fVar43 + fVar43;
      fVar44 = (fRam0000000146af09a4 - fVar44 * fVar44 * fVar26 * fRam0000000146af09a4) * fVar44 +
               fVar44;
      fVar45 = (fRam0000000146af09a8 - fVar45 * fVar45 * fVar17 * fRam0000000146af09a8) * fVar45 +
               fVar45;
      fVar16 = (fRam0000000146af09ac - fVar16 * fVar16 * fVar18 * fRam0000000146af09ac) * fVar16 +
               fVar16;
      fStack_dc = 0.0;
      fVar25 = (float)(((uint)(((_DAT_146af09a0 - fVar43 * fVar43 * fVar25 * _DAT_146af09a0) *
                                fVar43 + fVar43) * local_108) ^ _DAT_146af0990) &
                       -(uint)(1e-08 <= fVar25) ^ _DAT_146af0990);
      fVar26 = (float)(((uint)(((fRam0000000146af09a4 -
                                fVar44 * fVar44 * fVar26 * fRam0000000146af09a4) * fVar44 + fVar44)
                              * fStack_104) ^ uRam0000000146af0994) & -(uint)(1e-08 <= fVar26) ^
                      uRam0000000146af0994);
      fVar17 = (float)(((uint)(((fRam0000000146af09a8 -
                                fVar45 * fVar45 * fVar17 * fRam0000000146af09a8) * fVar45 + fVar45)
                              * fStack_100) ^ uRam0000000146af0998) & -(uint)(1e-08 <= fVar17) ^
                      uRam0000000146af0998);
      fVar43 = (float)(((uint)(((fRam0000000146af09ac -
                                fVar16 * fVar16 * fVar18 * fRam0000000146af09ac) * fVar16 + fVar16)
                              * fStack_fc) ^ uRam0000000146af099c) & -(uint)(1e-08 <= fVar18) ^
                      uRam0000000146af099c);
    }
    fVar42 = auVar1._12_4_ * fVar42;
    fVar41 = fVar41 * fVar5;
    fVar40 = fVar40 * fVar4;
    fVar39 = fVar39 * fVar3;
    bVar2 = *(byte *)(param_1 + 0x24c);
    if ((bVar2 & 4) != 0) {
      local_118 = param_3[4];
      fStack_114 = param_3[5];
      fStack_110 = param_3[6];
      fStack_dc = param_3[7];
    }
    if ((bVar2 & 8) != 0) {
      fVar25 = *param_3;
      fVar26 = param_3[1];
      fVar17 = param_3[2];
      fVar43 = param_3[3];
    }
    if ((bVar2 & 0x10) != 0) {
      fVar39 = param_3[8];
      fVar40 = param_3[9];
      fVar41 = param_3[10];
      fVar42 = param_3[0xb];
    }
    *param_2 = fVar25;
    param_2[1] = fVar26;
    param_2[2] = fVar17;
    param_2[3] = fVar43;
    param_2[4] = local_118;
    param_2[5] = fStack_114;
    param_2[6] = fStack_110;
    param_2[7] = fStack_dc;
    param_2[8] = fVar39;
    param_2[9] = fVar40;
    param_2[10] = fVar41;
    param_2[0xb] = fVar42;
  }
  return param_2;
}



// FUNCTION 142385a60 FUN_142385a60 body=64 status=ok
// SIG undefined FUN_142385a60(void)

bool FUN_142385a60(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x303) != '\x02') {
    return *(char *)(param_1 + 0x303) == '\x01';
  }
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x598))();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}



// FUNCTION 142385aa0 CanEditSimulatePhysics body=24 status=ok
// SIG undefined CanEditSimulatePhysics(void)

bool UPrimitiveComponent::CanEditSimulatePhysics(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6b8))();
  return lVar1 != 0;
}



// FUNCTION 142385ac0 FUN_142385ac0 body=156 status=ok
// SIG undefined FUN_142385ac0(void)

undefined8 FUN_142385ac0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char extraout_AL;
  char cVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (((lVar1 != 0) && (lVar5 = AActor::GetParentComponent(lVar1), lVar5 != 0)) &&
     (FUN_142385ac0(lVar5), extraout_AL == '\0')) {
    return 0;
  }
  if (((*(longlong *)(param_1 + 0x120) == 0) && (lVar5 = FUN_1423407b0(), lVar5 == 0)) ||
     (cVar4 = UWorld::IsGameWorld(), cVar4 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((lVar1 == 0) || ((*(byte *)(lVar1 + 0x80) & 1) == 0)) ||
     ((*(byte *)(lVar1 + 0x3f0) & 1) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((bVar2) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142385b60 FUN_142385b60 body=367 status=ok
// SIG undefined FUN_142385b60(void)

void FUN_142385b60(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [40];
  
  lVar5 = param_1[0x24];
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0();
    if (lVar5 == 0) goto LAB_142385bde;
  }
  if (*(longlong *)(lVar5 + 0x1b8) != 0) {
    cVar4 = (**(code **)(*param_1 + 0x460))(param_1);
    if (cVar4 != '\0') {
      FUN_14254eb00(lVar5);
      if (((char)param_1[0x65] == '\0') ||
         (plVar3 = (longlong *)param_1[0x70], plVar3 == (longlong *)0x0)) {
        (**(code **)(*param_1 + 0x550))(param_1,*(undefined8 *)(lVar5 + 0x1b8));
      }
      else {
        (**(code **)(*plVar3 + 0xd0))(plVar3,param_1);
      }
    }
  }
LAB_142385bde:
  if ((char)param_1[99] != '\0') {
    FName::FName(local_res8,"Blueprint",1);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,
                       L"CaptureScene: Scene capture with bCaptureEveryFrame enabled was told to update - major inefficiency."
                       ,L"SceneCaptureComponent",L"CaptureScene");
    uVar7 = FUN_14161fb50(local_30,local_res8);
    FMessageLog::Warning(uVar7,local_58,uVar6);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_30);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142385cd0 FUN_142385cd0 body=332 status=ok
// SIG undefined FUN_142385cd0(void)

void FUN_142385cd0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [40];
  
  lVar5 = param_1[0x24];
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0();
    if (lVar5 == 0) goto LAB_142385d2b;
  }
  if (*(longlong *)(lVar5 + 0x1b8) != 0) {
    cVar4 = (**(code **)(*param_1 + 0x460))(param_1);
    if (cVar4 != '\0') {
      FUN_14254eb00(lVar5);
      (**(code **)(*param_1 + 0x550))(param_1,*(undefined8 *)(lVar5 + 0x1b8));
    }
  }
LAB_142385d2b:
  if ((char)param_1[99] != '\0') {
    FName::FName(local_res8,"Blueprint",1);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,
                       L"CaptureScene: Scene capture with bCaptureEveryFrame enabled was told to update - major inefficiency."
                       ,L"SceneCaptureComponent",L"CaptureScene");
    uVar7 = FUN_14161fb50(local_30,local_res8);
    FMessageLog::Warning(uVar7,local_58,uVar6);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_30);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142385e20 FUN_142385e20 body=367 status=ok
// SIG undefined FUN_142385e20(void)

void FUN_142385e20(longlong *param_1)

{
  char cVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 *local_28;
  undefined8 *local_20;
  
  lVar3 = param_1[0x24];
  if ((lVar3 == 0) && (lVar3 = FUN_1423407b0(), lVar3 == 0)) {
    return;
  }
  if ((*(longlong *)(lVar3 + 0x1b8) != 0) &&
     (cVar1 = (**(code **)(*param_1 + 0x460))(param_1), cVar1 != '\0')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146af0a50) &&
       (_Init_thread_header(&DAT_146af0a50), DAT_146af0a50 == -1)) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146af0a28);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146af0a28,4000);
      atexit((_func_5014 *)&LAB_143ea9bf0);
      _Init_thread_footer(&DAT_146af0a50);
    }
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0a28);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0a28);
    }
    FWeakObjectPtr::operator=(&local_res18,param_1);
    FWeakObjectPtr::operator=(&local_res10,lVar3);
    local_res20 = local_res18;
    local_res8 = local_res10;
    lVar3 = TMultiMap<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>_>
            ::FindPair(&DAT_146531da0,&local_res8,&local_res20);
    if (lVar3 == 0) {
      local_28 = &local_res10;
      local_20 = &local_res18;
      FUN_14237c4d0(&DAT_146531da0,&local_res8,&local_28,0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af0a28);
  }
  return;
}



// FUNCTION 142385f90 FUN_142385f90 body=367 status=ok
// SIG undefined FUN_142385f90(void)

void FUN_142385f90(longlong *param_1)

{
  char cVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 *local_28;
  undefined8 *local_20;
  
  lVar3 = param_1[0x24];
  if ((lVar3 == 0) && (lVar3 = FUN_1423407b0(), lVar3 == 0)) {
    return;
  }
  if ((*(longlong *)(lVar3 + 0x1b8) != 0) &&
     (cVar1 = (**(code **)(*param_1 + 0x460))(param_1), cVar1 != '\0')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146af0a80) &&
       (_Init_thread_header(&DAT_146af0a80), DAT_146af0a80 == -1)) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146af0a58);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146af0a58,4000);
      atexit((_func_5014 *)&LAB_143ea9c00);
      _Init_thread_footer(&DAT_146af0a80);
    }
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0a58);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0a58);
    }
    FWeakObjectPtr::operator=(&local_res18,param_1);
    FWeakObjectPtr::operator=(&local_res10,lVar3);
    local_res20 = local_res18;
    local_res8 = local_res10;
    lVar3 = TMultiMap<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>_>
            ::FindPair(&DAT_146531da0,&local_res8,&local_res20);
    if (lVar3 == 0) {
      local_28 = &local_res10;
      local_20 = &local_res18;
      FUN_14237c4d0(&DAT_146531da0,&local_res8,&local_28,0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af0a58);
  }
  return;
}



// FUNCTION 142386100 FUN_142386100 body=707 status=ok
// SIG undefined FUN_142386100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142386100(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  float local_e0;
  undefined1 local_c8 [12];
  undefined4 local_bc;
  
  if (param_1[0x2f] == 0) {
    return 0;
  }
  lVar5 = param_1[0x24];
  if ((lVar5 == 0) && (lVar5 = FUN_1423407b0(), lVar5 == 0)) {
    return 0;
  }
  lVar5 = UWorld::GetWorldSettings(lVar5);
  if ((*(byte *)(lVar5 + 0x460) & 1) == 0) {
    return 1;
  }
  lVar2 = param_1[0x2f];
  plVar3 = *(longlong **)(lVar2 + 0x118);
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  iVar1 = *(int *)((longlong)plVar3 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar9 = iVar1 >> 0x1f & 0xffff;
    uVar4 = iVar1 + uVar9;
    lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
  }
  else {
    lVar8 = 0;
  }
  if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) != 0) {
    return 0;
  }
  lVar8 = plVar3[0x2d];
  if (lVar8 == 0) {
    local_e0 = DAT_1468b5d98;
    uVar7 = _DAT_1468b5d90;
  }
  else {
    local_e0 = *(float *)(lVar8 + 0x228);
    uVar7 = *(undefined8 *)(lVar8 + 0x220);
  }
  if (*(float *)(lVar5 + 0x470) <= local_e0) {
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xb8) & 1) != 0)) {
      fVar10 = *(float *)(lVar2 + 0x1d0) - *(float *)(lVar2 + 0x1dc);
      if (((fVar10 < -1048576.0) ||
          (((1048576.0 < *(float *)(lVar2 + 0x1d0) + *(float *)(lVar2 + 0x1dc) ||
            (*(float *)(lVar2 + 0x1d4) - *(float *)(lVar2 + 0x1e0) < -1048576.0)) ||
           (1048576.0 < *(float *)(lVar2 + 0x1d4) + *(float *)(lVar2 + 0x1e0))))) ||
         ((*(float *)(lVar2 + 0x1d8) - *(float *)(lVar2 + 0x1e4) < -1048576.0 ||
          (1048576.0 < *(float *)(lVar2 + 0x1d8) + *(float *)(lVar2 + 0x1e4))))) {
        (**(code **)(*plVar3 + 0x558))(plVar3,0xc9800000,lVar2,fVar10,uVar7);
        FUN_14223c460(plVar3);
        _guard_xfg_dispatch_icall_nop(local_c8,0,0x90);
        local_bc = 0x3f800000;
        (**(code **)(*param_1 + 0x530))(param_1,local_c8);
        return 0;
      }
    }
    return 1;
  }
  if (*(longlong *)(lVar5 + 0x478) != 0) {
    lVar6 = UDamageType::GetPrivateStaticClass();
    lVar2 = *(longlong *)(lVar5 + 0x478);
    for (lVar8 = lVar2; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar6) {
        if (lVar2 != 0) {
          if (lVar2 == 0) goto LAB_1423862c5;
          lVar8 = UDamageType::GetPrivateStaticClass();
          lVar5 = *(longlong *)(lVar5 + 0x478);
          lVar2 = lVar5;
          goto joined_r0x0001423862b5;
        }
        break;
      }
    }
  }
  uVar7 = GetDefault<UDamageType>();
  goto LAB_142386263;
joined_r0x0001423862b5:
  if (lVar2 == 0) goto LAB_1423862c5;
  if (lVar2 == lVar8) goto LAB_1423862c7;
  lVar2 = *(longlong *)(lVar2 + 0x30);
  goto joined_r0x0001423862b5;
LAB_1423862c5:
  lVar5 = 0;
LAB_1423862c7:
  uVar7 = UClass::GetDefaultObject<UDamageType>(lVar5);
LAB_142386263:
  (**(code **)(*plVar3 + 0x550))(plVar3,uVar7);
  return 0;
}



// FUNCTION 1423863d0 FUN_1423863d0 body=495 status=ok
// SIG undefined FUN_1423863d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423863d0(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8 [160];
  undefined1 local_228 [480];
  undefined1 *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  if (0 < *(int *)(param_1 + 0x3a8)) {
    lVar4 = *(longlong *)(param_1 + 0x3a0);
    uVar6 = (ulonglong)*(int *)(param_1 + 0x3a8);
    lVar5 = uVar6 * 0xa0 + lVar4;
    if (lVar4 != lVar5) {
      do {
        *(undefined4 *)(lVar4 + 0x9c) = 1;
        lVar2 = FWeakObjectPtr::Get(lVar4 + 0x7c);
        if (lVar2 != 0) {
          FUN_14237ded0(local_2c8,param_1,*(undefined4 *)(lVar4 + 0x68));
          iVar1 = FUN_14237ca10(lVar2 + 0x3a0,local_2c8);
          if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x3a8))) {
            *(undefined4 *)((longlong)iVar1 * 0xa0 + 0x9c + *(longlong *)(lVar2 + 0x3a0)) = 1;
          }
        }
        lVar4 = lVar4 + 0xa0;
      } while (lVar4 != lVar5);
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x3a8);
    }
    _Src = *(void **)(param_1 + 0x3a0);
    iVar1 = (int)uVar6;
    local_48 = (undefined1 *)0x0;
    local_40 = iVar1;
    if (iVar1 == 0) {
      local_3c = 0;
    }
    else {
      FUN_142395fb0(local_228,uVar6 & 0xffffffff,0);
      puVar3 = local_228;
      if (local_48 != (undefined1 *)0x0) {
        puVar3 = local_48;
      }
      _guard_xfg_dispatch_icall_nop(puVar3,_Src,(longlong)iVar1 * 0xa0);
    }
    puVar3 = local_228;
    if (local_48 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    uVar6 = (ulonglong)puVar3 | (ulonglong)local_48;
    uVar7 = (longlong)local_40 * 0xa0 + uVar6;
    for (; uVar6 != uVar7; uVar6 = uVar6 + 0xa0) {
      FUN_142389e30(param_1,uVar6,param_2,param_3);
    }
    if (local_48 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1423865e0 ClearEntries body=28 status=ok
// SIG undefined ClearEntries(void)

void UMistLogHudWidget::ClearEntries(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x380) = 0;
  if (*(int *)(param_1 + 900) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x378,0);
    return;
  }
  return;
}



// FUNCTION 142386600 FUN_142386600 body=28 status=ok
// SIG undefined FUN_142386600(void)

void FUN_142386600(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x300) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x304)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x2f8,0);
    return;
  }
  return;
}



// FUNCTION 142386620 FUN_142386620 body=43 status=ok
// SIG undefined FUN_142386620(void)

void FUN_142386620(longlong param_1)

{
  while( true ) {
    if (DAT_146531d70 != 1) {
      return;
    }
    if ((*(byte *)(param_1 + 0x24c) & 2) == 0) break;
    *(byte *)(param_1 + 0x24c) = *(byte *)(param_1 + 0x24c) & 0xfd;
    param_1 = *(longlong *)(param_1 + 400);
    if (param_1 == 0) {
      return;
    }
  }
  return;
}



// FUNCTION 142386650 FUN_142386650 body=283 status=ok
// SIG undefined FUN_142386650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142386650(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (param_2 != (longlong *)0x0) {
    lVar4 = FUN_142a07000();
    iVar1 = *(int *)(lVar4 + 0x90);
    uVar5 = (longlong)iVar1;
    if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
       (uVar5 = *(ulonglong *)(param_2[2] + 0x88),
       *(longlong *)(uVar5 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
      uVar5 = uVar5 & 0xffffffffffffff00;
      bVar2 = false;
    }
    else {
      uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
      bVar2 = true;
    }
    if (bVar2) goto LAB_14238674f;
  }
  local_68 = 0;
  lVar4 = (**(code **)(*param_2 + 0x6d0))(param_2,0,1);
  uVar5 = 0;
  if (lVar4 != 0) {
    local_68 = 0;
    uVar6 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
    local_58 = (undefined8 *)0x0;
    local_50 = 1;
    TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
    ::ResizeGrow(&local_60,0);
    puVar7 = &local_60;
    if (local_58 != (undefined8 *)0x0) {
      puVar7 = local_58;
    }
    *puVar7 = uVar6;
    bVar3 = FUN_142684b10(lVar4,param_3,param_4,&local_60);
    if (local_58 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    return (ulonglong)bVar3;
  }
LAB_14238674f:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 142386770 FUN_142386770 body=582 status=ok
// SIG undefined FUN_142386770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_142386770(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 *local_130;
  undefined4 *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined1 local_b0 [32];
  undefined1 *local_90;
  int local_88;
  undefined4 local_84;
  undefined1 local_80 [16];
  undefined1 *local_70;
  int local_68;
  undefined4 local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_110 = param_5;
  local_88 = *(int *)(param_7 + 10);
  lVar5 = (longlong)local_88;
  local_b8 = *(undefined4 *)(param_7 + 4);
  puVar4 = (undefined8 *)param_7[9];
  local_118 = param_8;
  local_d8 = *param_7;
  local_d0 = param_7[1];
  local_c8 = *(undefined1 *)(param_7 + 2);
  local_c7 = *(undefined1 *)((longlong)param_7 + 0x11);
  local_c6 = *(undefined1 *)((longlong)param_7 + 0x12);
  local_c5 = *(undefined1 *)((longlong)param_7 + 0x13);
  local_c4 = *(undefined1 *)((longlong)param_7 + 0x14);
  local_c3 = *(undefined1 *)((longlong)param_7 + 0x15);
  local_c2 = *(undefined1 *)((longlong)param_7 + 0x16);
  local_c0 = *(undefined4 *)(param_7 + 3);
  local_bc = *(undefined1 *)((longlong)param_7 + 0x1c);
  local_b4 = *(undefined1 *)((longlong)param_7 + 0x24);
  local_b3 = *(undefined1 *)((longlong)param_7 + 0x25);
  local_90 = (undefined1 *)0x0;
  local_108 = param_4;
  if (local_88 == 0) {
    local_84 = 0;
  }
  else {
    TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeForCopy(local_b0,local_88,0);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = param_7 + 5;
    }
    puVar3 = local_b0;
    if (local_90 != (undefined1 *)0x0) {
      puVar3 = local_90;
    }
    _guard_xfg_dispatch_icall_nop(puVar3,puVar4,lVar5 << 2);
  }
  local_68 = *(int *)(param_7 + 0xe);
  lVar5 = (longlong)local_68;
  puVar4 = (undefined8 *)param_7[0xd];
  local_70 = (undefined1 *)0x0;
  if (local_68 == 0) {
    local_64 = 0;
  }
  else {
    TArray<unsigned_int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy(local_80,local_68,0);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = param_7 + 0xb;
    }
    puVar3 = local_80;
    if (local_70 != (undefined1 *)0x0) {
      puVar3 = local_70;
    }
    _guard_xfg_dispatch_icall_nop(puVar3,puVar4,lVar5 << 2);
  }
  FUN_142301610(&local_d8,param_1);
  *(undefined4 *)(param_2 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_2 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,0);
  }
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x4d0))(param_1);
  FUN_1426d3dd0(&local_100);
  local_100 = *puVar2;
  uStack_fc = puVar2[1];
  uStack_f8 = puVar2[2];
  uStack_f4 = puVar2[3];
  local_120 = local_118;
  local_128 = &local_100;
  local_130 = &local_d8;
  local_138 = param_6;
  local_140 = local_110;
  local_148 = local_108;
  local_f0 = puVar2[4];
  uStack_ec = puVar2[5];
  uStack_e8 = puVar2[6];
  uStack_e4 = puVar2[7];
  uVar1 = FUN_1426a3040(param_1 + 0x76,param_2,param_3,0);
  if (local_70 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  if (local_90 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1423869c0 FUN_1423869c0 body=186 status=ok
// SIG undefined FUN_1423869c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1423869c0(longlong *param_1,float *param_2,undefined8 param_3,undefined4 param_4)

{
  float fVar1;
  byte bVar2;
  char cVar3;
  float *pfVar4;
  float fVar5;
  undefined1 local_28 [32];
  
  fVar5 = DAT_1468b5d98;
  *(undefined8 *)param_2 = _DAT_1468b5d90;
  param_2[2] = fVar5;
  fVar5 = (float)(**(code **)(*param_1 + 0x3f8))();
  bVar2 = *(byte *)(param_1 + 0x39);
  param_2[2] = fVar5 + param_2[2];
  if ((bVar2 & 0x10) != 0) {
    cVar3 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x214);
    if (cVar3 != '\0') {
      pfVar4 = (float *)(**(code **)(*param_1 + 0x570))(param_1,local_28,param_3,param_4);
      fVar5 = pfVar4[1];
      *param_2 = *param_2 + *pfVar4;
      fVar1 = pfVar4[2];
      param_2[1] = fVar5 + param_2[1];
      param_2[2] = fVar1 + param_2[2];
    }
  }
  return param_2;
}



// FUNCTION 142386a80 FUN_142386a80 body=569 status=ok
// SIG undefined FUN_142386a80(void)

float * FUN_142386a80(longlong *param_1,float *param_2,longlong param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined8 local_98;
  float local_90;
  undefined1 local_88 [128];
  
  fVar4 = *(float *)((longlong)param_1 + 0x194);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x18c);
  local_98 = *(undefined8 *)(param_3 + 0x2c);
  param_2[2] = fVar4;
  local_90 = *(float *)(param_3 + 0x34);
  (**(code **)(*param_1 + 0x500))(local_98,&local_a8,&local_98);
  fVar4 = param_2[1] * local_a4 + *param_2 * local_a8 + param_2[2] * local_a0;
  if (fVar4 < 0.0) {
    fVar2 = -fVar4;
    fVar5 = local_a8 * fVar2 + *param_2;
    fVar6 = local_a4 * fVar2 + param_2[1];
    fVar7 = local_a0 * fVar2 + param_2[2];
    if ((*(byte *)(param_1 + 0x39) & 0x60) == 0) {
      fVar4 = *(float *)(param_1 + 0x3d);
    }
    else {
      fVar4 = -(fVar4 / SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7));
      if (0.0 <= fVar4) {
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
      }
      else {
        fVar4 = 0.0;
      }
      fVar4 = fVar4 * *(float *)(param_1 + 0x3d);
    }
    fVar4 = 1.0 - fVar4;
    if (0.0 <= fVar4) {
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
    }
    else {
      fVar4 = 0.0;
    }
    fVar3 = *(float *)((longlong)param_1 + 0x1e4);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    param_2[1] = fVar3 * local_a4 * fVar2 + fVar6 * fVar4;
    param_2[2] = fVar3 * local_a0 * fVar2 + fVar7 * fVar4;
    local_98 = CONCAT44((int)((ulonglong)*(undefined8 *)param_2 >> 0x20),
                        fVar3 * local_a8 * fVar2 + fVar5 * fVar4);
    *(undefined8 *)param_2 = local_98;
    local_90 = param_2[2];
    puVar1 = (undefined8 *)FUN_142391730(param_1,local_88,&local_98);
    fVar4 = *(float *)(puVar1 + 1);
    *(undefined8 *)param_2 = *puVar1;
    param_2[2] = fVar4;
  }
  return param_2;
}



// FUNCTION 142386cc0 FUN_142386cc0 body=371 status=ok
// SIG undefined FUN_142386cc0(void)

float * FUN_142386cc0(longlong param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x178);
  fVar9 = *(float *)(lVar1 + 0x220);
  fVar7 = *(float *)(lVar1 + 0x224);
  fVar5 = *(float *)(lVar1 + 0x228);
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x214);
  fVar9 = *(float *)(lVar1 + 0x220) - fVar9;
  fVar7 = *(float *)(lVar1 + 0x224) - fVar7;
  fVar5 = *(float *)(lVar1 + 0x228) - fVar5;
  fVar2 = fVar7 * fVar7 + fVar9 * fVar9 + fVar5 * fVar5;
  fVar6 = fVar5;
  fVar8 = fVar7;
  fVar3 = fVar9;
  if ((fVar2 != 1.0) &&
     (fVar6 = DAT_1468b5d98, fVar8 = DAT_1468b5d94, fVar3 = DAT_1468b5d90, 1e-08 <= fVar2)) {
    auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar3 = auVar4._0_4_;
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    fVar6 = fVar5 * fVar3;
    fVar8 = fVar7 * fVar3;
    fVar3 = fVar9 * fVar3;
  }
  fVar9 = *(float *)(param_1 + 0x210);
  *param_2 = fVar3 * fVar9;
  param_2[1] = fVar8 * fVar9;
  param_2[2] = fVar6 * fVar9;
  return param_2;
}



// FUNCTION 142386e40 FUN_142386e40 body=95 status=ok
// SIG undefined FUN_142386e40(void)

float FUN_142386e40(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_1423638d0();
  if (*(char *)(param_1 + 0x430) == '\x01') {
    return fVar1 * 10000.0;
  }
  if (*(char *)(param_1 + 0x430) == '\x02') {
    return fVar1 * 3183.0989;
  }
  return fVar1 * 16.0;
}



// FUNCTION 142386ea0 ComputeMoveDelta body=186 status=ok
// SIG undefined ComputeMoveDelta(void)

float * UProjectileMovementComponent::ComputeMoveDelta
                  (longlong *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_38;
  float local_34;
  float local_30;
  undefined8 local_28;
  float local_20;
  
  local_20 = param_3[2];
  local_28 = *(undefined8 *)param_3;
  (**(code **)(*param_1 + 0x528))(local_28,&local_38,&local_28);
  fVar3 = param_4 * 0.5;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  *param_2 = (local_38 - *param_3) * fVar3 + *param_3 * param_4;
  param_2[1] = (local_34 - fVar1) * fVar3 + fVar1 * param_4;
  param_2[2] = (local_30 - fVar2) * fVar3 + fVar2 * param_4;
  return param_2;
}



// FUNCTION 142386f60 FUN_142386f60 body=269 status=ok
// SIG undefined FUN_142386f60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142386f60(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 local_38 [16];
  undefined1 local_28 [32];
  
  if (((*(byte *)(param_1 + 0x1c8) & 1) != 0) &&
     (((0.01 < ABS(*param_3) || (0.01 < ABS(param_3[1]))) || (0.01 < ABS(param_3[2]))))) {
    pfVar10 = (float *)FRotator::Quaternion(param_1 + 0x228,local_38);
    fVar1 = *pfVar10;
    fVar2 = pfVar10[1];
    fVar3 = pfVar10[2];
    fVar4 = pfVar10[3];
    pfVar10 = (float *)FVector4::ToOrientationQuat(param_3,local_28);
    fVar5 = *pfVar10;
    fVar6 = pfVar10[1];
    fVar7 = pfVar10[2];
    fVar8 = pfVar10[3];
    fVar17 = fVar5 * fVar3 * fRam0000000146af08d4;
    fVar18 = fVar5 * fVar2 * fRam0000000146af08d8;
    fVar19 = fVar5 * fVar1 * fRam0000000146af08dc;
    fVar14 = fVar7 * fVar1 * fRam0000000146af08b4;
    fVar15 = fVar7 * fVar4 * fRam0000000146af08b8;
    fVar16 = fVar7 * fVar3 * fRam0000000146af08bc;
    fVar11 = fVar6 * fVar4 * fRam0000000146af08c4;
    fVar12 = fVar6 * fVar1 * fRam0000000146af08c8;
    fVar13 = fVar6 * fVar2 * fRam0000000146af08cc;
    *param_2 = fVar5 * fVar4 * _DAT_146af08d0 + fVar8 * fVar1 + fVar6 * fVar3 * _DAT_146af08c0 +
               fVar7 * fVar2 * _DAT_146af08b0;
    param_2[1] = fVar17 + fVar8 * fVar2 + fVar11 + fVar14;
    param_2[2] = fVar18 + fVar8 * fVar3 + fVar12 + fVar15;
    param_2[3] = fVar19 + fVar8 * fVar4 + fVar13 + fVar16;
    return param_2;
  }
  uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0x218);
  *(undefined8 *)param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0x210);
  *(undefined8 *)(param_2 + 2) = uVar9;
  return param_2;
}



// FUNCTION 142387070 FUN_142387070 body=108 status=ok
// SIG undefined FUN_142387070(void)

void FUN_142387070(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
  if (lVar1 != 0) {
    FUN_1426a3f70(lVar1,param_4,param_5,param_3);
    return;
  }
  return;
}



// FUNCTION 1423870e0 FUN_1423870e0 body=156 status=ok
// SIG undefined FUN_1423870e0(void)

undefined8 FUN_1423870e0(longlong *param_1,undefined8 param_2,float *param_3,float param_4)

{
  float local_48;
  float local_44;
  float local_40;
  undefined8 local_38;
  float local_30;
  float local_20;
  
  (**(code **)(*param_1 + 0x568))(param_1,&local_48);
  local_30 = local_40 * param_4 + param_3[2];
  local_38 = CONCAT44(local_44 * param_4 + param_3[1],local_48 * param_4 + *param_3);
  local_20 = local_30;
  FUN_142391730(param_1,param_2,&local_38);
  return param_2;
}



// FUNCTION 142387180 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142387230 FUN_142387230 body=139 status=ok
// SIG undefined FUN_142387230(void)

void FUN_142387230(longlong param_1)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  
  uVar1 = 0;
  pfVar2 = (float *)(param_1 + 0x204);
  do {
    pfVar3 = pfVar2;
    if ((uVar1 != 0) && (pfVar3 = (float *)(param_1 + 0x208), uVar1 != 1)) {
      pfVar3 = (float *)(param_1 + 0x20c);
    }
    if (ABS(*pfVar3) < 0.001) {
      pfVar3 = pfVar2;
      if ((uVar1 != 0) && (pfVar3 = (float *)(param_1 + 0x208), uVar1 != 1)) {
        pfVar3 = (float *)(param_1 + 0x20c);
      }
      if ((uint)*pfVar3 < 0x80000000) {
        fVar4 = 0.001;
      }
      else {
        fVar4 = -0.001;
      }
      pfVar3 = pfVar2;
      if ((uVar1 != 0) && (pfVar3 = (float *)(param_1 + 0x208), uVar1 != 1)) {
        pfVar3 = (float *)(param_1 + 0x20c);
      }
      *pfVar3 = fVar4;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  return;
}



// FUNCTION 1423872c0 ConvertAttachLocation body=67 status=ok
// SIG undefined ConvertAttachLocation(void)

void USceneComponent::ConvertAttachLocation
               (int param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  if (param_1 == 0) {
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    if (param_1 == 1) {
      *param_2 = 1;
      *param_3 = 1;
      *param_4 = 1;
      return;
    }
    if (param_1 == 2) {
      *param_2 = 2;
      *param_3 = 2;
      *param_4 = 1;
      return;
    }
    if (param_1 == 3) {
      *param_2 = 2;
      *param_3 = 2;
      *param_4 = 2;
      return;
    }
  }
  return;
}



// FUNCTION 142387310 FUN_142387310 body=337 status=ok
// SIG undefined FUN_142387310(void)

longlong * FUN_142387310(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int local_res8;
  int local_resc;
  
  if ((*(int *)(param_1 + 0x2a8) < 1) ||
     (lVar2 = *(longlong *)
               (*(longlong *)(param_1 + 0x2a0) + -8 + (longlong)*(int *)(param_1 + 0x2a8) * 8),
     lVar2 == 0)) {
    bVar3 = 1;
  }
  else {
    bVar3 = *(byte *)(lVar2 + 0x1b8) >> 2 & 1;
  }
  if ((((((*(byte *)(param_1 + 0x2ef) & 1) != 0) || (bVar3 == 0)) && (DAT_146531d68 != 0)) &&
      ((*(longlong *)(param_1 + 0x118) != 0 &&
       (*(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168) == param_1)))) && (DAT_146531d6c != 0)
     ) {
    FWeakObjectPtr::operator=(&local_res8);
    puVar4 = (undefined1 *)*param_3;
    puVar5 = puVar4 + (longlong)*(int *)(param_3 + 1) * 0xa0;
    for (; puVar4 != puVar5; puVar4 = puVar4 + 0xa0) {
      if ((local_res8 != *(int *)(puVar4 + 0x74)) || (local_resc != *(int *)(puVar4 + 0x78))) {
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar1);
        }
        puVar6 = (undefined1 *)((longlong)iVar1 * 0xa0 + *param_2);
        *puVar6 = *puVar4;
        FUN_140729f20(puVar6 + 8,puVar4 + 8);
        *(undefined4 *)(puVar6 + 0x98) = *(undefined4 *)(puVar4 + 0x98);
        *(undefined4 *)(puVar6 + 0x9c) = *(undefined4 *)(puVar4 + 0x9c);
      }
    }
    return param_2;
  }
  return (longlong *)0x0;
}



// FUNCTION 142387470 FUN_142387470 body=1000 status=ok
// SIG undefined FUN_142387470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_142387470(longlong *param_1,longlong *param_2,longlong *param_3,int param_4,undefined8 *param_5,
             undefined8 param_6)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  byte bVar12;
  undefined1 *puVar13;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined1 local_118 [16];
  longlong *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [72];
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar4 = (longlong *)0x0;
  plVar10 = (longlong *)0x0;
  local_f0 = param_5;
  local_e8 = param_6;
  uVar9 = (ulonglong)param_4;
  if (((int)param_1[0x55] < 1) ||
     (lVar11 = *(longlong *)(param_1[0x54] + -8 + (longlong)(int)param_1[0x55] * 8), lVar11 == 0)) {
    bVar12 = 1;
  }
  else {
    bVar12 = *(byte *)(lVar11 + 0x1b8) >> 2 & 1;
  }
  plVar6 = plVar4;
  if (((((*(byte *)((longlong)param_1 + 0x2ef) & 1) != 0) || (bVar12 == 0)) && (DAT_146531d68 != 0))
     && ((lVar11 = param_1[0x23], lVar11 != 0 &&
         (plVar6 = plVar10, *(longlong **)(lVar11 + 0x168) == param_1)))) {
    local_108 = param_3;
    if (DAT_146531d6c == 0) {
      if ((((int)param_3[1] == 0) &&
          (cVar3 = (**(code **)(*param_1 + 0x548))(param_1,1), cVar3 != '\0')) &&
         (plVar6 = param_2, plVar10 = plVar4, 0 < (int)param_1[0x75])) {
        do {
          lVar5 = FWeakObjectPtr::Get((longlong)(int)plVar4 * 0xa0 + param_1[0x74] + 0x7c);
          if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x118) == lVar11)) {
            iVar1 = (int)param_2[1];
            puVar13 = (undefined1 *)(param_1[0x74] + (longlong)plVar10);
            *(int *)(param_2 + 1) = iVar1 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::
              ResizeGrow(param_2,iVar1);
            }
            puVar7 = (undefined1 *)((longlong)iVar1 * 0xa0 + *param_2);
            *puVar7 = *puVar13;
            FUN_140729f20(puVar7 + 8,puVar13 + 8);
            *(undefined4 *)(puVar7 + 0x98) = *(undefined4 *)(puVar13 + 0x98);
            *(undefined4 *)(puVar7 + 0x9c) = *(undefined4 *)(puVar13 + 0x9c);
          }
          uVar8 = (int)plVar4 + 1;
          plVar4 = (longlong *)(ulonglong)uVar8;
          plVar10 = plVar10 + 0x14;
        } while ((int)uVar8 < (int)param_1[0x75]);
      }
    }
    else {
      local_f8 = 0;
      local_128 = (undefined1 *)0x0;
      FUN_1422ffb20(local_d8,0,local_118,0);
      plVar10 = local_108;
      if (param_4 < (int)local_108[1]) {
        lVar11 = uVar9 * 0xa0;
        do {
          puVar13 = (undefined1 *)(*plVar10 + lVar11);
          plVar4 = (longlong *)FWeakObjectPtr::Get(puVar13 + 0x7c);
          if ((plVar4 != (longlong *)0x0) &&
             (((*(byte *)((longlong)plVar4 + 0x2ef) & 1) != 0 || (bVar12 == 0)))) {
            if ((*(byte *)((longlong)plVar4 + 0x2ef) & 2) != 0) {
LAB_14238771e:
              if (local_70 != 0) {
                FMemory::Free();
              }
              if (local_90 != 0) {
                FMemory::Free();
              }
              return (longlong *)0x0;
            }
            lVar5 = FUN_142a07000();
            if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) goto LAB_14238771e;
            lVar5 = FUN_142a07000();
            if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) goto LAB_14238771e;
            local_128 = local_d8;
            local_108 = (longlong *)*local_f0;
            local_100 = *(undefined4 *)(local_f0 + 1);
            cVar3 = (**(code **)(*plVar4 + 0x868))(plVar4,param_1,&local_108,local_e8);
            if (cVar3 != '\0') {
              iVar1 = (int)param_2[1];
              *(int *)(param_2 + 1) = iVar1 + 1;
              if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::
                ResizeGrow(param_2,iVar1);
              }
              puVar7 = (undefined1 *)((longlong)iVar1 * 0xa0 + *param_2);
              *puVar7 = *puVar13;
              FUN_140729f20(puVar7 + 8,puVar13 + 8);
              *(undefined4 *)(puVar7 + 0x98) = *(undefined4 *)(puVar13 + 0x98);
              *(undefined4 *)(puVar7 + 0x9c) = *(undefined4 *)(puVar13 + 0x9c);
            }
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          lVar11 = lVar11 + 0xa0;
        } while ((int)uVar8 < (int)plVar10[1]);
      }
      if (local_70 != 0) {
        FMemory::Free();
      }
      plVar6 = param_2;
      if (local_90 != 0) {
        FMemory::Free();
      }
    }
  }
  return plVar6;
}



// FUNCTION 142387860 FUN_142387860 body=395 status=ok
// SIG undefined FUN_142387860(void)

void FUN_142387860(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)((longlong)param_2 + 0xc4);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  *(undefined1 *)((longlong)param_1 + 0xc9) = *(undefined1 *)((longlong)param_2 + 0xc9);
  *(undefined1 *)((longlong)param_1 + 0xca) = *(undefined1 *)((longlong)param_2 + 0xca);
  *(undefined1 *)((longlong)param_1 + 0xcb) = *(undefined1 *)((longlong)param_2 + 0xcb);
  *(undefined1 *)((longlong)param_1 + 0xcc) = *(undefined1 *)((longlong)param_2 + 0xcc);
  *(undefined1 *)((longlong)param_1 + 0xcd) = *(undefined1 *)((longlong)param_2 + 0xcd);
  *(undefined1 *)((longlong)param_1 + 0xce) = *(undefined1 *)((longlong)param_2 + 0xce);
  *(undefined1 *)((longlong)param_1 + 0xcf) = *(undefined1 *)((longlong)param_2 + 0xcf);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined1 *)((longlong)param_1 + 0xd1) = *(undefined1 *)((longlong)param_2 + 0xd1);
  *(undefined1 *)((longlong)param_1 + 0xd2) = *(undefined1 *)((longlong)param_2 + 0xd2);
  *(undefined1 *)((longlong)param_1 + 0xd3) = *(undefined1 *)((longlong)param_2 + 0xd3);
  *(undefined1 *)((longlong)param_1 + 0xd4) = *(undefined1 *)((longlong)param_2 + 0xd4);
  *(undefined1 *)((longlong)param_1 + 0xd5) = *(undefined1 *)((longlong)param_2 + 0xd5);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  return;
}



// FUNCTION 1423879f0 FUN_1423879f0 body=351 status=ok
// SIG undefined FUN_1423879f0(void)

undefined8 * FUN_1423879f0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *_Src;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar7 = *(int *)(param_1 + 0x380) + -1;
  if (-1 < iVar7) {
    lVar8 = (longlong)iVar7 * 8;
    lVar9 = lVar8;
    do {
      lVar1 = *(longlong *)(param_1 + 0x378);
      if (*(longlong *)(lVar8 + lVar1) == 0) {
LAB_142387a98:
        iVar5 = *(int *)(param_1 + 0x380);
        iVar3 = (iVar5 - iVar7) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar9 + lVar1),(void *)(lVar1 + (longlong)(iVar5 - iVar3) * 8),
                     (longlong)iVar3 << 3);
          iVar5 = *(int *)(param_1 + 0x380);
        }
        *(int *)(param_1 + 0x380) = iVar5 + -1;
      }
      else {
        uVar2 = *(uint *)(*(longlong *)(lVar8 + lVar1) + 0xc);
        if ((int)uVar2 < (int)DAT_1469e91c4) {
          uVar6 = uVar2 & 0xffff;
          if ((int)uVar2 < 0) {
            uVar2 = uVar2 + 0xffff;
            uVar6 = uVar6 - 0x10000;
          }
          lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)uVar6 * 0x18;
        }
        else {
          lVar4 = 0;
        }
        if (((byte)((uint)*(undefined4 *)(lVar4 + 8) >> 0x1d) & 1) != 0) goto LAB_142387a98;
      }
      lVar9 = lVar9 + -8;
      lVar8 = lVar8 + -8;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  *param_2 = 0;
  iVar7 = *(int *)(param_1 + 0x380);
  _Src = *(void **)(param_1 + 0x378);
  *(int *)(param_2 + 1) = iVar7;
  if (iVar7 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar7,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar7 << 3);
    return param_2;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  return param_2;
}



// FUNCTION 142387b50 FUN_142387b50 body=351 status=ok
// SIG undefined FUN_142387b50(void)

undefined8 * FUN_142387b50(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *_Src;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar7 = *(int *)(param_1 + 0x390) + -1;
  if (-1 < iVar7) {
    lVar8 = (longlong)iVar7 * 8;
    lVar9 = lVar8;
    do {
      lVar1 = *(longlong *)(param_1 + 0x388);
      if (*(longlong *)(lVar8 + lVar1) == 0) {
LAB_142387bf8:
        iVar5 = *(int *)(param_1 + 0x390);
        iVar3 = (iVar5 - iVar7) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar9 + lVar1),(void *)(lVar1 + (longlong)(iVar5 - iVar3) * 8),
                     (longlong)iVar3 << 3);
          iVar5 = *(int *)(param_1 + 0x390);
        }
        *(int *)(param_1 + 0x390) = iVar5 + -1;
      }
      else {
        uVar2 = *(uint *)(*(longlong *)(lVar8 + lVar1) + 0xc);
        if ((int)uVar2 < (int)DAT_1469e91c4) {
          uVar6 = uVar2 & 0xffff;
          if ((int)uVar2 < 0) {
            uVar2 = uVar2 + 0xffff;
            uVar6 = uVar6 - 0x10000;
          }
          lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)uVar6 * 0x18;
        }
        else {
          lVar4 = 0;
        }
        if (((byte)((uint)*(undefined4 *)(lVar4 + 8) >> 0x1d) & 1) != 0) goto LAB_142387bf8;
      }
      lVar9 = lVar9 + -8;
      lVar8 = lVar8 + -8;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  *param_2 = 0;
  iVar7 = *(int *)(param_1 + 0x390);
  _Src = *(void **)(param_1 + 0x388);
  *(int *)(param_2 + 1) = iVar7;
  if (iVar7 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar7,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar7 << 3);
    return param_2;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  return param_2;
}



// FUNCTION 142387cb0 FUN_142387cb0 body=71 status=ok
// SIG undefined FUN_142387cb0(void)

void FUN_142387cb0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1450657a0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined1 *)((longlong)puVar1 + 0x14) = *(undefined1 *)(param_1 + 0x14);
    return;
  }
  return;
}



// FUNCTION 142387d00 FUN_142387d00 body=155 status=ok
// SIG undefined FUN_142387d00(void)

longlong FUN_142387d00(longlong *param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x560))();
  if (lVar2 != 0) {
    lVar3 = FUN_1429ba110();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar3 = lVar2;
    if (bVar1) goto LAB_142387d5e;
  }
  lVar3 = 0;
LAB_142387d5e:
  if ((lVar2 != 0) && (lVar3 == 0)) {
    lVar3 = UMaterialInstanceDynamic::Create(lVar2,param_1);
    (**(code **)(*param_1 + 0x568))(param_1,param_2,lVar3);
  }
  return lVar3;
}



// FUNCTION 142387da0 FUN_142387da0 body=67 status=ok
// SIG undefined FUN_142387da0(void)

undefined8 FUN_142387da0(longlong *param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x568))();
                    /* WARNING: Could not recover jumptable at 0x000142387dcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x598))(param_1,param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 142387df0 FUN_142387df0 body=190 status=ok
// SIG undefined FUN_142387df0(void)

longlong FUN_142387df0(longlong *param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x568))();
  }
  lVar2 = (**(code **)(*param_1 + 0x560))(param_1,param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_1429ba110();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar3 = lVar2;
    if (bVar1) goto LAB_142387e69;
  }
  lVar3 = 0;
LAB_142387e69:
  if ((lVar2 != 0) && (lVar3 == 0)) {
    lVar3 = UMaterialInstanceDynamic::Create(lVar2,param_1,param_4);
    (**(code **)(*param_1 + 0x568))(param_1,param_2,lVar3);
  }
  return lVar3;
}



// FUNCTION 142387eb0 FUN_142387eb0 body=191 status=ok
// SIG undefined FUN_142387eb0(void)

void FUN_142387eb0(longlong param_1)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x3c0);
  if (lVar4 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 1000);
    *(undefined8 *)(lVar4 + 0x710) = 0x44fa000044fa0000;
    *(undefined4 *)(lVar4 + 0x718) = uVar1;
  }
  FUN_142338230(param_1);
  bVar2 = *(byte *)(param_1 + 0x24f);
  lVar4 = FUN_1428742e0();
  if ((int)(uint)bVar2 <= *(int *)(lVar4 + 4)) {
    cVar3 = FUN_14239a1f0(param_1);
    if (cVar3 != '\0') {
      lVar4 = operator_new(0x170);
      uVar5 = 0;
      if (lVar4 != 0) {
        uVar5 = FUN_1426d4b90(lVar4,param_1);
      }
      *(undefined8 *)(param_1 + 0x400) = uVar5;
      lVar4 = *(longlong *)(param_1 + 0x120);
      if (lVar4 == 0) {
        lVar4 = FUN_1423407b0(param_1);
      }
      (**(code **)(**(longlong **)(lVar4 + 0x1b8) + 0xb0))(*(longlong **)(lVar4 + 0x1b8),param_1);
    }
  }
  return;
}



// FUNCTION 142387f70 FUN_142387f70 body=236 status=ok
// SIG undefined FUN_142387f70(void)

void FUN_142387f70(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  float fVar6;
  
  if ((*(float *)(param_1 + 0x5c) == 0.0) &&
     (fVar6 = *(float *)((longlong)param_1 + 0x2dc), 0.0 < fVar6)) {
    if (((*(byte *)((longlong)param_1 + 0x2ee) & 1) != 0) || (param_1[0xca] != 0)) {
      fVar6 = 0.0;
    }
    *(float *)(param_1 + 0x5c) = fVar6;
  }
  FUN_142338230();
  (**(code **)(*param_1 + 0x4b8))(param_1);
  bVar1 = *(byte *)((longlong)param_1 + 0x24f);
  lVar3 = FUN_1428742e0();
  if (((int)(uint)bVar1 <= *(int *)(lVar3 + 4)) &&
     ((cVar2 = FUN_14239a1f0(param_1), cVar2 != '\0' ||
      ((*(byte *)((longlong)param_1 + 0x2f2) & 0x40) != 0)))) {
    puVar4 = (undefined8 *)FUN_14233fea0(param_1);
    (**(code **)*puVar4)(puVar4,param_1);
  }
  bVar1 = *(byte *)((longlong)param_1 + 0x2ee);
  if ((bVar1 & 0x20) != 0) {
    return;
  }
  if ((*(char *)((longlong)param_1 + 0x24e) == '\0') && ((bVar1 & 0x10) == 0)) {
    if ((bVar1 & 4) != 0) {
      return;
    }
    if (param_1[0x23] == 0) {
      return;
    }
    lVar3 = AActor::GetLevel();
    if (lVar3 == 0) {
      return;
    }
    if ((*(byte *)(lVar3 + 0x204) & 8) == 0) {
      return;
    }
  }
  plVar5 = (longlong *)IStreamingManager::Get_Concurrent();
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x78))(plVar5,param_1);
  }
  return;
}



// FUNCTION 142388060 FUN_142388060 body=86 status=ok
// SIG undefined FUN_142388060(void)

void FUN_142388060(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_142338230();
  (**(code **)(*param_1 + 0x548))(param_1);
  cVar1 = FUN_14239a1f0(param_1);
  if (cVar1 != '\0') {
    lVar2 = param_1[0x24];
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x0001423880ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar2 + 0x1b8) + 0x78))(*(longlong **)(lVar2 + 0x1b8),param_1);
    return;
  }
  return;
}



// FUNCTION 1423880c0 FUN_1423880c0 body=416 status=ok
// SIG undefined FUN_1423880c0(void)

undefined8 * FUN_1423880c0(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar3 = (undefined8 *)operator_new(0x1e0);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  FUN_14235d360(puVar3,param_1);
  *puVar3 = &PTR_FUN_1450578e0;
  *(undefined4 *)(puVar3 + 0x39) = *(undefined4 *)(param_1 + 0x2fc);
  *(undefined4 *)((longlong)puVar3 + 0x1cc) = *(undefined4 *)(param_1 + 0x300);
  fVar5 = *(float *)(param_1 + 0x438);
  *(float *)((longlong)puVar3 + 0x11c) = fVar5;
  fVar1 = *(float *)(param_1 + 0x434);
  fVar4 = 0.0;
  if ((0.0 <= fVar1) && (fVar4 = fVar5 * 0.99999, fVar1 <= fVar4)) {
    fVar4 = fVar1;
  }
  *(float *)(puVar3 + 0x23) = fVar4;
  *(uint *)(puVar3 + 0x30) =
       *(uint *)(puVar3 + 0x30) ^
       ((uint)*(byte *)(param_1 + 0x431) << 7 ^ *(uint *)(puVar3 + 0x30)) & 0x80;
  fVar5 = *(float *)(param_1 + 0x440);
  *(float *)(puVar3 + 0x38) = fVar5;
  if (fVar5 <= 1e-05) {
    fVar5 = 1e-05;
  }
  *puVar3 = &PTR_FUN_145060848;
  *(float *)((longlong)puVar3 + 0x1c4) = 1.0 / fVar5;
  *(undefined4 *)(puVar3 + 0x3a) = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)((longlong)puVar3 + 0x1d4) = *(undefined4 *)(param_1 + 0x454);
  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 != 0) {
    local_48 = *(undefined4 *)(lVar2 + 0x220);
    local_44 = *(undefined4 *)(lVar2 + 0x224);
    local_40 = *(undefined4 *)(lVar2 + 0x228);
    local_34 = *(undefined4 *)(lVar2 + 0x2e4);
    local_3c = *(undefined8 *)(lVar2 + 0x2dc);
    local_18 = *(undefined4 *)(lVar2 + 0x210);
    uStack_14 = *(undefined4 *)(lVar2 + 0x214);
    uStack_10 = *(undefined4 *)(lVar2 + 0x218);
    uStack_c = *(undefined4 *)(lVar2 + 0x21c);
    local_30 = *(undefined8 *)(lVar2 + 0x2d0);
    local_28 = *(undefined4 *)(lVar2 + 0x2d8);
    FUN_142377bd0(puVar3,&local_18,&local_48,&local_30,&local_3c);
  }
  return puVar3;
}



// FUNCTION 142388260 FUN_142388260 body=46 status=ok
// SIG undefined FUN_142388260(void)

void FUN_142388260(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0xd0);
  if (lVar1 != 0) {
    FUN_14237e050(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 142388290 FUN_142388290 body=1214 status=ok
// SIG undefined FUN_142388290(void)

void FUN_142388290(longlong *param_1,char param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  float fVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar18;
  longlong *local_res20;
  undefined8 in_stack_ffffffffffffff58;
  uint uVar19;
  ulonglong uVar20;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_70;
  longlong local_68;
  float fStack_60;
  float fStack_5c;
  longlong *local_58;
  int local_50;
  
  if ((param_2 != '\0') && (plVar17 = (longlong *)param_1[0x23], plVar17 != (longlong *)0x0)) {
    (**(code **)(*plVar17 + 0x70))(plVar17,1);
    if (param_1 == (longlong *)plVar17[0x2d]) {
      plVar11 = (longlong *)param_1[0x34];
      plVar12 = plVar11 + (int)param_1[0x35];
      for (; plVar11 != plVar12; plVar11 = plVar11 + 1) {
        plVar16 = (longlong *)*plVar11;
        if (((plVar16 != (longlong *)0x0) &&
            (cVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16), cVar8 == '\0')) &&
           ((longlong *)plVar16[0x23] == plVar17)) {
          plVar11 = (longlong *)*plVar11;
          goto LAB_1423884d1;
        }
      }
      uVar19 = (uint)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
      (**(code **)(*param_1 + 0x138))(param_1,0,param_1[4],0x14);
      lVar14 = DAT_146af0960;
      if (DAT_146af0960 == 0) {
        FUN_1417846f0(plVar17,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar10 = FUN_1429ff160();
      uVar20 = 0;
      plVar11 = (longlong *)FUN_1417985e0(uVar10,plVar17,lVar14,8,(ulonglong)uVar19 << 0x20,0,0,0,0)
      ;
      bVar1 = *(byte *)((longlong)param_1 + 0x24e);
      *(byte *)((longlong)plVar11 + 0x24e) = bVar1;
      fVar7 = *(float *)(param_1 + 0x42);
      local_68 = param_1[0x42];
      fStack_60 = *(float *)(param_1 + 0x43);
      fStack_5c = *(float *)((longlong)param_1 + 0x21c);
      auVar6._4_4_ = -(uint)(*(float *)((longlong)param_1 + 0x254) !=
                            *(float *)((longlong)param_1 + 0x214));
      auVar6._0_4_ = -(uint)(*(float *)(param_1 + 0x4a) != fVar7);
      auVar6._8_4_ = -(uint)(*(float *)(param_1 + 0x4b) != fStack_60);
      auVar6._12_4_ = -(uint)(*(float *)((longlong)param_1 + 0x25c) != fStack_5c);
      iVar9 = movmskps((uint)bVar1,auVar6);
      if (iVar9 != 0) {
        *(float *)(param_1 + 0x4a) = fVar7;
        *(float *)((longlong)param_1 + 0x254) = *(float *)((longlong)param_1 + 0x214);
        *(float *)(param_1 + 0x4b) = fStack_60;
        *(float *)((longlong)param_1 + 0x25c) = fStack_5c;
        plVar12 = (longlong *)FQuat::Rotator(&local_68,&local_58);
        param_1[0x4c] = *plVar12;
        *(int *)(param_1 + 0x4d) = (int)plVar12[1];
      }
      plVar12 = param_1 + 0x44;
      local_78 = (undefined4)*plVar12;
      uStack_74 = *(undefined4 *)((longlong)param_1 + 0x224);
      local_68 = *plVar12;
      local_70 = (int)param_1[0x45];
      local_58 = (longlong *)param_1[0x4c];
      local_50 = (int)param_1[0x4d];
      if (plVar11[0x32] == 0) {
        local_68 = param_1[0x4c];
        fStack_60 = (float)local_50;
        local_58 = (longlong *)*plVar12;
        local_50 = local_70;
        FUN_1423982b0(plVar11,&local_58,&local_68,0,0,uVar20 & 0xffffffffffffff00);
      }
      else {
        fStack_60 = (float)local_70;
        uVar10 = FRotator::Quaternion(&local_58,&local_78);
        FUN_142399390(plVar11,&local_68,uVar10,0,0,uVar20 & 0xffffffffffffff00);
      }
      FUN_142222370(plVar17,plVar11);
      FUN_14234b150(plVar11);
LAB_1423884d1:
      (**(code **)(*plVar17 + 0x70))(plVar17,1);
      FUN_14223f010(plVar17,plVar11);
    }
    else {
      lVar14 = param_1[0x32];
      plVar11 = (longlong *)0x0;
      if (lVar14 != 0) {
        plVar17 = (longlong *)(lVar14 + 0x1a0);
        puVar3 = (undefined8 *)*plVar17;
        for (puVar13 = puVar3; puVar13 != puVar3 + *(int *)(lVar14 + 0x1a8); puVar13 = puVar13 + 1)
        {
          if ((longlong *)*puVar13 == param_1) {
            iVar9 = (int)((longlong)puVar13 - (longlong)puVar3 >> 3);
            goto LAB_14238852d;
          }
        }
        iVar9 = -1;
LAB_14238852d:
        (**(code **)(*param_1 + 0x418))(param_1,&DAT_146532190);
        plVar11 = (longlong *)0x0;
        if (0 < (int)param_1[0x35]) {
          plVar16 = (longlong *)param_1[0x34];
          plVar12 = plVar16 + (int)param_1[0x35];
          if (plVar16 != plVar12) {
            do {
              if (((longlong *)*plVar16 != (longlong *)0x0) &&
                 (cVar8 = (**(code **)(*(longlong *)*plVar16 + 0xf8))(), cVar8 == '\0')) {
                plVar16 = (longlong *)*plVar16;
                goto LAB_142388594;
              }
              plVar16 = plVar16 + 1;
            } while (plVar16 != plVar12);
            plVar16 = (longlong *)param_1[0x34];
          }
          plVar16 = (longlong *)*plVar16;
          if (plVar16 != (longlong *)0x0) {
LAB_142388594:
            plVar11 = plVar16;
            local_res20 = plVar16;
            if (plVar16 != (longlong *)0x0) {
              FUN_142382f60(plVar16,lVar14,&DAT_146532180,0);
              TArray<FName,FDefaultAllocator>::Remove(plVar17,&local_res20);
              iVar2 = *(int *)(lVar14 + 0x1a8);
              if (iVar9 < 0) {
                iVar18 = 0;
              }
              else {
                iVar18 = iVar2;
                if (iVar9 < iVar2) {
                  iVar18 = iVar9;
                }
              }
              *(int *)(lVar14 + 0x1a8) = iVar2 + 1;
              if (*(int *)(lVar14 + 0x1ac) < iVar2 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar17,iVar2);
              }
              pvVar4 = (void *)(*plVar17 + (longlong)iVar18 * 8);
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)pvVar4 + 8),pvVar4,(longlong)(iVar2 - iVar18) << 3);
              *(longlong **)(*plVar17 + (longlong)iVar18 * 8) = local_res20;
              plVar11 = local_res20;
            }
          }
        }
      }
    }
    plVar12 = (longlong *)0x0;
    local_50 = (int)param_1[0x35];
    lVar14 = (longlong)local_50;
    pvVar4 = (void *)param_1[0x34];
    local_58 = (longlong *)0x0;
    plVar17 = plVar12;
    if (local_50 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_58,local_50,0);
      plVar17 = local_58;
      _guard_xfg_dispatch_icall_nop(local_58,pvVar4,lVar14 << 3);
    }
    plVar16 = (longlong *)
              ((ulonglong)((longlong)(plVar17 + local_50) + (7 - (longlong)plVar17)) >> 3);
    if (plVar17 + local_50 < plVar17) {
      plVar16 = (longlong *)0x0;
    }
    plVar15 = plVar17;
    if (plVar16 != (longlong *)0x0) {
      do {
        plVar5 = (longlong *)*plVar15;
        if ((plVar5 != (longlong *)0x0) &&
           ((**(code **)(*plVar5 + 0x418))(plVar5,&DAT_146532190), plVar5 != plVar11)) {
          FUN_142382f60(plVar5,plVar11,&DAT_146532180,0);
        }
        plVar12 = (longlong *)((longlong)plVar12 + 1);
        plVar15 = plVar15 + 1;
      } while (plVar12 != plVar16);
    }
    if (plVar17 != (longlong *)0x0) {
      FMemory::Free(plVar17);
    }
  }
  FUN_142339120(param_1,param_2);
  return;
}



// FUNCTION 142388750 FUN_142388750 body=566 status=ok
// SIG undefined FUN_142388750(void)

void FUN_142388750(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  
  UActorComponent::DestroyRenderState_Concurrent();
  if (*(longlong *)(param_1 + 0x400) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    (**(code **)(**(longlong **)(lVar6 + 0x1b8) + 0xb8))(*(longlong **)(lVar6 + 0x1b8),param_1);
    plVar10 = (longlong *)0x0;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
      uVar3 = *(undefined8 *)(param_1 + 0x400);
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res18);
      FMemory::operator_delete(uVar3,0x170);
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
    }
    else {
      pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar8 = TlsGetValue(*pDVar7);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)operator_new(0x18);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = 0;
          plVar8[1] = 0;
          *(undefined4 *)(plVar8 + 2) = 0;
          plVar10 = plVar8;
        }
        TlsSetValue(*pDVar7,plVar10);
        plVar8 = plVar10;
      }
      plVar10 = (longlong *)plVar8[1];
      if (plVar10 == (longlong *)0x0) {
        plVar10 = (longlong *)*plVar8;
        if (plVar10 == (longlong *)0x0) {
          lVar6 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
          plVar8[1] = lVar6;
          if (lVar6 == 0) {
            puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar8[1] = (longlong)puVar9;
            lVar6 = 0x1f;
            do {
              puVar2 = puVar9 + 0x20;
              *puVar9 = puVar2;
              lVar6 = lVar6 + -1;
              puVar9 = puVar2;
            } while (lVar6 != 0);
            *puVar2 = 0;
          }
          plVar10 = (longlong *)plVar8[1];
          iVar11 = 0x20;
          *(undefined4 *)(plVar8 + 2) = 0x20;
        }
        else {
          iVar11 = 0x20;
          plVar8[1] = (longlong)plVar10;
          *(undefined4 *)(plVar8 + 2) = 0x20;
          *plVar8 = 0;
        }
      }
      else {
        iVar11 = (int)plVar8[2];
      }
      plVar8[1] = *plVar10;
      *(int *)(plVar8 + 2) = iVar11 + -1;
      *plVar10 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar10 + 1) = 0xff;
      local_res20 = 0;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_145065790;
      *(undefined1 *)(plVar10 + 3) = 0;
      plVar10[4] = 0;
      plVar10[2] = *(longlong *)(param_1 + 0x400);
      lVar6 = plVar10[4];
      piVar1 = (int *)(lVar6 + 0x48);
      if (lVar6 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res10 = lVar6;
      FUN_140445100(plVar10,0,0xff,1,0);
      if (lVar6 != 0) {
        LOCK();
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          FGraphEvent::Recycle(local_res10);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x400) = 0;
  }
  return;
}



// FUNCTION 142388990 FUN_142388990 body=78 status=ok
// SIG undefined FUN_142388990(void)

void FUN_142388990(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar1 = FUN_1423407b0();
    if (lVar1 == 0) goto LAB_1423889d1;
  }
  lVar1 = FUN_14233fea0(param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_14233fea0(param_1);
    (**(code **)(*plVar2 + 8))(plVar2,param_1);
  }
LAB_1423889d1:
  UActorComponent::DestroyRenderState_Concurrent(param_1);
  return;
}



// FUNCTION 1423889e0 FUN_1423889e0 body=59 status=ok
// SIG undefined FUN_1423889e0(void)

void FUN_1423889e0(longlong param_1)

{
  longlong lVar1;
  
  UActorComponent::DestroyRenderState_Concurrent();
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000142388a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar1 + 0x1b8) + 0x80))(*(longlong **)(lVar1 + 0x1b8),param_1);
  return;
}



// FUNCTION 142388a20 FUN_142388a20 body=745 status=ok
// SIG undefined FUN_142388a20(void)

void FUN_142388a20(longlong *param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *local_res8;
  undefined1 local_28 [8];
  undefined4 local_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (param_1[0x32] == 0) {
    return;
  }
  lVar6 = FUN_1429f11d0();
  if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    (**(code **)(*param_1 + 0x710))(param_1);
  }
  if ((*(byte *)(param_1 + 0x17) & 1) == 0) goto LAB_142388b24;
  iVar4 = FUN_14233f450(param_1);
  if (iVar4 < 3) {
    if (((*(byte *)(param_1[0x32] + 0xb8) & 8) == 0) || (iVar4 = FUN_14233f450(), iVar4 == 3)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      if (((*(longlong *)(param_1[0x32] + 0x118) == 0) ||
          ((*(byte *)(*(longlong *)(param_1[0x32] + 0x118) + 0x90) & 0x20) == 0)) ||
         (iVar4 = FUN_142235230(), iVar4 != 3)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_142388af2;
    }
    bVar3 = true;
  }
  else {
LAB_142388af2:
    bVar3 = false;
  }
  if (!bVar3) {
    puVar8 = *(undefined8 **)(param_1[0x32] + 0x1a0);
    puVar1 = puVar8 + *(int *)(param_1[0x32] + 0x1a8);
    for (; (puVar8 != puVar1 && ((longlong *)*puVar8 != param_1)); puVar8 = puVar8 + 1) {
    }
  }
LAB_142388b24:
  if ((param_2[3] != '\0') && ((*(uint *)(param_1 + 1) >> 6 & 1) == 0)) {
    (**(code **)(*param_1 + 0x70))(param_1,1);
    (**(code **)(*(longlong *)param_1[0x32] + 0x70))((longlong *)param_1[0x32],1);
  }
  FTickFunction::RemovePrerequisite(param_1 + 6,param_1[0x32],param_1[0x32] + 0x30);
  local_res8 = param_1;
  TArray<FName,FDefaultAllocator>::Remove(param_1[0x32] + 0x1a0,&local_res8);
  local_res8 = param_1;
  TArray<FName,FDefaultAllocator>::Remove(param_1[0x32] + 0x1b0,&local_res8);
  (**(code **)(*(longlong *)param_1[0x32] + 0x520))((longlong *)param_1[0x32],param_1);
  plVar7 = *(longlong **)(param_1[0x32] + 0x118);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x6a8))(plVar7,param_1);
  }
  param_1[0x32] = 0;
  local_res8 = (longlong *)0x0;
  param_1[0x33] = 0;
  uVar5 = (**(code **)(*param_1 + 0x498))(param_1);
  if (*param_2 == '\x01') {
    uVar5 = (undefined4)param_1[0x45];
    *(int *)((longlong)param_1 + 0x1ec) = (int)param_1[0x44];
    *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)((longlong)param_1 + 0x224);
    *(undefined4 *)((longlong)param_1 + 500) = uVar5;
    local_20 = uVar5;
  }
  if (param_2[1] == '\x01') {
    local_18 = *(float *)(param_1 + 0x42);
    fStack_14 = *(float *)((longlong)param_1 + 0x214);
    fStack_10 = *(float *)(param_1 + 0x43);
    fStack_c = *(float *)((longlong)param_1 + 0x21c);
    auVar2._4_4_ = -(uint)(*(float *)((longlong)param_1 + 0x254) != fStack_14);
    auVar2._0_4_ = -(uint)(*(float *)(param_1 + 0x4a) != local_18);
    auVar2._8_4_ = -(uint)(*(float *)(param_1 + 0x4b) != fStack_10);
    auVar2._12_4_ = -(uint)(*(float *)((longlong)param_1 + 0x25c) != fStack_c);
    iVar4 = movmskps(uVar5,auVar2);
    if (iVar4 != 0) {
      *(float *)(param_1 + 0x4a) = local_18;
      *(float *)((longlong)param_1 + 0x254) = fStack_14;
      *(float *)(param_1 + 0x4b) = fStack_10;
      *(float *)((longlong)param_1 + 0x25c) = fStack_c;
      plVar7 = (longlong *)FQuat::Rotator(&local_18,local_28);
      param_1[0x4c] = *plVar7;
      *(int *)(param_1 + 0x4d) = (int)plVar7[1];
    }
    param_1[0x3f] = param_1[0x4c];
    *(int *)(param_1 + 0x40) = (int)param_1[0x4d];
  }
  if (param_2[2] == '\x01') {
    local_20 = (undefined4)param_1[0x47];
    *(int *)((longlong)param_1 + 0x204) = (int)param_1[0x46];
    *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)((longlong)param_1 + 0x234);
    *(undefined4 *)((longlong)param_1 + 0x20c) = local_20;
  }
  FUN_140942fb0(param_1,0,0);
  if (((*(byte *)(param_1 + 0x17) & 1) != 0) && ((*(byte *)((longlong)param_1 + 0x24d) & 4) == 0)) {
    (**(code **)(*param_1 + 0x488))(param_1,0,1,0);
  }
  return;
}



// FUNCTION 142388d10 DetachFromParent body=56 status=ok
// SIG undefined DetachFromParent(void)

void USceneComponent::DetachFromParent(longlong *param_1,char param_2,undefined1 param_3)

{
  undefined2 local_res10;
  undefined1 local_res12;
  undefined1 local_res13;
  
  local_res10 = 0;
  local_res12 = param_2 != '\0';
  if ((bool)local_res12) {
    local_res10 = 0x101;
  }
  local_res13 = param_3;
  (**(code **)(*param_1 + 0x418))(param_1,&local_res10);
  return;
}



// FUNCTION 142388d50 DiagnosticMessage body=288 status=ok
// SIG undefined DiagnosticMessage(void)

longlong *
FPrimitiveComponentPostPhysicsTickFunction::DiagnosticMessage(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  plVar2 = (longlong *)UObjectBaseUtility::GetFullName(*(undefined8 *)(param_1 + 0x50),local_18,0);
  lVar3 = plVar2[1];
  local_28 = *plVar2;
  *plVar2 = 0;
  local_20 = (int)plVar2[1];
  local_1c = *(int *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  iVar4 = local_20;
  if (local_1c < (int)((0x27 - (uint)((int)lVar3 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar4 = local_20;
  }
  local_20 = (0x27 - (uint)(iVar4 != 0)) + iVar4;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar4);
  }
  lVar3 = (longlong)iVar4 - (ulonglong)(iVar4 != 0);
  puVar1 = (undefined8 *)(local_28 + lVar3 * 2);
  *puVar1 = 0x7200500055005b;
  puVar1[1] = 0x740069006d0069;
  lVar3 = local_28 + lVar3 * 2;
  *(undefined8 *)(lVar3 + 0x10) = 0x43006500760069;
  *(undefined8 *)(lVar3 + 0x18) = 0x6f0070006d006f;
  *(undefined8 *)(lVar3 + 0x20) = 0x74006e0065006e;
  *(undefined8 *)(lVar3 + 0x28) = 0x6f0050003a003a;
  *(undefined4 *)(lVar3 + 0x30) = 0x740073;
  *(undefined4 *)(lVar3 + 0x34) = 0x680050;
  *(undefined4 *)(lVar3 + 0x38) = 0x730079;
  *(undefined4 *)(lVar3 + 0x3c) = 0x630069;
  *(undefined8 *)(lVar3 + 0x40) = 0x63006900540073;
  *(undefined4 *)(lVar3 + 0x48) = 0x5d006b;
  *(undefined2 *)(lVar3 + 0x4c) = 0;
  *param_2 = local_28;
  *(int *)(param_2 + 1) = local_20;
  *(int *)((longlong)param_2 + 0xc) = local_1c;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142388e70 FUN_142388e70 body=220 status=ok
// SIG undefined FUN_142388e70(void)

void FUN_142388e70(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar4 = FUN_1424a1490();
  cVar2 = FUN_14249a970(uVar4,param_1,param_2,param_3);
  if ((cVar2 == '\0') && (lVar5 = FWeakObjectPtr::Get(param_3 + 0x74), lVar5 != 0)) {
    FUN_142227dc0(param_2,param_1,lVar5,1,param_3);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar6 = 0;
    }
    if (((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) &&
       (lVar6 = FWeakObjectPtr::Get(param_3 + 0x6c), lVar6 != 0)) {
      FUN_142227dc0(lVar6,lVar5,param_1,0,param_3);
    }
  }
  return;
}



// FUNCTION 142388f50 FUN_142388f50 body=564 status=ok
// SIG undefined FUN_142388f50(void)

void FUN_142388f50(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong *local_res10;
  
  if (param_2 == (longlong *)0x0) {
    if (param_1 == (longlong *)0x0) {
      return;
    }
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    plVar2 = (longlong *)param_1[0x23];
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar7;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar8 = 0;
    }
    if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) {
      local_res10 = param_1;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0xba,&local_res10);
    }
    cVar4 = FUN_142235710(plVar2);
    if (cVar4 == '\0') {
      return;
    }
    (**(code **)(*plVar2 + 0x360))(plVar2);
    cVar4 = FUN_142235710(plVar2);
    if (cVar4 == '\0') {
      return;
    }
    local_res10 = plVar2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (plVar2 + 0x42,&local_res10);
    return;
  }
  plVar2 = (longlong *)param_2[0x23];
  lVar8 = 0;
  if (param_1 != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[0x23];
    if (param_2 == param_1) {
      return;
    }
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    lVar6 = lVar8;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar7;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar7) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      local_res10 = param_1;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0xba,&local_res10);
    }
    if (plVar2 == plVar3) goto LAB_14238906b;
    cVar4 = FUN_142235710(plVar3);
    if (cVar4 != '\0') {
      (**(code **)(*plVar3 + 0x360))(plVar3);
      cVar4 = FUN_142235710(plVar3);
      if (cVar4 != '\0') {
        local_res10 = plVar3;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (plVar3 + 0x42,&local_res10);
      }
    }
    if (plVar2 == plVar3) goto LAB_14238906b;
  }
  cVar4 = FUN_142235710(plVar2);
  if (cVar4 != '\0') {
    (**(code **)(*plVar2 + 0x358))(plVar2);
    cVar4 = FUN_142235710(plVar2);
    if (cVar4 != '\0') {
      local_res10 = plVar2;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (plVar2 + 0x40,&local_res10);
    }
  }
LAB_14238906b:
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar7 = iVar1 >> 0x1f & 0xffff;
    uVar5 = iVar1 + uVar7;
    lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
            (longlong)(int)((uVar5 & 0xffff) - uVar7) * 0x18;
  }
  if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) {
    local_res10 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_2 + 0xb8,&local_res10);
  }
  return;
}



// FUNCTION 142389190 FUN_142389190 body=826 status=ok
// SIG undefined FUN_142389190(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_142389190(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong local_88 [3];
  longlong *plStack_70;
  longlong local_68 [3];
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  cVar7 = FUN_142235710(*(undefined8 *)(param_1 + 0x118));
  lVar9 = 0;
  if (cVar7 != '\0') {
    local_48 = *param_2;
    plVar5 = *(longlong **)(param_1 + 0x118);
    local_40 = param_2[1];
    local_38 = param_2[2];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar5 + 0x368))(plVar5,&local_48);
    cVar7 = FUN_142235710(*(undefined8 *)(param_1 + 0x118));
    if (cVar7 != '\0') {
      plVar5 = (longlong *)param_2[2];
      local_b8 = *param_2;
      local_b0 = param_2[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      lVar6 = *(longlong *)(param_1 + 0x118);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_88[1] = 0;
      local_88[2] = 0;
      plStack_70 = (longlong *)0x0;
      local_a8 = plVar5;
      local_88[0] = lVar6;
      FKey::operator=(local_88 + 1,&local_b8);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (lVar6 + 0x220,local_88);
      plVar3 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_70 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar3 = local_a8;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_a8 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_a8 + 8))(local_a8,1);
          }
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar4 < (int)DAT_1469e91c4) {
    uVar10 = iVar4 >> 0x1f & 0xffff;
    uVar8 = iVar4 + uVar10;
    lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
            (longlong)(int)((uVar8 & 0xffff) - uVar10) * 0x18;
  }
  if ((*(uint *)(lVar9 + 8) >> 0x1d & 1) == 0) {
    plVar5 = (longlong *)param_2[2];
    local_a0 = *param_2;
    local_98 = param_2[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_68[1] = 0;
    local_68[2] = 0;
    plStack_50 = (longlong *)0x0;
    local_90 = plVar5;
    local_68[0] = param_1;
    FKey::operator=(local_68 + 1,&local_a0);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x5e0,local_68);
    plVar3 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    plVar3 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  plVar5 = (longlong *)param_2[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 1423894d0 FUN_1423894d0 body=202 status=ok
// SIG undefined FUN_1423894d0(void)

void FUN_1423894d0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_18 [8];
  longlong local_10;
  
  cVar2 = FUN_142235710(*(undefined8 *)(param_1 + 0x118));
  if (cVar2 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x378))(*(longlong **)(param_1 + 0x118),param_2)
    ;
    cVar2 = FUN_142235710(*(undefined8 *)(param_1 + 0x118));
    if (cVar2 != '\0') {
      local_10 = *(longlong *)(param_1 + 0x118);
      local_18[0] = (char)param_2;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (local_10 + 0x240,local_18);
    }
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar5;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar4 = 0;
  }
  if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
    local_18[0] = (char)param_2;
    local_10 = param_1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x600,local_18);
  }
  return;
}



// FUNCTION 1423895a0 FUN_1423895a0 body=202 status=ok
// SIG undefined FUN_1423895a0(void)

void FUN_1423895a0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_18 [8];
  longlong local_10;
  
  cVar2 = FUN_142235710(*(undefined8 *)(param_1 + 0x118));
  if (cVar2 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x380))(*(longlong **)(param_1 + 0x118),param_2)
    ;
    cVar2 = FUN_142235710(*(undefined8 *)(param_1 + 0x118));
    if (cVar2 != '\0') {
      local_10 = *(longlong *)(param_1 + 0x118);
      local_18[0] = (char)param_2;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (local_10 + 0x250,local_18);
    }
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar5;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar4 = 0;
  }
  if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
    local_18[0] = (char)param_2;
    local_10 = param_1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x610,local_18);
  }
  return;
}



// FUNCTION 142389670 FUN_142389670 body=826 status=ok
// SIG undefined FUN_142389670(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_142389670(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong local_88 [3];
  longlong *plStack_70;
  longlong local_68 [3];
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  cVar7 = FUN_142235710(*(undefined8 *)(param_1 + 0x118));
  lVar9 = 0;
  if (cVar7 != '\0') {
    local_48 = *param_2;
    plVar5 = *(longlong **)(param_1 + 0x118);
    local_40 = param_2[1];
    local_38 = param_2[2];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar5 + 0x370))(plVar5,&local_48);
    cVar7 = FUN_142235710(*(undefined8 *)(param_1 + 0x118));
    if (cVar7 != '\0') {
      plVar5 = (longlong *)param_2[2];
      local_b8 = *param_2;
      local_b0 = param_2[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      lVar6 = *(longlong *)(param_1 + 0x118);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_88[1] = 0;
      local_88[2] = 0;
      plStack_70 = (longlong *)0x0;
      local_a8 = plVar5;
      local_88[0] = lVar6;
      FKey::operator=(local_88 + 1,&local_b8);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (lVar6 + 0x230,local_88);
      plVar3 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_70 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar3 = local_a8;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_a8 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_a8 + 8))(local_a8,1);
          }
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar4 < (int)DAT_1469e91c4) {
    uVar10 = iVar4 >> 0x1f & 0xffff;
    uVar8 = iVar4 + uVar10;
    lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
            (longlong)(int)((uVar8 & 0xffff) - uVar10) * 0x18;
  }
  if ((*(uint *)(lVar9 + 8) >> 0x1d & 1) == 0) {
    plVar5 = (longlong *)param_2[2];
    local_a0 = *param_2;
    local_98 = param_2[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_68[1] = 0;
    local_68[2] = 0;
    plStack_50 = (longlong *)0x0;
    local_90 = plVar5;
    local_68[0] = param_1;
    FKey::operator=(local_68 + 1,&local_a0);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x5f0,local_68);
    plVar3 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    plVar3 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  plVar5 = (longlong *)param_2[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 1423899b0 FUN_1423899b0 body=637 status=ok
// SIG undefined FUN_1423899b0(void)

void FUN_1423899b0(undefined4 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar8 = (undefined1)param_1;
  if (param_3 == (longlong *)0x0) {
    if (param_2 == (longlong *)0x0) {
      return;
    }
    iVar1 = *(int *)((longlong)param_2 + 0xc);
    plVar2 = (longlong *)param_2[0x23];
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar7;
      lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar9 = 0;
    }
    if ((*(uint *)(lVar9 + 8) >> 0x1d & 1) == 0) {
      local_28[0] = uVar8;
      local_20 = param_2;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_2 + 0xc6,local_28);
    }
    cVar4 = FUN_142235710(plVar2);
    if (cVar4 == '\0') {
      return;
    }
    (**(code **)(*plVar2 + 0x390))(plVar2,param_1);
    cVar4 = FUN_142235710(plVar2);
    if (cVar4 == '\0') {
      return;
    }
    local_28[0] = uVar8;
    local_20 = plVar2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (plVar2 + 0x4e,local_28);
    return;
  }
  plVar2 = (longlong *)param_3[0x23];
  lVar9 = 0;
  if (param_2 != (longlong *)0x0) {
    plVar3 = (longlong *)param_2[0x23];
    if (param_3 == param_2) {
      return;
    }
    iVar1 = *(int *)((longlong)param_2 + 0xc);
    lVar6 = lVar9;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar7;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar7) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      local_28[0] = uVar8;
      local_20 = param_2;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_2 + 0xc6,local_28);
    }
    if ((plVar2 != plVar3) && (cVar4 = FUN_142235710(plVar3), cVar4 != '\0')) {
      (**(code **)(*plVar3 + 0x390))(plVar3,param_1);
      cVar4 = FUN_142235710(plVar3);
      if (cVar4 != '\0') {
        local_28[0] = uVar8;
        local_20 = plVar3;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (plVar3 + 0x4e,local_28);
      }
    }
    if (plVar2 == plVar3) goto LAB_142389af8;
  }
  cVar4 = FUN_142235710(plVar2);
  if (cVar4 != '\0') {
    (**(code **)(*plVar2 + 0x388))(plVar2,param_1);
    cVar4 = FUN_142235710(plVar2);
    if (cVar4 != '\0') {
      local_28[0] = uVar8;
      local_20 = plVar2;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (plVar2 + 0x4c,local_28);
    }
  }
LAB_142389af8:
  iVar1 = *(int *)((longlong)param_3 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar7 = iVar1 >> 0x1f & 0xffff;
    uVar5 = iVar1 + uVar7;
    lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
            (longlong)(int)((uVar5 & 0xffff) - uVar7) * 0x18;
  }
  if ((*(uint *)(lVar9 + 8) >> 0x1d & 1) == 0) {
    local_28[0] = uVar8;
    local_20 = param_3;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_3 + 0xc4,local_28);
  }
  return;
}



// FUNCTION 142389c30 FUN_142389c30 body=270 status=ok
// SIG undefined FUN_142389c30(void)

void FUN_142389c30(longlong *param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_28;
  undefined8 local_20;
  
  lVar3 = (**(code **)(*param_1 + 0x6d0))(param_1,param_3,0);
  if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x11) & 1) != 0)) {
    plVar5 = param_1 + 0xb2;
    if (param_2 != 0) {
      plVar5 = param_1 + 0xb4;
    }
    local_28 = param_1;
    local_20 = param_3;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(plVar5,&local_28);
  }
  plVar6 = (longlong *)param_1[0x34];
  plVar5 = plVar6 + (int)param_1[0x35];
  for (; plVar6 != plVar5; plVar6 = plVar6 + 1) {
    plVar1 = (longlong *)*plVar6;
    if (plVar1 != (longlong *)0x0) {
      lVar4 = FUN_1429f11d0();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (lVar4 = (**(code **)(*plVar1 + 0x6d0))(plVar1,param_3,0), lVar4 != 0)) &&
         (*(longlong *)(lVar4 + 200) == lVar3)) {
        FUN_142389c30(plVar1,param_2,param_3);
      }
    }
  }
  return;
}



// FUNCTION 142389d40 FUN_142389d40 body=230 status=ok
// SIG undefined FUN_142389d40(void)

undefined8 FUN_142389d40(longlong param_1,undefined8 param_2,float param_3,float *param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  float local_res8 [2];
  undefined1 local_38 [48];
  
  plVar1 = *(longlong **)(param_1 + -0x140);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = FUN_142a047d0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      fVar5 = -1.0;
      local_res8[0] = -1.0;
      cVar3 = (**(code **)(*plVar1 + 0x6d8))(plVar1,param_2,local_res8,local_38);
      if (cVar3 != '\0') {
        fVar5 = SQRT(local_res8[0]);
      }
      if (param_4 != (float *)0x0) {
        *param_4 = fVar5;
      }
      if ((0.0 <= fVar5) && (fVar5 <= param_3)) {
        return 1;
      }
      return 0;
    }
  }
  if (param_4 != (float *)0x0) {
    *param_4 = 0.0;
  }
  return 1;
}



// FUNCTION 142389e30 FUN_142389e30 body=569 status=ok
// SIG undefined FUN_142389e30(void)

void FUN_142389e30(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  undefined1 local_c8 [160];
  
  plVar8 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x7c);
  if (plVar8 != (longlong *)0x0) {
    FUN_14237ded0(local_c8,param_1,*(undefined4 *)(param_2 + 0x68));
    uVar4 = FUN_14237ca10(plVar8 + 0x74,local_c8);
    iVar5 = FUN_14237ca10(param_1 + 0x74,param_2);
    iVar6 = FUN_14237fd00(local_res10,param_1 + 0x74,iVar5);
    if ((((param_1 == plVar8) ||
         (iVar7 = FUN_14237fd00(local_res10,plVar8 + 0x74,uVar4), iVar6 == iVar7)) && (iVar6 == 0))
       && ((iVar5 != -1 && (DAT_146af07c0 = DAT_146af07c0 + 1, param_3 != '\0')))) {
      plVar1 = (longlong *)plVar8[0x23];
      plVar2 = (longlong *)param_1[0x23];
      if (plVar1 != (longlong *)0x0) {
        if ((param_4 == '\0') && (cVar3 = IsPrimCompValidAndAlive(param_1), cVar3 != '\0')) {
          local_d8 = *(undefined4 *)(param_2 + 0x68);
          local_f0 = param_1;
          local_e8 = plVar1;
          local_e0 = plVar8;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0xb0,&local_f0);
        }
        cVar3 = IsPrimCompValidAndAlive(plVar8);
        if (cVar3 != '\0') {
          local_d8 = *(undefined4 *)(param_2 + 0x98);
          local_f0 = plVar8;
          local_e8 = plVar2;
          local_e0 = param_1;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (plVar8 + 0xb0,&local_f0);
        }
        if (plVar2 != (longlong *)0x0) {
          plVar9 = plVar2;
          plVar8 = plVar1;
          if ((int)plVar1[0x57] - *(int *)((longlong)plVar1 + 0x2e4) <
              (int)plVar2[0x57] - *(int *)((longlong)plVar2 + 0x2e4)) {
            plVar9 = plVar1;
            plVar8 = plVar2;
          }
          cVar3 = FUN_142235c20(plVar9,plVar8);
          if (cVar3 == '\0') {
            cVar3 = FUN_142235710(plVar2);
            if (cVar3 != '\0') {
              (**(code **)(*plVar2 + 0x350))(plVar2,plVar1);
              local_f0 = plVar2;
              local_e8 = plVar1;
              TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                        (plVar2 + 0x3e,&local_f0);
            }
            cVar3 = FUN_142235710(plVar1);
            if (cVar3 != '\0') {
              (**(code **)(*plVar1 + 0x350))(plVar1,plVar2);
              local_f0 = plVar1;
              local_e8 = plVar2;
              TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                        (plVar1 + 0x3e,&local_f0);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14238a070 FUN_14238a070 body=930 status=ok
// SIG undefined FUN_14238a070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14238a070(longlong *param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  undefined8 local_48;
  longlong local_38;
  longlong lStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((int)param_1[0x55] == 0) {
    return;
  }
  lVar7 = param_1[0x54];
  iVar11 = (int)param_1[0x55];
  iVar5 = iVar11 + -1;
  lVar9 = *(longlong *)(lVar7 + (longlong)iVar5 * 8);
  iVar3 = (iVar11 - iVar5) + -1;
  if (iVar3 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(lVar7 + (longlong)iVar5 * 8),(void *)(lVar7 + (longlong)iVar11 * 8),
               (longlong)iVar3 << 3);
    iVar11 = (int)param_1[0x55];
  }
  *(int *)(param_1 + 0x55) = iVar11 + -1;
  if (iVar11 + -1 != 0) {
    FScopedMovementUpdate::OnInnerScopeComplete
              (*(undefined8 *)(param_1[0x54] + -0x10 + (longlong)iVar11 * 8),lVar9);
    return;
  }
  cVar2 = FUN_142390b10(lVar9);
  if (cVar2 == '\0') {
    if ((*(byte *)(lVar9 + 0x1b8) & 2) == 0) goto LAB_14238a2ee;
  }
  else {
    FUN_142394af0(param_1,1,0);
  }
  lVar6 = FUN_1429f11d0();
  iVar5 = *(int *)(lVar6 + 0x90);
  lVar7 = (longlong)iVar5;
  if ((*(int *)(param_1[2] + 0x90) < iVar5) ||
     (lVar7 = *(longlong *)(param_1[2] + 0x88),
     *(longlong *)(lVar7 + (longlong)iVar5 * 8) != lVar6 + 0x88)) {
    uVar4 = (uint)lVar7 & 0xffffff00;
  }
  else {
    uVar4 = (uint)CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
  }
  if ((char)uVar4 == '\0') {
    (**(code **)(*param_1 + 0x488))(param_1,0,CONCAT71((int7)((ulonglong)(lVar6 + 0x88) >> 8),1));
    goto LAB_14238a2ee;
  }
  iVar5 = *(int *)(lVar9 + 0x10);
  local_50 = 0;
  local_48 = 0;
  if (iVar5 == 0) {
    if (cVar2 != '\0') {
      local_5c = (undefined4)param_1[0x46];
      local_58 = *(undefined4 *)((longlong)param_1 + 0x234);
      local_54 = (undefined4)param_1[0x47];
      local_18 = *(undefined4 *)(lVar9 + 0x20);
      uStack_14 = *(undefined4 *)(lVar9 + 0x24);
      uStack_10 = *(undefined4 *)(lVar9 + 0x28);
      uStack_c = *(undefined4 *)(lVar9 + 0x2c);
      local_28 = (undefined4)param_1[0x42];
      uStack_24 = *(undefined4 *)((longlong)param_1 + 0x214);
      uStack_20 = (undefined4)param_1[0x43];
      uStack_1c = *(undefined4 *)((longlong)param_1 + 0x21c);
      cVar2 = (**(code **)(*param_1 + 0x750))(param_1,&local_18,&local_28,&local_5c);
      if (cVar2 != '\0') {
        plVar8 = (longlong *)FUN_142387310(param_1,&local_50,param_1 + 0x74);
        goto LAB_14238a2b9;
      }
    }
    plVar8 = param_1 + 0x74;
  }
  else {
    plVar8 = (longlong *)0x0;
    if ((iVar5 != 1) && (iVar5 == 2)) {
      if (*(int *)(lVar9 + 0x74) == -1) {
        plVar8 = &local_50;
      }
      else {
        auVar1._4_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)(lVar9 + 0x44) -
                                                      *(float *)((longlong)param_1 + 0x234)) &
                                               uRam0000000146af07d4));
        auVar1._0_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)(lVar9 + 0x40) -
                                                      *(float *)(param_1 + 0x46)) & _DAT_146af07d0))
        ;
        auVar1._8_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)(lVar9 + 0x48) -
                                                      *(float *)(param_1 + 0x47)) &
                                               uRam0000000146af07d8));
        auVar1._12_4_ =
             -(uint)(0.0001 < (float)((uint)(*(float *)(lVar9 + 0x4c) -
                                            *(float *)((longlong)param_1 + 0x23c)) &
                                     uRam0000000146af07dc));
        iVar5 = movmskps(uVar4,auVar1);
        plVar8 = (longlong *)0x0;
        if (iVar5 == 0) {
          local_68 = (undefined4)param_1[0x44];
          local_64 = *(undefined4 *)((longlong)param_1 + 0x224);
          local_60 = (undefined4)param_1[0x45];
          local_38 = param_1[0x42];
          lStack_30 = param_1[0x43];
          plVar8 = (longlong *)
                   FUN_142387470(param_1,&local_50,lVar9 + 0x78,*(int *)(lVar9 + 0x74),&local_68,
                                 &local_38);
        }
      }
    }
  }
LAB_14238a2b9:
  (**(code **)(*param_1 + 0x488))(param_1,lVar9 + 0x78,1,plVar8);
  if (local_50 != 0) {
    FMemory::Free();
  }
LAB_14238a2ee:
  if ((0 < *(int *)(lVar9 + 0x1b0)) && (lVar7 = param_1[0x23], lVar7 != 0)) {
    uVar14 = (ulonglong)(*(ulonglong *)(lVar9 + 0x1a8) != 0) - 1 & lVar9 + 0x88U |
             *(ulonglong *)(lVar9 + 0x1a8);
    uVar13 = (longlong)*(int *)(lVar9 + 0x1b0) * 0x90 + uVar14;
    for (; uVar14 != uVar13; uVar14 = uVar14 + 0x90) {
      uVar4 = *(uint *)((longlong)param_1 + 0xc);
      if ((int)uVar4 < (int)DAT_1469e91c4) {
        uVar12 = uVar4 & 0xffff;
        if ((int)uVar4 < 0) {
          uVar4 = uVar4 + 0xffff;
          uVar12 = uVar12 - 0x10000;
        }
        lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)uVar12 * 0x18;
      }
      else {
        lVar9 = 0;
      }
      if ((*(uint *)(lVar9 + 8) >> 0x1d & 1) != 0) {
        return;
      }
      uVar10 = FWeakObjectPtr::Get(uVar14 + 0x74);
      iVar5 = USceneComponent::GetCollisionResponseToComponent(param_1,uVar10);
      if (iVar5 == 2) {
        FUN_142388e70(param_1,lVar7,uVar14);
      }
    }
  }
  return;
}



// FUNCTION 14238a420 FUN_14238a420 body=58 status=ok
// SIG undefined FUN_14238a420(void)

void FUN_14238a420(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_1 + 0x17);
  bVar2 = (**(code **)(*param_1 + 0x318))();
  if ((bVar1 >> 2 & 1) != bVar2) {
    FUN_14234b040(param_1);
  }
  return;
}



// FUNCTION 14238a460 FUN_14238a460 body=255 status=ok
// SIG undefined FUN_14238a460(void)

void FUN_14238a460(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_142362de0(param_1[2]);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_145060958;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 14238a560 FUN_14238a560 body=260 status=ok
// SIG undefined FUN_14238a560(void)

void FUN_14238a560(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FMemory::operator_delete(param_1[2],0x170);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_145065790;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 14238a670 FUN_14238a670 body=181 status=ok
// SIG undefined FUN_14238a670(void)

void FUN_14238a670(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x50);
  if (plVar2 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)plVar2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if (((*(uint *)(lVar5 + 8) & 0x30000000) == 0) &&
       ((**(code **)(*plVar2 + 0x3a0))(plVar2), (*(byte *)(plVar2 + 0x17) & 1) != 0)) {
      if (param_3 == 1) {
        if ((longlong *)plVar2[0x23] == (longlong *)0x0) {
          return;
        }
        cVar3 = (**(code **)(*(longlong *)plVar2[0x23] + 0x460))();
        if (cVar3 == '\0') {
          return;
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x6b0))(*(longlong **)(param_1 + 0x50),param_1)
      ;
    }
  }
  return;
}



// FUNCTION 14238a730 FUN_14238a730 body=217 status=ok
// SIG undefined FUN_14238a730(void)

void FUN_14238a730(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int local_res8 [2];
  
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  puVar5 = (undefined8 *)0x0;
  puVar2 = puVar4 + (longlong)*(int *)(param_1 + 0x58) * 8;
  for (; puVar4 != puVar2; puVar4 = puVar4 + 8) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_2,local_res8,*puVar4);
    puVar3 = puVar5;
    if (local_res8[0] != -1) {
      puVar3 = (undefined8 *)(*param_2 + (longlong)local_res8[0] * 0x18);
    }
    puVar1 = puVar3 + 1;
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = puVar5;
    }
    if (puVar1 != (undefined8 *)0x0) {
      *puVar4 = *puVar1;
    }
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_2,local_res8);
    puVar4 = puVar5;
    if (local_res8[0] != -1) {
      puVar4 = (undefined8 *)(*param_2 + (longlong)local_res8[0] * 0x18);
    }
    puVar2 = puVar4 + 1;
    if (puVar4 == (undefined8 *)0x0) {
      puVar2 = puVar5;
    }
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x98) = *puVar2;
    }
  }
  return;
}



// FUNCTION 14238a810 FUN_14238a810 body=142 status=ok
// SIG undefined FUN_14238a810(void)

void FUN_14238a810(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_res8 [2];
  
  puVar3 = *(undefined8 **)(param_1 + 0x50);
  puVar4 = puVar3 + (longlong)*(int *)(param_1 + 0x58) * 8;
  if (puVar3 != puVar4) {
    do {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(param_2,local_res8,*puVar3);
      puVar2 = (undefined8 *)0x0;
      if (local_res8[0] != -1) {
        puVar2 = (undefined8 *)(*param_2 + (longlong)local_res8[0] * 0x18);
      }
      puVar1 = puVar2 + 1;
      if (puVar2 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)0x0;
      }
      if (puVar1 != (undefined8 *)0x0) {
        *puVar3 = *puVar1;
      }
      puVar3 = puVar3 + 8;
    } while (puVar3 != puVar4);
  }
  return;
}



// FUNCTION 14238a8a0 FindPair body=367 status=ok
// SIG undefined FindPair(void)

longlong TMultiMap<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>_>
         ::FindPair(longlong *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint local_res8;
  uint local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
  ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if ((int)param_1[9] != 0) {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    iVar8 = *(int *)((longlong)plVar6 +
                    ((longlong)(int)(uVar1 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar8 != -1) {
      do {
        lVar7 = (longlong)iVar8;
        lVar4 = *param_1;
        iVar3 = *(int *)(lVar4 + 0x10 + lVar7 * 0x18);
        local_res14 = *(undefined4 *)(lVar4 + 4 + lVar7 * 0x18);
        local_res10 = *(undefined4 *)(lVar4 + lVar7 * 0x18);
        local_res8 = uVar1;
        local_resc = uVar2;
        cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res10,&local_res8);
        if (cVar5 != '\0') break;
        iVar8 = iVar3;
      } while (iVar3 != -1);
joined_r0x00014238a95e:
      iVar9 = iVar3;
      if (iVar8 != -1) {
        cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (*param_1 + ((longlong)iVar8 * 3 + 1) * 8,param_3);
        if (cVar5 != '\0') {
          return *param_1 + (longlong)iVar8 * 0x18 + 8;
        }
        if (iVar9 == -1) {
          return 0;
        }
        do {
          lVar7 = (longlong)iVar9;
          lVar4 = *param_1;
          iVar3 = *(int *)(lVar4 + 0x10 + lVar7 * 0x18);
          local_res14 = *(undefined4 *)(lVar4 + 4 + lVar7 * 0x18);
          local_res10 = *(undefined4 *)(lVar4 + lVar7 * 0x18);
          local_res8 = uVar1;
          local_resc = uVar2;
          cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res10,&local_res8)
          ;
          iVar8 = iVar9;
          if (cVar5 != '\0') break;
          iVar9 = iVar3;
          iVar8 = iVar3;
        } while (iVar3 != -1);
        goto joined_r0x00014238a95e;
      }
    }
  }
  return 0;
}



// FUNCTION 14238aa10 FUN_14238aa10 body=53 status=ok
// SIG undefined FUN_14238aa10(void)

void FUN_14238aa10(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_141755460();
  puVar1 = *(undefined8 **)(param_1 + 0x408);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x408) = 0;
  return;
}



// FUNCTION 14238aa50 FUN_14238aa50 body=55 status=ok
// SIG undefined FUN_14238aa50(void)

void FUN_14238aa50(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 800);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 800) = 0;
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 14238aa90 GenerateEncodedHDRData body=1117 status=ok
// SIG undefined GenerateEncodedHDRData(void)

void GenerateEncodedHDRData(longlong *param_1,uint param_2,float param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 local_res10;
  int local_118;
  int local_114;
  int local_110;
  longlong local_e8;
  undefined1 local_d8 [160];
  
  iVar1 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar16 = 0x20;
  iVar2 = iVar16;
  if (param_2 != 0) {
    iVar2 = 0x1f - iVar1;
  }
  param_2 = param_2 - 1;
  iVar1 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (param_2 != 0) {
    iVar16 = 0x1f - iVar1;
  }
  lVar6 = param_1[1];
  iVar4 = *(int *)((longlong)param_4 + 0xc);
  local_118 = 0;
  local_114 = 0;
  iVar12 = 0;
  *(undefined4 *)(param_4 + 1) = 0;
  iVar1 = (0x20U - iVar16 & ~((iVar2 << 0x1a) >> 0x1f)) + 1;
  iVar2 = (int)(((longlong)(int)lVar6 & 0x3fffffffffffffffU) >> 1);
  if (iVar4 != iVar2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_4);
    iVar4 = *(int *)((longlong)param_4 + 0xc);
    iVar12 = (int)param_4[1];
  }
  *(int *)(param_4 + 1) = iVar12 + iVar2;
  if (iVar4 < iVar12 + iVar2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_4);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar12 + *param_4),0,(longlong)iVar2);
  local_110 = 0;
  if (0 < iVar1) {
    do {
      lVar15 = (longlong)local_118;
      local_e8 = 6;
      uVar7 = 1 << (((char)iVar1 - (char)local_110) - 1U & 0x1f);
      lVar6 = (longlong)local_114;
      iVar2 = uVar7 * uVar7;
      do {
        lVar13 = *param_1 + lVar15;
        puVar10 = (undefined4 *)(*param_4 + lVar6);
        if (0 < (int)uVar7) {
          uVar17 = (ulonglong)uVar7;
          uVar9 = (ulonglong)uVar7;
          lVar14 = lVar13;
          puVar11 = puVar10;
          do {
            do {
              pfVar3 = (float *)FUN_14161f710(local_d8,lVar13);
              fVar20 = SQRT(param_3 * *pfVar3) * 0.0625;
              fVar21 = SQRT(param_3 * pfVar3[1]) * 0.0625;
              fVar22 = SQRT(param_3 * pfVar3[2]) * 0.0625;
              fVar19 = fVar21;
              if (fVar21 <= fVar20) {
                fVar19 = fVar20;
              }
              fVar18 = fVar22;
              if (fVar22 <= 1e-05) {
                fVar18 = 1e-05;
              }
              if (fVar19 <= fVar18) {
                fVar19 = fVar18;
              }
              fVar18 = fVar19;
              if (0.75 < fVar19) {
                fVar18 = (fVar19 - 0.5625) / (fVar19 - 0.5);
                fVar19 = fVar18 / fVar19;
                fVar21 = fVar19 * fVar21;
                fVar20 = fVar19 * fVar20;
                fVar22 = fVar19 * fVar22;
              }
              uVar8 = -((int)ROUND(-0.5 - (fVar18 * 255.0 + fVar18 * 255.0)) >> 1);
              uVar5 = 0xff;
              if ((int)uVar8 < 0x100) {
                uVar5 = uVar8 & 0xff;
              }
              lVar13 = lVar13 + 8;
              fVar19 = (float)uVar5;
              fVar20 = ((fVar20 * 255.0) / fVar19) * 255.0;
              fVar21 = ((fVar21 * 255.0) / fVar19) * 255.0;
              fVar19 = ((fVar22 * 255.0) / fVar19) * 255.0;
              local_res10._3_1_ = (undefined1)uVar5;
              local_res10 = CONCAT31(CONCAT21(CONCAT11(local_res10._3_1_,
                                                       (char)((int)ROUND(fVar20 + fVar20 + 0.5) >> 1
                                                             )),
                                              (char)((int)ROUND(fVar21 + fVar21 + 0.5) >> 1)),
                                     (char)((int)ROUND(fVar19 + fVar19 + 0.5) >> 1));
              *puVar10 = local_res10;
              puVar10 = puVar10 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
            puVar10 = puVar11 + (int)uVar7;
            lVar13 = lVar14 + (longlong)(int)uVar7 * 8;
            uVar17 = uVar17 - 1;
            uVar9 = (ulonglong)uVar7;
            lVar14 = lVar13;
            puVar11 = puVar10;
          } while (uVar17 != 0);
        }
        lVar15 = lVar15 + iVar2 * 8;
        lVar6 = lVar6 + iVar2 * 4;
        local_e8 = local_e8 + -1;
      } while (local_e8 != 0);
      local_110 = local_110 + 1;
      local_118 = local_118 + iVar2 * 0x30;
      local_114 = local_114 + iVar2 * 0x18;
    } while (local_110 < iVar1);
  }
  return;
}



// FUNCTION 14238aef0 FUN_14238aef0 body=255 status=ok
// SIG undefined FUN_14238aef0(void)

undefined8
FUN_14238aef0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,char param_7)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  cVar5 = FUN_142695450(param_1 + 0x3b0,param_3,param_4,param_5,param_6,local_res8);
  if (cVar5 != '\0') {
    if (param_7 != '\0') {
      iVar3 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_2,iVar3);
      }
      lVar4 = *param_2;
      lVar1 = (longlong)iVar3 * 0x18;
      *(undefined4 *)(lVar1 + 0xc + lVar4) = 0;
      *(undefined8 *)(lVar1 + lVar4) = 0;
      *(undefined8 *)(lVar1 + 8 + lVar4) = 0;
      *(undefined8 *)(lVar1 + 0x10 + lVar4) = 0;
      FWeakObjectPtr::operator=(*param_2 + 8 + lVar1,param_1);
      FWeakObjectPtr::operator=(*param_2 + lVar1,*(undefined8 *)(param_1 + 0x118));
      *(undefined4 *)(*param_2 + 0x10 + lVar1) = 0xffffffff;
      puVar2 = (uint *)(*param_2 + 0x14 + lVar1);
      *puVar2 = *puVar2 ^ ((uint)local_res8[0] ^ *(uint *)(*param_2 + 0x14 + lVar1)) & 1;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14238aff0 FUN_14238aff0 body=514 status=ok
// SIG undefined FUN_14238aff0(void)

undefined8
FUN_14238aff0(longlong param_1,longlong *param_2,float *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,char param_10)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  byte *pbVar4;
  byte local_a8 [4];
  undefined4 local_a4;
  uint local_a0;
  float local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  bVar2 = false;
  _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
  local_9c = 1.0;
  cVar3 = FUN_142695520(param_1 + 0x3b0,local_a8,param_4,param_5,param_6,param_7,param_8,param_9,0);
  if ((cVar3 != '\0') && (local_9c < *param_3)) {
    if ((local_a8[0] & 1) != 0) {
      *param_3 = local_9c;
    }
    iVar1 = (int)param_2[1];
    bVar2 = true;
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    pbVar4 = (byte *)((longlong)iVar1 * 0x90 + *param_2);
    *pbVar4 = *pbVar4 ^ (*pbVar4 ^ local_a8[0]) & 1;
    *pbVar4 = *pbVar4 ^ (*pbVar4 ^ local_a8[0]) & 2;
    *(undefined4 *)(pbVar4 + 4) = local_a4;
    *(uint *)(pbVar4 + 8) = *(uint *)(pbVar4 + 8) ^ (*(uint *)(pbVar4 + 8) ^ local_a0) & 1;
    *(float *)(pbVar4 + 0xc) = local_9c;
    *(undefined4 *)(pbVar4 + 0x10) = local_98;
    *(undefined8 *)(pbVar4 + 0x14) = local_94;
    *(undefined4 *)(pbVar4 + 0x1c) = local_8c;
    *(undefined8 *)(pbVar4 + 0x20) = local_88;
    *(undefined4 *)(pbVar4 + 0x28) = local_80;
    *(undefined8 *)(pbVar4 + 0x2c) = local_7c;
    *(undefined4 *)(pbVar4 + 0x34) = local_74;
    *(undefined8 *)(pbVar4 + 0x38) = local_70;
    *(undefined4 *)(pbVar4 + 0x40) = local_68;
    *(undefined8 *)(pbVar4 + 0x44) = local_64;
    *(undefined4 *)(pbVar4 + 0x4c) = local_5c;
    *(undefined8 *)(pbVar4 + 0x50) = local_58;
    *(undefined4 *)(pbVar4 + 0x58) = local_50;
    *(undefined4 *)(pbVar4 + 0x5c) = local_4c;
    *(undefined4 *)(pbVar4 + 0x60) = local_48;
    *(undefined4 *)(pbVar4 + 100) = local_44;
    *(undefined4 *)(pbVar4 + 0x68) = local_40;
    *(undefined4 *)(pbVar4 + 0x6c) = local_3c;
    *(undefined4 *)(pbVar4 + 0x70) = local_38;
    *(undefined4 *)(pbVar4 + 0x74) = local_34;
    *(undefined4 *)(pbVar4 + 0x78) = local_30;
    *(undefined8 *)(pbVar4 + 0x80) = local_28;
    *(undefined8 *)(pbVar4 + 0x88) = local_20;
  }
  if (param_10 != '\0') {
    if (!bVar2) {
      return 0;
    }
    FUN_1423560b0(param_2);
  }
  if ((bVar2) && ((local_a8[0] & 1) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 14238b220 FUN_14238b220 body=198 status=ok
// SIG undefined FUN_14238b220(void)

longlong * FUN_14238b220(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  (**(code **)(*param_1 + 0x450))(param_1,&local_18);
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < (int)local_10) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,local_10 & 0xffffffff);
  }
  puVar2 = local_18 + (longlong)(int)local_10 * 2;
  for (puVar3 = local_18; puVar3 != puVar2; puVar3 = puVar3 + 2) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *puVar3;
  }
  if (local_18 != (undefined8 *)0x0) {
    FMemory::Free(local_18);
  }
  return param_2;
}



// FUNCTION 14238b2f0 FUN_14238b2f0 body=37 status=ok
// SIG undefined FUN_14238b2f0(void)

longlong FUN_14238b2f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1;
  while (lVar1 = param_1, lVar1 != 0) {
    lVar2 = lVar1;
    param_1 = *(longlong *)(lVar1 + 400);
  }
  return lVar2;
}



// FUNCTION 14238b320 FUN_14238b320 body=49 status=ok
// SIG undefined FUN_14238b320(void)

undefined8 FUN_14238b320(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    do {
      lVar1 = param_1;
      param_1 = *(longlong *)(lVar1 + 400);
    } while (*(longlong *)(lVar1 + 400) != 0);
    if (lVar1 != 0) {
      return *(undefined8 *)(lVar1 + 0x118);
    }
  }
  return 0;
}



// FUNCTION 14238b360 GetMeshByIndex body=30 status=ok
// SIG undefined GetMeshByIndex(void)

undefined8 UKWMeshArray::GetMeshByIndex(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x1a8))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + (longlong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 14238b380 FUN_14238b380 body=161 status=ok
// SIG undefined FUN_14238b380(void)

void FUN_14238b380(longlong param_1,char param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_3 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  if (param_2 != '\0') {
    FUN_142381730(param_1,param_3);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1a8);
  if (iVar1 != 0) {
    iVar2 = (int)param_3[1];
    if (*(int *)((longlong)param_3 + 0xc) < iVar2 + iVar1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_3);
      iVar2 = (int)param_3[1];
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*param_3 + (longlong)iVar2 * 8),*(void **)(param_1 + 0x1a0),
               (longlong)iVar1 << 3);
    *(int *)(param_3 + 1) = (int)param_3[1] + iVar1;
  }
  return;
}



// FUNCTION 14238b450 GetCollisionResponseToComponent body=147 status=ok
// SIG undefined GetCollisionResponseToComponent(void)

int USceneComponent::GetCollisionResponseToComponent(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_2 != (longlong *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x4e8))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_2 + 0x4e8))(param_2);
      if (iVar1 != 0) {
        uVar2 = (**(code **)(*param_1 + 0x4f8))(param_1);
        uVar3 = (**(code **)(*param_2 + 0x4f8))(param_2);
        iVar4 = (**(code **)(*param_1 + 0x4f0))(param_1,uVar3);
        iVar1 = (**(code **)(*param_2 + 0x4f0))(param_2,uVar2);
        if (iVar4 <= iVar1) {
          iVar1 = iVar4;
        }
        return iVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 14238b550 FUN_14238b550 body=265 status=ok
// SIG undefined FUN_14238b550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14238b550(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  puVar5 = (undefined8 *)operator_new(0xa0);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    FUN_14237e540(puVar5,param_1);
    *puVar5 = &PTR_FUN_14505f6b8;
    uVar6 = uRam0000000146af083c;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    *(undefined4 *)(puVar5 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar5 + 100) = 0;
    *(undefined4 *)(puVar5 + 0xd) = 0;
    *(uint *)((longlong)puVar5 + 0x6c) = uVar6;
    uVar6 = uRam0000000146af0834 & uRam0000000146af0844;
    uVar7 = uRam0000000146af0838 & uRam0000000146af0848;
    uVar8 = uRam0000000146af083c & uRam0000000146af084c;
    *(uint *)(puVar5 + 0x10) = _DAT_146af0830 & _DAT_146af0840;
    *(uint *)((longlong)puVar5 + 0x84) = uVar6;
    *(uint *)(puVar5 + 0x11) = uVar7;
    *(uint *)((longlong)puVar5 + 0x8c) = uVar8;
    *(undefined4 *)(puVar5 + 0x12) = *(undefined4 *)(param_1 + 0x350);
    puVar5[0x13] = *(undefined8 *)(param_1 + 0x650);
    if ((*(byte *)(param_1 + 0x24c) & 1) == 0) {
      FUN_140942fb0(param_1,0,0);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x218);
    puVar5[0xc] = *(undefined8 *)(param_1 + 0x210);
    puVar5[0xd] = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x228);
    puVar5[0xe] = *(undefined8 *)(param_1 + 0x220);
    puVar5[0xf] = uVar4;
    uVar1 = *(undefined4 *)(param_1 + 0x234);
    uVar2 = *(undefined4 *)(param_1 + 0x238);
    uVar3 = *(undefined4 *)(param_1 + 0x23c);
    *(undefined4 *)(puVar5 + 0x10) = *(undefined4 *)(param_1 + 0x230);
    *(undefined4 *)((longlong)puVar5 + 0x84) = uVar1;
    *(undefined4 *)(puVar5 + 0x11) = uVar2;
    *(undefined4 *)((longlong)puVar5 + 0x8c) = uVar3;
  }
  if ((((*(int *)(puVar5 + 5) < 1) && (*(int *)(puVar5 + 0xb) < 1)) && (puVar5[0x13] == 0)) &&
     (*(int *)(puVar5 + 0x12) == -1)) {
    (**(code **)*puVar5)(puVar5,1);
    return (undefined8 *)0x0;
  }
  return puVar5;
}



// FUNCTION 14238b660 FUN_14238b660 body=149 status=ok
// SIG undefined FUN_14238b660(void)

void FUN_14238b660(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x1a0);
  plVar1 = plVar4 + *(int *)(param_1 + 0x1a8);
  do {
    if (plVar4 == plVar1) {
LAB_14238b6d8:
      FUN_14233cc90(param_1);
      return;
    }
    lVar3 = *plVar4;
    if (((lVar3 != 0) && (cVar2 = FUN_142340f60(lVar3), cVar2 == '\0')) &&
       ((*(uint *)(lVar3 + 8) >> 0x12 & 1) == 0)) {
      lVar3 = operator_new(0x60);
      if ((lVar3 != 0) && (lVar3 = FUN_14237e540(lVar3,param_1), lVar3 != 0)) {
        return;
      }
      goto LAB_14238b6d8;
    }
    plVar4 = plVar4 + 1;
  } while( true );
}



// FUNCTION 14238b700 FUN_14238b700 body=25 status=ok
// SIG undefined FUN_14238b700(void)

undefined8 * FUN_14238b700(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x248);
  *param_2 = *(undefined8 *)(param_1 + 0x240);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 14238b720 FUN_14238b720 body=294 status=ok
// SIG undefined FUN_14238b720(void)

longlong * FUN_14238b720(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x118);
  lVar3 = 0;
  *param_2 = 0;
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x88), lVar2 != 0)) {
    *param_2 = lVar2;
    return param_2;
  }
  lVar2 = FUN_142a232e0();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  lVar2 = lVar3;
  if (bVar1) {
    lVar3 = *(longlong *)(param_1 + 0x728);
    lVar2 = param_1;
  }
  if ((lVar2 != 0) && (lVar3 != 0)) {
    lVar2 = *(longlong *)(lVar3 + 0x50);
    if (lVar2 == 0) {
      lVar2 = *(longlong *)(lVar3 + 0x48);
    }
    *param_2 = lVar2;
    return param_2;
  }
  lVar2 = FUN_142a07000();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (*(longlong *)(param_1 + 0x718) != 0)) {
    *param_2 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0xe0);
  }
  return param_2;
}



// FUNCTION 14238b850 FUN_14238b850 body=40 status=ok
// SIG undefined FUN_14238b850(void)

undefined8 FUN_14238b850(longlong param_1)

{
  float fVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  
  fVar1 = 0.0;
  uVar3 = 0;
  if (*(float *)(param_1 + 0x1dc) != 0.0) {
    uVar2 = FUN_14236c620();
    uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
    fVar1 = (float)uVar2 * *(float *)(param_1 + 0x1dc);
  }
  return CONCAT44(uVar3,fVar1);
}



// FUNCTION 14238b900 GetInfluenceBoundingRadius body=86 status=ok
// SIG undefined GetInfluenceBoundingRadius(void)

undefined8 UReflectionCaptureComponent::GetInfluenceBoundingRadius(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Components/ReflectionCaptureComponent.h"
             ,0x53,L"Pure virtual not implemented (%s)",
             L"UReflectionCaptureComponent::GetInfluenceBoundingRadius");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Components/ReflectionCaptureComponent.h"
             ,0x53,L"Pure virtual not implemented (%s)",
             L"UReflectionCaptureComponent::GetInfluenceBoundingRadius");
  return 0;
}



// FUNCTION 14238b970 FUN_14238b970 body=8 status=ok
// SIG undefined FUN_14238b970(void)

undefined8 FUN_14238b970(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x650);
}



// FUNCTION 14238b980 FUN_14238b980 body=1826 status=ok
// SIG undefined FUN_14238b980(void)

void FUN_14238b980(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146af0aa0) && (_Init_thread_header(&DAT_146af0aa0), DAT_146af0aa0 == -1)) {
    uVar1 = FUN_1429ff160();
    FUN_1429ff160();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bAbsoluteLocation",1);
    DAT_146af0a98 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af0aa0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af0a98 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af0a98 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af0a98 + 0x30));
  }
  if ((*piVar5 < DAT_146af0ab0) && (_Init_thread_header(&DAT_146af0ab0), DAT_146af0ab0 == -1)) {
    uVar1 = FUN_1429ff160();
    FUN_1429ff160();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bAbsoluteRotation",1);
    DAT_146af0aa8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af0ab0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af0aa8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af0aa8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af0aa8 + 0x30));
  }
  if ((*piVar5 < DAT_146af0ac0) && (_Init_thread_header(&DAT_146af0ac0), DAT_146af0ac0 == -1)) {
    uVar1 = FUN_1429ff160();
    FUN_1429ff160();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bAbsoluteScale",1);
    DAT_146af0ab8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af0ac0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af0ab8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af0ab8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af0ab8 + 0x30));
  }
  if ((*piVar5 < DAT_146af0ad0) && (_Init_thread_header(&DAT_146af0ad0), DAT_146af0ad0 == -1)) {
    uVar1 = FUN_1429ff160();
    FUN_1429ff160();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bVisible",1);
    DAT_146af0ac8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af0ad0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af0ac8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af0ac8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af0ac8 + 0x30));
  }
  if ((*piVar5 < DAT_146af0ae0) && (_Init_thread_header(&DAT_146af0ae0), DAT_146af0ae0 == -1)) {
    uVar1 = FUN_1429ff160();
    FUN_1429ff160();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AttachParent",1);
    DAT_146af0ad8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af0ae0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af0ad8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af0ad8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af0ad8 + 0x30));
  }
  if ((*piVar5 < DAT_146af0af0) && (_Init_thread_header(&DAT_146af0af0), DAT_146af0af0 == -1)) {
    uVar1 = FUN_1429ff160();
    FUN_1429ff160();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AttachChildren",1);
    DAT_146af0ae8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af0af0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af0ae8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af0ae8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af0ae8 + 0x30));
  }
  if ((*piVar5 < DAT_146af0b00) && (_Init_thread_header(&DAT_146af0b00), DAT_146af0b00 == -1)) {
    uVar1 = FUN_1429ff160();
    FUN_1429ff160();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AttachSocketName",1);
    DAT_146af0af8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af0b00);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af0af8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af0af8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af0af8 + 0x30));
  }
  if ((*piVar5 < DAT_146af0b10) && (_Init_thread_header(&DAT_146af0b10), DAT_146af0b10 == -1)) {
    uVar1 = FUN_1429ff160();
    FUN_1429ff160();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RelativeLocation",1);
    DAT_146af0b08 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af0b10);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af0b08 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af0b08 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af0b08 + 0x30));
  }
  if ((*piVar5 < DAT_146af0b20) && (_Init_thread_header(&DAT_146af0b20), DAT_146af0b20 == -1)) {
    uVar1 = FUN_1429ff160();
    FUN_1429ff160();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RelativeRotation",1);
    DAT_146af0b18 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af0b20);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af0b18 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af0b18 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af0b18 + 0x30));
  }
  if ((*piVar5 < DAT_146af0b30) && (_Init_thread_header(&DAT_146af0b30), DAT_146af0b30 == -1)) {
    uVar1 = FUN_1429ff160();
    FUN_1429ff160();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RelativeScale3D",1);
    DAT_146af0b28 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af0b30);
  }
  if (0 < *(int *)(DAT_146af0b28 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af0b28 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146af0b28 + 0x30));
  }
  return;
}



// FUNCTION 14238c0b0 FUN_14238c0b0 body=245 status=ok
// SIG undefined FUN_14238c0b0(void)

int * FUN_14238c0b0(longlong param_1)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x118) == 0) {
    return (int *)0x0;
  }
  lVar5 = AActor::GetLevel();
  if (lVar5 == 0) {
    return (int *)0x0;
  }
  if (*(longlong *)(lVar5 + 0xc0) == 0) {
    return (int *)0x0;
  }
  lVar6 = FUN_14256ac50();
  if (((lVar6 == 0) || (*(longlong *)(lVar6 + 0x1f0) == 0)) && (*(longlong *)(lVar5 + 0x1f0) == 0))
  {
    return (int *)0x0;
  }
  local_18 = *(undefined4 *)(param_1 + 0x2fc);
  uStack_14 = *(undefined4 *)(param_1 + 0x300);
  uStack_10 = *(undefined4 *)(param_1 + 0x304);
  uStack_c = *(undefined4 *)(param_1 + 0x308);
  piVar7 = (int *)FUN_14256d700(local_18,&local_18);
  lVar5 = DAT_146af08a8;
  if (piVar7 == (int *)0x0) {
    return (int *)0x0;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
    lVar6 = 4;
  }
  else {
    lVar6 = 0;
  }
  iVar1 = *(int *)(lVar6 + lVar5);
  if (iVar1 < 1) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0x400;
    if (iVar1 < 0x400) {
      iVar4 = iVar1;
    }
  }
  if (*piVar7 != iVar4) {
    return (int *)0x0;
  }
  return piVar7;
}



// FUNCTION 14238c1c0 GetNavigationBounds body=179 status=ok
// SIG undefined GetNavigationBounds(void)

undefined8 * UPrimitiveComponent::GetNavigationBounds(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(param_1 + -0xf8);
  fVar2 = *(float *)(param_1 + -0xec);
  fVar3 = *(float *)(param_1 + -0xf4);
  fVar4 = *(float *)(param_1 + -0xfc);
  fVar5 = *(float *)(param_1 + -0xf0);
  fVar6 = *(float *)(param_1 + -0x100);
  *(undefined1 *)(param_2 + 3) = 1;
  *param_2 = CONCAT44(fVar4 - fVar5,fVar6 - fVar3);
  *(float *)(param_2 + 1) = fVar1 - fVar2;
  *(ulonglong *)((longlong)param_2 + 0xc) = CONCAT44(fVar4 + fVar5,fVar6 + fVar3);
  *(float *)((longlong)param_2 + 0x14) = fVar1 + fVar2;
  return param_2;
}



// FUNCTION 14238c280 FUN_14238c280 body=899 status=ok
// SIG undefined FUN_14238c280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14238c280(longlong param_1,longlong *param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_128 [32];
  uint local_108;
  uint uStack_104;
  uint *puStack_100;
  int local_f8;
  int iStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  uint *local_d8;
  uint uStack_d0;
  int iStack_cc;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 uStack_b8;
  uint *puStack_b0;
  uint uStack_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 local_90;
  uint local_88 [4];
  uint *local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar12 = 0;
  iVar1 = *(int *)(param_1 + 0x3a8);
  if (iVar1 < 0xd) {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
    }
    lVar15 = *(longlong *)(param_1 + 0x3a0);
    lVar14 = (longlong)*(int *)(param_1 + 0x3a8) * 0xa0 + lVar15;
    if (lVar15 != lVar14) {
LAB_14238c300:
      lVar7 = FWeakObjectPtr::Get(lVar15 + 0x7c);
      if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x118), lVar7 != 0)) {
        if (param_3 != 0) {
          uVar8 = FUN_1428dfc70();
          uVar11 = param_3;
          do {
            if (uVar11 == uVar8) {
              uVar8 = FUN_1428dfc70();
              uVar11 = param_3;
              goto LAB_14238c348;
            }
            uVar11 = *(ulonglong *)(uVar11 + 0x30);
          } while (uVar11 != 0);
        }
        goto LAB_14238c38f;
      }
      goto LAB_14238c3df;
    }
  }
  else {
    local_98 = 0;
    local_90 = 0;
    local_78 = (uint *)0x0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_14238c610(param_1,&local_98);
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) < (int)local_90 - local_64) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
    }
    iVar1 = (int)local_70;
    puStack_100 = local_88;
    local_108 = 0;
    uStack_104 = 1;
    iStack_f4 = 0;
    uStack_f0 = 0;
    if ((int)local_70 != 0) {
      puVar13 = local_88;
      if (local_78 != (uint *)0x0) {
        puVar13 = local_78;
      }
      uVar2 = *puVar13;
      uVar11 = uVar12;
      while (uVar2 == 0) {
        iVar6 = (int)uVar12;
        uStack_f0 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_f0;
        local_108 = iVar6 + 1;
        uVar12 = (ulonglong)local_108;
        if ((int)((int)local_70 + -1 + ((int)local_70 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) {
          iStack_f4 = (int)local_70;
          goto LAB_14238c51a;
        }
        uVar2 = puVar13[(longlong)iVar6 + 1];
      }
      uStack_104 = -uVar2 & uVar2;
      iVar6 = 0x1f;
      if (uStack_104 != 0) {
        for (; uStack_104 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_104 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      iStack_f4 = (uStack_f0 - iVar6) + 0x1f;
      if ((int)local_70 < iStack_f4) {
        iStack_f4 = (int)local_70;
      }
    }
LAB_14238c51a:
    uStack_d0 = 0xffffffff;
    iStack_cc = iStack_f4;
    local_c8 = CONCAT44(uStack_ec,uStack_f0);
    local_c0 = &local_98;
    iStack_f4 = (int)local_70;
    uStack_b8 = CONCAT44(uStack_104,local_108);
    local_f8 = -1 << ((byte)local_70 & 0x1f);
    uStack_e0 = local_108;
    uStack_dc = uStack_104;
    local_d8 = puStack_100;
    puStack_b0 = puStack_100;
    uStack_a0 = local_c8;
    local_e8 = local_c0;
    uStack_a8 = uStack_d0;
    iStack_a4 = iStack_cc;
    while( true ) {
      if ((iStack_cc == iVar1) && (local_d8 == local_88)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if ((bVar5) && (local_e8 == &local_98)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) break;
      iVar6 = (int)param_2[1];
      uVar4 = *(undefined8 *)(*local_e8 + (longlong)iStack_cc * 0x10);
      *(int *)(param_2 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar6 * 8) = uVar4;
      uStack_d0 = uStack_d0 & ~uStack_dc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
    }
    local_50 = 0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_98);
  }
  return;
  while (uVar11 = *(ulonglong *)(uVar11 + 0x30), uVar9 = uVar12, uVar11 != 0) {
LAB_14238c348:
    uVar9 = param_3;
    if (uVar11 == uVar8) break;
  }
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(uVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(uVar9 + 0x90) * 8) !=
      uVar9 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
LAB_14238c38f:
    plVar3 = (longlong *)*param_2;
    iVar1 = (int)param_2[1];
    for (plVar10 = plVar3; plVar10 != plVar3 + iVar1; plVar10 = plVar10 + 1) {
      if (*plVar10 == lVar7) {
        if ((int)((longlong)plVar10 - (longlong)plVar3 >> 3) != -1) goto LAB_14238c3df;
        break;
      }
    }
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar7;
  }
LAB_14238c3df:
  lVar15 = lVar15 + 0xa0;
  if (lVar15 == lVar14) {
    return;
  }
  goto LAB_14238c300;
}



// FUNCTION 14238c610 FUN_14238c610 body=446 status=ok
// SIG undefined FUN_14238c610(void)

void FUN_14238c610(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Dst;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_2 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_2 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x34) = 0;
  iVar2 = *(int *)(param_2 + 0x28) + 0x1f;
  _Dst = *(void **)(param_2 + 0x20);
  if (*(void **)(param_2 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_2 + 0x10);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  *(undefined4 *)(param_2 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_2 + 0x48)) {
    uVar8 = 0;
    uVar10 = (ulonglong)*(uint *)(param_2 + 0x48);
    do {
      lVar9 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        lVar9 = param_2 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_2 + 0x48) - 1U & uVar8;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(lVar9 + uVar3 * 4) = 0xffffffff;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34) < *(int *)(param_1 + 0x3a8)) {
    FUN_1405effc0(param_2);
  }
  lVar9 = *(longlong *)(param_1 + 0x3a0);
  lVar11 = (longlong)*(int *)(param_1 + 0x3a8) * 0xa0 + lVar9;
joined_r0x00014238c6fe:
  if (lVar9 == lVar11) {
    return;
  }
  lVar4 = FWeakObjectPtr::Get(lVar9 + 0x7c);
  if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x118), local_res10 = lVar4, lVar4 != 0)) {
    if (param_3 != 0) {
      lVar5 = FUN_1428dfc70();
      lVar7 = param_3;
      do {
        if (lVar7 == lVar5) {
          lVar5 = FUN_1428dfc70();
          lVar7 = param_3;
          goto LAB_14238c750;
        }
        lVar7 = *(longlong *)(lVar7 + 0x30);
      } while (lVar7 != 0);
    }
    goto LAB_14238c796;
  }
  goto LAB_14238c7ab;
  while (lVar7 = *(longlong *)(lVar7 + 0x30), lVar7 != 0) {
LAB_14238c750:
    lVar6 = param_3;
    if (lVar7 == lVar5) goto LAB_14238c765;
  }
  lVar6 = 0;
LAB_14238c765:
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
LAB_14238c796:
    FUN_14058c900(param_2,local_res8,&local_res10,0);
  }
LAB_14238c7ab:
  lVar9 = lVar9 + 0xa0;
  goto joined_r0x00014238c6fe;
}



// FUNCTION 14238c7d0 FUN_14238c7d0 body=829 status=ok
// SIG undefined FUN_14238c7d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14238c7d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  undefined1 auStack_128 [32];
  int local_108;
  uint uStack_104;
  uint *puStack_100;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [8];
  longlong local_e0;
  longlong *local_d8;
  int iStack_d0;
  uint uStack_cc;
  uint *local_c8;
  uint uStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 uStack_a8;
  uint *puStack_a0;
  uint uStack_98;
  int iStack_94;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 local_80;
  uint local_78 [4];
  uint *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  iVar1 = *(int *)(param_1 + 0x3a8);
  if (iVar1 < 0xd) {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
    }
    lVar9 = *(longlong *)(param_1 + 0x3a0);
    lVar11 = (longlong)*(int *)(param_1 + 0x3a8) * 0xa0 + lVar9;
    for (; lVar9 != lVar11; lVar9 = lVar9 + 0xa0) {
      lVar6 = FWeakObjectPtr::Get(lVar9 + 0x7c);
      if (lVar6 != 0) {
        plVar3 = (longlong *)*param_2;
        iVar1 = (int)param_2[1];
        for (plVar8 = plVar3; plVar8 != plVar3 + iVar1; plVar8 = plVar8 + 1) {
          if (*plVar8 == lVar6) {
            if ((int)((longlong)plVar8 - (longlong)plVar3 >> 3) != -1) goto LAB_14238c8aa;
            break;
          }
        }
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(longlong *)((longlong)iVar1 * 8 + *param_2) = lVar6;
      }
LAB_14238c8aa:
    }
  }
  else {
    local_88 = 0;
    local_80 = 0;
    local_68 = (uint *)0x0;
    local_5c = 0;
    local_48 = 0;
    local_40 = 0;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_60 = 0;
    if (0 < iVar1) {
      FUN_1405effc0(&local_88);
    }
    lVar9 = *(longlong *)(param_1 + 0x3a0);
    lVar11 = (longlong)*(int *)(param_1 + 0x3a8) * 0xa0 + lVar9;
    for (; lVar9 != lVar11; lVar9 = lVar9 + 0xa0) {
      local_e0 = FWeakObjectPtr::Get(lVar9 + 0x7c);
      if (local_e0 != 0) {
        FUN_14058c900(&local_88,local_e8,&local_e0,0);
      }
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) < (int)local_80 - local_54) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
    }
    iVar1 = local_60;
    uStack_104 = 1;
    local_108 = 0;
    puStack_100 = local_78;
    iStack_f4 = 0;
    iStack_f0 = 0;
    if (local_60 != 0) {
      puVar10 = local_78;
      if (local_68 != (uint *)0x0) {
        puVar10 = local_68;
      }
      uVar2 = *puVar10;
      while (uVar2 == 0) {
        lVar9 = (longlong)local_108;
        iStack_f0 = iStack_f0 + 0x20;
        iVar7 = local_108 + 1;
        bVar5 = (int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_108;
        local_108 = iVar7;
        iStack_f4 = local_60;
        if (bVar5) goto LAB_14238ca1a;
        uVar2 = puVar10[lVar9 + 1];
      }
      uStack_104 = -uVar2 & uVar2;
      iVar7 = 0x1f;
      if (uStack_104 != 0) {
        for (; uStack_104 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_104 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_f4 = (iStack_f0 - iVar7) + 0x1f;
      if (local_60 < iStack_f4) {
        iStack_f4 = local_60;
      }
    }
LAB_14238ca1a:
    uStack_c0 = 0xffffffff;
    iStack_bc = iStack_f4;
    local_b8 = CONCAT44(uStack_ec,iStack_f0);
    local_b0 = &local_88;
    uStack_a8 = CONCAT44(uStack_104,local_108);
    local_f8 = -1 << ((byte)local_60 & 0x1f);
    iStack_d0 = local_108;
    uStack_cc = uStack_104;
    iStack_f4 = local_60;
    local_c8 = puStack_100;
    puStack_a0 = puStack_100;
    uStack_90 = local_b8;
    local_d8 = local_b0;
    uStack_98 = uStack_c0;
    iStack_94 = iStack_bc;
    while (((iStack_bc != iVar1 || (local_c8 != local_78)) || (local_d8 != &local_88))) {
      iVar7 = (int)param_2[1];
      uVar4 = *(undefined8 *)(*local_d8 + (longlong)iStack_bc * 0x10);
      *(int *)(param_2 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar7 * 8) = uVar4;
      uStack_c0 = uStack_c0 & ~uStack_cc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_d0);
    }
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_88);
  }
  return;
}



// FUNCTION 14238cb10 FUN_14238cb10 body=362 status=ok
// SIG undefined FUN_14238cb10(void)

void FUN_14238cb10(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c4);
  uVar2 = *(undefined4 *)(param_1 + 0xa4);
  uVar3 = *(undefined4 *)(param_1 + 0xa8);
  *param_2 = *(undefined4 *)(param_1 + 0xa0);
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar1;
  fVar8 = 1.0 / (*(float *)(param_1 + 0x1d0) * 0.5 * *(float *)(param_1 + 0x1d4));
  auVar7._4_4_ = *(float *)(param_1 + 0x104) * fVar8;
  auVar7._0_4_ = *(float *)(param_1 + 0x100) * fVar8;
  auVar7._8_4_ = *(float *)(param_1 + 0x108) * fVar8;
  auVar7._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 4) = auVar7;
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  uVar4 = *(undefined4 *)(param_1 + 0x48);
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  uVar6 = *(uint *)(param_1 + 0x50);
  param_2[0xe] = 0xc0000000;
  param_2[0xf] = 0x3f800000;
  *(ulonglong *)(param_2 + 8) = CONCAT44(uVar3,uVar2) ^ 0x8000000080000000;
  param_2[10] = uVar6 ^ 0x80000000;
  *(ulonglong *)(param_2 + 0xb) = CONCAT44(uVar4,uVar5);
  param_2[0xd] = uVar1;
  param_2[0x10] = *(undefined4 *)(param_1 + 0x134);
  fVar8 = *(float *)(param_1 + 0x1d0);
  param_2[0x12] = 0;
  param_2[0x11] = fVar8 * 0.5;
  param_2[0x13] = *(float *)(param_1 + 0x1d4) * 0.5;
  *(undefined8 *)(param_2 + 0x14) = DAT_146ac3d68;
  return;
}



// FUNCTION 14238cc80 FUN_14238cc80 body=124 status=ok
// SIG undefined FUN_14238cc80(void)

void FUN_14238cc80(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  for (lVar2 = *(longlong *)(param_1 + 400); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 400)) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 14238cd00 FUN_14238cd00 body=125 status=ok
// SIG undefined FUN_14238cd00(void)

void FUN_14238cd00(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x188)) {
    cVar1 = FWeakObjectPtr::IsValid
                      (*(longlong *)(param_1 + 0x180) +
                       (longlong)(*(int *)(param_1 + 0x188) + -1) * 8);
    if (cVar1 != '\0') {
      FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x180) +
                          (longlong)(*(int *)(param_1 + 0x188) + -1) * 8);
      return;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
    if (lVar2 == 0) {
      return;
    }
  }
  FUN_1428cb8d0(lVar2);
  return;
}



// FUNCTION 14238cd80 FUN_14238cd80 body=34 status=ok
// SIG undefined FUN_14238cd80(void)

undefined8 FUN_14238cd80(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x4a8))(param_1,param_2,&DAT_1468b5b70);
  return param_2;
}



// FUNCTION 14238cdb0 FUN_14238cdb0 body=170 status=ok
// SIG undefined FUN_14238cdb0(void)

longlong * FUN_14238cdb0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  bVar1 = *(byte *)(param_1 + 0x61c);
  *(byte *)((longlong)param_2 + 0x14) = *(byte *)(param_1 + 0x61c) & 1;
  if (((bVar1 & 2) == 0) && (lVar2 = *(longlong *)(param_1 + -0x140), lVar2 != 0)) {
    lVar5 = FUN_142a047d0();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar4 = 0;
      goto LAB_14238ce22;
    }
  }
  uVar4 = 1;
LAB_14238ce22:
  *(undefined1 *)((longlong)param_2 + 0x15) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(param_1 + 0x614);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x618);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x610);
  *param_2 = param_1 + 0x10;
  return param_2;
}



// FUNCTION 14238ce60 FUN_14238ce60 body=100 status=ok
// SIG undefined FUN_14238ce60(void)

int FUN_14238ce60(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  
  lVar3 = DAT_146af08a8;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    if (DVar5 != DAT_1468c21c0) {
      lVar6 = 4;
      goto LAB_14238cea1;
    }
  }
  lVar6 = 0;
LAB_14238cea1:
  iVar1 = *(int *)(lVar6 + lVar3);
  if (iVar1 < 1) {
    return 1;
  }
  iVar2 = 0x400;
  if (iVar1 < 0x400) {
    iVar2 = iVar1;
  }
  return iVar2;
}



// FUNCTION 14238ced0 FUN_14238ced0 body=483 status=ok
// SIG undefined FUN_14238ced0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14238ced0(longlong param_1,float *param_2,float *param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar21;
  undefined1 auStack_d8 [48];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_58 [16];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  param_2[3] = param_3[3];
  plVar1 = *(longlong **)(param_1 + 400);
  if ((plVar1 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x24c) & 8) == 0)) {
    uVar7 = (**(code **)(*plVar1 + 0x420))(plVar1,&local_78,*(undefined8 *)(param_1 + 0x198),0);
    auVar16._12_4_ = 0;
    auVar16._0_12_ = *(undefined1 (*) [12])(param_1 + 0x204);
    auVar17._12_4_ = 0;
    auVar17._0_12_ = local_58._0_12_;
    auVar17 = minps(auVar16,auVar17);
    auVar18._4_4_ = -(uint)(auVar17._4_4_ < fRam0000000146af09c4);
    auVar18._0_4_ = -(uint)(auVar17._0_4_ < _DAT_146af09c0);
    auVar18._8_4_ = -(uint)(auVar17._8_4_ < fRam0000000146af09c8);
    auVar18._12_4_ = -(uint)(auVar17._12_4_ < fRam0000000146af09cc);
    iVar8 = movmskps(uVar7,auVar18);
    if (iVar8 == 0) {
      fVar2 = *param_3;
      fVar3 = param_3[1];
      fVar4 = param_3[2];
      fVar5 = param_3[3];
      local_78 = -local_78;
      fStack_70 = -fStack_70;
      fStack_74 = -fStack_74;
      fVar13 = local_78 * fVar4 * fRam0000000146af08d4;
      fVar14 = local_78 * fVar3 * fRam0000000146af08d8;
      fVar15 = local_78 * fVar2 * fRam0000000146af08dc;
      fVar10 = fStack_74 * fVar5 * fRam0000000146af08c4;
      fVar11 = fStack_74 * fVar2 * fRam0000000146af08c8;
      fVar12 = fStack_74 * fVar3 * fRam0000000146af08cc;
      fVar19 = fStack_70 * fVar2 * fRam0000000146af08b4;
      fVar20 = fStack_70 * fVar5 * fRam0000000146af08b8;
      fVar21 = fStack_70 * fVar4 * fRam0000000146af08bc;
      *param_2 = local_78 * fVar5 * _DAT_146af08d0 + fStack_6c * fVar2 +
                 fStack_74 * fVar4 * _DAT_146af08c0 + fStack_70 * fVar3 * _DAT_146af08b0;
      param_2[1] = fVar13 + fStack_6c * fVar3 + fVar10 + fVar19;
      param_2[2] = fVar14 + fStack_6c * fVar4 + fVar11 + fVar20;
      param_2[3] = fVar15 + fStack_6c * fVar5 + fVar12 + fVar21;
    }
    else {
      local_98 = *(undefined8 *)(param_1 + 0x220);
      uStack_90 = *(undefined8 *)(param_1 + 0x228);
      local_88 = *(undefined4 *)(param_1 + 0x230);
      uStack_84 = *(undefined4 *)(param_1 + 0x234);
      uStack_80 = *(undefined4 *)(param_1 + 0x238);
      uStack_7c = *(undefined4 *)(param_1 + 0x23c);
      local_a8 = *param_3;
      fStack_a4 = param_3[1];
      fStack_a0 = param_3[2];
      fStack_9c = param_3[3];
      puVar9 = (undefined8 *)FUN_14162bcf0(&local_a8,local_48,&local_78);
      uVar6 = puVar9[1];
      *(undefined8 *)param_2 = *puVar9;
      *(undefined8 *)(param_2 + 2) = uVar6;
    }
  }
  return param_2;
}



// FUNCTION 14238d0c0 FUN_14238d0c0 body=366 status=ok
// SIG undefined FUN_14238d0c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14238d0c0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 *puVar11;
  float *pfVar12;
  undefined1 auVar13 [16];
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_18;
  uint uStack_10;
  undefined4 uStack_c;
  
  pfVar12 = (float *)(param_1 + 0x280);
  if (((*(float *)(param_1 + 0x1f8) != *pfVar12) ||
      (*(float *)(param_1 + 0x1fc) != *(float *)(param_1 + 0x284))) ||
     (*(float *)(param_1 + 0x200) != *(float *)(param_1 + 0x288))) {
    local_18 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x1f8);
    auVar13._12_4_ = 0;
    auVar13._0_12_ = *(undefined1 (*) [12])(param_1 + 0x1f8);
    fVar5 = (float)DAT_146af0860;
    fVar6 = DAT_146af0860._4_4_;
    fVar7 = DAT_146af0860._8_4_;
    auVar13 = divps(auVar13,_DAT_146af0860);
    fVar15 = (float)local_18 - (float)(int)auVar13._0_4_ * fVar5;
    fVar16 = (float)((ulonglong)local_18 >> 0x20) - (float)(int)auVar13._4_4_ * fVar6;
    fVar17 = *(float *)(param_1 + 0x200) - (float)(int)auVar13._8_4_ * fVar7;
    fVar15 = (float)(((uint)(fVar5 + fVar15) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                    (uint)(fVar5 + fVar15));
    fVar16 = (float)(((uint)(fVar6 + fVar16) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                    (uint)(fVar6 + fVar16));
    fVar17 = (float)(((uint)(fVar7 + fVar17) ^ (uint)fVar17) & -(uint)(0.0 <= fVar17) ^
                    (uint)(fVar7 + fVar17));
    uVar14 = ((uint)(fVar17 - fVar7) ^ (uint)fVar17) & -(uint)(fRam0000000146af0858 < fVar17) ^
             (uint)fVar17;
    _uStack_10 = CONCAT44(uStack_c,uVar14);
    *(ulonglong *)pfVar12 =
         CONCAT44(((uint)(fVar16 - fVar6) ^ (uint)fVar16) & -(uint)(fRam0000000146af0854 < fVar16) ^
                  (uint)fVar16,
                  ((uint)(fVar15 - fVar5) ^ (uint)fVar15) & -(uint)(_DAT_146af0850 < fVar15) ^
                  (uint)fVar15);
    *(uint *)(param_1 + 0x288) = uVar14;
    puVar11 = (undefined8 *)FRotator::Quaternion(pfVar12,&local_18);
    uVar10 = puVar11[1];
    *(undefined8 *)(param_1 + 0x270) = *puVar11;
    *(undefined8 *)(param_1 + 0x278) = uVar10;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x278);
  uVar1 = *(undefined4 *)(param_1 + 500);
  uVar2 = *(undefined4 *)(param_1 + 0x1ec);
  *param_2 = *(undefined8 *)(param_1 + 0x270);
  param_2[1] = uVar10;
  uVar3 = *(undefined4 *)(param_1 + 0x208);
  uVar4 = *(undefined4 *)(param_1 + 0x20c);
  auVar8._4_4_ = *(undefined4 *)(param_1 + 0x1f0);
  auVar8._0_4_ = uVar2;
  auVar8._8_4_ = uVar1;
  auVar8._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 2) = auVar8;
  auVar9._4_4_ = uVar3;
  auVar9._0_4_ = *(undefined4 *)(param_1 + 0x204);
  auVar9._8_4_ = uVar4;
  auVar9._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 4) = auVar9;
  return param_2;
}



// FUNCTION 14238d230 FUN_14238d230 body=210 status=ok
// SIG undefined FUN_14238d230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_14238d230(longlong param_1,uint *param_2)

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
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  
  fVar1 = *(float *)(param_1 + 0x210);
  fVar2 = *(float *)(param_1 + 0x214);
  fVar3 = *(float *)(param_1 + 0x218);
  fVar4 = *(float *)(param_1 + 0x21c);
  fVar8 = fVar2 + fVar2;
  fVar9 = fVar3 + fVar3;
  fVar14 = fVar1 * (fVar1 + fVar1);
  fVar13 = fVar4 * (fVar1 + fVar1);
  fVar5 = *(float *)(param_1 + 0x230);
  fVar6 = *(float *)(param_1 + 0x234);
  fVar7 = *(float *)(param_1 + 0x238);
  uVar10 = (uint)((fRam0000000146af0834 - (fVar3 * fVar9 + fVar14)) * fVar6) & uRam0000000146af0844;
  uVar11 = (uint)((fRam0000000146af0838 - (fVar2 * fVar8 + fVar14)) * fVar7) & uRam0000000146af0848;
  uVar12 = (uint)((fRam0000000146af083c - (fVar14 + fVar14)) * *(float *)(param_1 + 0x23c)) &
           uRam0000000146af084c;
  *param_2 = (uint)((_DAT_146af0830 - (fVar3 * fVar9 + fVar2 * fVar8)) * fVar5) & _DAT_146af0840;
  param_2[1] = (uint)((fVar4 * fVar9 + fVar1 * fVar8) * fVar5);
  param_2[2] = (uint)(fVar5 * (fVar1 * fVar9 - fVar4 * fVar8));
  param_2[3] = uVar12;
  param_2[4] = (uint)(fVar6 * (fVar1 * fVar8 - fVar4 * fVar9));
  param_2[5] = uVar10;
  param_2[6] = (uint)((fVar13 + fVar2 * fVar9) * fVar6);
  param_2[7] = uVar12;
  param_2[8] = (uint)((fVar4 * fVar8 + fVar1 * fVar9) * fVar7);
  param_2[9] = (uint)(fVar7 * (fVar2 * fVar9 - fVar13));
  param_2[10] = uVar11;
  param_2[0xb] = uVar12;
  fVar1 = fRam0000000146af083c;
  uVar10 = *(uint *)(param_1 + 0x224);
  uVar11 = *(uint *)(param_1 + 0x228);
  param_2[0xc] = *(uint *)(param_1 + 0x220);
  param_2[0xd] = uVar10;
  param_2[0xe] = uVar11;
  param_2[0xf] = (uint)fVar1;
  return param_2;
}



// FUNCTION 14238d310 FUN_14238d310 body=100 status=ok
// SIG undefined FUN_14238d310(void)

void FUN_14238d310(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  
  FUN_141758340();
  cVar1 = FBodyInstance::IsValidBodyInstance(param_1 + 0x3b0);
  if (cVar1 != '\0') {
    FUN_142696210(param_1 + 0x3b0,param_2);
  }
  if (*(longlong **)(param_1 + 0x640) != (longlong *)0x0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x640) + 0xf0))();
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar2;
  }
  return;
}



// FUNCTION 14238d380 FUN_14238d380 body=135 status=ok
// SIG undefined FUN_14238d380(void)

float * FUN_14238d380(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *(float *)(param_1 + 0x210);
  fVar2 = *(float *)(param_1 + 0x214);
  fVar3 = *(float *)(param_1 + 0x218);
  fVar4 = *(float *)(param_1 + 0x21c);
  fVar5 = fVar2 * 0.0 - fVar3 * 1.0;
  fVar6 = fVar3 * 0.0 - fVar1 * 0.0;
  fVar7 = fVar1 * 1.0 - fVar2 * 0.0;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  *param_2 = (fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5 + 0.0;
  param_2[2] = (fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7 + 0.0;
  param_2[1] = (fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6 + 1.0;
  return param_2;
}



// FUNCTION 14238d410 FUN_14238d410 body=72 status=ok
// SIG undefined FUN_14238d410(void)

undefined8 FUN_14238d410(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  if (*(char *)(param_1 + 0x328) != '\0') {
    return *(undefined8 *)(param_1 + 0x380);
  }
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x1b8);
  }
  return 0;
}



// FUNCTION 14238d460 GetSocketLocation body=93 status=ok
// SIG undefined GetSocketLocation(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
USceneComponent::GetSocketLocation(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  lVar3 = (**(code **)(*param_1 + 0x420))(param_1,local_48,param_3,0);
  uVar1 = *(undefined4 *)(lVar3 + 0x14);
  uVar2 = *(undefined4 *)(lVar3 + 0x18);
  *param_2 = *(undefined4 *)(lVar3 + 0x10);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 14238d4c0 GetSocketQuaternion body=70 status=ok
// SIG undefined GetSocketQuaternion(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
USceneComponent::GetSocketQuaternion(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x420))(param_1,local_48,param_3,0);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 14238d510 GetSocketRotation body=85 status=ok
// SIG undefined GetSocketRotation(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
USceneComponent::GetSocketRotation(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x420))(param_1,local_48,param_3,0);
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  FQuat::Rotator(&local_58,param_2);
  return param_2;
}



// FUNCTION 14238d570 FUN_14238d570 body=243 status=ok
// SIG undefined FUN_14238d570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14238d570(longlong param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
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
  ulonglong local_18;
  
  uVar2 = uRam00000001468b5b78;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (param_4 == 1) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
    if (lVar1 == 0) {
      puVar3 = (undefined8 *)&DAT_1468b5b70;
    }
    else {
      puVar3 = (undefined8 *)(lVar1 + 0x210);
    }
    local_48 = *puVar3;
    uStack_40 = puVar3[1];
    local_38 = *(undefined4 *)(puVar3 + 2);
    uStack_34 = *(undefined4 *)((longlong)puVar3 + 0x14);
    uStack_30 = *(undefined4 *)(puVar3 + 3);
    uStack_2c = *(undefined4 *)((longlong)puVar3 + 0x1c);
    local_28 = *(undefined4 *)(puVar3 + 4);
    uStack_24 = *(undefined4 *)((longlong)puVar3 + 0x24);
    uStack_20 = *(undefined4 *)(puVar3 + 5);
    uStack_1c = *(undefined4 *)((longlong)puVar3 + 0x2c);
    FUN_14162bcf0(param_1 + 0x210,local_38,&local_48);
    return param_2;
  }
  if (param_4 - 2U < 2) {
    *param_2 = _DAT_1468b5b70;
    param_2[1] = uVar2;
    uVar2 = uRam00000001468b5b88;
    param_2[2] = _DAT_1468b5b80;
    param_2[3] = uVar2;
    uVar2 = uRam00000001468b5b98;
    param_2[4] = _DAT_1468b5b90;
    param_2[5] = uVar2;
    return param_2;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x218);
  *param_2 = *(undefined8 *)(param_1 + 0x210);
  param_2[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x228);
  param_2[2] = *(undefined8 *)(param_1 + 0x220);
  param_2[3] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x238);
  param_2[4] = *(undefined8 *)(param_1 + 0x230);
  param_2[5] = uVar2;
  return param_2;
}



// FUNCTION 14238d670 GetSocketWorldLocationAndRotation body=128 status=ok
// SIG undefined GetSocketWorldLocationAndRotation(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void USceneComponent::GetSocketWorldLocationAndRotation
               (longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined1 auStack_78 [48];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x420))(param_1,&local_48,param_2,0);
  *param_3 = local_38;
  param_3[1] = uStack_34;
  param_3[2] = uStack_30;
  *param_4 = local_48;
  param_4[1] = uStack_40;
  return;
}



// FUNCTION 14238d6f0 FUN_14238d6f0 body=168 status=ok
// SIG undefined FUN_14238d6f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14238d6f0(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
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
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x420))(param_1,&local_48,param_2,0);
  local_60 = uStack_30;
  *param_3 = local_38;
  param_3[1] = uStack_34;
  local_58 = local_48;
  uStack_54 = uStack_44;
  uStack_50 = uStack_40;
  uStack_4c = uStack_3c;
  param_3[2] = uStack_30;
  FQuat::Rotator(&local_58,&local_68);
  *param_4 = local_68;
  *(undefined4 *)(param_4 + 1) = local_60;
  return;
}



// FUNCTION 14238d7a0 FUN_14238d7a0 body=519 status=ok
// SIG undefined FUN_14238d7a0(void)

/* WARNING: Removing unreachable block (ram,0x00014238d990) */

void FUN_14238d7a0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  longlong *local_58;
  ulonglong local_50;
  longlong local_48;
  undefined *local_40;
  undefined4 local_38;
  
  if (*DAT_146b16ce8 != 0) {
    FStreamingTextureLevelContext::BindBuildData(param_2,0);
    local_58 = (longlong *)0x0;
    local_50 = 0;
    (**(code **)(*param_1 + 0x6a0))(param_1,&local_58,0);
    plVar2 = local_58;
    if ((int)local_50 != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146af0a00) &&
         (_Init_thread_header(&DAT_146af0a00), DAT_146af0a00 == -1)) {
        puVar9 = &DAT_146531df4;
        for (lVar3 = 4; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar9 = 0x3f800000;
          puVar9 = puVar9 + 1;
        }
        _Init_thread_footer(&DAT_146af0a00);
      }
      uVar5 = local_50 & 0xffffffff;
      local_48 = 0;
      local_40 = &DAT_146531df0;
      local_38 = 0xffff0000;
      iVar4 = (int)local_50;
      plVar2 = local_58;
      while (iVar4 != 0) {
        lVar3 = *plVar2;
        if (lVar3 != 0) {
          local_48 = lVar3;
          FUN_1428583a0(param_2,param_1 + 0x3a,&local_48,(int)param_1[0x3d],param_3);
          uVar5 = local_50 & 0xffffffff;
          plVar2 = local_58;
        }
        iVar4 = (int)uVar5;
        uVar6 = 0;
        uVar8 = 0;
        if (0 < iVar4) {
          do {
            iVar4 = (int)uVar5;
            iVar7 = (int)uVar8;
            if (*(longlong *)(uVar6 + (longlong)plVar2) == lVar3) {
              iVar1 = (iVar4 - iVar7) + -1;
              if (0 < iVar1) {
                iVar1 = 1;
              }
              if (iVar1 != 0) {
                _guard_xfg_dispatch_icall_nop
                          (plVar2 + iVar7,plVar2 + (iVar4 - iVar1),(longlong)iVar1 << 3);
                iVar4 = (int)local_50;
              }
              local_50 = CONCAT44(local_50._4_4_,iVar4 + -1);
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_58);
              uVar5 = local_50 & 0xffffffff;
              iVar7 = iVar7 + -1;
              uVar6 = uVar6 - 8;
              plVar2 = local_58;
            }
            iVar4 = (int)uVar5;
            uVar6 = uVar6 + 8;
            uVar8 = (ulonglong)(iVar7 + 1U);
          } while ((int)(iVar7 + 1U) < iVar4);
        }
      }
    }
    if (plVar2 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14238d9b0 FUN_14238d9b0 body=349 status=ok
// SIG undefined FUN_14238d9b0(void)

void FUN_14238d9b0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  if (((*(byte *)(param_1 + 0x17) & 3) != 3) || (param_1[200] != 0)) {
    (**(code **)(*param_1 + 0x688))();
    iVar9 = 0;
    if (0 < (int)param_3[1]) {
      lVar8 = 0;
      do {
        lVar3 = *param_3;
        cVar5 = IsStreamingTexture(*(undefined8 *)(lVar8 + lVar3));
        if (cVar5 == '\0') {
LAB_14238da7f:
          iVar6 = (int)param_3[1];
          iVar7 = (iVar6 - iVar9) + -1;
          if (0 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar9 * 0x30 + *param_3),
                       (void *)((longlong)(iVar6 - iVar7) * 0x30 + *param_3),(longlong)iVar7 * 0x30)
            ;
            iVar6 = (int)param_3[1];
          }
          *(int *)(param_3 + 1) = iVar6 + -1;
          TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(param_3);
          iVar9 = iVar9 + -1;
          lVar8 = lVar8 + -0x30;
        }
        else {
          fVar2 = *(float *)(lVar8 + 0x24 + lVar3);
          if ((fVar2 <= 1e-08) ||
             (((*(float *)(lVar8 + 0x20 + lVar3) <= 1e-08 && ((*(byte *)(param_1 + 0x17) & 1) != 0))
              || (iVar6 = _finite((double)fVar2), iVar6 == 0)))) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((((*(byte *)((longlong)param_1 + 0x2f1) & 4) == 0) && (!bVar4)) &&
             ((pfVar1 = (float *)(lVar8 + 0x24 + lVar3), 0.0 < *pfVar1 || *pfVar1 == 0.0 ||
              (*(char *)(*(longlong *)(lVar8 + lVar3) + 0x4a) != '\x18')))) goto LAB_14238da7f;
        }
        iVar9 = iVar9 + 1;
        lVar8 = lVar8 + 0x30;
      } while (iVar9 < (int)param_3[1]);
    }
  }
  return;
}



// FUNCTION 14238db80 FUN_14238db80 body=135 status=ok
// SIG undefined FUN_14238db80(void)

float * FUN_14238db80(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *(float *)(param_1 + 0x210);
  fVar2 = *(float *)(param_1 + 0x214);
  fVar3 = *(float *)(param_1 + 0x218);
  fVar4 = *(float *)(param_1 + 0x21c);
  fVar5 = fVar2 * 1.0 - fVar3 * 0.0;
  fVar6 = fVar3 * 0.0 - fVar1 * 1.0;
  fVar7 = fVar1 * 0.0 - fVar2 * 0.0;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  *param_2 = (fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5 + 0.0;
  param_2[2] = (fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7 + 1.0;
  param_2[1] = (fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6 + 0.0;
  return param_2;
}



// FUNCTION 14238dc10 FUN_14238dc10 body=361 status=ok
// SIG undefined FUN_14238dc10(void)

void FUN_14238dc10(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong local_38;
  ulonglong local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong uVar4;
  
  uVar7 = 0;
  local_28 = 0;
  local_20 = 0;
  (**(code **)(*param_1 + 0x6a0))(param_1,&local_28,0);
  local_38 = 0;
  local_30 = 0;
  uVar5 = uVar7;
  uVar6 = uVar7;
  if (0 < (int)local_20) {
    do {
      if (*(longlong *)(uVar6 + local_28) != 0) {
        lVar1 = param_1[0x24];
        if (lVar1 == 0) {
          lVar1 = FUN_1423407b0(param_1);
        }
        uVar4 = local_30;
        local_30 = local_30 & 0xffffffff00000000;
        if ((longlong)uVar4 < 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_38,0);
        }
        uVar2 = DAT_1464c9c14;
        if (lVar1 != 0) {
          uVar2 = *(undefined4 *)(lVar1 + 0x1c0);
        }
        (**(code **)(**(longlong **)(uVar6 + local_28) + 0x2b8))
                  (*(longlong **)(uVar6 + local_28),&local_38,param_3,0,uVar2,0);
        uVar4 = uVar7;
        if (0 < (int)local_30) {
          do {
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2);
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
          } while ((int)uVar3 < (int)local_30);
        }
      }
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar3;
      uVar6 = uVar6 + 8;
    } while ((int)uVar3 < (int)local_20);
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14238dd80 FUN_14238dd80 body=292 status=ok
// SIG undefined FUN_14238dd80(void)

longlong FUN_14238dd80(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x3b0);
  while (iVar1 <= param_2) {
    puVar2 = (undefined8 *)operator_new(0x28);
    puVar4 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR__scalar_deleting_destructor__144a80b30;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar4 = puVar2;
    }
    iVar1 = *(int *)(param_1 + 0x3b0);
    *(int *)(param_1 + 0x3b0) = iVar1 + 1;
    if (*(int *)(param_1 + 0x3b4) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x3a8,iVar1);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x3a8) + (longlong)iVar1 * 8) = puVar4;
    iVar1 = *(int *)(param_1 + 0x3b0);
  }
  lVar3 = *(longlong *)(*(longlong *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x3a8)) + 8);
  if ((*(char *)(param_1 + 0x318) != '\0') || (*(char *)(param_1 + 0x31a) != '\0')) {
    if (lVar3 == 0) {
      FSceneViewStateReference::Allocate();
      return *(longlong *)
              (*(longlong *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x3a8)) + 8);
    }
    if (*(char *)(param_1 + 0x318) != '\0') {
      return lVar3;
    }
  }
  if ((lVar3 != 0) && (*(char *)(param_1 + 0x31a) == '\0')) {
    FSceneViewStateReference::Destroy();
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 14238deb0 FUN_14238deb0 body=745 status=ok
// SIG undefined FUN_14238deb0(void)

ulonglong FUN_14238deb0(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong uStack_10;
  
  uVar9 = FSceneViewFamily::GetFeatureLevel(param_2);
  if (((int)uVar9 < 2) || (DAT_146531d0c == 0)) {
    return uVar9 & 0xffffffffffffff00;
  }
  iVar8 = *(int *)(param_3 + 0xd30);
  *(int *)(param_3 + 0xd30) = iVar8 + 1;
  if (*(int *)(param_3 + 0xd34) < iVar8 + 1) {
    TArray<FWholeSceneProjectedShadowInitializer,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow
              (param_3,iVar8);
  }
  puVar12 = (ulonglong *)0x0;
  lVar10 = *(longlong *)(param_3 + 0xd20);
  if (*(longlong *)(param_3 + 0xd20) == 0) {
    lVar10 = param_3;
  }
  puVar11 = (ulonglong *)((longlong)iVar8 * 0x230 + lVar10);
  if (puVar11 != (ulonglong *)0x0) {
    puVar11[0x12] = 0;
    *(undefined4 *)(puVar11 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x9c) = 0x3f800000;
    *(undefined4 *)(puVar11 + 0x16) = 0;
    *(undefined8 *)((longlong)puVar11 + 0xb4) = 0x4a000000;
    *(undefined4 *)((longlong)puVar11 + 0xbc) = 0;
    puVar11[0x18] = 0x4a000000;
    puVar11[0x26] = 0;
    puVar11[0x28] = 0;
    puVar11[0x3a] = 0;
    puVar11[0x3c] = 0;
    *(undefined1 *)(puVar11 + 0x42) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x214) = 0xffffffff;
    *(undefined2 *)(puVar11 + 0x44) = 0;
    puVar12 = puVar11;
  }
  uVar1 = *(uint *)(param_1 + 0xa8);
  *puVar12 = *(ulonglong *)(param_1 + 0xa0) ^ 0x8000000080000000;
  *(uint *)(puVar12 + 1) = uVar1 ^ 0x80000000;
  uStack_10 = *(ulonglong *)(param_1 + 0x68);
  uVar9 = *(ulonglong *)(param_1 + 0x38);
  uVar6 = *(ulonglong *)(param_1 + 0x40);
  uVar7 = *(ulonglong *)(param_1 + 0x48);
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  uVar3 = *(undefined4 *)(param_1 + 0x54);
  uVar4 = *(undefined4 *)(param_1 + 0x58);
  uVar5 = *(undefined4 *)(param_1 + 0x5c);
  puVar12[2] = *(ulonglong *)(param_1 + 0x30);
  puVar12[3] = uVar9;
  puVar12[4] = uVar6;
  puVar12[5] = uVar7;
  *(undefined4 *)(puVar12 + 6) = uVar2;
  *(undefined4 *)((longlong)puVar12 + 0x34) = uVar3;
  *(undefined4 *)(puVar12 + 7) = uVar4;
  *(undefined4 *)((longlong)puVar12 + 0x3c) = uVar5;
  uStack_10 = uStack_10 & 0xffffffff00000000;
  puVar12[8] = 0;
  puVar12[9] = uStack_10;
  puVar12[10] = 0x3f8000003f800000;
  *(undefined8 *)((longlong)puVar12 + 0x5c) = 0;
  *(undefined4 *)(puVar12 + 0xb) = 0x3f800000;
  *(undefined4 *)((longlong)puVar12 + 100) = 0x3f800000;
  uVar1 = *(uint *)(param_1 + 0x1c0);
  *(undefined4 *)(puVar12 + 0x14) = 0x3dcccccd;
  puVar12[0xd] = 0;
  puVar12[0xe] = (ulonglong)uVar1 << 0x20;
  puVar12[0xf] = CONCAT44(uVar1,uVar1);
  *(undefined4 *)(puVar12 + 0x12) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x94) = 0;
  *(undefined4 *)(puVar12 + 0x13) = 0x3f800000;
  *(undefined4 *)((longlong)puVar12 + 0x9c) = 0;
  *(uint *)(puVar12 + 0x10) = uVar1;
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x1c0);
  *(uint *)((longlong)puVar12 + 0xa4) = *(uint *)(param_1 + 0x1c0);
  *(undefined1 *)(puVar12 + 0x44) = 1;
  if ((*(byte *)(param_1 + 0x182) & 1) == 0) {
LAB_14238e16e:
    uVar9 = uVar9 & 0xffffffffffffff00;
  }
  else {
    iVar8 = FSceneViewFamily::GetFeatureLevel(param_2);
    uVar1 = (&DAT_1464c9c48)[iVar8];
    if ((0x1f < uVar1) || (uVar9 = 0xc0000005, (0xc0000005U >> (uVar1 & 0x1f) & 1) == 0)) {
      if ((uVar1 < 0x1c) && ((0x8c51800U >> (uVar1 & 0x1f) & 1) != 0)) {
        switch(uVar1) {
        default:
          uVar9 = RHIGetShaderLanguageVersion(uVar1);
          if (1 < (uint)uVar9) goto LAB_14238e16a;
          break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xe:
        case 0xf:
        case 0x11:
        case 0x13:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x1a:
        case 0x1d:
          break;
        }
      }
      uVar9 = (ulonglong)(uVar1 - 4);
      if (((uVar1 - 4 & 0xffffffe7) != 0) || (uVar1 == 0xc)) goto LAB_14238e16e;
    }
LAB_14238e16a:
    uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
  }
  *(char *)((longlong)puVar12 + 0x221) = (char)uVar9;
  return CONCAT71((int7)(uVar9 >> 8),1);
}



// FUNCTION 14238e1d0 FUN_14238e1d0 body=339 status=ok
// SIG undefined FUN_14238e1d0(void)

undefined8
FUN_14238e1d0(longlong *param_1,byte *param_2,float param_3,undefined8 param_4,float *param_5)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = 0;
  lVar7 = lVar6;
  if (param_1[0x2f] != 0) {
    lVar7 = *(longlong *)(param_1[0x2f] + 0x118);
  }
  cVar2 = (**(code **)(*param_1 + 0x520))();
  if ((cVar2 != '\0') && (lVar7 != 0)) {
    iVar1 = *(int *)(lVar7 + 0xc);
    lVar4 = lVar6;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      (**(code **)(*param_1 + 0x468))(param_1,param_2,param_3,param_4);
      iVar1 = *(int *)(lVar7 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar5 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar5;
        lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
      }
      if (((((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) && (param_1[0x2f] != 0)) &&
          ((*(byte *)((longlong)param_1 + 0xba) & 4) != 0)) && ((*param_2 & 2) == 0)) {
        *param_5 = (1.0 - *(float *)(param_2 + 0xc)) * param_3;
        return 0;
      }
    }
  }
  return 2;
}



// FUNCTION 14238e330 FUN_14238e330 body=1345 status=ok
// SIG undefined FUN_14238e330(void)

undefined8
FUN_14238e330(longlong *param_1,longlong param_2,float *param_3,undefined8 param_4,float *param_5)

{
  float *pfVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined1 local_a8 [160];
  
  local_b8 = *(undefined8 *)(param_2 + 0x2c);
  local_b0 = *(float *)(param_2 + 0x34);
  (**(code **)(*param_1 + 0x500))(local_b8,&local_c8,&local_b8);
  if ((1.0 < *(float *)((longlong)param_1 + 0x1cc) || *(float *)((longlong)param_1 + 0x1cc) == 1.0)
     || (0.0001 < *(float *)(param_2 + 0xc))) {
    bVar2 = false;
LAB_14238e520:
    fVar11 = *(float *)(param_1 + 0x32);
    fVar13 = *(float *)((longlong)param_1 + 0x18c);
    fVar8 = *(float *)((longlong)param_1 + 0x194);
    fVar7 = fVar13 * fVar13 + fVar11 * fVar11 + fVar8 * fVar8;
    if (fVar7 == 1.0) {
      local_b8 = *(undefined8 *)((longlong)param_1 + 0x18c);
      local_b0 = *(float *)((longlong)param_1 + 0x194);
      fVar10 = (float)((ulonglong)local_b8 >> 0x20);
      fVar12 = (float)local_b8;
      fVar14 = local_b0;
    }
    else {
      fVar10 = DAT_1468b5d94;
      fVar12 = DAT_1468b5d90;
      fVar14 = DAT_1468b5d98;
      if (1e-08 <= fVar7) {
        auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar14 = auVar9._0_4_;
        fVar14 = fVar14 + fVar14 * (0.5 - fVar7 * 0.5 * fVar14 * fVar14);
        fVar14 = fVar14 + fVar14 * (0.5 - fVar7 * 0.5 * fVar14 * fVar14);
        fVar12 = fVar13 * fVar14;
        fVar10 = fVar11 * fVar14;
        fVar14 = fVar8 * fVar14;
      }
    }
    if (fVar12 * local_c8 + fVar10 * local_c4 + fVar14 * local_c0 <= 0.01) goto LAB_14238e41b;
    uVar6 = 0;
  }
  else {
    bVar2 = true;
    if (local_c4 * *(float *)((longlong)param_1 + 0x1d4) + local_c8 * *(float *)(param_1 + 0x3a) +
        local_c0 * *(float *)(param_1 + 0x3b) < 0.999845) goto LAB_14238e520;
LAB_14238e41b:
    uVar6 = 0x40;
  }
  *(uint *)(param_1 + 0x39) = *(uint *)(param_1 + 0x39) & 0xffffffbf | uVar6;
  if (uVar6 == 0) {
LAB_14238e831:
    uVar5 = 1;
  }
  else {
    if (bVar2) {
      fVar11 = *(float *)((longlong)param_1 + 0x1d4);
      fVar13 = *(float *)(param_1 + 0x3a);
      fVar8 = *(float *)(param_1 + 0x3b);
      if (0.0 < fVar13 * local_c8 + fVar11 * local_c4 + fVar8 * local_c0) goto LAB_14238e780;
      fVar12 = fVar8 * local_c4 - fVar11 * local_c0;
      fVar14 = fVar13 * local_c0 - fVar8 * local_c8;
      fVar10 = fVar11 * local_c8 - fVar13 * local_c4;
      fVar7 = fVar14 * fVar14 + fVar12 * fVar12 + fVar10 * fVar10;
      fVar11 = fVar10;
      fVar13 = fVar12;
      fVar8 = fVar14;
      if ((fVar7 != 1.0) &&
         (fVar11 = DAT_1468b5d98, fVar13 = DAT_1468b5d90, fVar8 = DAT_1468b5d94, 1e-08 <= fVar7)) {
        auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar8 = auVar9._0_4_;
        fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
        fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
        fVar11 = fVar8 * fVar10;
        fVar13 = fVar8 * fVar12;
        fVar8 = fVar8 * fVar14;
      }
      pfVar1 = (float *)((longlong)param_1 + 0x18c);
      fVar7 = fVar8 * *(float *)(param_1 + 0x32) + fVar13 * *pfVar1 +
              fVar11 * *(float *)((longlong)param_1 + 0x194);
      *(ulonglong *)pfVar1 = CONCAT44(fVar8 * fVar7,fVar13 * fVar7);
      *(float *)((longlong)param_1 + 0x194) = fVar11 * fVar7;
      if (*(float *)(param_1 + 0x32) * param_3[1] + *pfVar1 * *param_3 +
          *(float *)((longlong)param_1 + 0x194) * param_3[2] < 0.0) {
        *pfVar1 = -*pfVar1;
        *(uint *)(param_1 + 0x32) = *(uint *)(param_1 + 0x32) ^ 0x80000000;
        *(uint *)((longlong)param_1 + 0x194) = *(uint *)((longlong)param_1 + 0x194) ^ 0x80000000;
      }
      local_b0 = *(float *)((longlong)param_1 + 0x194);
      local_b8 = *(undefined8 *)pfVar1;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x4f0))(param_1,local_a8,&local_b8);
    }
    else {
LAB_14238e780:
      puVar4 = (undefined8 *)
               (**(code **)(*param_1 + 0x4a0))
                         (param_1,local_a8,(longlong)param_1 + 0x18c,0x3f800000,&local_c8,param_2);
    }
    *(undefined8 *)((longlong)param_1 + 0x18c) = *puVar4;
    *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(puVar4 + 1);
    fVar11 = *(float *)((longlong)param_1 + 0x18c);
    if (fVar11 * fVar11 + *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32) +
        *(float *)((longlong)param_1 + 0x194) * *(float *)((longlong)param_1 + 0x194) <
        *(float *)((longlong)param_1 + 0x1ec) * *(float *)((longlong)param_1 + 0x1ec)) {
      (**(code **)(*param_1 + 0x530))(param_1,param_2);
    }
    else if ((*param_5 <= 0.0001) ||
            (cVar3 = (**(code **)(*param_1 + 0x550))(param_1,param_2), cVar3 != '\0'))
    goto LAB_14238e831;
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 14238e880 FUN_14238e880 body=536 status=ok
// SIG undefined FUN_14238e880(void)

void FUN_14238e880(longlong *param_1,byte *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 local_d8;
  undefined4 local_d0;
  byte local_c8 [4];
  undefined4 local_c4;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [32];
  
  if ((*(byte *)(param_1 + 0x39) & 2) != 0) {
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x194);
    uVar1 = *(undefined8 *)((longlong)param_1 + 0x18c);
    puVar3 = (undefined8 *)
             (**(code **)(*param_1 + 0x558))(param_1,&local_d8,param_2,param_3,param_4);
    *(undefined8 *)((longlong)param_1 + 0x18c) = *puVar3;
    *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(puVar3 + 1);
    local_bc = *(undefined4 *)(param_2 + 0xc);
    local_b8 = *(undefined4 *)(param_2 + 0x10);
    local_c8[1] = 0;
    local_c8[2] = 0;
    local_c8[3] = 0;
    local_4c = 0;
    local_c8[0] = *param_2 & 3;
    local_b4 = *(undefined8 *)(param_2 + 0x14);
    local_c4 = *(undefined4 *)(param_2 + 4);
    local_a8 = *(undefined8 *)(param_2 + 0x20);
    local_c0 = *(uint *)(param_2 + 8) & 1;
    local_ac = *(undefined4 *)(param_2 + 0x1c);
    local_9c = *(undefined8 *)(param_2 + 0x2c);
    local_a0 = *(undefined4 *)(param_2 + 0x28);
    local_94 = *(undefined4 *)(param_2 + 0x34);
    local_88 = *(undefined4 *)(param_2 + 0x40);
    local_7c = *(undefined4 *)(param_2 + 0x4c);
    local_70 = *(undefined4 *)(param_2 + 0x58);
    local_68 = *(undefined4 *)(param_2 + 0x60);
    local_64 = *(undefined4 *)(param_2 + 100);
    local_60 = *(undefined4 *)(param_2 + 0x68);
    local_5c = *(undefined4 *)(param_2 + 0x6c);
    local_58 = *(undefined4 *)(param_2 + 0x70);
    local_90 = *(undefined8 *)(param_2 + 0x38);
    local_54 = *(undefined4 *)(param_2 + 0x74);
    local_84 = *(undefined8 *)(param_2 + 0x44);
    local_50 = *(undefined4 *)(param_2 + 0x78);
    local_48 = *(undefined8 *)(param_2 + 0x80);
    local_78 = *(undefined8 *)(param_2 + 0x50);
    local_40 = *(undefined8 *)(param_2 + 0x88);
    local_6c = *(undefined4 *)(param_2 + 0x5c);
    local_38 = uVar1;
    local_30 = uVar2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x3e,local_c8);
    local_d8 = *(undefined8 *)((longlong)param_1 + 0x18c);
    local_d0 = *(undefined4 *)((longlong)param_1 + 0x194);
    puVar3 = (undefined8 *)FUN_142391730(param_1,local_28,&local_d8);
    *(undefined8 *)((longlong)param_1 + 0x18c) = *puVar3;
    *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(puVar3 + 1);
    if (*(float *)((longlong)param_1 + 0x1ec) * *(float *)((longlong)param_1 + 0x1ec) <=
        *(float *)((longlong)param_1 + 0x18c) * *(float *)((longlong)param_1 + 0x18c) +
        *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32) +
        *(float *)((longlong)param_1 + 0x194) * *(float *)((longlong)param_1 + 0x194)) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x530))(param_1,param_2);
  return;
}



// FUNCTION 14238eaa0 FUN_14238eaa0 body=1328 status=ok
// SIG undefined FUN_14238eaa0(void)

undefined8 FUN_14238eaa0(longlong *param_1,byte *param_2,float *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  byte local_d8 [4];
  undefined4 local_d4;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  local_cc = *(undefined4 *)(param_2 + 0xc);
  local_c8 = *(undefined4 *)(param_2 + 0x10);
  local_d8[0] = local_d8[0] ^ (*param_2 ^ local_d8[0]) & 3;
  local_c4 = *(undefined8 *)(param_2 + 0x14);
  local_d4 = *(undefined4 *)(param_2 + 4);
  local_b8 = *(undefined8 *)(param_2 + 0x20);
  local_d0 = local_d0 ^ (*(uint *)(param_2 + 8) ^ local_d0) & 1;
  local_bc = *(undefined4 *)(param_2 + 0x1c);
  local_b0 = *(undefined4 *)(param_2 + 0x28);
  local_a4 = *(undefined4 *)(param_2 + 0x34);
  local_98 = *(undefined4 *)(param_2 + 0x40);
  local_8c = *(undefined4 *)(param_2 + 0x4c);
  local_80 = *(undefined4 *)(param_2 + 0x58);
  local_78 = *(undefined4 *)(param_2 + 0x60);
  local_74 = *(undefined4 *)(param_2 + 100);
  local_70 = *(undefined4 *)(param_2 + 0x68);
  local_6c = *(undefined4 *)(param_2 + 0x6c);
  local_68 = *(undefined4 *)(param_2 + 0x70);
  local_ac = *(undefined8 *)(param_2 + 0x2c);
  local_64 = *(undefined4 *)(param_2 + 0x74);
  local_60 = *(undefined4 *)(param_2 + 0x78);
  local_a0 = *(undefined8 *)(param_2 + 0x38);
  local_58 = *(undefined8 *)(param_2 + 0x80);
  local_94 = *(undefined8 *)(param_2 + 0x44);
  local_50 = *(undefined8 *)(param_2 + 0x88);
  local_88 = *(undefined8 *)(param_2 + 0x50);
  local_110 = *(float *)(param_2 + 0x34);
  local_7c = *(undefined4 *)(param_2 + 0x5c);
  local_118 = *(undefined8 *)(param_2 + 0x2c);
  (**(code **)(*param_1 + 0x4f0))((int)local_118,&local_f8,&local_118);
  fVar3 = *param_3;
  local_e8 = *(undefined8 *)(param_1[0x2f] + 0x210);
  uStack_e0 = *(undefined8 *)(param_1[0x2f] + 0x218);
  local_110 = fVar3 * *(float *)((longlong)param_1 + 0x194);
  local_118 = CONCAT44(fVar3 * *(float *)(param_1 + 0x32),
                       fVar3 * *(float *)((longlong)param_1 + 0x18c));
  FUN_1423755e0(param_1,&local_118,&local_e8,1,param_2,0);
  if ((param_1[0x2f] != 0) && ((*(byte *)((longlong)param_1 + 0xba) & 4) != 0)) {
    if ((*param_2 & 1) == 0) {
      local_100 = *(float *)((longlong)param_1 + 0x194);
      local_108 = *(undefined8 *)((longlong)param_1 + 0x18c);
      (**(code **)(*param_1 + 0x528))(param_1,&local_118,&local_108,*param_3);
      fVar8 = (float)local_118 - *(float *)((longlong)param_1 + 0x18c);
      fVar7 = local_110 - *(float *)((longlong)param_1 + 0x194);
      fVar3 = local_f4 * (local_118._4_4_ - *(float *)(param_1 + 0x32)) + local_f8 * fVar8 +
              local_f0 * fVar7;
      if (0.0 <= fVar3) {
        *(undefined8 *)((longlong)param_1 + 0x18c) = local_118;
        fVar3 = local_110;
      }
      else {
        fVar10 = ((local_118._4_4_ - *(float *)(param_1 + 0x32)) - local_f4 * fVar3) +
                 *(float *)(param_1 + 0x32);
        fVar9 = (fVar8 - local_f8 * fVar3) + *(float *)((longlong)param_1 + 0x18c);
        local_100 = (fVar7 - local_f0 * fVar3) + *(float *)((longlong)param_1 + 0x194);
        fVar8 = fVar10 * fVar10 + fVar9 * fVar9 + local_100 * local_100;
        fVar7 = SQRT(fVar8);
        if (-(fVar3 * *(float *)(param_1 + 0x3d)) <= SQRT(fVar8)) {
          fVar7 = -(fVar3 * *(float *)(param_1 + 0x3d));
        }
        fVar3 = fVar9;
        fVar4 = local_100;
        fVar5 = fVar10;
        if ((fVar8 != 1.0) &&
           (fVar3 = DAT_1468b5d90, fVar4 = DAT_1468b5d98, fVar5 = DAT_1468b5d94, 1e-08 <= fVar8)) {
          auVar6 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
          fVar5 = auVar6._0_4_;
          fVar5 = fVar5 + fVar5 * (0.5 - fVar8 * 0.5 * fVar5 * fVar5);
          fVar5 = fVar5 * (0.5 - fVar8 * 0.5 * fVar5 * fVar5) + fVar5;
          fVar3 = fVar5 * fVar9;
          fVar4 = fVar5 * local_100;
          fVar5 = fVar5 * fVar10;
        }
        local_100 = local_100 - fVar7 * fVar4;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,local_100);
        local_108 = CONCAT44(fVar10 - fVar7 * fVar5,fVar9 - fVar7 * fVar3);
        puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x4f0))(param_1,&local_e8,&local_108);
        *(undefined8 *)((longlong)param_1 + 0x18c) = *puVar2;
        fVar3 = *(float *)(puVar2 + 1);
      }
      *(float *)((longlong)param_1 + 0x194) = fVar3;
      if (*(float *)((longlong)param_1 + 0x1ec) * *(float *)((longlong)param_1 + 0x1ec) <=
          *(float *)((longlong)param_1 + 0x18c) * *(float *)((longlong)param_1 + 0x18c) +
          *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32) +
          *(float *)((longlong)param_1 + 0x194) * *(float *)((longlong)param_1 + 0x194)) {
        *param_3 = 0.0;
        return 1;
      }
      (**(code **)(*param_1 + 0x530))(param_1,local_d8);
    }
    else {
      fVar3 = *param_3;
      *param_3 = (1.0 - *(float *)(param_2 + 0xc)) * fVar3;
      local_110 = fVar3 * *(float *)((longlong)param_1 + 0x194);
      local_118 = CONCAT44(fVar3 * *(float *)(param_1 + 0x32),
                           fVar3 * *(float *)((longlong)param_1 + 0x18c));
      iVar1 = (**(code **)(*param_1 + 0x540))(param_1,param_2,fVar3,&local_118,param_3);
      if (((iVar1 != 2) && (param_1[0x2f] != 0)) && ((*(byte *)((longlong)param_1 + 0xba) & 4) != 0)
         ) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14238efd0 FUN_14238efd0 body=49 status=ok
// SIG undefined FUN_14238efd0(void)

undefined8 FUN_14238efd0(longlong *param_1)

{
  char cVar1;
  
  if ((*(char *)((longlong)param_1 + 0x24e) == '\0') ||
     (*(char *)((longlong)param_1 + 0x2e7) == '\x01')) {
    cVar1 = (**(code **)(*param_1 + 0x728))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14238f010 FUN_14238f010 body=25 status=ok
// SIG undefined FUN_14238f010(void)

undefined1 FUN_14238f010(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x178) != 0) && ((*(byte *)(param_1 + 0xba) & 4) != 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 14238f040 FUN_14238f040 body=396 status=ok
// SIG undefined FUN_14238f040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14238f040(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [192];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  if (param_2 != 0) {
    local_30 = DAT_1468387a8 ^ (ulonglong)auStack_128;
    lVar7 = 0;
    local_40 = (undefined1 *)0x0;
    local_38 = 0;
    FUN_140725150(param_2,local_100,0);
    lVar9 = (longlong)(int)local_38;
    if (0 < lVar9) {
      plVar8 = (longlong *)(param_1 + 0x2d8);
      do {
        puVar5 = local_100;
        if (local_40 != (undefined1 *)0x0) {
          puVar5 = local_40;
        }
        FWeakObjectPtr::operator=(&local_108,*(undefined8 *)(puVar5 + lVar7 * 8));
        lVar3 = *plVar8;
        iVar2 = *(int *)(param_1 + 0x2e0);
        for (lVar6 = lVar3; lVar6 != lVar3 + (longlong)iVar2 * 8; lVar6 = lVar6 + 8) {
          cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar6,&local_108);
          if (cVar4 != '\0') {
            if ((int)(lVar6 - lVar3 >> 3) != -1) goto LAB_14238f165;
            break;
          }
        }
        iVar2 = *(int *)(param_1 + 0x2e0);
        *(int *)(param_1 + 0x2e0) = iVar2 + 1;
        if (*(int *)(param_1 + 0x2e4) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8,iVar2);
        }
        puVar1 = (undefined4 *)(*plVar8 + (longlong)iVar2 * 8);
        *puVar1 = local_108;
        puVar1[1] = local_104;
LAB_14238f165:
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar9);
    }
    if (local_40 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14238f1d0 FUN_14238f1d0 body=186 status=ok
// SIG undefined FUN_14238f1d0(void)

void FUN_14238f1d0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 local_res10;
  undefined4 local_res14;
  
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(&local_res10);
    plVar6 = (longlong *)(param_1 + 0x2d8);
    lVar3 = *plVar6;
    iVar2 = *(int *)(param_1 + 0x2e0);
    for (lVar5 = lVar3; lVar5 != lVar3 + (longlong)iVar2 * 8; lVar5 = lVar5 + 8) {
      cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar5,&local_res10);
      if (cVar4 != '\0') {
        if ((int)(lVar5 - lVar3 >> 3) != -1) {
          return;
        }
        break;
      }
    }
    iVar2 = *(int *)(param_1 + 0x2e0);
    *(int *)(param_1 + 0x2e0) = iVar2 + 1;
    if (*(int *)(param_1 + 0x2e4) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar2);
    }
    puVar1 = (undefined4 *)(*plVar6 + (longlong)iVar2 * 8);
    *puVar1 = local_res10;
    puVar1[1] = local_res14;
  }
  return;
}



// FUNCTION 14238f290 FUN_14238f290 body=350 status=ok
// SIG undefined FUN_14238f290(void)

void FUN_14238f290(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong local_res10;
  
  plVar1 = (longlong *)(param_1 + 0x378);
  iVar5 = *(int *)(param_1 + 0x380);
  iVar7 = 0;
  local_res10 = param_2;
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      lVar2 = *plVar1;
      if (*(longlong *)(lVar8 + lVar2) == 0) {
        iVar4 = (iVar5 - iVar7) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar2 + (longlong)iVar7 * 8),
                     (void *)(lVar2 + (longlong)(iVar5 - iVar4) * 8),(longlong)iVar4 << 3);
          iVar5 = *(int *)(param_1 + 0x380);
        }
        *(int *)(param_1 + 0x380) = iVar5 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        iVar5 = *(int *)(param_1 + 0x380);
        iVar7 = iVar7 + -1;
        lVar8 = lVar8 + -8;
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 8;
    } while (iVar7 < iVar5);
  }
  if (param_2 != 0) {
    if (param_3 != '\0') {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar1,&local_res10);
      return;
    }
    plVar3 = (longlong *)*plVar1;
    plVar6 = plVar3;
    if (plVar3 != plVar3 + iVar5) {
      while (*plVar6 != param_2) {
        plVar6 = plVar6 + 1;
        if (plVar6 == plVar3 + iVar5) {
          return;
        }
      }
      iVar5 = (int)((longlong)plVar6 - (longlong)plVar3 >> 3);
      if (iVar5 != -1) {
        iVar7 = *(int *)(param_1 + 0x380);
        iVar4 = (iVar7 - iVar5) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (plVar3 + iVar5,plVar3 + (iVar7 - iVar4),(longlong)iVar4 << 3);
          iVar7 = *(int *)(param_1 + 0x380);
        }
        *(int *)(param_1 + 0x380) = iVar7 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
      }
    }
  }
  return;
}



// FUNCTION 14238f3f0 FUN_14238f3f0 body=350 status=ok
// SIG undefined FUN_14238f3f0(void)

void FUN_14238f3f0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong local_res10;
  
  plVar1 = (longlong *)(param_1 + 0x388);
  iVar5 = *(int *)(param_1 + 0x390);
  iVar7 = 0;
  local_res10 = param_2;
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      lVar2 = *plVar1;
      if (*(longlong *)(lVar8 + lVar2) == 0) {
        iVar4 = (iVar5 - iVar7) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar2 + (longlong)iVar7 * 8),
                     (void *)(lVar2 + (longlong)(iVar5 - iVar4) * 8),(longlong)iVar4 << 3);
          iVar5 = *(int *)(param_1 + 0x390);
        }
        *(int *)(param_1 + 0x390) = iVar5 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        iVar5 = *(int *)(param_1 + 0x390);
        iVar7 = iVar7 + -1;
        lVar8 = lVar8 + -8;
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 8;
    } while (iVar7 < iVar5);
  }
  if (param_2 != 0) {
    if (param_3 != '\0') {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar1,&local_res10);
      return;
    }
    plVar3 = (longlong *)*plVar1;
    plVar6 = plVar3;
    if (plVar3 != plVar3 + iVar5) {
      while (*plVar6 != param_2) {
        plVar6 = plVar6 + 1;
        if (plVar6 == plVar3 + iVar5) {
          return;
        }
      }
      iVar5 = (int)((longlong)plVar6 - (longlong)plVar3 >> 3);
      if (iVar5 != -1) {
        iVar7 = *(int *)(param_1 + 0x390);
        iVar4 = (iVar7 - iVar5) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (plVar3 + iVar5,plVar3 + (iVar7 - iVar4),(longlong)iVar4 << 3);
          iVar7 = *(int *)(param_1 + 0x390);
        }
        *(int *)(param_1 + 0x390) = iVar7 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
      }
    }
  }
  return;
}



// FUNCTION 14238f550 FUN_14238f550 body=773 status=ok
// SIG undefined FUN_14238f550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14238f550(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  uint local_128;
  longlong *local_120;
  uint local_118;
  uint local_114;
  longlong local_110;
  longlong local_108;
  undefined1 local_100 [192];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (((((lVar2 != 0) || (local_108 = lVar2, lVar2 = FUN_1423407b0(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x708) != 2)) &&
      ((DAT_1468b616c == '\0' && (*(char *)(param_1 + 0x328) != '\0')))) &&
     (*(char *)(param_1 + 0x37c) == '\0')) {
    local_108 = lVar2;
    FUN_142395540(param_1);
    plVar5 = (longlong *)0x0;
    local_120 = (longlong *)0x0;
    local_114 = 0;
    local_128 = 0;
    plVar11 = plVar5;
    plVar13 = plVar5;
    if (0 < *(int *)(param_1 + 0x310)) {
      local_110 = 0;
      plVar12 = plVar5;
      do {
        lVar4 = local_110;
        uVar8 = (uint)plVar5;
        lVar2 = *(longlong *)(local_110 + *(longlong *)(param_1 + 0x308));
        if (lVar2 != 0) {
          local_40 = (undefined1 *)0x0;
          local_38 = 0;
          FUN_140a4ca80(lVar2,local_100,0);
          uVar7 = 0;
          puVar6 = local_40;
          uVar14 = uVar7;
          if (0 < (int)local_38) {
            do {
              puVar3 = local_100;
              if (puVar6 != (undefined1 *)0x0) {
                puVar3 = puVar6;
              }
              lVar2 = *(longlong *)(puVar3 + uVar14);
              if ((lVar2 != 0) &&
                 ((lVar4 = UMovieSceneSection::GetChannelProxy(lVar2), lVar4 == 0 ||
                  (lVar4 = UMovieSceneSection::GetChannelProxy(lVar2), puVar6 = local_40,
                  lVar4 == param_1)))) {
                iVar10 = (int)plVar11;
                for (plVar5 = plVar13; plVar5 != plVar13 + iVar10; plVar5 = plVar5 + 1) {
                  if (*plVar5 == lVar2) {
                    puVar6 = local_40;
                    if ((int)((longlong)plVar5 - (longlong)plVar13 >> 3) != -1) goto LAB_14238f724;
                    break;
                  }
                }
                local_118 = iVar10 + 1;
                if ((int)plVar12 < (int)local_118) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_120);
                  plVar12 = (longlong *)(ulonglong)local_114;
                  plVar13 = local_120;
                }
                plVar11 = (longlong *)(ulonglong)local_118;
                plVar13[iVar10] = lVar2;
                puVar6 = local_40;
              }
LAB_14238f724:
              uVar9 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar9;
              lVar4 = local_110;
              uVar14 = uVar14 + 8;
              uVar8 = local_128;
            } while ((int)uVar9 < (int)local_38);
          }
          if (puVar6 != (undefined1 *)0x0) {
            FMemory::Free();
          }
        }
        local_128 = uVar8 + 1;
        plVar5 = (longlong *)(ulonglong)local_128;
        local_110 = lVar4 + 8;
        lVar2 = local_108;
      } while ((int)local_128 < *(int *)(param_1 + 0x310));
    }
    *(undefined1 *)(param_1 + 0x37c) = 1;
    uVar1 = *(undefined8 *)(lVar2 + 0x1b8);
    plVar5 = (longlong *)GetRendererModule();
    local_138 = *(undefined4 *)(lVar2 + 0x1c0);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x50))(plVar5,lVar2,0,0);
    *(longlong **)(param_1 + 0x380) = plVar5;
    (**(code **)(*plVar5 + 0xf8))(plVar5,1);
    *(undefined8 *)(lVar2 + 0x1b8) = uVar1;
    plVar5 = plVar13;
    if (0 < (int)plVar11) {
      do {
        lVar2 = *plVar5;
        lVar4 = UMovieSceneSection::GetChannelProxy(lVar2);
        if (lVar4 != param_1) {
          UMovieSceneSection::GetChannelProxy(lVar2);
        }
        FUN_1423511f0(lVar2,param_1);
        FUN_14234cb00(lVar2);
        plVar11 = (longlong *)((longlong)plVar11 + -1);
        plVar5 = plVar5 + 1;
      } while (plVar11 != (longlong *)0x0);
    }
    if (plVar13 != (longlong *)0x0) {
      FMemory::Free(plVar13);
    }
  }
  return;
}



// FUNCTION 14238f860 FUN_14238f860 body=899 status=ok
// SIG undefined FUN_14238f860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14238f860(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  uint local_100;
  uint local_f8;
  int *local_f0;
  undefined1 local_e8;
  longlong local_d8;
  int local_d0;
  int local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  int local_78 [6];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_f0 = local_78;
  uVar8 = 0;
  local_54 = 0;
  local_100 = *(uint *)(param_1 + 0x6c);
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 1;
  local_50 = 0;
  local_78[5] = _DAT_1468b5d78;
  uStack_60 = uRam00000001468b5d7c;
  uStack_5c = uRam00000001468b5d80;
  uStack_58 = uRam00000001468b5d84;
  local_48 = 0;
  local_40 = 0;
  local_f8 = 0;
  local_108 = CONCAT31(local_108._1_3_,*(undefined1 *)(param_1 + 0x70));
  local_98 = param_1;
  (**(code **)(*DAT_146ab6358 + 0x660))
            (DAT_146ab6358,&local_d8,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x68));
  plVar13 = (longlong *)(param_1 + 0x78);
  local_88 = plVar13;
  if (plVar13 != &local_d8) {
    puVar2 = (undefined8 *)*plVar13;
    *plVar13 = local_d8;
    local_d8 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        if ((*(char *)(puVar2 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar16 = *(int *)((longlong)puVar2 + 0xc) == 0;
          if (bVar16) {
            *(int *)((longlong)puVar2 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar16) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            uVar6 = uVar8;
            if (uVar5 != 0) {
              uVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(uVar6 + 8) = puVar2;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_d8);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,*plVar13);
  lVar12 = *(longlong *)(param_1 + 0x80);
  if (lVar12 != 0) {
    local_c4 = 0;
    local_c0 = 0;
    iVar10 = (&DAT_1464ca1c4)[(longlong)*(int *)(param_1 + 0x70) * 10];
    iVar14 = *(int *)(param_1 + 0x6c);
    local_d8 = CONCAT44(local_d8._4_4_,iVar10);
    uVar6 = uVar8;
    if (0 < iVar14) {
      do {
        local_cc = 0;
        local_c8 = (uint)uVar8;
        iVar14 = 1 << (((char)iVar14 - (char)uVar6) - 1U & 0x1f);
        iVar10 = iVar14 * iVar14 * iVar10;
        local_bc = iVar10;
        do {
          iVar15 = local_cc;
          local_f0 = &local_d0;
          local_e8 = 0;
          local_f8 = 1;
          local_d0 = 0;
          local_100 = (uint)uVar6;
          local_108 = 0;
          lVar7 = (**(code **)(*DAT_146ab6358 + 0x678))
                            (DAT_146ab6358,&DAT_146ab6e78,*plVar13,local_cc);
          lVar12 = local_98;
          iVar9 = 0;
          uVar5 = (uint)uVar8;
          if (0 < iVar14) {
            iVar11 = iVar14 * (int)local_d8;
            do {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((ulonglong)(uint)(iVar9 * local_d0) + lVar7),
                         (void *)((longlong)(int)uVar8 + **(longlong **)(lVar12 + 0x80)),
                         (longlong)iVar11);
              iVar9 = iVar9 + 1;
              uVar8 = (ulonglong)(uint)((int)uVar8 + iVar11);
              plVar13 = local_88;
              iVar10 = local_bc;
              uVar5 = local_c8;
              iVar15 = local_cc;
            } while (iVar9 < iVar14);
          }
          uVar3 = local_c0;
          uVar6 = (ulonglong)local_c0;
          local_f8 = local_f8 & 0xffffff00;
          local_100 = local_c0;
          local_108 = 0;
          (**(code **)(*DAT_146ab6358 + 0x680))(DAT_146ab6358,&DAT_146ab6e78,*plVar13,iVar15);
          local_cc = iVar15 + 1;
          local_c8 = uVar5 + iVar10;
          uVar8 = (ulonglong)local_c8;
        } while (local_cc < 6);
        local_c0 = uVar3 + 1;
        local_c4 = local_c4 + iVar10 * 6;
        uVar8 = (ulonglong)local_c4;
        iVar14 = *(int *)(local_98 + 0x6c);
        uVar6 = (ulonglong)local_c0;
        iVar10 = (int)local_d8;
      } while ((int)local_c0 < iVar14);
      lVar12 = *(longlong *)(local_98 + 0x80);
      param_1 = local_98;
    }
    *(undefined4 *)(lVar12 + 8) = 0;
    if (*(int *)(lVar12 + 0xc) != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(lVar12,0);
    }
  }
  local_ac = 0x7f7fffff;
  local_b8 = 0x1010102;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_90,&local_b8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_90);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_90);
  return;
}



// FUNCTION 14238fbf0 FUN_14238fbf0 body=170 status=ok
// SIG undefined FUN_14238fbf0(void)

void FUN_14238fbf0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(param_1 + 0x3dc);
  uVar2 = *(undefined4 *)(param_1 + 0x3e0);
  uVar3 = *(undefined4 *)(param_1 + 0x3e4);
  *param_3 = *(undefined4 *)(param_1 + 0x3d8);
  param_3[1] = uVar4;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar4 = *(undefined4 *)(param_1 + 0x3ec);
  uVar2 = *(undefined4 *)(param_1 + 0x3f0);
  uVar3 = *(undefined4 *)(param_1 + 0x3f4);
  param_3[4] = *(undefined4 *)(param_1 + 1000);
  param_3[5] = uVar4;
  param_3[6] = uVar2;
  param_3[7] = uVar3;
  FCollisionQueryParams::AddIgnoredActors(param_2,param_1 + 0x378);
  FUN_1423016c0(param_2,param_1 + 0x388);
  *(byte *)(param_2 + 0x10) = *(byte *)(param_1 + 0x2ef) >> 2 & 1;
  *(byte *)(param_2 + 0x11) = *(byte *)(param_1 + 0x2ef) >> 3 & 1;
  *(byte *)(param_2 + 0x14) = *(byte *)(param_1 + 0x2ef) >> 4 & 1;
  *(undefined1 *)(param_2 + 0x1c) = *(undefined1 *)(param_1 + 0x302);
  plVar1 = *(longlong **)(param_1 + 0x118);
  if ((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 0x80) & 8) != 0)) {
    uVar4 = (**(code **)(*plVar1 + 0x6e0))();
    *(undefined4 *)(param_2 + 0x20) = uVar4;
  }
  return;
}



// FUNCTION 14238fca0 FUN_14238fca0 body=1167 status=ok
// SIG undefined FUN_14238fca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14238fca0(longlong *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  float fVar5;
  char cVar6;
  float *pfVar7;
  undefined8 uVar8;
  float *pfVar9;
  undefined8 *puVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  ulonglong in_stack_ffffffffffffff28;
  undefined8 local_c8;
  float local_c0;
  undefined1 local_b8 [12];
  undefined1 local_ac [20];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [64];
  
  FUN_142372020();
  pfVar1 = (float *)((longlong)param_1 + 0x18c);
  if (*pfVar1 * *pfVar1 + *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32) +
      *(float *)((longlong)param_1 + 0x194) * *(float *)((longlong)param_1 + 0x194) <= 0.0) {
    return;
  }
  fVar12 = (float)(**(code **)(*param_1 + 0x578))(param_1);
  if (0.0 < fVar12) {
    fVar12 = *(float *)((longlong)param_1 + 0x194);
    fVar2 = *pfVar1;
    fVar3 = *(float *)(param_1 + 0x32);
    fVar13 = fVar2 * fVar2 + fVar3 * fVar3 + fVar12 * fVar12;
    if (fVar13 == 1.0) {
      local_c8 = *(undefined8 *)pfVar1;
      local_c0 = *(float *)((longlong)param_1 + 0x194);
      fVar16 = local_c0;
      fVar17 = (float)local_c8;
      fVar14 = (float)((ulonglong)local_c8 >> 0x20);
    }
    else {
      fVar16 = DAT_1468b5d98;
      fVar17 = DAT_1468b5d90;
      fVar14 = DAT_1468b5d94;
      if (1e-08 <= fVar13) {
        auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
        fVar14 = auVar15._0_4_;
        fVar14 = fVar14 + fVar14 * (0.5 - fVar13 * 0.5 * fVar14 * fVar14);
        fVar14 = fVar14 + fVar14 * (0.5 - fVar13 * 0.5 * fVar14 * fVar14);
        fVar17 = fVar2 * fVar14;
        fVar16 = fVar12 * fVar14;
        fVar14 = fVar3 * fVar14;
      }
    }
    fVar12 = (float)(**(code **)(*param_1 + 0x578))(param_1);
    local_c0 = fVar16 * fVar12;
    *(ulonglong *)pfVar1 = CONCAT44(fVar14 * fVar12,fVar17 * fVar12);
    *(float *)((longlong)param_1 + 0x194) = local_c0;
  }
  if ((*(byte *)(param_1 + 0x39) & 4) != 0) {
    local_c0 = *(float *)((longlong)param_1 + 0x194);
    local_c8 = *(undefined8 *)pfVar1;
    (**(code **)(*param_1 + 0x518))(param_1,&local_c8);
  }
  if (param_1[0x2f] != 0) {
    if ((*(byte *)(param_1 + 0x39) & 1) == 0) {
      pfVar7 = (float *)FRotator::Quaternion(param_1 + 0x45,local_58);
      pfVar9 = (float *)FRotator::Quaternion(param_1[0x2f] + 0x1f8,local_68);
      fVar12 = *pfVar7;
      fVar2 = pfVar7[1];
      fVar3 = pfVar7[2];
      fVar13 = pfVar7[3];
      fVar16 = *pfVar9;
      fVar17 = pfVar9[1];
      fVar14 = pfVar9[2];
      fVar5 = pfVar9[3];
      local_88 = fVar13 * fVar16 * _DAT_146af08d0 + fVar5 * fVar12 + fVar3 * fVar17 * _DAT_146af08c0
                 + fVar2 * fVar14 * _DAT_146af08b0;
      fStack_84 = fVar3 * fVar16 * fRam0000000146af08d4 + fVar5 * fVar2 +
                  fVar13 * fVar17 * fRam0000000146af08c4 + fVar12 * fVar14 * fRam0000000146af08b4;
      fStack_80 = fVar2 * fVar16 * fRam0000000146af08d8 + fVar5 * fVar3 +
                  fVar12 * fVar17 * fRam0000000146af08c8 + fVar13 * fVar14 * fRam0000000146af08b8;
      fStack_7c = fVar12 * fVar16 * fRam0000000146af08dc + fVar5 * fVar13 +
                  fVar2 * fVar17 * fRam0000000146af08cc + fVar3 * fVar14 * fRam0000000146af08bc;
      puVar10 = (undefined8 *)FQuat::Rotator(&local_88,local_ac);
      lVar11 = param_1[0x2f];
      local_c8 = *puVar10;
      local_c0 = *(float *)(puVar10 + 1);
      if (*(longlong *)(lVar11 + 400) == 0) {
        FUN_142398470(lVar11,&local_c8,0,0,in_stack_ffffffffffffff28 & 0xffffffffffffff00);
        goto LAB_1423900bf;
      }
      uVar8 = FRotator::Quaternion(&local_c8,local_78);
      FUN_14238ced0(lVar11,&local_98,uVar8);
      pfVar7 = &local_98;
    }
    else {
      pfVar7 = (float *)FRotator::Quaternion(param_1 + 0x45,local_78);
      uVar8 = FVector::Rotation(pfVar1,local_b8);
      pfVar9 = (float *)FRotator::Quaternion(uVar8,local_68);
      fVar12 = *pfVar7;
      fVar2 = pfVar7[1];
      fVar3 = pfVar7[2];
      fVar13 = pfVar7[3];
      fVar16 = *pfVar9;
      fVar17 = pfVar9[1];
      fVar14 = pfVar9[2];
      fVar5 = pfVar9[3];
      local_98 = fVar13 * fVar16 * _DAT_146af08d0 + fVar5 * fVar12 + fVar3 * fVar17 * _DAT_146af08c0
                 + fVar2 * fVar14 * _DAT_146af08b0;
      fStack_94 = fVar3 * fVar16 * fRam0000000146af08d4 + fVar5 * fVar2 +
                  fVar13 * fVar17 * fRam0000000146af08c4 + fVar12 * fVar14 * fRam0000000146af08b4;
      fStack_90 = fVar2 * fVar16 * fRam0000000146af08d8 + fVar5 * fVar3 +
                  fVar12 * fVar17 * fRam0000000146af08c8 + fVar13 * fVar14 * fRam0000000146af08b8;
      fStack_8c = fVar12 * fVar16 * fRam0000000146af08dc + fVar5 * fVar13 +
                  fVar2 * fVar17 * fRam0000000146af08cc + fVar3 * fVar14 * fRam0000000146af08bc;
      puVar10 = (undefined8 *)FQuat::Rotator(&local_98,local_ac);
      lVar11 = param_1[0x2f];
      local_c8 = *puVar10;
      local_c0 = *(float *)(puVar10 + 1);
      if (*(longlong *)(lVar11 + 400) == 0) {
        FUN_142398470(lVar11,&local_c8,0,0,in_stack_ffffffffffffff28 & 0xffffffffffffff00);
        goto LAB_1423900bf;
      }
      uVar8 = FRotator::Quaternion(&local_c8,local_58);
      FUN_14238ced0(lVar11,&local_88,uVar8);
      pfVar7 = &local_88;
    }
    local_c8 = *(undefined8 *)(lVar11 + 0x1ec);
    local_c0 = *(float *)(lVar11 + 500);
    FUN_142397be0(lVar11,&local_c8,pfVar7,0,0,0);
  }
LAB_1423900bf:
  (**(code **)(*param_1 + 0x470))(param_1);
  plVar4 = (longlong *)param_1[0x30];
  if ((plVar4 != (longlong *)0x0) &&
     (cVar6 = (**(code **)(*plVar4 + 0x400))(plVar4,0), cVar6 != '\0')) {
    local_c8 = *(undefined8 *)pfVar1;
    local_c0 = *(float *)((longlong)param_1 + 0x194);
    FUN_142717fd0(param_1[0x30],&local_c8,0,0);
  }
  return;
}



// FUNCTION 142390130 InsertUninitialized body=95 status=ok
// SIG undefined InsertUninitialized(void)

void TArray<USceneComponent_*,FDefaultAllocator>::InsertUninitialized
               (longlong *param_1,int param_2,int param_3)

{
  void *_Src;
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_3;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_3) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  _Src = (void *)(*param_1 + (longlong)param_2 * 8);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + (longlong)param_3 * 8),_Src,(longlong)(iVar1 - param_2) << 3)
  ;
  return;
}



// FUNCTION 142390190 FUN_142390190 body=1623 status=ok
// SIG undefined FUN_142390190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_142390190(longlong param_1,undefined1 (*param_2) [12],undefined8 *param_3,byte param_4,
             undefined1 param_5,byte param_6)

{
  float *pfVar1;
  byte bVar2;
  longlong *plVar3;
  float fVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 extraout_EAX;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 in_XMM5 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_188 [32];
  ulonglong *local_168;
  undefined1 local_160;
  ulonglong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  float local_138;
  float fStack_134;
  float local_130;
  undefined4 local_128;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  ulonglong local_88;
  
  uVar8 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_148 = *param_3;
  uStack_140 = param_3[1];
  plVar3 = *(longlong **)(param_1 + 400);
  local_88 = uVar8;
  if (plVar3 != (longlong *)0x0) {
    uVar6 = (**(code **)(*plVar3 + 0x420))(plVar3,&local_118,*(undefined8 *)(param_1 + 0x198),0);
    fVar15 = local_f8._0_4_;
    fVar20 = local_f8._4_4_;
    fVar4 = local_f8._8_4_;
    auVar17._12_4_ = 0;
    auVar17._0_12_ = *(undefined1 (*) [12])(param_1 + 0x204);
    auVar18._12_4_ = 0;
    auVar18._0_12_ = local_f8._0_12_;
    auVar18 = minps(auVar17,auVar18);
    auVar19._4_4_ = -(uint)(auVar18._4_4_ < fRam0000000146af09c4);
    auVar19._0_4_ = -(uint)(auVar18._0_4_ < _DAT_146af09c0);
    auVar19._8_4_ = -(uint)(auVar18._8_4_ < fRam0000000146af09c8);
    auVar19._12_4_ = -(uint)(auVar18._12_4_ < fRam0000000146af09cc);
    iVar7 = movmskps(uVar6,auVar19);
    if (iVar7 == 0) {
      bVar2 = *(byte *)(param_1 + 0x24c);
      fVar25 = 0.0;
      if ((bVar2 & 4) == 0) {
        fVar28 = local_118 * _DAT_146af09e0;
        fVar29 = fStack_114 * fRam0000000146af09e4;
        fVar30 = fStack_110 * fRam0000000146af09e8;
        fVar31 = fStack_10c * fRam0000000146af09ec;
        auVar18 = rcpps(in_XMM5,local_f8);
        fVar32 = (float)((uint)(*(float *)*param_2 - local_108) & _DAT_146af0840);
        fVar33 = (float)((uint)(*(float *)(*param_2 + 4) - fStack_104) & uRam0000000146af0844);
        fVar34 = (float)((uint)(*(float *)(*param_2 + 8) - fStack_100) & uRam0000000146af0848);
        fVar21 = fVar34 * fVar29 - fVar33 * fVar30;
        fVar22 = fVar32 * fVar30 - fVar34 * fVar28;
        fVar23 = fVar33 * fVar28 - fVar32 * fVar29;
        fVar25 = auVar18._0_4_;
        fVar24 = auVar18._4_4_;
        fVar27 = auVar18._8_4_;
        fVar21 = fVar21 + fVar21;
        fVar22 = fVar22 + fVar22;
        fVar23 = fVar23 + fVar23;
        fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * fVar15;
        fVar26 = (fVar24 + fVar24) - fVar24 * fVar24 * fVar20;
        fVar27 = (fVar27 + fVar27) - fVar27 * fVar27 * fVar4;
        fVar24 = (fVar25 + fVar25) - fVar25 * fVar25 * fVar15;
        fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * fVar20;
        fVar25 = (fVar27 + fVar27) - fVar27 * fVar27 * fVar4;
        fVar25 = ((fVar22 * fVar28 - fVar21 * fVar29) + fVar31 * fVar23 + fVar34) *
                 (float)(-(uint)((float)((uint)fVar4 & uRam0000000146af07d8) <= fRam0000000146af09d8
                                ) & (uint)fVar25 ^ (uint)fVar25);
        uStack_150 = CONCAT44(uStack_150._4_4_,fVar25);
        *(ulonglong *)*param_2 =
             CONCAT44(((fVar21 * fVar30 - fVar23 * fVar28) + fVar31 * fVar22 + fVar33) *
                      (float)(-(uint)((float)((uint)fVar20 & uRam0000000146af07d4) <=
                                     fRam0000000146af09d4) & (uint)fVar26 ^ (uint)fVar26),
                      ((fVar23 * fVar29 - fVar22 * fVar30) + fVar31 * fVar21 + fVar32) *
                      (float)(-(uint)((float)((uint)fVar15 & _DAT_146af07d0) <= _DAT_146af09d0) &
                              (uint)fVar24 ^ (uint)fVar24));
        *(float *)(*param_2 + 8) = fVar25;
      }
      uVar8 = (ulonglong)(uint)fVar25;
      if ((bVar2 & 8) != 0) goto LAB_142390521;
      fVar20 = -local_118;
      fVar15 = -fStack_114;
      fStack_110 = -fStack_110;
      local_158 = CONCAT44(fStack_114,local_118) ^ 0x8000000080000000;
      uStack_150 = CONCAT44(fStack_10c,fStack_110);
      local_b8 = uStack_140._4_4_ * fVar20 * _DAT_146af08d0 + fStack_10c * (float)local_148 +
                 (float)uStack_140 * fVar15 * _DAT_146af08c0 +
                 local_148._4_4_ * fStack_110 * _DAT_146af08b0;
      fStack_b4 = (float)uStack_140 * fVar20 * fRam0000000146af08d4 + fStack_10c * local_148._4_4_ +
                  uStack_140._4_4_ * fVar15 * fRam0000000146af08c4 +
                  (float)local_148 * fStack_110 * fRam0000000146af08b4;
      fStack_b0 = local_148._4_4_ * fVar20 * fRam0000000146af08d8 + fStack_10c * (float)uStack_140 +
                  (float)local_148 * fVar15 * fRam0000000146af08c8 +
                  uStack_140._4_4_ * fStack_110 * fRam0000000146af08b8;
      uStack_140._4_4_ =
           (float)local_148 * fVar20 * fRam0000000146af08dc + fStack_10c * uStack_140._4_4_ +
           local_148._4_4_ * fVar15 * fRam0000000146af08cc +
           (float)uStack_140 * fStack_110 * fRam0000000146af08bc;
    }
    else {
      local_e8 = *param_3;
      uStack_e0 = param_3[1];
      local_d8._12_4_ = 0;
      local_d8._0_12_ = *param_2;
      local_c8._4_4_ = fVar20 * *(float *)(param_1 + 0x208);
      local_c8._0_4_ = fVar15 * *(float *)*(undefined1 (*) [12])(param_1 + 0x204);
      local_c8._8_4_ = fVar4 * *(float *)(param_1 + 0x20c);
      local_c8._12_4_ = 0;
      uVar8 = FUN_14162bcf0(&local_e8,&local_b8,&local_118);
      bVar2 = *(byte *)(param_1 + 0x24c);
      if ((bVar2 & 4) == 0) {
        uStack_150 = CONCAT44(uStack_150._4_4_,uStack_a0);
        uVar8 = (ulonglong)uStack_a0;
        *(undefined4 *)*param_2 = local_a8;
        *(undefined4 *)(*param_2 + 4) = uStack_a4;
        *(uint *)(*param_2 + 8) = uStack_a0;
      }
      if ((bVar2 & 8) != 0) goto LAB_142390521;
      uStack_140._4_4_ = fStack_ac;
    }
    uStack_140 = CONCAT44(uStack_140._4_4_,fStack_b0);
    local_148 = CONCAT44(fStack_b4,local_b8);
  }
LAB_142390521:
  auVar11._4_4_ = -(uint)(*(float *)(param_1 + 0x274) == local_148._4_4_);
  auVar11._0_4_ = -(uint)(*(float *)(param_1 + 0x270) == (float)local_148);
  auVar11._8_4_ = -(uint)(*(float *)(param_1 + 0x278) == (float)uStack_140);
  auVar11._12_4_ = -(uint)(*(float *)(param_1 + 0x27c) == uStack_140._4_4_);
  iVar7 = movmskps((int)uVar8,auVar11);
  if (iVar7 == 0xf) {
    local_138 = (float)*(undefined8 *)(param_1 + 0x280);
    fStack_134 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x280) >> 0x20);
    local_130 = *(float *)(param_1 + 0x288);
    uVar6 = 0xf;
  }
  else {
    FQuat::Rotator(&local_148);
    uVar6 = extraout_EAX;
  }
  fVar4 = fRam0000000146af0858;
  fVar20 = fRam0000000146af0854;
  fVar15 = _DAT_146af0850;
  if (((0.0001 < ABS(*(float *)*param_2 - *(float *)(param_1 + 0x1ec))) ||
      (0.0001 < ABS(*(float *)(*param_2 + 4) - *(float *)(param_1 + 0x1f0)))) ||
     (0.0001 < ABS(*(float *)(*param_2 + 8) - *(float *)(param_1 + 500)))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  auVar14._4_4_ = fStack_134;
  auVar14._0_4_ = local_138;
  auVar14._8_4_ = local_130;
  fVar21 = local_138 - *(float *)(param_1 + 0x1f8);
  fVar22 = fStack_134 - *(float *)(param_1 + 0x1fc);
  fVar23 = local_130 - *(float *)(param_1 + 0x200);
  local_128 = 0x38d1b717;
  fVar25 = DAT_146af0860._12_4_;
  auVar12._4_4_ = fVar22;
  auVar12._0_4_ = fVar21;
  auVar12._8_4_ = fVar23;
  auVar12._12_4_ = 0;
  auVar18 = divps(auVar12,_DAT_146af0860);
  fVar26 = (float)DAT_146af0860;
  fVar27 = DAT_146af0860._4_4_;
  fVar28 = DAT_146af0860._8_4_;
  fVar21 = fVar21 - (float)(int)auVar18._0_4_ * fVar26;
  fVar22 = fVar22 - (float)(int)auVar18._4_4_ * fVar27;
  fVar23 = fVar23 - (float)(int)auVar18._8_4_ * fVar28;
  fVar24 = 0.0 - (float)(int)auVar18._12_4_ * fVar25;
  fVar21 = (float)(((uint)(fVar21 + fVar26) ^ (uint)fVar21) & -(uint)(0.0 <= fVar21) ^
                  (uint)(fVar21 + fVar26));
  fVar22 = (float)(((uint)(fVar22 + fVar27) ^ (uint)fVar22) & -(uint)(0.0 <= fVar22) ^
                  (uint)(fVar22 + fVar27));
  fVar23 = (float)(((uint)(fVar23 + fVar28) ^ (uint)fVar23) & -(uint)(0.0 <= fVar23) ^
                  (uint)(fVar23 + fVar28));
  fVar24 = (float)(((uint)(fVar24 + fVar25) ^ (uint)fVar24) & -(uint)(0.0 <= fVar24) ^
                  (uint)(fVar24 + fVar25));
  auVar13._4_4_ =
       -(uint)(0.0001 < (float)((((uint)(fVar22 - fVar27) ^ (uint)fVar22) &
                                 -(uint)(fRam0000000146af0854 < fVar22) ^ (uint)fVar22) &
                               uRam0000000146af07d4));
  auVar13._0_4_ =
       -(uint)(0.0001 < (float)((((uint)(fVar21 - fVar26) ^ (uint)fVar21) &
                                 -(uint)(_DAT_146af0850 < fVar21) ^ (uint)fVar21) & _DAT_146af07d0))
  ;
  auVar13._8_4_ =
       -(uint)(0.0001 < (float)((((uint)(fVar23 - fVar28) ^ (uint)fVar23) &
                                 -(uint)(fRam0000000146af0858 < fVar23) ^ (uint)fVar23) &
                               uRam0000000146af07d8));
  auVar13._12_4_ =
       -(uint)(0.0001 < (float)((((uint)(fVar24 - fVar25) ^ (uint)fVar24) &
                                 -(uint)(fRam0000000146af085c < fVar24) ^ (uint)fVar24) &
                               uRam0000000146af07dc));
  iVar7 = movmskps(uVar6,auVar13);
  if ((!bVar5) || (iVar7 != 0)) {
    uVar6 = *(undefined4 *)(*param_2 + 8);
    *(undefined8 *)(param_1 + 0x1ec) = *(undefined8 *)*param_2;
    *(undefined4 *)(param_1 + 500) = uVar6;
    if (iVar7 != 0) {
      *(ulonglong *)(param_1 + 0x1f8) = CONCAT44(fStack_134,local_138);
      *(float *)(param_1 + 0x200) = local_130;
      pfVar1 = (float *)(param_1 + 0x280);
      if (((local_138 != *pfVar1) || (fStack_134 != *(float *)(param_1 + 0x284))) ||
         (local_130 != *(float *)(param_1 + 0x288))) {
        auVar14._12_4_ = 0;
        auVar18 = divps(auVar14,_DAT_146af0860);
        fVar23 = (float)DAT_146af0860;
        fVar24 = DAT_146af0860._4_4_;
        fVar26 = DAT_146af0860._8_4_;
        fVar25 = local_138 - (float)(int)auVar18._0_4_ * fVar23;
        fVar21 = fStack_134 - (float)(int)auVar18._4_4_ * fVar24;
        fVar22 = local_130 - (float)(int)auVar18._8_4_ * fVar26;
        fVar25 = (float)(((uint)(fVar25 + fVar23) ^ (uint)fVar25) & -(uint)(0.0 <= fVar25) ^
                        (uint)(fVar25 + fVar23));
        fVar21 = (float)(((uint)(fVar21 + fVar24) ^ (uint)fVar21) & -(uint)(0.0 <= fVar21) ^
                        (uint)(fVar21 + fVar24));
        fVar22 = (float)(((uint)(fVar22 + fVar26) ^ (uint)fVar22) & -(uint)(0.0 <= fVar22) ^
                        (uint)(fVar22 + fVar26));
        uVar16 = ((uint)(fVar22 - fVar26) ^ (uint)fVar22) & -(uint)(fVar4 < fVar22) ^ (uint)fVar22;
        uStack_150 = CONCAT44(uStack_150._4_4_,uVar16);
        *(ulonglong *)pfVar1 =
             CONCAT44(((uint)(fVar21 - fVar24) ^ (uint)fVar21) & -(uint)(fVar20 < fVar21) ^
                      (uint)fVar21,
                      ((uint)(fVar25 - fVar23) ^ (uint)fVar25) & -(uint)(fVar15 < fVar25) ^
                      (uint)fVar25);
        *(uint *)(param_1 + 0x288) = uVar16;
        puVar10 = (undefined8 *)FRotator::Quaternion(pfVar1,&local_158);
        uVar9 = puVar10[1];
        *(undefined8 *)(param_1 + 0x270) = *puVar10;
        *(undefined8 *)(param_1 + 0x278) = uVar9;
      }
    }
    local_158 = *(ulonglong *)(param_1 + 0x270);
    uStack_150 = *(undefined8 *)(param_1 + 0x278);
    local_160 = param_5;
    local_168 = &local_158;
    FUN_14239b520(param_1,*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198),
                  (uint)param_6 << 3 | (uint)param_4);
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}



// FUNCTION 1423907f0 FUN_1423907f0 body=15 status=ok
// SIG undefined FUN_1423907f0(void)

void FUN_1423907f0(longlong param_1,char param_2)

{
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 0x350) = 0xffffffff;
  }
  return;
}



// FUNCTION 142390800 FUN_142390800 body=50 status=ok
// SIG undefined FUN_142390800(void)

void FUN_142390800(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_18 [16];
  
  (**(code **)(*param_1 + 0x70))(param_1,1);
  puVar4 = (undefined4 *)FGuid::NewGuid(local_18);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(undefined4 *)((longlong)param_1 + 0x2fc) = *puVar4;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x304) = uVar2;
  *(undefined4 *)(param_1 + 0x61) = uVar3;
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 142390860 FUN_142390860 body=40 status=ok
// SIG undefined FUN_142390860(void)

ulonglong FUN_142390860(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong in_RAX;
  
  if (param_2 != 0) {
    for (lVar1 = *(longlong *)(param_1 + 400); in_RAX = 0, lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 400)) {
      if (param_2 == lVar1) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1423908b0 FUN_1423908b0 body=119 status=ok
// SIG undefined FUN_1423908b0(void)

undefined8 FUN_1423908b0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    return 0;
  }
  if (1 < *(byte *)((longlong)param_1 + 0x301)) {
    return 1;
  }
  lVar2 = (**(code **)(*param_1 + 0x4d0))();
  iVar1 = (**(code **)(*param_1 + 0x4e8))(param_1);
  if (((iVar1 - 1U & 0xfffffffd) == 0) &&
     ((*(char *)(lVar2 + 2) == '\x02' || (*(char *)(lVar2 + 6) == '\x02')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 142390930 FUN_142390930 body=138 status=ok
// SIG undefined FUN_142390930(void)

undefined8 FUN_142390930(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if ((param_2 != 0) && (iVar2 = 0, 0 < *(int *)(param_1 + 0x3a8))) {
    do {
      lVar1 = FWeakObjectPtr::Get((longlong)iVar2 * 0xa0 + *(longlong *)(param_1 + 0x3a0) + 0x7c);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x118) == param_2)) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x3a8));
  }
  return 0;
}



// FUNCTION 1423909c0 FUN_1423909c0 body=113 status=ok
// SIG undefined FUN_1423909c0(void)

undefined8 FUN_1423909c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x3a8)) {
    do {
      lVar1 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x3a0) + 0x7c + (longlong)iVar2 * 0xa0);
      if (lVar1 == param_2) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x3a8));
  }
  return 0;
}



// FUNCTION 142390a40 IsPostLoadThreadSafe body=27 status=ok
// SIG undefined IsPostLoadThreadSafe(void)

bool USceneComponent::IsPostLoadThreadSafe(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = FUN_1429ff160();
  return lVar1 == lVar2;
}



// FUNCTION 142390a60 IsPrimCompValidAndAlive body=76 status=ok
// SIG undefined IsPrimCompValidAndAlive(void)

ulonglong IsPrimCompValidAndAlive(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    in_RAX = 0;
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142390ab0 IsReadyForFinishDestroy body=26 status=ok
// SIG undefined IsReadyForFinishDestroy(void)

bool USkyLightComponent::IsReadyForFinishDestroy(longlong param_1)

{
  char cVar1;
  
  cVar1 = FRenderCommandFence::IsFenceComplete(param_1 + 0x3f8);
  return cVar1 != '\0';
}



// FUNCTION 142390ad0 FUN_142390ad0 body=26 status=ok
// SIG undefined FUN_142390ad0(void)

bool FUN_142390ad0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FRenderCommandFence::IsFenceComplete(param_1 + 0x648);
  return cVar1 != '\0';
}



// FUNCTION 142390af0 IsReadyForFinishDestroy body=26 status=ok
// SIG undefined IsReadyForFinishDestroy(void)

bool AActor::IsReadyForFinishDestroy(longlong param_1)

{
  char cVar1;
  
  cVar1 = FRenderCommandFence::IsFenceComplete(param_1 + 0x338);
  return cVar1 != '\0';
}



// FUNCTION 142390b10 FUN_142390b10 body=119 status=ok
// SIG undefined FUN_142390b10(void)

ulonglong FUN_142390b10(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong in_RAX;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    in_RAX = 0;
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      uVar5 = FUN_141296720(param_1 + 4,lVar2 + 0x210,0x322bcc77);
      return uVar5 ^ 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142390bd0 FUN_142390bd0 body=12 status=ok
// SIG undefined FUN_142390bd0(void)

bool FUN_142390bd0(longlong param_1)

{
  return *(longlong *)(param_1 + 0x478) != 0;
}



// FUNCTION 142390be0 FUN_142390be0 body=40 status=ok
// SIG undefined FUN_142390be0(void)

undefined8 FUN_142390be0(longlong *param_1)

{
  int iVar1;
  
  if (*(char *)((longlong)param_1 + 0x24e) != '\x02') {
    iVar1 = (**(code **)(*param_1 + 0x4f8))();
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142390c10 FUN_142390c10 body=58 status=ok
// SIG undefined FUN_142390c10(void)

void FUN_142390c10(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  uVar1 = 0;
  if (param_3 != '\0') {
    uVar1 = param_4;
  }
  FUN_142380500(local_18,&local_18,param_3,uVar1,param_5);
  return;
}



// FUNCTION 142390c50 FUN_142390c50 body=58 status=ok
// SIG undefined FUN_142390c50(void)

void FUN_142390c50(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  uVar1 = 0;
  if (param_3 != '\0') {
    uVar1 = param_4;
  }
  FUN_1423809e0(local_18,&local_18,param_3,uVar1,param_5);
  return;
}



// FUNCTION 142390c90 FUN_142390c90 body=27 status=ok
// SIG undefined FUN_142390c90(void)

void FUN_142390c90(void)

{
  FUN_142380bd0();
  return;
}



// FUNCTION 142390cb0 FUN_142390cb0 body=422 status=ok
// SIG undefined FUN_142390cb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142390cb0(longlong param_1,undefined8 *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  float local_20;
  undefined1 local_18 [16];
  
  local_20 = *(float *)(param_2 + 1) + *(float *)(param_1 + 500);
  pfVar5 = (float *)(param_1 + 0x280);
  local_28 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) + *(float *)(param_1 + 0x1f0),
                      (float)*param_2 + *(float *)(param_1 + 0x1ec));
  if (((*(float *)(param_1 + 0x1f8) != *pfVar5) ||
      (*(float *)(param_1 + 0x1fc) != *(float *)(param_1 + 0x284))) ||
     (*(float *)(param_1 + 0x200) != *(float *)(param_1 + 0x288))) {
    local_38 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x1f8);
    auVar7._12_4_ = 0;
    auVar7._0_12_ = *(undefined1 (*) [12])(param_1 + 0x1f8);
    fVar1 = (float)DAT_146af0860;
    fVar2 = DAT_146af0860._4_4_;
    fVar3 = DAT_146af0860._8_4_;
    auVar7 = divps(auVar7,_DAT_146af0860);
    fVar9 = (float)local_38 - (float)(int)auVar7._0_4_ * fVar1;
    fVar10 = (float)((ulonglong)local_38 >> 0x20) - (float)(int)auVar7._4_4_ * fVar2;
    fVar11 = *(float *)(param_1 + 0x200) - (float)(int)auVar7._8_4_ * fVar3;
    fVar9 = (float)(((uint)(fVar9 + fVar1) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                   (uint)(fVar9 + fVar1));
    fVar10 = (float)(((uint)(fVar10 + fVar2) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                    (uint)(fVar10 + fVar2));
    fVar11 = (float)(((uint)(fVar11 + fVar3) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                    (uint)(fVar11 + fVar3));
    uVar8 = ((uint)(fVar11 - fVar3) ^ (uint)fVar11) & -(uint)(fRam0000000146af0858 < fVar11) ^
            (uint)fVar11;
    uStack_30 = CONCAT44(uStack_30._4_4_,uVar8);
    *(ulonglong *)pfVar5 =
         CONCAT44(((uint)(fVar10 - fVar2) ^ (uint)fVar10) & -(uint)(fRam0000000146af0854 < fVar10) ^
                  (uint)fVar10,
                  ((uint)(fVar9 - fVar1) ^ (uint)fVar9) & -(uint)(_DAT_146af0850 < fVar9) ^
                  (uint)fVar9);
    *(uint *)(param_1 + 0x288) = uVar8;
    puVar4 = (undefined8 *)FRotator::Quaternion(pfVar5,local_18);
    uVar6 = puVar4[1];
    *(undefined8 *)(param_1 + 0x270) = *puVar4;
    *(undefined8 *)(param_1 + 0x278) = uVar6;
  }
  local_38 = *(undefined8 *)(param_1 + 0x270);
  uStack_30 = *(undefined8 *)(param_1 + 0x278);
  uVar6 = 0;
  if (param_3 != '\0') {
    uVar6 = param_4;
  }
  FUN_142397be0(param_1,&local_28,&local_38,param_3,uVar6,param_5);
  return;
}



// FUNCTION 142390e60 FUN_142390e60 body=124 status=ok
// SIG undefined FUN_142390e60(void)

void FUN_142390e60(longlong param_1,undefined8 *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 local_28;
  float local_20;
  float local_10;
  
  local_20 = *(float *)(param_2 + 1) + *(float *)(param_1 + 0x200);
  fVar2 = (float)((ulonglong)*param_2 >> 0x20) + *(float *)(param_1 + 0x1fc);
  uVar1 = 0;
  if (param_3 != '\0') {
    uVar1 = param_4;
  }
  local_28 = CONCAT44(fVar2,(float)*param_2 + *(float *)(param_1 + 0x1f8));
  local_10 = local_20;
  FUN_142398470(local_20,&local_28,fVar2,uVar1,param_5);
  return;
}



// FUNCTION 142390ee0 FUN_142390ee0 body=129 status=ok
// SIG undefined FUN_142390ee0(void)

void FUN_142390ee0(longlong param_1,undefined8 *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined8 local_28;
  float local_20;
  float local_10;
  
  fVar3 = *(float *)(param_1 + 0x220) + (float)*param_2;
  fVar2 = *(float *)(param_1 + 0x224) + (float)((ulonglong)*param_2 >> 0x20);
  local_20 = *(float *)(param_1 + 0x228) + *(float *)(param_2 + 1);
  uVar1 = 0;
  if (param_3 != '\0') {
    uVar1 = param_4;
  }
  local_28 = CONCAT44(fVar2,fVar3);
  local_10 = local_20;
  FUN_1423990b0(fVar3,&local_28,fVar2,uVar1,param_5);
  return;
}



// FUNCTION 142390f70 FUN_142390f70 body=273 status=ok
// SIG undefined FUN_142390f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142390f70(longlong param_1,undefined8 *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  undefined8 uVar11;
  undefined8 local_38;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [32];
  
  local_38 = *param_2;
  fStack_30 = *(float *)(param_2 + 1);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x210);
  fVar2 = auVar1._0_4_;
  fVar3 = auVar1._4_4_;
  fVar4 = auVar1._8_4_;
  fVar5 = auVar1._12_4_;
  pfVar10 = (float *)FRotator::Quaternion(&local_38,local_28);
  fVar6 = *pfVar10;
  fVar7 = pfVar10[1];
  fVar8 = pfVar10[2];
  fVar9 = pfVar10[3];
  fStack_30 = fVar6 * fVar3 * fRam0000000146af08d8 + fVar9 * fVar4 +
              fVar7 * fVar2 * fRam0000000146af08c8 + fVar8 * fVar5 * fRam0000000146af08b8;
  fStack_2c = fVar6 * fVar2 * fRam0000000146af08dc + fVar9 * fVar5 +
              fVar7 * fVar3 * fRam0000000146af08cc + fVar8 * fVar4 * fRam0000000146af08bc;
  local_38 = CONCAT44(fVar6 * fVar4 * fRam0000000146af08d4 + fVar9 * fVar3 +
                      fVar7 * fVar5 * fRam0000000146af08c4 + fVar8 * fVar2 * fRam0000000146af08b4,
                      fVar6 * fVar5 * _DAT_146af08d0 + fVar9 * fVar2 +
                      fVar7 * fVar4 * _DAT_146af08c0 + fVar8 * fVar3 * _DAT_146af08b0);
  FUN_14238ced0(param_1,local_28,&local_38);
  fStack_30 = *(float *)(param_1 + 500);
  local_38 = *(undefined8 *)(param_1 + 0x1ec);
  uVar11 = 0;
  if (param_3 != '\0') {
    uVar11 = param_4;
  }
  FUN_142397be0(param_1,&local_38,local_28,param_3,uVar11,param_5);
  return;
}



// FUNCTION 142391090 FUN_142391090 body=229 status=ok
// SIG undefined FUN_142391090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142391090(longlong param_1,float *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = *(float *)(param_1 + 0x210);
  fVar6 = *(float *)(param_1 + 0x214);
  fVar7 = *(float *)(param_1 + 0x218);
  fVar8 = *(float *)(param_1 + 0x21c);
  fVar10 = *(float *)(param_1 + 0x228) + param_2[6];
  uVar9 = 0;
  if (param_3 != '\0') {
    uVar9 = param_4;
  }
  local_58 = param_5;
  local_48 = fVar8 * fVar1 * _DAT_146af08d0 + fVar4 * fVar5 + fVar7 * fVar2 * _DAT_146af08c0 +
             fVar6 * fVar3 * _DAT_146af08b0;
  fStack_44 = fVar7 * fVar1 * fRam0000000146af08d4 + fVar4 * fVar6 +
              fVar8 * fVar2 * fRam0000000146af08c4 + fVar5 * fVar3 * fRam0000000146af08b4;
  fStack_40 = fVar6 * fVar1 * fRam0000000146af08d8 + fVar4 * fVar7 +
              fVar5 * fVar2 * fRam0000000146af08c8 + fVar8 * fVar3 * fRam0000000146af08b8;
  fStack_3c = fVar5 * fVar1 * fRam0000000146af08dc + fVar4 * fVar8 +
              fVar6 * fVar2 * fRam0000000146af08cc + fVar7 * fVar3 * fRam0000000146af08bc;
  local_38._4_4_ = *(float *)(param_1 + 0x224) + param_2[5];
  local_38._0_4_ = *(float *)(param_1 + 0x220) + param_2[4];
  local_38._8_4_ = fVar10;
  local_38._12_4_ = 0;
  local_28 = 0x3f800000;
  uStack_24 = 0x3f800000;
  uStack_20 = 0x3f800000;
  uStack_1c = 0;
  FUN_142399d60(0x3f800000,&local_48,fVar10,uVar9);
  return;
}



// FUNCTION 142391180 K2_AttachToComponent body=54 status=ok
// SIG undefined K2_AttachToComponent(void)

void USceneComponent::K2_AttachToComponent
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
               undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined1 local_res20;
  undefined1 local_res21;
  undefined1 local_res22;
  undefined1 local_res23;
  
  local_res21 = param_5;
  local_res22 = param_6;
  local_res23 = param_7;
  local_res20 = param_4;
  FUN_142382f60(param_1,param_2,&local_res20,param_3);
  return;
}



// FUNCTION 1423911c0 K2_DetachFromComponent body=46 status=ok
// SIG undefined K2_DetachFromComponent(void)

void USceneComponent::K2_DetachFromComponent
               (longlong *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
               undefined1 param_5)

{
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  undefined1 local_res13;
  
  local_res13 = param_5;
  local_res10 = param_2;
  local_res11 = param_3;
  local_res12 = param_4;
  (**(code **)(*param_1 + 0x418))(param_1,&local_res10);
  return;
}



// FUNCTION 1423911f0 FUN_1423911f0 body=36 status=ok
// SIG undefined FUN_1423911f0(void)

undefined4 * FUN_1423911f0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x224);
  uVar2 = *(undefined4 *)(param_1 + 0x228);
  *param_2 = *(undefined4 *)(param_1 + 0x220);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 142391220 FUN_142391220 body=124 status=ok
// SIG undefined FUN_142391220(void)

undefined8 * FUN_142391220(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  undefined8 *puVar4;
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = *(float *)(param_1 + 0x210);
  fStack_14 = *(float *)(param_1 + 0x214);
  fStack_10 = *(float *)(param_1 + 0x218);
  fStack_c = *(float *)(param_1 + 0x21c);
  auVar2._4_4_ = -(uint)(*(float *)(param_1 + 0x254) != fStack_14);
  auVar2._0_4_ = -(uint)(*(float *)(param_1 + 0x250) != local_18);
  auVar2._8_4_ = -(uint)(*(float *)(param_1 + 600) != fStack_10);
  auVar2._12_4_ = -(uint)(*(float *)(param_1 + 0x25c) != fStack_c);
  iVar3 = movmskps(in_EAX,auVar2);
  if (iVar3 != 0) {
    *(float *)(param_1 + 0x250) = local_18;
    *(float *)(param_1 + 0x254) = fStack_14;
    *(float *)(param_1 + 600) = fStack_10;
    *(float *)(param_1 + 0x25c) = fStack_c;
    puVar4 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
    *(undefined8 *)(param_1 + 0x260) = *puVar4;
    *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(puVar4 + 1);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x268);
  *param_2 = *(undefined8 *)(param_1 + 0x260);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1423912a0 FUN_1423912a0 body=36 status=ok
// SIG undefined FUN_1423912a0(void)

undefined4 * FUN_1423912a0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x234);
  uVar2 = *(undefined4 *)(param_1 + 0x238);
  *param_2 = *(undefined4 *)(param_1 + 0x230);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1423912d0 FUN_1423912d0 body=36 status=ok
// SIG undefined FUN_1423912d0(void)

undefined8 * FUN_1423912d0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x218);
  uVar2 = *(undefined8 *)(param_1 + 0x220);
  uVar3 = *(undefined8 *)(param_1 + 0x228);
  *param_2 = *(undefined8 *)(param_1 + 0x210);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x238);
  param_2[4] = *(undefined8 *)(param_1 + 0x230);
  param_2[5] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return param_2;
}



// FUNCTION 142391300 FUN_142391300 body=359 status=ok
// SIG undefined FUN_142391300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142391300(longlong param_1,undefined8 *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  local_28 = *param_2;
  local_20 = *(undefined4 *)(param_2 + 1);
  pfVar5 = (float *)(param_1 + 0x280);
  if (((*(float *)(param_1 + 0x1f8) != *pfVar5) ||
      (*(float *)(param_1 + 0x1fc) != *(float *)(param_1 + 0x284))) ||
     (*(float *)(param_1 + 0x200) != *(float *)(param_1 + 0x288))) {
    local_38 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x1f8);
    auVar7._12_4_ = 0;
    auVar7._0_12_ = *(undefined1 (*) [12])(param_1 + 0x1f8);
    fVar1 = (float)DAT_146af0860;
    fVar2 = DAT_146af0860._4_4_;
    fVar3 = DAT_146af0860._8_4_;
    auVar7 = divps(auVar7,_DAT_146af0860);
    fVar9 = (float)local_38 - (float)(int)auVar7._0_4_ * fVar1;
    fVar10 = (float)((ulonglong)local_38 >> 0x20) - (float)(int)auVar7._4_4_ * fVar2;
    fVar11 = *(float *)(param_1 + 0x200) - (float)(int)auVar7._8_4_ * fVar3;
    fVar9 = (float)(((uint)(fVar9 + fVar1) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                   (uint)(fVar9 + fVar1));
    fVar10 = (float)(((uint)(fVar10 + fVar2) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                    (uint)(fVar10 + fVar2));
    fVar11 = (float)(((uint)(fVar11 + fVar3) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                    (uint)(fVar11 + fVar3));
    uVar8 = ((uint)(fVar11 - fVar3) ^ (uint)fVar11) & -(uint)(fRam0000000146af0858 < fVar11) ^
            (uint)fVar11;
    uStack_30 = CONCAT44(uStack_30._4_4_,uVar8);
    *(ulonglong *)pfVar5 =
         CONCAT44(((uint)(fVar10 - fVar2) ^ (uint)fVar10) & -(uint)(fRam0000000146af0854 < fVar10) ^
                  (uint)fVar10,
                  ((uint)(fVar9 - fVar1) ^ (uint)fVar9) & -(uint)(_DAT_146af0850 < fVar9) ^
                  (uint)fVar9);
    *(uint *)(param_1 + 0x288) = uVar8;
    puVar4 = (undefined8 *)FRotator::Quaternion(pfVar5,local_18);
    uVar6 = puVar4[1];
    *(undefined8 *)(param_1 + 0x270) = *puVar4;
    *(undefined8 *)(param_1 + 0x278) = uVar6;
  }
  local_38 = *(undefined8 *)(param_1 + 0x270);
  uStack_30 = *(undefined8 *)(param_1 + 0x278);
  uVar6 = 0;
  if (param_3 != '\0') {
    uVar6 = param_4;
  }
  FUN_142397be0(param_1,&local_28,&local_38,param_3,uVar6,param_5);
  return;
}



// FUNCTION 142391470 FUN_142391470 body=91 status=ok
// SIG undefined FUN_142391470(void)

void FUN_142391470(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = *param_3;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  uVar1 = 0;
  if (param_4 != '\0') {
    uVar1 = param_5;
  }
  FUN_1423982b0(local_18,&local_18,&local_28,param_4,uVar1,param_6);
  return;
}



// FUNCTION 1423914d0 FUN_1423914d0 body=58 status=ok
// SIG undefined FUN_1423914d0(void)

void FUN_1423914d0(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  uVar1 = 0;
  if (param_3 != '\0') {
    uVar1 = param_4;
  }
  FUN_142398470(local_18,&local_18,param_3,uVar1,param_5);
  return;
}



// FUNCTION 142391510 FUN_142391510 body=27 status=ok
// SIG undefined FUN_142391510(void)

void FUN_142391510(void)

{
  FUN_142398770();
  return;
}



// FUNCTION 142391530 FUN_142391530 body=58 status=ok
// SIG undefined FUN_142391530(void)

void FUN_142391530(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  uVar1 = 0;
  if (param_3 != '\0') {
    uVar1 = param_4;
  }
  FUN_1423990b0(local_18,&local_18,param_3,uVar1,param_5);
  return;
}



// FUNCTION 142391570 FUN_142391570 body=225 status=ok
// SIG undefined FUN_142391570(void)

void FUN_142391570(longlong param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  local_28 = *param_3;
  local_20 = *(undefined4 *)(param_3 + 1);
  uVar2 = 0;
  if ((char)param_4 != '\0') {
    uVar2 = param_5;
  }
  if (*(longlong *)(param_1 + 400) == 0) {
    local_38 = local_28;
    local_30 = local_20;
    local_28 = *param_2;
    local_20 = *(undefined4 *)(param_2 + 1);
    FUN_1423982b0(*param_2,&local_28,&local_38,param_4,uVar2,param_6);
    return;
  }
  local_38 = *param_2;
  local_30 = *(undefined4 *)(param_2 + 1);
  uVar1 = FRotator::Quaternion(&local_28,local_18);
  FUN_142399390(param_1,&local_38,uVar1,param_4 & 0xff,uVar2,param_6);
  return;
}



// FUNCTION 142391660 FUN_142391660 body=170 status=ok
// SIG undefined FUN_142391660(void)

void FUN_142391660(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  local_28 = *param_2;
  local_20 = *(undefined4 *)(param_2 + 1);
  uVar2 = 0;
  if ((char)param_3 != '\0') {
    uVar2 = param_4;
  }
  if (*(longlong *)(param_1 + 400) == 0) {
    FUN_142398470(local_28,&local_28,param_3,uVar2,param_5);
    return;
  }
  uVar1 = FRotator::Quaternion(&local_28,local_18);
  FUN_142399b10(param_1,uVar1,param_3 & 0xff,uVar2,param_5);
  return;
}



// FUNCTION 142391710 FUN_142391710 body=27 status=ok
// SIG undefined FUN_142391710(void)

void FUN_142391710(void)

{
  FUN_142399d60();
  return;
}



// FUNCTION 142391730 FUN_142391730 body=457 status=ok
// SIG undefined FUN_142391730(void)

undefined8 FUN_142391730(longlong *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined8 local_58;
  float local_50;
  
  fVar3 = (float)(**(code **)(*param_1 + 0x400))();
  if (0.0 < fVar3) {
    if (0.0001 <= fVar3) {
      fVar1 = *param_3;
      fVar2 = param_3[1];
      fVar8 = param_3[2];
      fVar5 = fVar1 * fVar1 + fVar2 * fVar2 + fVar8 * fVar8;
      if (fVar5 <= fVar3 * fVar3) {
        uVar4 = *(undefined8 *)param_3;
        fVar8 = param_3[2];
      }
      else {
        auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
        fVar6 = auVar7._0_4_;
        fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
        fVar3 = (fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6)) * fVar3;
        fVar8 = fVar8 * fVar3;
        uVar4 = CONCAT44(fVar2 * fVar3,fVar1 * fVar3);
      }
    }
    else {
      uVar4 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      fVar8 = DAT_1468b5d98;
    }
    *(undefined8 *)param_3 = uVar4;
    param_3[2] = fVar8;
  }
  local_50 = param_3[2];
  local_58 = *(undefined8 *)param_3;
  (**(code **)(*param_1 + 0x4f0))(param_1,param_2,&local_58);
  return param_2;
}



// FUNCTION 142391900 FUN_142391900 body=44 status=ok
// SIG undefined FUN_142391900(void)

void FUN_142391900(longlong param_1)

{
  FUN_14269d3a0(param_1 + 0x3b0);
  return;
}



// FUNCTION 142391930 FUN_142391930 body=22 status=ok
// SIG undefined FUN_142391930(void)

void FUN_142391930(longlong param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0xcb) != '\0')) {
    *(undefined1 *)(param_1 + 0xcc) = 1;
  }
  return;
}



// FUNCTION 142391950 FUN_142391950 body=27 status=ok
// SIG undefined FUN_142391950(void)

void FUN_142391950(undefined8 param_1)

{
  FUN_14239d6b0();
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 142391970 FUN_142391970 body=532 status=ok
// SIG undefined FUN_142391970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_142391970(longlong *param_1,float *param_2,float *param_3,undefined1 param_4,void *param_5,
             undefined4 param_6,undefined1 param_7)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 in_EAX;
  int iVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong local_18;
  longlong lStack_10;
  
  if (param_1[0x32] == 0) {
    if (((*param_2 == 0.0) && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) {
      fVar14 = *param_3;
      fVar11 = param_3[1] - *(float *)((longlong)param_1 + 0x1fc);
      fVar2 = (float)DAT_146af0860;
      fVar3 = DAT_146af0860._4_4_;
      fVar4 = DAT_146af0860._8_4_;
      fVar5 = DAT_146af0860._12_4_;
      auVar8._4_4_ = fVar11;
      auVar8._0_4_ = fVar14 - *(float *)(param_1 + 0x3f);
      auVar8._8_4_ = param_3[2] - *(float *)(param_1 + 0x40);
      auVar8._12_4_ = 0;
      auVar8 = divps(auVar8,_DAT_146af0860);
      fVar10 = (fVar14 - *(float *)(param_1 + 0x3f)) - (float)(int)auVar8._0_4_ * fVar2;
      fVar11 = fVar11 - (float)(int)auVar8._4_4_ * fVar3;
      fVar12 = (param_3[2] - *(float *)(param_1 + 0x40)) - (float)(int)auVar8._8_4_ * fVar4;
      fVar13 = 0.0 - (float)(int)auVar8._12_4_ * fVar5;
      fVar10 = (float)(((uint)(fVar10 + fVar2) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                      (uint)(fVar10 + fVar2));
      fVar11 = (float)(((uint)(fVar11 + fVar3) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                      (uint)(fVar11 + fVar3));
      fVar12 = (float)(((uint)(fVar12 + fVar4) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                      (uint)(fVar12 + fVar4));
      fVar13 = (float)(((uint)(fVar13 + fVar5) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                      (uint)(fVar13 + fVar5));
      auVar9._4_4_ = -(uint)(0.0001 < (float)((((uint)(fVar11 - fVar3) ^ (uint)fVar11) &
                                               -(uint)(fRam0000000146af0854 < fVar11) ^ (uint)fVar11
                                              ) & uRam0000000146af07d4));
      auVar9._0_4_ = -(uint)(0.0001 < (float)((((uint)(fVar10 - fVar2) ^ (uint)fVar10) &
                                               -(uint)(_DAT_146af0850 < fVar10) ^ (uint)fVar10) &
                                             _DAT_146af07d0));
      auVar9._8_4_ = -(uint)(0.0001 < (float)((((uint)(fVar12 - fVar4) ^ (uint)fVar12) &
                                               -(uint)(fRam0000000146af0858 < fVar12) ^ (uint)fVar12
                                              ) & uRam0000000146af07d8));
      auVar9._12_4_ =
           -(uint)(0.0001 < (float)((((uint)(fVar13 - fVar5) ^ (uint)fVar13) &
                                     -(uint)(fRam0000000146af085c < fVar13) ^ (uint)fVar13) &
                                   uRam0000000146af07dc));
      iVar6 = movmskps(in_EAX,auVar9);
      if (iVar6 == 0) {
        if (param_5 != (void *)0x0) {
          _guard_xfg_dispatch_icall_nop(param_5,0,0x90);
          *(undefined4 *)((longlong)param_5 + 0xc) = 0x3f800000;
        }
        return 1;
      }
    }
    else {
      fVar14 = *param_3;
    }
    if (((fVar14 == *(float *)(param_1 + 0x50)) &&
        (param_3[1] == *(float *)((longlong)param_1 + 0x284))) &&
       (param_3[2] == *(float *)(param_1 + 0x51))) {
      local_18 = param_1[0x4e];
      lStack_10 = param_1[0x4f];
    }
    else {
      FRotator::Quaternion(param_3,&local_18);
    }
    uVar7 = (**(code **)(*param_1 + 0x490))
                      (param_1,param_2,&local_18,param_4,param_5,param_6,param_7);
  }
  else {
    lVar1 = *param_1;
    uVar7 = FRotator::Quaternion(param_3,&local_18);
    uVar7 = (**(code **)(lVar1 + 0x490))(param_1,param_2,uVar7,param_4,param_5,param_6,param_7);
  }
  return uVar7;
}



// FUNCTION 142391b90 FUN_142391b90 body=3992 status=ok
// SIG undefined FUN_142391b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142391b90(longlong *param_1,float *param_2,float *param_3,char param_4,void *param_5,
                       uint param_6,undefined1 param_7)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  float *pfVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  void *pvVar14;
  ulonglong uVar15;
  float *pfVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  byte *pbVar22;
  undefined1 *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_388 [32];
  float *local_368;
  float **local_360;
  undefined1 *local_358;
  char local_348;
  char local_347;
  uint local_344;
  char local_340;
  char local_33f;
  uint local_338;
  undefined8 local_328;
  float local_320;
  float *local_318;
  longlong local_310;
  undefined8 local_308;
  float local_300;
  float fStack_2fc;
  float local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0 [8];
  float *local_2d8;
  longlong lStack_2d0;
  float local_2c8;
  float fStack_2c4;
  float local_2c0;
  longlong local_2b8;
  uint local_2b0;
  uint local_2ac;
  longlong local_2a8;
  byte local_298 [4];
  undefined4 local_294;
  uint local_290;
  float local_28c;
  undefined4 local_288;
  undefined8 local_284;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_254;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 local_210;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined1 local_1f8 [32];
  undefined1 local_1d8;
  undefined1 local_1d0 [96];
  int local_170;
  int local_15c;
  int local_158;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_138 [22];
  byte local_122;
  longlong local_f0;
  longlong local_d0;
  ulonglong local_b8;
  ulonglong uVar16;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  iVar10 = *(int *)((longlong)param_1 + 0xc);
  uVar16 = 0;
  uVar15 = uVar16;
  if (iVar10 < (int)DAT_1469e91c4) {
    uVar20 = iVar10 >> 0x1f & 0xffff;
    uVar9 = iVar10 + uVar20;
    uVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
             (longlong)(int)((uVar9 & 0xffff) - uVar20) * 0x18;
  }
  uVar9 = *(uint *)(uVar15 + 8) >> 0x1d;
  pvVar14 = (void *)(ulonglong)uVar9;
  local_340 = param_4;
  local_318 = param_3;
  local_2d8 = param_2;
  if ((uVar9 & 1) != 0) goto LAB_142392ac1;
  if ((*(char *)((longlong)param_1 + 0x24e) != '\x02') && ((*(byte *)(param_1 + 0x17) & 1) != 0)) {
    lVar13 = param_1[0x24];
    if (lVar13 == 0) {
      lVar13 = FUN_1423407b0(param_1);
      pvVar14 = (void *)0x0;
      if (lVar13 == 0) goto LAB_142391c93;
    }
    pvVar14 = (void *)UWorld::IsGameWorld(lVar13);
    if (((((char)pvVar14 != '\0') && (*(char *)(lVar13 + 0x6f8) != '\0')) &&
        (pvVar14 = (void *)FUN_142341170(param_1), (char)pvVar14 == '\0')) &&
       ((pvVar14 = (void *)param_1[0x23], pvVar14 != (void *)0x0 &&
        ((*(byte *)((longlong)pvVar14 + 0x93) & 8) != 0)))) {
LAB_142392ac1:
      if (param_5 != (void *)0x0) {
        pvVar14 = _guard_xfg_dispatch_icall_nop(param_5,0,0x90);
        *(undefined4 *)((longlong)param_5 + 0xc) = 0x3f800000;
      }
      return (ulonglong)pvVar14 & 0xffffffffffffff00;
    }
  }
LAB_142391c93:
  pfVar17 = local_318;
  if ((*(byte *)((longlong)param_1 + 0x24c) & 1) == 0) {
    pvVar14 = (void *)FUN_140942fb0(param_1,0,0);
  }
  pfVar5 = local_318;
  fVar29 = *(float *)(param_1 + 0x44);
  fVar27 = *(float *)((longlong)param_1 + 0x224);
  local_328 = (float *)param_1[0x44];
  fVar28 = *(float *)(param_1 + 0x45);
  local_208 = *(float *)(param_1 + 0x42);
  fStack_204 = *(float *)((longlong)param_1 + 0x214);
  fStack_200 = *(float *)(param_1 + 0x43);
  fStack_1fc = *(float *)((longlong)param_1 + 0x21c);
  local_300 = fVar29 + *param_2;
  fStack_2fc = fVar27 + param_2[1];
  local_2f8 = fVar28 + param_2[2];
  fVar30 = (local_300 - fVar29) * (local_300 - fVar29) +
           (fStack_2fc - fVar27) * (fStack_2fc - fVar27) +
           (local_2f8 - fVar28) * (local_2f8 - fVar28);
  if (param_4 == '\0') {
    fVar31 = 0.0;
  }
  else {
    fVar31 = 1.5999998e-07;
  }
  local_2c8 = fVar29;
  fStack_2c4 = fVar27;
  local_2c0 = fVar28;
  if (fVar30 <= fVar31) {
    local_338 = 0x322bcc77;
    auVar2._4_4_ = -(uint)(1e-08 < (float)((uint)(pfVar17[1] - fStack_204) & uRam0000000146af07d4));
    auVar2._0_4_ = -(uint)(1e-08 < (float)((uint)(*pfVar17 - local_208) & _DAT_146af07d0));
    auVar2._8_4_ = -(uint)(1e-08 < (float)((uint)(pfVar17[2] - fStack_200) & uRam0000000146af07d8));
    auVar2._12_4_ = -(uint)(1e-08 < (float)((uint)(pfVar17[3] - fStack_1fc) & uRam0000000146af07dc))
    ;
    iVar10 = movmskps((int)pvVar14,auVar2);
    if ((iVar10 == 0) ||
       (auVar3._4_4_ = -(uint)(1e-08 < (float)((uint)(fStack_204 + pfVar17[1]) &
                                              uRam0000000146af07d4)),
       auVar3._0_4_ = -(uint)(1e-08 < (float)((uint)(local_208 + *pfVar17) & _DAT_146af07d0)),
       auVar3._8_4_ = -(uint)(1e-08 < (float)((uint)(fStack_200 + pfVar17[2]) & uRam0000000146af07d8
                                             )),
       auVar3._12_4_ =
            -(uint)(1e-08 < (float)((uint)(fStack_1fc + pfVar17[3]) & uRam0000000146af07dc)),
       iVar10 = movmskps(iVar10,auVar3), iVar10 == 0)) {
      uVar15 = (ulonglong)pvVar14 & 0xffffffff00000000;
      if (param_5 != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop(param_5,0,0x90);
        *(ulonglong *)((longlong)param_5 + 0x44) = CONCAT44(fStack_2c4,local_2c8);
        *(float *)((longlong)param_5 + 0x4c) = local_2c0;
        uVar15 = (ulonglong)(uint)local_2f8;
        *(ulonglong *)((longlong)param_5 + 0x50) = CONCAT44(fStack_2fc,local_300);
        *(float *)((longlong)param_5 + 0x58) = local_2f8;
        *(undefined4 *)((longlong)param_5 + 0xc) = 0x3f800000;
      }
      return CONCAT71((int7)(uVar15 >> 8),1);
    }
    fVar30 = 0.0;
  }
  iVar10 = -1;
  cVar7 = '\0';
  local_298[0] = local_298[0] & 0xfe;
  local_2ac = CONCAT31((uint3)(param_6 >> 9),(char)(param_6 >> 1)) & 0xffffff01;
  local_2b0 = param_6 >> 4 & 0xffffff01;
  lVar13 = param_1[0x23];
  local_234 = 0xffffffff;
  local_230 = 0;
  local_22c = 0xffffffff;
  local_228 = 0;
  uVar9 = 0xffffffff;
  local_224 = 0xffffffff;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_28c = 1.0;
  local_33f = '\0';
  local_347 = '\0';
  local_310 = 0;
  local_308 = 0;
  local_2b8 = lVar13;
  if (local_340 == '\0') {
    local_328 = (float *)CONCAT44(fStack_2fc,local_300);
    local_360 = (float **)CONCAT71(local_360._1_7_,(char)local_2b0);
    local_368 = (float *)CONCAT71(local_368._1_7_,param_7);
    local_320 = local_2f8;
    bVar6 = FUN_142390190(param_1,&local_328,local_318,param_6 >> 1 & 1);
    if (fVar30 == 0.0) {
      local_328 = (float *)param_1[0x46];
      local_320 = *(float *)(param_1 + 0x47);
      local_347 = '\x01';
      cVar7 = (**(code **)(*param_1 + 0x750))(param_1,&local_208,pfVar5,&local_328);
      if ((cVar7 != '\0') &&
         (iVar10 = (**(code **)(*param_1 + 0x4e8))(param_1), (iVar10 - 1U & 0xfffffffd) == 0)) {
        cVar7 = '\x01';
        goto LAB_14239206e;
      }
    }
    else {
      local_347 = '\0';
    }
    cVar7 = '\0';
    goto LAB_14239206e;
  }
  local_2f0 = 0;
  local_2e8 = 0;
  local_320 = fVar28;
  iVar11 = (**(code **)(*param_1 + 0x4e8))(param_1);
  pfVar17 = local_318;
  if ((iVar11 - 1U & 0xfffffffd) == 0) {
    bVar4 = true;
    if (fVar30 <= 0.0) goto LAB_14239271a;
    lVar24 = param_1[0x24];
    if (lVar24 == 0) {
      local_2a8 = lVar24;
      lVar24 = FUN_1423407b0(param_1);
    }
    local_2a8 = lVar24;
    cVar7 = FUN_142399eb0(param_1);
    local_348 = cVar7;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146af0a10) &&
       (_Init_thread_header(&DAT_146af0a10), DAT_146af0a10 == -1)) {
      FName::FName(&DAT_146af0a08,"MoveComponent",1);
      _Init_thread_footer(&DAT_146af0a10);
    }
    local_368 = (float *)lVar13;
    FUN_1422ffb20(local_138,DAT_146af0a08,local_2e0,0);
    FUN_1426d3dd0(local_1f8);
    FUN_1426ea8d0(local_1f8,2);
    (**(code **)(*param_1 + 0x740))(param_1,local_138,local_1f8);
    if (((*(byte *)((longlong)param_1 + 0x2ef) & 1) == 0) && (cVar7 != '\0')) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    local_122 = local_122 | bVar6;
    local_358 = local_138;
    local_360 = (float **)&local_208;
    local_368 = &local_300;
    cVar7 = FUN_142335df0(lVar24,&local_2f0,param_1,&local_2c8);
    if (0 < (int)local_2e8) {
      fVar29 = 1.0 / SQRT(fVar30);
      uVar15 = uVar16;
      uVar19 = uVar16;
      do {
        fVar27 = fVar29 * 0.1;
        if ((fVar29 * 0.1 <= 0.1) && (fVar27 = fVar29, 0.1 <= fVar29)) {
          fVar27 = 0.1;
        }
        fVar27 = *(float *)(local_2f0 + 0xc + uVar15) - (fVar27 + 0.001);
        if (0.0 <= fVar27) {
          if (1.0 <= fVar27) {
            fVar27 = 1.0;
          }
        }
        else {
          fVar27 = 0.0;
        }
        *(float *)(local_2f0 + 0xc + uVar15) = fVar27;
        uVar20 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar20;
        uVar15 = uVar15 + 0x90;
      } while ((int)uVar20 < (int)local_2e8);
    }
    if (((cVar7 != '\0') || ((*(byte *)((longlong)param_1 + 0x2ef) & 1) != 0)) ||
       (local_348 == '\0')) {
      local_338 = 0xffffffff;
      local_344 = 0;
      if (0 < (int)local_2e8) {
        uVar15 = uVar16;
        uVar19 = 0xffffffffffffffff;
        fVar29 = 3.4e+38;
        cVar7 = local_348;
        do {
          pbVar22 = (byte *)(uVar15 * 0x90 + local_2f0);
          uVar25 = uVar19;
          fVar27 = fVar29;
          uVar20 = uVar9;
          if ((*pbVar22 & 1) == 0) {
            if ((((*(byte *)((longlong)param_1 + 0x2ef) & 1) != 0) ||
                (uVar12 = (uint)uVar16, cVar7 == '\0')) &&
               ((pfVar17 = (float *)FWeakObjectPtr::Get(pbVar22 + 0x74), cVar7 = local_348,
                uVar20 = local_338, uVar12 = local_344, pfVar17 != (float *)0x0 &&
                (((*(byte *)((longlong)pfVar17 + 0x2ef) & 1) != 0 || (local_348 == '\0')))))) {
              uVar18 = FWeakObjectPtr::Get(pbVar22 + 0x6c);
              local_360 = (float **)CONCAT71(local_360._1_7_,local_348);
              local_368 = pfVar17;
              cVar8 = FUN_14239a180(local_2a8,local_2b8,param_1,uVar18);
              cVar7 = local_348;
              uVar20 = local_338;
              uVar12 = local_344;
              if (cVar8 == '\0') {
                if ((-1 < (longlong)uVar19) &&
                   (uVar12 = local_338,
                   *(float *)(local_2f0 + 0xc + uVar19 * 0x90) < *(float *)(pbVar22 + 0xc))) break;
                if (iVar10 == -1) {
                  iVar10 = -1;
                  if (0.0 < *(float *)(pbVar22 + 0xc)) {
                    iVar10 = (int)local_308;
                  }
                }
                local_1d8 = 1;
                FUN_140729f20(local_1d0,pbVar22);
                uVar16 = local_308;
                local_13c = 1;
                for (lVar13 = local_310; lVar13 != (longlong)(int)local_308 * 0xa0 + local_310;
                    lVar13 = lVar13 + 0xa0) {
                  if (((local_15c == *(int *)(lVar13 + 0x7c)) &&
                      (local_158 == *(int *)(lVar13 + 0x80))) &&
                     (local_170 == *(int *)(lVar13 + 0x68))) {
                    cVar7 = local_348;
                    uVar20 = local_338;
                    uVar12 = local_344;
                    if ((int)((lVar13 - local_310) / 0xa0) != -1) goto LAB_142392325;
                    break;
                  }
                }
                lVar13 = (longlong)(int)local_308;
                iVar11 = (int)local_308 + 1;
                local_308 = CONCAT44(local_308._4_4_,iVar11);
                if (local_308._4_4_ < iVar11) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_310,uVar16 & 0xffffffff);
                }
                puVar23 = (undefined1 *)(lVar13 * 0xa0 + local_310);
                *puVar23 = local_1d8;
                FUN_140729f20(puVar23 + 8);
                *(undefined4 *)(puVar23 + 0x98) = local_140;
                *(undefined4 *)(puVar23 + 0x9c) = local_13c;
                cVar7 = local_348;
                uVar20 = local_338;
                uVar12 = local_344;
              }
            }
          }
          else {
            local_368 = (float *)CONCAT44(local_368._4_4_,param_6);
            cVar8 = FUN_142399fa0(local_2a8,pbVar22,local_2d8,local_2b8);
            cVar7 = local_348;
            uVar12 = local_344;
            if (cVar8 == '\0') {
              if (*(float *)(pbVar22 + 0xc) == 0.0) {
                fVar27 = *(float *)(pbVar22 + 0x3c) * local_2d8[1] +
                         *(float *)(pbVar22 + 0x38) * *local_2d8 +
                         *(float *)(pbVar22 + 0x40) * local_2d8[2];
                uVar25 = uVar15;
                uVar20 = local_344;
                local_338 = local_344;
                if (fVar29 <= fVar27) {
                  uVar25 = uVar19;
                  fVar27 = fVar29;
                  uVar20 = uVar9;
                  local_338 = uVar9;
                }
              }
              else if (uVar19 == 0xffffffffffffffff) break;
            }
          }
LAB_142392325:
          uVar9 = uVar20;
          local_344 = uVar12 + 1;
          uVar16 = (ulonglong)local_344;
          uVar15 = uVar15 + 1;
          uVar19 = uVar25;
          fVar29 = fVar27;
          uVar12 = local_338;
        } while ((int)local_344 < (int)local_2e8);
        lVar13 = local_2b8;
        if (-1 < (int)uVar12) {
          FUN_140729f20(local_298);
          local_33f = '\x01';
          lVar13 = local_2b8;
        }
      }
    }
    if ((local_298[0] & 1) == 0) {
      local_320 = local_2f8;
      local_328 = (float *)CONCAT44(fStack_2fc,local_300);
    }
    else {
      fVar27 = (local_300 - local_2c8) * local_28c + local_2c8;
      fVar29 = (fStack_2fc - fStack_2c4) * local_28c + fStack_2c4;
      local_320 = (local_2f8 - local_2c0) * local_28c + local_2c0;
      fVar28 = fVar27 - local_2c8;
      local_328 = (float *)CONCAT44(fVar29,fVar27);
      fVar29 = fVar29 - fStack_2c4;
      if (fVar29 * fVar29 + fVar28 * fVar28 + (local_320 - local_2c0) * (local_320 - local_2c0) <=
          fVar31) {
        local_328 = (float *)CONCAT44(fStack_2c4,local_2c8);
        local_320 = local_2c0;
        local_28c = 0.0;
        if (iVar10 != -1) {
          lVar24 = (longlong)(int)local_308;
          if ((int)local_308 < iVar10) {
            iVar10 = iVar10 - (int)local_308;
            iVar11 = (int)local_308 + iVar10;
            local_308 = CONCAT44(local_308._4_4_,iVar11);
            if (local_308._4_4_ < iVar11) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_310);
            }
            if (iVar10 != 0) {
              lVar24 = lVar24 * 0xa0 + local_310 + 0x78;
              do {
                _guard_xfg_dispatch_icall_nop((void *)(lVar24 + -0x70),0,0x90);
                *(undefined4 *)(lVar24 + -100) = 0x3f800000;
                *(undefined4 *)(lVar24 + 0x24) = 1;
                lVar24 = lVar24 + 0xa0;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
          }
          else if ((iVar10 < (int)local_308) && (iVar11 = (int)local_308 - iVar10, iVar11 != 0)) {
            iVar21 = ((int)local_308 - iVar11) - iVar10;
            if (iVar21 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(local_310 + (longlong)iVar10 * 0xa0),
                         (void *)((longlong)(iVar11 + iVar10) * 0xa0 + local_310),
                         (longlong)iVar21 * 0xa0);
            }
            local_308 = CONCAT44(local_308._4_4_,(int)local_308 - iVar11);
          }
        }
      }
    }
    pfVar17 = local_318;
    local_2d8 = (float *)param_1[0x46];
    lStack_2d0 = CONCAT44(lStack_2d0._4_4_,(int)param_1[0x47]);
    cVar7 = (**(code **)(*param_1 + 0x750))(param_1,&local_208,local_318,&local_2d8);
    if (local_d0 != 0) {
      FMemory::Free();
    }
    if (local_f0 != 0) {
      FMemory::Free();
    }
  }
  else {
    bVar4 = false;
    if (fVar30 <= 0.0) {
LAB_14239271a:
      if (fVar30 == 0.0) {
        if (bVar4) {
          local_2d8 = (float *)param_1[0x46];
          lStack_2d0 = CONCAT44(lStack_2d0._4_4_,(int)param_1[0x47]);
          cVar7 = (**(code **)(*param_1 + 0x750))(param_1,&local_208,local_318,&local_2d8);
          local_347 = '\x01';
        }
        goto LAB_142392025;
      }
    }
    else {
      local_320 = fVar28 + param_2[2];
      local_328 = (float *)CONCAT44(fVar27 + param_2[1],fVar29 + *param_2);
    }
    cVar7 = '\0';
  }
LAB_142392025:
  lStack_2d0 = CONCAT44(lStack_2d0._4_4_,local_320);
  local_360 = (float **)CONCAT71(local_360._1_7_,(char)local_2b0);
  local_368 = (float *)CONCAT71(local_368._1_7_,param_7);
  local_2d8 = local_328;
  bVar6 = FUN_142390190(param_1,&local_2d8,pfVar17,(undefined1)local_2ac);
  if (local_2f0 != 0) {
    FMemory::Free();
  }
LAB_14239206e:
  lVar24 = 0;
  if (bVar6 != 0) {
    if ((int)param_1[0x55] < 1) {
      if (cVar7 == '\0') {
        (**(code **)(*param_1 + 0x488))(param_1,&local_310,1,0);
      }
      else {
        local_2f0 = 0;
        local_2e8 = 0;
        if (local_347 == '\0') {
          local_328 = (float *)param_1[0x44];
          local_320 = *(float *)(param_1 + 0x45);
          local_360 = &local_2d8;
          local_2d8 = (float *)param_1[0x42];
          lStack_2d0 = param_1[0x43];
          local_368 = (float *)&local_328;
          uVar18 = FUN_142387470(param_1,&local_2f0,&local_310,0);
        }
        else {
          uVar18 = FUN_142387310(param_1,&local_2f0,param_1 + 0x74);
        }
        (**(code **)(*param_1 + 0x488))(param_1,&local_310,1,uVar18);
        if (local_2f0 != 0) {
          FMemory::Free();
        }
      }
    }
    else {
      lVar26 = *(longlong *)(param_1[0x54] + -8 + (longlong)(int)param_1[0x55] * 8);
      if ((local_347 == '\0') || (cVar7 == '\0')) {
        FUN_1423817f0(lVar26,&local_310,local_340,cVar7);
      }
      else {
        pbVar22 = (byte *)(lVar26 + 0x1b8);
        *pbVar22 = *pbVar22 | 2;
      }
    }
  }
  if (((local_298[0] & 2) == 0) || ((param_6 & 8) == 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (((local_298[0] & 1) != 0) && (bVar4)) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    if (iVar10 < (int)DAT_1469e91c4) {
      uVar20 = iVar10 >> 0x1f & 0xffff;
      uVar9 = iVar10 + uVar20;
      lVar24 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
               (longlong)(int)((uVar9 & 0xffff) - uVar20) * 0x18;
    }
    if ((*(uint *)(lVar24 + 8) >> 0x1d & 1) == 0) {
      if ((int)param_1[0x55] < 1) {
        FUN_142388e70(param_1,lVar13,local_298);
      }
      else {
        lVar13 = *(longlong *)(param_1[0x54] + -8 + (longlong)(int)param_1[0x55] * 8);
        iVar10 = *(int *)(lVar13 + 0x1b0);
        lVar24 = (longlong)iVar10;
        *(int *)(lVar13 + 0x1b0) = iVar10 + 1;
        if (*(int *)(lVar13 + 0x1b4) < iVar10 + 1) {
          FUN_142396040(lVar13 + 0x88,iVar10);
        }
        lVar26 = *(longlong *)(lVar13 + 0x1a8);
        if (*(longlong *)(lVar13 + 0x1a8) == 0) {
          lVar26 = lVar13 + 0x88;
        }
        pbVar22 = (byte *)(lVar26 + lVar24 * 0x90);
        *pbVar22 = *pbVar22 ^ (*(byte *)(lVar26 + lVar24 * 0x90) ^ local_298[0]) & 1;
        pbVar22 = (byte *)(lVar26 + lVar24 * 0x90);
        *pbVar22 = *pbVar22 ^ (*(byte *)(lVar26 + lVar24 * 0x90) ^ local_298[0]) & 2;
        *(undefined4 *)(lVar26 + 4 + lVar24 * 0x90) = local_294;
        puVar1 = (uint *)(lVar26 + 8 + lVar24 * 0x90);
        *puVar1 = *puVar1 ^ (local_290 ^ *(uint *)(lVar26 + 8 + lVar24 * 0x90)) & 1;
        *(float *)(lVar26 + 0xc + lVar24 * 0x90) = local_28c;
        *(undefined4 *)(lVar26 + 0x10 + lVar24 * 0x90) = local_288;
        *(undefined8 *)(lVar26 + 0x14 + lVar24 * 0x90) = local_284;
        *(undefined4 *)(lVar26 + 0x1c + lVar24 * 0x90) = local_27c;
        *(undefined8 *)(lVar26 + 0x20 + lVar24 * 0x90) = local_278;
        *(undefined4 *)(lVar26 + 0x28 + lVar24 * 0x90) = local_270;
        *(undefined8 *)(lVar26 + 0x2c + lVar24 * 0x90) = local_26c;
        *(undefined4 *)(lVar26 + 0x34 + lVar24 * 0x90) = local_264;
        *(undefined8 *)(lVar26 + 0x38 + lVar24 * 0x90) = local_260;
        *(undefined4 *)(lVar26 + 0x40 + lVar24 * 0x90) = local_258;
        *(undefined8 *)(lVar26 + 0x44 + lVar24 * 0x90) = local_254;
        *(undefined4 *)(lVar26 + 0x4c + lVar24 * 0x90) = local_24c;
        *(undefined8 *)(lVar26 + 0x50 + lVar24 * 0x90) = local_248;
        *(undefined4 *)(lVar26 + 0x58 + lVar24 * 0x90) = local_240;
        *(undefined4 *)(lVar26 + 0x5c + lVar24 * 0x90) = local_23c;
        *(undefined4 *)(lVar26 + 0x60 + lVar24 * 0x90) = local_238;
        *(undefined4 *)(lVar26 + 100 + lVar24 * 0x90) = local_234;
        *(undefined4 *)(lVar26 + 0x68 + lVar24 * 0x90) = local_230;
        *(undefined4 *)(lVar26 + 0x6c + lVar24 * 0x90) = local_22c;
        *(undefined4 *)(lVar26 + 0x70 + lVar24 * 0x90) = local_228;
        *(undefined4 *)(lVar26 + 0x74 + lVar24 * 0x90) = local_224;
        *(undefined4 *)(lVar26 + 0x78 + lVar24 * 0x90) = local_220;
        *(undefined8 *)(lVar26 + 0x80 + lVar24 * 0x90) = local_218;
        *(undefined8 *)(lVar26 + 0x88 + lVar24 * 0x90) = local_210;
      }
    }
  }
  if (param_5 != (void *)0x0) {
    if (local_33f == '\0') {
      _guard_xfg_dispatch_icall_nop(param_5,0,0x90);
      *(ulonglong *)((longlong)param_5 + 0x44) = CONCAT44(fStack_2c4,local_2c8);
      *(float *)((longlong)param_5 + 0x4c) = local_2c0;
      *(ulonglong *)((longlong)param_5 + 0x50) = CONCAT44(fStack_2fc,local_300);
      *(float *)((longlong)param_5 + 0x58) = local_2f8;
      *(undefined4 *)((longlong)param_5 + 0xc) = 0x3f800000;
    }
    else {
      FUN_140729f20(param_5,local_298);
    }
  }
  if (local_310 != 0) {
    FMemory::Free();
  }
  return (ulonglong)bVar6;
}



// FUNCTION 142392b30 FUN_142392b30 body=710 status=ok
// SIG undefined FUN_142392b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_142392b30(longlong *param_1,float *param_2,float *param_3,undefined8 param_4,longlong param_5,
             uint param_6,undefined1 param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  float fVar10;
  undefined8 local_d8;
  float local_d0;
  float local_c0;
  undefined1 local_b8 [12];
  undefined4 local_ac;
  
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  if (iVar6 < (int)DAT_1469e91c4) {
    uVar9 = iVar6 >> 0x1f & 0xffff;
    uVar4 = iVar6 + uVar9;
    lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
  }
  else {
    lVar7 = 0;
  }
  uVar4 = *(uint *)(lVar7 + 8) >> 0x1d;
  uVar8 = (ulonglong)uVar4;
  if ((uVar4 & 1) == 0) {
    if ((*(char *)((longlong)param_1 + 0x24e) != '\x02') && ((*(byte *)(param_1 + 0x17) & 1) != 0))
    {
      lVar7 = param_1[0x24];
      if (lVar7 == 0) {
        lVar7 = FUN_1423407b0(param_1);
        uVar8 = 0;
        if (lVar7 == 0) goto LAB_142392c02;
      }
      uVar8 = UWorld::IsGameWorld(lVar7);
      if (((((char)uVar8 != '\0') && (*(char *)(lVar7 + 0x6f8) != '\0')) &&
          (uVar8 = FUN_142341170(param_1), (char)uVar8 == '\0')) &&
         ((uVar8 = param_1[0x23], uVar8 != 0 && ((*(byte *)(uVar8 + 0x93) & 8) != 0))))
      goto LAB_142392db5;
    }
LAB_142392c02:
    uVar5 = (undefined4)uVar8;
    if (param_5 != 0) {
      _guard_xfg_dispatch_icall_nop(local_b8,0,0x90);
      local_ac = 0x3f800000;
      uVar5 = FUN_140729f20(param_5,local_b8);
    }
    if ((*(byte *)((longlong)param_1 + 0x24c) & 1) == 0) {
      uVar5 = FUN_140942fb0(param_1,0,0);
    }
    if (((*param_2 == 0.0) && (fVar10 = param_2[1], fVar10 == 0.0)) &&
       (local_d0 = param_2[2], local_d0 == 0.0)) {
      auVar1._4_4_ = -(uint)(1e-08 < (float)((uint)(param_3[1] -
                                                   *(float *)((longlong)param_1 + 0x214)) &
                                            uRam0000000146af07d4));
      auVar1._0_4_ = -(uint)(1e-08 < (float)((uint)(*param_3 - *(float *)(param_1 + 0x42)) &
                                            _DAT_146af07d0));
      auVar1._8_4_ = -(uint)(1e-08 < (float)((uint)(param_3[2] - *(float *)(param_1 + 0x43)) &
                                            uRam0000000146af07d8));
      auVar1._12_4_ =
           -(uint)(1e-08 < (float)((uint)(param_3[3] - *(float *)((longlong)param_1 + 0x21c)) &
                                  uRam0000000146af07dc));
      iVar6 = movmskps(uVar5,auVar1);
      if (iVar6 == 0) {
        return 1;
      }
      auVar2._4_4_ = -(uint)(1e-08 < (float)((uint)(*(float *)((longlong)param_1 + 0x214) +
                                                   param_3[1]) & uRam0000000146af07d4));
      auVar2._0_4_ = -(uint)(1e-08 < (float)((uint)(*(float *)(param_1 + 0x42) + *param_3) &
                                            _DAT_146af07d0));
      auVar2._8_4_ = -(uint)(1e-08 < (float)((uint)(*(float *)(param_1 + 0x43) + param_3[2]) &
                                            uRam0000000146af07d8));
      auVar2._12_4_ =
           -(uint)(1e-08 < (float)((uint)(*(float *)((longlong)param_1 + 0x21c) + param_3[3]) &
                                  uRam0000000146af07dc));
      iVar6 = movmskps(iVar6,auVar2);
      if (iVar6 == 0) {
        return 1;
      }
    }
    else {
      fVar10 = param_2[1];
      local_d0 = param_2[2];
    }
    local_d0 = *(float *)(param_1 + 0x45) + local_d0;
    local_d8 = CONCAT44(*(float *)((longlong)param_1 + 0x224) + fVar10,
                        *param_2 + *(float *)(param_1 + 0x44));
    local_c0 = local_d0;
    cVar3 = FUN_142390190(param_1,&local_d8,param_3,0,param_7,(byte)(param_6 >> 4) & 1);
    if ((cVar3 != '\0') && ((int)param_1[0x55] < 1)) {
      (**(code **)(*param_1 + 0x488))(param_1,0,1,0);
    }
    return 1;
  }
LAB_142392db5:
  if (param_5 != 0) {
    _guard_xfg_dispatch_icall_nop(local_b8,0,0x90);
    local_ac = 0x3f800000;
    FUN_140729f20(param_5,local_b8);
  }
  return 0;
}



// FUNCTION 142392e00 FUN_142392e00 body=66 status=ok
// SIG undefined FUN_142392e00(void)

void FUN_142392e00(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x460))();
  if (cVar1 == '\0') {
    iVar2 = (**(code **)(*param_1 + 0x4e8))(param_1);
    if ((iVar2 == 0) && ((*(byte *)(param_1 + 0x5f) & 0x10) == 0)) {
      return;
    }
  }
  UActorComponent::NeedsLoadForClient(param_1);
  return;
}



// FUNCTION 142392e50 FUN_142392e50 body=50 status=ok
// SIG undefined FUN_142392e50(void)

void FUN_142392e50(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x4e8))();
  if ((iVar1 == 0) && ((*(byte *)(param_1 + 0x5f) & 0x20) == 0)) {
    return;
  }
  UActorComponent::NeedsLoadForServer(param_1);
  return;
}



// FUNCTION 142392e90 FUN_142392e90 body=76 status=ok
// SIG undefined FUN_142392e90(void)

void FUN_142392e90(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
    return;
  }
  lVar1 = FUN_14233fea0(param_1);
  if (lVar1 == 0) {
    return;
  }
  plVar2 = (longlong *)FUN_14233fea0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142392ed2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
  return;
}



// FUNCTION 142392ee0 FUN_142392ee0 body=327 status=ok
// SIG undefined FUN_142392ee0(void)

void FUN_142392ee0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_res10 [8];
  undefined4 uStack_1c;
  
  if (param_2 != 0) {
    lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)(param_1 + 0x458) != param_2)) {
      uVar7 = 0;
      *(longlong *)(param_1 + 0x458) = param_2;
      plVar1 = (longlong *)(param_2 + 0x2e8);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        *(undefined4 *)(plVar5 + 2) = 0x423937a0;
        *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
        *(undefined4 *)(plVar5 + 3) = 0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_1c;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar4;
        *plVar5 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res10);
        iVar2 = *(int *)(param_2 + 0x2f0);
        uVar7 = *puVar6;
        *(int *)(param_2 + 0x2f0) = iVar2 + 1;
        if (*(int *)(param_2 + 0x2f4) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar6 = plVar5;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x460) = uVar7;
      FUN_14239bea0(param_1);
    }
  }
  return;
}



// FUNCTION 142393030 FUN_142393030 body=259 status=ok
// SIG undefined FUN_142393030(void)

void FUN_142393030(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x458);
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x460);
    iVar4 = 0;
    if (0 < *(int *)(lVar1 + 0x2f0)) {
      lVar6 = 0;
      do {
        plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x2e8) + lVar6);
        if ((((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) &&
           (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8), *plVar2 == lVar3)
           ) {
          if (((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar5 != 0) {
              lVar3 = FMemory::Realloc(*plVar5,0,0);
              *plVar5 = lVar3;
            }
            *(undefined4 *)(plVar5 + 1) = 0;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 0x10;
      } while (iVar4 < *(int *)(lVar1 + 0x2f0));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar1 + 0x2e8,0);
    *(undefined8 *)(param_1 + 0x460) = 0;
    *(undefined8 *)(param_1 + 0x458) = 0;
    FUN_14239bea0(param_1);
  }
  return;
}



// FUNCTION 142393140 FUN_142393140 body=124 status=ok
// SIG undefined FUN_142393140(void)

void FUN_142393140(longlong param_1,undefined1 param_2)

{
  if ((((*(byte *)(param_1 + 0x2ef) & 1) != 0) &&
      (*(byte *)(param_1 + 0x2ef) = *(byte *)(param_1 + 0x2ef) & 0xfe, DAT_146531d70 == 1)) &&
     ((*(byte *)(param_1 + 0x24c) & 2) != 0)) {
    *(byte *)(param_1 + 0x24c) = *(byte *)(param_1 + 0x24c) & 0xfd;
    if (*(longlong *)(param_1 + 400) != 0) {
      FUN_142386620();
    }
  }
  if (0 < *(int *)(param_1 + 0x3a8)) {
    FUN_1423863d0(param_1,1,0);
  }
  FUN_1423931c0(param_1,param_2);
  return;
}



// FUNCTION 1423931c0 FUN_1423931c0 body=702 status=ok
// SIG undefined FUN_1423931c0(void)

void FUN_1423931c0(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong local_48;
  undefined8 local_40;
  
  FUN_1423437a0();
  lVar6 = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  if ((*(int *)((longlong)param_1 + 0x2ac) < 0) && (*(int *)((longlong)param_1 + 0x2ac) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x54,0);
  }
  if (DAT_1468c2185 == '\0') {
    iVar5 = (int)param_1[0x35];
    lVar1 = param_1[0x23];
    if (param_2 == '\0') {
      while (0 < iVar5) {
        plVar2 = *(longlong **)(param_1[0x34] + -8 + (longlong)(int)param_1[0x35] * 8);
        if (((plVar2 == (longlong *)0x0) || ((longlong *)plVar2[0x32] == (longlong *)0x0)) ||
           ((longlong *)plVar2[0x32] != param_1)) {
          *(int *)(param_1 + 0x35) = (int)param_1[0x35] + -1;
        }
        else if ((param_1[0x32] == 0) ||
                (cVar4 = FUN_142382f60(plVar2,param_1[0x32],&DAT_146532180,0), cVar4 == '\0')) {
          (**(code **)(*plVar2 + 0x418))(plVar2,&DAT_146532190);
        }
        iVar5 = (int)param_1[0x35];
      }
    }
    else {
      bVar3 = false;
      local_48 = 0;
      uVar9 = 0;
      local_40 = 0;
      lVar8 = lVar6;
      uVar7 = 0;
      if (0 < iVar5) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_48,iVar5);
        uVar11 = local_40 & 0xffffffff;
        lVar8 = local_48;
        do {
          iVar5 = (int)param_1[0x35] + -1;
          plVar2 = *(longlong **)(param_1[0x34] + -8 + (longlong)(int)param_1[0x35] * 8);
          if ((plVar2 == (longlong *)0x0) || (plVar2[0x23] == lVar1)) {
            *(int *)(param_1 + 0x35) = iVar5;
            if (plVar2 != (longlong *)0x0) {
              iVar5 = (int)uVar11;
              uVar10 = iVar5 + 1;
              local_40 = CONCAT44(local_40._4_4_,uVar10);
              if (local_40._4_4_ < (int)uVar10) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,uVar11);
                lVar8 = local_48;
                uVar10 = (uint)local_40;
              }
              uVar11 = (ulonglong)uVar10;
              *(longlong **)(lVar8 + (longlong)iVar5 * 8) = plVar2;
            }
          }
          else if (((longlong *)plVar2[0x32] == (longlong *)0x0) ||
                  ((longlong *)plVar2[0x32] != param_1)) {
            *(int *)(param_1 + 0x35) = iVar5;
          }
          else {
            if (!bVar3) {
              for (lVar6 = param_1[0x32]; (lVar6 != 0 && (*(longlong *)(lVar6 + 0x118) == lVar1));
                  lVar6 = *(longlong *)(lVar6 + 400)) {
              }
              bVar3 = true;
            }
            if ((lVar6 == 0) ||
               (cVar4 = FUN_142382f60(plVar2,lVar6,&DAT_146532180,0), cVar4 == '\0')) {
              (**(code **)(*plVar2 + 0x418))(plVar2,&DAT_146532190);
            }
          }
          uVar9 = (undefined4)uVar11;
        } while (0 < (int)param_1[0x35]);
        uVar7 = local_40._4_4_;
      }
      plVar2 = param_1 + 0x34;
      if (plVar2 == &local_48) {
        if (lVar8 != 0) {
          FMemory::Free(lVar8);
        }
      }
      else {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        *plVar2 = lVar8;
        *(undefined4 *)(param_1 + 0x35) = uVar9;
        *(undefined4 *)((longlong)param_1 + 0x1ac) = uVar7;
      }
    }
    if ((param_1[0x32] != 0) &&
       ((param_2 == '\0' || (*(longlong *)(param_1[0x32] + 0x118) != lVar1)))) {
      (**(code **)(*param_1 + 0x418))(param_1,&DAT_146532190);
    }
  }
  return;
}



// FUNCTION 142393480 FUN_142393480 body=320 status=ok
// SIG undefined FUN_142393480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142393480(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FUN_1423437b0();
  cVar2 = FBodyInstance::IsValidBodyInstance(param_1 + 0x76);
  if ((cVar2 == '\0') && (lVar3 = (**(code **)(*param_1 + 0x6b8))(param_1), lVar3 != 0)) {
    local_48 = param_1[0x42];
    lStack_40 = param_1[0x43];
    local_38 = param_1[0x44];
    lStack_30 = param_1[0x45];
    local_58 = *(float *)(param_1 + 0x46);
    fStack_54 = *(float *)((longlong)param_1 + 0x234);
    fStack_50 = *(float *)(param_1 + 0x47);
    uStack_4c = *(undefined4 *)((longlong)param_1 + 0x23c);
    local_28 = local_58;
    fStack_24 = fStack_54;
    fStack_20 = fStack_50;
    uStack_1c = uStack_4c;
    if ((ABS(local_58) <= 0.0001) && ((ABS(fStack_54) <= 0.0001 && (ABS(fStack_50) <= 0.0001)))) {
      local_28 = 0.0001;
      fStack_24 = 0.0001;
      fStack_20 = 0.0001;
      uStack_1c = 0;
    }
    lVar4 = param_1[0x24];
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(param_1);
    }
    uVar1 = *(undefined8 *)(lVar4 + 0x218);
    local_60 = FUN_142685570(&local_58,param_1);
    local_68 = uVar1;
    FUN_14269a1d0(param_1 + 0x76,lVar3,&local_48,param_1);
  }
  return;
}



// FUNCTION 1423935c0 FUN_1423935c0 body=93 status=ok
// SIG undefined FUN_1423935c0(void)

void FUN_1423935c0(longlong *param_1)

{
  char cVar1;
  
  FUN_1423863d0(param_1,1,0);
  (**(code **)(*param_1 + 0x710))(param_1);
  (**(code **)(*param_1 + 0x718))(param_1);
  cVar1 = FBodyInstance::IsValidBodyInstance(param_1 + 0x76);
  if (cVar1 != '\0') {
    FUN_1426adfd0(param_1 + 0x76);
  }
  UActorComponent::OnDestroyPhysicsState(param_1);
  return;
}



// FUNCTION 142393620 OnInnerScopeComplete body=353 status=ok
// SIG undefined OnInnerScopeComplete(void)

void FScopedMovementUpdate::OnInnerScopeComplete(longlong *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  void *_Src;
  longlong *plVar7;
  
  if (*param_1 != 0) {
    iVar3 = *(int *)(*param_1 + 0xc);
    lVar4 = 0;
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar6 = iVar3 >> 0x1f & 0xffff;
      uVar2 = iVar3 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      if (((*(byte *)(param_2 + 0x1b8) & 2) != 0) || (cVar1 = FUN_142390b10(param_2), cVar1 != '\0')
         ) {
        *(byte *)(param_1 + 0x37) = *(byte *)(param_1 + 0x37) | 2;
        if (*(int *)(param_2 + 0x10) != 0) {
          *(int *)(param_1 + 2) = *(int *)(param_2 + 0x10);
          if (*(int *)(param_2 + 0x74) == -1) {
            iVar3 = -1;
          }
          else {
            iVar3 = (int)param_1[0x10] + *(int *)(param_2 + 0x74);
          }
          *(int *)((longlong)param_1 + 0x74) = iVar3;
          FUN_14237c460(param_1 + 0xf,param_2 + 0x78);
        }
        if (*(byte *)((longlong)param_1 + 0x14) < *(byte *)(param_2 + 0x14)) {
          *(byte *)((longlong)param_1 + 0x14) = *(byte *)(param_2 + 0x14);
        }
      }
      iVar3 = *(int *)(param_2 + 0x1b0);
      if (iVar3 != 0) {
        iVar5 = (int)param_1[0x36];
        if (*(int *)((longlong)param_1 + 0x1b4) < iVar5 + iVar3) {
          TArray<FHitResult,TInlineAllocator<2,FDefaultAllocator>_>::ResizeTo(param_1 + 0x11);
          iVar5 = (int)param_1[0x36];
        }
        _Src = *(void **)(param_2 + 0x1a8);
        if (*(void **)(param_2 + 0x1a8) == (void *)0x0) {
          _Src = (void *)(param_2 + 0x88);
        }
        plVar7 = (longlong *)param_1[0x35];
        if ((longlong *)param_1[0x35] == (longlong *)0x0) {
          plVar7 = param_1 + 0x11;
        }
        ::_guard_xfg_dispatch_icall_nop(plVar7 + (longlong)iVar5 * 0x12,_Src,(longlong)iVar3 * 0x90)
        ;
        *(int *)(param_1 + 0x36) = (int)param_1[0x36] + iVar3;
      }
    }
  }
  return;
}



// FUNCTION 142393790 FUN_142393790 body=15 status=ok
// SIG undefined FUN_142393790(void)

void FUN_142393790(longlong param_1,undefined8 param_2)

{
  FUN_142398ec0(*(undefined8 *)(param_1 + 0x460),param_2,1);
  return;
}



// FUNCTION 1423937b0 FUN_1423937b0 body=87 status=ok
// SIG undefined FUN_1423937b0(void)

void FUN_1423937b0(longlong *param_1)

{
  char cVar1;
  
  FUN_142393b20();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) & 0xef;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x3f0))(param_1);
    *(byte *)((longlong)param_1 + 0xba) =
         *(byte *)((longlong)param_1 + 0xba) ^
         (cVar1 << 4 ^ *(byte *)((longlong)param_1 + 0xba)) & 0x10;
    if ((*(byte *)((longlong)param_1 + 0xba) & 0x10) != 0) {
      FUN_142251d60(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142393810 FUN_142393810 body=373 status=ok
// SIG undefined FUN_142393810(void)

void FUN_142393810(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  if (((*(uint *)(lVar3 + 0x1c0) < 2) &&
      (puVar4 = (uint *)FUN_14238c0b0(param_1), *(longlong *)(param_1 + 800) == 0)) &&
     (puVar4 != (uint *)0x0)) {
    puVar5 = (undefined8 *)operator_new(0x88);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 1) = 4;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(undefined1 *)(puVar5 + 5) = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0xc7efffffe0000000;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      *(undefined4 *)(puVar5 + 0xc) = 0;
      *puVar5 = &PTR__scalar_deleting_destructor__145062710;
      *(undefined2 *)((longlong)puVar5 + 100) = 0;
      *(undefined1 *)((longlong)puVar5 + 0x66) = 0;
      puVar5[0xd] = 0;
      *(undefined4 *)(puVar5 + 0xe) = 0;
      puVar5[0xf] = 0;
      puVar5[0x10] = 0;
    }
    puVar6 = puVar4 + 10;
    *(undefined8 **)(param_1 + 800) = puVar5;
    if (puVar4[0xc] == 0) {
      puVar6 = (uint *)(param_1 + 0x328);
      GenerateEncodedHDRData(puVar4 + 6,*puVar4,*(undefined4 *)(param_1 + 0x2ec),puVar6);
      puVar5 = *(undefined8 **)(param_1 + 800);
    }
    uVar2 = *puVar4;
    iVar8 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar2 != 0) {
      iVar7 = 0x1f - iVar8;
    }
    uVar1 = uVar2 - 1;
    iVar8 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    *(uint *)(puVar5 + 0xd) = uVar2;
    *(undefined4 *)(puVar5 + 0xe) = 2;
    puVar5[0x10] = puVar6;
    *(uint *)((longlong)puVar5 + 0x6c) = (0x20U - iVar8 & ~((iVar7 << 0x1a) >> 0x1f)) + 1;
    FUN_141edf270(*(undefined8 *)(param_1 + 800));
  }
  FUN_142393b20(param_1);
  return;
}



// FUNCTION 1423939a0 FUN_1423939a0 body=381 status=ok
// SIG undefined FUN_1423939a0(void)

void FUN_1423939a0(longlong param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined2 *local_38;
  int local_30;
  
  FUN_142393b20();
  lVar6 = FUN_14178ca30(param_1);
  if (lVar6 != 0) {
    lVar7 = FUN_1429ff0b0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(lVar6 + 0x370);
      *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(lVar6 + 0x378);
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x360);
  lVar6 = lVar7 + (longlong)*(int *)(param_1 + 0x368) * 0x18;
  for (; lVar7 != lVar6; lVar7 = lVar7 + 0x18) {
    FString::FString(&local_38,lVar7);
    puVar4 = local_38;
    uVar2 = *(undefined1 *)(lVar7 + 0x10);
    puVar8 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar8 = local_38;
    }
    iVar5 = FUN_1427703d0(puVar8,0);
    if (iVar5 != -1) {
      FUN_142781db0(param_1 + 0x370,iVar5,uVar2);
    }
    if (puVar4 != (undefined2 *)0x0) {
      FMemory::Free(puVar4);
    }
  }
  if (((*(char *)(param_1 + 0x328) != '\0') && (*(char *)(param_1 + 0x32b) != '\0')) &&
     (*(char *)(param_1 + 0x332) != '\0')) {
    FWeakObjectPtr::operator=(&local_res8,param_1);
    iVar5 = DAT_146af0940;
    lVar6 = (longlong)DAT_146af0940;
    DAT_146af0940 = DAT_146af0940 + 1;
    if (DAT_146af0944 < DAT_146af0940) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146af0938,iVar5);
    }
    puVar1 = (undefined4 *)(DAT_146af0938 + lVar6 * 8);
    *puVar1 = local_res8;
    puVar1[1] = local_resc;
    *(int *)(param_1 + 0x3b8) = iVar5;
  }
  return;
}



// FUNCTION 142393b20 FUN_142393b20 body=141 status=ok
// SIG undefined FUN_142393b20(void)

void FUN_142393b20(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (*(longlong *)(param_1 + 400) != 0) {
    cVar1 = FUN_142382f60(param_1,*(longlong *)(param_1 + 400),&DAT_146af29ec,
                          *(undefined8 *)(param_1 + 0x198));
    if (cVar1 == '\0') {
      *(undefined8 *)(param_1 + 400) = 0;
      *(undefined8 *)(param_1 + 0x198) = 0;
    }
  }
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar2 = FUN_1423407b0(param_1);
    if (lVar2 == 0) goto LAB_142393b9b;
  }
  lVar2 = FUN_14233ccd0(param_1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 600);
  }
  *(undefined8 *)(param_1 + 0x178) = uVar3;
LAB_142393b9b:
  FUN_142343b00(param_1);
  return;
}



// FUNCTION 142393bb0 FUN_142393bb0 body=61 status=ok
// SIG undefined FUN_142393bb0(void)

void FUN_142393bb0(longlong *param_1)

{
  if ((*(char *)((longlong)param_1 + 0x32b) != '\0') &&
     (*(char *)((longlong)param_1 + 0x37d) != '\0')) {
    if (param_1[0x70] != 0) {
      (**(code **)(*param_1 + 0x550))();
    }
    *(undefined1 *)((longlong)param_1 + 0x37d) = 0;
  }
  return;
}



// FUNCTION 142393c30 FUN_142393c30 body=732 status=ok
// SIG undefined FUN_142393c30(void)

void FUN_142393c30(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  ulonglong local_res18;
  
  iVar9 = *(int *)(param_1 + 0x1a8) + -1;
  if (0 < iVar9) {
    lVar4 = (longlong)iVar9;
    lVar12 = lVar4 * 8;
    lVar16 = (longlong)*(int *)(param_1 + 0x1a8) << 3;
    lVar18 = lVar12;
    do {
      lVar4 = lVar4 + -1;
      lVar1 = *(longlong *)(param_1 + 0x1a0);
      if ((*(longlong *)(lVar12 + lVar1) != 0) && (-1 < lVar4)) {
        plVar5 = (longlong *)(lVar1 + -8 + lVar12);
        lVar6 = lVar4;
        do {
          if (*(longlong *)(lVar12 + lVar1) == *plVar5) {
            iVar11 = *(int *)(param_1 + 0x1a8);
            iVar3 = (iVar11 - iVar9) + -1;
            if (iVar3 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar18 + lVar1),(void *)(lVar16 + lVar1),(longlong)iVar3 << 3);
              iVar11 = *(int *)(param_1 + 0x1a8);
            }
            *(int *)(param_1 + 0x1a8) = iVar11 + -1;
            break;
          }
          plVar5 = plVar5 + -1;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      iVar9 = iVar9 + -1;
      lVar16 = lVar16 + -8;
      lVar18 = lVar18 + -8;
      lVar12 = lVar12 + -8;
    } while (0 < iVar9);
  }
  if (*(int *)(param_1 + 0x1b8) != 0) {
    uVar17 = 0;
    local_res18 = 0;
    plVar5 = *(longlong **)(param_1 + 0x1a0);
    uVar14 = (longlong)*(int *)(param_1 + 0x1a8) & 0x1fffffffffffffff;
    if (plVar5 + *(int *)(param_1 + 0x1a8) < plVar5) {
      uVar14 = uVar17;
    }
    if (uVar14 != 0) {
      do {
        lVar12 = *plVar5;
        if (((lVar12 != 0) && ((*(byte *)(lVar12 + 0xb8) & 8) != 0)) &&
           (lVar4 = (longlong)*(int *)(param_1 + 0x1b8), *(int *)(param_1 + 0x1b8) != 0)) {
          bVar19 = **(longlong **)(param_1 + 0x1b0) != lVar12;
          uVar10 = uVar17;
          uVar13 = uVar17;
          uVar15 = uVar17;
          do {
            iVar9 = (int)uVar13;
            uVar10 = uVar10 + 1;
            uVar13 = (ulonglong)(iVar9 + 1);
            if ((longlong)uVar10 < lVar4) {
              plVar7 = (longlong *)(*(longlong *)(param_1 + 0x1b0) + uVar10 * 8);
              do {
                if (bVar19 != (*plVar7 != lVar12)) break;
                uVar13 = (ulonglong)((int)uVar13 + 1);
                uVar10 = uVar10 + 1;
                plVar7 = plVar7 + 1;
              } while ((longlong)uVar10 < lVar4);
            }
            iVar11 = (int)uVar13 - iVar9;
            if (bVar19 != false) {
              iVar3 = (int)uVar15;
              if (iVar3 != iVar9) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar3 * 8),
                           (void *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar9 * 8),
                           (longlong)iVar11 << 3);
              }
              uVar15 = (ulonglong)(uint)(iVar3 + iVar11);
            }
            bVar19 = (bool)(bVar19 ^ 1);
          } while ((longlong)uVar10 < lVar4);
          *(int *)(param_1 + 0x1b8) = (int)uVar15;
        }
        plVar5 = plVar5 + 1;
        local_res18 = local_res18 + 1;
      } while (local_res18 != uVar14);
    }
    plVar7 = (longlong *)(param_1 + 0x1a0);
    plVar5 = *(longlong **)(param_1 + 0x1b0);
    uVar14 = (longlong)*(int *)(param_1 + 0x1b8) & 0x1fffffffffffffff;
    if (plVar5 + *(int *)(param_1 + 0x1b8) < plVar5) {
      uVar14 = uVar17;
    }
    if (uVar14 != 0) {
      do {
        lVar12 = *plVar5;
        if (lVar12 != 0) {
          plVar2 = (longlong *)*plVar7;
          iVar9 = *(int *)(param_1 + 0x1a8);
          for (plVar8 = plVar2; plVar8 != plVar2 + iVar9; plVar8 = plVar8 + 1) {
            if (*plVar8 == lVar12) {
              if ((int)((longlong)plVar8 - (longlong)plVar2 >> 3) != -1) goto LAB_142393eef;
              break;
            }
          }
          *(int *)(param_1 + 0x1a8) = iVar9 + 1;
          if (*(int *)(param_1 + 0x1ac) < iVar9 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7,iVar9);
          }
          *(longlong *)((longlong)iVar9 * 8 + *plVar7) = lVar12;
        }
LAB_142393eef:
        plVar5 = plVar5 + 1;
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar14);
    }
  }
  return;
}



// FUNCTION 142393f30 FUN_142393f30 body=45 status=ok
// SIG undefined FUN_142393f30(void)

void FUN_142393f30(longlong param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x24c);
  *(byte *)(param_1 + 0x24c) = bVar1 & 0xdf | param_2 << 5;
  FUN_142398ec0(param_1,bVar1 >> 5 & 1,1);
  return;
}



// FUNCTION 142393f60 FUN_142393f60 body=280 status=ok
// SIG undefined FUN_142393f60(void)

void FUN_142393f60(longlong param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  
  if ((*(uint *)(param_1 + 8) >> 0xf & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
      if (*(longlong *)(param_1 + 0x120) == 0) {
        lVar5 = FUN_1423407b0(param_1);
        if (lVar5 == 0) goto LAB_142393fef;
      }
      lVar5 = FUN_14233fea0(param_1);
      if (lVar5 != 0) {
        plVar6 = (longlong *)FUN_14233fea0(param_1);
        (**(code **)(*plVar6 + 0x10))(plVar6,param_1);
      }
    }
  }
LAB_142393fef:
  *(undefined8 *)(param_1 + 0x178) = 0;
  FUN_142344780(param_1);
  bVar2 = *(byte *)(param_1 + 0x2ee);
  if ((bVar2 & 8) != 0) {
    plVar6 = (longlong *)IStreamingManager::Get();
    (**(code **)(*plVar6 + 0x68))(plVar6,param_1);
    bVar2 = *(byte *)(param_1 + 0x2ee);
  }
  if ((bVar2 & 0x40) != 0) {
    plVar6 = (longlong *)IStreamingManager::Get();
    cVar3 = (**(code **)(*plVar6 + 0x98))(plVar6);
    if (cVar3 != '\0') {
      uVar7 = IStreamingManager::Get();
      plVar6 = (longlong *)FVoicePacketImpl::GetSampleCounter(uVar7);
      (**(code **)(*plVar6 + 0x100))(plVar6,param_1);
    }
  }
  if ((*(byte *)(param_1 + 0xc0) & 1) != 0) {
    FUN_142251da0(param_1);
    return;
  }
  return;
}



// FUNCTION 142394080 FUN_142394080 body=428 status=ok
// SIG undefined FUN_142394080(void)

void FUN_142394080(longlong param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  if (((*(char *)(param_1 + 0x32b) != '\0') || (*(longlong *)(param_1 + 0x388) != 0)) &&
     (*(longlong *)(param_1 + 0x388) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x380) + 0x100))
              (*(longlong **)(param_1 + 0x380),param_1,*(longlong *)(param_1 + 0x388),1);
  }
  if (((*(char *)(param_1 + 0x328) != '\0') && (*(char *)(param_1 + 0x32b) != '\0')) &&
     ((*(char *)(param_1 + 0x332) != '\0' && (-1 < *(int *)(param_1 + 0x3b8))))) {
    FWeakObjectPtr::operator=(local_res8,param_1);
    iVar4 = DAT_146af0940;
    iVar6 = DAT_146af0940;
    if (DAT_146af0940 != 0) {
      iVar6 = 0;
      cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(DAT_146af0938,local_res8);
      bVar7 = cVar2 == '\0';
      iVar3 = 0;
      do {
        iVar1 = iVar3;
        do {
          iVar1 = iVar1 + 1;
          if (iVar4 <= iVar1) break;
          cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                            (DAT_146af0938 + (longlong)iVar1 * 8,local_res8);
        } while (bVar7 == (cVar2 == '\0'));
        if (bVar7 != false) {
          if (iVar6 != iVar3) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(DAT_146af0938 + (longlong)iVar6 * 8),
                       (void *)(DAT_146af0938 + (longlong)iVar3 * 8),(longlong)(iVar1 - iVar3) << 3)
            ;
          }
          iVar6 = iVar6 + (iVar1 - iVar3);
        }
        bVar7 = (bool)(bVar7 ^ 1);
        iVar3 = iVar1;
      } while (iVar1 < iVar4);
    }
    DAT_146af0940 = iVar6;
    *(undefined4 *)(param_1 + 0x3b8) = 0xffffffff;
    DAT_146531d64 = 0xffffffff;
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x3b0)) {
    lVar5 = 0;
    do {
      FSceneViewStateReference::Destroy(*(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x3a8)));
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x3b0));
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  FUN_142344780(param_1);
  return;
}



// FUNCTION 142394230 FUN_142394230 body=16 status=ok
// SIG undefined FUN_142394230(void)

void FUN_142394230(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x178) = 0;
  FUN_142344780();
  return;
}



// FUNCTION 142394240 FUN_142394240 body=186 status=ok
// SIG undefined FUN_142394240(void)

void FUN_142394240(longlong param_1,uint param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((((*(byte *)(param_1 + 0xb8) & 4) != 0) && ((~(byte)param_2 & 1) != 0)) &&
     (((~(byte)(param_2 >> 1) & 1) != 0 || (*(longlong *)(param_1 + 0x478) == 0)))) {
    uVar2 = FUN_1424a1490();
    cVar1 = FUN_14249ae20(uVar2,param_1,param_3);
    if (cVar1 == '\0') {
      FUN_1426a89c0(param_1 + 0x3b0,param_1 + 0x210,param_3);
      local_18 = *(undefined4 *)(param_1 + 0x230);
      local_14 = *(undefined4 *)(param_1 + 0x234);
      local_10 = *(undefined4 *)(param_1 + 0x238);
      FUN_1426aef60(param_1 + 0x3b0,&local_18,0);
    }
  }
  return;
}



// FUNCTION 142394300 FUN_142394300 body=30 status=ok
// SIG undefined FUN_142394300(void)

void FUN_142394300(longlong param_1)

{
  FUN_1426a3f70(param_1 + 0x3b0);
  return;
}



// FUNCTION 142394320 FUN_142394320 body=131 status=ok
// SIG undefined FUN_142394320(void)

void FUN_142394320(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((*(longlong *)(param_1 + 0x468) != 0) && (*(longlong *)(param_1 + 0x460) != 0)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x468) + 0x6fc) = DAT_1464aaa4c;
    fVar2 = *(float *)(*(longlong *)(param_1 + 0x460) + 800);
    pfVar1 = (float *)(*(longlong *)(param_1 + 0x468) + 0x6fc);
    if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
      fVar2 = 1000.0;
    }
    *(float *)(*(longlong *)(param_1 + 0x468) + 0x700) = fVar2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x468) + 0x6f4) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x460) + 0x3c4);
  }
  return;
}



// FUNCTION 1423943b0 FUN_1423943b0 body=122 status=ok
// SIG undefined FUN_1423943b0(void)

void FUN_1423943b0(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((*(longlong *)(param_1 + 0x468) != 0) && (*(longlong *)(param_1 + 0x460) != 0)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x468) + 0x6fc) = DAT_1464aaa4c;
    fVar2 = *(float *)(*(longlong *)(param_1 + 0x460) + 800);
    pfVar1 = (float *)(*(longlong *)(param_1 + 0x468) + 0x6fc);
    if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
      fVar2 = 1000.0;
    }
    *(float *)(*(longlong *)(param_1 + 0x468) + 0x700) = fVar2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x468) + 0x6f4) = 0x42b40000;
  }
  return;
}



// FUNCTION 142394430 FUN_142394430 body=15 status=ok
// SIG undefined FUN_142394430(void)

void FUN_142394430(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x350) = 0xffffffff;
  }
  return;
}



// FUNCTION 142394440 FUN_142394440 body=31 status=ok
// SIG undefined FUN_142394440(void)

void FUN_142394440(longlong param_1)

{
  FUN_142349c40();
  FUN_14268ee40(param_1 + 0x3b0);
  return;
}



// FUNCTION 142394460 FUN_142394460 body=198 status=ok
// SIG undefined FUN_142394460(void)

void FUN_142394460(longlong param_1)

{
  int iVar1;
  BOOL BVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_142349c40();
  FWindowsPlatformMisc::CreateGuid((GUID *)(param_1 + 0x2fc));
  if ((*(byte *)(param_1 + 8) & 0x30) == 0) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0900);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0900);
    }
    iVar1 = DAT_146af08f8;
    lVar4 = (longlong)DAT_146af08f8;
    for (plVar3 = DAT_146af08f0; plVar3 != DAT_146af08f0 + lVar4; plVar3 = plVar3 + 1) {
      if (*plVar3 == param_1) {
        if ((int)((longlong)plVar3 - (longlong)DAT_146af08f0 >> 3) != -1) goto LAB_142394507;
        break;
      }
    }
    DAT_146af08f8 = DAT_146af08f8 + 1;
    if (DAT_146af08fc < DAT_146af08f8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146af08f0,iVar1);
    }
    DAT_146af08f0[lVar4] = param_1;
LAB_142394507:
    *(undefined1 *)(param_1 + 0x318) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af0900);
  }
  return;
}



// FUNCTION 142394530 FUN_142394530 body=158 status=ok
// SIG undefined FUN_142394530(void)

void FUN_142394530(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 local_res10 [24];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146af0a90) {
    _Init_thread_header(&DAT_146af0a90);
    if (DAT_146af0a90 == -1) {
      plVar1 = (longlong *)FName::FName(local_res10,L"RelativeScale3D",1);
      DAT_146af0a88 = *plVar1;
      _Init_thread_footer(&DAT_146af0a90);
    }
  }
  if (*(longlong *)(param_2 + 0x18) == DAT_146af0a88) {
    FUN_140942fb0(param_1,0,0);
  }
  return;
}



// FUNCTION 1423945d0 FUN_1423945d0 body=157 status=ok
// SIG undefined FUN_1423945d0(void)

void FUN_1423945d0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  
  FUN_142349c80();
  UObjectBaseUtility::GetLinkerUE4Version(param_1);
  cVar3 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar3 == '\0') {
    FBodyInstance::FixupData(param_1 + 0x76,param_1);
  }
  fVar1 = *(float *)((longlong)param_1 + 0x2dc);
  if (0.0 < fVar1) {
    fVar2 = *(float *)(param_1 + 0x5c);
    fVar5 = fVar1;
    if ((fVar2 != 0.0) && (fVar5 = fVar2, fVar1 <= fVar2)) {
      fVar5 = fVar1;
    }
    if (((*(byte *)((longlong)param_1 + 0x2ee) & 1) != 0) || (param_1[0xca] != 0)) {
      fVar5 = 0.0;
    }
    *(float *)(param_1 + 0x5c) = fVar5;
  }
  if ((*(char *)((longlong)param_1 + 0x2e7) == '\x01') &&
     (iVar4 = (**(code **)(*param_1 + 0x680))(param_1), iVar4 == 0)) {
    *(undefined1 *)((longlong)param_1 + 0x2e7) = 0;
  }
  return;
}



// FUNCTION 142394670 FUN_142394670 body=84 status=ok
// SIG undefined FUN_142394670(void)

void FUN_142394670(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  FUN_142374350();
  iVar1 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar1 < 0x102) {
    fVar2 = 1.0 - *(float *)(param_1 + 0x1e4);
    fVar3 = 0.0;
    if ((0.0 <= fVar2) && (fVar3 = fVar2, 1.0 <= fVar2)) {
      fVar3 = 1.0;
    }
    *(uint *)(param_1 + 0x1c8) = *(uint *)(param_1 + 0x1c8) & 0xfffffffb;
    *(float *)(param_1 + 0x1e8) = fVar3;
  }
  return;
}



// FUNCTION 1423946d0 FUN_1423946d0 body=44 status=ok
// SIG undefined FUN_1423946d0(void)

void FUN_1423946d0(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 400) == 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168), lVar1 != param_1)) {
    *(byte *)(param_1 + 0x24d) = *(byte *)(param_1 + 0x24d) | 0x40;
    *(longlong *)(param_1 + 400) = lVar1;
  }
  return;
}



// FUNCTION 142394700 FUN_142394700 body=196 status=ok
// SIG undefined FUN_142394700(void)

void FUN_142394700(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  
  bVar4 = *(byte *)((longlong)param_1 + 0x24d);
  if ((bVar4 & 0x40) != 0) {
    plVar1 = param_1 + 0x38;
    lVar3 = param_1[0x39];
    param_1[0x39] = param_1[0x32];
    plVar2 = param_1 + 0x33;
    param_1[0x32] = lVar3;
    if (plVar1 != plVar2) {
      lVar3 = *plVar1;
      *plVar1 = *plVar2;
      *plVar2 = lVar3;
    }
    if (param_1[0x39] == 0) {
      if (param_1[0x32] != 0) {
        (**(code **)(*param_1 + 0x418))(param_1,&DAT_146532190);
      }
    }
    else {
      FUN_142382f60(param_1,param_1[0x39],&DAT_146af29ec,*plVar1);
    }
    *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) & 0xbf;
    bVar4 = *(byte *)((longlong)param_1 + 0x24d);
  }
  if ((bVar4 & 0x20) != 0) {
    FUN_140942fb0(param_1,1);
    *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) & 0xdf;
  }
  return;
}



// FUNCTION 1423947d0 FUN_1423947d0 body=36 status=ok
// SIG undefined FUN_1423947d0(void)

void FUN_1423947d0(longlong param_1)

{
  *(byte *)(param_1 + 0x24d) = *(byte *)(param_1 + 0x24d) & 0x9f;
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_1 + 400);
  return;
}



// FUNCTION 142394800 FUN_142394800 body=361 status=ok
// SIG undefined FUN_142394800(void)

void FUN_142394800(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar1 = *(undefined1 *)(param_1 + 0x240);
  plVar4 = (longlong *)(param_1 + 0x248);
  *(undefined1 *)(param_1 + 0x240) = 1;
  puVar7 = (undefined8 *)*plVar4;
  uVar9 = (ulonglong)*(int *)(param_1 + 0x250);
  puVar6 = puVar7 + uVar9 * 10;
  if (puVar7 != puVar6) {
    plVar5 = puVar7 + 6;
    do {
      if ((int)plVar5[2] != 0) {
        plVar3 = (longlong *)*plVar5;
        if ((longlong *)*plVar5 == (longlong *)0x0) {
          plVar3 = plVar5 + -4;
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      (*(code *)*puVar7)();
      puVar7 = puVar7 + 10;
      plVar5 = plVar5 + 10;
    } while (puVar7 != puVar6);
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x250);
  }
  iVar2 = *(int *)(param_1 + 0x254);
  if (iVar2 < 0) {
    if ((int)uVar9 != 0) {
      plVar5 = (longlong *)(*plVar4 + 0x30);
      do {
        if ((int)plVar5[2] != 0) {
          plVar3 = (longlong *)*plVar5;
          if ((longlong *)*plVar5 == (longlong *)0x0) {
            plVar3 = plVar5 + -4;
          }
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))(plVar3,0);
          }
        }
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 10;
        uVar8 = (int)uVar9 - 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 != 0);
      iVar2 = *(int *)(param_1 + 0x254);
    }
    *(undefined4 *)(param_1 + 0x250) = 0;
    if (iVar2 != 0) {
      TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(plVar4,0);
    }
  }
  else {
    if ((int)uVar9 != 0) {
      plVar4 = (longlong *)(*plVar4 + 0x30);
      do {
        if ((int)plVar4[2] != 0) {
          plVar5 = (longlong *)*plVar4;
          if ((longlong *)*plVar4 == (longlong *)0x0) {
            plVar5 = plVar4 + -4;
          }
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5,0);
          }
        }
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 10;
        uVar8 = (int)uVar9 - 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 != 0);
    }
    *(undefined4 *)(param_1 + 0x250) = 0;
  }
  *(undefined1 *)(param_1 + 0x240) = uVar1;
  return;
}



// FUNCTION 142394970 FUN_142394970 body=225 status=ok
// SIG undefined FUN_142394970(void)

float * FUN_142394970(longlong param_1,float *param_2,float *param_3,byte param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
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
  longlong lVar20;
  float fVar21;
  float fVar22;
  
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  lVar20 = (ulonglong)param_4 * 0x40;
  pfVar1 = (float *)(lVar20 + 0xc80 + param_1);
  fVar8 = *pfVar1;
  fVar9 = pfVar1[1];
  fVar10 = pfVar1[2];
  pfVar2 = (float *)(lVar20 + 0xc70 + param_1);
  fVar11 = *pfVar2;
  fVar12 = pfVar2[1];
  fVar13 = pfVar2[2];
  pfVar3 = (float *)(lVar20 + 0xc60 + param_1);
  fVar14 = *pfVar3;
  fVar15 = pfVar3[1];
  fVar16 = pfVar3[2];
  pfVar4 = (float *)(lVar20 + 0xc50 + param_1);
  fVar17 = *pfVar4;
  fVar18 = pfVar4[1];
  fVar19 = pfVar4[2];
  fVar21 = pfVar1[3] * 1.0 + fVar7 * pfVar2[3] + fVar6 * pfVar3[3] + fVar5 * pfVar4[3];
  if (fVar21 == 0.0) {
    fVar21 = 0.0001;
  }
  fVar22 = 1.0 / fVar21;
  param_2[3] = fVar21;
  *param_2 = (fVar8 * 1.0 + fVar7 * fVar11 + fVar6 * fVar14 + fVar5 * fVar17) * fVar22;
  param_2[1] = (fVar9 * 1.0 + fVar7 * fVar12 + fVar6 * fVar15 + fVar5 * fVar18) * fVar22;
  param_2[2] = (fVar10 * 1.0 + fVar7 * fVar13 + fVar6 * fVar16 + fVar5 * fVar19) * fVar22;
  return param_2;
}



// FUNCTION 142394a60 FUN_142394a60 body=137 status=ok
// SIG undefined FUN_142394a60(void)

void FUN_142394a60(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  iVar1 = DAT_146af08e8;
  if ((*(byte *)(param_1 + 0x24c) & 0x20) != 0) {
    lVar3 = (longlong)DAT_146af08e8;
    for (plVar2 = DAT_146af08e0; plVar2 != DAT_146af08e0 + lVar3; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_1) {
        if ((int)((longlong)plVar2 - (longlong)DAT_146af08e0 >> 3) != -1) goto LAB_142394ad7;
        break;
      }
    }
    DAT_146af08e8 = DAT_146af08e8 + 1;
    if (DAT_146af08ec < DAT_146af08e8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146af08e0,iVar1);
    }
    DAT_146af08e0[lVar3] = param_1;
LAB_142394ad7:
    *(undefined1 *)(param_1 + 0x318) = 1;
  }
  return;
}



// FUNCTION 142394af0 FUN_142394af0 body=488 status=ok
// SIG undefined FUN_142394af0(void)

void FUN_142394af0(longlong *param_1,char param_2,uint param_3,byte param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  if (0 < (int)param_1[0x55]) {
    lVar1 = *(longlong *)(param_1[0x54] + -8 + (longlong)(int)param_1[0x55] * 8);
    if (lVar1 == 0) {
      return;
    }
    if (param_4 == 0) {
      return;
    }
    if (param_4 <= *(byte *)(lVar1 + 0x14)) {
      param_4 = *(byte *)(lVar1 + 0x14);
    }
    *(byte *)(lVar1 + 0x14) = param_4;
    return;
  }
  if (param_2 == '\0') {
    (**(code **)(*param_1 + 0x4b8))();
    if ((0 < (int)param_1[0x35]) && ((param_3 >> 3 & 1) == 0)) {
      FUN_14239b420(param_1,0,0,1);
    }
    if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x4b8))();
    if ((0 < (int)param_1[0x35]) && ((param_3 >> 3 & 1) == 0)) {
      FUN_14239b420(param_1,param_3 & 0xfffffffe,param_4,1);
    }
    if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
      return;
    }
    if ((*(byte *)((longlong)param_1 + 0x24d) & 8) == 0) {
      plVar2 = (longlong *)param_1[0x56];
      plVar5 = plVar2 + (longlong)(int)param_1[0x57] * 2;
      for (; plVar2 != plVar5; plVar2 = plVar2 + 2) {
        if (((int)plVar2[1] != 0) && (*plVar2 != 0)) goto LAB_142394bef;
      }
    }
    else {
LAB_142394bef:
      FWeakObjectPtr::operator=(&local_res8,param_1);
      local_38 = 0;
      local_28 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_58);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_1450657a0;
        *(undefined4 *)(puVar3 + 1) = local_res8;
        *(undefined4 *)((longlong)puVar3 + 0xc) = local_resc;
        *(uint *)(puVar3 + 2) = param_3;
        *(byte *)((longlong)puVar3 + 0x14) = param_4;
      }
      local_68[0] = &LAB_142385a50;
      uVar4 = FUN_1424a1490();
      FUN_1424a7130(uVar4,local_68);
    }
    if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
      return;
    }
    if ((*(byte *)((longlong)param_1 + 0x24d) & 0x10) != 0) {
      (**(code **)(*param_1 + 0x540))(param_1,param_3,param_4);
    }
  }
  UActorComponent::MarkRenderDynamicDataDirty(param_1);
  return;
}



// FUNCTION 142394ce0 FUN_142394ce0 body=494 status=ok
// SIG undefined FUN_142394ce0(void)

undefined8
FUN_142394ce0(longlong param_1,longlong *param_2,float *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,char param_8)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  byte *pbVar4;
  byte local_a8 [4];
  undefined4 local_a4;
  uint local_a0;
  float local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  bVar2 = false;
  _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
  local_9c = 1.0;
  cVar3 = FUN_1426a4ff0(param_1 + 0x3b0,local_a8,param_4,param_5,param_6,param_7,0);
  if ((cVar3 != '\0') && (local_9c < *param_3)) {
    if ((local_a8[0] & 1) != 0) {
      *param_3 = local_9c;
    }
    iVar1 = (int)param_2[1];
    bVar2 = true;
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    pbVar4 = (byte *)((longlong)iVar1 * 0x90 + *param_2);
    *pbVar4 = *pbVar4 ^ (local_a8[0] ^ *pbVar4) & 1;
    *pbVar4 = *pbVar4 ^ (*pbVar4 ^ local_a8[0]) & 2;
    *(undefined4 *)(pbVar4 + 4) = local_a4;
    *(uint *)(pbVar4 + 8) = *(uint *)(pbVar4 + 8) ^ (*(uint *)(pbVar4 + 8) ^ local_a0) & 1;
    *(float *)(pbVar4 + 0xc) = local_9c;
    *(undefined4 *)(pbVar4 + 0x10) = local_98;
    *(undefined8 *)(pbVar4 + 0x14) = local_94;
    *(undefined4 *)(pbVar4 + 0x1c) = local_8c;
    *(undefined8 *)(pbVar4 + 0x20) = local_88;
    *(undefined4 *)(pbVar4 + 0x28) = local_80;
    *(undefined8 *)(pbVar4 + 0x2c) = local_7c;
    *(undefined4 *)(pbVar4 + 0x34) = local_74;
    *(undefined8 *)(pbVar4 + 0x38) = local_70;
    *(undefined4 *)(pbVar4 + 0x40) = local_68;
    *(undefined8 *)(pbVar4 + 0x44) = local_64;
    *(undefined4 *)(pbVar4 + 0x4c) = local_5c;
    *(undefined8 *)(pbVar4 + 0x50) = local_58;
    *(undefined4 *)(pbVar4 + 0x58) = local_50;
    *(undefined4 *)(pbVar4 + 0x5c) = local_4c;
    *(undefined4 *)(pbVar4 + 0x60) = local_48;
    *(undefined4 *)(pbVar4 + 100) = local_44;
    *(undefined4 *)(pbVar4 + 0x68) = local_40;
    *(undefined4 *)(pbVar4 + 0x6c) = local_3c;
    *(undefined4 *)(pbVar4 + 0x70) = local_38;
    *(undefined4 *)(pbVar4 + 0x74) = local_34;
    *(undefined4 *)(pbVar4 + 0x78) = local_30;
    *(undefined8 *)(pbVar4 + 0x80) = local_28;
    *(undefined8 *)(pbVar4 + 0x88) = local_20;
  }
  if (param_8 != '\0') {
    if (!bVar2) {
      return 0;
    }
    FUN_1423560b0(param_2);
  }
  if ((bVar2) && ((local_a8[0] & 1) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142394ef0 FUN_142394ef0 body=821 status=ok
// SIG undefined FUN_142394ef0(void)

void FUN_142394ef0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  float local_50;
  float local_40;
  
  if ((*(byte *)(param_1 + 0x5f) & 4) == 0) {
    return;
  }
  if (param_3[1] != 0) {
    lVar6 = UDamageType::GetPrivateStaticClass();
    lVar9 = param_3[1];
    for (lVar3 = lVar9; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar6) {
        if (lVar9 != 0) {
          if (lVar9 == 0) goto LAB_142395090;
          plVar8 = (longlong *)UDamageType::GetPrivateStaticClass();
          plVar7 = (longlong *)param_3[1];
          plVar4 = plVar7;
          goto joined_r0x000142395080;
        }
        break;
      }
    }
  }
  plVar7 = (longlong *)UDamageType::GetPrivateStaticClass();
  lVar9 = plVar7[0x1f];
  if (lVar9 != 0) goto LAB_142394f6c;
  (**(code **)(*plVar7 + 0x368))(plVar7);
  goto LAB_142394f65;
joined_r0x000142395080:
  if (plVar4 == (longlong *)0x0) goto LAB_142395090;
  if (plVar4 == plVar8) goto LAB_142395092;
  plVar4 = (longlong *)plVar4[6];
  goto joined_r0x000142395080;
LAB_142395090:
  plVar7 = (longlong *)0x0;
LAB_142395092:
  lVar9 = plVar7[0x1f];
  if (lVar9 != 0) goto LAB_142394f6c;
  (**(code **)(*plVar7 + 0x368))(plVar7);
LAB_142394f65:
  lVar9 = plVar7[0x1f];
LAB_142394f6c:
  cVar5 = (**(code **)(*param_3 + 0x10))(param_3,1);
  if (cVar5 == '\0') {
    cVar5 = (**(code **)(*param_3 + 0x10))(param_3,2);
    if ((cVar5 != '\0') && (0.0 < *(float *)(lVar9 + 0x2c))) {
      local_50 = *(float *)((longlong)param_3 + 0x2c);
      local_58 = *(undefined8 *)((longlong)param_3 + 0x24);
      (**(code **)(*param_1 + 0x5f8))
                (param_1,&local_58,*(undefined4 *)((longlong)param_3 + 0x1c),
                 *(float *)(lVar9 + 0x2c),1,(byte)(*(uint *)(lVar9 + 0x28) >> 2) & 1);
    }
  }
  else if (((0.0 < *(float *)(lVar9 + 0x2c)) &&
           (((0.0001 < ABS(*(float *)((longlong)param_3 + 0x14)) ||
             (0.0001 < ABS(*(float *)(param_3 + 3)))) ||
            (0.0001 < ABS(*(float *)((longlong)param_3 + 0x1c)))))) &&
          (cVar5 = (**(code **)(*param_1 + 0x400))(param_1,param_3[0x14]), cVar5 != '\0')) {
    fVar1 = *(float *)((longlong)param_3 + 0x1c);
    fVar14 = *(float *)((longlong)param_3 + 0x14);
    fVar2 = *(float *)(param_3 + 3);
    fVar10 = fVar14 * fVar14 + fVar2 * fVar2 + fVar1 * fVar1;
    if (fVar10 == 1.0) {
      local_68._0_4_ = (float)*(undefined8 *)((longlong)param_3 + 0x14);
      fVar11 = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x14) >> 0x20);
      local_50 = *(float *)((longlong)param_3 + 0x1c);
    }
    else {
      fVar11 = DAT_1468b5d94;
      local_50 = DAT_1468b5d98;
      local_68._0_4_ = DAT_1468b5d90;
      if (1e-08 <= fVar10) {
        auVar13 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar12 = auVar13._0_4_;
        fVar12 = fVar12 + fVar12 * (0.5 - fVar10 * 0.5 * fVar12 * fVar12);
        fVar12 = fVar12 + fVar12 * (0.5 - fVar10 * 0.5 * fVar12 * fVar12);
        local_68._0_4_ = fVar14 * fVar12;
        fVar11 = fVar2 * fVar12;
        local_50 = fVar1 * fVar12;
      }
    }
    fVar1 = *(float *)(lVar9 + 0x2c);
    local_60 = (undefined4)param_3[9];
    local_50 = local_50 * fVar1;
    fVar14 = (float)local_68 * fVar1;
    local_68 = param_3[8];
    local_58 = CONCAT44(fVar1 * fVar11,fVar14);
    local_40 = local_50;
    (**(code **)(*param_1 + 0x5f0))(param_1,&local_58,&local_68,param_3[0x14]);
  }
  return;
}



// FUNCTION 142395230 FUN_142395230 body=165 status=ok
// SIG undefined FUN_142395230(void)

void FUN_142395230(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  
  UActorComponent::RegisterComponentTickFunctions();
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x665) != '\0') {
      FTickFunction::UnRegisterTickFunction(param_1 + 0x658);
    }
  }
  else {
    cVar1 = FUN_1423521e0(param_1,param_1 + 0x658);
    if (cVar1 != '\0') {
      *(longlong *)(param_1 + 0x6a8) = param_1;
      if ((*(byte *)(param_1 + 0x3c) & 2) != 0) {
        FTickFunction::AddPrerequisite(param_1 + 0x658,param_1,param_1 + 0x30);
      }
      lVar2 = *(longlong *)(param_1 + 0x120);
      if ((lVar2 == 0) && (lVar2 = FUN_1423407b0(param_1), lVar2 == 0)) {
        return;
      }
      FTickFunction::AddPrerequisite(param_1 + 0x658,lVar2,lVar2 + 0x640);
      return;
    }
  }
  return;
}



// FUNCTION 1423952e0 FUN_1423952e0 body=51 status=ok
// SIG undefined FUN_1423952e0(void)

void FUN_1423952e0(undefined8 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  FUN_142374760();
  uVar1 = FUN_1424a1490();
  FUN_1424b0840(uVar1,param_1,param_2);
  return;
}



// FUNCTION 142395320 Rehash body=529 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_14239545f;
        uVar8 = puVar12[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_14239545f:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar12 = (uint *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar8 = (puVar12[1] ^ *puVar12) & (int)*plVar2 - 1U;
        puVar12[5] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar12[4] = *(uint *)((longlong)plVar6 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 142395540 FUN_142395540 body=647 status=ok
// SIG undefined FUN_142395540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142395540(longlong param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined1 auStack_148 [32];
  uint local_128;
  longlong *local_120;
  uint local_118;
  uint local_114;
  longlong local_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  *(undefined1 *)(param_1 + 0x37c) = 0;
  if (*(longlong *)(param_1 + 0x380) != 0) {
    plVar5 = (longlong *)0x0;
    local_120 = (longlong *)0x0;
    local_114 = 0;
    local_128 = 0;
    plVar12 = plVar5;
    if (0 < *(int *)(param_1 + 0x310)) {
      local_110 = 0;
      plVar10 = plVar5;
      plVar11 = plVar5;
      do {
        lVar3 = local_110;
        uVar7 = (uint)plVar5;
        lVar1 = *(longlong *)(local_110 + *(longlong *)(param_1 + 0x308));
        if (lVar1 != 0) {
          local_48 = (undefined1 *)0x0;
          local_40 = 0;
          FUN_140a4ca80(lVar1,local_108,0);
          uVar6 = 0;
          puVar4 = local_48;
          uVar13 = uVar6;
          if (0 < (int)local_40) {
            do {
              puVar2 = local_108;
              if (puVar4 != (undefined1 *)0x0) {
                puVar2 = puVar4;
              }
              lVar1 = *(longlong *)(puVar2 + uVar13);
              if (((lVar1 != 0) &&
                  (lVar3 = UWeapon::GetStatusEffectOriginStats(lVar1), puVar4 = local_48, lVar3 != 0
                  )) && (lVar3 = UWeapon::GetStatusEffectOriginStats(lVar1), puVar4 = local_48,
                        lVar3 == *(longlong *)(param_1 + 0x380))) {
                iVar9 = (int)plVar10;
                for (plVar5 = plVar12; plVar5 != plVar12 + iVar9; plVar5 = plVar5 + 1) {
                  if (*plVar5 == lVar1) {
                    if ((int)((longlong)plVar5 - (longlong)plVar12 >> 3) != -1) goto LAB_1423956b3;
                    break;
                  }
                }
                local_118 = iVar9 + 1;
                if ((int)plVar11 < (int)local_118) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_120);
                  plVar11 = (longlong *)(ulonglong)local_114;
                  plVar12 = local_120;
                }
                plVar10 = (longlong *)(ulonglong)local_118;
                plVar12[iVar9] = lVar1;
                puVar4 = local_48;
              }
LAB_1423956b3:
              uVar8 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar8;
              lVar3 = local_110;
              uVar13 = uVar13 + 8;
              uVar7 = local_128;
            } while ((int)uVar8 < (int)local_40);
          }
          if (puVar4 != (undefined1 *)0x0) {
            FMemory::Free();
          }
        }
        local_128 = uVar7 + 1;
        plVar5 = (longlong *)(ulonglong)local_128;
        local_110 = lVar3 + 8;
      } while ((int)local_128 < *(int *)(param_1 + 0x310));
      plVar5 = plVar12;
      if (0 < (int)plVar10) {
        do {
          if (*plVar5 != 0) {
            FUN_142359580();
          }
          plVar10 = (longlong *)((longlong)plVar10 + -1);
          plVar5 = plVar5 + 1;
        } while (plVar10 != (longlong *)0x0);
      }
    }
    if (((*(char *)(param_1 + 0x32b) != '\0') || (*(longlong *)(param_1 + 0x388) != 0)) &&
       (*(longlong *)(param_1 + 0x388) != 0)) {
      (**(code **)(**(longlong **)(param_1 + 0x380) + 0x100))
                (*(longlong **)(param_1 + 0x380),param_1,*(longlong *)(param_1 + 0x388),1);
    }
    (**(code **)(**(longlong **)(param_1 + 0x380) + 0x1f0))();
    *(undefined8 *)(param_1 + 0x380) = 0;
    if (plVar12 != (longlong *)0x0) {
      FMemory::Free(plVar12);
    }
  }
  return;
}



// FUNCTION 1423957d0 FUN_1423957d0 body=56 status=ok
// SIG undefined FUN_1423957d0(void)

void FUN_1423957d0(longlong param_1,undefined1 param_2)

{
  if (((*(char *)(param_1 + 0x32b) != '\0') || (*(longlong *)(param_1 + 0x388) != 0)) &&
     (*(longlong *)(param_1 + 0x388) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000142395800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x380) + 0x100))
              (*(longlong **)(param_1 + 0x380),param_1,*(longlong *)(param_1 + 0x388),param_2);
    return;
  }
  return;
}



// FUNCTION 142395810 ReleaseRHI body=58 status=ok
// SIG undefined ReleaseRHI(void)

void FReflectionTextureCubeResource::ReleaseRHI(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x78,0);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x40,0);
  return;
}



// FUNCTION 142395850 Remove body=228 status=ok
// SIG undefined Remove(void)

int TArray<TWeakObjectPtr<UAmbientAudioComponent,FWeakObjectPtr>,FDefaultAllocator>::Remove
              (longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 0) {
    return 0;
  }
  iVar5 = 0;
  cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(*param_1);
  bVar6 = cVar3 == '\0';
  iVar4 = 0;
  do {
    iVar2 = iVar4;
    do {
      iVar2 = iVar2 + 1;
      if (iVar1 <= iVar2) break;
      cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                        (*param_1 + (longlong)iVar2 * 8,param_2);
    } while (bVar6 == (cVar3 == '\0'));
    if (bVar6 != false) {
      if (iVar5 != iVar4) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar5 * 8),(void *)(*param_1 + (longlong)iVar4 * 8)
                   ,(longlong)(iVar2 - iVar4) << 3);
      }
      iVar5 = iVar5 + (iVar2 - iVar4);
    }
    bVar6 = (bool)(bVar6 ^ 1);
    iVar4 = iVar2;
    if (iVar1 <= iVar2) {
      *(int *)(param_1 + 1) = iVar5;
      return iVar1 - iVar5;
    }
  } while( true );
}



// FUNCTION 142395940 Remove body=351 status=ok
// SIG undefined Remove(void)

int TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
    ::Remove(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  uint local_res8;
  uint local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong lVar5;
  
  iVar9 = 0;
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar8 = (longlong)(int)((param_2[1] ^ *param_2) & (int)param_1[9] - 1U);
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  piVar10 = (int *)((longlong)plVar6 + lVar8 * 4);
  iVar4 = *(int *)((longlong)plVar6 + lVar8 * 4);
  if (iVar4 == -1) {
    iVar9 = 0;
  }
  else {
    do {
      lVar5 = (longlong)iVar4;
      lVar8 = *param_1;
      local_res1c = *(undefined4 *)(lVar8 + 4 + lVar5 * 0x18);
      local_res18 = *(undefined4 *)(lVar8 + lVar5 * 0x18);
      local_res8 = *param_2;
      local_resc = param_2[1];
      cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res18,&local_res8);
      if (cVar3 == '\0') {
        piVar10 = (int *)(lVar8 + lVar5 * 0x18 + 0x10);
      }
      else {
        iVar4 = *piVar10;
        if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
          lVar5 = *param_1;
          lVar8 = lVar5 + (longlong)iVar4 * 0x18;
          lVar7 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar8 + 0x14));
          plVar6 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar6 = param_1 + 7;
          }
          puVar1 = (undefined4 *)((longlong)plVar6 + lVar7 * 4);
          iVar2 = *(int *)((longlong)plVar6 + lVar7 * 4);
          while (iVar2 != -1) {
            if (iVar2 == iVar4) {
              *puVar1 = *(undefined4 *)(lVar8 + 0x10);
              break;
            }
            lVar7 = (longlong)iVar2 * 3 + 2;
            puVar1 = (undefined4 *)(lVar5 + lVar7 * 8);
            iVar2 = *(int *)(lVar5 + lVar7 * 8);
          }
        }
        TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized(param_1,(longlong)iVar4,1);
        iVar9 = iVar9 + 1;
      }
      iVar4 = *piVar10;
    } while (iVar4 != -1);
  }
  return iVar9;
}



// FUNCTION 142395aa0 FUN_142395aa0 body=249 status=ok
// SIG undefined FUN_142395aa0(void)

void FUN_142395aa0(longlong param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  FWeakObjectPtr::operator=(local_res8);
  iVar1 = *(int *)(param_1 + 0x188);
  if (iVar1 != 0) {
    iVar5 = 0;
    cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                      (*(undefined8 *)(param_1 + 0x180),local_res8);
    bVar6 = cVar3 == '\0';
    iVar4 = 0;
    do {
      iVar2 = iVar4;
      do {
        iVar2 = iVar2 + 1;
        if (iVar1 <= iVar2) break;
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (*(longlong *)(param_1 + 0x180) + (longlong)iVar2 * 8,local_res8);
      } while (bVar6 == (cVar3 == '\0'));
      if (bVar6 != false) {
        if (iVar5 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar5 * 8),
                     (void *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar4 * 8),
                     (longlong)(iVar2 - iVar4) << 3);
        }
        iVar5 = iVar5 + (iVar2 - iVar4);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar4 = iVar2;
    } while (iVar2 < iVar1);
    *(int *)(param_1 + 0x188) = iVar5;
  }
  return;
}



// FUNCTION 142395ba0 FUN_142395ba0 body=476 status=ok
// SIG undefined FUN_142395ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142395ba0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  longlong local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
    lVar6 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    FUN_140725150(param_2,local_118,0);
    local_120 = (longlong)(int)local_50;
    if (0 < local_120) {
      do {
        iVar7 = 0;
        puVar4 = local_118;
        if (local_58 != (undefined1 *)0x0) {
          puVar4 = local_58;
        }
        FWeakObjectPtr::operator=(local_128,*(undefined8 *)(puVar4 + lVar6 * 8));
        iVar1 = *(int *)(param_1 + 0x300);
        if (iVar1 != 0) {
          cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                            (*(undefined8 *)(param_1 + 0x2f8),local_128);
          bVar8 = cVar3 == '\0';
          iVar5 = iVar7;
          do {
            iVar2 = iVar5;
            do {
              iVar2 = iVar2 + 1;
              if (iVar1 <= iVar2) break;
              cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                                (*(longlong *)(param_1 + 0x2f8) + (longlong)iVar2 * 8,local_128);
            } while (bVar8 == (cVar3 == '\0'));
            if (bVar8 != false) {
              if (iVar7 != iVar5) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(param_1 + 0x2f8) + (longlong)iVar7 * 8),
                           (void *)(*(longlong *)(param_1 + 0x2f8) + (longlong)iVar5 * 8),
                           (longlong)(iVar2 - iVar5) << 3);
              }
              iVar7 = iVar7 + (iVar2 - iVar5);
            }
            bVar8 = (bool)(bVar8 ^ 1);
            iVar5 = iVar2;
          } while (iVar2 < iVar1);
          *(int *)(param_1 + 0x300) = iVar7;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < local_120);
    }
    if (local_58 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142395d80 FUN_142395d80 body=42 status=ok
// SIG undefined FUN_142395d80(void)

void FUN_142395d80(longlong param_1)

{
  undefined1 local_res8 [32];
  
  FWeakObjectPtr::operator=(local_res8);
  TArray<TWeakObjectPtr<UAmbientAudioComponent,FWeakObjectPtr>,FDefaultAllocator>::Remove
            (param_1 + 0x2f8,local_res8);
  return;
}



// FUNCTION 142395db0 FUN_142395db0 body=148 status=ok
// SIG undefined FUN_142395db0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142395db0(longlong *param_1)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = DAT_1468b5da0;
  local_20 = DAT_1468b5da8;
  local_18 = _DAT_1468b5d90;
  local_10 = DAT_1468b5d98;
  FUN_1423982b0(_DAT_1468b5d90,&local_18,&local_28,0,0,0);
  local_20 = 0x3f800000;
  local_10 = 0x3f800000;
  local_18 = 0x3f8000003f800000;
  (**(code **)(*param_1 + 0x3f8))(param_1,&local_18);
  return;
}



// FUNCTION 142395e50 ResizeAllocation body=163 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<2,FDefaultAllocator>::ForElementType<FHitResult>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x120);
  if (param_3 < 3) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x90);
    pvVar1 = *(void **)((longlong)param_1 + 0x120);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x120) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x90);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x120) = uVar2;
  return;
}



// FUNCTION 142395f00 FUN_142395f00 body=163 status=ok
// SIG undefined FUN_142395f00(void)

void FUN_142395f00(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x1e0);
  if (param_3 < 4) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0xa0);
    pvVar1 = *(void **)((longlong)param_1 + 0x1e0);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x1e0) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0xa0);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x1e0) = uVar2;
  return;
}



// FUNCTION 142395fb0 FUN_142395fb0 body=132 status=ok
// SIG undefined FUN_142395fb0(void)

void FUN_142395fb0(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 4) {
      iVar2 = 3;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0xa0,0);
      iVar2 = (int)(uVar1 / 0xa0);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != param_3) {
    FUN_142395f00(param_1,0,iVar2,0xa0);
  }
  *(int *)(param_1 + 0x1ec) = iVar2;
  return;
}



// FUNCTION 142396040 FUN_142396040 body=157 status=ok
// SIG undefined FUN_142396040(void)

void FUN_142396040(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x128);
  if (uVar1 < 3) {
    iVar4 = 2;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 300) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x90,0);
    iVar4 = (int)(uVar3 / 0x90);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 300) = iVar4;
  TInlineAllocator<2,FDefaultAllocator>::ForElementType<FHitResult>::ResizeAllocation
            (param_1,param_2,iVar4,0x90);
  return;
}



// FUNCTION 1423960e0 FUN_1423960e0 body=157 status=ok
// SIG undefined FUN_1423960e0(void)

void FUN_1423960e0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1e8);
  if (uVar1 < 4) {
    iVar4 = 3;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x1ec) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0xa0,0);
    iVar4 = (int)(uVar3 / 0xa0);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x1ec) = iVar4;
  FUN_142395f00(param_1,param_2,iVar4,0xa0);
  return;
}



// FUNCTION 142396180 ResizeTo body=127 status=ok
// SIG undefined ResizeTo(void)

void TArray<FHitResult,TInlineAllocator<2,FDefaultAllocator>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 3) {
      iVar2 = 2;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x90,0);
      iVar2 = (int)(uVar1 / 0x90);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 300)) {
    *(int *)(param_1 + 300) = iVar2;
    TInlineAllocator<2,FDefaultAllocator>::ForElementType<FHitResult>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x128),iVar2,0x90);
  }
  return;
}



// FUNCTION 142396200 FUN_142396200 body=353 status=ok
// SIG undefined FUN_142396200(void)

void FUN_142396200(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)plVar2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar6 = iVar1 + uVar8;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x74) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x10) = 0;
      if (0x7fffffff < *(uint *)((longlong)param_1 + 0x84)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 0xf,0);
      }
      *(undefined4 *)(param_1 + 0x36) = 0;
      if ((*(int *)((longlong)param_1 + 0x1b4) < 0) && (*(int *)((longlong)param_1 + 0x1b4) != 0)) {
        TArray<FHitResult,TInlineAllocator<2,FDefaultAllocator>_>::ResizeTo(param_1 + 0x11,0);
      }
      cVar5 = FUN_142390b10(param_1);
      if (cVar5 != '\0') {
        lVar7 = param_1[5];
        plVar2[0x42] = param_1[4];
        plVar2[0x43] = lVar7;
        uVar3 = *(undefined4 *)((longlong)param_1 + 0x34);
        lVar7 = param_1[7];
        uVar4 = *(undefined4 *)((longlong)param_1 + 0x3c);
        *(int *)(plVar2 + 0x44) = (int)param_1[6];
        *(undefined4 *)((longlong)plVar2 + 0x224) = uVar3;
        *(int *)(plVar2 + 0x45) = (int)lVar7;
        *(undefined4 *)((longlong)plVar2 + 0x22c) = uVar4;
        lVar7 = param_1[9];
        plVar2[0x46] = param_1[8];
        plVar2[0x47] = lVar7;
        *(longlong *)((longlong)plVar2 + 0x1ec) = param_1[10];
        *(int *)((longlong)plVar2 + 500) = (int)param_1[0xb];
        plVar2[0x3f] = *(longlong *)((longlong)param_1 + 0x5c);
        *(undefined4 *)(plVar2 + 0x40) = *(undefined4 *)((longlong)param_1 + 100);
        *(longlong *)((longlong)plVar2 + 0x204) = param_1[0xd];
        *(int *)((longlong)plVar2 + 0x20c) = (int)param_1[0xe];
        if ((*(byte *)(param_1 + 0x37) & 1) == 0) {
          FUN_142394af0(plVar2,1,0,0);
          (**(code **)(*plVar2 + 0x488))(plVar2,0,1,0);
        }
      }
    }
  }
  *(byte *)(param_1 + 0x37) = *(byte *)(param_1 + 0x37) & 0xfd;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  return;
}



// FUNCTION 142396370 FUN_142396370 body=140 status=ok
// SIG undefined FUN_142396370(void)

void FUN_142396370(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar1 = FUN_1424a1490();
  cVar2 = FUN_14249ae20(uVar1,param_1,param_2);
  if (cVar2 == '\0') {
    FUN_1426a89c0(param_1 + 0x3b0,param_1 + 0x210,param_2);
    local_18 = *(undefined4 *)(param_1 + 0x230);
    local_14 = *(undefined4 *)(param_1 + 0x234);
    local_10 = *(undefined4 *)(param_1 + 0x238);
    FUN_1426aef60(param_1 + 0x3b0,&local_18,0);
  }
  return;
}



// FUNCTION 142396400 FUN_142396400 body=129 status=ok
// SIG undefined FUN_142396400(void)

void FUN_142396400(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x3c0);
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 1000);
    *(undefined8 *)(lVar2 + 0x710) = 0x44fa000044fa0000;
    *(undefined4 *)(lVar2 + 0x718) = uVar1;
  }
  if (*(longlong *)(param_1 + 0x400) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    (**(code **)(**(longlong **)(lVar2 + 0x1b8) + 0xc0))(*(longlong **)(lVar2 + 0x1b8),param_1);
  }
  UActorComponent::SendRenderDynamicData_Concurrent(param_1);
  return;
}



// FUNCTION 142396490 FUN_142396490 body=99 status=ok
// SIG undefined FUN_142396490(void)

void FUN_142396490(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  (**(code **)(*param_1 + 0x4b8))();
  bVar1 = *(byte *)((longlong)param_1 + 0x24f);
  lVar3 = FUN_1428742e0();
  if ((int)(uint)bVar1 <= *(int *)(lVar3 + 4)) {
    cVar2 = FUN_14239a1f0(param_1);
    if ((cVar2 != '\0') || ((*(byte *)((longlong)param_1 + 0x2f2) & 0x40) != 0)) {
      plVar4 = (longlong *)FUN_14233fea0(param_1);
      (**(code **)(*plVar4 + 0x18))(plVar4,param_1);
    }
  }
  UActorComponent::SendRenderDynamicData_Concurrent(param_1);
  return;
}



// FUNCTION 142396500 FUN_142396500 body=91 status=ok
// SIG undefined FUN_142396500(void)

void FUN_142396500(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((char)param_1[99] == '\0') {
    (**(code **)(*param_1 + 0x548))();
    cVar1 = FUN_14239a1f0(param_1);
    if (cVar1 != '\0') {
      lVar2 = param_1[0x24];
      if (lVar2 == 0) {
        lVar2 = FUN_1423407b0(param_1);
      }
      (**(code **)(**(longlong **)(lVar2 + 0x1b8) + 0x90))(*(longlong **)(lVar2 + 0x1b8),param_1);
    }
  }
  UActorComponent::SendRenderDynamicData_Concurrent(param_1);
  return;
}



// FUNCTION 142396560 FUN_142396560 body=36 status=ok
// SIG undefined FUN_142396560(void)

void FUN_142396560(longlong param_1)

{
  if (*(char *)(param_1 + 0x319) != '\0') {
    FUN_142385e20();
  }
  UActorComponent::SendRenderDynamicData_Concurrent(param_1);
  return;
}



// FUNCTION 142396590 FUN_142396590 body=36 status=ok
// SIG undefined FUN_142396590(void)

void FUN_142396590(longlong param_1)

{
  if (*(char *)(param_1 + 0x319) != '\0') {
    FUN_142385f90();
  }
  UActorComponent::SendRenderDynamicData_Concurrent(param_1);
  return;
}



// FUNCTION 1423965c0 FUN_1423965c0 body=157 status=ok
// SIG undefined FUN_1423965c0(void)

void FUN_1423965c0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  FUN_14234e7d0();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  iVar1 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
  if ((iVar1 < 0x13) && ((0 < *(int *)(param_1 + 0x310) || (0 < *(int *)(param_1 + 0x300))))) {
    *(undefined1 *)(param_1 + 0x2d0) = 2;
  }
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    iVar1 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
    if (iVar1 < 6) {
      *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x3e0);
      *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_1 + 0x3dc);
    }
  }
  return;
}



// FUNCTION 142396660 FUN_142396660 body=166 status=ok
// SIG undefined FUN_142396660(void)

void FUN_142396660(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  
  FUN_14234e7d0();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0148);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
    if (cVar1 != '\0') {
      FBodyInstance::FixupData(param_1 + 0x3b0,param_1);
    }
  }
  iVar2 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
  if ((iVar2 < 0x18) && ((*(byte *)(param_1 + 0x2f3) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x2e7) = 1;
  }
  iVar2 = FArchive::CustomVer(param_2,&DAT_1464b0148);
  if (iVar2 < 3) {
    *(undefined4 *)(param_1 + 0x2dc) = 0;
  }
  return;
}



// FUNCTION 142396710 SetContent body=42 status=ok
// SIG undefined SetContent(void)

void UContentWidget::SetContent(undefined8 param_1,undefined8 param_2)

{
  FUN_14234e7d0();
  FUN_142396940(param_1,param_2);
  return;
}



// FUNCTION 142396740 FUN_142396740 body=415 status=ok
// SIG undefined FUN_142396740(void)

void FUN_142396740(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_14234e7d0();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  iVar4 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
  if ((iVar4 < 0x13) && ((0 < *(int *)(param_1 + 0x310) || (0 < *(int *)(param_1 + 0x300))))) {
    *(undefined1 *)(param_1 + 0x2d0) = 2;
  }
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    iVar4 = *(int *)(param_1 + 0x9d0);
    if (0 < (longlong)iVar4) {
      lVar6 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x9c8) + lVar6 * 8);
        if (lVar3 != 0) {
          iVar2 = *(int *)(param_1 + 0x9c0);
          *(int *)(param_1 + 0x9c0) = iVar2 + 1;
          if (*(int *)(param_1 + 0x9c4) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x9b8,iVar2);
          }
          uStack_20 = (undefined4)lVar3;
          uStack_1c = (undefined4)((ulonglong)lVar3 >> 0x20);
          puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x9b8) + (longlong)iVar2 * 0x10);
          *puVar1 = 0x3f800000;
          puVar1[1] = uStack_24;
          puVar1[2] = uStack_20;
          puVar1[3] = uStack_1c;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar4);
    }
    *(undefined4 *)(param_1 + 0x9d0) = 0;
    if (*(int *)(param_1 + 0x9d4) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x9c8,0);
    }
    uVar5 = *(uint *)(param_1 + 1000) & 0x10;
    if (uVar5 != 0) {
      uVar5 = uVar5 * 2 | *(uint *)(param_1 + 1000) & 0xffffffdf;
      uVar5 = (uVar5 * 4 ^ uVar5) & 0x40 ^ uVar5;
      *(uint *)(param_1 + 1000) = (uVar5 * 8 ^ uVar5) & 0x80 ^ uVar5;
    }
    if (-1.0 < *(float *)(param_1 + 0x6a4)) {
      *(undefined4 *)(param_1 + 0x6b4) = *(undefined4 *)(param_1 + 0x6a8);
      *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_1 + 0x6ac);
      *(float *)(param_1 + 0x6b0) = *(float *)(param_1 + 0x6a4);
    }
    iVar4 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
    if (iVar4 < 0x10) {
      *(uint *)(param_1 + 0x370) = *(uint *)(param_1 + 0x370) & 0xffefffef;
    }
  }
  return;
}



// FUNCTION 1423968e0 FUN_1423968e0 body=92 status=ok
// SIG undefined FUN_1423968e0(void)

void FUN_1423968e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_14234e7d0();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  iVar1 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
  if ((iVar1 < 0x13) && ((0 < *(int *)(param_1 + 0x310) || (0 < *(int *)(param_1 + 0x300))))) {
    *(undefined1 *)(param_1 + 0x2d0) = 2;
  }
  return;
}



// FUNCTION 142396940 FUN_142396940 body=1717 status=ok
// SIG undefined FUN_142396940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142396940(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  BOOL BVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char local_res18 [8];
  int local_res20 [2];
  int local_128;
  int local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118 [2];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  undefined8 **local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined **local_d8;
  longlong *local_d0;
  byte local_af;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0158);
  FArchive::UsingCustomVersion(param_2,&DAT_146531d78);
  iVar6 = FArchive::CustomVer(param_2,&DAT_1464b0158);
  if (iVar6 < 1) {
    iVar6 = (int)param_2[8];
    if (0x11c < iVar6) {
      local_res18[0] = '\0';
      (**(code **)(*param_2 + 8))(param_2,local_res18);
      iVar6 = (int)param_2[8];
    }
    if (0x15d < iVar6) {
      puVar10 = (undefined8 *)0x0;
      iVar6 = 0;
      local_f0 = 0;
      local_e8 = 0;
      FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_110,param_2);
      local_100 = &local_110;
      local_f8 = &local_100;
      FUN_141661f40(&local_100,&local_f0);
      FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_110);
      local_120 = 0x3f800000;
      iVar7 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
      if (4 < iVar7) {
        plVar2 = (longlong *)param_2[1];
        if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_120,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&local_120,4);
          }
        }
        else {
          local_120 = *(undefined4 *)*plVar2;
          *plVar2 = *plVar2 + 4;
        }
      }
      local_11c = 0x3f800000;
      iVar7 = FArchive::CustomVer(param_2,&DAT_146531d78);
      if (0 < iVar7) {
        plVar2 = (longlong *)param_2[1];
        if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_11c,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&local_11c,4);
          }
        }
        else {
          local_11c = *(undefined4 *)*plVar2;
          *plVar2 = *plVar2 + 4;
        }
      }
      plVar2 = (longlong *)param_2[1];
      local_128 = 0;
      if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,&local_128,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,&local_128,4);
        }
      }
      else {
        local_128 = *(int *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      if ((((int)local_e8 == -0x60bedf01 && local_e8._4_4_ == 0x5812f4d3) &&
          (int)local_f0 == 0xc669396) && local_f0._4_4_ == -0x6347b652) {
        local_res18[0] = '\0';
        (**(code **)(*param_2 + 8))(param_2,local_res18);
        if (local_res18[0] != '\0') {
          puVar9 = (undefined8 *)operator_new(200);
          if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar9[2] = 0x3f800000;
            puVar9[3] = 0;
            puVar9[4] = 0;
            puVar9[5] = 0;
            puVar9[6] = 0;
            puVar9[7] = 0;
            puVar9[8] = 0;
            puVar9[9] = 0;
            puVar9[10] = 0;
            puVar9[0xb] = 0;
            puVar9[0xc] = 0;
            puVar9[0xd] = 0;
            puVar9[0xe] = 0;
            puVar9[0xf] = 0;
            puVar9[0x10] = 0;
            puVar9[0x11] = 0;
            puVar9[0x12] = 0;
            puVar9[0x13] = 0;
            puVar9[0x14] = 0;
            puVar9[0x15] = 0;
            puVar9[0x16] = 0;
            *(undefined1 *)(puVar9 + 0x17) = 0;
            puVar9[0x18] = 0;
            puVar10 = puVar9;
          }
          iVar7 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
          if (iVar7 < 2) {
            *(undefined4 *)puVar10 = 0x80;
          }
          else {
            puVar3 = *(undefined4 **)param_2[1];
            if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
              (**(code **)(*param_2 + 0x50))(param_2,puVar10,4);
              if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(param_2,puVar10,4);
              }
            }
            else {
              *(undefined4 *)puVar10 = *puVar3;
              *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
            }
          }
          local_110 = (undefined *)0x0;
          uStack_108 = (undefined *)0x0;
          (**(code **)(*param_2 + 0x78))(param_2,0,0);
          plVar2 = (longlong *)param_2[1];
          local_124 = (int)uStack_108;
          if ((*(byte *)(param_2 + 5) & 1) != 0) {
            local_124 = iVar6;
          }
          if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
            (**(code **)(*param_2 + 0x50))(param_2,&local_124,4);
            if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_2,&local_124,4);
            }
          }
          else {
            local_124 = *(int *)*plVar2;
            *plVar2 = *plVar2 + 4;
          }
          bVar1 = *(byte *)(param_2 + 5);
          if ((((char)bVar1 < '\0') || (local_124 < 0)) ||
             (((*(byte *)((longlong)param_2 + 0x2b) & 8) != 0 && (0x1000000 < local_124)))) {
            *(byte *)(param_2 + 5) = bVar1 | 0x80;
          }
          else {
            uStack_108 = (undefined *)CONCAT44(uStack_108._4_4_,local_124);
            iVar7 = local_124;
            if (((local_124 != 0) || (uStack_108._4_4_ != 0)) && ((bVar1 & 1) != 0)) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_110,local_124);
              iVar7 = (int)uStack_108;
            }
            (**(code **)(*param_2 + 0x50))(param_2,local_110,(longlong)iVar7);
          }
          FArchive::FArchive(&local_d8);
          local_48 = 0;
          local_d8 = &PTR_FUN_143f4a3a0;
          local_40 = &local_110;
          local_38 = 0x7fffffffffffffff;
          FArchive::SetIsLoading(&local_d8,1);
          FArchive::SetIsPersistent(&local_d8,0);
          if ((int *)local_d0[1] < (int *)*local_d0 + 1) {
            (*(code *)local_d8[10])(&local_d8,local_res20,4);
            if ((local_af & 0x10) != 0) {
              FArchive::ByteSwap(&local_d8,local_res20,4);
            }
          }
          else {
            local_res20[0] = *(int *)*local_d0;
            *local_d0 = *local_d0 + 4;
          }
          if ((undefined4 *)local_d0[1] < (undefined4 *)*local_d0 + 1) {
            (*(code *)local_d8[10])(&local_d8,local_118,4);
            if ((local_af & 0x10) != 0) {
              FArchive::ByteSwap(&local_d8,local_118,4);
            }
          }
          else {
            local_118[0] = *(undefined4 *)*local_d0;
            *local_d0 = *local_d0 + 4;
          }
          *(undefined4 *)(puVar10 + 4) = 0;
          if (*(int *)((longlong)puVar10 + 0x24) != local_res20[0]) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar10 + 3,local_res20[0]);
            iVar6 = *(int *)(puVar10 + 4);
          }
          *(int *)(puVar10 + 4) = iVar6 + local_res20[0];
          if (*(int *)((longlong)puVar10 + 0x24) < iVar6 + local_res20[0]) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(puVar10 + 3,iVar6);
          }
          FUN_14165b8a0(1,puVar10[3],local_res20[0],(longlong)(int)local_48 + (longlong)local_110,
                        local_118[0],0,0xf);
          FArchive::~FArchive(&local_d8);
          if (local_110 != (undefined *)0x0) {
            FMemory::Free();
          }
          *(undefined4 *)((longlong)puVar10 + 4) = local_120;
          *(undefined4 *)((longlong)puVar10 + 0x14) = *(undefined4 *)(param_1 + 0x2ec);
          puVar4 = *(undefined **)(param_1 + 0x2fc);
          puVar5 = *(undefined **)(param_1 + 0x304);
          local_110 = puVar4;
          uStack_108 = puVar5;
          local_100 = puVar10;
          BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1465336d8);
          if (BVar8 == 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1465336d8);
          }
          _DAT_146533718 = local_100;
          _DAT_146533700 = param_1;
          _DAT_146533708 = puVar4;
          _DAT_146533710 = puVar5;
          if (((uStack_108._4_4_ == 0 && (int)puVar5 == 0) && local_110._4_4_ == 0) &&
              (int)puVar4 == 0) {
            FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>::RemoveAnnotation
                      (&PTR_PTR_146533680,param_1);
          }
          else {
            if (DAT_146533690 == DAT_1465336bc) {
              FUObjectArray::AddUObjectDeleteListener(&DAT_1469e91a0,&PTR_PTR_146533680);
            }
            local_110 = &DAT_146533700;
            uStack_108 = &DAT_146533708;
            FUN_14235b9e0(&DAT_146533688,local_res20,&local_110,0);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1465336d8);
        }
      }
      else {
        (**(code **)(*param_2 + 0xa8))(param_2,(longlong)local_128);
      }
    }
  }
  return;
}



// FUNCTION 142397000 FUN_142397000 body=54 status=ok
// SIG undefined FUN_142397000(void)

void FUN_142397000(longlong param_1,byte param_2,char param_3,char param_4)

{
  *(byte *)(param_1 + 0x24c) = *(byte *)(param_1 + 0x24c) & 0xf3;
  *(byte *)(param_1 + 0x24c) =
       (param_2 & 0xf9 | param_4 << 2) << 2 | (param_3 << 3 | *(byte *)(param_1 + 0x24c)) & 0xef;
  FUN_140942fb0(param_1,0,0);
  return;
}



// FUNCTION 142397040 FUN_142397040 body=39 status=ok
// SIG undefined FUN_142397040(void)

void FUN_142397040(longlong *param_1,undefined4 param_2)

{
  *(undefined4 *)((longlong)param_1 + 0x364) = param_2;
  (**(code **)(*param_1 + 0x4b8))();
  UActorComponent::MarkRenderDynamicDataDirty(param_1);
  return;
}



// FUNCTION 142397070 FUN_142397070 body=64 status=ok
// SIG undefined FUN_142397070(void)

void FUN_142397070(longlong param_1,float param_2)

{
  if (((*(byte *)(param_1 + 0x2ee) & 1) != 0) || (*(longlong *)(param_1 + 0x650) != 0)) {
    param_2 = 0.0;
  }
  if (1e-08 < ABS(*(float *)(param_1 + 0x2e0) - param_2)) {
    *(float *)(param_1 + 0x2e0) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1423970b0 FUN_1423970b0 body=7 status=ok
// SIG undefined FUN_1423970b0(void)

void FUN_1423970b0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x324) = param_2;
  return;
}


