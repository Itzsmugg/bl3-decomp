// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142c4f160 FUN_142c4f160 body=140 status=ok
// SIG undefined FUN_142c4f160(void)

undefined8 * FUN_142c4f160(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x58] != 0) {
    FMemory::Free();
  }
  if (param_1[0x31] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2d0);
  }
  return param_1;
}



// FUNCTION 142c4f210 FUN_142c4f210 body=227 status=ok
// SIG undefined FUN_142c4f210(void)

void FUN_142c4f210(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = (longlong *)(param_1 + 0x2c0);
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  if (*(int *)(param_1 + 0x2cc) < *(int *)(param_1 + 400)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
  }
  lVar2 = *(longlong *)(*param_2 + 0xb8);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x118) != 0)) {
    puVar4 = *(undefined8 **)(param_1 + 0x188);
    puVar5 = puVar4 + (longlong)*(int *)(param_1 + 400) * 10;
    for (; puVar4 != puVar5; puVar4 = puVar4 + 10) {
      iVar3 = FUN_1423ac950(lVar2,*puVar4);
      if (iVar3 != -1) {
        iVar3 = *(int *)(param_1 + 0x2c8);
        *(int *)(param_1 + 0x2c8) = iVar3 + 1;
        if (*(int *)(param_1 + 0x2cc) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
        }
        *(undefined8 **)(*plVar1 + (longlong)iVar3 * 8) = puVar4;
      }
    }
  }
  FUN_141f885c0(param_1,param_2);
  return;
}



// FUNCTION 142c4f300 FUN_142c4f300 body=424 status=ok
// SIG undefined FUN_142c4f300(void)

void FUN_142c4f300(void *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  UWorld::LineTraceSingleByChannel(param_4,param_1,param_2,param_3,3,param_6,param_7);
  lVar7 = FWeakObjectPtr::Get((longlong)param_1 + 0x6c);
  do {
    if (lVar7 == 0) {
      return;
    }
    lVar6 = lVar7;
    do {
      if (lVar6 == param_5) goto LAB_142c4f3ab;
    } while ((lVar6 != *(longlong *)(param_5 + 0x20)) &&
            (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 != 0));
    lVar7 = FUN_1422336c0(lVar7);
    while( true ) {
      if (lVar7 == 0) {
        return;
      }
      if (lVar7 == param_5) break;
      lVar7 = FUN_1422336c0(lVar7);
    }
LAB_142c4f3ab:
    FCollisionQueryParams::AddIgnoredActor(param_6);
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
    uVar4 = *(undefined4 *)((longlong)param_1 + 0x4c);
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x58);
    *param_2 = *(undefined8 *)((longlong)param_1 + 0x14);
    uVar1 = *(undefined8 *)((longlong)param_1 + 0x44);
    uVar2 = *(undefined8 *)((longlong)param_1 + 0x50);
    *(undefined4 *)(param_2 + 1) = uVar3;
    _guard_xfg_dispatch_icall_nop(param_1,0,0x90);
    *(undefined8 *)((longlong)param_1 + 0x44) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x50) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x58) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
    UWorld::LineTraceSingleByChannel(param_4,param_1,param_2,param_3,3,param_6,param_7);
    lVar7 = FWeakObjectPtr::Get((longlong)param_1 + 0x6c);
  } while( true );
}



// FUNCTION 142c4f4b0 FUN_142c4f4b0 body=563 status=ok
// SIG undefined FUN_142c4f4b0(void)

void FUN_142c4f4b0(byte *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  byte bVar4;
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
  
  fVar7 = *param_2;
  fVar12 = *param_3 - fVar7;
  fVar1 = param_2[1];
  fVar13 = param_3[1] - fVar1;
  fVar2 = param_2[2];
  fVar15 = param_3[2] - fVar2;
  fVar10 = (param_4[3] - (param_4[1] * fVar1 + *param_4 * fVar7 + param_4[2] * fVar2)) /
           (fVar12 * *param_4 + fVar13 * param_4[1] + fVar15 * param_4[2]);
  fVar8 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar15 * fVar15);
  fVar9 = fVar10 * fVar12 + fVar7;
  fVar6 = fVar10 * fVar13 + fVar1;
  fVar11 = fVar10 * fVar15 + fVar2;
  fVar10 = DAT_1468b5d90;
  fVar14 = DAT_1468b5d94;
  fVar5 = DAT_1468b5d98;
  if (1e-08 < fVar8) {
    fVar5 = 1.0 / fVar8;
    fVar10 = fVar12 * fVar5;
    fVar14 = fVar13 * fVar5;
    fVar5 = fVar15 * fVar5;
  }
  fVar7 = (fVar6 - fVar1) * fVar14 + (fVar9 - fVar7) * fVar10 + (fVar11 - fVar2) * fVar5;
  if ((fVar7 < 0.0) || (fVar8 < fVar7)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  *param_1 = *param_1 & 0xfe;
  *param_1 = *param_1 | bVar4;
  *(float *)(param_1 + 0x10) = fVar7;
  if (fVar8 <= 0.0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = fVar7 / fVar8;
  }
  uVar3 = CONCAT44(fVar6,fVar9);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  *(float *)(param_1 + 0x28) = fVar11;
  *(float *)(param_1 + 0x1c) = fVar11;
  *(float *)(param_1 + 0xc) = fVar7;
  fVar7 = param_4[2];
  uVar3 = *(undefined8 *)param_4;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x2c) = uVar3;
  *(float *)(param_1 + 0x40) = fVar7;
  *(float *)(param_1 + 0x34) = fVar7;
  fVar7 = param_2[2];
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)param_2;
  *(float *)(param_1 + 0x4c) = fVar7;
  fVar7 = param_3[2];
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)param_3;
  *(float *)(param_1 + 0x58) = fVar7;
  return;
}



// FUNCTION 142c4f6f0 FUN_142c4f6f0 body=2819 status=ok
// SIG undefined FUN_142c4f6f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c4f6f0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  char cVar14;
  int iVar15;
  undefined8 uVar16;
  undefined1 (*pauVar17) [16];
  undefined4 *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  int iVar21;
  uint uVar22;
  longlong lVar24;
  undefined8 *puVar25;
  longlong lVar26;
  int *piVar27;
  int *piVar28;
  ulonglong uVar29;
  float fVar31;
  undefined1 auVar30 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar39;
  float fVar40;
  undefined1 in_XMM5 [16];
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined1 local_1d8 [8];
  uint local_1d0 [2];
  int *local_1c8;
  undefined8 local_1c0;
  float local_1b8;
  undefined1 local_1a8 [16];
  longlong local_198;
  float local_188;
  float local_184;
  float local_180;
  longlong *local_178;
  float *local_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  ulonglong local_c8;
  ulonglong uVar23;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_198 = param_1;
  local_178 = param_3;
  if (*(char *)(param_1 + 0x855) != '\0') {
    FUN_141f8f580();
    return;
  }
  plVar1 = param_2 + 1;
  lVar24 = *(longlong *)(*param_2 + 0xb8);
  iVar21 = *(int *)(param_1 + 0x838);
  lVar26 = (longlong)iVar21;
  local_f8 = *(undefined8 *)(lVar24 + 0x210);
  uStack_f0 = *(undefined8 *)(lVar24 + 0x218);
  local_e8 = *(undefined4 *)(lVar24 + 0x220);
  uStack_e4 = *(undefined4 *)(lVar24 + 0x224);
  uStack_e0 = *(undefined4 *)(lVar24 + 0x228);
  uStack_dc = *(undefined4 *)(lVar24 + 0x22c);
  local_d8 = *(float *)(lVar24 + 0x230);
  fStack_d4 = *(float *)(lVar24 + 0x234);
  fStack_d0 = *(float *)(lVar24 + 0x238);
  uStack_cc = *(undefined4 *)(lVar24 + 0x23c);
  if (iVar21 != -1) {
    if (((((ABS(*(float *)(param_1 + 0x870) - (float)DAT_1464aa798) <= 0.0001) &&
          (ABS(*(float *)(param_1 + 0x874) - DAT_1464aa798._4_4_) <= 0.0001)) &&
         (ABS(*(float *)(param_1 + 0x878) - DAT_1464aa7a0) <= 0.0001)) &&
        ((ABS(*(float *)(param_1 + 0x87c)) <= 0.0001 && (ABS(*(float *)(param_1 + 0x880)) <= 0.0001)
         ))) && (ABS(*(float *)(param_1 + 0x884)) <= 0.0001)) {
      in_XMM5._4_4_ = uRam0000000146b2ec54;
      in_XMM5._0_4_ = _DAT_146b2ec50;
      in_XMM5._8_4_ = uRam0000000146b2ec58;
      in_XMM5._12_4_ = uRam0000000146b2ec5c;
      local_1d0[0] = 0x322bcc77;
      auVar38._4_4_ =
           -(uint)(1e-08 < (float)((uint)(*(float *)(param_1 + 0x894) - DAT_1464aa814) &
                                  uRam0000000146b2ec54));
      auVar38._0_4_ =
           -(uint)(1e-08 < (float)((uint)(*(float *)(param_1 + 0x890) - DAT_1464aa810) &
                                  _DAT_146b2ec50));
      auVar38._8_4_ =
           -(uint)(1e-08 < (float)((uint)(*(float *)(param_1 + 0x898) - DAT_1464aa818) &
                                  uRam0000000146b2ec58));
      auVar38._12_4_ =
           -(uint)(1e-08 < (float)((uint)(*(float *)(param_1 + 0x89c) - DAT_1464aa81c) &
                                  uRam0000000146b2ec5c));
      iVar15 = movmskps((int)*param_2,auVar38);
      if ((iVar15 == 0) ||
         (auVar4._4_4_ = -(uint)(1e-08 < (float)((uint)(DAT_1464aa814 + *(float *)(param_1 + 0x894))
                                                & uRam0000000146b2ec54)),
         auVar4._0_4_ = -(uint)(1e-08 < (float)((uint)(DAT_1464aa810 + *(float *)(param_1 + 0x890))
                                               & _DAT_146b2ec50)),
         auVar4._8_4_ = -(uint)(1e-08 < (float)((uint)(DAT_1464aa818 + *(float *)(param_1 + 0x898))
                                               & uRam0000000146b2ec58)),
         auVar4._12_4_ =
              -(uint)(1e-08 < (float)((uint)(DAT_1464aa81c + *(float *)(param_1 + 0x89c)) &
                                     uRam0000000146b2ec5c)), iVar15 = movmskps(iVar15,auVar4),
         iVar15 == 0)) goto LAB_142c4fd33;
    }
    if (*(char *)(param_2[4] + lVar26) == '\0') {
      FUN_14060c680(plVar1,iVar21);
    }
    lVar24 = *plVar1;
    puVar25 = (undefined8 *)(lVar24 + lVar26 * 0x30);
    local_158 = *puVar25;
    uStack_150 = puVar25[1];
    puVar25 = (undefined8 *)(lVar24 + 0x10 + lVar26 * 0x30);
    local_148 = *puVar25;
    uStack_140 = puVar25[1];
    puVar18 = (undefined4 *)(lVar24 + 0x20 + lVar26 * 0x30);
    local_138 = *puVar18;
    uStack_134 = puVar18[1];
    uStack_130 = puVar18[2];
    uStack_12c = puVar18[3];
    uVar22 = *(uint *)(param_2 + 2);
    while (uVar22 = uVar22 - 1, uVar22 != 0xffffffff) {
      local_1d0[0] = uVar22;
      if ((uVar22 != 0) && (*(char *)((longlong)(int)uVar22 + param_2[4]) == '\x01')) {
        FBoneContainer::GetParentBoneIndex(param_2[3],&local_1c8,local_1d0);
        FTransform::SetToRelativeTransform
                  ((longlong)(int)local_1d0[0] * 0x30 + *plVar1,
                   (longlong)(int)local_1c8 * 0x30 + *plVar1);
        *(undefined1 *)((longlong)(int)local_1d0[0] + param_2[4]) = 0;
      }
    }
    if (0.0 < *(float *)(param_1 + 0x1b0)) {
      if (*(char *)param_2[4] == '\0') {
        FUN_14060c680(plVar1,0);
      }
      puVar25 = (undefined8 *)*plVar1;
      local_1e8 = 1;
      local_128 = *puVar25;
      uStack_120 = puVar25[1];
      local_118 = puVar25[2];
      uStack_110 = puVar25[3];
      local_108 = *(undefined4 *)(puVar25 + 4);
      uStack_104 = *(undefined4 *)((longlong)puVar25 + 0x24);
      uStack_100 = *(undefined4 *)(puVar25 + 5);
      uStack_fc = *(undefined4 *)((longlong)puVar25 + 0x2c);
      FUN_14224c850(&local_f8,plVar1,&local_128,0);
      auVar13._4_4_ = fStack_d4;
      auVar13._0_4_ = local_d8;
      auVar13._8_4_ = fStack_d0;
      auVar13._12_4_ = uStack_cc;
      fVar31 = *(float *)(param_1 + 0x86c);
      fVar41 = (float)local_f8 * _DAT_146b2ec30;
      fVar42 = local_f8._4_4_ * fRam0000000146b2ec34;
      fVar43 = (float)uStack_f0 * fRam0000000146b2ec38;
      fVar44 = uStack_f0._4_4_ * fRam0000000146b2ec3c;
      fVar32 = *(float *)(param_1 + 0x868);
      fVar36 = *(float *)(param_1 + 0x864);
      fVar45 = *(float *)(param_1 + 0x1b0);
      auVar38 = rcpps(in_XMM5,auVar13);
      fVar33 = fVar31 * fVar42 - fVar32 * fVar43;
      fVar34 = fVar36 * fVar43 - fVar31 * fVar41;
      fVar35 = fVar32 * fVar41 - fVar36 * fVar42;
      fVar37 = auVar38._0_4_;
      fVar39 = auVar38._4_4_;
      fVar40 = auVar38._8_4_;
      fVar33 = fVar33 + fVar33;
      fVar34 = fVar34 + fVar34;
      fVar35 = fVar35 + fVar35;
      fVar37 = (fVar37 + fVar37) - fVar37 * fVar37 * local_d8;
      fVar39 = (fVar39 + fVar39) - fVar39 * fVar39 * fStack_d4;
      fVar40 = (fVar40 + fVar40) - fVar40 * fVar40 * fStack_d0;
      fVar37 = (fVar37 + fVar37) - fVar37 * fVar37 * local_d8;
      fVar39 = (fVar39 + fVar39) - fVar39 * fVar39 * fStack_d4;
      fVar40 = (fVar40 + fVar40) - fVar40 * fVar40 * fStack_d0;
      local_1b8 = ((fVar34 * fVar41 - fVar33 * fVar42) + fVar44 * fVar35 + fVar31) *
                  (float)(-(uint)((float)((uint)fStack_d0 & uRam0000000146b2ec58) <=
                                 fRam0000000146b2ec48) & (uint)fVar40 ^ (uint)fVar40);
      local_1c0 = (int *)CONCAT44(((fVar33 * fVar43 - fVar35 * fVar41) + fVar44 * fVar34 + fVar32) *
                                  (float)(-(uint)((float)((uint)fStack_d4 & uRam0000000146b2ec54) <=
                                                 fRam0000000146b2ec44) & (uint)fVar39 ^ (uint)fVar39
                                         ),((fVar35 * fVar42 - fVar34 * fVar43) +
                                           fVar44 * fVar33 + fVar36) *
                                           (float)(-(uint)((float)((uint)local_d8 & _DAT_146b2ec50)
                                                          <= _DAT_146b2ec40) & (uint)fVar37 ^
                                                  (uint)fVar37));
      uVar16 = FQuat::FindBetweenNormals(&local_168,&DAT_1464aa798,&local_1c0);
      if (1.0 <= fVar45) {
        fVar45 = 1.0;
      }
      pauVar17 = (undefined1 (*) [16])
                 FQuat::Slerp_NotNormalized(&local_188,&DAT_1464aa810,uVar16,fVar45);
      local_1c8 = (int *)CONCAT44(local_1c8._4_4_,0x322bcc77);
      local_1e8 = 1;
      local_1a8 = *pauVar17;
      fVar31 = local_1a8._0_4_;
      fVar32 = local_1a8._4_4_;
      fVar36 = local_1a8._8_4_;
      fVar45 = local_1a8._12_4_;
      auVar30._0_4_ = fVar31 * fVar31 + fVar36 * fVar36;
      auVar30._4_4_ = fVar32 * fVar32 + fVar45 * fVar45;
      auVar30._8_4_ = fVar36 * fVar36 + fVar31 * fVar31;
      auVar30._12_4_ = fVar45 * fVar45 + fVar32 * fVar32;
      fVar39 = auVar30._4_4_ + auVar30._0_4_;
      fVar40 = auVar30._8_4_ + auVar30._4_4_;
      fVar41 = auVar30._12_4_ + auVar30._8_4_;
      fVar42 = auVar30._0_4_ + auVar30._12_4_;
      auVar5._4_4_ = fVar40;
      auVar5._0_4_ = fVar39;
      auVar5._8_4_ = fVar41;
      auVar5._12_4_ = fVar42;
      auVar38 = rsqrtps(auVar30,auVar5);
      fVar33 = auVar38._0_4_;
      fVar34 = auVar38._4_4_;
      fVar35 = auVar38._8_4_;
      fVar37 = auVar38._12_4_;
      fVar33 = (_DAT_146b2ec70 - fVar33 * fVar33 * fVar39 * _DAT_146b2ec70) * fVar33 + fVar33;
      fVar34 = (fRam0000000146b2ec74 - fVar34 * fVar34 * fVar40 * fRam0000000146b2ec74) * fVar34 +
               fVar34;
      fVar35 = (fRam0000000146b2ec78 - fVar35 * fVar35 * fVar41 * fRam0000000146b2ec78) * fVar35 +
               fVar35;
      fVar37 = (fRam0000000146b2ec7c - fVar37 * fVar37 * fVar42 * fRam0000000146b2ec7c) * fVar37 +
               fVar37;
      fVar33 = (float)(((uint)(((_DAT_146b2ec70 - fVar33 * fVar33 * fVar39 * _DAT_146b2ec70) *
                                fVar33 + fVar33) * fVar31) ^ _DAT_146b2ec60) &
                       -(uint)(1e-08 <= fVar39) ^ _DAT_146b2ec60);
      fVar34 = (float)(((uint)(((fRam0000000146b2ec74 -
                                fVar34 * fVar34 * fVar40 * fRam0000000146b2ec74) * fVar34 + fVar34)
                              * fVar32) ^ uRam0000000146b2ec64) & -(uint)(1e-08 <= fVar40) ^
                      uRam0000000146b2ec64);
      fVar35 = (float)(((uint)(((fRam0000000146b2ec78 -
                                fVar35 * fVar35 * fVar41 * fRam0000000146b2ec78) * fVar35 + fVar35)
                              * fVar36) ^ uRam0000000146b2ec68) & -(uint)(1e-08 <= fVar41) ^
                      uRam0000000146b2ec68);
      fVar37 = (float)(((uint)(((fRam0000000146b2ec7c -
                                fVar37 * fVar37 * fVar42 * fRam0000000146b2ec7c) * fVar37 + fVar37)
                              * fVar45) ^ uRam0000000146b2ec6c) & -(uint)(1e-08 <= fVar42) ^
                      uRam0000000146b2ec6c);
      fVar36 = local_128._4_4_ * fVar33;
      fVar45 = (float)local_128 * fVar33;
      fVar31 = (float)local_128 * fVar34;
      fVar32 = local_128._4_4_ * fVar34;
      local_128 = CONCAT44((float)uStack_120 * fVar33 * fRam0000000146b2eca4 +
                           fVar37 * local_128._4_4_ +
                           uStack_120._4_4_ * fVar34 * fRam0000000146b2ec94 +
                           (float)local_128 * fVar35 * fRam0000000146b2ec84,
                           uStack_120._4_4_ * fVar33 * _DAT_146b2eca0 + fVar37 * (float)local_128 +
                           (float)uStack_120 * fVar34 * _DAT_146b2ec90 +
                           local_128._4_4_ * fVar35 * _DAT_146b2ec80);
      uStack_120 = CONCAT44(fVar45 * fRam0000000146b2ecac + fVar37 * uStack_120._4_4_ +
                            fVar32 * fRam0000000146b2ec9c +
                            (float)uStack_120 * fVar35 * fRam0000000146b2ec8c,
                            fVar36 * fRam0000000146b2eca8 + fVar37 * (float)uStack_120 +
                            fVar31 * fRam0000000146b2ec98 +
                            uStack_120._4_4_ * fVar35 * fRam0000000146b2ec88);
      FUN_14224c080(&local_f8,plVar1,&local_128,0);
      puVar25 = (undefined8 *)*plVar1;
      *puVar25 = local_128;
      puVar25[1] = uStack_120;
      puVar25[2] = local_118;
      puVar25[3] = uStack_110;
      *(undefined4 *)(puVar25 + 4) = local_108;
      *(undefined4 *)((longlong)puVar25 + 0x24) = uStack_104;
      *(undefined4 *)(puVar25 + 5) = uStack_100;
      *(undefined4 *)((longlong)puVar25 + 0x2c) = uStack_fc;
      *(undefined1 *)param_2[4] = 1;
      if (*(char *)(param_2[4] + lVar26) == '\0') {
        FUN_14060c680(plVar1,iVar21);
      }
      lVar24 = *plVar1;
      puVar25 = (undefined8 *)(lVar24 + lVar26 * 0x30);
      local_158 = *puVar25;
      uStack_150 = puVar25[1];
      puVar25 = (undefined8 *)(lVar24 + 0x10 + lVar26 * 0x30);
      local_148 = *puVar25;
      uStack_140 = puVar25[1];
      puVar18 = (undefined4 *)(lVar24 + 0x20 + lVar26 * 0x30);
      local_138 = *puVar18;
      uStack_134 = puVar18[1];
      uStack_130 = puVar18[2];
      uStack_12c = puVar18[3];
    }
    local_1e8 = 1;
    FUN_14224c850(&local_f8,plVar1,&local_158,iVar21);
    fVar31 = *(float *)(param_1 + 0x890);
    fVar32 = *(float *)(param_1 + 0x894);
    fVar36 = *(float *)(param_1 + 0x898);
    fVar45 = *(float *)(param_1 + 0x89c);
    local_1e8 = 1;
    fVar35 = fVar31 * local_158._4_4_;
    fVar37 = fVar31 * (float)local_158;
    fVar33 = fVar32 * (float)local_158;
    fVar34 = fVar32 * local_158._4_4_;
    local_158 = CONCAT44(fVar31 * (float)uStack_150 * fRam0000000146b2eca4 +
                         fVar45 * local_158._4_4_ + fVar32 * uStack_150._4_4_ * fRam0000000146b2ec94
                         + fVar36 * (float)local_158 * fRam0000000146b2ec84,
                         fVar31 * uStack_150._4_4_ * _DAT_146b2eca0 + fVar45 * (float)local_158 +
                         fVar32 * (float)uStack_150 * _DAT_146b2ec90 +
                         fVar36 * local_158._4_4_ * _DAT_146b2ec80);
    uStack_150 = CONCAT44(fVar37 * fRam0000000146b2ecac + fVar45 * uStack_150._4_4_ +
                          fVar34 * fRam0000000146b2ec9c +
                          fVar36 * (float)uStack_150 * fRam0000000146b2ec8c,
                          fVar35 * fRam0000000146b2eca8 + fVar45 * (float)uStack_150 +
                          fVar33 * fRam0000000146b2ec98 +
                          fVar36 * uStack_150._4_4_ * fRam0000000146b2ec88);
    local_148 = CONCAT44(local_148._4_4_ + *(float *)(param_1 + 0x880),
                         (float)local_148 + *(float *)(param_1 + 0x87c));
    uStack_140 = CONCAT44(uStack_140._4_4_ + 0.0,(float)uStack_140 + *(float *)(param_1 + 0x884));
    FUN_14224c080(&local_f8,plVar1,&local_158,iVar21);
    lVar24 = *plVar1;
    puVar25 = (undefined8 *)(lVar24 + lVar26 * 0x30);
    *puVar25 = local_158;
    puVar25[1] = uStack_150;
    puVar18 = (undefined4 *)(lVar24 + 0x10 + lVar26 * 0x30);
    *puVar18 = (float)local_148;
    puVar18[1] = local_148._4_4_;
    puVar18[2] = (float)uStack_140;
    puVar18[3] = uStack_140._4_4_;
    puVar18 = (undefined4 *)(lVar24 + 0x20 + lVar26 * 0x30);
    *puVar18 = local_138;
    puVar18[1] = uStack_134;
    puVar18[2] = uStack_130;
    puVar18[3] = uStack_12c;
    *(undefined1 *)(param_2[4] + lVar26) = 1;
  }
LAB_142c4fd33:
  lVar24 = *(longlong *)(param_1 + 0x158);
  iVar21 = *(int *)(param_1 + 0x160);
  lVar26 = (longlong)iVar21 * 0xe0 + lVar24;
  if (lVar24 != lVar26) {
    do {
      cVar14 = FUN_141fab140(lVar24);
      if (cVar14 == '\0') goto LAB_142c50170;
      lVar24 = lVar24 + 0xe0;
    } while (lVar24 != lVar26);
    iVar21 = *(int *)(param_1 + 0x160);
  }
  local_1c8 = *(int **)(param_1 + 0x158);
  local_1c0 = local_1c8 + (longlong)iVar21 * 0x38;
  if (local_1c8 != local_1c0) {
    piVar27 = local_1c8 + 0x1a;
    do {
      uVar29 = 0;
      iVar21 = *local_1c8;
      if (*(char *)((longlong)iVar21 + param_2[4]) == '\0') {
        FUN_14060c680(plVar1);
      }
      local_170 = (float *)((longlong)iVar21 * 0x30 + *plVar1);
      fVar31 = local_170[5];
      fVar32 = local_170[6];
      local_1a8._8_4_ = fVar32;
      piVar27[0x18] = (int)local_170[4];
      piVar27[0x19] = (int)fVar31;
      piVar27[0x1a] = (int)fVar32;
      if ((char)piVar27[0x1b] != '\0') {
        *piVar27 = 0;
        if (piVar27[1] < piVar27[-8]) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(piVar27 + -2);
        }
        piVar28 = *(int **)(piVar27 + -6);
        uVar19 = (longlong)piVar27[-4] & 0x3fffffffffffffff;
        if (piVar28 + piVar27[-4] < piVar28) {
          uVar19 = 0;
        }
        if (uVar19 != 0) {
          do {
            iVar21 = *piVar28;
            if (*(char *)((longlong)iVar21 + param_2[4]) == '\0') {
              FUN_14060c680(plVar1);
            }
            iVar15 = *piVar27;
            puVar25 = (undefined8 *)((longlong)iVar21 * 0x30 + *plVar1);
            *piVar27 = iVar15 + 1;
            if (piVar27[1] < iVar15 + 1) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(piVar27 + -2,iVar15);
            }
            uVar16 = puVar25[1];
            piVar28 = piVar28 + 1;
            puVar20 = (undefined8 *)((longlong)iVar15 * 0x30 + *(longlong *)(piVar27 + -2));
            uVar29 = uVar29 + 1;
            *puVar20 = *puVar25;
            puVar20[1] = uVar16;
            uVar2 = *(undefined4 *)((longlong)puVar25 + 0x14);
            uVar6 = *(undefined4 *)(puVar25 + 3);
            uVar7 = *(undefined4 *)((longlong)puVar25 + 0x1c);
            *(undefined4 *)(puVar20 + 2) = *(undefined4 *)(puVar25 + 2);
            *(undefined4 *)((longlong)puVar20 + 0x14) = uVar2;
            *(undefined4 *)(puVar20 + 3) = uVar6;
            *(undefined4 *)((longlong)puVar20 + 0x1c) = uVar7;
            uVar2 = *(undefined4 *)((longlong)puVar25 + 0x24);
            uVar6 = *(undefined4 *)(puVar25 + 5);
            uVar7 = *(undefined4 *)((longlong)puVar25 + 0x2c);
            *(undefined4 *)(puVar20 + 4) = *(undefined4 *)(puVar25 + 4);
            *(undefined4 *)((longlong)puVar20 + 0x24) = uVar2;
            *(undefined4 *)(puVar20 + 5) = uVar6;
            *(undefined4 *)((longlong)puVar20 + 0x2c) = uVar7;
            param_1 = local_198;
            param_3 = local_178;
          } while (uVar29 != uVar19);
        }
        uVar16 = *(undefined8 *)(piVar27 + 0x14);
        iVar21 = piVar27[0x16];
        FAnimNode_LegIK::OrientLegTowardsIK(param_1,local_1c8);
        FUN_141f89c40(param_1,local_1c8);
        *(undefined8 *)(piVar27 + 0x14) = uVar16;
        piVar27[0x16] = iVar21;
        if (*(char *)(param_1 + 0x1b6) == '\0') {
          fVar45 = -*(float *)(param_1 + 0x898);
          fVar35 = -*(float *)(param_1 + 0x890);
          fVar31 = *(float *)(param_1 + 0x89c);
          pfVar3 = *(float **)(piVar27 + -2);
          fVar34 = -*(float *)(param_1 + 0x894);
          fVar33 = fVar34 * DAT_1464aa7a0 - fVar45 * DAT_1464aa798._4_4_;
          fVar36 = fVar45 * (float)DAT_1464aa798 - DAT_1464aa7a0 * fVar35;
          fVar33 = fVar33 + fVar33;
          fVar32 = fVar35 * DAT_1464aa798._4_4_ - fVar34 * (float)DAT_1464aa798;
          fVar36 = fVar36 + fVar36;
          fVar32 = fVar32 + fVar32;
          local_188 = (fVar34 * fVar32 - fVar45 * fVar36) + fVar31 * fVar33 + (float)DAT_1464aa798;
          local_184 = (fVar45 * fVar33 - fVar35 * fVar32) + fVar31 * fVar36 + DAT_1464aa798._4_4_;
          local_180 = (fVar35 * fVar36 - fVar34 * fVar33) + fVar31 * fVar32 + DAT_1464aa7a0;
          FQuat::FindBetweenNormals(&local_168,&local_188,piVar27 + 0x14);
          fVar31 = *local_170;
          fVar32 = local_170[1];
          fVar36 = local_170[2];
          fVar45 = local_170[3];
          fVar41 = fVar36 * local_168 * fRam0000000146b2eca4;
          fVar42 = fVar32 * local_168 * fRam0000000146b2eca8;
          fVar43 = fVar31 * local_168 * fRam0000000146b2ecac;
          fVar33 = fVar45 * fStack_164 * fRam0000000146b2ec94;
          fVar34 = fVar31 * fStack_164 * fRam0000000146b2ec98;
          fVar35 = fVar32 * fStack_164 * fRam0000000146b2ec9c;
          fVar37 = fVar31 * fStack_160 * fRam0000000146b2ec84;
          fVar39 = fVar45 * fStack_160 * fRam0000000146b2ec88;
          fVar40 = fVar36 * fStack_160 * fRam0000000146b2ec8c;
          *pfVar3 = fVar45 * local_168 * _DAT_146b2eca0 + fStack_15c * fVar31 +
                    fVar36 * fStack_164 * _DAT_146b2ec90 + fVar32 * fStack_160 * _DAT_146b2ec80;
          pfVar3[1] = fVar41 + fStack_15c * fVar32 + fVar33 + fVar37;
          pfVar3[2] = fVar42 + fStack_15c * fVar36 + fVar34 + fVar39;
          pfVar3[3] = fVar43 + fStack_15c * fVar45 + fVar35 + fVar40;
        }
        uVar23 = 0;
        *(undefined1 *)(piVar27 + 0x1b) = 0;
        local_1d0[0] = 0;
        uVar29 = uVar23;
        uVar19 = uVar23;
        if (0 < piVar27[-8]) {
          do {
            lVar24 = *(longlong *)(piVar27 + -2);
            iVar21 = (int)param_3[1];
            uVar16 = *(undefined8 *)(uVar19 + lVar24);
            uVar8 = ((undefined8 *)(uVar19 + lVar24))[1];
            uVar2 = *(undefined4 *)(uVar29 + *(longlong *)(piVar27 + -6));
            puVar25 = (undefined8 *)(uVar19 + 0x10 + lVar24);
            uVar9 = *puVar25;
            uVar10 = puVar25[1];
            puVar25 = (undefined8 *)(uVar19 + 0x20 + lVar24);
            uVar11 = *puVar25;
            uVar12 = puVar25[1];
            *(int *)(param_3 + 1) = iVar21 + 1;
            uVar22 = (uint)uVar23;
            if (*(int *)((longlong)param_3 + 0xc) < iVar21 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
              ResizeGrow(param_3,iVar21);
              uVar22 = local_1d0[0];
            }
            local_1d0[0] = uVar22 + 1;
            uVar23 = (ulonglong)local_1d0[0];
            puVar18 = (undefined4 *)((longlong)iVar21 * 0x40 + *param_3);
            *puVar18 = uVar2;
            *(undefined8 *)(puVar18 + 4) = uVar16;
            *(undefined8 *)(puVar18 + 6) = uVar8;
            *(undefined8 *)(puVar18 + 8) = uVar9;
            *(undefined8 *)(puVar18 + 10) = uVar10;
            *(undefined8 *)(puVar18 + 0xc) = uVar11;
            *(undefined8 *)(puVar18 + 0xe) = uVar12;
            uVar29 = uVar29 + 4;
            uVar19 = uVar19 + 0x30;
            param_1 = local_198;
          } while ((int)local_1d0[0] < piVar27[-8]);
        }
      }
      local_1c8 = local_1c8 + 0x38;
      piVar27 = piVar27 + 0x38;
    } while (local_1c8 != local_1c0);
  }
LAB_142c50170:
  AlgoImpl::
  IntroSortInternal<FBoneTransform,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_>
            (*param_3,(longlong)(int)param_3[1],local_1d8[0],local_1d8);
  return;
}



// FUNCTION 142c50200 FUN_142c50200 body=25103 status=ok
// SIG undefined FUN_142c50200(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c50200(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined1 (*pauVar20) [16];
  int *piVar21;
  float *pfVar22;
  float *pfVar23;
  undefined8 uVar24;
  undefined1 *puVar25;
  int iVar26;
  int iVar27;
  longlong *plVar28;
  longlong *plVar29;
  void **ppvVar30;
  int *piVar31;
  undefined4 *puVar32;
  undefined8 *puVar33;
  longlong lVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  undefined1 *puVar37;
  undefined1 auVar38 [8];
  uint uVar39;
  uint uVar40;
  longlong *plVar41;
  ulonglong uVar42;
  char cVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar77;
  float fVar78;
  undefined1 auVar64 [16];
  float fVar79;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
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
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  uint uVar119;
  float fVar120;
  uint uVar121;
  uint uVar122;
  undefined1 auStack_15d8 [32];
  longlong local_15b8;
  undefined4 local_15b0;
  char local_15a8;
  char local_15a7;
  char local_15a6;
  char local_15a5;
  float local_15a0;
  undefined1 local_1598 [16];
  undefined1 local_1588 [16];
  int local_1578;
  undefined1 local_1568 [8];
  float fStack_1560;
  float fStack_155c;
  int local_1558;
  int local_1554;
  int local_1550;
  float local_154c;
  int local_1548 [2];
  longlong local_1540;
  undefined8 local_1538;
  float local_1530;
  float local_152c;
  float local_1528;
  float local_1520;
  float local_151c;
  float local_1518;
  void *local_1510;
  int local_1508;
  ulonglong local_14f8;
  float fStack_14f0;
  float fStack_14ec;
  float local_14e8;
  float fStack_14e4;
  float fStack_14e0;
  float fStack_14dc;
  void *local_14d8;
  int local_14d0;
  int local_14cc;
  longlong local_14c8;
  undefined1 *puStack_14c0;
  undefined8 local_14b8;
  longlong local_14b0;
  undefined8 local_14a8;
  longlong local_14a0;
  undefined8 local_1498;
  longlong local_1488;
  longlong local_1480;
  undefined8 local_1478;
  undefined8 local_1470;
  uint local_1468;
  longlong *local_1460;
  longlong *local_1458;
  float local_1448;
  float fStack_1444;
  float fStack_1440;
  float fStack_143c;
  undefined8 local_1438;
  undefined8 uStack_1430;
  undefined1 local_1428 [8];
  float fStack_1420;
  float fStack_141c;
  float local_1418;
  float fStack_1414;
  float fStack_1410;
  float fStack_140c;
  float local_1408;
  float fStack_1404;
  float fStack_1400;
  float fStack_13fc;
  float local_13f8;
  float fStack_13f4;
  float fStack_13f0;
  float fStack_13ec;
  float local_13e8;
  float fStack_13e4;
  float fStack_13e0;
  float fStack_13dc;
  float local_13d8;
  float fStack_13d4;
  float fStack_13d0;
  float fStack_13cc;
  float local_13c8;
  float fStack_13c4;
  float fStack_13c0;
  float fStack_13bc;
  float local_13b8;
  float fStack_13b4;
  float fStack_13b0;
  float fStack_13ac;
  float local_13a8;
  float fStack_13a4;
  float fStack_13a0;
  float fStack_139c;
  float local_1398;
  float fStack_1394;
  float fStack_1390;
  float fStack_138c;
  float local_1388;
  float fStack_1384;
  float fStack_1380;
  float fStack_137c;
  float local_1378;
  float fStack_1374;
  float fStack_1370;
  float fStack_136c;
  float local_1368;
  float fStack_1364;
  float fStack_1360;
  float fStack_135c;
  float local_1358;
  float fStack_1354;
  float fStack_1350;
  float fStack_134c;
  float local_1348;
  float fStack_1344;
  float fStack_1340;
  float fStack_133c;
  float local_1338;
  float fStack_1334;
  float fStack_1330;
  float fStack_132c;
  float local_1328;
  float fStack_1324;
  float fStack_1320;
  float fStack_131c;
  float local_1318;
  float fStack_1314;
  float fStack_1310;
  float fStack_130c;
  float local_1308;
  float fStack_1304;
  float fStack_1300;
  float fStack_12fc;
  float local_12f8;
  float fStack_12f4;
  float fStack_12f0;
  float fStack_12ec;
  float local_12e8;
  float fStack_12e4;
  float fStack_12e0;
  float fStack_12dc;
  float local_12d8;
  float fStack_12d4;
  float fStack_12d0;
  float fStack_12cc;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 local_12b8;
  undefined8 uStack_12b0;
  float local_12a8;
  float fStack_12a4;
  float fStack_12a0;
  float fStack_129c;
  float local_1298;
  float fStack_1294;
  float fStack_1290;
  float fStack_128c;
  float local_1288;
  float fStack_1284;
  float fStack_1280;
  float fStack_127c;
  float local_1278;
  float fStack_1274;
  float fStack_1270;
  float fStack_126c;
  float local_1268;
  float fStack_1264;
  float fStack_1260;
  float fStack_125c;
  float local_1258;
  float fStack_1254;
  float fStack_1250;
  float fStack_124c;
  longlong *local_1248;
  float local_1238;
  float fStack_1234;
  float fStack_1230;
  float fStack_122c;
  undefined8 local_1228;
  undefined8 uStack_1220;
  float local_1218;
  float fStack_1214;
  float fStack_1210;
  float fStack_120c;
  float local_1208;
  float fStack_1204;
  float fStack_1200;
  float fStack_11fc;
  undefined1 local_11f8 [8];
  undefined8 uStack_11f0;
  float local_11e8;
  float fStack_11e4;
  float fStack_11e0;
  float fStack_11dc;
  float local_11d8;
  float fStack_11d4;
  float fStack_11d0;
  float fStack_11cc;
  float local_11c8;
  float fStack_11c4;
  float fStack_11c0;
  float fStack_11bc;
  float local_11b8;
  float fStack_11b4;
  float fStack_11b0;
  float fStack_11ac;
  float local_11a8;
  float fStack_11a4;
  float fStack_11a0;
  float fStack_119c;
  undefined8 local_1198;
  undefined8 uStack_1190;
  undefined8 local_1188;
  undefined8 uStack_1180;
  float local_1178;
  float fStack_1174;
  float fStack_1170;
  float fStack_116c;
  float local_1168;
  float local_1164;
  float local_1160;
  float local_1158;
  float local_1154;
  float local_1150;
  float local_1148;
  float fStack_1144;
  float fStack_1140;
  float fStack_113c;
  float local_1138;
  float fStack_1134;
  float fStack_1130;
  float fStack_112c;
  float local_1128;
  float fStack_1124;
  float fStack_1120;
  float fStack_111c;
  float local_1118;
  float fStack_1114;
  float fStack_1110;
  float fStack_110c;
  float local_1108;
  float fStack_1104;
  float fStack_1100;
  float fStack_10fc;
  float local_10f8;
  float fStack_10f4;
  float fStack_10f0;
  float fStack_10ec;
  float local_10e8;
  float fStack_10e4;
  float fStack_10e0;
  float fStack_10dc;
  float local_10d8;
  float fStack_10d4;
  float fStack_10d0;
  float fStack_10cc;
  float local_10c8;
  float fStack_10c4;
  float fStack_10c0;
  float fStack_10bc;
  float local_10b8;
  float fStack_10b4;
  float fStack_10b0;
  float fStack_10ac;
  float local_10a8;
  float fStack_10a4;
  float fStack_10a0;
  float fStack_109c;
  float local_1098;
  float fStack_1094;
  float fStack_1090;
  float fStack_108c;
  float local_1088;
  float fStack_1084;
  float fStack_1080;
  float fStack_107c;
  float local_1078;
  float fStack_1074;
  float fStack_1070;
  float fStack_106c;
  float local_1068;
  float fStack_1064;
  float fStack_1060;
  float fStack_105c;
  float local_1058;
  float fStack_1054;
  float fStack_1050;
  float fStack_104c;
  float local_1048;
  float fStack_1044;
  float fStack_1040;
  float fStack_103c;
  float local_1038;
  float fStack_1034;
  float fStack_1030;
  float fStack_102c;
  float local_1028;
  float fStack_1024;
  float fStack_1020;
  float fStack_101c;
  float local_1018;
  float fStack_1014;
  float fStack_1010;
  float fStack_100c;
  float local_1008;
  float fStack_1004;
  float fStack_1000;
  float fStack_ffc;
  float local_ff8;
  float fStack_ff4;
  float fStack_ff0;
  float fStack_fec;
  float local_fe8;
  float fStack_fe4;
  float fStack_fe0;
  float fStack_fdc;
  float local_fd8;
  float fStack_fd4;
  float fStack_fd0;
  float fStack_fcc;
  undefined1 local_fc8 [4];
  undefined1 local_fc4 [4];
  undefined8 local_fc0;
  uint local_fb8;
  undefined1 local_fa8 [16];
  undefined1 local_f98 [16];
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined1 local_f78 [8];
  void *local_f70;
  ulonglong local_f68;
  longlong local_f60;
  undefined8 local_f58;
  undefined8 local_f50;
  undefined8 local_f48;
  undefined2 local_f40;
  undefined1 local_f3e;
  undefined1 local_f38;
  float local_f28;
  float fStack_f24;
  float fStack_f20;
  float fStack_f1c;
  float local_f18;
  float fStack_f14;
  float fStack_f10;
  float fStack_f0c;
  float local_f08;
  float fStack_f04;
  float fStack_f00;
  float fStack_efc;
  float local_ef8;
  float fStack_ef4;
  float fStack_ef0;
  float fStack_eec;
  float local_ee8;
  float fStack_ee4;
  float fStack_ee0;
  float fStack_edc;
  float local_ed8;
  float fStack_ed4;
  float fStack_ed0;
  float fStack_ecc;
  undefined1 local_ec8 [16];
  undefined1 local_eb8 [16];
  int local_ea8;
  float local_e98;
  float fStack_e94;
  float fStack_e90;
  float fStack_e8c;
  float local_e88;
  float fStack_e84;
  float fStack_e80;
  float fStack_e7c;
  float local_e78;
  float fStack_e74;
  float fStack_e70;
  float fStack_e6c;
  float local_e68;
  float fStack_e64;
  float fStack_e60;
  float fStack_e5c;
  float local_e58;
  float fStack_e54;
  float fStack_e50;
  float fStack_e4c;
  int local_e48;
  undefined8 local_e38;
  undefined8 uStack_e30;
  undefined8 local_e28;
  undefined8 uStack_e20;
  undefined8 local_e18;
  undefined8 uStack_e10;
  int local_e08;
  float local_df8;
  float fStack_df4;
  float fStack_df0;
  float fStack_dec;
  float local_de8;
  float fStack_de4;
  float fStack_de0;
  float fStack_ddc;
  float local_dd8;
  float fStack_dd4;
  float fStack_dd0;
  float fStack_dcc;
  int local_dc8;
  float local_db8;
  float fStack_db4;
  float fStack_db0;
  float fStack_dac;
  float local_da8;
  float fStack_da4;
  float fStack_da0;
  float fStack_d9c;
  float local_d98;
  float fStack_d94;
  float fStack_d90;
  float fStack_d8c;
  undefined4 local_d88;
  uint local_d78;
  uint uStack_d74;
  uint uStack_d70;
  uint uStack_d6c;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined1 local_d48 [12];
  undefined1 local_d3c [12];
  undefined1 local_d30 [12];
  undefined1 local_d24 [12];
  undefined1 local_d18 [12];
  undefined1 local_d0c [12];
  undefined1 local_d00 [12];
  undefined1 local_cf4 [12];
  undefined1 local_ce8 [12];
  undefined1 local_cdc [12];
  undefined1 local_cd0 [12];
  undefined1 local_cc4 [12];
  undefined1 local_cb8 [12];
  undefined1 local_cac [12];
  undefined1 local_ca0 [12];
  undefined1 local_c94 [12];
  undefined1 local_c88 [12];
  undefined1 local_c7c [12];
  undefined1 local_c70 [12];
  undefined1 local_c64 [12];
  undefined1 local_c58 [12];
  undefined1 local_c4c [12];
  undefined1 local_c40 [12];
  undefined1 local_c34 [12];
  undefined1 local_c28 [12];
  undefined1 local_c1c [20];
  undefined1 local_c08 [16];
  float local_bf8;
  float fStack_bf4;
  float fStack_bf0;
  float fStack_bec;
  float local_be8;
  float fStack_be4;
  float fStack_be0;
  float fStack_bdc;
  float local_bd8;
  float fStack_bd4;
  float fStack_bd0;
  float fStack_bcc;
  float local_bc8;
  float fStack_bc4;
  float fStack_bc0;
  float fStack_bbc;
  float local_bb8;
  float fStack_bb4;
  float fStack_bb0;
  float fStack_bac;
  float local_ba8;
  float fStack_ba4;
  float fStack_ba0;
  float fStack_b9c;
  float local_b98;
  float fStack_b94;
  float fStack_b90;
  float fStack_b8c;
  float local_b88;
  float fStack_b84;
  float fStack_b80;
  float fStack_b7c;
  float local_b78;
  float fStack_b74;
  float fStack_b70;
  float fStack_b6c;
  float local_b68;
  float fStack_b64;
  float fStack_b60;
  float fStack_b5c;
  float local_b58;
  float fStack_b54;
  float fStack_b50;
  float fStack_b4c;
  float local_b48;
  float fStack_b44;
  float fStack_b40;
  float fStack_b3c;
  float local_b38;
  float fStack_b34;
  float fStack_b30;
  float fStack_b2c;
  float local_b28;
  float fStack_b24;
  float fStack_b20;
  float fStack_b1c;
  float local_b18;
  float fStack_b14;
  float fStack_b10;
  float fStack_b0c;
  float local_b08;
  float fStack_b04;
  float fStack_b00;
  float fStack_afc;
  float local_af8;
  float fStack_af4;
  float fStack_af0;
  float fStack_aec;
  float local_ae8;
  float fStack_ae4;
  float fStack_ae0;
  float fStack_adc;
  float local_ad8;
  float fStack_ad4;
  float fStack_ad0;
  float fStack_acc;
  float local_ac8;
  float fStack_ac4;
  float fStack_ac0;
  float fStack_abc;
  float local_ab8;
  float fStack_ab4;
  float fStack_ab0;
  float fStack_aac;
  float local_aa8;
  float fStack_aa4;
  float fStack_aa0;
  float fStack_a9c;
  float local_a98;
  float fStack_a94;
  float fStack_a90;
  float fStack_a8c;
  float local_a88;
  float fStack_a84;
  float fStack_a80;
  float fStack_a7c;
  float local_a78;
  float fStack_a74;
  float fStack_a70;
  float fStack_a6c;
  float local_a68;
  float fStack_a64;
  float fStack_a60;
  float fStack_a5c;
  float local_a58;
  float fStack_a54;
  float fStack_a50;
  float fStack_a4c;
  float local_a48;
  float fStack_a44;
  float fStack_a40;
  float fStack_a3c;
  float local_a38;
  float fStack_a34;
  float fStack_a30;
  float fStack_a2c;
  float local_a28;
  float fStack_a24;
  float fStack_a20;
  float fStack_a1c;
  float local_a18;
  float fStack_a14;
  float fStack_a10;
  float fStack_a0c;
  float local_a08;
  float fStack_a04;
  float fStack_a00;
  float fStack_9fc;
  float local_9f8;
  float fStack_9f4;
  float fStack_9f0;
  float fStack_9ec;
  float local_9e8;
  float fStack_9e4;
  float fStack_9e0;
  float fStack_9dc;
  float local_9d8;
  float fStack_9d4;
  float fStack_9d0;
  float fStack_9cc;
  float local_9c8;
  float fStack_9c4;
  float fStack_9c0;
  float fStack_9bc;
  float local_9b8;
  float fStack_9b4;
  float fStack_9b0;
  float fStack_9ac;
  float local_9a8;
  float fStack_9a4;
  float fStack_9a0;
  float fStack_99c;
  float local_998;
  float fStack_994;
  float fStack_990;
  float fStack_98c;
  float local_988;
  float fStack_984;
  float fStack_980;
  float fStack_97c;
  float local_978;
  float fStack_974;
  float fStack_970;
  float fStack_96c;
  float local_968;
  float fStack_964;
  float fStack_960;
  float fStack_95c;
  float local_958;
  float fStack_954;
  float fStack_950;
  float fStack_94c;
  float local_948;
  float fStack_944;
  float fStack_940;
  float fStack_93c;
  float local_938;
  float fStack_934;
  float fStack_930;
  float fStack_92c;
  float local_928;
  float fStack_924;
  float fStack_920;
  float fStack_91c;
  float local_918;
  float fStack_914;
  float fStack_910;
  float fStack_90c;
  float local_908;
  float fStack_904;
  float fStack_900;
  float fStack_8fc;
  float local_8f8;
  float fStack_8f4;
  float fStack_8f0;
  float fStack_8ec;
  float local_8e8;
  float fStack_8e4;
  float fStack_8e0;
  float fStack_8dc;
  float local_8d8;
  float fStack_8d4;
  float fStack_8d0;
  float fStack_8cc;
  float local_8c8;
  float fStack_8c4;
  float fStack_8c0;
  float fStack_8bc;
  float local_8b8;
  float fStack_8b4;
  float fStack_8b0;
  float fStack_8ac;
  float local_8a8;
  float fStack_8a4;
  float fStack_8a0;
  float fStack_89c;
  float local_898;
  float fStack_894;
  float fStack_890;
  float fStack_88c;
  float local_888;
  float fStack_884;
  float fStack_880;
  float fStack_87c;
  float local_878;
  float fStack_874;
  float fStack_870;
  float fStack_86c;
  float local_868;
  float fStack_864;
  float fStack_860;
  float fStack_85c;
  float local_858;
  float fStack_854;
  float fStack_850;
  float fStack_84c;
  float local_848;
  float fStack_844;
  float fStack_840;
  float fStack_83c;
  float local_838;
  float fStack_834;
  float fStack_830;
  float fStack_82c;
  float local_828;
  float fStack_824;
  float fStack_820;
  float fStack_81c;
  float local_818;
  float fStack_814;
  float fStack_810;
  float fStack_80c;
  float local_808;
  float fStack_804;
  float fStack_800;
  float fStack_7fc;
  float local_7f8;
  float fStack_7f4;
  float fStack_7f0;
  float fStack_7ec;
  float local_7e8;
  float fStack_7e4;
  float fStack_7e0;
  float fStack_7dc;
  float local_7d8;
  float fStack_7d4;
  float fStack_7d0;
  float fStack_7cc;
  float local_7c8;
  float fStack_7c4;
  float fStack_7c0;
  float fStack_7bc;
  float local_7b8;
  float fStack_7b4;
  float fStack_7b0;
  float fStack_7ac;
  float local_7a8;
  float fStack_7a4;
  float fStack_7a0;
  float fStack_79c;
  float local_798;
  float fStack_794;
  float fStack_790;
  float fStack_78c;
  float local_788;
  float fStack_784;
  float fStack_780;
  float fStack_77c;
  float local_778;
  float fStack_774;
  float fStack_770;
  float fStack_76c;
  float local_768;
  float fStack_764;
  float fStack_760;
  float fStack_75c;
  float local_758;
  float fStack_754;
  float fStack_750;
  float fStack_74c;
  float local_748;
  float fStack_744;
  float fStack_740;
  float fStack_73c;
  float local_738;
  float fStack_734;
  float fStack_730;
  float fStack_72c;
  float local_728;
  float fStack_724;
  float fStack_720;
  float fStack_71c;
  float local_718;
  float fStack_714;
  float fStack_710;
  float fStack_70c;
  float local_708;
  float fStack_704;
  float fStack_700;
  float fStack_6fc;
  float local_6f8;
  float fStack_6f4;
  float fStack_6f0;
  float fStack_6ec;
  float local_6e8;
  float fStack_6e4;
  float fStack_6e0;
  float fStack_6dc;
  float local_6d8;
  float fStack_6d4;
  float fStack_6d0;
  float fStack_6cc;
  float local_6c8;
  float fStack_6c4;
  float fStack_6c0;
  float fStack_6bc;
  float local_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  float local_6a8;
  float fStack_6a4;
  float fStack_6a0;
  float fStack_69c;
  float local_698;
  float fStack_694;
  float fStack_690;
  float fStack_68c;
  float local_688;
  float fStack_684;
  float fStack_680;
  float fStack_67c;
  float local_678;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  float local_668;
  float fStack_664;
  float fStack_660;
  float fStack_65c;
  float local_658;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  float local_648;
  float fStack_644;
  float fStack_640;
  float fStack_63c;
  float local_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  float local_628;
  float fStack_624;
  float fStack_620;
  float fStack_61c;
  float local_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
  float local_608;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  float local_5f8;
  float fStack_5f4;
  float fStack_5f0;
  float fStack_5ec;
  float local_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  float local_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float local_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  float local_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined1 local_538 [8];
  undefined8 uStack_530;
  float local_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  undefined8 local_518;
  undefined8 uStack_510;
  float local_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  float local_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  undefined1 local_4e8 [8];
  float fStack_4e0;
  float fStack_4dc;
  undefined1 local_4d8 [8];
  float fStack_4d0;
  float fStack_4cc;
  float local_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  int local_498 [8];
  int *local_478;
  int local_470;
  int local_46c;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined1 local_448 [8];
  float fStack_440;
  float fStack_43c;
  float local_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined1 local_418 [8];
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [192];
  undefined1 *local_228;
  ulonglong local_218;
  undefined1 local_208 [48];
  undefined1 local_1d8 [48];
  undefined1 local_1a8 [48];
  undefined1 local_178 [48];
  undefined1 local_148 [48];
  undefined1 local_118 [48];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_15d8;
  if (*param_2 == 0) {
    return;
  }
  lVar17 = *(longlong *)(*param_2 + 0xb8);
  if (lVar17 == 0) {
    return;
  }
  local_1460 = param_2;
  local_1248 = param_3;
  if ((*(longlong *)(lVar17 + 0x120) == 0) && (lVar17 = FUN_1423407b0(), lVar17 == 0)) {
    return;
  }
  local_1550 = *(int *)(param_1 + 0x180);
  lVar17 = param_2[3];
  plVar41 = param_2 + 1;
  lVar18 = *param_2;
  local_1488 = lVar17;
  local_1458 = plVar41;
  SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_f78,lVar18);
  local_f70 = (void *)0x0;
  local_f68 = 0;
  local_f60 = 0;
  local_f58 = 0;
  local_f50 = 0;
  local_f48 = 0;
  local_f40 = 0;
  local_f3e = 0;
  local_f38 = 0;
  FUN_142296770(local_f78,lVar18);
  FUN_14228f220(param_1 + 0x228,local_f78);
  lVar18 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
           ::GetBoundProgramCounterForTimerManager(param_1 + 0x228);
  cVar43 = lVar18 != 0;
  local_14c8 = 0;
  puStack_14c0 = (undefined1 *)0x0;
  local_14d0 = 0;
  local_14d8 = (void *)0x0;
  local_14cc = 0;
  local_14b8 = 0;
  local_14b0 = 0;
  local_14a8 = 0;
  local_14a0 = 0;
  local_1498 = 0;
  local_15a7 = cVar43;
  if (lVar18 != 0) {
    local_14c8 = local_f60;
    iVar26 = *(int *)(local_f60 + 8);
    iVar27 = 0;
    if (0 < iVar26) {
      FUN_140848c80(&local_14d8,iVar26);
      iVar27 = local_14d0;
    }
    local_14d0 = iVar27 + iVar26;
    if (local_14cc < local_14d0) {
      TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(&local_14d8);
    }
    lVar18 = (longlong)(int)local_f68;
    local_1510 = local_f70;
    local_14d0 = (int)local_f68;
    if (((int)local_f68 == 0) && (local_14cc == 0)) {
      local_14cc = 0;
    }
    else {
      FUN_140615970(&local_14d8,local_f68 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(local_14d8,local_1510,lVar18 * 0x30);
    }
    local_1578 = 0;
    uVar36 = local_14b8 >> 0x20;
    local_14b8 = local_14b8 & 0xffffffff00000000;
    if ((int)uVar36 != local_14d0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&puStack_14c0);
      local_1578 = (int)local_14b8;
    }
    iVar26 = local_14d0;
    local_14b8 = CONCAT44(local_14b8._4_4_,local_1578 + local_14d0);
    if (local_14b8._4_4_ < local_1578 + local_14d0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&puStack_14c0);
    }
    _guard_xfg_dispatch_icall_nop(puStack_14c0 + local_1578,0,(longlong)iVar26);
    *puStack_14c0 = 1;
  }
  lVar18 = *param_2;
  local_15a8 = '\0';
  if ((((lVar18 == 0) || (*(int *)(param_1 + 600) == -1)) ||
      ((-1 < *(int *)(param_1 + 0x200) && (*(int *)(param_1 + 0x200) < *(int *)(lVar18 + 0x4c8)))))
     || (fVar44 = *(float *)(param_1 + 0x268) * *(float *)(param_1 + 0x268),
        *(float *)(lVar18 + 0x6b4) <= fVar44 && fVar44 != *(float *)(lVar18 + 0x6b4))) {
    bVar13 = false;
  }
  else {
    plVar28 = *(longlong **)(param_1 + 0x2c0);
    local_15a8 = '\x01';
    plVar29 = plVar28 + *(int *)(param_1 + 0x2c8);
    if (plVar28 == plVar29) {
      bVar13 = true;
    }
    else {
      do {
        if ((*(char *)(*plVar28 + 0xc) != '\0') || (*(int *)(*plVar28 + 0x10) == -1)) {
          bVar13 = false;
          local_15a8 = '\0';
          goto LAB_142c5051d;
        }
        plVar28 = plVar28 + 1;
      } while (plVar28 != plVar29);
      bVar13 = true;
    }
  }
LAB_142c5051d:
  local_12c8 = _DAT_1468b5b70;
  uStack_12c0 = uRam00000001468b5b78;
  local_12a8 = (float)_DAT_1468b5b90;
  fStack_12a4 = (float)((ulonglong)_DAT_1468b5b90 >> 0x20);
  fStack_12a0 = (float)uRam00000001468b5b98;
  fStack_129c = (float)((ulonglong)uRam00000001468b5b98 >> 0x20);
  local_1480 = 0;
  local_1478 = 0;
  local_12b8 = _DAT_1468b5b80;
  uStack_12b0 = uRam00000001468b5b88;
  plVar29 = param_2;
  if (bVar13) {
    lVar18 = (longlong)(local_1550 + -1) * 0x50 + *(longlong *)(param_1 + 0x178);
    if (*(char *)(lVar18 + 0xc) == '\0') {
      local_1508 = *(int *)(lVar18 + 0x10);
    }
    else if (*(int *)(lVar18 + 8) == -1) {
      local_1508 = -1;
    }
    else {
      local_1508 = *(int *)(*(longlong *)(lVar17 + 0x80) + (longlong)*(int *)(lVar18 + 8) * 4);
    }
    lVar18 = (longlong)local_1508;
    if (*(char *)(lVar18 + param_2[4]) == '\0') {
      FUN_14060c680(plVar41);
    }
    puVar19 = (undefined8 *)(lVar18 * 0x30 + *plVar41);
    local_3a8 = *puVar19;
    uStack_3a0 = puVar19[1];
    local_398 = puVar19[2];
    uStack_390 = puVar19[3];
    local_388 = puVar19[4];
    uStack_380 = puVar19[5];
    iVar26 = *(int *)(param_1 + 600);
    if (*(char *)((longlong)iVar26 + param_2[4]) == '\0') {
      FUN_14060c680(plVar41);
    }
    puVar19 = (undefined8 *)((longlong)iVar26 * 0x30 + *plVar41);
    local_3d8 = *puVar19;
    uStack_3d0 = puVar19[1];
    local_3c8 = puVar19[2];
    uStack_3c0 = puVar19[3];
    local_3b8 = puVar19[4];
    uStack_3b0 = puVar19[5];
    puVar19 = (undefined8 *)FUN_14162bcf0(&local_3d8,local_208,&local_3a8);
    local_14f8 = 0;
    local_12c8 = *puVar19;
    uStack_12c0 = puVar19[1];
    local_12b8 = puVar19[2];
    uStack_12b0 = puVar19[3];
    local_12a8 = (float)puVar19[4];
    fStack_12a4 = (float)((ulonglong)puVar19[4] >> 0x20);
    fStack_12a0 = (float)puVar19[5];
    fStack_129c = (float)((ulonglong)puVar19[5] >> 0x20);
    plVar28 = *(longlong **)(param_1 + 0x2c0);
    local_1588._0_8_ = plVar28;
    uVar36 = (longlong)*(int *)(param_1 + 0x2c8) & 0x1fffffffffffffff;
    if (plVar28 + *(int *)(param_1 + 0x2c8) < plVar28) {
      uVar36 = 0;
    }
    if (uVar36 != 0) {
      do {
        lVar18 = *plVar28;
        if (*(char *)(lVar18 + 0xc) == '\0') {
          iVar26 = *(int *)(lVar18 + 0x10);
        }
        else if (*(int *)(lVar18 + 8) == -1) {
          iVar26 = -1;
        }
        else {
          iVar26 = *(int *)(*(longlong *)(lVar17 + 0x80) + (longlong)*(int *)(lVar18 + 8) * 4);
        }
        if (*(char *)((longlong)iVar26 + param_2[4]) == '\0') {
          FUN_14060c680(plVar41);
        }
        puVar19 = (undefined8 *)((longlong)iVar26 * 0x30 + *plVar41);
        local_378 = *puVar19;
        uStack_370 = puVar19[1];
        local_368 = puVar19[2];
        uStack_360 = puVar19[3];
        local_358 = puVar19[4];
        uStack_350 = puVar19[5];
        puVar19 = (undefined8 *)FUN_14162bcf0(&local_378,local_1d8,&local_3d8);
        uVar35 = local_1478;
        lVar18 = (longlong)(int)local_1478;
        iVar26 = (int)local_1478 + 1;
        local_1478 = CONCAT44(local_1478._4_4_,iVar26);
        if (local_1478._4_4_ < iVar26) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_1480,uVar35 & 0xffffffff);
        }
        uVar24 = puVar19[1];
        plVar28 = (longlong *)(local_1588._0_8_ + 8);
        puVar33 = (undefined8 *)(lVar18 * 0x30 + local_1480);
        local_1588._0_8_ = plVar28;
        *puVar33 = *puVar19;
        puVar33[1] = uVar24;
        uVar24 = puVar19[3];
        puVar33[2] = puVar19[2];
        puVar33[3] = uVar24;
        uVar24 = puVar19[5];
        puVar33[4] = puVar19[4];
        puVar33[5] = uVar24;
        local_14f8 = local_14f8 + 1;
        param_3 = local_1248;
        plVar29 = local_1460;
        cVar43 = local_15a7;
      } while (local_14f8 != uVar36);
    }
  }
  iVar26 = 0;
  local_fa8._0_12_ = ZEXT812(0);
  local_fa8._12_4_ = fRam0000000146b2ebdc;
  local_f88 = CONCAT44((uint)fRam0000000146b2ebd4 & uRam0000000146b2ebe4,
                       (uint)_DAT_146b2ebd0 & _DAT_146b2ebe0);
  uStack_f80 = CONCAT44((uint)fRam0000000146b2ebdc & uRam0000000146b2ebec,
                        (uint)fRam0000000146b2ebd8 & uRam0000000146b2ebe8);
  local_f98 = ZEXT816(0);
  uVar40 = _DAT_146b2ebe0;
  uVar119 = uRam0000000146b2ebe4;
  uVar121 = uRam0000000146b2ebe8;
  uVar122 = uRam0000000146b2ebec;
  if (*(int *)(param_1 + 0x160) == -1) {
    if (0 < local_1550) {
      lVar18 = *(longlong *)(param_1 + 0x178);
      do {
        if (*(int *)(lVar18 + 8) != -1) {
          if (*(char *)(lVar18 + 0xc) == '\0') {
            iVar26 = *(int *)(lVar18 + 0x10);
          }
          else {
            iVar26 = *(int *)(*(longlong *)(lVar17 + 0x80) + (longlong)*(int *)(lVar18 + 8) * 4);
          }
          goto LAB_142c50861;
        }
        iVar26 = iVar26 + 1;
        lVar18 = lVar18 + 0x50;
      } while (iVar26 < local_1550);
    }
  }
  else {
    if (*(char *)(param_1 + 0x164) == '\0') {
      iVar26 = *(int *)(param_1 + 0x168);
    }
    else {
      iVar26 = *(int *)(*(longlong *)(lVar17 + 0x80) + (longlong)*(int *)(param_1 + 0x160) * 4);
    }
LAB_142c50861:
    if ((0 < iVar26) && (iVar26 < (int)plVar29[2])) {
      if (*(char *)((longlong)iVar26 + plVar29[4]) == '\0') {
        FUN_14060c680(plVar41);
      }
      uVar122 = uRam0000000146b2ebec;
      uVar121 = uRam0000000146b2ebe8;
      uVar119 = uRam0000000146b2ebe4;
      uVar40 = _DAT_146b2ebe0;
      pauVar20 = (undefined1 (*) [16])((longlong)iVar26 * 0x30 + *plVar41);
      local_fa8 = *pauVar20;
      local_f98 = pauVar20[1];
      local_f88 = *(undefined8 *)pauVar20[2];
      uStack_f80 = *(undefined8 *)(pauVar20[2] + 8);
      FUN_142c566f0(local_cb8,local_fa8,*(undefined1 *)(param_1 + 0x170));
    }
  }
  iVar26 = 0;
  local_15a5 = '\0';
  local_15a6 = '\0';
  fVar120 = 0.0;
  fVar44 = 0.0;
  fVar118 = 0.0;
  local_1448 = 0.0;
  fStack_1444 = 0.0;
  fStack_1440 = 0.0;
  fVar111 = (float)((uint)_DAT_146b2ebd0 & uVar40);
  fVar112 = (float)((uint)fRam0000000146b2ebd4 & uVar119);
  fVar113 = (float)((uint)fRam0000000146b2ebd8 & uVar121);
  fVar114 = (float)((uint)fRam0000000146b2ebdc & uVar122);
  local_558 = 0.0;
  fStack_554 = 0.0;
  fStack_550 = 0.0;
  local_528 = 0.0;
  fStack_524 = 0.0;
  fStack_520 = 0.0;
  fStack_51c = fRam0000000146b2ebdc;
  local_438 = 0.0;
  fStack_434 = 0.0;
  fStack_430 = 0.0;
  fStack_42c = fRam0000000146b2ebdc;
  local_4f8 = 0.0;
  fStack_4f4 = 0.0;
  fStack_4f0 = 0.0;
  fStack_4ec = fRam0000000146b2ebdc;
  local_4c8 = 0.0;
  fStack_4c4 = 0.0;
  fStack_4c0 = 0.0;
  fStack_4bc = fRam0000000146b2ebdc;
  local_468 = 0.0;
  fStack_464 = 0.0;
  fStack_460 = 0.0;
  fStack_45c = fRam0000000146b2ebdc;
  local_154c = 0.0;
  local_1438 = 0;
  uStack_1430 = 0;
  local_1428._4_4_ = fVar112;
  local_1428._0_4_ = fVar111;
  fStack_1420 = fVar113;
  fStack_141c = fVar114;
  local_548 = 0;
  uStack_540 = 0;
  local_538._4_4_ = fVar112;
  local_538._0_4_ = fVar111;
  uStack_530._0_4_ = fVar113;
  uStack_530._4_4_ = fVar114;
  local_518._0_4_ = 0.0;
  local_518._4_4_ = 0.0;
  uStack_510._0_4_ = 0.0;
  uStack_510._4_4_ = 0.0;
  local_508 = fVar111;
  fStack_504 = fVar112;
  fStack_500 = fVar113;
  fStack_4fc = fVar114;
  local_428 = 0;
  uStack_420 = 0;
  local_418._4_4_ = fVar112;
  local_418._0_4_ = fVar111;
  fStack_410 = fVar113;
  fStack_40c = fVar114;
  _local_4e8 = ZEXT816(0);
  local_4d8._4_4_ = fVar112;
  local_4d8._0_4_ = fVar111;
  fStack_4d0 = fVar113;
  fStack_4cc = fVar114;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4a8 = fVar111;
  local_458 = 0;
  uStack_450 = 0;
  local_448._4_4_ = fVar112;
  local_448._0_4_ = fVar111;
  fStack_440 = fVar113;
  fStack_43c = fVar114;
  local_1578 = 0;
  fStack_143c = fRam0000000146b2ebdc;
  fStack_54c = fRam0000000146b2ebdc;
  fStack_4a4 = fVar112;
  fStack_4a0 = fVar113;
  fStack_49c = fVar114;
  if (local_1550 < 1) goto LAB_142c56357;
  local_1510 = (void *)0x0;
  fVar81 = _DAT_146b2ebd0;
  fVar82 = fRam0000000146b2ebd4;
  fVar88 = fRam0000000146b2ebd8;
  fVar84 = fRam0000000146b2ebdc;
  fVar85 = fRam0000000146b2ebdc;
  iVar27 = local_1550;
  do {
    auVar38 = (undefined1  [8])((longlong)local_1510 * 0x50 + *(longlong *)(param_1 + 0x178));
    local_1568 = auVar38;
    if (*(int *)((longlong)auVar38 + 8) != -1) {
      if (*(char *)((longlong)auVar38 + 0xc) == '\0') {
        local_1558 = *(int *)((longlong)auVar38 + 0x10);
      }
      else {
        local_1558 = *(int *)(*(longlong *)(lVar17 + 0x80) +
                             (longlong)*(int *)((longlong)auVar38 + 8) * 4);
      }
      FBoneContainer::GetParentBoneIndex(lVar17,&local_1554,&local_1558);
      lVar17 = local_1488;
      if ((local_1554 != iVar26) && (iVar26 != 0)) {
        local_478 = (int *)0x0;
        local_46c = 0;
        uVar36 = 0;
        iVar27 = 0;
        do {
          local_470 = iVar27 + 1;
          if (local_46c < local_470) {
            FUN_140a95f50(local_498,iVar27);
          }
          piVar21 = local_498;
          if (local_478 != (int *)0x0) {
            piVar21 = local_478;
          }
          piVar21[iVar27] = local_1554;
          piVar21 = (int *)FBoneContainer::GetParentBoneIndex(lVar17,local_fc8,&local_1554);
          param_3 = local_1248;
          cVar43 = local_15a7;
          local_1554 = *piVar21;
        } while ((local_1554 != iVar26) && (iVar27 = local_470, local_1554 != 0));
        auVar48._8_8_ = 0;
        auVar48._0_8_ = local_1588._8_8_;
        local_1588 = auVar48 << 0x40;
        piVar21 = local_498;
        if (local_478 != (int *)0x0) {
          piVar21 = local_478;
        }
        local_14f8 = (longlong)local_470 & 0x3fffffffffffffff;
        if (piVar21 + local_470 < piVar21) {
          local_14f8 = uVar36;
        }
        if (local_14f8 != 0) {
          do {
            iVar26 = *piVar21;
            lVar17 = (longlong)iVar26;
            if (local_15a6 == '\0') {
              if (*(char *)(lVar17 + local_1460[4]) == '\0') {
                FUN_14060c680(local_1458,iVar26);
              }
              lVar18 = *local_1458;
              puVar19 = (undefined8 *)(lVar18 + lVar17 * 0x30);
              uVar24 = *puVar19;
              uVar4 = puVar19[1];
              local_558 = (float)uVar24;
              fStack_554 = (float)((ulonglong)uVar24 >> 0x20);
              fStack_550 = (float)uVar4;
              fStack_54c = (float)((ulonglong)uVar4 >> 0x20);
              puVar19 = (undefined8 *)(lVar18 + 0x10 + lVar17 * 0x30);
              local_548 = *puVar19;
              uStack_540 = puVar19[1];
              _local_538 = *(undefined1 (*) [16])(lVar18 + 0x20 + lVar17 * 0x30);
              if (cVar43 != '\0') {
                if (puStack_14c0[lVar17] == '\0') {
                  FUN_14060c680(&local_14d8,iVar26);
                }
                puVar19 = (undefined8 *)((longlong)local_14d8 + lVar17 * 0x30);
                uVar24 = *puVar19;
                uVar4 = puVar19[1];
                local_4f8 = (float)uVar24;
                fStack_4f4 = (float)((ulonglong)uVar24 >> 0x20);
                fStack_4f0 = (float)uVar4;
                fStack_4ec = (float)((ulonglong)uVar4 >> 0x20);
                _local_4e8 = *(undefined1 (*) [16])((longlong)local_14d8 + lVar17 * 0x30 + 0x10);
                _local_4d8 = *(undefined1 (*) [16])((longlong)local_14d8 + lVar17 * 0x30 + 0x20);
              }
              pfVar22 = &local_4f8;
              if (cVar43 == '\0') {
                pfVar22 = &local_558;
              }
              uVar24 = FUN_142c566f0(local_cc4,pfVar22,*(undefined1 *)(param_1 + 0x170));
              lVar17 = FVector::Rotation(uVar24,local_cd0);
              local_15a6 = '\x01';
              local_154c = *(float *)(lVar17 + 4);
              uVar36 = local_1588._0_8_;
              plVar41 = local_1458;
            }
            else {
              plVar29 = plVar41;
              pfVar22 = (float *)FCSPose<FCompactPose>::GetLocalSpaceTransform
                                           (plVar41,local_1a8,iVar26);
              fVar88 = fRam0000000146b2fa68;
              fVar82 = fRam0000000146b2fa64;
              fVar81 = _DAT_146b2fa60;
              fVar120 = fRam0000000146b2ebd8;
              fVar118 = fRam0000000146b2ebd4;
              fVar114 = _DAT_146b2ebd0;
              fVar44 = local_538._0_4_;
              fVar111 = local_538._4_4_;
              fVar112 = local_538._8_4_;
              fVar113 = local_538._12_4_;
              auVar48 = *(undefined1 (*) [16])(pfVar22 + 8);
              auVar45 = minps(auVar48,_local_538);
              auVar46._4_4_ = -(uint)(auVar45._4_4_ < fRam0000000146b2fa64);
              auVar46._0_4_ = -(uint)(auVar45._0_4_ < _DAT_146b2fa60);
              auVar46._8_4_ = -(uint)(auVar45._8_4_ < fRam0000000146b2fa68);
              auVar46._12_4_ = -(uint)(auVar45._12_4_ < fRam0000000146b2fa6c);
              iVar27 = movmskps((int)plVar29,auVar46);
              if (iVar27 == 0) {
                fVar114 = *pfVar22;
                fVar118 = pfVar22[1];
                fVar120 = pfVar22[2];
                fVar81 = pfVar22[3];
                fVar82 = pfVar22[4] * fVar44;
                fVar88 = pfVar22[5] * fVar111;
                fVar84 = pfVar22[6] * fVar112;
                fVar85 = pfVar22[7] * fVar113;
                fVar89 = fVar81 * local_558 * _DAT_146b2eca0 + fStack_54c * fVar114 +
                         fVar120 * fStack_554 * _DAT_146b2ec90 +
                         fVar118 * fStack_550 * _DAT_146b2ec80;
                fVar91 = fVar120 * local_558 * fRam0000000146b2eca4 + fStack_54c * fVar118 +
                         fVar81 * fStack_554 * fRam0000000146b2ec94 +
                         fVar114 * fStack_550 * fRam0000000146b2ec84;
                fVar109 = fVar118 * local_558 * fRam0000000146b2eca8 + fStack_54c * fVar120 +
                          fVar114 * fStack_554 * fRam0000000146b2ec98 +
                          fVar81 * fStack_550 * fRam0000000146b2ec88;
                fVar110 = fVar114 * local_558 * fRam0000000146b2ecac + fStack_54c * fVar81 +
                          fVar118 * fStack_554 * fRam0000000146b2ec9c +
                          fVar120 * fStack_550 * fRam0000000146b2ec8c;
                fVar114 = fVar84 * fStack_554 - fVar88 * fStack_550;
                fVar118 = fVar82 * fStack_550 - fVar84 * local_558;
                fVar120 = fVar88 * local_558 - fVar82 * fStack_554;
                fVar81 = fVar85 * fStack_54c - fVar85 * fStack_54c;
                fVar114 = fVar114 + fVar114;
                fVar118 = fVar118 + fVar118;
                fVar120 = fVar120 + fVar120;
                fVar81 = fVar81 + fVar81;
                local_548._0_4_ =
                     (fVar120 * fStack_554 - fVar118 * fStack_550) + fVar114 * fStack_54c + fVar82 +
                     (float)local_548;
                local_548._4_4_ =
                     (fVar114 * fStack_550 - fVar120 * local_558) + fVar118 * fStack_54c + fVar88 +
                     local_548._4_4_;
                uStack_540._0_4_ =
                     (fVar118 * local_558 - fVar114 * fStack_554) + fVar120 * fStack_54c + fVar84 +
                     (float)uStack_540;
                uStack_540._4_4_ =
                     (fVar81 * fStack_54c - fVar81 * fStack_54c) + fVar81 * fStack_54c + fVar85 +
                     uStack_540._4_4_;
              }
              else {
                fVar84 = fStack_554 + fStack_554;
                fVar89 = fStack_550 + fStack_550;
                fVar91 = (local_558 + local_558) * local_558;
                fVar85 = (local_558 + local_558) * fStack_54c;
                fStack_bf4 = (fVar89 * fStack_54c + fVar84 * local_558) * fVar44;
                fStack_be0 = (fVar85 + fVar89 * fStack_554) * fVar111;
                local_bd8 = (fVar84 * fStack_54c + fVar89 * local_558) * fVar112;
                local_be8 = fVar111 * (fVar84 * local_558 - fVar89 * fStack_54c);
                fStack_bd4 = fVar112 * (fVar89 * fStack_554 - fVar85);
                fStack_bf0 = fVar44 * (fVar89 * local_558 - fVar84 * fStack_54c);
                local_bf8 = (float)((uint)((_DAT_146b2ebd0 -
                                           (fVar89 * fStack_550 + fVar84 * fStack_554)) * fVar44) &
                                   _DAT_146b2ebe0);
                fStack_be4 = (float)((uint)((fRam0000000146b2ebd4 - (fVar89 * fStack_550 + fVar91))
                                           * fVar111) & uRam0000000146b2ebe4);
                fStack_bd0 = (float)((uint)((fRam0000000146b2ebd8 - (fVar84 * fStack_554 + fVar91))
                                           * fVar112) & uRam0000000146b2ebe8);
                fStack_bec = (float)((uint)((fRam0000000146b2ebdc - (fVar91 + fVar91)) * fVar113) &
                                    uRam0000000146b2ebec);
                local_bc8 = (float)local_548;
                fStack_bc4 = local_548._4_4_;
                fStack_bc0 = (float)uStack_540;
                fStack_bbc = fRam0000000146b2ebdc;
                fVar84 = *pfVar22;
                fVar85 = pfVar22[1];
                fVar89 = pfVar22[2];
                fVar91 = pfVar22[3];
                fVar77 = fVar85 + fVar85;
                fVar78 = fVar89 + fVar89;
                fVar92 = fVar84 * (fVar84 + fVar84);
                fVar86 = fVar91 * (fVar84 + fVar84);
                fVar109 = pfVar22[8];
                fVar110 = pfVar22[9];
                fVar90 = pfVar22[10];
                fStack_bb4 = (fVar91 * fVar78 + fVar84 * fVar77) * fVar109;
                fStack_ba0 = (fVar86 + fVar85 * fVar78) * fVar110;
                local_b98 = (fVar91 * fVar77 + fVar84 * fVar78) * fVar90;
                local_ba8 = fVar110 * (fVar84 * fVar77 - fVar91 * fVar78);
                fStack_b94 = fVar90 * (fVar85 * fVar78 - fVar86);
                fStack_bb0 = fVar109 * (fVar84 * fVar78 - fVar91 * fVar77);
                local_bb8 = (float)((uint)((_DAT_146b2ebd0 - (fVar89 * fVar78 + fVar85 * fVar77)) *
                                          fVar109) & _DAT_146b2ebe0);
                fStack_ba4 = (float)((uint)((fRam0000000146b2ebd4 - (fVar89 * fVar78 + fVar92)) *
                                           fVar110) & uRam0000000146b2ebe4);
                fStack_b90 = (float)((uint)((fRam0000000146b2ebd8 - (fVar85 * fVar77 + fVar92)) *
                                           fVar90) & uRam0000000146b2ebe8);
                fStack_bac = (float)((uint)((fRam0000000146b2ebdc - (fVar92 + fVar92)) *
                                           pfVar22[0xb]) & uRam0000000146b2ebec);
                local_b88 = pfVar22[4];
                fStack_b84 = pfVar22[5];
                fStack_b80 = pfVar22[6];
                fStack_b7c = fRam0000000146b2ebdc;
                local_1348 = fStack_bb4 * local_be8 + local_bb8 * local_bf8 + fStack_bb0 * local_bd8
                             + fStack_bac * (float)local_548;
                fStack_1344 = fStack_bb4 * fStack_be4 + local_bb8 * fStack_bf4 +
                              fStack_bb0 * fStack_bd4 + fStack_bac * local_548._4_4_;
                fStack_1340 = fStack_bb4 * fStack_be0 + local_bb8 * fStack_bf0 +
                              fStack_bb0 * fStack_bd0 + fStack_bac * (float)uStack_540;
                fStack_133c = fStack_bb4 * fStack_bec + local_bb8 * fStack_bec +
                              fStack_bb0 * fStack_bec + fStack_bac * fRam0000000146b2ebdc;
                local_1338 = fStack_ba4 * local_be8 + local_ba8 * local_bf8 + fStack_ba0 * local_bd8
                             + fStack_bac * (float)local_548;
                fStack_1334 = fStack_ba4 * fStack_be4 + local_ba8 * fStack_bf4 +
                              fStack_ba0 * fStack_bd4 + fStack_bac * local_548._4_4_;
                fStack_1330 = fStack_ba4 * fStack_be0 + local_ba8 * fStack_bf0 +
                              fStack_ba0 * fStack_bd0 + fStack_bac * (float)uStack_540;
                fStack_132c = fStack_ba4 * fStack_bec + local_ba8 * fStack_bec +
                              fStack_ba0 * fStack_bec + fStack_bac * fRam0000000146b2ebdc;
                local_1328 = fStack_b94 * local_be8 + local_b98 * local_bf8 + fStack_b90 * local_bd8
                             + fStack_bac * (float)local_548;
                fStack_1324 = fStack_b94 * fStack_be4 + local_b98 * fStack_bf4 +
                              fStack_b90 * fStack_bd4 + fStack_bac * local_548._4_4_;
                fStack_1320 = fStack_b94 * fStack_be0 + local_b98 * fStack_bf0 +
                              fStack_b90 * fStack_bd0 + fStack_bac * (float)uStack_540;
                fStack_131c = fStack_b94 * fStack_bec + local_b98 * fStack_bec +
                              fStack_b90 * fStack_bec + fStack_bac * fRam0000000146b2ebdc;
                local_1318 = fStack_b84 * local_be8 + local_b88 * local_bf8 + fStack_b80 * local_bd8
                             + fRam0000000146b2ebdc * (float)local_548;
                fStack_1314 = fStack_b84 * fStack_be4 + local_b88 * fStack_bf4 +
                              fStack_b80 * fStack_bd4 + fRam0000000146b2ebdc * local_548._4_4_;
                fStack_1310 = fStack_b84 * fStack_be0 + local_b88 * fStack_bf0 +
                              fStack_b80 * fStack_bd0 + fRam0000000146b2ebdc * (float)uStack_540;
                fStack_130c = fStack_b84 * fStack_bec + local_b88 * fStack_bec +
                              fStack_b80 * fStack_bec + fRam0000000146b2ebdc * fRam0000000146b2ebdc;
                fStack_bdc = fStack_bec;
                fStack_bcc = fStack_bec;
                fStack_b9c = fStack_bac;
                fStack_b8c = fStack_bac;
                FMatrix::RemoveScaling(&local_1348);
                fVar114 = (float)(-(uint)(fVar81 <= auVar48._0_4_ * fVar44) &
                                  (_DAT_146b2fa50 ^ (uint)fVar114) ^ _DAT_146b2fa50);
                fVar118 = (float)(-(uint)(fVar82 <= auVar48._4_4_ * fVar111) &
                                  (uRam0000000146b2fa54 ^ (uint)fVar118) ^ uRam0000000146b2fa54);
                fVar120 = (float)(-(uint)(fVar88 <= auVar48._8_4_ * fVar112) &
                                  (uRam0000000146b2fa58 ^ (uint)fVar120) ^ uRam0000000146b2fa58);
                local_1348 = local_1348 * fVar114;
                fStack_1344 = fStack_1344 * fVar114;
                fStack_1340 = fStack_1340 * fVar114;
                fStack_1334 = fStack_1334 * fVar118;
                fStack_1330 = fStack_1330 * fVar118;
                local_1338 = local_1338 * fVar118;
                fStack_1324 = fStack_1324 * fVar120;
                fStack_1320 = fStack_1320 * fVar120;
                local_1328 = local_1328 * fVar120;
                FQuat::FQuat(&local_ef8,&local_1348);
                local_15a0 = 1e-08;
                auVar45._0_4_ = local_ef8 * local_ef8 + fStack_ef0 * fStack_ef0;
                auVar45._4_4_ = fStack_ef4 * fStack_ef4 + fStack_eec * fStack_eec;
                auVar45._8_4_ = fStack_ef0 * fStack_ef0 + local_ef8 * local_ef8;
                auVar45._12_4_ = fStack_eec * fStack_eec + fStack_ef4 * fStack_ef4;
                auVar95._0_4_ = auVar45._4_4_ + auVar45._0_4_;
                auVar95._4_4_ = auVar45._8_4_ + auVar45._4_4_;
                auVar95._8_4_ = auVar45._12_4_ + auVar45._8_4_;
                auVar95._12_4_ = auVar45._0_4_ + auVar45._12_4_;
                auVar45 = rsqrtps(auVar45,auVar95);
                fVar114 = auVar45._0_4_;
                fVar118 = auVar45._4_4_;
                fVar120 = auVar45._8_4_;
                fVar81 = auVar45._12_4_;
                fVar114 = (_DAT_146b2ec70 - fVar114 * fVar114 * auVar95._0_4_ * _DAT_146b2ec70) *
                          fVar114 + fVar114;
                fVar118 = (fRam0000000146b2ec74 -
                          fVar118 * fVar118 * auVar95._4_4_ * fRam0000000146b2ec74) * fVar118 +
                          fVar118;
                fVar120 = (fRam0000000146b2ec78 -
                          fVar120 * fVar120 * auVar95._8_4_ * fRam0000000146b2ec78) * fVar120 +
                          fVar120;
                fVar81 = (fRam0000000146b2ec7c -
                         fVar81 * fVar81 * auVar95._12_4_ * fRam0000000146b2ec7c) * fVar81 + fVar81;
                fVar89 = (float)(((uint)(((_DAT_146b2ec70 -
                                          fVar114 * fVar114 * auVar95._0_4_ * _DAT_146b2ec70) *
                                          fVar114 + fVar114) * local_ef8) ^ _DAT_146b2ec60) &
                                 -(uint)(1e-08 <= auVar95._0_4_) ^ _DAT_146b2ec60);
                fVar91 = (float)(((uint)(((fRam0000000146b2ec74 -
                                          fVar118 * fVar118 * auVar95._4_4_ * fRam0000000146b2ec74)
                                          * fVar118 + fVar118) * fStack_ef4) ^ uRam0000000146b2ec64)
                                 & -(uint)(1e-08 <= auVar95._4_4_) ^ uRam0000000146b2ec64);
                fVar109 = (float)(((uint)(((fRam0000000146b2ec78 -
                                           fVar120 * fVar120 * auVar95._8_4_ * fRam0000000146b2ec78)
                                           * fVar120 + fVar120) * fStack_ef0) ^ uRam0000000146b2ec68
                                  ) & -(uint)(1e-08 <= auVar95._8_4_) ^ uRam0000000146b2ec68);
                fVar110 = (float)(((uint)(((fRam0000000146b2ec7c -
                                           fVar81 * fVar81 * auVar95._12_4_ * fRam0000000146b2ec7c)
                                           * fVar81 + fVar81) * fStack_eec) ^ uRam0000000146b2ec6c)
                                  & -(uint)(1e-08 <= auVar95._12_4_) ^ uRam0000000146b2ec6c);
                uStack_540._4_4_ = 0.0;
                local_548._0_4_ = local_1318;
                local_548._4_4_ = fStack_1314;
                uStack_540._0_4_ = fStack_1310;
                local_ef8 = fVar89;
                fStack_ef4 = fVar91;
                fStack_ef0 = fVar109;
                fStack_eec = fVar110;
              }
              local_538._4_4_ = auVar48._4_4_ * fVar111;
              local_538._0_4_ = auVar48._0_4_ * fVar44;
              uStack_530._0_4_ = auVar48._8_4_ * fVar112;
              uStack_530._4_4_ = auVar48._12_4_ * fVar113;
              local_558 = fVar89;
              fStack_554 = fVar91;
              fStack_550 = fVar109;
              fStack_54c = fVar110;
              if (cVar43 != '\0') {
                ppvVar30 = &local_14d8;
                pfVar22 = (float *)FCSPose<FCompactPose>::GetLocalSpaceTransform
                                             (&local_14d8,local_178,iVar26);
                fVar91 = fStack_4ec;
                fVar89 = fStack_4f0;
                fVar85 = fStack_4f4;
                fVar84 = local_4f8;
                fVar88 = fRam0000000146b2fa68;
                fVar82 = fRam0000000146b2fa64;
                fVar81 = _DAT_146b2fa60;
                fVar120 = fRam0000000146b2ebd8;
                fVar118 = fRam0000000146b2ebd4;
                fVar114 = _DAT_146b2ebd0;
                fVar44 = local_4d8._0_4_;
                fVar111 = local_4d8._4_4_;
                fVar112 = local_4d8._8_4_;
                fVar113 = local_4d8._12_4_;
                auVar48 = *(undefined1 (*) [16])(pfVar22 + 8);
                auVar45 = minps(auVar48,_local_4d8);
                auVar47._4_4_ = -(uint)(auVar45._4_4_ < fRam0000000146b2fa64);
                auVar47._0_4_ = -(uint)(auVar45._0_4_ < _DAT_146b2fa60);
                auVar47._8_4_ = -(uint)(auVar45._8_4_ < fRam0000000146b2fa68);
                auVar47._12_4_ = -(uint)(auVar45._12_4_ < fRam0000000146b2fa6c);
                iVar27 = movmskps((int)ppvVar30,auVar47);
                if (iVar27 == 0) {
                  fVar114 = *pfVar22;
                  fVar118 = pfVar22[1];
                  fVar120 = pfVar22[2];
                  fVar81 = pfVar22[3];
                  fVar80 = fVar120 * local_4f8;
                  fVar83 = fVar118 * local_4f8;
                  fVar93 = fVar114 * local_4f8;
                  fVar86 = pfVar22[4] * fVar44;
                  fVar92 = pfVar22[5] * fVar111;
                  fVar79 = pfVar22[6] * fVar112;
                  fVar87 = pfVar22[7] * fVar113;
                  fVar109 = fVar114 * fStack_4f4;
                  fVar90 = fVar118 * fStack_4f4;
                  fVar78 = fVar120 * fStack_4f0;
                  local_4d8._4_4_ = auVar48._4_4_ * fVar111;
                  local_4d8._0_4_ = auVar48._0_4_ * fVar44;
                  fStack_4d0 = auVar48._8_4_ * fVar112;
                  fStack_4cc = auVar48._12_4_ * fVar113;
                  fVar44 = fVar92 * fStack_4f0;
                  fVar111 = fVar79 * local_4f8;
                  fVar112 = fVar86 * fStack_4f4;
                  fVar113 = fVar87 * fStack_4ec;
                  fVar82 = fVar79 * fStack_4f4;
                  fVar88 = fVar86 * fStack_4f0;
                  fVar110 = fVar92 * local_4f8;
                  fVar77 = fVar87 * fStack_4ec;
                  local_4f8 = fVar81 * local_4f8 * _DAT_146b2eca0 + fStack_4ec * fVar114 +
                              fVar120 * fStack_4f4 * _DAT_146b2ec90 +
                              fVar118 * fStack_4f0 * _DAT_146b2ec80;
                  fStack_4f4 = fVar80 * fRam0000000146b2eca4 + fStack_4ec * fVar118 +
                               fVar81 * fStack_4f4 * fRam0000000146b2ec94 +
                               fVar114 * fStack_4f0 * fRam0000000146b2ec84;
                  fStack_4f0 = fVar83 * fRam0000000146b2eca8 + fStack_4ec * fVar120 +
                               fVar109 * fRam0000000146b2ec98 +
                               fVar81 * fStack_4f0 * fRam0000000146b2ec88;
                  fStack_4ec = fVar93 * fRam0000000146b2ecac + fStack_4ec * fVar81 +
                               fVar90 * fRam0000000146b2ec9c + fVar78 * fRam0000000146b2ec8c;
                  fVar82 = fVar82 - fVar44;
                  fVar88 = fVar88 - fVar111;
                  fVar110 = fVar110 - fVar112;
                  fVar77 = fVar77 - fVar113;
                  fVar82 = fVar82 + fVar82;
                  fVar88 = fVar88 + fVar88;
                  fVar110 = fVar110 + fVar110;
                  fVar77 = fVar77 + fVar77;
                  local_4e8._4_4_ =
                       (fVar82 * fVar89 - fVar110 * fVar84) + fVar91 * fVar88 + fVar92 +
                       (float)local_4e8._4_4_;
                  local_4e8._0_4_ =
                       (fVar110 * fVar85 - fVar88 * fVar89) + fVar91 * fVar82 + fVar86 +
                       (float)local_4e8._0_4_;
                  fStack_4e0 = (fVar88 * fVar84 - fVar82 * fVar85) + fVar91 * fVar110 + fVar79 +
                               fStack_4e0;
                  fStack_4dc = (fVar77 * fVar91 - fVar77 * fVar91) + fVar91 * fVar77 + fVar87 +
                               fStack_4dc;
                }
                else {
                  fVar84 = fStack_4f4 + fStack_4f4;
                  fVar89 = fStack_4f0 + fStack_4f0;
                  fVar78 = auVar48._0_4_ * fVar44;
                  fVar86 = auVar48._4_4_ * fVar111;
                  fVar92 = auVar48._8_4_ * fVar112;
                  fVar91 = (local_4f8 + local_4f8) * local_4f8;
                  fVar85 = (local_4f8 + local_4f8) * fStack_4ec;
                  fStack_b74 = (fVar89 * fStack_4ec + fVar84 * local_4f8) * fVar44;
                  fStack_b60 = (fVar85 + fVar89 * fStack_4f4) * fVar111;
                  local_b58 = (fVar84 * fStack_4ec + fVar89 * local_4f8) * fVar112;
                  local_b68 = fVar111 * (fVar84 * local_4f8 - fVar89 * fStack_4ec);
                  fStack_b54 = fVar112 * (fVar89 * fStack_4f4 - fVar85);
                  fStack_b70 = fVar44 * (fVar89 * local_4f8 - fVar84 * fStack_4ec);
                  local_b78 = (float)((uint)((_DAT_146b2ebd0 -
                                             (fVar89 * fStack_4f0 + fVar84 * fStack_4f4)) * fVar44)
                                     & _DAT_146b2ebe0);
                  fStack_b64 = (float)((uint)((fRam0000000146b2ebd4 - (fVar89 * fStack_4f0 + fVar91)
                                              ) * fVar111) & uRam0000000146b2ebe4);
                  fStack_b50 = (float)((uint)((fRam0000000146b2ebd8 - (fVar84 * fStack_4f4 + fVar91)
                                              ) * fVar112) & uRam0000000146b2ebe8);
                  fStack_b6c = (float)((uint)((fRam0000000146b2ebdc - (fVar91 + fVar91)) * fVar113)
                                      & uRam0000000146b2ebec);
                  local_b48 = (float)local_4e8._0_4_;
                  fStack_b44 = (float)local_4e8._4_4_;
                  fStack_b40 = fStack_4e0;
                  fStack_b3c = fRam0000000146b2ebdc;
                  fVar44 = *pfVar22;
                  fVar111 = pfVar22[1];
                  fVar112 = pfVar22[2];
                  fVar84 = pfVar22[3];
                  fVar109 = fVar111 + fVar111;
                  fVar90 = fVar112 + fVar112;
                  fVar77 = (fVar44 + fVar44) * fVar44;
                  fVar110 = (fVar44 + fVar44) * fVar84;
                  fVar85 = pfVar22[8];
                  fVar89 = pfVar22[9];
                  fVar91 = pfVar22[10];
                  fStack_b34 = (fVar90 * fVar84 + fVar109 * fVar44) * fVar85;
                  fStack_b20 = (fVar110 + fVar90 * fVar111) * fVar89;
                  local_b18 = (fVar109 * fVar84 + fVar90 * fVar44) * fVar91;
                  local_b28 = fVar89 * (fVar109 * fVar44 - fVar90 * fVar84);
                  fStack_b14 = fVar91 * (fVar90 * fVar111 - fVar110);
                  fStack_b30 = fVar85 * (fVar90 * fVar44 - fVar109 * fVar84);
                  local_b38 = (float)((uint)((_DAT_146b2ebd0 -
                                             (fVar90 * fVar112 + fVar109 * fVar111)) * fVar85) &
                                     _DAT_146b2ebe0);
                  fStack_b24 = (float)((uint)((fRam0000000146b2ebd4 - (fVar90 * fVar112 + fVar77)) *
                                             fVar89) & uRam0000000146b2ebe4);
                  fStack_b10 = (float)((uint)((fRam0000000146b2ebd8 - (fVar109 * fVar111 + fVar77))
                                             * fVar91) & uRam0000000146b2ebe8);
                  fStack_b2c = (float)((uint)((fRam0000000146b2ebdc - (fVar77 + fVar77)) *
                                             pfVar22[0xb]) & uRam0000000146b2ebec);
                  local_b08 = pfVar22[4];
                  fStack_b04 = pfVar22[5];
                  fStack_b00 = pfVar22[6];
                  fStack_afc = fRam0000000146b2ebdc;
                  local_1388 = fStack_b34 * local_b68 + local_b38 * local_b78 +
                               fStack_b30 * local_b58 + fStack_b2c * (float)local_4e8._0_4_;
                  fStack_1384 = fStack_b34 * fStack_b64 + local_b38 * fStack_b74 +
                                fStack_b30 * fStack_b54 + fStack_b2c * (float)local_4e8._4_4_;
                  fStack_1380 = fStack_b34 * fStack_b60 + local_b38 * fStack_b70 +
                                fStack_b30 * fStack_b50 + fStack_b2c * fStack_4e0;
                  fStack_137c = fStack_b34 * fStack_b6c + local_b38 * fStack_b6c +
                                fStack_b30 * fStack_b6c + fStack_b2c * fRam0000000146b2ebdc;
                  local_1378 = fStack_b24 * local_b68 + local_b28 * local_b78 +
                               fStack_b20 * local_b58 + fStack_b2c * (float)local_4e8._0_4_;
                  fStack_1374 = fStack_b24 * fStack_b64 + local_b28 * fStack_b74 +
                                fStack_b20 * fStack_b54 + fStack_b2c * (float)local_4e8._4_4_;
                  fStack_1370 = fStack_b24 * fStack_b60 + local_b28 * fStack_b70 +
                                fStack_b20 * fStack_b50 + fStack_b2c * fStack_4e0;
                  fStack_136c = fStack_b24 * fStack_b6c + local_b28 * fStack_b6c +
                                fStack_b20 * fStack_b6c + fStack_b2c * fRam0000000146b2ebdc;
                  local_1368 = fStack_b14 * local_b68 + local_b18 * local_b78 +
                               fStack_b10 * local_b58 + fStack_b2c * (float)local_4e8._0_4_;
                  fStack_1364 = fStack_b14 * fStack_b64 + local_b18 * fStack_b74 +
                                fStack_b10 * fStack_b54 + fStack_b2c * (float)local_4e8._4_4_;
                  fStack_1360 = fStack_b14 * fStack_b60 + local_b18 * fStack_b70 +
                                fStack_b10 * fStack_b50 + fStack_b2c * fStack_4e0;
                  fStack_135c = fStack_b14 * fStack_b6c + local_b18 * fStack_b6c +
                                fStack_b10 * fStack_b6c + fStack_b2c * fRam0000000146b2ebdc;
                  local_1358 = fStack_b04 * local_b68 + local_b08 * local_b78 +
                               fStack_b00 * local_b58 +
                               fRam0000000146b2ebdc * (float)local_4e8._0_4_;
                  fStack_1354 = fStack_b04 * fStack_b64 + local_b08 * fStack_b74 +
                                fStack_b00 * fStack_b54 +
                                fRam0000000146b2ebdc * (float)local_4e8._4_4_;
                  fStack_1350 = fStack_b04 * fStack_b60 + local_b08 * fStack_b70 +
                                fStack_b00 * fStack_b50 + fRam0000000146b2ebdc * fStack_4e0;
                  fStack_134c = fStack_b04 * fStack_b6c + local_b08 * fStack_b6c +
                                fStack_b00 * fStack_b6c +
                                fRam0000000146b2ebdc * fRam0000000146b2ebdc;
                  fStack_b5c = fStack_b6c;
                  fStack_b4c = fStack_b6c;
                  fStack_b1c = fStack_b2c;
                  fStack_b0c = fStack_b2c;
                  FMatrix::RemoveScaling(&local_1388);
                  fVar44 = (float)(-(uint)(fVar81 <= fVar78) & (_DAT_146b2fa50 ^ (uint)fVar114) ^
                                  _DAT_146b2fa50);
                  fVar111 = (float)(-(uint)(fVar82 <= fVar86) &
                                    (uRam0000000146b2fa54 ^ (uint)fVar118) ^ uRam0000000146b2fa54);
                  fVar112 = (float)(-(uint)(fVar88 <= fVar92) &
                                    (uRam0000000146b2fa58 ^ (uint)fVar120) ^ uRam0000000146b2fa58);
                  local_1388 = local_1388 * fVar44;
                  fStack_1384 = fStack_1384 * fVar44;
                  fStack_1380 = fStack_1380 * fVar44;
                  fStack_1374 = fStack_1374 * fVar111;
                  fStack_1370 = fStack_1370 * fVar111;
                  local_1378 = local_1378 * fVar111;
                  fStack_1364 = fStack_1364 * fVar112;
                  fStack_1360 = fStack_1360 * fVar112;
                  local_1368 = local_1368 * fVar112;
                  FQuat::FQuat(&local_ed8,&local_1388);
                  local_15a0 = 1e-08;
                  auVar64._0_4_ = local_ed8 * local_ed8 + fStack_ed0 * fStack_ed0;
                  auVar64._4_4_ = fStack_ed4 * fStack_ed4 + fStack_ecc * fStack_ecc;
                  auVar64._8_4_ = fStack_ed0 * fStack_ed0 + local_ed8 * local_ed8;
                  auVar64._12_4_ = fStack_ecc * fStack_ecc + fStack_ed4 * fStack_ed4;
                  auVar96._0_4_ = auVar64._4_4_ + auVar64._0_4_;
                  auVar96._4_4_ = auVar64._8_4_ + auVar64._4_4_;
                  auVar96._8_4_ = auVar64._12_4_ + auVar64._8_4_;
                  auVar96._12_4_ = auVar64._0_4_ + auVar64._12_4_;
                  auVar45 = rsqrtps(auVar64,auVar96);
                  fVar44 = auVar45._0_4_;
                  fVar111 = auVar45._4_4_;
                  fVar112 = auVar45._8_4_;
                  fVar114 = auVar45._12_4_;
                  fVar44 = (_DAT_146b2ec70 - fVar44 * fVar44 * auVar96._0_4_ * _DAT_146b2ec70) *
                           fVar44 + fVar44;
                  fVar111 = (fRam0000000146b2ec74 -
                            fVar111 * fVar111 * auVar96._4_4_ * fRam0000000146b2ec74) * fVar111 +
                            fVar111;
                  fVar112 = (fRam0000000146b2ec78 -
                            fVar112 * fVar112 * auVar96._8_4_ * fRam0000000146b2ec78) * fVar112 +
                            fVar112;
                  fVar114 = (fRam0000000146b2ec7c -
                            fVar114 * fVar114 * auVar96._12_4_ * fRam0000000146b2ec7c) * fVar114 +
                            fVar114;
                  local_ed8 = (float)(((uint)(((_DAT_146b2ec70 -
                                               fVar44 * fVar44 * auVar96._0_4_ * _DAT_146b2ec70) *
                                               fVar44 + fVar44) * local_ed8) ^ _DAT_146b2ec60) &
                                      -(uint)(1e-08 <= auVar96._0_4_) ^ _DAT_146b2ec60);
                  fStack_ed4 = (float)(((uint)(((fRam0000000146b2ec74 -
                                                fVar111 * fVar111 *
                                                auVar96._4_4_ * fRam0000000146b2ec74) * fVar111 +
                                               fVar111) * fStack_ed4) ^ uRam0000000146b2ec64) &
                                       -(uint)(1e-08 <= auVar96._4_4_) ^ uRam0000000146b2ec64);
                  fStack_ed0 = (float)(((uint)(((fRam0000000146b2ec78 -
                                                fVar112 * fVar112 *
                                                auVar96._8_4_ * fRam0000000146b2ec78) * fVar112 +
                                               fVar112) * fStack_ed0) ^ uRam0000000146b2ec68) &
                                       -(uint)(1e-08 <= auVar96._8_4_) ^ uRam0000000146b2ec68);
                  fStack_ecc = (float)(((uint)(((fRam0000000146b2ec7c -
                                                fVar114 * fVar114 *
                                                auVar96._12_4_ * fRam0000000146b2ec7c) * fVar114 +
                                               fVar114) * fStack_ecc) ^ uRam0000000146b2ec6c) &
                                       -(uint)(1e-08 <= auVar96._12_4_) ^ uRam0000000146b2ec6c);
                  local_4e8._4_4_ = fStack_1354;
                  local_4e8._0_4_ = local_1358;
                  fStack_4e0 = fStack_1350;
                  fStack_4dc = 0.0;
                  local_4f8 = local_ed8;
                  fStack_4f4 = fStack_ed4;
                  fStack_4f0 = fStack_ed0;
                  fStack_4ec = fStack_ecc;
                  local_4d8._4_4_ = fVar86;
                  local_4d8._0_4_ = fVar78;
                  fStack_4d0 = fVar92;
                  fStack_4cc = auVar48._12_4_ * fVar113;
                }
              }
            }
            local_e38 = CONCAT44(fStack_554,local_558);
            uStack_e30 = CONCAT44(fStack_54c,fStack_550);
            local_e18 = local_538;
            uStack_e10 = uStack_530;
            local_e28 = local_548;
            uStack_e20 = uStack_540;
            iVar27 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar27 + 1;
            local_e48 = iVar26;
            if (*(int *)((longlong)param_3 + 0xc) < iVar27 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
              ResizeGrow(param_3,iVar27);
            }
            uVar36 = uVar36 + 1;
            local_1588._0_8_ = uVar36;
            piVar21 = piVar21 + 1;
            piVar31 = (int *)((longlong)iVar27 * 0x40 + *param_3);
            *piVar31 = local_e48;
            *(undefined8 *)(piVar31 + 4) = local_e38;
            *(undefined8 *)(piVar31 + 6) = uStack_e30;
            *(undefined8 *)(piVar31 + 8) = local_e28;
            *(undefined8 *)(piVar31 + 10) = uStack_e20;
            *(undefined8 *)(piVar31 + 0xc) = local_e18;
            *(undefined8 *)(piVar31 + 0xe) = uStack_e10;
          } while (uVar36 != local_14f8);
          auVar38 = local_1568;
        }
        cVar43 = local_15a7;
        if (local_478 != (int *)0x0) {
          FMemory::Free(local_478);
          cVar43 = local_15a7;
        }
      }
      iVar26 = local_1558;
      if (local_15a6 == '\0') {
        pfVar22 = (float *)FUN_140611730(plVar41,local_1558);
        local_528 = *pfVar22;
        fStack_524 = pfVar22[1];
        fStack_520 = pfVar22[2];
        fStack_51c = pfVar22[3];
        local_518 = *(undefined8 *)(pfVar22 + 4);
        uStack_510 = *(undefined8 *)(pfVar22 + 6);
        uVar24 = *(undefined8 *)*(undefined1 (*) [16])(pfVar22 + 8);
        _local_418 = *(undefined1 (*) [16])(pfVar22 + 8);
        local_508 = (float)uVar24;
        fStack_504 = (float)((ulonglong)uVar24 >> 0x20);
        fStack_500 = (float)*(undefined8 *)(pfVar22 + 10);
        fStack_4fc = (float)((ulonglong)*(undefined8 *)(pfVar22 + 10) >> 0x20);
        local_438 = local_528;
        fStack_434 = fStack_524;
        fStack_430 = fStack_520;
        fStack_42c = fStack_51c;
        local_428 = local_518;
        uStack_420 = uStack_510;
        if (cVar43 != '\0') {
          lVar17 = (longlong)local_1558;
          if (puStack_14c0[lVar17] == '\0') {
            FUN_14060c680(&local_14d8);
          }
          pfVar22 = (float *)(lVar17 * 0x30 + (longlong)local_14d8);
          local_4c8 = *pfVar22;
          fStack_4c4 = pfVar22[1];
          fStack_4c0 = pfVar22[2];
          fStack_4bc = pfVar22[3];
          local_4b8 = *(undefined8 *)(pfVar22 + 4);
          uStack_4b0 = *(undefined8 *)(pfVar22 + 6);
          uVar24 = *(undefined8 *)*(undefined1 (*) [16])(pfVar22 + 8);
          _local_448 = *(undefined1 (*) [16])(pfVar22 + 8);
          local_4a8 = (float)uVar24;
          fStack_4a4 = (float)((ulonglong)uVar24 >> 0x20);
          fStack_4a0 = (float)*(undefined8 *)(pfVar22 + 10);
          fStack_49c = (float)((ulonglong)*(undefined8 *)(pfVar22 + 10) >> 0x20);
          local_468 = local_4c8;
          fStack_464 = fStack_4c4;
          fStack_460 = fStack_4c0;
          fStack_45c = fStack_4bc;
          local_458 = local_4b8;
          uStack_450 = uStack_4b0;
        }
        pfVar22 = &local_468;
        if (cVar43 == '\0') {
          pfVar22 = &local_438;
        }
        uVar24 = FUN_142c566f0(local_cdc,pfVar22,*(undefined1 *)(param_1 + 0x170));
        lVar17 = FVector::Rotation(uVar24,local_ce8);
        local_154c = *(float *)(lVar17 + 4);
        local_15a6 = '\x01';
        fVar44 = _DAT_146b2ec70;
        fVar111 = fRam0000000146b2ec74;
        fVar112 = fRam0000000146b2ec78;
        fVar113 = fRam0000000146b2ec7c;
      }
      else {
        pfVar23 = (float *)FCSPose<FCompactPose>::GetLocalSpaceTransform
                                     (plVar41,local_148,local_1558);
        fVar77 = fRam0000000146b2fa68;
        fVar90 = fRam0000000146b2fa64;
        fVar110 = _DAT_146b2fa60;
        fVar113 = fRam0000000146b2ec7c;
        fVar112 = fRam0000000146b2ec78;
        fVar111 = fRam0000000146b2ec74;
        fVar44 = _DAT_146b2ec70;
        fVar109 = fRam0000000146b2ebd8;
        fVar91 = fRam0000000146b2ebd4;
        fVar89 = _DAT_146b2ebd0;
        fVar114 = local_538._0_4_;
        fVar118 = local_538._4_4_;
        fVar120 = local_538._8_4_;
        fVar81 = local_538._12_4_;
        local_438 = *pfVar23;
        fStack_434 = pfVar23[1];
        fStack_430 = pfVar23[2];
        fStack_42c = pfVar23[3];
        pfVar22 = pfVar23 + 4;
        fVar84 = *pfVar22;
        fVar85 = pfVar23[5];
        local_14f8 = *(ulonglong *)pfVar22;
        fStack_14f0 = pfVar23[6];
        fStack_14ec = pfVar23[7];
        local_428 = *(undefined8 *)pfVar22;
        uStack_420 = *(undefined8 *)(pfVar23 + 6);
        local_1588 = *(undefined1 (*) [16])(pfVar23 + 8);
        fVar82 = local_1588._4_4_;
        fVar88 = local_1588._12_4_;
        auVar48 = minps(local_1588,_local_538);
        auVar49._4_4_ = -(uint)(auVar48._4_4_ < fRam0000000146b2fa64);
        auVar49._0_4_ = -(uint)(auVar48._0_4_ < _DAT_146b2fa60);
        auVar49._8_4_ = -(uint)(auVar48._8_4_ < fRam0000000146b2fa68);
        auVar49._12_4_ = -(uint)(auVar48._12_4_ < fRam0000000146b2fa6c);
        iVar27 = movmskps((int)pfVar23,auVar49);
        _local_418 = local_1588;
        fVar78 = local_1588._0_4_;
        fVar86 = local_1588._8_4_;
        if (iVar27 == 0) {
          fVar84 = fVar84 * fVar114;
          fVar85 = fVar85 * fVar118;
          fVar90 = fStack_14f0 * fVar120;
          fVar77 = fStack_14ec * fVar81;
          local_528 = local_558 * fStack_42c * _DAT_146b2eca0 + fStack_54c * local_438 +
                      fStack_554 * fStack_430 * _DAT_146b2ec90 +
                      fStack_550 * fStack_434 * _DAT_146b2ec80;
          fStack_524 = local_558 * fStack_430 * fRam0000000146b2eca4 + fStack_54c * fStack_434 +
                       fStack_554 * fStack_42c * fRam0000000146b2ec94 +
                       fStack_550 * local_438 * fRam0000000146b2ec84;
          fStack_520 = local_558 * fStack_434 * fRam0000000146b2eca8 + fStack_54c * fStack_430 +
                       fStack_554 * local_438 * fRam0000000146b2ec98 +
                       fStack_550 * fStack_42c * fRam0000000146b2ec88;
          fStack_51c = local_558 * local_438 * fRam0000000146b2ecac + fStack_54c * fStack_42c +
                       fStack_554 * fStack_434 * fRam0000000146b2ec9c +
                       fStack_550 * fStack_430 * fRam0000000146b2ec8c;
          fVar89 = fVar90 * fStack_554 - fVar85 * fStack_550;
          fVar91 = fVar84 * fStack_550 - fVar90 * local_558;
          fVar109 = fVar85 * local_558 - fVar84 * fStack_554;
          fVar110 = fVar77 * fStack_54c - fVar77 * fStack_54c;
          fVar89 = fVar89 + fVar89;
          fVar91 = fVar91 + fVar91;
          fVar109 = fVar109 + fVar109;
          fVar110 = fVar110 + fVar110;
          local_508 = fVar78 * fVar114;
          fStack_504 = fVar82 * fVar118;
          fStack_500 = fVar86 * fVar120;
          fStack_4fc = fVar88 * fVar81;
          fVar114 = (fVar109 * fStack_554 - fVar91 * fStack_550) + fStack_54c * fVar89 + fVar84 +
                    (float)local_548;
          fVar118 = (fVar89 * fStack_550 - fVar109 * local_558) + fStack_54c * fVar91 + fVar85 +
                    local_548._4_4_;
          fVar120 = (fVar91 * local_558 - fVar89 * fStack_554) + fStack_54c * fVar109 + fVar90 +
                    (float)uStack_540;
          fVar81 = (fVar110 * fStack_54c - fVar110 * fStack_54c) + fStack_54c * fVar110 + fVar77 +
                   uStack_540._4_4_;
        }
        else {
          fVar92 = fStack_554 + fStack_554;
          fVar79 = fStack_550 + fStack_550;
          fVar93 = (local_558 + local_558) * local_558;
          local_1568._4_4_ = fVar82 * fVar118;
          local_1568._0_4_ = fVar78 * fVar114;
          fStack_1560 = fVar86 * fVar120;
          fStack_155c = fVar88 * fVar81;
          fVar87 = fStack_54c * (local_558 + local_558);
          fStack_af4 = (fStack_54c * fVar79 + local_558 * fVar92) * fVar114;
          fStack_ae0 = (fVar87 + fStack_554 * fVar79) * fVar118;
          local_ad8 = (fStack_54c * fVar92 + local_558 * fVar79) * fVar120;
          local_ae8 = fVar118 * (local_558 * fVar92 - fStack_54c * fVar79);
          fStack_ad4 = fVar120 * (fStack_554 * fVar79 - fVar87);
          fStack_af0 = fVar114 * (local_558 * fVar79 - fStack_54c * fVar92);
          fVar87 = fStack_434 + fStack_434;
          fVar80 = fStack_430 + fStack_430;
          fVar83 = (local_438 + local_438) * local_438;
          local_af8 = (float)((uint)((_DAT_146b2ebd0 - (fVar79 * fStack_550 + fVar92 * fStack_554))
                                    * fVar114) & _DAT_146b2ebe0);
          fStack_ae4 = (float)((uint)((fRam0000000146b2ebd4 - (fVar79 * fStack_550 + fVar93)) *
                                     fVar118) & uRam0000000146b2ebe4);
          fStack_ad0 = (float)((uint)((fRam0000000146b2ebd8 - (fVar92 * fStack_554 + fVar93)) *
                                     fVar120) & uRam0000000146b2ebe8);
          fStack_aec = (float)((uint)((fRam0000000146b2ebdc - (fVar93 + fVar93)) * fVar81) &
                              uRam0000000146b2ebec);
          fVar114 = (local_438 + local_438) * fStack_42c;
          local_ac8 = (float)local_548;
          fStack_ac4 = local_548._4_4_;
          fStack_ac0 = (float)uStack_540;
          fStack_abc = fRam0000000146b2ebdc;
          fStack_ab4 = (fVar80 * fStack_42c + fVar87 * local_438) * fVar78;
          fStack_aa0 = (fVar114 + fVar80 * fStack_434) * fVar82;
          local_a98 = (fVar87 * fStack_42c + fVar80 * local_438) * fVar86;
          local_aa8 = fVar82 * (fVar87 * local_438 - fVar80 * fStack_42c);
          fStack_a94 = fVar86 * (fVar80 * fStack_434 - fVar114);
          fStack_ab0 = fVar78 * (fVar80 * local_438 - fVar87 * fStack_42c);
          local_ab8 = (float)((uint)((_DAT_146b2ebd0 - (fVar80 * fStack_430 + fVar87 * fStack_434))
                                    * fVar78) & _DAT_146b2ebe0);
          fStack_aa4 = (float)((uint)((fRam0000000146b2ebd4 - (fVar80 * fStack_430 + fVar83)) *
                                     fVar82) & uRam0000000146b2ebe4);
          fStack_a90 = (float)((uint)((fRam0000000146b2ebd8 - (fVar87 * fStack_434 + fVar83)) *
                                     fVar86) & uRam0000000146b2ebe8);
          fStack_aac = (float)((uint)((fRam0000000146b2ebdc - (fVar83 + fVar83)) * fVar88) &
                              uRam0000000146b2ebec);
          fStack_a7c = fRam0000000146b2ebdc;
          local_13c8 = fStack_ab4 * local_ae8 + local_ab8 * local_af8 + fStack_ab0 * local_ad8 +
                       fStack_aac * (float)local_548;
          fStack_13c4 = fStack_ab4 * fStack_ae4 + local_ab8 * fStack_af4 + fStack_ab0 * fStack_ad4 +
                        fStack_aac * local_548._4_4_;
          fStack_13c0 = fStack_ab4 * fStack_ae0 + local_ab8 * fStack_af0 + fStack_ab0 * fStack_ad0 +
                        fStack_aac * (float)uStack_540;
          fStack_13bc = fStack_ab4 * fStack_aec + local_ab8 * fStack_aec + fStack_ab0 * fStack_aec +
                        fStack_aac * fRam0000000146b2ebdc;
          local_13b8 = fStack_aa4 * local_ae8 + local_aa8 * local_af8 + fStack_aa0 * local_ad8 +
                       fStack_aac * (float)local_548;
          fStack_13b4 = fStack_aa4 * fStack_ae4 + local_aa8 * fStack_af4 + fStack_aa0 * fStack_ad4 +
                        fStack_aac * local_548._4_4_;
          fStack_13b0 = fStack_aa4 * fStack_ae0 + local_aa8 * fStack_af0 + fStack_aa0 * fStack_ad0 +
                        fStack_aac * (float)uStack_540;
          fStack_13ac = fStack_aa4 * fStack_aec + local_aa8 * fStack_aec + fStack_aa0 * fStack_aec +
                        fStack_aac * fRam0000000146b2ebdc;
          local_13a8 = fStack_a94 * local_ae8 + local_a98 * local_af8 + fStack_a90 * local_ad8 +
                       fStack_aac * (float)local_548;
          fStack_13a4 = fStack_a94 * fStack_ae4 + local_a98 * fStack_af4 + fStack_a90 * fStack_ad4 +
                        fStack_aac * local_548._4_4_;
          fStack_13a0 = fStack_a94 * fStack_ae0 + local_a98 * fStack_af0 + fStack_a90 * fStack_ad0 +
                        fStack_aac * (float)uStack_540;
          fStack_139c = fStack_a94 * fStack_aec + local_a98 * fStack_aec + fStack_a90 * fStack_aec +
                        fStack_aac * fRam0000000146b2ebdc;
          local_1398 = fVar85 * local_ae8 + fVar84 * local_af8 + fStack_14f0 * local_ad8 +
                       fRam0000000146b2ebdc * (float)local_548;
          fStack_1394 = fVar85 * fStack_ae4 + fVar84 * fStack_af4 + fStack_14f0 * fStack_ad4 +
                        fRam0000000146b2ebdc * local_548._4_4_;
          fStack_1390 = fVar85 * fStack_ae0 + fVar84 * fStack_af0 + fStack_14f0 * fStack_ad0 +
                        fRam0000000146b2ebdc * (float)uStack_540;
          fStack_138c = fVar85 * fStack_aec + fVar84 * fStack_aec + fStack_14f0 * fStack_aec +
                        fRam0000000146b2ebdc * fRam0000000146b2ebdc;
          fStack_adc = fStack_aec;
          fStack_acc = fStack_aec;
          fStack_a9c = fStack_aac;
          fStack_a8c = fStack_aac;
          local_a88 = fVar84;
          fStack_a84 = fVar85;
          fStack_a80 = fStack_14f0;
          FMatrix::RemoveScaling(&local_13c8);
          fVar114 = (float)(-(uint)(fVar110 <= (float)local_1568._0_4_) &
                            (_DAT_146b2fa50 ^ (uint)fVar89) ^ _DAT_146b2fa50);
          fVar118 = (float)(-(uint)(fVar90 <= (float)local_1568._4_4_) &
                            (uRam0000000146b2fa54 ^ (uint)fVar91) ^ uRam0000000146b2fa54);
          fVar120 = (float)(-(uint)(fVar77 <= fStack_1560) & (uRam0000000146b2fa58 ^ (uint)fVar109)
                           ^ uRam0000000146b2fa58);
          local_13c8 = local_13c8 * fVar114;
          fStack_13c4 = fStack_13c4 * fVar114;
          fStack_13c0 = fStack_13c0 * fVar114;
          fStack_13b4 = fStack_13b4 * fVar118;
          fStack_13b0 = fStack_13b0 * fVar118;
          local_13b8 = local_13b8 * fVar118;
          fStack_13a4 = fStack_13a4 * fVar120;
          fStack_13a0 = fStack_13a0 * fVar120;
          local_13a8 = local_13a8 * fVar120;
          FQuat::FQuat(&local_ee8,&local_13c8);
          local_15a0 = 1e-08;
          auVar65._0_4_ = local_ee8 * local_ee8 + fStack_ee0 * fStack_ee0;
          auVar65._4_4_ = fStack_ee4 * fStack_ee4 + fStack_edc * fStack_edc;
          auVar65._8_4_ = fStack_ee0 * fStack_ee0 + local_ee8 * local_ee8;
          auVar65._12_4_ = fStack_edc * fStack_edc + fStack_ee4 * fStack_ee4;
          auVar97._0_4_ = auVar65._4_4_ + auVar65._0_4_;
          auVar97._4_4_ = auVar65._8_4_ + auVar65._4_4_;
          auVar97._8_4_ = auVar65._12_4_ + auVar65._8_4_;
          auVar97._12_4_ = auVar65._0_4_ + auVar65._12_4_;
          auVar48 = rsqrtps(auVar65,auVar97);
          fVar114 = auVar48._0_4_;
          fVar118 = auVar48._4_4_;
          fVar120 = auVar48._8_4_;
          fVar81 = auVar48._12_4_;
          fVar114 = (fVar44 - fVar114 * fVar114 * auVar97._0_4_ * fVar44) * fVar114 + fVar114;
          fVar118 = (fVar111 - fVar118 * fVar118 * auVar97._4_4_ * fVar111) * fVar118 + fVar118;
          fVar120 = (fVar112 - fVar120 * fVar120 * auVar97._8_4_ * fVar112) * fVar120 + fVar120;
          fVar81 = (fVar113 - fVar81 * fVar81 * auVar97._12_4_ * fVar113) * fVar81 + fVar81;
          local_528 = (float)(((uint)(((fVar44 - fVar114 * fVar114 * auVar97._0_4_ * fVar44) *
                                       fVar114 + fVar114) * local_ee8) ^ _DAT_146b2ec60) &
                              -(uint)(1e-08 <= auVar97._0_4_) ^ _DAT_146b2ec60);
          fStack_524 = (float)(((uint)(((fVar111 - fVar118 * fVar118 * auVar97._4_4_ * fVar111) *
                                        fVar118 + fVar118) * fStack_ee4) ^ uRam0000000146b2ec64) &
                               -(uint)(1e-08 <= auVar97._4_4_) ^ uRam0000000146b2ec64);
          fStack_520 = (float)(((uint)(((fVar112 - fVar120 * fVar120 * auVar97._8_4_ * fVar112) *
                                        fVar120 + fVar120) * fStack_ee0) ^ uRam0000000146b2ec68) &
                               -(uint)(1e-08 <= auVar97._8_4_) ^ uRam0000000146b2ec68);
          fStack_51c = (float)(((uint)(((fVar113 - fVar81 * fVar81 * auVar97._12_4_ * fVar113) *
                                        fVar81 + fVar81) * fStack_edc) ^ uRam0000000146b2ec6c) &
                               -(uint)(1e-08 <= auVar97._12_4_) ^ uRam0000000146b2ec6c);
          fVar81 = 0.0;
          local_508 = (float)local_1568._0_4_;
          fStack_504 = (float)local_1568._4_4_;
          fStack_500 = fStack_1560;
          fStack_4fc = fStack_155c;
          fVar114 = local_1398;
          fVar118 = fStack_1394;
          fVar120 = fStack_1390;
          local_ee8 = local_528;
          fStack_ee4 = fStack_524;
          fStack_ee0 = fStack_520;
          fStack_edc = fStack_51c;
        }
        local_518 = CONCAT44(fVar118,fVar114);
        uStack_510 = CONCAT44(fVar81,fVar120);
        if (cVar43 != '\0') {
          pfVar22 = (float *)FCSPose<FCompactPose>::GetLocalSpaceTransform
                                       (&local_14d8,local_118,local_1558);
          fVar78 = fRam0000000146b2fa68;
          fVar77 = fRam0000000146b2fa64;
          fVar90 = _DAT_146b2fa60;
          fVar113 = fRam0000000146b2ec7c;
          fVar112 = fRam0000000146b2ec78;
          fVar111 = fRam0000000146b2ec74;
          fVar44 = _DAT_146b2ec70;
          fVar110 = fRam0000000146b2ebd8;
          fVar109 = fRam0000000146b2ebd4;
          fVar91 = _DAT_146b2ebd0;
          fVar114 = local_4d8._0_4_;
          fVar118 = local_4d8._4_4_;
          fVar120 = local_4d8._8_4_;
          fVar81 = local_4d8._12_4_;
          local_468 = *pfVar22;
          fStack_464 = pfVar22[1];
          fStack_460 = pfVar22[2];
          fStack_45c = pfVar22[3];
          fVar84 = pfVar22[4];
          fVar85 = pfVar22[5];
          fVar89 = pfVar22[6];
          local_458 = *(undefined8 *)(pfVar22 + 4);
          uStack_450 = *(undefined8 *)(pfVar22 + 6);
          local_1588 = *(undefined1 (*) [16])(pfVar22 + 8);
          fVar82 = local_1588._4_4_;
          fVar88 = local_1588._12_4_;
          auVar48 = minps(local_1588,_local_4d8);
          _local_448 = local_1588;
          auVar50._4_4_ = -(uint)(auVar48._4_4_ < fRam0000000146b2fa64);
          auVar50._0_4_ = -(uint)(auVar48._0_4_ < _DAT_146b2fa60);
          auVar50._8_4_ = -(uint)(auVar48._8_4_ < fRam0000000146b2fa68);
          auVar50._12_4_ = -(uint)(auVar48._12_4_ < fRam0000000146b2fa6c);
          iVar27 = movmskps((int)pfVar22,auVar50);
          fVar86 = local_1588._0_4_;
          fVar92 = local_1588._8_4_;
          if (iVar27 == 0) {
            fVar84 = fVar84 * fVar114;
            fVar85 = fVar85 * fVar118;
            fVar89 = fVar89 * fVar120;
            fVar77 = pfVar22[7] * fVar81;
            local_4c8 = fStack_45c * local_4f8 * _DAT_146b2eca0 + fStack_4ec * local_468 +
                        fStack_460 * fStack_4f4 * _DAT_146b2ec90 +
                        fStack_464 * fStack_4f0 * _DAT_146b2ec80;
            fStack_4c4 = fStack_460 * local_4f8 * fRam0000000146b2eca4 + fStack_4ec * fStack_464 +
                         fStack_45c * fStack_4f4 * fRam0000000146b2ec94 +
                         local_468 * fStack_4f0 * fRam0000000146b2ec84;
            fStack_4c0 = fStack_464 * local_4f8 * fRam0000000146b2eca8 + fStack_4ec * fStack_460 +
                         local_468 * fStack_4f4 * fRam0000000146b2ec98 +
                         fStack_45c * fStack_4f0 * fRam0000000146b2ec88;
            fStack_4bc = local_468 * local_4f8 * fRam0000000146b2ecac + fStack_4ec * fStack_45c +
                         fStack_464 * fStack_4f4 * fRam0000000146b2ec9c +
                         fStack_460 * fStack_4f0 * fRam0000000146b2ec8c;
            fVar91 = fVar89 * fStack_4f4 - fVar85 * fStack_4f0;
            fVar109 = fVar84 * fStack_4f0 - fVar89 * local_4f8;
            fVar110 = fVar85 * local_4f8 - fVar84 * fStack_4f4;
            fVar90 = fVar77 * fStack_4ec - fVar77 * fStack_4ec;
            fVar91 = fVar91 + fVar91;
            fVar109 = fVar109 + fVar109;
            fVar110 = fVar110 + fVar110;
            fVar90 = fVar90 + fVar90;
            local_1568._0_4_ = fVar86 * fVar114;
            local_1568._4_4_ = fVar82 * fVar118;
            fStack_1560 = fVar92 * fVar120;
            fStack_155c = fVar88 * fVar81;
            fVar114 = (fVar110 * fStack_4f4 - fVar109 * fStack_4f0) + fStack_4ec * fVar91 + fVar84 +
                      (float)local_4e8._0_4_;
            fVar118 = (fVar91 * fStack_4f0 - fVar110 * local_4f8) + fStack_4ec * fVar109 + fVar85 +
                      (float)local_4e8._4_4_;
            fVar120 = (fVar109 * local_4f8 - fVar91 * fStack_4f4) + fStack_4ec * fVar110 + fVar89 +
                      fStack_4e0;
            fVar81 = (fVar90 * fStack_4ec - fVar90 * fStack_4ec) + fStack_4ec * fVar90 + fVar77 +
                     fStack_4dc;
          }
          else {
            fVar80 = fStack_4f4 + fStack_4f4;
            fVar83 = fStack_4f0 + fStack_4f0;
            fVar93 = (local_4f8 + local_4f8) * local_4f8;
            local_1568._4_4_ = fVar82 * fVar118;
            local_1568._0_4_ = fVar86 * fVar114;
            fStack_1560 = fVar92 * fVar120;
            fStack_155c = fVar88 * fVar81;
            fVar79 = (local_4f8 + local_4f8) * fStack_4ec;
            fStack_a74 = (fVar83 * fStack_4ec + fVar80 * local_4f8) * fVar114;
            fStack_a60 = (fVar79 + fVar83 * fStack_4f4) * fVar118;
            local_a58 = (fVar80 * fStack_4ec + fVar83 * local_4f8) * fVar120;
            local_a68 = fVar118 * (fVar80 * local_4f8 - fVar83 * fStack_4ec);
            fStack_a54 = fVar120 * (fVar83 * fStack_4f4 - fVar79);
            fStack_a70 = fVar114 * (fVar83 * local_4f8 - fVar80 * fStack_4ec);
            fVar79 = fStack_464 + fStack_464;
            fVar87 = fStack_460 + fStack_460;
            local_a78 = (float)((uint)((_DAT_146b2ebd0 - (fVar83 * fStack_4f0 + fVar80 * fStack_4f4)
                                       ) * fVar114) & _DAT_146b2ebe0);
            fStack_a64 = (float)((uint)((fRam0000000146b2ebd4 - (fVar83 * fStack_4f0 + fVar93)) *
                                       fVar118) & uRam0000000146b2ebe4);
            fStack_a50 = (float)((uint)((fRam0000000146b2ebd8 - (fVar80 * fStack_4f4 + fVar93)) *
                                       fVar120) & uRam0000000146b2ebe8);
            fStack_a6c = (float)((uint)((fRam0000000146b2ebdc - (fVar93 + fVar93)) * fVar81) &
                                uRam0000000146b2ebec);
            fVar118 = (local_468 + local_468) * local_468;
            fVar114 = (local_468 + local_468) * fStack_45c;
            local_a48 = (float)local_4e8._0_4_;
            fStack_a44 = (float)local_4e8._4_4_;
            fStack_a40 = fStack_4e0;
            fStack_a3c = fRam0000000146b2ebdc;
            fStack_a34 = (fVar87 * fStack_45c + fVar79 * local_468) * fVar86;
            fStack_a20 = (fVar114 + fVar87 * fStack_464) * fVar82;
            local_a18 = (fVar79 * fStack_45c + fVar87 * local_468) * fVar92;
            local_a28 = fVar82 * (fVar79 * local_468 - fVar87 * fStack_45c);
            fStack_a14 = fVar92 * (fVar87 * fStack_464 - fVar114);
            fStack_a30 = fVar86 * (fVar87 * local_468 - fVar79 * fStack_45c);
            local_a38 = (float)((uint)((_DAT_146b2ebd0 - (fVar87 * fStack_460 + fVar79 * fStack_464)
                                       ) * fVar86) & _DAT_146b2ebe0);
            fStack_a24 = (float)((uint)((fRam0000000146b2ebd4 - (fVar87 * fStack_460 + fVar118)) *
                                       fVar82) & uRam0000000146b2ebe4);
            fStack_a10 = (float)((uint)((fRam0000000146b2ebd8 - (fVar79 * fStack_464 + fVar118)) *
                                       fVar92) & uRam0000000146b2ebe8);
            fStack_a2c = (float)((uint)((fRam0000000146b2ebdc - (fVar118 + fVar118)) * fVar88) &
                                uRam0000000146b2ebec);
            local_1408 = fStack_a34 * local_a68 + local_a38 * local_a78 + fStack_a30 * local_a58 +
                         fStack_a2c * (float)local_4e8._0_4_;
            fStack_1404 = fStack_a34 * fStack_a64 + local_a38 * fStack_a74 + fStack_a30 * fStack_a54
                          + fStack_a2c * (float)local_4e8._4_4_;
            fStack_1400 = fStack_a34 * fStack_a60 + local_a38 * fStack_a70 + fStack_a30 * fStack_a50
                          + fStack_a2c * fStack_4e0;
            fStack_13fc = fStack_a34 * fStack_a6c + local_a38 * fStack_a6c + fStack_a30 * fStack_a6c
                          + fStack_a2c * fRam0000000146b2ebdc;
            fStack_9fc = fRam0000000146b2ebdc;
            local_13f8 = fStack_a24 * local_a68 + local_a28 * local_a78 + fStack_a20 * local_a58 +
                         fStack_a2c * (float)local_4e8._0_4_;
            fStack_13f4 = fStack_a24 * fStack_a64 + local_a28 * fStack_a74 + fStack_a20 * fStack_a54
                          + fStack_a2c * (float)local_4e8._4_4_;
            fStack_13f0 = fStack_a24 * fStack_a60 + local_a28 * fStack_a70 + fStack_a20 * fStack_a50
                          + fStack_a2c * fStack_4e0;
            fStack_13ec = fStack_a24 * fStack_a6c + local_a28 * fStack_a6c + fStack_a20 * fStack_a6c
                          + fStack_a2c * fRam0000000146b2ebdc;
            local_13e8 = fStack_a14 * local_a68 + local_a18 * local_a78 + fStack_a10 * local_a58 +
                         fStack_a2c * (float)local_4e8._0_4_;
            fStack_13e4 = fStack_a14 * fStack_a64 + local_a18 * fStack_a74 + fStack_a10 * fStack_a54
                          + fStack_a2c * (float)local_4e8._4_4_;
            fStack_13e0 = fStack_a14 * fStack_a60 + local_a18 * fStack_a70 + fStack_a10 * fStack_a50
                          + fStack_a2c * fStack_4e0;
            fStack_13dc = fStack_a14 * fStack_a6c + local_a18 * fStack_a6c + fStack_a10 * fStack_a6c
                          + fStack_a2c * fRam0000000146b2ebdc;
            local_13d8 = fVar85 * local_a68 + fVar84 * local_a78 + fVar89 * local_a58 +
                         fRam0000000146b2ebdc * (float)local_4e8._0_4_;
            fStack_13d4 = fVar85 * fStack_a64 + fVar84 * fStack_a74 + fVar89 * fStack_a54 +
                          fRam0000000146b2ebdc * (float)local_4e8._4_4_;
            fStack_13d0 = fVar85 * fStack_a60 + fVar84 * fStack_a70 + fVar89 * fStack_a50 +
                          fRam0000000146b2ebdc * fStack_4e0;
            fStack_13cc = fVar85 * fStack_a6c + fVar84 * fStack_a6c + fVar89 * fStack_a6c +
                          fRam0000000146b2ebdc * fRam0000000146b2ebdc;
            fStack_a5c = fStack_a6c;
            fStack_a4c = fStack_a6c;
            fStack_a1c = fStack_a2c;
            fStack_a0c = fStack_a2c;
            local_a08 = fVar84;
            fStack_a04 = fVar85;
            fStack_a00 = fVar89;
            FMatrix::RemoveScaling(&local_1408);
            fVar114 = (float)(-(uint)(fVar90 <= (float)local_1568._0_4_) &
                              (_DAT_146b2fa50 ^ (uint)fVar91) ^ _DAT_146b2fa50);
            fVar118 = (float)(-(uint)(fVar77 <= (float)local_1568._4_4_) &
                              (uRam0000000146b2fa54 ^ (uint)fVar109) ^ uRam0000000146b2fa54);
            fVar120 = (float)(-(uint)(fVar78 <= fStack_1560) &
                              (uRam0000000146b2fa58 ^ (uint)fVar110) ^ uRam0000000146b2fa58);
            local_1408 = local_1408 * fVar114;
            fStack_1404 = fStack_1404 * fVar114;
            fStack_1400 = fStack_1400 * fVar114;
            fStack_13f4 = fStack_13f4 * fVar118;
            fStack_13f0 = fStack_13f0 * fVar118;
            local_13f8 = local_13f8 * fVar118;
            fStack_13e4 = fStack_13e4 * fVar120;
            fStack_13e0 = fStack_13e0 * fVar120;
            local_13e8 = local_13e8 * fVar120;
            FQuat::FQuat(&local_f28,&local_1408);
            local_15a0 = 1e-08;
            auVar66._0_4_ = local_f28 * local_f28 + fStack_f20 * fStack_f20;
            auVar66._4_4_ = fStack_f24 * fStack_f24 + fStack_f1c * fStack_f1c;
            auVar66._8_4_ = fStack_f20 * fStack_f20 + local_f28 * local_f28;
            auVar66._12_4_ = fStack_f1c * fStack_f1c + fStack_f24 * fStack_f24;
            auVar98._0_4_ = auVar66._4_4_ + auVar66._0_4_;
            auVar98._4_4_ = auVar66._8_4_ + auVar66._4_4_;
            auVar98._8_4_ = auVar66._12_4_ + auVar66._8_4_;
            auVar98._12_4_ = auVar66._0_4_ + auVar66._12_4_;
            auVar48 = rsqrtps(auVar66,auVar98);
            fVar114 = auVar48._0_4_;
            fVar118 = auVar48._4_4_;
            fVar120 = auVar48._8_4_;
            fVar81 = auVar48._12_4_;
            fVar114 = (fVar44 - fVar114 * fVar114 * auVar98._0_4_ * fVar44) * fVar114 + fVar114;
            fVar118 = (fVar111 - fVar118 * fVar118 * auVar98._4_4_ * fVar111) * fVar118 + fVar118;
            fVar120 = (fVar112 - fVar120 * fVar120 * auVar98._8_4_ * fVar112) * fVar120 + fVar120;
            fVar81 = (fVar113 - fVar81 * fVar81 * auVar98._12_4_ * fVar113) * fVar81 + fVar81;
            local_4c8 = (float)(((uint)(((fVar44 - fVar114 * fVar114 * auVar98._0_4_ * fVar44) *
                                         fVar114 + fVar114) * local_f28) ^ _DAT_146b2ec60) &
                                -(uint)(1e-08 <= auVar98._0_4_) ^ _DAT_146b2ec60);
            fStack_4c4 = (float)(((uint)(((fVar111 - fVar118 * fVar118 * auVar98._4_4_ * fVar111) *
                                          fVar118 + fVar118) * fStack_f24) ^ uRam0000000146b2ec64) &
                                 -(uint)(1e-08 <= auVar98._4_4_) ^ uRam0000000146b2ec64);
            fStack_4c0 = (float)(((uint)(((fVar112 - fVar120 * fVar120 * auVar98._8_4_ * fVar112) *
                                          fVar120 + fVar120) * fStack_f20) ^ uRam0000000146b2ec68) &
                                 -(uint)(1e-08 <= auVar98._8_4_) ^ uRam0000000146b2ec68);
            fStack_4bc = (float)(((uint)(((fVar113 - fVar81 * fVar81 * auVar98._12_4_ * fVar113) *
                                          fVar81 + fVar81) * fStack_f1c) ^ uRam0000000146b2ec6c) &
                                 -(uint)(1e-08 <= auVar98._12_4_) ^ uRam0000000146b2ec6c);
            fVar81 = 0.0;
            fVar114 = local_13d8;
            fVar118 = fStack_13d4;
            fVar120 = fStack_13d0;
            local_f28 = local_4c8;
            fStack_f24 = fStack_4c4;
            fStack_f20 = fStack_4c0;
            fStack_f1c = fStack_4bc;
          }
          local_4b8 = CONCAT44(fVar118,fVar114);
          uStack_4b0 = CONCAT44(fVar81,fVar120);
          local_4a8 = (float)local_1568._0_4_;
          fStack_4a4 = (float)local_1568._4_4_;
          fStack_4a0 = fStack_1560;
          fStack_49c = fStack_155c;
        }
      }
      fVar120 = fRam0000000146b2fa68;
      fVar118 = fRam0000000146b2fa64;
      fVar114 = _DAT_146b2fa60;
      local_1208 = 0.0;
      fStack_1204 = 0.0;
      fStack_1200 = 0.0;
      fStack_11fc = fRam0000000146b2ebdc;
      local_11e8 = (float)((uint)_DAT_146b2ebd0 & _DAT_146b2ebe0);
      fStack_11e4 = (float)((uint)fRam0000000146b2ebd4 & uRam0000000146b2ebe4);
      fStack_11e0 = (float)((uint)fRam0000000146b2ebd8 & uRam0000000146b2ebe8);
      fStack_11dc = (float)((uint)fRam0000000146b2ebdc & uRam0000000146b2ebec);
      _local_11f8 = ZEXT816(0);
      lVar17 = ((ulonglong)*(byte *)((longlong)auVar38 + 0x49) +
               (ulonglong)*(byte *)((longlong)auVar38 + 0x48) * 6) * 0x60;
      pfVar22 = &local_4c8;
      if (cVar43 == '\0') {
        pfVar22 = &local_528;
      }
      auVar48 = *(undefined1 (*) [16])(&DAT_146b2ecd0 + lVar17);
      _local_1568 = *(undefined1 (*) [16])(pfVar22 + 8);
      fVar81 = local_1568._0_4_;
      fVar82 = local_1568._4_4_;
      fVar88 = local_1568._8_4_;
      fVar84 = local_1568._12_4_;
      auVar45 = minps(auVar48,_local_1568);
      auVar51._4_4_ = -(uint)(auVar45._4_4_ < fRam0000000146b2fa64);
      auVar51._0_4_ = -(uint)(auVar45._0_4_ < _DAT_146b2fa60);
      auVar51._8_4_ = -(uint)(auVar45._8_4_ < fRam0000000146b2fa68);
      auVar51._12_4_ = -(uint)(auVar45._12_4_ < fRam0000000146b2fa6c);
      iVar27 = movmskps((int)&local_528,auVar51);
      if (iVar27 == 0) {
        fVar44 = *pfVar22;
        fVar111 = pfVar22[1];
        fVar112 = pfVar22[2];
        fVar113 = pfVar22[3];
        fVar114 = *(float *)(&DAT_146b2ecb0 + lVar17);
        fVar118 = *(float *)(lVar17 + 0x146b2ecb4);
        fVar120 = *(float *)(lVar17 + 0x146b2ecb8);
        fVar85 = *(float *)(lVar17 + 0x146b2ecbc);
        fVar89 = fVar81 * *(float *)(&DAT_146b2ecc0 + lVar17);
        fVar91 = fVar82 * *(float *)(lVar17 + 0x146b2ecc4);
        fVar109 = fVar88 * *(float *)(lVar17 + 0x146b2ecc8);
        fVar110 = fVar84 * *(float *)(lVar17 + 0x146b2eccc);
        local_1208 = fVar85 * fVar44 * _DAT_146b2eca0 + fVar113 * fVar114 +
                     fVar111 * fVar120 * _DAT_146b2ec90 + fVar112 * fVar118 * _DAT_146b2ec80;
        fStack_1204 = fVar120 * fVar44 * fRam0000000146b2eca4 + fVar113 * fVar118 +
                      fVar111 * fVar85 * fRam0000000146b2ec94 +
                      fVar112 * fVar114 * fRam0000000146b2ec84;
        fStack_1200 = fVar118 * fVar44 * fRam0000000146b2eca8 + fVar113 * fVar120 +
                      fVar111 * fVar114 * fRam0000000146b2ec98 +
                      fVar112 * fVar85 * fRam0000000146b2ec88;
        fStack_11fc = fVar114 * fVar44 * fRam0000000146b2ecac + fVar113 * fVar85 +
                      fVar111 * fVar118 * fRam0000000146b2ec9c +
                      fVar112 * fVar120 * fRam0000000146b2ec8c;
        fVar114 = fVar109 * fVar111 - fVar91 * fVar112;
        fVar118 = fVar89 * fVar112 - fVar109 * fVar44;
        fVar120 = fVar91 * fVar44 - fVar89 * fVar111;
        fVar85 = fVar110 * fVar113 - fVar110 * fVar113;
        fVar114 = fVar114 + fVar114;
        fVar118 = fVar118 + fVar118;
        fVar120 = fVar120 + fVar120;
        fVar85 = fVar85 + fVar85;
        local_11f8._4_4_ =
             (fVar114 * fVar112 - fVar120 * fVar44) + fVar118 * fVar113 + fVar91 + pfVar22[5];
        local_11f8._0_4_ =
             (fVar120 * fVar111 - fVar118 * fVar112) + fVar114 * fVar113 + fVar89 + pfVar22[4];
        uStack_11f0._0_4_ =
             (fVar118 * fVar44 - fVar114 * fVar111) + fVar120 * fVar113 + fVar109 + pfVar22[6];
        uStack_11f0._4_4_ =
             (fVar85 * fVar113 - fVar85 * fVar113) + fVar85 * fVar113 + fVar110 + pfVar22[7];
      }
      else {
        fVar85 = *pfVar22;
        fVar89 = pfVar22[1];
        fVar91 = pfVar22[2];
        fVar109 = pfVar22[3];
        fVar110 = fVar89 + fVar89;
        fVar90 = fVar91 + fVar91;
        fVar78 = fVar85 * (fVar85 + fVar85);
        fVar77 = fVar109 * (fVar85 + fVar85);
        fStack_9f4 = (fVar109 * fVar90 + fVar85 * fVar110) * fVar81;
        fStack_9e0 = (fVar77 + fVar89 * fVar90) * fVar82;
        local_9d8 = (fVar109 * fVar110 + fVar85 * fVar90) * fVar88;
        local_9e8 = fVar82 * (fVar85 * fVar110 - fVar109 * fVar90);
        fStack_9d4 = fVar88 * (fVar89 * fVar90 - fVar77);
        fStack_9f0 = fVar81 * (fVar85 * fVar90 - fVar109 * fVar110);
        local_9f8 = (float)((uint)((_DAT_146b2ebd0 - (fVar91 * fVar90 + fVar89 * fVar110)) * fVar81)
                           & _DAT_146b2ebe0);
        fStack_9e4 = (float)((uint)((fRam0000000146b2ebd4 - (fVar91 * fVar90 + fVar78)) * fVar82) &
                            uRam0000000146b2ebe4);
        fStack_9d0 = (float)((uint)((fRam0000000146b2ebd8 - (fVar89 * fVar110 + fVar78)) * fVar88) &
                            uRam0000000146b2ebe8);
        fStack_9ec = (float)((uint)((fRam0000000146b2ebdc - (fVar78 + fVar78)) * fVar84) &
                            uRam0000000146b2ebec);
        local_9c8 = pfVar22[4];
        fStack_9c4 = pfVar22[5];
        fStack_9c0 = pfVar22[6];
        fStack_9bc = fRam0000000146b2ebdc;
        fVar85 = *(float *)(&DAT_146b2ecb0 + lVar17);
        fVar89 = *(float *)(lVar17 + 0x146b2ecb4);
        fVar91 = *(float *)(lVar17 + 0x146b2ecb8);
        fVar109 = *(float *)(lVar17 + 0x146b2ecbc);
        fVar78 = fVar89 + fVar89;
        fVar86 = fVar91 + fVar91;
        fVar79 = (fVar85 + fVar85) * fVar85;
        fVar92 = fVar109 * (fVar85 + fVar85);
        fVar110 = *(float *)(&DAT_146b2ecd0 + lVar17);
        fVar90 = *(float *)(lVar17 + 0x146b2ecd4);
        fVar77 = *(float *)(lVar17 + 0x146b2ecd8);
        fStack_9b4 = (fVar109 * fVar86 + fVar85 * fVar78) * fVar110;
        fStack_9a0 = (fVar92 + fVar89 * fVar86) * fVar90;
        local_998 = (fVar109 * fVar78 + fVar85 * fVar86) * fVar77;
        local_9a8 = fVar90 * (fVar85 * fVar78 - fVar109 * fVar86);
        fStack_994 = fVar77 * (fVar89 * fVar86 - fVar92);
        fStack_9b0 = fVar110 * (fVar85 * fVar86 - fVar109 * fVar78);
        local_9b8 = (float)((uint)((_DAT_146b2ebd0 - (fVar86 * fVar91 + fVar78 * fVar89)) * fVar110)
                           & _DAT_146b2ebe0);
        fStack_9a4 = (float)((uint)((fRam0000000146b2ebd4 - (fVar86 * fVar91 + fVar79)) * fVar90) &
                            uRam0000000146b2ebe4);
        fStack_990 = (float)((uint)((fRam0000000146b2ebd8 - (fVar78 * fVar89 + fVar79)) * fVar77) &
                            uRam0000000146b2ebe8);
        fStack_9ac = (float)((uint)((fRam0000000146b2ebdc - (fVar79 + fVar79)) *
                                   *(float *)(lVar17 + 0x146b2ecdc)) & uRam0000000146b2ebec);
        local_988 = *(float *)(&DAT_146b2ecc0 + lVar17);
        fStack_984 = *(float *)(lVar17 + 0x146b2ecc4);
        fStack_980 = *(float *)(lVar17 + 0x146b2ecc8);
        fStack_97c = fRam0000000146b2ebdc;
        local_1308 = fStack_9b4 * local_9e8 + local_9b8 * local_9f8 + fStack_9b0 * local_9d8 +
                     fStack_9ac * local_9c8;
        fStack_1304 = fStack_9b4 * fStack_9e4 + local_9b8 * fStack_9f4 + fStack_9b0 * fStack_9d4 +
                      fStack_9ac * fStack_9c4;
        fStack_1300 = fStack_9b4 * fStack_9e0 + local_9b8 * fStack_9f0 + fStack_9b0 * fStack_9d0 +
                      fStack_9ac * fStack_9c0;
        fStack_12fc = fStack_9b4 * fStack_9ec + local_9b8 * fStack_9ec + fStack_9b0 * fStack_9ec +
                      fStack_9ac * fRam0000000146b2ebdc;
        local_12f8 = fStack_9a4 * local_9e8 + local_9a8 * local_9f8 + fStack_9a0 * local_9d8 +
                     fStack_9ac * local_9c8;
        fStack_12f4 = fStack_9a4 * fStack_9e4 + local_9a8 * fStack_9f4 + fStack_9a0 * fStack_9d4 +
                      fStack_9ac * fStack_9c4;
        fStack_12f0 = fStack_9a4 * fStack_9e0 + local_9a8 * fStack_9f0 + fStack_9a0 * fStack_9d0 +
                      fStack_9ac * fStack_9c0;
        fStack_12ec = fStack_9a4 * fStack_9ec + local_9a8 * fStack_9ec + fStack_9a0 * fStack_9ec +
                      fStack_9ac * fRam0000000146b2ebdc;
        local_12e8 = fStack_994 * local_9e8 + local_998 * local_9f8 + fStack_990 * local_9d8 +
                     fStack_9ac * local_9c8;
        fStack_12e4 = fStack_994 * fStack_9e4 + local_998 * fStack_9f4 + fStack_990 * fStack_9d4 +
                      fStack_9ac * fStack_9c4;
        fStack_12e0 = fStack_994 * fStack_9e0 + local_998 * fStack_9f0 + fStack_990 * fStack_9d0 +
                      fStack_9ac * fStack_9c0;
        fStack_12dc = fStack_994 * fStack_9ec + local_998 * fStack_9ec + fStack_990 * fStack_9ec +
                      fStack_9ac * fRam0000000146b2ebdc;
        local_12d8 = fStack_984 * local_9e8 + local_988 * local_9f8 + fStack_980 * local_9d8 +
                     fRam0000000146b2ebdc * local_9c8;
        fStack_12d4 = fStack_984 * fStack_9e4 + local_988 * fStack_9f4 + fStack_980 * fStack_9d4 +
                      fRam0000000146b2ebdc * fStack_9c4;
        fStack_12d0 = fStack_984 * fStack_9e0 + local_988 * fStack_9f0 + fStack_980 * fStack_9d0 +
                      fRam0000000146b2ebdc * fStack_9c0;
        fStack_12cc = fStack_984 * fStack_9ec + local_988 * fStack_9ec + fStack_980 * fStack_9ec +
                      fRam0000000146b2ebdc * fRam0000000146b2ebdc;
        fStack_9dc = fStack_9ec;
        fStack_9cc = fStack_9ec;
        fStack_99c = fStack_9ac;
        fStack_98c = fStack_9ac;
        FMatrix::RemoveScaling(&local_1308);
        fVar114 = (float)(-(uint)(fVar114 <= fVar81 * auVar48._0_4_) &
                          (_DAT_146b2fa50 ^ (uint)_DAT_146b2ebd0) ^ _DAT_146b2fa50);
        fVar118 = (float)(-(uint)(fVar118 <= fVar82 * auVar48._4_4_) &
                          (uRam0000000146b2fa54 ^ (uint)fRam0000000146b2ebd4) ^ uRam0000000146b2fa54
                         );
        fVar120 = (float)(-(uint)(fVar120 <= fVar88 * auVar48._8_4_) &
                          (uRam0000000146b2fa58 ^ (uint)fRam0000000146b2ebd8) ^ uRam0000000146b2fa58
                         );
        local_1308 = local_1308 * fVar114;
        fStack_1304 = fStack_1304 * fVar114;
        fStack_1300 = fStack_1300 * fVar114;
        fStack_12f4 = fStack_12f4 * fVar118;
        fStack_12f0 = fStack_12f0 * fVar118;
        local_12f8 = local_12f8 * fVar118;
        fStack_12e4 = fStack_12e4 * fVar120;
        fStack_12e0 = fStack_12e0 * fVar120;
        local_12e8 = local_12e8 * fVar120;
        FQuat::FQuat(&local_f18,&local_1308);
        local_15a0 = 1e-08;
        auVar67._0_4_ = local_f18 * local_f18 + fStack_f10 * fStack_f10;
        auVar67._4_4_ = fStack_f14 * fStack_f14 + fStack_f0c * fStack_f0c;
        auVar67._8_4_ = fStack_f10 * fStack_f10 + local_f18 * local_f18;
        auVar67._12_4_ = fStack_f0c * fStack_f0c + fStack_f14 * fStack_f14;
        auVar99._0_4_ = auVar67._4_4_ + auVar67._0_4_;
        auVar99._4_4_ = auVar67._8_4_ + auVar67._4_4_;
        auVar99._8_4_ = auVar67._12_4_ + auVar67._8_4_;
        auVar99._12_4_ = auVar67._0_4_ + auVar67._12_4_;
        auVar45 = rsqrtps(auVar67,auVar99);
        fVar114 = auVar45._0_4_;
        fVar118 = auVar45._4_4_;
        fVar120 = auVar45._8_4_;
        fVar85 = auVar45._12_4_;
        fVar114 = (fVar44 - fVar114 * fVar114 * auVar99._0_4_ * fVar44) * fVar114 + fVar114;
        fVar118 = (fVar111 - fVar118 * fVar118 * auVar99._4_4_ * fVar111) * fVar118 + fVar118;
        fVar120 = (fVar112 - fVar120 * fVar120 * auVar99._8_4_ * fVar112) * fVar120 + fVar120;
        fVar85 = (fVar113 - fVar85 * fVar85 * auVar99._12_4_ * fVar113) * fVar85 + fVar85;
        local_11f8._4_4_ = fStack_12d4;
        local_11f8._0_4_ = local_12d8;
        uStack_11f0._0_4_ = fStack_12d0;
        local_1208 = (float)(((uint)(((fVar44 - fVar114 * fVar114 * auVar99._0_4_ * fVar44) *
                                      fVar114 + fVar114) * local_f18) ^ _DAT_146b2ec60) &
                             -(uint)(1e-08 <= auVar99._0_4_) ^ _DAT_146b2ec60);
        fStack_1204 = (float)(((uint)(((fVar111 - fVar118 * fVar118 * auVar99._4_4_ * fVar111) *
                                       fVar118 + fVar118) * fStack_f14) ^ uRam0000000146b2ec64) &
                              -(uint)(1e-08 <= auVar99._4_4_) ^ uRam0000000146b2ec64);
        fStack_1200 = (float)(((uint)(((fVar112 - fVar120 * fVar120 * auVar99._8_4_ * fVar112) *
                                       fVar120 + fVar120) * fStack_f10) ^ uRam0000000146b2ec68) &
                              -(uint)(1e-08 <= auVar99._8_4_) ^ uRam0000000146b2ec68);
        fStack_11fc = (float)(((uint)(((fVar113 - fVar85 * fVar85 * auVar99._12_4_ * fVar113) *
                                       fVar85 + fVar85) * fStack_f0c) ^ uRam0000000146b2ec6c) &
                              -(uint)(1e-08 <= auVar99._12_4_) ^ uRam0000000146b2ec6c);
        uStack_11f0._4_4_ = 0.0;
        local_f18 = local_1208;
        fStack_f14 = fStack_1204;
        fStack_f10 = fStack_1200;
        fStack_f0c = fStack_11fc;
      }
      fStack_11dc = fVar84 * auVar48._12_4_;
      fStack_11e0 = fVar88 * auVar48._8_4_;
      fStack_11e4 = fVar82 * auVar48._4_4_;
      local_11e8 = fVar81 * auVar48._0_4_;
      local_e58 = local_1208;
      fStack_e54 = fStack_1204;
      fStack_e50 = fStack_1200;
      fStack_e4c = fStack_11fc;
      FQuat::Rotator(&local_e58,&local_1168);
      fVar113 = DAT_1468b5d90 * local_11e8;
      fVar114 = DAT_1468b5d94 * fStack_11e4;
      fVar118 = DAT_1468b5d98 * fStack_11e0;
      fVar44 = fVar118 * fStack_1204 - fVar114 * fStack_1200;
      fVar111 = fVar113 * fStack_1200 - fVar118 * local_1208;
      fVar112 = fVar114 * local_1208 - fVar113 * fStack_1204;
      fVar44 = fVar44 + fVar44;
      fVar111 = fVar111 + fVar111;
      fVar112 = fVar112 + fVar112;
      local_1530 = *(float *)(param_1 + 0x240) -
                   ((fVar112 * fStack_1204 - fVar111 * fStack_1200) + fStack_11fc * fVar44 + fVar113
                   + (float)local_11f8._0_4_);
      local_152c = *(float *)(param_1 + 0x244) -
                   ((fVar44 * fStack_1200 - fVar112 * local_1208) + fStack_11fc * fVar111 + fVar114
                   + (float)local_11f8._4_4_);
      local_1528 = *(float *)(param_1 + 0x248) -
                   ((fVar111 * local_1208 - fVar44 * fStack_1204) + fStack_11fc * fVar112 + fVar118
                   + (float)uStack_11f0);
      fVar44 = local_152c * local_152c + local_1530 * local_1530 + local_1528 * local_1528;
      if (fVar44 != 1.0) {
        if (1e-08 <= fVar44) {
          auVar48 = rsqrtss(ZEXT416((uint)fVar44),ZEXT416((uint)fVar44));
          fVar111 = auVar48._0_4_;
          fVar111 = fVar111 + fVar111 * (0.5 - fVar44 * 0.5 * fVar111 * fVar111);
          fVar111 = fVar111 + fVar111 * (0.5 - fVar44 * 0.5 * fVar111 * fVar111);
          local_1588._0_4_ = fVar111;
          local_1530 = local_1530 * fVar111;
          local_152c = local_152c * fVar111;
          local_1528 = fVar111 * local_1528;
        }
        else {
          local_1530 = DAT_1468b5d90;
          local_152c = DAT_1468b5d94;
          local_1528 = DAT_1468b5d98;
        }
      }
      FVector::Rotation(&local_1530,&local_1520);
      fVar44 = (float)DAT_146b2fa40;
      fVar111 = DAT_146b2fa40._4_4_;
      fVar112 = DAT_146b2fa40._8_4_;
      fVar113 = DAT_146b2fa40._12_4_;
      if (*(char *)((longlong)auVar38 + 0x40) != '\0') {
        local_1520 = local_1520 + *(float *)((longlong)auVar38 + 0x34);
        local_151c = local_151c + *(float *)((longlong)auVar38 + 0x38);
        local_1518 = local_1518 + *(float *)((longlong)auVar38 + 0x3c);
        auVar52._4_4_ = local_151c;
        auVar52._0_4_ = local_1520;
        auVar52._8_4_ = local_1518;
        auVar52._12_4_ = 0;
        auVar48 = divps(auVar52,_DAT_146b2fa40);
        local_1520 = local_1520 - (float)(int)auVar48._0_4_ * fVar44;
        local_151c = local_151c - (float)(int)auVar48._4_4_ * fVar111;
        local_1518 = local_1518 - (float)(int)auVar48._8_4_ * fVar112;
        local_1520 = (float)(-(uint)(0.0 <= local_1520) &
                             ((uint)(local_1520 + fVar44) ^ (uint)local_1520) ^
                            (uint)(local_1520 + fVar44));
        local_151c = (float)(-(uint)(0.0 <= local_151c) &
                             ((uint)(local_151c + fVar111) ^ (uint)local_151c) ^
                            (uint)(local_151c + fVar111));
        local_1518 = (float)(-(uint)(0.0 <= local_1518) &
                             ((uint)(local_1518 + fVar112) ^ (uint)local_1518) ^
                            (uint)(local_1518 + fVar112));
        local_1520 = (float)(((uint)(local_1520 - fVar44) ^ (uint)local_1520) &
                             -(uint)(_DAT_146b2fa30 < local_1520) ^ (uint)local_1520);
        local_151c = (float)(((uint)(local_151c - fVar111) ^ (uint)local_151c) &
                             -(uint)(fRam0000000146b2fa34 < local_151c) ^ (uint)local_151c);
        local_1518 = (float)(((uint)(local_1518 - fVar112) ^ (uint)local_1518) &
                             -(uint)(fRam0000000146b2fa38 < local_1518) ^ (uint)local_1518);
      }
      fVar118 = local_151c - local_154c;
      fVar114 = (float)(int)(fVar118 * 0.0027777778) * 360.0;
      if (ABS(fVar118) < ABS(fVar114)) {
        fVar114 = fVar118;
      }
      fVar118 = fVar118 - fVar114;
      if (fVar118 < 0.0) {
        fVar118 = fVar118 + 360.0;
      }
      if (180.0 < fVar118) {
        fVar118 = fVar118 - 360.0;
      }
      fVar114 = *(float *)((longlong)auVar38 + 0x24) - *(float *)((longlong)auVar38 + 0x28);
      if ((fVar114 <= fVar118) &&
         (fVar114 = *(float *)((longlong)auVar38 + 0x24) + *(float *)((longlong)auVar38 + 0x28),
         fVar118 <= fVar114)) {
        fVar114 = fVar118;
      }
      fVar118 = local_1520 - local_1168;
      fVar120 = (fVar114 + local_154c) - local_1164;
      fVar114 = (float)(int)(fVar118 * 0.0027777778) * 360.0;
      if (ABS(fVar118) < ABS(fVar114)) {
        fVar114 = fVar118;
      }
      fVar118 = fVar118 - fVar114;
      if (fVar118 < 0.0) {
        fVar118 = fVar118 + 360.0;
      }
      if (180.0 < fVar118) {
        fVar118 = fVar118 - 360.0;
      }
      fVar114 = *(float *)((longlong)auVar38 + 0x2c) - *(float *)((longlong)auVar38 + 0x30);
      fVar81 = *(float *)((longlong)auVar38 + 0x2c) + *(float *)((longlong)auVar38 + 0x30);
      if ((fVar114 <= fVar118) && (fVar114 = fVar81, fVar118 < fVar81)) {
        fVar114 = fVar118;
      }
      auVar53._4_4_ = fVar120;
      auVar53._0_4_ = fVar114;
      auVar53._8_8_ = 0;
      auVar48 = divps(auVar53,_DAT_146b2fa40);
      fVar114 = fVar114 - (float)(int)auVar48._0_4_ * fVar44;
      fVar120 = fVar120 - (float)(int)auVar48._4_4_ * fVar111;
      fVar118 = 0.0 - (float)(int)auVar48._8_4_ * fVar112;
      fVar81 = 0.0 - (float)(int)auVar48._12_4_ * fVar113;
      local_1568._0_4_ =
           ((uint)(fVar114 + fVar44) ^ (uint)fVar114) & -(uint)(0.0 <= fVar114) ^
           (uint)(fVar114 + fVar44);
      local_1568._4_4_ =
           ((uint)(fVar120 + fVar111) ^ (uint)fVar120) & -(uint)(0.0 <= fVar120) ^
           (uint)(fVar120 + fVar111);
      fStack_1560 = (float)(((uint)(fVar118 + fVar112) ^ (uint)fVar118) & -(uint)(0.0 <= fVar118) ^
                           (uint)(fVar118 + fVar112));
      fVar114 = (float)(((uint)(fVar81 + fVar113) ^ (uint)fVar81) & -(uint)(0.0 <= fVar81) ^
                       (uint)(fVar81 + fVar113));
      local_1568._0_4_ =
           ((uint)((float)local_1568._0_4_ - fVar44) ^ local_1568._0_4_) &
           -(uint)(_DAT_146b2fa30 < (float)local_1568._0_4_) ^ local_1568._0_4_;
      local_1568._4_4_ =
           ((uint)((float)local_1568._4_4_ - fVar111) ^ local_1568._4_4_) &
           -(uint)(fRam0000000146b2fa34 < (float)local_1568._4_4_) ^ local_1568._4_4_;
      fStack_1560 = (float)(((uint)(fStack_1560 - fVar112) ^ (uint)fStack_1560) &
                            -(uint)(fRam0000000146b2fa38 < fStack_1560) ^ (uint)fStack_1560);
      fStack_155c = (float)(((uint)(fVar114 - fVar113) ^ (uint)fVar114) &
                            -(uint)(fRam0000000146b2fa3c < fVar114) ^ (uint)fVar114);
      fVar113 = *(float *)(param_1 + 0x54) * *(float *)((longlong)auVar38 + 0x18) *
                *(float *)(param_1 + 0x1b0);
      local_15a0 = fVar113 * *(float *)((longlong)auVar38 + 0x20);
      fVar113 = fVar113 * *(float *)((longlong)auVar38 + 0x1c);
      if (1e-05 < fVar113) {
        fVar113 = (float)local_1568._4_4_ * fVar113;
      }
      else {
        fVar113 = 0.0;
      }
      if (1e-05 < local_15a0) {
        local_15a0 = (float)local_1568._0_4_ * local_15a0;
      }
      else {
        local_15a0 = 0.0;
      }
      fVar114 = (ABS(local_1528) - 0.8) * 5.0000005;
      if (0.0 <= fVar114) {
        if (1.0 <= fVar114) {
          fVar114 = 1.0;
        }
      }
      else {
        fVar114 = 0.0;
      }
      fVar113 = fVar113 * (1.0 - fVar114);
      local_1588._0_4_ = fStack_1560;
      fVar118 = local_1164 + fVar113;
      auVar54._4_4_ = fVar118;
      auVar54._0_4_ = local_15a0 + local_1168;
      auVar54._8_4_ = fStack_1560 + local_1160;
      auVar54._12_4_ = 0;
      auVar48 = divps(auVar54,_DAT_146b2fa40);
      fVar114 = (local_15a0 + local_1168) - (float)(int)auVar48._0_4_ * fVar44;
      fVar118 = fVar118 - (float)(int)auVar48._4_4_ * fVar111;
      fVar120 = (fStack_1560 + local_1160) - (float)(int)auVar48._8_4_ * fVar112;
      fVar114 = (float)(((uint)(fVar114 + fVar44) ^ (uint)fVar114) & -(uint)(0.0 <= fVar114) ^
                       (uint)(fVar114 + fVar44));
      fVar118 = (float)(((uint)(fVar118 + fVar111) ^ (uint)fVar118) & -(uint)(0.0 <= fVar118) ^
                       (uint)(fVar118 + fVar111));
      fVar120 = (float)(((uint)(fVar120 + fVar112) ^ (uint)fVar120) & -(uint)(0.0 <= fVar120) ^
                       (uint)(fVar120 + fVar112));
      local_1468 = ((uint)(fVar120 - fVar112) ^ (uint)fVar120) &
                   -(uint)(fRam0000000146b2fa38 < fVar120) ^ (uint)fVar120;
      local_1470 = CONCAT44(((uint)(fVar118 - fVar111) ^ (uint)fVar118) &
                            -(uint)(fRam0000000146b2fa34 < fVar118) ^ (uint)fVar118,
                            ((uint)(fVar114 - fVar44) ^ (uint)fVar114) &
                            -(uint)(_DAT_146b2fa30 < fVar114) ^ (uint)fVar114);
      local_1198 = CONCAT44(fStack_1204,local_1208);
      uStack_1190 = CONCAT44(fStack_11fc,fStack_1200);
      local_1178 = local_11e8;
      fStack_1174 = fStack_11e4;
      fStack_1170 = fStack_11e0;
      fStack_116c = fStack_11dc;
      local_1188 = local_11f8;
      uStack_1180 = uStack_11f0;
      pfVar22 = (float *)FRotator::Quaternion(&local_1470,local_578);
      fVar86 = fStack_116c;
      fVar78 = fStack_1170;
      fVar77 = fStack_1174;
      fVar90 = local_1178;
      fVar110 = fRam0000000146b2ec7c;
      fVar109 = fRam0000000146b2ec78;
      fVar91 = fRam0000000146b2ec74;
      fVar89 = _DAT_146b2ec70;
      uVar122 = uRam0000000146b2ebec;
      uVar121 = uRam0000000146b2ebe8;
      uVar119 = uRam0000000146b2ebe4;
      uVar40 = _DAT_146b2ebe0;
      fVar85 = fRam0000000146b2ebd8;
      fVar84 = fRam0000000146b2ebd4;
      fVar88 = _DAT_146b2ebd0;
      auVar9._4_4_ = fStack_1174;
      auVar9._0_4_ = local_1178;
      auVar9._8_4_ = fStack_1170;
      auVar9._12_4_ = fStack_116c;
      fVar118 = *pfVar22;
      fVar120 = pfVar22[1];
      local_1198 = *(undefined8 *)pfVar22;
      fVar81 = pfVar22[2];
      fVar82 = pfVar22[3];
      uStack_1190 = *(undefined8 *)(pfVar22 + 2);
      auVar48 = *(undefined1 (*) [16])(&DAT_146b2ed00 + lVar17);
      fVar44 = auVar48._0_4_;
      fVar111 = auVar48._4_4_;
      fVar112 = auVar48._8_4_;
      fVar114 = auVar48._12_4_;
      auVar48 = minps(auVar48,auVar9);
      if (cVar43 == '\0') {
        auVar59._4_4_ = -(uint)(auVar48._4_4_ < fRam0000000146b2fa64);
        auVar59._0_4_ = -(uint)(auVar48._0_4_ < _DAT_146b2fa60);
        auVar59._8_4_ = -(uint)(auVar48._8_4_ < fRam0000000146b2fa68);
        auVar59._12_4_ = -(uint)(auVar48._12_4_ < fRam0000000146b2fa6c);
        iVar27 = movmskps((int)pfVar22,auVar59);
        local_1568._4_4_ = fRam0000000146b2fa64;
        local_1568._0_4_ = _DAT_146b2fa60;
        fStack_1560 = fRam0000000146b2fa68;
        fStack_155c = fRam0000000146b2fa6c;
        if (iVar27 == 0) {
          fVar113 = *(float *)(&DAT_146b2ece0 + lVar17);
          fVar88 = *(float *)(lVar17 + 0x146b2ece4);
          fVar84 = *(float *)(lVar17 + 0x146b2ece8);
          fVar85 = *(float *)(lVar17 + 0x146b2ecec);
          fVar89 = *(float *)(&DAT_146b2ecf0 + lVar17) * local_1178;
          fVar91 = *(float *)(lVar17 + 0x146b2ecf4) * fStack_1174;
          fVar109 = *(float *)(lVar17 + 0x146b2ecf8) * fStack_1170;
          fVar110 = *(float *)(lVar17 + 0x146b2ecfc) * fStack_116c;
          local_e98 = fVar118 * fVar85 * _DAT_146b2eca0 + fVar113 * fVar82 +
                      fVar120 * fVar84 * _DAT_146b2ec90 + fVar81 * fVar88 * _DAT_146b2ec80;
          fStack_e94 = fVar118 * fVar84 * fRam0000000146b2eca4 + fVar88 * fVar82 +
                       fVar120 * fVar85 * fRam0000000146b2ec94 +
                       fVar81 * fVar113 * fRam0000000146b2ec84;
          fStack_e90 = fVar118 * fVar88 * fRam0000000146b2eca8 + fVar84 * fVar82 +
                       fVar120 * fVar113 * fRam0000000146b2ec98 +
                       fVar81 * fVar85 * fRam0000000146b2ec88;
          fStack_e8c = fVar118 * fVar113 * fRam0000000146b2ecac + fVar85 * fVar82 +
                       fVar120 * fVar88 * fRam0000000146b2ec9c +
                       fVar81 * fVar84 * fRam0000000146b2ec8c;
          fVar113 = fVar109 * fVar120 - fVar91 * fVar81;
          fVar88 = fVar89 * fVar81 - fVar109 * fVar118;
          fVar84 = fVar91 * fVar118 - fVar89 * fVar120;
          fVar85 = fVar110 * fVar82 - fVar110 * fVar82;
          fVar113 = fVar113 + fVar113;
          fVar88 = fVar88 + fVar88;
          fVar84 = fVar84 + fVar84;
          fVar85 = fVar85 + fVar85;
          local_e88 = (fVar84 * fVar120 - fVar88 * fVar81) + fVar113 * fVar82 + fVar89;
          fStack_e84 = (fVar113 * fVar81 - fVar84 * fVar118) + fVar88 * fVar82 + fVar91;
          fStack_e80 = (fVar88 * fVar118 - fVar113 * fVar120) + fVar84 * fVar82 + fVar109;
          fStack_e7c = (fVar85 * fVar82 - fVar85 * fVar82) + fVar85 * fVar82 + fVar110;
          goto LAB_142c54503;
        }
        fVar113 = fVar120 + fVar120;
        fVar89 = fVar81 + fVar81;
        fVar44 = fVar44 * local_1178;
        fVar111 = fVar111 * fStack_1174;
        fVar112 = fVar112 * fStack_1170;
        fVar114 = fVar114 * fStack_116c;
        fVar91 = (fVar118 + fVar118) * fVar118;
        fVar109 = fVar82 * (fVar118 + fVar118);
        fStack_7f4 = (fVar82 * fVar89 + fVar118 * fVar113) * local_1178;
        fStack_7e0 = (fVar109 + fVar120 * fVar89) * fStack_1174;
        local_7d8 = (fVar82 * fVar113 + fVar118 * fVar89) * fStack_1170;
        local_7e8 = fStack_1174 * (fVar118 * fVar113 - fVar82 * fVar89);
        fStack_7d4 = fStack_1170 * (fVar120 * fVar89 - fVar109);
        fStack_7f0 = local_1178 * (fVar118 * fVar89 - fVar82 * fVar113);
        local_7f8 = (float)((uint)((_DAT_146b2ebd0 - (fVar89 * fVar81 + fVar113 * fVar120)) *
                                  local_1178) & _DAT_146b2ebe0);
        fStack_7e4 = (float)((uint)((fRam0000000146b2ebd4 - (fVar89 * fVar81 + fVar91)) *
                                   fStack_1174) & uRam0000000146b2ebe4);
        fStack_7d0 = (float)((uint)((fRam0000000146b2ebd8 - (fVar113 * fVar120 + fVar91)) *
                                   fStack_1170) & uRam0000000146b2ebe8);
        fStack_7ec = (float)((uint)((fRam0000000146b2ebdc - (fVar91 + fVar91)) * fStack_116c) &
                            uRam0000000146b2ebec);
        local_7c8 = (float)local_1188;
        fStack_7c4 = local_1188._4_4_;
        fStack_7c0 = (float)uStack_1180;
        fStack_7bc = fRam0000000146b2ebdc;
        fVar113 = *(float *)(&DAT_146b2ece0 + lVar17);
        fVar118 = *(float *)(lVar17 + 0x146b2ece4);
        fVar120 = *(float *)(lVar17 + 0x146b2ece8);
        fVar81 = *(float *)(lVar17 + 0x146b2ecec);
        fVar109 = fVar118 + fVar118;
        fVar90 = fVar120 + fVar120;
        fVar77 = (fVar113 + fVar113) * fVar113;
        fVar110 = (fVar113 + fVar113) * fVar81;
        fVar82 = *(float *)(&DAT_146b2ed00 + lVar17);
        fVar89 = *(float *)(lVar17 + 0x146b2ed04);
        fVar91 = *(float *)(lVar17 + 0x146b2ed08);
        fStack_7b4 = (fVar90 * fVar81 + fVar109 * fVar113) * fVar82;
        fStack_7a0 = (fVar110 + fVar90 * fVar118) * fVar89;
        local_798 = (fVar109 * fVar81 + fVar90 * fVar113) * fVar91;
        local_7a8 = fVar89 * (fVar109 * fVar113 - fVar90 * fVar81);
        fStack_794 = fVar91 * (fVar90 * fVar118 - fVar110);
        fStack_7b0 = fVar82 * (fVar90 * fVar113 - fVar109 * fVar81);
        local_7b8 = (float)((uint)((_DAT_146b2ebd0 - (fVar90 * fVar120 + fVar109 * fVar118)) *
                                  fVar82) & _DAT_146b2ebe0);
        fStack_7a4 = (float)((uint)((fRam0000000146b2ebd4 - (fVar90 * fVar120 + fVar77)) * fVar89) &
                            uRam0000000146b2ebe4);
        fStack_790 = (float)((uint)((fRam0000000146b2ebd8 - (fVar109 * fVar118 + fVar77)) * fVar91)
                            & uRam0000000146b2ebe8);
        fStack_7ac = (float)((uint)((fRam0000000146b2ebdc - (fVar77 + fVar77)) *
                                   *(float *)(lVar17 + 0x146b2ed0c)) & uRam0000000146b2ebec);
        local_788 = *(float *)(&DAT_146b2ecf0 + lVar17);
        fStack_784 = *(float *)(lVar17 + 0x146b2ecf4);
        fStack_780 = *(float *)(lVar17 + 0x146b2ecf8);
        fStack_77c = fRam0000000146b2ebdc;
        local_1008 = fStack_7b4 * local_7e8 + local_7b8 * local_7f8 + fStack_7b0 * local_7d8 +
                     fStack_7ac * (float)local_1188;
        fStack_1004 = fStack_7b4 * fStack_7e4 + local_7b8 * fStack_7f4 + fStack_7b0 * fStack_7d4 +
                      fStack_7ac * local_1188._4_4_;
        fStack_1000 = fStack_7b4 * fStack_7e0 + local_7b8 * fStack_7f0 + fStack_7b0 * fStack_7d0 +
                      fStack_7ac * (float)uStack_1180;
        fStack_ffc = fStack_7b4 * fStack_7ec + local_7b8 * fStack_7ec + fStack_7b0 * fStack_7ec +
                     fStack_7ac * fRam0000000146b2ebdc;
        local_ff8 = fStack_7a4 * local_7e8 + local_7a8 * local_7f8 + fStack_7a0 * local_7d8 +
                    fStack_7ac * (float)local_1188;
        fStack_ff4 = fStack_7a4 * fStack_7e4 + local_7a8 * fStack_7f4 + fStack_7a0 * fStack_7d4 +
                     fStack_7ac * local_1188._4_4_;
        fStack_ff0 = fStack_7a4 * fStack_7e0 + local_7a8 * fStack_7f0 + fStack_7a0 * fStack_7d0 +
                     fStack_7ac * (float)uStack_1180;
        fStack_fec = fStack_7a4 * fStack_7ec + local_7a8 * fStack_7ec + fStack_7a0 * fStack_7ec +
                     fStack_7ac * fRam0000000146b2ebdc;
        local_fe8 = fStack_794 * local_7e8 + local_798 * local_7f8 + fStack_790 * local_7d8 +
                    fStack_7ac * (float)local_1188;
        fStack_fe4 = fStack_794 * fStack_7e4 + local_798 * fStack_7f4 + fStack_790 * fStack_7d4 +
                     fStack_7ac * local_1188._4_4_;
        fStack_fe0 = fStack_794 * fStack_7e0 + local_798 * fStack_7f0 + fStack_790 * fStack_7d0 +
                     fStack_7ac * (float)uStack_1180;
        fStack_fdc = fStack_794 * fStack_7ec + local_798 * fStack_7ec + fStack_790 * fStack_7ec +
                     fStack_7ac * fRam0000000146b2ebdc;
        local_fd8 = fStack_784 * local_7e8 + local_788 * local_7f8 + fStack_780 * local_7d8 +
                    fRam0000000146b2ebdc * (float)local_1188;
        fStack_fd4 = fStack_784 * fStack_7e4 + local_788 * fStack_7f4 + fStack_780 * fStack_7d4 +
                     fRam0000000146b2ebdc * local_1188._4_4_;
        fStack_fd0 = fStack_784 * fStack_7e0 + local_788 * fStack_7f0 + fStack_780 * fStack_7d0 +
                     fRam0000000146b2ebdc * (float)uStack_1180;
        fStack_fcc = fStack_784 * fStack_7ec + local_788 * fStack_7ec + fStack_780 * fStack_7ec +
                     fRam0000000146b2ebdc * fRam0000000146b2ebdc;
        fStack_7dc = fStack_7ec;
        fStack_7cc = fStack_7ec;
        fStack_79c = fStack_7ac;
        fStack_78c = fStack_7ac;
        FMatrix::RemoveScaling(&local_1008);
        fVar113 = (float)(-(uint)((float)local_1568._0_4_ <= fVar44) &
                          (_DAT_146b2fa50 ^ (uint)fVar88) ^ _DAT_146b2fa50);
        fVar118 = (float)(-(uint)((float)local_1568._4_4_ <= fVar111) &
                          (uRam0000000146b2fa54 ^ (uint)fVar84) ^ uRam0000000146b2fa54);
        fVar120 = (float)(-(uint)(fStack_1560 <= fVar112) & (uRam0000000146b2fa58 ^ (uint)fVar85) ^
                         uRam0000000146b2fa58);
        pfVar22 = (float *)FMatrix::GetScaledAxis(&local_1008,local_d48,1);
        local_1008 = fVar113 * *pfVar22;
        fStack_1004 = fVar113 * pfVar22[1];
        fStack_1000 = fVar113 * pfVar22[2];
        pfVar22 = (float *)FMatrix::GetScaledAxis(&local_1008,local_c28,2);
        local_ff8 = fVar118 * *pfVar22;
        fStack_ff4 = fVar118 * pfVar22[1];
        fStack_ff0 = fVar118 * pfVar22[2];
        pfVar22 = (float *)FMatrix::GetScaledAxis(&local_1008,local_c34,3);
        local_fe8 = fVar120 * *pfVar22;
        fStack_fe4 = fVar120 * pfVar22[1];
        fStack_fe0 = fVar120 * pfVar22[2];
        FQuat::FQuat(&local_14e8,&local_1008);
        local_1588._0_4_ = 0x322bcc77;
        auVar71._0_4_ = local_14e8 * local_14e8 + fStack_14e0 * fStack_14e0;
        auVar71._4_4_ = fStack_14e4 * fStack_14e4 + fStack_14dc * fStack_14dc;
        auVar71._8_4_ = fStack_14e0 * fStack_14e0 + local_14e8 * local_14e8;
        auVar71._12_4_ = fStack_14dc * fStack_14dc + fStack_14e4 * fStack_14e4;
        auVar103._0_4_ = auVar71._4_4_ + auVar71._0_4_;
        auVar103._4_4_ = auVar71._8_4_ + auVar71._4_4_;
        auVar103._8_4_ = auVar71._12_4_ + auVar71._8_4_;
        auVar103._12_4_ = auVar71._0_4_ + auVar71._12_4_;
        auVar48 = rsqrtps(auVar71,auVar103);
        fVar113 = auVar48._0_4_;
        fVar118 = auVar48._4_4_;
        fVar120 = auVar48._8_4_;
        fVar81 = auVar48._12_4_;
        fVar113 = (_DAT_146b2ec70 - fVar113 * fVar113 * auVar103._0_4_ * _DAT_146b2ec70) * fVar113 +
                  fVar113;
        fVar118 = (fRam0000000146b2ec74 - fVar118 * fVar118 * auVar103._4_4_ * fRam0000000146b2ec74)
                  * fVar118 + fVar118;
        fVar120 = (fRam0000000146b2ec78 - fVar120 * fVar120 * auVar103._8_4_ * fRam0000000146b2ec78)
                  * fVar120 + fVar120;
        fVar81 = (fRam0000000146b2ec7c - fVar81 * fVar81 * auVar103._12_4_ * fRam0000000146b2ec7c) *
                 fVar81 + fVar81;
        local_e98 = (float)(((uint)(((_DAT_146b2ec70 -
                                     fVar113 * fVar113 * auVar103._0_4_ * _DAT_146b2ec70) * fVar113
                                    + fVar113) * local_14e8) ^ _DAT_146b2ec60) &
                            -(uint)(1e-08 <= auVar103._0_4_) ^ _DAT_146b2ec60);
        fStack_e94 = (float)(((uint)(((fRam0000000146b2ec74 -
                                      fVar118 * fVar118 * auVar103._4_4_ * fRam0000000146b2ec74) *
                                      fVar118 + fVar118) * fStack_14e4) ^ uRam0000000146b2ec64) &
                             -(uint)(1e-08 <= auVar103._4_4_) ^ uRam0000000146b2ec64);
        fStack_e90 = (float)(((uint)(((fRam0000000146b2ec78 -
                                      fVar120 * fVar120 * auVar103._8_4_ * fRam0000000146b2ec78) *
                                      fVar120 + fVar120) * fStack_14e0) ^ uRam0000000146b2ec68) &
                             -(uint)(1e-08 <= auVar103._8_4_) ^ uRam0000000146b2ec68);
        fStack_e8c = (float)(((uint)(((fRam0000000146b2ec7c -
                                      fVar81 * fVar81 * auVar103._12_4_ * fRam0000000146b2ec7c) *
                                      fVar81 + fVar81) * fStack_14dc) ^ uRam0000000146b2ec6c) &
                             -(uint)(1e-08 <= auVar103._12_4_) ^ uRam0000000146b2ec6c);
        fStack_e7c = 0.0;
        local_e88 = local_fd8;
        fStack_e84 = fStack_fd4;
        fStack_e80 = fStack_fd0;
        local_14e8 = local_e98;
        fStack_14e4 = fStack_e94;
        fStack_14e0 = fStack_e90;
        fStack_14dc = fStack_e8c;
      }
      else {
        auVar55._4_4_ = -(uint)(auVar48._4_4_ < fRam0000000146b2fa64);
        auVar55._0_4_ = -(uint)(auVar48._0_4_ < _DAT_146b2fa60);
        auVar55._8_4_ = -(uint)(auVar48._8_4_ < fRam0000000146b2fa68);
        auVar55._12_4_ = -(uint)(auVar48._12_4_ < fRam0000000146b2fa6c);
        iVar27 = movmskps((int)pfVar22,auVar55);
        local_1568._4_4_ = fRam0000000146b2fa64;
        local_1568._0_4_ = _DAT_146b2fa60;
        fStack_1560 = fRam0000000146b2fa68;
        fStack_155c = fRam0000000146b2fa6c;
        if (iVar27 == 0) {
          fVar88 = *(float *)(&DAT_146b2ece0 + lVar17);
          fVar84 = *(float *)(lVar17 + 0x146b2ece4);
          fVar85 = *(float *)(lVar17 + 0x146b2ece8);
          fVar92 = *(float *)(lVar17 + 0x146b2ecec);
          fVar87 = *(float *)(&DAT_146b2ecf0 + lVar17) * local_1178;
          fVar80 = *(float *)(lVar17 + 0x146b2ecf4) * fStack_1174;
          fVar83 = *(float *)(lVar17 + 0x146b2ecf8) * fStack_1170;
          fVar93 = *(float *)(lVar17 + 0x146b2ecfc) * fStack_116c;
          local_4c8 = fVar92 * fVar118 * _DAT_146b2eca0 + fVar82 * fVar88 +
                      fVar85 * fVar120 * _DAT_146b2ec90 + fVar84 * fVar81 * _DAT_146b2ec80;
          fStack_4c4 = fVar85 * fVar118 * fRam0000000146b2eca4 + fVar82 * fVar84 +
                       fVar92 * fVar120 * fRam0000000146b2ec94 +
                       fVar88 * fVar81 * fRam0000000146b2ec84;
          fStack_4c0 = fVar84 * fVar118 * fRam0000000146b2eca8 + fVar82 * fVar85 +
                       fVar88 * fVar120 * fRam0000000146b2ec98 +
                       fVar92 * fVar81 * fRam0000000146b2ec88;
          fStack_4bc = fVar88 * fVar118 * fRam0000000146b2ecac + fVar82 * fVar92 +
                       fVar84 * fVar120 * fRam0000000146b2ec9c +
                       fVar85 * fVar81 * fRam0000000146b2ec8c;
          fVar84 = fVar83 * fVar120 - fVar80 * fVar81;
          fVar85 = fVar87 * fVar81 - fVar83 * fVar118;
          fVar92 = fVar80 * fVar118 - fVar87 * fVar120;
          fVar79 = fVar93 * fVar82 - fVar93 * fVar82;
          fVar84 = fVar84 + fVar84;
          fVar85 = fVar85 + fVar85;
          fVar92 = fVar92 + fVar92;
          fVar79 = fVar79 + fVar79;
          fVar88 = (fVar92 * fVar120 - fVar85 * fVar81) + fVar84 * fVar82 + fVar87 +
                   (float)local_1188;
          fVar81 = (fVar84 * fVar81 - fVar92 * fVar118) + fVar85 * fVar82 + fVar80 +
                   local_1188._4_4_;
          fVar118 = (fVar85 * fVar118 - fVar84 * fVar120) + fVar92 * fVar82 + fVar83 +
                    (float)uStack_1180;
          fVar120 = (fVar79 * fVar82 - fVar79 * fVar82) + fVar79 * fVar82 + fVar93 +
                    uStack_1180._4_4_;
          uVar14 = 0;
        }
        else {
          fVar92 = fVar120 + fVar120;
          fVar79 = fVar81 + fVar81;
          fVar115 = fVar44 * local_1178;
          fVar116 = fVar111 * fStack_1174;
          fVar117 = fVar112 * fStack_1170;
          fVar87 = (fVar118 + fVar118) * fVar118;
          fVar80 = fVar82 * (fVar118 + fVar118);
          fStack_974 = (fVar82 * fVar79 + fVar118 * fVar92) * local_1178;
          fStack_960 = (fVar80 + fVar120 * fVar79) * fStack_1174;
          local_958 = (fVar82 * fVar92 + fVar118 * fVar79) * fStack_1170;
          local_968 = fStack_1174 * (fVar118 * fVar92 - fVar82 * fVar79);
          fStack_954 = fStack_1170 * (fVar120 * fVar79 - fVar80);
          fStack_970 = local_1178 * (fVar118 * fVar79 - fVar82 * fVar92);
          local_978 = (float)((uint)((_DAT_146b2ebd0 - (fVar79 * fVar81 + fVar92 * fVar120)) *
                                    local_1178) & _DAT_146b2ebe0);
          fStack_964 = (float)((uint)((fRam0000000146b2ebd4 - (fVar79 * fVar81 + fVar87)) *
                                     fStack_1174) & uRam0000000146b2ebe4);
          fStack_950 = (float)((uint)((fRam0000000146b2ebd8 - (fVar92 * fVar120 + fVar87)) *
                                     fStack_1170) & uRam0000000146b2ebe8);
          fStack_96c = (float)((uint)((fRam0000000146b2ebdc - (fVar87 + fVar87)) * fStack_116c) &
                              uRam0000000146b2ebec);
          local_948 = (float)local_1188;
          fStack_944 = local_1188._4_4_;
          fStack_940 = (float)uStack_1180;
          fStack_93c = fRam0000000146b2ebdc;
          fVar118 = *(float *)(&DAT_146b2ece0 + lVar17);
          fVar120 = *(float *)(lVar17 + 0x146b2ece4);
          fVar81 = *(float *)(lVar17 + 0x146b2ece8);
          fVar82 = *(float *)(lVar17 + 0x146b2ecec);
          fVar80 = fVar120 + fVar120;
          fVar93 = fVar81 + fVar81;
          fVar94 = (fVar118 + fVar118) * fVar118;
          fVar83 = (fVar118 + fVar118) * fVar82;
          fVar92 = *(float *)(&DAT_146b2ed00 + lVar17);
          fVar79 = *(float *)(lVar17 + 0x146b2ed04);
          fVar87 = *(float *)(lVar17 + 0x146b2ed08);
          fStack_934 = (fVar93 * fVar82 + fVar80 * fVar118) * fVar92;
          fStack_920 = (fVar83 + fVar93 * fVar120) * fVar79;
          local_918 = (fVar80 * fVar82 + fVar93 * fVar118) * fVar87;
          local_928 = fVar79 * (fVar80 * fVar118 - fVar93 * fVar82);
          fStack_914 = fVar87 * (fVar93 * fVar120 - fVar83);
          fStack_930 = fVar92 * (fVar93 * fVar118 - fVar80 * fVar82);
          local_938 = (float)((uint)((_DAT_146b2ebd0 - (fVar93 * fVar81 + fVar80 * fVar120)) *
                                    fVar92) & _DAT_146b2ebe0);
          fStack_924 = (float)((uint)((fRam0000000146b2ebd4 - (fVar93 * fVar81 + fVar94)) * fVar79)
                              & uRam0000000146b2ebe4);
          fStack_910 = (float)((uint)((fRam0000000146b2ebd8 - (fVar80 * fVar120 + fVar94)) * fVar87)
                              & uRam0000000146b2ebe8);
          fStack_92c = (float)((uint)((fRam0000000146b2ebdc - (fVar94 + fVar94)) *
                                     *(float *)(lVar17 + 0x146b2ed0c)) & uRam0000000146b2ebec);
          local_908 = *(float *)(&DAT_146b2ecf0 + lVar17);
          fStack_904 = *(float *)(lVar17 + 0x146b2ecf4);
          fStack_900 = *(float *)(lVar17 + 0x146b2ecf8);
          fStack_8fc = fRam0000000146b2ebdc;
          local_1298 = fStack_934 * local_968 + local_938 * local_978 + fStack_930 * local_958 +
                       fStack_92c * (float)local_1188;
          fStack_1294 = fStack_934 * fStack_964 + local_938 * fStack_974 + fStack_930 * fStack_954 +
                        fStack_92c * local_1188._4_4_;
          fStack_1290 = fStack_934 * fStack_960 + local_938 * fStack_970 + fStack_930 * fStack_950 +
                        fStack_92c * (float)uStack_1180;
          fStack_128c = fStack_934 * fStack_96c + local_938 * fStack_96c + fStack_930 * fStack_96c +
                        fStack_92c * fRam0000000146b2ebdc;
          local_1288 = fStack_924 * local_968 + local_928 * local_978 + fStack_920 * local_958 +
                       fStack_92c * (float)local_1188;
          fStack_1284 = fStack_924 * fStack_964 + local_928 * fStack_974 + fStack_920 * fStack_954 +
                        fStack_92c * local_1188._4_4_;
          fStack_1280 = fStack_924 * fStack_960 + local_928 * fStack_970 + fStack_920 * fStack_950 +
                        fStack_92c * (float)uStack_1180;
          fStack_127c = fStack_924 * fStack_96c + local_928 * fStack_96c + fStack_920 * fStack_96c +
                        fStack_92c * fRam0000000146b2ebdc;
          local_1278 = fStack_914 * local_968 + local_918 * local_978 + fStack_910 * local_958 +
                       fStack_92c * (float)local_1188;
          fStack_1274 = fStack_914 * fStack_964 + local_918 * fStack_974 + fStack_910 * fStack_954 +
                        fStack_92c * local_1188._4_4_;
          fStack_1270 = fStack_914 * fStack_960 + local_918 * fStack_970 + fStack_910 * fStack_950 +
                        fStack_92c * (float)uStack_1180;
          fStack_126c = fStack_914 * fStack_96c + local_918 * fStack_96c + fStack_910 * fStack_96c +
                        fStack_92c * fRam0000000146b2ebdc;
          local_1268 = fStack_904 * local_968 + local_908 * local_978 + fStack_900 * local_958 +
                       fRam0000000146b2ebdc * (float)local_1188;
          fStack_1264 = fStack_904 * fStack_964 + local_908 * fStack_974 + fStack_900 * fStack_954 +
                        fRam0000000146b2ebdc * local_1188._4_4_;
          fStack_1260 = fStack_904 * fStack_960 + local_908 * fStack_970 + fStack_900 * fStack_950 +
                        fRam0000000146b2ebdc * (float)uStack_1180;
          fStack_125c = fStack_904 * fStack_96c + local_908 * fStack_96c + fStack_900 * fStack_96c +
                        fRam0000000146b2ebdc * fRam0000000146b2ebdc;
          fStack_95c = fStack_96c;
          fStack_94c = fStack_96c;
          fStack_91c = fStack_92c;
          fStack_90c = fStack_92c;
          FMatrix::RemoveScaling(&local_1298);
          fVar118 = (float)(-(uint)((float)local_1568._0_4_ <= fVar115) &
                            (_DAT_146b2fa50 ^ (uint)fVar88) ^ _DAT_146b2fa50);
          fVar120 = (float)(-(uint)((float)local_1568._4_4_ <= fVar116) &
                            (uRam0000000146b2fa54 ^ (uint)fVar84) ^ uRam0000000146b2fa54);
          fVar81 = (float)(-(uint)(fStack_1560 <= fVar117) & (uRam0000000146b2fa58 ^ (uint)fVar85) ^
                          uRam0000000146b2fa58);
          pfVar22 = (float *)FMatrix::GetScaledAxis(&local_1298,local_cac,1);
          local_1298 = fVar118 * *pfVar22;
          fStack_1294 = fVar118 * pfVar22[1];
          fStack_1290 = fVar118 * pfVar22[2];
          fStack_1284 = fStack_1284 * fVar120;
          fStack_1280 = fStack_1280 * fVar120;
          local_1288 = local_1288 * fVar120;
          fStack_1274 = fStack_1274 * fVar81;
          fStack_1270 = fStack_1270 * fVar81;
          local_1278 = local_1278 * fVar81;
          uVar14 = FQuat::FQuat(&local_f08,&local_1298);
          local_14f8 = CONCAT44(local_14f8._4_4_,0x322bcc77);
          auVar68._0_4_ = local_f08 * local_f08 + fStack_f00 * fStack_f00;
          auVar68._4_4_ = fStack_f04 * fStack_f04 + fStack_efc * fStack_efc;
          auVar68._8_4_ = fStack_f00 * fStack_f00 + local_f08 * local_f08;
          auVar68._12_4_ = fStack_efc * fStack_efc + fStack_f04 * fStack_f04;
          auVar100._0_4_ = auVar68._4_4_ + auVar68._0_4_;
          auVar100._4_4_ = auVar68._8_4_ + auVar68._4_4_;
          auVar100._8_4_ = auVar68._12_4_ + auVar68._8_4_;
          auVar100._12_4_ = auVar68._0_4_ + auVar68._12_4_;
          auVar48 = rsqrtps(auVar68,auVar100);
          fVar118 = auVar48._0_4_;
          fVar120 = auVar48._4_4_;
          fVar81 = auVar48._8_4_;
          fVar82 = auVar48._12_4_;
          fVar118 = (fVar89 - fVar118 * fVar118 * auVar100._0_4_ * fVar89) * fVar118 + fVar118;
          fVar120 = (fVar91 - fVar120 * fVar120 * auVar100._4_4_ * fVar91) * fVar120 + fVar120;
          fVar81 = (fVar109 - fVar81 * fVar81 * auVar100._8_4_ * fVar109) * fVar81 + fVar81;
          fVar82 = (fVar110 - fVar82 * fVar82 * auVar100._12_4_ * fVar110) * fVar82 + fVar82;
          local_4c8 = (float)(((uint)(((fVar89 - fVar118 * fVar118 * auVar100._0_4_ * fVar89) *
                                       fVar118 + fVar118) * local_f08) ^ _DAT_146b2ec60) &
                              -(uint)(1e-08 <= auVar100._0_4_) ^ _DAT_146b2ec60);
          fStack_4c4 = (float)(((uint)(((fVar91 - fVar120 * fVar120 * auVar100._4_4_ * fVar91) *
                                        fVar120 + fVar120) * fStack_f04) ^ uRam0000000146b2ec64) &
                               -(uint)(1e-08 <= auVar100._4_4_) ^ uRam0000000146b2ec64);
          fStack_4c0 = (float)(((uint)(((fVar109 - fVar81 * fVar81 * auVar100._8_4_ * fVar109) *
                                        fVar81 + fVar81) * fStack_f00) ^ uRam0000000146b2ec68) &
                               -(uint)(1e-08 <= auVar100._8_4_) ^ uRam0000000146b2ec68);
          fStack_4bc = (float)(((uint)(((fVar110 - fVar82 * fVar82 * auVar100._12_4_ * fVar110) *
                                        fVar82 + fVar82) * fStack_efc) ^ uRam0000000146b2ec6c) &
                               -(uint)(1e-08 <= auVar100._12_4_) ^ uRam0000000146b2ec6c);
          fVar120 = 0.0;
          local_1568._4_4_ = fRam0000000146b2fa64;
          local_1568._0_4_ = _DAT_146b2fa60;
          fStack_1560 = fRam0000000146b2fa68;
          fStack_155c = fRam0000000146b2fa6c;
          fVar88 = local_1268;
          fVar81 = fStack_1264;
          fVar118 = fStack_1260;
          local_f08 = local_4c8;
          fStack_f04 = fStack_4c4;
          fStack_f00 = fStack_4c0;
          fStack_efc = fStack_4bc;
        }
        fVar80 = fStack_4fc;
        fVar87 = fStack_500;
        fVar79 = fStack_504;
        fVar92 = local_508;
        fVar85 = fRam0000000146b2ebd8;
        fVar84 = fRam0000000146b2ebd4;
        fVar82 = _DAT_146b2ebd0;
        fStack_49c = fVar114 * fVar86;
        fStack_4a0 = fVar112 * fVar78;
        fStack_4a4 = fVar111 * fVar77;
        local_4a8 = fVar44 * fVar90;
        local_4b8 = CONCAT44(fVar81,fVar88);
        uStack_4b0 = CONCAT44(fVar120,fVar118);
        auVar11._4_4_ = fStack_504;
        auVar11._0_4_ = local_508;
        auVar11._8_4_ = fStack_500;
        auVar11._12_4_ = fStack_4fc;
        auVar48 = *(undefined1 (*) [16])(&DAT_146b2ecd0 + lVar17);
        auVar45 = minps(auVar48,auVar11);
        auVar56._4_4_ = -(uint)(auVar45._4_4_ < fRam0000000146b2fa64);
        auVar56._0_4_ = -(uint)(auVar45._0_4_ < _DAT_146b2fa60);
        auVar56._8_4_ = -(uint)(auVar45._8_4_ < fRam0000000146b2fa68);
        auVar56._12_4_ = -(uint)(auVar45._12_4_ < fRam0000000146b2fa6c);
        iVar27 = movmskps(uVar14,auVar56);
        if (iVar27 == 0) {
          fVar44 = *(float *)(&DAT_146b2ecb0 + lVar17);
          fVar111 = *(float *)(lVar17 + 0x146b2ecb4);
          fVar112 = *(float *)(lVar17 + 0x146b2ecb8);
          fVar114 = *(float *)(lVar17 + 0x146b2ecbc);
          fVar118 = *(float *)(&DAT_146b2ecc0 + lVar17) * local_508;
          fVar120 = *(float *)(lVar17 + 0x146b2ecc4) * fStack_504;
          fVar81 = *(float *)(lVar17 + 0x146b2ecc8) * fStack_500;
          fVar82 = *(float *)(lVar17 + 0x146b2eccc) * fStack_4fc;
          local_1208 = fVar114 * local_528 * _DAT_146b2eca0 + fVar44 * fStack_51c +
                       fVar112 * fStack_524 * _DAT_146b2ec90 + fVar111 * fStack_520 * _DAT_146b2ec80
          ;
          fStack_1204 = fVar112 * local_528 * fRam0000000146b2eca4 + fVar111 * fStack_51c +
                        fVar114 * fStack_524 * fRam0000000146b2ec94 +
                        fVar44 * fStack_520 * fRam0000000146b2ec84;
          fStack_1200 = fVar111 * local_528 * fRam0000000146b2eca8 + fVar112 * fStack_51c +
                        fVar44 * fStack_524 * fRam0000000146b2ec98 +
                        fVar114 * fStack_520 * fRam0000000146b2ec88;
          fStack_11fc = fVar44 * local_528 * fRam0000000146b2ecac + fVar114 * fStack_51c +
                        fVar111 * fStack_524 * fRam0000000146b2ec9c +
                        fVar112 * fStack_520 * fRam0000000146b2ec8c;
          fVar44 = fVar81 * fStack_524 - fVar120 * fStack_520;
          fVar111 = fVar118 * fStack_520 - fVar81 * local_528;
          fVar112 = fVar120 * local_528 - fVar118 * fStack_524;
          fVar114 = fVar82 * fStack_51c - fVar82 * fStack_51c;
          fVar44 = fVar44 + fVar44;
          fVar111 = fVar111 + fVar111;
          fVar112 = fVar112 + fVar112;
          fVar114 = fVar114 + fVar114;
          local_11f8._0_4_ =
               (fVar112 * fStack_524 - fVar111 * fStack_520) + fVar44 * fStack_51c + fVar118 +
               (float)local_518;
          local_11f8._4_4_ =
               (fVar44 * fStack_520 - fVar112 * local_528) + fVar111 * fStack_51c + fVar120 +
               local_518._4_4_;
          uStack_11f0._0_4_ =
               (fVar111 * local_528 - fVar44 * fStack_524) + fVar112 * fStack_51c + fVar81 +
               (float)uStack_510;
          uStack_11f0._4_4_ =
               (fVar114 * fStack_51c - fVar114 * fStack_51c) + fVar114 * fStack_51c + fVar82 +
               uStack_510._4_4_;
        }
        else {
          fVar44 = fStack_524 + fStack_524;
          fVar111 = fStack_520 + fStack_520;
          fVar86 = local_508 * auVar48._0_4_;
          fVar83 = fStack_504 * auVar48._4_4_;
          fVar93 = fStack_500 * auVar48._8_4_;
          fVar114 = local_528 * (local_528 + local_528);
          fVar112 = fStack_51c * (local_528 + local_528);
          fStack_8f4 = (fStack_51c * fVar111 + local_528 * fVar44) * local_508;
          fStack_8e0 = (fVar112 + fStack_524 * fVar111) * fStack_504;
          local_8d8 = (fStack_51c * fVar44 + local_528 * fVar111) * fStack_500;
          local_8e8 = fStack_504 * (local_528 * fVar44 - fStack_51c * fVar111);
          fStack_8d4 = fStack_500 * (fStack_524 * fVar111 - fVar112);
          fStack_8f0 = local_508 * (local_528 * fVar111 - fStack_51c * fVar44);
          local_8f8 = (float)((uint)((_DAT_146b2ebd0 - (fStack_520 * fVar111 + fStack_524 * fVar44))
                                    * local_508) & _DAT_146b2ebe0);
          fStack_8e4 = (float)((uint)((fRam0000000146b2ebd4 - (fStack_520 * fVar111 + fVar114)) *
                                     fStack_504) & uRam0000000146b2ebe4);
          fStack_8d0 = (float)((uint)((fRam0000000146b2ebd8 - (fStack_524 * fVar44 + fVar114)) *
                                     fStack_500) & uRam0000000146b2ebe8);
          fStack_8ec = (float)((uint)((fRam0000000146b2ebdc - (fVar114 + fVar114)) * fStack_4fc) &
                              uRam0000000146b2ebec);
          local_8c8 = (float)local_518;
          fStack_8c4 = local_518._4_4_;
          fStack_8c0 = (float)uStack_510;
          fStack_8bc = fRam0000000146b2ebdc;
          fVar44 = *(float *)(&DAT_146b2ecb0 + lVar17);
          fVar111 = *(float *)(lVar17 + 0x146b2ecb4);
          fVar112 = *(float *)(lVar17 + 0x146b2ecb8);
          fVar114 = *(float *)(lVar17 + 0x146b2ecbc);
          fVar88 = fVar111 + fVar111;
          fVar77 = fVar112 + fVar112;
          fVar78 = (fVar44 + fVar44) * fVar44;
          fVar90 = (fVar44 + fVar44) * fVar114;
          fVar118 = *(float *)(&DAT_146b2ecd0 + lVar17);
          fVar120 = *(float *)(lVar17 + 0x146b2ecd4);
          fVar81 = *(float *)(lVar17 + 0x146b2ecd8);
          fStack_8b4 = (fVar77 * fVar114 + fVar88 * fVar44) * fVar118;
          fStack_8a0 = (fVar90 + fVar77 * fVar111) * fVar120;
          local_898 = (fVar88 * fVar114 + fVar77 * fVar44) * fVar81;
          local_8a8 = fVar120 * (fVar88 * fVar44 - fVar77 * fVar114);
          fStack_894 = fVar81 * (fVar77 * fVar111 - fVar90);
          fStack_8b0 = fVar118 * (fVar77 * fVar44 - fVar88 * fVar114);
          local_8b8 = (float)((uint)((_DAT_146b2ebd0 - (fVar77 * fVar112 + fVar88 * fVar111)) *
                                    fVar118) & _DAT_146b2ebe0);
          fStack_8a4 = (float)((uint)((fRam0000000146b2ebd4 - (fVar77 * fVar112 + fVar78)) * fVar120
                                     ) & uRam0000000146b2ebe4);
          fStack_890 = (float)((uint)((fRam0000000146b2ebd8 - (fVar88 * fVar111 + fVar78)) * fVar81)
                              & uRam0000000146b2ebe8);
          fStack_8ac = (float)((uint)((fRam0000000146b2ebdc - (fVar78 + fVar78)) *
                                     *(float *)(lVar17 + 0x146b2ecdc)) & uRam0000000146b2ebec);
          local_888 = *(float *)(&DAT_146b2ecc0 + lVar17);
          fStack_884 = *(float *)(lVar17 + 0x146b2ecc4);
          fStack_880 = *(float *)(lVar17 + 0x146b2ecc8);
          fStack_87c = fRam0000000146b2ebdc;
          local_11d8 = fStack_8b4 * local_8e8 + local_8b8 * local_8f8 + fStack_8b0 * local_8d8 +
                       fStack_8ac * (float)local_518;
          fStack_11d4 = fStack_8b4 * fStack_8e4 + local_8b8 * fStack_8f4 + fStack_8b0 * fStack_8d4 +
                        fStack_8ac * local_518._4_4_;
          fStack_11d0 = fStack_8b4 * fStack_8e0 + local_8b8 * fStack_8f0 + fStack_8b0 * fStack_8d0 +
                        fStack_8ac * (float)uStack_510;
          fStack_11cc = fStack_8b4 * fStack_8ec + local_8b8 * fStack_8ec + fStack_8b0 * fStack_8ec +
                        fStack_8ac * fRam0000000146b2ebdc;
          local_11c8 = fStack_8a4 * local_8e8 + local_8a8 * local_8f8 + fStack_8a0 * local_8d8 +
                       fStack_8ac * (float)local_518;
          fStack_11c4 = fStack_8a4 * fStack_8e4 + local_8a8 * fStack_8f4 + fStack_8a0 * fStack_8d4 +
                        fStack_8ac * local_518._4_4_;
          fStack_11c0 = fStack_8a4 * fStack_8e0 + local_8a8 * fStack_8f0 + fStack_8a0 * fStack_8d0 +
                        fStack_8ac * (float)uStack_510;
          fStack_11bc = fStack_8a4 * fStack_8ec + local_8a8 * fStack_8ec + fStack_8a0 * fStack_8ec +
                        fStack_8ac * fRam0000000146b2ebdc;
          local_11b8 = fStack_894 * local_8e8 + local_898 * local_8f8 + fStack_890 * local_8d8 +
                       fStack_8ac * (float)local_518;
          fStack_11b4 = fStack_894 * fStack_8e4 + local_898 * fStack_8f4 + fStack_890 * fStack_8d4 +
                        fStack_8ac * local_518._4_4_;
          fStack_11b0 = fStack_894 * fStack_8e0 + local_898 * fStack_8f0 + fStack_890 * fStack_8d0 +
                        fStack_8ac * (float)uStack_510;
          fStack_11ac = fStack_894 * fStack_8ec + local_898 * fStack_8ec + fStack_890 * fStack_8ec +
                        fStack_8ac * fRam0000000146b2ebdc;
          local_11a8 = fStack_884 * local_8e8 + local_888 * local_8f8 + fStack_880 * local_8d8 +
                       fRam0000000146b2ebdc * (float)local_518;
          fStack_11a4 = fStack_884 * fStack_8e4 + local_888 * fStack_8f4 + fStack_880 * fStack_8d4 +
                        fRam0000000146b2ebdc * local_518._4_4_;
          fStack_11a0 = fStack_884 * fStack_8e0 + local_888 * fStack_8f0 + fStack_880 * fStack_8d0 +
                        fRam0000000146b2ebdc * (float)uStack_510;
          fStack_119c = fStack_884 * fStack_8ec + local_888 * fStack_8ec + fStack_880 * fStack_8ec +
                        fRam0000000146b2ebdc * fRam0000000146b2ebdc;
          fStack_8dc = fStack_8ec;
          fStack_8cc = fStack_8ec;
          fStack_89c = fStack_8ac;
          fStack_88c = fStack_8ac;
          FMatrix::RemoveScaling(&local_11d8);
          fVar44 = (float)((_DAT_146b2fa50 ^ (uint)fVar82) &
                           -(uint)((float)local_1568._0_4_ <= fVar86) ^ _DAT_146b2fa50);
          fVar111 = (float)((uRam0000000146b2fa54 ^ (uint)fVar84) &
                            -(uint)((float)local_1568._4_4_ <= fVar83) ^ uRam0000000146b2fa54);
          fVar112 = (float)((uRam0000000146b2fa58 ^ (uint)fVar85) & -(uint)(fStack_1560 <= fVar93) ^
                           uRam0000000146b2fa58);
          pfVar22 = (float *)FMatrix::GetScaledAxis(&local_11d8,local_d00,1);
          local_11d8 = fVar44 * *pfVar22;
          fStack_11d4 = fVar44 * pfVar22[1];
          fStack_11d0 = fVar44 * pfVar22[2];
          pfVar22 = (float *)FMatrix::GetScaledAxis(&local_11d8,local_d18,2);
          local_11c8 = fVar111 * *pfVar22;
          fStack_11c4 = fVar111 * pfVar22[1];
          fStack_11c0 = fVar111 * pfVar22[2];
          fStack_11b4 = fStack_11b4 * fVar112;
          fStack_11b0 = fStack_11b0 * fVar112;
          local_11b8 = local_11b8 * fVar112;
          FQuat::FQuat(&local_1418,&local_11d8);
          local_14f8 = CONCAT44(local_14f8._4_4_,0x322bcc77);
          auVar69._0_4_ = local_1418 * local_1418 + fStack_1410 * fStack_1410;
          auVar69._4_4_ = fStack_1414 * fStack_1414 + fStack_140c * fStack_140c;
          auVar69._8_4_ = fStack_1410 * fStack_1410 + local_1418 * local_1418;
          auVar69._12_4_ = fStack_140c * fStack_140c + fStack_1414 * fStack_1414;
          auVar101._0_4_ = auVar69._4_4_ + auVar69._0_4_;
          auVar101._4_4_ = auVar69._8_4_ + auVar69._4_4_;
          auVar101._8_4_ = auVar69._12_4_ + auVar69._8_4_;
          auVar101._12_4_ = auVar69._0_4_ + auVar69._12_4_;
          auVar45 = rsqrtps(auVar69,auVar101);
          fVar44 = auVar45._0_4_;
          fVar111 = auVar45._4_4_;
          fVar112 = auVar45._8_4_;
          fVar114 = auVar45._12_4_;
          fVar44 = (fVar89 - fVar44 * fVar44 * auVar101._0_4_ * fVar89) * fVar44 + fVar44;
          fVar111 = (fVar91 - fVar111 * fVar111 * auVar101._4_4_ * fVar91) * fVar111 + fVar111;
          fVar112 = (fVar109 - fVar112 * fVar112 * auVar101._8_4_ * fVar109) * fVar112 + fVar112;
          fVar114 = (fVar110 - fVar114 * fVar114 * auVar101._12_4_ * fVar110) * fVar114 + fVar114;
          local_1208 = (float)(((uint)(((fVar89 - fVar44 * fVar44 * auVar101._0_4_ * fVar89) *
                                        fVar44 + fVar44) * local_1418) ^ _DAT_146b2ec60) &
                               -(uint)(1e-08 <= auVar101._0_4_) ^ _DAT_146b2ec60);
          fStack_1204 = (float)(((uint)(((fVar91 - fVar111 * fVar111 * auVar101._4_4_ * fVar91) *
                                         fVar111 + fVar111) * fStack_1414) ^ uRam0000000146b2ec64) &
                                -(uint)(1e-08 <= auVar101._4_4_) ^ uRam0000000146b2ec64);
          fStack_1200 = (float)(((uint)(((fVar109 - fVar112 * fVar112 * auVar101._8_4_ * fVar109) *
                                         fVar112 + fVar112) * fStack_1410) ^ uRam0000000146b2ec68) &
                                -(uint)(1e-08 <= auVar101._8_4_) ^ uRam0000000146b2ec68);
          fStack_11fc = (float)(((uint)(((fVar110 - fVar114 * fVar114 * auVar101._12_4_ * fVar110) *
                                         fVar114 + fVar114) * fStack_140c) ^ uRam0000000146b2ec6c) &
                                -(uint)(1e-08 <= auVar101._12_4_) ^ uRam0000000146b2ec6c);
          uStack_11f0._4_4_ = 0.0;
          local_11f8._0_4_ = local_11a8;
          local_11f8._4_4_ = fStack_11a4;
          uStack_11f0._0_4_ = fStack_11a0;
          local_1418 = local_1208;
          fStack_1414 = fStack_1204;
          fStack_1410 = fStack_1200;
          fStack_140c = fStack_11fc;
        }
        fStack_11dc = fVar80 * auVar48._12_4_;
        fStack_11e0 = fVar87 * auVar48._8_4_;
        fStack_11e4 = fVar79 * auVar48._4_4_;
        local_11e8 = fVar92 * auVar48._0_4_;
        local_1198 = CONCAT44(fStack_1204,local_1208);
        uStack_1190 = CONCAT44(fStack_11fc,fStack_1200);
        local_1188 = CONCAT44(local_11f8._4_4_,local_11f8._0_4_);
        uStack_1180 = CONCAT44(uStack_11f0._4_4_,(float)uStack_11f0);
        local_1178 = local_11e8;
        fStack_1174 = fStack_11e4;
        fStack_1170 = fStack_11e0;
        fStack_116c = fStack_11dc;
        local_e68 = local_1208;
        fStack_e64 = fStack_1204;
        fStack_e60 = fStack_1200;
        fStack_e5c = fStack_11fc;
        FQuat::Rotator(&local_e68,&local_1158);
        fVar113 = fVar113 + local_1154;
        auVar57._4_4_ = fVar113;
        auVar57._0_4_ = local_15a0 + local_1158;
        auVar57._8_4_ = (float)local_1588._0_4_ + local_1150;
        auVar57._12_4_ = 0;
        auVar48 = divps(auVar57,_DAT_146b2fa40);
        fVar114 = (float)DAT_146b2fa40;
        fVar118 = DAT_146b2fa40._4_4_;
        fVar120 = DAT_146b2fa40._8_4_;
        fVar44 = (local_15a0 + local_1158) - (float)(int)auVar48._0_4_ * fVar114;
        fVar113 = fVar113 - (float)(int)auVar48._4_4_ * fVar118;
        fVar112 = ((float)local_1588._0_4_ + local_1150) - (float)(int)auVar48._8_4_ * fVar120;
        fVar44 = (float)(-(uint)(0.0 <= fVar44) & ((uint)(fVar44 + fVar114) ^ (uint)fVar44) ^
                        (uint)(fVar44 + fVar114));
        fVar111 = (float)(-(uint)(0.0 <= fVar113) & ((uint)(fVar113 + fVar118) ^ (uint)fVar113) ^
                         (uint)(fVar113 + fVar118));
        fVar112 = (float)(-(uint)(0.0 <= fVar112) & ((uint)(fVar112 + fVar120) ^ (uint)fVar112) ^
                         (uint)(fVar112 + fVar120));
        local_1468 = ((uint)(fVar112 - fVar120) ^ (uint)fVar112) &
                     -(uint)(fRam0000000146b2fa38 < fVar112) ^ (uint)fVar112;
        local_1470 = CONCAT44(((uint)(fVar111 - fVar118) ^ (uint)fVar111) &
                              -(uint)(fRam0000000146b2fa34 < fVar111) ^ (uint)fVar111,
                              ((uint)(fVar44 - fVar114) ^ (uint)fVar44) &
                              -(uint)(_DAT_146b2fa30 < fVar44) ^ (uint)fVar44);
        local_fc0 = local_1470;
        local_fb8 = local_1468;
        pfVar22 = (float *)FRotator::Quaternion(&local_1470,local_568);
        uVar122 = uRam0000000146b2ebec;
        uVar121 = uRam0000000146b2ebe8;
        uVar119 = uRam0000000146b2ebe4;
        uVar40 = _DAT_146b2ebe0;
        fVar84 = fRam0000000146b2ebd8;
        fVar88 = fRam0000000146b2ebd4;
        fVar82 = _DAT_146b2ebd0;
        auVar10._4_4_ = fStack_1174;
        auVar10._0_4_ = local_1178;
        auVar10._8_4_ = fStack_1170;
        auVar10._12_4_ = fStack_116c;
        fVar113 = *pfVar22;
        fVar118 = pfVar22[1];
        local_1198 = *(undefined8 *)pfVar22;
        fVar120 = pfVar22[2];
        fVar81 = pfVar22[3];
        uStack_1190 = *(undefined8 *)(pfVar22 + 2);
        auVar48 = *(undefined1 (*) [16])(&DAT_146b2ed00 + lVar17);
        fVar44 = auVar48._0_4_;
        fVar111 = auVar48._4_4_;
        fVar112 = auVar48._8_4_;
        fVar114 = auVar48._12_4_;
        local_1568._4_4_ = fRam0000000146b2fa64;
        local_1568._0_4_ = _DAT_146b2fa60;
        fStack_1560 = fRam0000000146b2fa68;
        fStack_155c = fRam0000000146b2fa6c;
        auVar48 = minps(auVar48,auVar10);
        auVar58._4_4_ = -(uint)(auVar48._4_4_ < fRam0000000146b2fa64);
        auVar58._0_4_ = -(uint)(auVar48._0_4_ < _DAT_146b2fa60);
        auVar58._8_4_ = -(uint)(auVar48._8_4_ < fRam0000000146b2fa68);
        auVar58._12_4_ = -(uint)(auVar48._12_4_ < fRam0000000146b2fa6c);
        iVar27 = movmskps((int)pfVar22,auVar58);
        if (iVar27 == 0) {
          fVar82 = *(float *)(&DAT_146b2ece0 + lVar17);
          fVar88 = *(float *)(lVar17 + 0x146b2ece4);
          fVar84 = *(float *)(lVar17 + 0x146b2ece8);
          fVar85 = *(float *)(lVar17 + 0x146b2ecec);
          fVar89 = *(float *)(&DAT_146b2ecf0 + lVar17) * local_1178;
          fVar91 = *(float *)(lVar17 + 0x146b2ecf4) * fStack_1174;
          fVar109 = *(float *)(lVar17 + 0x146b2ecf8) * fStack_1170;
          fVar110 = *(float *)(lVar17 + 0x146b2ecfc) * fStack_116c;
          local_e98 = fVar85 * fVar113 * _DAT_146b2eca0 + fVar81 * fVar82 +
                      fVar84 * fVar118 * _DAT_146b2ec90 + fVar88 * fVar120 * _DAT_146b2ec80;
          fStack_e94 = fVar84 * fVar113 * fRam0000000146b2eca4 + fVar81 * fVar88 +
                       fVar85 * fVar118 * fRam0000000146b2ec94 +
                       fVar82 * fVar120 * fRam0000000146b2ec84;
          fStack_e90 = fVar88 * fVar113 * fRam0000000146b2eca8 + fVar81 * fVar84 +
                       fVar82 * fVar118 * fRam0000000146b2ec98 +
                       fVar85 * fVar120 * fRam0000000146b2ec88;
          fStack_e8c = fVar82 * fVar113 * fRam0000000146b2ecac + fVar81 * fVar85 +
                       fVar88 * fVar118 * fRam0000000146b2ec9c +
                       fVar84 * fVar120 * fRam0000000146b2ec8c;
          fVar82 = fVar109 * fVar118 - fVar91 * fVar120;
          fVar88 = fVar89 * fVar120 - fVar109 * fVar113;
          fVar84 = fVar91 * fVar113 - fVar89 * fVar118;
          fVar85 = fVar110 * fVar81 - fVar110 * fVar81;
          fVar82 = fVar82 + fVar82;
          fVar88 = fVar88 + fVar88;
          fVar84 = fVar84 + fVar84;
          fVar85 = fVar85 + fVar85;
          local_e88 = (fVar84 * fVar118 - fVar88 * fVar120) + fVar81 * fVar82 + fVar89;
          fStack_e84 = (fVar82 * fVar120 - fVar84 * fVar113) + fVar81 * fVar88 + fVar91;
          fStack_e80 = (fVar88 * fVar113 - fVar82 * fVar118) + fVar81 * fVar84 + fVar109;
          fStack_e7c = (fVar85 * fVar81 - fVar85 * fVar81) + fVar81 * fVar85 + fVar110;
LAB_142c54503:
          local_e88 = local_e88 + (float)local_1188;
          fStack_e84 = fStack_e84 + local_1188._4_4_;
          fStack_e80 = fStack_e80 + (float)uStack_1180;
          fStack_e7c = fStack_e7c + uStack_1180._4_4_;
          fVar44 = fVar44 * local_1178;
          fVar111 = fVar111 * fStack_1174;
          fVar112 = fVar112 * fStack_1170;
          fVar114 = fVar114 * fStack_116c;
          uVar40 = _DAT_146b2ebe0;
          uVar119 = uRam0000000146b2ebe4;
          uVar121 = uRam0000000146b2ebe8;
          uVar122 = uRam0000000146b2ebec;
        }
        else {
          fVar85 = fVar118 + fVar118;
          fVar89 = fVar120 + fVar120;
          fVar44 = fVar44 * local_1178;
          fVar111 = fVar111 * fStack_1174;
          fVar112 = fVar112 * fStack_1170;
          fVar114 = fVar114 * fStack_116c;
          fVar91 = (fVar113 + fVar113) * fVar113;
          fVar109 = fVar81 * (fVar113 + fVar113);
          fStack_874 = (fVar81 * fVar89 + fVar113 * fVar85) * local_1178;
          fStack_860 = (fVar109 + fVar118 * fVar89) * fStack_1174;
          local_858 = (fVar81 * fVar85 + fVar113 * fVar89) * fStack_1170;
          local_868 = fStack_1174 * (fVar113 * fVar85 - fVar81 * fVar89);
          fStack_854 = fStack_1170 * (fVar118 * fVar89 - fVar109);
          fStack_870 = local_1178 * (fVar113 * fVar89 - fVar81 * fVar85);
          local_878 = (float)((uint)((_DAT_146b2ebd0 - (fVar89 * fVar120 + fVar85 * fVar118)) *
                                    local_1178) & _DAT_146b2ebe0);
          fStack_864 = (float)((uint)((fRam0000000146b2ebd4 - (fVar89 * fVar120 + fVar91)) *
                                     fStack_1174) & uRam0000000146b2ebe4);
          fStack_850 = (float)((uint)((fRam0000000146b2ebd8 - (fVar85 * fVar118 + fVar91)) *
                                     fStack_1170) & uRam0000000146b2ebe8);
          fStack_86c = (float)((uint)((fRam0000000146b2ebdc - (fVar91 + fVar91)) * fStack_116c) &
                              uRam0000000146b2ebec);
          local_848 = (float)local_1188;
          fStack_844 = local_1188._4_4_;
          fStack_840 = (float)uStack_1180;
          fStack_83c = fRam0000000146b2ebdc;
          fVar113 = *(float *)(&DAT_146b2ece0 + lVar17);
          fVar118 = *(float *)(lVar17 + 0x146b2ece4);
          fVar120 = *(float *)(lVar17 + 0x146b2ece8);
          fVar81 = *(float *)(lVar17 + 0x146b2ecec);
          fVar109 = fVar118 + fVar118;
          fVar90 = fVar120 + fVar120;
          fVar77 = (fVar113 + fVar113) * fVar113;
          fVar110 = (fVar113 + fVar113) * fVar81;
          fVar85 = *(float *)(&DAT_146b2ed00 + lVar17);
          fVar89 = *(float *)(lVar17 + 0x146b2ed04);
          fVar91 = *(float *)(lVar17 + 0x146b2ed08);
          fStack_834 = (fVar90 * fVar81 + fVar109 * fVar113) * fVar85;
          fStack_820 = (fVar110 + fVar90 * fVar118) * fVar89;
          local_818 = (fVar109 * fVar81 + fVar90 * fVar113) * fVar91;
          local_828 = fVar89 * (fVar109 * fVar113 - fVar90 * fVar81);
          fStack_814 = fVar91 * (fVar90 * fVar118 - fVar110);
          fStack_830 = fVar85 * (fVar90 * fVar113 - fVar109 * fVar81);
          local_838 = (float)((uint)((_DAT_146b2ebd0 - (fVar90 * fVar120 + fVar109 * fVar118)) *
                                    fVar85) & _DAT_146b2ebe0);
          fStack_824 = (float)((uint)((fRam0000000146b2ebd4 - (fVar90 * fVar120 + fVar77)) * fVar89)
                              & uRam0000000146b2ebe4);
          fStack_810 = (float)((uint)((fRam0000000146b2ebd8 - (fVar109 * fVar118 + fVar77)) * fVar91
                                     ) & uRam0000000146b2ebe8);
          fStack_82c = (float)((uint)((fRam0000000146b2ebdc - (fVar77 + fVar77)) *
                                     *(float *)(lVar17 + 0x146b2ed0c)) & uRam0000000146b2ebec);
          local_808 = *(float *)(&DAT_146b2ecf0 + lVar17);
          fStack_804 = *(float *)(lVar17 + 0x146b2ecf4);
          fStack_800 = *(float *)(lVar17 + 0x146b2ecf8);
          fStack_7fc = fRam0000000146b2ebdc;
          local_1048 = fStack_834 * local_868 + local_838 * local_878 + fStack_830 * local_858 +
                       fStack_82c * (float)local_1188;
          fStack_1044 = fStack_834 * fStack_864 + local_838 * fStack_874 + fStack_830 * fStack_854 +
                        fStack_82c * local_1188._4_4_;
          fStack_1040 = fStack_834 * fStack_860 + local_838 * fStack_870 + fStack_830 * fStack_850 +
                        fStack_82c * (float)uStack_1180;
          fStack_103c = fStack_834 * fStack_86c + local_838 * fStack_86c + fStack_830 * fStack_86c +
                        fStack_82c * fRam0000000146b2ebdc;
          local_1038 = fStack_824 * local_868 + local_828 * local_878 + fStack_820 * local_858 +
                       fStack_82c * (float)local_1188;
          fStack_1034 = fStack_824 * fStack_864 + local_828 * fStack_874 + fStack_820 * fStack_854 +
                        fStack_82c * local_1188._4_4_;
          fStack_1030 = fStack_824 * fStack_860 + local_828 * fStack_870 + fStack_820 * fStack_850 +
                        fStack_82c * (float)uStack_1180;
          fStack_102c = fStack_824 * fStack_86c + local_828 * fStack_86c + fStack_820 * fStack_86c +
                        fStack_82c * fRam0000000146b2ebdc;
          local_1028 = fStack_814 * local_868 + local_818 * local_878 + fStack_810 * local_858 +
                       fStack_82c * (float)local_1188;
          fStack_1024 = fStack_814 * fStack_864 + local_818 * fStack_874 + fStack_810 * fStack_854 +
                        fStack_82c * local_1188._4_4_;
          fStack_1020 = fStack_814 * fStack_860 + local_818 * fStack_870 + fStack_810 * fStack_850 +
                        fStack_82c * (float)uStack_1180;
          fStack_101c = fStack_814 * fStack_86c + local_818 * fStack_86c + fStack_810 * fStack_86c +
                        fStack_82c * fRam0000000146b2ebdc;
          local_1018 = fStack_804 * local_868 + local_808 * local_878 + fStack_800 * local_858 +
                       fRam0000000146b2ebdc * (float)local_1188;
          fStack_1014 = fStack_804 * fStack_864 + local_808 * fStack_874 + fStack_800 * fStack_854 +
                        fRam0000000146b2ebdc * local_1188._4_4_;
          fStack_1010 = fStack_804 * fStack_860 + local_808 * fStack_870 + fStack_800 * fStack_850 +
                        fRam0000000146b2ebdc * (float)uStack_1180;
          fStack_100c = fStack_804 * fStack_86c + local_808 * fStack_86c + fStack_800 * fStack_86c +
                        fRam0000000146b2ebdc * fRam0000000146b2ebdc;
          fStack_85c = fStack_86c;
          fStack_84c = fStack_86c;
          fStack_81c = fStack_82c;
          fStack_80c = fStack_82c;
          FMatrix::RemoveScaling(&local_1048);
          fVar113 = (float)(-(uint)((float)local_1568._0_4_ <= fVar44) &
                            (_DAT_146b2fa50 ^ (uint)fVar82) ^ _DAT_146b2fa50);
          fVar118 = (float)(-(uint)((float)local_1568._4_4_ <= fVar111) &
                            (uRam0000000146b2fa54 ^ (uint)fVar88) ^ uRam0000000146b2fa54);
          fVar120 = (float)(-(uint)(fStack_1560 <= fVar112) & (uRam0000000146b2fa58 ^ (uint)fVar84)
                           ^ uRam0000000146b2fa58);
          pfVar22 = (float *)FMatrix::GetScaledAxis(&local_1048,local_c58,1);
          local_1048 = fVar113 * *pfVar22;
          fStack_1044 = fVar113 * pfVar22[1];
          fStack_1040 = fVar113 * pfVar22[2];
          pfVar22 = (float *)FMatrix::GetScaledAxis(&local_1048,local_d30,2);
          local_1038 = fVar118 * *pfVar22;
          fStack_1034 = fVar118 * pfVar22[1];
          fStack_1030 = fVar118 * pfVar22[2];
          pfVar22 = (float *)FMatrix::GetScaledAxis(&local_1048,local_d3c,3);
          local_1028 = fVar120 * *pfVar22;
          fStack_1024 = fVar120 * pfVar22[1];
          fStack_1020 = fVar120 * pfVar22[2];
          FQuat::FQuat(&local_1258,&local_1048);
          local_1588._0_4_ = 0x322bcc77;
          auVar70._0_4_ = local_1258 * local_1258 + fStack_1250 * fStack_1250;
          auVar70._4_4_ = fStack_1254 * fStack_1254 + fStack_124c * fStack_124c;
          auVar70._8_4_ = fStack_1250 * fStack_1250 + local_1258 * local_1258;
          auVar70._12_4_ = fStack_124c * fStack_124c + fStack_1254 * fStack_1254;
          auVar102._0_4_ = auVar70._4_4_ + auVar70._0_4_;
          auVar102._4_4_ = auVar70._8_4_ + auVar70._4_4_;
          auVar102._8_4_ = auVar70._12_4_ + auVar70._8_4_;
          auVar102._12_4_ = auVar70._0_4_ + auVar70._12_4_;
          auVar48 = rsqrtps(auVar70,auVar102);
          fVar113 = auVar48._0_4_;
          fVar118 = auVar48._4_4_;
          fVar120 = auVar48._8_4_;
          fVar81 = auVar48._12_4_;
          fVar113 = (_DAT_146b2ec70 - fVar113 * fVar113 * auVar102._0_4_ * _DAT_146b2ec70) * fVar113
                    + fVar113;
          fVar118 = (fRam0000000146b2ec74 -
                    fVar118 * fVar118 * auVar102._4_4_ * fRam0000000146b2ec74) * fVar118 + fVar118;
          fVar120 = (fRam0000000146b2ec78 -
                    fVar120 * fVar120 * auVar102._8_4_ * fRam0000000146b2ec78) * fVar120 + fVar120;
          fVar81 = (fRam0000000146b2ec7c - fVar81 * fVar81 * auVar102._12_4_ * fRam0000000146b2ec7c)
                   * fVar81 + fVar81;
          local_e98 = (float)(((uint)(((_DAT_146b2ec70 -
                                       fVar113 * fVar113 * auVar102._0_4_ * _DAT_146b2ec70) *
                                       fVar113 + fVar113) * local_1258) ^ _DAT_146b2ec60) &
                              -(uint)(1e-08 <= auVar102._0_4_) ^ _DAT_146b2ec60);
          fStack_e94 = (float)(((uint)(((fRam0000000146b2ec74 -
                                        fVar118 * fVar118 * auVar102._4_4_ * fRam0000000146b2ec74) *
                                        fVar118 + fVar118) * fStack_1254) ^ uRam0000000146b2ec64) &
                               -(uint)(1e-08 <= auVar102._4_4_) ^ uRam0000000146b2ec64);
          fStack_e90 = (float)(((uint)(((fRam0000000146b2ec78 -
                                        fVar120 * fVar120 * auVar102._8_4_ * fRam0000000146b2ec78) *
                                        fVar120 + fVar120) * fStack_1250) ^ uRam0000000146b2ec68) &
                               -(uint)(1e-08 <= auVar102._8_4_) ^ uRam0000000146b2ec68);
          fStack_e8c = (float)(((uint)(((fRam0000000146b2ec7c -
                                        fVar81 * fVar81 * auVar102._12_4_ * fRam0000000146b2ec7c) *
                                        fVar81 + fVar81) * fStack_124c) ^ uRam0000000146b2ec6c) &
                               -(uint)(1e-08 <= auVar102._12_4_) ^ uRam0000000146b2ec6c);
          fStack_e7c = 0.0;
          local_e88 = local_1018;
          fStack_e84 = fStack_1014;
          fStack_e80 = fStack_1010;
          local_1258 = local_e98;
          fStack_1254 = fStack_e94;
          fStack_1250 = fStack_e90;
          fStack_124c = fStack_e8c;
        }
      }
      local_ea8 = local_1558;
      local_508 = fVar44;
      fStack_504 = fVar111;
      fStack_500 = fVar112;
      fStack_4fc = fVar114;
      local_518._0_4_ = local_e88;
      local_518._4_4_ = fStack_e84;
      uStack_510._0_4_ = fStack_e80;
      uStack_510._4_4_ = fStack_e7c;
      local_528 = local_e98;
      fStack_524 = fStack_e94;
      fStack_520 = fStack_e90;
      fStack_51c = fStack_e8c;
      iVar27 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar27 + 1;
      local_e78 = fVar44;
      fStack_e74 = fVar111;
      fStack_e70 = fVar112;
      fStack_e6c = fVar114;
      if (*(int *)((longlong)param_3 + 0xc) < iVar27 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(param_3,iVar27);
        uVar40 = _DAT_146b2ebe0;
        uVar119 = uRam0000000146b2ebe4;
        uVar121 = uRam0000000146b2ebe8;
        uVar122 = uRam0000000146b2ebec;
      }
      piVar21 = (int *)((longlong)iVar27 * 0x40 + *param_3);
      *piVar21 = local_ea8;
      *(ulonglong *)(piVar21 + 4) = CONCAT44(fStack_e94,local_e98);
      *(ulonglong *)(piVar21 + 6) = CONCAT44(fStack_e8c,fStack_e90);
      *(ulonglong *)(piVar21 + 8) = CONCAT44(fStack_e84,local_e88);
      *(ulonglong *)(piVar21 + 10) = CONCAT44(fStack_e7c,fStack_e80);
      *(ulonglong *)(piVar21 + 0xc) = CONCAT44(fStack_e74,local_e78);
      *(ulonglong *)(piVar21 + 0xe) = CONCAT44(fStack_e6c,fStack_e70);
      local_538._4_4_ = fStack_504;
      local_538._0_4_ = local_508;
      uStack_530._0_4_ = fStack_500;
      uStack_530._4_4_ = fStack_4fc;
      if (local_1578 == local_1550 + -1) {
        local_1448 = local_528;
        fStack_1444 = fStack_524;
        fStack_1440 = fStack_520;
        fStack_143c = fStack_51c;
        local_15a5 = '\x01';
        local_1438 = CONCAT44(local_518._4_4_,(float)local_518);
        uStack_1430 = CONCAT44(uStack_510._4_4_,(float)uStack_510);
        fVar111 = local_508;
        fVar112 = fStack_504;
        fVar113 = fStack_500;
        fVar114 = fStack_4fc;
        _local_1428 = _local_538;
      }
      else {
        fVar111 = (float)local_1428._0_4_;
        fVar112 = (float)local_1428._4_4_;
        fVar113 = fStack_1420;
        fVar114 = fStack_141c;
      }
      local_558 = local_528;
      fStack_554 = fStack_524;
      fStack_550 = fStack_520;
      fStack_54c = fStack_51c;
      local_548 = CONCAT44(local_518._4_4_,(float)local_518);
      uStack_540 = CONCAT44(uStack_510._4_4_,(float)uStack_510);
      lVar17 = local_1488;
      fVar81 = _DAT_146b2ebd0;
      fVar82 = fRam0000000146b2ebd4;
      fVar88 = fRam0000000146b2ebd8;
      fVar84 = fRam0000000146b2ebdc;
      fVar118 = local_1448;
      fVar120 = fStack_1444;
      fVar44 = fStack_1440;
      fVar85 = fStack_143c;
      iVar27 = local_1550;
      if (cVar43 != '\0') {
        local_4f8 = local_4c8;
        fStack_4f4 = fStack_4c4;
        fStack_4f0 = fStack_4c0;
        fStack_4ec = fStack_4bc;
        local_4d8._4_4_ = fStack_4a4;
        local_4d8._0_4_ = local_4a8;
        fStack_4d0 = fStack_4a0;
        fStack_4cc = fStack_49c;
        fStack_4e0 = (float)(undefined4)uStack_4b0;
        local_4e8 = (undefined1  [8])local_4b8;
        fStack_4dc = (float)uStack_4b0._4_4_;
      }
    }
    iVar15 = local_1578 + 1;
    local_1510 = (void *)((longlong)local_1510 + 1);
    local_1578 = iVar15;
  } while (iVar15 < iVar27);
  if (local_15a5 == '\0') goto LAB_142c56357;
  if (0 < iVar27) {
    if (local_15a8 == '\0') goto LAB_142c56357;
    local_1540 = 0;
    local_1538 = 0;
    FBoneReference::GetCompactPoseIndex
              ((longlong)(*(int *)(param_1 + 0x180) + -1) * 0x50 + *(longlong *)(param_1 + 0x178),
               local_1588,lVar17);
    uVar14 = local_1588._0_4_;
    puVar19 = (undefined8 *)FUN_140611730(plVar41,local_1588._0_4_);
    local_348 = *puVar19;
    uStack_340 = puVar19[1];
    local_338 = puVar19[2];
    uStack_330 = puVar19[3];
    local_328 = puVar19[4];
    uStack_320 = puVar19[5];
    local_1548[0] = *(int *)(param_1 + 600);
    fVar44 = _DAT_146b2ebd0;
    fVar111 = fRam0000000146b2ebd4;
    fVar112 = fRam0000000146b2ebd8;
    fVar113 = local_12a8;
    fVar114 = fStack_12a4;
    fVar118 = fStack_12a0;
    fVar120 = fStack_129c;
    while (_DAT_146b2ebd0 = fVar44, fRam0000000146b2ebd4 = fVar111, fRam0000000146b2ebd8 = fVar112,
          local_12a8 = fVar113, fStack_12a4 = fVar114, fStack_12a0 = fVar118, fStack_129c = fVar120,
          (int)uVar14 < local_1548[0]) {
      iVar26 = *(int *)(param_1 + 600);
      if (local_1548[0] == iVar26) {
        auVar7._4_4_ = fVar114;
        auVar7._0_4_ = fVar113;
        auVar7._8_4_ = fVar118;
        auVar7._12_4_ = fVar120;
        fVar81 = local_1428._0_4_;
        fVar82 = local_1428._4_4_;
        fVar88 = local_1428._8_4_;
        fVar84 = local_1428._12_4_;
        auVar48 = minps(auVar7,_local_1428);
        auVar60._4_4_ = -(uint)(auVar48._4_4_ < fRam0000000146b2fa64);
        auVar60._0_4_ = -(uint)(auVar48._0_4_ < _DAT_146b2fa60);
        auVar60._8_4_ = -(uint)(auVar48._8_4_ < fRam0000000146b2fa68);
        auVar60._12_4_ = -(uint)(auVar48._12_4_ < fRam0000000146b2fa6c);
        iVar27 = movmskps(local_1548[0],auVar60);
        local_1438._4_4_ = (float)((ulonglong)local_1438 >> 0x20);
        local_12c8._4_4_ = (float)((ulonglong)local_12c8 >> 0x20);
        uStack_12c0._4_4_ = (float)((ulonglong)uStack_12c0 >> 0x20);
        local_12b8._4_4_ = (float)((ulonglong)local_12b8 >> 0x20);
        local_1418 = _DAT_146b2fa60;
        fStack_1414 = fRam0000000146b2fa64;
        fStack_1410 = fRam0000000146b2fa68;
        fStack_140c = fRam0000000146b2fa6c;
        if (iVar27 == 0) {
          uStack_12b0._4_4_ = (float)((ulonglong)uStack_12b0 >> 0x20);
          fVar89 = fVar81 * (float)local_12b8;
          fVar91 = fVar82 * local_12b8._4_4_;
          fVar109 = fVar88 * (float)uStack_12b0;
          fVar110 = fVar84 * uStack_12b0._4_4_;
          local_df8 = local_1448 * uStack_12c0._4_4_ * _DAT_146b2eca0 +
                      fStack_143c * (float)local_12c8 +
                      fStack_1444 * (float)uStack_12c0 * _DAT_146b2ec90 +
                      fStack_1440 * local_12c8._4_4_ * _DAT_146b2ec80;
          fStack_df4 = local_1448 * (float)uStack_12c0 * fRam0000000146b2eca4 +
                       fStack_143c * local_12c8._4_4_ +
                       fStack_1444 * uStack_12c0._4_4_ * fRam0000000146b2ec94 +
                       fStack_1440 * (float)local_12c8 * fRam0000000146b2ec84;
          fStack_df0 = local_1448 * local_12c8._4_4_ * fRam0000000146b2eca8 +
                       fStack_143c * (float)uStack_12c0 +
                       fStack_1444 * (float)local_12c8 * fRam0000000146b2ec98 +
                       fStack_1440 * uStack_12c0._4_4_ * fRam0000000146b2ec88;
          fStack_dec = local_1448 * (float)local_12c8 * fRam0000000146b2ecac +
                       fStack_143c * uStack_12c0._4_4_ +
                       fStack_1444 * local_12c8._4_4_ * fRam0000000146b2ec9c +
                       fStack_1440 * (float)uStack_12c0 * fRam0000000146b2ec8c;
          fVar44 = fVar109 * fStack_1444 - fVar91 * fStack_1440;
          fVar111 = fVar89 * fStack_1440 - fVar109 * local_1448;
          fVar112 = fVar91 * local_1448 - fVar89 * fStack_1444;
          fVar85 = fVar110 * fStack_143c - fVar110 * fStack_143c;
          fVar44 = fVar44 + fVar44;
          fVar111 = fVar111 + fVar111;
          fVar112 = fVar112 + fVar112;
          fVar85 = fVar85 + fVar85;
          uStack_1430._4_4_ = (float)((ulonglong)uStack_1430 >> 0x20);
          local_de8 = (fVar112 * fStack_1444 - fVar111 * fStack_1440) +
                      fStack_143c * fVar44 + fVar89 + (float)local_1438;
          fStack_de4 = (fVar44 * fStack_1440 - fVar112 * local_1448) +
                       fStack_143c * fVar111 + fVar91 + local_1438._4_4_;
          fStack_de0 = (fVar111 * local_1448 - fVar44 * fStack_1444) +
                       fStack_143c * fVar112 + fVar109 + (float)uStack_1430;
          fStack_ddc = (fVar85 * fStack_143c - fVar85 * fStack_143c) +
                       fStack_143c * fVar85 + fVar110 + uStack_1430._4_4_;
        }
        else {
          fVar85 = fStack_1444 + fStack_1444;
          fVar91 = fStack_1440 + fStack_1440;
          fVar109 = (local_1448 + local_1448) * local_1448;
          fVar89 = (local_1448 + local_1448) * fStack_143c;
          fStack_774 = (fVar91 * fStack_143c + fVar85 * local_1448) * fVar81;
          fStack_760 = (fVar89 + fVar91 * fStack_1444) * fVar82;
          local_758 = (fVar85 * fStack_143c + fVar91 * local_1448) * fVar88;
          local_768 = fVar82 * (fVar85 * local_1448 - fVar91 * fStack_143c);
          fStack_754 = fVar88 * (fVar91 * fStack_1444 - fVar89);
          fStack_770 = fVar81 * (fVar91 * local_1448 - fVar85 * fStack_143c);
          local_778 = (float)((uint)((fVar44 - (fVar91 * fStack_1440 + fVar85 * fStack_1444)) *
                                    fVar81) & _DAT_146b2ebe0);
          fStack_764 = (float)((uint)((fVar111 - (fVar91 * fStack_1440 + fVar109)) * fVar82) &
                              uRam0000000146b2ebe4);
          fStack_750 = (float)((uint)((fVar112 - (fVar85 * fStack_1444 + fVar109)) * fVar88) &
                              uRam0000000146b2ebe8);
          fStack_76c = (float)((uint)((fRam0000000146b2ebdc - (fVar109 + fVar109)) * fVar84) &
                              uRam0000000146b2ebec);
          fVar85 = local_12c8._4_4_ + local_12c8._4_4_;
          fVar91 = (float)uStack_12c0 + (float)uStack_12c0;
          local_748 = (float)local_1438;
          fStack_744 = local_1438._4_4_;
          fStack_740 = (float)uStack_1430;
          fVar109 = ((float)local_12c8 + (float)local_12c8) * (float)local_12c8;
          fVar89 = ((float)local_12c8 + (float)local_12c8) * uStack_12c0._4_4_;
          fStack_734 = (fVar91 * uStack_12c0._4_4_ + fVar85 * (float)local_12c8) * fVar113;
          fStack_720 = (fVar89 + fVar91 * local_12c8._4_4_) * fVar114;
          local_718 = (fVar85 * uStack_12c0._4_4_ + fVar91 * (float)local_12c8) * fVar118;
          local_728 = fVar114 * (fVar85 * (float)local_12c8 - fVar91 * uStack_12c0._4_4_);
          fStack_714 = fVar118 * (fVar91 * local_12c8._4_4_ - fVar89);
          fStack_730 = fVar113 * (fVar91 * (float)local_12c8 - fVar85 * uStack_12c0._4_4_);
          local_738 = (float)((uint)((fVar44 - (fVar91 * (float)uStack_12c0 +
                                               fVar85 * local_12c8._4_4_)) * fVar113) &
                             _DAT_146b2ebe0);
          fStack_724 = (float)((uint)((fVar111 - (fVar91 * (float)uStack_12c0 + fVar109)) * fVar114)
                              & uRam0000000146b2ebe4);
          fStack_710 = (float)((uint)((fVar112 - (fVar85 * local_12c8._4_4_ + fVar109)) * fVar118) &
                              uRam0000000146b2ebe8);
          fStack_72c = (float)((uint)((fRam0000000146b2ebdc - (fVar109 + fVar109)) * fVar120) &
                              uRam0000000146b2ebec);
          local_708 = (float)local_12b8;
          fStack_704 = local_12b8._4_4_;
          fStack_700 = (float)uStack_12b0;
          local_1148 = fStack_734 * local_768 + local_738 * local_778 + fStack_730 * local_758 +
                       fStack_72c * (float)local_1438;
          fStack_1144 = fStack_734 * fStack_764 + local_738 * fStack_774 + fStack_730 * fStack_754 +
                        fStack_72c * local_1438._4_4_;
          fStack_1140 = fStack_734 * fStack_760 + local_738 * fStack_770 + fStack_730 * fStack_750 +
                        fStack_72c * (float)uStack_1430;
          fStack_113c = fStack_734 * fStack_76c + local_738 * fStack_76c + fStack_730 * fStack_76c +
                        fStack_72c * fRam0000000146b2ebdc;
          local_1138 = fStack_724 * local_768 + local_728 * local_778 + fStack_720 * local_758 +
                       fStack_72c * (float)local_1438;
          fStack_1134 = fStack_724 * fStack_764 + local_728 * fStack_774 + fStack_720 * fStack_754 +
                        fStack_72c * local_1438._4_4_;
          fStack_1130 = fStack_724 * fStack_760 + local_728 * fStack_770 + fStack_720 * fStack_750 +
                        fStack_72c * (float)uStack_1430;
          fStack_112c = fStack_724 * fStack_76c + local_728 * fStack_76c + fStack_720 * fStack_76c +
                        fStack_72c * fRam0000000146b2ebdc;
          local_1128 = fStack_714 * local_768 + local_718 * local_778 + fStack_710 * local_758 +
                       fStack_72c * (float)local_1438;
          fStack_1124 = fStack_714 * fStack_764 + local_718 * fStack_774 + fStack_710 * fStack_754 +
                        fStack_72c * local_1438._4_4_;
          fStack_1120 = fStack_714 * fStack_760 + local_718 * fStack_770 + fStack_710 * fStack_750 +
                        fStack_72c * (float)uStack_1430;
          fStack_111c = fStack_714 * fStack_76c + local_718 * fStack_76c + fStack_710 * fStack_76c +
                        fStack_72c * fRam0000000146b2ebdc;
          local_1118 = local_12b8._4_4_ * local_768 + (float)local_12b8 * local_778 +
                       (float)uStack_12b0 * local_758 + fRam0000000146b2ebdc * (float)local_1438;
          fStack_1114 = local_12b8._4_4_ * fStack_764 + (float)local_12b8 * fStack_774 +
                        (float)uStack_12b0 * fStack_754 + fRam0000000146b2ebdc * local_1438._4_4_;
          fStack_1110 = local_12b8._4_4_ * fStack_760 + (float)local_12b8 * fStack_770 +
                        (float)uStack_12b0 * fStack_750 + fRam0000000146b2ebdc * (float)uStack_1430;
          fStack_110c = local_12b8._4_4_ * fStack_76c + (float)local_12b8 * fStack_76c +
                        (float)uStack_12b0 * fStack_76c +
                        fRam0000000146b2ebdc * fRam0000000146b2ebdc;
          fStack_75c = fStack_76c;
          fStack_74c = fStack_76c;
          fStack_73c = fRam0000000146b2ebdc;
          fStack_71c = fStack_72c;
          fStack_70c = fStack_72c;
          fStack_6fc = fRam0000000146b2ebdc;
          FMatrix::RemoveScaling(&local_1148);
          fVar44 = (float)(-(uint)(local_1418 <= fVar81 * fVar113) & (_DAT_146b2fa50 ^ (uint)fVar44)
                          ^ _DAT_146b2fa50);
          fVar111 = (float)(-(uint)(fStack_1414 <= fVar82 * fVar114) &
                            (uRam0000000146b2fa54 ^ (uint)fVar111) ^ uRam0000000146b2fa54);
          fVar112 = (float)(-(uint)(fStack_1410 <= fVar88 * fVar118) &
                            (uRam0000000146b2fa58 ^ (uint)fVar112) ^ uRam0000000146b2fa58);
          pfVar22 = (float *)FMatrix::GetScaledAxis(&local_1148,local_c40,1);
          local_1148 = fVar44 * *pfVar22;
          fStack_1144 = fVar44 * pfVar22[1];
          fStack_1140 = fVar44 * pfVar22[2];
          pfVar22 = (float *)FMatrix::GetScaledAxis(&local_1148,local_c64,2);
          local_1138 = fVar111 * *pfVar22;
          fStack_1134 = fVar111 * pfVar22[1];
          fStack_1130 = fVar111 * pfVar22[2];
          pfVar22 = (float *)FMatrix::GetScaledAxis(&local_1148,local_c94,3);
          local_1128 = fVar112 * *pfVar22;
          fStack_1124 = fVar112 * pfVar22[1];
          fStack_1120 = fVar112 * pfVar22[2];
          FQuat::FQuat(&local_14e8,&local_1148);
          local_1588._0_4_ = 0x322bcc77;
          auVar72._0_4_ = local_14e8 * local_14e8 + fStack_14e0 * fStack_14e0;
          auVar72._4_4_ = fStack_14e4 * fStack_14e4 + fStack_14dc * fStack_14dc;
          auVar72._8_4_ = fStack_14e0 * fStack_14e0 + local_14e8 * local_14e8;
          auVar72._12_4_ = fStack_14dc * fStack_14dc + fStack_14e4 * fStack_14e4;
          auVar104._0_4_ = auVar72._4_4_ + auVar72._0_4_;
          auVar104._4_4_ = auVar72._8_4_ + auVar72._4_4_;
          auVar104._8_4_ = auVar72._12_4_ + auVar72._8_4_;
          auVar104._12_4_ = auVar72._0_4_ + auVar72._12_4_;
          auVar48 = rsqrtps(auVar72,auVar104);
          fVar44 = auVar48._0_4_;
          fVar111 = auVar48._4_4_;
          fVar112 = auVar48._8_4_;
          fVar85 = auVar48._12_4_;
          fVar44 = (_DAT_146b2ec70 - fVar44 * fVar44 * auVar104._0_4_ * _DAT_146b2ec70) * fVar44 +
                   fVar44;
          fVar111 = (fRam0000000146b2ec74 -
                    fVar111 * fVar111 * auVar104._4_4_ * fRam0000000146b2ec74) * fVar111 + fVar111;
          fVar112 = (fRam0000000146b2ec78 -
                    fVar112 * fVar112 * auVar104._8_4_ * fRam0000000146b2ec78) * fVar112 + fVar112;
          fVar85 = (fRam0000000146b2ec7c - fVar85 * fVar85 * auVar104._12_4_ * fRam0000000146b2ec7c)
                   * fVar85 + fVar85;
          iVar26 = *(int *)(param_1 + 600);
          local_df8 = (float)(((uint)(((_DAT_146b2ec70 -
                                       fVar44 * fVar44 * auVar104._0_4_ * _DAT_146b2ec70) * fVar44 +
                                      fVar44) * local_14e8) ^ _DAT_146b2ec60) &
                              -(uint)(1e-08 <= auVar104._0_4_) ^ _DAT_146b2ec60);
          fStack_df4 = (float)(((uint)(((fRam0000000146b2ec74 -
                                        fVar111 * fVar111 * auVar104._4_4_ * fRam0000000146b2ec74) *
                                        fVar111 + fVar111) * fStack_14e4) ^ uRam0000000146b2ec64) &
                               -(uint)(1e-08 <= auVar104._4_4_) ^ uRam0000000146b2ec64);
          fStack_df0 = (float)(((uint)(((fRam0000000146b2ec78 -
                                        fVar112 * fVar112 * auVar104._8_4_ * fRam0000000146b2ec78) *
                                        fVar112 + fVar112) * fStack_14e0) ^ uRam0000000146b2ec68) &
                               -(uint)(1e-08 <= auVar104._8_4_) ^ uRam0000000146b2ec68);
          fStack_dec = (float)(((uint)(((fRam0000000146b2ec7c -
                                        fVar85 * fVar85 * auVar104._12_4_ * fRam0000000146b2ec7c) *
                                        fVar85 + fVar85) * fStack_14dc) ^ uRam0000000146b2ec6c) &
                               -(uint)(1e-08 <= auVar104._12_4_) ^ uRam0000000146b2ec6c);
          fStack_ddc = 0.0;
          local_de8 = local_1118;
          fStack_de4 = fStack_1114;
          fStack_de0 = fStack_1110;
          local_14e8 = local_df8;
          fStack_14e4 = fStack_df4;
          fStack_14e0 = fStack_df0;
          fStack_14dc = fStack_dec;
        }
        uVar36 = local_1538;
        fStack_dcc = fVar84 * fVar120;
        fStack_dd0 = fVar88 * fVar118;
        fStack_dd4 = fVar82 * fVar114;
        local_dd8 = fVar81 * fVar113;
        lVar18 = (longlong)(int)local_1538;
        iVar27 = (int)local_1538 + 1;
        local_1538 = CONCAT44(local_1538._4_4_,iVar27);
        local_e08 = iVar26;
        if (local_1538._4_4_ < iVar27) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_1540,uVar36 & 0xffffffff);
        }
        piVar21 = (int *)(lVar18 * 0x40 + local_1540);
        *piVar21 = local_e08;
        *(ulonglong *)(piVar21 + 4) = CONCAT44(fStack_df4,local_df8);
        *(ulonglong *)(piVar21 + 6) = CONCAT44(fStack_dec,fStack_df0);
        *(ulonglong *)(piVar21 + 8) = CONCAT44(fStack_de4,local_de8);
        *(ulonglong *)(piVar21 + 10) = CONCAT44(fStack_ddc,fStack_de0);
        *(ulonglong *)(piVar21 + 0xc) = CONCAT44(fStack_dd4,local_dd8);
        *(ulonglong *)(piVar21 + 0xe) = CONCAT44(fStack_dcc,fStack_dd0);
      }
      else {
        puVar19 = (undefined8 *)FUN_140611730(plVar41,local_1548[0]);
        local_318 = *puVar19;
        uStack_310 = puVar19[1];
        local_308 = puVar19[2];
        uStack_300 = puVar19[3];
        local_2f8 = puVar19[4];
        uStack_2f0 = puVar19[5];
        uVar16 = FUN_14162bcf0(&local_318,&local_408,&local_348);
        fVar84 = fStack_3dc;
        fVar88 = fStack_3e0;
        fVar82 = fStack_3e4;
        fVar81 = local_3e8;
        fVar120 = fRam0000000146b2ebd8;
        fVar118 = fRam0000000146b2ebd4;
        fVar114 = _DAT_146b2ebd0;
        auVar12._4_4_ = fStack_3e4;
        auVar12._0_4_ = local_3e8;
        auVar12._8_4_ = fStack_3e0;
        auVar12._12_4_ = fStack_3dc;
        fVar44 = local_1428._0_4_;
        fVar111 = local_1428._4_4_;
        fVar112 = local_1428._8_4_;
        fVar113 = local_1428._12_4_;
        auVar48 = minps(auVar12,_local_1428);
        local_1418 = _DAT_146b2fa60;
        fStack_1414 = fRam0000000146b2fa64;
        fStack_1410 = fRam0000000146b2fa68;
        fStack_140c = fRam0000000146b2fa6c;
        auVar61._4_4_ = -(uint)(auVar48._4_4_ < fRam0000000146b2fa64);
        auVar61._0_4_ = -(uint)(auVar48._0_4_ < _DAT_146b2fa60);
        auVar61._8_4_ = -(uint)(auVar48._8_4_ < fRam0000000146b2fa68);
        auVar61._12_4_ = -(uint)(auVar48._12_4_ < fRam0000000146b2fa6c);
        iVar26 = movmskps(uVar16,auVar61);
        if (iVar26 == 0) {
          fVar89 = local_3f8 * fVar44;
          fVar91 = fStack_3f4 * fVar111;
          fVar109 = fStack_3f0 * fVar112;
          fVar110 = fStack_3ec * fVar113;
          local_db8 = fStack_3fc * local_1448 * _DAT_146b2eca0 + fStack_143c * local_408 +
                      fStack_400 * fStack_1444 * _DAT_146b2ec90 +
                      fStack_404 * fStack_1440 * _DAT_146b2ec80;
          fStack_db4 = fStack_400 * local_1448 * fRam0000000146b2eca4 + fStack_143c * fStack_404 +
                       fStack_3fc * fStack_1444 * fRam0000000146b2ec94 +
                       local_408 * fStack_1440 * fRam0000000146b2ec84;
          fStack_db0 = fStack_404 * local_1448 * fRam0000000146b2eca8 + fStack_143c * fStack_400 +
                       local_408 * fStack_1444 * fRam0000000146b2ec98 +
                       fStack_3fc * fStack_1440 * fRam0000000146b2ec88;
          fStack_dac = local_408 * local_1448 * fRam0000000146b2ecac + fStack_143c * fStack_3fc +
                       fStack_404 * fStack_1444 * fRam0000000146b2ec9c +
                       fStack_400 * fStack_1440 * fRam0000000146b2ec8c;
          fVar114 = fVar109 * fStack_1444 - fVar91 * fStack_1440;
          fVar118 = fVar89 * fStack_1440 - fVar109 * local_1448;
          fVar120 = fVar91 * local_1448 - fVar89 * fStack_1444;
          fVar85 = fVar110 * fStack_143c - fVar110 * fStack_143c;
          fVar114 = fVar114 + fVar114;
          fVar118 = fVar118 + fVar118;
          fVar120 = fVar120 + fVar120;
          fVar85 = fVar85 + fVar85;
          local_da8 = (fVar120 * fStack_1444 - fVar118 * fStack_1440) +
                      fStack_143c * fVar114 + fVar89 + (float)local_1438;
          fStack_da4 = (fVar114 * fStack_1440 - fVar120 * local_1448) +
                       fStack_143c * fVar118 + fVar91 + local_1438._4_4_;
          fStack_da0 = (fVar118 * local_1448 - fVar114 * fStack_1444) +
                       fStack_143c * fVar120 + fVar109 + (float)uStack_1430;
          fStack_d9c = (fVar85 * fStack_143c - fVar85 * fStack_143c) +
                       fStack_143c * fVar85 + fVar110 + uStack_1430._4_4_;
        }
        else {
          fVar85 = fStack_1444 + fStack_1444;
          fVar89 = fStack_1440 + fStack_1440;
          fVar110 = local_3e8 * fVar44;
          fVar90 = fStack_3e4 * fVar111;
          fVar77 = fStack_3e0 * fVar112;
          fVar109 = (local_1448 + local_1448) * local_1448;
          fVar91 = fStack_143c * (local_1448 + local_1448);
          fStack_6f4 = (fStack_143c * fVar89 + local_1448 * fVar85) * fVar44;
          fStack_6e0 = (fVar91 + fStack_1444 * fVar89) * fVar111;
          local_6d8 = (fStack_143c * fVar85 + local_1448 * fVar89) * fVar112;
          local_6e8 = fVar111 * (local_1448 * fVar85 - fStack_143c * fVar89);
          fStack_6d4 = fVar112 * (fStack_1444 * fVar89 - fVar91);
          fStack_6f0 = fVar44 * (local_1448 * fVar89 - fStack_143c * fVar85);
          local_6f8 = (float)((uint)((_DAT_146b2ebd0 - (fVar89 * fStack_1440 + fVar85 * fStack_1444)
                                     ) * fVar44) & _DAT_146b2ebe0);
          fStack_6e4 = (float)((uint)((fRam0000000146b2ebd4 - (fVar89 * fStack_1440 + fVar109)) *
                                     fVar111) & uRam0000000146b2ebe4);
          fStack_6d0 = (float)((uint)((fRam0000000146b2ebd8 - (fVar85 * fStack_1444 + fVar109)) *
                                     fVar112) & uRam0000000146b2ebe8);
          fStack_6ec = (float)((uint)((fRam0000000146b2ebdc - (fVar109 + fVar109)) * fVar113) &
                              uRam0000000146b2ebec);
          fVar85 = fStack_404 + fStack_404;
          fVar89 = fStack_400 + fStack_400;
          local_6c8 = (float)local_1438;
          fStack_6c4 = local_1438._4_4_;
          fStack_6c0 = (float)uStack_1430;
          fStack_6bc = fRam0000000146b2ebdc;
          fVar109 = (local_408 + local_408) * local_408;
          fVar91 = fStack_3fc * (local_408 + local_408);
          fStack_6b4 = (fStack_3fc * fVar89 + local_408 * fVar85) * local_3e8;
          fStack_6a0 = (fVar91 + fStack_404 * fVar89) * fStack_3e4;
          local_698 = (fStack_3fc * fVar85 + local_408 * fVar89) * fStack_3e0;
          local_6a8 = fStack_3e4 * (local_408 * fVar85 - fStack_3fc * fVar89);
          fStack_694 = fStack_3e0 * (fStack_404 * fVar89 - fVar91);
          fStack_6b0 = local_3e8 * (local_408 * fVar89 - fStack_3fc * fVar85);
          local_6b8 = (float)((uint)((_DAT_146b2ebd0 - (fVar89 * fStack_400 + fVar85 * fStack_404))
                                    * local_3e8) & _DAT_146b2ebe0);
          fStack_6a4 = (float)((uint)((fRam0000000146b2ebd4 - (fVar89 * fStack_400 + fVar109)) *
                                     fStack_3e4) & uRam0000000146b2ebe4);
          fStack_690 = (float)((uint)((fRam0000000146b2ebd8 - (fVar85 * fStack_404 + fVar109)) *
                                     fStack_3e0) & uRam0000000146b2ebe8);
          fStack_6ac = (float)((uint)((fRam0000000146b2ebdc - (fVar109 + fVar109)) * fStack_3dc) &
                              uRam0000000146b2ebec);
          local_688 = local_3f8;
          fStack_684 = fStack_3f4;
          fStack_680 = fStack_3f0;
          fStack_67c = fRam0000000146b2ebdc;
          local_1108 = fStack_6b4 * local_6e8 + local_6b8 * local_6f8 + fStack_6b0 * local_6d8 +
                       fStack_6ac * (float)local_1438;
          fStack_1104 = fStack_6b4 * fStack_6e4 + local_6b8 * fStack_6f4 + fStack_6b0 * fStack_6d4 +
                        fStack_6ac * local_1438._4_4_;
          fStack_1100 = fStack_6b4 * fStack_6e0 + local_6b8 * fStack_6f0 + fStack_6b0 * fStack_6d0 +
                        fStack_6ac * (float)uStack_1430;
          fStack_10fc = fStack_6b4 * fStack_6ec + local_6b8 * fStack_6ec + fStack_6b0 * fStack_6ec +
                        fStack_6ac * fRam0000000146b2ebdc;
          local_10f8 = fStack_6a4 * local_6e8 + local_6a8 * local_6f8 + fStack_6a0 * local_6d8 +
                       fStack_6ac * (float)local_1438;
          fStack_10f4 = fStack_6a4 * fStack_6e4 + local_6a8 * fStack_6f4 + fStack_6a0 * fStack_6d4 +
                        fStack_6ac * local_1438._4_4_;
          fStack_10f0 = fStack_6a4 * fStack_6e0 + local_6a8 * fStack_6f0 + fStack_6a0 * fStack_6d0 +
                        fStack_6ac * (float)uStack_1430;
          fStack_10ec = fStack_6a4 * fStack_6ec + local_6a8 * fStack_6ec + fStack_6a0 * fStack_6ec +
                        fStack_6ac * fRam0000000146b2ebdc;
          local_10e8 = fStack_694 * local_6e8 + local_698 * local_6f8 + fStack_690 * local_6d8 +
                       fStack_6ac * (float)local_1438;
          fStack_10e4 = fStack_694 * fStack_6e4 + local_698 * fStack_6f4 + fStack_690 * fStack_6d4 +
                        fStack_6ac * local_1438._4_4_;
          fStack_10e0 = fStack_694 * fStack_6e0 + local_698 * fStack_6f0 + fStack_690 * fStack_6d0 +
                        fStack_6ac * (float)uStack_1430;
          fStack_10dc = fStack_694 * fStack_6ec + local_698 * fStack_6ec + fStack_690 * fStack_6ec +
                        fStack_6ac * fRam0000000146b2ebdc;
          local_10d8 = fStack_3f4 * local_6e8 + local_3f8 * local_6f8 + fStack_3f0 * local_6d8 +
                       fRam0000000146b2ebdc * (float)local_1438;
          fStack_10d4 = fStack_3f4 * fStack_6e4 + local_3f8 * fStack_6f4 + fStack_3f0 * fStack_6d4 +
                        fRam0000000146b2ebdc * local_1438._4_4_;
          fStack_10d0 = fStack_3f4 * fStack_6e0 + local_3f8 * fStack_6f0 + fStack_3f0 * fStack_6d0 +
                        fRam0000000146b2ebdc * (float)uStack_1430;
          fStack_10cc = fStack_3f4 * fStack_6ec + local_3f8 * fStack_6ec + fStack_3f0 * fStack_6ec +
                        fRam0000000146b2ebdc * fRam0000000146b2ebdc;
          fStack_6dc = fStack_6ec;
          fStack_6cc = fStack_6ec;
          fStack_69c = fStack_6ac;
          fStack_68c = fStack_6ac;
          FMatrix::RemoveScaling(&local_1108);
          fVar114 = (float)(-(uint)(local_1418 <= fVar110) & (_DAT_146b2fa50 ^ (uint)fVar114) ^
                           _DAT_146b2fa50);
          fVar118 = (float)(-(uint)(fStack_1414 <= fVar90) & (uRam0000000146b2fa54 ^ (uint)fVar118)
                           ^ uRam0000000146b2fa54);
          fVar120 = (float)(-(uint)(fStack_1410 <= fVar77) & (uRam0000000146b2fa58 ^ (uint)fVar120)
                           ^ uRam0000000146b2fa58);
          pfVar22 = (float *)FMatrix::GetScaledAxis(&local_1108,local_c4c,1);
          local_1108 = fVar114 * *pfVar22;
          fStack_1104 = fVar114 * pfVar22[1];
          fStack_1100 = fVar114 * pfVar22[2];
          pfVar22 = (float *)FMatrix::GetScaledAxis(&local_1108,local_ca0,2);
          local_10f8 = fVar118 * *pfVar22;
          fStack_10f4 = fVar118 * pfVar22[1];
          fStack_10f0 = fVar118 * pfVar22[2];
          pfVar22 = (float *)FMatrix::GetScaledAxis(&local_1108,local_c1c,3);
          local_10e8 = fVar120 * *pfVar22;
          fStack_10e4 = fVar120 * pfVar22[1];
          fStack_10e0 = fVar120 * pfVar22[2];
          FQuat::FQuat(&local_1258,&local_1108);
          local_1588._0_4_ = 0x322bcc77;
          auVar73._0_4_ = local_1258 * local_1258 + fStack_1250 * fStack_1250;
          auVar73._4_4_ = fStack_1254 * fStack_1254 + fStack_124c * fStack_124c;
          auVar73._8_4_ = fStack_1250 * fStack_1250 + local_1258 * local_1258;
          auVar73._12_4_ = fStack_124c * fStack_124c + fStack_1254 * fStack_1254;
          auVar105._0_4_ = auVar73._4_4_ + auVar73._0_4_;
          auVar105._4_4_ = auVar73._8_4_ + auVar73._4_4_;
          auVar105._8_4_ = auVar73._12_4_ + auVar73._8_4_;
          auVar105._12_4_ = auVar73._0_4_ + auVar73._12_4_;
          auVar48 = rsqrtps(auVar73,auVar105);
          fVar114 = auVar48._0_4_;
          fVar118 = auVar48._4_4_;
          fVar120 = auVar48._8_4_;
          fVar85 = auVar48._12_4_;
          fVar114 = (_DAT_146b2ec70 - fVar114 * fVar114 * auVar105._0_4_ * _DAT_146b2ec70) * fVar114
                    + fVar114;
          fVar118 = (fRam0000000146b2ec74 -
                    fVar118 * fVar118 * auVar105._4_4_ * fRam0000000146b2ec74) * fVar118 + fVar118;
          fVar120 = (fRam0000000146b2ec78 -
                    fVar120 * fVar120 * auVar105._8_4_ * fRam0000000146b2ec78) * fVar120 + fVar120;
          fVar85 = (fRam0000000146b2ec7c - fVar85 * fVar85 * auVar105._12_4_ * fRam0000000146b2ec7c)
                   * fVar85 + fVar85;
          local_db8 = (float)(((uint)(((_DAT_146b2ec70 -
                                       fVar114 * fVar114 * auVar105._0_4_ * _DAT_146b2ec70) *
                                       fVar114 + fVar114) * local_1258) ^ _DAT_146b2ec60) &
                              -(uint)(1e-08 <= auVar105._0_4_) ^ _DAT_146b2ec60);
          fStack_db4 = (float)(((uint)(((fRam0000000146b2ec74 -
                                        fVar118 * fVar118 * auVar105._4_4_ * fRam0000000146b2ec74) *
                                        fVar118 + fVar118) * fStack_1254) ^ uRam0000000146b2ec64) &
                               -(uint)(1e-08 <= auVar105._4_4_) ^ uRam0000000146b2ec64);
          fStack_db0 = (float)(((uint)(((fRam0000000146b2ec78 -
                                        fVar120 * fVar120 * auVar105._8_4_ * fRam0000000146b2ec78) *
                                        fVar120 + fVar120) * fStack_1250) ^ uRam0000000146b2ec68) &
                               -(uint)(1e-08 <= auVar105._8_4_) ^ uRam0000000146b2ec68);
          fStack_dac = (float)(((uint)(((fRam0000000146b2ec7c -
                                        fVar85 * fVar85 * auVar105._12_4_ * fRam0000000146b2ec7c) *
                                        fVar85 + fVar85) * fStack_124c) ^ uRam0000000146b2ec6c) &
                               -(uint)(1e-08 <= auVar105._12_4_) ^ uRam0000000146b2ec6c);
          fStack_d9c = 0.0;
          local_da8 = local_10d8;
          fStack_da4 = fStack_10d4;
          fStack_da0 = fStack_10d0;
          local_1258 = local_db8;
          fStack_1254 = fStack_db4;
          fStack_1250 = fStack_db0;
          fStack_124c = fStack_dac;
        }
        uVar36 = local_1538;
        fStack_d8c = fVar84 * fVar113;
        fStack_d90 = fVar88 * fVar112;
        fStack_d94 = fVar82 * fVar111;
        local_d98 = fVar81 * fVar44;
        lVar18 = (longlong)(int)local_1538;
        local_dc8 = local_1548[0];
        iVar26 = (int)local_1538 + 1;
        local_1538 = CONCAT44(local_1538._4_4_,iVar26);
        if (local_1538._4_4_ < iVar26) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_1540,uVar36 & 0xffffffff);
        }
        piVar21 = (int *)(lVar18 * 0x40 + local_1540);
        *piVar21 = local_dc8;
        *(ulonglong *)(piVar21 + 4) = CONCAT44(fStack_db4,local_db8);
        *(ulonglong *)(piVar21 + 6) = CONCAT44(fStack_dac,fStack_db0);
        *(ulonglong *)(piVar21 + 8) = CONCAT44(fStack_da4,local_da8);
        *(ulonglong *)(piVar21 + 10) = CONCAT44(fStack_d9c,fStack_da0);
        *(ulonglong *)(piVar21 + 0xc) = CONCAT44(fStack_d94,local_d98);
        *(ulonglong *)(piVar21 + 0xe) = CONCAT44(fStack_d8c,fStack_d90);
      }
      piVar21 = (int *)FBoneContainer::GetParentBoneIndex(lVar17,local_fc4,local_1548);
      fVar44 = _DAT_146b2ebd0;
      fVar111 = fRam0000000146b2ebd4;
      fVar112 = fRam0000000146b2ebd8;
      fVar113 = local_12a8;
      fVar114 = fStack_12a4;
      fVar118 = fStack_12a0;
      fVar120 = fStack_129c;
      local_1548[0] = *piVar21;
    }
    iVar15 = (int)local_1538 + -1;
    lVar18 = (longlong)iVar15;
    if (-1 < iVar15) {
      lVar34 = lVar18 << 6;
      do {
        lVar17 = local_1540;
        iVar26 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar26 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar26 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(param_3,iVar26);
        }
        iVar15 = *(int *)(lVar17 + lVar34);
        piVar21 = (int *)((longlong)iVar26 * 0x40 + *param_3);
        *piVar21 = iVar15;
        puVar19 = (undefined8 *)(lVar17 + 0x10 + lVar34);
        uVar24 = puVar19[1];
        *(undefined8 *)(piVar21 + 4) = *puVar19;
        *(undefined8 *)(piVar21 + 6) = uVar24;
        puVar19 = (undefined8 *)(lVar17 + 0x20 + lVar34);
        uVar24 = puVar19[1];
        *(undefined8 *)(piVar21 + 8) = *puVar19;
        *(undefined8 *)(piVar21 + 10) = uVar24;
        puVar19 = (undefined8 *)(lVar17 + 0x30 + lVar34);
        uVar24 = puVar19[1];
        lVar34 = lVar34 + -0x40;
        lVar18 = lVar18 + -1;
        *(undefined8 *)(piVar21 + 0xc) = *puVar19;
        *(undefined8 *)(piVar21 + 0xe) = uVar24;
        lVar17 = local_1488;
      } while (-1 < lVar18);
    }
    if (local_1540 != 0) {
      iVar15 = FMemory::Free();
    }
    fVar111 = (float)local_1428._0_4_;
    fVar112 = (float)local_1428._4_4_;
    fVar113 = fStack_1420;
    fVar114 = fStack_141c;
    fVar81 = _DAT_146b2ebd0;
    fVar82 = fRam0000000146b2ebd4;
    fVar88 = fRam0000000146b2ebd8;
    fVar84 = fRam0000000146b2ebdc;
    uVar40 = _DAT_146b2ebe0;
    uVar119 = uRam0000000146b2ebe4;
    uVar121 = uRam0000000146b2ebe8;
    uVar122 = uRam0000000146b2ebec;
    fVar118 = local_1448;
    fVar120 = fStack_1444;
    fVar44 = fStack_1440;
    fVar85 = fStack_143c;
  }
  fVar78 = fStack_129c;
  fVar77 = fStack_12a0;
  fVar90 = fStack_12a4;
  fVar110 = local_12a8;
  fVar109 = fRam0000000146b2fa68;
  fVar91 = fRam0000000146b2fa64;
  fVar89 = _DAT_146b2fa60;
  uVar36 = 0;
  if ((local_15a8 == '\0') || (*(int *)(param_1 + 0x2c8) < 1)) goto LAB_142c56357;
  auVar8._4_4_ = fStack_12a4;
  auVar8._0_4_ = local_12a8;
  auVar8._8_4_ = fStack_12a0;
  auVar8._12_4_ = fStack_129c;
  local_1238 = 0.0;
  fStack_1234 = 0.0;
  fStack_1230 = 0.0;
  local_1218 = (float)((uint)fVar81 & uVar40);
  fStack_1214 = (float)((uint)fVar82 & uVar119);
  fStack_1210 = (float)((uint)fVar88 & uVar121);
  fStack_120c = (float)((uint)fVar84 & uVar122);
  local_1228 = 0;
  uStack_1220 = 0;
  auVar1._4_4_ = fVar112;
  auVar1._0_4_ = fVar111;
  auVar1._8_4_ = fVar113;
  auVar1._12_4_ = fVar114;
  auVar48 = minps(auVar8,auVar1);
  auVar62._4_4_ = -(uint)(auVar48._4_4_ < fRam0000000146b2fa64);
  auVar62._0_4_ = -(uint)(auVar48._0_4_ < _DAT_146b2fa60);
  auVar62._8_4_ = -(uint)(auVar48._8_4_ < fRam0000000146b2fa68);
  auVar62._12_4_ = -(uint)(auVar48._12_4_ < fRam0000000146b2fa6c);
  iVar26 = movmskps(iVar15,auVar62);
  local_1568._4_4_ = fRam0000000146b2fa64;
  local_1568._0_4_ = _DAT_146b2fa60;
  fStack_1560 = fRam0000000146b2fa68;
  fStack_155c = fRam0000000146b2fa6c;
  if (iVar26 == 0) {
    fVar89 = fVar111 * (float)local_12b8;
    fVar79 = fVar112 * local_12b8._4_4_;
    fVar87 = fVar113 * (float)uStack_12b0;
    fVar80 = fVar114 * uStack_12b0._4_4_;
    local_1238 = fVar118 * uStack_12c0._4_4_ * _DAT_146b2eca0 + fVar85 * (float)local_12c8 +
                 fVar120 * (float)uStack_12c0 * _DAT_146b2ec90 +
                 fVar44 * local_12c8._4_4_ * _DAT_146b2ec80;
    fStack_1234 = fVar118 * (float)uStack_12c0 * fRam0000000146b2eca4 + fVar85 * local_12c8._4_4_ +
                  fVar120 * uStack_12c0._4_4_ * fRam0000000146b2ec94 +
                  fVar44 * (float)local_12c8 * fRam0000000146b2ec84;
    fStack_1230 = fVar118 * local_12c8._4_4_ * fRam0000000146b2eca8 + fVar85 * (float)uStack_12c0 +
                  fVar120 * (float)local_12c8 * fRam0000000146b2ec98 +
                  fVar44 * uStack_12c0._4_4_ * fRam0000000146b2ec88;
    fStack_122c = fVar118 * (float)local_12c8 * fRam0000000146b2ecac + fVar85 * uStack_12c0._4_4_ +
                  fVar120 * local_12c8._4_4_ * fRam0000000146b2ec9c +
                  fVar44 * (float)uStack_12c0 * fRam0000000146b2ec8c;
    fVar91 = fVar87 * fVar120 - fVar79 * fVar44;
    fVar109 = fVar89 * fVar44 - fVar87 * fVar118;
    fVar86 = fVar79 * fVar118 - fVar89 * fVar120;
    fVar92 = fVar80 * fVar85 - fVar80 * fVar85;
    fVar91 = fVar91 + fVar91;
    fVar109 = fVar109 + fVar109;
    fVar86 = fVar86 + fVar86;
    fVar92 = fVar92 + fVar92;
    fVar89 = (fVar86 * fVar120 - fVar109 * fVar44) + fVar91 * fVar85 + fVar89 + (float)local_1438;
    fVar44 = (fVar91 * fVar44 - fVar86 * fVar118) + fVar109 * fVar85 + fVar79 + local_1438._4_4_;
    fVar118 = (fVar109 * fVar118 - fVar91 * fVar120) + fVar86 * fVar85 + fVar87 + (float)uStack_1430
    ;
    fVar120 = (fVar92 * fVar85 - fVar92 * fVar85) + fVar92 * fVar85 + fVar80 + uStack_1430._4_4_;
    puVar25 = (undefined1 *)0x0;
  }
  else {
    fVar86 = fVar120 + fVar120;
    fVar79 = fVar44 + fVar44;
    fVar80 = fVar111 * local_12a8;
    fVar83 = fVar112 * fStack_12a4;
    fVar93 = fVar113 * fStack_12a0;
    fVar87 = (fVar118 + fVar118) * fVar118;
    fVar92 = (fVar118 + fVar118) * fVar85;
    fStack_674 = (fVar79 * fVar85 + fVar86 * fVar118) * fVar111;
    fStack_660 = (fVar92 + fVar79 * fVar120) * fVar112;
    local_658 = (fVar86 * fVar85 + fVar79 * fVar118) * fVar113;
    local_668 = fVar112 * (fVar86 * fVar118 - fVar79 * fVar85);
    fStack_654 = fVar113 * (fVar79 * fVar120 - fVar92);
    fStack_670 = fVar111 * (fVar79 * fVar118 - fVar86 * fVar85);
    local_678 = (float)((uint)((fVar81 - (fVar79 * fVar44 + fVar86 * fVar120)) * fVar111) & uVar40);
    fStack_664 = (float)((uint)((fVar82 - (fVar79 * fVar44 + fVar87)) * fVar112) & uVar119);
    fStack_650 = (float)((uint)((fVar88 - (fVar86 * fVar120 + fVar87)) * fVar113) & uVar121);
    fStack_66c = (float)((uint)((fVar84 - (fVar87 + fVar87)) * fVar114) & uVar122);
    fVar44 = local_12c8._4_4_ + local_12c8._4_4_;
    fVar120 = (float)uStack_12c0 + (float)uStack_12c0;
    local_648 = (float)local_1438;
    fStack_644 = local_1438._4_4_;
    fStack_640 = (float)uStack_1430;
    fVar85 = ((float)local_12c8 + (float)local_12c8) * (float)local_12c8;
    fVar118 = ((float)local_12c8 + (float)local_12c8) * uStack_12c0._4_4_;
    fStack_634 = (fVar120 * uStack_12c0._4_4_ + fVar44 * (float)local_12c8) * local_12a8;
    fStack_620 = (fVar118 + fVar120 * local_12c8._4_4_) * fStack_12a4;
    local_618 = (fVar44 * uStack_12c0._4_4_ + fVar120 * (float)local_12c8) * fStack_12a0;
    local_628 = fStack_12a4 * (fVar44 * (float)local_12c8 - fVar120 * uStack_12c0._4_4_);
    fStack_614 = fStack_12a0 * (fVar120 * local_12c8._4_4_ - fVar118);
    fStack_630 = local_12a8 * (fVar120 * (float)local_12c8 - fVar44 * uStack_12c0._4_4_);
    local_638 = (float)((uint)((fVar81 - (fVar120 * (float)uStack_12c0 + fVar44 * local_12c8._4_4_))
                              * local_12a8) & uVar40);
    fStack_624 = (float)((uint)((fVar82 - (fVar120 * (float)uStack_12c0 + fVar85)) * fStack_12a4) &
                        uVar119);
    fStack_610 = (float)((uint)((fVar88 - (fVar44 * local_12c8._4_4_ + fVar85)) * fStack_12a0) &
                        uVar121);
    fStack_62c = (float)((uint)((fVar84 - (fVar85 + fVar85)) * fStack_129c) & uVar122);
    local_608 = (float)local_12b8;
    fStack_604 = local_12b8._4_4_;
    fStack_600 = (float)uStack_12b0;
    local_10c8 = fStack_634 * local_668 + local_638 * local_678 + fStack_630 * local_658 +
                 fStack_62c * (float)local_1438;
    fStack_10c4 = fStack_634 * fStack_664 + local_638 * fStack_674 + fStack_630 * fStack_654 +
                  fStack_62c * local_1438._4_4_;
    fStack_10c0 = fStack_634 * fStack_660 + local_638 * fStack_670 + fStack_630 * fStack_650 +
                  fStack_62c * (float)uStack_1430;
    fStack_10bc = fStack_634 * fStack_66c + local_638 * fStack_66c + fStack_630 * fStack_66c +
                  fStack_62c * fVar84;
    local_10b8 = fStack_624 * local_668 + local_628 * local_678 + fStack_620 * local_658 +
                 fStack_62c * (float)local_1438;
    fStack_10b4 = fStack_624 * fStack_664 + local_628 * fStack_674 + fStack_620 * fStack_654 +
                  fStack_62c * local_1438._4_4_;
    fStack_10b0 = fStack_624 * fStack_660 + local_628 * fStack_670 + fStack_620 * fStack_650 +
                  fStack_62c * (float)uStack_1430;
    fStack_10ac = fStack_624 * fStack_66c + local_628 * fStack_66c + fStack_620 * fStack_66c +
                  fStack_62c * fVar84;
    local_10a8 = fStack_614 * local_668 + local_618 * local_678 + fStack_610 * local_658 +
                 fStack_62c * (float)local_1438;
    fStack_10a4 = fStack_614 * fStack_664 + local_618 * fStack_674 + fStack_610 * fStack_654 +
                  fStack_62c * local_1438._4_4_;
    fStack_10a0 = fStack_614 * fStack_660 + local_618 * fStack_670 + fStack_610 * fStack_650 +
                  fStack_62c * (float)uStack_1430;
    fStack_109c = fStack_614 * fStack_66c + local_618 * fStack_66c + fStack_610 * fStack_66c +
                  fStack_62c * fVar84;
    local_1098 = local_12b8._4_4_ * local_668 + (float)local_12b8 * local_678 +
                 (float)uStack_12b0 * local_658 + fVar84 * (float)local_1438;
    fStack_1094 = local_12b8._4_4_ * fStack_664 + (float)local_12b8 * fStack_674 +
                  (float)uStack_12b0 * fStack_654 + fVar84 * local_1438._4_4_;
    fStack_1090 = local_12b8._4_4_ * fStack_660 + (float)local_12b8 * fStack_670 +
                  (float)uStack_12b0 * fStack_650 + fVar84 * (float)uStack_1430;
    fStack_108c = local_12b8._4_4_ * fStack_66c + (float)local_12b8 * fStack_66c +
                  (float)uStack_12b0 * fStack_66c + fVar84 * fVar84;
    fStack_122c = fVar84;
    fStack_65c = fStack_66c;
    fStack_64c = fStack_66c;
    fStack_63c = fVar84;
    fStack_61c = fStack_62c;
    fStack_60c = fStack_62c;
    fStack_5fc = fVar84;
    FMatrix::RemoveScaling(&local_10c8);
    fVar44 = (float)(-(uint)(fVar89 <= fVar80) & (_DAT_146b2fa50 ^ (uint)fVar81) ^ _DAT_146b2fa50);
    fVar118 = (float)(-(uint)(fVar91 <= fVar83) & (uRam0000000146b2fa54 ^ (uint)fVar82) ^
                     uRam0000000146b2fa54);
    fVar120 = (float)(-(uint)(fVar109 <= fVar93) & (uRam0000000146b2fa58 ^ (uint)fVar88) ^
                     uRam0000000146b2fa58);
    pfVar22 = (float *)FMatrix::GetScaledAxis(&local_10c8,local_c88,1);
    local_10c8 = fVar44 * *pfVar22;
    fStack_10c4 = fVar44 * pfVar22[1];
    fStack_10c0 = fVar44 * pfVar22[2];
    pfVar22 = (float *)FMatrix::GetScaledAxis(&local_10c8,local_c7c,2);
    local_10b8 = fVar118 * *pfVar22;
    fStack_10b4 = fVar118 * pfVar22[1];
    fStack_10b0 = fVar118 * pfVar22[2];
    pfVar22 = (float *)FMatrix::GetScaledAxis(&local_10c8,local_c70,3);
    local_10a8 = fVar120 * *pfVar22;
    fStack_10a4 = fVar120 * pfVar22[1];
    fStack_10a0 = fVar120 * pfVar22[2];
    puVar25 = (undefined1 *)FQuat::FQuat(&local_14e8,&local_10c8);
    local_1588._0_4_ = 0x322bcc77;
    auVar74._0_4_ = local_14e8 * local_14e8 + fStack_14e0 * fStack_14e0;
    auVar74._4_4_ = fStack_14e4 * fStack_14e4 + fStack_14dc * fStack_14dc;
    auVar74._8_4_ = fStack_14e0 * fStack_14e0 + local_14e8 * local_14e8;
    auVar74._12_4_ = fStack_14dc * fStack_14dc + fStack_14e4 * fStack_14e4;
    auVar106._0_4_ = auVar74._4_4_ + auVar74._0_4_;
    auVar106._4_4_ = auVar74._8_4_ + auVar74._4_4_;
    auVar106._8_4_ = auVar74._12_4_ + auVar74._8_4_;
    auVar106._12_4_ = auVar74._0_4_ + auVar74._12_4_;
    auVar48 = rsqrtps(auVar74,auVar106);
    fVar44 = auVar48._0_4_;
    fVar118 = auVar48._4_4_;
    fVar120 = auVar48._8_4_;
    fVar81 = auVar48._12_4_;
    fVar44 = (_DAT_146b2ec70 - fVar44 * fVar44 * auVar106._0_4_ * _DAT_146b2ec70) * fVar44 + fVar44;
    fVar118 = (fRam0000000146b2ec74 - fVar118 * fVar118 * auVar106._4_4_ * fRam0000000146b2ec74) *
              fVar118 + fVar118;
    fVar120 = (fRam0000000146b2ec78 - fVar120 * fVar120 * auVar106._8_4_ * fRam0000000146b2ec78) *
              fVar120 + fVar120;
    fVar81 = (fRam0000000146b2ec7c - fVar81 * fVar81 * auVar106._12_4_ * fRam0000000146b2ec7c) *
             fVar81 + fVar81;
    local_1238 = (float)(((uint)(((_DAT_146b2ec70 -
                                  fVar44 * fVar44 * auVar106._0_4_ * _DAT_146b2ec70) * fVar44 +
                                 fVar44) * local_14e8) ^ _DAT_146b2ec60) &
                         -(uint)(1e-08 <= auVar106._0_4_) ^ _DAT_146b2ec60);
    fStack_1234 = (float)(((uint)(((fRam0000000146b2ec74 -
                                   fVar118 * fVar118 * auVar106._4_4_ * fRam0000000146b2ec74) *
                                   fVar118 + fVar118) * fStack_14e4) ^ uRam0000000146b2ec64) &
                          -(uint)(1e-08 <= auVar106._4_4_) ^ uRam0000000146b2ec64);
    fStack_1230 = (float)(((uint)(((fRam0000000146b2ec78 -
                                   fVar120 * fVar120 * auVar106._8_4_ * fRam0000000146b2ec78) *
                                   fVar120 + fVar120) * fStack_14e0) ^ uRam0000000146b2ec68) &
                          -(uint)(1e-08 <= auVar106._8_4_) ^ uRam0000000146b2ec68);
    fStack_122c = (float)(((uint)(((fRam0000000146b2ec7c -
                                   fVar81 * fVar81 * auVar106._12_4_ * fRam0000000146b2ec7c) *
                                   fVar81 + fVar81) * fStack_14dc) ^ uRam0000000146b2ec6c) &
                          -(uint)(1e-08 <= auVar106._12_4_) ^ uRam0000000146b2ec6c);
    fVar120 = 0.0;
    local_1568._4_4_ = fRam0000000146b2fa64;
    local_1568._0_4_ = _DAT_146b2fa60;
    fStack_1560 = fRam0000000146b2fa68;
    fStack_155c = fRam0000000146b2fa6c;
    fVar81 = _DAT_146b2ebd0;
    fVar82 = fRam0000000146b2ebd4;
    fVar88 = fRam0000000146b2ebd8;
    fVar84 = fRam0000000146b2ebdc;
    fVar89 = local_1098;
    fVar44 = fStack_1094;
    fVar118 = fStack_1090;
  }
  fStack_120c = fVar114 * fVar78;
  fStack_1210 = fVar113 * fVar77;
  fStack_1214 = fVar112 * fVar90;
  local_1218 = fVar111 * fVar110;
  local_228 = (undefined1 *)0x0;
  local_1228 = CONCAT44(fVar44,fVar89);
  uStack_1220 = CONCAT44(fVar120,fVar118);
  local_218 = 0;
  uVar39 = *(uint *)(param_1 + 0x2c8);
  if ((int)uVar39 < 1) {
    if ((int)uVar39 < 0) {
      puVar25 = (undefined1 *)FUN_142c58670(local_2e8,uVar39,-uVar39,1);
      goto LAB_142c559b4;
    }
  }
  else {
    local_218 = (ulonglong)uVar39;
    puVar25 = (undefined1 *)
              TArray<FSimpleElementVertex,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                        (local_2e8,0);
LAB_142c559b4:
    local_1568._4_4_ = fRam0000000146b2fa64;
    local_1568._0_4_ = _DAT_146b2fa60;
    fStack_1560 = fRam0000000146b2fa68;
    fStack_155c = fRam0000000146b2fa6c;
    fVar81 = _DAT_146b2ebd0;
    fVar82 = fRam0000000146b2ebd4;
    fVar88 = fRam0000000146b2ebd8;
    fVar84 = fRam0000000146b2ebdc;
    fVar89 = (float)local_1228;
    fVar44 = local_1228._4_4_;
    fVar118 = (float)uStack_1220;
    fVar120 = uStack_1220._4_4_;
    uVar40 = _DAT_146b2ebe0;
    uVar119 = uRam0000000146b2ebe4;
    uVar121 = uRam0000000146b2ebe8;
    uVar122 = uRam0000000146b2ebec;
  }
  iVar26 = *(int *)(param_1 + 0x2c8);
  uVar35 = uVar36;
  uVar42 = uVar36;
  if (0 < iVar26) {
    while( true ) {
      fVar114 = fStack_120c;
      fVar113 = fStack_1210;
      fVar112 = fStack_1214;
      fVar111 = local_1218;
      auVar48 = *(undefined1 (*) [16])(local_1480 + 0x20 + uVar35);
      auVar2._4_4_ = fStack_1214;
      auVar2._0_4_ = local_1218;
      auVar2._8_4_ = fStack_1210;
      auVar2._12_4_ = fStack_120c;
      auVar45 = minps(auVar48,auVar2);
      auVar63._4_4_ = -(uint)(auVar45._4_4_ < fRam0000000146b2fa64);
      auVar63._0_4_ = -(uint)(auVar45._0_4_ < _DAT_146b2fa60);
      auVar63._8_4_ = -(uint)(auVar45._8_4_ < fRam0000000146b2fa68);
      auVar63._12_4_ = -(uint)(auVar45._12_4_ < fRam0000000146b2fa6c);
      iVar26 = movmskps((int)puVar25,auVar63);
      if (iVar26 == 0) {
        pfVar22 = (float *)(local_1480 + uVar35);
        fVar81 = *pfVar22;
        fVar82 = pfVar22[1];
        fVar88 = pfVar22[2];
        fVar84 = pfVar22[3];
        pfVar22 = (float *)(local_1480 + 0x10 + uVar35);
        fVar85 = *pfVar22 * local_1218;
        fVar91 = pfVar22[1] * fStack_1214;
        fVar109 = pfVar22[2] * fStack_1210;
        fVar110 = pfVar22[3] * fStack_120c;
        fVar90 = local_1238 * fVar84 * _DAT_146b2eca0 + fStack_122c * fVar81 +
                 fStack_1234 * fVar88 * _DAT_146b2ec90 + fStack_1230 * fVar82 * _DAT_146b2ec80;
        fVar77 = local_1238 * fVar88 * fRam0000000146b2eca4 + fStack_122c * fVar82 +
                 fStack_1234 * fVar84 * fRam0000000146b2ec94 +
                 fStack_1230 * fVar81 * fRam0000000146b2ec84;
        fVar78 = local_1238 * fVar82 * fRam0000000146b2eca8 + fStack_122c * fVar88 +
                 fStack_1234 * fVar81 * fRam0000000146b2ec98 +
                 fStack_1230 * fVar84 * fRam0000000146b2ec88;
        fVar86 = local_1238 * fVar81 * fRam0000000146b2ecac + fStack_122c * fVar84 +
                 fStack_1234 * fVar82 * fRam0000000146b2ec9c +
                 fStack_1230 * fVar88 * fRam0000000146b2ec8c;
        fVar81 = fVar109 * fStack_1234 - fVar91 * fStack_1230;
        fVar82 = fVar85 * fStack_1230 - fVar109 * local_1238;
        fVar88 = fVar91 * local_1238 - fVar85 * fStack_1234;
        fVar84 = fVar110 * fStack_122c - fVar110 * fStack_122c;
        fVar81 = fVar81 + fVar81;
        fVar82 = fVar82 + fVar82;
        fVar88 = fVar88 + fVar88;
        fVar84 = fVar84 + fVar84;
        fVar89 = (fVar88 * fStack_1234 - fVar82 * fStack_1230) + fVar81 * fStack_122c + fVar85 +
                 fVar89;
        fVar44 = (fVar81 * fStack_1230 - fVar88 * local_1238) + fVar82 * fStack_122c + fVar91 +
                 fVar44;
        fVar118 = (fVar82 * local_1238 - fVar81 * fStack_1234) + fVar88 * fStack_122c + fVar109 +
                  fVar118;
        fVar120 = (fVar84 * fStack_122c - fVar84 * fStack_122c) + fVar84 * fStack_122c + fVar110 +
                  fVar120;
      }
      else {
        fVar120 = fStack_1234 + fStack_1234;
        fVar85 = fStack_1230 + fStack_1230;
        fVar87 = auVar48._0_4_ * local_1218;
        fVar80 = auVar48._4_4_ * fStack_1214;
        fVar83 = auVar48._8_4_ * fStack_1210;
        fVar91 = local_1238 * (local_1238 + local_1238);
        fVar109 = fStack_122c * (local_1238 + local_1238);
        fStack_5f4 = (fStack_122c * fVar85 + local_1238 * fVar120) * local_1218;
        fStack_5e0 = (fVar109 + fStack_1234 * fVar85) * fStack_1214;
        local_5d8 = (fStack_122c * fVar120 + local_1238 * fVar85) * fStack_1210;
        local_5e8 = fStack_1214 * (local_1238 * fVar120 - fStack_122c * fVar85);
        fStack_5d4 = fStack_1210 * (fStack_1234 * fVar85 - fVar109);
        fStack_5f0 = local_1218 * (local_1238 * fVar85 - fStack_122c * fVar120);
        local_5f8 = (float)((uint)((fVar81 - (fStack_1230 * fVar85 + fStack_1234 * fVar120)) *
                                  local_1218) & uVar40);
        fStack_5e4 = (float)((uint)((fVar82 - (fStack_1230 * fVar85 + fVar91)) * fStack_1214) &
                            uVar119);
        fStack_5d0 = (float)((uint)((fVar88 - (fStack_1234 * fVar120 + fVar91)) * fStack_1210) &
                            uVar121);
        fStack_5ec = (float)((uint)((fVar84 - (fVar91 + fVar91)) * fStack_120c) & uVar122);
        pfVar22 = (float *)(local_1480 + uVar35);
        fVar120 = *pfVar22;
        fVar85 = pfVar22[1];
        fVar91 = pfVar22[2];
        fVar109 = pfVar22[3];
        fVar78 = fVar85 + fVar85;
        fVar86 = fVar91 + fVar91;
        fVar79 = fVar120 * (fVar120 + fVar120);
        fVar92 = fVar109 * (fVar120 + fVar120);
        pfVar22 = (float *)(local_1480 + 0x20 + uVar35);
        fVar110 = *pfVar22;
        fVar90 = pfVar22[1];
        fVar77 = pfVar22[2];
        fStack_5b4 = (fVar109 * fVar86 + fVar120 * fVar78) * fVar110;
        fStack_5a0 = (fVar92 + fVar85 * fVar86) * fVar90;
        local_598 = (fVar109 * fVar78 + fVar120 * fVar86) * fVar77;
        local_5a8 = fVar90 * (fVar120 * fVar78 - fVar109 * fVar86);
        fStack_594 = fVar77 * (fVar85 * fVar86 - fVar92);
        fStack_5b0 = fVar110 * (fVar120 * fVar86 - fVar109 * fVar78);
        local_5b8 = (float)((uint)((fVar81 - (fVar91 * fVar86 + fVar85 * fVar78)) * fVar110) &
                           uVar40);
        fStack_5a4 = (float)((uint)((fVar82 - (fVar91 * fVar86 + fVar79)) * fVar90) & uVar119);
        fStack_590 = (float)((uint)((fVar88 - (fVar85 * fVar78 + fVar79)) * fVar77) & uVar121);
        fStack_5ac = (float)((uint)((fVar84 - (fVar79 + fVar79)) * pfVar22[3]) & uVar122);
        pfVar22 = (float *)(local_1480 + 0x10 + uVar35);
        local_588 = *pfVar22;
        fStack_584 = pfVar22[1];
        fStack_580 = pfVar22[2];
        local_1088 = fStack_5b4 * local_5e8 + local_5b8 * local_5f8 + fStack_5b0 * local_5d8 +
                     fStack_5ac * fVar89;
        fStack_1084 = fStack_5b4 * fStack_5e4 + local_5b8 * fStack_5f4 + fStack_5b0 * fStack_5d4 +
                      fStack_5ac * fVar44;
        fStack_1080 = fStack_5b4 * fStack_5e0 + local_5b8 * fStack_5f0 + fStack_5b0 * fStack_5d0 +
                      fStack_5ac * fVar118;
        fStack_107c = fStack_5b4 * fStack_5ec + local_5b8 * fStack_5ec + fStack_5b0 * fStack_5ec +
                      fStack_5ac * fVar84;
        local_1078 = fStack_5a4 * local_5e8 + local_5a8 * local_5f8 + fStack_5a0 * local_5d8 +
                     fStack_5ac * fVar89;
        fStack_1074 = fStack_5a4 * fStack_5e4 + local_5a8 * fStack_5f4 + fStack_5a0 * fStack_5d4 +
                      fStack_5ac * fVar44;
        fStack_1070 = fStack_5a4 * fStack_5e0 + local_5a8 * fStack_5f0 + fStack_5a0 * fStack_5d0 +
                      fStack_5ac * fVar118;
        fStack_106c = fStack_5a4 * fStack_5ec + local_5a8 * fStack_5ec + fStack_5a0 * fStack_5ec +
                      fStack_5ac * fVar84;
        local_1068 = fStack_594 * local_5e8 + local_598 * local_5f8 + fStack_590 * local_5d8 +
                     fStack_5ac * fVar89;
        fStack_1064 = fStack_594 * fStack_5e4 + local_598 * fStack_5f4 + fStack_590 * fStack_5d4 +
                      fStack_5ac * fVar44;
        fStack_1060 = fStack_594 * fStack_5e0 + local_598 * fStack_5f0 + fStack_590 * fStack_5d0 +
                      fStack_5ac * fVar118;
        fStack_105c = fStack_594 * fStack_5ec + local_598 * fStack_5ec + fStack_590 * fStack_5ec +
                      fStack_5ac * fVar84;
        local_1058 = fStack_584 * local_5e8 + local_588 * local_5f8 + fStack_580 * local_5d8 +
                     fVar84 * fVar89;
        fStack_1054 = fStack_584 * fStack_5e4 + local_588 * fStack_5f4 + fStack_580 * fStack_5d4 +
                      fVar84 * fVar44;
        fStack_1050 = fStack_584 * fStack_5e0 + local_588 * fStack_5f0 + fStack_580 * fStack_5d0 +
                      fVar84 * fVar118;
        fStack_104c = fStack_584 * fStack_5ec + local_588 * fStack_5ec + fStack_580 * fStack_5ec +
                      fVar84 * fVar84;
        fStack_5dc = fStack_5ec;
        fStack_5cc = fStack_5ec;
        local_5c8 = fVar89;
        fStack_5c4 = fVar44;
        fStack_5c0 = fVar118;
        fStack_5bc = fVar84;
        fStack_59c = fStack_5ac;
        fStack_58c = fStack_5ac;
        fStack_57c = fVar84;
        FMatrix::RemoveScaling(&local_1088);
        fVar44 = (float)(-(uint)((float)local_1568._0_4_ <= fVar87) &
                         (_DAT_146b2fa50 ^ (uint)fVar81) ^ _DAT_146b2fa50);
        fVar118 = (float)(-(uint)((float)local_1568._4_4_ <= fVar80) &
                          (uRam0000000146b2fa54 ^ (uint)fVar82) ^ uRam0000000146b2fa54);
        fVar120 = (float)(-(uint)(fStack_1560 <= fVar83) & (uRam0000000146b2fa58 ^ (uint)fVar88) ^
                         uRam0000000146b2fa58);
        pfVar22 = (float *)FMatrix::GetScaledAxis(&local_1088,local_d0c,1);
        local_1088 = fVar44 * *pfVar22;
        fStack_1084 = fVar44 * pfVar22[1];
        fStack_1080 = fVar44 * pfVar22[2];
        pfVar22 = (float *)FMatrix::GetScaledAxis(&local_1088,local_d24,2);
        local_1078 = fVar118 * *pfVar22;
        fStack_1074 = fVar118 * pfVar22[1];
        fStack_1070 = fVar118 * pfVar22[2];
        pfVar22 = (float *)FMatrix::GetScaledAxis(&local_1088,local_cf4,3);
        local_1068 = fVar120 * *pfVar22;
        fStack_1064 = fVar120 * pfVar22[1];
        fStack_1060 = fVar120 * pfVar22[2];
        FQuat::FQuat(&local_14e8,&local_1088);
        local_1588._0_4_ = 0x322bcc77;
        auVar75._0_4_ = local_14e8 * local_14e8 + fStack_14e0 * fStack_14e0;
        auVar75._4_4_ = fStack_14e4 * fStack_14e4 + fStack_14dc * fStack_14dc;
        auVar75._8_4_ = fStack_14e0 * fStack_14e0 + local_14e8 * local_14e8;
        auVar75._12_4_ = fStack_14dc * fStack_14dc + fStack_14e4 * fStack_14e4;
        auVar107._0_4_ = auVar75._4_4_ + auVar75._0_4_;
        auVar107._4_4_ = auVar75._8_4_ + auVar75._4_4_;
        auVar107._8_4_ = auVar75._12_4_ + auVar75._8_4_;
        auVar107._12_4_ = auVar75._0_4_ + auVar75._12_4_;
        auVar45 = rsqrtps(auVar75,auVar107);
        fVar44 = auVar45._0_4_;
        fVar118 = auVar45._4_4_;
        fVar120 = auVar45._8_4_;
        fVar81 = auVar45._12_4_;
        fVar44 = (_DAT_146b2ec70 - fVar44 * fVar44 * auVar107._0_4_ * _DAT_146b2ec70) * fVar44 +
                 fVar44;
        fVar118 = (fRam0000000146b2ec74 - fVar118 * fVar118 * auVar107._4_4_ * fRam0000000146b2ec74)
                  * fVar118 + fVar118;
        fVar120 = (fRam0000000146b2ec78 - fVar120 * fVar120 * auVar107._8_4_ * fRam0000000146b2ec78)
                  * fVar120 + fVar120;
        fVar81 = (fRam0000000146b2ec7c - fVar81 * fVar81 * auVar107._12_4_ * fRam0000000146b2ec7c) *
                 fVar81 + fVar81;
        fVar90 = (float)(((uint)(((_DAT_146b2ec70 -
                                  fVar44 * fVar44 * auVar107._0_4_ * _DAT_146b2ec70) * fVar44 +
                                 fVar44) * local_14e8) ^ _DAT_146b2ec60) &
                         -(uint)(1e-08 <= auVar107._0_4_) ^ _DAT_146b2ec60);
        fVar77 = (float)(((uint)(((fRam0000000146b2ec74 -
                                  fVar118 * fVar118 * auVar107._4_4_ * fRam0000000146b2ec74) *
                                  fVar118 + fVar118) * fStack_14e4) ^ uRam0000000146b2ec64) &
                         -(uint)(1e-08 <= auVar107._4_4_) ^ uRam0000000146b2ec64);
        fVar78 = (float)(((uint)(((fRam0000000146b2ec78 -
                                  fVar120 * fVar120 * auVar107._8_4_ * fRam0000000146b2ec78) *
                                  fVar120 + fVar120) * fStack_14e0) ^ uRam0000000146b2ec68) &
                         -(uint)(1e-08 <= auVar107._8_4_) ^ uRam0000000146b2ec68);
        fVar86 = (float)(((uint)(((fRam0000000146b2ec7c -
                                  fVar81 * fVar81 * auVar107._12_4_ * fRam0000000146b2ec7c) * fVar81
                                 + fVar81) * fStack_14dc) ^ uRam0000000146b2ec6c) &
                         -(uint)(1e-08 <= auVar107._12_4_) ^ uRam0000000146b2ec6c);
        fVar120 = 0.0;
        fVar89 = local_1058;
        fVar44 = fStack_1054;
        fVar118 = fStack_1050;
        local_14e8 = fVar90;
        fStack_14e4 = fVar77;
        fStack_14e0 = fVar78;
        fStack_14dc = fVar86;
      }
      puVar25 = local_2e8;
      if (local_228 != (undefined1 *)0x0) {
        puVar25 = local_228;
      }
      uVar39 = (int)uVar42 + 1;
      pfVar22 = (float *)(puVar25 + uVar35);
      *pfVar22 = fVar90;
      pfVar22[1] = fVar77;
      pfVar22[2] = fVar78;
      pfVar22[3] = fVar86;
      pfVar22 = (float *)(puVar25 + uVar35 + 0x10);
      *pfVar22 = fVar89;
      pfVar22[1] = fVar44;
      pfVar22[2] = fVar118;
      pfVar22[3] = fVar120;
      pfVar22 = (float *)(puVar25 + uVar35 + 0x20);
      *pfVar22 = auVar48._0_4_ * fVar111;
      pfVar22[1] = auVar48._4_4_ * fVar112;
      pfVar22[2] = auVar48._8_4_ * fVar113;
      pfVar22[3] = auVar48._12_4_ * fVar114;
      iVar26 = *(int *)(param_1 + 0x2c8);
      if (iVar26 <= (int)uVar39) break;
      local_1568._4_4_ = fRam0000000146b2fa64;
      local_1568._0_4_ = _DAT_146b2fa60;
      fStack_1560 = fRam0000000146b2fa68;
      fStack_155c = fRam0000000146b2fa6c;
      uVar35 = uVar35 + 0x30;
      uVar42 = (ulonglong)uVar39;
      fVar81 = _DAT_146b2ebd0;
      fVar82 = fRam0000000146b2ebd4;
      fVar88 = fRam0000000146b2ebd8;
      fVar84 = fRam0000000146b2ebdc;
      fVar89 = (float)local_1228;
      fVar44 = local_1228._4_4_;
      fVar118 = (float)uStack_1220;
      fVar120 = uStack_1220._4_4_;
    }
  }
  puVar25 = local_2e8;
  if (local_228 != (undefined1 *)0x0) {
    puVar25 = local_228;
  }
  puVar37 = puVar25 + (longlong)(int)local_218 * 0x30;
  fVar44 = DAT_1468b5d94;
  fVar111 = DAT_1468b5d90;
  fVar112 = DAT_1468b5d98;
  if (puVar25 != puVar37) {
    do {
      pfVar22 = (float *)(puVar25 + 0x10);
      pfVar23 = (float *)(puVar25 + 0x14);
      pfVar3 = (float *)(puVar25 + 0x18);
      puVar25 = puVar25 + 0x30;
      fVar111 = fVar111 + *pfVar22;
      fVar44 = fVar44 + *pfVar23;
      fVar112 = fVar112 + *pfVar3;
    } while (puVar25 != puVar37);
    iVar26 = *(int *)(param_1 + 0x2c8);
  }
  fVar113 = 1.0 / (float)(int)local_218;
  if (0 < iVar26) {
    local_1588._0_4_ = 0x322bcc77;
    uVar35 = uVar36;
    uVar42 = uVar36;
    do {
      lVar18 = param_1 + 0x24c;
      local_f98._4_4_ = fVar44 * fVar113;
      local_f98._0_4_ = fVar111 * fVar113;
      local_f98._8_4_ = fVar112 * fVar113;
      local_f98._12_4_ = 0;
      lVar34 = *(longlong *)(*(longlong *)(param_1 + 0x2c0) + uVar36);
      puVar25 = local_2e8;
      if (local_228 != (undefined1 *)0x0) {
        puVar25 = local_228;
      }
      pauVar20 = (undefined1 (*) [16])(puVar25 + uVar42);
      fVar114 = *(float *)*pauVar20;
      fVar118 = *(float *)(*pauVar20 + 4);
      fVar120 = *(float *)(*pauVar20 + 8);
      fVar81 = *(float *)(*pauVar20 + 0xc);
      local_fa8 = *pauVar20;
      uVar24 = *(undefined8 *)(puVar25 + uVar42 + 0x20);
      uVar4 = *(undefined8 *)((longlong)(puVar25 + uVar42 + 0x20) + 8);
      uVar5 = *(undefined8 *)(puVar25 + uVar42 + 0x10);
      uVar6 = *(undefined8 *)((longlong)(puVar25 + uVar42 + 0x10) + 8);
      local_f88 = uVar24;
      uStack_f80 = uVar4;
      FUN_142c566f0(local_ec8,local_fa8,*(undefined1 *)(lVar34 + 0x48));
      local_15b0 = 0x3f800000;
      local_15b8 = lVar34;
      FUN_142c56980(local_eb8,local_ec8,local_fa8,lVar18);
      pfVar22 = (float *)FRotator::Quaternion(local_eb8,local_c08);
      fVar82 = *(float *)(param_1 + 0x270);
      fVar88 = *(float *)(param_1 + 0x274);
      fVar84 = *(float *)(param_1 + 0x278);
      fVar85 = *(float *)(param_1 + 0x27c);
      fVar89 = *pfVar22;
      fVar91 = pfVar22[1];
      fVar109 = pfVar22[2];
      fVar110 = pfVar22[3];
      fVar90 = *(float *)(param_1 + 0x280);
      fVar77 = *(float *)(param_1 + 0x284);
      fVar78 = *(float *)(param_1 + 0x288);
      fVar86 = *(float *)(param_1 + 0x28c);
      fVar92 = fVar85 * fVar89 * _DAT_146b2eca0 + fVar110 * fVar82 +
               fVar84 * fVar91 * _DAT_146b2ec90 + fVar88 * fVar109 * _DAT_146b2ec80;
      fVar79 = fVar84 * fVar89 * fRam0000000146b2eca4 + fVar110 * fVar88 +
               fVar85 * fVar91 * fRam0000000146b2ec94 + fVar82 * fVar109 * fRam0000000146b2ec84;
      fVar87 = fVar88 * fVar89 * fRam0000000146b2eca8 + fVar110 * fVar84 +
               fVar82 * fVar91 * fRam0000000146b2ec98 + fVar85 * fVar109 * fRam0000000146b2ec88;
      fVar85 = fVar82 * fVar89 * fRam0000000146b2ecac + fVar110 * fVar85 +
               fVar88 * fVar91 * fRam0000000146b2ec9c + fVar84 * fVar109 * fRam0000000146b2ec8c;
      fVar82 = fVar86 * fVar92 * _DAT_146b2eca0 + fVar85 * fVar90 + fVar78 * fVar79 * _DAT_146b2ec90
               + fVar77 * fVar87 * _DAT_146b2ec80;
      fVar88 = fVar78 * fVar92 * fRam0000000146b2eca4 + fVar85 * fVar77 +
               fVar86 * fVar79 * fRam0000000146b2ec94 + fVar90 * fVar87 * fRam0000000146b2ec84;
      fVar84 = fVar77 * fVar92 * fRam0000000146b2eca8 + fVar85 * fVar78 +
               fVar90 * fVar79 * fRam0000000146b2ec98 + fVar86 * fVar87 * fRam0000000146b2ec88;
      fVar85 = fVar90 * fVar92 * fRam0000000146b2ecac + fVar85 * fVar86 +
               fVar77 * fVar79 * fRam0000000146b2ec9c + fVar78 * fVar87 * fRam0000000146b2ec8c;
      fVar89 = fVar81 * fVar82 * _DAT_146b2eca0 + fVar85 * fVar114 +
               fVar120 * fVar88 * _DAT_146b2ec90 + fVar118 * fVar84 * _DAT_146b2ec80;
      fVar91 = fVar120 * fVar82 * fRam0000000146b2eca4 + fVar85 * fVar118 +
               fVar81 * fVar88 * fRam0000000146b2ec94 + fVar114 * fVar84 * fRam0000000146b2ec84;
      fVar109 = fVar118 * fVar82 * fRam0000000146b2eca8 + fVar85 * fVar120 +
                fVar114 * fVar88 * fRam0000000146b2ec98 + fVar81 * fVar84 * fRam0000000146b2ec88;
      fVar82 = fVar114 * fVar82 * fRam0000000146b2ecac + fVar85 * fVar81 +
               fVar118 * fVar88 * fRam0000000146b2ec9c + fVar120 * fVar84 * fRam0000000146b2ec8c;
      auVar76._0_4_ = fVar89 * fVar89 + fVar109 * fVar109;
      auVar76._4_4_ = fVar91 * fVar91 + fVar82 * fVar82;
      auVar76._8_4_ = fVar109 * fVar109 + fVar89 * fVar89;
      auVar76._12_4_ = fVar82 * fVar82 + fVar91 * fVar91;
      auVar108._0_4_ = auVar76._4_4_ + auVar76._0_4_;
      auVar108._4_4_ = auVar76._8_4_ + auVar76._4_4_;
      auVar108._8_4_ = auVar76._12_4_ + auVar76._8_4_;
      auVar108._12_4_ = auVar76._0_4_ + auVar76._12_4_;
      auVar48 = rsqrtps(auVar76,auVar108);
      fVar114 = auVar48._0_4_;
      fVar118 = auVar48._4_4_;
      fVar120 = auVar48._8_4_;
      fVar81 = auVar48._12_4_;
      fVar114 = (_DAT_146b2ec70 - fVar114 * fVar114 * auVar108._0_4_ * _DAT_146b2ec70) * fVar114 +
                fVar114;
      fVar118 = (fRam0000000146b2ec74 - fVar118 * fVar118 * auVar108._4_4_ * fRam0000000146b2ec74) *
                fVar118 + fVar118;
      fVar120 = (fRam0000000146b2ec78 - fVar120 * fVar120 * auVar108._8_4_ * fRam0000000146b2ec78) *
                fVar120 + fVar120;
      fVar81 = (fRam0000000146b2ec7c - fVar81 * fVar81 * auVar108._12_4_ * fRam0000000146b2ec7c) *
               fVar81 + fVar81;
      local_d78 = ((uint)(((_DAT_146b2ec70 - fVar114 * fVar114 * auVar108._0_4_ * _DAT_146b2ec70) *
                           fVar114 + fVar114) * fVar89) ^ _DAT_146b2ec60) &
                  -(uint)(1e-08 <= auVar108._0_4_) ^ _DAT_146b2ec60;
      uStack_d74 = ((uint)(((fRam0000000146b2ec74 -
                            fVar118 * fVar118 * auVar108._4_4_ * fRam0000000146b2ec74) * fVar118 +
                           fVar118) * fVar91) ^ uRam0000000146b2ec64) &
                   -(uint)(1e-08 <= auVar108._4_4_) ^ uRam0000000146b2ec64;
      uStack_d70 = ((uint)(((fRam0000000146b2ec78 -
                            fVar120 * fVar120 * auVar108._8_4_ * fRam0000000146b2ec78) * fVar120 +
                           fVar120) * fVar109) ^ uRam0000000146b2ec68) &
                   -(uint)(1e-08 <= auVar108._8_4_) ^ uRam0000000146b2ec68;
      uStack_d6c = ((uint)(((fRam0000000146b2ec7c -
                            fVar81 * fVar81 * auVar108._12_4_ * fRam0000000146b2ec7c) * fVar81 +
                           fVar81) * fVar82) ^ uRam0000000146b2ec6c) &
                   -(uint)(1e-08 <= auVar108._12_4_) ^ uRam0000000146b2ec6c;
      if (*(char *)(lVar34 + 0xc) == '\0') {
        local_d88 = *(undefined4 *)(lVar34 + 0x10);
      }
      else if (*(int *)(lVar34 + 8) == -1) {
        local_d88 = 0xffffffff;
      }
      else {
        local_d88 = *(undefined4 *)
                     (*(longlong *)(lVar17 + 0x80) + (longlong)*(int *)(lVar34 + 8) * 4);
      }
      iVar26 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar26 + 1;
      local_d68 = uVar5;
      uStack_d60 = uVar6;
      local_d58 = uVar24;
      uStack_d50 = uVar4;
      if (*(int *)((longlong)param_3 + 0xc) < iVar26 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(param_3,iVar26);
      }
      uVar40 = (int)uVar35 + 1;
      uVar35 = (ulonglong)uVar40;
      puVar32 = (undefined4 *)((longlong)iVar26 * 0x40 + *param_3);
      uVar36 = uVar36 + 8;
      uVar42 = uVar42 + 0x30;
      *puVar32 = local_d88;
      *(ulonglong *)(puVar32 + 4) = CONCAT44(uStack_d74,local_d78);
      *(ulonglong *)(puVar32 + 6) = CONCAT44(uStack_d6c,uStack_d70);
      *(undefined8 *)(puVar32 + 8) = local_d68;
      *(undefined8 *)(puVar32 + 10) = uStack_d60;
      *(undefined8 *)(puVar32 + 0xc) = local_d58;
      *(undefined8 *)(puVar32 + 0xe) = uStack_d50;
    } while ((int)uVar40 < *(int *)(param_1 + 0x2c8));
  }
  if (local_228 != (undefined1 *)0x0) {
    FMemory::Free();
  }
LAB_142c56357:
  AlgoImpl::
  IntroSortInternal<FBoneTransform,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_>
            (*param_3,(longlong)(int)param_3[1],local_1598[0],local_1598);
  if (local_1480 != 0) {
    FMemory::Free();
  }
  if (local_14a0 != 0) {
    FMemory::Free();
  }
  if (local_14b0 != 0) {
    FMemory::Free();
  }
  if (puStack_14c0 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c56410 FUN_142c56410 body=724 status=ok
// SIG undefined FUN_142c56410(void)

void FUN_142c56410(longlong param_1,float *param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined8 local_res8;
  void *local_58;
  int local_50;
  int local_4c;
  undefined2 *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  puVar6 = &DAT_143f3eda8;
  if (param_2[8] == 0.0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = *(undefined2 **)(param_2 + 6);
  }
  lVar2 = FUN_142c5c930();
  local_res8 = *(undefined8 *)(lVar2 + 0x18);
  FName::ToString(&local_res8,&local_48);
  puVar7 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar7 = local_48;
  }
  FString::PrintfImpl(&local_58,L"%s<W:%.1f%%> %s",puVar7,(double)(*param_2 * 100.0),puVar5);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar4 = 0;
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  if (*(char *)(param_1 + 0x1b4) == '\0') {
    puVar3 = (undefined8 *)FName::ToString(param_1 + 0x140,local_38);
    if (*(int *)(puVar3 + 1) != 0) {
      puVar6 = (undefined2 *)*puVar3;
    }
    FString::PrintfImpl(&local_48,L"Target: %s",puVar6);
    puVar6 = local_48;
    iVar8 = local_50;
    if ((int)local_40 != 0) {
      iVar4 = (int)local_40 + -1;
    }
    if (iVar4 != 0) {
      lVar2 = (longlong)local_50;
      local_50 = (uint)(local_50 == 0) + local_50 + iVar4;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar8);
      }
      pvVar1 = (void *)((longlong)local_58 + (lVar2 - (ulonglong)(iVar8 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,puVar6,(longlong)iVar4 * 2);
      *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free(local_48);
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    local_48 = (undefined2 *)0x0;
    local_40 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    puVar6 = local_48;
    FGenericPlatformString::Convert<char,wchar_t>(local_48,2,&DAT_145835164,2,0x3f);
    iVar4 = local_50;
    if (((int)local_40 != 0) && (iVar8 = (int)local_40 + -1, iVar8 != 0)) {
      lVar2 = (longlong)local_50;
      local_50 = (uint)(local_50 == 0) + local_50 + iVar8;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar4);
      }
      pvVar1 = (void *)((longlong)local_58 + (lVar2 - (ulonglong)(iVar4 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,puVar6,(longlong)iVar8 * 2);
      *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar1) = 0;
    }
    if (puVar6 != (undefined2 *)0x0) {
      FMemory::Free(puVar6);
    }
    FUN_141f85ec0(param_1,&local_58);
  }
  pvVar1 = local_58;
  lVar2 = (longlong)local_50;
  local_48 = (undefined2 *)0x0;
  local_40 = CONCAT44(local_40._4_4_,local_50);
  if (local_50 == 0) {
    local_40 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_50,0);
    _guard_xfg_dispatch_icall_nop(local_48,pvVar1,lVar2 * 2);
  }
  FNodeDebugData::AddDebugItem(param_2,&local_48,0);
  FPoseLinkBase::GatherDebugData(param_1 + 0x30,param_2);
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c566f0 FUN_142c566f0 body=568 status=ok
// SIG undefined FUN_142c566f0(void)

undefined8 * FUN_142c566f0(undefined8 *param_1,float *param_2,undefined4 param_3)

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
  float local_20;
  
  *param_1 = 0x3f800000;
  *(undefined4 *)(param_1 + 1) = 0;
  switch(param_3) {
  case 0:
    fVar5 = *param_2;
    fVar2 = param_2[1];
    fVar10 = param_2[2];
    fVar1 = param_2[3];
    fVar3 = fVar2 * 0.0 - fVar10 * 0.0;
    fVar6 = fVar10 * 1.0 - fVar5 * 0.0;
    fVar8 = fVar5 * 0.0 - fVar2 * 1.0;
    fVar3 = fVar3 + fVar3;
    fVar6 = fVar6 + fVar6;
    fVar8 = fVar8 + fVar8;
    fVar5 = (fVar8 * fVar2 - fVar6 * fVar10) + fVar1 * fVar3 + 1.0;
    fVar2 = (fVar3 * fVar10 - fVar8 * fVar5) + fVar1 * fVar6 + 0.0;
    local_20 = (fVar6 * fVar5 - fVar3 * fVar2) + fVar1 * fVar8 + 0.0;
    break;
  case 1:
    fVar5 = *param_2;
    fVar2 = param_2[1];
    fVar10 = param_2[2];
    fVar1 = param_2[3];
    fVar3 = fVar2 * 0.0 - fVar10 * 1.0;
    fVar6 = fVar10 * 0.0 - fVar5 * 0.0;
    fVar8 = fVar5 * 1.0 - fVar2 * 0.0;
    fVar3 = fVar3 + fVar3;
    fVar6 = fVar6 + fVar6;
    fVar8 = fVar8 + fVar8;
    fVar5 = (fVar8 * fVar2 - fVar6 * fVar10) + fVar1 * fVar3 + 0.0;
    fVar2 = (fVar3 * fVar10 - fVar8 * fVar5) + fVar1 * fVar6 + 1.0;
    local_20 = (fVar6 * fVar5 - fVar3 * fVar2) + fVar1 * fVar8 + 0.0;
    break;
  case 2:
    fVar5 = *param_2;
    fVar2 = param_2[1];
    fVar10 = param_2[2];
    fVar1 = param_2[3];
    fVar3 = fVar2 * 1.0 - fVar10 * 0.0;
    fVar6 = fVar10 * 0.0 - fVar5 * 1.0;
    fVar8 = fVar5 * 0.0 - fVar2 * 0.0;
    fVar3 = fVar3 + fVar3;
    fVar6 = fVar6 + fVar6;
    fVar8 = fVar8 + fVar8;
    fVar5 = (fVar8 * fVar2 - fVar6 * fVar10) + fVar1 * fVar3 + 0.0;
    fVar2 = (fVar3 * fVar10 - fVar8 * fVar5) + fVar1 * fVar6 + 0.0;
    local_20 = (fVar6 * fVar5 - fVar3 * fVar2) + fVar1 * fVar8 + 1.0;
    break;
  case 3:
    fVar5 = 1.0;
    fVar2 = 0.0;
    fVar10 = 0.0;
    goto LAB_142c56896;
  case 4:
    fVar5 = 0.0;
    fVar2 = 1.0;
    fVar10 = 0.0;
    goto LAB_142c56896;
  case 5:
    fVar5 = 0.0;
    fVar2 = 0.0;
    fVar10 = 1.0;
LAB_142c56896:
    fVar1 = *param_2;
    fVar3 = param_2[1];
    fVar6 = param_2[2];
    fVar8 = param_2[3];
    fVar4 = fVar10 * fVar3 - fVar2 * fVar6;
    fVar7 = fVar5 * fVar6 - fVar10 * fVar1;
    fVar9 = fVar2 * fVar1 - fVar5 * fVar3;
    fVar4 = fVar4 + fVar4;
    fVar7 = fVar7 + fVar7;
    fVar9 = fVar9 + fVar9;
    fVar5 = -((fVar9 * fVar3 - fVar7 * fVar6) + fVar8 * fVar4 + fVar5);
    fVar2 = -((fVar4 * fVar6 - fVar9 * fVar1) + fVar8 * fVar7 + fVar2);
    local_20 = -((fVar7 * fVar1 - fVar4 * fVar3) + fVar8 * fVar9 + fVar10);
    break;
  default:
    goto switchD_142c56724_default;
  }
  *param_1 = CONCAT44(fVar2,fVar5);
  *(float *)(param_1 + 1) = local_20;
switchD_142c56724_default:
  return param_1;
}



// FUNCTION 142c56940 GetCompactPoseIndex body=53 status=ok
// SIG undefined GetCompactPoseIndex(void)

undefined4 *
FBoneReference::GetCompactPoseIndex(longlong param_1,undefined4 *param_2,longlong param_3)

{
  if (*(char *)(param_1 + 0xc) == '\0') {
    *param_2 = *(undefined4 *)(param_1 + 0x10);
    return param_2;
  }
  if (*(int *)(param_1 + 8) != -1) {
    *param_2 = *(undefined4 *)(*(longlong *)(param_3 + 0x80) + (longlong)*(int *)(param_1 + 8) * 4);
    return param_2;
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 142c56980 FUN_142c56980 body=1068 status=ok
// SIG undefined FUN_142c56980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [12]
FUN_142c56980(undefined1 (*param_1) [12],undefined8 param_2,longlong param_3,float *param_4,
             longlong param_5,float param_6)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  undefined1 local_78 [16];
  float local_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  
  local_b8 = *param_4 - *(float *)(param_3 + 0x10);
  local_b4 = param_4[1] - *(float *)(param_3 + 0x14);
  local_b0 = param_4[2] - *(float *)(param_3 + 0x18);
  fVar6 = local_b4 * local_b4 + local_b8 * local_b8 + local_b0 * local_b0;
  if (fVar6 != 1.0) {
    if (1e-08 <= fVar6) {
      auVar2 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar5 = auVar2._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar6 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar6 * 0.5 * fVar5 * fVar5);
      local_b8 = fVar5 * local_b8;
      local_b0 = fVar5 * local_b0;
      local_b4 = fVar5 * local_b4;
    }
    else {
      local_b8 = DAT_1468b5d90;
      local_b0 = DAT_1468b5d98;
      local_b4 = DAT_1468b5d94;
    }
  }
  FVector::Rotation(&local_b8,&local_a8);
  if (*(char *)(param_5 + 0x40) != '\0') {
    local_a0 = local_a0 + *(float *)(param_5 + 0x3c);
    local_a4 = local_a4 + *(float *)(param_5 + 0x38);
    local_a8 = local_a8 + *(float *)(param_5 + 0x34);
    auVar2._4_4_ = local_a4;
    auVar2._0_4_ = local_a8;
    fVar6 = (float)DAT_146b2fa40;
    fVar5 = DAT_146b2fa40._4_4_;
    fVar7 = DAT_146b2fa40._8_4_;
    auVar2._8_4_ = local_a0;
    auVar2._12_4_ = 0;
    auVar2 = divps(auVar2,_DAT_146b2fa40);
    local_a8 = local_a8 - (float)(int)auVar2._0_4_ * fVar6;
    local_a4 = local_a4 - (float)(int)auVar2._4_4_ * fVar5;
    local_a0 = local_a0 - (float)(int)auVar2._8_4_ * fVar7;
    local_a8 = (float)(((uint)(local_a8 + fVar6) ^ (uint)local_a8) & -(uint)(0.0 <= local_a8) ^
                      (uint)(local_a8 + fVar6));
    local_a4 = (float)(((uint)(local_a4 + fVar5) ^ (uint)local_a4) & -(uint)(0.0 <= local_a4) ^
                      (uint)(local_a4 + fVar5));
    local_a0 = (float)(((uint)(local_a0 + fVar7) ^ (uint)local_a0) & -(uint)(0.0 <= local_a0) ^
                      (uint)(local_a0 + fVar7));
    local_a8 = (float)(((uint)(local_a8 - fVar6) ^ (uint)local_a8) &
                       -(uint)(_DAT_146b2fa30 < local_a8) ^ (uint)local_a8);
    local_a4 = (float)(((uint)(local_a4 - fVar5) ^ (uint)local_a4) &
                       -(uint)(fRam0000000146b2fa34 < local_a4) ^ (uint)local_a4);
    local_a0 = (float)(((uint)(local_a0 - fVar7) ^ (uint)local_a0) &
                       -(uint)(fRam0000000146b2fa38 < local_a0) ^ (uint)local_a0);
  }
  FVector::Rotation(param_2,&local_98);
  auVar3._4_4_ = local_a4 - local_94;
  auVar3._0_4_ = local_a8 - local_98;
  fVar6 = (float)DAT_146b2fa40;
  fVar5 = DAT_146b2fa40._4_4_;
  fVar7 = DAT_146b2fa40._8_4_;
  fVar8 = DAT_146b2fa40._12_4_;
  auVar3._8_4_ = local_a0 - local_90;
  auVar3._12_4_ = 0;
  auVar2 = divps(auVar3,_DAT_146b2fa40);
  fVar9 = (local_a8 - local_98) - (float)(int)auVar2._0_4_ * fVar6;
  fVar10 = (local_a4 - local_94) - (float)(int)auVar2._4_4_ * fVar5;
  fVar11 = (local_a0 - local_90) - (float)(int)auVar2._8_4_ * fVar7;
  fVar12 = 0.0 - (float)(int)auVar2._12_4_ * fVar8;
  local_68 = (float)(-(uint)(0.0 <= fVar9) & ((uint)(fVar9 + fVar6) ^ (uint)fVar9) ^
                    (uint)(fVar9 + fVar6));
  fStack_64 = (float)(-(uint)(0.0 <= fVar10) & ((uint)(fVar10 + fVar5) ^ (uint)fVar10) ^
                     (uint)(fVar10 + fVar5));
  fStack_60 = (float)(-(uint)(0.0 <= fVar11) & ((uint)(fVar11 + fVar7) ^ (uint)fVar11) ^
                     (uint)(fVar11 + fVar7));
  fVar9 = (float)(-(uint)(0.0 <= fVar12) & ((uint)(fVar12 + fVar8) ^ (uint)fVar12) ^
                 (uint)(fVar12 + fVar8));
  local_68 = (float)(((uint)(local_68 - fVar6) ^ (uint)local_68) &
                     -(uint)(_DAT_146b2fa30 < local_68) ^ (uint)local_68);
  fStack_64 = (float)(((uint)(fStack_64 - fVar5) ^ (uint)fStack_64) &
                      -(uint)(fRam0000000146b2fa34 < fStack_64) ^ (uint)fStack_64);
  fStack_60 = (float)(((uint)(fStack_60 - fVar7) ^ (uint)fStack_60) &
                      -(uint)(fRam0000000146b2fa38 < fStack_60) ^ (uint)fStack_60);
  uStack_5c = ((uint)(fVar9 - fVar8) ^ (uint)fVar9) & -(uint)(fRam0000000146b2fa3c < fVar9) ^
              (uint)fVar9;
  fVar6 = *(float *)(param_5 + 0x24) - *(float *)(param_5 + 0x28);
  fVar5 = *(float *)(param_5 + 0x24) + *(float *)(param_5 + 0x28);
  if ((fVar6 <= fStack_64) && (fVar6 = fStack_64, fVar5 <= fStack_64)) {
    fVar6 = fVar5;
  }
  fVar5 = *(float *)(param_5 + 0x2c) - *(float *)(param_5 + 0x30);
  fVar7 = *(float *)(param_5 + 0x2c) + *(float *)(param_5 + 0x30);
  if ((fVar5 <= local_68) && (fVar5 = local_68, fVar7 <= local_68)) {
    fVar5 = fVar7;
  }
  FUN_142c566f0(local_78,param_3,*(undefined1 *)(param_5 + 0x48));
  FVector::Rotation(local_78,&local_88);
  *(ulonglong *)*param_1 = CONCAT44((local_94 + fVar6) - local_84,(local_98 + fVar5) - local_88);
  *(float *)(*param_1 + 8) = (fStack_60 + local_90) - local_80;
  fVar6 = (float)DAT_146b2fa40;
  fVar5 = DAT_146b2fa40._4_4_;
  fVar7 = DAT_146b2fa40._8_4_;
  auVar4._12_4_ = 0;
  auVar4._0_12_ = *param_1;
  auVar2 = divps(auVar4,_DAT_146b2fa40);
  fVar8 = *(float *)*param_1 - (float)(int)auVar2._0_4_ * fVar6;
  fVar10 = *(float *)(*param_1 + 4) - (float)(int)auVar2._4_4_ * fVar5;
  fVar11 = *(float *)(*param_1 + 8) - (float)(int)auVar2._8_4_ * fVar7;
  fVar9 = (float)(-(uint)(0.0 <= fVar8) & ((uint)(fVar8 + fVar6) ^ (uint)fVar8) ^
                 (uint)(fVar8 + fVar6));
  fVar8 = (float)(-(uint)(0.0 <= fVar10) & ((uint)(fVar10 + fVar5) ^ (uint)fVar10) ^
                 (uint)(fVar10 + fVar5));
  fVar10 = (float)(-(uint)(0.0 <= fVar11) & ((uint)(fVar11 + fVar7) ^ (uint)fVar11) ^
                  (uint)(fVar11 + fVar7));
  bVar1 = fRam0000000146b2fa38 < fVar10;
  fVar9 = (float)(((uint)(fVar9 - fVar6) ^ (uint)fVar9) & -(uint)(_DAT_146b2fa30 < fVar9) ^
                 (uint)fVar9);
  fVar8 = (float)(((uint)(fVar8 - fVar5) ^ (uint)fVar8) & -(uint)(fRam0000000146b2fa34 < fVar8) ^
                 (uint)fVar8);
  *(float *)*param_1 = fVar9;
  *(uint *)(*param_1 + 8) = ((uint)(fVar10 - fVar7) ^ (uint)fVar10) & -(uint)bVar1 ^ (uint)fVar10;
  *(float *)(*param_1 + 4) = fVar8;
  param_6 = param_6 * *(float *)(param_5 + 0x18);
  fVar6 = param_6 * *(float *)(param_5 + 0x20);
  param_6 = param_6 * *(float *)(param_5 + 0x1c);
  if (1e-05 < param_6) {
    fVar8 = fVar8 * param_6;
  }
  else {
    fVar8 = 0.0;
  }
  *(float *)(*param_1 + 4) = fVar8;
  if (1e-05 < fVar6) {
    *(float *)*param_1 = fVar9 * fVar6;
  }
  else {
    *(undefined4 *)*param_1 = 0;
  }
  return param_1;
}



// FUNCTION 142c56db0 FUN_142c56db0 body=311 status=ok
// SIG undefined FUN_142c56db0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c56db0(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined4 in_EAX;
  int iVar2;
  float fVar3;
  float fVar5;
  float fVar6;
  undefined1 in_XMM1 [16];
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
  
  fVar15 = fRam0000000146b2ec4c;
  fVar14 = fRam0000000146b2ec48;
  fVar13 = fRam0000000146b2ec44;
  fVar12 = _DAT_146b2ec40;
  fVar3 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  fVar8 = (float)(_DAT_146b2ebd0 & _DAT_146b2ebe0);
  fVar9 = (float)(uRam0000000146b2ebd4 & uRam0000000146b2ebe4);
  fVar10 = (float)(uRam0000000146b2ebd8 & uRam0000000146b2ebe8);
  fVar11 = (float)(uRam0000000146b2ebdc & uRam0000000146b2ebec);
  fVar16 = (float)((uint)fVar8 & _DAT_146b2ec50);
  fVar18 = (float)((uint)fVar9 & uRam0000000146b2ec54);
  fVar20 = (float)((uint)fVar10 & uRam0000000146b2ec58);
  fVar22 = (float)((uint)fVar11 & uRam0000000146b2ec5c);
  auVar4._4_4_ = -(uint)(fRam0000000146b2ec44 < fVar18);
  auVar4._0_4_ = -(uint)(_DAT_146b2ec40 < fVar16);
  auVar4._8_4_ = -(uint)(fRam0000000146b2ec48 < fVar20);
  auVar4._12_4_ = -(uint)(fRam0000000146b2ec4c < fVar22);
  iVar2 = movmskps(in_EAX,auVar4);
  *param_1 = fVar3;
  param_1[1] = fVar5;
  param_1[2] = fVar6;
  param_1[3] = fVar7;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = fVar8;
  param_1[9] = fVar9;
  param_1[10] = fVar10;
  param_1[0xb] = fVar11;
  fVar17 = _DAT_1468b5b90;
  fVar19 = fRam00000001468b5b94;
  fVar21 = fRam00000001468b5b98;
  fVar23 = fRam00000001468b5b9c;
  fVar24 = _DAT_1468b5b80;
  fVar25 = fRam00000001468b5b84;
  fVar26 = fRam00000001468b5b88;
  fVar27 = fRam00000001468b5b8c;
  fVar28 = _DAT_1468b5b70;
  fVar29 = fRam00000001468b5b74;
  fVar30 = fRam00000001468b5b78;
  fVar31 = fRam00000001468b5b7c;
  if (iVar2 != 0) {
    auVar1._4_4_ = fVar9;
    auVar1._0_4_ = fVar8;
    auVar1._8_4_ = fVar10;
    auVar1._12_4_ = fVar11;
    auVar4 = rcpps(in_XMM1,auVar1);
    fVar17 = auVar4._0_4_;
    fVar19 = auVar4._4_4_;
    fVar21 = auVar4._8_4_;
    fVar23 = auVar4._12_4_;
    fVar28 = _DAT_146b2ec30 * fVar3;
    fVar29 = fRam0000000146b2ec34 * fVar5;
    fVar30 = fRam0000000146b2ec38 * fVar6;
    fVar31 = fRam0000000146b2ec3c * fVar7;
    fVar3 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar8;
    fVar5 = (fVar19 + fVar19) - fVar19 * fVar19 * fVar9;
    fVar6 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar10;
    fVar7 = (fVar23 + fVar23) - fVar23 * fVar23 * fVar11;
    fVar3 = (fVar3 + fVar3) - fVar3 * fVar3 * fVar8;
    fVar5 = (fVar5 + fVar5) - fVar5 * fVar5 * fVar9;
    fVar6 = (fVar6 + fVar6) - fVar6 * fVar6 * fVar10;
    fVar7 = (fVar7 + fVar7) - fVar7 * fVar7 * fVar11;
    fVar17 = (float)((-(uint)(fVar16 <= fVar12) & (uint)fVar3 ^ (uint)fVar3) & _DAT_146b2ebe0);
    fVar19 = (float)((-(uint)(fVar18 <= fVar13) & (uint)fVar5 ^ (uint)fVar5) & uRam0000000146b2ebe4)
    ;
    fVar21 = (float)((-(uint)(fVar20 <= fVar14) & (uint)fVar6 ^ (uint)fVar6) & uRam0000000146b2ebe8)
    ;
    fVar23 = (float)((-(uint)(fVar22 <= fVar15) & (uint)fVar7 ^ (uint)fVar7) & uRam0000000146b2ebec)
    ;
    fVar12 = fVar17 * 0.0;
    fVar13 = fVar19 * 0.0;
    fVar14 = fVar21 * 0.0;
    fVar15 = fVar23 * 0.0;
    fVar3 = fVar14 * fVar29 - fVar13 * fVar30;
    fVar5 = fVar12 * fVar30 - fVar14 * fVar28;
    fVar6 = fVar13 * fVar28 - fVar12 * fVar29;
    fVar7 = fVar15 * fVar31 - fVar15 * fVar31;
    fVar3 = fVar3 + fVar3;
    fVar5 = fVar5 + fVar5;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    fVar24 = (float)((uint)(0.0 - ((fVar6 * fVar29 - fVar5 * fVar30) + fVar31 * fVar3 + fVar12)) &
                    _DAT_146b2ebe0);
    fVar25 = (float)((uint)(0.0 - ((fVar3 * fVar30 - fVar6 * fVar28) + fVar31 * fVar5 + fVar13)) &
                    uRam0000000146b2ebe4);
    fVar26 = (float)((uint)(0.0 - ((fVar5 * fVar28 - fVar3 * fVar29) + fVar31 * fVar6 + fVar14)) &
                    uRam0000000146b2ebe8);
    fVar27 = (float)((uint)(0.0 - ((fVar7 * fVar31 - fVar7 * fVar31) + fVar31 * fVar7 + fVar15)) &
                    uRam0000000146b2ebec);
  }
  param_1[0xc] = fVar28;
  param_1[0xd] = fVar29;
  param_1[0xe] = fVar30;
  param_1[0xf] = fVar31;
  param_1[0x10] = fVar24;
  param_1[0x11] = fVar25;
  param_1[0x12] = fVar26;
  param_1[0x13] = fVar27;
  param_1[0x14] = fVar17;
  param_1[0x15] = fVar19;
  param_1[0x16] = fVar21;
  param_1[0x17] = fVar23;
  return;
}



// FUNCTION 142c56ef0 FUN_142c56ef0 body=2814 status=ok
// SIG undefined FUN_142c56ef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c56ef0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
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
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  uVar4 = uRam0000000146b2ebec;
  uVar3 = uRam0000000146b2ebe8;
  uVar2 = uRam0000000146b2ebe4;
  uVar1 = _DAT_146b2ebe0;
  if (DAT_146b2ec29 == '\0') {
    _DAT_146b2ecd0 = _DAT_146b2ebd0 & _DAT_146b2ebe0;
    uRam0000000146b2ecd4 = uRam0000000146b2ebd4 & uRam0000000146b2ebe4;
    uRam0000000146b2ecd8 = uRam0000000146b2ebd8 & uRam0000000146b2ebe8;
    uRam0000000146b2ecdc = uRam0000000146b2ebdc & uRam0000000146b2ebec;
    DAT_146b2ec29 = '\x01';
    local_68 = -0.70710677;
    fStack_64 = 0.0;
    fStack_60 = 0.0;
    fStack_5c = 0.70710677;
    _DAT_146b2ecb0 = 0;
    uRam0000000146b2ecb4 = 0;
    uRam0000000146b2ecb8 = 0;
    uRam0000000146b2ecbc = uRam0000000146b2ebdc;
    _DAT_146b2ecc0 = 0;
    uRam0000000146b2ecc8 = 0;
    _DAT_146b2ece0 = 0;
    uRam0000000146b2ece4 = 0;
    uRam0000000146b2ece8 = 0;
    uRam0000000146b2ecec = uRam0000000146b2ebdc;
    _DAT_146b2ecf0 = 0;
    uRam0000000146b2ecf8 = 0;
    _DAT_146b2ed00 = _DAT_146b2ecd0;
    uRam0000000146b2ed04 = uRam0000000146b2ecd4;
    uRam0000000146b2ed08 = uRam0000000146b2ecd8;
    uRam0000000146b2ed0c = uRam0000000146b2ecdc;
    FUN_142c56db0(&DAT_146b2ed10,&local_68);
    _DAT_146b2ed80 = 0;
    uRam0000000146b2ed88 = 0;
    _DAT_146b2ed90 = _DAT_146b2ebd0 & uVar1;
    uRam0000000146b2ed94 = uRam0000000146b2ebd4 & uVar2;
    uRam0000000146b2ed98 = uRam0000000146b2ebd8 & uVar3;
    uRam0000000146b2ed9c = uRam0000000146b2ebdc & uVar4;
    local_68 = 0.70710677;
    fStack_64 = 0.0;
    fStack_60 = 0.0;
    fStack_5c = 0.70710677;
    _DAT_146b2ed70 = 0;
    uRam0000000146b2ed74 = 0;
    uRam0000000146b2ed78 = 0;
    uRam0000000146b2ed7c = uRam0000000146b2ebdc;
    _DAT_146b2eda0 = 0;
    uRam0000000146b2eda4 = 0;
    uRam0000000146b2eda8 = 0;
    uRam0000000146b2edac = uRam0000000146b2ebdc;
    _DAT_146b2edb0 = 0;
    uRam0000000146b2edb8 = 0;
    _DAT_146b2edd0 = 0;
    uRam0000000146b2edd4 = 0;
    uRam0000000146b2edd8 = 0;
    uRam0000000146b2eddc = uRam0000000146b2ebdc;
    _DAT_146b2ede0 = 0;
    uRam0000000146b2ede8 = 0;
    _DAT_146b2ee00 = 0;
    uRam0000000146b2ee04 = 0;
    uRam0000000146b2ee08 = 0;
    uRam0000000146b2ee0c = uRam0000000146b2ebdc;
    _DAT_146b2ee10 = 0;
    uRam0000000146b2ee18 = 0;
    _DAT_146b2edc0 = _DAT_146b2ed90;
    uRam0000000146b2edc4 = uRam0000000146b2ed94;
    uRam0000000146b2edc8 = uRam0000000146b2ed98;
    uRam0000000146b2edcc = uRam0000000146b2ed9c;
    _DAT_146b2edf0 = _DAT_146b2ed90;
    uRam0000000146b2edf4 = uRam0000000146b2ed94;
    uRam0000000146b2edf8 = uRam0000000146b2ed98;
    uRam0000000146b2edfc = uRam0000000146b2ed9c;
    _DAT_146b2ee20 = _DAT_146b2ed90;
    uRam0000000146b2ee24 = uRam0000000146b2ed94;
    uRam0000000146b2ee28 = uRam0000000146b2ed98;
    uRam0000000146b2ee2c = uRam0000000146b2ed9c;
    FUN_142c56db0(&DAT_146b2ee30,&local_68);
    local_68 = 1.0;
    fStack_64 = 0.0;
    fStack_60 = 0.0;
    fStack_5c = -6.121647e-08;
    FUN_142c56db0(&DAT_146b2ee90,&local_68);
    fVar16 = fRam0000000146b2ecac;
    fVar15 = fRam0000000146b2eca8;
    fVar14 = fRam0000000146b2eca4;
    fVar13 = _DAT_146b2eca0;
    fVar12 = fRam0000000146b2ec9c;
    fVar11 = fRam0000000146b2ec98;
    fVar10 = fRam0000000146b2ec94;
    fVar9 = _DAT_146b2ec90;
    fVar8 = fRam0000000146b2ec8c;
    fVar7 = fRam0000000146b2ec88;
    fVar6 = fRam0000000146b2ec84;
    fVar5 = _DAT_146b2ec80;
    local_68 = _DAT_146b2eca0 * 0.0 + 0.0 + _DAT_146b2ec90 * 0.49999997 + _DAT_146b2ec80 * 0.0;
    fStack_64 = fRam0000000146b2eca4 * 0.0 + 0.0 + fRam0000000146b2ec94 * 0.49999997 +
                fRam0000000146b2ec84 * 0.0;
    fStack_60 = fRam0000000146b2eca8 * 0.0 + 0.49999997 + fRam0000000146b2ec98 * 0.0 +
                fRam0000000146b2ec88 * 0.0;
    fStack_5c = fRam0000000146b2ecac * 0.0 + 0.49999997 + fRam0000000146b2ec9c * 0.0 +
                fRam0000000146b2ec8c * 0.0;
    FUN_142c56db0(&DAT_146b2eef0,&local_68);
    _DAT_146b2ef60 = 0;
    uRam0000000146b2ef68 = 0;
    _DAT_146b2ef70 = _DAT_146b2ebd0 & uVar1;
    uRam0000000146b2ef74 = uRam0000000146b2ebd4 & uVar2;
    uRam0000000146b2ef78 = uRam0000000146b2ebd8 & uVar3;
    uRam0000000146b2ef7c = uRam0000000146b2ebdc & uVar4;
    _DAT_146b2ef90 = 0;
    uRam0000000146b2ef98 = 0;
    local_68 = 0.0;
    fStack_64 = 0.0;
    fStack_60 = 0.70710677;
    fStack_5c = 0.70710677;
    _DAT_146b2ef50 = 0;
    uRam0000000146b2ef54 = 0;
    uRam0000000146b2ef58 = 0;
    uRam0000000146b2ef5c = uRam0000000146b2ebdc;
    _DAT_146b2ef80 = 0;
    uRam0000000146b2ef84 = 0;
    uRam0000000146b2ef88 = 0;
    uRam0000000146b2ef8c = uRam0000000146b2ebdc;
    _DAT_146b2efa0 = _DAT_146b2ef70;
    uRam0000000146b2efa4 = uRam0000000146b2ef74;
    uRam0000000146b2efa8 = uRam0000000146b2ef78;
    uRam0000000146b2efac = uRam0000000146b2ef7c;
    FUN_142c56db0(&DAT_146b2efb0,&local_68);
    local_68 = fVar13 * -0.0 + 0.0 + fVar9 * -0.49999997 + fVar5 * -0.0;
    fStack_64 = fVar14 * -0.0 + 0.0 + fVar10 * -0.49999997 + fVar6 * -0.0;
    fStack_60 = fVar15 * -0.0 + 0.49999997 + fVar11 * -0.0 + fVar7 * -0.0;
    fStack_5c = fVar16 * -0.0 + 0.49999997 + fVar12 * -0.0 + fVar8 * -0.0;
    FUN_142c56db0(&DAT_146b2f010,&local_68);
    _DAT_146b2f090 = _DAT_146b2ebd0 & uVar1;
    uRam0000000146b2f094 = uRam0000000146b2ebd4 & uVar2;
    uRam0000000146b2f098 = uRam0000000146b2ebd8 & uVar3;
    uRam0000000146b2f09c = uRam0000000146b2ebdc & uVar4;
    _DAT_146b2f070 = 0;
    uRam0000000146b2f074 = 0;
    uRam0000000146b2f078 = 0;
    uRam0000000146b2f07c = uRam0000000146b2ebdc;
    _DAT_146b2f0a0 = 0;
    uRam0000000146b2f0a4 = 0;
    uRam0000000146b2f0a8 = 0;
    uRam0000000146b2f0ac = uRam0000000146b2ebdc;
    _DAT_146b2f080 = 0;
    uRam0000000146b2f088 = 0;
    _DAT_146b2f0b0 = 0;
    uRam0000000146b2f0b8 = 0;
    local_68 = fVar13 * 0.0 + -0.0 + fVar9 * 0.70710677 + fVar5 * 0.0;
    fStack_64 = fVar14 * 0.0 + -0.0 + fVar10 * 0.70710677 + fVar6 * 0.0;
    fStack_60 = fVar15 * 0.0 + -4.328658e-08 + fVar11 * 0.0 + fVar7 * 0.0;
    fStack_5c = fVar16 * 0.0 + -4.328658e-08 + fVar12 * 0.0 + fVar8 * 0.0;
    _DAT_146b2f0c0 = _DAT_146b2f090;
    uRam0000000146b2f0c4 = uRam0000000146b2f094;
    uRam0000000146b2f0c8 = uRam0000000146b2f098;
    uRam0000000146b2f0cc = uRam0000000146b2f09c;
    FUN_142c56db0(&DAT_146b2f0d0,&local_68);
    local_68 = fVar13 * 0.0 + 0.0 + fVar9 * -0.0 + fVar5 * -0.70710677;
    fStack_64 = fVar14 * -0.0 + 4.328658e-08 + fVar10 * 0.0 + fVar6 * -0.0;
    fStack_60 = fVar15 * -0.0 + 0.0 + fVar11 * -0.0 + fVar7 * 0.70710677;
    fStack_5c = fVar16 * -0.0 + -4.328658e-08 + fVar12 * -0.0 + fVar8 * -0.0;
    FUN_142c56db0(&DAT_146b2f130,&local_68);
    local_68 = fVar13 * -0.0 + -0.0 + fVar9 * 0.0 + fVar5 * 0.49999997;
    fStack_64 = fVar14 * 0.0 + -0.49999997 + fVar10 * -0.0 + fVar6 * 0.0;
    fStack_60 = fVar15 * 0.0 + -0.0 + fVar11 * 0.0 + fVar7 * -0.49999997;
    fStack_5c = fVar16 * 0.0 + 0.49999997 + fVar12 * 0.0 + fVar8 * 0.0;
    FUN_142c56db0(&DAT_146b2f190,&local_68);
    _DAT_146b2f200 = 0;
    uRam0000000146b2f208 = 0;
    _DAT_146b2f210 = _DAT_146b2ebd0 & uVar1;
    uRam0000000146b2f214 = uRam0000000146b2ebd4 & uVar2;
    uRam0000000146b2f218 = uRam0000000146b2ebd8 & uVar3;
    uRam0000000146b2f21c = uRam0000000146b2ebdc & uVar4;
    _DAT_146b2f230 = 0;
    uRam0000000146b2f238 = 0;
    local_68 = -0.0;
    fStack_64 = -0.70710677;
    fStack_60 = -0.0;
    fStack_5c = 0.70710677;
    _DAT_146b2f1f0 = 0;
    uRam0000000146b2f1f4 = 0;
    uRam0000000146b2f1f8 = 0;
    uRam0000000146b2f1fc = uRam0000000146b2ebdc;
    _DAT_146b2f220 = 0;
    uRam0000000146b2f224 = 0;
    uRam0000000146b2f228 = 0;
    uRam0000000146b2f22c = uRam0000000146b2ebdc;
    _DAT_146b2f240 = _DAT_146b2f210;
    uRam0000000146b2f244 = uRam0000000146b2f214;
    uRam0000000146b2f248 = uRam0000000146b2f218;
    uRam0000000146b2f24c = uRam0000000146b2f21c;
    FUN_142c56db0(&DAT_146b2f250,&local_68);
    local_68 = fVar13 * 0.0 + -0.0 + fVar9 * -0.0 + fVar5 * -0.49999997;
    fStack_64 = fVar14 * -0.0 + -0.49999997 + fVar10 * 0.0 + fVar6 * -0.0;
    fStack_60 = fVar15 * -0.0 + -0.0 + fVar11 * -0.0 + fVar7 * 0.49999997;
    fStack_5c = fVar16 * -0.0 + 0.49999997 + fVar12 * -0.0 + fVar8 * -0.0;
    FUN_142c56db0(&DAT_146b2f2b0,&local_68);
    _DAT_146b2f320 = 0;
    uRam0000000146b2f328 = 0;
    _DAT_146b2f330 = _DAT_146b2ebd0 & uVar1;
    uRam0000000146b2f334 = uRam0000000146b2ebd4 & uVar2;
    uRam0000000146b2f338 = uRam0000000146b2ebd8 & uVar3;
    uRam0000000146b2f33c = uRam0000000146b2ebdc & uVar4;
    _DAT_146b2f310 = 0;
    uRam0000000146b2f314 = 0;
    uRam0000000146b2f318 = 0;
    uRam0000000146b2f31c = uRam0000000146b2ebdc;
    _DAT_146b2f340 = 0;
    uRam0000000146b2f344 = 0;
    uRam0000000146b2f348 = 0;
    uRam0000000146b2f34c = uRam0000000146b2ebdc;
    _DAT_146b2f370 = 0;
    uRam0000000146b2f374 = 0;
    uRam0000000146b2f378 = 0;
    uRam0000000146b2f37c = uRam0000000146b2ebdc;
    _DAT_146b2f3a0 = 0;
    uRam0000000146b2f3a4 = 0;
    uRam0000000146b2f3a8 = 0;
    uRam0000000146b2f3ac = uRam0000000146b2ebdc;
    _DAT_146b2f350 = 0;
    uRam0000000146b2f358 = 0;
    _DAT_146b2f380 = 0;
    uRam0000000146b2f388 = 0;
    _DAT_146b2f3b0 = 0;
    uRam0000000146b2f3b8 = 0;
    local_68 = fVar13 * 4.328658e-08 + 0.0 + fVar9 * -0.0 + fVar5 * -0.0;
    fStack_64 = fVar14 * -0.70710677 + 0.0 + fVar10 * 0.0 + fVar6 * -0.0;
    fStack_60 = fVar15 * -0.0 + 0.70710677 + fVar11 * -0.0 + fVar7 * 0.0;
    fStack_5c = fVar16 * -0.0 + -4.328658e-08 + fVar12 * -0.0 + fVar8 * -0.0;
    _DAT_146b2f360 = _DAT_146b2f330;
    uRam0000000146b2f364 = uRam0000000146b2f334;
    uRam0000000146b2f368 = uRam0000000146b2f338;
    uRam0000000146b2f36c = uRam0000000146b2f33c;
    _DAT_146b2f390 = _DAT_146b2f330;
    uRam0000000146b2f394 = uRam0000000146b2f334;
    uRam0000000146b2f398 = uRam0000000146b2f338;
    uRam0000000146b2f39c = uRam0000000146b2f33c;
    _DAT_146b2f3c0 = _DAT_146b2f330;
    uRam0000000146b2f3c4 = uRam0000000146b2f334;
    uRam0000000146b2f3c8 = uRam0000000146b2f338;
    uRam0000000146b2f3cc = uRam0000000146b2f33c;
    FUN_142c56db0(&DAT_146b2f3d0,&local_68);
    local_68 = 0.0;
    fStack_64 = 0.0;
    fStack_60 = 1.0;
    fStack_5c = -6.121647e-08;
    FUN_142c56db0(&DAT_146b2f430,&local_68);
    _DAT_146b2f4a0 = 0;
    uRam0000000146b2f4a8 = 0;
    _DAT_146b2f4b0 = _DAT_146b2ebd0 & uVar1;
    uRam0000000146b2f4b4 = uRam0000000146b2ebd4 & uVar2;
    uRam0000000146b2f4b8 = uRam0000000146b2ebd8 & uVar3;
    uRam0000000146b2f4bc = uRam0000000146b2ebdc & uVar4;
    _DAT_146b2f490 = 0;
    uRam0000000146b2f494 = 0;
    uRam0000000146b2f498 = 0;
    uRam0000000146b2f49c = uRam0000000146b2ebdc;
    _DAT_146b2f4c0 = 0;
    uRam0000000146b2f4c4 = 0;
    uRam0000000146b2f4c8 = 0;
    uRam0000000146b2f4cc = uRam0000000146b2ebdc;
    _DAT_146b2f4d0 = 0;
    uRam0000000146b2f4d8 = 0;
    local_68 = fVar13 * -4.328658e-08 + 0.0 + fVar9 * 0.0 + fVar5 * 0.0;
    fStack_64 = fVar14 * 0.70710677 + 0.0 + fVar10 * -0.0 + fVar6 * 0.0;
    fStack_60 = fVar15 * 0.0 + 0.70710677 + fVar11 * 0.0 + fVar7 * -0.0;
    fStack_5c = fVar16 * 0.0 + -4.328658e-08 + fVar12 * 0.0 + fVar8 * 0.0;
    _DAT_146b2f4e0 = _DAT_146b2f4b0;
    uRam0000000146b2f4e4 = uRam0000000146b2f4b4;
    uRam0000000146b2f4e8 = uRam0000000146b2f4b8;
    uRam0000000146b2f4ec = uRam0000000146b2f4bc;
    FUN_142c56db0(&DAT_146b2f4f0,&local_68);
    local_68 = fVar13 * -6.121647e-08 + -0.0 + fVar9 * 0.0 + fVar5 * 0.0;
    fStack_64 = fVar14 * 1.0 + -0.0 + fVar10 * -0.0 + fVar6 * 0.0;
    fStack_60 = fVar15 * 0.0 + -6.121647e-08 + fVar11 * 0.0 + fVar7 * -0.0;
    fStack_5c = fVar16 * 0.0 + 3.747456e-15 + fVar12 * 0.0 + fVar8 * 0.0;
    FUN_142c56db0(&DAT_146b2f550,&local_68);
    local_68 = fVar13 * 0.0 + -0.0 + fVar9 * -0.49999997 + fVar5 * -0.0;
    fStack_64 = fVar14 * -0.0 + -0.0 + fVar10 * 0.49999997 + fVar6 * -0.0;
    fStack_60 = fVar15 * -0.0 + -0.49999997 + fVar11 * -0.0 + fVar7 * 0.0;
    fStack_5c = fVar16 * -0.0 + 0.49999997 + fVar12 * -0.0 + fVar8 * -0.0;
    FUN_142c56db0(&DAT_146b2f5b0,&local_68);
    _DAT_146b2f620 = 0;
    uRam0000000146b2f628 = 0;
    _DAT_146b2f630 = _DAT_146b2ebd0 & uVar1;
    uRam0000000146b2f634 = uRam0000000146b2ebd4 & uVar2;
    uRam0000000146b2f638 = uRam0000000146b2ebd8 & uVar3;
    uRam0000000146b2f63c = uRam0000000146b2ebdc & uVar4;
    _DAT_146b2f650 = 0;
    uRam0000000146b2f658 = 0;
    local_68 = -0.0;
    fStack_64 = -0.0;
    fStack_60 = -0.70710677;
    fStack_5c = 0.70710677;
    _DAT_146b2f610 = 0;
    uRam0000000146b2f614 = 0;
    uRam0000000146b2f618 = 0;
    uRam0000000146b2f61c = uRam0000000146b2ebdc;
    _DAT_146b2f640 = 0;
    uRam0000000146b2f644 = 0;
    uRam0000000146b2f648 = 0;
    uRam0000000146b2f64c = uRam0000000146b2ebdc;
    _DAT_146b2f660 = _DAT_146b2f630;
    uRam0000000146b2f664 = uRam0000000146b2f634;
    uRam0000000146b2f668 = uRam0000000146b2f638;
    uRam0000000146b2f66c = uRam0000000146b2f63c;
    FUN_142c56db0(&DAT_146b2f670,&local_68);
    local_68 = fVar13 * -0.0 + -0.0 + fVar9 * 0.49999997 + fVar5 * 0.0;
    fStack_64 = fVar14 * 0.0 + -0.0 + fVar10 * -0.49999997 + fVar6 * 0.0;
    fStack_60 = fVar15 * 0.0 + -0.49999997 + fVar11 * 0.0 + fVar7 * -0.0;
    fStack_5c = fVar16 * 0.0 + 0.49999997 + fVar12 * 0.0 + fVar8 * 0.0;
    FUN_142c56db0(&DAT_146b2f6d0,&local_68);
    _DAT_146b2f750 = _DAT_146b2ebd0 & uVar1;
    uRam0000000146b2f754 = uRam0000000146b2ebd4 & uVar2;
    uRam0000000146b2f758 = uRam0000000146b2ebd8 & uVar3;
    uRam0000000146b2f75c = uRam0000000146b2ebdc & uVar4;
    _DAT_146b2f730 = 0;
    uRam0000000146b2f734 = 0;
    uRam0000000146b2f738 = 0;
    uRam0000000146b2f73c = uRam0000000146b2ebdc;
    _DAT_146b2f740 = 0;
    uRam0000000146b2f748 = 0;
    _DAT_146b2f760 = 0;
    uRam0000000146b2f764 = 0;
    uRam0000000146b2f768 = 0;
    uRam0000000146b2f76c = uRam0000000146b2ebdc;
    _DAT_146b2f770 = 0;
    uRam0000000146b2f778 = 0;
    local_68 = fVar13 * 0.0 + 0.0 + fVar9 * -0.70710677 + fVar5 * -0.0;
    fStack_64 = fVar14 * -0.0 + 0.0 + fVar10 * 0.70710677 + fVar6 * -0.0;
    fStack_60 = fVar15 * -0.0 + 4.328658e-08 + fVar11 * -0.0 + fVar7 * 0.0;
    fStack_5c = fVar16 * -0.0 + -4.328658e-08 + fVar12 * -0.0 + fVar8 * -0.0;
    _DAT_146b2f780 = _DAT_146b2f750;
    uRam0000000146b2f784 = uRam0000000146b2f754;
    uRam0000000146b2f788 = uRam0000000146b2f758;
    uRam0000000146b2f78c = uRam0000000146b2f75c;
    FUN_142c56db0(&DAT_146b2f790,&local_68);
    local_68 = 0.0;
    fStack_64 = 0.70710677;
    fStack_60 = 0.0;
    fStack_5c = 0.70710677;
    FUN_142c56db0(&DAT_146b2f7f0,&local_68);
    local_68 = fVar13 * 0.0 + 0.0 + fVar9 * 0.0 + fVar5 * 0.49999997;
    fStack_64 = fVar14 * 0.0 + 0.49999997 + fVar10 * 0.0 + fVar6 * 0.0;
    fStack_60 = fVar15 * 0.0 + 0.0 + fVar11 * 0.0 + fVar7 * 0.49999997;
    fStack_5c = fVar16 * 0.0 + 0.49999997 + fVar12 * 0.0 + fVar8 * 0.0;
    FUN_142c56db0(&DAT_146b2f850,&local_68);
    _DAT_146b2f8d0 = _DAT_146b2ebd0 & uVar1;
    uRam0000000146b2f8d4 = uRam0000000146b2ebd4 & uVar2;
    uRam0000000146b2f8d8 = uRam0000000146b2ebd8 & uVar3;
    uRam0000000146b2f8dc = uRam0000000146b2ebdc & uVar4;
    _DAT_146b2f8b0 = 0;
    uRam0000000146b2f8b4 = 0;
    uRam0000000146b2f8b8 = 0;
    uRam0000000146b2f8bc = uRam0000000146b2ebdc;
    _DAT_146b2f8e0 = 0;
    uRam0000000146b2f8e4 = 0;
    uRam0000000146b2f8e8 = 0;
    uRam0000000146b2f8ec = uRam0000000146b2ebdc;
    _DAT_146b2f8c0 = 0;
    uRam0000000146b2f8c8 = 0;
    _DAT_146b2f8f0 = 0;
    uRam0000000146b2f8f8 = 0;
    local_68 = fVar13 * 0.0 + -0.0 + fVar9 * 0.0 + fVar5 * 0.70710677;
    fStack_64 = fVar14 * 0.0 + -4.328658e-08 + fVar10 * 0.0 + fVar6 * 0.0;
    fStack_60 = fVar15 * 0.0 + -0.0 + fVar11 * 0.0 + fVar7 * 0.70710677;
    fStack_5c = fVar16 * 0.0 + -4.328658e-08 + fVar12 * 0.0 + fVar8 * 0.0;
    _DAT_146b2f900 = _DAT_146b2f8d0;
    uRam0000000146b2f904 = uRam0000000146b2f8d4;
    uRam0000000146b2f908 = uRam0000000146b2f8d8;
    uRam0000000146b2f90c = uRam0000000146b2f8dc;
    FUN_142c56db0(&DAT_146b2f910,&local_68);
    local_68 = fVar13 * -0.0 + 0.0 + fVar9 * -0.0 + fVar5 * -0.49999997;
    fStack_64 = fVar14 * -0.0 + 0.49999997 + fVar10 * -0.0 + fVar6 * -0.0;
    fStack_60 = fVar15 * -0.0 + 0.0 + fVar11 * -0.0 + fVar7 * -0.49999997;
    fStack_5c = fVar16 * -0.0 + 0.49999997 + fVar12 * -0.0 + fVar8 * -0.0;
    FUN_142c56db0(&DAT_146b2f970,&local_68);
    _DAT_146b2f9f0 = _DAT_146b2ebd0 & uVar1;
    uRam0000000146b2f9f4 = uRam0000000146b2ebd4 & uVar2;
    uRam0000000146b2f9f8 = uRam0000000146b2ebd8 & uVar3;
    uRam0000000146b2f9fc = uRam0000000146b2ebdc & uVar4;
    _DAT_146b2f9e0 = 0;
    uRam0000000146b2f9e8 = 0;
    _DAT_146b2fa10 = 0;
    uRam0000000146b2fa18 = 0;
    _DAT_146b2f9d0 = 0;
    uRam0000000146b2f9d4 = 0;
    uRam0000000146b2f9d8 = 0;
    uRam0000000146b2f9dc = uRam0000000146b2ebdc;
    _DAT_146b2fa00 = 0;
    uRam0000000146b2fa04 = 0;
    uRam0000000146b2fa08 = 0;
    uRam0000000146b2fa0c = uRam0000000146b2ebdc;
    _DAT_146b2fa20 = _DAT_146b2f9f0;
    uRam0000000146b2fa24 = uRam0000000146b2f9f4;
    uRam0000000146b2fa28 = uRam0000000146b2f9f8;
    uRam0000000146b2fa2c = uRam0000000146b2f9fc;
  }
  return;
}



// FUNCTION 142c579f0 FUN_142c579f0 body=49 status=ok
// SIG undefined FUN_142c579f0(void)

void FUN_142c579f0(longlong param_1,undefined8 param_2)

{
  FUN_141fa8b80();
  FUN_1422f3ff0(param_1 + 0x828,param_2,0);
  return;
}



// FUNCTION 142c57a30 FUN_142c57a30 body=634 status=ok
// SIG undefined FUN_142c57a30(void)

void FUN_142c57a30(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong *plVar12;
  ulonglong uVar13;
  bool bVar14;
  longlong local_res8;
  int local_res18 [2];
  undefined1 local_res20 [8];
  int *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_res8 = param_1;
  FUN_1422f3ff0(param_1 + 0x140,param_2,0);
  FUN_1422f3ff0(param_1 + 0x158,param_2,0);
  lVar5 = *(longlong *)(param_1 + 0x178);
  lVar9 = (longlong)*(int *)(param_1 + 0x180) * 0x50 + lVar5;
  for (; lVar5 != lVar9; lVar5 = lVar5 + 0x50) {
    FUN_1422f3ff0(lVar5,param_2,0);
  }
  if (*(int *)(param_1 + 0x2c8) < 1) {
    return;
  }
  uVar13 = 0;
  local_50 = (int *)0x0;
  uStack_48 = 0;
  uVar10 = uVar13;
  if (*(int *)(param_1 + 0x2c8) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(&local_50);
    uVar10 = uStack_48 & 0xffffffff;
  }
  iVar6 = (int)uVar10;
  plVar12 = *(longlong **)(param_1 + 0x2c0);
  uVar4 = (longlong)*(int *)(param_1 + 0x2c8) & 0x1fffffffffffffff;
  if (plVar12 + *(int *)(param_1 + 0x2c8) < plVar12) {
    uVar4 = uVar13;
  }
  piVar11 = local_50;
  if (uVar4 != 0) {
    do {
      lVar5 = *plVar12;
      cVar2 = FUN_1422f3ff0(lVar5,param_2,0);
      if (cVar2 != '\0') {
        if (*(char *)(lVar5 + 0xc) == '\0') {
          local_res18[0] = *(int *)(lVar5 + 0x10);
        }
        else {
          if (*(int *)(lVar5 + 8) == -1) {
            local_res18[0] = -1;
            goto LAB_142c57ba3;
          }
          local_res18[0] =
               *(int *)(*(longlong *)(param_2 + 0x80) + (longlong)*(int *)(lVar5 + 8) * 4);
        }
        if (local_res18[0] != -1) {
          piVar3 = (int *)FBoneContainer::GetParentBoneIndex(param_2,local_res20);
          iVar6 = *piVar3;
          if (iVar6 != -1) {
            iVar7 = (int)uVar10;
            uVar8 = iVar7 + 1;
            uStack_48 = CONCAT44(uStack_48._4_4_,uVar8);
            if (uStack_48._4_4_ < (int)uVar8) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_50,uVar10);
              piVar11 = local_50;
              uVar8 = (uint)uStack_48;
            }
            uVar10 = (ulonglong)uVar8;
            piVar11[iVar7] = iVar6;
          }
        }
      }
LAB_142c57ba3:
      iVar6 = (int)uVar10;
      plVar12 = plVar12 + 1;
      uVar13 = uVar13 + 1;
      param_1 = local_res8;
    } while (uVar13 != uVar4);
  }
  if (0 < iVar6) {
    iVar7 = *piVar11;
    bVar14 = true;
    *(int *)(param_1 + 600) = iVar7;
    if (1 < iVar6) {
      uVar10 = (ulonglong)(iVar6 - 1);
      piVar3 = piVar11;
      do {
        piVar3 = piVar3 + 1;
        if (iVar7 != *piVar3) {
          iVar7 = -1;
          bVar14 = false;
          *(undefined4 *)(param_1 + 600) = 0xffffffff;
        }
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      if (!bVar14) goto LAB_142c57c8a;
    }
    iVar6 = *(int *)(param_1 + 0x180);
    if (0 < iVar6) {
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x178) + -0x50 + (longlong)iVar6 * 0x50);
      local_50 = (int *)*puVar1;
      uStack_48 = puVar1[1];
      local_40 = *(undefined8 *)(*(longlong *)(param_1 + 0x178) + -0x40 + (longlong)iVar6 * 0x50);
      cVar2 = FBoneReference::IsValidToEvaluate(&local_50,param_2);
      if (cVar2 != '\0') {
        iVar6 = *(int *)(param_1 + 600);
        local_res8 = CONCAT44(local_res8._4_4_,iVar6);
        bVar14 = iVar6 == (uint)uStack_48;
        if ((int)(uint)uStack_48 < iVar6) {
          do {
            piVar3 = (int *)FBoneContainer::GetParentBoneIndex(param_2,local_res18,&local_res8);
            iVar6 = *piVar3;
            local_res8 = CONCAT44(local_res8._4_4_,iVar6);
          } while ((int)(uint)uStack_48 < iVar6);
          bVar14 = iVar6 == (uint)uStack_48;
        }
        if (!bVar14) {
          *(undefined4 *)(param_1 + 600) = 0xffffffff;
        }
      }
    }
  }
LAB_142c57c8a:
  if (piVar11 != (int *)0x0) {
    FMemory::Free(piVar11);
  }
  return;
}



// FUNCTION 142c57cb0 FUN_142c57cb0 body=1439 status=ok
// SIG undefined FUN_142c57cb0(void)

void FUN_142c57cb0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  void *_Dst;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  longlong lVar22;
  undefined8 uVar23;
  longlong lVar24;
  float fVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  float local_res10 [2];
  int *local_res18;
  undefined8 local_190;
  int local_188;
  undefined8 local_184;
  int local_17c;
  int local_178;
  byte local_170 [4];
  int local_16c;
  uint local_168;
  int local_160;
  undefined8 local_15c;
  int local_154;
  undefined8 local_150;
  int local_148;
  undefined8 local_144;
  int local_13c;
  undefined8 local_138;
  int local_130;
  undefined8 local_12c;
  int local_124;
  undefined8 local_120;
  int local_118;
  int local_114;
  int local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  int local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  
  FUN_141fa9e30();
  if ((*(longlong *)(*param_2 + 0xb8) != 0) &&
     (plVar2 = *(longlong **)(*(longlong *)(*param_2 + 0xb8) + 0x118), plVar2 != (longlong *)0x0)) {
    lVar17 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar17 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar17 + 0x90) * 8) !=
        lVar17 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      local_res10[0] = 0.0;
      (**(code **)(*plVar2 + 0x578))(plVar2,param_1 + 2000,local_res10);
      *(float *)(param_1 + 0x7cc) = local_res10[0] * 2.0 * *(float *)(param_1 + 0x174);
      *(float *)(param_1 + 0x7c8) = local_res10[0] * 2.0 * *(float *)(param_1 + 0x170);
    }
  }
  fVar25 = *(float *)(param_1 + 0x150);
  if ((int)*(float *)(param_1 + 0x160) <= (int)*(float *)(param_1 + 0x150)) {
    fVar25 = *(float *)(param_1 + 0x160);
  }
  uVar26 = (ulonglong)(uint)fVar25;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  iVar15 = (int)((int)fVar25 + 0x1fU + ((int)((int)fVar25 + 0x1fU) >> 0x1f & 0x1fU)) >> 5;
  iVar18 = iVar15 << 5;
  local_res10[0] = fVar25;
  if (*(int *)(param_1 + 0x1dc) != iVar18) {
    *(int *)(param_1 + 0x1dc) = iVar18;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((void *)(param_1 + 0x1c0));
  }
  if (fVar25 != 0.0) {
    *(float *)(param_1 + 0x1d8) = fVar25;
    _Dst = *(void **)(param_1 + 0x1d0);
    if (*(void **)(param_1 + 0x1d0) == (void *)0x0) {
      _Dst = (void *)(param_1 + 0x1c0);
    }
    _guard_xfg_dispatch_icall_nop(_Dst,0xff,(longlong)iVar15 << 2);
  }
  piVar21 = (int *)(param_1 + 0x7c0);
  local_res18 = piVar21;
  if ((int *)(param_1 + 0x1e0) != piVar21) {
    piVar19 = (int *)(param_1 + 0x4c8);
    do {
      _guard_xfg_dispatch_icall_nop(&local_190,0,0x84);
      local_fc = -1;
      local_f8 = 0;
      local_10c = 0xffffffff;
      uStack_104 = 0xffffffff;
      local_f0 = 0;
      local_e8 = 0;
      _guard_xfg_dispatch_icall_nop(local_170,0,0x90);
      *piVar19 = 0;
      if (piVar19[1] != (int)uVar26) {
        FUN_142c58a80(piVar19 + -0xba);
      }
      uVar14 = local_f0;
      iVar12 = local_114;
      uVar11 = local_120;
      uVar10 = local_12c;
      uVar9 = local_138;
      uVar8 = local_144;
      uVar7 = local_150;
      uVar6 = local_15c;
      iVar18 = local_160;
      iVar15 = local_178;
      uVar23 = local_184;
      if (0 < (int)uVar26) {
        uVar4 = CONCAT44(uStack_e4,local_e8);
        iVar13 = (int)local_f8;
        do {
          iVar1 = *piVar19;
          iVar16 = iVar1 + 1;
          *piVar19 = iVar16;
          if (piVar19[1] < iVar16) {
            FUN_142c58880(piVar19 + -0xba);
          }
          piVar21 = *(int **)(piVar19 + -2);
          if (*(int **)(piVar19 + -2) == (int *)0x0) {
            piVar21 = piVar19 + -0xba;
          }
          piVar21 = piVar21 + (longlong)iVar1 * 0x2e;
          if (piVar21 != (int *)0x0) {
            piVar21[0] = 0;
            piVar21[1] = 0;
            *(undefined8 *)(piVar21 + 2) = local_190;
            piVar21[4] = local_188;
            *(undefined8 *)(piVar21 + 5) = uVar23;
            piVar21[7] = local_17c;
            piVar21[8] = iVar15;
            *(byte *)(piVar21 + 10) = *(byte *)(piVar21 + 10) & 0xfc;
            *(byte *)(piVar21 + 10) = *(byte *)(piVar21 + 10) | local_170[0] & 3;
            piVar21[0xc] = piVar21[0xc] & 0xfffffffe;
            piVar21[0xb] = local_16c;
            *(undefined8 *)(piVar21 + 0xf) = uVar6;
            piVar21[0xc] = piVar21[0xc] | local_168 & 1;
            piVar21[0x11] = local_154;
            *(undefined8 *)(piVar21 + 0x12) = uVar7;
            piVar21[0x14] = local_148;
            *(undefined8 *)(piVar21 + 0x15) = uVar8;
            piVar21[0x17] = local_13c;
            *(undefined8 *)(piVar21 + 0x18) = uVar9;
            piVar21[0x1a] = local_130;
            *(undefined8 *)(piVar21 + 0x1b) = uVar10;
            piVar21[0x1d] = local_124;
            *(undefined8 *)(piVar21 + 0x1e) = uVar11;
            piVar21[0x20] = local_118;
            piVar21[0x22] = local_110;
            piVar21[0xe] = iVar18;
            piVar21[0x21] = iVar12;
            piVar21[0xd] = 0x3f800000;
            piVar21[0x23] = (int)local_10c;
            piVar21[0x24] = local_10c._4_4_;
            piVar21[0x25] = (int)uStack_104;
            piVar21[0x26] = uStack_104._4_4_;
            piVar21[0x27] = local_fc;
            piVar21[0x28] = iVar13;
            *(undefined8 *)(piVar21 + 0x2a) = uVar14;
            *(undefined8 *)(piVar21 + 0x2c) = uVar4;
          }
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
        uVar26 = (ulonglong)(uint)local_res10[0];
        piVar21 = local_res18;
      }
      fVar25 = (float)uVar26;
      piVar20 = piVar19 + 2;
      piVar19 = piVar19 + 0xbc;
    } while (piVar20 != piVar21);
  }
  lVar22 = 0;
  lVar24 = (longlong)(int)fVar25;
  lVar17 = lVar22;
  if (0 < lVar24) {
    do {
      piVar19 = (int *)(param_1 + 0x1e0);
      lVar3 = *(longlong *)(lVar17 + 0x40 + *(longlong *)(param_1 + 0x158));
      if (lVar3 == 0) {
        uVar23 = 0;
      }
      else {
        uVar23 = *(undefined8 *)(lVar3 + 0x18);
      }
      for (; piVar19 != piVar21; piVar19 = piVar19 + 0xbc) {
        piVar20 = *(int **)(piVar19 + 0xb8);
        if (*(int **)(piVar19 + 0xb8) == (int *)0x0) {
          piVar20 = piVar19;
        }
        *(undefined8 *)((longlong)piVar20 + lVar22) = uVar23;
      }
      lVar22 = lVar22 + 0xb8;
      lVar24 = lVar24 + -1;
      lVar17 = lVar17 + 0xe0;
    } while (lVar24 != 0);
  }
  *(undefined8 *)(param_1 + 0x818) = *(undefined8 *)(param_1 + 0x80c);
  *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_1 + 0x814);
  if (*(char *)(param_1 + 0x1a8) == '\0') {
    uVar27 = 0;
  }
  else {
    uVar27 = FUN_141fa5700(param_1 + 400);
  }
  *(undefined4 *)(param_1 + 0x1bc) = uVar27;
  return;
}



// FUNCTION 142c58250 FUN_142c58250 body=667 status=ok
// SIG undefined FUN_142c58250(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c58250(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 in_XMM5 [16];
  undefined1 auVar10 [16];
  float fVar15;
  undefined1 auVar11 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  FUN_141faaaf0();
  if (*(char *)(param_1 + 0x220) == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_141fa5700(param_1 + 0x208);
  }
  *(undefined4 *)(param_1 + 0x268) = uVar5;
  lVar1 = *(longlong *)(*param_2 + 0xb8);
  if (lVar1 != 0) {
    auVar11 = *(undefined1 (*) [16])(lVar1 + 0x230);
    fVar3 = auVar11._0_4_;
    fVar4 = auVar11._4_4_;
    fVar14 = auVar11._8_4_;
    fVar16 = *(float *)(lVar1 + 0x210) * _DAT_146b2ec30;
    fVar17 = *(float *)(lVar1 + 0x214) * fRam0000000146b2ec34;
    fVar18 = *(float *)(lVar1 + 0x218) * fRam0000000146b2ec38;
    fVar19 = *(float *)(lVar1 + 0x21c) * fRam0000000146b2ec3c;
    auVar10 = rcpps(in_XMM5,auVar11);
    fVar20 = (float)((uint)(*(float *)(param_1 + 0x198) - *(float *)(lVar1 + 0x220)) &
                    _DAT_146b2ebe0);
    fVar21 = (float)((uint)(*(float *)(param_1 + 0x19c) - *(float *)(lVar1 + 0x224)) &
                    uRam0000000146b2ebe4);
    fVar22 = (float)((uint)(*(float *)(param_1 + 0x1a0) - *(float *)(lVar1 + 0x228)) &
                    uRam0000000146b2ebe8);
    fVar6 = fVar22 * fVar17 - fVar21 * fVar18;
    fVar7 = fVar20 * fVar18 - fVar22 * fVar16;
    fVar8 = fVar21 * fVar16 - fVar20 * fVar17;
    fVar9 = auVar10._0_4_;
    fVar12 = auVar10._4_4_;
    fVar13 = auVar10._8_4_;
    fVar15 = auVar10._12_4_;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    fVar8 = fVar8 + fVar8;
    fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar3;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar4;
    fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar14;
    fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * auVar11._12_4_;
    bVar2 = (float)((uint)fVar14 & uRam0000000146b2ec58) <= fRam0000000146b2ec48;
    auVar10._0_4_ = (fVar9 + fVar9) - fVar9 * fVar9 * fVar3;
    auVar10._4_4_ = (fVar12 + fVar12) - fVar12 * fVar12 * fVar4;
    auVar10._8_4_ = (fVar13 + fVar13) - fVar13 * fVar13 * fVar14;
    auVar10._12_4_ = (fVar15 + fVar15) - fVar15 * fVar15 * auVar11._12_4_;
    *(ulonglong *)(param_1 + 0x240) =
         CONCAT44(((fVar6 * fVar18 - fVar8 * fVar16) + fVar19 * fVar7 + fVar21) *
                  (float)(-(uint)((float)((uint)fVar4 & uRam0000000146b2ec54) <=
                                 fRam0000000146b2ec44) & (uint)auVar10._4_4_ ^ (uint)auVar10._4_4_),
                  ((fVar8 * fVar17 - fVar7 * fVar18) + fVar19 * fVar6 + fVar20) *
                  (float)(-(uint)((float)((uint)fVar3 & _DAT_146b2ec50) <= _DAT_146b2ec40) &
                          (uint)auVar10._0_4_ ^ (uint)auVar10._0_4_));
    *(float *)(param_1 + 0x248) =
         ((fVar7 * fVar16 - fVar6 * fVar17) + fVar19 * fVar8 + fVar22) *
         (float)(-(uint)bVar2 & (uint)auVar10._8_4_ ^ (uint)auVar10._8_4_);
    fVar15 = *(float *)(lVar1 + 0x210) * _DAT_146b2ec30;
    fVar16 = *(float *)(lVar1 + 0x214) * fRam0000000146b2ec34;
    fVar17 = *(float *)(lVar1 + 0x218) * fRam0000000146b2ec38;
    fVar18 = *(float *)(lVar1 + 0x21c) * fRam0000000146b2ec3c;
    fVar19 = (float)((uint)(*(float *)(param_1 + 0x1a4) - *(float *)(lVar1 + 0x220)) &
                    _DAT_146b2ebe0);
    fVar20 = (float)((uint)(*(float *)(param_1 + 0x1a8) - *(float *)(lVar1 + 0x224)) &
                    uRam0000000146b2ebe4);
    fVar21 = (float)((uint)(*(float *)(param_1 + 0x1ac) - *(float *)(lVar1 + 0x228)) &
                    uRam0000000146b2ebe8);
    auVar11 = *(undefined1 (*) [16])(lVar1 + 0x230);
    fVar3 = auVar11._0_4_;
    fVar4 = auVar11._4_4_;
    fVar14 = auVar11._8_4_;
    auVar11 = rcpps(auVar10,auVar11);
    fVar6 = fVar21 * fVar16 - fVar20 * fVar17;
    fVar7 = fVar19 * fVar17 - fVar21 * fVar15;
    fVar8 = fVar20 * fVar15 - fVar19 * fVar16;
    fVar9 = auVar11._0_4_;
    fVar12 = auVar11._4_4_;
    fVar13 = auVar11._8_4_;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    fVar8 = fVar8 + fVar8;
    fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar3;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar4;
    fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar14;
    bVar2 = (float)((uint)fVar14 & uRam0000000146b2ec58) <= fRam0000000146b2ec48;
    fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar3;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar4;
    fVar14 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar14;
    *(ulonglong *)(param_1 + 0x24c) =
         CONCAT44(((fVar6 * fVar17 - fVar8 * fVar15) + fVar18 * fVar7 + fVar20) *
                  (float)(-(uint)((float)((uint)fVar4 & uRam0000000146b2ec54) <=
                                 fRam0000000146b2ec44) & (uint)fVar12 ^ (uint)fVar12),
                  ((fVar8 * fVar16 - fVar7 * fVar17) + fVar18 * fVar6 + fVar19) *
                  (float)(-(uint)((float)((uint)fVar3 & _DAT_146b2ec50) <= _DAT_146b2ec40) &
                          (uint)fVar9 ^ (uint)fVar9));
    *(float *)(param_1 + 0x254) =
         ((fVar7 * fVar15 - fVar6 * fVar16) + fVar18 * fVar8 + fVar21) *
         (float)(-(uint)bVar2 & (uint)fVar14 ^ (uint)fVar14);
  }
  return;
}



// FUNCTION 142c58520 FUN_142c58520 body=116 status=ok
// SIG undefined FUN_142c58520(void)

void FUN_142c58520(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = FBoneReference::IsValidToEvaluate(param_1 + 0x140,param_3);
  lVar2 = *(longlong *)(param_1 + 0x178);
  lVar3 = (longlong)*(int *)(param_1 + 0x180) * 0x50 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x50) {
    if ((cVar1 == '\0') || (cVar1 = FBoneReference::IsValidToEvaluate(lVar2,param_3), cVar1 == '\0')
       ) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
  }
  return;
}



// FUNCTION 142c585a0 FUN_142c585a0 body=65 status=ok
// SIG undefined FUN_142c585a0(void)

float FUN_142c585a0(float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_1[1];
  if ((0.0 < fVar1) && (fVar1 = (param_2 - (*param_1 - fVar1)) * (0.5 / fVar1), 0.0 <= fVar1)) {
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    return fVar1;
  }
  return 0.0;
}



// FUNCTION 142c585f0 FUN_142c585f0 body=117 status=ok
// SIG undefined FUN_142c585f0(void)

void FUN_142c585f0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    iVar1 = FArchive::CustomVer(param_2,&DAT_1466abe10);
    if (iVar1 + 1U < 2) {
      puVar2 = (undefined8 *)FUN_142c48df0(local_res10,0,*(undefined4 *)(param_1 + 0x8a0));
      *(undefined8 *)(param_1 + 0x7d8) = *puVar2;
      puVar2 = (undefined8 *)
               FUN_142c48df0(local_res10,*(undefined4 *)(param_1 + 0x8a0),
                             *(undefined4 *)(param_1 + 0x8a4));
      *(undefined8 *)(param_1 + 0x84c) = *puVar2;
    }
  }
  return;
}



// FUNCTION 142c58670 FUN_142c58670 body=161 status=ok
// SIG undefined FUN_142c58670(void)

void FUN_142c58670(longlong param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0xd0);
    iVar2 = (iVar1 - param_2) - param_3;
    if (iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar3 = param_1;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x30 + lVar3),
                 (void *)((longlong)(param_2 + param_3) * 0x30 + lVar3),(longlong)iVar2 * 0x30);
      iVar1 = *(int *)(param_1 + 0xd0);
    }
    *(int *)(param_1 + 0xd0) = iVar1 - param_3;
    if (param_4 != '\0') {
      FUN_142c589c0(param_1);
    }
  }
  return;
}



// FUNCTION 142c58720 FUN_142c58720 body=161 status=ok
// SIG undefined FUN_142c58720(void)

void FUN_142c58720(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x2e0);
  if (param_3 < 5) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0xb8);
    pvVar1 = *(void **)((longlong)param_1 + 0x2e0);
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
        *(void **)((longlong)param_1 + 0x2e0) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0xb8);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x2e0) = uVar2;
  return;
}



// FUNCTION 142c587d0 FUN_142c587d0 body=163 status=ok
// SIG undefined FUN_142c587d0(void)

void FUN_142c587d0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xc0);
  if (param_3 < 5) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x30);
    pvVar1 = *(void **)((longlong)param_1 + 0xc0);
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
        *(void **)((longlong)param_1 + 0xc0) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x30);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xc0) = uVar2;
  return;
}



// FUNCTION 142c58880 FUN_142c58880 body=157 status=ok
// SIG undefined FUN_142c58880(void)

void FUN_142c58880(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x2e8);
  uVar3 = 4;
  if (4 < uVar1) {
    if ((*(int *)(param_1 + 0x2ec) != 0) || (4 < uVar1)) {
      uVar3 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(uVar3 * 0xb8,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    lVar5 = SUB168(ZEXT816(0x642c8590b21642c9) * auVar2,8);
    uVar4 = (uVar3 - lVar5 >> 1) + lVar5 >> 7;
    uVar3 = uVar4 & 0xffffffff;
    if ((int)uVar4 < (int)uVar1) {
      uVar3 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x2ec) = (int)uVar3;
  FUN_142c58720(param_1,param_2,uVar3,0xb8);
  return;
}



// FUNCTION 142c58920 ResizeGrow body=149 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FSimpleElementVertex,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xd0);
  uVar3 = 4;
  if (4 < uVar1) {
    if ((*(int *)(param_1 + 0xd4) != 0) || (4 < uVar1)) {
      uVar3 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar2 = FMemory::QuantizeSize(uVar3 * 0x30,0);
    uVar3 = uVar2 / 0x30 & 0xffffffff;
    if ((int)(uVar2 / 0x30) < (int)uVar1) {
      uVar3 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xd4) = (int)uVar3;
  FUN_142c587d0(param_1,param_2,uVar3,0x30);
  return;
}



// FUNCTION 142c589c0 FUN_142c589c0 body=178 status=ok
// SIG undefined FUN_142c589c0(void)

void FUN_142c589c0(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xd0);
  uVar3 = *(uint *)(param_1 + 0xd4);
  if (uVar2 < 5) {
    uVar2 = 4;
    goto LAB_142c58a45;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) * 0x30)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 * 0x30,0);
        uVar3 = *(uint *)(param_1 + 0xd4);
        uVar2 = (uint)(uVar1 / 0x30);
      }
      goto LAB_142c58a45;
    }
    if (uVar2 == 0) goto LAB_142c58a45;
  }
  uVar2 = uVar3;
LAB_142c58a45:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0xd4) = uVar2;
    FUN_142c587d0(param_1,*(undefined4 *)(param_1 + 0xd0),uVar2,0x30);
    return;
  }
  return;
}



// FUNCTION 142c58a80 FUN_142c58a80 body=135 status=ok
// SIG undefined FUN_142c58a80(void)

void FUN_142c58a80(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      iVar3 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0xb8,0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2;
      lVar4 = SUB168(ZEXT816(0x642c8590b21642c9) * auVar1,8);
      iVar3 = (int)((uVar2 - lVar4 >> 1) + lVar4 >> 7);
      if (iVar3 < (int)param_2) {
        iVar3 = 0x7fffffff;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x2ec)) {
    *(int *)(param_1 + 0x2ec) = iVar3;
    FUN_142c58720(param_1,*(undefined4 *)(param_1 + 0x2e8),iVar3,0xb8);
  }
  return;
}



// FUNCTION 142c58b10 FUN_142c58b10 body=26 status=ok
// SIG undefined FUN_142c58b10(void)

undefined1 FUN_142c58b10(undefined8 param_1,undefined8 param_2)

{
  FArchive::UsingCustomVersion(param_2,&DAT_1466abe10);
  return 0;
}



// FUNCTION 142c58b30 FUN_142c58b30 body=91 status=ok
// SIG undefined FUN_142c58b30(void)

void FUN_142c58b30(longlong param_1,int param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x1d8))) {
    lVar3 = *(longlong *)(param_1 + 0x1d0);
    if (*(longlong *)(param_1 + 0x1d0) == 0) {
      lVar3 = param_1 + 0x1c0;
    }
    puVar1 = (uint *)(lVar3 + (longlong)((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
    uVar2 = 1 << ((byte)param_2 & 0x1f);
    if (param_3 != '\0') {
      *puVar1 = uVar2 | *puVar1;
      return;
    }
    *puVar1 = ~uVar2 & *puVar1;
  }
  return;
}



// FUNCTION 142c58b90 FUN_142c58b90 body=80 status=ok
// SIG undefined FUN_142c58b90(void)

void FUN_142c58b90(longlong param_1,ulonglong param_2)

{
  ulonglong local_res8 [4];
  
  local_res8[0] = param_2;
  FUN_142c4e970(*(undefined8 *)(param_1 + 0x178),(longlong)*(int *)(param_1 + 0x180),param_2 & 0xff,
                local_res8);
  FUN_142c4e970(*(undefined8 *)(param_1 + 0x188),(longlong)*(int *)(param_1 + 400),
                local_res8[0] & 0xff,local_res8);
  return;
}



// FUNCTION 142c58be0 FUN_142c58be0 body=8 status=ok
// SIG undefined FUN_142c58be0(void)

void FUN_142c58be0(longlong param_1)

{
  *(uint *)(param_1 + 0x7c0) = *(uint *)(param_1 + 0x7c0) ^ 1;
  return;
}



// FUNCTION 142c58bf0 FUN_142c58bf0 body=123 status=ok
// SIG undefined FUN_142c58bf0(void)

undefined8 FUN_142c58bf0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_1 = (ulonglong)*(uint *)(param_1 + 0x7c0) * 0x2f0 + param_1;
  plVar2 = *(longlong **)(param_1 + 0x4c0);
  if (*(longlong **)(param_1 + 0x4c0) == (longlong *)0x0) {
    plVar2 = (longlong *)(param_1 + 0x1e0);
  }
  plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x4c8) * 0x17;
  if (plVar2 != plVar1) {
    do {
      if (*plVar2 == *param_2) {
        FUN_140729f20(param_3,plVar2 + 5);
        return 1;
      }
      plVar2 = plVar2 + 0x17;
    } while (plVar2 != plVar1);
  }
  return 0;
}



// FUNCTION 142c58c70 FUN_142c58c70 body=8364 status=ok
// SIG undefined FUN_142c58c70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c58c70(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  char cVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  byte bVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar40;
  float fVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar42;
  float fVar43;
  undefined1 auVar39 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auStack_568 [32];
  longlong *local_548;
  undefined1 *local_540;
  undefined1 *local_538;
  char local_528;
  char local_527 [3];
  float local_524;
  float local_520;
  float local_51c;
  float local_518;
  float local_510;
  float fStack_50c;
  float local_508;
  uint local_500;
  float local_4fc;
  float local_4f8;
  float local_4f4;
  undefined8 local_4e8;
  float local_4e0;
  longlong local_4d8;
  undefined8 local_4c8;
  float local_4c0;
  float local_4b8;
  float local_4b0;
  float local_4ac;
  float local_4a8;
  undefined8 local_498;
  float local_490;
  undefined8 local_48c;
  undefined4 local_484;
  float local_480;
  byte local_478 [4];
  undefined4 local_474;
  uint local_470;
  float local_46c;
  float local_468;
  undefined8 local_464;
  undefined4 local_45c;
  undefined8 local_458;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 uStack_448;
  float local_444;
  undefined8 local_440;
  undefined4 local_438;
  undefined8 local_434;
  float local_42c;
  undefined8 local_428;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined8 local_3f8;
  ulonglong local_3f0;
  float local_3e8;
  float fStack_3e4;
  float local_3e0;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float local_3c4;
  int local_3c0;
  float local_3bc;
  int local_3b8;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  float local_398;
  float fStack_394;
  float local_390;
  undefined8 local_388;
  float local_380;
  float local_378;
  float fStack_374;
  float local_370;
  longlong *local_368;
  longlong local_360;
  longlong local_358;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined4 local_310;
  float local_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f0;
  undefined8 local_2e8;
  float local_2e0;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  float local_290;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  byte local_278 [4];
  undefined4 local_274;
  uint local_270;
  float local_26c;
  float local_268;
  undefined8 local_264;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  float local_244;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_234;
  float local_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined1 local_1a8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined2 local_158;
  undefined2 local_155;
  longlong local_120;
  longlong local_100;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_568;
  if (*(char *)(param_1 + 0x855) != '\0') {
    return;
  }
  lVar4 = *(longlong *)(*param_2 + 0xb8);
  plVar5 = *(longlong **)(lVar4 + 0x118);
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  local_368 = plVar5;
  local_360 = (**(code **)(*plVar5 + 0x148))(plVar5);
  if (local_360 == 0) {
    return;
  }
  fVar46 = *(float *)(param_1 + 0x844);
  fVar44 = *(float *)(param_2 + 2);
  if (0.03333 <= fVar44) {
    fVar44 = 0.03333;
  }
  local_3bc = SQRT(*(float *)(param_1 + 0x7e8) * *(float *)(param_1 + 0x7e8) +
                   *(float *)(param_1 + 0x7ec) * *(float *)(param_1 + 0x7ec));
  local_524 = fVar44;
  fVar26 = (float)FUN_142c585a0(param_1 + 0x84c);
  fVar46 = fVar26 * (*(float *)(param_1 + 0x848) - fVar46) + fVar46;
  local_3c4 = fVar46;
  fVar26 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x840) * 0.017453292);
  local_4f4 = 1.0 - *(float *)(param_1 + 0x1b0);
  if (0.0 <= local_4f4) {
    if (1.0 <= local_4f4) {
      local_4f4 = 1.0;
    }
  }
  else {
    local_4f4 = 0.0;
  }
  uVar17 = 0;
  local_548 = (longlong *)0x0;
  local_3c8 = fVar26;
  FUN_1422ffb20(local_168,DAT_146b2ebf8,local_527,0);
  FUN_1426d3dd0(local_1a8);
  FUN_1426ea8d0(local_1a8);
  lVar24 = *param_2;
  if (*(char *)(param_1 + 0x1b8) == '\0') {
    if (lVar24 == 0) {
      local_528 = '\0';
    }
    else if ((*(int *)(param_1 + 0x188) < 0) ||
            (*(int *)(lVar24 + 0x4c8) <= *(int *)(param_1 + 0x188))) {
      fVar36 = *(float *)(param_1 + 0x1bc) * *(float *)(param_1 + 0x1bc);
      if (fVar36 < *(float *)(lVar24 + 0x6b4) || fVar36 == *(float *)(lVar24 + 0x6b4)) {
        if (*(int *)(param_1 + 0x150) < 1) {
          local_528 = '\0';
        }
        else {
          local_528 = '\x01';
          local_158 = 0x101;
          local_155 = 0x100;
          FCollisionQueryParams::AddIgnoredActor(local_168,plVar5);
          FCollisionResponseContainer::SetResponse(local_1a8);
        }
      }
      else {
        local_528 = '\0';
      }
    }
    else {
      local_528 = '\0';
    }
  }
  else {
    local_528 = '\0';
  }
  iVar22 = *(int *)(param_1 + 0x7f4);
  local_3b8 = *(int *)(param_1 + 0x808);
  *(int *)(param_1 + 0x808) = iVar22;
  local_3c0 = iVar22;
  if ((*(int *)(param_1 + 0x7c4) != *(short *)(*param_2 + 0x330) + -1) ||
     (*(float *)(param_2 + 1) <= 0.8 && *(float *)(param_2 + 1) != 0.8)) {
    local_527[0] = '\x01';
  }
  else {
    local_527[0] = '\0';
  }
  *(int *)(param_1 + 0x7c4) = (int)*(short *)(*param_2 + 0x330);
  if (local_527[0] != '\0') {
    lVar24 = *(longlong *)(param_1 + 0x158);
    lVar19 = (longlong)*(int *)(param_1 + 0x160) * 0xe0 + lVar24;
    if (lVar24 != lVar19) {
      puVar13 = (undefined4 *)(lVar24 + 200);
      do {
        if (*(longlong *)(puVar13 + -0x22) == 0) {
          local_4d8 = 0;
        }
        iVar12 = FUN_1423ac950(lVar4);
        if (iVar12 != -1) {
          puVar1 = (undefined4 *)
                   (*(longlong *)(lVar4 + 0x728 + (longlong)*(int *)(lVar4 + 0x770) * 0x10) + 0x10 +
                   (longlong)iVar12 * 0x30);
          uVar27 = puVar1[1];
          local_4e0 = (float)puVar1[2];
          *puVar13 = *puVar1;
          puVar13[1] = uVar27;
          puVar13[2] = local_4e0;
        }
        lVar24 = lVar24 + 0xe0;
        *(ulonglong *)(puVar13 + -4) = CONCAT44(DAT_1464aa798._4_4_,(float)DAT_1464aa798);
        puVar13[-2] = DAT_1464aa7a0;
        puVar13 = puVar13 + 0x38;
      } while (lVar24 != lVar19);
    }
  }
  cVar15 = local_527[0];
  fVar36 = *(float *)(lVar4 + 0x210);
  fVar40 = *(float *)(lVar4 + 0x214);
  fVar41 = *(float *)(lVar4 + 0x218);
  fVar42 = *(float *)(lVar4 + 0x21c);
  local_308 = fVar36;
  fStack_304 = fVar40;
  fStack_300 = fVar41;
  fStack_2fc = fVar42;
  local_328 = *(undefined8 *)(lVar4 + 0x220);
  uStack_320 = *(undefined8 *)(lVar4 + 0x228);
  local_338 = (float)*(undefined8 *)(lVar4 + 0x230);
  fStack_334 = (float)((ulonglong)*(undefined8 *)(lVar4 + 0x230) >> 0x20);
  fStack_330 = (float)*(undefined8 *)(lVar4 + 0x238);
  fStack_32c = (float)((ulonglong)*(undefined8 *)(lVar4 + 0x238) >> 0x20);
  local_188 = *(undefined8 *)(lVar4 + 0x220);
  uStack_180 = *(undefined8 *)(lVar4 + 0x228);
  if (*(float *)(param_1 + 0x86c) <= fVar26 && fVar26 != *(float *)(param_1 + 0x86c)) {
    fStack_50c = *(float *)(param_1 + 0x868);
    local_510 = *(float *)(param_1 + 0x864);
    fVar44 = (1.0 / SQRT(local_510 * local_510 + fStack_50c * fStack_50c)) *
             SQRT(1.0 - fVar26 * fVar26);
    local_510 = local_510 * fVar44;
    fStack_50c = fStack_50c * fVar44;
    fVar44 = fStack_50c * fStack_50c + local_510 * local_510 + fVar26 * fVar26;
    local_508 = fVar26;
    if (fVar44 != 1.0) {
      if (1e-08 <= fVar44) {
        auVar38 = rsqrtss(ZEXT416((uint)fVar44),ZEXT416((uint)fVar44));
        fVar47 = auVar38._0_4_;
        fVar47 = fVar47 + fVar47 * (0.5 - fVar44 * 0.5 * fVar47 * fVar47);
        fVar47 = fVar47 + fVar47 * (0.5 - fVar44 * 0.5 * fVar47 * fVar47);
        local_510 = local_510 * fVar47;
        fStack_50c = fStack_50c * fVar47;
        local_508 = fVar47 * fVar26;
      }
      else {
        local_510 = DAT_1468b5d90;
        local_508 = DAT_1468b5d98;
        fStack_50c = DAT_1468b5d94;
      }
    }
    *(ulonglong *)(param_1 + 0x864) = CONCAT44(fStack_50c,local_510);
    *(float *)(param_1 + 0x86c) = local_508;
    fVar44 = local_524;
  }
  if (local_527[0] == '\0') {
    local_548 = (longlong *)CONCAT44(local_548._4_4_,fVar46);
    puVar14 = (undefined8 *)
              FMath::VInterpTo(&local_4e8,param_1 + 0x870,(undefined8 *)(param_1 + 0x864),fVar44);
  }
  else {
    local_4c0 = *(float *)(param_1 + 0x86c);
    puVar14 = &local_4c8;
    local_4c8 = *(undefined8 *)(param_1 + 0x864);
  }
  *(undefined8 *)(param_1 + 0x870) = *puVar14;
  iVar12 = *(int *)(puVar14 + 1);
  *(int *)(param_1 + 0x878) = iVar12;
  fVar46 = *(float *)(param_1 + 0x874);
  fVar44 = *(float *)(param_1 + 0x870);
  fVar47 = *(float *)(param_1 + 0x878);
  fVar30 = fVar44 * fVar44 + fVar46 * fVar46 + fVar47 * fVar47;
  if (1e-08 < fVar30) {
    auVar37._8_8_ = 0;
    auVar37._0_8_ = CONCAT44(0,fVar30);
    auVar38._8_8_ = 0;
    auVar38._0_8_ = CONCAT44(0,fVar30);
    auVar38 = rsqrtss(auVar37,auVar38);
    fVar35 = auVar38._0_4_;
    fVar35 = fVar35 + fVar35 * (0.5 - fVar30 * 0.5 * fVar35 * fVar35);
    fVar35 = fVar35 + fVar35 * (0.5 - fVar30 * 0.5 * fVar35 * fVar35);
    fVar44 = fVar44 * fVar35;
    fVar46 = fVar46 * fVar35;
    fVar47 = fVar47 * fVar35;
    *(float *)(param_1 + 0x870) = fVar44;
    *(float *)(param_1 + 0x874) = fVar46;
    *(float *)(param_1 + 0x878) = fVar47;
  }
  fVar30 = *(float *)(param_1 + 0x878);
  if (*(float *)(param_1 + 0x878) <= fVar26) {
    fVar30 = fVar26;
  }
  if (fVar30 <= 0.0) {
    fVar26 = 0.0;
LAB_142c592ff:
    fVar30 = *(float *)(param_1 + 0x7cc);
    if (fVar26 <= *(float *)(param_1 + 0x7cc)) {
      fVar30 = fVar26;
    }
  }
  else {
    fVar26 = *(float *)(param_1 + 2000) / fVar30 - *(float *)(param_1 + 2000);
    if (0.0 <= fVar26) goto LAB_142c592ff;
    fVar30 = 0.0;
  }
  local_4b8 = fVar30;
  if ((*(char *)(param_1 + 0x854) == '\0') ||
     (SQRT(*(float *)(param_1 + 0x80c) * *(float *)(param_1 + 0x80c) +
           *(float *)(param_1 + 0x810) * *(float *)(param_1 + 0x810)) <= 0.0001)) {
    uVar3 = CONCAT44(DAT_1464aa81c,DAT_1464aa818);
    *(ulonglong *)(param_1 + 0x890) = CONCAT44(DAT_1464aa814,DAT_1464aa810);
    *(undefined8 *)(param_1 + 0x898) = uVar3;
    local_520 = DAT_1464aa814;
    fVar46 = DAT_1464aa810;
    fVar44 = DAT_1464aa81c;
    fVar26 = DAT_1464aa818;
  }
  else {
    fVar36 = fVar36 * _DAT_146b2ec30;
    fVar40 = fVar40 * fRam0000000146b2ec34;
    fVar41 = fVar41 * fRam0000000146b2ec38;
    fVar42 = fVar42 * fRam0000000146b2ec3c;
    fVar26 = fVar47 * fVar40 - fVar46 * fVar41;
    fVar35 = fVar44 * fVar41 - fVar47 * fVar36;
    fVar34 = fVar46 * fVar36 - fVar44 * fVar40;
    fVar26 = fVar26 + fVar26;
    fVar35 = fVar35 + fVar35;
    fVar34 = fVar34 + fVar34;
    local_4b0 = (fVar34 * fVar40 - fVar35 * fVar41) + fVar42 * fVar26 + fVar44;
    local_4ac = (fVar26 * fVar41 - fVar34 * fVar36) + fVar42 * fVar35 + fVar46;
    local_4a8 = (fVar35 * fVar36 - fVar26 * fVar40) + fVar42 * fVar34 + fVar47;
    puVar13 = (undefined4 *)FQuat::FindBetweenNormals(&local_288,&DAT_1464aa798,&local_4b0);
    fVar44 = -1.0;
    uVar27 = puVar13[1];
    uVar9 = puVar13[2];
    fVar46 = (float)puVar13[3];
    *(undefined4 *)(param_1 + 0x890) = *puVar13;
    *(undefined4 *)(param_1 + 0x894) = uVar27;
    *(undefined4 *)(param_1 + 0x898) = uVar9;
    *(float *)(param_1 + 0x89c) = fVar46;
    if (-1.0 <= fVar46) {
      fVar26 = fVar46;
      if (1.0 <= fVar46) {
        fVar26 = 1.0;
      }
    }
    else {
      fVar26 = -1.0;
    }
    fVar26 = _guard_xfg_dispatch_icall_nop(fVar26);
    fVar46 = 1.0 - fVar46 * fVar46;
    if (fVar46 <= 0.0) {
      fVar46 = 0.0;
    }
    if (SQRT(fVar46) < 0.0001) {
      fVar46 = 1.0;
      local_520 = 0.0;
      fVar47 = 0.0;
    }
    else {
      fVar47 = 1.0 / SQRT(fVar46);
      fVar46 = fVar47 * *(float *)(param_1 + 0x890);
      local_520 = fVar47 * *(float *)(param_1 + 0x894);
      fVar47 = fVar47 * *(float *)(param_1 + 0x898);
    }
    fVar40 = local_520 * local_520 * *(float *)(param_1 + 0x810);
    fVar42 = fVar46 * fVar46 * *(float *)(param_1 + 0x80c);
    fVar36 = fVar47 * fVar47 * *(float *)(param_1 + 0x814);
    fVar41 = (fVar26 + fVar26) * (fVar40 + fVar42 + fVar36);
    fVar26 = fVar41 * 0.5;
    if (fVar26 < 0.0) {
      fVar35 = fVar26 * 0.15915494 - 0.5;
    }
    else {
      fVar35 = fVar26 * 0.15915494 + 0.5;
    }
    fVar26 = fVar26 - (float)(int)fVar35 * 6.2831855;
    if (fVar26 <= 1.5707964) {
      if (-1.5707964 <= fVar26) {
        local_51c = 1.0;
      }
      else {
        local_51c = -1.0;
        fVar26 = -3.1415927 - fVar26;
      }
    }
    else {
      local_51c = -1.0;
      fVar26 = 3.1415927 - fVar26;
    }
    fVar35 = fVar26 * fVar26;
    fVar26 = (((((2.7525562e-06 - fVar35 * 2.3889859e-08) * fVar35 - 0.00019840874) * fVar35 +
               0.008333331) * fVar35 - 0.16666667) * fVar35 + 1.0) * fVar26;
    fVar34 = (ABS(fVar42) + ABS(fVar40) + ABS(fVar36)) * fVar41 * 0.5;
    *(float *)(param_1 + 0x890) = fVar46 * fVar26;
    *(float *)(param_1 + 0x894) = local_520 * fVar26;
    *(float *)(param_1 + 0x898) = fVar47 * fVar26;
    *(float *)(param_1 + 0x89c) =
         (((((2.4760495e-05 - fVar35 * 2.6051615e-07) * fVar35 - 0.0013888378) * fVar35 +
           0.041666638) * fVar35 - 0.5) * fVar35 + 1.0) * local_51c;
    if (fVar34 < 0.0) {
      fVar26 = fVar34 * 0.15915494 - 0.5;
    }
    else {
      fVar26 = fVar34 * 0.15915494 + 0.5;
    }
    iVar12 = (int)fVar26;
    fVar34 = fVar34 - (float)iVar12 * 6.2831855;
    if (fVar34 <= 1.5707964) {
      if (-1.5707964 <= fVar34) {
        fVar44 = 1.0;
      }
      else {
        fVar34 = -3.1415927 - fVar34;
      }
    }
    else {
      fVar34 = 3.1415927 - fVar34;
    }
    fVar26 = fVar34 * fVar34;
    fVar34 = (((((2.7525562e-06 - fVar26 * 2.3889859e-08) * fVar26 - 0.00019840874) * fVar26 +
               0.008333331) * fVar26 - 0.16666667) * fVar26 + 1.0) * fVar34;
    local_520 = local_520 * fVar34;
    fVar36 = local_308;
    fVar40 = fStack_304;
    fVar41 = fStack_300;
    fVar42 = fStack_2fc;
    fVar46 = fVar46 * fVar34;
    fVar44 = (((((2.4760495e-05 - fVar26 * 2.6051615e-07) * fVar26 - 0.0013888378) * fVar26 +
               0.041666638) * fVar26 - 0.5) * fVar26 + 1.0) * fVar44;
    fVar26 = fVar47 * fVar34;
  }
  fVar35 = DAT_1464aa7a0 * local_520 - fVar26 * DAT_1464aa798._4_4_;
  fVar35 = fVar35 + fVar35;
  fVar34 = (float)DAT_1464aa798 * fVar26 - DAT_1464aa7a0 * fVar46;
  fVar47 = fVar46 * DAT_1464aa798._4_4_ - (float)DAT_1464aa798 * local_520;
  fVar34 = fVar34 + fVar34;
  fVar47 = fVar47 + fVar47;
  fVar33 = (fVar47 * local_520 - fVar34 * fVar26) + fVar35 * fVar44 + (float)DAT_1464aa798;
  local_3a8 = CONCAT44(fVar41,fVar40);
  uStack_3a0 = CONCAT44(fVar42,fVar36);
  fVar45 = (fVar34 * fVar46 - fVar35 * local_520) + fVar47 * fVar44 + DAT_1464aa7a0;
  fVar47 = (fVar35 * fVar26 - fVar47 * fVar46) + fVar34 * fVar44 + DAT_1464aa798._4_4_;
  fVar35 = fVar45 * fVar40 - fVar47 * fVar41;
  fVar34 = fVar33 * fVar41 - fVar45 * fVar36;
  fVar31 = fVar47 * fVar36 - fVar33 * fVar40;
  fVar32 = fVar42 * 0.0 - fVar42 * 0.0;
  fVar35 = fVar35 + fVar35;
  fVar34 = fVar34 + fVar34;
  fVar31 = fVar31 + fVar31;
  fVar32 = fVar32 + fVar32;
  auVar29._0_4_ = fVar42 * fVar35 + fVar33;
  auVar29._4_4_ = fVar42 * fVar34 + fVar47;
  auVar29._8_4_ = fVar42 * fVar31 + fVar45;
  auVar29._12_4_ = fVar42 * fVar32 + 0.0;
  local_3e8 = (fVar31 * fVar40 - fVar34 * fVar41) + auVar29._0_4_;
  fStack_3e4 = (fVar35 * fVar41 - fVar31 * fVar36) + auVar29._4_4_;
  local_3e0 = (fVar34 * fVar36 - fVar35 * fVar40) + auVar29._8_4_;
  fStack_1ac = (fVar32 * fVar42 - fVar32 * fVar42) + auVar29._12_4_;
  auVar10._4_4_ = fStack_334;
  auVar10._0_4_ = local_338;
  auVar10._8_4_ = fStack_330;
  auVar10._12_4_ = fStack_32c;
  iVar23 = *(int *)(param_1 + 0x160);
  local_4d8 = (longlong)iVar23;
  auVar28._4_4_ = -(uint)(fRam0000000146b2ec44 < (float)((uint)fStack_334 & uRam0000000146b2ec54));
  auVar28._0_4_ = -(uint)(_DAT_146b2ec40 < (float)((uint)local_338 & _DAT_146b2ec50));
  auVar28._8_4_ = -(uint)(fRam0000000146b2ec48 < (float)((uint)fStack_330 & uRam0000000146b2ec58));
  auVar28._12_4_ = -(uint)(fRam0000000146b2ec4c < (float)((uint)fStack_32c & uRam0000000146b2ec5c));
  iVar12 = movmskps(iVar12,auVar28);
  if (iVar12 == 0) {
    local_2a8 = _DAT_1468b5b80;
    uStack_2a0 = uRam00000001468b5b88;
    local_2b8 = _DAT_1468b5b90;
    uStack_2b0 = uRam00000001468b5b98;
    local_308 = _DAT_1468b5b70;
    fStack_304 = fRam00000001468b5b74;
    fStack_300 = fRam00000001468b5b78;
    fStack_2fc = fRam00000001468b5b7c;
  }
  else {
    local_308 = fVar36 * _DAT_146b2ec30;
    fStack_304 = fVar40 * fRam0000000146b2ec34;
    fStack_300 = fVar41 * fRam0000000146b2ec38;
    fStack_2fc = fVar42 * fRam0000000146b2ec3c;
    auVar38 = rcpps(auVar29,auVar10);
    fVar47 = auVar38._0_4_;
    fVar35 = auVar38._4_4_;
    fVar34 = auVar38._8_4_;
    fVar31 = auVar38._12_4_;
    fVar47 = (fVar47 + fVar47) - fVar47 * fVar47 * local_338;
    fVar35 = (fVar35 + fVar35) - fVar35 * fVar35 * fStack_334;
    fVar34 = (fVar34 + fVar34) - fVar34 * fVar34 * fStack_330;
    fVar31 = (fVar31 + fVar31) - fVar31 * fVar31 * fStack_32c;
    fVar47 = (fVar47 + fVar47) - fVar47 * fVar47 * local_338;
    fVar35 = (fVar35 + fVar35) - fVar35 * fVar35 * fStack_334;
    fVar34 = (fVar34 + fVar34) - fVar34 * fVar34 * fStack_330;
    fVar31 = (fVar31 + fVar31) - fVar31 * fVar31 * fStack_32c;
    fVar47 = (float)((-(uint)((float)((uint)local_338 & _DAT_146b2ec50) <= _DAT_146b2ec40) &
                      (uint)fVar47 ^ (uint)fVar47) & _DAT_146b2ebe0);
    fVar35 = (float)((-(uint)((float)((uint)fStack_334 & uRam0000000146b2ec54) <=
                             fRam0000000146b2ec44) & (uint)fVar35 ^ (uint)fVar35) &
                    uRam0000000146b2ebe4);
    fVar34 = (float)((-(uint)((float)((uint)fStack_330 & uRam0000000146b2ec58) <=
                             fRam0000000146b2ec48) & (uint)fVar34 ^ (uint)fVar34) &
                    uRam0000000146b2ebe8);
    fVar31 = (float)((-(uint)((float)((uint)fStack_32c & uRam0000000146b2ec5c) <=
                             fRam0000000146b2ec4c) & (uint)fVar31 ^ (uint)fVar31) &
                    uRam0000000146b2ebec);
    fVar32 = (float)local_328 * fVar47;
    fVar33 = local_328._4_4_ * fVar35;
    fVar45 = (float)uStack_320 * fVar34;
    fVar43 = uStack_320._4_4_ * fVar31;
    local_2b8 = CONCAT44(fVar35,fVar47);
    uStack_2b0 = CONCAT44(fVar31,fVar34);
    fVar47 = fVar45 * fStack_304 - fVar33 * fStack_300;
    fVar35 = fVar32 * fStack_300 - fVar45 * local_308;
    fVar34 = fVar33 * local_308 - fVar32 * fStack_304;
    fVar31 = fVar43 * fStack_2fc - fVar43 * fStack_2fc;
    fVar47 = fVar47 + fVar47;
    fVar35 = fVar35 + fVar35;
    fVar34 = fVar34 + fVar34;
    fVar31 = fVar31 + fVar31;
    local_2a8 = CONCAT44((uint)(0.0 - ((fVar47 * fStack_300 - fVar34 * local_308) +
                                      fStack_2fc * fVar35 + fVar33)) & uRam0000000146b2ebe4,
                         (uint)(0.0 - ((fVar34 * fStack_304 - fVar35 * fStack_300) +
                                      fStack_2fc * fVar47 + fVar32)) & _DAT_146b2ebe0);
    uStack_2a0 = CONCAT44((uint)(0.0 - ((fVar31 * fStack_2fc - fVar31 * fStack_2fc) +
                                       fStack_2fc * fVar31 + fVar43)) & uRam0000000146b2ebec,
                          (uint)(0.0 - ((fVar35 * local_308 - fVar47 * fStack_304) +
                                       fStack_2fc * fVar34 + fVar45)) & uRam0000000146b2ebe8);
  }
  local_4f8 = 0.0;
  local_4fc = 0.0;
  local_518 = fVar46;
  local_3d8 = fStack_3e4;
  fStack_3d4 = fStack_3e4;
  fStack_3d0 = fStack_3e4;
  fStack_3cc = fStack_3e4;
  local_348 = fVar41;
  fStack_344 = fVar36;
  fStack_340 = fVar40;
  fStack_33c = fVar42;
  local_2d8 = fVar42;
  fStack_2d4 = fVar42;
  fStack_2d0 = fVar42;
  fStack_2cc = fVar42;
  local_288 = local_3e0;
  fStack_284 = local_3e0;
  fStack_280 = local_3e0;
  fStack_27c = local_3e0;
  local_1b8 = local_3e8;
  fStack_1b4 = fStack_3e4;
  fStack_1b0 = local_3e0;
  if ((0 < iVar23) && (*(char *)(param_1 + 0x1b7) != '\0')) {
    local_4c8 = *(undefined8 *)(param_1 + 0x858);
    local_318 = *(undefined8 *)(param_1 + 0x864);
    local_4c0 = *(float *)(param_1 + 0x860);
    local_310 = *(undefined4 *)(param_1 + 0x86c);
    local_51c = 0.0;
    local_30c = (float)((ulonglong)local_4c8 >> 0x20) * *(float *)(param_1 + 0x868) +
                (float)local_4c8 * *(float *)(param_1 + 0x864) +
                local_4c0 * *(float *)(param_1 + 0x86c);
    if (0 < iVar23) {
      local_500 = 1;
      uVar16 = uVar17;
      uVar20 = uVar17;
      uVar25 = uVar17;
      local_358 = local_4d8;
      local_1e8 = fStack_300;
      fStack_1e4 = local_308;
      fStack_1e0 = fStack_304;
      fStack_1dc = fStack_2fc;
      local_1d8 = fStack_304;
      fStack_1d4 = fStack_300;
      fStack_1d0 = local_308;
      fStack_1cc = fStack_2fc;
      local_1c8 = fStack_2fc;
      fStack_1c4 = fStack_2fc;
      fStack_1c0 = fStack_2fc;
      fStack_1bc = fStack_2fc;
      do {
        uVar21 = local_500;
        fVar47 = (float)uVar20;
        lVar4 = *(longlong *)(param_1 + 0x158);
        uVar3 = *(undefined8 *)(uVar16 + 200 + lVar4);
        fVar42 = *(float *)(uVar16 + 0xd0 + lVar4);
        fVar34 = (float)uVar3 * local_338;
        fVar31 = (float)((ulonglong)uVar3 >> 0x20) * fStack_334;
        fVar30 = fVar42 * fStack_330 * fVar40 - fVar31 * local_348;
        fVar35 = fVar34 * fVar41 - fVar42 * fStack_330 * fStack_344;
        fVar36 = fVar31 * fVar36 - fVar34 * fStack_340;
        fVar30 = fVar30 + fVar30;
        fVar35 = fVar35 + fVar35;
        fVar36 = fVar36 + fVar36;
        fVar34 = ((fVar36 * fVar40 - fVar35 * local_348) + local_2d8 * fVar30 + fVar34 +
                 (float)local_328) * (float)local_2b8;
        fVar35 = ((fVar30 * fVar41 - fVar36 * fStack_344) + fStack_2d4 * fVar35 + fVar31 +
                 local_328._4_4_) * local_2b8._4_4_;
        fVar31 = (float)uStack_180 * (float)uStack_2b0;
        fVar36 = fVar31 * local_1d8 - fVar35 * local_1e8;
        fVar40 = fVar34 * fStack_1d4 - fVar31 * fStack_1e4;
        fVar41 = fVar35 * fStack_1d0 - fVar34 * fStack_1e0;
        fVar36 = fVar36 + fVar36;
        fVar40 = fVar40 + fVar40;
        fVar41 = fVar41 + fVar41;
        fVar30 = (fVar41 * local_1d8 - fVar40 * local_1e8) + fVar36 * local_1c8 + fVar34 +
                 (float)local_2a8;
        fVar35 = (fVar36 * fStack_1d4 - fVar41 * fStack_1e4) + fVar40 * fStack_1c4 + fVar35 +
                 local_2a8._4_4_;
        fVar36 = (fVar40 * fStack_1d0 - fVar36 * fStack_1e0) + fVar41 * fStack_1c0 + fVar31 +
                 (float)uStack_2a0;
        if (2 < local_4d8) {
          fVar34 = fVar36 * local_520 - fVar26 * fVar35;
          fVar34 = fVar34 + fVar34;
          fVar41 = fVar30 * fVar26 - fVar46 * fVar36;
          fVar40 = fVar46 * fVar35 - fVar30 * local_520;
          fVar41 = fVar41 + fVar41;
          fVar40 = fVar40 + fVar40;
          fVar30 = (local_520 * fVar40 - fVar26 * fVar41) + fVar44 * fVar34 + fVar30;
          fVar35 = (fVar26 * fVar34 - fVar46 * fVar40) + fVar44 * fVar41 + fVar35;
          fVar36 = (fVar46 * fVar41 - local_520 * fVar34) + fVar44 * fVar40 + fVar36;
        }
        local_414 = 0xffffffff;
        fVar30 = fVar30 * local_338;
        fVar35 = fVar35 * fStack_334;
        fVar36 = fVar36 * fStack_330;
        local_410 = 0;
        local_40c = 0xffffffff;
        local_408 = 0;
        local_404 = 0xffffffff;
        local_400 = 0;
        local_3f8 = 0;
        local_3f0 = local_3f0 & 0xffffffff00000000;
        fVar34 = fVar36 * (float)local_3a8 - fVar35 * local_348;
        fVar31 = fVar30 * local_3a8._4_4_ - fVar36 * fStack_344;
        fVar32 = fVar35 * (float)uStack_3a0 - fVar30 * fStack_340;
        fVar34 = fVar34 + fVar34;
        fVar31 = fVar31 + fVar31;
        fVar32 = fVar32 + fVar32;
        fVar40 = (fVar32 * (float)local_3a8 - fVar31 * local_348) + local_2d8 * fVar34 + fVar30 +
                 (float)local_328;
        fVar41 = (fVar34 * local_3a8._4_4_ - fVar32 * fStack_344) + fStack_2d4 * fVar31 + fVar35 +
                 local_328._4_4_;
        fVar36 = (fVar31 * (float)uStack_3a0 - fVar34 * fStack_340) + fStack_2d0 * fVar32 + fVar36 +
                 (float)uStack_320;
        local_510 = fVar40;
        fStack_50c = fVar41;
        local_508 = fVar36;
        local_2f0 = fVar42;
        _guard_xfg_dispatch_icall_nop(local_478,0,0x90);
        local_46c = 1.0;
        if (((int)fVar47 < 0) || (*(int *)(param_1 + 0x1d8) <= (int)fVar47)) {
LAB_142c5a49e:
          lVar19 = param_1 + 0x1e0 + (ulonglong)*(uint *)(param_1 + 0x7c0) * 0x2f0;
          lVar24 = *(longlong *)(lVar19 + 0x2e0);
          if (lVar24 == 0) {
            lVar24 = lVar19;
          }
          local_498 = *(undefined8 *)(lVar24 + 8 + uVar25);
          local_490 = *(float *)(lVar24 + 0x10 + uVar25);
          local_48c = *(undefined8 *)(lVar24 + 0x14 + uVar25);
          local_484 = *(undefined4 *)(lVar24 + 0x1c + uVar25);
          local_480 = *(float *)(lVar24 + 0x20 + uVar25);
          FUN_140729f20(local_478,lVar24 + 0x28 + uVar25);
        }
        else {
          lVar24 = *(longlong *)(param_1 + 0x1d0);
          if (*(longlong *)(param_1 + 0x1d0) == 0) {
            lVar24 = param_1 + 0x1c0;
          }
          fVar30 = fVar47;
          if ((int)fVar47 < 0) {
            fVar30 = (float)((int)fVar47 + 0x1f);
          }
          if ((*(uint *)(lVar24 + (longlong)((int)fVar30 >> 5) * 4) & uVar21) == 0)
          goto LAB_142c5a49e;
          fVar30 = *(float *)(param_1 + 0x7c8);
          fVar47 = *(float *)(param_1 + 0x7cc);
          local_398 = fVar30 * local_1b8 + fVar40;
          fStack_394 = fVar30 * local_3d8 + fVar41;
          local_390 = fVar30 * local_288 + fVar36;
          local_4b0 = fVar40 - fVar47 * local_1b8;
          local_4ac = fVar41 - fVar47 * local_3d8;
          local_4a8 = fVar36 - fVar47 * local_288;
          if (local_528 == '\0') {
            FUN_142c4f4b0(local_478,&local_398,&local_4b0,&local_318);
          }
          else {
            local_2e8 = CONCAT44(fStack_394,local_398);
            local_538 = local_1a8;
            local_540 = local_168;
            local_548 = local_368;
            local_2e0 = local_390;
            FUN_142c4f300(local_478,&local_2e8,&local_4b0,local_360);
            fVar30 = *(float *)(param_1 + 0x7c8);
            fVar40 = local_510;
            fVar41 = fStack_50c;
            fVar36 = local_508;
          }
          bVar18 = local_478[0];
          if ((local_478[0] & 1) == 0) {
            local_498 = CONCAT44(fStack_3e4,local_3e8);
            local_490 = local_3e0;
            if (*(int *)(uVar16 + 0x68 + lVar4) < 1) {
              puVar14 = &local_298;
              local_290 = local_508;
              local_298 = CONCAT44(fVar41,fVar40);
              local_510 = fVar40;
              fStack_50c = fVar41;
            }
            else {
              puVar14 = &local_4c8;
              pfVar2 = (float *)(*(longlong *)(uVar16 + 0x60 + lVar4) + -0x20 +
                                (longlong)*(int *)(uVar16 + 0x68 + lVar4) * 0x30);
              fVar31 = *pfVar2 * local_338;
              fVar32 = pfVar2[1] * fStack_334;
              fVar33 = pfVar2[2] * fStack_330;
              fVar47 = fVar33 * (float)local_3a8 - fVar32 * local_348;
              fVar35 = fVar31 * local_3a8._4_4_ - fVar33 * fStack_344;
              fVar34 = fVar32 * (float)uStack_3a0 - fVar31 * fStack_340;
              fVar47 = fVar47 + fVar47;
              fVar35 = fVar35 + fVar35;
              fVar34 = fVar34 + fVar34;
              local_4c0 = (fVar35 * (float)uStack_3a0 - fVar47 * fStack_340) +
                          fStack_2d0 * fVar34 + fVar33 + (float)uStack_320;
              local_4c8 = CONCAT44((fVar47 * local_3a8._4_4_ - fVar34 * fStack_344) +
                                   fStack_2d4 * fVar35 + fVar32 + local_328._4_4_,
                                   (fVar34 * (float)local_3a8 - fVar35 * local_348) +
                                   local_2d8 * fVar47 + fVar31 + (float)local_328);
            }
            uVar3 = *puVar14;
            local_380 = *(float *)(puVar14 + 1);
            local_388 = uVar3;
            if (*(char *)(param_1 + 0x1b4) != '\0') {
              local_388._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
              fVar41 = fVar41 - local_388._4_4_;
              local_388._0_4_ = (float)uVar3;
              fVar40 = fVar40 - (float)local_388;
              if (0.01 < SQRT(fVar41 * fVar41 + fVar40 * fVar40 +
                              (fVar36 - local_380) * (fVar36 - local_380))) {
                _guard_xfg_dispatch_icall_nop(local_278,0,0x90);
                local_26c = 1.0;
                if (local_528 == '\0') {
                  FUN_142c4f4b0(local_278,&local_388,&local_510,&local_318);
                }
                else {
                  local_2c0 = *(undefined4 *)(puVar14 + 1);
                  local_2c8 = *puVar14;
                  local_538 = local_1a8;
                  local_540 = local_168;
                  local_548 = local_368;
                  FUN_142c4f300(local_278,&local_2c8,&local_510,local_360);
                  fVar30 = *(float *)(param_1 + 0x7c8);
                  bVar18 = local_478[0];
                }
                if ((local_278[0] & 1) != 0) {
                  local_478[0] = bVar18 ^ (local_278[0] ^ bVar18) & 3;
                  local_484 = local_45c;
                  local_474 = local_274;
                  local_48c = local_464;
                  local_470 = local_470 ^ (local_470 ^ local_270) & 1;
                  local_45c = local_25c;
                  local_450 = local_250;
                  local_438 = local_238;
                  local_418 = local_218;
                  local_480 = (local_46c - 1.0) * fVar30;
                  local_414 = local_214;
                  local_410 = local_210;
                  local_46c = local_26c;
                  local_40c = local_20c;
                  local_464 = local_264;
                  local_408 = local_208;
                  local_468 = local_268;
                  local_458 = local_258;
                  local_404 = local_204;
                  local_400 = local_200;
                  local_44c = local_24c;
                  uStack_448 = local_248;
                  local_3f8 = local_1f8;
                  local_444 = local_244;
                  local_440 = local_240;
                  local_3f0 = local_1f0;
                  local_41c = local_21c;
                  local_434 = local_234;
                  local_42c = local_22c;
                  local_428 = local_228;
                  local_420 = local_220;
                  bVar18 = local_478[0];
                }
              }
            }
            uVar27 = local_420;
            uVar11 = local_428;
            uVar3 = local_434;
            uVar21 = local_500;
            fVar47 = local_51c;
            local_518 = local_42c;
            local_434 = uVar3;
            local_428 = uVar11;
            local_420 = uVar27;
            if ((bVar18 & 1) == 0) {
              local_480 = *(float *)(param_1 + 0x7cc);
              local_48c = local_428;
              local_484 = local_420;
              _guard_xfg_dispatch_icall_nop(local_478,0,0x90);
              local_42c = local_518;
              local_46c = 1.0;
              uVar21 = local_500;
              fVar47 = local_51c;
              local_434 = uVar3;
              local_428 = uVar11;
              local_420 = uVar27;
            }
          }
          else {
            local_480 = local_468 - fVar30;
            local_484 = local_45c;
            local_48c = local_464;
            fVar47 = local_51c;
            if (local_3c8 <= local_444) {
              local_498 = CONCAT44(uStack_448,local_44c);
              local_490 = local_444;
            }
            else {
              local_498 = CONCAT44(fStack_3e4,local_3e8);
              local_490 = local_3e0;
            }
          }
        }
        lVar19 = param_1 + 0x1e0 + ((ulonglong)*(uint *)(param_1 + 0x7c0) ^ 1) * 0x2f0;
        lVar24 = *(longlong *)(lVar19 + 0x2e0);
        if (lVar24 == 0) {
          lVar24 = lVar19;
        }
        *(undefined8 *)(lVar24 + 8 + uVar25) = local_498;
        *(float *)(lVar24 + 0x10 + uVar25) = local_490;
        *(undefined8 *)(lVar24 + 0x14 + uVar25) = local_48c;
        *(undefined4 *)(lVar24 + 0x1c + uVar25) = local_484;
        *(float *)(lVar24 + 0x20 + uVar25) = local_480;
        FUN_140729f20(lVar24 + 0x28 + uVar25);
        fVar36 = local_524;
        if ((local_478[0] & 2) == 0) {
          if ((local_478[0] & 1) == 0) {
            local_498 = *(undefined8 *)(param_1 + 0x870);
            local_490 = *(float *)(param_1 + 0x878);
          }
        }
        else {
          local_498 = CONCAT44(DAT_1464aa798._4_4_,(float)DAT_1464aa798);
          local_490 = DAT_1464aa7a0;
          local_480 = *(float *)(uVar16 + 0xc4 + lVar4);
        }
        if (local_4f8 < local_480) {
          local_4f8 = local_480;
        }
        local_4fc = local_4fc + local_480;
        fVar40 = (fVar42 - *(float *)(uVar16 + 0xd8 + lVar4)) /
                 (*(float *)(param_1 + 0x7cc) * 0.5 + *(float *)(param_1 + 0x7c8));
        if (0.0 <= fVar40) {
          if (1.0 <= fVar40) {
            fVar40 = 1.0;
          }
        }
        else {
          fVar40 = 0.0;
        }
        fVar40 = 1.0 - fVar40;
        fVar41 = local_490 * local_1d8 - local_498._4_4_ * local_1e8;
        fVar42 = (float)local_498 * fStack_1d4 - local_490 * fStack_1e4;
        fVar30 = local_498._4_4_ * fStack_1d0 - (float)local_498 * fStack_1e0;
        fVar41 = fVar41 + fVar41;
        fVar42 = fVar42 + fVar42;
        fVar30 = fVar30 + fVar30;
        local_378 = (((fVar30 * local_1d8 - fVar42 * local_1e8) +
                     fVar41 * local_1c8 + (float)local_498) - (float)DAT_1464aa798) * fVar40 +
                    (float)DAT_1464aa798;
        fStack_374 = (((fVar41 * fStack_1d4 - fVar30 * fStack_1e4) +
                      fVar42 * fStack_1c4 + local_498._4_4_) - DAT_1464aa798._4_4_) * fVar40 +
                     DAT_1464aa798._4_4_;
        fVar40 = (((fVar42 * fStack_1d0 - fVar41 * fStack_1e0) + fVar30 * fStack_1c0 + local_490) -
                 DAT_1464aa7a0) * fVar40 + DAT_1464aa7a0;
        if (*(char *)(param_1 + 0x1b4) == '\0') {
          local_480 = 0.0;
        }
        else {
          local_480 = local_480 * local_4f4;
        }
        local_370 = fVar40;
        if (local_527[0] == '\0') {
          uVar27 = FMath::FInterpConstantTo();
          local_4e8 = *(undefined8 *)(uVar16 + 0xb8 + lVar4);
          local_4e0 = *(float *)(uVar16 + 0xc0 + lVar4);
          *(undefined4 *)(uVar16 + 0xc4 + lVar4) = uVar27;
          local_548 = (longlong *)CONCAT44(local_548._4_4_,local_3c4);
          puVar14 = (undefined8 *)FMath::VInterpConstantTo(local_178,&local_4e8,&local_378,fVar36);
          *(undefined8 *)(uVar16 + 0xb8 + lVar4) = *puVar14;
          fVar40 = *(float *)(puVar14 + 1);
        }
        else {
          *(float *)(uVar16 + 0xc4 + lVar4) = local_480;
          *(ulonglong *)(uVar16 + 0xb8 + lVar4) = CONCAT44(fStack_374,local_378);
        }
        *(float *)(uVar16 + 0xc0 + lVar4) = fVar40;
        fVar36 = *(float *)(uVar16 + 0xbc + lVar4);
        fVar40 = *(float *)(uVar16 + 0xb8 + lVar4);
        fVar41 = *(float *)(uVar16 + 0xc0 + lVar4);
        fVar42 = fVar40 * fVar40 + fVar36 * fVar36 + fVar41 * fVar41;
        if (1e-08 < fVar42) {
          auVar39._8_8_ = 0;
          auVar39._0_8_ = CONCAT44(0,fVar42);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = CONCAT44(0,fVar42);
          auVar38 = rsqrtss(auVar39,auVar6);
          fVar30 = auVar38._0_4_;
          fVar30 = fVar30 + fVar30 * (0.5 - fVar42 * 0.5 * fVar30 * fVar30);
          fVar30 = fVar30 + fVar30 * (0.5 - fVar42 * 0.5 * fVar30 * fVar30);
          *(float *)(uVar16 + 0xb8 + lVar4) = fVar30 * fVar40;
          *(float *)(uVar16 + 0xbc + lVar4) = fVar30 * fVar36;
          *(float *)(uVar16 + 0xc0 + lVar4) = fVar30 * fVar41;
        }
        local_51c = (float)((int)fVar47 + 1);
        uVar20 = (ulonglong)(uint)local_51c;
        uVar25 = uVar25 + 0xb8;
        auVar7._4_4_ = fStack_50c;
        auVar7._0_4_ = local_510;
        auVar7._8_4_ = local_508;
        local_500 = uVar21 << 1 | (uint)((int)uVar21 < 0);
        auVar7._12_4_ = 0;
        *(undefined1 (*) [16])(uVar16 + 0x20 + lVar4) = auVar7;
        uVar16 = uVar16 + 0xe0;
        local_358 = local_358 + -1;
        fVar40 = (float)local_3a8;
        fVar41 = local_3a8._4_4_;
        fVar36 = (float)uStack_3a0;
      } while (local_358 != 0);
      iVar23 = (int)local_4d8;
      local_358 = 0;
      fVar30 = local_4b8;
      iVar22 = local_3c0;
      cVar15 = local_527[0];
    }
  }
  fVar40 = local_1b8;
  fVar36 = fStack_330;
  fVar26 = fStack_334;
  fVar44 = local_338;
  lVar4 = local_4d8;
  fVar46 = *(float *)(param_1 + 0x7dc);
  if (0.0 < fVar46) {
    fVar46 = (local_3bc - (*(float *)(param_1 + 0x7d8) - fVar46)) * (0.5 / fVar46);
    if (0.0 <= fVar46) {
      if (1.0 <= fVar46) {
        fVar46 = 1.0;
      }
    }
    else {
      fVar46 = 0.0;
    }
  }
  else {
    fVar46 = 0.0;
  }
  fVar41 = local_4f8;
  if (2 < iVar23) {
    fVar41 = local_4fc / (float)iVar23;
  }
  if (*(char *)(param_1 + 0x1b4) == '\0') {
    fVar41 = 0.0;
  }
  if (*(char *)(param_1 + 0x1b5) == '\0') {
    fVar46 = -((fVar30 - fVar41) * fVar46 + fVar41);
  }
  else {
    fVar46 = 0.0;
  }
  fVar41 = fVar46;
  if (cVar15 != '\0') goto LAB_142c5a9ff;
  if (*(char *)(param_1 + 0x1b4) == '\0') {
    if (*(float *)(param_1 + 0x7f0) < 0.0) {
      *(float *)(param_1 + 0x804) = *(float *)(param_1 + 0x7f0);
    }
  }
  else {
    if (iVar22 != local_3b8) goto LAB_142c5a9ff;
    if (fVar46 - *(float *)(param_1 + 0x800) < _DAT_1466abe20) {
      fVar41 = *(float *)(param_1 + 0x804) - local_524 * 980.0;
      *(float *)(param_1 + 0x804) = fVar41;
      fVar41 = fVar41 * local_524 + *(float *)(param_1 + 0x800);
      if (fVar41 <= fVar46) {
        fVar41 = fVar46;
      }
      goto LAB_142c5a9ff;
    }
    *(undefined4 *)(param_1 + 0x804) = 0;
  }
  fVar41 = (float)FMath::FInterpTo();
LAB_142c5a9ff:
  fVar35 = local_288;
  fVar30 = fStack_2fc;
  fVar47 = fStack_300;
  fVar42 = fStack_304;
  fVar46 = local_308;
  fVar41 = fVar41 * local_4f4;
  *(float *)(param_1 + 0x800) = fVar41;
  *(ulonglong *)(param_1 + 0x87c) =
       CONCAT44((fVar41 * local_3d8) / fVar26,(fVar41 * fVar40) / fVar44);
  local_4e0 = (fVar41 * local_288) / fVar36;
  *(float *)(param_1 + 0x884) = local_4e0;
  if (((0 < iVar23) && (*(char *)(param_1 + 0x1b7) != '\0')) && (lVar24 = lVar4, 0 < lVar4)) {
    do {
      lVar19 = *(longlong *)(param_1 + 0x158);
      puVar14 = (undefined8 *)(uVar17 + 0x20 + lVar19);
      local_3a8 = *puVar14;
      uStack_3a0 = puVar14[1];
      local_4e0 = *(float *)(uVar17 + 0xd0 + lVar19);
      if (*(char *)(param_1 + 0x1b5) == '\0') {
        fVar44 = (float)FMath::FInterpTo();
      }
      else {
        fVar44 = 1.0;
      }
      *(float *)(param_1 + 0x7d4) = fVar44;
      if ((lVar4 < 3) && (*(char *)(param_1 + 0x7e4) != '\0')) {
        fVar26 = *(float *)(uVar17 + 0xc4 + lVar19);
        fVar36 = *(float *)(param_1 + 0x800);
        fVar41 = -fVar26;
        fVar44 = fVar36 - (fVar26 + fVar36) * fVar44;
        if ((fVar44 <= fVar41) && (fVar44 = fVar36 + *(float *)(param_1 + 0x7c8), fVar41 <= fVar44))
        {
          fVar44 = fVar41;
        }
      }
      else {
        fVar44 = -*(float *)(uVar17 + 0xc4 + lVar19);
      }
      fVar41 = (fVar44 * fVar40 + *(float *)(param_1 + 0x17c) + (float)local_3a8) * (float)local_2b8
      ;
      fVar34 = (fVar44 * local_3d8 + *(float *)(param_1 + 0x180) + local_3a8._4_4_) *
               local_2b8._4_4_;
      fVar31 = (fVar44 * fVar35 + *(float *)(param_1 + 0x184) + (float)uStack_3a0) *
               (float)uStack_2b0;
      fVar44 = fVar31 * fVar42 - fVar34 * fVar47;
      fVar26 = fVar41 * fVar47 - fVar31 * fVar46;
      fVar36 = fVar34 * fVar46 - fVar41 * fVar42;
      fVar44 = fVar44 + fVar44;
      fVar26 = fVar26 + fVar26;
      fVar36 = fVar36 + fVar36;
      *(undefined1 *)(uVar17 + 0xd4 + lVar19) = 1;
      auVar8._4_4_ = local_4e0 * *(float *)(uVar17 + 0xbc + lVar19) +
                     (fVar44 * fVar47 - fVar36 * fVar46) + fVar26 * fVar30 + fVar34 +
                     local_2a8._4_4_;
      auVar8._0_4_ = local_4e0 * *(float *)(uVar17 + 0xb8 + lVar19) +
                     (fVar36 * fVar42 - fVar26 * fVar47) + fVar44 * fVar30 + fVar41 +
                     (float)local_2a8;
      auVar8._8_4_ = local_4e0 * *(float *)(uVar17 + 0xc0 + lVar19) +
                     (fVar26 * fVar46 - fVar44 * fVar42) + fVar36 * fVar30 + fVar31 +
                     (float)uStack_2a0;
      auVar8._12_4_ = 0;
      *(undefined1 (*) [16])(uVar17 + 0x20 + lVar19) = auVar8;
      uVar17 = uVar17 + 0xe0;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  if (local_100 != 0) {
    FMemory::Free();
  }
  if (local_120 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c5ad20 FUN_142c5ad20 body=54 status=ok
// SIG undefined FUN_142c5ad20(void)

void FUN_142c5ad20(undefined8 param_1,longlong *param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_142c5ad60(param_1,*(undefined8 *)(*param_2 + 0xb8),(int)param_2[2]);
  return;
}



// FUNCTION 142c5ad60 FUN_142c5ad60 body=1387 status=ok
// SIG undefined FUN_142c5ad60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c5ad60(longlong param_1,longlong param_2,float param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar16;
  float fVar17;
  undefined1 in_XMM5 [16];
  undefined1 auVar14 [16];
  float fVar18;
  undefined1 auVar15 [16];
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
  float local_a8;
  undefined8 local_a4;
  undefined1 local_98 [144];
  
  fVar29 = fRam0000000146b2ec3c;
  fVar28 = fRam0000000146b2ec38;
  fVar27 = fRam0000000146b2ec34;
  fVar26 = _DAT_146b2ec30;
  auVar15 = *(undefined1 (*) [16])(param_2 + 0x230);
  fVar8 = auVar15._0_4_;
  fVar7 = auVar15._4_4_;
  fVar9 = auVar15._8_4_;
  auVar14 = rcpps(in_XMM5,auVar15);
  fVar23 = (float)((uint)(*(float *)(param_1 + 0x198) - *(float *)(param_2 + 0x220)) &
                  _DAT_146b2ebe0);
  fVar24 = (float)((uint)(*(float *)(param_1 + 0x19c) - *(float *)(param_2 + 0x224)) &
                  uRam0000000146b2ebe4);
  fVar25 = (float)((uint)(*(float *)(param_1 + 0x1a0) - *(float *)(param_2 + 0x228)) &
                  uRam0000000146b2ebe8);
  fVar19 = *(float *)(param_2 + 0x210) * _DAT_146b2ec30;
  fVar20 = *(float *)(param_2 + 0x214) * fRam0000000146b2ec34;
  fVar21 = *(float *)(param_2 + 0x218) * fRam0000000146b2ec38;
  fVar22 = *(float *)(param_2 + 0x21c) * fRam0000000146b2ec3c;
  fVar10 = fVar25 * fVar20 - fVar24 * fVar21;
  fVar11 = fVar23 * fVar21 - fVar25 * fVar19;
  fVar12 = fVar24 * fVar19 - fVar23 * fVar20;
  fVar13 = auVar14._0_4_;
  fVar16 = auVar14._4_4_;
  fVar17 = auVar14._8_4_;
  fVar18 = auVar14._12_4_;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  fVar12 = fVar12 + fVar12;
  fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar8;
  fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar7;
  fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar9;
  fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * auVar15._12_4_;
  bVar1 = (float)((uint)fVar9 & uRam0000000146b2ec58) <= fRam0000000146b2ec48;
  auVar14._0_4_ = (fVar13 + fVar13) - fVar13 * fVar13 * fVar8;
  auVar14._4_4_ = (fVar16 + fVar16) - fVar16 * fVar16 * fVar7;
  auVar14._8_4_ = (fVar17 + fVar17) - fVar17 * fVar17 * fVar9;
  auVar14._12_4_ = (fVar18 + fVar18) - fVar18 * fVar18 * auVar15._12_4_;
  *(ulonglong *)(param_1 + 0x240) =
       CONCAT44(((fVar10 * fVar21 - fVar12 * fVar19) + fVar22 * fVar11 + fVar24) *
                (float)(-(uint)((float)((uint)fVar7 & uRam0000000146b2ec54) <= fRam0000000146b2ec44)
                        & (uint)auVar14._4_4_ ^ (uint)auVar14._4_4_),
                ((fVar12 * fVar20 - fVar11 * fVar21) + fVar22 * fVar10 + fVar23) *
                (float)(-(uint)((float)((uint)fVar8 & _DAT_146b2ec50) <= _DAT_146b2ec40) &
                        (uint)auVar14._0_4_ ^ (uint)auVar14._0_4_));
  *(float *)(param_1 + 0x248) =
       ((fVar11 * fVar19 - fVar10 * fVar20) + fVar22 * fVar12 + fVar25) *
       (float)(-(uint)bVar1 & (uint)auVar14._8_4_ ^ (uint)auVar14._8_4_);
  fVar26 = fVar26 * *(float *)(param_2 + 0x210);
  fVar27 = fVar27 * *(float *)(param_2 + 0x214);
  fVar28 = fVar28 * *(float *)(param_2 + 0x218);
  fVar29 = fVar29 * *(float *)(param_2 + 0x21c);
  auVar15 = *(undefined1 (*) [16])(param_2 + 0x230);
  fVar8 = auVar15._0_4_;
  fVar7 = auVar15._4_4_;
  fVar9 = auVar15._8_4_;
  auVar15 = rcpps(auVar14,auVar15);
  fVar18 = (float)((uint)(*(float *)(param_1 + 0x1a4) - *(float *)(param_2 + 0x220)) &
                  _DAT_146b2ebe0);
  fVar19 = (float)((uint)(*(float *)(param_1 + 0x1a8) - *(float *)(param_2 + 0x224)) &
                  uRam0000000146b2ebe4);
  fVar20 = (float)((uint)(*(float *)(param_1 + 0x1ac) - *(float *)(param_2 + 0x228)) &
                  uRam0000000146b2ebe8);
  fVar10 = fVar20 * fVar27 - fVar19 * fVar28;
  fVar11 = fVar18 * fVar28 - fVar20 * fVar26;
  fVar12 = fVar19 * fVar26 - fVar18 * fVar27;
  fVar13 = auVar15._0_4_;
  fVar16 = auVar15._4_4_;
  fVar17 = auVar15._8_4_;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  fVar12 = fVar12 + fVar12;
  fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar8;
  fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar7;
  fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar9;
  fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar8;
  fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar7;
  fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar9;
  fVar9 = ((fVar11 * fVar26 - fVar10 * fVar27) + fVar29 * fVar12 + fVar20) *
          (float)(-(uint)((float)((uint)fVar9 & uRam0000000146b2ec58) <= fRam0000000146b2ec48) &
                  (uint)fVar17 ^ (uint)fVar17);
  local_a4 = CONCAT44(fVar9,(undefined4)local_a4);
  *(ulonglong *)(param_1 + 0x24c) =
       CONCAT44(((fVar10 * fVar28 - fVar12 * fVar26) + fVar29 * fVar11 + fVar19) *
                (float)(-(uint)((float)((uint)fVar7 & uRam0000000146b2ec54) <= fRam0000000146b2ec44)
                        & (uint)fVar16 ^ (uint)fVar16),
                ((fVar12 * fVar27 - fVar11 * fVar28) + fVar29 * fVar10 + fVar18) *
                (float)(-(uint)((float)((uint)fVar8 & _DAT_146b2ec50) <= _DAT_146b2ec40) &
                        (uint)fVar13 ^ (uint)fVar13));
  *(float *)(param_1 + 0x254) = fVar9;
  if (*(char *)(param_1 + 0x1b5) == '\0') {
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined4 *)(param_1 + 0x25c) = 0;
    uVar5 = _DAT_1464aa818;
    *(undefined8 *)(param_1 + 0x270) = _DAT_1464aa810;
    *(undefined8 *)(param_1 + 0x278) = uVar5;
    uVar5 = _DAT_1464aa818;
    *(undefined8 *)(param_1 + 0x280) = _DAT_1464aa810;
    *(undefined8 *)(param_1 + 0x288) = uVar5;
    return;
  }
  fVar7 = *(float *)(param_1 + 0x264) - param_3;
  fVar8 = *(float *)(param_1 + 0x260) - param_3;
  *(float *)(param_1 + 0x264) = fVar7;
  *(float *)(param_1 + 0x260) = fVar8;
  *(float *)(param_1 + 0x25c) = *(float *)(param_1 + 0x25c) - param_3;
  if (0.0 <= fVar7) goto LAB_142c5b163;
  iVar2 = rand();
  iVar3 = 4;
  if ((int)((float)iVar2 * 0.00015259255) < 5) {
    iVar3 = (int)((float)iVar2 * 0.00015259255);
  }
  iVar2 = rand();
  fVar8 = (float)iVar2 * 1.5259255e-05 + 0.5;
  if (iVar3 == 1) {
    local_a8 = *(float *)(param_1 + 0x1c4);
LAB_142c5b0f9:
    local_a8 = fVar8 * local_a8;
    local_a4 = 0;
LAB_142c5b106:
    puVar4 = (undefined8 *)FRotator::Quaternion(&local_a8,local_98);
    uVar5 = *puVar4;
    uVar6 = puVar4[1];
  }
  else {
    if (iVar3 == 2) {
      local_a8 = *(float *)(param_1 + 0x1b8);
      goto LAB_142c5b0f9;
    }
    if (iVar3 == 3) {
      local_a8 = 0.0;
      local_a4 = (ulonglong)(uint)(fVar8 * *(float *)(param_1 + 0x1c8));
      goto LAB_142c5b106;
    }
    uVar5 = _DAT_1464aa810;
    uVar6 = _DAT_1464aa818;
    if (iVar3 == 4) {
      local_a8 = 0.0;
      local_a4 = (ulonglong)(uint)(fVar8 * *(float *)(param_1 + 0x1bc));
      goto LAB_142c5b106;
    }
  }
  fVar7 = *(float *)(param_1 + 0x1fc);
  fVar9 = *(float *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x280) = uVar5;
  *(undefined8 *)(param_1 + 0x288) = uVar6;
  iVar3 = rand();
  fVar8 = *(float *)(param_1 + 0x260);
  *(float *)(param_1 + 0x264) = (float)iVar3 * 3.051851e-05 * (fVar7 - fVar9) + fVar9;
LAB_142c5b163:
  uVar5 = _DAT_1464aa818;
  if (fVar8 < 0.0) {
    *(undefined8 *)(param_1 + 0x270) = _DAT_1464aa810;
    *(undefined8 *)(param_1 + 0x278) = uVar5;
  }
  if (*(float *)(param_1 + 0x25c) <= 0.0 && *(float *)(param_1 + 0x25c) != 0.0) {
    fVar8 = *(float *)(param_1 + 500);
    fVar7 = *(float *)(param_1 + 0x1f0);
    iVar3 = rand();
    fVar9 = *(float *)(param_1 + 0x1e0);
    fVar26 = *(float *)(param_1 + 0x1d4);
    *(float *)(param_1 + 0x260) = (float)iVar3 * 3.051851e-05 * (fVar8 - fVar7) + fVar7;
    iVar3 = rand();
    fVar8 = *(float *)(param_1 + 0x1dc);
    fVar7 = *(float *)(param_1 + 0x1d0);
    iVar2 = rand();
    local_a4 = (ulonglong)(uint)((float)iVar3 * 3.051851e-05 * (fVar9 - fVar26) + fVar26);
    local_a8 = (float)iVar2 * 3.051851e-05 * (fVar8 - fVar7) + fVar7;
    puVar4 = (undefined8 *)FRotator::Quaternion(&local_a8,local_98);
    fVar8 = *(float *)(param_1 + 0x1ec);
    fVar7 = *(float *)(param_1 + 0x1e8);
    uVar5 = puVar4[1];
    *(undefined8 *)(param_1 + 0x270) = *puVar4;
    *(undefined8 *)(param_1 + 0x278) = uVar5;
    iVar3 = rand();
    *(float *)(param_1 + 0x264) = *(float *)(param_1 + 0x260);
    *(float *)(param_1 + 0x25c) =
         (float)iVar3 * 3.051851e-05 * (fVar8 - fVar7) + fVar7 + *(float *)(param_1 + 0x260);
    uVar5 = _DAT_1464aa818;
    *(undefined8 *)(param_1 + 0x280) = _DAT_1464aa810;
    *(undefined8 *)(param_1 + 0x288) = uVar5;
  }
  return;
}



// FUNCTION 142c5b2d0 FUN_142c5b2d0 body=47 status=ok
// SIG undefined FUN_142c5b2d0(void)

longlong FUN_142c5b2d0(void)

{
  if (DAT_146b2fb20 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_146b2fb20,&PTR_s__Script_GbxAnimRuntimeBase_145836430);
  }
  return DAT_146b2fb20;
}



// FUNCTION 142c5b300 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x8b0;
    *puVar1 = &PTR_FUN_1458360e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 142c5b340 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FScrollBoxStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2d0;
    *puVar1 = &PTR_FUN_145836200;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 142c5b380 FUN_142c5b380 body=53 status=ok
// SIG undefined FUN_142c5b380(void)

void FUN_142c5b380(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_145836318;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c5b3c0 FUN_142c5b3c0 body=134 status=ok
// SIG undefined FUN_142c5b3c0(void)

undefined8 * FUN_142c5b3c0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  FUN_142c48e90((longlong)param_1 + 0x24,0x42340000);
  FUN_142c48e90((longlong)param_1 + 0x2c,0x42340000);
  *(undefined8 *)((longlong)param_1 + 0x34) = DAT_1468b5da0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = DAT_1468b5da8;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xbf800000;
  *(undefined2 *)(param_1 + 9) = 4;
  return param_1;
}



// FUNCTION 142c5b450 FUN_142c5b450 body=686 status=ok
// SIG undefined FUN_142c5b450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142c5b450(undefined8 *param_1)

{
  FUN_141f82610();
  *(undefined4 *)(param_1 + 0x2e) = 0x3e800000;
  *param_1 = &PTR_FUN_145835fb0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x2f) = 0x43c80000;
  *(undefined4 *)(param_1 + 0x31) = 8;
  FUN_141f84110(param_1 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x3f800000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c4) = 0xffffffff;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  FUN_142c48df0(param_1 + 0xfb,0x42c80000,0x43480000);
  *(undefined4 *)(param_1 + 0xfc) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0x7e4) = 1;
  param_1[0xfd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xfe) = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x7f4) = 7;
  param_1[0xff] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x100) = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x804) = 0;
  *(undefined4 *)(param_1 + 0x101) = 7;
  *(undefined8 *)((longlong)param_1 + 0x80c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x814) = DAT_1468b5d98;
  param_1[0x103] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x104) = DAT_1468b5d98;
  param_1[0x105] = DAT_146b2ec08;
  *(undefined4 *)(param_1 + 0x106) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x834) = 0;
  *(undefined4 *)(param_1 + 0x107) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x108) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x844) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x109) = 0x40000000;
  FUN_142c48df0((longlong)param_1 + 0x84c,0x43480000,0x43c80000);
  *(undefined2 *)((longlong)param_1 + 0x854) = 1;
  *(undefined1 *)((longlong)param_1 + 0x856) = 0;
  param_1[0x10b] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x10c) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x864) = DAT_1464aa798;
  *(undefined4 *)((longlong)param_1 + 0x86c) = DAT_1464aa7a0;
  param_1[0x10e] = DAT_1464aa798;
  *(undefined4 *)(param_1 + 0x10f) = DAT_1464aa7a0;
  *(undefined8 *)((longlong)param_1 + 0x87c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x884) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x112) = DAT_1464aa810;
  *(undefined4 *)((longlong)param_1 + 0x894) = DAT_1464aa814;
  *(undefined4 *)(param_1 + 0x113) = DAT_1464aa818;
  *(undefined4 *)((longlong)param_1 + 0x89c) = DAT_1464aa81c;
  *(undefined4 *)(param_1 + 0x114) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x8a4) = 0x44160000;
  return param_1;
}



// FUNCTION 142c5b700 FUN_142c5b700 body=200 status=ok
// SIG undefined FUN_142c5b700(void)

void FUN_142c5b700(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = param_1[0x2b];
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-2] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x1c;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = param_1[0x2b];
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  if (param_1[0x29] != 0) {
    FMemory::Free();
  }
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142c5b7d0 FUN_142c5b7d0 body=227 status=ok
// SIG undefined FUN_142c5b7d0(void)

longlong * FUN_142c5b7d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    lVar1 = *param_2;
    iVar5 = (int)param_2[1];
    *(int *)(param_1 + 1) = iVar5;
    if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<FDungeonMarkerInfo,FDefaultAllocator>::ResizeForCopy(param_1,iVar5);
    if (iVar5 != 0) {
      puVar3 = (undefined4 *)(lVar1 + 0x1c);
      puVar4 = (undefined8 *)*param_1;
      do {
        uVar2 = *(undefined8 *)(puVar3 + -5);
        *puVar4 = *(undefined8 *)(puVar3 + -7);
        puVar4[1] = uVar2;
        puVar4[2] = *(undefined8 *)(puVar3 + -3);
        *(undefined4 *)(puVar4 + 3) = puVar3[-1];
        *(undefined4 *)((longlong)puVar4 + 0x1c) = *puVar3;
        *(undefined4 *)(puVar4 + 4) = puVar3[1];
        *(undefined8 *)((longlong)puVar4 + 0x24) = *(undefined8 *)(puVar3 + 2);
        *(undefined8 *)((longlong)puVar4 + 0x2c) = *(undefined8 *)(puVar3 + 4);
        *(undefined8 *)((longlong)puVar4 + 0x34) = *(undefined8 *)(puVar3 + 6);
        *(undefined4 *)((longlong)puVar4 + 0x3c) = puVar3[8];
        *(undefined1 *)(puVar4 + 8) = *(undefined1 *)(puVar3 + 9);
        *(undefined4 *)((longlong)puVar4 + 0x44) = puVar3[10];
        *(undefined1 *)(puVar4 + 9) = *(undefined1 *)(puVar3 + 0xb);
        *(undefined1 *)((longlong)puVar4 + 0x49) = *(undefined1 *)((longlong)puVar3 + 0x2d);
        iVar5 = iVar5 + -1;
        puVar3 = puVar3 + 0x14;
        puVar4 = puVar4 + 10;
      } while (iVar5 != 0);
    }
  }
  return param_1;
}



// FUNCTION 142c5b8c0 FUN_142c5b8c0 body=462 status=ok
// SIG undefined FUN_142c5b8c0(void)

longlong FUN_142c5b8c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  FUN_1412e72e0();
  plVar1 = (longlong *)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  if (plVar1 != (longlong *)(param_2 + 0x148)) {
    iVar10 = *(int *)(param_2 + 0x150);
    lVar11 = *(longlong *)(param_2 + 0x148);
    *(int *)(param_1 + 0x150) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x154) == 0)) {
      *(undefined4 *)(param_1 + 0x154) = 0;
    }
    else {
      TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(plVar1,iVar10);
      if (iVar10 != 0) {
        puVar6 = (undefined4 *)(lVar11 + 0x30);
        puVar7 = (undefined8 *)*plVar1;
        do {
          uVar5 = *(undefined8 *)(puVar6 + -10);
          *puVar7 = *(undefined8 *)(puVar6 + -0xc);
          puVar7[1] = uVar5;
          puVar7[2] = *(undefined8 *)(puVar6 + -8);
          uVar2 = puVar6[-5];
          uVar3 = puVar6[-4];
          uVar4 = puVar6[-3];
          *(undefined4 *)(puVar7 + 3) = puVar6[-6];
          *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar2;
          *(undefined4 *)(puVar7 + 4) = uVar3;
          *(undefined4 *)((longlong)puVar7 + 0x24) = uVar4;
          puVar7[5] = *(undefined8 *)(puVar6 + -2);
          *(undefined4 *)(puVar7 + 6) = *puVar6;
          *(undefined1 *)((longlong)puVar7 + 0x34) = *(undefined1 *)(puVar6 + 1);
          *(undefined1 *)((longlong)puVar7 + 0x35) = *(undefined1 *)((longlong)puVar6 + 5);
          *(undefined1 *)((longlong)puVar7 + 0x36) = *(undefined1 *)((longlong)puVar6 + 6);
          *(undefined4 *)(puVar7 + 7) = puVar6[2];
          *(undefined4 *)((longlong)puVar7 + 0x3c) = puVar6[3];
          *(undefined1 *)(puVar7 + 8) = *(undefined1 *)(puVar6 + 4);
          iVar10 = iVar10 + -1;
          puVar6 = puVar6 + 0x12;
          puVar7 = puVar7 + 9;
        } while (iVar10 != 0);
      }
    }
  }
  plVar1 = (longlong *)(param_1 + 0x158);
  if (plVar1 != (longlong *)(param_2 + 0x158)) {
    iVar10 = *(int *)(param_1 + 0x160);
    if (iVar10 != 0) {
      plVar8 = (longlong *)(*plVar1 + 0x60);
      do {
        if (plVar8[2] != 0) {
          FMemory::Free();
        }
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        if (plVar8[-2] != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 0x1c;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(param_2 + 0x160);
    lVar11 = *(longlong *)(param_2 + 0x158);
    *(int *)(param_1 + 0x160) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x164) == 0)) {
      *(undefined4 *)(param_1 + 0x164) = 0;
    }
    else {
      TArray<FAsyncPathFindingQuery,FDefaultAllocator>::ResizeForCopy(plVar1,iVar10);
      lVar9 = *plVar1;
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        FUN_141f81950(lVar9,lVar11);
        lVar9 = lVar9 + 0xe0;
        lVar11 = lVar11 + 0xe0;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  return param_1;
}



// FUNCTION 142c5ba90 FUN_142c5ba90 body=1668 status=ok
// SIG undefined FUN_142c5ba90(void)

longlong FUN_142c5ba90(longlong param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  void *_Dst;
  void *_Src;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  
  FUN_142c5b8c0();
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  pvVar1 = (void *)(param_1 + 0x1c0);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_2 + 0x174);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined8 *)(param_1 + 0x17c) = *(undefined8 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  uVar3 = *(undefined4 *)(param_2 + 0x194);
  uVar4 = *(undefined4 *)(param_2 + 0x198);
  uVar5 = *(undefined4 *)(param_2 + 0x19c);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
  *(undefined4 *)(param_1 + 0x194) = uVar3;
  *(undefined4 *)(param_1 + 0x198) = uVar4;
  *(undefined4 *)(param_1 + 0x19c) = uVar5;
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined1 *)(param_1 + 0x1a8) = *(undefined1 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined1 *)(param_1 + 0x1b4) = *(undefined1 *)(param_2 + 0x1b4);
  *(undefined1 *)(param_1 + 0x1b5) = *(undefined1 *)(param_2 + 0x1b5);
  *(undefined1 *)(param_1 + 0x1b6) = *(undefined1 *)(param_2 + 0x1b6);
  *(undefined1 *)(param_1 + 0x1b7) = *(undefined1 *)(param_2 + 0x1b7);
  *(undefined1 *)(param_1 + 0x1b8) = *(undefined1 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
  if (pvVar1 != (void *)(param_2 + 0x1c0)) {
    iVar7 = *(int *)(param_2 + 0x1d8) + 0x1f;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    uVar8 = iVar7 + (iVar7 >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)(param_1 + 0x1dc) != uVar8) {
      *(uint *)(param_1 + 0x1dc) = uVar8;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(pvVar1,0);
    }
    iVar7 = *(int *)(param_2 + 0x1d8);
    *(int *)(param_1 + 0x1d8) = iVar7;
    if (iVar7 != 0) {
      iVar7 = *(int *)(param_1 + 0x1dc) + 0x1f;
      _Src = *(void **)(param_2 + 0x1d0);
      if (*(void **)(param_2 + 0x1d0) == (void *)0x0) {
        _Src = (void *)(param_2 + 0x1c0);
      }
      _Dst = *(void **)(param_1 + 0x1d0);
      if (*(void **)(param_1 + 0x1d0) == (void *)0x0) {
        _Dst = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop
                (_Dst,_Src,(longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) << 2);
    }
  }
  lVar14 = param_1 - param_2;
  plVar10 = (longlong *)(param_2 + 0x4c0);
  lVar11 = 2;
  do {
    plVar15 = (longlong *)(lVar14 + -0x2e0 + (longlong)plVar10);
    if (plVar15 != plVar10 + -0x5c) {
      iVar7 = (int)plVar10[1];
      plVar13 = (longlong *)*plVar10;
      *(int *)(lVar14 + 8 + (longlong)plVar10) = iVar7;
      if ((iVar7 == 0) && (*(int *)(lVar14 + 0xc + (longlong)plVar10) == 0)) {
        *(undefined4 *)(lVar14 + 0xc + (longlong)plVar10) = 0;
      }
      else {
        FUN_142c5c770(plVar15,iVar7);
        if (plVar13 == (longlong *)0x0) {
          plVar13 = plVar10 + -0x5c;
        }
        plVar9 = *(longlong **)(lVar14 + (longlong)plVar10);
        if (*(longlong **)(lVar14 + (longlong)plVar10) == (longlong *)0x0) {
          plVar9 = plVar15;
        }
        if (iVar7 != 0) {
          lVar12 = (longlong)plVar13 - (longlong)plVar9;
          plVar15 = plVar9 + 0x13;
          do {
            lVar2 = *plVar13;
            plVar13 = plVar13 + 0x17;
            plVar15[-0x13] = lVar2;
            plVar15[-0x12] = *(longlong *)((longlong)plVar15 + lVar12 + -0x90);
            *(undefined4 *)(plVar15 + -0x11) = *(undefined4 *)((longlong)plVar15 + lVar12 + -0x88);
            *(undefined8 *)((longlong)plVar15 + -0x84) =
                 *(undefined8 *)((longlong)plVar15 + lVar12 + -0x84);
            *(undefined4 *)((longlong)plVar15 + -0x7c) =
                 *(undefined4 *)((longlong)plVar15 + lVar12 + -0x7c);
            *(undefined4 *)(plVar15 + -0xf) = *(undefined4 *)((longlong)plVar15 + lVar12 + -0x78);
            plVar9 = plVar15 + 0x17;
            *(byte *)(plVar15 + -0xe) =
                 *(byte *)(plVar15 + -0xe) ^
                 (*(byte *)(plVar15 + -0xe) ^ *(byte *)((longlong)plVar15 + lVar12 + -0x70)) & 1;
            *(byte *)(plVar15 + -0xe) =
                 *(byte *)(plVar15 + -0xe) ^
                 (*(byte *)(plVar15 + -0xe) ^ *(byte *)((longlong)plVar15 + lVar12 + -0x70)) & 2;
            *(undefined4 *)((longlong)plVar15 + -0x6c) =
                 *(undefined4 *)((longlong)plVar15 + lVar12 + -0x6c);
            *(uint *)(plVar15 + -0xd) =
                 *(uint *)(plVar15 + -0xd) ^
                 (*(uint *)((longlong)plVar15 + lVar12 + -0x68) ^ *(uint *)(plVar15 + -0xd)) & 1;
            *(undefined4 *)((longlong)plVar15 + -100) =
                 *(undefined4 *)((longlong)plVar15 + lVar12 + -100);
            *(undefined4 *)(plVar15 + -0xc) = *(undefined4 *)((longlong)plVar15 + lVar12 + -0x60);
            *(undefined8 *)((longlong)plVar15 + -0x5c) =
                 *(undefined8 *)((longlong)plVar15 + lVar12 + -0x5c);
            *(undefined4 *)((longlong)plVar15 + -0x54) =
                 *(undefined4 *)((longlong)plVar15 + lVar12 + -0x54);
            plVar15[-10] = *(longlong *)((longlong)plVar15 + lVar12 + -0x50);
            *(undefined4 *)(plVar15 + -9) = *(undefined4 *)((longlong)plVar15 + lVar12 + -0x48);
            *(undefined8 *)((longlong)plVar15 + -0x44) =
                 *(undefined8 *)((longlong)plVar15 + lVar12 + -0x44);
            *(undefined4 *)((longlong)plVar15 + -0x3c) =
                 *(undefined4 *)((longlong)plVar15 + lVar12 + -0x3c);
            plVar15[-7] = *(longlong *)((longlong)plVar15 + lVar12 + -0x38);
            *(undefined4 *)(plVar15 + -6) = *(undefined4 *)((longlong)plVar15 + lVar12 + -0x30);
            *(undefined8 *)((longlong)plVar15 + -0x2c) =
                 *(undefined8 *)(lVar12 + -0xe4 + (longlong)plVar9);
            *(undefined4 *)((longlong)plVar15 + -0x24) =
                 *(undefined4 *)(lVar12 + -0xdc + (longlong)plVar9);
            plVar15[-4] = *(longlong *)(lVar12 + -0xd8 + (longlong)plVar9);
            *(undefined4 *)(plVar15 + -3) = *(undefined4 *)(lVar12 + -0xd0 + (longlong)plVar9);
            *(undefined4 *)((longlong)plVar15 + -0x14) =
                 *(undefined4 *)(lVar12 + -0xcc + (longlong)plVar9);
            *(undefined4 *)(plVar15 + -2) = *(undefined4 *)(lVar12 + -200 + (longlong)plVar9);
            *(undefined4 *)((longlong)plVar15 + -0xc) =
                 *(undefined4 *)(lVar12 + -0xc4 + (longlong)plVar9);
            *(undefined4 *)(plVar15 + -1) = *(undefined4 *)(lVar12 + -0xc0 + (longlong)plVar9);
            *(undefined4 *)((longlong)plVar15 + -4) =
                 *(undefined4 *)(lVar12 + -0xbc + (longlong)plVar9);
            *(undefined4 *)plVar15 = *(undefined4 *)((longlong)plVar15 + lVar12);
            *(undefined4 *)((longlong)plVar15 + 4) =
                 *(undefined4 *)(lVar12 + -0xb4 + (longlong)plVar9);
            *(undefined4 *)(plVar15 + 1) = *(undefined4 *)(lVar12 + -0xb0 + (longlong)plVar9);
            plVar15[2] = *(longlong *)(lVar12 + -0xa8 + (longlong)plVar9);
            plVar15[3] = *(longlong *)(lVar12 + -0xa0 + (longlong)plVar9);
            iVar7 = iVar7 + -1;
            plVar15 = plVar9;
          } while (iVar7 != 0);
        }
      }
    }
    plVar10 = plVar10 + 0x5e;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  *(undefined4 *)(param_1 + 0x7c0) = *(undefined4 *)(param_2 + 0x7c0);
  *(undefined4 *)(param_1 + 0x7c4) = *(undefined4 *)(param_2 + 0x7c4);
  *(undefined4 *)(param_1 + 0x7c8) = *(undefined4 *)(param_2 + 0x7c8);
  *(undefined4 *)(param_1 + 0x7cc) = *(undefined4 *)(param_2 + 0x7cc);
  *(undefined4 *)(param_1 + 2000) = *(undefined4 *)(param_2 + 2000);
  *(undefined4 *)(param_1 + 0x7d4) = *(undefined4 *)(param_2 + 0x7d4);
  *(undefined8 *)(param_1 + 0x7d8) = *(undefined8 *)(param_2 + 0x7d8);
  *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)(param_2 + 0x7e0);
  *(undefined1 *)(param_1 + 0x7e4) = *(undefined1 *)(param_2 + 0x7e4);
  *(undefined8 *)(param_1 + 0x7e8) = *(undefined8 *)(param_2 + 0x7e8);
  *(undefined4 *)(param_1 + 0x7f0) = *(undefined4 *)(param_2 + 0x7f0);
  *(undefined4 *)(param_1 + 0x7f4) = *(undefined4 *)(param_2 + 0x7f4);
  *(undefined8 *)(param_1 + 0x7f8) = *(undefined8 *)(param_2 + 0x7f8);
  *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(param_2 + 0x800);
  *(undefined4 *)(param_1 + 0x804) = *(undefined4 *)(param_2 + 0x804);
  *(undefined4 *)(param_1 + 0x808) = *(undefined4 *)(param_2 + 0x808);
  *(undefined8 *)(param_1 + 0x80c) = *(undefined8 *)(param_2 + 0x80c);
  *(undefined4 *)(param_1 + 0x814) = *(undefined4 *)(param_2 + 0x814);
  *(undefined8 *)(param_1 + 0x818) = *(undefined8 *)(param_2 + 0x818);
  *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_2 + 0x820);
  uVar6 = *(undefined8 *)(param_2 + 0x830);
  *(undefined8 *)(param_1 + 0x828) = *(undefined8 *)(param_2 + 0x828);
  *(undefined8 *)(param_1 + 0x830) = uVar6;
  *(undefined8 *)(param_1 + 0x838) = *(undefined8 *)(param_2 + 0x838);
  *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(param_2 + 0x840);
  *(undefined4 *)(param_1 + 0x844) = *(undefined4 *)(param_2 + 0x844);
  *(undefined4 *)(param_1 + 0x848) = *(undefined4 *)(param_2 + 0x848);
  *(undefined8 *)(param_1 + 0x84c) = *(undefined8 *)(param_2 + 0x84c);
  *(undefined1 *)(param_1 + 0x854) = *(undefined1 *)(param_2 + 0x854);
  *(undefined1 *)(param_1 + 0x855) = *(undefined1 *)(param_2 + 0x855);
  *(undefined1 *)(param_1 + 0x856) = *(undefined1 *)(param_2 + 0x856);
  *(undefined8 *)(param_1 + 0x858) = *(undefined8 *)(param_2 + 0x858);
  *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_2 + 0x860);
  *(undefined8 *)(param_1 + 0x864) = *(undefined8 *)(param_2 + 0x864);
  *(undefined4 *)(param_1 + 0x86c) = *(undefined4 *)(param_2 + 0x86c);
  *(undefined8 *)(param_1 + 0x870) = *(undefined8 *)(param_2 + 0x870);
  *(undefined4 *)(param_1 + 0x878) = *(undefined4 *)(param_2 + 0x878);
  *(undefined8 *)(param_1 + 0x87c) = *(undefined8 *)(param_2 + 0x87c);
  *(undefined4 *)(param_1 + 0x884) = *(undefined4 *)(param_2 + 0x884);
  uVar6 = *(undefined8 *)(param_2 + 0x898);
  *(undefined8 *)(param_1 + 0x890) = *(undefined8 *)(param_2 + 0x890);
  *(undefined8 *)(param_1 + 0x898) = uVar6;
  *(undefined4 *)(param_1 + 0x8a0) = *(undefined4 *)(param_2 + 0x8a0);
  *(undefined4 *)(param_1 + 0x8a4) = *(undefined4 *)(param_2 + 0x8a4);
  return param_1;
}



// FUNCTION 142c5c120 FUN_142c5c120 body=860 status=ok
// SIG undefined FUN_142c5c120(void)

longlong FUN_142c5c120(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  FUN_1412e72e0();
  uVar6 = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = uVar6;
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  uVar3 = *(undefined4 *)(param_2 + 0x15c);
  uVar4 = *(undefined4 *)(param_2 + 0x160);
  uVar5 = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x15c) = uVar3;
  *(undefined4 *)(param_1 + 0x160) = uVar4;
  *(undefined4 *)(param_1 + 0x164) = uVar5;
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
  FUN_142c5b7d0(param_1 + 0x178,param_2 + 0x178);
  FUN_142c5b7d0(param_1 + 0x188,param_2 + 0x188);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a4) = *(undefined8 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined1 *)(param_1 + 0x1b4) = *(undefined1 *)(param_2 + 0x1b4);
  *(undefined1 *)(param_1 + 0x1b5) = *(undefined1 *)(param_2 + 0x1b5);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c4) = *(undefined8 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1dc) = *(undefined8 *)(param_2 + 0x1dc);
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_2 + 500);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  uVar6 = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x210) = uVar6;
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  *(undefined1 *)(param_1 + 0x220) = *(undefined1 *)(param_2 + 0x220);
  uVar6 = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x230) = uVar6;
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x238);
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x240);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined8 *)(param_1 + 0x24c) = *(undefined8 *)(param_2 + 0x24c);
  *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_2 + 0x254);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_2 + 0x264);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
  uVar6 = *(undefined8 *)(param_2 + 0x278);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x270);
  *(undefined8 *)(param_1 + 0x278) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x288);
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_2 + 0x280);
  *(undefined8 *)(param_1 + 0x288) = uVar6;
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_2 + 0x290);
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_2 + 0x298);
  *(undefined8 *)(param_1 + 0x29c) = *(undefined8 *)(param_2 + 0x29c);
  *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_2 + 0x2a4);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_2 + 0x2a8);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2b4) = *(undefined8 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_2 + 700);
  puVar1 = (undefined8 *)(param_1 + 0x2c0);
  if (puVar1 != (undefined8 *)(param_2 + 0x2c0)) {
    _Src = *(void **)(param_2 + 0x2c0);
    iVar2 = *(int *)(param_2 + 0x2c8);
    *(int *)(param_1 + 0x2c8) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x2cc) == 0)) {
      *(undefined4 *)(param_1 + 0x2cc) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
    }
  }
  return param_1;
}



// FUNCTION 142c5c480 FUN_142c5c480 body=144 status=ok
// SIG undefined FUN_142c5c480(void)

longlong FUN_142c5c480(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_1 + 0xaa0);
  lVar1 = 2;
  do {
    plVar2 = plVar2 + -0x5e;
    lVar1 = lVar1 + -1;
    if (*plVar2 != 0) {
      FMemory::Free();
    }
  } while (lVar1 != 0);
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  FUN_142c5b700(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8b0);
  }
  return param_1;
}



// FUNCTION 142c5c510 FUN_142c5c510 body=36 status=ok
// SIG undefined FUN_142c5c510(void)

void FUN_142c5c510(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x50);
  FUN_142c5b3c0(param_2);
  return;
}



// FUNCTION 142c5c540 FUN_142c5c540 body=38 status=ok
// SIG undefined FUN_142c5c540(void)

void FUN_142c5c540(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x8b0);
  FUN_142c5b450(param_2);
  return;
}



// FUNCTION 142c5c620 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FAnimSingleNodeInstanceProxy>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_142c5ba90(param_2 + param_3,param_3);
      param_3 = param_3 + 0x8b0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142c5c670 FUN_142c5c670 body=74 status=ok
// SIG undefined FUN_142c5c670(void)

undefined1 FUN_142c5c670(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_142c5c120(param_2 + param_3,param_3);
      param_3 = param_3 + 0x2d0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142c5c6c0 FUN_142c5c6c0 body=85 status=ok
// SIG undefined FUN_142c5c6c0(void)

void FUN_142c5c6c0(void)

{
  if (DAT_146b2fa90 == 0) {
    if (DAT_146b2fb20 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b2fb20,&PTR_s__Script_GbxAnimRuntimeBase_145836430);
    }
    DAT_146b2fa90 = GetStaticEnum(FUN_142c5c9b0,DAT_146b2fb20,L"EGbxLookAxisOption");
  }
  return;
}



// FUNCTION 142c5c720 FUN_142c5c720 body=6 status=ok
// SIG undefined FUN_142c5c720(void)

undefined8 FUN_142c5c720(void)

{
  return 0x259e9293;
}



// FUNCTION 142c5c730 FUN_142c5c730 body=6 status=ok
// SIG undefined FUN_142c5c730(void)

undefined8 FUN_142c5c730(void)

{
  return 0x3ba39025;
}



// FUNCTION 142c5c740 FUN_142c5c740 body=6 status=ok
// SIG undefined FUN_142c5c740(void)

undefined8 FUN_142c5c740(void)

{
  return 0x3427c873;
}



// FUNCTION 142c5c770 FUN_142c5c770 body=176 status=ok
// SIG undefined FUN_142c5c770(void)

void FUN_142c5c770(longlong param_1,uint param_2,uint param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      uVar4 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0xb8,0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2;
      lVar5 = SUB168(ZEXT816(0x642c8590b21642c9) * auVar1,8);
      uVar4 = (uint)((uVar2 - lVar5 >> 1) + lVar5 >> 7);
      if ((int)uVar4 < (int)param_2) {
        uVar4 = 0x7fffffff;
      }
    }
  }
  if (uVar4 != param_3) {
    lVar5 = *(longlong *)(param_1 + 0x2e0);
    if (uVar4 < 5) {
      if (lVar5 == 0) goto LAB_142c5c80a;
      lVar6 = 0;
    }
    else {
      if ((lVar5 == 0) && (uVar4 == 0)) goto LAB_142c5c80a;
      lVar6 = (longlong)(int)uVar4 * 0xb8;
    }
    uVar3 = FMemory::Realloc(lVar5,lVar6,0);
    *(undefined8 *)(param_1 + 0x2e0) = uVar3;
  }
LAB_142c5c80a:
  *(uint *)(param_1 + 0x2ec) = uVar4;
  return;
}



// FUNCTION 142c5c830 FUN_142c5c830 body=113 status=ok
// SIG undefined FUN_142c5c830(void)

void FUN_142c5c830(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2fb10 == 0) {
    if (DAT_146b2fb20 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b2fb20,&PTR_s__Script_GbxAnimRuntimeBase_145836430);
    }
    lVar1 = DAT_146b2fb20;
    uVar2 = FUN_142c5c720();
    DAT_146b2fb10 = GetStaticStruct(FUN_142c5c9e0,lVar1,L"BoneBlendParams",0x50,uVar2);
  }
  return;
}



// FUNCTION 142c5c8b0 FUN_142c5c8b0 body=113 status=ok
// SIG undefined FUN_142c5c8b0(void)

void FUN_142c5c8b0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2faf0 == 0) {
    if (DAT_146b2fb20 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b2fb20,&PTR_s__Script_GbxAnimRuntimeBase_145836430);
    }
    lVar1 = DAT_146b2fb20;
    uVar2 = FUN_142c5c730();
    DAT_146b2faf0 = GetStaticStruct(FUN_142c5ca10,lVar1,L"GbxAnimNode_LegIK",0x8b0,uVar2);
  }
  return;
}



// FUNCTION 142c5c930 FUN_142c5c930 body=113 status=ok
// SIG undefined FUN_142c5c930(void)

void FUN_142c5c930(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2fb00 == 0) {
    if (DAT_146b2fb20 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b2fb20,&PTR_s__Script_GbxAnimRuntimeBase_145836430);
    }
    lVar1 = DAT_146b2fb20;
    uVar2 = FUN_142c5c740();
    DAT_146b2fb00 = GetStaticStruct(FUN_142c5ca40,lVar1,L"GbxAnimNode_LookAt",0x2d0,uVar2);
  }
  return;
}



// FUNCTION 142c5c9b0 FUN_142c5c9b0 body=47 status=ok
// SIG undefined FUN_142c5c9b0(void)

longlong FUN_142c5c9b0(void)

{
  if (DAT_146b2fb28 == 0) {
    FUN_1417866a0(&DAT_146b2fb28,&PTR_FUN_1466acc40);
  }
  return DAT_146b2fb28;
}



// FUNCTION 142c5c9e0 FUN_142c5c9e0 body=47 status=ok
// SIG undefined FUN_142c5c9e0(void)

longlong FUN_142c5c9e0(void)

{
  if (DAT_146b2fb18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b2fb18,&PTR_FUN_1466acbf0);
  }
  return DAT_146b2fb18;
}



// FUNCTION 142c5ca10 FUN_142c5ca10 body=47 status=ok
// SIG undefined FUN_142c5ca10(void)

longlong FUN_142c5ca10(void)

{
  if (DAT_146b2faf8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b2faf8,&PTR_FUN_1466ac270);
  }
  return DAT_146b2faf8;
}



// FUNCTION 142c5ca40 FUN_142c5ca40 body=47 status=ok
// SIG undefined FUN_142c5ca40(void)

longlong FUN_142c5ca40(void)

{
  if (DAT_146b2fb08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b2fb08,&PTR_FUN_1466ac900);
  }
  return DAT_146b2fb08;
}



// FUNCTION 142c5ca70 Exec body=36 status=ok
// SIG undefined Exec(void)

undefined1 FVoiceModule::Exec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FParse::Command(local_res18,L"Voice",1);
  return 0;
}



// FUNCTION 142c5caa0 FUN_142c5caa0 body=661 status=ok
// SIG undefined FUN_142c5caa0(void)

undefined8 *
FUN_142c5caa0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  plVar9 = DAT_146b2fb40;
  plVar8 = (longlong *)0x0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  plVar4 = plVar8;
  if ((DAT_146b2fb40 != (longlong *)0x0) &&
     (plVar4 = (longlong *)0x0, (char)DAT_146b2fb40[2] != '\0')) {
    plVar4 = (longlong *)operator_new(0xf8);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = (longlong)&PTR_FUN_14583a3d0;
      uVar5 = FUN_14164ab60();
      FUN_14158c9d0(plVar4 + 3,L"FVoiceCaptureWindows",0,uVar5);
      plVar4[6] = 0;
      *plVar4 = (longlong)&PTR_FUN_14583a430;
      plVar4[7] = 0;
      plVar4[3] = (longlong)&PTR_LAB_14583a490;
      *(undefined4 *)(plVar4 + 8) = 0;
      plVar4[9] = 0;
      plVar4[10] = 0;
      plVar4[0xf] = 0;
      plVar4[0x10] = 0;
      *(undefined4 *)(plVar4 + 0x12) = 0;
      *(undefined1 *)((longlong)plVar4 + 0x94) = 0;
      plVar4[0x13] = 0;
      plVar4[0x14] = 0;
      plVar4[0x16] = 0;
      plVar4[0x17] = 0;
      Audio::FEnvelopeFollower::FEnvelopeFollower(plVar4 + 0x19);
      lVar6 = operator_new(0x90);
      if (lVar6 == 0) {
        plVar4[6] = 0;
      }
      else {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        *(undefined8 *)(lVar6 + 0x28) = 0;
        *(undefined4 *)(lVar6 + 0x88) = 0;
        *(undefined8 *)(lVar6 + 0x80) = 0xffffffffffffffff;
        FVoiceCaptureWindowsVars::Reset(lVar6);
        plVar4[6] = lVar6;
      }
    }
    cVar2 = (**(code **)(*plVar4 + 8))(plVar4,param_3,param_4,param_5);
    if (cVar2 == '\0') {
      plVar4 = (longlong *)0x0;
    }
    else {
      iVar3 = (int)plVar9[1];
      *(int *)(plVar9 + 1) = iVar3 + 1;
      if (*(int *)((longlong)plVar9 + 0xc) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar3);
      }
      *(longlong **)(*plVar9 + (longlong)iVar3 * 8) = plVar4;
    }
  }
  *param_2 = plVar4;
  plVar7 = (longlong *)operator_new(0x18);
  plVar9 = plVar8;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f3f2e0;
    plVar7[2] = (longlong)plVar4;
    plVar9 = plVar7;
  }
  param_2[1] = plVar9;
  plVar7 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar8;
  }
  if (plVar7 != (longlong *)0x0) {
    if (*plVar7 != 0) {
      if (plVar7[1] != 0) {
        piVar1 = (int *)(plVar7[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_2;
        }
      }
      plVar9 = (longlong *)param_2[1];
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)plVar4;
    plVar8 = (longlong *)plVar7[1];
    if (plVar9 != plVar8) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar7[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar7[1] = (longlong)plVar9;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142c5cd40 FUN_142c5cd40 body=432 status=ok
// SIG undefined FUN_142c5cd40(void)

undefined8 *
FUN_142c5cd40(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  plVar5 = (longlong *)operator_new(0x50);
  plVar8 = (longlong *)0x0;
  plVar7 = plVar8;
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (longlong)&PTR_FUN_14583a358;
    plVar5[3] = 0;
    *(undefined4 *)(plVar5 + 4) = 0;
    plVar5[5] = 0;
    plVar5[8] = 0;
    *(undefined1 *)(plVar5 + 9) = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar7 = plVar5;
  }
  cVar3 = (**(code **)(*plVar7 + 8))(plVar7,param_3,param_4,param_5);
  if (cVar3 == '\0') {
    (**(code **)*plVar7)(plVar7,1);
    plVar7 = plVar8;
  }
  *param_2 = plVar7;
  plVar6 = (longlong *)operator_new(0x18);
  plVar5 = plVar8;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    plVar6[2] = (longlong)plVar7;
    plVar5 = plVar6;
  }
  param_2[1] = plVar5;
  plVar6 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar8;
  }
  if (plVar6 != (longlong *)0x0) {
    if (*plVar6 != 0) {
      if (plVar6[1] != 0) {
        piVar1 = (int *)(plVar6[1] + 8);
        LOCK();
        iVar4 = *piVar1;
        if (iVar4 == 0) {
          *piVar1 = 0;
          iVar4 = 0;
        }
        UNLOCK();
        if (0 < iVar4) {
          return param_2;
        }
      }
      plVar5 = (longlong *)param_2[1];
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar7;
    plVar7 = (longlong *)plVar6[1];
    if (plVar5 != plVar7) {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar6[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      plVar6[1] = (longlong)plVar5;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar5 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142c5cef0 FUN_142c5cef0 body=426 status=ok
// SIG undefined FUN_142c5cef0(void)

undefined8 *
FUN_142c5cef0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  plVar5 = (longlong *)operator_new(0x50);
  plVar8 = (longlong *)0x0;
  plVar7 = plVar8;
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (longlong)&PTR_FUN_14583a3a0;
    plVar5[3] = 0;
    *(undefined4 *)(plVar5 + 4) = 0;
    plVar5[5] = 0;
    plVar5[8] = 0;
    *(undefined1 *)(plVar5 + 9) = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar7 = plVar5;
  }
  cVar3 = (**(code **)(*plVar7 + 8))(plVar7,param_3,param_4);
  if (cVar3 == '\0') {
    (**(code **)*plVar7)(plVar7,1);
    plVar7 = plVar8;
  }
  *param_2 = plVar7;
  plVar6 = (longlong *)operator_new(0x18);
  plVar5 = plVar8;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    plVar6[2] = (longlong)plVar7;
    plVar5 = plVar6;
  }
  param_2[1] = plVar5;
  plVar6 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar8;
  }
  if (plVar6 != (longlong *)0x0) {
    if (*plVar6 != 0) {
      if (plVar6[1] != 0) {
        piVar1 = (int *)(plVar6[1] + 8);
        LOCK();
        iVar4 = *piVar1;
        if (iVar4 == 0) {
          *piVar1 = 0;
          iVar4 = 0;
        }
        UNLOCK();
        if (0 < iVar4) {
          return param_2;
        }
      }
      plVar5 = (longlong *)param_2[1];
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar7;
    plVar7 = (longlong *)plVar6[1];
    if (plVar5 != plVar7) {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar6[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      plVar6[1] = (longlong)plVar5;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar5 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142c5d0a0 StartupModule body=224 status=ok
// SIG undefined StartupModule(void)

void FVoiceModule::StartupModule(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  
  pcVar1 = (char *)(param_1 + 0x10);
  *pcVar1 = '\0';
  FConfigCacheIni::GetBool(DAT_1468b6148,L"Voice",L"bEnabled",pcVar1,&DAT_1468e2360);
  if ((*pcVar1 != '\0') && (DAT_146b2fb40 == (undefined8 *)0x0)) {
    puVar3 = (undefined8 *)operator_new();
    DAT_146b2fb40 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined1 *)(puVar3 + 2) = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
      *(undefined4 *)((longlong)puVar3 + 0x84) = 0;
      puVar3[0x12] = 0;
      *(undefined4 *)(puVar3 + 0x13) = 0;
      DAT_146b2fb40 = puVar3;
    }
    cVar2 = FUN_142c5ec00(DAT_146b2fb40);
    if (cVar2 == '\0') {
      FVoiceCaptureDeviceWindows::Destroy();
    }
    if (DAT_146b2fb40 == (undefined8 *)0x0) {
      FVoiceCaptureDeviceWindows::Destroy();
      return;
    }
  }
  return;
}



// FUNCTION 142c5d190 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FVoiceModule::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FSelfRegisteringExec::~FSelfRegisteringExec(param_1 + 1);
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142c5d1e0 Emplace<TPairInitializer<FString_&&,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo_const_&>_> body=422 status=ok
// SIG undefined Emplace<TPairInitializer<FString_&&,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo_const_&>_>(void)

int * TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FString_&&,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  bool bVar11;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar2 = (undefined8 *)*param_3;
  lVar3 = param_3[1];
  *param_2 = local_38[0];
  *local_30 = 0;
  *local_30 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(local_30 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)local_30 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  FString::FString(local_30 + 2,lVar3);
  uVar4 = *(undefined4 *)(lVar3 + 0x14);
  uVar5 = *(undefined4 *)(lVar3 + 0x18);
  uVar6 = *(undefined4 *)(lVar3 + 0x1c);
  bVar11 = false;
  *(undefined4 *)(local_30 + 4) = *(undefined4 *)(lVar3 + 0x10);
  *(undefined4 *)((longlong)local_30 + 0x24) = uVar4;
  *(undefined4 *)(local_30 + 5) = uVar5;
  *(undefined4 *)((longlong)local_30 + 0x2c) = uVar6;
  *(undefined4 *)(local_30 + 6) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_30);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      plVar10 = (longlong *)((longlong)local_res8[0] * 0x38 + *param_1);
      if (plVar10[2] != 0) {
        FMemory::Free();
      }
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(plVar10,local_30,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142c5d35d;
    }
  }
  cVar7 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar7 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*local_30;
    }
    uVar8 = FUN_140438070(puVar9);
    uVar8 = (int)param_1[9] - 1U & uVar8;
    *(uint *)((longlong)local_30 + 0x34) = uVar8;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 6) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         iVar1;
  }
LAB_142c5d35d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 142c5d390 Emplace<TPairInitializer<FString_&,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo_&>_> body=386 status=ok
// SIG undefined Emplace<TPairInitializer<FString_&,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo_&>_>(void)

int * TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  bool bVar11;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar2 = *param_3;
  lVar3 = param_3[1];
  *param_2 = local_38[0];
  FString::FString(local_30,uVar2);
  FString::FString(local_30 + 2,lVar3);
  uVar4 = *(undefined4 *)(lVar3 + 0x14);
  uVar5 = *(undefined4 *)(lVar3 + 0x18);
  uVar6 = *(undefined4 *)(lVar3 + 0x1c);
  bVar11 = false;
  *(undefined4 *)(local_30 + 4) = *(undefined4 *)(lVar3 + 0x10);
  *(undefined4 *)((longlong)local_30 + 0x24) = uVar4;
  *(undefined4 *)(local_30 + 5) = uVar5;
  *(undefined4 *)((longlong)local_30 + 0x2c) = uVar6;
  *(undefined4 *)(local_30 + 6) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_30);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      plVar10 = (longlong *)((longlong)local_res8[0] * 0x38 + *param_1);
      if (plVar10[2] != 0) {
        FMemory::Free();
      }
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(plVar10,local_30,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142c5d4ef;
    }
  }
  cVar7 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar7 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*local_30;
    }
    uVar8 = FUN_140438070(puVar9);
    uVar8 = (int)param_1[9] - 1U & uVar8;
    *(uint *)((longlong)local_30 + 0x34) = uVar8;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 6) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         iVar1;
  }
LAB_142c5d4ef:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 142c5d520 FUN_142c5d520 body=377 status=ok
// SIG undefined FUN_142c5d520(void)

void FUN_142c5d520(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_14583a430;
  param_1[3] = &PTR_LAB_14583a490;
  FVoiceCaptureWindows::Stop();
  FVoiceCaptureWindowsVars::Reset(param_1[6]);
  *(undefined4 *)(param_1 + 8) = 0;
  plVar3 = DAT_146b2fb40;
  if (DAT_146b2fb40 != (longlong *)0x0) {
    plVar2 = (longlong *)*DAT_146b2fb40;
    iVar7 = (int)DAT_146b2fb40[1];
    for (plVar6 = plVar2; plVar6 != plVar2 + iVar7; plVar6 = plVar6 + 1) {
      if ((undefined8 *)*plVar6 == param_1) {
        iVar5 = (int)((longlong)plVar6 - (longlong)plVar2 >> 3);
        if (iVar5 != -1) {
          iVar4 = (iVar7 - iVar5) + -1;
          if (0 < iVar4) {
            iVar4 = 1;
          }
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (plVar2 + iVar5,plVar2 + (iVar7 - iVar4),(longlong)iVar4 << 3);
            iVar7 = (int)plVar3[1];
          }
          *(int *)(plVar3 + 1) = iVar7 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar3);
        }
        break;
      }
    }
  }
  if (param_1[6] != 0) {
    FMemory::operator_delete(param_1[6],0x90);
    param_1[6] = 0;
  }
  FUN_142a7b670(param_1 + 0x19);
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  FTickerObjectBase::~FTickerObjectBase(param_1 + 3);
  *param_1 = &PTR_FUN_14583a3d0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar7 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}



// FUNCTION 142c5d6b0 FUN_142c5d6b0 body=52 status=ok
// SIG undefined FUN_142c5d6b0(void)

undefined8 FUN_142c5d6b0(undefined8 param_1,ulonglong param_2)

{
  FUN_142c5d520();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 142c5d6f0 FUN_142c5d6f0 body=125 status=ok
// SIG undefined FUN_142c5d6f0(void)

undefined8 * FUN_142c5d6f0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14583a3a0;
  FMemory::Free(param_1[5]);
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14583a328;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 142c5d770 FUN_142c5d770 body=125 status=ok
// SIG undefined FUN_142c5d770(void)

undefined8 * FUN_142c5d770(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14583a358;
  FMemory::Free(param_1[5]);
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14583a2e0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 142c5d7f0 FUN_142c5d7f0 body=98 status=ok
// SIG undefined FUN_142c5d7f0(void)

undefined8 * FUN_142c5d7f0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14583a3d0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142c5d860 FUN_142c5d860 body=98 status=ok
// SIG undefined FUN_142c5d860(void)

undefined8 * FUN_142c5d860(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14583a328;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142c5d8d0 FUN_142c5d8d0 body=98 status=ok
// SIG undefined FUN_142c5d8d0(void)

undefined8 * FUN_142c5d8d0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14583a2e0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142c5d940 CaptureDeviceCallback body=661 status=ok
// SIG undefined CaptureDeviceCallback(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
CaptureDeviceCallback(undefined4 *param_1,short *param_2,short *param_3,undefined2 *param_4)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  undefined2 *puVar4;
  short *psVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  ulonglong local_a0;
  undefined4 local_98 [2];
  undefined2 *local_90;
  ulonglong local_88;
  undefined2 **local_80;
  void **local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  bVar13 = false;
  local_98[0] = 0;
  if (param_1 == (undefined4 *)0x0) {
    return 1;
  }
  lVar7 = -1;
  local_90 = (undefined2 *)0x0;
  local_88 = 0;
  iVar9 = 0;
  local_a8 = param_4;
  if ((param_2 != (short *)0x0) && (lVar10 = lVar7, *param_2 != 0)) {
    do {
      lVar10 = lVar10 + 1;
    } while (param_2[lVar10] != 0);
    uVar8 = (int)lVar10 + 1;
    local_88 = (ulonglong)uVar8;
    if (0 < (int)uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
    }
    FGenericPlatformString::Memcpy(local_90,param_2,(longlong)(int)uVar8 * 2);
    iVar9 = (int)local_88;
  }
  puVar4 = local_90;
  local_70 = (void *)0x0;
  local_64 = 0;
  local_68 = iVar9;
  if (iVar9 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_70,iVar9,0);
    _guard_xfg_dispatch_icall_nop(local_70,puVar4,(longlong)iVar9 * 2);
  }
  puVar4 = local_a8;
  local_60 = *param_1;
  uStack_5c = param_1[1];
  uStack_58 = param_1[2];
  uStack_54 = param_1[3];
  local_80 = &local_90;
  local_78 = &local_70;
  TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo_&>_>
            (local_a8 + 0x28,local_98,&local_80,0);
  puVar11 = local_a8;
  if (1 < *(int *)(puVar4 + 0x14)) {
    puVar11 = (undefined2 *)0x0;
    local_a8 = (undefined2 *)0x0;
    local_a0 = local_a0 & 0xffffffff;
    uVar8 = 0;
    if ((param_3 != (short *)0x0) && (uVar8 = 0, *param_3 != 0)) {
      do {
        lVar7 = lVar7 + 1;
      } while (param_3[lVar7] != 0);
      uVar6 = (int)lVar7 + 1;
      local_a0 = (ulonglong)uVar6;
      uVar8 = uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
        uVar8 = (uint)local_a0;
      }
      puVar11 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,param_3,(longlong)(int)uVar6 * 2);
    }
    psVar5 = &DAT_143f3eda8;
    puVar12 = &DAT_143f3eda8;
    if (uVar8 != 0) {
      puVar12 = puVar11;
    }
    if (*(int *)(puVar4 + 0x14) != 0) {
      psVar5 = *(short **)(puVar4 + 0x10);
    }
    bVar13 = true;
    lVar7 = (longlong)puVar12 - (longlong)psVar5;
    do {
      sVar1 = *psVar5;
      sVar2 = *(short *)((longlong)psVar5 + lVar7);
      if (sVar1 != sVar2) break;
      psVar5 = psVar5 + 1;
    } while (sVar2 != 0);
    if (sVar1 == sVar2) {
      bVar3 = true;
      goto LAB_142c5daf4;
    }
  }
  bVar3 = false;
LAB_142c5daf4:
  if ((bVar13) && (puVar11 != (undefined2 *)0x0)) {
    FMemory::Free(puVar11);
  }
  if (bVar3) {
    FString::operator=(puVar4 + 0x18,&local_70);
    local_a0 = 0xf;
    local_a8 = (undefined2 *)0x0;
    *(undefined4 *)(puVar4 + 0x20) = local_60;
    *(undefined4 *)(puVar4 + 0x22) = uStack_5c;
    *(undefined4 *)(puVar4 + 0x24) = uStack_58;
    *(undefined4 *)(puVar4 + 0x26) = uStack_54;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    FGenericPlatformString::Memcpy(local_a8,L"Default Device",0x1e);
    local_80 = &local_a8;
    local_78 = (void **)(puVar4 + 0x18);
    TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo_const_&>_>
              (puVar4 + 0x28,local_98,&local_80,0);
    if (local_a8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_90 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142c5dbe0 FUN_142c5dbe0 body=32 status=ok
// SIG undefined FUN_142c5dbe0(void)

undefined1 FUN_142c5dbe0(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar1 = FUN_142c5dc00();
    return uVar1;
  }
  return 0;
}



// FUNCTION 142c5dc00 FUN_142c5dc00 body=1245 status=ok
// SIG undefined FUN_142c5dc00(void)

byte FUN_142c5dc00(longlong *param_1,longlong param_2,int param_3,uint param_4,byte param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  HANDLE pvVar13;
  LARGE_INTEGER LVar14;
  undefined2 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong *local_res8;
  int local_res18 [4];
  LARGE_INTEGER local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  longlong local_40;
  
  FString::operator=(param_1 + 0xf);
  *(uint *)((longlong)param_1 + 0x8c) = param_4;
  *(int *)(param_1 + 0x11) = param_3;
  (**(code **)(*param_1 + 0x20))(param_1);
  FVoiceCaptureWindowsVars::Reset(param_1[6]);
  *(undefined4 *)(param_1 + 8) = 1;
  lVar16 = DAT_146b2fb40;
  if (((param_3 - 8000U < 0x9c41) && (param_4 < 3)) && (DAT_146b2fb40 != 0)) {
    if (*(int *)(param_2 + 8) < 2) {
      local_58.QuadPart = 0;
      local_50 = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      LVar8 = local_58;
      FGenericPlatformString::Memcpy(local_58.QuadPart,L"Default Device",0x1e);
      if (*(int *)(lVar16 + 0x58) != *(int *)(lVar16 + 0x84)) {
        iVar11 = (int)local_50;
        LVar14.QuadPart = (LONGLONG)&DAT_143f3eda8;
        if ((int)local_50 != 0) {
          LVar14 = LVar8;
        }
        iVar9 = FUN_140438070(LVar14.QuadPart);
        lVar12 = *(longlong *)(lVar16 + 0x90);
        if (*(longlong *)(lVar16 + 0x90) == 0) {
          lVar12 = lVar16 + 0x88;
        }
        iVar9 = *(int *)(lVar12 + ((longlong)*(int *)(lVar16 + 0x98) - 1U & (longlong)iVar9) * 4);
        if (iVar9 != -1) {
          lVar12 = *(longlong *)(lVar16 + 0x50);
          do {
            lVar18 = (longlong)iVar9 * 0x38;
            LVar14.QuadPart = (LONGLONG)&DAT_143f3eda8;
            if (iVar11 != 0) {
              LVar14 = LVar8;
            }
            if (*(int *)(lVar18 + 8 + lVar12) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = *(undefined2 **)(lVar18 + lVar12);
            }
            iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,LVar14.QuadPart);
            if (iVar10 == 0) {
              if (iVar9 != -1) {
                lVar18 = *(longlong *)(lVar16 + 0x50) + lVar18;
                goto LAB_142c5dd63;
              }
              break;
            }
            lVar12 = *(longlong *)(lVar16 + 0x50);
            iVar9 = *(int *)(lVar18 + 0x30 + lVar12);
          } while (iVar9 != -1);
        }
      }
      lVar18 = 0;
LAB_142c5dd63:
      lVar16 = lVar18 + 0x10;
      if (lVar18 == 0) {
        lVar16 = 0;
      }
      if ((undefined2 *)LVar8.QuadPart != (undefined2 *)0x0) {
        FMemory::Free(LVar8.QuadPart);
      }
    }
    else {
      TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
      ::FindId(DAT_146b2fb40 + 0x50,local_res18,param_2);
      if (local_res18[0] == -1) {
        return 0;
      }
      lVar16 = (longlong)local_res18[0] * 0x38 + *(longlong *)(lVar16 + 0x50);
      if (lVar16 == 0) {
        return 0;
      }
      lVar16 = lVar16 + 0x10;
    }
    if (lVar16 != 0) {
      puVar2 = (undefined4 *)param_1[6];
      uVar4 = *(undefined4 *)(lVar16 + 0x14);
      uVar5 = *(undefined4 *)(lVar16 + 0x18);
      uVar6 = *(undefined4 *)(lVar16 + 0x1c);
      *puVar2 = *(undefined4 *)(lVar16 + 0x10);
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      iVar11 = _guard_xfg_dispatch_icall_nop((undefined4 *)(lVar16 + 0x10),param_1[6] + 0x10,0);
      if (iVar11 < 0) {
        if (iVar11 == -0x7787ff88) {
          *(undefined1 *)((longlong)param_1 + 0x94) = 1;
          return param_5 ^ 1;
        }
      }
      else {
        *(undefined4 *)(param_1[6] + 0x18) = 0x10;
        plVar3 = *(longlong **)(param_1[6] + 0x10);
        iVar11 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1[6] + 0x18);
        if (-1 < iVar11) {
          *(undefined2 *)(param_1[6] + 0x30) = 1;
          *(short *)(param_1[6] + 0x32) = (short)param_4;
          *(undefined2 *)(param_1[6] + 0x3e) = 0x10;
          *(int *)(param_1[6] + 0x34) = param_3;
          lVar16 = param_1[6];
          iVar11 = (uint)*(ushort *)(lVar16 + 0x3e) * (uint)*(ushort *)(lVar16 + 0x32);
          *(short *)(lVar16 + 0x3c) = (short)((int)(iVar11 + (iVar11 >> 0x1f & 7U)) >> 3);
          lVar16 = param_1[6];
          *(uint *)(lVar16 + 0x38) = (uint)*(ushort *)(lVar16 + 0x3c) * *(int *)(lVar16 + 0x34);
          *(undefined2 *)(param_1[6] + 0x40) = 0;
          *(undefined4 *)(param_1[6] + 0x48) = 0x28;
          *(undefined4 *)(param_1[6] + 0x4c) = 0;
          *(uint *)(param_1[6] + 0x50) = *(uint *)(param_1[6] + 0x38) >> 1;
          *(undefined4 *)(param_1[6] + 0x54) = 0;
          *(longlong *)(param_1[6] + 0x58) = param_1[6] + 0x30;
          *(undefined4 *)(param_1[6] + 0x60) = 0;
          *(undefined8 *)(param_1[6] + 0x68) = 0;
          local_res8 = (longlong *)0x0;
          plVar3 = *(longlong **)(param_1[6] + 0x10);
          iVar11 = (**(code **)(*plVar3 + 0x18))(plVar3,param_1[6] + 0x48,&local_res8,0);
          if (-1 < iVar11) {
            iVar11 = (**(code **)*local_res8)(local_res8,&DAT_145ac63b0,param_1[6] + 0x28);
            (**(code **)(*local_res8 + 0x10))();
            local_res8 = (longlong *)0x0;
            if (-1 < iVar11) {
              *(undefined4 *)(param_1[6] + 0x70) = 0x10;
              plVar3 = *(longlong **)(param_1[6] + 0x28);
              iVar11 = (**(code **)(*plVar3 + 0x18))(plVar3,param_1[6] + 0x70);
              if (-1 < iVar11) {
                local_58.QuadPart = 0;
                bVar7 = false;
                iVar11 = (**(code **)**(undefined8 **)(param_1[6] + 0x28))
                                   (*(undefined8 **)(param_1[6] + 0x28),&DAT_145ac63c0,&local_58);
                if (-1 < iVar11) {
                  pvVar13 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
                  *(HANDLE *)(param_1[6] + 0x80) = pvVar13;
                  if (*(longlong *)(param_1[6] + 0x80) - 1U < 0xfffffffffffffffe) {
                    local_48[0] = 0xffffffff;
                    local_40 = *(longlong *)(param_1[6] + 0x80);
                    iVar11 = (**(code **)(*(longlong *)local_58 + 0x18))
                                       (local_58.QuadPart,1,local_48);
                    if (iVar11 < 0) {
                      CloseHandle(*(HANDLE *)(param_1[6] + 0x80));
                      *(undefined8 *)(param_1[6] + 0x80) = 0xffffffffffffffff;
                    }
                    else {
                      bVar7 = true;
                    }
                  }
                  (**(code **)(*(longlong *)local_58 + 0x10))();
                  if (bVar7) {
                    QueryPerformanceCounter(&local_58);
                    param_1[7] = (longlong)((double)local_58.QuadPart * DAT_1468b02f8 + 16777216.0);
                    uVar1 = *(uint *)(param_1[6] + 0x50);
                    uVar17 = (ulonglong)uVar1;
                    *(undefined4 *)(param_1 + 10) = 0;
                    if (*(uint *)((longlong)param_1 + 0x54) != uVar1) {
                      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 9,uVar1);
                    }
                    if (0 < (int)uVar1) {
                      do {
                        iVar11 = (int)param_1[10];
                        *(int *)(param_1 + 10) = iVar11 + 1;
                        if (*(int *)((longlong)param_1 + 0x54) < iVar11 + 1) {
                          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 9,iVar11);
                        }
                        if ((undefined1 *)((longlong)iVar11 + param_1[9]) != (undefined1 *)0x0) {
                          *(undefined1 *)((longlong)iVar11 + param_1[9]) = 0;
                        }
                        uVar17 = uVar17 - 1;
                      } while (uVar17 != 0);
                    }
                    *(uint *)((longlong)param_1 + 0x74) = (uint)*(ushort *)(param_1[6] + 0x32);
                    FVoiceDelayBuffer<short>::Init
                              (param_1 + 0x16,*(undefined4 *)(param_1[6] + 0x78));
                    iVar11 = (int)param_1[0x18] + -1;
                    if (iVar11 < 0) {
                      iVar11 = iVar11 + (int)param_1[0x17];
                    }
                    *(int *)((longlong)param_1 + 0xc4) = iVar11;
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



// FUNCTION 142c5e0e0 Decode body=583 status=ok
// SIG undefined Decode(void)

void FVoiceDecoderOpus::Decode
               (longlong param_1,byte *param_2,uint param_3,longlong param_4,int *param_5)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  if ((param_2 == (byte *)0x0) || (param_3 < 2)) {
    *param_5 = 0;
    return;
  }
  iVar12 = *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x1c);
  bVar1 = *param_2;
  bVar2 = param_2[1];
  if ((bVar1 == 0) || (uVar13 = (uint)bVar1, (int)(0xc000 / (longlong)(iVar12 * 2)) < (int)uVar13))
  {
    *param_5 = 0;
    *(byte *)(param_1 + 0x48) = bVar2;
    return;
  }
  uVar6 = 0;
  uVar7 = (uint)bVar1 * 2 + 2;
  uVar14 = (ulonglong)uVar13;
  iVar9 = 0;
  if (uVar7 <= param_3) {
    uVar10 = 0;
    uVar5 = uVar6;
    iVar11 = iVar9;
    uVar4 = uVar10;
    if (uVar13 != 0) {
      do {
        uVar3 = *(ushort *)(param_2 + uVar5 * 2 + 2);
        if (uVar3 < uVar4) goto LAB_142c5e2c8;
        uVar5 = uVar5 + 1;
        iVar11 = iVar11 + ((uint)uVar3 - (uint)uVar4);
        uVar4 = uVar3;
      } while ((longlong)uVar5 < (longlong)(ulonglong)bVar1);
    }
    if (((uVar7 <= param_3) && (iVar11 + uVar7 <= param_3)) && (iVar9 = 0, bVar1 != 0)) {
      uVar5 = uVar6;
      uVar15 = uVar6;
      do {
        iVar9 = (int)uVar5;
        if (*param_5 - iVar9 < iVar12 * 0xc) break;
        if (*(ushort *)(param_2 + uVar6 * 2 + 2) != 0) {
          iVar8 = (uint)*(ushort *)(param_2 + uVar6 * 2 + 2) - (uint)uVar10;
          iVar11 = opus_decode(*(undefined8 *)(param_1 + 0x28),
                               param_2 + (longlong)(int)uVar15 + (ulonglong)uVar7,iVar8,
                               iVar9 + param_4,0x780,0);
          if (iVar11 < 0) {
            opus_strerror(iVar11);
          }
          else {
            opus_decoder_ctl(*(undefined8 *)(param_1 + 0x28),0xfbf,
                             (ulonglong)*(uint *)(param_1 + 0x44) * 4 + 0x30 + param_1);
            *(uint *)(param_1 + 0x44) = (*(int *)(param_1 + 0x44) + 1U) % 5;
            uVar5 = (ulonglong)(uint)(iVar9 + *(int *)(param_1 + 0x1c) * iVar11 * 2);
          }
          uVar10 = *(ushort *)(param_2 + uVar6 * 2 + 2);
          uVar15 = (ulonglong)(uint)((int)uVar15 + iVar8);
          uVar14 = (ulonglong)bVar1;
        }
        iVar9 = (int)uVar5;
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < (longlong)uVar14);
    }
  }
LAB_142c5e2c8:
  *param_5 = iVar9;
  *(byte *)(param_1 + 0x48) = bVar2;
  return;
}



// FUNCTION 142c5e330 Destroy body=257 status=ok
// SIG undefined Destroy(void)

void FVoiceCaptureDeviceWindows::Destroy(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  plVar1 = DAT_146b2fb40;
  if (DAT_146b2fb40 != (longlong *)0x0) {
    uVar2 = 0;
    uVar4 = uVar2;
    if (0 < (int)DAT_146b2fb40[1]) {
      do {
        (**(code **)(**(longlong **)(uVar2 + *plVar1) + 0x10))();
        uVar3 = (int)uVar4 + 1;
        uVar2 = uVar2 + 8;
        uVar4 = (ulonglong)uVar3;
      } while ((int)uVar3 < (int)plVar1[1]);
    }
    *(undefined4 *)(plVar1 + 1) = 0;
    if (*(int *)((longlong)plVar1 + 0xc) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
    }
    if ((longlong *)plVar1[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[3] + 0x10))();
      plVar1[3] = 0;
    }
    *(undefined1 *)(plVar1 + 2) = 0;
    *(undefined4 *)(plVar1 + 0x13) = 0;
    if (plVar1[0x12] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(plVar1 + 10,0);
    if (plVar1[0xe] != 0) {
      FMemory::Free();
    }
    if (plVar1[10] != 0) {
      FMemory::Free();
    }
    if (plVar1[6] != 0) {
      FMemory::Free();
    }
    if (plVar1[4] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0xa0);
    DAT_146b2fb40 = (longlong *)0x0;
  }
  return;
}



// FUNCTION 142c5e440 Destroy body=32 status=ok
// SIG undefined Destroy(void)

void FVoiceDecoderOpus::Destroy(longlong param_1)

{
  FMemory::Free(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 142c5e460 DumpState body=73 status=ok
// SIG undefined DumpState(void)

void FVoiceDecoderOpus::DumpState(longlong param_1)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [6];
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    local_res8[0] = 0;
    opus_decoder_ctl(lVar1,0xfcd,local_res8);
    local_res10[0] = 0;
    opus_decoder_ctl(lVar1,0xfc1,local_res10);
  }
  return;
}



// FUNCTION 142c5e4b0 DumpState body=169 status=ok
// SIG undefined DumpState(void)

void FVoiceEncoderOpus::DumpState(longlong param_1)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 local_24 [5];
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    local_res8[0] = 0;
    opus_encoder_ctl(lVar1,0xfa3,local_res8);
    local_res10[0] = 0;
    opus_encoder_ctl(lVar1,0xfa7,local_res10);
    local_res18[0] = 0;
    opus_encoder_ctl(lVar1,0xfbd,local_res18);
    local_res20[0] = 0;
    opus_encoder_ctl(lVar1,0xfa1,local_res20);
    local_28 = 0;
    opus_encoder_ctl(lVar1,0xfb9,&local_28);
    local_24[0] = 0;
    opus_encoder_ctl(lVar1,0xfab,local_24);
  }
  return;
}



// FUNCTION 142c5e560 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 142c5e5e0 Empty body=447 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar4 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar3) goto LAB_142c5e6b1;
      uVar4 = puVar8[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_54 = (iStack_50 - iVar7) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_142c5e6b1:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      plVar6 = (longlong *)((longlong)iStack_2c * 0x38 + *param_1);
      if (plVar6[2] != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 142c5e7a0 EnableDuckingOptOut body=209 status=ok
// SIG undefined EnableDuckingOptOut(void)

int FAudioDuckingWindows::EnableDuckingOptOut(longlong *param_1,undefined1 param_2)

{
  int iVar1;
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_18 [2];
  
  local_res18 = (longlong *)0x0;
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,&DAT_14583a4a0,1,0,&local_res18);
  local_res20 = (longlong *)0x0;
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_res18 + 0x18))(local_res18,0,0,&local_res20);
    (**(code **)(*local_res18 + 0x10))();
    local_res18 = (longlong *)0x0;
  }
  local_18[0] = (longlong *)0x0;
  if (-1 < iVar1) {
    iVar1 = (**(code **)*local_res20)(local_res20,&DAT_14583a4b0,local_18);
    (**(code **)(*local_res20 + 0x10))();
    local_res20 = (longlong *)0x0;
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*local_18[0] + 0x80))(local_18[0],param_2);
      (**(code **)(*local_18[0] + 0x10))();
    }
  }
  return iVar1;
}



// FUNCTION 142c5e880 Encode body=489 status=ok
// SIG undefined Encode(void)

ulonglong FVoiceEncoderOpus::Encode
                    (longlong param_1,longlong param_2,uint param_3,undefined2 *param_4,int *param_5
                    )

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  
  uVar1 = *(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x20) * 2;
  iVar9 = (int)(0xc000 / (longlong)(int)uVar1);
  if ((int)param_3 / (int)uVar1 <= iVar9) {
    iVar9 = (int)param_3 / (int)uVar1;
  }
  if (iVar9 != 0) {
    iVar7 = 0;
    *(char *)param_4 = (char)iVar9;
    *(undefined1 *)((longlong)param_4 + 1) = *(undefined1 *)(param_1 + 0x48);
    iVar3 = iVar9 * 2 + 2;
    iVar8 = *param_5 - iVar3;
    iVar11 = 0;
    if (0 < iVar9) {
      iVar6 = 0;
      puVar10 = param_4;
      do {
        puVar10 = puVar10 + 1;
        iVar4 = opus_encode(*(undefined8 *)(param_1 + 0x28),iVar6 + param_2,
                            *(undefined4 *)(param_1 + 0x20),
                            (undefined1 *)((longlong)param_4 + (longlong)iVar11 + (longlong)iVar3),
                            iVar8);
        if (iVar4 < 0) {
          opus_strerror(iVar4);
          *(undefined1 *)param_4 = 0;
          *param_5 = 0;
          return 0;
        }
        if (iVar4 == 1) {
          uVar2 = 0;
        }
        else {
          opus_encoder_ctl(*(undefined8 *)(param_1 + 0x28),0xfbf,
                           param_1 + ((ulonglong)*(uint *)(param_1 + 0x44) + 0xc) * 4);
          iVar8 = iVar8 - iVar4;
          iVar11 = iVar11 + iVar4;
          *(uint *)(param_1 + 0x44) = (*(int *)(param_1 + 0x44) + 1U) % 5;
          uVar2 = (undefined2)iVar11;
        }
        iVar6 = iVar6 + uVar1;
        iVar7 = iVar7 + 1;
        *puVar10 = uVar2;
      } while (iVar7 < iVar9);
    }
    *param_5 = iVar3 + iVar11;
    uVar5 = *(byte *)(param_1 + 0x48) + 1;
    *(char *)(param_1 + 0x48) = (char)uVar5 + (char)(uVar5 / 0xff);
    return (ulonglong)param_3 % (ulonglong)uVar1;
  }
  *param_5 = 0;
  return (ulonglong)param_3 % (ulonglong)uVar1;
}



// FUNCTION 142c5eab0 GetVoiceData body=34 status=ok
// SIG undefined GetVoiceData(void)

void FVoiceCaptureWindows::GetVoiceData(longlong *param_1)

{
  (**(code **)(*param_1 + 0x40))();
  return;
}



// FUNCTION 142c5eae0 GetVoiceData body=147 status=ok
// SIG undefined GetVoiceData(void)

undefined4
FVoiceCaptureWindows::GetVoiceData
          (longlong param_1,void *param_2,uint param_3,uint *param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  *param_4 = 0;
  if ((*(int *)(param_1 + 0x40) - 2U & 0xfffffffd) == 0) {
    uVar2 = *(uint *)(param_1 + 0x50);
    if (param_3 < uVar2) {
      return 5;
    }
    *param_4 = uVar2;
    ::_guard_xfg_dispatch_icall_nop(param_2,*(void **)(param_1 + 0x48),(ulonglong)uVar2);
    *(undefined4 *)(param_1 + 0x40) = 3;
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x54)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
    }
    *param_5 = *(undefined8 *)(param_1 + 0x68);
  }
  return uVar1;
}



// FUNCTION 142c5eb80 Init body=120 status=ok
// SIG undefined Init(void)

void FVoiceDelayBuffer<short>::Init(longlong *param_1,uint param_2)

{
  undefined2 *puVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(uint *)((longlong)param_1 + 0xc) != param_2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,uVar3);
  }
  if (0 < (int)param_2) {
    do {
      iVar2 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
      }
      puVar1 = (undefined2 *)(*param_1 + (longlong)iVar2 * 2);
      if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  param_1[2] = 0;
  return;
}



// FUNCTION 142c5ec00 FUN_142c5ec00 body=1047 status=ok
// SIG undefined FUN_142c5ec00(void)

undefined8 FUN_142c5ec00(longlong *param_1)

{
  undefined8 **ppuVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  HRESULT HVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong *local_res8;
  undefined1 local_res10 [8];
  longlong *local_res18;
  longlong *local_res20;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 **local_50;
  
  local_res8 = param_1;
  iVar5 = _guard_xfg_dispatch_icall_nop(0,param_1 + 3,0);
  if (-1 < iVar5) {
    piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38);
    if ((*piVar11 < DAT_146850178) && (_Init_thread_header(&DAT_146850178), DAT_146850178 == -1)) {
      FName::FName(&DAT_146850170,&DAT_143f3ef90,1);
      _Init_thread_footer(&DAT_146850178);
    }
    uVar2 = DAT_146850170;
    plVar7 = (longlong *)FUN_141593110();
    iVar5 = (**(code **)(*plVar7 + 8))(plVar7,uVar2);
    puVar12 = (undefined8 *)0x0;
    if (0 < iVar5) {
      if ((*piVar11 < DAT_146850178) && (_Init_thread_header(&DAT_146850178), DAT_146850178 == -1))
      {
        FName::FName(&DAT_146850170,&DAT_143f3ef90,1);
        _Init_thread_footer(&DAT_146850178);
      }
      uVar2 = DAT_146850170;
      plVar7 = (longlong *)FUN_141593110();
      local_68 = (undefined8 *)0x0;
      local_60._4_4_ = 0;
      local_res20 = plVar7;
      iVar5 = (**(code **)(*plVar7 + 8))(plVar7,uVar2);
      local_res18 = (longlong *)CONCAT44(local_res18._4_4_,iVar5);
      puVar13 = puVar12;
      puVar14 = puVar12;
      puVar16 = puVar12;
      uVar10 = 0;
      if (0 < iVar5) {
        do {
          lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,uVar2,puVar16);
          if (lVar8 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = lVar8 + -8;
          }
          iVar5 = (int)puVar12;
          local_60._0_4_ = iVar5 + 1;
          if ((int)puVar14 < (int)(uint)local_60) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_68,puVar12);
            puVar14 = (undefined8 *)(ulonglong)local_60._4_4_;
            puVar13 = local_68;
          }
          puVar12 = (undefined8 *)(ulonglong)(uint)local_60;
          uVar15 = (int)puVar16 + 1;
          puVar13[iVar5] = lVar8;
          plVar7 = local_res20;
          puVar16 = (undefined8 *)(ulonglong)uVar15;
          param_1 = local_res8;
          uVar10 = (uint)local_60;
        } while ((int)uVar15 < (int)local_res18);
      }
      AlgoImpl::
      IntroSortInternal<IHeadMountedDisplayModule_*,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_>
                (puVar13,(longlong)(int)uVar10,(ulonglong)local_res8 & 0xff,&local_res8);
      plVar7 = (longlong *)*puVar13;
      FMemory::Free(puVar13);
      plVar9 = (longlong *)(**(code **)(*plVar7 + 0x68))(plVar7,&local_58);
      plVar7 = param_1 + 4;
      if (plVar7 != plVar9) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        *plVar7 = *plVar9;
        *plVar9 = 0;
        *(int *)(param_1 + 5) = (int)plVar9[1];
        *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)plVar9 + 0xc);
        plVar9[1] = 0;
      }
      if (local_58 != (undefined8 **)0x0) {
        FMemory::Free();
      }
    }
    local_68 = (undefined8 *)0x0;
    local_60 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    puVar12 = local_68;
    FGenericPlatformString::Memcpy(local_68,L"Default Device",0x1e);
    ppuVar1 = (undefined8 **)(param_1 + 6);
    if (ppuVar1 == &local_68) {
      if (puVar12 != (undefined8 *)0x0) {
        FMemory::Free(puVar12);
      }
    }
    else {
      if (*ppuVar1 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      *ppuVar1 = puVar12;
      *(uint *)(param_1 + 7) = (uint)local_60;
      *(uint *)((longlong)param_1 + 0x3c) = local_60._4_4_;
    }
    *(undefined4 *)(param_1 + 8) = 0xdef00003;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0x47ed9c6d;
    *(undefined4 *)(param_1 + 9) = 0xda4df1aa;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x35c2b8f;
    TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 10,0);
    local_68 = (undefined8 *)0x0;
    local_60 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,L"Default Device",0x1e);
    local_58 = &local_68;
    local_50 = ppuVar1;
    TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo_const_&>_>
              (param_1 + 10,&local_res8,&local_58,0);
    if (local_68 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    iVar5 = _guard_xfg_dispatch_icall_nop(CaptureDeviceCallback,param_1);
    if (-1 < iVar5) {
      local_res10[0] = 0;
      if ((DAT_1468b6148 != 0) &&
         (cVar4 = FConfigCacheIni::GetBool
                            (DAT_1468b6148,L"Voice",L"bDuckingOptOut",local_res10,&DAT_1468e2360),
         cVar4 == '\0')) {
        local_res10[0] = 0;
      }
      uVar3 = local_res10[0];
      local_res18 = (longlong *)0x0;
      HVar6 = CoCreateInstance((IID *)&DAT_144177ea8,(LPUNKNOWN)0x0,1,(IID *)&DAT_144177eb8,
                               &local_res18);
      if (-1 < HVar6) {
        local_res8 = (longlong *)0x0;
        iVar5 = (**(code **)(*local_res18 + 0x20))(local_res18,0,0,&local_res8);
        if (-1 < iVar5) {
          (**(code **)(*local_res8 + 0x28))(local_res8,&local_res20);
          CoTaskMemFree(local_res20);
          FAudioDuckingWindows::EnableDuckingOptOut(local_res8,uVar3);
          (**(code **)(*local_res8 + 0x10))();
        }
        (**(code **)(*local_res18 + 0x10))();
      }
      *(undefined1 *)(param_1 + 2) = 1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142c5f020 FUN_142c5f020 body=538 status=ok
// SIG undefined FUN_142c5f020(void)

ulonglong FUN_142c5f020(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  uint in_stack_ffffffffffffffb8;
  
  uVar2 = param_4 & 0xffffffff;
  if (DAT_146b2fb40 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (*(int *)(param_2 + 8) < 2) {
    param_2 = DAT_146b2fb40 + 0x30;
    uVar2 = param_4;
  }
  else {
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar1 + 0x38) < DAT_146b2fb78) {
      _Init_thread_header(&DAT_146b2fb78);
      if (DAT_146b2fb78 == -1) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        DAT_146b2fb70 =
             (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"voice.SilenceDetectionAttackTime")
        ;
        _Init_thread_footer(&DAT_146b2fb78);
      }
    }
    if (*(int *)(lVar1 + 0x38) < DAT_146b2fb88) {
      _Init_thread_header(&DAT_146b2fb88);
      if (DAT_146b2fb88 == -1) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        DAT_146b2fb80 =
             (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"voice.SilenceDetectionReleaseTime");
        _Init_thread_footer(&DAT_146b2fb88);
      }
    }
    uVar4 = (**(code **)(*DAT_146b2fb80 + 0x70))();
    uVar5 = (**(code **)(*DAT_146b2fb70 + 0x70))();
    in_stack_ffffffffffffffb8 = 0;
    Audio::FEnvelopeFollower::Init(param_1 + 200,(float)(int)param_3,uVar5,uVar4,2,0);
    fVar6 = (float)(**(code **)(*DAT_146b2fb70 + 0x70))();
    iVar3 = (int)(fVar6 * (float)(int)param_3 * 0.001);
    FVoiceDelayBuffer<short>::Init(param_1 + 0x98,iVar3 + 1);
    iVar3 = *(int *)(param_1 + 0xa8) - iVar3;
    if (iVar3 < 0) {
      iVar3 = iVar3 + *(int *)(param_1 + 0xa0);
    }
    *(int *)(param_1 + 0xac) = iVar3;
    *(undefined1 *)(param_1 + 0xf0) = 0;
    param_3 = param_3 & 0xffffffff;
  }
  uVar2 = FUN_142c5dc00(param_1,param_2,param_3,uVar2,in_stack_ffffffffffffffb8 & 0xffffff00);
  return uVar2;
}



// FUNCTION 142c5f240 Init body=166 status=ok
// SIG undefined Init(void)

bool FVoiceDecoderOpus::Init(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (((((param_2 == 8000) || (param_2 == 12000)) || (param_2 == 16000)) ||
      ((param_2 == 24000 || (param_2 == 48000)))) && (param_3 - 1U < 2)) {
    *(int *)(param_1 + 3) = param_2;
    *(int *)((longlong)param_1 + 0x1c) = param_3;
    *(int *)(param_1 + 4) = param_2 / 0x32;
    iVar1 = opus_decoder_get_size(param_3);
    lVar2 = FMemory::Malloc((longlong)iVar1,0);
    param_1[5] = lVar2;
    iVar1 = opus_decoder_init(lVar2,(int)param_1[3],*(undefined4 *)((longlong)param_1 + 0x1c));
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
    return iVar1 == 0;
  }
  return false;
}



// FUNCTION 142c5f2f0 Init body=286 status=ok
// SIG undefined Init(void)

bool FVoiceEncoderOpus::Init(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (((((param_2 == 8000) || (param_2 == 12000)) || (param_2 == 16000)) ||
      ((param_2 == 24000 || (param_2 == 48000)))) && (param_3 - 1U < 2)) {
    *(int *)(param_1 + 3) = param_2;
    *(int *)((longlong)param_1 + 0x1c) = param_3;
    *(int *)(param_1 + 4) = param_2 / 0x32;
    iVar1 = opus_encoder_get_size(param_3);
    lVar2 = FMemory::Malloc((longlong)iVar1,0);
    param_1[5] = lVar2;
    iVar1 = opus_encoder_init(lVar2,(int)param_1[3],*(undefined4 *)((longlong)param_1 + 0x1c),
                              (param_4 == '\x01') + 0x800);
    if (iVar1 == 0) {
      opus_encoder_ctl(param_1[5],0xfa6,1);
      opus_encoder_ctl(param_1[5],0xfb4,0);
      opus_encoder_ctl(param_1[5],0xfaa,1);
      opus_encoder_ctl(param_1[5],0xfac,0);
      return true;
    }
    (**(code **)(*param_1 + 0x38))(param_1);
    return iVar1 == 0;
  }
  return false;
}



// FUNCTION 142c5f410 InitializeModule body=105 status=ok
// SIG undefined InitializeModule(void)

undefined8 * FStaticallyLinkedModuleRegistrant<FVoiceModule>::InitializeModule(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = IModuleInterface::vftable;
    FSelfRegisteringExec::FSelfRegisteringExec(puVar1 + 1);
    *puVar1 = &PTR__scalar_deleting_destructor__14583a270;
    puVar1[1] = &PTR_LAB_14583a2d0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142c5f480 IsCapturing body=55 status=ok
// SIG undefined IsCapturing(void)

ulonglong FVoiceCaptureWindows::IsCapturing(longlong param_1)

{
  longlong *plVar1;
  undefined4 local_res8 [8];
  
  plVar1 = *(longlong **)(*(ulonglong *)(param_1 + 0x30) + 0x28);
  if (plVar1 != (longlong *)0x0) {
    local_res8[0] = 0;
    (**(code **)(*plVar1 + 0x30))(plVar1,local_res8);
    return (ulonglong)((byte)local_res8[0] & 1);
  }
  return *(ulonglong *)(param_1 + 0x30) & 0xffffffffffffff00;
}



// FUNCTION 142c5f4c0 FUN_142c5f4c0 body=1637 status=ok
// SIG undefined FUN_142c5f4c0(void)

ulonglong FUN_142c5f4c0(longlong param_1)

{
  undefined2 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  void *_Dst;
  short *psVar10;
  void *_Src;
  short sVar11;
  int iVar12;
  int iVar13;
  void *_Dst_00;
  int iVar14;
  size_t _Size;
  uint uVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  uint local_res8 [2];
  uint local_res10 [2];
  int local_res18 [2];
  int local_res20;
  undefined4 local_88;
  uint local_84;
  uint local_80;
  longlong local_78;
  longlong local_70;
  void *local_68;
  void *local_60;
  
  iVar13 = 0;
  local_88 = 0;
  local_res18[0] = 0;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x28);
  if (plVar3 == (longlong *)0x0) {
    uVar8 = 0x80004005;
  }
  else {
    uVar8 = (**(code **)(*plVar3 + 0x20))(plVar3,&local_88,local_res18);
    if (-1 < (int)uVar8) {
      lVar4 = *(longlong *)(param_1 + 0x30);
      uVar8 = (ulonglong)(uint)((*(int *)(lVar4 + 0x78) - *(int *)(lVar4 + 0x88)) + local_res18[0]);
      uVar5 = uVar8 % (ulonglong)*(uint *)(lVar4 + 0x78);
      if ((int)uVar5 == 0) {
        return uVar8 / *(uint *)(lVar4 + 0x78);
      }
      local_res8[0] = 0;
      local_70 = 0;
      local_res10[0] = 0;
      local_78 = 0;
      uVar8 = (**(code **)(**(longlong **)(lVar4 + 0x28) + 0x40))
                        (*(longlong **)(lVar4 + 0x28),*(int *)(lVar4 + 0x88),uVar5,&local_70,
                         local_res8,&local_78,local_res10,0);
      if (-1 < (int)uVar8) {
        uVar16 = *(uint *)(param_1 + 0x54);
        iVar12 = *(int *)(param_1 + 0x50);
        local_84 = local_res10[0];
        local_80 = local_res8[0];
        if (uVar16 < local_res10[0] + iVar12 + local_res8[0]) {
          *(undefined4 *)(param_1 + 0x50) = 0;
          if (*(uint *)(param_1 + 0x54) != uVar16) {
            local_res20 = iVar12;
            TArray<unsigned_char,FDefaultAllocator>::ResizeTo();
          }
          iVar12 = *(int *)(param_1 + 0x50);
          uVar16 = *(uint *)(param_1 + 0x54);
          *(undefined4 *)(param_1 + 0x40) = 3;
        }
        uVar15 = uVar16;
        if (local_res8[0] <= uVar16) {
          uVar15 = local_res8[0];
        }
        uVar7 = uVar16 - uVar15;
        if (local_res10[0] <= uVar16 - uVar15) {
          uVar7 = local_res10[0];
        }
        local_res10[0] = uVar7;
        iVar14 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xc4);
        if (*(int *)(param_1 + 0xc0) < *(int *)(param_1 + 0xc4)) {
          iVar14 = iVar14 + *(int *)(param_1 + 0xb8);
        }
        iVar14 = uVar15 + iVar14 * 2 + local_res10[0] + *(int *)(param_1 + 0x50);
        *(int *)(param_1 + 0x50) = iVar14;
        local_res8[0] = uVar15;
        local_res20 = iVar12;
        if (*(int *)(param_1 + 0x54) < iVar14) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x48));
        }
        iVar14 = *(int *)(param_1 + 0xc4);
        local_60 = (void *)local_70;
        iVar9 = *(int *)(param_1 + 0xc0) - iVar14;
        _Dst_00 = (void *)((longlong)iVar12 + *(longlong *)(param_1 + 0x48));
        if (*(int *)(param_1 + 0xc0) < iVar14) {
          iVar9 = iVar9 + *(int *)(param_1 + 0xb8);
        }
        iVar12 = *(int *)(param_1 + 0xb8);
        iVar2 = *(int *)(param_1 + 0xc0);
        iVar14 = iVar14 % iVar12;
        *(int *)(param_1 + 0xc4) = iVar14;
        iVar17 = (iVar2 - iVar14) + iVar12;
        if (iVar14 <= iVar2) {
          iVar17 = iVar2 - iVar14;
        }
        if (iVar9 <= iVar17) {
          iVar17 = iVar9;
        }
        iVar9 = iVar13;
        if (iVar17 != 0) {
          _Src = (void *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar14 * 2);
          if (iVar2 < iVar14) {
            iVar12 = iVar12 - iVar14;
            _guard_xfg_dispatch_icall_nop(_Dst_00,_Src,(longlong)iVar12);
            _Src = *(void **)(param_1 + 0xb0);
            _Dst = (void *)((longlong)_Dst_00 + (longlong)iVar12 * 2);
            _Size = (size_t)(iVar17 - iVar12);
          }
          else {
            _Size = (longlong)iVar17 * 2;
            _Dst = _Dst_00;
          }
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
          *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + iVar17;
          iVar9 = iVar17;
        }
        local_68 = (void *)((longlong)_Dst_00 + (longlong)iVar9 * 2);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146b2fb98) &&
           (_Init_thread_header(&DAT_146b2fb98), DAT_146b2fb98 == -1)) {
          if (DAT_1468b1f88 == (longlong *)0x0) {
            IConsoleManager::SetupSingleton();
          }
          DAT_146b2fb90 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))();
          _Init_thread_footer(&DAT_146b2fb98);
        }
        fVar18 = (float)(**(code **)(*DAT_146b2fb90 + 0x70))();
        bVar6 = false;
        uVar16 = local_res8[0] >> 1;
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x60);
        if (uVar16 != 0) {
          uVar15 = *(uint *)(param_1 + 0x74);
          iVar12 = iVar13;
          do {
            uVar8 = (ulonglong)uVar15;
            sVar11 = 0;
            if (0 < (int)uVar15) {
              psVar10 = (short *)((longlong)local_60 + (longlong)iVar12 * 2);
              do {
                sVar11 = sVar11 + *psVar10;
                psVar10 = psVar10 + 1;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            Audio::FEnvelopeFollower::ProcessAudio(param_1 + 200,sVar11);
            iVar14 = *(int *)(param_1 + 0xa8) % *(int *)(param_1 + 0xa0);
            *(int *)(param_1 + 0xa8) = iVar14 + 1;
            *(short *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar14 * 2) = sVar11;
            iVar14 = *(int *)(param_1 + 0xac) % *(int *)(param_1 + 0xa0);
            *(int *)(param_1 + 0xac) = iVar14 + 1;
            uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar14 * 2);
            fVar19 = (float)FUN_1408e43d0(param_1 + 200);
            *(bool *)(param_1 + 0xf0) = fVar18 < fVar19;
            if (fVar18 < fVar19) {
              if (bVar6) {
                iVar14 = *(int *)(param_1 + 0xc0) % *(int *)(param_1 + 0xb8);
                *(int *)(param_1 + 0xc0) = iVar14 + 1;
                *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar14 * 2) = uVar1;
                if (*(char *)(param_1 + 0x70) == '\0') {
                  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
                  *(undefined1 *)(param_1 + 0x70) = 1;
                }
              }
              else {
                iVar9 = iVar9 + 1;
                *(undefined2 *)((longlong)local_68 + (longlong)iVar12 * 2) = uVar1;
              }
            }
            else {
              bVar6 = true;
            }
            uVar15 = *(uint *)(param_1 + 0x74);
            *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 1;
            iVar12 = iVar12 + uVar15;
          } while (iVar12 < (int)uVar16);
        }
        local_60 = (void *)((longlong)local_68 + (ulonglong)uVar16 * 2);
        uVar16 = local_res10[0] >> 1;
        local_68 = (void *)local_78;
        if (uVar16 != 0) {
          uVar15 = *(uint *)(param_1 + 0x74);
          do {
            uVar8 = (ulonglong)uVar15;
            sVar11 = 0;
            if (0 < (int)uVar15) {
              psVar10 = (short *)((longlong)local_68 + (longlong)iVar13 * 2);
              do {
                sVar11 = sVar11 + *psVar10;
                psVar10 = psVar10 + 1;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            Audio::FEnvelopeFollower::ProcessAudio(param_1 + 200,sVar11);
            iVar12 = *(int *)(param_1 + 0xa8) % *(int *)(param_1 + 0xa0);
            *(int *)(param_1 + 0xa8) = iVar12 + 1;
            *(short *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar12 * 2) = sVar11;
            iVar12 = *(int *)(param_1 + 0xac) % *(int *)(param_1 + 0xa0);
            *(int *)(param_1 + 0xac) = iVar12 + 1;
            uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar12 * 2);
            fVar19 = (float)FUN_1408e43d0(param_1 + 200);
            *(bool *)(param_1 + 0xf0) = fVar18 < fVar19;
            if (fVar18 < fVar19) {
              if (bVar6) {
                iVar12 = *(int *)(param_1 + 0xc0) % *(int *)(param_1 + 0xb8);
                *(int *)(param_1 + 0xc0) = iVar12 + 1;
                *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar12 * 2) = uVar1;
                if (*(char *)(param_1 + 0x70) == '\0') {
                  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
                  *(undefined1 *)(param_1 + 0x70) = 1;
                }
              }
              else {
                iVar9 = iVar9 + 1;
                *(undefined2 *)((longlong)local_60 + (longlong)iVar13 * 2) = uVar1;
              }
            }
            else {
              bVar6 = true;
            }
            uVar15 = *(uint *)(param_1 + 0x74);
            *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 1;
            iVar13 = iVar13 + uVar15;
          } while (iVar13 < (int)uVar16);
        }
        if (*(char *)(param_1 + 0x70) == '\0') {
          *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
        }
        *(undefined1 *)(param_1 + 0x70) = 0;
        iVar13 = *(int *)(param_1 + 0x50);
        iVar12 = local_res20 + iVar9 * 2;
        if (iVar13 < iVar12) {
          *(int *)(param_1 + 0x50) = iVar12;
          if (*(int *)(param_1 + 0x54) < iVar12) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x48);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar13 + *(longlong *)(param_1 + 0x48)),0,
                     (longlong)(iVar12 - iVar13));
        }
        else if ((iVar12 < iVar13) && (iVar12 != iVar13)) {
          *(int *)(param_1 + 0x50) = iVar12;
        }
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x28);
        (**(code **)(*plVar3 + 0x58))(plVar3,local_70,local_80,local_78,local_84);
        lVar4 = *(longlong *)(param_1 + 0x30);
        *(uint *)(lVar4 + 0x88) = (local_res8[0] + *(int *)(lVar4 + 0x88)) % *(uint *)(lVar4 + 0x78)
        ;
        lVar4 = *(longlong *)(param_1 + 0x30);
        local_res10[0] = local_res10[0] + *(int *)(lVar4 + 0x88);
        uVar16 = *(uint *)(lVar4 + 0x78);
        *(uint *)(lVar4 + 0x88) = local_res10[0] % uVar16;
        *(uint *)(param_1 + 0x40) = (iVar9 < 1) + 2;
        return (ulonglong)local_res10[0] / (ulonglong)uVar16;
      }
      *(undefined4 *)(param_1 + 0x40) = 6;
      return uVar8;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 6;
  if (((int)uVar8 == -0x7787ff88) || ((int)uVar8 == -0x7787fff6)) {
    *(undefined1 *)(param_1 + 0x94) = 1;
  }
  return uVar8;
}



// FUNCTION 142c5fb30 Reset body=158 status=ok
// SIG undefined Reset(void)

void FVoiceCaptureWindowsVars::Reset(undefined8 *param_1)

{
  if ((undefined1 *)param_1[0x10] != &DAT_ffffffffffffffff) {
    CloseHandle((undefined1 *)param_1[0x10]);
    param_1[0x10] = 0xffffffffffffffff;
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
    param_1[5] = 0;
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    param_1[2] = 0;
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}



// FUNCTION 142c5fc10 SetBitrate body=56 status=ok
// SIG undefined SetBitrate(void)

bool FVoiceEncoderOpus::SetBitrate(longlong param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 - 500U < 0x7ce0d) && (*(longlong *)(param_1 + 0x28) != 0)) {
    iVar1 = opus_encoder_ctl(*(longlong *)(param_1 + 0x28),0xfa2,param_2);
    return iVar1 == 0;
  }
  return false;
}



// FUNCTION 142c5fc50 SetComplexity body=48 status=ok
// SIG undefined SetComplexity(void)

bool FVoiceEncoderOpus::SetComplexity(longlong param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 < 0xb) && (*(longlong *)(param_1 + 0x28) != 0)) {
    iVar1 = opus_encoder_ctl(*(longlong *)(param_1 + 0x28),0xfaa,param_2);
    return iVar1 == 0;
  }
  return false;
}



// FUNCTION 142c5fc80 SetVBR body=44 status=ok
// SIG undefined SetVBR(void)

bool FVoiceEncoderOpus::SetVBR(longlong param_1,undefined1 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    iVar1 = opus_encoder_ctl(*(longlong *)(param_1 + 0x28),0xfa6,param_2);
    return iVar1 == 0;
  }
  return false;
}



// FUNCTION 142c5fcb0 Shutdown body=37 status=ok
// SIG undefined Shutdown(void)

void FVoiceCaptureWindows::Shutdown(longlong *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  FVoiceCaptureWindowsVars::Reset(param_1[6]);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 142c5fce0 FUN_142c5fce0 body=74 status=ok
// SIG undefined FUN_142c5fce0(void)

undefined8 FUN_142c5fce0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x28);
  if (plVar1 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,1);
    if (-1 < iVar2) {
      *(undefined4 *)(param_1 + 0x40) = 3;
      return 1;
    }
    if (iVar2 == -0x7787ff88) {
      *(undefined1 *)(param_1 + 0x94) = 1;
    }
  }
  return 0;
}



// FUNCTION 142c5fd30 Stop body=54 status=ok
// SIG undefined Stop(void)

void FVoiceCaptureWindows::Stop(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x28);
  if (((plVar1 != (longlong *)0x0) && (*(int *)(param_1 + 0x40) != 4)) &&
     (*(int *)(param_1 + 0x40) != 1)) {
    (**(code **)(*plVar1 + 0x50))();
    *(undefined4 *)(param_1 + 0x40) = 4;
  }
  return;
}



// FUNCTION 142c5fd70 FUN_142c5fd70 body=494 status=ok
// SIG undefined FUN_142c5fd70(void)

undefined8 FUN_142c5fd70(longlong param_1,float param_2)

{
  longlong *plVar1;
  undefined1 *hHandle;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  undefined1 local_res10 [8];
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  param_2 = param_2 + *(float *)(param_1 + 0x78);
  *(float *)(param_1 + 0x78) = param_2;
  if (((1.0 <= param_2) && (*(undefined4 *)(param_1 + 0x78) = 0, *(char *)(param_1 + 0x7c) != '\0'))
     && (*(undefined1 *)(param_1 + 0x7c) = 0, lVar2 = DAT_146b2fb40, DAT_146b2fb40 != 0)) {
    local_38 = 0;
    local_30 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    lVar3 = local_38;
    FGenericPlatformString::Memcpy(local_38,L"Default Device",0x1e);
    plVar1 = (longlong *)(lVar2 + 0x30);
    if (plVar1 == &local_38) {
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
    else {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = lVar3;
      *(undefined4 *)(lVar2 + 0x38) = (undefined4)local_30;
      *(undefined4 *)(lVar2 + 0x3c) = local_30._4_4_;
    }
    *(undefined4 *)(lVar2 + 0x40) = 0xdef00003;
    *(undefined4 *)(lVar2 + 0x44) = 0x47ed9c6d;
    *(undefined4 *)(lVar2 + 0x48) = 0xda4df1aa;
    *(undefined4 *)(lVar2 + 0x4c) = 0x35c2b8f;
    TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
    ::Empty(lVar2 + 0x50,0);
    local_38 = 0;
    local_30 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"Default Device",0x1e);
    local_28 = &local_38;
    local_20 = plVar1;
    TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo_const_&>_>
              (lVar2 + 0x50,local_res10,&local_28,0);
    if (local_38 != 0) {
      FMemory::Free();
    }
    _guard_xfg_dispatch_icall_nop(CaptureDeviceCallback,lVar2);
    cVar4 = FUN_142c5dc00(param_1 + -0x18,param_1 + 0x60,*(undefined4 *)(param_1 + 0x70),
                          *(undefined4 *)(param_1 + 0x74),1);
    if (cVar4 != '\0') {
      (**(code **)(*(longlong *)(param_1 + -0x18) + 0x18))(param_1 + -0x18);
    }
  }
  if (1 < *(uint *)(param_1 + 0x28)) {
    FUN_142c5f4c0(param_1 + -0x18);
    hHandle = *(undefined1 **)(*(longlong *)(param_1 + 0x18) + 0x80);
    if ((hHandle != &DAT_ffffffffffffffff) && (DVar5 = WaitForSingleObject(hHandle,0), DVar5 == 0))
    {
      ResetEvent(*(HANDLE *)(*(longlong *)(param_1 + 0x18) + 0x80));
      *(undefined4 *)(param_1 + 0x28) = 1;
      *(undefined4 *)(param_1 + 0x38) = 0;
      if (*(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0x3c)) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo();
      }
    }
  }
  return 1;
}



// FUNCTION 142c5ff60 FUN_142c5ff60 body=550 status=ok
// SIG undefined FUN_142c5ff60(void)

undefined4 * FUN_142c5ff60(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  void *_Src;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  puVar1 = (undefined1 *)param_1[1];
  *param_2 = *(undefined4 *)*param_1;
  *(undefined1 *)(param_2 + 2) = *puVar1;
  param_2[3] = *(undefined4 *)(puVar1 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  iVar5 = *(int *)(puVar1 + 0x10);
  _Src = *(void **)(puVar1 + 8);
  param_2[6] = iVar5;
  if (iVar5 == 0) {
    param_2[7] = 0;
  }
  else {
    TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(param_2 + 4,iVar5,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_2 + 4),_Src,(longlong)iVar5 * 0x38);
  }
  param_2[8] = *(undefined4 *)(puVar1 + 0x18);
  param_2[9] = *(undefined4 *)(puVar1 + 0x1c);
  param_2[10] = *(undefined4 *)(puVar1 + 0x20);
  param_2[0xb] = *(undefined4 *)(puVar1 + 0x24);
  *(undefined1 *)(param_2 + 0xc) = puVar1[0x28];
  *(undefined1 *)((longlong)param_2 + 0x31) = puVar1[0x29];
  *(undefined8 *)(param_2 + 0xd) = *(undefined8 *)(puVar1 + 0x2c);
  param_2[0xf] = *(undefined4 *)(puVar1 + 0x34);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(puVar1 + 0x38);
  param_2[0x12] = *(undefined4 *)(puVar1 + 0x40);
  *(undefined1 *)(param_2 + 0x13) = puVar1[0x44];
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(puVar1 + 0x48);
  param_2[0x16] = *(undefined4 *)(puVar1 + 0x50);
  *(undefined8 *)(param_2 + 0x17) = *(undefined8 *)(puVar1 + 0x54);
  param_2[0x19] = *(undefined4 *)(puVar1 + 0x5c);
  param_2[0x1a] = *(undefined4 *)(puVar1 + 0x60);
  *(undefined1 *)(param_2 + 0x1b) = puVar1[100];
  *(undefined1 *)((longlong)param_2 + 0x6d) = puVar1[0x65];
  *(undefined8 *)(param_2 + 0x1c) = 0;
  iVar5 = *(int *)(puVar1 + 0x70);
  lVar2 = *(longlong *)(puVar1 + 0x68);
  param_2[0x1e] = iVar5;
  if (iVar5 == 0) {
    param_2[0x1f] = 0;
  }
  else {
    TArray<FDungeonMarkerInfo,FDefaultAllocator>::ResizeForCopy(param_2 + 0x1c,iVar5,0);
    puVar3 = (undefined4 *)(lVar2 + 0x18);
    puVar4 = *(undefined8 **)(param_2 + 0x1c) + 3;
    puVar6 = *(undefined8 **)(param_2 + 0x1c);
    do {
      *puVar6 = *(undefined8 *)(puVar3 + -6);
      *(undefined4 *)(puVar6 + 1) = puVar3[-4];
      *(undefined4 *)(puVar4 + -1) = puVar3[-2];
      *(undefined4 *)((longlong)puVar4 + -4) = puVar3[-1];
      *(undefined4 *)puVar4 = *puVar3;
      *(undefined4 *)((longlong)puVar4 + 4) = puVar3[1];
      puVar4[1] = *(undefined8 *)(puVar3 + 2);
      *(undefined4 *)(puVar4 + 2) = puVar3[4];
      *(undefined8 *)((longlong)puVar4 + 0x14) = *(undefined8 *)(puVar3 + 5);
      *(undefined4 *)((longlong)puVar4 + 0x1c) = puVar3[7];
      *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(puVar3 + 8);
      puVar4[5] = *(undefined8 *)(puVar3 + 10);
      iVar5 = iVar5 + -1;
      puVar3 = puVar3 + 0x14;
      puVar4 = puVar4 + 10;
      puVar6 = puVar6 + 10;
    } while (iVar5 != 0);
  }
  *(undefined1 *)(param_2 + 0x20) = puVar1[0x78];
  *(undefined8 *)(param_2 + 0x21) = *(undefined8 *)(puVar1 + 0x7c);
  param_2[0x23] = *(undefined4 *)(puVar1 + 0x84);
  *(undefined1 *)(param_2 + 0x24) = puVar1[0x88];
  *(undefined8 *)(param_2 + 0x25) = *(undefined8 *)(puVar1 + 0x8c);
  param_2[0x27] = *(undefined4 *)(puVar1 + 0x94);
  *(undefined1 *)(param_2 + 0x28) = puVar1[0x98];
  param_2[0x29] = *(undefined4 *)(puVar1 + 0x9c);
  *(undefined1 *)(param_2 + 0x2a) = puVar1[0xa0];
  *(undefined1 *)((longlong)param_2 + 0xa9) = puVar1[0xa1];
  return param_2;
}



// FUNCTION 142c60190 FUN_142c60190 body=37 status=ok
// SIG undefined FUN_142c60190(void)

ulonglong FUN_142c60190(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  piVar1 = piVar2 + *(int *)(param_1 + 1);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *param_2) {
        return CONCAT71((int7)((ulonglong)piVar2 >> 8),1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return (ulonglong)piVar2 & 0xffffffffffffff00;
}



// FUNCTION 142c601c0 FUN_142c601c0 body=330 status=ok
// SIG undefined FUN_142c601c0(void)

undefined8 FUN_142c601c0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  bool bVar12;
  
  puVar8 = (undefined8 *)*param_1;
  puVar11 = puVar8 + (longlong)(int)param_1[1] * 2;
  if (puVar8 != puVar11) {
    plVar9 = (longlong *)0x0;
    do {
      plVar3 = (longlong *)puVar8[1];
      plVar6 = plVar3;
      plVar10 = plVar9;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar12 = iVar5 == 0;
        if (bVar12) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar6 = plVar9, !bVar12) {
          LOCK();
          bVar12 = iVar5 == (int)plVar3[1];
          if (bVar12) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar12) {
            plVar6 = plVar3;
            plVar10 = (longlong *)*puVar8;
            break;
          }
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar12 = iVar5 == 0;
          if (bVar12) {
            *(int *)(plVar3 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      plVar3 = (longlong *)param_2[1];
      plVar7 = plVar9;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar12 = iVar5 == 0;
        if (bVar12) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar7 = (longlong *)0x0, !bVar12) {
          LOCK();
          bVar12 = iVar5 == (int)plVar3[1];
          if (bVar12) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar12) {
            plVar7 = (longlong *)0x0;
            if (plVar3 != (longlong *)0x0) {
              plVar7 = (longlong *)*param_2;
              LOCK();
              plVar1 = plVar3 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar5 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar12 = iVar5 == 0;
          if (bVar12) {
            *(int *)(plVar3 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar6 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      if (plVar10 == plVar7) {
        return 1;
      }
      puVar8 = puVar8 + 2;
    } while (puVar8 != puVar11);
  }
  return 0;
}



// FUNCTION 142c60310 FUN_142c60310 body=65 status=ok
// SIG undefined FUN_142c60310(void)

longlong FUN_142c60310(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  FUN_142c61230(param_1,local_res8,&local_18,0);
  return *param_1 + (longlong)local_res8[0] * 0xb8 + 8;
}



// FUNCTION 142c60360 FUN_142c60360 body=603 status=ok
// SIG undefined FUN_142c60360(void)

int * FUN_142c60360(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  void *_Dst;
  uint uVar8;
  char cVar9;
  uint *_Src;
  bool bVar10;
  int local_res8 [2];
  uint local_res10;
  uint local_res14;
  undefined8 local_48;
  undefined8 local_40;
  
  iVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar6;
  local_48 = 0;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  local_40 = 0;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar6 & 0x1f);
  puVar2 = (uint *)*param_3;
  _Src = (uint *)((longlong)iVar6 * 0x20 + *param_1);
  *_Src = *puVar2;
  _Src[1] = puVar2[1];
  _Src[2] = 0;
  _Src[3] = 0;
  _Src[4] = 0;
  _Src[5] = 0;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_48);
  _Src[6] = 0xffffffff;
  bVar10 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = _Src[1];
    local_res10 = *_Src;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    bVar10 = local_res8[0] != -1;
    if (bVar10) {
      _Dst = (void *)((longlong)local_res8[0] * 0x20 + *param_1);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>((longlong)_Dst + 8)
      ;
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142c60597;
    }
  }
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar8) {
    uVar4 = (uVar8 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar9 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar7;
    }
    uVar4 = (uVar8 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar9 = '\x1f' - (char)iVar7;
    }
    iVar7 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar8 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar8 = (*_Src ^ _Src[1]) & (int)param_1[9] - 1U;
    _Src[7] = uVar8;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    _Src[6] = *(uint *)((longlong)plVar5 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142c60597:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 142c605c0 FUN_142c605c0 body=642 status=ok
// SIG undefined FUN_142c605c0(void)

int * FUN_142c605c0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  void *_Dst;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  bool bVar10;
  undefined8 local_38;
  undefined8 local_30;
  
  iVar6 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar5;
  local_38 = 0;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  local_30 = 0;
  puVar9 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar9 = *puVar9 | 1 << ((byte)iVar5 & 0x1f);
  puVar9 = (uint *)((longlong)iVar5 * 0x20 + *param_1);
  *puVar9 = *(uint *)*param_3;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  FUN_142c63830(&local_38);
  puVar9[6] = 0xffffffff;
  bVar10 = false;
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar8 != 1) {
    if (uVar8 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar9) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)((longlong)iVar5 * 0x20 + *param_1) == *puVar9) goto LAB_142c6071b;
          iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *param_1);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_142c6071b:
    bVar10 = iVar5 != -1;
    if (bVar10) {
      _Dst = (void *)((longlong)iVar5 * 0x20 + *param_1);
      FUN_142c63830((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar9,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_142c60819;
    }
  }
  if (3 < uVar8) {
    uVar3 = (uVar8 >> 1) + 8;
    iVar6 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar7 = '\0';
    if (uVar3 != 0) {
      iVar5 = 0x1f - iVar6;
    }
    uVar3 = (uVar8 >> 1) + 7;
    iVar6 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar7 = '\x1f' - (char)iVar6;
    }
    iVar6 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar7 & 0x1f);
  }
  if (((int)uVar8 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar8 = (int)param_1[9] - 1U & *puVar9;
    puVar9[7] = uVar8;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar9[6] = *(uint *)((longlong)plVar4 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142c60819:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 142c60850 FUN_142c60850 body=580 status=ok
// SIG undefined FUN_142c60850(void)

int * FUN_142c60850(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  void *_Dst;
  uint uVar8;
  char cVar9;
  uint *_Src;
  bool bVar10;
  int local_res8 [2];
  uint local_res10;
  uint local_res14;
  
  iVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar6 & 0x1f);
  puVar2 = (uint *)*param_3;
  bVar10 = false;
  _Src = (uint *)((longlong)iVar6 * 0x20 + *param_1);
  *_Src = *puVar2;
  _Src[1] = puVar2[1];
  _Src[2] = 0;
  _Src[3] = 0;
  _Src[4] = 0;
  _Src[5] = 0;
  _Src[6] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = _Src[1];
    local_res10 = *_Src;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    bVar10 = local_res8[0] != -1;
    if (bVar10) {
      _Dst = (void *)((longlong)local_res8[0] * 0x20 + *param_1);
      TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
      ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142c60a73;
    }
  }
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar8) {
    uVar4 = (uVar8 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar9 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar7;
    }
    uVar4 = (uVar8 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar9 = '\x1f' - (char)iVar7;
    }
    iVar7 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar8 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar8 = (_Src[1] ^ *_Src) & (int)param_1[9] - 1U;
    _Src[7] = uVar8;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    _Src[6] = *(uint *)((longlong)plVar5 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142c60a73:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 142c60aa0 FUN_142c60aa0 body=642 status=ok
// SIG undefined FUN_142c60aa0(void)

int * FUN_142c60aa0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  void *_Dst;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  bool bVar10;
  undefined8 local_38;
  undefined8 local_30;
  
  iVar6 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar5;
  local_38 = 0;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  local_30 = 0;
  puVar9 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar9 = *puVar9 | 1 << ((byte)iVar5 & 0x1f);
  puVar9 = (uint *)((longlong)iVar5 * 0x20 + *param_1);
  *puVar9 = *(uint *)*param_3;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_38);
  puVar9[6] = 0xffffffff;
  bVar10 = false;
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar8 != 1) {
    if (uVar8 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar9) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)((longlong)iVar5 * 0x20 + *param_1) == *puVar9) goto LAB_142c60bfb;
          iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *param_1);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_142c60bfb:
    bVar10 = iVar5 != -1;
    if (bVar10) {
      _Dst = (void *)((longlong)iVar5 * 0x20 + *param_1);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>((longlong)_Dst + 8)
      ;
      _guard_xfg_dispatch_icall_nop(_Dst,puVar9,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_142c60cf9;
    }
  }
  if (3 < uVar8) {
    uVar3 = (uVar8 >> 1) + 8;
    iVar6 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar7 = '\0';
    if (uVar3 != 0) {
      iVar5 = 0x1f - iVar6;
    }
    uVar3 = (uVar8 >> 1) + 7;
    iVar6 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar7 = '\x1f' - (char)iVar6;
    }
    iVar6 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar7 & 0x1f);
  }
  if (((int)uVar8 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar8 = (int)param_1[9] - 1U & *puVar9;
    puVar9[7] = uVar8;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar9[6] = *(uint *)((longlong)plVar4 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142c60cf9:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 142c60d30 FUN_142c60d30 body=575 status=ok
// SIG undefined FUN_142c60d30(void)

int * FUN_142c60d30(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  bool bVar12;
  int local_res8 [2];
  uint local_res10;
  uint local_res14;
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar8 * 0x18);
  puVar3 = (uint *)*param_3;
  puVar4 = (uint *)param_3[1];
  bVar12 = false;
  *puVar1 = *puVar3;
  puVar1[1] = puVar3[1];
  puVar1[2] = *puVar4;
  puVar1[3] = puVar4[1];
  puVar1[4] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = puVar1[1];
    local_res10 = *puVar1;
    TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    bVar12 = local_res8[0] != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)local_res8[0] * 0x18),puVar1,0x10)
      ;
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142c60f4e;
    }
  }
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    uVar6 = (uVar10 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar11 = '\0';
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar9;
    }
    uVar6 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar11 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar10 = (*puVar1 ^ puVar1[1]) & (int)param_1[9] - 1U;
    puVar1[5] = uVar10;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar1[4] = *(uint *)((longlong)plVar7 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142c60f4e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 142c60f70 FUN_142c60f70 body=692 status=ok
// SIG undefined FUN_142c60f70(void)

int * FUN_142c60f70(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  char *_Src;
  int iVar14;
  void *_Dst;
  bool local_res8;
  
  iVar10 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar8 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar8 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar11;
  local_res8 = false;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar3 = *puVar3 | 1 << ((byte)iVar11 & 0x1f);
  puVar4 = (undefined8 *)param_3[1];
  _Src = (char *)((longlong)iVar11 * 0x20 + *param_1);
  *_Src = *(char *)*param_3;
  *(undefined8 *)(_Src + 8) = *puVar4;
  *(undefined8 *)(_Src + 0x10) = puVar4[1];
  puVar4[1] = 0;
  *puVar4 = 0;
  _Src[0x18] = -1;
  _Src[0x19] = -1;
  _Src[0x1a] = -1;
  _Src[0x1b] = -1;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar9 = iVar14;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)*_Src) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(char *)((longlong)iVar8 * 0x20 + *param_1) == *_Src) break;
          iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *param_1);
          iVar9 = iVar14;
        } while (iVar8 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar9 * 0x20 + *param_1);
      plVar7 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar9;
      goto LAB_142c611ff;
    }
  }
  if (3 < uVar13) {
    uVar6 = (uVar13 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar14 = 0x20;
    if (uVar6 != 0) {
      iVar14 = 0x1f - iVar10;
    }
    uVar6 = (uVar13 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar6 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar14 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar13 = (int)param_1[9] - 1U & (int)*_Src;
    *(uint *)(_Src + 0x1c) = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x18) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    FUN_142c7f720(param_1);
  }
LAB_142c611ff:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142c61230 FUN_142c61230 body=758 status=ok
// SIG undefined FUN_142c61230(void)

int * FUN_142c61230(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  bool local_res8;
  
  iVar6 = 1;
  iVar12 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar1 = *(int *)((longlong)iVar7 * 0xb8 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0xb8 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar11 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar11 = *puVar11 | 1 << ((byte)iVar7 & 0x1f);
  puVar11 = (uint *)((longlong)iVar7 * 0xb8 + *param_1);
  FUN_142c5ff60(param_3,puVar11);
  puVar11[0x2c] = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar10 != 1) {
    iVar7 = iVar12;
    if (uVar10 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar11) * 4);
      if (iVar8 != -1) {
        do {
          iVar7 = iVar8;
          if (*(uint *)((longlong)iVar8 * 0xb8 + *param_1) == *puVar11) break;
          iVar8 = *(int *)((longlong)iVar8 * 0xb8 + 0xb0 + *param_1);
          iVar7 = iVar12;
        } while (iVar8 != -1);
      }
    }
    local_res8 = iVar7 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar7 * 0xb8 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x70) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar11,0xb0);
      iVar6 = *param_2;
      bVar2 = (byte)iVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xb8 + *param_1) = iVar6;
      }
      puVar4 = (undefined4 *)((longlong)iVar6 * 0xb8 + *param_1);
      *puVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar12 = (int)param_1[6];
      }
      puVar4[1] = iVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar6;
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar11 = (uint *)((longlong)plVar5 +
                        (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar11 = *puVar11 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_142c614fd;
    }
  }
  if (3 < uVar10) {
    uVar3 = (uVar10 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar9 = '\0';
    if (uVar3 != 0) {
      iVar6 = 0x1f - iVar12;
    }
    uVar3 = (uVar10 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar9 = '\x1f' - (char)iVar12;
    }
    iVar6 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar10 = (int)param_1[9] - 1U & *puVar11;
    puVar11[0x2d] = uVar10;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar11[0x2c] =
         *(uint *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142c614fd:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142c61530 FUN_142c61530 body=162 status=ok
// SIG undefined FUN_142c61530(void)

undefined8 FUN_142c61530(undefined8 param_1,longlong *param_2)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  uVar1 = FUN_142df81c0();
  local_10 = (int)param_2[1];
  lVar2 = (longlong)local_10;
  _Src = (void *)*param_2;
  local_18 = (void *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_18,local_10,0);
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar2 << 3);
  }
  FUN_142c9e5d0(param_1,&local_18,uVar1);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142c615e0 FUN_142c615e0 body=658 status=ok
// SIG undefined FUN_142c615e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_142c615e0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  uint uStack_d0;
  int iStack_cc;
  uint local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint *puStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  uint uStack_98;
  longlong local_88;
  ulonglong local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  undefined1 local_50 [8];
  ulonglong local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar9 = 0;
  puStack_a8 = (uint *)(param_1 + 2);
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar2 = (int)param_1[5];
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 1;
  local_d8._4_4_ = 0;
  uStack_d0 = 0;
  if (iVar2 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puStack_a8;
    }
    uVar1 = *puVar10;
    uVar8 = uVar9;
    uVar12 = uVar9;
    while (uVar1 == 0) {
      iVar6 = (int)uVar8;
      uStack_d0 = (int)uVar12 + 0x20;
      uVar12 = (ulonglong)uStack_d0;
      local_e8._0_4_ = iVar6 + 1;
      uVar8 = (ulonglong)(uint)local_e8;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_142c616f0;
      uVar1 = puVar10[(longlong)iVar6 + 1];
    }
    local_e8._4_4_ = -uVar1 & uVar1;
    iVar6 = 0x1f;
    if (local_e8._4_4_ != 0) {
      for (; local_e8._4_4_ >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (local_e8._4_4_ == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_d8._4_4_ = (uStack_d0 - iVar6) + 0x1f;
    if (iVar2 < local_d8._4_4_) {
LAB_142c616f0:
      local_d8._4_4_ = iVar2;
    }
  }
  uStack_a0 = 0xffffffff;
  iStack_9c = local_d8._4_4_;
  uStack_98 = uStack_d0;
  uStack_b0 = (uint)local_e8;
  uStack_ac = local_e8._4_4_;
  uStack_e0 = (uint)local_e8;
  uStack_dc = local_e8._4_4_;
  local_c8 = uStack_d0;
  uStack_d0 = 0xffffffff;
  iStack_cc = local_d8._4_4_;
  bVar4 = iVar2 <= local_d8._4_4_;
  uVar8 = uVar9;
  uVar12 = uVar9;
  local_e8 = param_1;
  local_b8 = param_1;
  local_d8 = puStack_a8;
  if (bVar4) {
LAB_142c6180d:
    lVar3 = param_2[1];
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_88);
    return (int)lVar3;
  }
  do {
    plVar5 = local_e8;
    lVar11 = (longlong)iStack_cc * 0x20;
    lVar3 = *local_e8;
    uVar1 = *(uint *)(lVar3 + lVar11);
    if ((int)uVar8 != (int)uVar9) {
      puVar7 = local_50;
      if (local_48 != 0) {
        puVar7 = (undefined1 *)0x0;
      }
      for (iVar2 = *(int *)(((ulonglong)puVar7 | local_48) +
                           (longlong)(int)((int)uVar12 - 1U & uVar1) * 4); iVar2 != -1;
          iVar2 = *(int *)(local_88 + 4 + (longlong)iVar2 * 0xc)) {
        if (*(uint *)(local_88 + (longlong)iVar2 * 0xc) == uVar1) {
          if (iVar2 != -1) goto LAB_142c617d7;
          break;
        }
      }
    }
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    *(undefined4 *)(*param_2 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar11 + lVar3);
    FUN_14044be50(&local_88,local_c0,*plVar5 + lVar11,0);
LAB_142c617d7:
    uStack_d0 = uStack_d0 & ~uStack_dc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
    if ((int)local_d8[6] <= iStack_cc) goto LAB_142c6180d;
    uVar9 = (ulonglong)local_54;
    uVar8 = local_80 & 0xffffffff;
    uVar12 = (ulonglong)local_40;
  } while( true );
}



// FUNCTION 142c61880 FUN_142c61880 body=232 status=ok
// SIG undefined FUN_142c61880(void)

undefined8 * FUN_142c61880(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0xc0);
  plVar5 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar5, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar5 = *(longlong **)(param_1 + 0xb8);
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  *param_2 = plVar5;
  param_2[1] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142c61970 FUN_142c61970 body=1054 status=ok
// SIG undefined FUN_142c61970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c61970(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int *piVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_108 [32];
  uint local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar17 = (ulonglong)(int)param_2;
  if (0 < (int)param_2) {
    iVar11 = 1;
    piVar14 = (int *)(param_1 + 0x1c);
    lVar15 = (uVar17 - 1 >> 1) + 1;
    do {
      if ((iVar11 < (int)param_2) && (piVar14[8] < *piVar14)) {
        puVar7 = (undefined8 *)((longlong)iVar11 * 0x20 + param_1);
        puVar9 = (undefined8 *)((longlong)(iVar11 + -1) * 0x20 + param_1);
        if (puVar9 != puVar7) {
          local_80 = *puVar9;
          uStack_78 = puVar9[1];
          local_70 = puVar9[2];
          uStack_68 = puVar9[3];
          uVar23 = *(undefined4 *)((longlong)puVar7 + 4);
          uVar24 = *(undefined4 *)(puVar7 + 1);
          uVar25 = *(undefined4 *)((longlong)puVar7 + 0xc);
          *(undefined4 *)puVar9 = *(undefined4 *)puVar7;
          *(undefined4 *)((longlong)puVar9 + 4) = uVar23;
          *(undefined4 *)(puVar9 + 1) = uVar24;
          *(undefined4 *)((longlong)puVar9 + 0xc) = uVar25;
          uVar4 = puVar7[3];
          puVar9[2] = puVar7[2];
          puVar9[3] = uVar4;
          *puVar7 = local_80;
          puVar7[1] = uStack_78;
          puVar7[2] = local_70;
          puVar7[3] = uStack_68;
        }
      }
      iVar11 = iVar11 + 2;
      piVar14 = piVar14 + 0x10;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  local_d8 = 2;
  uVar12 = uVar17;
  local_d0 = param_2;
  local_90 = uVar17;
  local_88 = param_1;
  if (2 < (int)param_2) {
    do {
      local_d4 = local_d8 * 2;
      local_dc = 0;
      local_cc = local_d8 * 2;
      local_a8 = 0;
      lVar15 = (longlong)local_d8 * 2;
      lVar16 = (longlong)local_d8 << 6;
      lVar20 = local_88;
      local_e4 = local_d8;
      local_a0 = lVar16;
      local_98 = lVar15;
      iVar11 = local_d4;
      iVar19 = local_cc;
      do {
        local_e0 = (int)uVar17 - local_dc;
        if (iVar11 <= local_e0) {
          local_e0 = iVar11;
        }
        iVar10 = 0;
        if (0 < local_e4) {
          do {
            if (local_e0 <= local_e4) break;
            lVar15 = 0;
            if (local_e4 - iVar10 != 0) {
              uVar17 = (longlong)(local_e4 - iVar10);
              do {
                uVar12 = uVar17 >> 1;
                if (*(int *)(((longlong)iVar10 + uVar12 + lVar15) * 0x20 + 0x1c + lVar20) <=
                    *(int *)((longlong)local_e4 * 0x20 + 0x1c + lVar20)) {
                  lVar15 = (ulonglong)((uint)uVar17 & 1) + uVar12 + lVar15;
                }
                uVar17 = uVar12;
              } while (uVar12 != 0);
            }
            iVar10 = iVar10 + (int)lVar15;
            if (local_e4 <= iVar10) break;
            uVar17 = 0;
            if (local_e0 - local_e4 != 0) {
              uVar12 = (longlong)(local_e0 - local_e4);
              do {
                uVar13 = uVar12 >> 1;
                if (*(int *)(((longlong)local_e4 + uVar13 + uVar17) * 0x20 + 0x1c + lVar20) <
                    *(int *)((longlong)iVar10 * 0x20 + 0x1c + lVar20)) {
                  uVar17 = (ulonglong)((uint)uVar12 & 1) + uVar13 + uVar17;
                }
                uVar12 = uVar13;
              } while (uVar13 != 0);
            }
            iVar11 = (int)uVar17;
            if (iVar11 != 0) {
              uVar17 = uVar17 & 0xffffffff;
              iVar18 = (iVar11 - iVar10) + local_e4;
              iVar19 = iVar18;
              do {
                iVar6 = (int)uVar17;
                uVar8 = iVar19 % iVar6;
                uVar17 = (ulonglong)uVar8;
                iVar19 = iVar6;
              } while (uVar8 != 0);
              uVar17 = 0;
              local_e8 = (uint)((longlong)iVar18 / (longlong)iVar6);
              uVar12 = (longlong)iVar18 / (longlong)iVar6 & 0xffffffff;
              if (0 < iVar6) {
                puVar7 = (undefined8 *)(lVar20 + 8 + (longlong)iVar10 * 0x20);
                do {
                  local_c8 = puVar7[-1];
                  iVar19 = (int)uVar17;
                  uStack_c0 = (longlong *)*puVar7;
                  *puVar7 = 0;
                  puVar7[-1] = 0;
                  local_b8 = puVar7[1];
                  uStack_b0 = *(undefined4 *)(puVar7 + 2);
                  uStack_ac = *(undefined4 *)((longlong)puVar7 + 0x14);
                  if (0 < (int)uVar12) {
                    local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
                    local_c8._4_4_ = (undefined4)((ulonglong)local_c8 >> 0x20);
                    uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
                    uVar13 = uVar12;
                    uVar23 = uStack_b0;
                    uVar24 = uStack_ac;
                    do {
                      uVar3 = (longlong)((int)uVar17 + iVar11) % (longlong)iVar18;
                      uVar17 = uVar3 & 0xffffffff;
                      puVar9 = (undefined8 *)((longlong)((int)uVar3 + iVar10) * 0x20 + lVar20);
                      uVar21 = (undefined4)local_b8;
                      uVar22 = local_b8._4_4_;
                      uStack_b0 = uVar23;
                      uStack_ac = uVar24;
                      uVar25 = (undefined4)local_c8;
                      uVar26 = local_c8._4_4_;
                      uVar27 = (undefined4)uStack_c0;
                      uVar28 = uStack_c0._4_4_;
                      if (puVar9 != &local_c8) {
                        uVar25 = *(undefined4 *)puVar9;
                        uVar26 = *(undefined4 *)((longlong)puVar9 + 4);
                        uVar27 = *(undefined4 *)(puVar9 + 1);
                        uVar28 = *(undefined4 *)((longlong)puVar9 + 0xc);
                        uVar21 = *(undefined4 *)(puVar9 + 2);
                        uVar22 = *(undefined4 *)((longlong)puVar9 + 0x14);
                        uStack_b0 = *(undefined4 *)(puVar9 + 3);
                        uStack_ac = *(undefined4 *)((longlong)puVar9 + 0x1c);
                        *(undefined4 *)puVar9 = (undefined4)local_c8;
                        *(undefined4 *)((longlong)puVar9 + 4) = local_c8._4_4_;
                        *(undefined4 *)(puVar9 + 1) = (undefined4)uStack_c0;
                        *(undefined4 *)((longlong)puVar9 + 0xc) = uStack_c0._4_4_;
                        *(undefined4 *)(puVar9 + 2) = (undefined4)local_b8;
                        *(undefined4 *)((longlong)puVar9 + 0x14) = local_b8._4_4_;
                        *(undefined4 *)(puVar9 + 3) = uVar23;
                        *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar24;
                        local_60 = uVar25;
                        uStack_5c = uVar26;
                        uStack_58 = uVar27;
                        uStack_54 = uVar28;
                        local_50 = uVar21;
                        uStack_4c = uVar22;
                        uStack_48 = uStack_b0;
                        uStack_44 = uStack_ac;
                      }
                      uVar13 = uVar13 - 1;
                      local_b8._0_4_ = uVar21;
                      local_b8._4_4_ = uVar22;
                      uVar23 = uStack_b0;
                      uVar24 = uStack_ac;
                      local_c8._0_4_ = uVar25;
                      local_c8._4_4_ = uVar26;
                      uStack_c0._0_4_ = uVar27;
                      uStack_c0._4_4_ = uVar28;
                    } while (uVar13 != 0);
                    local_c8 = CONCAT44(uVar26,uVar25);
                    uStack_c0 = (longlong *)CONCAT44(uVar28,uVar27);
                    local_b8 = CONCAT44(uVar22,uVar21);
                  }
                  plVar5 = uStack_c0;
                  if (uStack_c0 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = uStack_c0 + 1;
                    lVar15 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar15 == 1) {
                      (**(code **)*uStack_c0)(uStack_c0);
                      LOCK();
                      piVar14 = (int *)((longlong)plVar5 + 0xc);
                      iVar2 = *piVar14;
                      *piVar14 = *piVar14 + -1;
                      UNLOCK();
                      if (iVar2 == 1) {
                        (**(code **)(*uStack_c0 + 8))(uStack_c0,1);
                      }
                      uVar12 = (ulonglong)local_e8;
                    }
                  }
                  uVar8 = iVar19 + 1;
                  uVar17 = (ulonglong)uVar8;
                  puVar7 = puVar7 + 4;
                } while ((int)uVar8 < iVar6);
              }
            }
            local_e4 = local_e4 + iVar11;
            iVar10 = iVar10 + 1 + iVar11;
          } while (iVar10 < local_e4);
          uVar17 = (ulonglong)local_d0;
          lVar15 = local_98;
          lVar16 = local_a0;
          uVar12 = local_90;
          local_e4 = local_d8;
          iVar11 = local_d4;
          iVar19 = local_cc;
        }
        local_dc = local_dc + iVar19;
        local_a8 = local_a8 + lVar15;
        lVar20 = lVar20 + lVar16;
      } while (local_a8 < (longlong)uVar12);
      local_d8 = iVar11;
    } while (iVar11 < (int)uVar17);
  }
  return;
}



// FUNCTION 142c61d90 FUN_142c61d90 body=351 status=ok
// SIG undefined FUN_142c61d90(void)

undefined8 FUN_142c61d90(undefined8 *param_1,longlong *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  lVar4 = *param_2;
  uVar1 = *param_3;
  cVar2 = UActorComponent::IsComponentTickEnabled(lVar4);
  if ((cVar2 == '\0') && ((*(byte *)(lVar4 + 0xb1c) & 8) == 0)) {
    return 1;
  }
  lVar4 = FUN_1423ac7e0(lVar4);
  if (lVar4 == 0) {
    return 1;
  }
  plVar5 = (longlong *)FUN_142c71cc0(*param_1,uVar1);
  lVar6 = *plVar5;
  if (lVar6 == 0) {
    lVar6 = FUN_142c6f640(*param_1,uVar1);
    if (lVar6 == 0) {
      return 1;
    }
    lVar7 = UBlendSpaceBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return 1;
    }
    uVar8 = (**(code **)(*(longlong *)*param_1 + 0x138))((longlong *)*param_1,uVar1);
    lVar4 = FUN_14225eb80(lVar4,lVar6,uVar8);
    if (lVar4 == 0) {
      return 1;
    }
    if ((*(longlong *)(lVar4 + 8) == 0) || (*(float *)(lVar4 + 0x50) == 0.0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_142c61ecc;
    if ((*(longlong *)(lVar4 + 8) == 0) || (*(char *)(lVar4 + 0x1c) == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
  }
  else {
    cVar2 = FUN_142278320(lVar4,lVar6,1);
    if (cVar2 != '\0') goto LAB_142c61ecc;
    cVar2 = UAnimInstance::Montage_IsActive(lVar4,lVar6);
  }
  if (cVar2 == '\0') {
    return 1;
  }
LAB_142c61ecc:
  *(undefined1 *)param_1[1] = 1;
  return 0;
}



// FUNCTION 142c61ef0 FUN_142c61ef0 body=292 status=ok
// SIG undefined FUN_142c61ef0(void)

undefined8 * FUN_142c61ef0(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_14583ce80;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x544) = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 3;
  *(undefined4 *)(param_1 + 0xac) = 0;
  AActor::SetActorTickEnabled(param_1,0);
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0x41200000;
  return param_1;
}



// FUNCTION 142c62020 FUN_142c62020 body=222 status=ok
// SIG undefined FUN_142c62020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_142c62020(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0xffffffff;
  param_1[5] = 0;
  param_1[4] = 0xffffffff;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0xb) = _DAT_1468b5d90;
  param_1[0xd] = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0xe) = _DAT_1468b5d90;
  param_1[0x10] = DAT_1468b5d98;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x15) = _DAT_1468b5d90;
  param_1[0x17] = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x18) = _DAT_1468b5d90;
  param_1[0x1a] = DAT_1468b5d98;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x1f) = _DAT_1468b5d90;
  param_1[0x21] = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x22) = _DAT_1468b5d90;
  param_1[0x24] = DAT_1468b5d98;
  FUN_142c81380(param_1);
  return param_1;
}



// FUNCTION 142c62100 FUN_142c62100 body=120 status=ok
// SIG undefined FUN_142c62100(void)

undefined1 *
FUN_142c62100(undefined1 *param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x28) = param_4;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[1] = 0x17;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x30,0);
  }
  return param_1;
}



// FUNCTION 142c62180 FUN_142c62180 body=173 status=ok
// SIG undefined FUN_142c62180(void)

undefined8 * FUN_142c62180(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143ff6170;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xf8;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 2;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 2;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return param_1;
}



// FUNCTION 142c62230 FUN_142c62230 body=17 status=ok
// SIG undefined FUN_142c62230(void)

undefined1 * FUN_142c62230(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 142c62280 FUN_142c62280 body=65 status=ok
// SIG undefined FUN_142c62280(void)

undefined1 * FUN_142c62280(undefined1 *param_1,undefined2 param_2)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x18] = 1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x30] = 1;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  param_1[0x48] = 1;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined2 *)(param_1 + 0x70) = param_2;
  return param_1;
}



// FUNCTION 142c622d0 FUN_142c622d0 body=70 status=ok
// SIG undefined FUN_142c622d0(void)

undefined1 * FUN_142c622d0(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x18] = 1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x30] = 1;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  param_1[0x48] = 1;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined2 *)(param_1 + 0x70) = 0x1f;
  return param_1;
}



// FUNCTION 142c62320 FUN_142c62320 body=154 status=ok
// SIG undefined FUN_142c62320(void)

undefined4 * FUN_142c62320(undefined4 *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)_tls_index;
  *(undefined8 *)(param_1 + 4) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146b2fef0) {
    _Init_thread_header(&DAT_146b2fef0);
    if (DAT_146b2fef0 == -1) {
      FName::FName(&DAT_146b2fee8,L"FullBody",1);
      _Init_thread_footer(&DAT_146b2fef0);
    }
  }
  *param_1 = 0x3dcccccd;
  param_1[1] = 0x3dcccccd;
  param_1[2] = 0x3f800000;
  *(undefined8 *)(param_1 + 4) = DAT_146b2fee8;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 142c623c0 FUN_142c623c0 body=423 status=ok
// SIG undefined FUN_142c623c0(void)

undefined8 * FUN_142c623c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_1[5] = param_2[5];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar1;
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  *(undefined1 *)((longlong)param_1 + 0x71) = *(undefined1 *)((longlong)param_2 + 0x71);
  *(undefined1 *)((longlong)param_1 + 0x72) = *(undefined1 *)((longlong)param_2 + 0x72);
  *(undefined1 *)((longlong)param_1 + 0x73) = *(undefined1 *)((longlong)param_2 + 0x73);
  *(undefined1 *)((longlong)param_1 + 0x74) = *(undefined1 *)((longlong)param_2 + 0x74);
  *(undefined1 *)((longlong)param_1 + 0x75) = *(undefined1 *)((longlong)param_2 + 0x75);
  *(undefined1 *)((longlong)param_1 + 0x76) = *(undefined1 *)((longlong)param_2 + 0x76);
  *(undefined1 *)((longlong)param_1 + 0x77) = *(undefined1 *)((longlong)param_2 + 0x77);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)((longlong)param_1 + 0x79) = *(undefined1 *)((longlong)param_2 + 0x79);
  *(undefined1 *)((longlong)param_1 + 0x7a) = *(undefined1 *)((longlong)param_2 + 0x7a);
  *(undefined8 *)((longlong)param_1 + 0x7c) = *(undefined8 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  param_1[0x11] = param_2[0x11];
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined8 *)((longlong)param_1 + 0x94) = *(undefined8 *)((longlong)param_2 + 0x94);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  param_1[0x14] = param_2[0x14];
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined8 *)((longlong)param_1 + 0xac) = *(undefined8 *)((longlong)param_2 + 0xac);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  param_1[0x17] = param_2[0x17];
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0xc4) = *(undefined8 *)((longlong)param_2 + 0xc4);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
  param_1[0x1a] = param_2[0x1a];
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  *(undefined8 *)((longlong)param_1 + 0xdc) = *(undefined8 *)((longlong)param_2 + 0xdc);
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)((longlong)param_2 + 0xe4);
  return param_1;
}



// FUNCTION 142c62570 FUN_142c62570 body=28 status=ok
// SIG undefined FUN_142c62570(void)

undefined8 * FUN_142c62570(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  *param_1 = *param_2;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined4 *)(param_1 + 2) = param_3;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 142c62590 FUN_142c62590 body=29 status=ok
// SIG undefined FUN_142c62590(void)

undefined8 * FUN_142c62590(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  *param_1 = *param_2;
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 142c625b0 FUN_142c625b0 body=24 status=ok
// SIG undefined FUN_142c625b0(void)

undefined8 * FUN_142c625b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 3;
  param_1[3] = param_3;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 142c625d0 FUN_142c625d0 body=26 status=ok
// SIG undefined FUN_142c625d0(void)

undefined8 * FUN_142c625d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 4;
  param_1[3] = 0;
  param_1[4] = param_3;
  return param_1;
}



// FUNCTION 142c62620 FUN_142c62620 body=31 status=ok
// SIG undefined FUN_142c62620(void)

undefined8 * FUN_142c62620(undefined8 *param_1)

{
  *param_1 = DAT_1466ace00;
  *(undefined4 *)(param_1 + 1) = DAT_1466ace08;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 142c62640 FUN_142c62640 body=106 status=ok
// SIG undefined FUN_142c62640(void)

undefined8 * FUN_142c62640(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  
  *param_1 = *(undefined8 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  cVar2 = UAIBlueprintHelperLibrary::IsValidAILocation(param_2 + 0x6c);
  if ((cVar2 != '\0') && (*(char *)(param_2 + 0x68) != '\0')) {
    uVar1 = *(undefined4 *)(param_2 + 0x74);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(param_2 + 0x6c);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x78);
  }
  return param_1;
}



// FUNCTION 142c626b0 FUN_142c626b0 body=25 status=ok
// SIG undefined FUN_142c626b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142c626b0(undefined8 *param_1)

{
  *param_1 = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 1) = DAT_1468b5d98;
  return param_1;
}



// FUNCTION 142c626d0 FUN_142c626d0 body=32 status=ok
// SIG undefined FUN_142c626d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_142c626d0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 1) = _DAT_1468b5d90;
  param_1[3] = DAT_1468b5d98;
  return param_1;
}



// FUNCTION 142c62700 FUN_142c62700 body=439 status=ok
// SIG undefined FUN_142c62700(void)

undefined4 *
FUN_142c62700(undefined4 *param_1,float *param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
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
  float local_98;
  float local_94;
  float local_90;
  undefined1 local_88 [128];
  
  *(undefined8 *)(param_1 + 1) = *param_3;
  param_1[3] = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 4) = *param_4;
  param_1[6] = *(undefined4 *)(param_4 + 1);
  fVar1 = param_2[3];
  fVar9 = (float)param_1[1] - param_2[4];
  fVar10 = (float)param_1[2] - param_2[5];
  fVar11 = (float)param_1[3] - param_2[6];
  fVar8 = -*param_2;
  fVar7 = -param_2[1];
  fVar3 = -param_2[2];
  fVar5 = fVar11 * fVar7 - fVar10 * fVar3;
  fVar6 = fVar9 * fVar3 - fVar11 * fVar8;
  fVar5 = fVar5 + fVar5;
  fVar4 = fVar10 * fVar8 - fVar9 * fVar7;
  fVar6 = fVar6 + fVar6;
  fVar4 = fVar4 + fVar4;
  local_98 = (fVar4 * fVar7 - fVar6 * fVar3) + fVar5 * fVar1 + fVar9;
  local_94 = (fVar5 * fVar3 - fVar4 * fVar8) + fVar6 * fVar1 + fVar10;
  local_90 = (fVar6 * fVar8 - fVar5 * fVar7) + fVar4 * fVar1 + fVar11;
  lVar2 = FVector::Rotation(&local_98,local_88);
  *param_1 = *(undefined4 *)(lVar2 + 4);
  return param_1;
}



// FUNCTION 142c628c0 FUN_142c628c0 body=54 status=ok
// SIG undefined FUN_142c628c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_142c628c0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 1) = DAT_1466ace00;
  param_1[3] = DAT_1466ace08;
  *(undefined8 *)(param_1 + 4) = _DAT_1468b5d90;
  param_1[6] = DAT_1468b5d98;
  return param_1;
}



// FUNCTION 142c62900 FUN_142c62900 body=227 status=ok
// SIG undefined FUN_142c62900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_142c62900(undefined4 *param_1)

{
  *param_1 = 0xbf800000;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 5) = DAT_1466ace00;
  param_1[7] = DAT_1466ace08;
  *(undefined8 *)(param_1 + 8) = _DAT_1468b5d90;
  param_1[10] = DAT_1468b5d98;
  param_1[0xb] = 0;
  *(undefined8 *)(param_1 + 0xc) = DAT_1466ace00;
  param_1[0xe] = DAT_1466ace08;
  *(undefined8 *)(param_1 + 0xf) = _DAT_1468b5d90;
  param_1[0x11] = DAT_1468b5d98;
  param_1[0x12] = 0;
  *(undefined8 *)(param_1 + 0x13) = DAT_1466ace00;
  param_1[0x15] = DAT_1466ace08;
  *(undefined8 *)(param_1 + 0x16) = _DAT_1468b5d90;
  param_1[0x18] = DAT_1468b5d98;
  param_1[0x19] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x1a) = 1;
  *(undefined8 *)(param_1 + 0x1b) = DAT_1466ace00;
  param_1[0x1d] = DAT_1466ace08;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0xffffffffffffffff;
  param_1[0x23] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  return param_1;
}



// FUNCTION 142c629f0 FUN_142c629f0 body=81 status=ok
// SIG undefined FUN_142c629f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142c629f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  param_1[5] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 6) = DAT_1468b5d98;
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  FUN_142c6a680(param_1);
  return param_1;
}



// FUNCTION 142c62aa0 FUN_142c62aa0 body=50 status=ok
// SIG undefined FUN_142c62aa0(void)

undefined1 * FUN_142c62aa0(undefined1 *param_1)

{
  *param_1 = 0;
  FName::FName(param_1 + 8,L"Default",1);
  *(undefined4 *)(param_1 + 0x10) = 10;
  return param_1;
}



// FUNCTION 142c62ae0 FUN_142c62ae0 body=33 status=ok
// SIG undefined FUN_142c62ae0(void)

undefined8 * FUN_142c62ae0(undefined8 *param_1)

{
  UAnimNotifyState::UAnimNotifyState();
  *param_1 = &PTR_FUN_14583f2d8;
  return param_1;
}



// FUNCTION 142c62b10 FUN_142c62b10 body=33 status=ok
// SIG undefined FUN_142c62b10(void)

undefined8 * FUN_142c62b10(undefined8 *param_1)

{
  UAnimNotifyState::UAnimNotifyState();
  *param_1 = &PTR_FUN_14583f5b0;
  return param_1;
}



// FUNCTION 142c62b40 FUN_142c62b40 body=33 status=ok
// SIG undefined FUN_142c62b40(void)

undefined8 * FUN_142c62b40(undefined8 *param_1)

{
  UAnimNotifyState::UAnimNotifyState();
  *param_1 = &PTR_FUN_14583f888;
  return param_1;
}



// FUNCTION 142c62b70 FUN_142c62b70 body=63 status=ok
// SIG undefined FUN_142c62b70(void)

undefined8 * FUN_142c62b70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotifyState::UAnimNotifyState(param_1,uVar1);
  *param_1 = &PTR_FUN_14583de28;
  param_1[6] = *param_2;
  return param_1;
}



// FUNCTION 142c62bb0 FUN_142c62bb0 body=50 status=ok
// SIG undefined FUN_142c62bb0(void)

undefined8 * FUN_142c62bb0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotifyState::UAnimNotifyState(param_1,uVar1);
  *param_1 = &PTR_FUN_14583de28;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 142c62bf0 FUN_142c62bf0 body=63 status=ok
// SIG undefined FUN_142c62bf0(void)

undefined8 * FUN_142c62bf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotify::UAnimNotify(param_1,uVar1);
  *param_1 = &PTR_FUN_14583d568;
  param_1[7] = *param_2;
  return param_1;
}



// FUNCTION 142c62c30 FUN_142c62c30 body=50 status=ok
// SIG undefined FUN_142c62c30(void)

undefined8 * FUN_142c62c30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotify::UAnimNotify(param_1,uVar1);
  *param_1 = &PTR_FUN_14583d568;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 142c62c70 FUN_142c62c70 body=197 status=ok
// SIG undefined FUN_142c62c70(void)

undefined8 * FUN_142c62c70(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTTaskNode::UBTTaskNode();
  local_10 = 0xf;
  *param_1 = &PTR__scalar_deleting_destructor__14583e100;
  param_1[5] = &PTR_LAB_1457fddf0;
  param_1[0xe] = 0;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0xf,"Play GbxAction",0xf,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) | 4;
  return param_1;
}



// FUNCTION 142c62d40 FUN_142c62d40 body=243 status=ok
// SIG undefined FUN_142c62d40(void)

undefined8 * FUN_142c62d40(undefined8 *param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142bb1260();
  *param_1 = &PTR__scalar_deleting_destructor__14583f020;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) != 0) {
    return param_1;
  }
  puVar5 = (undefined8 *)param_1[4];
  if (puVar5 != (undefined8 *)0x0) {
    lVar2 = FUN_142a2f930();
    if ((*(int *)(puVar5[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(puVar5[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142c62db9;
  }
  puVar5 = (undefined8 *)0x0;
LAB_142c62db9:
  puVar4 = param_1;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = puVar5;
  }
  FUN_1417846f0(puVar4,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = FUN_142e5a2a0();
  uVar3 = FUN_1417985e0(uVar3,puVar4,0,0,0,0,0,0,0);
  param_1[0x25] = uVar3;
  FUN_142d48620(uVar3,param_1[0x14]);
  return param_1;
}



// FUNCTION 142c62e40 FUN_142c62e40 body=107 status=ok
// SIG undefined FUN_142c62e40(void)

undefined8 * FUN_142c62e40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1417818c0();
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_14407c550;
  param_1[5] = &PTR_LAB_14407c7e8;
  param_1[7] = 0;
  param_1[8] = 0;
  FName::FName(param_1 + 9,L"FullBody",1);
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0xb] = 0;
  uVar1 = FUN_142e2af00();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 142c62eb0 FUN_142c62eb0 body=362 status=ok
// SIG undefined FUN_142c62eb0(void)

undefined8 * FUN_142c62eb0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142c63600();
  *param_1 = &PTR_FUN_14583db20;
  param_1[5] = &PTR_LAB_14583ddd0;
  param_1[0xc] = &PTR_LAB_14583de18;
  *(undefined1 *)(param_1 + 0x17) = 1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0x1f;
  FName::FName(param_1 + 0x27,L"FullBody",1);
  *(undefined4 *)(param_1 + 0x28) = 0x3e800000;
  *(undefined1 *)((longlong)param_1 + 0x144) = 1;
  *(undefined4 *)(param_1 + 0x29) = 0x3e800000;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 1;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x17a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x17e) = 1;
  param_1[0x33] = DAT_146b2fd18;
  param_1[0x34] = DAT_146b2fd20;
  *(undefined1 *)(param_1 + 0x16) = 0;
  uVar1 = FUN_142e219b0();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 142c63020 FUN_142c63020 body=478 status=ok
// SIG undefined FUN_142c63020(void)

undefined8 * FUN_142c63020(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  FUN_142c63600();
  *param_1 = &PTR_FUN_14583e3f0;
  param_1[5] = &PTR_LAB_14583e6a0;
  param_1[0xc] = &PTR_LAB_14583e6e8;
  *(undefined1 *)(param_1 + 0x17) = 1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0x11;
  *(undefined1 *)(param_1 + 0x26) = 1;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined2 *)(param_1 + 0x34) = 0x11;
  *(undefined1 *)(param_1 + 0x35) = 1;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x38) = 1;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 1;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined2 *)(param_1 + 0x43) = 0x11;
  param_1[0x45] = 0;
  uVar1 = FPathlessSaveGame_AsStructForJsonSerialization::StaticStruct();
  param_1[0xb] = uVar1;
  *(undefined4 *)(param_1 + 0x44) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x46) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x47) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0x3e800000;
  FName::FName(local_res8,L"FullBody",1);
  param_1[0x45] = local_res8[0];
  return param_1;
}



// FUNCTION 142c63200 FUN_142c63200 body=536 status=ok
// SIG undefined FUN_142c63200(void)

undefined8 * FUN_142c63200(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  
  FUN_142c63600();
  *param_1 = &PTR_FUN_14583e6f8;
  param_1[5] = &PTR_LAB_14583e9b8;
  param_1[0xc] = &PTR_LAB_14583ea00;
  *(undefined1 *)(param_1 + 0x17) = 1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0x1f;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 1;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined2 *)(param_1 + 0x36) = 0x1f;
  param_1[0x3a] = 0;
  FUN_142de2eb0(param_1 + 0x3c);
  FUN_142de2eb0(param_1 + 0x4d);
  *(undefined1 *)(param_1 + 0x68) = 1;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined1 *)(param_1 + 0x6b) = 1;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined1 *)(param_1 + 0x6e) = 1;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined1 *)(param_1 + 0x71) = 1;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined2 *)(param_1 + 0x76) = 0x1f;
  *(undefined1 *)(param_1 + 99) = 1;
  *(undefined4 *)(param_1 + 0x37) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x3dcccccd;
  *(undefined1 *)(param_1 + 0x3b) = 1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"FullBody",1);
  param_1[0x3a] = *puVar1;
  *(undefined1 *)(param_1 + 0x3c) = 2;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  uVar2 = FUN_142e261f0();
  param_1[0xb] = uVar2;
  return param_1;
}



// FUNCTION 142c63420 FUN_142c63420 body=468 status=ok
// SIG undefined FUN_142c63420(void)

undefined8 * FUN_142c63420(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142c63600();
  *param_1 = &PTR_FUN_14583db20;
  param_1[5] = &PTR_LAB_14583ddd0;
  param_1[0xc] = &PTR_LAB_14583de18;
  *(undefined1 *)(param_1 + 0x17) = 1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0x1f;
  FName::FName(param_1 + 0x27,L"FullBody",1);
  *(undefined4 *)(param_1 + 0x28) = 0x3e800000;
  *(undefined1 *)((longlong)param_1 + 0x144) = 1;
  *(undefined4 *)(param_1 + 0x29) = 0x3e800000;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 1;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x17a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x17e) = 1;
  param_1[0x33] = DAT_146b2fd18;
  param_1[0x34] = DAT_146b2fd20;
  *(undefined1 *)(param_1 + 0x16) = 0;
  uVar1 = FUN_142e219b0();
  param_1[0xb] = uVar1;
  *param_1 = &PTR_FUN_14583ea10;
  param_1[5] = &PTR_LAB_14583ecc0;
  param_1[0xc] = &PTR_LAB_14583ed08;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x37) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x1cc) = 0x101;
  uVar1 = FMinimalViewInfo::StaticStruct();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 142c63600 FUN_142c63600 body=284 status=ok
// SIG undefined FUN_142c63600(void)

undefined8 * FUN_142c63600(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_142c62e40();
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_14583d818;
  param_1[5] = &PTR_LAB_14583dac8;
  param_1[0xc] = &PTR_LAB_14583db10;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((longlong)param_1 + 0x72) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)((longlong)param_1 + 0x8a) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0xbf800000;
  *(undefined2 *)(param_1 + 0x16) = 1;
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x84) < iVar1 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0xf,iVar1);
  }
  *(undefined1 *)((longlong)iVar1 + param_1[0xf]) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x84) < iVar1 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0xf,iVar1);
  }
  *(undefined1 *)((longlong)iVar1 + param_1[0xf]) = 1;
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x84) < iVar1 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0xf,iVar1);
  }
  *(undefined1 *)((longlong)iVar1 + param_1[0xf]) = 7;
  uVar2 = FLobbyChatNode::StaticStruct();
  param_1[0xb] = uVar2;
  return param_1;
}



// FUNCTION 142c63720 FUN_142c63720 body=264 status=ok
// SIG undefined FUN_142c63720(void)

undefined8 * FUN_142c63720(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  
  FUN_142c63600();
  *param_1 = &PTR_FUN_14583ed18;
  param_1[5] = &PTR_LAB_14583efc8;
  param_1[0xc] = &PTR_LAB_14583f010;
  *(undefined1 *)(param_1 + 0x17) = 1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3dcccccd;
  param_1[0x1b] = DAT_146aef320;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TargetActorInfo",1);
  param_1[0x1d] = *puVar1;
  *(undefined2 *)(param_1 + 0x1e) = 0xff00;
  *(undefined2 *)((longlong)param_1 + 0x104) = 2;
  param_1[0x21] = 0x43fa0000;
  *(undefined1 *)(param_1 + 0x22) = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TargetActorInfo",1);
  param_1[0x23] = *puVar1;
  *(undefined2 *)(param_1 + 0x24) = 0xff00;
  *(undefined2 *)((longlong)param_1 + 0x134) = 2;
  param_1[0x27] = 0x43fa0000;
  uVar2 = FLobbyChatNode::StaticStruct();
  param_1[0xb] = uVar2;
  return param_1;
}



// FUNCTION 142c63830 FUN_142c63830 body=170 status=ok
// SIG undefined FUN_142c63830(void)

void FUN_142c63830(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x98);
    do {
      if (plVar2[3] != 0) {
        FMemory::Free();
      }
      *(undefined4 *)(plVar2 + 1) = 0;
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar2 + -8);
      *(undefined4 *)(plVar2 + -9) = 0;
      if (plVar2[-10] != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar2 + -0x12);
      plVar2 = plVar2 + 0x18;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142c638e0 ~TArray<FPolygonHoleVertices,FDefaultAllocator> body=81 status=ok
// SIG undefined ~TArray<FPolygonHoleVertices,FDefaultAllocator>(void)

void TArray<FPolygonHoleVertices,FDefaultAllocator>::~TArray<FPolygonHoleVertices,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  lVar1 = *param_1;
  if (iVar2 != 0) {
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
      lVar1 = lVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 142c63940 FUN_142c63940 body=392 status=ok
// SIG undefined FUN_142c63940(void)

void FUN_142c63940(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_142c63a01;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_142c63a01:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      FUN_142c63830((longlong)iStack_1c * 0x20 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c63ad0 FUN_142c63ad0 body=82 status=ok
// SIG undefined FUN_142c63ad0(void)

void FUN_142c63ad0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x38);
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (iVar2 != 0) {
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
      lVar1 = lVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 142c63b30 FUN_142c63b30 body=170 status=ok
// SIG undefined FUN_142c63b30(void)

void FUN_142c63b30(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TArray<TSharedPtr<IMessageInterceptor,1>,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,TArray<TSharedPtr<IMessageInterceptor,1>,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x68,0);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_142c63940(param_1 + 0x18);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 8);
  return;
}



// FUNCTION 142c63be0 FUN_142c63be0 body=104 status=ok
// SIG undefined FUN_142c63be0(void)

void FUN_142c63be0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 4);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 1) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1);
  }
  return;
}



// FUNCTION 142c63c50 FUN_142c63c50 body=126 status=ok
// SIG undefined FUN_142c63c50(void)

void FUN_142c63c50(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_143ff6170;
  plVar3 = (longlong *)param_1[0x18];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x11);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xe);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xb);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 8);
  if (param_1[4] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142c63cd0 FUN_142c63cd0 body=71 status=ok
// SIG undefined FUN_142c63cd0(void)

void FUN_142c63cd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14583db20;
  param_1[5] = &PTR_LAB_14583ddd0;
  param_1[0xc] = &PTR_LAB_14583de18;
  if (param_1[0x23] != 0) {
    FMemory::Free();
  }
  FUN_1406d8e10(param_1);
  return;
}



// FUNCTION 142c63d20 operator= body=110 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FObjectImport,FDefaultAllocator>::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x38);
  }
  return param_1;
}



// FUNCTION 142c63d90 operator= body=123 status=ok
// SIG undefined operator=(void)

longlong TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=
                   (longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    TSparseArray<TSetElement<TTuple<FGameplayTag,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=();
    if (*(longlong *)(param_2 + 0x40) == 0) {
      ::_guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x38),(void *)(param_2 + 0x38),4);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 142c63e10 FUN_142c63e10 body=207 status=ok
// SIG undefined FUN_142c63e10(void)

undefined8 * FUN_142c63e10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  puVar1 = param_1 + 0xc;
  *param_1 = *param_2;
  param_1[1] = uVar6;
  param_1[2] = param_2[2];
  uVar6 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar6;
  param_1[5] = param_2[5];
  uVar6 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar6;
  param_1[8] = param_2[8];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar4 = *(undefined4 *)(param_2 + 10);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 10) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar5;
  param_1[0xb] = param_2[0xb];
  if (puVar1 != param_2 + 0xc) {
    iVar2 = *(int *)(param_2 + 0xd);
    _Src = (void *)param_2[0xc];
    *(int *)(param_1 + 0xd) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x6c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    }
    else {
      TArray<FPropChildSocketData,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 6);
    }
  }
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  return param_1;
}



// FUNCTION 142c63ee0 FUN_142c63ee0 body=382 status=ok
// SIG undefined FUN_142c63ee0(void)

longlong * FUN_142c63ee0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  
  (**(code **)(*param_1 + 0x40))();
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 8,1);
  }
  else {
    *(undefined1 *)(param_2 + 8) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  cVar1 = *(char *)(param_2 + 8);
  if (cVar1 == '\x01') {
    puVar3 = *(undefined4 **)param_1[1];
    if (puVar3 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
      *(undefined4 *)(param_2 + 0xc) = *puVar3;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      return param_1;
    }
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xc,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) == 0) {
      return param_1;
    }
    param_2 = param_2 + 0xc;
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        (**(code **)(*param_1 + 0x30))(param_1,param_2 + 0x18);
      }
      else if (cVar1 != '\x04') {
        if (cVar1 != '\x05') {
          return param_1;
        }
        FUN_1406da970(param_1,param_2 + 0x28);
        return param_1;
      }
      (**(code **)(*param_1 + 0x40))(param_1,param_2 + 0x20);
      return param_1;
    }
    puVar3 = *(undefined4 **)param_1[1];
    if (puVar3 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
      *(undefined4 *)(param_2 + 0x10) = *puVar3;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      return param_1;
    }
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x10,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) == 0) {
      return param_1;
    }
    param_2 = param_2 + 0x10;
  }
  FArchive::ByteSwap(param_1,param_2,4);
  return param_1;
}



// FUNCTION 142c64060 FUN_142c64060 body=407 status=ok
// SIG undefined FUN_142c64060(void)

longlong * FUN_142c64060(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x38,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x38);
  puVar6 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x49249 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_142c63ee0(param_1,(longlong)(int)puVar6 * 0x38 + *param_2);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x38 + *param_2);
    puVar5 = puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar5 = puVar4;
    }
    FUN_142c63ee0(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 142c64200 FUN_142c64200 body=192 status=ok
// SIG undefined FUN_142c64200(void)

undefined8 FUN_142c64200(longlong *param_1,longlong *param_2)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = (int)param_1[1];
  if (iVar4 != (int)param_2[1]) {
    return 0;
  }
  param_2 = (longlong *)*param_2;
  if (iVar4 != 0) {
    pfVar3 = (float *)(param_2 + 6);
    pfVar2 = (float *)(*param_1 + 0x30);
    do {
      if (*(longlong *)(pfVar2 + -0xc) != *param_2) {
        return 0;
      }
      cVar1 = *(char *)(pfVar2 + -10);
      if (cVar1 != *(char *)(pfVar3 + -10)) {
        return 0;
      }
      if (cVar1 == '\x01') {
        bVar5 = pfVar3[-9] == pfVar2[-9];
joined_r0x000142c64296:
        if (!bVar5) {
          return 0;
        }
      }
      else {
        if (cVar1 == '\x02') {
          bVar5 = pfVar2[-8] == pfVar3[-8];
          goto joined_r0x000142c64296;
        }
        if (cVar1 == '\x03') {
          bVar5 = *(longlong *)(pfVar2 + -6) == *(longlong *)(pfVar3 + -6);
          goto joined_r0x000142c64296;
        }
        if (cVar1 == '\x04') {
          bVar5 = *(longlong *)(pfVar2 + -4) == *(longlong *)(pfVar3 + -4);
          goto joined_r0x000142c64296;
        }
        if (cVar1 == '\x05') {
          if (pfVar3[-2] != pfVar2[-2]) {
            return 0;
          }
          if (pfVar3[-1] != pfVar2[-1]) {
            return 0;
          }
          bVar5 = *pfVar3 == *pfVar2;
          goto joined_r0x000142c64296;
        }
      }
      param_2 = param_2 + 7;
      pfVar3 = pfVar3 + 0xe;
      pfVar2 = pfVar2 + 0xe;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 1;
}



// FUNCTION 142c642c0 FUN_142c642c0 body=43 status=ok
// SIG undefined FUN_142c642c0(void)

ulonglong FUN_142c642c0(char *param_1,longlong param_2)

{
  ulonglong in_RAX;
  
  if (*param_1 == '\x01') {
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 8) >> 8),
                    *(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8));
  }
  if (*param_1 != '\x02') {
    return in_RAX & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x10) >> 8),
                  *(longlong *)(param_1 + 0x10) == *(longlong *)(param_2 + 0x10));
}



// FUNCTION 142c642f0 FUN_142c642f0 body=158 status=ok
// SIG undefined FUN_142c642f0(void)

longlong FUN_142c642f0(longlong *param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  FWeakObjectPtr::operator=((undefined4 *)(param_2 + 0x18),param_1[2]);
  TArray<FObjectImport,FDefaultAllocator>::operator=(param_2 + 8,param_1 + 4);
  *(int *)(param_2 + 4) = (int)(char)param_1[0x15];
  *(char *)(param_2 + 0x28) = (char)param_1[6];
  FWeakObjectPtr::operator=(param_2 + 0x20,param_1[3]);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
  return param_2;
}



// FUNCTION 142c64390 FUN_142c64390 body=596 status=ok
// SIG undefined FUN_142c64390(void)

undefined8 FUN_142c64390(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined8 uVar12;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  uStack_94 = 1;
  plVar1 = (longlong *)(param_2 + 8);
  local_98 = 0;
  uVar3 = *(uint *)(param_2 + 0x30);
  puVar2 = (uint *)(param_2 + 0x18);
  uVar12 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_2 + 0x28);
    if (*(uint **)(param_2 + 0x28) == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar4 = *puVar10;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar11 = local_98 + 1;
      bVar5 = (int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= local_98;
      local_98 = iVar11;
      if (bVar5) goto LAB_142c6446a;
      uVar4 = puVar10[lVar7 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar11 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_84 = (iStack_80 - iVar11) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_142c6446a:
      uStack_84 = uVar3;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x30);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uVar4 = *(uint *)(param_2 + 0x30);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar8 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar2;
  local_50 = plVar1;
  puStack_40 = puVar2;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar4) {
    puVar10 = *(uint **)(param_2 + 0x28);
    if (*(uint **)(param_2 + 0x28) == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar9 = puVar10[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar11 = (int)uVar3 >> 5;
    while (uVar9 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 <= iVar11)
      goto LAB_142c64531;
      uVar9 = puVar10[(longlong)iVar11 + 1];
      iVar11 = iVar11 + 1;
    }
    uVar9 = -uVar9 & uVar9;
    iVar11 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_84 = (uVar8 - iVar11) + 0x1f;
    if ((int)uVar4 < (int)uStack_84) {
LAB_142c64531:
      uStack_84 = uVar4;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar2))) {
    lVar7 = *plVar1 + (longlong)(int)uStack_5c * 0xc;
    cVar6 = (**(code **)(**(longlong **)(*param_1 + 0x20) + 0x2e8))
                      (*(longlong **)(*param_1 + 0x20),lVar7,0);
    if ((cVar6 == '\0') &&
       (lVar7 = (**(code **)(**(longlong **)(*param_1 + 0x20) + 0x2d8))
                          (*(longlong **)(*param_1 + 0x20),lVar7), lVar7 == 0)) {
      if (param_3 != '\0') {
        return 0;
      }
    }
    else {
      uVar12 = 1;
      if (param_3 == '\0') {
        return 1;
      }
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return uVar12;
}



// FUNCTION 142c645f0 FUN_142c645f0 body=455 status=ok
// SIG undefined FUN_142c645f0(void)

undefined8 FUN_142c645f0(longlong *param_1,undefined8 param_2,short param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_res8;
  undefined1 local_res20 [8];
  
  lVar7 = *param_1;
  if (param_3 == 0x10) {
    lVar6 = (longlong)*(int *)(lVar7 + 0x460) * 0xc0 + *(longlong *)(lVar7 + 0x430);
  }
  else {
    if (param_3 == 1) {
      lVar6 = 0x120;
    }
    else if (param_3 == 2) {
      lVar6 = 0x1e0;
    }
    else if (param_3 == 4) {
      lVar6 = 0x2a0;
    }
    else if (param_3 == 8) {
      lVar6 = 0x360;
    }
    else {
      lVar6 = 0x60;
    }
    lVar6 = lVar6 + lVar7;
  }
  if (*(char *)(param_1[1] + 0x88) == '\0') {
    plVar1 = (longlong *)FUN_142c71cc0(lVar7,param_3);
    lVar7 = *plVar1;
    if ((lVar7 != 0) && (lVar2 = FUN_1423ac7e0(param_2), lVar2 != 0)) {
      uVar3 = FWeakObjectPtr::Get(lVar6 + 8);
      uVar4 = FWeakObjectPtr::Get(lVar6);
      UAnimInstance::Montage_GetCurrentSection(uVar4,&local_res8,uVar3);
      plVar1 = *(longlong **)(lVar6 + 0xb0);
      if (*(longlong **)(lVar6 + 0xb0) == (longlong *)0x0) {
        plVar1 = (longlong *)(lVar6 + 0x30);
      }
      plVar5 = plVar1 + (longlong)*(int *)(lVar6 + 0xb8) * 4;
      for (; plVar1 != plVar5; plVar1 = plVar1 + 4) {
        lVar6 = *plVar1;
        if (lVar6 == local_res8) {
          if (plVar1 != (longlong *)0x0) goto LAB_142c64796;
          break;
        }
      }
      lVar6 = (**(code **)(*(longlong *)*param_1 + 0x120))((longlong *)*param_1,param_3);
      if (lVar6 != 0) {
        plVar1 = (longlong *)FUN_142269de0(lVar6,&local_res8);
        plVar5 = (longlong *)FUN_142268640(lVar6,local_res20);
        lVar6 = *plVar1;
        local_res8 = *plVar5;
LAB_142c64796:
        UAnimInstance::Montage_SetNextSection(lVar2,local_res8,lVar6,lVar7);
      }
    }
  }
  else if (*(int *)(lVar6 + 0xb8) != 0) {
    lVar7 = *(longlong *)(lVar6 + 0xb0);
    if (*(longlong *)(lVar6 + 0xb0) == 0) {
      lVar7 = lVar6 + 0x30;
    }
    lVar7 = lVar7 + (longlong)*(int *)(lVar6 + 0x2c) * 0x20;
    *(int *)(lVar6 + 0x24) = (int)*(float *)(lVar7 + 0x14);
    *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar7 + 0x10);
    return 1;
  }
  return 1;
}



// FUNCTION 142c647c0 FUN_142c647c0 body=315 status=ok
// SIG undefined FUN_142c647c0(void)

void FUN_142c647c0(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int local_res8 [2];
  int *local_res10;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x20) != *(int *)(lVar2 + 0x4c)) {
    iVar4 = *(int *)param_1[1];
    lVar5 = *(longlong *)(lVar2 + 0x58);
    if (*(longlong *)(lVar2 + 0x58) == 0) {
      lVar5 = lVar2 + 0x50;
    }
    iVar3 = *(int *)(lVar5 + ((longlong)*(int *)(lVar2 + 0x60) - 1U & (longlong)iVar4) * 4);
    if (iVar3 != -1) {
      do {
        piVar6 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)(lVar2 + 0x18));
        if (*piVar6 == iVar4) {
          if ((iVar3 != -1) && (piVar6 != (int *)0x0)) goto LAB_142c6485a;
          break;
        }
        iVar3 = piVar6[6];
      } while (iVar3 != -1);
    }
  }
  local_res10 = (int *)param_1[1];
  FUN_142c605c0(lVar2 + 0x18,local_res8,&local_res10,0);
  piVar6 = (int *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar2 + 0x18));
LAB_142c6485a:
  iVar4 = FUN_142c65bd0(piVar6 + 2,1);
  puVar7 = (undefined4 *)((longlong)iVar4 * 0xc0 + *(longlong *)(piVar6 + 2));
  *puVar7 = *param_2;
  *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(param_2 + 1);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=(puVar7 + 2,param_2 + 2);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=(puVar7 + 0x16,param_2 + 0x16)
  ;
  plVar1 = (longlong *)(param_2 + 0x2c);
  puVar7[0x2a] = param_2[0x2a];
  plVar8 = (longlong *)(puVar7 + 0x2c);
  if (plVar8 != plVar1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    *plVar8 = *plVar1;
    *plVar1 = 0;
    puVar7[0x2e] = param_2[0x2e];
    puVar7[0x2f] = param_2[0x2f];
    *(undefined8 *)(param_2 + 0x2e) = 0;
  }
  return;
}



// FUNCTION 142c64900 FUN_142c64900 body=449 status=ok
// SIG undefined FUN_142c64900(void)

undefined8 FUN_142c64900(longlong *param_1,undefined8 param_2,short param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  
  lVar6 = *param_1;
  if (param_3 == 0x10) {
    lVar5 = (longlong)*(int *)(lVar6 + 0x460) * 0xc0 + *(longlong *)(lVar6 + 0x430);
  }
  else {
    if (param_3 == 1) {
      lVar5 = 0x120;
    }
    else if (param_3 == 2) {
      lVar5 = 0x1e0;
    }
    else if (param_3 == 4) {
      lVar5 = 0x2a0;
    }
    else if (param_3 == 8) {
      lVar5 = 0x360;
    }
    else {
      lVar5 = 0x60;
    }
    lVar5 = lVar5 + lVar6;
  }
  if (*(char *)(param_1[1] + 0x88) == '\0') {
    plVar1 = (longlong *)FUN_142c71cc0(lVar6,param_3);
    lVar6 = *plVar1;
    if ((lVar6 != 0) && (lVar2 = FUN_1423ac7e0(param_2), lVar2 != 0)) {
      FWeakObjectPtr::Get(lVar5 + 8);
      uVar3 = FWeakObjectPtr::Get(lVar5);
      UAnimInstance::Montage_GetCurrentSection(uVar3,&local_res8);
      plVar1 = *(longlong **)(lVar5 + 0xb0);
      if (*(longlong **)(lVar5 + 0xb0) == (longlong *)0x0) {
        plVar1 = (longlong *)(lVar5 + 0x30);
      }
      plVar4 = plVar1 + (longlong)*(int *)(lVar5 + 0xb8) * 4;
      for (; plVar1 != plVar4; plVar1 = plVar1 + 4) {
        lVar5 = *plVar1;
        if (lVar5 == local_res8) {
          if (plVar1 != (longlong *)0x0) goto LAB_142c64a9c;
          break;
        }
      }
      lVar5 = (**(code **)(*(longlong *)*param_1 + 0x120))((longlong *)*param_1,param_3);
      if (lVar5 != 0) {
        plVar1 = (longlong *)FUN_142269de0(lVar5,&local_res8);
        lVar5 = *plVar1;
LAB_142c64a9c:
        UAnimInstance::Montage_JumpToSection(lVar2,lVar5,lVar6);
      }
    }
  }
  else if (*(int *)(lVar5 + 0xb8) != 0) {
    lVar6 = *(longlong *)(lVar5 + 0xb0);
    if (*(longlong *)(lVar5 + 0xb0) == 0) {
      lVar6 = lVar5 + 0x30;
    }
    lVar6 = lVar6 + (longlong)*(int *)(lVar5 + 0x2c) * 0x20;
    *(int *)(lVar5 + 0x24) = (int)*(float *)(lVar6 + 0x14);
    *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(lVar6 + 0x10);
    return 1;
  }
  return 1;
}



// FUNCTION 142c64ad0 FUN_142c64ad0 body=331 status=ok
// SIG undefined FUN_142c64ad0(void)

void FUN_142c64ad0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  longlong *plVar6;
  int iVar7;
  int local_res8 [2];
  int *local_res10;
  
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x20) != *(int *)(lVar4 + 0x4c)) {
    iVar7 = *(int *)param_1[1];
    lVar3 = *(longlong *)(lVar4 + 0x58);
    if (*(longlong *)(lVar4 + 0x58) == 0) {
      lVar3 = lVar4 + 0x50;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(lVar4 + 0x60) - 1U & (longlong)iVar7) * 4);
    if (iVar2 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)(lVar4 + 0x18));
        if (*piVar5 == iVar7) {
          if ((iVar2 != -1) && (piVar5 != (int *)0x0)) goto LAB_142c64b6b;
          break;
        }
        iVar2 = piVar5[6];
      } while (iVar2 != -1);
    }
  }
  local_res10 = (int *)param_1[1];
  FUN_142c605c0(lVar4 + 0x18,local_res8,&local_res10,0);
  piVar5 = (int *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar4 + 0x18));
LAB_142c64b6b:
  plVar1 = (longlong *)(piVar5 + 2);
  if (plVar1 != param_2) {
    lVar4 = *plVar1;
    iVar7 = piVar5[4];
    if (iVar7 != 0) {
      plVar6 = (longlong *)(lVar4 + 0x98);
      do {
        if (plVar6[3] != 0) {
          FMemory::Free();
        }
        *(undefined4 *)(plVar6 + 1) = 0;
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (plVar6 + -8);
        *(undefined4 *)(plVar6 + -9) = 0;
        if (plVar6[-10] != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (plVar6 + -0x12);
        plVar6 = plVar6 + 0x18;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      lVar4 = *plVar1;
    }
    if (lVar4 != 0) {
      FMemory::Free();
    }
    *plVar1 = *param_2;
    *param_2 = 0;
    piVar5[4] = (int)param_2[1];
    piVar5[5] = *(int *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return;
}



// FUNCTION 142c64c20 FUN_142c64c20 body=423 status=ok
// SIG undefined FUN_142c64c20(void)

undefined8 FUN_142c64c20(undefined8 *param_1,longlong param_2,short param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  float fVar7;
  
  if (((*(byte *)(param_2 + 0xb1c) & 4) == 0) &&
     ((*(char *)*param_1 != '\0' || ((param_3 != 2 && (param_3 != 8)))))) {
    if (*(char *)(param_1[1] + 0x17e) == '\0') {
      lVar3 = FUN_142e5c1e0();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_142c97c50(param_2,0);
      }
    }
    if (*(char *)(param_1[1] + 0x154) != '\0') {
      fVar7 = *(float *)(param_2 + 0x234);
      if (*(float *)(param_2 + 0x234) <= *(float *)(param_2 + 0x230)) {
        fVar7 = *(float *)(param_2 + 0x230);
      }
      if (fVar7 <= *(float *)(param_2 + 0x238)) {
        fVar7 = *(float *)(param_2 + 0x238);
      }
      if (0.0 <= fVar7) {
        *(float *)(param_1[2] + 8) = *(float *)(param_1[3] + 0x4f0) / fVar7;
      }
    }
    puVar4 = (undefined8 *)
             (**(code **)(*(longlong *)param_1[3] + 0x138))((longlong *)param_1[3],param_3);
    puVar1 = (undefined4 *)param_1[2];
    *(undefined8 *)(puVar1 + 4) = *puVar4;
    uVar6 = (**(code **)(*(longlong *)param_1[3] + 0x128))((longlong *)param_1[3],param_3);
    *puVar1 = uVar6;
    uVar6 = (**(code **)(*(longlong *)param_1[3] + 0x130))((longlong *)param_1[3],param_3);
    puVar1[1] = uVar6;
    plVar5 = (longlong *)FUN_142c6f640(param_1[3],param_3);
    if ((plVar5 != (longlong *)0x0) && (0.0 < *(float *)param_1[4])) {
      fVar7 = (float)(**(code **)(*plVar5 + 0x280))(plVar5);
      *(float *)(param_1[2] + 8) = fVar7 / *(float *)param_1[4];
    }
    (**(code **)(*(longlong *)param_1[3] + 0xa8))
              ((longlong *)param_1[3],param_2,param_3,plVar5,param_1[2],param_1[5]);
  }
  return 1;
}



// FUNCTION 142c64e70 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FUdpSerializedMessage>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 142c64ea0 FUN_142c64ea0 body=67 status=ok
// SIG undefined FUN_142c64ea0(void)

longlong FUN_142c64ea0(longlong param_1,ulonglong param_2)

{
  FUN_142c63b30(param_1 + 0x458);
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x568);
  }
  return param_1;
}



// FUNCTION 142c64ef0 FUN_142c64ef0 body=142 status=ok
// SIG undefined FUN_142c64ef0(void)

undefined8 * FUN_142c64ef0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  FUN_142c6b790(param_1 + 1,0);
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1447540b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142c64f80 FUN_142c64f80 body=52 status=ok
// SIG undefined FUN_142c64f80(void)

undefined8 FUN_142c64f80(undefined8 param_1,ulonglong param_2)

{
  FUN_142c63be0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142c64fc0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 USCAISystem::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  UAISystem::~UAISystem();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 142c65000 FUN_142c65000 body=105 status=ok
// SIG undefined FUN_142c65000(void)

undefined8 * FUN_142c65000(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14583db20;
  param_1[5] = &PTR_LAB_14583ddd0;
  param_1[0xc] = &PTR_LAB_14583de18;
  if (param_1[0x23] != 0) {
    FMemory::Free();
  }
  FUN_1406d8e10(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a8);
  }
  return param_1;
}



// FUNCTION 142c65070 FUN_142c65070 body=107 status=ok
// SIG undefined FUN_142c65070(void)

longlong FUN_142c65070(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  FUN_1406d8e10(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,600);
  }
  return param_1;
}



// FUNCTION 142c650e0 FUN_142c650e0 body=119 status=ok
// SIG undefined FUN_142c650e0(void)

longlong FUN_142c650e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  FUN_1409c46c0(param_1 + 0x130);
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  FUN_1406d8e10(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3b8);
  }
  return param_1;
}



// FUNCTION 142c65160 FUN_142c65160 body=105 status=ok
// SIG undefined FUN_142c65160(void)

undefined8 * FUN_142c65160(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14583db20;
  param_1[5] = &PTR_LAB_14583ddd0;
  param_1[0xc] = &PTR_LAB_14583de18;
  if (param_1[0x23] != 0) {
    FMemory::Free();
  }
  FUN_1406d8e10(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 142c651d0 FUN_142c651d0 body=52 status=ok
// SIG undefined FUN_142c651d0(void)

undefined8 FUN_142c651d0(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8e10();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 142c65210 FUN_142c65210 body=52 status=ok
// SIG undefined FUN_142c65210(void)

undefined8 FUN_142c65210(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8e10();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 142c65250 FUN_142c65250 body=90 status=ok
// SIG undefined FUN_142c65250(void)

undefined4 FUN_142c65250(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar2 = FUN_142e20fc0();
    lVar1 = *(longlong *)(param_1 + 0x70);
    lVar3 = lVar1;
    if (lVar1 != 0) {
      while (lVar3 != lVar2) {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        if (lVar3 == 0) {
          return 2;
        }
      }
      if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
        FUN_142c84570(*(longlong *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x70));
      }
    }
  }
  return 2;
}



// FUNCTION 142c652b0 FUN_142c652b0 body=1222 status=ok
// SIG undefined FUN_142c652b0(void)

void FUN_142c652b0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined4 local_res10 [2];
  longlong local_res18;
  undefined8 local_res20;
  undefined8 local_138;
  longlong **pplStack_130;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined1 local_100 [16];
  longlong *local_f0;
  float *local_e8;
  undefined1 *local_e0;
  undefined4 *local_d8;
  undefined1 local_c8 [12];
  undefined4 local_bc;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_48;
  
  lVar3 = FUN_142c71f80();
  lVar4 = FUN_142c725a0(param_1);
  if ((((lVar3 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) && (lVar4 != 0)) &&
     (0 < *(int *)(lVar4 + 0xbf8))) {
    _guard_xfg_dispatch_icall_nop(local_c8,0,0x90);
    local_bc = 0x3f800000;
    iVar2 = FUN_142d5fbc0(param_1);
    if (((iVar2 == -1) || (iVar2 < 0)) ||
       (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x4f8) + 0x718),
       *(int *)(lVar5 + 0x160) <= iVar2)) {
      local_res20 = 0;
    }
    else {
      local_res20 = *(undefined8 *)(*(longlong *)(lVar5 + 0x158) + (longlong)iVar2 * 0x10);
    }
    local_48 = local_res20;
    FUN_142d61350(&local_138,param_1);
    local_a0 = pplStack_130._0_4_;
    local_res18 = *(longlong *)(param_1 + 0x10);
    local_a8 = local_138;
    FUN_142db7170(lVar3,*(undefined1 *)(local_res18 + 0x1a8));
    local_118 = *(undefined4 *)(local_res18 + 0x1ac);
    uStack_114 = *(undefined4 *)(local_res18 + 0x1b0);
    uStack_110 = *(undefined4 *)(local_res18 + 0x1b4);
    uStack_10c = *(undefined4 *)(local_res18 + 0x1b8);
    local_108 = *(undefined4 *)(local_res18 + 0x1bc);
    if ((*(char *)(local_res18 + 0x1c3) != '\0') && (*(char *)(local_res18 + 0x1c0) != '\x01')) {
      uStack_110 = 0xbf800000;
    }
    if (((*(char *)(local_res18 + 0x1a9) - 1U & 0xfd) == 0) &&
       (lVar5 = FUN_142c71d20(param_1), lVar5 != 0)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b2fed0) &&
         (_Init_thread_header(&DAT_146b2fed0), DAT_146b2fed0 == -1)) {
        FName::FName(&DAT_146b2fec8,L"Dynamic Physical Animation",1);
        _Init_thread_footer(&DAT_146b2fed0);
      }
      FUN_142dafbc0(lVar5 + 0x8b0,&DAT_146b2fec8);
      FUN_142dafbc0(lVar5 + 0x948,&DAT_146b2fec8);
    }
    cVar1 = *(char *)(local_res18 + 0x1aa);
    if (cVar1 == '\0') {
      FUN_142db69c0(lVar3,&local_res20,&local_118,1);
    }
    else if (cVar1 == '\x01') {
      fVar6 = (float)FUN_142d60a40(param_1);
      FUN_142d61120(&local_138,param_1,0);
      local_128 = (float)local_138 * fVar6;
      local_124 = local_138._4_4_ * fVar6;
      local_120 = pplStack_130._0_4_ * fVar6;
      FUN_142da2960(lVar3,local_c8,&local_128,&local_118,1);
    }
    else if (cVar1 == '\x02') {
      local_48 = *(undefined8 *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x718) + 0x158) +
                  (longlong)
                  *(short *)(*(longlong *)
                              (*(longlong *)(lVar4 + 0xbf0) + (longlong)*(int *)(lVar3 + 0x2a8) * 8)
                            + 4) * 0x10);
      fVar6 = (float)FUN_142d60a40(param_1);
      FUN_142d61120(&local_128,param_1,0);
      local_138 = (code *)CONCAT44(local_124 * fVar6,local_128 * fVar6);
      pplStack_130 = (longlong **)CONCAT44(pplStack_130._4_4_,local_120 * fVar6);
      FUN_142da2960(lVar3,local_c8,&local_138,&local_118,1);
    }
    if (*(char *)(local_res18 + 0x1cd) != '\0') {
      fVar6 = (float)FUN_142d60a40(param_1);
      FUN_142d61120(&local_138,param_1,0);
      local_120 = *(float *)(local_res18 + 0x1c4);
      local_128 = (float)local_138 * fVar6 * local_120;
      local_124 = local_138._4_4_ * fVar6 * local_120;
      local_120 = pplStack_130._0_4_ * fVar6 * local_120;
      fVar6 = SQRT(local_124 * local_124 + local_128 * local_128 + local_120 * local_120) *
              *(float *)(local_res18 + 0x1c8);
      if (local_120 < fVar6) {
        local_120 = fVar6;
      }
      FUN_142d61350(local_100,param_1);
      local_res10[0] = FUN_142db9370();
      if (((int)local_48 == 0) && (local_48._4_4_ == 0)) {
        if (**(longlong **)(lVar4 + 0xbf0) == 0) {
          return;
        }
        cVar1 = FWeakObjectPtr::IsValid(**(longlong **)(lVar4 + 0xbf0) + 0x140);
        if (cVar1 == '\0') {
          return;
        }
        lVar3 = FWeakObjectPtr::Get(**(longlong **)(lVar4 + 0xbf0) + 0x140);
        local_48 = *(undefined8 *)(lVar3 + 0x90);
      }
      local_f0 = &local_res18;
      local_e8 = &local_128;
      local_e0 = local_100;
      local_d8 = local_res10;
      pplStack_130 = &local_f0;
      local_138 = FUN_142c69ea0;
      FUN_1427da670(lVar4,local_48,1,0,&local_138);
    }
  }
  return;
}



// FUNCTION 142c65780 FUN_142c65780 body=440 status=ok
// SIG undefined FUN_142c65780(void)

void FUN_142c65780(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((*param_2 != 0) && (*(longlong *)(*param_2 + 0x18) != 0)) {
    iVar5 = FUN_142235230();
    plVar7 = (longlong *)*param_2;
    if ((*(char *)((longlong)plVar7 + 0x31) == '\x02') || (iVar5 == 3)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      *(int *)(param_1 + 0x560) = *(int *)(param_1 + 0x560) + 1;
      *(undefined4 *)(*param_2 + 0xa4) = *(undefined4 *)(param_1 + 0x560);
      plVar7 = (longlong *)*param_2;
    }
    if (iVar5 != 3) {
      (**(code **)(*plVar7 + 8))();
      plVar7 = (longlong *)*param_2;
    }
    (**(code **)(*plVar7 + 0x10))();
    if (bVar4) {
      lVar6 = *param_2;
      pcVar3 = (char *)(lVar6 + 0xa8);
      *pcVar3 = *pcVar3 + '\x01';
      lVar6 = *(longlong *)(lVar6 + 0x18);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(lVar6 + 0x120);
        if (lVar6 == 0) {
          lVar6 = FUN_1423407b0();
        }
      }
      plVar7 = (longlong *)FUN_142c71720(lVar6);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x260))(plVar7);
      }
    }
    puVar8 = (undefined8 *)FUN_142c86b70(*param_2,local_28);
    iVar5 = *(int *)(param_1 + 0x468);
    *(int *)(param_1 + 0x468) = iVar5 + 1;
    if (*(int *)(param_1 + 0x46c) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x460,iVar5);
    }
    puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x460));
    *puVar9 = *puVar8;
    lVar6 = puVar8[1];
    puVar9[1] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_20 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    AActor::SetActorTickEnabled(param_1,1);
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return;
}



// FUNCTION 142c65940 FUN_142c65940 body=655 status=ok
// SIG undefined FUN_142c65940(void)

void FUN_142c65940(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined8 *puVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  int local_res20 [2];
  int local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  longlong local_40;
  int local_38;
  int local_34;
  longlong local_30;
  
  FWeakObjectPtr::operator=(&local_60);
  cVar2 = FWeakObjectPtr::IsValid(&local_60);
  if (cVar2 != '\0') {
    local_50 = local_60;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x390,local_res20,&local_50);
    pwVar10 = (wchar_t *)0x0;
    pwVar4 = pwVar10;
    if (local_res20[0] != -1) {
      pwVar4 = (wchar_t *)((longlong)local_res20[0] * 0x20 + *(longlong *)(param_1 + 0x390));
    }
    pwVar3 = pwVar4 + 4;
    if (pwVar4 == (wchar_t *)0x0) {
      pwVar3 = pwVar10;
    }
    if (pwVar3 == (wchar_t *)0x0) {
      local_48 = &local_60;
      FUN_142c60850(param_1 + 0x390,local_68,&local_48,0);
      lVar7 = *(longlong *)(param_1 + 0x390) + (longlong)local_68[0] * 0x20;
      iVar1 = *(int *)(lVar7 + 0x10);
      *(int *)(lVar7 + 0x10) = iVar1 + 1;
      if (*(int *)(lVar7 + 0x14) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar7 + 8,iVar1);
      }
      puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar7 + 8));
      *puVar5 = *param_3;
      lVar7 = param_3[1];
      puVar5[1] = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
        UNLOCK();
      }
      pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UGbxActionComponent::OnComponentUnregistered",L"::")
      ;
      while (pwVar3 = pwVar4, pwVar3 != (wchar_t *)0x0) {
        pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar10 = pwVar3;
      }
      FName::FName(&local_40,pwVar10 + 2,1);
      plVar9 = (longlong *)(param_2 + 0x128);
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_30 = local_40;
      local_58 = 0;
      if ((local_40 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_30);
      }
      piVar6 = (int *)*plVar9;
      iVar1 = *(int *)(param_2 + 0x130);
      for (piVar8 = piVar6; piVar8 != piVar6 + (longlong)iVar1 * 4; piVar8 = piVar8 + 4) {
        if ((((*piVar8 == local_38) && (piVar8[1] == local_34)) ||
            ((cVar2 = FWeakObjectPtr::IsValid(piVar8), cVar2 == '\0' &&
             (cVar2 = FWeakObjectPtr::IsValid(&local_38), cVar2 == '\0')))) &&
           (*(longlong *)(piVar8 + 2) == local_30)) {
          if ((int)((longlong)piVar8 - (longlong)piVar6 >> 4) != -1) goto LAB_142c65b7f;
          break;
        }
      }
      iVar1 = *(int *)(param_2 + 0x130);
      *(int *)(param_2 + 0x130) = iVar1 + 1;
      if (*(int *)(param_2 + 0x134) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar1);
      }
      piVar6 = (int *)((longlong)iVar1 * 0x10 + *plVar9);
      *piVar6 = local_38;
      piVar6[1] = local_34;
      *(longlong *)(piVar6 + 2) = local_30;
LAB_142c65b7f:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
    }
    else {
      TArray<TWeakPtr<IBusListener,1>,FDefaultAllocator>::
      AddUniqueImpl<TWeakPtr<IBusListener,1>_const_&>(pwVar3,param_3);
    }
  }
  plVar9 = (longlong *)param_3[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar6 = (int *)((longlong)plVar9 + 0xc);
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (plVar9 != (longlong *)0x0)) {
      (**(code **)(*plVar9 + 8))(plVar9,1);
    }
  }
  return;
}



// FUNCTION 142c65bd0 FUN_142c65bd0 body=171 status=ok
// SIG undefined FUN_142c65bd0(void)

int FUN_142c65bd0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    FUN_1404852a0(param_1,iVar1);
  }
  if (param_2 != 0) {
    lVar2 = (longlong)iVar1 * 0xc0 + 0x34 + *param_1;
    do {
      *(undefined8 *)(lVar2 + -0x2c) = 0;
      *(undefined8 *)(lVar2 + -0x24) = 0;
      *(undefined8 *)(lVar2 + -0xc) = 0;
      *(undefined8 *)(lVar2 + -4) = 0;
      *(undefined4 *)(lVar2 + 4) = 0xffffffff;
      *(undefined4 *)(lVar2 + 8) = 0;
      *(undefined8 *)(lVar2 + 0x14) = 0;
      *(undefined4 *)(lVar2 + 0x1c) = 0;
      *(undefined8 *)(lVar2 + 0x24) = 0;
      *(undefined8 *)(lVar2 + 0x2c) = 0;
      *(undefined8 *)(lVar2 + 0x44) = 0;
      *(undefined8 *)(lVar2 + 0x4c) = 0;
      *(undefined4 *)(lVar2 + 0x54) = 0xffffffff;
      *(undefined4 *)(lVar2 + 0x58) = 0;
      *(undefined8 *)(lVar2 + 100) = 0;
      *(undefined4 *)(lVar2 + 0x6c) = 0;
      *(undefined8 *)(lVar2 + 0x7c) = 0;
      *(undefined8 *)(lVar2 + 0x84) = 0;
      lVar2 = lVar2 + 0xc0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}



// FUNCTION 142c65c80 FUN_142c65c80 body=216 status=ok
// SIG undefined FUN_142c65c80(void)

void FUN_142c65c80(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_1 + 0x428);
  uVar4 = (ulonglong)(int)param_2;
  iVar2 = iVar1 + param_2;
  *(int *)(param_1 + 0x428) = iVar2;
  if (*(int *)(param_1 + 0x42c) < iVar2) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x420);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(param_1 + 0x420) + (longlong)iVar1 * 8),0,uVar4 << 3);
  iVar1 = *(int *)(param_1 + 0x438);
  *(uint *)(param_1 + 0x438) = iVar1 + param_2;
  if (*(int *)(param_1 + 0x43c) < (int)(iVar1 + param_2)) {
    FUN_1404852a0(param_1 + 0x430,iVar1);
  }
  lVar3 = (longlong)iVar1 * 0xc0 + *(longlong *)(param_1 + 0x430);
  while (param_2 != 0) {
    FWeakObjectPtr::operator=(lVar3,0);
    FWeakObjectPtr::operator=(lVar3 + 8);
    *(undefined8 *)(lVar3 + 0xb0) = 0;
    *(undefined8 *)(lVar3 + 0xb8) = 0;
    lVar3 = lVar3 + 0xc0;
    param_2 = (int)uVar4 - 1;
    uVar4 = (ulonglong)param_2;
  }
  return;
}



// FUNCTION 142c65d60 FUN_142c65d60 body=482 status=ok
// SIG undefined FUN_142c65d60(void)

void FUN_142c65d60(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  char param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  
  plVar1 = (longlong *)(param_1 + 0x1a0);
  if (param_5 == '\0') {
    iVar3 = (int)param_2[1];
    if (iVar3 != 0) {
      iVar5 = *(int *)(param_1 + 0x1a8);
      if (*(int *)(param_1 + 0x1ac) < iVar5 + iVar3) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1);
        iVar5 = *(int *)(param_1 + 0x1a8);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar5 * 0x10 + *plVar1),(void *)*param_2,(longlong)iVar3 << 4);
      *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + iVar3;
    }
    iVar3 = *(int *)(param_3 + 1);
    if (iVar3 != 0) {
      iVar5 = *(int *)(param_1 + 0x1b8);
      if (*(int *)(param_1 + 0x1bc) < iVar5 + iVar3) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong *)(param_1 + 0x1b0));
        iVar5 = *(int *)(param_1 + 0x1b8);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x1b0)),(void *)*param_3,
                 (longlong)iVar3 << 4);
      *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + iVar3;
    }
    iVar3 = *(int *)(param_4 + 1);
    if (iVar3 != 0) {
      iVar5 = *(int *)(param_1 + 0x1c8);
      if (*(int *)(param_1 + 0x1cc) < iVar5 + iVar3) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  ((longlong *)(param_1 + 0x1c0));
        iVar5 = *(int *)(param_1 + 0x1c8);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x1c0) + (longlong)iVar5 * 0x18),(void *)*param_4,
                 (longlong)iVar3 * 0x18);
      *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + iVar3;
    }
  }
  else {
    if (plVar1 != param_2) {
      iVar3 = (int)param_2[1];
      pvVar4 = (void *)*param_2;
      *(int *)(param_1 + 0x1a8) = iVar3;
      if ((iVar3 == 0) && (*(int *)(param_1 + 0x1ac) == 0)) {
        *(undefined4 *)(param_1 + 0x1ac) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar1,iVar3);
        _guard_xfg_dispatch_icall_nop((void *)*plVar1,pvVar4,(longlong)iVar3 << 4);
      }
    }
    puVar2 = (undefined8 *)(param_1 + 0x1b0);
    if (puVar2 != param_3) {
      iVar3 = *(int *)(param_3 + 1);
      pvVar4 = (void *)*param_3;
      *(int *)(param_1 + 0x1b8) = iVar3;
      if ((iVar3 == 0) && (*(int *)(param_1 + 0x1bc) == 0)) {
        *(undefined4 *)(param_1 + 0x1bc) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2,iVar3);
        _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar4,(longlong)iVar3 << 4);
      }
    }
    puVar2 = (undefined8 *)(param_1 + 0x1c0);
    if (puVar2 != param_4) {
      iVar3 = *(int *)(param_4 + 1);
      pvVar4 = (void *)*param_4;
      *(int *)(param_1 + 0x1c8) = iVar3;
      if ((iVar3 == 0) && (*(int *)(param_1 + 0x1cc) == 0)) {
        *(undefined4 *)(param_1 + 0x1cc) = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar2,iVar3);
        _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar4,(longlong)iVar3 * 0x18);
      }
    }
  }
  return;
}



// FUNCTION 142c65f50 FUN_142c65f50 body=394 status=ok
// SIG undefined FUN_142c65f50(void)

void FUN_142c65f50(longlong param_1,int param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined1 local_res8 [8];
  
  lVar4 = param_1 + 0x30;
  iVar7 = *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0xb8) = iVar7 + 1;
  if (*(int *)(param_1 + 0xbc) < iVar7 + 1) {
    TArray<TTuple<FString,FString>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(lVar4,iVar7);
  }
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    lVar5 = lVar4;
  }
  puVar6 = (undefined8 *)(lVar5 + (longlong)iVar7 * 0x20);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    lVar5 = lVar4;
  }
  puVar8 = (undefined8 *)(lVar5 + (longlong)iVar7 * 0x20);
  uVar2 = FWeakObjectPtr::Get(param_1 + 8);
  puVar6 = (undefined8 *)FUN_142274910(uVar2,local_res8,param_2);
  *puVar8 = *puVar6;
  uVar2 = FWeakObjectPtr::Get(param_1 + 8);
  fVar9 = (float)FUN_142274830(uVar2,param_2);
  uVar2 = FWeakObjectPtr::Get(param_1 + 8);
  uVar3 = FWeakObjectPtr::Get(param_1);
  fVar10 = (float)UAnimInstance::Montage_GetPlayRate(uVar3,uVar2);
  if (*(float *)(param_1 + 0x18) <= 0.0) {
    fVar1 = *(float *)(param_1 + 0x10);
    if (0.0 < fVar1) {
      *(float *)(puVar8 + 2) = fVar1;
      if (0 < *(int *)(param_1 + 0x14)) {
        fVar10 = fVar9 / fVar1;
      }
      goto LAB_142c66071;
    }
  }
  else {
    fVar10 = *(float *)(param_1 + 0x18) * fVar10;
  }
  *(float *)(puVar8 + 2) = fVar9 / fVar10;
LAB_142c66071:
  *(float *)(puVar8 + 3) = fVar10;
  iVar7 = 1;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar7 = *(int *)(param_1 + 0x14);
  }
  *(float *)((longlong)puVar8 + 0x14) = (float)iVar7;
  lVar4 = FWeakObjectPtr::Get(param_1 + 8);
  if (param_2 + 1 < *(int *)(lVar4 + 0x170)) {
    lVar4 = FWeakObjectPtr::Get(param_1 + 8);
    puVar8[1] = *(undefined8 *)((longlong)param_2 * 0x58 + 0x88 + *(longlong *)(lVar4 + 0x168));
  }
  return;
}



// FUNCTION 142c660e0 FUN_142c660e0 body=112 status=ok
// SIG undefined FUN_142c660e0(void)

void FUN_142c660e0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  uVar2 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x18) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x88))((longlong *)*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 142c66150 FUN_142c66150 body=148 status=ok
// SIG undefined FUN_142c66150(void)

void FUN_142c66150(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 8,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x10,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x18,0,0);
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = (longlong)*(int *)(param_1 + 0x28) * 0x38 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x38) {
    if (*(char *)(lVar1 + 8) == '\x03') {
      (**(code **)(*param_2 + 0x38))(param_2,lVar1 + 0x18,0,0);
    }
  }
  return;
}



// FUNCTION 142c661f0 FUN_142c661f0 body=81 status=ok
// SIG undefined FUN_142c661f0(void)

void FUN_142c661f0(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x470,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x478,0,0);
  FUN_142c662c0(param_1,param_2);
  return;
}



// FUNCTION 142c66250 FUN_142c66250 body=103 status=ok
// SIG undefined FUN_142c66250(void)

void FUN_142c66250(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x4f8,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x500,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x508,0,0);
  FUN_142c662c0(param_1,param_2);
  return;
}



// FUNCTION 142c662c0 FUN_142c662c0 body=357 status=ok
// SIG undefined FUN_142c662c0(void)

void FUN_142c662c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 local_res8;
  
  lVar3 = param_1 + 0x100;
  lVar1 = 4;
  do {
    (**(code **)(*param_2 + 0x38))(param_2,lVar3,0,0);
    lVar3 = lVar3 + 8;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  puVar4 = *(undefined8 **)(param_1 + 0x420);
  uVar5 = (longlong)*(int *)(param_1 + 0x428) & 0x1fffffffffffffff;
  if (puVar4 + *(int *)(param_1 + 0x428) < puVar4) {
    uVar5 = 0;
  }
  if (uVar5 != 0) {
    uVar2 = 0;
    do {
      local_res8 = *puVar4;
      (**(code **)(*param_2 + 0x38))(param_2,&local_res8,0,0);
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar2 != uVar5);
  }
  FUN_142d9bec0(param_1 + 0x440,param_2);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0xe8,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0xf0,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 8,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x10,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x18,0,0);
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar1 = (longlong)*(int *)(param_1 + 0x28) * 0x38 + lVar3;
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x38) {
    if (*(char *)(lVar3 + 8) == '\x03') {
      (**(code **)(*param_2 + 0x38))(param_2,lVar3 + 0x18,0,0);
    }
  }
  return;
}



// FUNCTION 142c66430 FUN_142c66430 body=809 status=ok
// SIG undefined FUN_142c66430(void)

void FUN_142c66430(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int local_res20 [2];
  int local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 *local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  longlong *local_48;
  longlong *local_38;
  
  FWeakObjectPtr::operator=(&local_80);
  cVar3 = FWeakObjectPtr::IsValid(&local_80);
  if (cVar3 != '\0') {
    local_68 = local_80;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x340,local_res20,&local_68);
    plVar5 = (longlong *)0x0;
    if (local_res20[0] != -1) {
      plVar5 = (longlong *)((longlong)local_res20[0] * 0x20 + *(longlong *)(param_1 + 0x340));
    }
    plVar4 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      local_60 = &local_80;
      FUN_142c60850(param_1 + 0x340,local_88,&local_60,0);
      lVar7 = (longlong)local_88[0] * 0x20 + *(longlong *)(param_1 + 0x340);
      iVar2 = *(int *)(lVar7 + 0x10);
      *(int *)(lVar7 + 0x10) = iVar2 + 1;
      if (*(int *)(lVar7 + 0x14) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar7 + 8,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar7 + 8));
      *puVar6 = *param_3;
      lVar7 = param_3[1];
      puVar6[1] = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
        UNLOCK();
      }
      uStack_70 = 0;
      local_78 = FUN_142c7a860;
      plVar5 = (longlong *)(param_2 + 0x3b0);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      local_48 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        *(undefined4 *)(plVar4 + 2) = (undefined4)local_78;
        *(undefined4 *)((longlong)plVar4 + 0x14) = local_78._4_4_;
        *(undefined4 *)(plVar4 + 3) = uStack_70;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_6c;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar4[5] = lVar7;
        *plVar4 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,1);
        (**(code **)(*plVar4 + 0x20))(plVar4,local_58);
        iVar2 = *(int *)(param_2 + 0x3b8);
        *(int *)(param_2 + 0x3b8) = iVar2 + 1;
        if (*(int *)(param_2 + 0x3bc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar2);
        }
        puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar5);
        *puVar6 = plVar4;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
      uStack_70 = 0;
      local_78 = FUN_142c7ab60;
      plVar5 = (longlong *)(param_2 + 0x3c8);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      local_38 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        *(undefined4 *)(plVar4 + 2) = (undefined4)local_78;
        *(undefined4 *)((longlong)plVar4 + 0x14) = local_78._4_4_;
        *(undefined4 *)(plVar4 + 3) = uStack_70;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_6c;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar4[5] = lVar7;
        *plVar4 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,1);
        (**(code **)(*plVar4 + 0x20))(plVar4,local_50);
        iVar2 = *(int *)(param_2 + 0x3d0);
        *(int *)(param_2 + 0x3d0) = iVar2 + 1;
        if (*(int *)(param_2 + 0x3d4) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar2);
        }
        puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar5);
        *puVar6 = plVar4;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
    }
    else {
      cVar3 = FUN_142c601c0(plVar4,param_3);
      if (cVar3 == '\0') {
        iVar2 = (int)plVar4[1];
        *(int *)(plVar4 + 1) = iVar2 + 1;
        if (*(int *)((longlong)plVar4 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar2);
        }
        puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar4);
        *puVar6 = *param_3;
        lVar7 = param_3[1];
        puVar6[1] = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
          UNLOCK();
        }
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}



// FUNCTION 142c66760 FUN_142c66760 body=662 status=ok
// SIG undefined FUN_142c66760(void)

void FUN_142c66760(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_a8 [4];
  undefined1 local_a4 [8];
  undefined1 local_9c [8];
  undefined1 local_94 [8];
  undefined1 local_8c [12];
  undefined1 *local_80;
  longlong *local_78;
  undefined1 *local_70;
  longlong *local_68;
  undefined1 *local_60;
  longlong *local_58;
  undefined1 *local_50;
  longlong *local_48;
  
  if (((*param_2 != 0) && (lVar3 = *(longlong *)(*param_2 + 0x18), lVar3 != 0)) && (param_1 != 0)) {
    lVar5 = UMaterialInstanceConstant::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FWeakObjectPtr::operator=(local_a4,param_1);
      local_80 = local_a4;
      local_78 = param_2;
      FUN_141e10400(lVar3 + 0x238,local_res10,&local_80,0);
      plVar6 = (longlong *)FUN_142274b30(param_1);
      lVar7 = *plVar6;
      lVar5 = lVar7 + (longlong)(int)plVar6[1] * 0x18;
      for (; lVar7 != lVar5; lVar7 = lVar7 + 0x18) {
        plVar6 = *(longlong **)(lVar7 + 8);
        plVar8 = plVar6 + (longlong)*(int *)(lVar7 + 0x10) * 4;
        for (; plVar6 != plVar8; plVar6 = plVar6 + 4) {
          if (*plVar6 != 0) {
            FWeakObjectPtr::operator=(local_9c);
            local_70 = local_9c;
            local_68 = param_2;
            FUN_141e10400(lVar3 + 0x238,local_res18,&local_70,0);
          }
        }
      }
    }
    else {
      lVar5 = UBlendSpaceBase::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar8 = *(longlong **)(param_1 + 200);
        plVar6 = plVar8 + (longlong)*(int *)(param_1 + 0xd0) * 3;
        for (; plVar8 != plVar6; plVar8 = plVar8 + 3) {
          if (*plVar8 != 0) {
            FWeakObjectPtr::operator=(local_94);
            local_60 = local_94;
            local_58 = param_2;
            FUN_141e10400(lVar3 + 0x238,local_res20,&local_60,0);
          }
        }
      }
      else {
        lVar5 = UAnimMontage::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          FWeakObjectPtr::operator=(local_8c,param_1);
          local_50 = local_8c;
          local_48 = param_2;
          FUN_141e10400(lVar3 + 0x238,local_a8,&local_50,0);
        }
      }
    }
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar6 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 142c66a00 FUN_142c66a00 body=336 status=ok
// SIG undefined FUN_142c66a00(void)

void FUN_142c66a00(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  lVar3 = *param_2;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  puVar8 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
  *puVar8 = *param_1;
  puVar8[1] = uVar4;
  puVar8[2] = uVar5;
  puVar8[3] = uVar6;
  *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = *(undefined8 *)(param_1 + 4);
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  lVar3 = *param_2;
  uVar4 = param_1[7];
  uVar5 = param_1[8];
  uVar6 = param_1[9];
  puVar8 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
  *puVar8 = param_1[6];
  puVar8[1] = uVar4;
  puVar8[2] = uVar5;
  puVar8[3] = uVar6;
  *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = *(undefined8 *)(param_1 + 10);
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  lVar3 = *param_2;
  uVar4 = param_1[0xd];
  uVar5 = param_1[0xe];
  uVar6 = param_1[0xf];
  puVar8 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
  *puVar8 = param_1[0xc];
  puVar8[1] = uVar4;
  puVar8[2] = uVar5;
  puVar8[3] = uVar6;
  *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = *(undefined8 *)(param_1 + 0x10);
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  lVar3 = *param_2;
  uVar4 = param_1[0x13];
  uVar5 = param_1[0x14];
  uVar6 = param_1[0x15];
  puVar8 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
  *puVar8 = param_1[0x12];
  puVar8[1] = uVar4;
  puVar8[2] = uVar5;
  puVar8[3] = uVar6;
  *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = *(undefined8 *)(param_1 + 0x16);
  puVar8 = *(undefined4 **)(param_1 + 0x18);
  puVar7 = puVar8 + (longlong)(int)param_1[0x1a] * 0x10;
  for (; puVar8 != puVar7; puVar8 = puVar8 + 0x10) {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    uVar4 = puVar8[1];
    uVar5 = puVar8[2];
    uVar6 = puVar8[3];
    lVar3 = *param_2;
    puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
    *puVar1 = *puVar8;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = *(undefined8 *)(puVar8 + 4);
  }
  return;
}



// FUNCTION 142c66b50 FUN_142c66b50 body=392 status=ok
// SIG undefined FUN_142c66b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c66b50(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  lVar5 = *param_2;
  if (((lVar5 != 0) && (*param_3 != 0)) && (local_58 = 0, lVar5 != 0)) {
    plVar2 = (longlong *)(param_1 + 0x180);
    plVar7 = (longlong *)*plVar2;
    iVar4 = *(int *)(param_1 + 0x188);
    lVar3 = (longlong)iVar4 * 0x18;
    plVar8 = plVar7 + (longlong)iVar4 * 3;
    for (; plVar7 != plVar8; plVar7 = plVar7 + 3) {
      if (*plVar7 == lVar5) goto LAB_142c66c20;
    }
    *(int *)(param_1 + 0x188) = iVar4 + 1;
    local_48 = lVar5;
    if (*(int *)(param_1 + 0x18c) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar2,iVar4);
    }
    lVar6 = *plVar2;
    *(longlong *)(lVar3 + lVar6) = lVar5;
    *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
    *(undefined8 *)(lVar3 + 0x10 + lVar6) = 0;
    plVar7 = (longlong *)(*plVar2 + (longlong)(*(int *)(param_1 + 0x188) + -1) * 0x18);
LAB_142c66c20:
    if (plVar7 != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[1];
      plVar8 = plVar7 + 1;
      lVar5 = *param_3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      local_58 = lVar5;
      plStack_50 = plVar2;
      if (&local_58 != plVar8) {
        local_58 = *plVar8;
        plStack_50 = (longlong *)plVar7[2];
        *plVar8 = lVar5;
        plVar7[2] = (longlong)plVar2;
        local_30 = lVar5;
        plStack_28 = plVar2;
      }
      plVar2 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_50 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142c66ce0 FUN_142c66ce0 body=578 status=ok
// SIG undefined FUN_142c66ce0(void)

longlong * FUN_142c66ce0(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  uint *puVar7;
  longlong *plVar8;
  uint *puVar9;
  longlong *plVar10;
  uint uVar11;
  
  plVar10 = *(longlong **)(param_3 + 0x10);
  uVar11 = *(uint *)((longlong)plVar10 + 0xb4);
  while ((uVar11 >> 7 & 1) == 0) {
    plVar10 = (longlong *)plVar10[6];
    uVar11 = *(uint *)((longlong)plVar10 + 0xb4);
  }
  lVar5 = plVar10[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar10 + 0x368))(plVar10);
    lVar5 = plVar10[0x1f];
  }
  for (plVar10 = *(longlong **)(param_3 + 0x58); plVar10 != (longlong *)0x0;
      plVar10 = (longlong *)plVar10[6]) {
    if (plVar10 == *(longlong **)(lVar5 + 0x58)) {
      bVar3 = true;
      goto LAB_142c66d74;
    }
  }
  bVar3 = false;
LAB_142c66d74:
  plVar10 = *(longlong **)(lVar5 + 0x58);
  if (bVar3) {
    plVar10 = *(longlong **)(param_3 + 0x58);
  }
  puVar6 = (uint *)0x0;
  uVar11 = (int)plVar10[8] + -1 + *(int *)((longlong)plVar10 + 0x44) &
           -*(int *)((longlong)plVar10 + 0x44);
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar5 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar5 = param_1 + 0x58;
    }
    uVar4 = *(uint *)(lVar5 + ((longlong)*(int *)(param_1 + 0x68) - 1U & (longlong)(int)uVar11) * 4)
    ;
    if (uVar4 != 0xffffffff) {
      do {
        puVar9 = (uint *)((longlong)(int)uVar4 * 0x20 + *(longlong *)(param_1 + 0x20));
        if (*puVar9 == uVar11) {
          if (uVar4 != 0xffffffff) goto LAB_142c66df5;
          break;
        }
        uVar4 = puVar9[6];
      } while (uVar4 != 0xffffffff);
    }
  }
  puVar9 = puVar6;
LAB_142c66df5:
  puVar7 = puVar9 + 2;
  if (puVar9 == (uint *)0x0) {
    puVar7 = puVar6;
  }
  if (puVar7 != (uint *)0x0) {
    uVar4 = puVar7[2];
    if (uVar4 != 0) {
      lVar5 = *(longlong *)(*(longlong *)puVar7 + -8 + (longlong)(int)uVar4 * 8);
      puVar7[2] = uVar4 - 1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
      goto LAB_142c66e31;
    }
  }
  lVar5 = FMemory::Malloc((longlong)(int)uVar11,0);
LAB_142c66e31:
  (**(code **)(*plVar10 + 0x2a8))(plVar10,lVar5,1);
  *(longlong **)(lVar5 + 8) = plVar10;
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if (*(int *)(param_1 + 0x1c) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x10),iVar2);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 8) = lVar5;
  puVar9 = (uint *)operator_new(0x18);
  if (puVar9 != (uint *)0x0) {
    puVar9[2] = 1;
    *(undefined ***)puVar9 = &PTR_FUN_14583fde0;
    puVar9[3] = 1;
    *(longlong *)(puVar9 + 4) = lVar5;
    puVar6 = puVar9;
  }
  *param_2 = lVar5;
  param_2[1] = (longlong)puVar6;
  SharedPointerInternals::EnableSharedFromThis(param_2,lVar5,lVar5);
  lVar5 = *param_2;
  *(longlong *)(lVar5 + 0xb8) = lVar5;
  plVar10 = (longlong *)param_2[1];
  plVar8 = *(longlong **)(lVar5 + 0xc0);
  if (plVar10 != plVar8) {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar5 + 0xc0);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    *(longlong **)(lVar5 + 0xc0) = plVar10;
  }
  return param_2;
}



// FUNCTION 142c66f30 FUN_142c66f30 body=175 status=ok
// SIG undefined FUN_142c66f30(void)

undefined1 FUN_142c66f30(float *param_1,float *param_2,float param_3)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  
  cVar1 = UAIBlueprintHelperLibrary::IsValidAILocation(param_2);
  cVar2 = UAIBlueprintHelperLibrary::IsValidAILocation(param_1);
  if ((((cVar2 != cVar1) || (param_3 <= ABS(*param_1 - *param_2))) ||
      (param_3 <= ABS(param_1[1] - param_2[1]))) ||
     (((param_3 <= ABS(param_1[2] - param_2[2]) || (param_3 < ABS(param_1[3] - param_2[3]))) ||
      (param_3 < ABS(param_1[4] - param_2[4]))))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 142c66fe0 FUN_142c66fe0 body=331 status=ok
// SIG undefined FUN_142c66fe0(void)

void FUN_142c66fe0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar4 = param_1[2];
  *(undefined1 *)((longlong)param_1 + 0xfc) = 1;
  if (*(char *)(lVar4 + 0xb0) != '\0') {
    (**(code **)(*param_1 + 0xd8))();
    if ((param_1[3] != 0) &&
       ((*(longlong *)(param_1[3] + 0x120) != 0 || (lVar3 = FUN_1423407b0(), lVar3 != 0)))) {
      lVar3 = *(longlong *)(param_1[3] + 0x120);
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0();
      }
      cVar2 = FUN_1428cfb70(lVar3);
      if (cVar2 != '\0') {
        (**(code **)(*param_1 + 0xe8))(param_1);
      }
    }
  }
  plVar6 = (longlong *)0x0;
  plVar5 = plVar6;
  if (param_1[3] != 0) {
    plVar5 = *(longlong **)(param_1[3] + 0x118);
  }
  FUN_142e25f80(lVar4,plVar5);
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x19);
  if (*(char *)(param_1[2] + 0x17f) != '\0') {
    plVar5 = plVar6;
    if (param_1[3] != 0) {
      plVar5 = *(longlong **)(param_1[3] + 0x118);
    }
    if ((plVar5 != (longlong *)0x0) && (lVar4 = (**(code **)(*plVar5 + 0x678))(), lVar4 != 0)) {
      lVar3 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        plVar6 = *(longlong **)(lVar4 + 0x900);
      }
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_142dafc80(plVar6 + 0x4ad,0x3e800000,(longlong)plVar6 + 0x18c);
    }
  }
  return;
}



// FUNCTION 142c67130 FUN_142c67130 body=67 status=ok
// SIG undefined FUN_142c67130(void)

void FUN_142c67130(undefined8 param_1)

{
  longlong lVar1;
  
  FUN_142c66fe0();
  lVar1 = FUN_142c71f80(param_1);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0x210) & 0x10) != 0) {
      *(byte *)(lVar1 + 0x210) = *(byte *)(lVar1 + 0x210) ^ 0x10;
    }
    FUN_142da27d0(lVar1);
    return;
  }
  return;
}



// FUNCTION 142c67180 FUN_142c67180 body=168 status=ok
// SIG undefined FUN_142c67180(void)

void FUN_142c67180(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1[2];
  *(undefined1 *)((longlong)param_1 + 0xfc) = 1;
  if (*(char *)(lVar1 + 0xb0) != '\0') {
    (**(code **)(*param_1 + 0xd8))();
    if (param_1[3] != 0) {
      if (*(longlong *)(param_1[3] + 0x120) == 0) {
        lVar3 = FUN_1423407b0();
        if (lVar3 == 0) goto LAB_142c671f6;
      }
      lVar3 = *(longlong *)(param_1[3] + 0x120);
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0();
      }
      cVar2 = FUN_1428cfb70(lVar3);
      if (cVar2 != '\0') {
        (**(code **)(*param_1 + 0xe8))(param_1);
      }
    }
  }
LAB_142c671f6:
  if (param_1[3] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1[3] + 0x118);
  }
  FUN_142e25f80(lVar1,uVar4);
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x19);
  return;
}



// FUNCTION 142c67230 FUN_142c67230 body=425 status=ok
// SIG undefined FUN_142c67230(void)

undefined8 FUN_142c67230(longlong *param_1,longlong param_2,undefined2 param_3,float param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  float fVar9;
  undefined4 local_res10 [2];
  
  if (param_2 == 0) {
    return 1;
  }
  lVar4 = FUN_1423ac7e0(param_2);
  if (lVar4 == 0) {
    return 1;
  }
  lVar5 = FUN_142c71af0(param_1,param_3);
  if (lVar5 == 0) {
    lVar5 = FUN_142c6f640(param_1,param_3);
    if (lVar5 == 0) {
      return 1;
    }
    lVar6 = UBlendSpaceBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) {
      return 1;
    }
    uVar7 = (**(code **)(*param_1 + 0x138))(param_1,param_3);
    lVar4 = FUN_14225eb80(lVar4,lVar5,uVar7);
    if (lVar4 == 0) {
      return 1;
    }
    if ((*(longlong *)(lVar4 + 8) == 0) || (*(char *)(lVar4 + 0x1c) == '\0')) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) {
      return 1;
    }
    if ((*(longlong *)(lVar4 + 8) == 0) || (*(float *)(lVar4 + 0x50) == 0.0)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    bVar8 = !bVar8;
  }
  else {
    cVar2 = FUN_142278320(lVar4,lVar5,0);
    lVar6 = UAnimInstance::GetActiveInstanceForMontage(lVar4,lVar5);
    if (lVar6 == 0) {
      return 1;
    }
    uVar1 = *(undefined4 *)(lVar6 + 0x178);
    fVar9 = (float)FUN_142274a40(lVar5,uVar1);
    local_res10[0] = FUN_1422746f0(lVar5,uVar1);
    iVar3 = FUN_142277f60(lVar4,lVar5,local_res10);
    if (cVar2 != '\0') {
      return 0;
    }
    if (param_4 < fVar9) {
      return 0;
    }
    bVar8 = iVar3 == -1;
  }
  if (bVar8) {
    return 1;
  }
  return 0;
}



// FUNCTION 142c673e0 FUN_142c673e0 body=107 status=ok
// SIG undefined FUN_142c673e0(void)

undefined1 FUN_142c673e0(undefined8 param_1,undefined4 param_2)

{
  undefined1 local_res8 [8];
  undefined4 local_res10 [6];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined **local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined1 *local_38;
  undefined ***local_18;
  
  puStack_40 = local_res10;
  local_38 = local_res8;
  local_res8[0] = 1;
  local_68 = (undefined4)param_1;
  uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
  local_50 = &PTR_LAB_14583fdb0;
  local_18 = &local_50;
  local_48 = local_68;
  uStack_44 = uStack_64;
  local_res10[0] = param_2;
  FUN_142c6db40(local_68,&local_50);
  return local_res8[0];
}



// FUNCTION 142c67450 FUN_142c67450 body=242 status=ok
// SIG undefined FUN_142c67450(void)

undefined8 FUN_142c67450(longlong *param_1,float param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined4 local_res8 [2];
  
  lVar4 = (**(code **)(*param_1 + 0xa0))(param_1,1);
  if (lVar4 != 0) {
    lVar4 = FUN_1423ac7e0(lVar4);
    if (lVar4 != 0) {
      lVar5 = FUN_142c71af0(param_1,1);
      if (lVar5 != 0) {
        cVar2 = FUN_142278320(lVar4,lVar5,0);
        lVar6 = UAnimInstance::GetActiveInstanceForMontage(lVar4,lVar5);
        if (lVar6 != 0) {
          uVar1 = *(undefined4 *)(lVar6 + 0x178);
          fVar7 = (float)FUN_142274a40(lVar5,uVar1);
          local_res8[0] = FUN_1422746f0(lVar5,uVar1);
          iVar3 = FUN_142277f60(lVar4,lVar5,local_res8);
          if (((cVar2 != '\0') || (param_2 < fVar7)) || (iVar3 != -1)) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}



// FUNCTION 142c67550 FUN_142c67550 body=131 status=ok
// SIG undefined FUN_142c67550(void)

void FUN_142c67550(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_142c6d300(param_1,param_2,*(undefined1 *)(param_2 + 8));
  cVar1 = *(char *)(lVar2 + 8);
  if (cVar1 == '\x01') {
    *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    if (cVar1 == '\x02') {
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      return;
    }
    if (cVar1 == '\x03') {
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      return;
    }
    if (cVar1 == '\x04') {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      return;
    }
    if (cVar1 == '\x05') {
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(param_2 + 0x30);
      return;
    }
  }
  return;
}



// FUNCTION 142c675e0 FUN_142c675e0 body=696 status=ok
// SIG undefined FUN_142c675e0(void)

void FUN_142c675e0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  bool bVar11;
  float fVar12;
  undefined4 uVar13;
  undefined1 local_res8 [8];
  float local_res10 [2];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 *local_b8;
  longlong lStack_b0;
  undefined4 *local_a8;
  undefined8 uStack_a0;
  float *local_98;
  undefined8 *puStack_90;
  undefined **local_88;
  undefined1 *local_80;
  longlong lStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined ***local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *plVar10;
  
  lVar2 = param_1[2];
  FUN_142c65c80(param_1,(int)param_1[0x9c]);
  cVar4 = (**(code **)(*param_1 + 0x110))(param_1);
  if (cVar4 == '\0') goto LAB_142c67886;
  iVar1 = (int)param_1[5];
  local_res10[0] = -1.0;
  plVar7 = (longlong *)0x0;
  if (0 < iVar1) {
    plVar8 = (longlong *)param_1[4];
    plVar10 = plVar7;
    do {
      if ((*plVar8 == DAT_146b2fcb8) && ((char)plVar8[1] == '\x01')) {
        plVar8 = (longlong *)param_1[4] + (longlong)(int)plVar10 * 7;
        if (plVar8 != (longlong *)0x0) {
          local_res10[0] = *(float *)((longlong)plVar8 + 0xc);
        }
        break;
      }
      uVar9 = (int)plVar10 + 1;
      plVar10 = (longlong *)(ulonglong)uVar9;
      plVar8 = plVar8 + 7;
    } while ((int)uVar9 < iVar1);
  }
  if (0 < iVar1) {
    plVar8 = (longlong *)param_1[4];
    plVar10 = plVar7;
    do {
      if ((*plVar8 == DAT_146b2fcd8) && ((char)plVar8[1] == '\x01')) {
        plVar8 = (longlong *)param_1[4] + (longlong)(int)plVar10 * 7;
        if (plVar8 != (longlong *)0x0) {
          *(float *)(param_1 + 0x9e) =
               *(float *)((longlong)plVar8 + 0xc) * *(float *)(param_1 + 0x9e);
        }
        break;
      }
      uVar9 = (int)plVar10 + 1;
      plVar10 = (longlong *)(ulonglong)uVar9;
      plVar8 = plVar8 + 7;
    } while ((int)uVar9 < iVar1);
  }
  if ((((local_res10[0] < 0.0) && (*(char *)(lVar2 + 0x161) != '\0')) &&
      (fVar12 = (float)FUN_142c816b0(param_1), 0.0 < fVar12)) &&
     (local_res10[0] = fVar12, *(float *)(param_1 + 0x9e) != 0.0)) {
    local_res10[0] = fVar12 / *(float *)(param_1 + 0x9e);
  }
  lVar3 = param_1[0x9e];
  puVar6 = (undefined4 *)FUN_142c62320(&local_b8);
  puVar6[2] = (int)lVar3;
  *(char *)(puVar6 + 6) = (char)param_1[0x8e];
  local_48 = *puVar6;
  uStack_44 = puVar6[1];
  uStack_40 = puVar6[2];
  uStack_3c = puVar6[3];
  local_38 = puVar6[4];
  uStack_34 = puVar6[5];
  uStack_30 = puVar6[6];
  uStack_2c = puVar6[7];
  uVar5 = FUN_142c71560(param_1);
  uVar13 = FUN_142c715d0(param_1);
  local_c0 = FUN_142c716b0(param_1);
  local_c8 = CONCAT44(uVar13,uVar5);
  local_res8[0] = 1;
  if (*(char *)(lVar2 + 0x162) == '\0') {
    if ((char)param_1[0x92] == '\x02') {
      if (((int)param_1[0x94] == 0) && (*(int *)((longlong)param_1 + 0x4a4) == 0)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
    }
    else {
      bVar11 = param_1[0x93] != 0;
    }
    if (!bVar11) {
      if ((char)param_1[0x98] == '\x02') {
        if (((int)param_1[0x9a] == 0) && (*(int *)((longlong)param_1 + 0x4d4) == 0)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
      }
      else {
        bVar11 = param_1[0x99] != 0;
      }
      if (!bVar11) goto LAB_142c6781f;
    }
    if (param_1[3] != 0) {
      plVar7 = *(longlong **)(param_1[3] + 0x118);
    }
    if (((plVar7 == (longlong *)0x0) ||
        (plVar7 = (longlong *)(**(code **)(*plVar7 + 0x670))(plVar7), plVar7 == (longlong *)0x0)) ||
       (cVar4 = (**(code **)(*plVar7 + 0x768))(plVar7), cVar4 == '\0')) {
      local_res8[0] = 0;
    }
  }
LAB_142c6781f:
  local_b8 = local_res8;
  local_a8 = &local_48;
  uStack_a0._0_4_ = SUB84(param_1,0);
  uStack_a0._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  local_98 = local_res10;
  puStack_90 = &local_c8;
  local_88 = &PTR_LAB_14583fba0;
  local_50 = &local_88;
  uStack_68 = (undefined4)uStack_a0;
  uStack_64 = uStack_a0._4_4_;
  lStack_b0 = lVar2;
  uStack_a0 = param_1;
  local_80 = local_b8;
  lStack_78 = lVar2;
  local_70 = local_a8;
  local_60 = local_98;
  uStack_58 = puStack_90;
  FUN_142c6db40(param_1,&local_88);
LAB_142c67886:
  FUN_142c68170(param_1);
  return;
}



// FUNCTION 142c678a0 FUN_142c678a0 body=235 status=ok
// SIG undefined FUN_142c678a0(void)

void FUN_142c678a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong local_res8;
  
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 1;
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar5 = 0;
  lVar4 = lVar5;
  if (lVar2 == 0) {
LAB_142c678e3:
    uVar6 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar2 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
      lVar2 = *(longlong *)(param_1 + 0x18);
      lVar4 = lVar2;
      if (lVar1 == 0) goto LAB_142c678e3;
    }
    uVar6 = *(undefined4 *)(lVar1 + 0x798);
    lVar4 = lVar2;
  }
  *(char *)(param_1 + 0xa8) = *(char *)(param_1 + 0xa8) + '\x01';
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  lVar2 = lVar5;
  if ((lVar4 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x120), *(longlong *)(lVar4 + 0x120) == 0)) {
    lVar2 = FUN_1423407b0();
  }
  plVar3 = (longlong *)FUN_142c71720(lVar2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x260))(plVar3);
  }
  lVar2 = lVar5;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x118);
  }
  FUN_142e21490(*(undefined8 *)(param_1 + 0x10),lVar2);
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x40);
  lVar2 = *(longlong *)(param_1 + 0x18);
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x328))) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    }
    local_res8 = lVar5;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar2 + 800,&local_res8);
  }
  return;
}



// FUNCTION 142c67990 FUN_142c67990 body=612 status=ok
// SIG undefined FUN_142c67990(void)

void FUN_142c67990(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong local_res8;
  undefined8 local_res10;
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((param_1[3] != 0) && (plVar8 = *(longlong **)(param_1[3] + 0x118), plVar8 != (longlong *)0x0))
  {
    uVar5 = FUN_142e39920();
    lVar6 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar5);
    param_1[0x8e] = lVar6;
  }
  if (param_1[0x8e] != 0) {
    local_res8 = param_1[0x16];
    FUN_142dafbc0(param_1[0x8e] + 0x8b0,&local_res8);
    local_res8 = param_1[0x16];
    FUN_142dafbc0(param_1[0x8e] + 0x948,&local_res8);
  }
  FUN_142c69c40(param_1);
  do {
    cVar4 = FUN_142c86c80(param_1);
  } while (cVar4 != '\0');
  FUN_142c68170(param_1);
  lVar6 = (**(code **)(*param_1 + 0xa0))(param_1,1);
  if (lVar6 == 0) {
    return;
  }
  lVar1 = param_1[0x20];
  if (lVar1 == 0) {
    return;
  }
  lVar7 = UMaterialInstanceConstant::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar7 = FUN_1423ac7e0(lVar6);
  if (lVar7 != 0) {
    lVar9 = 0;
    if (param_1[3] != 0) {
      lVar9 = *(longlong *)(param_1[3] + 0x118);
    }
    if (lVar9 != 0) {
      FWeakObjectPtr::operator=(&local_res8);
      lVar3 = local_res8;
      lVar9 = param_1[2];
      local_38 = FUN_1407de010;
      uStack_30 = 0;
      local_48 = (longlong *)0x0;
      local_res10 = local_res8;
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      local_40 = 3;
      local_48 = plVar8;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_FUN_1440e00b8;
        FWeakObjectPtr::operator=(plVar8 + 1,lVar9);
        *(undefined4 *)(plVar8 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)plVar8 + 0x14) = local_38._4_4_;
        *(undefined4 *)(plVar8 + 3) = uStack_30;
        *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_2c;
        *(int *)(plVar8 + 4) = (int)lVar3;
        *(undefined4 *)((longlong)plVar8 + 0x24) = local_res10._4_4_;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar8[5] = lVar9;
        *plVar8 = (longlong)&PTR_FUN_1440e0100;
      }
      FUN_142279220(lVar7,&local_48,lVar1);
      if (local_40 != 0) {
        if (local_48 == (longlong *)0x0) goto LAB_142c67bdd;
        (**(code **)(*local_48 + 0x28))(local_48,0);
        if (local_48 != (longlong *)0x0) {
          local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
        }
        local_40 = 0;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
    }
  }
LAB_142c67bdd:
  *(undefined1 *)(lVar6 + 0x878) = 0;
  return;
}



// FUNCTION 142c67c00 FUN_142c67c00 body=1230 status=ok
// SIG undefined FUN_142c67c00(void)

void FUN_142c67c00(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar14;
  bool bVar15;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98 [128];
  longlong *plVar13;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x4a0) = *(undefined1 *)(lVar3 + 0x268);
  *(undefined1 *)(param_1 + 0x4a1) = *(undefined1 *)(lVar3 + 0x269);
  *(undefined1 *)(param_1 + 0x4a2) = *(undefined1 *)(lVar3 + 0x26a);
  *(undefined1 *)(param_1 + 0x4a3) = *(undefined1 *)(lVar3 + 0x26b);
  *(undefined8 *)(param_1 + 0x4a4) = *(undefined8 *)(lVar3 + 0x26c);
  *(undefined8 *)(param_1 + 0x4b0) = *(undefined8 *)(lVar3 + 0x278);
  *(undefined8 *)(param_1 + 0x4b8) = *(undefined8 *)(lVar3 + 0x280);
  uVar6 = *(undefined8 *)(lVar3 + 0x290);
  *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(lVar3 + 0x288);
  *(undefined8 *)(param_1 + 0x4c8) = uVar6;
  uVar6 = *(undefined8 *)(lVar3 + 0x2a0);
  *(undefined8 *)(param_1 + 0x4d0) = *(undefined8 *)(lVar3 + 0x298);
  *(undefined8 *)(param_1 + 0x4d8) = uVar6;
  uVar6 = *(undefined8 *)(lVar3 + 0x2b0);
  *(undefined8 *)(param_1 + 0x4e0) = *(undefined8 *)(lVar3 + 0x2a8);
  *(undefined8 *)(param_1 + 0x4e8) = uVar6;
  *(undefined8 *)(param_1 + 0x4f0) = *(undefined8 *)(lVar3 + 0x2b8);
  uVar2 = *(undefined4 *)(lVar3 + 0x2c4);
  uVar4 = *(undefined4 *)(lVar3 + 0x2c8);
  uVar5 = *(undefined4 *)(lVar3 + 0x2cc);
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(lVar3 + 0x2c0);
  *(undefined4 *)(param_1 + 0x4fc) = uVar2;
  *(undefined4 *)(param_1 + 0x500) = uVar4;
  *(undefined4 *)(param_1 + 0x504) = uVar5;
  *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(lVar3 + 0x2d0);
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(lVar3 + 0x2d8);
  *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(lVar3 + 0x2dc);
  *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(lVar3 + 0x2e0);
  *(undefined1 *)(param_1 + 0x49c) = *(undefined1 *)(lVar3 + 0x2e8);
  *(undefined1 *)(param_1 + 0x520) = 0;
  *(undefined1 *)(param_1 + 0x488) = 0;
  if ((*(longlong *)(param_1 + 0x18) != 0) && (iVar8 = FUN_14233f450(), iVar8 == 3)) {
    iVar8 = rand();
    *(int *)(param_1 + 0x524) = iVar8;
    FUN_142c76980(param_1);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b2fec0) && (_Init_thread_header(&DAT_146b2fec0), DAT_146b2fec0 == -1))
  {
    FName::FName(&DAT_146b2feb8,L"LoopDuration",1);
    _Init_thread_footer(&DAT_146b2fec0);
  }
  plVar14 = (longlong *)0x0;
  if (0 < *(int *)(param_1 + 0x28)) {
    plVar11 = *(longlong **)(param_1 + 0x20);
    plVar13 = plVar14;
    do {
      if ((*plVar11 == DAT_146b2feb8) && ((char)plVar11[1] == '\x01')) {
        plVar11 = *(longlong **)(param_1 + 0x20) + (longlong)(int)plVar13 * 7;
        if (plVar11 != (longlong *)0x0) {
          uVar2 = *(undefined4 *)((longlong)plVar11 + 0xc);
          *(undefined1 *)(param_1 + 0x49c) = 1;
          puVar9 = (undefined1 *)FUN_142de2d20(local_98,uVar2,0);
          *(undefined1 *)(param_1 + 0x4a0) = *puVar9;
          *(undefined1 *)(param_1 + 0x4a1) = puVar9[1];
          *(undefined1 *)(param_1 + 0x4a2) = puVar9[2];
          *(undefined1 *)(param_1 + 0x4a3) = puVar9[3];
          *(undefined8 *)(param_1 + 0x4a4) = *(undefined8 *)(puVar9 + 4);
          *(undefined8 *)(param_1 + 0x4b0) = *(undefined8 *)(puVar9 + 0x10);
          *(undefined8 *)(param_1 + 0x4b8) = *(undefined8 *)(puVar9 + 0x18);
          uVar6 = *(undefined8 *)(puVar9 + 0x28);
          *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(puVar9 + 0x20);
          *(undefined8 *)(param_1 + 0x4c8) = uVar6;
          uVar6 = *(undefined8 *)(puVar9 + 0x38);
          *(undefined8 *)(param_1 + 0x4d0) = *(undefined8 *)(puVar9 + 0x30);
          *(undefined8 *)(param_1 + 0x4d8) = uVar6;
          uVar6 = *(undefined8 *)(puVar9 + 0x48);
          *(undefined8 *)(param_1 + 0x4e0) = *(undefined8 *)(puVar9 + 0x40);
          *(undefined8 *)(param_1 + 0x4e8) = uVar6;
          *(undefined8 *)(param_1 + 0x4f0) = *(undefined8 *)(puVar9 + 0x50);
          uVar2 = *(undefined4 *)(puVar9 + 0x5c);
          uVar4 = *(undefined4 *)(puVar9 + 0x60);
          uVar5 = *(undefined4 *)(puVar9 + 100);
          *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(puVar9 + 0x58);
          *(undefined4 *)(param_1 + 0x4fc) = uVar2;
          *(undefined4 *)(param_1 + 0x500) = uVar4;
          *(undefined4 *)(param_1 + 0x504) = uVar5;
          *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(puVar9 + 0x68);
          *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(puVar9 + 0x70);
          *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(puVar9 + 0x74);
          *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(puVar9 + 0x78);
        }
        break;
      }
      uVar12 = (int)plVar13 + 1;
      plVar13 = (longlong *)(ulonglong)uVar12;
      plVar11 = plVar11 + 7;
    } while ((int)uVar12 < *(int *)(param_1 + 0x28));
  }
  puVar10 = (undefined8 *)FUN_142c61880(param_1,local_b8);
  plVar11 = (longlong *)puVar10[1];
  local_d8 = plVar14;
  plVar13 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    iVar8 = (int)plVar11[1];
    bVar15 = iVar8 == 0;
    if (bVar15) {
      *(int *)(plVar11 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    while (plVar13 = plVar14, !bVar15) {
      LOCK();
      bVar15 = iVar8 == (int)plVar11[1];
      if (bVar15) {
        *(int *)(plVar11 + 1) = iVar8 + 1;
      }
      UNLOCK();
      if (bVar15) {
        local_d8 = (longlong *)0x0;
        plVar13 = plVar11;
        if (plVar11 != (longlong *)0x0) {
          local_d8 = (longlong *)*puVar10;
        }
        break;
      }
      LOCK();
      iVar8 = (int)plVar11[1];
      bVar15 = iVar8 == 0;
      if (bVar15) {
        *(int *)(plVar11 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_d0 = plVar13;
  FUN_142b30870(param_1 + 0x468,&local_d8,FUN_142c7b710);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar13 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    LOCK();
    plVar11 = plVar13 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_b0 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar8 == 1) && (local_b0 != (longlong *)0x0)) {
      (**(code **)(*local_b0 + 8))(local_b0,1);
    }
  }
  puVar10 = (undefined8 *)FUN_142c61880(param_1,local_a8);
  plVar11 = (longlong *)puVar10[1];
  plVar13 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    iVar8 = (int)plVar11[1];
    bVar15 = iVar8 == 0;
    if (bVar15) {
      *(int *)(plVar11 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    while (plVar13 = plVar14, !bVar15) {
      LOCK();
      bVar15 = iVar8 == (int)plVar11[1];
      if (bVar15) {
        *(int *)(plVar11 + 1) = iVar8 + 1;
      }
      UNLOCK();
      if (bVar15) {
        plVar13 = plVar11;
        if (plVar11 != (longlong *)0x0) {
          plVar14 = (longlong *)*puVar10;
        }
        break;
      }
      LOCK();
      iVar8 = (int)plVar11[1];
      bVar15 = iVar8 == 0;
      if (bVar15) {
        *(int *)(plVar11 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_c8 = plVar14;
  local_c0 = plVar13;
  FUN_142b30870(param_1 + 0x478,&local_c8,FUN_142c7b3d0);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar13 + 1;
    lVar3 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    LOCK();
    plVar14 = plVar13 + 1;
    lVar3 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar8 == 1) && (local_a0 != (longlong *)0x0)) {
      (**(code **)(*local_a0 + 8))(local_a0,1);
    }
  }
  do {
    cVar7 = FUN_142c870c0(param_1);
  } while (cVar7 != '\0');
  FUN_142c68170(param_1);
  return;
}



// FUNCTION 142c680d0 FUN_142c680d0 body=158 status=ok
// SIG undefined FUN_142c680d0(void)

void FUN_142c680d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_142c71f80();
  lVar2 = FUN_142c725a0(param_1);
  if ((((lVar1 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) && (lVar2 != 0)) &&
     (0 < *(int *)(lVar2 + 0xbf8))) {
    FUN_142c652b0(param_1);
    lVar2 = FUN_142c6f640(param_1,1);
    if (lVar2 != 0) {
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x1c0) != '\0') {
        FUN_142c675e0(param_1);
        FUN_142c7b870(param_1);
        return;
      }
      if ((*(byte *)(lVar1 + 0x210) & 0x10) == 0) {
        *(byte *)(lVar1 + 0x210) = *(byte *)(lVar1 + 0x210) | 0x10;
      }
      FUN_142c675e0(param_1);
    }
  }
  return;
}



// FUNCTION 142c68170 FUN_142c68170 body=625 status=ok
// SIG undefined FUN_142c68170(void)

void FUN_142c68170(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined4 uVar11;
  ulonglong local_res8;
  longlong *local_38;
  undefined8 local_30;
  
  lVar7 = param_1[2];
  if ((*(char *)((longlong)param_1 + 0xe4) != '\0') && (lVar3 = FUN_142c71f10(), lVar3 != 0)) {
    param_1[0x1d] = *(longlong *)(lVar3 + 0x1f8);
    FUN_142db6540(lVar3,*(undefined8 *)(lVar7 + 0x90));
  }
  uVar8 = 0;
  if ((*(char *)(lVar7 + 0x99) != '\0') && (lVar3 = param_1[2], *(longlong *)(lVar3 + 0xa0) != 0)) {
    uVar5 = uVar8;
    if (param_1[3] != 0) {
      uVar5 = *(ulonglong *)(param_1[3] + 0x118);
    }
    if (uVar5 != 0) {
      lVar4 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *(undefined8 *)(uVar5 + 0xd68) = *(undefined8 *)(lVar3 + 0xa0);
      }
    }
  }
  if (*(char *)(lVar7 + 0x8a) != '\0') {
    uVar5 = uVar8;
    if (param_1[3] != 0) {
      uVar5 = *(ulonglong *)(param_1[3] + 0x118);
    }
    if (uVar5 != 0) {
      local_38 = (longlong *)0x0;
      local_30 = 0;
      FUN_14083bac0(uVar5,&local_38,0);
      plVar6 = local_38;
      uVar5 = (ulonglong)((longlong)(local_38 + (int)local_30) + (7 - (longlong)local_38)) >> 3;
      if (local_38 + (int)local_30 < local_38) {
        uVar5 = uVar8;
      }
      uVar9 = uVar8;
      plVar10 = local_38;
      if (uVar5 != 0) {
        do {
          lVar7 = *plVar10;
          if ((lVar7 != 0) && (cVar2 = FUN_1423b2e00(lVar7), cVar2 != '\0')) {
            FUN_1423b8e90(lVar7,2);
          }
          plVar10 = plVar10 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar5);
      }
      if (plVar6 != (longlong *)0x0) {
        FMemory::Free(plVar6);
      }
    }
  }
  (**(code **)(*param_1 + 0xd0))(param_1);
  lVar7 = param_1[3];
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 1;
  if (lVar7 == 0) {
LAB_142c6833d:
    uVar11 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar7 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0();
      lVar7 = param_1[3];
      if (lVar3 == 0) goto LAB_142c6833d;
    }
    uVar11 = *(undefined4 *)(lVar3 + 0x798);
  }
  *(char *)(param_1 + 0x15) = (char)param_1[0x15] + '\x01';
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar11;
  uVar5 = uVar8;
  if ((lVar7 != 0) && (uVar5 = *(ulonglong *)(lVar7 + 0x120), *(ulonglong *)(lVar7 + 0x120) == 0)) {
    uVar5 = FUN_1423407b0();
  }
  plVar6 = (longlong *)FUN_142c71720(uVar5);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x260))(plVar6);
  }
  uVar5 = uVar8;
  if (param_1[3] != 0) {
    uVar5 = *(ulonglong *)(param_1[3] + 0x118);
  }
  FUN_142e21490(param_1[2],uVar5);
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 8);
  lVar7 = param_1[3];
  if ((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x328))) {
    if (param_1[2] != 0) {
      uVar8 = *(ulonglong *)(param_1[2] + 0x10);
    }
    local_res8 = uVar8;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar7 + 800,&local_res8);
  }
  return;
}



// FUNCTION 142c683f0 FUN_142c683f0 body=849 status=ok
// SIG undefined FUN_142c683f0(void)

void FUN_142c683f0(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong *_Src;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  undefined4 uVar13;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  ulonglong *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  
  uVar13 = 0x3f800000;
  if (0 < (int)param_1[5]) {
    plVar3 = (longlong *)param_1[4];
    plVar10 = plVar3 + 1;
    uVar8 = 0;
    plVar12 = plVar3;
    do {
      if ((*plVar12 == DAT_146b2fcd8) && ((char)*plVar10 == '\x01')) {
        if (plVar3 + (longlong)(int)uVar8 * 7 != (longlong *)0x0) {
          uVar13 = *(undefined4 *)((longlong)(plVar3 + (longlong)(int)uVar8 * 7) + 0xc);
        }
        break;
      }
      uVar11 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar11;
      plVar12 = plVar12 + 7;
      plVar10 = plVar10 + 7;
    } while ((int)uVar11 < (int)param_1[5]);
  }
  lVar4 = param_1[2];
  lVar6 = (**(code **)(*param_1 + 0xa0))(param_1,1);
  if (lVar6 == 0) goto LAB_142c686d4;
  lVar7 = FUN_142e5c1e0();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) goto LAB_142c686d4;
  if (*(char *)(lVar4 + 0xb8) == '\x01') {
    uVar8 = *(ulonglong *)(lVar4 + 0xc0);
    if (uVar8 != 0) goto LAB_142c68516;
LAB_142c68553:
    uVar8 = 0;
  }
  else {
    if ((*(char *)(lVar4 + 0xb8) != '\x02') || (*(longlong *)(lVar4 + 200) == 0))
    goto LAB_142c68553;
    uVar8 = FUN_1423b9120(lVar6);
LAB_142c68516:
    if (uVar8 == 0) goto LAB_142c68553;
    lVar7 = UTextureRenderTarget::StaticClass();
    if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_142c68553;
  }
  local_98 = (ulonglong *)0x0;
  iStack_90 = 1;
  TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_98,1,0);
  _Src = local_98;
  lVar7 = (longlong)iStack_90;
  local_a8 = (void *)0x0;
  local_a0 = iStack_90;
  *local_98 = uVar8;
  if (iStack_90 == 0) {
    local_9c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_a8,iStack_90,0);
    _guard_xfg_dispatch_icall_nop(local_a8,_Src,lVar7 << 3);
  }
  FUN_142c68750(lVar4 + 0xe0,param_1,uVar13,lVar6,&local_a8);
  if (uVar8 != 0) {
    uVar1 = *(undefined4 *)(lVar4 + 0xd4);
    uVar2 = *(undefined4 *)(lVar4 + 0xd0);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b2fef0) &&
       (_Init_thread_header(&DAT_146b2fef0), DAT_146b2fef0 == -1)) {
      FName::FName(&DAT_146b2fee8,L"FullBody",1);
      _Init_thread_footer(&DAT_146b2fef0);
    }
    uVar9 = *(undefined8 *)(lVar4 + 0xd8);
    lVar4 = *param_1;
    uStack_80 = uStack_80 & 0xffffff00;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    uStack_6c = uStack_8c;
    local_88._0_4_ = (undefined4)uVar9;
    local_88._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
    local_68 = (undefined4)local_88;
    uStack_64 = local_88._4_4_;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    local_88 = uVar9;
    local_78 = uVar2;
    uStack_74 = uVar1;
    uStack_70 = uVar13;
    uVar9 = (**(code **)(lVar4 + 0xa0))(param_1,1);
    (**(code **)(lVar4 + 0xa8))(param_1,uVar9,1,uVar8,&local_78,&local_a8);
  }
  if (_Src != (ulonglong *)0x0) {
    FMemory::Free(_Src);
  }
LAB_142c686d4:
  FUN_142c68170(param_1);
  return;
}



// FUNCTION 142c68750 FUN_142c68750 body=3832 status=ok
// SIG undefined FUN_142c68750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c68750(undefined1 *param_1,longlong param_2,float param_3,longlong param_4,
                  longlong *param_5)

{
  char cVar1;
  void *pvVar2;
  bool bVar3;
  undefined8 uVar4;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 uVar13;
  void *pvVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined1 auStack_198 [32];
  void *local_178;
  float local_170;
  undefined4 local_16c;
  undefined8 *local_168;
  int local_160;
  float local_158 [2];
  undefined8 *local_150;
  int local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128;
  longlong *local_120;
  char local_118;
  undefined1 local_117;
  undefined1 local_116;
  float local_114;
  float fStack_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
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
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  pvVar14 = (void *)0x0;
  local_178 = (void *)0x0;
  local_170 = (float)param_5[1];
  lVar16 = (longlong)(int)local_170;
  pvVar2 = (void *)*param_5;
  if (local_170 != 0.0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_178,local_170,0);
    pvVar14 = local_178;
    _guard_xfg_dispatch_icall_nop(local_178,pvVar2,lVar16 << 3);
  }
  fVar23 = local_170;
  uVar4 = FUN_142df9720();
  local_178 = (void *)0x0;
  local_170 = fVar23;
  if (fVar23 == 0.0) {
    local_16c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_178,fVar23,0);
    _guard_xfg_dispatch_icall_nop(local_178,pvVar14,(longlong)(int)fVar23 << 3);
  }
  FUN_142c9e510(&local_168,&local_178,uVar4);
  if (pvVar14 != (void *)0x0) {
    FMemory::Free(pvVar14);
  }
  local_170 = *(float *)(param_5 + 1);
  uVar17 = (ulonglong)(int)local_170;
  pvVar14 = (void *)0x0;
  pvVar2 = (void *)*param_5;
  local_178 = (void *)0x0;
  if (local_170 != 0.0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_178,local_170,0);
    pvVar14 = local_178;
    _guard_xfg_dispatch_icall_nop(local_178,pvVar2,uVar17 << 3);
    uVar17 = (ulonglong)(uint)local_170;
  }
  uVar4 = FUN_142df81c0();
  fVar23 = (float)uVar17;
  local_178 = (void *)0x0;
  local_170 = fVar23;
  if (fVar23 == 0.0) {
    local_16c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_178,uVar17 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_178,pvVar14,(longlong)(int)fVar23 << 3);
  }
  FUN_142c9e5d0(&local_150,&local_178,uVar4);
  if (pvVar14 != (void *)0x0) {
    FMemory::Free();
  }
  if ((local_160 == 0) && (local_148 == 0)) {
    puVar10 = local_168;
    if (local_150 != (undefined8 *)0x0) {
      FMemory::Free();
      puVar10 = local_168;
    }
    for (; local_160 != 0; local_160 = local_160 + -1) {
      puVar10[0xc] = &PTR_FUN_14410b0e0;
      *puVar10 = &PTR_FUN_14410b0e0;
      puVar10 = puVar10 + 0x15;
    }
    if (local_168 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    if (*param_5 == 0) {
      return;
    }
    FMemory::Free();
    return;
  }
  iVar7 = 0;
  if (0 < *(int *)(param_2 + 0x28)) {
    plVar15 = *(longlong **)(param_2 + 0x20);
    plVar18 = plVar15 + 1;
    plVar11 = plVar15;
    do {
      if ((*plVar11 == DAT_146b2fd30) && ((char)*plVar18 == '\x03')) {
        plVar15 = plVar15 + (longlong)iVar7 * 7;
        if ((plVar15 == (longlong *)0x0) ||
           (plVar18 = (longlong *)plVar15[3], plVar18 == (longlong *)0x0)) goto LAB_142c689a4;
        lVar16 = FUN_1428dfc70();
        if ((*(int *)(plVar18[2] + 0x90) < *(int *)(lVar16 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar18[2] + 0x88) + (longlong)*(int *)(lVar16 + 0x90) * 8)
            != lVar16 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_142c689a4;
        goto LAB_142c689a6;
      }
      iVar7 = iVar7 + 1;
      plVar11 = plVar11 + 7;
      plVar18 = plVar18 + 7;
    } while (iVar7 < *(int *)(param_2 + 0x28));
  }
  plVar15 = (longlong *)0x0;
LAB_142c689a4:
  plVar18 = (longlong *)0x0;
LAB_142c689a6:
  iVar8 = 0;
  iVar7 = *(int *)(param_2 + 0x28);
  fVar23 = DAT_1468b5d90;
  fVar24 = DAT_1468b5d94;
  if (0 < iVar7) {
    plVar19 = *(longlong **)(param_2 + 0x20);
    plVar11 = plVar19 + 1;
    plVar9 = plVar19;
    plVar12 = plVar11;
    do {
      if ((*plVar9 == DAT_146b2fd38) && ((char)*plVar12 == '\x01')) {
        if (plVar19 + (longlong)iVar8 * 7 != (longlong *)0x0) {
          fVar23 = *(float *)((longlong)(plVar19 + (longlong)iVar8 * 7) + 0xc);
          iVar8 = 0;
          plVar9 = plVar19;
          plVar12 = plVar11;
          if (0 < iVar7) goto LAB_142c68ae6;
        }
        break;
      }
      iVar8 = iVar8 + 1;
      plVar9 = plVar9 + 7;
      plVar12 = plVar12 + 7;
    } while (iVar8 < iVar7);
  }
  goto LAB_142c68a04;
  while( true ) {
    iVar8 = iVar8 + 1;
    plVar9 = plVar9 + 7;
    plVar12 = plVar12 + 7;
    if (iVar7 <= iVar8) break;
LAB_142c68ae6:
    if ((*plVar9 == DAT_146b2fd40) && ((char)*plVar12 == '\x01')) {
      if (plVar19 + (longlong)iVar8 * 7 != (longlong *)0x0) {
        fVar24 = *(float *)((longlong)(plVar19 + (longlong)iVar8 * 7) + 0xc);
        iVar8 = 0;
        plVar9 = plVar19;
        if (0 < iVar7) goto LAB_142c68b30;
      }
      break;
    }
  }
  goto LAB_142c68a04;
  while( true ) {
    iVar8 = iVar8 + 1;
    plVar11 = plVar11 + 7;
    plVar9 = plVar9 + 7;
    if (iVar7 <= iVar8) break;
LAB_142c68b30:
    if ((*plVar9 == DAT_146b2fd48) && ((char)*plVar11 == '\x01')) {
      if (plVar19 + (longlong)iVar8 * 7 != (longlong *)0x0) {
        fVar25 = *(float *)((longlong)(plVar19 + (longlong)iVar8 * 7) + 0xc);
        bVar3 = true;
        goto LAB_142c68d85;
      }
      break;
    }
  }
LAB_142c68a04:
  cVar1 = param_1[0x24];
  bVar3 = false;
  fVar25 = DAT_1468b5d98;
  if (cVar1 == '\x04') {
    iVar8 = 0;
    if (iVar7 < 1) {
LAB_142c68d03:
      bVar3 = false;
    }
    else {
      plVar19 = *(longlong **)(param_2 + 0x20);
      plVar11 = plVar19 + 1;
      plVar9 = plVar19;
      plVar12 = plVar11;
      do {
        if ((*plVar9 == DAT_146b2fd58) && ((char)*plVar12 == '\x01')) {
          if (plVar19 + (longlong)iVar8 * 7 == (longlong *)0x0) goto LAB_142c68d03;
          fVar23 = *(float *)((longlong)(plVar19 + (longlong)iVar8 * 7) + 0xc);
          iVar8 = 0;
          plVar9 = plVar19;
          plVar12 = plVar11;
          if (iVar7 < 1) goto LAB_142c68d03;
          goto LAB_142c68ba0;
        }
        iVar8 = iVar8 + 1;
        plVar9 = plVar9 + 7;
        plVar12 = plVar12 + 7;
      } while (iVar8 < iVar7);
      bVar3 = false;
    }
  }
  else if (cVar1 == '\x05') {
    iVar8 = 0;
    if (iVar7 < 1) goto LAB_142c68d03;
    plVar19 = *(longlong **)(param_2 + 0x20);
    plVar11 = plVar19 + 1;
    plVar9 = plVar19;
    plVar12 = plVar11;
    do {
      if ((*plVar9 == DAT_146b2fd70) && ((char)*plVar12 == '\x01')) {
        if (plVar19 + (longlong)iVar8 * 7 == (longlong *)0x0) goto LAB_142c68d03;
        fVar23 = *(float *)((longlong)(plVar19 + (longlong)iVar8 * 7) + 0xc);
        iVar8 = 0;
        plVar9 = plVar19;
        plVar12 = plVar11;
        if (iVar7 < 1) goto LAB_142c68d03;
        goto LAB_142c68ca0;
      }
      iVar8 = iVar8 + 1;
      plVar9 = plVar9 + 7;
      plVar12 = plVar12 + 7;
    } while (iVar8 < iVar7);
    bVar3 = false;
  }
  else if (cVar1 == '\x06') {
    iVar8 = 0;
    fVar20 = DAT_1468b5d94;
    fVar21 = DAT_1468b5d90;
    fVar23 = DAT_1468b5d90;
    fVar24 = DAT_1468b5d94;
    if (0 < iVar7) {
      plVar19 = *(longlong **)(param_2 + 0x20);
      plVar11 = plVar19 + 1;
      plVar9 = plVar19;
      plVar12 = plVar11;
      do {
        if ((*plVar9 == DAT_146b2fd58) && ((char)*plVar12 == '\x01')) {
          if (plVar19 + (longlong)iVar8 * 7 != (longlong *)0x0) {
            fVar23 = *(float *)((longlong)(plVar19 + (longlong)iVar8 * 7) + 0xc);
            iVar8 = 0;
            plVar9 = plVar19;
            plVar12 = plVar11;
            if (0 < iVar7) goto LAB_142c68e77;
          }
          break;
        }
        iVar8 = iVar8 + 1;
        plVar9 = plVar9 + 7;
        plVar12 = plVar12 + 7;
      } while (iVar8 < iVar7);
    }
    goto LAB_142c68d5e;
  }
  goto LAB_142c68d85;
  while( true ) {
    iVar8 = iVar8 + 1;
    plVar9 = plVar9 + 7;
    plVar12 = plVar12 + 7;
    if (iVar7 <= iVar8) break;
LAB_142c68e77:
    if ((*plVar9 == DAT_146b2fd60) && ((char)*plVar12 == '\x01')) {
      if (plVar19 + (longlong)iVar8 * 7 != (longlong *)0x0) {
        fVar24 = *(float *)((longlong)(plVar19 + (longlong)iVar8 * 7) + 0xc);
        iVar8 = 0;
        plVar9 = plVar19;
        plVar12 = plVar11;
        if (0 < iVar7) goto LAB_142c68ec5;
      }
      break;
    }
  }
  goto LAB_142c68d5e;
  while( true ) {
    iVar8 = iVar8 + 1;
    plVar9 = plVar9 + 7;
    plVar12 = plVar12 + 7;
    if (iVar7 <= iVar8) break;
LAB_142c68ec5:
    if ((*plVar9 == DAT_146b2fd68) && ((char)*plVar12 == '\x01')) {
      if (plVar19 + (longlong)iVar8 * 7 != (longlong *)0x0) {
        fVar25 = *(float *)((longlong)(plVar19 + (longlong)iVar8 * 7) + 0xc);
        iVar8 = 0;
        plVar9 = plVar19;
        plVar12 = plVar11;
        if (0 < iVar7) goto LAB_142c68f12;
      }
      break;
    }
  }
  goto LAB_142c68d5e;
  while( true ) {
    iVar8 = iVar8 + 1;
    plVar9 = plVar9 + 7;
    plVar12 = plVar12 + 7;
    if (iVar7 <= iVar8) break;
LAB_142c68f12:
    if ((*plVar9 == DAT_146b2fd70) && ((char)*plVar12 == '\x01')) {
      if (plVar19 + (longlong)iVar8 * 7 != (longlong *)0x0) {
        fVar21 = *(float *)((longlong)(plVar19 + (longlong)iVar8 * 7) + 0xc);
        iVar8 = 0;
        plVar9 = plVar19;
        plVar12 = plVar11;
        if (0 < iVar7) goto LAB_142c68f60;
      }
      break;
    }
  }
  goto LAB_142c68d5e;
  while( true ) {
    iVar8 = iVar8 + 1;
    plVar9 = plVar9 + 7;
    plVar12 = plVar12 + 7;
    if (iVar7 <= iVar8) break;
LAB_142c68f60:
    if ((*plVar9 == DAT_146b2fd78) && ((char)*plVar12 == '\x01')) {
      if (plVar19 + (longlong)iVar8 * 7 != (longlong *)0x0) {
        fVar20 = *(float *)((longlong)(plVar19 + (longlong)iVar8 * 7) + 0xc);
        iVar8 = 0;
        plVar9 = plVar19;
        if (0 < iVar7) goto LAB_142c68fb0;
      }
      break;
    }
  }
  goto LAB_142c68d5e;
  while( true ) {
    iVar8 = iVar8 + 1;
    plVar11 = plVar11 + 7;
    plVar9 = plVar9 + 7;
    if (iVar7 <= iVar8) break;
LAB_142c68fb0:
    if ((*plVar9 == DAT_146b2fd80) && ((char)*plVar11 == '\x01')) {
      if (plVar19 + (longlong)iVar8 * 7 != (longlong *)0x0) {
        fVar22 = *(float *)((longlong)(plVar19 + (longlong)iVar8 * 7) + 0xc);
        bVar3 = true;
        goto LAB_142c68d61;
      }
      break;
    }
  }
LAB_142c68d5e:
  bVar3 = false;
  fVar22 = DAT_1468b5d98;
LAB_142c68d61:
  fVar24 = (fVar24 + fVar20) * 0.5;
  fVar25 = (fVar25 + fVar22) * 0.5;
  fVar23 = (fVar23 + fVar21) * 0.5;
  goto LAB_142c68d85;
  while( true ) {
    iVar8 = iVar8 + 1;
    plVar9 = plVar9 + 7;
    plVar12 = plVar12 + 7;
    if (iVar7 <= iVar8) break;
LAB_142c68ca0:
    if ((*plVar9 == DAT_146b2fd78) && ((char)*plVar12 == '\x01')) {
      if (plVar19 + (longlong)iVar8 * 7 == (longlong *)0x0) goto LAB_142c68d03;
      fVar24 = *(float *)((longlong)(plVar19 + (longlong)iVar8 * 7) + 0xc);
      iVar8 = 0;
      plVar9 = plVar19;
      if (iVar7 < 1) goto LAB_142c68d03;
      goto LAB_142c68ce5;
    }
  }
  bVar3 = false;
  goto LAB_142c68d85;
  while( true ) {
    iVar8 = iVar8 + 1;
    plVar11 = plVar11 + 7;
    plVar9 = plVar9 + 7;
    if (iVar7 <= iVar8) break;
LAB_142c68ce5:
    if ((*plVar9 == DAT_146b2fd80) && ((char)*plVar11 == '\x01')) goto LAB_142c68c12;
  }
  goto LAB_142c68d03;
  while( true ) {
    iVar8 = iVar8 + 1;
    plVar9 = plVar9 + 7;
    plVar12 = plVar12 + 7;
    if (iVar7 <= iVar8) break;
LAB_142c68ba0:
    if ((*plVar9 == DAT_146b2fd60) && ((char)*plVar12 == '\x01')) {
      if (plVar19 + (longlong)iVar8 * 7 == (longlong *)0x0) goto LAB_142c68d03;
      fVar24 = *(float *)((longlong)(plVar19 + (longlong)iVar8 * 7) + 0xc);
      iVar8 = 0;
      plVar9 = plVar19;
      if (iVar7 < 1) goto LAB_142c68d03;
      goto LAB_142c68bf0;
    }
  }
  bVar3 = false;
  goto LAB_142c68d85;
LAB_142c68c12:
  if (plVar19 + (longlong)iVar8 * 7 == (longlong *)0x0) goto LAB_142c68d03;
  bVar3 = true;
  fVar25 = *(float *)((longlong)(plVar19 + (longlong)iVar8 * 7) + 0xc);
  goto LAB_142c68d85;
  while( true ) {
    iVar8 = iVar8 + 1;
    plVar11 = plVar11 + 7;
    plVar9 = plVar9 + 7;
    if (iVar7 <= iVar8) break;
LAB_142c68bf0:
    if ((*plVar9 == DAT_146b2fd68) && ((char)*plVar11 == '\x01')) goto LAB_142c68c12;
  }
  bVar3 = false;
LAB_142c68d85:
  uVar26 = 0xbf800000;
  iVar8 = 0;
  if (0 < iVar7) {
    plVar19 = *(longlong **)(param_2 + 0x20);
    plVar11 = plVar19 + 1;
    plVar9 = plVar19;
    do {
      if ((*plVar9 == DAT_146b2fd50) && ((char)*plVar11 == '\x01')) {
        if (plVar19 + (longlong)iVar8 * 7 != (longlong *)0x0) {
          uVar26 = *(undefined4 *)((longlong)(plVar19 + (longlong)iVar8 * 7) + 0xc);
          uVar13 = 1;
          goto LAB_142c69003;
        }
        break;
      }
      iVar8 = iVar8 + 1;
      plVar9 = plVar9 + 7;
      plVar11 = plVar11 + 7;
    } while (iVar8 < iVar7);
  }
  uVar13 = 0;
  if ((!bVar3) && (puVar10 = local_150, plVar15 == (longlong *)0x0)) {
    for (; local_148 != 0; local_148 = local_148 + -1) {
      puVar10[0xc] = &PTR_FUN_14410b0e0;
      *puVar10 = &PTR_FUN_14410b0e0;
      puVar10 = puVar10 + 0x15;
    }
    puVar10 = local_168;
    if (local_150 != (undefined8 *)0x0) {
      FMemory::Free();
      puVar10 = local_168;
    }
    for (; local_160 != 0; local_160 = local_160 + -1) {
      puVar10[0xc] = &PTR_FUN_14410b0e0;
      *puVar10 = &PTR_FUN_14410b0e0;
      puVar10 = puVar10 + 0x15;
    }
    goto LAB_142c695e8;
  }
LAB_142c69003:
  FUN_142c8c990(&local_138);
  local_f0 = *(undefined8 *)(param_1 + 0x18);
  local_128 = *param_1;
  local_b8 = *(undefined4 *)(param_4 + 0x220);
  uStack_b4 = *(undefined4 *)(param_4 + 0x224);
  uStack_b0 = *(undefined4 *)(param_4 + 0x228);
  uStack_ac = *(undefined4 *)(param_4 + 0x22c);
  local_fc = *(undefined4 *)(param_1 + 0x28);
  local_e8 = *(undefined4 *)(param_1 + 0x20);
  local_c8 = *(undefined8 *)(param_4 + 0x210);
  uStack_c0 = *(undefined8 *)(param_4 + 0x218);
  local_100 = param_1[0x25];
  local_a8 = *(undefined4 *)(param_4 + 0x230);
  uStack_a4 = *(undefined4 *)(param_4 + 0x234);
  uStack_a0 = *(undefined4 *)(param_4 + 0x238);
  uStack_9c = *(undefined4 *)(param_4 + 0x23c);
  local_118 = param_1[0x24];
  local_120 = plVar18;
  local_114 = fVar23;
  fStack_110 = fVar24;
  local_10c = fVar25;
  local_108 = uVar26;
  local_e4 = uVar13;
  if (plVar18 != (longlong *)0x0) {
    if (local_118 == '\0') {
      local_116 = 0;
      lVar16 = plVar18[0x2d];
      if (lVar16 == 0) {
        local_178 = (void *)CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        local_170 = DAT_1468b5d98;
      }
      else {
        local_178 = *(void **)(lVar16 + 0x220);
        local_170 = *(float *)(lVar16 + 0x228);
      }
      local_114 = SUB84(local_178,0);
      fStack_110 = (float)((ulonglong)local_178 >> 0x20);
      local_10c = local_170;
    }
    else if (local_118 == '\x01') {
      local_116 = 0;
      lVar16 = plVar18[0x2d];
      if (lVar16 == 0) {
        local_178 = (void *)CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        local_170 = DAT_1468b5d98;
      }
      else {
        local_178 = *(void **)(lVar16 + 0x220);
        local_170 = *(float *)(lVar16 + 0x228);
      }
      local_114 = SUB84(local_178,0);
      fStack_110 = (float)((ulonglong)local_178 >> 0x20);
      local_10c = local_170;
      if ((int)param_5[1] != 0) {
        local_158[0] = 0.0;
        lVar16 = *(longlong *)*param_5;
        if (lVar16 == 0) {
LAB_142c69189:
          lVar16 = 0;
        }
        else {
          lVar6 = UTextureRenderTarget::StaticClass();
          if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_142c69189;
        }
        FUN_142ca2240(lVar16,local_158);
        if (param_3 < 0.0) {
          param_3 = 1.0;
        }
        pfVar5 = (float *)(**(code **)(*plVar18 + 0x308))(plVar18,&local_178);
        fVar23 = *(float *)(param_1 + 0x2c);
        param_3 = 1.0 / param_3;
        fVar25 = local_158[0] * pfVar5[2] * param_3;
        fVar24 = local_158[0] * pfVar5[1] * param_3;
        param_3 = param_3 * local_158[0] * *pfVar5;
        if ((0.0 < fVar23) &&
           (fVar21 = SQRT(fVar24 * fVar24 + param_3 * param_3 + fVar25 * fVar25), fVar23 < fVar21))
        {
          fVar23 = fVar23 / fVar21;
          param_3 = param_3 * fVar23;
          fVar24 = fVar23 * fVar24;
          fVar25 = fVar23 * fVar25;
        }
        local_114 = local_114 + param_3;
        fStack_110 = fStack_110 + fVar24;
        local_10c = local_10c + fVar25;
      }
    }
    else if ((byte)(local_118 - 2U) < 2) {
      local_116 = 1;
    }
  }
  puVar10 = local_150;
  if (param_4 != 0) {
    if (local_160 == 0) {
      if ((local_148 != 0) && (lVar16 = local_150[10], lVar16 != 0)) {
        lVar6 = FUN_142df81c0();
        if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_138 = *(undefined8 *)(lVar16 + 0x38);
          local_130 = *(undefined8 *)(lVar16 + 0x40);
          local_f8 = *(undefined4 *)(lVar16 + 0x48);
          local_f4 = *(undefined4 *)(lVar16 + 0x58);
          local_e0 = *(undefined8 *)(lVar16 + 0x4c);
          local_d8 = *(undefined4 *)(lVar16 + 0x54);
          local_d4 = *(undefined8 *)(lVar16 + 0x5c);
          local_cc = *(undefined4 *)(lVar16 + 100);
          local_104 = *(undefined4 *)(lVar16 + 0x68);
        }
      }
    }
    else {
      lVar16 = local_168[9];
      if (lVar16 != 0) {
        lVar6 = FUN_142df9720();
        if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_138 = *(undefined8 *)(lVar16 + 0x40);
          local_130 = *(undefined8 *)(lVar16 + 0x48);
          local_f8 = *(undefined4 *)(lVar16 + 0x50);
          local_e0 = *(undefined8 *)(lVar16 + 0x54);
          local_d8 = *(undefined4 *)(lVar16 + 0x5c);
          local_104 = *(undefined4 *)(lVar16 + 0x60);
        }
      }
      if ((1 < local_160) && (lVar16 = local_168[0x1e], lVar16 != 0)) {
        lVar6 = FUN_142df9720();
        if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_f4 = *(undefined4 *)(lVar16 + 0x50);
          local_d4 = *(undefined8 *)(lVar16 + 0x54);
          local_cc = *(undefined4 *)(lVar16 + 0x5c);
        }
      }
    }
    iVar7 = *(int *)(param_4 + 0xf90);
    *(int *)(param_4 + 0xf90) = iVar7 + 1;
    if (*(int *)(param_4 + 0xf94) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
                (param_4 + 0xf88,iVar7);
    }
    puVar10 = (undefined8 *)((longlong)iVar7 * 0xa0 + *(longlong *)(param_4 + 0xf88));
    *puVar10 = local_138;
    puVar10[1] = local_130;
    *(undefined1 *)(puVar10 + 2) = local_128;
    puVar10[3] = local_120;
    *(char *)(puVar10 + 4) = local_118;
    *(undefined1 *)((longlong)puVar10 + 0x21) = local_117;
    *(undefined1 *)((longlong)puVar10 + 0x22) = local_116;
    *(ulonglong *)((longlong)puVar10 + 0x24) = CONCAT44(fStack_110,local_114);
    *(float *)((longlong)puVar10 + 0x2c) = local_10c;
    *(undefined4 *)(puVar10 + 6) = local_108;
    *(undefined4 *)((longlong)puVar10 + 0x34) = local_104;
    *(undefined1 *)(puVar10 + 7) = local_100;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = local_fc;
    *(undefined4 *)(puVar10 + 8) = local_f8;
    *(undefined4 *)((longlong)puVar10 + 0x44) = local_f4;
    puVar10[9] = local_f0;
    *(undefined4 *)(puVar10 + 10) = local_e8;
    *(undefined1 *)((longlong)puVar10 + 0x54) = local_e4;
    puVar10[0xb] = local_e0;
    *(undefined4 *)(puVar10 + 0xc) = local_d8;
    *(undefined8 *)((longlong)puVar10 + 100) = local_d4;
    *(undefined4 *)((longlong)puVar10 + 0x6c) = local_cc;
    puVar10[0xe] = local_c8;
    puVar10[0xf] = uStack_c0;
    *(undefined4 *)(puVar10 + 0x10) = local_b8;
    *(undefined4 *)((longlong)puVar10 + 0x84) = uStack_b4;
    *(undefined4 *)(puVar10 + 0x11) = uStack_b0;
    *(undefined4 *)((longlong)puVar10 + 0x8c) = uStack_ac;
    *(undefined4 *)(puVar10 + 0x12) = local_a8;
    *(undefined4 *)((longlong)puVar10 + 0x94) = uStack_a4;
    *(undefined4 *)(puVar10 + 0x13) = uStack_a0;
    *(undefined4 *)((longlong)puVar10 + 0x9c) = uStack_9c;
    puVar10 = local_150;
  }
  for (; local_148 != 0; local_148 = local_148 + -1) {
    puVar10[0xc] = &PTR_FUN_14410b0e0;
    *puVar10 = &PTR_FUN_14410b0e0;
    puVar10 = puVar10 + 0x15;
  }
  puVar10 = local_168;
  if (local_150 != (undefined8 *)0x0) {
    FMemory::Free();
    puVar10 = local_168;
  }
  for (; local_160 != 0; local_160 = local_160 + -1) {
    puVar10[0xc] = &PTR_FUN_14410b0e0;
    *puVar10 = &PTR_FUN_14410b0e0;
    puVar10 = puVar10 + 0x15;
  }
LAB_142c695e8:
  if (local_168 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (*param_5 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c69650 FUN_142c69650 body=643 status=ok
// SIG undefined FUN_142c69650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c69650(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  int local_res8 [2];
  int local_res10 [2];
  undefined1 local_res18 [8];
  undefined4 local_res20;
  undefined4 local_res24;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  uVar4 = (**(code **)(*param_1 + 0x148))();
  FWeakObjectPtr::operator=(&local_98,uVar4);
  local_90 = local_98;
  TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1466acd40,local_res8,&local_90);
  if ((local_res8[0] == -1) || (lVar5 = DAT_1466acd40 + (longlong)local_res8[0] * 0x18, lVar5 == 0))
  {
    local_res20 = 0xffffffff;
    local_res24 = 0;
  }
  else {
    local_res20 = *(undefined4 *)(lVar5 + 8);
    local_res24 = *(undefined4 *)(lVar5 + 0xc);
  }
  lVar5 = FWeakObjectPtr::Get(&local_res20);
  if (lVar5 == 0) {
    FWeakObjectPtr::operator=(local_80,param_1);
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    FWeakObjectPtr::operator=(local_88,uVar6);
    local_58 = local_88;
    local_50 = local_80;
    FUN_142c60d30(&DAT_1466acd40,local_res18,&local_58,0);
    FWeakObjectPtr::operator=(&local_78,uVar4);
    local_70 = local_78;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(&DAT_1466acd90,local_res10,&local_70);
    plVar10 = (longlong *)0x0;
    if (local_res10[0] != -1) {
      plVar10 = (longlong *)((longlong)local_res10[0] * 0x20 + _DAT_1466acd90);
    }
    plVar12 = plVar10 + 1;
    if (plVar10 == (longlong *)0x0) {
      plVar12 = (longlong *)0x0;
    }
    if (plVar12 != (longlong *)0x0) {
      iVar9 = (int)plVar12[1];
      if (iVar9 != 0) {
        iVar11 = (int)param_1[0x8d];
        if (*(int *)((longlong)param_1 + 0x46c) < iVar11 + iVar9) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x8c);
          iVar11 = (int)param_1[0x8d];
        }
        puVar8 = (undefined8 *)*plVar12;
        puVar7 = (undefined8 *)((longlong)iVar11 * 0x10 + param_1[0x8c]);
        iVar11 = iVar9;
        do {
          *puVar7 = *puVar8;
          lVar5 = puVar8[1];
          puVar7[1] = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          puVar7 = puVar7 + 2;
          puVar8 = puVar8 + 2;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        *(int *)(param_1 + 0x8d) = (int)param_1[0x8d] + iVar9;
      }
      iVar9 = (int)plVar12[1];
      if (iVar9 != 0) {
        plVar10 = (longlong *)(*plVar12 + 8);
        do {
          plVar3 = (longlong *)*plVar10;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          plVar10 = plVar10 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      *(undefined4 *)(plVar12 + 1) = 0;
      if (*(int *)((longlong)plVar12 + 0xc) != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar12,0);
      }
      FWeakObjectPtr::operator=(&local_68,uVar4);
      local_60 = local_68;
      FUN_142c7fe80(&DAT_1466acd90,&local_60);
      AActor::SetActorTickEnabled(param_1,1);
    }
  }
  FUN_142223710(param_1);
  return;
}



// FUNCTION 142c698e0 FUN_142c698e0 body=54 status=ok
// SIG undefined FUN_142c698e0(void)

void FUN_142c698e0(longlong param_1)

{
  FUN_142330a70();
  if ((*(longlong *)(param_1 + 0x118) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x118) + 0x128) != '\x03')) {
    FUN_142c6a770(param_1);
    return;
  }
  return;
}



// FUNCTION 142c69920 FUN_142c69920 body=594 status=ok
// SIG undefined FUN_142c69920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c69920(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70 [4];
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uVar11 = 0;
  uVar10 = uVar11;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x118);
  }
  if (uVar10 != 0) {
    lVar6 = FUN_142c6f840(param_1,param_2,1);
    if (lVar6 != 0) {
      FUN_142c69b80(param_1,1,param_3,0);
    }
    lVar6 = FUN_142c6f840(param_1,param_2 + 0x18,2);
    if (lVar6 != 0) {
      FUN_142c69b80(param_1,2,param_3,0);
    }
    lVar6 = FUN_142c6f840(param_1,param_2 + 0x30,4);
    if (lVar6 != 0) {
      FUN_142c69b80(param_1,4,param_3,0);
    }
    lVar6 = FUN_142c6f840(param_1,param_2 + 0x48,8);
    if (lVar6 != 0) {
      FUN_142c69b80(param_1,8,param_3,0);
    }
    *(undefined4 *)(param_1 + 0x460) = 0;
    iVar2 = *(int *)(param_2 + 0x68);
    uVar7 = uVar11;
    if (0 < iVar2) {
      do {
        pcVar9 = (char *)((longlong)(int)uVar7 * 0x40 + *(longlong *)(param_2 + 0x60));
        local_50 = (longlong *)0x0;
        local_48 = 0;
        FUN_140e3e400(uVar10,local_70,0);
        plVar8 = local_70;
        if (local_50 != (longlong *)0x0) {
          plVar8 = local_50;
        }
        plVar1 = plVar8 + (int)local_48;
        for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
          lVar6 = *plVar8;
          if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x18) == *(longlong *)(pcVar9 + 0x18))) {
            if (*pcVar9 == '\x01') {
              if (*(longlong *)(pcVar9 + 8) == 0) break;
            }
            else {
              if (((*pcVar9 != '\x02') || (lVar6 == 0)) ||
                 (local_78 = 0, *(longlong *)(pcVar9 + 0x10) == 0)) break;
              FUN_1423b9120(lVar6);
            }
            iVar3 = *(int *)(param_1 + 0x460);
            lVar4 = *(longlong *)(param_1 + 0x420);
            uVar7 = uVar11;
            if (lVar6 != 0) {
              uVar7 = FUN_1423ac7e0(lVar6);
            }
            lVar4 = *(longlong *)(lVar4 + (longlong)iVar3 * 8);
            if (((lVar4 != 0) && (lVar6 != 0)) && (uVar7 != 0)) {
              UAnimInstance::Montage_SetBlendingOutDelegate(uVar7,param_3,lVar4);
            }
            break;
          }
        }
        if (local_50 != (longlong *)0x0) {
          FMemory::Free(local_50);
        }
        uVar5 = *(int *)(param_1 + 0x460) + 1;
        *(uint *)(param_1 + 0x460) = uVar5;
        uVar7 = (ulonglong)uVar5;
      } while ((int)uVar5 < iVar2);
    }
  }
  return;
}



// FUNCTION 142c69b80 FUN_142c69b80 body=187 status=ok
// SIG undefined FUN_142c69b80(void)

void FUN_142c69b80(longlong *param_1,short param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 == 0x10) {
    plVar2 = (longlong *)(param_1[0x84] + (longlong)(int)param_1[0x8c] * 8);
  }
  else {
    if (param_2 == 1) {
      lVar1 = 0x100;
    }
    else if (param_2 == 2) {
      lVar1 = 0x108;
    }
    else if (param_2 == 4) {
      lVar1 = 0x110;
    }
    else if (param_2 == 8) {
      lVar1 = 0x118;
    }
    else {
      lVar1 = 0xf8;
    }
    plVar2 = (longlong *)(lVar1 + (longlong)param_1);
    param_4 = (**(code **)(*param_1 + 0xa0))(param_1);
  }
  if (param_4 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_1423ac7e0(param_4);
  }
  if (((*plVar2 != 0) && (param_4 != 0)) && (lVar1 != 0)) {
    UAnimInstance::Montage_SetBlendingOutDelegate(lVar1,param_3);
  }
  return;
}



// FUNCTION 142c69c40 FUN_142c69c40 body=387 status=ok
// SIG undefined FUN_142c69c40(void)

void FUN_142c69c40(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b2feb0) && (_Init_thread_header(), DAT_146b2feb0 == -1)) {
    FName::FName(&DAT_146b2fea8,L"SpawnPoint",1);
    _Init_thread_footer();
  }
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    plVar1 = *(longlong **)(param_1 + 0x20);
    plVar11 = plVar1 + 1;
    plVar10 = plVar1;
    do {
      if ((*plVar10 == DAT_146b2fea8) && ((char)*plVar11 == '\x03')) {
        if ((plVar1 + (longlong)iVar9 * 7 != (longlong *)0x0) &&
           (lVar8 = (plVar1 + (longlong)iVar9 * 7)[3], lVar8 != 0)) {
          lVar7 = FUN_1429ff160();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) goto LAB_142c69cfa;
        }
        break;
      }
      iVar9 = iVar9 + 1;
      plVar10 = plVar10 + 7;
      plVar11 = plVar11 + 7;
    } while (iVar9 < *(int *)(param_1 + 0x28));
  }
  lVar8 = 0;
LAB_142c69cfa:
  *(longlong *)(param_1 + 0x478) = lVar8;
  if (lVar8 != 0) {
    uVar5 = *(undefined8 *)(lVar8 + 0x218);
    *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)(lVar8 + 0x210);
    *(undefined8 *)(param_1 + 0x498) = uVar5;
    uVar5 = *(undefined8 *)(lVar8 + 0x228);
    *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(lVar8 + 0x220);
    *(undefined8 *)(param_1 + 0x4a8) = uVar5;
    uVar2 = *(undefined4 *)(lVar8 + 0x234);
    uVar3 = *(undefined4 *)(lVar8 + 0x238);
    uVar4 = *(undefined4 *)(lVar8 + 0x23c);
    *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(lVar8 + 0x230);
    *(undefined4 *)(param_1 + 0x4b4) = uVar2;
    *(undefined4 *)(param_1 + 0x4b8) = uVar3;
    *(undefined4 *)(param_1 + 0x4bc) = uVar4;
  }
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     ((lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x120), lVar8 != 0 ||
      (lVar8 = FUN_1423407b0(), lVar8 != 0)))) {
    *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(lVar8 + 0x790);
    return;
  }
  *(undefined4 *)(param_1 + 0x480) = 0;
  return;
}



// FUNCTION 142c69dd0 FUN_142c69dd0 body=202 status=ok
// SIG undefined FUN_142c69dd0(void)

undefined8 FUN_142c69dd0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(int *)(lVar1 + 0x138) == 0) {
    return 1;
  }
  if ((*(char *)(lVar1 + 0x260) != '\0') && (*(int *)(param_1 + 0x490) < *(int *)(param_1 + 0x48c)))
  {
    return 1;
  }
  if (*(char *)(param_1 + 0x49c) != '\0') {
    if ((*(longlong *)(param_1 + 0x18) == 0) ||
       ((lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x120), lVar3 == 0 &&
        (lVar3 = FUN_1423407b0(), lVar3 == 0)))) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = *(float *)(lVar3 + 0x790);
    }
    if (*(float *)(param_1 + 0x494) <= fVar4 - *(float *)(param_1 + 0x498)) {
      return 1;
    }
  }
  if ((((*(char *)(lVar1 + 0x2f8) != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) &&
      (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x118), lVar3 != 0)) &&
     (cVar2 = FUN_142c48f90(*(undefined8 *)(lVar1 + 0x2f0),lVar3,0), cVar2 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 142c69ea0 FUN_142c69ea0 body=107 status=ok
// SIG undefined FUN_142c69ea0(void)

void FUN_142c69ea0(undefined8 *param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    if (*(char *)(*(longlong *)*param_1 + 0x1cc) == '\0') {
      FUN_14268e770(lVar2,param_1[1],0);
    }
    else {
      FUN_14268e880(lVar2,param_1[1],param_1[2]);
    }
    fVar1 = *(float *)param_1[3];
    pfVar3 = (float *)param_1[1];
    *pfVar3 = fVar1 * *pfVar3;
    pfVar3[1] = fVar1 * pfVar3[1];
    pfVar3[2] = fVar1 * pfVar3[2];
  }
  return;
}



// FUNCTION 142c69f10 FUN_142c69f10 body=295 status=ok
// SIG undefined FUN_142c69f10(void)

ulonglong FUN_142c69f10(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint7 uVar7;
  longlong *plVar8;
  
  lVar5 = *param_3;
  if (*(char *)(lVar5 + 0x31) != '\x03') {
    uVar7 = (uint7)((ulonglong)lVar5 >> 8);
    if ((*(char *)(lVar5 + 0x31) != '\x02') && (*(int *)(lVar5 + 0xa4) != -1)) {
      return CONCAT71(uVar7,1);
    }
    return (ulonglong)uVar7 << 8;
  }
  plVar4 = (longlong *)0x0;
  lVar5 = *(longlong *)(param_2 + 0x20);
  plVar8 = plVar4;
  if (lVar5 != 0) {
    lVar3 = UPackageMapClient::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar8 = *(longlong **)(lVar5 + 0x130);
    }
  }
  param_3 = (longlong *)*param_3;
  if (param_3[3] != 0) {
    plVar4 = *(longlong **)(param_3[3] + 0x118);
  }
  if ((plVar8 != (longlong *)0x0) && (plVar4 != (longlong *)0x0)) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x4a8))(plVar4);
    param_3 = plVar4;
    if (plVar4 == plVar8) {
LAB_142c69ff5:
      return (ulonglong)param_3 & 0xffffffffffffff00;
    }
    param_3 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = UIpConnection::GetPrivateStaticClass();
      iVar1 = *(int *)(lVar5 + 0x90);
      uVar6 = (longlong)iVar1;
      if ((*(int *)(plVar4[2] + 0x90) < iVar1) ||
         (uVar6 = *(ulonglong *)(plVar4[2] + 0x88),
         *(longlong *)(uVar6 + (longlong)iVar1 * 8) != lVar5 + 0x88)) {
        param_3 = (longlong *)(uVar6 & 0xffffffffffffff00);
      }
      else {
        param_3 = (longlong *)CONCAT71((int7)(uVar6 >> 8),1);
      }
      if (((char)param_3 != '\0') && ((longlong *)plVar4[0x32e] == plVar8)) goto LAB_142c69ff5;
    }
  }
  return CONCAT71((int7)((ulonglong)param_3 >> 8),1);
}



// FUNCTION 142c6a040 FUN_142c6a040 body=136 status=ok
// SIG undefined FUN_142c6a040(void)

undefined8 FUN_142c6a040(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  
  if ((char)((longlong *)*param_2)[6] != '\0') {
    cVar6 = (**(code **)(*(longlong *)*param_2 + 0x40))();
    if (cVar6 != '\0') {
      uVar7 = 1;
      goto LAB_142c6a068;
    }
  }
  uVar7 = 0;
LAB_142c6a068:
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
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
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 142c6a0d0 FUN_142c6a0d0 body=386 status=ok
// SIG undefined FUN_142c6a0d0(void)

ulonglong FUN_142c6a0d0(longlong param_1,byte param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  
  piVar6 = *(int **)(param_1 + 0x10);
  uVar4 = (ulonglong)*(int *)(param_1 + 0x18);
  piVar1 = piVar6 + uVar4 * 2;
  for (; piVar6 != piVar1; piVar6 = piVar6 + 2) {
    if (*piVar6 == param_3) {
      if (piVar6 != (int *)0x0) {
        bVar2 = *(byte *)((longlong)piVar6 + 5);
        uVar4 = 0;
        if ((bVar2 == param_2) && ((param_2 == 1 || (param_2 == 4)))) goto LAB_142c6a1ed;
        if (((param_2 != 1) && (param_2 != 4)) ||
           (((bVar2 != 1 && (bVar2 != 4)) || (*(byte *)(piVar6 + 1) == param_2)))) {
          if ((param_2 != 1) && (param_2 != 4)) goto LAB_142c6a1cb;
          if (((bVar2 != 1) && (bVar2 != 4)) && ((param_2 == 1 || (param_2 == 4)))) {
            if (bVar2 == 3) goto LAB_142c6a1f0;
            if (4 < bVar2) {
              if (bVar2 < 7) {
LAB_142c6a165:
                bVar7 = param_2 == 1;
              }
              else {
                if (bVar2 != 7) {
                  if (bVar2 != 8) goto LAB_142c6a173;
                  goto LAB_142c6a165;
                }
                bVar7 = param_2 == 4;
              }
              if (bVar7) goto LAB_142c6a1f0;
            }
          }
LAB_142c6a173:
          uVar4 = 0;
          if ((param_2 != 1) && (param_2 != 4)) goto LAB_142c6a1cb;
          if ((*(int *)(param_1 + 0x44) <= *(int *)(param_1 + 0x48)) ||
             (*(int *)(param_1 + 0x40) != param_3)) goto LAB_142c6a1f0;
          piVar5 = *(int **)(param_1 + 0x10);
          uVar4 = (ulonglong)*(int *)(param_1 + 0x18);
          piVar1 = piVar5 + uVar4 * 2;
          goto joined_r0x000142c6a19c;
        }
      }
      break;
    }
  }
LAB_142c6a0f2:
  return uVar4 & 0xffffffffffffff00;
joined_r0x000142c6a19c:
  if (piVar5 == piVar1) goto LAB_142c6a1cb;
  if (*piVar5 == param_3) {
    if (piVar5 != (int *)0x0) {
      cVar3 = *(char *)((longlong)piVar5 + 5);
      uVar4 = 0;
      if (((cVar3 == '\x01') || (cVar3 == '\x04')) && (cVar3 != (char)piVar5[1])) {
LAB_142c6a1f0:
        if ((param_2 == 1) || (param_2 == 4)) {
          piVar5 = *(int **)(param_1 + 0x10);
          piVar1 = piVar5 + (longlong)*(int *)(param_1 + 0x18) * 2;
          for (; piVar5 != piVar1; piVar5 = piVar5 + 2) {
            if (*piVar5 == param_3) {
              if (piVar5 == (int *)0x0) {
                return 0;
              }
              bVar2 = *(byte *)((longlong)piVar5 + 5);
              if (((bVar2 == 1) || (bVar2 == 4)) && (param_2 != bVar2)) {
                return (ulonglong)(((char)piVar6[1] == '\x04') != (param_2 == 1));
              }
              return 1;
            }
          }
        }
        return 0;
      }
    }
    goto LAB_142c6a1cb;
  }
  piVar5 = piVar5 + 2;
  goto joined_r0x000142c6a19c;
LAB_142c6a1cb:
  if (((param_2 == *(byte *)(param_1 + 0x20)) && (param_3 == *(int *)(param_1 + 0x40))) &&
     (uVar4 = (ulonglong)*(uint *)(param_1 + 0x44),
     *(int *)(param_1 + 0x48) < (int)*(uint *)(param_1 + 0x44))) {
LAB_142c6a1ed:
    return CONCAT71((int7)(uVar4 >> 8),1);
  }
  goto LAB_142c6a0f2;
}



// FUNCTION 142c6a260 FUN_142c6a260 body=87 status=ok
// SIG undefined FUN_142c6a260(void)

ulonglong FUN_142c6a260(longlong param_1,int param_2,char param_3,byte param_4)

{
  int *piVar1;
  char cVar2;
  int *in_RAX;
  undefined7 uVar3;
  
  if ((param_3 == '\x01') || (param_3 == '\x04')) {
    in_RAX = *(int **)(param_1 + 0x10);
    piVar1 = in_RAX + (longlong)*(int *)(param_1 + 0x18) * 2;
    for (; in_RAX != piVar1; in_RAX = in_RAX + 2) {
      if (*in_RAX == param_2) {
        if (in_RAX != (int *)0x0) {
          cVar2 = *(char *)((longlong)in_RAX + 5);
          uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
          if (((cVar2 == '\x01') || (cVar2 == '\x04')) && (param_3 != cVar2)) {
            return CONCAT71(uVar3,param_3 != '\x01' ^ param_4);
          }
          return CONCAT71(uVar3,1);
        }
        break;
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142c6a2d0 FUN_142c6a2d0 body=329 status=ok
// SIG undefined FUN_142c6a2d0(void)

ulonglong FUN_142c6a2d0(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *in_RAX;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if (param_2 != (longlong *)0x0) {
    in_RAX = (longlong *)FUN_142e20fc0();
    plVar4 = param_2;
    do {
      if (plVar4 == in_RAX) {
        in_RAX = (longlong *)FUN_1407c3030(param_1 + 0x288);
        if ((char)in_RAX == '\0') {
          plVar2 = (longlong *)FUN_142e20fc0();
          plVar4 = param_2;
          goto LAB_142c6a343;
        }
        break;
      }
      plVar4 = (longlong *)plVar4[6];
    } while (plVar4 != (longlong *)0x0);
  }
  goto LAB_142c6a30e;
  while (plVar4 = (longlong *)plVar4[6], plVar5 = (longlong *)0x0, plVar4 != (longlong *)0x0) {
LAB_142c6a343:
    plVar5 = param_2;
    if (plVar4 == plVar2) break;
  }
  lVar7 = plVar5[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    lVar7 = plVar5[0x1f];
  }
  puVar6 = *(undefined8 **)(param_1 + 0x180);
  in_RAX = (longlong *)(longlong)*(int *)(param_1 + 0x188);
  puVar1 = puVar6 + (longlong)in_RAX * 3;
  if (puVar6 != puVar1) {
    in_RAX = *(longlong **)(lVar7 + 0x48);
    while ((longlong *)*puVar6 != in_RAX) {
      puVar6 = puVar6 + 3;
      if (puVar6 == puVar1) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
    }
    if (puVar6[1] != 0) {
      in_RAX = (longlong *)(**(code **)(*param_3 + 0x78))(param_3);
      if ((char)in_RAX == '\0') {
LAB_142c6a30e:
        return (ulonglong)in_RAX & 0xffffffffffffff00;
      }
      in_RAX = (longlong *)puVar6[1];
      if ((char)in_RAX[6] == '\0') {
        plVar2 = (longlong *)FUN_142e20fc0();
        plVar4 = param_2;
        do {
          plVar5 = param_2;
          if (plVar4 == plVar2) break;
          plVar4 = (longlong *)plVar4[6];
          plVar5 = (longlong *)0x0;
        } while (plVar4 != (longlong *)0x0);
        lVar3 = UClass::GetDefaultObject<UDamageType>(plVar5);
        lVar7 = *(longlong *)(puVar6[1] + 0x10);
        if (lVar7 == 0) {
          in_RAX = (longlong *)CONCAT71((int7)((ulonglong)puVar6[1] >> 8),1);
        }
        else {
          in_RAX = (longlong *)(ulonglong)*(byte *)(lVar7 + 0x50);
        }
        if (*(byte *)(lVar3 + 0x50) < (byte)in_RAX) goto LAB_142c6a30e;
      }
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



// FUNCTION 142c6a420 FUN_142c6a420 body=37 status=ok
// SIG undefined FUN_142c6a420(void)

ulonglong FUN_142c6a420(longlong param_1,char param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  uVar1 = uVar2 + (longlong)*(int *)(param_1 + 0x18) * 8;
  while( true ) {
    if (uVar2 == uVar1) {
      return uVar2 & 0xffffffffffffff00;
    }
    if (*(char *)(uVar2 + 5) == param_2) break;
    uVar2 = uVar2 + 8;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 142c6a450 FUN_142c6a450 body=557 status=ok
// SIG undefined FUN_142c6a450(void)

void FUN_142c6a450(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  int local_res10;
  
  plVar13 = (longlong *)*param_2;
  plVar11 = plVar13 + (longlong)(int)param_2[1] * 2;
  do {
    if (plVar13 == plVar11) {
      return;
    }
    plVar3 = (longlong *)plVar13[1];
    lVar4 = *plVar13;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    lVar7 = (longlong)*(int *)(param_1 + 0x468);
    if (*(int *)(param_1 + 0x468) != 0) {
      iVar9 = 0;
      local_res10 = 0;
      lVar12 = 0;
      bVar16 = **(longlong **)(param_1 + 0x460) != lVar4;
      iVar14 = 0;
      do {
        lVar12 = lVar12 + 1;
        iVar15 = iVar14 + 1;
        if (lVar12 < lVar7) {
          plVar8 = (longlong *)(lVar12 * 0x10 + *(longlong *)(param_1 + 0x460));
          do {
            if (bVar16 != (*plVar8 != lVar4)) break;
            iVar15 = iVar15 + 1;
            lVar12 = lVar12 + 1;
            plVar8 = plVar8 + 2;
          } while (lVar12 < lVar7);
        }
        iVar10 = iVar15 - iVar14;
        if (bVar16 == false) {
          if (iVar10 != 0) {
            plVar8 = (longlong *)((longlong)iVar14 * 0x10 + 8 + *(longlong *)(param_1 + 0x460));
            do {
              plVar5 = (longlong *)*plVar8;
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar5 + 1;
                lVar6 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*plVar5)(plVar5);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar5 + 0xc);
                  iVar9 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (**(code **)(*plVar5 + 8))(plVar5,1);
                  }
                }
              }
              plVar8 = plVar8 + 2;
              iVar10 = iVar10 + -1;
              iVar9 = local_res10;
            } while (iVar10 != 0);
          }
        }
        else {
          if (iVar9 != iVar14) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 0x460)),
                       (void *)((longlong)iVar14 * 0x10 + *(longlong *)(param_1 + 0x460)),
                       (longlong)iVar10 << 4);
          }
          local_res10 = iVar9 + iVar10;
          iVar9 = local_res10;
        }
        bVar16 = (bool)(bVar16 ^ 1);
        iVar14 = iVar15;
      } while (lVar12 < lVar7);
      *(int *)(param_1 + 0x468) = iVar9;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    plVar13 = plVar13 + 2;
  } while( true );
}



// FUNCTION 142c6a680 FUN_142c6a680 body=147 status=ok
// SIG undefined FUN_142c6a680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c6a680(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint local_38;
  undefined4 uStack_24;
  
  *param_1 = 0;
  uVar3 = DAT_1468b5d98;
  uVar2 = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[1] = 0;
  local_38 = local_38 & 0xffffff00;
  *(uint *)(param_1 + 4) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(int *)(param_1 + 5) = (int)uVar2;
  *(int *)((longlong)param_1 + 0x2c) = (int)((ulonglong)uVar2 >> 0x20);
  param_1[6] = CONCAT44(uStack_24,uVar3);
  param_1[7] = 0;
  param_1[8] = 0xffffffff;
  lVar4 = param_1[2];
  lVar1 = lVar4 + (longlong)*(int *)(param_1 + 3) * 8;
  for (; lVar4 != lVar1; lVar4 = lVar4 + 8) {
    *(undefined1 *)(lVar4 + 5) = 0;
  }
  return;
}



// FUNCTION 142c6a720 FUN_142c6a720 body=79 status=ok
// SIG undefined FUN_142c6a720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c6a720(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  lVar1 = lVar2 + (longlong)(int)param_1[1] * 0x48;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    *(undefined4 *)(lVar2 + 0x1c) = 0xbf800000;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x2c) = _DAT_1468b5d90;
    *(undefined4 *)(lVar2 + 0x34) = DAT_1468b5d98;
    *(undefined1 *)(lVar2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 142c6a770 FUN_142c6a770 body=1141 status=ok
// SIG undefined FUN_142c6a770(void)

void FUN_142c6a770(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong *local_res18;
  undefined8 local_res20;
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  lVar3 = FUN_142c71720(lVar3);
  if (lVar3 != 0) {
    plVar11 = *(longlong **)(param_1 + 0x118);
    plVar9 = (longlong *)0x0;
    plVar5 = plVar9;
    if ((plVar11 != (longlong *)0x0) &&
       (lVar4 = (**(code **)(*plVar11 + 0x148))(plVar11), lVar4 != 0)) {
      plVar5 = *(longlong **)(lVar4 + 0x38);
    }
    if (((plVar5 != (longlong *)0x0) && (plVar5[0x12] != 0)) &&
       (plVar5 = *(longlong **)(plVar5[0x12] + 0x68), plVar5 != (longlong *)0x0)) {
      piVar6 = (int *)(**(code **)(*plVar5 + 0x2e0))(plVar5,local_res10,plVar11);
      iVar2 = *piVar6;
      if (iVar2 != 0) {
        if (*(int *)(lVar3 + 0x518) != *(int *)(lVar3 + 0x544)) {
          lVar4 = *(longlong *)(lVar3 + 0x550);
          if (*(longlong *)(lVar3 + 0x550) == 0) {
            lVar4 = lVar3 + 0x548;
          }
          iVar1 = *(int *)(lVar4 + ((longlong)*(int *)(lVar3 + 0x558) - 1U & (longlong)iVar2) * 4);
          if (iVar1 != -1) {
            do {
              plVar11 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)(lVar3 + 0x510));
              if ((int)*plVar11 == iVar2) {
                if (iVar1 != -1) goto LAB_142c6a891;
                break;
              }
              iVar1 = (int)plVar11[3];
            } while (iVar1 != -1);
          }
        }
        plVar11 = plVar9;
LAB_142c6a891:
        plVar5 = plVar11 + 1;
        if (plVar11 == (longlong *)0x0) {
          plVar5 = plVar9;
        }
        if (plVar5 != (longlong *)0x0) {
          plVar11 = (longlong *)*plVar5;
          uVar13 = (ulonglong)(int)plVar5[1];
          plVar9 = plVar11 + uVar13 * 2;
          local_res18 = plVar9;
          if (plVar11 != plVar9) {
            do {
              lVar4 = *plVar11;
              if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x10) != 0)) {
                plVar9 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + 0x10);
                lVar7 = plVar9[0x1f];
                if (lVar7 == 0) {
                  (**(code **)(*plVar9 + 0x368))(plVar9);
                  lVar4 = *plVar11;
                  lVar7 = plVar9[0x1f];
                }
                FUN_142c79d10(param_1,&local_78,plVar9,lVar4,*(longlong *)(lVar4 + 0x10) != lVar7);
                iVar2 = *(int *)(param_1 + 0x230);
                *(int *)(param_1 + 0x230) = iVar2 + 1;
                if (*(int *)(param_1 + 0x234) < iVar2 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x228,iVar2);
                }
                lVar4 = CONCAT44(uStack_6c,uStack_70);
                puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x228));
                *puVar8 = CONCAT44(uStack_74,local_78);
                puVar8[1] = lVar4;
                if (lVar4 != 0) {
                  LOCK();
                  *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
                  UNLOCK();
                }
                plVar14 = (longlong *)CONCAT44(uStack_74,local_78);
                lVar4 = CONCAT44(uStack_6c,uStack_70);
                plVar9 = (longlong *)FUN_142c6ee30(param_1,plVar9);
                local_res8[0] = 2;
                local_res20 = 0;
                local_88[0] = *plVar9;
                plVar14[3] = param_1;
                *(undefined4 *)((longlong)plVar14 + 0xa4) = *(undefined4 *)(*plVar11 + 0xa4);
                if (local_88[0] != 0) {
                  plVar10 = *(longlong **)(param_1 + 0x180);
                  plVar9 = plVar10 + (longlong)*(int *)(param_1 + 0x188) * 3;
                  for (; plVar10 != plVar9; plVar10 = plVar10 + 3) {
                    if (*plVar10 == local_88[0]) {
                      if (plVar10[1] != 0) {
                        *(undefined1 *)(plVar10[1] + 0x30) = 2;
                        local_68 = plVar10[1];
                        local_60 = plVar10[2];
                        if (local_60 != 0) {
                          LOCK();
                          *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
                          UNLOCK();
                          lVar4 = CONCAT44(uStack_6c,uStack_70);
                          plVar14 = (longlong *)CONCAT44(uStack_74,local_78);
                        }
                        FUN_142c84e90(param_1,&local_68,local_res8);
                      }
                      break;
                    }
                  }
                }
                (**(code **)(*plVar14 + 0x30))(plVar14);
                FUN_142c66b50(param_1,local_88,&local_78);
                local_58 = local_78;
                uStack_54 = uStack_74;
                uStack_50 = uStack_70;
                uStack_4c = uStack_6c;
                lVar7 = 0;
                if (lVar4 != 0) {
                  LOCK();
                  *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
                  UNLOCK();
                  lVar7 = CONCAT44(uStack_6c,uStack_70);
                }
                FUN_142c65780(lVar3,&local_58);
                plVar9 = local_res18;
                if (lVar7 != 0) {
                  LOCK();
                  piVar6 = (int *)(lVar7 + 8);
                  iVar2 = *piVar6;
                  *piVar6 = *piVar6 + -1;
                  UNLOCK();
                  if (iVar2 == 1) {
                    puVar8 = (undefined8 *)CONCAT44(uStack_6c,uStack_70);
                    (**(code **)*puVar8)(puVar8);
                    LOCK();
                    piVar6 = (int *)((longlong)puVar8 + 0xc);
                    iVar2 = *piVar6;
                    *piVar6 = *piVar6 + -1;
                    UNLOCK();
                    plVar9 = local_res18;
                    if (iVar2 == 1) {
                      (**(code **)(*(longlong *)CONCAT44(uStack_6c,uStack_70) + 8))
                                ((longlong *)CONCAT44(uStack_6c,uStack_70),1);
                      plVar9 = local_res18;
                    }
                  }
                }
              }
              plVar11 = plVar11 + 2;
            } while (plVar11 != plVar9);
            plVar11 = (longlong *)*plVar5;
            uVar13 = (ulonglong)*(uint *)(plVar5 + 1);
          }
          iVar2 = *(int *)((longlong)plVar5 + 0xc);
          if (iVar2 < 0) {
            if ((int)uVar13 != 0) {
              plVar11 = plVar11 + 1;
              do {
                plVar9 = (longlong *)*plVar11;
                if (plVar9 != (longlong *)0x0) {
                  LOCK();
                  plVar14 = plVar9 + 1;
                  lVar3 = *plVar14;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)lVar3 == 1) {
                    (**(code **)*plVar9)(plVar9);
                    LOCK();
                    piVar6 = (int *)((longlong)plVar9 + 0xc);
                    iVar2 = *piVar6;
                    *piVar6 = *piVar6 + -1;
                    UNLOCK();
                    if (iVar2 == 1) {
                      (**(code **)(*plVar9 + 8))(plVar9,1);
                    }
                  }
                }
                plVar11 = plVar11 + 2;
                uVar12 = (int)uVar13 - 1;
                uVar13 = (ulonglong)uVar12;
              } while (uVar12 != 0);
              iVar2 = *(int *)((longlong)plVar5 + 0xc);
            }
            *(int *)(plVar5 + 1) = 0;
            if (iVar2 != 0) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar5,0);
            }
          }
          else {
            if ((int)uVar13 != 0) {
              plVar11 = plVar11 + 1;
              do {
                plVar9 = (longlong *)*plVar11;
                if (plVar9 != (longlong *)0x0) {
                  LOCK();
                  plVar14 = plVar9 + 1;
                  lVar3 = *plVar14;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)lVar3 == 1) {
                    (**(code **)*plVar9)(plVar9);
                    LOCK();
                    piVar6 = (int *)((longlong)plVar9 + 0xc);
                    iVar2 = *piVar6;
                    *piVar6 = *piVar6 + -1;
                    UNLOCK();
                    if (iVar2 == 1) {
                      (**(code **)(*plVar9 + 8))(plVar9,1);
                    }
                  }
                }
                plVar11 = plVar11 + 2;
                uVar12 = (int)uVar13 - 1;
                uVar13 = (ulonglong)uVar12;
              } while (uVar12 != 0);
            }
            *(int *)(plVar5 + 1) = 0;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142c6abf0 FUN_142c6abf0 body=802 status=ok
// SIG undefined FUN_142c6abf0(void)

void FUN_142c6abf0(longlong param_1)

{
  longlong *plVar1;
  undefined8 **ppuVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  int local_res8 [2];
  int local_res10 [2];
  undefined1 local_res18 [8];
  int *local_res20;
  undefined8 *local_58;
  undefined8 local_50;
  
  if (*(int *)(param_1 + 0x230) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x120);
    if (lVar8 == 0) {
      lVar8 = FUN_1423407b0();
    }
    lVar8 = FUN_142c71720(lVar8);
    if (lVar8 != 0) {
      plVar14 = *(longlong **)(param_1 + 0x118);
      lVar10 = 0;
      if ((plVar14 != (longlong *)0x0) &&
         (lVar9 = (**(code **)(*plVar14 + 0x148))(plVar14), lVar9 != 0)) {
        lVar10 = *(longlong *)(lVar9 + 0x38);
      }
      local_res8[0] = 0;
      if (((lVar10 != 0) && (*(longlong *)(lVar10 + 0x90) != 0)) &&
         (plVar15 = *(longlong **)(*(longlong *)(lVar10 + 0x90) + 0x68), plVar15 != (longlong *)0x0)
         ) {
        piVar11 = (int *)(**(code **)(*plVar15 + 0x2e0))(plVar15,local_res18,plVar14);
        local_res8[0] = *piVar11;
      }
      if (local_res8[0] != 0) {
        plVar14 = *(longlong **)(param_1 + 0x228);
        plVar15 = plVar14 + (longlong)*(int *)(param_1 + 0x230) * 2;
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        if (plVar14 != plVar15) {
          do {
            uVar6 = local_50;
            plVar5 = (longlong *)plVar14[1];
            lVar10 = *plVar14;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
            }
            if ((lVar10 == 0) || (*(char *)(lVar10 + 0x31) == '\x02')) {
LAB_142c6ad39:
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar5 + 1;
                lVar10 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*plVar5)(plVar5);
                  LOCK();
                  piVar11 = (int *)((longlong)plVar5 + 0xc);
                  iVar7 = *piVar11;
                  *piVar11 = *piVar11 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*plVar5 + 8))(plVar5,1);
                  }
                }
              }
            }
            else {
              lVar9 = (longlong)(int)local_50;
              iVar7 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar7);
              if (local_50._4_4_ < iVar7) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,uVar6 & 0xffffffff);
              }
              local_58[lVar9 * 2] = lVar10;
              (local_58 + lVar9 * 2)[1] = plVar5;
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
                goto LAB_142c6ad39;
              }
            }
            plVar14 = plVar14 + 2;
          } while (plVar14 != plVar15);
          if ((int)local_50 != 0) {
            plVar14 = (longlong *)(lVar8 + 0x510);
            if (*(int *)(lVar8 + 0x518) != *(int *)(lVar8 + 0x544)) {
              lVar10 = *(longlong *)(lVar8 + 0x550);
              if (*(longlong *)(lVar8 + 0x550) == 0) {
                lVar10 = lVar8 + 0x548;
              }
              iVar7 = *(int *)(lVar10 + ((longlong)*(int *)(lVar8 + 0x558) - 1U &
                                        (longlong)local_res8[0]) * 4);
              if (iVar7 != -1) {
                do {
                  piVar11 = (int *)((longlong)iVar7 * 0x20 + *plVar14);
                  if (*piVar11 == local_res8[0]) {
                    if ((iVar7 != -1) && (piVar11 != (int *)0x0)) goto LAB_142c6ae2e;
                    break;
                  }
                  iVar7 = piVar11[6];
                } while (iVar7 != -1);
              }
            }
            local_res20 = local_res8;
            FUN_142c60aa0(plVar14,local_res10,&local_res20,0);
            piVar11 = (int *)((longlong)local_res10[0] * 0x20 + *plVar14);
LAB_142c6ae2e:
            ppuVar2 = (undefined8 **)(piVar11 + 2);
            if (ppuVar2 != &local_58) {
              iVar7 = piVar11[4];
              if (iVar7 != 0) {
                plVar14 = *ppuVar2 + 1;
                do {
                  plVar15 = (longlong *)*plVar14;
                  if (plVar15 != (longlong *)0x0) {
                    LOCK();
                    plVar5 = plVar15 + 1;
                    lVar8 = *plVar5;
                    *(int *)plVar5 = (int)*plVar5 + -1;
                    UNLOCK();
                    if ((int)lVar8 == 1) {
                      (**(code **)*plVar15)(plVar15);
                      LOCK();
                      piVar3 = (int *)((longlong)plVar15 + 0xc);
                      iVar4 = *piVar3;
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      if (iVar4 == 1) {
                        (**(code **)(*plVar15 + 8))(plVar15,1);
                      }
                    }
                  }
                  plVar14 = plVar14 + 2;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
              }
              iVar7 = (int)local_50;
              piVar11[4] = (int)local_50;
              TArray<FString,FDefaultAllocator>::ResizeForCopy
                        (ppuVar2,local_50 & 0xffffffff,piVar11[5]);
              puVar13 = *ppuVar2;
              puVar12 = local_58;
              do {
                *puVar13 = *puVar12;
                lVar8 = puVar12[1];
                puVar13[1] = lVar8;
                if (lVar8 != 0) {
                  LOCK();
                  *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
                  UNLOCK();
                }
                puVar13 = puVar13 + 2;
                puVar12 = puVar12 + 2;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
          }
        }
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_58);
      }
    }
  }
  return;
}



// FUNCTION 142c6af20 FUN_142c6af20 body=95 status=ok
// SIG undefined FUN_142c6af20(void)

void FUN_142c6af20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = *(longlong **)(param_3 + 0x30);
  plVar4 = plVar3 + (longlong)*(int *)(param_3 + 0x38) * 2;
  for (; plVar3 != plVar4; plVar3 = plVar3 + 2) {
    if ((((int)plVar3[1] != 0) && ((longlong *)*plVar3 != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(*(longlong *)*plVar3 + 0x18))(), cVar1 != '\0')) {
      if ((int)plVar3[1] == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)*plVar3;
      }
      (**(code **)(*plVar2 + 0x40))();
    }
  }
  return;
}



// FUNCTION 142c6af80 FUN_142c6af80 body=406 status=ok
// SIG undefined FUN_142c6af80(void)

longlong FUN_142c6af80(float *param_1,float *param_2,float *param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  char extraout_AL;
  DWORD DVar9;
  uint7 extraout_var;
  longlong lVar10;
  uint7 extraout_var_00;
  undefined4 extraout_var_01;
  uint7 uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  
  lVar6 = DAT_146b2fe28;
  cVar8 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar8 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar9 = GetCurrentThreadId(), DVar9 != DAT_1468c21c0)) {
    lVar10 = 4;
  }
  else {
    lVar10 = 0;
  }
  fVar14 = *(float *)(lVar10 + lVar6);
  fVar13 = (float)FMath::PointDistToLine(param_3,param_4,param_1);
  lVar6 = DAT_146b2fde0;
  uVar11 = extraout_var;
  if (fVar14 < fVar13) goto LAB_142c6b102;
  fVar14 = *param_3;
  fVar13 = param_3[1];
  fVar1 = param_1[1];
  fVar2 = param_3[2];
  fVar3 = *param_1;
  fVar4 = param_1[2];
  cVar8 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar8 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar9 = GetCurrentThreadId(), DVar9 != DAT_1468c21c0)) {
    lVar10 = 4;
  }
  else {
    lVar10 = 0;
  }
  lVar7 = DAT_146b2fdf8;
  fVar5 = *(float *)(lVar10 + lVar6);
  FUN_1415ad720(&DAT_1468e2448);
  uVar11 = extraout_var_00;
  if ((extraout_AL == '\0') && (DAT_1468c21ae != '\0')) {
    DVar9 = GetCurrentThreadId();
    uVar11 = (uint7)(CONCAT44(extraout_var_01,DVar9) >> 8);
    if (DVar9 == DAT_1468c21c0) goto LAB_142c6b0b7;
  }
  else {
LAB_142c6b0b7:
    lVar12 = 0;
  }
  if ((SQRT((fVar13 - fVar1) * (fVar13 - fVar1) + (fVar14 - fVar3) * (fVar14 - fVar3) +
            (fVar2 - fVar4) * (fVar2 - fVar4)) <= fVar5) &&
     (fVar14 = SQRT((param_2[1] - param_1[1]) * (param_2[1] - param_1[1]) +
                    (*param_2 - *param_1) * (*param_2 - *param_1) +
                    (param_2[2] - param_1[2]) * (param_2[2] - param_1[2])),
     *(float *)(lVar12 + lVar7) <= fVar14 && fVar14 != *(float *)(lVar12 + lVar7))) {
    return CONCAT71(uVar11,1);
  }
LAB_142c6b102:
  return (ulonglong)uVar11 << 8;
}



// FUNCTION 142c6b120 FUN_142c6b120 body=65 status=ok
// SIG undefined FUN_142c6b120(void)

bool FUN_142c6b120(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (param_2 != 0) {
    lVar2 = FUN_142e20fc0();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar2) goto LAB_142c6b150;
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  param_2 = 0;
LAB_142c6b150:
  return lVar1 == param_2;
}



// FUNCTION 142c6b170 FUN_142c6b170 body=181 status=ok
// SIG undefined FUN_142c6b170(void)

undefined8 FUN_142c6b170(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x68);
  lVar5 = (longlong)*(int *)(param_1 + 0x70) * 0x10 + lVar6;
  do {
    if (lVar6 == lVar5) {
      return 0;
    }
    if (*(longlong *)(lVar6 + 8) != 0) {
      plVar3 = (longlong *)FUN_142e20fc0();
      plVar1 = *(longlong **)(lVar6 + 8);
      for (plVar4 = plVar1; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[6]) {
        if (plVar4 == plVar3) {
          if (plVar1 == (longlong *)0x0) break;
          plVar4 = (longlong *)plVar1[0x1f];
          if (plVar4 == (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x368))(plVar1);
            plVar4 = (longlong *)plVar1[0x1f];
            if (plVar4 == (longlong *)0x0) break;
          }
          cVar2 = (**(code **)(*plVar4 + 0x288))(plVar4,param_2);
          if (cVar2 != '\0') {
            return 1;
          }
          break;
        }
      }
    }
    lVar6 = lVar6 + 0x10;
  } while( true );
}


