// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142cd8680 FUN_142cd8680 body=322 status=ok
// SIG undefined FUN_142cd8680(void)

void FUN_142cd8680(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x490);
  lVar5 = 0;
  if (lVar6 == 0) {
    *(undefined8 *)(param_1 + 0x9c8) = 0;
    *(undefined8 *)(param_1 + 0x938) = 0;
    goto LAB_142cd879a;
  }
  if (*(longlong *)(param_1 + 0x9c0) == 0) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar3 = lVar5;
    if (bVar2) {
      lVar3 = lVar6;
    }
    *(longlong *)(param_1 + 0x9c0) = lVar3;
    if (lVar3 != 0) {
      FUN_142e35f10(param_1);
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x490);
  if (lVar6 == 0) {
LAB_142cd873e:
    lVar6 = lVar5;
  }
  else {
    lVar3 = FUN_142c2de20();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142cd873e;
  }
  plVar1 = *(longlong **)(param_1 + 0x490);
  *(longlong *)(param_1 + 0x9c8) = lVar6;
  uVar4 = FUN_142e79600();
  uVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
  plVar1 = *(longlong **)(param_1 + 0x490);
  *(undefined8 *)(param_1 + 0x938) = uVar4;
  uVar4 = FUN_142e551e0();
  lVar5 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
LAB_142cd879a:
  *(longlong *)(param_1 + 0x940) = lVar5;
  if (*(longlong *)(param_1 + 0x900) != 0) {
    FUN_142cfe440();
  }
  return;
}



// FUNCTION 142cd87d0 FUN_142cd87d0 body=2461 status=ok
// SIG undefined FUN_142cd87d0(void)

/* WARNING: Removing unreachable block (ram,0x000142cd90f2) */
/* WARNING: Removing unreachable block (ram,0x000142cd90fe) */

void FUN_142cd87d0(longlong *param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  float fVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  float local_b0;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0xb4);
  lVar11 = *(longlong *)(*param_1 + 0xfd8);
  local_d0 = *(float *)((longlong)param_1 + 0xbc);
  if (((*(byte *)(param_1[1] + 0x28) & 0x20) == 0) ||
     (local_d8 = uVar1, *(char *)(param_1[1] + 0x68) == '\0')) {
    local_d8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_d8._0_4_ = (float)uVar1;
    fVar13 = local_d8._4_4_ * local_d8._4_4_ + (float)local_d8 * (float)local_d8;
    if (fVar13 == 1.0) {
      local_f8 = (float)local_d8;
      fStack_f4 = local_d8._4_4_;
      local_f0 = local_d0;
      if (local_d0 != 0.0) {
LAB_142cd894d:
        local_f0 = 0.0;
      }
    }
    else {
      if (1e-08 <= fVar13) {
        auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
        local_f8 = auVar15._0_4_;
        local_f8 = local_f8 + local_f8 * (0.5 - fVar13 * 0.5 * local_f8 * local_f8);
        local_f8 = local_f8 + local_f8 * (0.5 - fVar13 * 0.5 * local_f8 * local_f8);
        fStack_f4 = local_d8._4_4_ * local_f8;
        local_f8 = (float)local_d8 * local_f8;
        goto LAB_142cd894d;
      }
      local_f8 = DAT_1468b5d90;
      local_f0 = DAT_1468b5d98;
      fStack_f4 = DAT_1468b5d94;
    }
    local_d8 = CONCAT44(fStack_f4,local_f8);
    local_d0 = local_f0;
  }
  uVar8 = FVector::Rotation(&local_d8,&local_e8);
  fVar6 = local_e0;
  fVar13 = local_e8;
  lVar12 = param_1[1];
  if ((*(byte *)(lVar12 + 0x28) & 0x10) == 0) {
    lVar3 = *(longlong *)(lVar11 + 0x168);
    if (lVar3 == 0) {
      uVar8 = (undefined4)DAT_1468b5da0;
      fVar16 = (float)((ulonglong)DAT_1468b5da0 >> 0x20);
    }
    else {
      fVar16 = *(float *)(lVar3 + 0x210);
      local_c8 = *(undefined8 *)(lVar3 + 0x210);
      fStack_c0 = *(float *)(lVar3 + 0x218);
      fStack_bc = *(float *)(lVar3 + 0x21c);
      auVar15._4_4_ = -(uint)(*(float *)(lVar3 + 0x214) != *(float *)(lVar3 + 0x254));
      auVar15._0_4_ = -(uint)(fVar16 != *(float *)(lVar3 + 0x250));
      auVar15._8_4_ = -(uint)(fStack_c0 != *(float *)(lVar3 + 600));
      auVar15._12_4_ = -(uint)(fStack_bc != *(float *)(lVar3 + 0x25c));
      iVar9 = movmskps(uVar8,auVar15);
      if (iVar9 != 0) {
        *(float *)(lVar3 + 0x250) = fVar16;
        *(float *)(lVar3 + 0x254) = *(float *)(lVar3 + 0x214);
        *(float *)(lVar3 + 600) = fStack_c0;
        *(float *)(lVar3 + 0x25c) = fStack_bc;
        puVar10 = (undefined8 *)FQuat::Rotator(&local_c8,&local_b8);
        *(undefined8 *)(lVar3 + 0x260) = *puVar10;
        *(undefined4 *)(lVar3 + 0x268) = *(undefined4 *)(puVar10 + 1);
        lVar12 = param_1[1];
      }
      uVar8 = (undefined4)*(undefined8 *)(lVar3 + 0x260);
      fVar16 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x260) >> 0x20);
    }
    local_b8 = CONCAT44(fVar16,uVar8);
  }
  else {
    fVar16 = local_e4;
    if (1e-08 < ABS(*(float *)(lVar12 + 0x120))) {
      fVar16 = *(float *)(lVar12 + 0x120) + local_e4;
    }
  }
  if (((*(byte *)(lVar12 + 0x28) & 0x20) != 0) && (1e-08 < ABS(*(float *)(lVar12 + 0x124)))) {
    fVar13 = fVar13 + *(float *)(lVar12 + 0x124);
  }
  fVar14 = (float)(int)(local_e8 * 0.0027777778) * 360.0;
  if (ABS(local_e8) < ABS(fVar14)) {
    fVar14 = local_e8;
  }
  local_e8 = local_e8 - fVar14;
  if (local_e8 < 0.0) {
    local_e8 = local_e8 + 360.0;
  }
  fVar14 = (float)(int)(local_e4 * 0.0027777778) * 360.0;
  if (ABS(local_e4) < ABS(fVar14)) {
    fVar14 = local_e4;
  }
  local_e4 = local_e4 - fVar14;
  if (local_e4 < 0.0) {
    local_e4 = local_e4 + 360.0;
  }
  fVar14 = (float)(int)(local_e0 * 0.0027777778) * 360.0;
  if (ABS(local_e0) < ABS(fVar14)) {
    fVar14 = local_e0;
  }
  local_e0 = local_e0 - fVar14;
  if (local_e0 < 0.0) {
    local_e0 = local_e0 + 360.0;
  }
  fVar14 = (float)(int)(fVar13 * 0.0027777778) * 360.0;
  if (ABS(fVar13) < ABS(fVar14)) {
    fVar14 = fVar13;
  }
  fVar13 = fVar13 - fVar14;
  if (fVar13 < 0.0) {
    fVar13 = fVar13 + 360.0;
  }
  fVar14 = (float)(int)(fVar16 * 0.0027777778) * 360.0;
  if (ABS(fVar16) < ABS(fVar14)) {
    fVar14 = fVar16;
  }
  fVar16 = fVar16 - fVar14;
  if (fVar16 < 0.0) {
    fVar16 = fVar16 + 360.0;
  }
  fStack_c0 = (float)(int)(fVar6 * 0.0027777778) * 360.0;
  if (ABS(fVar6) < ABS(fStack_c0)) {
    fStack_c0 = fVar6;
  }
  fStack_c0 = fVar6 - fStack_c0;
  if (fStack_c0 < 0.0) {
    fStack_c0 = fStack_c0 + 360.0;
  }
  lVar12 = param_1[1];
  local_c8 = CONCAT44(fVar16,fVar13);
  local_b0 = fStack_c0;
  AActor::SetActorRotation(lVar11,&local_c8,0);
  if (param_1[1] != lVar12) {
    return;
  }
  plVar4 = *(longlong **)(lVar11 + 0x490);
  uVar2 = *(uint *)(param_1[1] + 0x2c);
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  if (((*(uint *)((longlong)plVar4 + 0x4cc) >> 1 & 1) == 0) ||
     (cVar7 = (**(code **)(*plVar4 + 0x768))(), cVar7 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return;
  }
  plVar4 = *(longlong **)(lVar11 + 0x490);
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  lVar11 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
  if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
      lVar11 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return;
  }
  if (plVar4[0xa5] == 0) {
    return;
  }
  if (param_3 != '\0') {
    FUN_1426e1d20(plVar4[0xa5],&local_f8);
    fStack_c0 = local_f0;
    local_c8._4_4_ = fStack_f4;
    if ((uVar2 & 0x100) != 0) {
      local_c8._4_4_ = fVar16;
    }
    local_c8._0_4_ = local_f8;
    if ((((uVar2 >> 9 & 1) == 0) || (local_c8._0_4_ = fVar13, fVar13 == local_f8)) &&
       (local_c8._4_4_ == fStack_f4)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) {
      return;
    }
    (**(code **)(*plVar4 + 0x838))(plVar4,&local_c8);
    return;
  }
  fStack_c0 = *(float *)(param_2 + 1);
  uVar1 = *param_2;
  if (((*(byte *)(param_1[1] + 0x28) & 0x20) == 0) ||
     (local_c8 = uVar1, *(char *)(param_1[1] + 0x68) == '\0')) {
    local_c8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_c8._0_4_ = (float)uVar1;
    fVar13 = local_c8._4_4_ * local_c8._4_4_ + (float)local_c8 * (float)local_c8;
    if (fVar13 == 1.0) {
      local_f8 = (float)local_c8;
      fStack_f4 = local_c8._4_4_;
      local_f0 = fStack_c0;
      if (fStack_c0 != 0.0) {
LAB_142cd8eb2:
        local_f0 = 0.0;
      }
    }
    else {
      if (1e-08 <= fVar13) {
        auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
        fStack_f4 = auVar15._0_4_;
        fStack_f4 = fStack_f4 + fStack_f4 * (0.5 - fVar13 * 0.5 * fStack_f4 * fStack_f4);
        fStack_f4 = fStack_f4 + fStack_f4 * (0.5 - fVar13 * 0.5 * fStack_f4 * fStack_f4);
        local_f8 = (float)local_c8 * fStack_f4;
        fStack_f4 = local_c8._4_4_ * fStack_f4;
        goto LAB_142cd8eb2;
      }
      local_f8 = DAT_1468b5d90;
      local_f0 = DAT_1468b5d98;
      fStack_f4 = DAT_1468b5d94;
    }
    local_c8 = CONCAT44(fStack_f4,local_f8);
    fStack_c0 = local_f0;
  }
  FVector::Rotation(&local_c8,&local_b8);
  local_f8 = 0.0;
  fStack_f4 = 0.0;
  local_f0 = 0.0;
  if ((uVar2 & 0x100) != 0) {
    fStack_f4 = (float)(int)(local_e4 * 0.0027777778) * 360.0;
    if (ABS(local_e4) < ABS(fStack_f4)) {
      fStack_f4 = local_e4;
    }
    fStack_f4 = local_e4 - fStack_f4;
    if (fStack_f4 < 0.0) {
      fStack_f4 = fStack_f4 + 360.0;
    }
    if (180.0 < fStack_f4) {
      fStack_f4 = fStack_f4 - 360.0;
    }
    fVar13 = (float)(int)(local_b8._4_4_ * 0.0027777778) * 360.0;
    if (ABS(local_b8._4_4_) < ABS(fVar13)) {
      fVar13 = local_b8._4_4_;
    }
    fVar13 = local_b8._4_4_ - fVar13;
    if (fVar13 < 0.0) {
      fVar13 = fVar13 + 360.0;
    }
    if (180.0 < fVar13) {
      fVar13 = fVar13 - 360.0;
    }
    fStack_f4 = fStack_f4 - fVar13;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    local_f8 = (float)(int)(local_e8 * 0.0027777778) * 360.0;
    if (ABS(local_e8) < ABS(local_f8)) {
      local_f8 = local_e8;
    }
    local_f8 = local_e8 - local_f8;
    if (local_f8 < 0.0) {
      local_f8 = local_f8 + 360.0;
    }
    if (180.0 < local_f8) {
      local_f8 = local_f8 - 360.0;
    }
    fVar13 = (float)(int)((float)local_b8 * 0.0027777778) * 360.0;
    if (ABS((float)local_b8) < ABS(fVar13)) {
      fVar13 = (float)local_b8;
    }
    fVar13 = (float)local_b8 - fVar13;
    if (fVar13 < 0.0) {
      fVar13 = fVar13 + 360.0;
    }
    if (180.0 < fVar13) {
      fVar13 = fVar13 - 360.0;
    }
    local_f8 = local_f8 - fVar13;
  }
  fVar13 = (float)(int)(local_f8 * 0.0027777778) * 360.0;
  if (ABS(local_f8) < ABS(fVar13)) {
    fVar13 = local_f8;
  }
  fVar13 = local_f8 - fVar13;
  if (fVar13 < 0.0) {
    fVar13 = fVar13 + 360.0;
  }
  if (fVar13 == 0.0) {
    fVar13 = (float)(int)(fStack_f4 * 0.0027777778) * 360.0;
    if (ABS(fStack_f4) < ABS(fVar13)) {
      fVar13 = fStack_f4;
    }
    fVar13 = fStack_f4 - fVar13;
    if (fVar13 < 0.0) {
      fVar13 = fVar13 + 360.0;
    }
    if (fVar13 == 0.0) {
      bVar5 = true;
      goto LAB_142cd910d;
    }
  }
  bVar5 = false;
LAB_142cd910d:
  if (!bVar5) {
    (**(code **)(*plVar4 + 0x840))(plVar4,&local_f8);
  }
  return;
}



// FUNCTION 142cd9170 FUN_142cd9170 body=303 status=ok
// SIG undefined FUN_142cd9170(void)

void FUN_142cd9170(longlong *param_1)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  uint local_a8;
  undefined8 local_a4;
  undefined1 local_98 [12];
  undefined4 local_8c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  cVar3 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar3 != '\0') {
    local_a8 = local_a8 & 0xfffffff8;
    local_a4 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_34 = 0xffffffff;
    local_2c = 0xffffffff;
    local_24 = 0xffffffff;
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    lVar2 = param_1[0x2f];
    local_8c = 0x3f800000;
    local_b8 = *(undefined4 *)(lVar2 + 0x220);
    local_b4 = *(undefined4 *)(lVar2 + 0x224);
    local_b0 = *(undefined4 *)(lVar2 + 0x228);
    (**(code **)(*param_1 + 0x870))(param_1,&local_b8,&local_a8,0,0);
    if (((byte)local_a8 & 3) == 3) {
      puVar1 = (uint *)(param_1 + 0x82);
      *puVar1 = *puVar1 & 0xfffffff8;
      *puVar1 = *puVar1 | local_a8 & 7;
      *(undefined4 *)((longlong)param_1 + 0x414) = (undefined4)local_a4;
      *(undefined4 *)(param_1 + 0x83) = local_a4._4_4_;
      FUN_140729f20(param_1 + 0x84,local_98);
      (**(code **)(*param_1 + 0x5e0))(param_1);
      FUN_14234fb40(param_1,puVar1);
    }
  }
  return;
}



// FUNCTION 142cd92a0 FUN_142cd92a0 body=1116 status=ok
// SIG undefined FUN_142cd92a0(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_142cd92a0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 local_res8;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [12];
  undefined1 local_8c [84];
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x538) == 0) {
    return;
  }
  if (lVar2 == 0) {
    return;
  }
  plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x538) + 0x900);
  if (plVar11 == (longlong *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 0x644) != '\0') {
    uVar13 = 0;
    plVar11 = *(longlong **)(param_1 + 0x8d0);
    uVar12 = (longlong)*(int *)(param_1 + 0x8d8) & 0x1fffffffffffffff;
    if (plVar11 + *(int *)(param_1 + 0x8d8) < plVar11) {
      uVar12 = uVar13;
    }
    if (uVar12 == 0) {
      return;
    }
    do {
      lVar2 = *plVar11;
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0x855) = 1;
        *(undefined4 *)(lVar2 + 0x1ac) = 0x3f800000;
      }
      plVar11 = plVar11 + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar12);
    return;
  }
  cVar5 = FUN_142cf3790(plVar11);
  uVar17 = 0;
  if (cVar5 == '\0') {
    if (*(float *)(param_1 + 0x8e0) < 1e-08) {
      return;
    }
    uVar16 = 0;
  }
  else {
    uVar16 = 0x3f800000;
  }
  uVar16 = FMath::FInterpConstantTo(*(float *)(param_1 + 0x8e0),uVar16,param_2,(int)plVar11[0x29d]);
  *(undefined4 *)(param_1 + 0x8e0) = uVar16;
  if ((*(byte *)(plVar11 + 0x84) & 1) == 0) {
    local_c8 = *(longlong *)(lVar2 + 0x220);
    local_c0 = *(undefined4 *)(lVar2 + 0x228);
    plVar9 = &DAT_1464aa798;
  }
  else {
    local_c0 = (undefined4)plVar11[0x89];
    local_c8 = plVar11[0x88];
    plVar9 = plVar11 + 0x8b;
  }
  lVar1 = *plVar9;
  lVar3 = plVar9[1];
  uVar6 = (**(code **)(*plVar11 + 0xc88))(plVar11);
  cVar7 = (**(code **)(*plVar11 + 0xbf0))(plVar11);
  if (cVar7 == '\0') {
    cVar8 = (**(code **)(*plVar11 + 0x550))(plVar11);
    local_res8 = 1;
    if (cVar8 == '\0') goto LAB_142cd9475;
  }
  else {
LAB_142cd9475:
    local_res8 = 0;
  }
  if (((*(char *)(param_1 + 0x760) == '\0') && (cVar5 != '\0')) && ((char)plVar11[0x49] != '\x05'))
  {
    uVar15 = 1;
  }
  else {
    uVar15 = 0;
  }
  cVar8 = FUN_142cf3800(plVar11);
  if ((*(char *)(param_1 + 0x760) == '\0') && (cVar5 != '\0')) {
    uVar4 = 1;
  }
  else {
    uVar14 = 0;
    uVar4 = 0;
    if (*(char *)(param_1 + 0x760) != '\0') goto LAB_142cd94fd;
  }
  uVar14 = uVar4;
  if (((*(byte *)(lVar2 + 0x880) & 2) != 0) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x780))(), cVar5 != '\0')) {
    uVar17 = *(undefined4 *)(param_1 + 0x8e0);
  }
LAB_142cd94fd:
  uVar16 = FUN_142268750(param_1,DAT_146b31398);
  uVar13 = 0;
  plVar9 = *(longlong **)(param_1 + 0x8d0);
  uVar12 = (longlong)*(int *)(param_1 + 0x8d8) & 0x1fffffffffffffff;
  if (plVar9 + *(int *)(param_1 + 0x8d8) < plVar9) {
    uVar12 = uVar13;
  }
  if (uVar12 != 0) {
    do {
      lVar2 = *plVar9;
      if (lVar2 != 0) {
        *(bool *)(lVar2 + 0x1b8) = cVar8 == '\0';
        *(undefined1 *)(lVar2 + 0x1b4) = uVar6;
        *(undefined1 *)(lVar2 + 0x1b5) = local_res8;
        *(char *)(lVar2 + 0x1b6) = cVar7;
        *(undefined4 *)(lVar2 + 0x1ac) = uVar17;
        *(undefined4 *)(lVar2 + 0x1b0) = uVar16;
        *(undefined1 *)(lVar2 + 0x855) = 0;
        *(undefined1 *)(lVar2 + 0x1b7) = uVar15;
        puVar10 = (undefined8 *)
                  (**(code **)(**(longlong **)(param_1 + 0x538) + 0x308))
                            (*(longlong **)(param_1 + 0x538),local_98);
        *(undefined8 *)(lVar2 + 0x7e8) = *puVar10;
        *(undefined4 *)(lVar2 + 0x7f0) = *(undefined4 *)(puVar10 + 1);
        *(uint *)(lVar2 + 0x7f4) = (uint)*(byte *)(plVar11 + 0x49);
        *(undefined1 *)(lVar2 + 0x854) = uVar14;
        *(bool *)(lVar2 + 0x856) = (char)plVar11[0x49] == '\x02';
        puVar10 = (undefined8 *)((longlong)plVar11 + 0x175c);
        if ((char)plVar11[0x2ed] == '\0') {
          puVar10 = (undefined8 *)(lVar2 + 0x818);
        }
        local_b8 = *puVar10;
        local_b0 = *(undefined4 *)(puVar10 + 1);
        local_a8 = *(undefined8 *)(lVar2 + 0x80c);
        local_a0 = *(undefined4 *)(lVar2 + 0x814);
        puVar10 = (undefined8 *)
                  FMath::VInterpConstantTo
                            (local_8c,&local_a8,&local_b8,param_2,
                             *(undefined4 *)((longlong)plVar11 + 0x14ec));
        *(undefined8 *)(lVar2 + 0x80c) = *puVar10;
        *(undefined4 *)(lVar2 + 0x814) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(lVar2 + 0x864) = lVar1;
        *(longlong *)(lVar2 + 0x858) = local_c8;
        *(undefined4 *)(lVar2 + 0x860) = local_c0;
        *(int *)(lVar2 + 0x86c) = (int)lVar3;
      }
      plVar9 = plVar9 + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar12);
  }
  return;
}



// FUNCTION 142cd9700 FUN_142cd9700 body=67 status=ok
// SIG undefined FUN_142cd9700(void)

void FUN_142cd9700(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0x24);
  return;
}



// FUNCTION 142cd9750 FUN_142cd9750 body=6 status=ok
// SIG undefined FUN_142cd9750(void)

void FUN_142cd9750(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x50) = *param_2;
  return;
}



// FUNCTION 142cd9760 FUN_142cd9760 body=1308 status=ok
// SIG undefined FUN_142cd9760(void)

void FUN_142cd9760(longlong param_1,float param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
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
  float local_ac;
  float local_a8;
  float local_a4;
  
  lVar6 = *(longlong *)(param_1 + 0x538);
  if (lVar6 == 0) {
    return;
  }
  lVar7 = *(longlong *)(lVar6 + 0x900);
  if (lVar7 == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(lVar7 + 0x2168);
  *(undefined8 *)(param_1 + 0x780) = *(undefined8 *)(lVar7 + 0x2160);
  *(undefined8 *)(param_1 + 0x788) = uVar1;
  uVar1 = *(undefined8 *)(lVar7 + 0x2178);
  *(undefined8 *)(param_1 + 0x790) = *(undefined8 *)(lVar7 + 0x2170);
  *(undefined8 *)(param_1 + 0x798) = uVar1;
  uVar1 = *(undefined8 *)(lVar7 + 0x2188);
  *(undefined8 *)(param_1 + 0x7a0) = *(undefined8 *)(lVar7 + 0x2180);
  *(undefined8 *)(param_1 + 0x7a8) = uVar1;
  uVar1 = *(undefined8 *)(lVar7 + 0x2198);
  *(undefined8 *)(param_1 + 0x7b0) = *(undefined8 *)(lVar7 + 0x2190);
  *(undefined8 *)(param_1 + 0x7b8) = uVar1;
  uVar1 = *(undefined8 *)(lVar7 + 0x21a8);
  *(undefined8 *)(param_1 + 0x7c0) = *(undefined8 *)(lVar7 + 0x21a0);
  *(undefined8 *)(param_1 + 0x7c8) = uVar1;
  uVar1 = *(undefined8 *)(lVar7 + 0x21b8);
  *(undefined8 *)(param_1 + 2000) = *(undefined8 *)(lVar7 + 0x21b0);
  *(undefined8 *)(param_1 + 0x7d8) = uVar1;
  uVar1 = *(undefined8 *)(lVar7 + 0x21c8);
  *(undefined8 *)(param_1 + 0x7e0) = *(undefined8 *)(lVar7 + 0x21c0);
  *(undefined8 *)(param_1 + 0x7e8) = uVar1;
  uVar1 = *(undefined8 *)(lVar7 + 0x21d8);
  *(undefined8 *)(param_1 + 0x7f0) = *(undefined8 *)(lVar7 + 0x21d0);
  *(undefined8 *)(param_1 + 0x7f8) = uVar1;
  uVar1 = *(undefined8 *)(lVar7 + 0x21e8);
  *(undefined8 *)(param_1 + 0x800) = *(undefined8 *)(lVar7 + 0x21e0);
  *(undefined8 *)(param_1 + 0x808) = uVar1;
  uVar1 = *(undefined8 *)(lVar7 + 0x21f8);
  *(undefined8 *)(param_1 + 0x810) = *(undefined8 *)(lVar7 + 0x21f0);
  *(undefined8 *)(param_1 + 0x818) = uVar1;
  uVar1 = *(undefined8 *)(lVar7 + 0x2200);
  uVar2 = *(undefined8 *)(lVar7 + 0x2208);
  *(undefined8 *)(param_1 + 0x820) = uVar1;
  *(undefined8 *)(param_1 + 0x828) = uVar2;
  *(undefined8 *)(param_1 + 0x830) = *(undefined8 *)(lVar7 + 0x2210);
  *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(lVar7 + 0x2218);
  if (*(char *)(param_1 + 0x855) == '\0') {
    *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_1 + 0x5dc);
    if ((((0.0001 < ABS(*(float *)(param_1 + 0x5b8))) || (0.0001 < ABS(*(float *)(param_1 + 0x784)))
         ) || (0.0001 < ABS(*(float *)(param_1 + 0x788)))) ||
       (0.0001 < ABS(*(float *)(param_1 + 0x78c)))) {
      cVar5 = '\x01';
    }
    else {
      cVar5 = '\0';
    }
  }
  else {
    fVar8 = *(float *)(param_1 + 0x828);
    lVar6 = *(longlong *)(lVar6 + 0x168);
    if (lVar6 == 0) {
      fVar12 = 0.0;
      fVar14 = 0.0;
      fVar13 = 0.0;
      fVar15 = 1.0;
    }
    else {
      fVar12 = *(float *)(lVar6 + 0x210);
      fVar14 = *(float *)(lVar6 + 0x214);
      fVar13 = *(float *)(lVar6 + 0x218);
      fVar15 = *(float *)(lVar6 + 0x21c);
    }
    fStack_b4 = (float)((ulonglong)uVar1 >> 0x20);
    local_b8 = (float)uVar1;
    fVar13 = -fVar13;
    fVar12 = -fVar12;
    fVar14 = -fVar14;
    fVar11 = fVar14 * fVar8 - fVar13 * fStack_b4;
    fVar9 = fVar13 * local_b8 - fVar12 * fVar8;
    fVar11 = fVar11 + fVar11;
    fVar10 = fVar12 * fStack_b4 - fVar14 * local_b8;
    fVar9 = fVar9 + fVar9;
    fVar10 = fVar10 + fVar10;
    local_ac = (fVar14 * fVar10 - fVar13 * fVar9) + fVar11 * fVar15 + local_b8;
    local_a4 = (fVar12 * fVar9 - fVar14 * fVar11) + fVar10 * fVar15 + fVar8;
    local_a8 = (fVar13 * fVar11 - fVar12 * fVar10) + fVar9 * fVar15 + fStack_b4;
    lVar6 = FVector::Rotation(&local_ac);
    *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(lVar6 + 4);
    if (((0.0001 < ABS(*(float *)(param_1 + 0x820))) || (0.0001 < ABS(*(float *)(param_1 + 0x824))))
       || (0.0001 < ABS(*(float *)(param_1 + 0x828)))) {
      cVar5 = '\x01';
    }
    else {
      cVar5 = '\0';
    }
  }
  *(char *)(param_1 + 0x84e) = cVar5;
  if (*(char *)(param_1 + 0x849) == '\0') {
    fVar12 = -90.0;
    fVar8 = 90.0;
  }
  else {
    fVar12 = -45.0;
    fVar8 = 135.0;
  }
  fVar14 = *(float *)(param_1 + 0x764);
  if ((fVar14 <= fVar12) || (fVar8 <= fVar14)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  *(bool *)(param_1 + 0x84f) = cVar5 == '\0';
  if ((cVar5 == '\0') || (!bVar3)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x84a) = uVar4;
  if ((cVar5 == '\0') || (bVar3)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x84b) = uVar4;
  if (((cVar5 == '\0') || (-45.0 <= fVar14)) || (fVar14 < -135.0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x84c) = uVar4;
  if (((cVar5 == '\0') || (fVar14 < 45.0)) || (135.0 < fVar14)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  lVar7 = lVar7 + 0x2110;
  *(undefined1 *)(param_1 + 0x84d) = uVar4;
  uVar4 = FUN_142c6a420(lVar7,1);
  *(undefined1 *)(param_1 + 0x844) = uVar4;
  uVar4 = FUN_142c6a420(lVar7,4);
  *(undefined1 *)(param_1 + 0x845) = uVar4;
  uVar4 = FUN_142c6a420(lVar7,3);
  *(undefined1 *)(param_1 + 0x846) = uVar4;
  uVar4 = FUN_142c6a420(lVar7,5);
  *(undefined1 *)(param_1 + 0x847) = uVar4;
  cVar5 = FUN_142c6a420(lVar7,6);
  if ((cVar5 == '\0') && (cVar5 = FUN_142c6a420(lVar7,8), cVar5 == '\0')) {
    cVar5 = FUN_142c6a420(lVar7,7);
    uVar4 = 0;
    if (cVar5 == '\0') goto LAB_142cd9bc6;
  }
  uVar4 = 1;
LAB_142cd9bc6:
  *(undefined1 *)(param_1 + 0x848) = uVar4;
  if (*(char *)(param_1 + 0x844) == '\0') {
    param_2 = -param_2;
  }
  fVar12 = param_2 / *(float *)(param_1 + 0x83c) + *(float *)(param_1 + 0x840);
  fVar8 = 0.0;
  if ((0.0 <= fVar12) && (fVar8 = fVar12, 1.0 <= fVar12)) {
    fVar8 = 1.0;
  }
  lVar6 = *(longlong *)(param_1 + 0x440);
  *(float *)(param_1 + 0x840) = fVar8;
  if (lVar6 == 0) {
    fVar8 = 1.0;
  }
  else {
    fVar8 = ABS(*(float *)(lVar6 + 0x234));
    if (ABS(*(float *)(lVar6 + 0x234)) <= ABS(*(float *)(lVar6 + 0x230))) {
      fVar8 = ABS(*(float *)(lVar6 + 0x230));
    }
    if (fVar8 <= ABS(*(float *)(lVar6 + 0x238))) {
      fVar8 = ABS(*(float *)(lVar6 + 0x238));
    }
  }
  *(float *)(param_1 + 0x858) = fVar8;
  return;
}



// FUNCTION 142cd9c80 FUN_142cd9c80 body=2874 status=ok
// SIG undefined FUN_142cd9c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cd9c80(longlong param_1,undefined4 param_2)

{
  float *pfVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_res8 [2];
  undefined1 local_res18 [16];
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float fStack_114;
  float local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  float local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_d8 [176];
  
  plVar13 = *(longlong **)(param_1 + 0x538);
  if (plVar13 == (longlong *)0x0) {
    return;
  }
  plVar3 = (longlong *)plVar13[0x120];
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar13 + 0x308))(plVar13,&local_138);
  puVar6 = (undefined8 *)AMAU_BehaviorPlayer::GetVelocityAnimation(plVar3,&local_f8);
  lVar11 = *(longlong *)(param_1 + 0x440);
  *(undefined8 *)(param_1 + 0x5d0) = *puVar6;
  *(undefined4 *)(param_1 + 0x5d8) = *(undefined4 *)(puVar6 + 1);
  if (lVar11 == 0) {
    local_118 = 1.0;
    fStack_114 = 1.0;
    local_110 = 1.0;
  }
  else {
    local_118 = *(float *)(lVar11 + 0x230);
    fStack_114 = *(float *)(lVar11 + 0x234);
    local_110 = *(float *)(lVar11 + 0x238);
  }
  local_f8 = CONCAT44(fStack_114,local_118);
  local_f0 = local_110;
  *(longlong *)(param_1 + 0x5e8) = plVar3[0x28a];
  *(int *)(param_1 + 0x5f0) = (int)plVar3[0x28b];
  *(float *)(param_1 + 0x5c0) = local_130;
  *(float *)(param_1 + 0x5b8) =
       SQRT((local_134 / fStack_114) * (local_134 / fStack_114) +
            (local_138 / local_118) * (local_138 / local_118));
  *(float *)(param_1 + 0x5bc) = SQRT(local_138 * local_138 + local_134 * local_134);
  cVar2 = *(char *)((longlong)plVar3 + 0x13c7);
  uVar15 = 0x7f7fffff;
  *(char *)(param_1 + 0x604) = cVar2;
  *(undefined1 *)(param_1 + 0x60c) = *(undefined1 *)((longlong)plVar3 + 0x13c5);
  if (*(char *)((longlong)plVar3 + 0x1474) == '\0') {
    uVar17 = 0x7f7fffff;
  }
  else {
    uVar17 = (undefined4)plVar3[0x28e];
  }
  *(undefined4 *)(param_1 + 0x610) = uVar17;
  if (*(char *)((longlong)plVar3 + 0x147c) != '\0') {
    uVar15 = (undefined4)plVar3[0x28f];
  }
  *(undefined4 *)(param_1 + 0x614) = uVar15;
  if (cVar2 != '\0') {
    *(int *)(param_1 + 0x608) = (int)plVar3[0x279];
  }
  FUN_142cec500(plVar3,&local_e8);
  *(undefined4 *)(param_1 + 0x618) = local_e8;
  *(undefined4 *)(param_1 + 0x61c) = local_e4;
  if ((*(char *)(param_1 + 0x630) == '\0') && (*(char *)(param_1 + 0x5a1) != '\0')) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined4 *)((longlong)plVar3 + 0x13cc);
  }
  *(undefined4 *)(param_1 + 0x620) = uVar15;
  puVar6 = (undefined8 *)FUN_142ced030(plVar3,&local_f8,1);
  lVar10 = 0;
  *(undefined8 *)(param_1 + 0x624) = *puVar6;
  uVar7 = (ulonglong)*(uint *)(puVar6 + 1);
  *(uint *)(param_1 + 0x62c) = *(uint *)(puVar6 + 1);
  local_124 = DAT_1464aa7a8._4_4_;
  local_128 = (float)DAT_1464aa7a8;
  local_120 = DAT_1464aa7b0;
  *(undefined4 *)(param_1 + 0x5dc) = 0;
  fVar18 = local_138 * local_138 + local_134 * local_134 + local_130 * local_130;
  if (1e-08 < fVar18) {
    auVar23 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
    local_res8[0] = auVar23._0_4_;
    local_res8[0] =
         local_res8[0] + local_res8[0] * (0.5 - fVar18 * 0.5 * local_res8[0] * local_res8[0]);
    local_res8[0] =
         local_res8[0] + local_res8[0] * (0.5 - fVar18 * 0.5 * local_res8[0] * local_res8[0]);
    local_138 = local_138 * local_res8[0];
    local_134 = local_134 * local_res8[0];
    local_130 = local_130 * local_res8[0];
  }
  *(float *)(param_1 + 0x5cc) = local_130;
  if (((0.0001 < ABS(local_138)) || (0.0001 < ABS(local_134))) || (0.0001 < ABS(local_130))) {
    fVar19 = local_138 * local_138 + local_134 * local_134 + local_130 * local_130;
    fVar18 = local_130;
    fVar16 = local_138;
    fVar24 = local_134;
    if (1e-08 < fVar19) {
      auVar23 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
      local_res8[0] = auVar23._0_4_;
      local_res8[0] =
           local_res8[0] + local_res8[0] * (0.5 - fVar19 * 0.5 * local_res8[0] * local_res8[0]);
      local_res8[0] =
           local_res8[0] + local_res8[0] * (0.5 - fVar19 * 0.5 * local_res8[0] * local_res8[0]);
      fVar16 = local_res8[0] * local_138;
      fVar24 = local_134 * local_res8[0];
      fVar18 = local_130 * local_res8[0];
    }
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x538) + 0x168);
    if (lVar9 == 0) {
      fVar27 = 1.0;
      fVar19 = 0.0;
      fVar26 = 0.0;
      fVar25 = 0.0;
    }
    else {
      fVar19 = *(float *)(lVar9 + 0x210);
      fVar26 = *(float *)(lVar9 + 0x214);
      fVar25 = *(float *)(lVar9 + 0x218);
      fVar27 = *(float *)(lVar9 + 0x21c);
    }
    fVar19 = -fVar19;
    fVar25 = -fVar25;
    fVar26 = -fVar26;
    fVar22 = fVar18 * fVar26 - fVar24 * fVar25;
    fVar20 = fVar16 * fVar25 - fVar18 * fVar19;
    fVar22 = fVar22 + fVar22;
    fVar21 = fVar24 * fVar19 - fVar16 * fVar26;
    fVar20 = fVar20 + fVar20;
    fVar21 = fVar21 + fVar21;
    local_128 = (fVar26 * fVar21 - fVar25 * fVar20) + fVar22 * fVar27 + fVar16;
    local_120 = (fVar19 * fVar20 - fVar26 * fVar22) + fVar21 * fVar27 + fVar18;
    local_124 = (fVar25 * fVar22 - fVar19 * fVar21) + fVar20 * fVar27 + fVar24;
    uVar7 = FVector::Rotation(&local_128,&local_f8);
    fVar18 = *(float *)(uVar7 + 4);
    *(float *)(param_1 + 0x5dc) = fVar18;
    if (0.0 <= fVar18) goto LAB_142cda02c;
    fVar18 = fVar18 + 180.0;
  }
  else {
    fVar18 = 0.0;
LAB_142cda02c:
    fVar18 = fVar18 - 180.0;
  }
  plVar13 = *(longlong **)(param_1 + 0x538);
  *(float *)(param_1 + 0x5e4) = fVar18;
  *(float *)(param_1 + 0x5c4) = local_128;
  *(float *)(param_1 + 0x5c8) = local_124;
  lVar9 = plVar13[0x2d];
  if (lVar9 == 0) {
    uVar15 = (undefined4)DAT_1468b5da0;
    uVar17 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_f0 = DAT_1468b5da8;
  }
  else {
    local_108 = *(float *)(lVar9 + 0x210);
    fStack_104 = *(float *)(lVar9 + 0x214);
    fStack_100 = *(float *)(lVar9 + 0x218);
    fStack_fc = *(float *)(lVar9 + 0x21c);
    auVar23._4_4_ = -(uint)(*(float *)(lVar9 + 0x254) != fStack_104);
    auVar23._0_4_ = -(uint)(*(float *)(lVar9 + 0x250) != local_108);
    auVar23._8_4_ = -(uint)(*(float *)(lVar9 + 600) != fStack_100);
    auVar23._12_4_ = -(uint)(*(float *)(lVar9 + 0x25c) != fStack_fc);
    iVar5 = movmskps((int)uVar7,auVar23);
    if (iVar5 != 0) {
      *(float *)(lVar9 + 0x250) = local_108;
      *(float *)(lVar9 + 0x254) = fStack_104;
      *(float *)(lVar9 + 600) = fStack_100;
      *(float *)(lVar9 + 0x25c) = fStack_fc;
      puVar6 = (undefined8 *)FQuat::Rotator(&local_108,&local_f8);
      *(undefined8 *)(lVar9 + 0x260) = *puVar6;
      *(undefined4 *)(lVar9 + 0x268) = *(undefined4 *)(puVar6 + 1);
      plVar13 = *(longlong **)(param_1 + 0x538);
    }
    uVar15 = (undefined4)*(undefined8 *)(lVar9 + 0x260);
    uVar17 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x260) >> 0x20);
    local_f0 = *(float *)(lVar9 + 0x268);
  }
  local_f8 = CONCAT44(uVar17,uVar15);
  *(undefined4 *)(param_1 + 0x5e0) = uVar17;
  (**(code **)(*plVar13 + 0x578))(uVar17,local_res8,local_res18);
  plVar13 = *(longlong **)(param_1 + 0x538);
  *(float *)(param_1 + 0x600) = local_res8[0];
  lVar9 = plVar13[0x2d];
  if (lVar9 == 0) {
    local_f0 = DAT_1468b5d98;
    pfVar8 = (float *)&local_f8;
    local_f8 = _DAT_1468b5d90;
  }
  else {
    pfVar8 = &local_118;
    local_118 = *(float *)(lVar9 + 0x220);
    local_110 = *(float *)(lVar9 + 0x228);
    fStack_114 = *(float *)(lVar9 + 0x224);
  }
  fVar18 = pfVar8[2];
  *(undefined8 *)(param_1 + 0x5f4) = *(undefined8 *)pfVar8;
  *(float *)(param_1 + 0x5fc) = fVar18;
  (**(code **)(*plVar13 + 0x578))(plVar13,local_res18,local_res8);
  *(float *)(param_1 + 0x5fc) = *(float *)(param_1 + 0x5fc) - local_res8[0];
  uVar4 = (**(code **)(*plVar3 + 0xc08))(plVar3);
  *(undefined1 *)(param_1 + 0x5a2) = uVar4;
  uVar4 = (**(code **)(*plVar3 + 0x550))(plVar3);
  *(undefined1 *)(param_1 + 0x5a3) = uVar4;
  uVar4 = (**(code **)(*plVar3 + 0xc80))(plVar3);
  *(undefined1 *)(param_1 + 0x5a4) = uVar4;
  if (((*(char *)(param_1 + 0x5a2) == '\0') ||
      (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x308))
                         (*(longlong **)(param_1 + 0x538),&local_f8),
      -10.0 < *(float *)(lVar9 + 8) || *(float *)(lVar9 + 8) == -10.0)) ||
     ((ulonglong)(DAT_1468c21b0 - plVar3[0x444]) < 0xb)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  lVar9 = *(longlong *)(param_1 + 0x538);
  *(undefined1 *)(param_1 + 0x5a5) = uVar4;
  *(undefined1 *)(param_1 + 0x5a6) = *(undefined1 *)((longlong)plVar3 + 0xea1);
  *(undefined1 *)(param_1 + 0x5a7) = *(undefined1 *)(lVar9 + 0xa38);
  if (*(longlong *)(param_1 + 0x598) == 0) {
    lVar14 = lVar10;
    if (lVar9 != 0) {
      lVar14 = *(longlong *)(lVar9 + 0x900);
    }
    lVar9 = lVar10;
    if (lVar14 != 0) {
      lVar9 = *(longlong *)(lVar14 + 0x11f0);
    }
    *(longlong *)(param_1 + 0x598) = lVar9;
    if (lVar9 != 0) goto LAB_142cda4cf;
  }
  else {
LAB_142cda4cf:
    lVar9 = FUN_140eaf760();
    if (lVar9 != 0) {
      lVar10 = FUN_142dcc050(*(undefined8 *)(param_1 + 0x598),lVar9);
      if (*(longlong *)(lVar9 + 0x68) != 0) {
        lVar9 = *(longlong *)(lVar9 + 0x68);
      }
    }
    FUN_142cd02e0(param_1,lVar9,lVar10);
  }
  FUN_142cd9760(param_1,param_2);
  pfVar8 = (float *)(param_1 + 0x54c);
  *(int *)(param_1 + 0x5ac) = (int)plVar3[0x4f];
  pfVar1 = (float *)(param_1 + 0x540);
  *(undefined4 *)(param_1 + 0x5b4) = *(undefined4 *)((longlong)plVar3 + 0x284);
  uVar15 = FUN_142cee1f0(plVar3,pfVar1,pfVar8,param_1 + 0x558);
  *(undefined4 *)(param_1 + 0x55c) = uVar15;
  if ((char)plVar3[0x29a] != '\0') {
    *pfVar1 = *(float *)((longlong)plVar3 + 0x14c4) + *pfVar1;
    *(float *)(param_1 + 0x544) = *(float *)(plVar3 + 0x299) + *(float *)(param_1 + 0x544);
    *(float *)(param_1 + 0x548) =
         *(float *)((longlong)plVar3 + 0x14cc) + *(float *)(param_1 + 0x548);
  }
  if ((char)plVar3[0x29c] != '\0') {
    *pfVar8 = *(float *)((longlong)plVar3 + 0x14d4) + *pfVar8;
    *(float *)(param_1 + 0x550) = *(float *)(plVar3 + 0x29b) + *(float *)(param_1 + 0x550);
    *(float *)(param_1 + 0x554) =
         *(float *)((longlong)plVar3 + 0x14dc) + *(float *)(param_1 + 0x554);
  }
  if (((lVar11 == 0) || (lVar11 = *(longlong *)(lVar11 + 0x12a8), lVar11 == 0)) ||
     (*(char *)(lVar11 + 0x164) == '\0')) {
    fVar18 = *(float *)((longlong)plVar3 + 0x14bc);
    if ((char)plVar3[0x298] != '\0') goto LAB_142cda618;
LAB_142cda6ec:
    bVar12 = false;
  }
  else {
    fVar18 = *(float *)(lVar11 + 0x160);
LAB_142cda618:
    if (180.0 <= fVar18) goto LAB_142cda6ec;
    FUN_142ced180(plVar3,&local_118,2);
    local_108 = *pfVar1 - local_118;
    fStack_104 = *(float *)(param_1 + 0x544) - fStack_114;
    fStack_100 = *(float *)(param_1 + 0x548) - local_110;
    local_f8 = CONCAT44(*(float *)(param_1 + 0x550) - fStack_114,*pfVar8 - local_118);
    local_f0 = *(float *)(param_1 + 0x554) - local_110;
    lVar11 = FQuat::FindBetweenVectors(local_d8,&local_f8,&local_108);
    fVar16 = *(float *)(lVar11 + 0xc);
    if (-1.0 <= fVar16) {
      if (1.0 <= fVar16) {
        fVar16 = 1.0;
      }
    }
    else {
      fVar16 = -1.0;
    }
    fVar16 = _guard_xfg_dispatch_icall_nop(fVar16);
    bVar12 = fVar18 < ABS(fVar16 * 114.59155);
    if ((*(char *)(param_1 + 0x561) == '\0') && (bVar12)) {
      uVar4 = 1;
      goto LAB_142cda6f0;
    }
  }
  uVar4 = 0;
LAB_142cda6f0:
  *(undefined1 *)(param_1 + 0x560) = uVar4;
  *(bool *)(param_1 + 0x561) = bVar12;
  *(undefined4 *)(param_1 + 0x8b0) = *(undefined4 *)((longlong)plVar3 + 0x2284);
  *(undefined4 *)(param_1 + 0x8b4) = *(undefined4 *)((longlong)plVar3 + 0x22f4);
  *(int *)(param_1 + 0x8b8) = (int)plVar3[0x480];
  FUN_142cd83e0(param_1,param_2);
  if (*(float *)(param_1 + 0x928) == -1.0) {
    *(undefined4 *)(param_1 + 0x920) = *(undefined4 *)(param_1 + 0x924);
  }
  else {
    uVar15 = FMath::FInterpConstantTo
                       (*(undefined4 *)(param_1 + 0x920),*(undefined4 *)(param_1 + 0x924),param_2);
    *(undefined4 *)(param_1 + 0x920) = uVar15;
  }
  return;
}



// FUNCTION 142cda7c0 FUN_142cda7c0 body=128 status=ok
// SIG undefined FUN_142cda7c0(void)

void FUN_142cda7c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined2 *puVar3;
  byte bVar4;
  undefined1 local_18 [16];
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0x108) == '\0')) {
    puVar3 = (undefined2 *)(param_1 + 0x109);
    bVar4 = 0;
    do {
      cVar2 = FUN_142cf1310(param_2,bVar4);
      if (cVar2 == '\0') {
        *puVar3 = 0xffff;
      }
      else {
        uVar1 = FUN_142ced280(param_2,local_18,bVar4);
        FUN_142ccee70(puVar3,uVar1);
      }
      bVar4 = bVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (bVar4 < 3);
  }
  return;
}



// FUNCTION 142cda840 FUN_142cda840 body=979 status=ok
// SIG undefined FUN_142cda840(void)

void FUN_142cda840(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 local_res8 [8];
  undefined4 uVar18;
  undefined4 uVar19;
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  iVar9 = *(int *)(param_1 + 0x488);
  if (iVar9 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
      iVar9 = *(int *)(param_1 + 0x488);
    }
    fVar1 = *(float *)(lVar5 + 0x790);
    uVar8 = 0;
    local_98 = 0.0;
    fStack_94 = 0.0;
    local_90 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar15 = 0.0;
    if (0 < iVar9) {
      uVar10 = uVar8;
      do {
        iVar9 = (int)uVar10;
        lVar5 = *(longlong *)(param_1 + 0x480);
        fVar12 = *(float *)(uVar8 + 4 + lVar5);
        fVar2 = *(float *)(uVar8 + 0x14 + lVar5);
        fVar14 = fVar1 - *(float *)(uVar8 + lVar5);
        if (fVar14 < fVar12 + fVar2) {
          if (fVar12 < fVar14) {
            if (0.0 < fVar2) {
              local_res8[0] = *(undefined1 *)(uVar8 + 0x18 + lVar5);
              uVar18 = *(undefined4 *)(uVar8 + 0x1c + lVar5);
              uVar13 = 0;
              uVar19 = *(undefined4 *)(uVar8 + 0x20 + lVar5);
              uVar11 = 0x3f800000;
              fVar14 = (fVar14 - fVar12) / fVar2;
              goto LAB_142cda9dd;
            }
          }
          else if (0.0 < fVar12) {
            local_res8[0] = *(undefined1 *)(uVar8 + 8 + lVar5);
            uVar18 = *(undefined4 *)(uVar8 + 0xc + lVar5);
            uVar19 = *(undefined4 *)(uVar8 + 0x10 + lVar5);
            uVar11 = 0;
            fVar14 = fVar14 / fVar12;
            uVar13 = 0x3f800000;
LAB_142cda9dd:
            fVar12 = (float)UKismetMathLibrary::Ease(uVar11,uVar13,fVar14,local_res8,uVar18,uVar19);
            if (0.0 < fVar12) {
              local_98 = local_98 + fVar12 * *(float *)(uVar8 + 0x24 + lVar5);
              fStack_94 = fStack_94 + *(float *)(uVar8 + 0x28 + lVar5) * fVar12;
              local_90 = local_90 + *(float *)(uVar8 + 0x2c + lVar5) * fVar12;
              fVar16 = fVar16 + fVar12 * *(float *)(uVar8 + 0x30 + lVar5);
              fVar17 = fVar17 + fVar12 * *(float *)(uVar8 + 0x34 + lVar5);
              fVar15 = fVar15 + fVar12 * *(float *)(uVar8 + 0x38 + lVar5);
            }
          }
        }
        else {
          iVar7 = *(int *)(param_1 + 0x488);
          iVar6 = (iVar7 - iVar9) + -1;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          if (iVar6 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar9 * 0x3c + lVar5),
                       (void *)((longlong)(iVar7 - iVar6) * 0x3c + lVar5),(longlong)iVar6 * 0x3c);
            iVar7 = *(int *)(param_1 + 0x488);
          }
          iVar9 = iVar9 + -1;
          *(int *)(param_1 + 0x488) = iVar7 + -1;
          uVar8 = uVar8 - 0x3c;
        }
        uVar10 = (ulonglong)(iVar9 + 1U);
        uVar8 = uVar8 + 0x3c;
      } while ((int)(iVar9 + 1U) < *(int *)(param_1 + 0x488));
    }
    fVar1 = *(float *)(param_1 + 0x34c);
    fVar12 = -fVar1;
    if ((-fVar1 <= local_98) && (fVar12 = local_98, fVar1 <= local_98)) {
      fVar12 = fVar1;
    }
    local_98 = fVar12;
    fVar1 = *(float *)(param_1 + 0x350);
    fVar12 = -fVar1;
    if ((-fVar1 <= fStack_94) && (fVar12 = fStack_94, fVar1 <= fStack_94)) {
      fVar12 = fVar1;
    }
    fStack_94 = fVar12;
    fVar1 = *(float *)(param_1 + 0x354);
    fVar12 = -fVar1;
    if ((-fVar1 <= local_90) && (fVar12 = local_90, fVar1 <= local_90)) {
      fVar12 = fVar1;
    }
    local_90 = fVar12;
    fVar1 = *(float *)(param_1 + 0x340);
    fVar12 = -fVar1;
    if ((fVar12 <= fVar16) && (fVar12 = fVar16, fVar1 <= fVar16)) {
      fVar12 = fVar1;
    }
    fVar1 = *(float *)(param_1 + 0x344);
    fVar16 = -fVar1;
    if ((fVar16 <= fVar17) && (fVar16 = fVar17, fVar1 <= fVar17)) {
      fVar16 = fVar1;
    }
    fVar1 = *(float *)(param_1 + 0x348);
    fVar17 = -fVar1;
    if ((fVar17 <= fVar15) && (fVar17 = fVar15, fVar1 <= fVar15)) {
      fVar17 = fVar1;
    }
    FRotator::Quaternion(&local_98,&local_88);
    auVar3._4_4_ = DAT_1464aa788._4_4_;
    auVar3._0_4_ = (undefined4)DAT_1464aa788;
    auVar3._8_4_ = DAT_1464aa790;
    auVar3._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x3f0) = auVar3;
    *(undefined8 *)(param_1 + 0x3d0) = local_88;
    *(undefined8 *)(param_1 + 0x3d8) = uStack_80;
    auVar4._4_4_ = fVar16;
    auVar4._0_4_ = fVar12;
    auVar4._8_4_ = fVar17;
    auVar4._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x3e0) = auVar4;
  }
  return;
}



// FUNCTION 142cdac20 FUN_142cdac20 body=526 status=ok
// SIG undefined FUN_142cdac20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cdac20(longlong param_1,undefined4 param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_38 [48];
  
  if (0.0 < *(float *)(param_1 + 0x338)) {
    pfVar1 = (float *)(param_1 + 0x400);
    if (*(char *)(param_1 + 0x470) == '\0') {
      puVar8 = (undefined8 *)
               FMath::RInterpConstantTo
                         (local_38,pfVar1,param_1 + 0x474,param_2,*(float *)(param_1 + 0x338));
      *(undefined8 *)pfVar1 = *puVar8;
      uVar2 = *(undefined4 *)(puVar8 + 1);
      *(undefined4 *)(param_1 + 0x408) = uVar2;
      fVar3 = (float)DAT_146b30e60;
      fVar4 = DAT_146b30e60._4_4_;
      fVar5 = DAT_146b30e60._8_4_;
      fVar6 = DAT_146b30e60._12_4_;
      fVar15 = *(float *)(param_1 + 0x474) - *pfVar1;
      fVar9 = *(float *)(param_1 + 0x47c) - *(float *)(param_1 + 0x408);
      fVar13 = *(float *)(param_1 + 0x478) - *(float *)(param_1 + 0x404);
      auVar10._4_4_ = fVar13;
      auVar10._0_4_ = fVar15;
      auVar10._8_4_ = fVar9;
      auVar10._12_4_ = 0;
      auVar10 = divps(auVar10,_DAT_146b30e60);
      fVar15 = fVar15 - (float)(int)auVar10._0_4_ * fVar3;
      fVar13 = fVar13 - (float)(int)auVar10._4_4_ * fVar4;
      fVar9 = fVar9 - (float)(int)auVar10._8_4_ * fVar5;
      fVar15 = (float)(-(uint)(0.0 <= fVar15) & ((uint)(fVar3 + fVar15) ^ (uint)fVar15) ^
                      (uint)(fVar3 + fVar15));
      fVar13 = (float)(-(uint)(0.0 <= fVar13) & ((uint)(fVar4 + fVar13) ^ (uint)fVar13) ^
                      (uint)(fVar4 + fVar13));
      fVar14 = (float)(-(uint)(0.0 <= fVar9) & ((uint)(fVar5 + fVar9) ^ (uint)fVar9) ^
                      (uint)(fVar5 + fVar9));
      fVar15 = (float)(((uint)(fVar15 - fVar3) ^ (uint)fVar15) & -(uint)(_DAT_146b30e50 < fVar15) ^
                      (uint)fVar15);
      fVar13 = (float)(((uint)(fVar13 - fVar4) ^ (uint)fVar13) &
                       -(uint)(fRam0000000146b30e54 < fVar13) ^ (uint)fVar13);
      fVar14 = (float)(((uint)(fVar14 - fVar5) ^ (uint)fVar14) &
                       -(uint)(fRam0000000146b30e58 < fVar14) ^ (uint)fVar14);
      auVar11._4_4_ = fVar13;
      auVar11._0_4_ = fVar15;
      auVar11._8_4_ = fVar14;
      auVar11._12_4_ = 0;
      auVar10 = divps(auVar11,_DAT_146b30e60);
      fVar15 = fVar15 - (float)(int)auVar10._0_4_ * fVar3;
      fVar13 = fVar13 - (float)(int)auVar10._4_4_ * fVar4;
      fVar14 = fVar14 - (float)(int)auVar10._8_4_ * fVar5;
      fVar16 = 0.0 - (float)(int)auVar10._12_4_ * fVar6;
      fVar9 = (float)(((uint)(fVar15 + fVar3) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                     (uint)(fVar15 + fVar3));
      fVar13 = (float)(((uint)(fVar13 + fVar4) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                      (uint)(fVar13 + fVar4));
      fVar15 = (float)(((uint)(fVar14 + fVar5) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                      (uint)(fVar14 + fVar5));
      fVar14 = (float)(((uint)(fVar16 + fVar6) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                      (uint)(fVar16 + fVar6));
      auVar12._4_4_ =
           -(uint)(0.001 < (float)((((uint)(fVar13 - fVar4) ^ (uint)fVar13) &
                                    -(uint)(fRam0000000146b30e54 < fVar13) ^ (uint)fVar13) &
                                  uRam0000000146b30f34));
      auVar12._0_4_ =
           -(uint)(0.001 < (float)((((uint)(fVar9 - fVar3) ^ (uint)fVar9) &
                                    -(uint)(_DAT_146b30e50 < fVar9) ^ (uint)fVar9) & _DAT_146b30f30)
                  );
      auVar12._8_4_ =
           -(uint)(0.001 < (float)((((uint)(fVar15 - fVar5) ^ (uint)fVar15) &
                                    -(uint)(fRam0000000146b30e58 < fVar15) ^ (uint)fVar15) &
                                  uRam0000000146b30f38));
      auVar12._12_4_ =
           -(uint)(0.001 < (float)((((uint)(fVar14 - fVar6) ^ (uint)fVar14) &
                                    -(uint)(fRam0000000146b30e5c < fVar14) ^ (uint)fVar14) &
                                  uRam0000000146b30f3c));
      iVar7 = movmskps(uVar2,auVar12);
      if (iVar7 == 0) {
        *(undefined1 *)(param_1 + 0x470) = 1;
      }
    }
    else if ((((float)DAT_1468b5da0 != *pfVar1) ||
             (DAT_1468b5da0._4_4_ != *(float *)(param_1 + 0x404))) ||
            (DAT_1468b5da8 != *(float *)(param_1 + 0x408))) {
      puVar8 = (undefined8 *)
               FMath::RInterpTo(local_38,pfVar1,&DAT_1468b5da0,param_2,
                                *(undefined4 *)(param_1 + 0x33c));
      *(undefined8 *)pfVar1 = *puVar8;
      *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(puVar8 + 1);
      return;
    }
  }
  return;
}



// FUNCTION 142cdae30 FUN_142cdae30 body=558 status=ok
// SIG undefined FUN_142cdae30(void)

ulonglong FUN_142cdae30(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res10 [2];
  undefined1 local_res18 [8];
  float local_118;
  float local_114;
  float local_110;
  uint local_108 [4];
  undefined1 local_f8 [12];
  undefined4 local_ec;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  
  uVar5 = FUN_142cbb8e0();
  if ((char)uVar5 != '\0') {
    uVar5 = 0;
    if ((((*(byte *)(param_1 + 3) & 1) == 0) && ((*(byte *)(param_1 + 3) & 2) != 0)) &&
       (uVar5 = (**(code **)(*(longlong *)*param_1 + 0x5c0))(), (char)uVar5 != '\0')) {
      FUN_142cc5660(param_1 + 4,&local_118);
      fVar7 = 0.0;
      lVar1 = *(longlong *)(*param_1 + 0x178);
      plVar2 = *(longlong **)(*param_1 + 0xfd8);
      lVar3 = param_1[2];
      fVar4 = *(float *)(lVar1 + 0x228);
      local_118 = local_118 - *(float *)(lVar1 + 0x220);
      local_114 = local_114 - *(float *)(lVar1 + 0x224);
      if (*(char *)((longlong)plVar2 + 0x95) == '\x02') {
        fVar7 = *(float *)(lVar3 + 0x204);
      }
      fVar8 = (float)*(int *)(lVar3 + 0x188) + *(float *)(param_1[1] + 0x50);
      if (fVar8 <= *(float *)(lVar3 + 0x200)) {
        fVar8 = *(float *)(lVar3 + 0x200);
      }
      uVar5 = (**(code **)(*plVar2 + 0x578))(plVar2,local_res18,local_res10);
      fVar6 = (fVar4 - local_res10[0]) + *(float *)(lVar3 + 400) + local_res10[0] * 2.0;
      if (fVar6 <= *(float *)(lVar3 + 0x1fc)) {
        fVar6 = *(float *)(lVar3 + 0x1fc);
      }
      if ((ABS(local_110 - fVar4) <= fVar6 * (fVar7 + 1.0)) &&
         (SQRT(local_114 * local_114 + local_118 * local_118) <= (fVar7 + 1.0) * fVar8)) {
        local_108[0] = local_108[0] & 0xfffffff8;
        local_108[1] = 0;
        local_108[2] = 0;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_94 = 0xffffffff;
        local_8c = 0xffffffff;
        local_84 = 0xffffffff;
        _guard_xfg_dispatch_icall_nop(local_f8,0,0x90);
        local_ec = 0x3f800000;
        (**(code **)(*(longlong *)*param_1 + 0x870))((longlong *)*param_1,&local_118,local_108,0,0);
        uVar5 = 0;
        if (((byte)local_108[0] & 3) == 3) {
          return 1;
        }
      }
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 142cdb060 FUN_142cdb060 body=99 status=ok
// SIG undefined FUN_142cdb060(void)

undefined8 FUN_142cdb060(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x678))();
    if (lVar2 != 0) {
      lVar3 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return *(undefined8 *)(lVar2 + 0x900);
      }
    }
  }
  return 0;
}



// FUNCTION 142cdb0d0 FUN_142cdb0d0 body=181 status=ok
// SIG undefined FUN_142cdb0d0(void)

void FUN_142cdb0d0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x900);
  if (plVar1 != (longlong *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b31590) {
      _Init_thread_header(&DAT_146b31590);
      if (DAT_146b31590 == -1) {
        FName::FName(&DAT_146b31588,L"Attached",1);
        _Init_thread_footer(&DAT_146b31590);
      }
    }
    (**(code **)(*plVar1 + 0x5a0))(plVar1,0,0);
    FUN_142dafbc0(plVar1 + 0x116,&DAT_146b31588);
    FUN_142dafbc0(plVar1 + 0x129,&DAT_146b31588);
    return;
  }
  return;
}



// FUNCTION 142cdb190 FUN_142cdb190 body=239 status=ok
// SIG undefined FUN_142cdb190(void)

void FUN_142cdb190(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_144318830;
    FWeakObjectPtr::operator=(plVar2 + 1,param_2);
    *(undefined4 *)(plVar2 + 2) = local_18;
    *(undefined4 *)((longlong)plVar2 + 0x14) = uStack_14;
    *(undefined4 *)(plVar2 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_144318878;
  }
  if ((longlong *)&local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 142cdb280 FUN_142cdb280 body=689 status=ok
// SIG undefined FUN_142cdb280(void)

int * FUN_142cdb280(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint *_Src;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar7 = 1;
  iVar15 = -1;
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
    iVar9 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar11;
  lVar5 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar16 = false;
  puVar14 = (uint *)((longlong)plVar6 + lVar5);
  *puVar14 = *puVar14 | 1 << ((byte)iVar11 & 0x1f);
  puVar14 = (uint *)param_3[1];
  lVar8 = (longlong)iVar11 * 0x20;
  _Src = (uint *)(*param_1 + lVar8);
  *_Src = *(uint *)*param_3;
  uVar13 = puVar14[1];
  uVar4 = puVar14[2];
  uVar3 = puVar14[3];
  _Src[1] = *puVar14;
  _Src[2] = uVar13;
  _Src[3] = uVar4;
  _Src[4] = uVar3;
  _Src[5] = puVar14[4];
  _Src[6] = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar15;
    if (uVar13 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*_Src) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(uint *)((longlong)iVar9 * 0x20 + *param_1) == *_Src) break;
          iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *param_1);
          iVar10 = iVar15;
        } while (iVar9 != -1);
      }
    }
    bVar16 = iVar10 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar10 * 0x20 + *param_1),_Src,0x18);
      bVar2 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar11;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar8 + lVar1) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar8 + 4 + lVar1) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar6 + lVar5);
      *puVar14 = *puVar14 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_142cdb50c;
    }
  }
  if (3 < uVar13) {
    uVar4 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar15;
    }
    uVar4 = (uVar13 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar15;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar13 = (int)param_1[9] - 1U & *_Src;
    _Src[7] = uVar13;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    _Src[6] = *(uint *)((longlong)plVar6 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142cdb50c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 142cdb540 FUN_142cdb540 body=783 status=ok
// SIG undefined FUN_142cdb540(void)

int * FUN_142cdb540(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  char cVar11;
  uint uVar12;
  uint *_Src;
  int iVar13;
  bool local_res8;
  
  iVar8 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)((longlong)iVar9 * 0xa0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar10 * 0xa0 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  puVar1 = (uint *)param_3[1];
  _Src = (uint *)((longlong)iVar9 * 0xa0 + *param_1);
  *_Src = *(uint *)*param_3;
  uVar12 = puVar1[1];
  uVar5 = puVar1[2];
  uVar3 = puVar1[3];
  _Src[2] = *puVar1;
  _Src[3] = uVar12;
  _Src[4] = uVar5;
  _Src[5] = uVar3;
  uVar12 = puVar1[5];
  uVar5 = puVar1[6];
  uVar3 = puVar1[7];
  _Src[6] = puVar1[4];
  _Src[7] = uVar12;
  _Src[8] = uVar5;
  _Src[9] = uVar3;
  FRichCurve::FRichCurve(_Src + 10,puVar1 + 8);
  _Src[0x26] = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar12 != 1) {
    iVar9 = iVar13;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar6 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)*_Src) * 4);
      if (iVar10 != -1) {
        do {
          iVar9 = iVar10;
          if (*(uint *)((longlong)iVar10 * 0xa0 + *param_1) == *_Src) break;
          iVar10 = *(int *)((longlong)iVar10 * 0xa0 + 0x98 + *param_1);
          iVar9 = iVar13;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar9 * 0xa0 + *param_1);
      FRichCurve::~FRichCurve((longlong)_Dst + 0x28);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x98);
      iVar8 = *param_2;
      bVar2 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xa0 + *param_1) = iVar8;
      }
      puVar7 = (undefined4 *)((longlong)iVar8 * 0xa0 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      puVar7[1] = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_142cdb82b;
    }
  }
  if (3 < uVar12) {
    uVar5 = (uVar12 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar11 = '\0';
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar13;
    }
    uVar5 = (uVar12 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar11 = '\x1f' - (char)iVar13;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar12 = (int)param_1[9] - 1U & *_Src;
    _Src[0x27] = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    _Src[0x26] = *(uint *)((longlong)plVar6 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    FUN_142cfd950(param_1);
  }
LAB_142cdb82b:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142cdb850 FUN_142cdb850 body=126 status=ok
// SIG undefined FUN_142cdb850(void)

longlong * FUN_142cdb850(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  plVar3 = (longlong *)*param_1;
  plVar1 = plVar3 + (int)param_1[1];
  while( true ) {
    if (plVar3 == plVar1) {
      return (longlong *)0x0;
    }
    if (((undefined8 *)*plVar3 != (undefined8 *)0x0) &&
       (plVar2 = (longlong *)
                 FUN_142c9fb20(**(undefined8 **)(param_2 + 0x2420),local_res8,*(undefined8 *)*plVar3
                              ), *plVar2 == DAT_146b31740)) break;
    plVar3 = plVar3 + 1;
  }
  return plVar3;
}



// FUNCTION 142cdb8d0 FUN_142cdb8d0 body=126 status=ok
// SIG undefined FUN_142cdb8d0(void)

longlong * FUN_142cdb8d0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  plVar3 = (longlong *)*param_1;
  plVar1 = plVar3 + (int)param_1[1];
  while( true ) {
    if (plVar3 == plVar1) {
      return (longlong *)0x0;
    }
    if (((undefined8 *)*plVar3 != (undefined8 *)0x0) &&
       (plVar2 = (longlong *)
                 FUN_142c9fb20(**(undefined8 **)(param_2 + 0x2420),local_res8,*(undefined8 *)*plVar3
                              ), *plVar2 == DAT_146b31738)) break;
    plVar3 = plVar3 + 1;
  }
  return plVar3;
}



// FUNCTION 142cdb950 FUN_142cdb950 body=126 status=ok
// SIG undefined FUN_142cdb950(void)

longlong * FUN_142cdb950(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  plVar3 = (longlong *)*param_1;
  plVar1 = plVar3 + (int)param_1[1];
  while( true ) {
    if (plVar3 == plVar1) {
      return (longlong *)0x0;
    }
    if (((undefined8 *)*plVar3 != (undefined8 *)0x0) &&
       (plVar2 = (longlong *)
                 FUN_142c9fb20(**(undefined8 **)(param_2 + 0x1448),local_res8,*(undefined8 *)*plVar3
                              ), *plVar2 == DAT_146b31720)) break;
    plVar3 = plVar3 + 1;
  }
  return plVar3;
}



// FUNCTION 142cdb9d0 FUN_142cdb9d0 body=126 status=ok
// SIG undefined FUN_142cdb9d0(void)

longlong * FUN_142cdb9d0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  plVar3 = (longlong *)*param_1;
  plVar1 = plVar3 + (int)param_1[1];
  while( true ) {
    if (plVar3 == plVar1) {
      return (longlong *)0x0;
    }
    if (((undefined8 *)*plVar3 != (undefined8 *)0x0) &&
       (plVar2 = (longlong *)
                 FUN_142c9fb20(**(undefined8 **)(param_2 + 0x1448),local_res8,*(undefined8 *)*plVar3
                              ), *plVar2 == DAT_146b31728)) break;
    plVar3 = plVar3 + 1;
  }
  return plVar3;
}



// FUNCTION 142cdba50 FUN_142cdba50 body=1086 status=ok
// SIG undefined FUN_142cdba50(void)

void FUN_142cdba50(undefined8 *param_1,int param_2,undefined8 param_3,float *param_4)

{
  undefined8 uVar1;
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
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  
  iVar20 = (param_2 + -2) / 2;
  if (-1 < iVar20) {
    iVar25 = iVar20 * 2 + 1;
    iVar24 = iVar25;
    iVar23 = iVar20;
joined_r0x000142cdbaa8:
    do {
      if (iVar25 < param_2) {
        iVar21 = iVar20 * 2 + 1;
        iVar25 = iVar20 * 2 + 2;
        iVar22 = iVar21;
        if ((iVar25 < param_2) &&
           (iVar22 = iVar25,
           ABS(*param_4 - *(float *)(param_1 + (longlong)iVar25 * 0x12 + 5)) <
           ABS(*param_4 - *(float *)(param_1 + (longlong)iVar21 * 0x12 + 5)))) {
          iVar22 = iVar21;
        }
        puVar27 = param_1 + (longlong)iVar20 * 0x12;
        puVar26 = param_1 + (longlong)iVar22 * 0x12;
        if (ABS(*param_4 - *(float *)(puVar27 + 5)) < ABS(*param_4 - *(float *)(puVar26 + 5))) {
          if (puVar27 != puVar26) {
            uVar1 = puVar26[1];
            uVar2 = *puVar27;
            uVar3 = puVar27[1];
            uVar4 = puVar27[2];
            uVar5 = puVar27[3];
            uVar6 = puVar27[4];
            uVar7 = puVar27[5];
            uVar8 = puVar27[6];
            uVar9 = puVar27[7];
            uVar10 = puVar27[8];
            uVar11 = puVar27[9];
            uVar12 = puVar27[10];
            uVar13 = puVar27[0xb];
            uVar14 = puVar27[0xc];
            uVar15 = puVar27[0xd];
            uVar16 = puVar27[0xe];
            uVar17 = puVar27[0xf];
            uVar18 = puVar27[0x10];
            uVar19 = puVar27[0x11];
            *puVar27 = *puVar26;
            puVar27[1] = uVar1;
            uVar1 = puVar26[3];
            puVar27[2] = puVar26[2];
            puVar27[3] = uVar1;
            uVar1 = puVar26[5];
            puVar27[4] = puVar26[4];
            puVar27[5] = uVar1;
            uVar1 = puVar26[7];
            puVar27[6] = puVar26[6];
            puVar27[7] = uVar1;
            uVar1 = puVar26[9];
            puVar27[8] = puVar26[8];
            puVar27[9] = uVar1;
            uVar1 = puVar26[0xb];
            puVar27[10] = puVar26[10];
            puVar27[0xb] = uVar1;
            uVar1 = puVar26[0xd];
            puVar27[0xc] = puVar26[0xc];
            puVar27[0xd] = uVar1;
            uVar1 = puVar26[0xf];
            puVar27[0xe] = puVar26[0xe];
            puVar27[0xf] = uVar1;
            uVar1 = puVar26[0x11];
            puVar27[0x10] = puVar26[0x10];
            puVar27[0x11] = uVar1;
            *puVar26 = uVar2;
            puVar26[1] = uVar3;
            puVar26[2] = uVar4;
            puVar26[3] = uVar5;
            puVar26[4] = uVar6;
            puVar26[5] = uVar7;
            puVar26[6] = uVar8;
            puVar26[7] = uVar9;
            puVar26[8] = uVar10;
            puVar26[9] = uVar11;
            puVar26[10] = uVar12;
            puVar26[0xb] = uVar13;
            puVar26[0xc] = uVar14;
            puVar26[0xd] = uVar15;
            puVar26[0xe] = uVar16;
            puVar26[0xf] = uVar17;
            puVar26[0x10] = uVar18;
            puVar26[0x11] = uVar19;
          }
          iVar25 = iVar22 * 2 + 1;
          iVar20 = iVar22;
          goto joined_r0x000142cdbaa8;
        }
      }
      iVar25 = iVar24 + -2;
      iVar20 = iVar23 + -1;
      iVar24 = iVar25;
      iVar23 = iVar20;
    } while (-1 < iVar20);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar26 = param_1 + (longlong)param_2 * 0x12;
    do {
      if (param_1 != puVar26) {
        uVar1 = puVar26[1];
        uVar2 = *param_1;
        uVar3 = param_1[1];
        uVar4 = param_1[2];
        uVar5 = param_1[3];
        uVar6 = param_1[4];
        uVar7 = param_1[5];
        uVar8 = param_1[6];
        uVar9 = param_1[7];
        uVar10 = param_1[8];
        uVar11 = param_1[9];
        uVar12 = param_1[10];
        uVar13 = param_1[0xb];
        uVar14 = param_1[0xc];
        uVar15 = param_1[0xd];
        uVar16 = param_1[0xe];
        uVar17 = param_1[0xf];
        uVar18 = param_1[0x10];
        uVar19 = param_1[0x11];
        *param_1 = *puVar26;
        param_1[1] = uVar1;
        uVar1 = puVar26[3];
        param_1[2] = puVar26[2];
        param_1[3] = uVar1;
        uVar1 = puVar26[5];
        param_1[4] = puVar26[4];
        param_1[5] = uVar1;
        uVar1 = puVar26[7];
        param_1[6] = puVar26[6];
        param_1[7] = uVar1;
        uVar1 = puVar26[9];
        param_1[8] = puVar26[8];
        param_1[9] = uVar1;
        uVar1 = puVar26[0xb];
        param_1[10] = puVar26[10];
        param_1[0xb] = uVar1;
        uVar1 = puVar26[0xd];
        param_1[0xc] = puVar26[0xc];
        param_1[0xd] = uVar1;
        uVar1 = puVar26[0xf];
        param_1[0xe] = puVar26[0xe];
        param_1[0xf] = uVar1;
        uVar1 = puVar26[0x11];
        param_1[0x10] = puVar26[0x10];
        param_1[0x11] = uVar1;
        *puVar26 = uVar2;
        puVar26[1] = uVar3;
        puVar26[2] = uVar4;
        puVar26[3] = uVar5;
        puVar26[4] = uVar6;
        puVar26[5] = uVar7;
        puVar26[6] = uVar8;
        puVar26[7] = uVar9;
        puVar26[8] = uVar10;
        puVar26[9] = uVar11;
        puVar26[10] = uVar12;
        puVar26[0xb] = uVar13;
        puVar26[0xc] = uVar14;
        puVar26[0xd] = uVar15;
        puVar26[0xe] = uVar16;
        puVar26[0xf] = uVar17;
        puVar26[0x10] = uVar18;
        puVar26[0x11] = uVar19;
      }
      iVar20 = 0;
      if (1 < param_2) {
        do {
          iVar23 = iVar20 * 2 + 1;
          iVar25 = iVar20 * 2 + 2;
          iVar24 = iVar23;
          if ((iVar25 < param_2) &&
             (iVar24 = iVar25,
             ABS(*param_4 - *(float *)(param_1 + (longlong)iVar25 * 0x12 + 5)) <
             ABS(*param_4 - *(float *)(param_1 + (longlong)iVar23 * 0x12 + 5)))) {
            iVar24 = iVar23;
          }
          puVar28 = param_1 + (longlong)iVar20 * 0x12;
          puVar27 = param_1 + (longlong)iVar24 * 0x12;
          if (ABS(*param_4 - *(float *)(puVar27 + 5)) <= ABS(*param_4 - *(float *)(puVar28 + 5)))
          break;
          if (puVar28 != puVar27) {
            uVar1 = puVar27[1];
            uVar2 = *puVar28;
            uVar3 = puVar28[1];
            uVar4 = puVar28[2];
            uVar5 = puVar28[3];
            uVar6 = puVar28[4];
            uVar7 = puVar28[5];
            uVar8 = puVar28[6];
            uVar9 = puVar28[7];
            uVar10 = puVar28[8];
            uVar11 = puVar28[9];
            uVar12 = puVar28[10];
            uVar13 = puVar28[0xb];
            uVar14 = puVar28[0xc];
            uVar15 = puVar28[0xd];
            uVar16 = puVar28[0xe];
            uVar17 = puVar28[0xf];
            uVar18 = puVar28[0x10];
            uVar19 = puVar28[0x11];
            *puVar28 = *puVar27;
            puVar28[1] = uVar1;
            uVar1 = puVar27[3];
            puVar28[2] = puVar27[2];
            puVar28[3] = uVar1;
            uVar1 = puVar27[5];
            puVar28[4] = puVar27[4];
            puVar28[5] = uVar1;
            uVar1 = puVar27[7];
            puVar28[6] = puVar27[6];
            puVar28[7] = uVar1;
            uVar1 = puVar27[9];
            puVar28[8] = puVar27[8];
            puVar28[9] = uVar1;
            uVar1 = puVar27[0xb];
            puVar28[10] = puVar27[10];
            puVar28[0xb] = uVar1;
            uVar1 = puVar27[0xd];
            puVar28[0xc] = puVar27[0xc];
            puVar28[0xd] = uVar1;
            uVar1 = puVar27[0xf];
            puVar28[0xe] = puVar27[0xe];
            puVar28[0xf] = uVar1;
            uVar1 = puVar27[0x11];
            puVar28[0x10] = puVar27[0x10];
            puVar28[0x11] = uVar1;
            *puVar27 = uVar2;
            puVar27[1] = uVar3;
            puVar27[2] = uVar4;
            puVar27[3] = uVar5;
            puVar27[4] = uVar6;
            puVar27[5] = uVar7;
            puVar27[6] = uVar8;
            puVar27[7] = uVar9;
            puVar27[8] = uVar10;
            puVar27[9] = uVar11;
            puVar27[10] = uVar12;
            puVar27[0xb] = uVar13;
            puVar27[0xc] = uVar14;
            puVar27[0xd] = uVar15;
            puVar27[0xe] = uVar16;
            puVar27[0xf] = uVar17;
            puVar27[0x10] = uVar18;
            puVar27[0x11] = uVar19;
          }
          iVar20 = iVar24;
        } while (iVar24 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar26 = puVar26 + -0x12;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142cdbe90 FUN_142cdbe90 body=945 status=ok
// SIG undefined FUN_142cdbe90(void)

void FUN_142cdbe90(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
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
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  int iVar23;
  undefined8 *puVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  
  iVar20 = (param_2 + -2) / 2;
  if (-1 < iVar20) {
    iVar23 = iVar20 * 2 + 1;
    iVar28 = iVar23;
    iVar27 = iVar20;
joined_r0x000142cdbed9:
    do {
      if (iVar23 < param_2) {
        iVar25 = iVar20 * 2 + 1;
        iVar23 = iVar20 * 2 + 2;
        iVar26 = iVar25;
        if ((iVar23 < param_2) &&
           (iVar26 = iVar23,
           *(float *)(param_1 + (longlong)iVar23 * 0x12 + 5) <=
           *(float *)(param_1 + (longlong)iVar25 * 0x12 + 5) &&
           *(float *)(param_1 + (longlong)iVar25 * 0x12 + 5) !=
           *(float *)(param_1 + (longlong)iVar23 * 0x12 + 5))) {
          iVar26 = iVar25;
        }
        puVar21 = param_1 + (longlong)iVar20 * 0x12;
        puVar24 = param_1 + (longlong)iVar26 * 0x12;
        if (*(float *)(puVar21 + 5) <= *(float *)(puVar24 + 5) &&
            *(float *)(puVar24 + 5) != *(float *)(puVar21 + 5)) {
          if (puVar21 != puVar24) {
            uVar1 = puVar24[1];
            uVar2 = *puVar21;
            uVar3 = puVar21[1];
            uVar4 = puVar21[2];
            uVar5 = puVar21[3];
            uVar6 = puVar21[4];
            uVar7 = puVar21[5];
            uVar8 = puVar21[6];
            uVar9 = puVar21[7];
            uVar10 = puVar21[8];
            uVar11 = puVar21[9];
            uVar12 = puVar21[10];
            uVar13 = puVar21[0xb];
            uVar14 = puVar21[0xc];
            uVar15 = puVar21[0xd];
            uVar16 = puVar21[0xe];
            uVar17 = puVar21[0xf];
            uVar18 = puVar21[0x10];
            uVar19 = puVar21[0x11];
            *puVar21 = *puVar24;
            puVar21[1] = uVar1;
            uVar1 = puVar24[3];
            puVar21[2] = puVar24[2];
            puVar21[3] = uVar1;
            uVar1 = puVar24[5];
            puVar21[4] = puVar24[4];
            puVar21[5] = uVar1;
            uVar1 = puVar24[7];
            puVar21[6] = puVar24[6];
            puVar21[7] = uVar1;
            uVar1 = puVar24[9];
            puVar21[8] = puVar24[8];
            puVar21[9] = uVar1;
            uVar1 = puVar24[0xb];
            puVar21[10] = puVar24[10];
            puVar21[0xb] = uVar1;
            uVar1 = puVar24[0xd];
            puVar21[0xc] = puVar24[0xc];
            puVar21[0xd] = uVar1;
            uVar1 = puVar24[0xf];
            puVar21[0xe] = puVar24[0xe];
            puVar21[0xf] = uVar1;
            uVar1 = puVar24[0x11];
            puVar21[0x10] = puVar24[0x10];
            puVar21[0x11] = uVar1;
            *puVar24 = uVar2;
            puVar24[1] = uVar3;
            puVar24[2] = uVar4;
            puVar24[3] = uVar5;
            puVar24[4] = uVar6;
            puVar24[5] = uVar7;
            puVar24[6] = uVar8;
            puVar24[7] = uVar9;
            puVar24[8] = uVar10;
            puVar24[9] = uVar11;
            puVar24[10] = uVar12;
            puVar24[0xb] = uVar13;
            puVar24[0xc] = uVar14;
            puVar24[0xd] = uVar15;
            puVar24[0xe] = uVar16;
            puVar24[0xf] = uVar17;
            puVar24[0x10] = uVar18;
            puVar24[0x11] = uVar19;
          }
          iVar23 = iVar26 * 2 + 1;
          iVar20 = iVar26;
          goto joined_r0x000142cdbed9;
        }
      }
      iVar23 = iVar28 + -2;
      iVar20 = iVar27 + -1;
      iVar28 = iVar23;
      iVar27 = iVar20;
    } while (-1 < iVar20);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar24 = param_1 + (longlong)param_2 * 0x12;
    do {
      if (param_1 != puVar24) {
        uVar1 = puVar24[1];
        uVar2 = *param_1;
        uVar3 = param_1[1];
        uVar4 = param_1[2];
        uVar5 = param_1[3];
        uVar6 = param_1[4];
        uVar7 = param_1[5];
        uVar8 = param_1[6];
        uVar9 = param_1[7];
        uVar10 = param_1[8];
        uVar11 = param_1[9];
        uVar12 = param_1[10];
        uVar13 = param_1[0xb];
        uVar14 = param_1[0xc];
        uVar15 = param_1[0xd];
        uVar16 = param_1[0xe];
        uVar17 = param_1[0xf];
        uVar18 = param_1[0x10];
        uVar19 = param_1[0x11];
        *param_1 = *puVar24;
        param_1[1] = uVar1;
        uVar1 = puVar24[3];
        param_1[2] = puVar24[2];
        param_1[3] = uVar1;
        uVar1 = puVar24[5];
        param_1[4] = puVar24[4];
        param_1[5] = uVar1;
        uVar1 = puVar24[7];
        param_1[6] = puVar24[6];
        param_1[7] = uVar1;
        uVar1 = puVar24[9];
        param_1[8] = puVar24[8];
        param_1[9] = uVar1;
        uVar1 = puVar24[0xb];
        param_1[10] = puVar24[10];
        param_1[0xb] = uVar1;
        uVar1 = puVar24[0xd];
        param_1[0xc] = puVar24[0xc];
        param_1[0xd] = uVar1;
        uVar1 = puVar24[0xf];
        param_1[0xe] = puVar24[0xe];
        param_1[0xf] = uVar1;
        uVar1 = puVar24[0x11];
        param_1[0x10] = puVar24[0x10];
        param_1[0x11] = uVar1;
        *puVar24 = uVar2;
        puVar24[1] = uVar3;
        puVar24[2] = uVar4;
        puVar24[3] = uVar5;
        puVar24[4] = uVar6;
        puVar24[5] = uVar7;
        puVar24[6] = uVar8;
        puVar24[7] = uVar9;
        puVar24[8] = uVar10;
        puVar24[9] = uVar11;
        puVar24[10] = uVar12;
        puVar24[0xb] = uVar13;
        puVar24[0xc] = uVar14;
        puVar24[0xd] = uVar15;
        puVar24[0xe] = uVar16;
        puVar24[0xf] = uVar17;
        puVar24[0x10] = uVar18;
        puVar24[0x11] = uVar19;
      }
      iVar20 = 0;
      if (1 < param_2) {
        do {
          iVar27 = iVar20 * 2 + 1;
          iVar23 = iVar20 * 2 + 2;
          iVar28 = iVar27;
          if ((iVar23 < param_2) &&
             (iVar28 = iVar23,
             *(float *)(param_1 + (longlong)iVar23 * 0x12 + 5) <=
             *(float *)(param_1 + (longlong)iVar27 * 0x12 + 5) &&
             *(float *)(param_1 + (longlong)iVar27 * 0x12 + 5) !=
             *(float *)(param_1 + (longlong)iVar23 * 0x12 + 5))) {
            iVar28 = iVar27;
          }
          puVar22 = param_1 + (longlong)iVar20 * 0x12;
          puVar21 = param_1 + (longlong)iVar28 * 0x12;
          if (*(float *)(puVar21 + 5) < *(float *)(puVar22 + 5) ||
              *(float *)(puVar21 + 5) == *(float *)(puVar22 + 5)) break;
          if (puVar22 != puVar21) {
            uVar1 = puVar21[1];
            uVar2 = *puVar22;
            uVar3 = puVar22[1];
            uVar4 = puVar22[2];
            uVar5 = puVar22[3];
            uVar6 = puVar22[4];
            uVar7 = puVar22[5];
            uVar8 = puVar22[6];
            uVar9 = puVar22[7];
            uVar10 = puVar22[8];
            uVar11 = puVar22[9];
            uVar12 = puVar22[10];
            uVar13 = puVar22[0xb];
            uVar14 = puVar22[0xc];
            uVar15 = puVar22[0xd];
            uVar16 = puVar22[0xe];
            uVar17 = puVar22[0xf];
            uVar18 = puVar22[0x10];
            uVar19 = puVar22[0x11];
            *puVar22 = *puVar21;
            puVar22[1] = uVar1;
            uVar1 = puVar21[3];
            puVar22[2] = puVar21[2];
            puVar22[3] = uVar1;
            uVar1 = puVar21[5];
            puVar22[4] = puVar21[4];
            puVar22[5] = uVar1;
            uVar1 = puVar21[7];
            puVar22[6] = puVar21[6];
            puVar22[7] = uVar1;
            uVar1 = puVar21[9];
            puVar22[8] = puVar21[8];
            puVar22[9] = uVar1;
            uVar1 = puVar21[0xb];
            puVar22[10] = puVar21[10];
            puVar22[0xb] = uVar1;
            uVar1 = puVar21[0xd];
            puVar22[0xc] = puVar21[0xc];
            puVar22[0xd] = uVar1;
            uVar1 = puVar21[0xf];
            puVar22[0xe] = puVar21[0xe];
            puVar22[0xf] = uVar1;
            uVar1 = puVar21[0x11];
            puVar22[0x10] = puVar21[0x10];
            puVar22[0x11] = uVar1;
            *puVar21 = uVar2;
            puVar21[1] = uVar3;
            puVar21[2] = uVar4;
            puVar21[3] = uVar5;
            puVar21[4] = uVar6;
            puVar21[5] = uVar7;
            puVar21[6] = uVar8;
            puVar21[7] = uVar9;
            puVar21[8] = uVar10;
            puVar21[9] = uVar11;
            puVar21[10] = uVar12;
            puVar21[0xb] = uVar13;
            puVar21[0xc] = uVar14;
            puVar21[0xd] = uVar15;
            puVar21[0xe] = uVar16;
            puVar21[0xf] = uVar17;
            puVar21[0x10] = uVar18;
            puVar21[0x11] = uVar19;
          }
          iVar20 = iVar28;
        } while (iVar28 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar24 = puVar24 + -0x12;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142cdc250 FUN_142cdc250 body=1607 status=ok
// SIG undefined FUN_142cdc250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cdc250(longlong param_1,ulonglong param_2,undefined1 param_3,float *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  longlong lVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined1 (*pauVar34) [16];
  float fVar35;
  undefined1 auStack_3d8 [48];
  undefined8 local_3a8;
  longlong local_398;
  longlong lStack_390;
  undefined4 local_388;
  undefined1 local_380 [744];
  ulonglong local_98;
  
  if (1 < param_2) {
    local_98 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
    lStack_390 = param_2 * 0x90 + -0x90 + param_1;
    fVar35 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar35 = fVar35 + 1.8446744e+19;
    }
    local_398 = param_1;
    fVar35 = _guard_xfg_dispatch_icall_nop(fVar35);
    local_388 = (undefined4)(longlong)(fVar35 + fVar35);
    _guard_xfg_dispatch_icall_nop(local_380,0,0x2e8);
    pauVar34 = (undefined1 (*) [16])&local_398;
    do {
      uVar1 = *(undefined8 *)pauVar34[1];
      local_3a8._0_4_ = (int)uVar1;
      puVar27 = SUB168(*pauVar34,0);
      puVar30 = SUB168(*pauVar34,8);
      lVar29 = ((longlong)puVar30 - (longlong)puVar27) / 0x90 + 1;
      puVar33 = puVar27;
      if ((int)local_3a8 != 0) {
LAB_142cdc370:
        if (8 < lVar29) {
          if (lVar29 < 0) {
            lVar29 = lVar29 + 1;
          }
          puVar27 = puVar33 + (lVar29 >> 1) * 0x12;
          if (puVar27 != puVar33) {
            uVar9 = puVar33[1];
            uVar2 = *(undefined4 *)puVar27;
            uVar3 = *(undefined4 *)((longlong)puVar27 + 4);
            uVar4 = *(undefined4 *)(puVar27 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar27 + 0xc);
            uVar10 = puVar27[2];
            uVar11 = puVar27[3];
            uVar12 = puVar27[4];
            uVar13 = puVar27[5];
            uVar14 = puVar27[6];
            uVar15 = puVar27[7];
            uVar16 = puVar27[8];
            uVar17 = puVar27[9];
            uVar18 = puVar27[10];
            uVar19 = puVar27[0xb];
            uVar20 = puVar27[0xc];
            uVar21 = puVar27[0xd];
            uVar22 = puVar27[0xe];
            uVar23 = puVar27[0xf];
            uVar24 = puVar27[0x10];
            uVar25 = puVar27[0x11];
            *puVar27 = *puVar33;
            puVar27[1] = uVar9;
            uVar9 = puVar33[3];
            puVar27[2] = puVar33[2];
            puVar27[3] = uVar9;
            uVar9 = puVar33[5];
            puVar27[4] = puVar33[4];
            puVar27[5] = uVar9;
            uVar9 = puVar33[7];
            puVar27[6] = puVar33[6];
            puVar27[7] = uVar9;
            uVar9 = puVar33[9];
            puVar27[8] = puVar33[8];
            puVar27[9] = uVar9;
            uVar9 = puVar33[0xb];
            puVar27[10] = puVar33[10];
            puVar27[0xb] = uVar9;
            uVar9 = puVar33[0xd];
            puVar27[0xc] = puVar33[0xc];
            puVar27[0xd] = uVar9;
            *(undefined1 (*) [16])(puVar27 + 0xe) = *(undefined1 (*) [16])(puVar33 + 0xe);
            uVar6 = *(undefined4 *)((longlong)puVar33 + 0x84);
            uVar7 = *(undefined4 *)(puVar33 + 0x11);
            uVar8 = *(undefined4 *)((longlong)puVar33 + 0x8c);
            *(undefined4 *)(puVar27 + 0x10) = *(undefined4 *)(puVar33 + 0x10);
            *(undefined4 *)((longlong)puVar27 + 0x84) = uVar6;
            *(undefined4 *)(puVar27 + 0x11) = uVar7;
            *(undefined4 *)((longlong)puVar27 + 0x8c) = uVar8;
            *(undefined4 *)puVar33 = uVar2;
            *(undefined4 *)((longlong)puVar33 + 4) = uVar3;
            *(undefined4 *)(puVar33 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar33 + 0xc) = uVar5;
            puVar33[2] = uVar10;
            puVar33[3] = uVar11;
            puVar33[4] = uVar12;
            puVar33[5] = uVar13;
            puVar33[6] = uVar14;
            puVar33[7] = uVar15;
            puVar33[8] = uVar16;
            puVar33[9] = uVar17;
            puVar33[10] = uVar18;
            puVar33[0xb] = uVar19;
            puVar33[0xc] = uVar20;
            puVar33[0xd] = uVar21;
            puVar33[0xe] = uVar22;
            puVar33[0xf] = uVar23;
            puVar33[0x10] = uVar24;
            puVar33[0x11] = uVar25;
          }
          puVar28 = puVar30 + 0x12;
          puVar27 = puVar33;
LAB_142cdc450:
          puVar32 = puVar27;
          puVar27 = puVar32 + 0x12;
          if (puVar27 <= puVar30) goto code_r0x000142cdc45c;
          goto LAB_142cdc480;
        }
        if (puVar33 < puVar30) {
          do {
            puVar27 = puVar33;
            if (puVar33 + 0x12 <= puVar30) {
              puVar28 = puVar33 + 0x12;
              do {
                if (ABS(*param_4 - *(float *)(puVar27 + 5)) <
                    ABS(*param_4 - *(float *)(puVar28 + 5))) {
                  puVar27 = puVar28;
                }
                puVar28 = puVar28 + 0x12;
              } while (puVar28 <= puVar30);
            }
            if (puVar27 != puVar30) {
              uVar1 = puVar30[1];
              uVar9 = *puVar27;
              uVar10 = puVar27[1];
              uVar11 = puVar27[2];
              uVar12 = puVar27[3];
              uVar13 = puVar27[4];
              uVar14 = puVar27[5];
              uVar15 = puVar27[6];
              uVar16 = puVar27[7];
              uVar17 = puVar27[8];
              uVar18 = puVar27[9];
              uVar19 = puVar27[10];
              uVar20 = puVar27[0xb];
              uVar21 = puVar27[0xc];
              uVar22 = puVar27[0xd];
              uVar23 = puVar27[0xe];
              uVar24 = puVar27[0xf];
              uVar25 = puVar27[0x10];
              uVar26 = puVar27[0x11];
              *puVar27 = *puVar30;
              puVar27[1] = uVar1;
              uVar1 = puVar30[3];
              puVar27[2] = puVar30[2];
              puVar27[3] = uVar1;
              uVar1 = puVar30[5];
              puVar27[4] = puVar30[4];
              puVar27[5] = uVar1;
              uVar1 = puVar30[7];
              puVar27[6] = puVar30[6];
              puVar27[7] = uVar1;
              uVar1 = puVar30[9];
              puVar27[8] = puVar30[8];
              puVar27[9] = uVar1;
              uVar1 = puVar30[0xb];
              puVar27[10] = puVar30[10];
              puVar27[0xb] = uVar1;
              uVar1 = puVar30[0xd];
              puVar27[0xc] = puVar30[0xc];
              puVar27[0xd] = uVar1;
              *(undefined1 (*) [16])(puVar27 + 0xe) = *(undefined1 (*) [16])(puVar30 + 0xe);
              uVar1 = puVar30[0x11];
              puVar27[0x10] = puVar30[0x10];
              puVar27[0x11] = uVar1;
              *puVar30 = uVar9;
              puVar30[1] = uVar10;
              puVar30[2] = uVar11;
              puVar30[3] = uVar12;
              puVar30[4] = uVar13;
              puVar30[5] = uVar14;
              puVar30[6] = uVar15;
              puVar30[7] = uVar16;
              puVar30[8] = uVar17;
              puVar30[9] = uVar18;
              puVar30[10] = uVar19;
              puVar30[0xb] = uVar20;
              puVar30[0xc] = uVar21;
              puVar30[0xd] = uVar22;
              puVar30[0xe] = uVar23;
              puVar30[0xf] = uVar24;
              puVar30[0x10] = uVar25;
              puVar30[0x11] = uVar26;
            }
            puVar30 = puVar30 + -0x12;
          } while (puVar33 < puVar30);
        }
        goto LAB_142cdc709;
      }
LAB_142cdc6fa:
      local_3a8 = uVar1;
      FUN_142cdba50(puVar27,lVar29,param_3,param_4);
LAB_142cdc709:
      pauVar34 = (undefined1 (*) [16])(pauVar34[-2] + 8);
    } while ((undefined1 (*) [16])&local_398 <= pauVar34);
  }
  return;
code_r0x000142cdc45c:
  if (ABS(*param_4 - *(float *)(puVar32 + 0x17)) <= ABS(*param_4 - *(float *)(puVar33 + 5)))
  goto LAB_142cdc450;
LAB_142cdc480:
  do {
    puVar31 = puVar28;
    puVar28 = puVar31 + -0x12;
    if (puVar28 <= puVar33) break;
  } while (ABS(*param_4 - *(float *)(puVar33 + 5)) <= ABS(*param_4 - *(float *)(puVar31 + -0xd)));
  if (puVar27 <= puVar28) {
    if (puVar27 != puVar28) {
      uVar9 = puVar31[-0x11];
      uVar2 = *(undefined4 *)puVar27;
      uVar3 = *(undefined4 *)((longlong)puVar32 + 0x94);
      uVar4 = *(undefined4 *)(puVar32 + 0x13);
      uVar5 = *(undefined4 *)((longlong)puVar32 + 0x9c);
      uVar10 = puVar32[0x14];
      uVar11 = puVar32[0x15];
      uVar12 = puVar32[0x16];
      uVar13 = puVar32[0x17];
      uVar14 = puVar32[0x18];
      uVar15 = puVar32[0x19];
      uVar16 = puVar32[0x1a];
      uVar17 = puVar32[0x1b];
      uVar18 = puVar32[0x1c];
      uVar19 = puVar32[0x1d];
      uVar20 = puVar32[0x1e];
      uVar21 = puVar32[0x1f];
      uVar22 = puVar32[0x20];
      uVar23 = puVar32[0x21];
      uVar24 = puVar32[0x22];
      uVar25 = puVar32[0x23];
      *puVar27 = *puVar28;
      puVar32[0x13] = uVar9;
      uVar9 = puVar31[-0xf];
      puVar32[0x14] = puVar31[-0x10];
      puVar32[0x15] = uVar9;
      uVar9 = puVar31[-0xd];
      puVar32[0x16] = puVar31[-0xe];
      puVar32[0x17] = uVar9;
      uVar9 = puVar31[-0xb];
      puVar32[0x18] = puVar31[-0xc];
      puVar32[0x19] = uVar9;
      uVar9 = puVar31[-9];
      puVar32[0x1a] = puVar31[-10];
      puVar32[0x1b] = uVar9;
      uVar9 = puVar31[-7];
      puVar32[0x1c] = puVar31[-8];
      puVar32[0x1d] = uVar9;
      uVar9 = puVar31[-5];
      puVar32[0x1e] = puVar31[-6];
      puVar32[0x1f] = uVar9;
      *(undefined1 (*) [16])(puVar32 + 0x20) = *(undefined1 (*) [16])(puVar31 + -4);
      uVar6 = *(undefined4 *)((longlong)puVar31 + -0xc);
      uVar7 = *(undefined4 *)(puVar31 + -1);
      uVar8 = *(undefined4 *)((longlong)puVar31 + -4);
      *(undefined4 *)(puVar32 + 0x22) = *(undefined4 *)(puVar31 + -2);
      *(undefined4 *)((longlong)puVar32 + 0x114) = uVar6;
      *(undefined4 *)(puVar32 + 0x23) = uVar7;
      *(undefined4 *)((longlong)puVar32 + 0x11c) = uVar8;
      *(undefined4 *)puVar28 = uVar2;
      *(undefined4 *)((longlong)puVar31 + -0x8c) = uVar3;
      *(undefined4 *)(puVar31 + -0x11) = uVar4;
      *(undefined4 *)((longlong)puVar31 + -0x84) = uVar5;
      puVar31[-0x10] = uVar10;
      puVar31[-0xf] = uVar11;
      puVar31[-0xe] = uVar12;
      puVar31[-0xd] = uVar13;
      puVar31[-0xc] = uVar14;
      puVar31[-0xb] = uVar15;
      puVar31[-10] = uVar16;
      puVar31[-9] = uVar17;
      puVar31[-8] = uVar18;
      puVar31[-7] = uVar19;
      puVar31[-6] = uVar20;
      puVar31[-5] = uVar21;
      puVar31[-4] = uVar22;
      puVar31[-3] = uVar23;
      puVar31[-2] = uVar24;
      puVar31[-1] = uVar25;
    }
    goto LAB_142cdc450;
  }
  if (puVar33 != puVar28) {
    uVar9 = puVar31[-0x11];
    uVar2 = *(undefined4 *)puVar33;
    uVar3 = *(undefined4 *)((longlong)puVar33 + 4);
    uVar4 = *(undefined4 *)(puVar33 + 1);
    uVar5 = *(undefined4 *)((longlong)puVar33 + 0xc);
    uVar10 = puVar33[2];
    uVar11 = puVar33[3];
    uVar12 = puVar33[4];
    uVar13 = puVar33[5];
    uVar14 = puVar33[6];
    uVar15 = puVar33[7];
    uVar16 = puVar33[8];
    uVar17 = puVar33[9];
    uVar18 = puVar33[10];
    uVar19 = puVar33[0xb];
    uVar20 = puVar33[0xc];
    uVar21 = puVar33[0xd];
    uVar22 = puVar33[0xe];
    uVar23 = puVar33[0xf];
    uVar24 = puVar33[0x10];
    uVar25 = puVar33[0x11];
    *puVar33 = *puVar28;
    puVar33[1] = uVar9;
    uVar9 = puVar31[-0xf];
    puVar33[2] = puVar31[-0x10];
    puVar33[3] = uVar9;
    uVar9 = puVar31[-0xd];
    puVar33[4] = puVar31[-0xe];
    puVar33[5] = uVar9;
    uVar9 = puVar31[-0xb];
    puVar33[6] = puVar31[-0xc];
    puVar33[7] = uVar9;
    uVar9 = puVar31[-9];
    puVar33[8] = puVar31[-10];
    puVar33[9] = uVar9;
    uVar9 = puVar31[-7];
    puVar33[10] = puVar31[-8];
    puVar33[0xb] = uVar9;
    uVar9 = puVar31[-5];
    puVar33[0xc] = puVar31[-6];
    puVar33[0xd] = uVar9;
    *(undefined1 (*) [16])(puVar33 + 0xe) = *(undefined1 (*) [16])(puVar31 + -4);
    uVar6 = *(undefined4 *)((longlong)puVar31 + -0xc);
    uVar7 = *(undefined4 *)(puVar31 + -1);
    uVar8 = *(undefined4 *)((longlong)puVar31 + -4);
    *(undefined4 *)(puVar33 + 0x10) = *(undefined4 *)(puVar31 + -2);
    *(undefined4 *)((longlong)puVar33 + 0x84) = uVar6;
    *(undefined4 *)(puVar33 + 0x11) = uVar7;
    *(undefined4 *)((longlong)puVar33 + 0x8c) = uVar8;
    *(undefined4 *)puVar28 = uVar2;
    *(undefined4 *)((longlong)puVar31 + -0x8c) = uVar3;
    *(undefined4 *)(puVar31 + -0x11) = uVar4;
    *(undefined4 *)((longlong)puVar31 + -0x84) = uVar5;
    puVar31[-0x10] = uVar10;
    puVar31[-0xf] = uVar11;
    puVar31[-0xe] = uVar12;
    puVar31[-0xd] = uVar13;
    puVar31[-0xc] = uVar14;
    puVar31[-0xb] = uVar15;
    puVar31[-10] = uVar16;
    puVar31[-9] = uVar17;
    puVar31[-8] = uVar18;
    puVar31[-7] = uVar19;
    puVar31[-6] = uVar20;
    puVar31[-5] = uVar21;
    puVar31[-4] = uVar22;
    puVar31[-3] = uVar23;
    puVar31[-2] = uVar24;
    puVar31[-1] = uVar25;
  }
  local_3a8._0_4_ = (int)local_3a8 + -1;
  lVar29 = (longlong)puVar28 + (-0x90 - (longlong)puVar33);
  lVar29 = lVar29 / 0x12 + (lVar29 >> 0x3f);
  if ((lVar29 >> 3) - (lVar29 >> 0x3f) < ((longlong)puVar30 - (longlong)puVar27) / 0x90) {
    if (puVar27 < puVar30) {
      *(undefined8 **)*pauVar34 = puVar27;
      *(undefined8 **)(*pauVar34 + 8) = puVar30;
      *(int *)pauVar34[1] = (int)local_3a8;
      pauVar34 = (undefined1 (*) [16])(pauVar34[1] + 8);
    }
    if (puVar28 <= puVar33 + 0x12) goto LAB_142cdc709;
    puVar30 = puVar31 + -0x24;
    puVar27 = puVar33;
  }
  else {
    if (puVar33 + 0x12 < puVar28) {
      *(undefined8 **)*pauVar34 = puVar33;
      *(undefined8 **)(*pauVar34 + 8) = puVar31 + -0x24;
      *(int *)pauVar34[1] = (int)local_3a8;
      pauVar34 = (undefined1 (*) [16])(pauVar34[1] + 8);
    }
    if (puVar30 <= puVar27) goto LAB_142cdc709;
  }
  lVar29 = ((longlong)puVar30 - (longlong)puVar27) / 0x90 + 1;
  puVar33 = puVar27;
  if ((int)local_3a8 == 0) goto LAB_142cdc6fa;
  goto LAB_142cdc370;
}



// FUNCTION 142cdc8a0 FUN_142cdc8a0 body=1525 status=ok
// SIG undefined FUN_142cdc8a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cdc8a0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  longlong lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  longlong *plVar35;
  float fVar36;
  undefined1 auStack_3c8 [48];
  longlong local_398;
  longlong local_388;
  longlong lStack_380;
  undefined4 local_378;
  undefined1 local_370 [744];
  ulonglong local_88;
  
  if (1 < param_2) {
    local_88 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
    lStack_380 = param_2 * 0x90 + -0x90 + param_1;
    fVar36 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar36 = fVar36 + 1.8446744e+19;
    }
    local_388 = param_1;
    fVar36 = _guard_xfg_dispatch_icall_nop(fVar36);
    local_378 = (undefined4)(longlong)(fVar36 + fVar36);
    _guard_xfg_dispatch_icall_nop(local_370,0,0x2e8);
    plVar35 = &local_388;
    do {
      puVar34 = (undefined8 *)*plVar35;
      puVar29 = (undefined8 *)plVar35[1];
      lVar1 = plVar35[2];
      local_398._0_4_ = (int)lVar1;
      lVar28 = ((longlong)puVar29 - (longlong)puVar34) / 0x90 + 1;
      puVar33 = puVar34;
      if ((int)local_398 != 0) {
LAB_142cdc9b0:
        if (8 < lVar28) {
          if (lVar28 < 0) {
            lVar28 = lVar28 + 1;
          }
          puVar34 = puVar33 + (lVar28 >> 1) * 0x12;
          if (puVar34 != puVar33) {
            uVar9 = puVar33[1];
            uVar2 = *(undefined4 *)puVar34;
            uVar3 = *(undefined4 *)((longlong)puVar34 + 4);
            uVar4 = *(undefined4 *)(puVar34 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar34 + 0xc);
            uVar10 = puVar34[2];
            uVar11 = puVar34[3];
            uVar12 = puVar34[4];
            uVar13 = puVar34[5];
            uVar14 = puVar34[6];
            uVar15 = puVar34[7];
            uVar16 = puVar34[8];
            uVar17 = puVar34[9];
            uVar18 = puVar34[10];
            uVar19 = puVar34[0xb];
            uVar20 = puVar34[0xc];
            uVar21 = puVar34[0xd];
            uVar22 = puVar34[0xe];
            uVar23 = puVar34[0xf];
            uVar24 = puVar34[0x10];
            uVar25 = puVar34[0x11];
            *puVar34 = *puVar33;
            puVar34[1] = uVar9;
            uVar9 = puVar33[3];
            puVar34[2] = puVar33[2];
            puVar34[3] = uVar9;
            uVar9 = puVar33[5];
            puVar34[4] = puVar33[4];
            puVar34[5] = uVar9;
            uVar9 = puVar33[7];
            puVar34[6] = puVar33[6];
            puVar34[7] = uVar9;
            uVar9 = puVar33[9];
            puVar34[8] = puVar33[8];
            puVar34[9] = uVar9;
            uVar9 = puVar33[0xb];
            puVar34[10] = puVar33[10];
            puVar34[0xb] = uVar9;
            uVar9 = puVar33[0xd];
            puVar34[0xc] = puVar33[0xc];
            puVar34[0xd] = uVar9;
            uVar9 = puVar33[0xf];
            puVar34[0xe] = puVar33[0xe];
            puVar34[0xf] = uVar9;
            uVar6 = *(undefined4 *)((longlong)puVar33 + 0x84);
            uVar7 = *(undefined4 *)(puVar33 + 0x11);
            uVar8 = *(undefined4 *)((longlong)puVar33 + 0x8c);
            *(undefined4 *)(puVar34 + 0x10) = *(undefined4 *)(puVar33 + 0x10);
            *(undefined4 *)((longlong)puVar34 + 0x84) = uVar6;
            *(undefined4 *)(puVar34 + 0x11) = uVar7;
            *(undefined4 *)((longlong)puVar34 + 0x8c) = uVar8;
            *(undefined4 *)puVar33 = uVar2;
            *(undefined4 *)((longlong)puVar33 + 4) = uVar3;
            *(undefined4 *)(puVar33 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar33 + 0xc) = uVar5;
            puVar33[2] = uVar10;
            puVar33[3] = uVar11;
            puVar33[4] = uVar12;
            puVar33[5] = uVar13;
            puVar33[6] = uVar14;
            puVar33[7] = uVar15;
            puVar33[8] = uVar16;
            puVar33[9] = uVar17;
            puVar33[10] = uVar18;
            puVar33[0xb] = uVar19;
            puVar33[0xc] = uVar20;
            puVar33[0xd] = uVar21;
            puVar33[0xe] = uVar22;
            puVar33[0xf] = uVar23;
            puVar33[0x10] = uVar24;
            puVar33[0x11] = uVar25;
          }
          puVar30 = puVar29 + 0x12;
          puVar34 = puVar33;
LAB_142cdca90:
          puVar32 = puVar34;
          puVar34 = puVar32 + 0x12;
          if (puVar34 <= puVar29) goto code_r0x000142cdca9c;
          goto LAB_142cdcab0;
        }
        for (; puVar30 = puVar33, puVar34 = puVar33, puVar33 < puVar29; puVar29 = puVar29 + -0x12) {
          while (puVar34 = puVar34 + 0x12, puVar34 <= puVar29) {
            if (*(float *)(puVar30 + 5) < *(float *)(puVar34 + 5)) {
              puVar30 = puVar34;
            }
          }
          if (puVar30 != puVar29) {
            uVar9 = puVar29[1];
            uVar10 = *puVar30;
            uVar11 = puVar30[1];
            uVar12 = puVar30[2];
            uVar13 = puVar30[3];
            uVar14 = puVar30[4];
            uVar15 = puVar30[5];
            uVar16 = puVar30[6];
            uVar17 = puVar30[7];
            uVar18 = puVar30[8];
            uVar19 = puVar30[9];
            uVar20 = puVar30[10];
            uVar21 = puVar30[0xb];
            uVar22 = puVar30[0xc];
            uVar23 = puVar30[0xd];
            uVar24 = puVar30[0xe];
            uVar25 = puVar30[0xf];
            uVar26 = puVar30[0x10];
            uVar27 = puVar30[0x11];
            *puVar30 = *puVar29;
            puVar30[1] = uVar9;
            uVar9 = puVar29[3];
            puVar30[2] = puVar29[2];
            puVar30[3] = uVar9;
            uVar9 = puVar29[5];
            puVar30[4] = puVar29[4];
            puVar30[5] = uVar9;
            uVar9 = puVar29[7];
            puVar30[6] = puVar29[6];
            puVar30[7] = uVar9;
            uVar9 = puVar29[9];
            puVar30[8] = puVar29[8];
            puVar30[9] = uVar9;
            uVar9 = puVar29[0xb];
            puVar30[10] = puVar29[10];
            puVar30[0xb] = uVar9;
            uVar9 = puVar29[0xd];
            puVar30[0xc] = puVar29[0xc];
            puVar30[0xd] = uVar9;
            uVar9 = puVar29[0xf];
            puVar30[0xe] = puVar29[0xe];
            puVar30[0xf] = uVar9;
            uVar9 = puVar29[0x11];
            puVar30[0x10] = puVar29[0x10];
            puVar30[0x11] = uVar9;
            *puVar29 = uVar10;
            puVar29[1] = uVar11;
            puVar29[2] = uVar12;
            puVar29[3] = uVar13;
            puVar29[4] = uVar14;
            puVar29[5] = uVar15;
            puVar29[6] = uVar16;
            puVar29[7] = uVar17;
            puVar29[8] = uVar18;
            puVar29[9] = uVar19;
            puVar29[10] = uVar20;
            puVar29[0xb] = uVar21;
            puVar29[0xc] = uVar22;
            puVar29[0xd] = uVar23;
            puVar29[0xe] = uVar24;
            puVar29[0xf] = uVar25;
            puVar29[0x10] = uVar26;
            puVar29[0x11] = uVar27;
          }
        }
        goto LAB_142cdcd26;
      }
LAB_142cdcd17:
      local_398 = lVar1;
      FUN_142cdbe90(puVar34,lVar28,param_3,param_4);
LAB_142cdcd26:
      plVar35 = plVar35 + -3;
    } while (&local_388 <= plVar35);
  }
  return;
code_r0x000142cdca9c:
  if (*(float *)(puVar32 + 0x17) < *(float *)(puVar33 + 5) ||
      *(float *)(puVar32 + 0x17) == *(float *)(puVar33 + 5)) goto LAB_142cdca90;
LAB_142cdcab0:
  do {
    puVar31 = puVar30;
    puVar30 = puVar31 + -0x12;
    if (puVar30 <= puVar33) break;
  } while (*(float *)(puVar33 + 5) < *(float *)(puVar31 + -0xd) ||
           *(float *)(puVar33 + 5) == *(float *)(puVar31 + -0xd));
  if (puVar34 <= puVar30) {
    if (puVar34 != puVar30) {
      uVar9 = puVar31[-0x11];
      uVar2 = *(undefined4 *)puVar34;
      uVar3 = *(undefined4 *)((longlong)puVar32 + 0x94);
      uVar4 = *(undefined4 *)(puVar32 + 0x13);
      uVar5 = *(undefined4 *)((longlong)puVar32 + 0x9c);
      uVar10 = puVar32[0x14];
      uVar11 = puVar32[0x15];
      uVar12 = puVar32[0x16];
      uVar13 = puVar32[0x17];
      uVar14 = puVar32[0x18];
      uVar15 = puVar32[0x19];
      uVar16 = puVar32[0x1a];
      uVar17 = puVar32[0x1b];
      uVar18 = puVar32[0x1c];
      uVar19 = puVar32[0x1d];
      uVar20 = puVar32[0x1e];
      uVar21 = puVar32[0x1f];
      uVar22 = puVar32[0x20];
      uVar23 = puVar32[0x21];
      uVar24 = puVar32[0x22];
      uVar25 = puVar32[0x23];
      *puVar34 = *puVar30;
      puVar32[0x13] = uVar9;
      uVar9 = puVar31[-0xf];
      puVar32[0x14] = puVar31[-0x10];
      puVar32[0x15] = uVar9;
      uVar9 = puVar31[-0xd];
      puVar32[0x16] = puVar31[-0xe];
      puVar32[0x17] = uVar9;
      uVar9 = puVar31[-0xb];
      puVar32[0x18] = puVar31[-0xc];
      puVar32[0x19] = uVar9;
      uVar9 = puVar31[-9];
      puVar32[0x1a] = puVar31[-10];
      puVar32[0x1b] = uVar9;
      uVar9 = puVar31[-7];
      puVar32[0x1c] = puVar31[-8];
      puVar32[0x1d] = uVar9;
      uVar9 = puVar31[-5];
      puVar32[0x1e] = puVar31[-6];
      puVar32[0x1f] = uVar9;
      uVar9 = puVar31[-3];
      puVar32[0x20] = puVar31[-4];
      puVar32[0x21] = uVar9;
      uVar6 = *(undefined4 *)((longlong)puVar31 + -0xc);
      uVar7 = *(undefined4 *)(puVar31 + -1);
      uVar8 = *(undefined4 *)((longlong)puVar31 + -4);
      *(undefined4 *)(puVar32 + 0x22) = *(undefined4 *)(puVar31 + -2);
      *(undefined4 *)((longlong)puVar32 + 0x114) = uVar6;
      *(undefined4 *)(puVar32 + 0x23) = uVar7;
      *(undefined4 *)((longlong)puVar32 + 0x11c) = uVar8;
      *(undefined4 *)puVar30 = uVar2;
      *(undefined4 *)((longlong)puVar31 + -0x8c) = uVar3;
      *(undefined4 *)(puVar31 + -0x11) = uVar4;
      *(undefined4 *)((longlong)puVar31 + -0x84) = uVar5;
      puVar31[-0x10] = uVar10;
      puVar31[-0xf] = uVar11;
      puVar31[-0xe] = uVar12;
      puVar31[-0xd] = uVar13;
      puVar31[-0xc] = uVar14;
      puVar31[-0xb] = uVar15;
      puVar31[-10] = uVar16;
      puVar31[-9] = uVar17;
      puVar31[-8] = uVar18;
      puVar31[-7] = uVar19;
      puVar31[-6] = uVar20;
      puVar31[-5] = uVar21;
      puVar31[-4] = uVar22;
      puVar31[-3] = uVar23;
      puVar31[-2] = uVar24;
      puVar31[-1] = uVar25;
    }
    goto LAB_142cdca90;
  }
  if (puVar33 != puVar30) {
    uVar9 = puVar31[-0x11];
    uVar2 = *(undefined4 *)puVar33;
    uVar3 = *(undefined4 *)((longlong)puVar33 + 4);
    uVar4 = *(undefined4 *)(puVar33 + 1);
    uVar5 = *(undefined4 *)((longlong)puVar33 + 0xc);
    uVar10 = puVar33[2];
    uVar11 = puVar33[3];
    uVar12 = puVar33[4];
    uVar13 = puVar33[5];
    uVar14 = puVar33[6];
    uVar15 = puVar33[7];
    uVar16 = puVar33[8];
    uVar17 = puVar33[9];
    uVar18 = puVar33[10];
    uVar19 = puVar33[0xb];
    uVar20 = puVar33[0xc];
    uVar21 = puVar33[0xd];
    uVar22 = puVar33[0xe];
    uVar23 = puVar33[0xf];
    uVar24 = puVar33[0x10];
    uVar25 = puVar33[0x11];
    *puVar33 = *puVar30;
    puVar33[1] = uVar9;
    uVar9 = puVar31[-0xf];
    puVar33[2] = puVar31[-0x10];
    puVar33[3] = uVar9;
    uVar9 = puVar31[-0xd];
    puVar33[4] = puVar31[-0xe];
    puVar33[5] = uVar9;
    uVar9 = puVar31[-0xb];
    puVar33[6] = puVar31[-0xc];
    puVar33[7] = uVar9;
    uVar9 = puVar31[-9];
    puVar33[8] = puVar31[-10];
    puVar33[9] = uVar9;
    uVar9 = puVar31[-7];
    puVar33[10] = puVar31[-8];
    puVar33[0xb] = uVar9;
    uVar9 = puVar31[-5];
    puVar33[0xc] = puVar31[-6];
    puVar33[0xd] = uVar9;
    uVar9 = puVar31[-3];
    puVar33[0xe] = puVar31[-4];
    puVar33[0xf] = uVar9;
    uVar6 = *(undefined4 *)((longlong)puVar31 + -0xc);
    uVar7 = *(undefined4 *)(puVar31 + -1);
    uVar8 = *(undefined4 *)((longlong)puVar31 + -4);
    *(undefined4 *)(puVar33 + 0x10) = *(undefined4 *)(puVar31 + -2);
    *(undefined4 *)((longlong)puVar33 + 0x84) = uVar6;
    *(undefined4 *)(puVar33 + 0x11) = uVar7;
    *(undefined4 *)((longlong)puVar33 + 0x8c) = uVar8;
    *(undefined4 *)puVar30 = uVar2;
    *(undefined4 *)((longlong)puVar31 + -0x8c) = uVar3;
    *(undefined4 *)(puVar31 + -0x11) = uVar4;
    *(undefined4 *)((longlong)puVar31 + -0x84) = uVar5;
    puVar31[-0x10] = uVar10;
    puVar31[-0xf] = uVar11;
    puVar31[-0xe] = uVar12;
    puVar31[-0xd] = uVar13;
    puVar31[-0xc] = uVar14;
    puVar31[-0xb] = uVar15;
    puVar31[-10] = uVar16;
    puVar31[-9] = uVar17;
    puVar31[-8] = uVar18;
    puVar31[-7] = uVar19;
    puVar31[-6] = uVar20;
    puVar31[-5] = uVar21;
    puVar31[-4] = uVar22;
    puVar31[-3] = uVar23;
    puVar31[-2] = uVar24;
    puVar31[-1] = uVar25;
  }
  local_398._0_4_ = (int)local_398 + -1;
  lVar28 = (longlong)puVar30 + (-0x90 - (longlong)puVar33);
  lVar28 = lVar28 / 0x12 + (lVar28 >> 0x3f);
  if ((lVar28 >> 3) - (lVar28 >> 0x3f) < ((longlong)puVar29 - (longlong)puVar34) / 0x90) {
    if (puVar34 < puVar29) {
      *plVar35 = (longlong)puVar34;
      plVar35[1] = (longlong)puVar29;
      *(int *)(plVar35 + 2) = (int)local_398;
      plVar35 = plVar35 + 3;
    }
    if (puVar30 <= puVar33 + 0x12) goto LAB_142cdcd26;
    puVar29 = puVar31 + -0x24;
    puVar34 = puVar33;
  }
  else {
    if (puVar33 + 0x12 < puVar30) {
      *plVar35 = (longlong)puVar33;
      plVar35[1] = (longlong)(puVar31 + -0x24);
      *(int *)(plVar35 + 2) = (int)local_398;
      plVar35 = plVar35 + 3;
    }
    if (puVar29 <= puVar34) goto LAB_142cdcd26;
  }
  lVar28 = ((longlong)puVar29 - (longlong)puVar34) / 0x90 + 1;
  puVar33 = puVar34;
  if ((int)local_398 == 0) goto LAB_142cdcd17;
  goto LAB_142cdc9b0;
}



// FUNCTION 142cdcea0 FUN_142cdcea0 body=512 status=ok
// SIG undefined FUN_142cdcea0(void)

void FUN_142cdcea0(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar9 = 0;
  uVar11 = uVar9;
  if (0 < (int)param_1[1]) {
    do {
      pbVar10 = (byte *)(*param_1 + uVar11);
      iVar8 = (int)uVar9;
      if (((((*pbVar10 & 2) == 0) &&
           (plVar6 = (longlong *)FWeakObjectPtr::Get(pbVar10 + 0x74), plVar6 != (longlong *)0x0)) &&
          (cVar3 = FUN_142390860(plVar6,*(undefined8 *)(*param_2 + 0x168)), cVar3 == '\0')) &&
         ((iVar4 = (**(code **)(*plVar6 + 0x4f0))(plVar6,2), iVar4 == 2 &&
          (cVar3 = FUN_142cf3e20(pbVar10), cVar3 != '\0')))) {
        plVar1 = (longlong *)plVar6[0x23];
        if (plVar1 != (longlong *)0x0) {
          lVar7 = (**(code **)(*plVar1 + 0x688))(plVar1);
          if (lVar7 != 0) goto LAB_142cdd019;
          lVar7 = FUN_14290da60();
          if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
              != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            lVar7 = FUN_142a2b950();
            if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
                lVar7 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              lVar7 = (**(code **)(*plVar6 + 0x6d0))
                                (plVar6,0,CONCAT71((int7)((ulonglong)(lVar7 + 0x88) >> 8),1));
              local_48 = *(undefined8 *)(lVar7 + 0x28);
              uStack_40 = *(undefined8 *)(lVar7 + 0x30);
              local_38 = *(undefined8 *)(lVar7 + 0x38);
              uStack_30 = *(undefined8 *)(lVar7 + 0x40);
              if (*(char *)((longlong)&local_48 + (longlong)(int)param_2[1]) == '\x02')
              goto LAB_142cdd019;
            }
          }
        }
        uVar9 = (ulonglong)(iVar8 + 1);
        uVar11 = uVar11 + 0x90;
      }
      else {
LAB_142cdd019:
        iVar4 = (int)param_1[1];
        iVar5 = (iVar4 - iVar8) + -1;
        if (0 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar8 * 0x90 + *param_1),
                     (void *)((longlong)(iVar4 - iVar5) * 0x90 + *param_1),(longlong)iVar5 * 0x90);
          iVar4 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar4 + -1;
        if (param_3 != '\0') {
          TArray<HAPI_ParmInfo,FDefaultAllocator>::ResizeShrink(param_1);
        }
      }
    } while ((int)uVar9 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 142cdd0a0 FUN_142cdd0a0 body=84 status=ok
// SIG undefined FUN_142cdd0a0(void)

undefined8 * FUN_142cdd0a0(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__14585be70;
  FWeakObjectPtr::operator=(param_1 + 0x8b,0);
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = DAT_1464aa740;
  return param_1;
}



// FUNCTION 142cdd100 FUN_142cdd100 body=66 status=ok
// SIG undefined FUN_142cdd100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_142cdd100(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1,0);
  *(undefined8 *)(param_1 + 8) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x10) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffff1 | 1;
  return param_1;
}



// FUNCTION 142cdd150 FUN_142cdd150 body=99 status=ok
// SIG undefined FUN_142cdd150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_142cdd150(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1,0);
  *(undefined8 *)(param_1 + 8) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x10) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffff1 | 1;
  *(undefined8 *)(param_1 + 0x1c) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x24) = DAT_1468b5d98;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return param_1;
}



// FUNCTION 142cdd1c0 FUN_142cdd1c0 body=163 status=ok
// SIG undefined FUN_142cdd1c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142cdd1c0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 3);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x12);
  param_1[0x21] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x22) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x114) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x11c) = DAT_1468b5d98;
  param_1[0x24] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x25) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 300) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x134) = DAT_1468b5d98;
  return param_1;
}



// FUNCTION 142cdd270 FUN_142cdd270 body=154 status=ok
// SIG undefined FUN_142cdd270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142cdd270(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 1,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = _DAT_1466ad1f0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = DAT_1466ad1f8;
  return param_1;
}



// FUNCTION 142cdd310 FUN_142cdd310 body=286 status=ok
// SIG undefined FUN_142cdd310(void)

undefined4 * FUN_142cdd310(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  *param_1 = 0x40;
  param_1[1] = 0x42500000;
  param_1[2] = 0x432d0000;
  param_1[3] = 0x42340000;
  param_1[4] = 0x41200000;
  param_1[5] = 0x3f400000;
  param_1[6] = 0x42300000;
  param_1[7] = 0x41a00000;
  param_1[9] = 0x3f000000;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0x44fa0000;
  param_1[0x1b] = 0x44fa0000;
  param_1[0x1c] = 0x41a00000;
  param_1[0x1d] = 0x44160000;
  *(undefined8 *)(param_1 + 0x1e) = 0x43960000;
  param_1[0x20] = 0x43160000;
  param_1[0x21] = 0x42dc0000;
  *(undefined1 *)(param_1 + 0x22) = 1;
  param_1[0x18] = 1;
  if ((int)param_1[0x19] < 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x16,0);
  }
  **(undefined1 **)(param_1 + 0x16) = 3;
  uVar2 = APostProcessVolume::GetPrivateStaticClass();
  iVar1 = param_1[0x10];
  param_1[0x10] = iVar1 + 1;
  if ((int)param_1[0x11] < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xe,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0xe) + (longlong)iVar1 * 8) = uVar2;
  return param_1;
}



// FUNCTION 142cdd430 FUN_142cdd430 body=33 status=ok
// SIG undefined FUN_142cdd430(void)

undefined8 * FUN_142cdd430(undefined8 *param_1)

{
  FUN_142325eb0();
  *param_1 = &PTR__scalar_deleting_destructor__14585b0f8;
  return param_1;
}



// FUNCTION 142cdd460 FUN_142cdd460 body=86 status=ok
// SIG undefined FUN_142cdd460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142cdd460(undefined8 *param_1)

{
  FUN_1423261d0();
  *param_1 = &PTR__scalar_deleting_destructor__14585b118;
  param_1[0x11] = 0xffffffffbf800000;
  param_1[0x12] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x13) = DAT_1468b5d98;
  FWeakObjectPtr::operator=((longlong)param_1 + 0x9c,0);
  return param_1;
}



// FUNCTION 142cdd4e0 FUN_142cdd4e0 body=240 status=ok
// SIG undefined FUN_142cdd4e0(void)

undefined8 * FUN_142cdd4e0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14585b8b8;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  FUN_142d979c0(param_1 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0xc1) = 3;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x43fa0000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x1b);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x2b);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x3a);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x44000000;
  *(undefined4 *)(param_1 + 0xe) = 0x41c80000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x43800000;
  *(undefined4 *)(param_1 + 0x10) = 0x3fa00000;
  *(undefined1 *)((longlong)param_1 + 0x151) = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x4b) = 0x41200000;
  *(undefined4 *)(param_1 + 0x15) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x11) = 0x3dcccccd;
  return param_1;
}



// FUNCTION 142cdd5d0 FUN_142cdd5d0 body=193 status=ok
// SIG undefined FUN_142cdd5d0(void)

undefined8 * FUN_142cdd5d0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTDecorator::UBTDecorator();
  local_10 = 0xe;
  *param_1 = &PTR__scalar_deleting_destructor__14585c558;
  param_1[5] = &PTR_LAB_1441d5298;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0xe,"Gbx Condition",0xe,0x3f);
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
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 4;
  return param_1;
}



// FUNCTION 142cdd6a0 FUN_142cdd6a0 body=205 status=ok
// SIG undefined FUN_142cdd6a0(void)

undefined8 * FUN_142cdd6a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142c63600();
  *param_1 = &PTR_FUN_14585bb38;
  param_1[5] = &PTR_LAB_14585be18;
  param_1[0xc] = &PTR_LAB_14585be60;
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
  param_1[0x18] = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x19) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x447a0000;
  uVar1 = FCameraParams_Orbit::StaticStruct();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 142cdd770 FUN_142cdd770 body=220 status=ok
// SIG undefined FUN_142cdd770(void)

undefined8 * FUN_142cdd770(undefined8 *param_1)

{
  FUN_142c62e40();
  *param_1 = &PTR_FUN_14585d7a0;
  param_1[5] = &PTR_LAB_14585da38;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(byte *)((longlong)param_1 + 0xd1) = *(byte *)((longlong)param_1 + 0xd1) | 4;
  *(byte *)((longlong)param_1 + 0x10d) = *(byte *)((longlong)param_1 + 0x10d) | 1;
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  return param_1;
}



// FUNCTION 142cdd850 FUN_142cdd850 body=2792 status=ok
// SIG undefined FUN_142cdd850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142cdd850(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_48;
  
  FUN_1423278e0();
  *param_1 = &PTR_FUN_14585a360;
  param_1[5] = &PTR_LAB_14585b000;
  param_1[0x42] = &PTR_LAB_14585b030;
  param_1[0x43] = &PTR_LAB_14585b0a0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 2;
  param_1[0x115] = 0;
  *(undefined1 *)(param_1 + 0x116) = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  *(undefined1 *)(param_1 + 0x129) = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  *(undefined1 *)(param_1 + 0x13c) = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  *(undefined1 *)(param_1 + 0x14f) = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  *(undefined1 *)(param_1 + 0x162) = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  *(undefined1 *)(param_1 + 0x175) = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  *(undefined1 *)(param_1 + 0x188) = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  *(undefined1 *)(param_1 + 0x19b) = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  *(undefined1 *)(param_1 + 0x1ae) = 0;
  param_1[0x1bf] = 0;
  param_1[0x1c0] = 0;
  *(undefined1 *)(param_1 + 0x1c1) = 0;
  param_1[0x1d2] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d5] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d7] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  *(undefined4 *)(param_1 + 0x1fa) = 3;
  *(undefined4 *)(param_1 + 0x1ff) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1064) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x106c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1074) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20f) = 0;
  param_1[0x210] = 0;
  param_1[0x211] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x200,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0x100c) = 0x3f800000;
  FUN_142cdd150(param_1 + 0x212);
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x21b) = DAT_1468b5d98;
  *(undefined1 *)(param_1 + 0x21d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10ec) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x21e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10f4) = 0x41200000;
  *(undefined4 *)(param_1 + 0x21f) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x10fc) = 0;
  *(undefined1 *)(param_1 + 0x220) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1104) = 0;
  *(undefined4 *)(param_1 + 0x221) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x110c) = 2;
  *(undefined1 *)((longlong)param_1 + 0x111c) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x112c);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x113c);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x229);
  param_1[0x22d] = 0;
  param_1[0x22e] = 0;
  param_1[0x22f] = 0;
  param_1[0x230] = 0;
  param_1[0x232] = 0;
  param_1[0x233] = 0;
  param_1[0x234] = 0;
  param_1[0x235] = 0;
  param_1[0x236] = 0;
  param_1[0x237] = 0;
  param_1[0x238] = 0;
  param_1[0x239] = 0;
  param_1[0x23a] = 0;
  param_1[0x23b] = 0;
  param_1[0x23c] = 0;
  param_1[0x23d] = 0;
  FUN_142cdd1c0(param_1 + 0x241);
  param_1[0x269] = 0;
  param_1[0x26a] = 0;
  param_1[0x26b] = 0;
  param_1[0x26c] = 0;
  param_1[0x26d] = 0;
  param_1[0x26e] = 0;
  param_1[0x272] = 0;
  param_1[0x273] = 0;
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x13ac);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x277);
  param_1[0x27a] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x27b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13dc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x13e4) = 0;
  *(undefined4 *)(param_1 + 0x27e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13f4) = 0xffffffff;
  param_1[0x27f] = 0;
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1404) = 0;
  *(undefined4 *)(param_1 + 0x281) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x140c) = 0;
  *(undefined4 *)(param_1 + 0x282) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x1414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x141c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1424) = 0;
  *(undefined4 *)((longlong)param_1 + 0x142c) = 0;
  param_1[0x286] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x287) = DAT_1468b5d98;
  *(undefined1 *)((longlong)param_1 + 0x143c) = 0;
  *(undefined1 *)(param_1 + 0x288) = 0;
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x145c);
  *(undefined4 *)(param_1 + 0x28d) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x146c) = 0x41200000;
  *(undefined4 *)(param_1 + 0x28e) = 0x42340000;
  *(undefined1 *)((longlong)param_1 + 0x1474) = 0;
  *(undefined4 *)(param_1 + 0x28f) = 0x3f000000;
  *(undefined2 *)((longlong)param_1 + 0x147c) = 1;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x290);
  *(undefined4 *)((longlong)param_1 + 0x148c) = 0x43070000;
  *(undefined4 *)(param_1 + 0x292) = 0x43b40000;
  *(undefined4 *)((longlong)param_1 + 0x1494) = 0x43b40000;
  *(undefined1 *)(param_1 + 0x293) = 0;
  FUN_142c48df0((longlong)param_1 + 0x149c,0x41200000,0x42c80000);
  *(undefined4 *)((longlong)param_1 + 0x14a4) = 0x3f800000;
  FUN_142c48df0(param_1 + 0x295,0x43960000,0x447a0000);
  *(undefined4 *)((longlong)param_1 + 0x14b4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x297) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14bc) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0x14e1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14e4) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x29d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14ec) = 0x40a00000;
  *(undefined1 *)(param_1 + 0x29e) = 0;
  param_1[0x2af] = 0;
  param_1[0x2b0] = 0;
  *(undefined1 *)(param_1 + 0x2b1) = 0;
  param_1[0x2c2] = 0;
  param_1[0x2c3] = 0;
  *(undefined1 *)(param_1 + 0x2c4) = 0;
  param_1[0x2d5] = 0;
  param_1[0x2d6] = 0;
  *(undefined1 *)(param_1 + 0x2d7) = 0;
  param_1[0x2e8] = 0;
  param_1[0x2e9] = 0;
  *(undefined1 *)(param_1 + 0x2ed) = 0;
  FUN_1424b51c0(param_1 + 0x2fb);
  *(undefined1 *)(param_1 + 0x30f) = 0;
  uVar1 = param_1[0x2ee];
  _guard_xfg_dispatch_icall_nop(param_1 + 0x2ef,0,0x158);
  param_1[0x2ee] = uVar1;
  param_1[0x31a] = 0;
  param_1[0x31b] = 0;
  param_1[0x31c] = 0;
  param_1[0x31d] = 0;
  param_1[0x31e] = 0;
  param_1[799] = 0;
  param_1[800] = 0;
  param_1[0x321] = 0;
  param_1[0x322] = 0;
  *(undefined1 *)(param_1 + 0x328) = 0;
  FUN_142cb24d0(param_1 + 0x32a);
  *(undefined1 *)(param_1 + 0x407) = 0;
  *(undefined4 *)((longlong)param_1 + 0x203c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x408) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x417) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20bc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x418) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x419) = 0;
  param_1[0x41a] = 0;
  param_1[0x41b] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x40a,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0x205c) = 0x3f800000;
  param_1[0x409] = 0;
  *(undefined4 *)(param_1 + 0x41c) = 0;
  param_1[0x41e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x20e4) = _DAT_1466ad1f0;
  *(undefined4 *)((longlong)param_1 + 0x20ec) = DAT_1466ad1f8;
  FUN_142c629f0(param_1 + 0x422);
  FUN_142c62900(param_1 + 0x42c);
  FUN_142c626b0(param_1 + 0x440);
  param_1[0x445] = 0;
  param_1[0x446] = 0;
  param_1[0x449] = 0;
  param_1[0x44a] = 0;
  *(undefined4 *)(param_1 + 1099) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x225c) = 0;
  param_1[0x44d] = 0;
  *(undefined4 *)(param_1 + 0x44e) = 0;
  param_1[0x453] = 0;
  param_1[0x454] = 0;
  param_1[0x457] = 0;
  param_1[0x458] = 0;
  *(undefined4 *)(param_1 + 0x459) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x22cc) = 0;
  param_1[0x45b] = 0;
  *(undefined4 *)(param_1 + 0x45c) = 0;
  param_1[0x461] = 0;
  param_1[0x462] = 0;
  param_1[0x465] = 0;
  param_1[0x466] = 0;
  *(undefined4 *)(param_1 + 0x467) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x233c) = 0;
  param_1[0x469] = 0;
  *(undefined4 *)(param_1 + 0x46a) = 0;
  param_1[0x46c] = 0;
  param_1[0x46d] = 0;
  *(undefined2 *)(param_1 + 0x46e) = 0xffff;
  *(undefined4 *)(param_1 + 0x46f) = 0;
  param_1[0x471] = 0;
  param_1[0x472] = 0;
  param_1[0x475] = 0;
  param_1[0x476] = 0;
  *(undefined4 *)(param_1 + 0x477) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x23bc) = 0;
  param_1[0x479] = 0;
  *(undefined4 *)(param_1 + 0x47a) = 0;
  param_1[0x470] = &PTR_FUN_14413ebc8;
  *(undefined2 *)(param_1 + 0x47b) = 0x404;
  *(undefined4 *)((longlong)param_1 + 0x23dc) = 0x7f7fffff;
  param_1[0x47c] = 0;
  param_1[0x47d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x23fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2404) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x240c) = 0;
  *(undefined4 *)(param_1 + 0x482) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x2414) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x241c) = DAT_1468b5d98;
  FRichCurve::Reset();
  FUN_142d799c0(param_1 + 0x485);
  FTextSnapshot::FTextSnapshot(param_1 + 0x4ad);
  *(undefined2 *)(param_1 + 0x4b0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2582) = 0;
  param_1[0x4b7] = 0;
  param_1[0x4b8] = 0;
  param_1[0x4b9] = 0;
  param_1[0x4ba] = 0;
  FUN_14246da30(param_1 + 0x4bb);
  FUN_14246da30((longlong)param_1 + 0x25ec);
  FUN_14246da30(param_1 + 0x4c0);
  FUN_14246da30((longlong)param_1 + 0x2614);
  FUN_14246da30(param_1 + 0x4c5);
  FUN_14246da30((longlong)param_1 + 0x263c);
  *(undefined4 *)(param_1 + 0x4cc) = DAT_1464aa810;
  *(undefined4 *)((longlong)param_1 + 0x2664) = DAT_1464aa814;
  *(undefined4 *)(param_1 + 0x4cd) = DAT_1464aa818;
  *(undefined4 *)((longlong)param_1 + 0x266c) = DAT_1464aa81c;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(uint *)(param_1 + 0x225) = *(uint *)(param_1 + 0x225) & 0xfffffff3 | 2;
  *(undefined1 *)(param_1 + 0x4ce) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2674) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x227) = 0x41000000;
  FUN_14246fd50((longlong)param_1 + 0x112c,0x3f800000);
  FUN_14246fd50((longlong)param_1 + 0x145c,0x42b40000);
  FUN_14246fd50((longlong)param_1 + 0x113c,*(float *)(param_1 + 0x4f) * 0.5);
  FUN_14246fd50(param_1 + 0x229,*(float *)(param_1 + 0x4f) * 0.5);
  *(undefined4 *)((longlong)param_1 + 0x115c) = *(undefined4 *)(param_1 + 0x56);
  *(undefined4 *)(param_1 + 0x5a) = *(undefined4 *)(param_1 + 0x56);
  *(undefined4 *)((longlong)param_1 + 0x1154) = *(undefined4 *)(param_1 + 0x4f);
  *(undefined4 *)(param_1 + 0x22b) = *(undefined4 *)(param_1 + 0x4f);
  *(undefined4 *)((longlong)param_1 + 0x2104) = *(undefined4 *)(param_1 + 0x4e);
  *(undefined4 *)(param_1 + 0x22c) = 0x43af0000;
  *(undefined4 *)((longlong)param_1 + 0x1164) = 0x42480000;
  FUN_14246fd50(param_1 + 0x290,0x43b40000);
  param_1[0x26b] = 0;
  param_1[0x26c] = 0;
  param_1[0x26d] = 0;
  param_1[0x26e] = 0;
  *(undefined4 *)(param_1 + 0x26f) = 0xc47a0000;
  *(undefined4 *)(param_1 + 0x1fe) = 0x3dcccccd;
  param_1[0x2ea] = DAT_1464aa798;
  uVar2 = DAT_1464aa7a0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0x43b4000043340000;
  *(undefined4 *)(param_1 + 0x2eb) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0x43340000;
  param_1[0x23f] = 0;
  *(undefined4 *)(param_1 + 0x420) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x421) = 0x43960000;
  FUN_14246fd50((longlong)param_1 + 0x13ac,*(undefined4 *)(param_1 + 0x5f));
  FUN_14246fd50(param_1 + 0x277,*(undefined4 *)(param_1 + 0x5f));
  param_1[0x27a] = DAT_1466ad600;
  uVar2 = DAT_1466ad608;
  *(uint *)(param_1 + 0x102) = *(uint *)(param_1 + 0x102) | 1;
  *(undefined4 *)(param_1 + 0x27b) = uVar2;
  param_1[0x28a] = local_48;
  *(undefined4 *)(param_1 + 0x28b) = 0x43340000;
  *(undefined4 *)(param_1 + 0x46b) = 0;
  param_1[0x409] = param_1;
  return param_1;
}



// FUNCTION 142cde340 FUN_142cde340 body=100 status=ok
// SIG undefined FUN_142cde340(void)

undefined8 * FUN_142cde340(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14585c860;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x12) = 1;
  return param_1;
}



// FUNCTION 142cde3b0 FUN_142cde3b0 body=112 status=ok
// SIG undefined FUN_142cde3b0(void)

undefined8 * FUN_142cde3b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_FUN_14585cae8;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x11) = 2;
  FUN_141f84110(param_1 + 0x12);
  return param_1;
}



// FUNCTION 142cde420 FUN_142cde420 body=121 status=ok
// SIG undefined FUN_142cde420(void)

undefined8 * FUN_142cde420(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14585cd70;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 142cde4a0 FUN_142cde4a0 body=103 status=ok
// SIG undefined FUN_142cde4a0(void)

undefined8 * FUN_142cde4a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14585cff8;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x11) = 0x3e800000;
  return param_1;
}



// FUNCTION 142cde510 FUN_142cde510 body=100 status=ok
// SIG undefined FUN_142cde510(void)

undefined8 * FUN_142cde510(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14585d280;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x11) = 1;
  return param_1;
}



// FUNCTION 142cde580 FUN_142cde580 body=139 status=ok
// SIG undefined FUN_142cde580(void)

undefined8 * FUN_142cde580(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_141781840();
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  *param_1 = &PTR__scalar_deleting_destructor__14585d508;
  param_1[0x12] = 0;
  param_1[0x13] = 2;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x12,0);
  puVar1 = (undefined8 *)param_1[0x12];
  *puVar1 = 0;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142cde610 FUN_142cde610 body=523 status=ok
// SIG undefined FUN_142cde610(void)

undefined8 * FUN_142cde610(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14585b638;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xc);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x1b);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x2a);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x39);
  *(undefined4 *)(param_1 + 6) = 0x3f666666;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f666666;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x44fa0000;
  *(undefined4 *)(param_1 + 8) = 0x3f000000;
  *(undefined4 *)(param_1 + 9) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xb) = 0x41a00000;
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0xc,local_res18,0,0,0,*puVar1);
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0xc,local_res18,0x3f800000,0x3f800000,0,*puVar1);
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0x1b,local_res18,0,0,0,*puVar1);
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0x1b,local_res18,0x3f800000,0x3f800000,0,*puVar1);
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0x39,local_res18,0,0,0,*puVar1);
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0x39,local_res18,0x3f800000,0x3f800000,0,*puVar1);
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0x2a,local_res18,0,0,0,*puVar1);
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(param_1 + 0x2a,local_res18,0x3f800000,0x3f800000,0,*puVar1);
  return param_1;
}



// FUNCTION 142cde820 FUN_142cde820 body=110 status=ok
// SIG undefined FUN_142cde820(void)

undefined8 * FUN_142cde820(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__14585a0e0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x432f0000;
  *(undefined4 *)(param_1 + 0xb) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x42480000;
  *(undefined4 *)(param_1 + 9) = 0x42200000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x42960000;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"UpperBody",1);
  param_1[8] = *puVar1;
  return param_1;
}



// FUNCTION 142cde890 FUN_142cde890 body=573 status=ok
// SIG undefined FUN_142cde890(void)

undefined8 * FUN_142cde890(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_142de3ad0();
  *param_1 = &PTR_FUN_14585b120;
  plVar1 = param_1 + 0xc1;
  param_1[5] = &PTR_LAB_14585b608;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)((longlong)param_1 + 0x442) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(undefined2 *)(param_1 + 0x92) = 0;
  *(undefined1 *)((longlong)param_1 + 0x492) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  *(undefined1 *)((longlong)param_1 + 0x49a) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined2 *)(param_1 + 0x9b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4da) = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4e2) = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined1 *)(param_1 + 0xae) = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  *plVar1 = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  *(undefined1 *)((longlong)param_1 + 0x541) = 1;
  *(undefined1 *)(param_1 + 0xa5) = 1;
  *(uint *)((longlong)param_1 + 0x544) = *(uint *)((longlong)param_1 + 0x544) & 0xfffffff9 | 0x39b8;
  *(undefined1 *)((longlong)param_1 + 0x491) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4d9) = 1;
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    param_1[0xc3] = param_1;
    param_1[0xc2] = &DAT_146b31748;
    *plVar1 = (longlong)DAT_146b31748;
    DAT_146b31748 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 142cdead0 FUN_142cdead0 body=95 status=ok
// SIG undefined FUN_142cdead0(void)

void FUN_142cdead0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xf;
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



// FUNCTION 142cdeb30 FUN_142cdeb30 body=221 status=ok
// SIG undefined FUN_142cdeb30(void)

void FUN_142cdeb30(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar3 = lVar3 + 0x300;
    do {
      if (*(longlong *)(lVar3 + 0xc0) != 0) {
        FMemory::Free();
      }
      FRichCurve::~FRichCurve(lVar3);
      FRichCurve::~FRichCurve(lVar3 + -0x80);
      if (*(longlong *)(lVar3 + -0x98) != 0) {
        FMemory::Free();
      }
      FRichCurve::~FRichCurve(lVar3 + -0x118);
      lVar4 = 4;
      lVar1 = lVar3 + -0x128;
      do {
        lVar1 = lVar1 + -0x70;
        FRichCurve::~FRichCurve(lVar1);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      lVar3 = lVar3 + 0x3d0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar3 = *param_1;
  }
  if (lVar3 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142cdec10 FUN_142cdec10 body=99 status=ok
// SIG undefined FUN_142cdec10(void)

void FUN_142cdec10(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x50;
    do {
      FUN_14099a830(lVar1 + 0x10);
      FUN_14099a7a0(lVar1);
      lVar1 = lVar1 + 0x80;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142cdec80 ~TArray<FInputMappingPreset,TSizedDefaultAllocator<32>_> body=99 status=ok
// SIG undefined ~TArray<FInputMappingPreset,TSizedDefaultAllocator<32>_>(void)

void TArray<FInputMappingPreset,TSizedDefaultAllocator<32>_>::
     ~TArray<FInputMappingPreset,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x10;
    do {
      FUN_14099a830(lVar1 + 0x10);
      FUN_14099a7a0(lVar1);
      lVar1 = lVar1 + 0x30;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142cdecf0 FUN_142cdecf0 body=102 status=ok
// SIG undefined FUN_142cdecf0(void)

void FUN_142cdecf0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x18;
    do {
      FRichCurve::~FRichCurve(lVar1 + 0x78);
      FRichCurve::~FRichCurve(lVar1);
      lVar1 = lVar1 + 0x110;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142cded60 FUN_142cded60 body=96 status=ok
// SIG undefined FUN_142cded60(void)

void FUN_142cded60(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  plVar3 = *(longlong **)(param_1 + 0x28);
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
  return;
}



// FUNCTION 142cdedc0 FUN_142cdedc0 body=215 status=ok
// SIG undefined FUN_142cdedc0(void)

undefined1 FUN_142cdedc0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    plVar7 = (longlong *)0x0;
    piVar1 = (int *)(param_1[1] + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      plVar2 = (longlong *)param_1[1];
      plVar6 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar6 = plVar7, !bVar8) {
          LOCK();
          bVar8 = iVar5 == (int)plVar2[1];
          if (bVar8) {
            *(int *)(plVar2 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar8) {
            plVar6 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar7 = (longlong *)*param_1;
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar8 = iVar5 == 0;
          if (bVar8) {
            *(int *)(plVar2 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      uVar4 = (**(code **)(*plVar7 + 0xa0))(plVar7);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar6 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      return uVar4;
    }
  }
  return 1;
}



// FUNCTION 142cdeea0 FUN_142cdeea0 body=174 status=ok
// SIG undefined FUN_142cdeea0(void)

void FUN_142cdeea0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  longlong local_18;
  undefined4 local_10;
  
  cVar1 = (**(code **)(*(longlong *)*param_1 + 0x5c0))();
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*(longlong *)*param_1 + 0x2a0))(), cVar1 != '\0')) {
    lVar2 = FUN_14233f990(*param_1);
    cVar1 = (**(code **)(*(longlong *)*param_1 + 0x980))((longlong *)*param_1,(int)param_1[1],lVar2)
    ;
    if (cVar1 != '\0') {
      fVar3 = *(float *)(param_1 + 1);
      if (*(float *)(lVar2 + 0x58) <= fVar3) {
        FUN_142ccf4f0(*param_1 + 6000,*(undefined4 *)((longlong)param_1 + 0xc),param_1 + 2);
        fVar3 = *(float *)(param_1 + 1);
      }
      local_10 = (undefined4)param_1[3];
      local_18 = param_1[2];
      (**(code **)(*(longlong *)*param_1 + 0x9f0))
                ((longlong *)*param_1,fVar3,&local_18,*(undefined1 *)((longlong)param_1 + 0x1c));
    }
  }
  return;
}



// FUNCTION 142cdef50 FUN_142cdef50 body=1750 status=ok
// SIG undefined FUN_142cdef50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cdef50(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  float fVar18;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined4 local_180;
  undefined4 local_178 [2];
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  undefined1 local_148 [8];
  longlong *local_140;
  ulonglong local_138;
  undefined4 *local_130;
  undefined8 *local_128;
  undefined4 *local_120;
  undefined1 *local_118;
  undefined1 local_110 [4];
  float local_10c;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined4 local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if (*(longlong *)(*param_1 + 0xfe0) != 0) {
    plVar6 = (longlong *)FUN_142cdb8d0(param_2 + 0x10);
    plVar7 = (longlong *)FUN_142cdb850(param_2 + 0x10);
    uVar12 = 0;
    local_140 = plVar7;
    if ((plVar6 != (longlong *)0x0) && (lVar10 = *plVar6, lVar10 != 0)) {
      local_170 = 0;
      local_168 = 0;
      local_160 = 0;
      local_158 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0xffff;
      local_e0 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0xffffffff;
      local_9c = 0;
      local_90 = 0;
      local_88 = 0;
      local_d8 = &PTR_FUN_14413ebc8;
      local_80 = 0x404;
      local_7c = 0x7f7fffff;
      local_78 = 0;
      local_70 = 0;
      uVar8 = (longlong)*(int *)(lVar10 + 0x38) & 0x3fffffffffffffff;
      if ((longlong)*(int *)(lVar10 + 0x38) * 4 + *(ulonglong *)(lVar10 + 0x30) <
          *(ulonglong *)(lVar10 + 0x30)) {
        uVar8 = uVar12;
      }
      uVar14 = uVar12;
      if (uVar8 != 0) {
        do {
          cVar5 = FUN_142cad990(*(undefined8 *)(*param_1 + 0xfe0));
          if (cVar5 != '\0') {
            uVar14 = (ulonglong)((int)uVar14 + 1);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar8);
        if (0 < (int)uVar14) {
          if (*(int *)(*param_1 + 0x2230) - *(int *)(*param_1 + 0x225c) < (int)uVar14) {
            FUN_142cfe2a0();
          }
          uVar14 = 0;
          puVar13 = *(undefined4 **)(*plVar6 + 0x30);
          uVar8 = (ulonglong)*(int *)(*plVar6 + 0x38);
          uVar12 = uVar8 & 0x3fffffffffffffff;
          if (puVar13 + uVar8 < puVar13) {
            uVar12 = uVar14;
          }
          plVar7 = local_140;
          local_138 = uVar12;
          if (uVar12 != 0) {
            do {
              uVar8 = 0;
              local_178[0] = *puVar13;
              cVar5 = FUN_142cad990(*(undefined8 *)(*param_1 + 0xfe0));
              lVar10 = local_168;
              if (cVar5 != '\0') {
                uVar16 = local_168._4_4_;
                local_168 = (ulonglong)local_168._4_4_ << 0x20;
                if ((lVar10 < 0) && (uVar16 != 0)) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
                  ::ResizeTo(&local_170,0);
                }
                lVar10 = local_158;
                uVar16 = local_158._4_4_;
                local_158 = (ulonglong)local_158._4_4_ << 0x20;
                if ((lVar10 < 0) && (uVar16 != 0)) {
                  TArray<float,FDefaultAllocator>::ResizeTo(&local_160,0);
                }
                FRichCurve::Reset(&local_d8);
                FUN_142c9e3d0(*(undefined8 *)(*param_1 + 0xfe0),local_178[0],&local_170,&local_160);
                uVar15 = uVar8;
                uVar17 = uVar8;
                if (0 < (int)local_168) {
                  do {
                    lVar10 = local_160;
                    pfVar1 = (float *)(local_170 + 0x10 + uVar15);
                    fVar18 = *pfVar1;
                    fVar2 = pfVar1[1];
                    fVar3 = pfVar1[2];
                    puVar9 = (undefined4 *)FKeyHandle::FKeyHandle(local_150);
                    local_180 = *puVar9;
                    local_188 = 0;
                    FRichCurve::AddKey(&local_d8,local_14c,
                                       SQRT(fVar2 * fVar2 + fVar18 * fVar18 + fVar3 * fVar3),
                                       *(undefined4 *)(lVar10 + uVar8));
                    uVar12 = local_138;
                    uVar16 = (int)uVar17 + 1;
                    uVar8 = uVar8 + 4;
                    uVar15 = uVar15 + 0x30;
                    uVar17 = (ulonglong)uVar16;
                  } while ((int)uVar16 < (int)local_168);
                  local_130 = local_178;
                  local_128 = &local_f8;
                  FUN_142cdb540(*param_1 + 0x2228,local_148,&local_130,0);
                }
              }
              puVar13 = puVar13 + 1;
              uVar14 = uVar14 + 1;
              plVar7 = local_140;
            } while (uVar14 != uVar12);
          }
        }
      }
      FRichCurve::~FRichCurve(&local_d8);
      if (local_160 != 0) {
        FMemory::Free();
      }
      if (local_170 != 0) {
        FMemory::Free();
      }
    }
    uVar12 = 0;
    if ((plVar7 != (longlong *)0x0) && (lVar10 = *plVar7, lVar10 != 0)) {
      local_170 = 0;
      local_168 = 0;
      local_160 = 0;
      local_158 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0xffff;
      local_e0 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0xffffffff;
      local_9c = 0;
      local_90 = 0;
      local_88 = 0;
      local_d8 = &PTR_FUN_14413ebc8;
      local_80 = 0x404;
      local_7c = 0x7f7fffff;
      local_78 = 0;
      local_70 = 0;
      puVar13 = *(undefined4 **)(lVar10 + 0x30);
      uVar8 = (longlong)*(int *)(lVar10 + 0x38) & 0x3fffffffffffffff;
      if (puVar13 + *(int *)(lVar10 + 0x38) < puVar13) {
        uVar8 = uVar12;
      }
      uVar14 = uVar12;
      if (uVar8 != 0) {
        do {
          cVar5 = FUN_142cad990(*(undefined8 *)(*param_1 + 0xfe0),*puVar13);
          if (cVar5 != '\0') {
            uVar12 = (ulonglong)((int)uVar12 + 1);
          }
          puVar13 = puVar13 + 1;
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar8);
        iVar11 = (int)uVar12;
        if (0 < iVar11) {
          lVar10 = *param_1;
          if (*(int *)(lVar10 + 0x22a0) - *(int *)(lVar10 + 0x22cc) < iVar11) {
            FUN_142cfe2a0(lVar10 + 0x2298,uVar12);
            lVar10 = *param_1;
          }
          if (*(int *)(lVar10 + 0x2310) - *(int *)(lVar10 + 0x233c) < iVar11) {
            FUN_14089d3b0(lVar10 + 0x2308,uVar12);
          }
          uVar14 = 0;
          puVar13 = *(undefined4 **)(*plVar7 + 0x30);
          uVar8 = (ulonglong)*(int *)(*plVar7 + 0x38);
          uVar12 = uVar8 & 0x3fffffffffffffff;
          if (puVar13 + uVar8 < puVar13) {
            uVar12 = uVar14;
          }
          local_138 = uVar12;
          if (uVar12 != 0) {
            do {
              uVar8 = 0;
              local_178[0] = *puVar13;
              cVar5 = FUN_142cad990(*(undefined8 *)(*param_1 + 0xfe0));
              lVar10 = local_168;
              if (cVar5 != '\0') {
                uVar16 = local_168._4_4_;
                local_168 = (ulonglong)local_168._4_4_ << 0x20;
                if ((lVar10 < 0) && (uVar16 != 0)) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
                  ::ResizeTo(&local_170,0);
                }
                lVar10 = local_158;
                uVar16 = local_158._4_4_;
                local_158 = (ulonglong)local_158._4_4_ << 0x20;
                if ((lVar10 < 0) && (uVar16 != 0)) {
                  TArray<float,FDefaultAllocator>::ResizeTo(&local_160,0);
                }
                FRichCurve::Reset(&local_d8);
                FUN_142c9e3d0(*(undefined8 *)(*param_1 + 0xfe0),local_178[0],&local_170,&local_160);
                if (0 < (int)local_168) {
                  pfVar1 = (float *)(local_170 + 0x10 + (longlong)((int)local_168 + -1) * 0x30);
                  fVar18 = SQRT(pfVar1[1] * pfVar1[1] + *pfVar1 * *pfVar1 + pfVar1[2] * pfVar1[2]);
                  uVar15 = uVar8;
                  uVar17 = uVar8;
                  if (0 < (int)local_168) {
                    do {
                      lVar10 = local_160;
                      pfVar1 = (float *)(local_170 + 0x10 + uVar15);
                      fVar2 = *pfVar1;
                      fVar3 = pfVar1[1];
                      fVar4 = pfVar1[2];
                      puVar9 = (undefined4 *)FKeyHandle::FKeyHandle(local_148);
                      local_180 = *puVar9;
                      local_188 = 0;
                      FRichCurve::AddKey(&local_d8,local_14c,
                                         SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4) -
                                         fVar18,*(undefined4 *)(lVar10 + uVar8));
                      uVar16 = (int)uVar17 + 1;
                      uVar17 = (ulonglong)uVar16;
                      uVar15 = uVar15 + 0x30;
                      uVar8 = uVar8 + 4;
                      uVar12 = local_138;
                    } while ((int)uVar16 < (int)local_168);
                  }
                  local_130 = local_178;
                  local_128 = &local_f8;
                  FUN_142cdb540(*param_1 + 0x2298,local_150,&local_130,0);
                  local_120 = local_178;
                  local_118 = local_110;
                  local_10c = fVar18;
                  FUN_142cdb280(*param_1 + 0x2308,&local_140,&local_120,0);
                }
              }
              puVar13 = puVar13 + 1;
              uVar14 = uVar14 + 1;
            } while (uVar14 != uVar12);
          }
        }
      }
      FRichCurve::~FRichCurve(&local_d8);
      if (local_160 != 0) {
        FMemory::Free();
      }
      if (local_170 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142cdf630 FUN_142cdf630 body=1052 status=ok
// SIG undefined FUN_142cdf630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cdf630(longlong *param_1)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  float fVar5;
  ulonglong uVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [12];
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined4 uVar20;
  undefined1 uVar21;
  undefined2 uVar22;
  ulonglong local_88;
  ulonglong local_78;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  cVar7 = (**(code **)(*(longlong *)*param_1 + 0x5c0))();
  if (cVar7 == '\0') {
    return;
  }
  cVar7 = (**(code **)(*(longlong *)*param_1 + 0x2a0))();
  if (cVar7 == '\0') {
    return;
  }
  uVar8 = FUN_14233f990(*param_1);
  lVar9 = *(longlong *)*param_1;
  cVar7 = (**(code **)(lVar9 + 0x980))((longlong *)*param_1,lVar9,uVar8);
  if (cVar7 == '\0') {
    return;
  }
  FUN_14222dcf0(*(undefined8 *)(*param_1 + 0xfd8));
  fVar11 = (float)FNetworkPredictionData_Server_Character::GetServerMoveDeltaTime(uVar8);
  cVar7 = (**(code **)(**(longlong **)(*param_1 + 0xfd8) + 0x780))();
  if (cVar7 != '\0') {
    plVar2 = *(longlong **)(*(longlong *)(*param_1 + 0xfd8) + 0xaf8);
    local_88 = (ulonglong)(uint)((float)*(ushort *)((longlong)param_1 + 0xc) * 0.005493164) << 0x20;
    if (plVar2 != (longlong *)0x0) {
      lVar9 = FUN_142e6b880();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) &&
         ((cVar7 = (**(code **)(*plVar2 + 0x458))(plVar2), cVar7 != '\0' ||
          (cVar7 = (**(code **)(*plVar2 + 0x450))(plVar2), cVar7 == '\0')))) goto LAB_142cdf7c1;
    }
    fStack_70 = 0.0;
    local_78 = local_88;
    (**(code **)(**(longlong **)(*param_1 + 0xfd8) + 0x7b0))
              (*(longlong **)(*param_1 + 0xfd8),&local_78,fVar11);
  }
LAB_142cdf7c1:
  lVar9 = *param_1;
  local_78 = *(ulonglong *)((longlong)param_1 + 0x1c);
  fVar17 = *(float *)(lVar9 + 0x370);
  fVar16 = *(float *)(lVar9 + 0x374);
  uVar6 = *(ulonglong *)(lVar9 + 0x370);
  fVar1 = *(float *)(lVar9 + 0x378);
  fVar13 = *(float *)(lVar9 + 0x37c);
  fStack_70 = *(float *)((longlong)param_1 + 0x24);
  uVar8 = FWeakObjectPtr::Get(param_1 + 6);
  uVar22 = *(undefined2 *)((longlong)param_1 + 0xc);
  uVar21 = (undefined1)param_1[8];
  lVar9 = param_1[7];
  uVar20 = *(undefined4 *)((longlong)param_1 + 0x2c);
  uVar19 = *(undefined1 *)((longlong)param_1 + 0x29);
  uVar18 = (undefined1)param_1[5];
  FUN_14234f830(*param_1);
  lVar3 = *param_1;
  fVar17 = -fVar17;
  fVar16 = -fVar16;
  fStack_70 = -fVar1;
  fVar1 = *(float *)(lVar3 + 0x370);
  fVar14 = *(float *)(lVar3 + 0x374);
  fVar15 = *(float *)(lVar3 + 0x378);
  fVar5 = *(float *)(lVar3 + 0x37c);
  local_78 = uVar6 ^ 0x8000000080000000;
  local_68 = fVar17 * fVar5 * _DAT_146b31660 + fVar13 * fVar1 + fVar16 * fVar15 * _DAT_146b31650 +
             fStack_70 * fVar14 * _DAT_146b31640;
  fStack_64 = fVar17 * fVar15 * fRam0000000146b31664 + fVar13 * fVar14 +
              fVar16 * fVar5 * fRam0000000146b31654 + fStack_70 * fVar1 * fRam0000000146b31644;
  fStack_60 = fVar17 * fVar14 * fRam0000000146b31668 + fVar13 * fVar15 +
              fVar16 * fVar1 * fRam0000000146b31658 + fStack_70 * fVar5 * fRam0000000146b31648;
  fStack_5c = fVar17 * fVar1 * fRam0000000146b3166c + fVar13 * fVar5 +
              fVar16 * fVar14 * fRam0000000146b3165c + fStack_70 * fVar15 * fRam0000000146b3164c;
  fStack_6c = fVar13;
  pauVar10 = (undefined1 (*) [12])
             FQuat::Rotator(&local_68,&local_78,local_68,fVar14,uVar18,uVar19,uVar20,uVar8,lVar9,
                            uVar21,uVar22);
  lVar9 = *param_1;
  fVar17 = (float)DAT_146b315f0;
  fVar16 = DAT_146b315f0._4_4_;
  fVar1 = DAT_146b315f0._8_4_;
  auVar12._12_4_ = 0;
  auVar12._0_12_ = *pauVar10;
  auVar12 = divps(auVar12,_DAT_146b315f0);
  fVar13 = (float)*(undefined8 *)*pauVar10 - (float)(int)auVar12._0_4_ * fVar17;
  fVar14 = (float)((ulonglong)*(undefined8 *)*pauVar10 >> 0x20) - (float)(int)auVar12._4_4_ * fVar16
  ;
  fVar15 = *(float *)(*pauVar10 + 8) - (float)(int)auVar12._8_4_ * fVar1;
  fVar13 = (float)(((uint)(fVar13 + fVar17) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                  (uint)(fVar13 + fVar17));
  fVar14 = (float)(((uint)(fVar14 + fVar16) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                  (uint)(fVar14 + fVar16));
  fVar15 = (float)(((uint)(fVar15 + fVar1) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                  (uint)(fVar15 + fVar1));
  bVar4 = fRam0000000146b315e8 < fVar15;
  *(ulonglong *)(lVar9 + 0x1450) =
       CONCAT44(((uint)(fVar14 - fVar16) ^ (uint)fVar14) & -(uint)(fRam0000000146b315e4 < fVar14) ^
                (uint)fVar14,
                ((uint)(fVar13 - fVar17) ^ (uint)fVar13) & -(uint)(_DAT_146b315e0 < fVar13) ^
                (uint)fVar13);
  *(uint *)(lVar9 + 0x1458) = ((uint)(fVar15 - fVar1) ^ (uint)fVar15) & -(uint)bVar4 ^ (uint)fVar15;
  fVar11 = 1.0 / fVar11;
  *(float *)(*param_1 + 0x1454) = fVar11 * *(float *)(*param_1 + 0x1454);
  *(float *)(*param_1 + 0x1450) = fVar11 * *(float *)(*param_1 + 0x1450);
  *(float *)(*param_1 + 0x1458) = fVar11 * *(float *)(*param_1 + 0x1458);
  return;
}



// FUNCTION 142cdfa50 FUN_142cdfa50 body=150 status=ok
// SIG undefined FUN_142cdfa50(void)

void FUN_142cdfa50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = param_1[3];
  local_20 = *(undefined4 *)(param_1 + 4);
  local_18 = *(undefined8 *)((longlong)param_1 + 0xc);
  local_10 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar1 = FWeakObjectPtr::Get((longlong)param_1 + 0x2c);
  FUN_142e3baf0(*param_1,*(undefined4 *)(param_1 + 1),&local_18,&local_28,
                *(undefined1 *)((longlong)param_1 + 0x24),*(undefined1 *)((longlong)param_1 + 0x25),
                *(undefined4 *)(param_1 + 5),uVar1,param_1[7],*(undefined1 *)(param_1 + 8),
                *(undefined4 *)((longlong)param_1 + 0x44),*(undefined2 *)(param_1 + 9));
  return;
}



// FUNCTION 142cdfaf0 FUN_142cdfaf0 body=515 status=ok
// SIG undefined FUN_142cdfaf0(void)

void FUN_142cdfaf0(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 local_res8;
  code *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  longlong *local_38;
  int local_30;
  code *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(longlong *)(*param_1 + 0xfe0) == 0) {
    return;
  }
  plVar2 = (longlong *)FUN_142cdb950(param_2 + 2);
  plVar3 = (longlong *)FUN_142cdb9d0(param_2 + 2,*param_1);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  if (*plVar2 == 0) {
    return;
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  if (*plVar3 == 0) {
    return;
  }
  local_48 = FUN_142cf0dd0;
  iStack_40 = 0;
  local_28 = FUN_142cf0dd0;
  uStack_20 = 0;
  uStack_1c = uStack_3c;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e67b20(&local_38,*param_1,&local_28);
  local_res8 = 0;
  FUN_142256ad0(*(undefined8 *)(*param_1 + 0xfe0),*param_2,*plVar2,*plVar3,&local_38,&local_res8);
  cVar1 = FUN_142cad850(*(undefined8 *)(*param_1 + 0xfe0),*plVar3,0);
  if (cVar1 != '\0') {
    local_28 = (code *)&LAB_142d000e0;
    uStack_20 = 0;
    local_48 = (code *)0x0;
    iStack_40 = 0;
    FUN_140e67b20(&local_48,*param_1,&local_28);
    local_res8 = 0;
    FUN_142256ad0(*(undefined8 *)(*param_1 + 0xfe0),*param_2,*plVar3,*plVar2,&local_48,&local_res8);
    if (iStack_40 != 0) {
      if (local_48 == (code *)0x0) goto LAB_142cdfc8a;
      (**(code **)(*(longlong *)local_48 + 0x28))(local_48,0);
      if (local_48 != (code *)0x0) {
        local_48 = (code *)FMemory::Realloc(local_48,0,0);
      }
      iStack_40 = 0;
    }
    if (local_48 != (code *)0x0) {
      FMemory::Free(local_48);
    }
  }
LAB_142cdfc8a:
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}



// FUNCTION 142cdfd00 FUN_142cdfd00 body=408 status=ok
// SIG undefined FUN_142cdfd00(void)

void FUN_142cdfd00(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  longlong local_18;
  undefined4 local_10;
  
  lVar1 = FUN_14233f990(*param_1);
  if (*(float *)(lVar1 + 0x58) <= *(float *)(param_1 + 1)) {
    FUN_142ccf4f0(*param_1 + 6000,*(undefined4 *)((longlong)param_1 + 0xc),param_1 + 2);
  }
  local_18 = param_1[2];
  local_20 = 0x40400000;
  local_10 = (undefined4)param_1[3];
  local_28 = 0x400000003f800000;
  uVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x24);
  (**(code **)(*(longlong *)*param_1 + 0x9a8))
            ((longlong *)*param_1,(int)param_1[1],&local_18,&local_28,
             *(undefined1 *)((longlong)param_1 + 0x1c),*(undefined1 *)((longlong)param_1 + 0x1d),
             (int)param_1[4],uVar2,param_1[6],(char)param_1[7],
             *(undefined2 *)((longlong)param_1 + 0x3a));
  if (*(float *)(lVar1 + 0x58) <= *(float *)((longlong)param_1 + 0x3c)) {
    FUN_142ccf4f0(*param_1 + 6000,(int)param_1[8],(longlong)param_1 + 0x44);
  }
  local_18 = param_1[10];
  local_10 = (undefined4)param_1[0xb];
  local_28 = *(undefined8 *)((longlong)param_1 + 0x44);
  local_20 = *(undefined4 *)((longlong)param_1 + 0x4c);
  uVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x24);
  (**(code **)(*(longlong *)*param_1 + 0x9a8))
            ((longlong *)*param_1,*(undefined4 *)((longlong)param_1 + 0x3c),&local_28,&local_18,
             *(undefined1 *)((longlong)param_1 + 0x5c),*(undefined1 *)((longlong)param_1 + 0x1d),
             (int)param_1[0xc],uVar2,param_1[6],(char)param_1[7],
             *(undefined2 *)((longlong)param_1 + 0x3a));
  return;
}



// FUNCTION 142cdfea0 FUN_142cdfea0 body=227 status=ok
// SIG undefined FUN_142cdfea0(void)

void FUN_142cdfea0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = *(undefined8 *)((longlong)param_1 + 0x34);
  local_30 = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_28 = param_1[5];
  local_20 = *(undefined4 *)(param_1 + 6);
  local_18 = *(undefined8 *)((longlong)param_1 + 0xc);
  local_10 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar1 = FWeakObjectPtr::Get(param_1 + 9);
  FUN_142e3bbc0(*param_1,*(undefined4 *)(param_1 + 1),&local_18,*(undefined1 *)(param_1 + 3),
                *(undefined4 *)((longlong)param_1 + 0x1c),*(undefined4 *)(param_1 + 4),
                *(undefined4 *)((longlong)param_1 + 0x24),&local_28,&local_38,
                *(undefined1 *)(param_1 + 8),*(undefined1 *)((longlong)param_1 + 0x41),
                *(undefined4 *)((longlong)param_1 + 0x44),uVar1,param_1[10],
                *(undefined1 *)(param_1 + 0xb),*(undefined4 *)((longlong)param_1 + 0x5c),
                *(undefined2 *)(param_1 + 0xc));
  return;
}



// FUNCTION 142cdff90 FUN_142cdff90 body=177 status=ok
// SIG undefined FUN_142cdff90(void)

void FUN_142cdff90(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d8 [208];
  
  uVar5 = FUN_1405e0fd0(local_d8,param_1[3]);
  puVar6 = (undefined8 *)
           FUN_142c7bb40(*(undefined8 *)(param_1[1] + 0x11f8),local_e8,*(undefined8 *)param_1[2],
                         uVar5,0);
  param_1 = (undefined8 *)*param_1;
  if (param_1 != puVar6) {
    *param_1 = *puVar6;
    *puVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 1,puVar6 + 1);
  }
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)local_e0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  return;
}



// FUNCTION 142ce0050 FUN_142ce0050 body=659 status=ok
// SIG undefined FUN_142ce0050(void)

void FUN_142ce0050(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_res10;
  undefined8 local_res20;
  code *local_38;
  int iStack_30;
  code *local_28;
  int local_20;
  code *local_18;
  undefined4 uStack_10;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0xfe0) == 0) {
    return;
  }
  local_res10 = param_2;
  local_res20 = param_4;
  if (param_3 != DAT_146b31738) {
    if (param_3 != DAT_146b31740) {
      return;
    }
    local_18 = FUN_142cf5c60;
    uStack_10 = 0;
    local_38 = (code *)0x0;
    iStack_30 = 0;
    FUN_142cdb190(&local_38,lVar1,&local_18);
    FUN_142256830(*(undefined8 *)(*param_1 + 0xfe8),&local_res10,&local_res20,&local_38);
    local_18 = FUN_142cf6500;
    uStack_10 = 0;
    local_28 = (code *)0x0;
    local_20 = 0;
    FUN_142cdb190(&local_28,*param_1,&local_18);
    FUN_142256980(*(undefined8 *)(*param_1 + 0xfe8),&local_res10,&local_res20,&local_28);
    if (local_20 == 0) {
LAB_142ce0280:
      if (local_28 != (code *)0x0) {
        FMemory::Free(local_28);
      }
    }
    else if (local_28 != (code *)0x0) {
      (**(code **)(*(longlong *)local_28 + 0x28))(local_28,0);
      if (local_28 != (code *)0x0) {
        local_28 = (code *)FMemory::Realloc(local_28,0,0);
      }
      local_20 = 0;
      goto LAB_142ce0280;
    }
    pcVar2 = local_38;
    if (iStack_30 != 0) {
      if (local_38 == (code *)0x0) {
        return;
      }
      (**(code **)(*(longlong *)local_38 + 0x28))(local_38,0);
      if (local_38 != (code *)0x0) {
        local_38 = (code *)FMemory::Realloc(local_38,0,0);
      }
      iStack_30 = 0;
      pcVar2 = local_38;
    }
    goto LAB_142ce02c6;
  }
  local_38 = FUN_142cf5bb0;
  iStack_30 = 0;
  local_18 = FUN_142cf5bb0;
  uStack_10 = 0;
  local_28 = (code *)0x0;
  local_20 = 0;
  FUN_142cdb190(&local_28,lVar1,&local_18);
  FUN_142256830(*(undefined8 *)(*param_1 + 0xfe8),&local_res10,&local_res20,&local_28);
  local_18 = FUN_142cf64c0;
  uStack_10 = 0;
  local_38 = (code *)0x0;
  iStack_30 = 0;
  FUN_142cdb190(&local_38,*param_1,&local_18);
  FUN_142256980(*(undefined8 *)(*param_1 + 0xfe8),&local_res10,&local_res20,&local_38);
  if (iStack_30 == 0) {
LAB_142ce0157:
    if (local_38 != (code *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (code *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x28))(local_38,0);
    if (local_38 != (code *)0x0) {
      local_38 = (code *)FMemory::Realloc(local_38,0,0);
    }
    iStack_30 = 0;
    goto LAB_142ce0157;
  }
  pcVar2 = local_28;
  if (local_20 != 0) {
    if (local_28 == (code *)0x0) {
      return;
    }
    (**(code **)(*(longlong *)local_28 + 0x28))(local_28,0);
    if (local_28 != (code *)0x0) {
      local_28 = (code *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    pcVar2 = local_28;
  }
LAB_142ce02c6:
  if (pcVar2 != (code *)0x0) {
    FMemory::Free(pcVar2);
  }
  return;
}



// FUNCTION 142ce02f0 FUN_142ce02f0 body=121 status=ok
// SIG undefined FUN_142ce02f0(void)

void FUN_142ce02f0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FWeakObjectPtr::IsValid();
  if (cVar1 == '\0') {
    return;
  }
  cVar1 = *(char *)(param_1 + 8);
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
  if (cVar1 != '\0') {
    FUN_142ceb5d0(plVar2);
    return;
  }
  if ((char)plVar2[0x83] != '\x02') {
    *(undefined1 *)(plVar2 + 0x83) = 2;
    if ((longlong *)plVar2[0x80] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[0x80] + 0x260))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce035c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x478))(plVar2);
  return;
}



// FUNCTION 142ce0370 FUN_142ce0370 body=192 status=ok
// SIG undefined FUN_142ce0370(void)

void FUN_142ce0370(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  longlong local_18;
  undefined4 local_10;
  
  lVar1 = FUN_14233f990(*param_1);
  if (*(float *)(lVar1 + 0x58) <= *(float *)(param_1 + 1)) {
    FUN_142ccf4f0(*param_1 + 6000,*(undefined4 *)((longlong)param_1 + 0xc),param_1 + 2);
  }
  local_28 = *(undefined8 *)((longlong)param_1 + 0x1c);
  local_20 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_18 = param_1[2];
  local_10 = (undefined4)param_1[3];
  uVar2 = FWeakObjectPtr::Get(param_1 + 6);
  (**(code **)(*(longlong *)*param_1 + 0x9a8))
            ((longlong *)*param_1,(int)param_1[1],&local_18,&local_28,(char)param_1[5],
             *(undefined1 *)((longlong)param_1 + 0x29),*(undefined4 *)((longlong)param_1 + 0x2c),
             uVar2,param_1[7],(char)param_1[8],*(undefined2 *)((longlong)param_1 + 0x42));
  return;
}



// FUNCTION 142ce0430 FUN_142ce0430 body=119 status=ok
// SIG undefined FUN_142ce0430(void)

void FUN_142ce0430(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 local_68;
  undefined4 uStack_64;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar2 = *param_1;
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    local_68 = (undefined4)uVar2;
    uStack_64 = (undefined4)((ulonglong)uVar2 >> 0x20);
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = local_68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_64;
    puVar1[2] = param_1 + 1;
  }
  local_58[0] = FUN_142ce38f0;
  uVar2 = FUN_14247f500();
  FUN_14247d5a0(uVar2,*param_1,local_58);
  return;
}



// FUNCTION 142ce04b0 FUN_142ce04b0 body=243 status=ok
// SIG undefined FUN_142ce04b0(void)

void FUN_142ce04b0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = param_1[3];
  local_20 = (undefined4)param_1[4];
  local_18 = *(undefined8 *)((longlong)param_1 + 0xc);
  local_10 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x24);
  (**(code **)(*(longlong *)*param_1 + 0xa18))
            ((longlong *)*param_1,(int)param_1[1],&local_18,&local_28,uVar2,param_1[6],
             (char)param_1[7],*(undefined1 *)((longlong)param_1 + 0x39),
             *(undefined1 *)((longlong)param_1 + 0x3a));
  cVar1 = (**(code **)(*(longlong *)*param_1 + 0x5c0))();
  if ((((cVar1 != '\0') && (cVar1 = (**(code **)(*(longlong *)*param_1 + 0x2a0))(), cVar1 != '\0'))
      && (lVar3 = FUN_14233f840(*param_1), (*(byte *)(lVar3 + 0xa0) & 1) != 0)) &&
     (cVar1 = FUN_142cc7a00(*param_1 + 6000,param_1 + 8), cVar1 != '\0')) {
    *(undefined1 *)(*param_1 + 0x1944) = 1;
    FUN_142cd9750(*param_1 + 6000,param_1 + 8);
  }
  return;
}



// FUNCTION 142ce05b0 FUN_142ce05b0 body=372 status=ok
// SIG undefined FUN_142ce05b0(void)

void FUN_142ce05b0(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  longlong *local_38;
  int local_30;
  code *local_28;
  undefined4 uStack_20;
  
  if (*(longlong *)(*param_1 + 0xfe0) == 0) {
    return;
  }
  local_res10[0] = param_2;
  local_res20 = param_4;
  if (param_3 == DAT_146b31720) {
    local_28 = (code *)&LAB_142cf6540;
    uStack_20 = 0;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FUN_142cdb190(&local_38,*param_1,&local_28);
    FUN_142256830(*(undefined8 *)(*param_1 + 0xfe0),local_res10,&local_res20,&local_38);
    if (local_30 != 0) {
      if (local_38 == (longlong *)0x0) goto LAB_142ce067b;
      (**(code **)(*local_38 + 0x28))(local_38,0);
      if (local_38 != (longlong *)0x0) {
        local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
      }
      local_30 = 0;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
LAB_142ce067b:
  if (param_3 == DAT_146b31728) {
    local_28 = FUN_142cf60f0;
    uStack_20 = 0;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FUN_142cdb190(&local_38,*param_1,&local_28);
    FUN_142256830(*(undefined8 *)(*param_1 + 0xfe0),local_res10,&local_res20,&local_38);
    if (local_30 != 0) {
      if (local_38 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_38 + 0x28))(local_38,0);
      if (local_38 != (longlong *)0x0) {
        local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
      }
      local_30 = 0;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return;
}



// FUNCTION 142ce0730 FUN_142ce0730 body=342 status=ok
// SIG undefined FUN_142ce0730(void)

void FUN_142ce0730(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char local_res8 [8];
  char local_res10 [8];
  undefined1 local_res18 [16];
  undefined1 *puVar5;
  longlong local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  cVar3 = (**(code **)(*(longlong *)*param_1 + 0x5c0))();
  if (cVar3 != '\0') {
    local_20 = (undefined4)param_1[4];
    local_10 = *(undefined4 *)((longlong)param_1 + 0x14);
    uVar2 = *(undefined8 *)(*(longlong *)(*param_1 + 0x178) + 0x220);
    uVar1 = *(undefined4 *)(*(longlong *)(*param_1 + 0x178) + 0x228);
    local_28 = param_1[3];
    local_18 = *(undefined8 *)((longlong)param_1 + 0xc);
    uVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x24);
    FUN_142334d80(*param_1,(int)param_1[1],&local_18,&local_28,uVar4,param_1[6],(char)param_1[7],
                  *(undefined1 *)((longlong)param_1 + 0x39),
                  *(undefined1 *)((longlong)param_1 + 0x3a));
    if ((*(byte *)(*param_1 + 0x1968) & 1) != 0) {
      puVar5 = local_res18;
      local_res8[0] = '\0';
      local_res18[0] = 0;
      local_res10[0] = '\0';
      UCharacterMovementComponent::UnpackNetworkMovementMode
                (*param_1,*(undefined1 *)((longlong)param_1 + 0x3a),local_res8,local_res10,puVar5);
      if ((local_res8[0] != '\x06') || (local_res10[0] != '\x01')) {
        local_18 = uVar2;
        local_10 = uVar1;
        FUN_1423990b0(*(undefined8 *)(*param_1 + 0x178),&local_18,0,0,
                      (ulonglong)puVar5 & 0xffffffffffffff00);
      }
    }
  }
  return;
}



// FUNCTION 142ce0890 FUN_142ce0890 body=152 status=ok
// SIG undefined FUN_142ce0890(void)

void FUN_142ce0890(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = FWeakObjectPtr::Get(param_1[1] + 0x6c);
  lVar1 = *param_1;
  if ((((*(char *)(lVar1 + 0xea8) != '\0') && (lVar2 = *(longlong *)(lVar1 + 0x118), lVar2 != 0)) &&
      (lVar4 != 0)) &&
     (((*(longlong *)(lVar1 + 0xeb0) != 0 && (*(longlong *)(lVar1 + 0xeb8) != 0)) &&
      (*(longlong **)(lVar4 + 0x168) != (longlong *)0x0)))) {
    if (lVar4 == *(longlong *)(lVar1 + 0xeb0)) {
      *(undefined1 *)(lVar1 + 0xeaa) = 1;
    }
    else {
      cVar3 = (**(code **)(**(longlong **)(lVar4 + 0x168) + 0x4e0))();
      if (cVar3 != '\0') {
        *(undefined1 *)(lVar1 + 0xea9) = 1;
      }
    }
    FUN_142d049a0((char *)(lVar1 + 0xea8),lVar2,lVar4);
  }
  return;
}



// FUNCTION 142ce0980 FUN_142ce0980 body=43 status=ok
// SIG undefined FUN_142ce0980(void)

undefined8 * FUN_142ce0980(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142ce09b0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FVulkanVertexDeclaration::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1423286f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 142ce09f0 FUN_142ce09f0 body=91 status=ok
// SIG undefined FUN_142ce09f0(void)

longlong FUN_142ce09f0(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0x1d0);
  FRichCurve::~FRichCurve(param_1 + 0x158);
  FRichCurve::~FRichCurve(param_1 + 0xd8);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 142ce0a50 FUN_142ce0a50 body=139 status=ok
// SIG undefined FUN_142ce0a50(void)

longlong FUN_142ce0a50(longlong param_1,ulonglong param_2)

{
  FUN_142cdead0(param_1 + 0x130);
  FUN_142cdead0(param_1 + 0x120);
  FUN_142cdead0(param_1 + 0x110);
  FUN_142cdead0(param_1 + 0x100);
  FUN_142cdead0(param_1 + 0xf0);
  FUN_142cdead0(param_1 + 0xe0);
  FUN_142cdead0(param_1 + 0xd0);
  FUN_1406d8e10(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 142ce0ae0 FUN_142ce0ae0 body=297 status=ok
// SIG undefined FUN_142ce0ae0(void)

longlong FUN_142ce0ae0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_142cdeb30(param_1 + 0x120);
  iVar3 = *(int *)(param_1 + 0x118);
  lVar4 = *(longlong *)(param_1 + 0x110);
  if (iVar3 != 0) {
    lVar4 = lVar4 + 0x20;
    do {
      FRichCurve::~FRichCurve(lVar4);
      lVar4 = lVar4 + 0x98;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar4 = *(longlong *)(param_1 + 0x110);
  }
  if (lVar4 != 0) {
    FMemory::Free();
  }
  TArray<FInputMappingPreset,TSizedDefaultAllocator<32>_>::
  ~TArray<FInputMappingPreset,TSizedDefaultAllocator<32>_>(param_1 + 0xf8);
  FUN_142cdec10(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  FUN_14099a830(param_1 + 0xb0);
  FUN_14099a7a0(param_1 + 0xa0);
  FUN_140ce1840(param_1 + 0x90);
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 142ce0c10 FUN_142ce0c10 body=52 status=ok
// SIG undefined FUN_142ce0c10(void)

undefined8 FUN_142ce0c10(undefined8 param_1,ulonglong param_2)

{
  FUN_140a51510();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2680);
  }
  return param_1;
}



// FUNCTION 142ce0c50 FUN_142ce0c50 body=96 status=ok
// SIG undefined FUN_142ce0c50(void)

longlong FUN_142ce0c50(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 142ce0cb0 `scalar_deleting_destructor' body=130 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDatasmithStaticMeshTemplate::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 142ce0d40 `scalar_deleting_destructor' body=113 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UHoodPlayerCameraSettingsData::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 142ce0dc0 FUN_142ce0dc0 body=100 status=ok
// SIG undefined FUN_142ce0dc0(void)

longlong FUN_142ce0dc0(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0x1c8);
  FRichCurve::~FRichCurve(param_1 + 0x150);
  FRichCurve::~FRichCurve(param_1 + 0xd8);
  FRichCurve::~FRichCurve(param_1 + 0x60);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x240);
  }
  return param_1;
}



// FUNCTION 142ce0e30 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UOculusHMDRuntimeSettings::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_142cdecf0(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142ce0e70 FUN_142ce0e70 body=337 status=ok
// SIG undefined FUN_142ce0e70(void)

longlong FUN_142ce0e70(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x618) != 0) {
    if (*(longlong *)(param_1 + 0x608) == 0) {
      **(longlong **)(param_1 + 0x610) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x610) = *(longlong *)(param_1 + 0x608);
      *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 8) = *(undefined8 *)(param_1 + 0x610);
      *(undefined8 *)(param_1 + 0x608) = 0;
    }
    *(undefined8 *)(param_1 + 0x610) = 0;
    *(undefined8 *)(param_1 + 0x618) = 0;
  }
  if (*(longlong *)(param_1 + 0x5f8) != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x568);
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
  if (*(longlong *)(param_1 + 0x530) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x518) != 0) {
    FMemory::Free();
  }
  FUN_140b4e2b0(param_1 + 0x470);
  FUN_142cded60(param_1 + 0x400);
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FMemory::Free();
  }
  FUN_140a51cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x620);
  }
  return param_1;
}



// FUNCTION 142ce0fd0 FUN_142ce0fd0 body=30 status=ok
// SIG undefined FUN_142ce0fd0(void)

void FUN_142ce0fd0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  *param_1 = 0;
  param_1[2] = param_2;
  param_1[1] = param_3;
  if ((param_2 != 0) && (param_3 != 0)) {
    *(undefined1 *)param_1 = 1;
    return;
  }
  *(undefined1 *)param_1 = 0;
  return;
}



// FUNCTION 142ce1000 FUN_142ce1000 body=73 status=ok
// SIG undefined FUN_142ce1000(void)

void FUN_142ce1000(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x98);
  *(int *)(param_1 + 0x98) = iVar1 + 1;
  if (*(int *)(param_1 + 0x9c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x90),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 142ce1050 FUN_142ce1050 body=193 status=ok
// SIG undefined FUN_142ce1050(void)

void FUN_142ce1050(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (param_2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_2 + 0x168);
  }
  if ((lVar7 != 0) &&
     ((*(longlong *)(lVar7 + 400) == 0 ||
      (lVar4 = *(longlong *)(*(longlong *)(lVar7 + 400) + 0x118), lVar5 = FUN_142c6f130(),
      lVar4 != lVar5)))) {
    plVar1 = (longlong *)(param_1 + 0x180);
    plVar6 = (longlong *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x188);
    plVar2 = plVar6 + iVar3;
    for (; plVar6 != plVar2; plVar6 = plVar6 + 1) {
      if (*plVar6 == param_2) {
        return;
      }
    }
    *(int *)(param_1 + 0x188) = iVar3 + 1;
    if (*(int *)(param_1 + 0x18c) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    *(longlong *)((longlong)iVar3 * 8 + *plVar1) = param_2;
    FUN_142cf4c90(param_1,lVar7);
  }
  return;
}



// FUNCTION 142ce1120 FUN_142ce1120 body=109 status=ok
// SIG undefined FUN_142ce1120(void)

void FUN_142ce1120(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((*(byte *)(param_1 + 0x1128) & 0x10) == 0) {
    cVar1 = FUN_1407c3030(param_1 + 0xd70);
    if ((cVar1 == '\0') &&
       (((*(char *)(param_1 + 0x248) != '\x06' || (*(char *)(param_1 + 0x249) != '\0')) ||
        (*(longlong *)(param_1 + 0x178) == 0)))) {
      local_18 = *param_2;
      local_10 = *(undefined4 *)(param_2 + 1);
      FUN_14232c640(param_1,&local_18);
    }
  }
  return;
}



// FUNCTION 142ce1190 FUN_142ce1190 body=127 status=ok
// SIG undefined FUN_142ce1190(void)

void FUN_142ce1190(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((*(byte *)(param_1 + 0x1128) & 0x10) == 0) {
    cVar1 = FUN_1407c3030(param_1 + 0xd70);
    if ((cVar1 == '\0') &&
       (((*(char *)(param_1 + 0x248) != '\x06' || (*(char *)(param_1 + 0x249) != '\0')) ||
        (*(longlong *)(param_1 + 0x178) == 0)))) {
      local_18 = *param_2;
      local_10 = *(undefined4 *)(param_2 + 1);
      FUN_14232c710(param_1,&local_18,param_3);
    }
  }
  return;
}



// FUNCTION 142ce1210 FUN_142ce1210 body=409 status=ok
// SIG undefined FUN_142ce1210(void)

void FUN_142ce1210(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 200,0,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8),0,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe8),0,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8),0,0);
  lVar1 = *(longlong *)(param_1 + 0x100);
  lVar2 = (longlong)*(int *)(param_1 + 0x108) * 0x10 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x10) {
    (**(code **)(*param_2 + 0x38))(param_2,lVar1 + 8,0,0);
  }
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x118),0,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x128),0,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x178),0,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x188),0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x1b0,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x1b8,0,0);
  FUN_142c66150(param_1,param_2);
  return;
}



// FUNCTION 142ce13b0 FUN_142ce13b0 body=293 status=ok
// SIG undefined FUN_142ce13b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142ce13b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  _Dst = (undefined8 *)operator_new(0x390);
  if (_Dst == (undefined8 *)0x0) {
    _Dst = (undefined8 *)0x0;
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x390);
    FUN_142326600(_Dst);
    *_Dst = &PTR_FUN_144204b70;
    *(undefined4 *)((longlong)_Dst + 0x334) = 0xffffffff;
    *(undefined4 *)(_Dst + 0x67) = 0;
    *(undefined4 *)((longlong)_Dst + 0x33c) = 0xffffffff;
    *(undefined4 *)(_Dst + 0x68) = 0;
    _Dst[0x69] = 0;
    *(undefined1 *)(_Dst + 0x6a) = 0;
    *(undefined8 *)((longlong)_Dst + 0x354) = _DAT_1468b5d90;
    *(undefined4 *)((longlong)_Dst + 0x35c) = DAT_1468b5d98;
    _Dst[0x6c] = _DAT_1468b5d90;
    *(undefined4 *)(_Dst + 0x6d) = DAT_1468b5d98;
    *(undefined8 *)((longlong)_Dst + 0x36c) = _DAT_1468b5d90;
    *(undefined4 *)((longlong)_Dst + 0x374) = DAT_1468b5d98;
  }
  *param_2 = _Dst;
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = _Dst;
  }
  param_2[1] = puVar1;
  SharedPointerInternals::EnableSharedFromThis(param_2,_Dst,_Dst);
  return param_2;
}



// FUNCTION 142ce14e0 FUN_142ce14e0 body=124 status=ok
// SIG undefined FUN_142ce14e0(void)

void FUN_142ce14e0(undefined8 param_1,undefined1 param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 != (longlong *)0x0) {
    lVar2 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_142cce120(param_3,param_2,DAT_146b31760);
      return;
    }
    (**(code **)(*param_3 + 0x310))(param_3,param_2);
  }
  return;
}



// FUNCTION 142ce1560 FUN_142ce1560 body=757 status=ok
// SIG undefined FUN_142ce1560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce1560(longlong *param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
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
  undefined1 local_d8 [24];
  undefined1 local_c0 [184];
  
  cVar4 = (**(code **)(*param_1 + 0xc00))();
  if ((((cVar4 != '\0') && ((longlong *)param_1[0x1fb] != (longlong *)0x0)) &&
      (cVar4 = (**(code **)(*(longlong *)param_1[0x1fb] + 0x780))(), cVar4 != '\0')) &&
     (cVar4 = (**(code **)(*(longlong *)param_1[0x1fb] + 0x778))(), cVar4 != '\0')) {
    uVar5 = FUN_142ced5e0(param_1,local_c0,0);
    local_110 = DAT_1468b5da8;
    local_118 = DAT_1468b5da0;
    if (param_1[0x1fb] != 0) {
      lVar6 = FUN_142cc2d20(param_1[0x1fb] + 0xbe0,local_d8,uVar5,param_1);
      local_110 = *(float *)(lVar6 + 0x14);
      local_118 = *(undefined8 *)(lVar6 + 0xc);
    }
    local_108 = local_118;
    local_100 = local_110;
    FUN_142ce7a40(param_1,&local_f8,&local_108);
    uVar5 = FUN_142ced280(param_1,&local_108,0);
    FUN_142ce7a40(param_1,&local_118,uVar5);
    fVar3 = local_110;
    fVar1 = (float)local_118;
    fVar2 = local_118._4_4_;
    fVar8 = DAT_146b315f0._4_4_;
    auVar9._4_4_ = local_f4 - local_118._4_4_;
    auVar9._0_4_ = local_f8 - (float)local_118;
    auVar9._8_4_ = local_f0 - local_110;
    auVar9._12_4_ = 0;
    auVar9 = divps(auVar9,_DAT_146b315f0);
    fVar10 = (local_f4 - local_118._4_4_) - (float)(int)auVar9._4_4_ * fVar8;
    fVar10 = (float)(((uint)(fVar10 + fVar8) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                    (uint)(fVar10 + fVar8));
    fVar10 = (float)(((uint)(fVar10 - fVar8) ^ (uint)fVar10) &
                     -(uint)(fRam0000000146b315e4 < fVar10) ^ (uint)fVar10);
    fVar8 = (float)(**(code **)(*param_1 + 0xc20))(param_1);
    fVar8 = ABS(fVar10) - fVar8;
    if (0.0 < fVar8) {
      if (fVar10 <= 0.0) {
        if (0.0 <= fVar10) {
          fVar8 = 0.0;
        }
        else {
          fVar8 = -fVar8;
        }
      }
      local_e8 = fVar1;
      local_e0 = fVar3;
      local_e4 = fVar2 + fVar8;
      *(float *)((longlong)param_1 + 0x23f4) = fVar8 + *(float *)((longlong)param_1 + 0x23f4);
      *(float *)((longlong)param_1 + 0x13d4) =
           fVar8 * 0.017453292 + *(float *)((longlong)param_1 + 0x13d4);
      *(float *)(param_1 + 0x27c) = fVar8 * 0.017453292 + *(float *)(param_1 + 0x27c);
      puVar7 = (undefined8 *)FUN_142ce7910(param_1,&local_118,&local_e8);
      local_108 = *puVar7;
      local_100 = *(float *)(puVar7 + 1);
      (**(code **)(*(longlong *)param_1[0x1fb] + 0x7b0))
                ((longlong *)param_1[0x1fb],&local_108,param_2);
    }
  }
  return;
}



// FUNCTION 142ce1860 FUN_142ce1860 body=169 status=ok
// SIG undefined FUN_142ce1860(void)

ulonglong FUN_142ce1860(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1407c3030(param_1 + 0x8b0);
  if (((char)uVar1 == '\0') && (uVar1 = FUN_142c6a420(param_1 + 0x2110,1), (char)uVar1 == '\0')) {
    uVar1 = FUN_14232e470(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142ce1910 FUN_142ce1910 body=145 status=ok
// SIG undefined FUN_142ce1910(void)

void FUN_142ce1910(undefined8 param_1,char param_2,longlong *param_3,longlong *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  lVar2 = lVar3;
  if (param_3 != (longlong *)0x0) {
    uVar1 = UCircularThrobber::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_3 + 0x628))(param_3,uVar1);
  }
  if (param_4 != (longlong *)0x0) {
    uVar1 = UCircularThrobber::GetPrivateStaticClass();
    lVar3 = (**(code **)(*param_4 + 0x628))(param_4,uVar1);
  }
  if ((lVar2 != 0) && (lVar3 != 0)) {
    if (param_2 != '\0') {
      lVar2 = 0;
    }
    FUN_142df2b50(lVar3,lVar2);
  }
  return;
}



// FUNCTION 142ce19b0 FUN_142ce19b0 body=1033 status=ok
// SIG undefined FUN_142ce19b0(void)

void FUN_142ce19b0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined2 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  longlong local_28 [2];
  
  if ((longlong *)param_1[0x23] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x23] + 0x600))();
  }
  if (param_1[0x81] == 0) {
    return;
  }
  if ((char)param_1[0x83] != '\x02') {
    return;
  }
  lVar8 = 0;
  if (param_1[0xaa] != 0) {
    lVar6 = param_1[0x24];
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar6 + 400) == 0) {
      uVar7 = *(undefined8 *)(lVar6 + 0x3f8);
    }
    else {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
    }
    FUN_142880530(uVar7,param_1 + 0xaa);
    param_1[0xaa] = 0;
  }
  if (((param_1[0xab] != 0) && (plVar3 = param_1 + 0xac, *plVar3 != 0)) && (param_1[0xad] != 0)) {
    piVar1 = (int *)(param_1[0xad] + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      local_50 = (longlong *)param_1[0xad];
      if (local_50 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)local_50[1];
        bVar9 = iVar5 == 0;
        if (bVar9) {
          *(int *)(local_50 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar5 == (int)local_50[1];
          if (bVar9) {
            *(int *)(local_50 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar9) {
            lVar8 = *plVar3;
            goto LAB_142ce1ad6;
          }
          LOCK();
          iVar5 = (int)local_50[1];
          bVar9 = iVar5 == 0;
          if (bVar9) {
            *(int *)(local_50 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
        lVar8 = 0;
        local_50 = (longlong *)0x0;
      }
LAB_142ce1ad6:
      TBaseMulticastDelegate<void>::Remove(lVar8 + 0x58,param_1[0xab]);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_50 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      param_1[0xab] = 0;
      if (plVar3 != local_28) {
        *plVar3 = 0;
        plVar3 = (longlong *)param_1[0xad];
        param_1[0xad] = 0;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  local_48 = 0;
  if (param_1[0x81] != 0) {
    FUN_142d01170(param_1);
    if (param_1[0x81] == 0) {
      return;
    }
    if ((char)param_1[0x83] != '\x02') {
      return;
    }
    if ((((char)param_1[0x88] == '\0') || (param_1[0x23] == 0)) ||
       (lVar8 = *(longlong *)(param_1[0x23] + 0x118), lVar8 == 0)) {
      lVar8 = param_1[0x23];
    }
    FUN_142cf7950(param_1,lVar8);
    if (param_1[0x8d] != 0) {
      lVar6 = FUN_142e20fc0();
      for (lVar8 = param_1[0x8d]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
        if (lVar8 == lVar6) {
          if (param_1[0x8d] != 0) {
            plVar3 = (longlong *)param_1[0x81];
            uVar7 = FUN_142e27720();
            lVar8 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar7);
            if ((lVar8 != 0) &&
               (FUN_142c7bae0(lVar8,local_38,param_1[0x8d]), local_30 != (longlong *)0x0)) {
              LOCK();
              plVar3 = local_30 + 1;
              lVar8 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_30)(local_30);
                LOCK();
                piVar1 = (int *)((longlong)local_30 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*local_30 + 8))(local_30,1);
                }
              }
            }
          }
          break;
        }
      }
    }
    lVar8 = param_1[0x81];
    if (lVar8 == 0) {
      return;
    }
    if ((char)param_1[0x83] != '\x02') {
      return;
    }
    if (*(char *)((longlong)param_1 + 0x541) == '\0') {
      FUN_142cf78d0(param_1);
      lVar8 = param_1[0x81];
    }
    if (lVar8 == 0) {
      return;
    }
    if ((char)param_1[0x83] != '\x02') {
      return;
    }
    if ((*(byte *)((longlong)param_1 + 0x544) & 0x40) != 0) {
      FUN_142ce14e0(param_1,1,lVar8);
      lVar8 = param_1[0x81];
    }
    if (lVar8 != 0) {
      lVar6 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if ((bVar9) &&
         (uVar4 = (**(code **)(*param_1 + 0x4d0))(param_1), *(char *)(lVar8 + 0x128) == '\x03')) {
        *(longlong **)(lVar8 + 0xae8) = param_1;
        *(undefined1 *)(lVar8 + 0xaf0) = 2;
        *(undefined2 *)(lVar8 + 0xaf2) = uVar4;
        FUN_142cf6b00(lVar8);
      }
    }
    local_48 = param_1[0x81];
    if (local_48 == 0) {
      return;
    }
    if ((char)param_1[0x83] != '\x02') {
      return;
    }
  }
  local_40 = param_1[0x82];
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x78,&local_48);
  (**(code **)(*param_1 + 0x460))(param_1);
  return;
}



// FUNCTION 142ce1dc0 FUN_142ce1dc0 body=138 status=ok
// SIG undefined FUN_142ce1dc0(void)

void FUN_142ce1dc0(longlong *param_1,longlong param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 local_28 [16];
  longlong local_18;
  
  iVar2 = FUN_14233f450();
  if (iVar2 == 3) {
    FUN_142cfcd10(param_1);
    if ((param_2 != 0) && (*(longlong *)(param_2 + 0x490) != 0)) {
      FUN_142cfd690(local_28,param_2);
      if ((local_18 == 0) && ((char)param_1[0x83] == '\0')) {
        cVar1 = (**(code **)(*param_1 + 0x4b0))(param_1,param_2);
        if (cVar1 != '\0') {
          FUN_142cf28c0(param_1,param_2,param_3);
        }
      }
    }
  }
  return;
}



// FUNCTION 142ce1e50 FUN_142ce1e50 body=53 status=ok
// SIG undefined FUN_142ce1e50(void)

void FUN_142ce1e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_142cebc70();
  if (lVar1 != 0) {
    FUN_142ce1dc0(lVar1,param_3,param_4);
  }
  return;
}



// FUNCTION 142ce1e90 FUN_142ce1e90 body=610 status=ok
// SIG undefined FUN_142ce1e90(void)

void FUN_142ce1e90(longlong *param_1)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_18;
  longlong local_10;
  
  if ((longlong *)param_1[0x23] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x23] + 0x600))();
  }
  if (param_1[0x81] != 0) {
    AHeoCon::GetPrivateStaticClass();
    FUN_142ce72b0(param_1,param_1[0x81],1);
    if (param_1[0x81] == 0) {
      return;
    }
    if ((char)param_1[0x83] != '\x01') {
      return;
    }
    FUN_142ce7230(param_1);
    plVar5 = (longlong *)param_1[0x81];
    if (((*(uint *)((longlong)param_1 + 0x544) & 0x100) != 0) && (plVar5 != (longlong *)0x0)) {
      FUN_142d6e060(plVar5,param_1[3]);
      plVar5 = (longlong *)param_1[0x81];
    }
    uVar4 = FUN_142e39920();
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x628))(plVar5,uVar4);
    if (plVar5 != (longlong *)0x0) {
      FUN_142dafbc0(plVar5 + 0x1ae,&DAT_146b31760);
      if ((char)plVar5[0x1d4] != '\x01') {
        *(undefined1 *)(plVar5 + 0x1d4) = 1;
        (**(code **)(*plVar5 + 0x5a0))(plVar5,6,2);
      }
    }
    lVar7 = param_1[0x81];
    if (lVar7 == 0) {
      return;
    }
    if ((char)param_1[0x83] != '\x01') {
      return;
    }
    if (*(char *)((longlong)param_1 + 0x541) != '\0') {
      FUN_142cf78d0(param_1);
      lVar7 = param_1[0x81];
    }
    if (lVar7 == 0) {
      return;
    }
    if ((char)param_1[0x83] != '\x01') {
      return;
    }
    uVar3 = *(uint *)((longlong)param_1 + 0x544);
    if ((uVar3 & 0x10) != 0) {
      FUN_142cffb10(param_1,1,lVar7);
      uVar3 = *(uint *)((longlong)param_1 + 0x544);
      lVar7 = param_1[0x81];
    }
    if ((uVar3 & 0x20) != 0) {
      FUN_142cff140(param_1,1,lVar7);
      uVar3 = *(uint *)((longlong)param_1 + 0x544);
      lVar7 = param_1[0x81];
    }
    if ((uVar3 >> 10 & 1) != 0) {
      FUN_142ce1910(param_1,0,lVar7,param_1[0x23]);
      lVar7 = param_1[0x81];
    }
    if (lVar7 != 0) {
      lVar6 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) &&
         (uVar2 = (**(code **)(*param_1 + 0x4d0))(param_1), *(char *)(lVar7 + 0x128) == '\x03')) {
        *(longlong **)(lVar7 + 0xae8) = param_1;
        *(undefined1 *)(lVar7 + 0xaf0) = 1;
        *(undefined2 *)(lVar7 + 0xaf2) = uVar2;
        FUN_142cf6b00(lVar7);
      }
    }
  }
  local_18 = param_1[0x81];
  if ((local_18 != 0) && ((char)param_1[0x83] == '\x01')) {
    local_10 = param_1[0x82];
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x76,&local_18);
    (**(code **)(*param_1 + 0x460))(param_1);
  }
  return;
}



// FUNCTION 142ce2100 FUN_142ce2100 body=134 status=ok
// SIG undefined FUN_142ce2100(void)

void FUN_142ce2100(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  FUN_142c68170();
  if (*(char *)(param_1 + 0x469) != '\x01') {
    lVar1 = FUN_142c6f130(param_1);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x128) == '\x03')) {
      *(undefined1 *)(param_1 + 0x468) = 1;
      FUN_142c76980(param_1);
    }
    *(undefined1 *)(param_1 + 0x469) = 1;
    FUN_142cfa6e0(param_1);
  }
  plVar2 = (longlong *)FUN_142c6f130(param_1);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_142e39920();
    uVar3 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    *(undefined8 *)(param_1 + 0x470) = uVar3;
  }
  return;
}



// FUNCTION 142ce2190 FUN_142ce2190 body=151 status=ok
// SIG undefined FUN_142ce2190(void)

void FUN_142ce2190(longlong *param_1)

{
  char cVar1;
  float fVar2;
  float local_res8 [2];
  float local_res10 [6];
  
  FUN_142c678a0();
  cVar1 = (**(code **)(*param_1 + 0xb8))(param_1);
  if (cVar1 != '\0') {
    local_res8[0] = 0.0;
    cVar1 = FUN_142c703a0(param_1,&DAT_146b31778,local_res8);
    if (cVar1 == '\0') {
      local_res8[0] = 0.0;
    }
    local_res10[0] = 0.0;
    cVar1 = FUN_142c703a0(param_1,&DAT_146b2fcb8,local_res10);
    fVar2 = local_res10[0];
    if (cVar1 == '\0') {
      fVar2 = *(float *)(param_1[2] + 100);
    }
    *(float *)((longlong)param_1 + 0x194) = fVar2;
    (**(code **)(*param_1 + 0xc0))(param_1,fVar2 * local_res8[0]);
  }
  return;
}



// FUNCTION 142ce2230 FUN_142ce2230 body=1357 status=ok
// SIG undefined FUN_142ce2230(void)

void FUN_142ce2230(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  wchar_t *pwVar14;
  longlong *plVar15;
  uint uVar16;
  wchar_t *pwVar17;
  bool bVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  ulonglong local_res18;
  longlong local_res20;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  FUN_142330a70();
  *(longlong *)(param_1 + 0x2048) = param_1;
  FUN_142d84950(param_1 + 0x2428,param_1);
  FUN_14246fd50(param_1 + 0x13ac,*(undefined4 *)(param_1 + 0x2f8));
  if (*(char *)(param_1 + 0x13c4) == '\0') {
    FUN_14246fd50(param_1 + 0x13b8,*(undefined4 *)(param_1 + 0x2f8));
  }
  if (*(longlong *)(param_1 + 0xfd8) == 0) {
    return;
  }
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xfd8) + 0x168);
  if (lVar7 == 0) {
    local_90 = (float)DAT_1464aa7b0;
    puVar4 = &local_98;
    local_98 = DAT_1464aa7a8;
  }
  else {
    puVar4 = (undefined8 *)FUN_142369f10(lVar7,&local_88);
  }
  uVar5 = *puVar4;
  local_90 = *(float *)(puVar4 + 1);
  local_98._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
  fVar21 = (float)uVar5 * (float)uVar5 + local_98._4_4_ * local_98._4_4_;
  fVar20 = local_90 * local_90;
  local_98 = uVar5;
  uVar19 = FGenericPlatformMath::Atan2();
  local_90 = (float)FGenericPlatformMath::Atan2(local_90,SQRT(fVar21));
  plVar15 = *(longlong **)(param_1 + 0xfd8);
  uVar5 = CONCAT44(uVar19,SQRT(fVar20 + fVar21));
  *(undefined8 *)(param_1 + 0x13d0) = uVar5;
  *(undefined8 *)(param_1 + 0x13dc) = uVar5;
  *(float *)(param_1 + 0x13d8) = local_90;
  *(float *)(param_1 + 0x13e4) = local_90;
  uVar5 = FUN_142e27720();
  uVar5 = (**(code **)(*plVar15 + 0x628))(plVar15,uVar5);
  pwVar14 = (wchar_t *)0x0;
  *(undefined8 *)(param_1 + 0x11f8) = uVar5;
  if (*(longlong *)(param_1 + 0x11f0) != 0) goto LAB_142ce2581;
  plVar15 = *(longlong **)(param_1 + 0xfd8);
  uVar5 = FUN_142e75af0();
  pwVar6 = (wchar_t *)(**(code **)(*plVar15 + 0x628))(plVar15,uVar5);
  if (pwVar6 == (wchar_t *)0x0) {
LAB_142ce2423:
    pwVar6 = pwVar14;
  }
  else {
    lVar7 = FUN_142e75af0();
    if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    if (!bVar18) goto LAB_142ce2423;
  }
  *(wchar_t **)(param_1 + 0x11f0) = pwVar6;
  if (pwVar6 != (wchar_t *)0x0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop
                       (L"&UGbxCharacterMovementComponent::OnStanceChanged",L"::");
    pwVar6 = pwVar14;
    while (pwVar17 = pwVar8, pwVar17 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar17 + 1,L"::");
      pwVar6 = pwVar17;
    }
    FName::FName(&local_res18,pwVar6 + 2,1);
    lVar7 = *(longlong *)(param_1 + 0x11f0);
    plVar15 = (longlong *)(lVar7 + 0x180);
    FWeakObjectPtr::operator=(&local_88,0);
    local_80 = 0;
    FWeakObjectPtr::operator=(&local_88,param_1);
    local_80 = local_res18;
    if ((local_res18 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_88), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_80);
    }
    piVar1 = (int *)*plVar15;
    iVar12 = *(int *)(lVar7 + 0x188);
    uVar5 = local_88;
    for (piVar13 = piVar1; local_88 = (wchar_t *)uVar5, piVar13 != piVar1 + (longlong)iVar12 * 4;
        piVar13 = piVar13 + 4) {
      local_88._0_4_ = (int)uVar5;
      if (((*piVar13 == (int)local_88) &&
          (local_88._4_4_ = (int)((ulonglong)uVar5 >> 0x20), bVar18 = piVar13[1] == local_88._4_4_,
          bVar18)) ||
         ((cVar2 = FWeakObjectPtr::IsValid(piVar13), cVar2 == '\0' &&
          (cVar2 = FWeakObjectPtr::IsValid(&local_88), cVar2 == '\0')))) {
        bVar18 = true;
      }
      else {
        bVar18 = false;
      }
      if ((bVar18) && (*(ulonglong *)(piVar13 + 2) == local_80)) {
        bVar18 = true;
      }
      else {
        bVar18 = false;
      }
      if (bVar18) {
        if ((int)((longlong)piVar13 - (longlong)piVar1 >> 4) != -1) goto LAB_142ce2579;
        break;
      }
      uVar5 = local_88;
    }
    iVar12 = *(int *)(lVar7 + 0x188);
    *(int *)(lVar7 + 0x188) = iVar12 + 1;
    if (*(int *)(lVar7 + 0x18c) < iVar12 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar12);
    }
    puVar11 = (undefined4 *)((longlong)iVar12 * 0x10 + *plVar15);
    *puVar11 = (int)local_88;
    puVar11[1] = local_88._4_4_;
    *(ulonglong *)(puVar11 + 2) = local_80;
LAB_142ce2579:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
  }
LAB_142ce2581:
  if ((*(char *)(param_1 + 0x14b8) != '\0') &&
     (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xfd8) + 0xa18), lVar7 != 0)) {
    lVar9 = *(longlong *)(lVar7 + 0x12a8);
    iVar12 = 0;
    local_res20 = lVar7;
    if (lVar9 != 0) {
      if ((*(int *)(lVar9 + 0x120) == 0) && (*(int *)(lVar9 + 0x124) == 0)) {
        bVar18 = true;
      }
      else {
        bVar18 = false;
      }
      if (!bVar18) {
        uVar19 = FUN_1423ac950(lVar7,*(undefined8 *)(lVar9 + 0x120));
        *(undefined4 *)(param_1 + 0x13f4) = uVar19;
        *(uint *)(param_1 + 0x13f8) = (uint)*(byte *)(*(longlong *)(lVar7 + 0x12a8) + 0x138);
        return;
      }
    }
    lVar9 = FUN_1423ac7e0(lVar7);
    if (lVar9 != 0) {
      local_res18 = FUN_1423ac7e0(lVar7);
      local_88 = (wchar_t *)0x0;
      local_80 = local_80 & 0xffffffff;
      plVar15 = (longlong *)FUN_142268ae0(*(undefined8 *)(local_res18 + 0x10));
      pwVar6 = pwVar14;
      if (plVar15 != (longlong *)0x0) {
        plVar15 = (longlong *)(**(code **)(*plVar15 + 0x20))(plVar15);
        iVar3 = (int)plVar15[1];
        pwVar8 = pwVar14;
        pwVar17 = pwVar14;
        if (0 < iVar3) {
          do {
            lVar7 = *(longlong *)(*plVar15 + -8 + (longlong)(iVar3 - (int)pwVar17) * 8);
            if (lVar7 != 0) {
              lVar10 = FUN_142c5c930();
              for (lVar9 = *(longlong *)(lVar7 + 0x70); lVar9 != 0;
                  lVar9 = *(longlong *)(lVar9 + 0x30)) {
                if (lVar9 == lVar10) {
                  lVar7 = (longlong)*(int *)(lVar7 + 0x44) + local_res18;
                  iVar12 = (int)pwVar14;
                  uVar16 = iVar12 + 1;
                  local_80 = CONCAT44(local_80._4_4_,uVar16);
                  if ((int)pwVar8 < (int)uVar16) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_88,pwVar14);
                    pwVar8 = (wchar_t *)(local_80 >> 0x20);
                    pwVar6 = local_88;
                    uVar16 = (uint)local_80;
                  }
                  pwVar14 = (wchar_t *)(ulonglong)uVar16;
                  *(longlong *)(pwVar6 + (longlong)iVar12 * 4) = lVar7;
                  break;
                }
              }
            }
            iVar12 = (int)pwVar14;
            iVar3 = (int)plVar15[1];
            uVar16 = (int)pwVar17 + 1;
            lVar7 = local_res20;
            pwVar17 = (wchar_t *)(ulonglong)uVar16;
          } while ((int)uVar16 < iVar3);
        }
      }
      for (pwVar14 = pwVar6; pwVar14 != pwVar6 + (longlong)iVar12 * 4; pwVar14 = pwVar14 + 4) {
        lVar9 = *(longlong *)pwVar14;
        if (lVar9 != 0) {
          if ((*(int *)(lVar9 + 0x158) == 0) && (*(int *)(lVar9 + 0x15c) == 0)) {
            bVar18 = true;
          }
          else {
            bVar18 = false;
          }
          if (!bVar18) {
            iVar3 = FUN_1423ac950(lVar7,*(undefined8 *)(lVar9 + 0x158));
            *(int *)(param_1 + 0x13f4) = iVar3;
            if (iVar3 != -1) {
              *(uint *)(param_1 + 0x13f8) = (uint)*(byte *)(lVar9 + 0x170);
              break;
            }
          }
        }
      }
      if (pwVar6 != (wchar_t *)0x0) {
        FMemory::Free(pwVar6);
      }
    }
  }
  return;
}



// FUNCTION 142ce2780 thunk_FUN_142de5970 body=5 status=ok
// SIG undefined thunk_FUN_142de5970(void)

void thunk_FUN_142de5970(undefined8 param_1)

{
  FUN_142330a70();
  FUN_142df1be0(param_1);
  return;
}



// FUNCTION 142ce2790 FUN_142ce2790 body=938 status=ok
// SIG undefined FUN_142ce2790(void)

void FUN_142ce2790(longlong param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  uVar9 = 0;
  puVar2 = (ulonglong *)(param_1 + 0x170);
  plVar10 = (longlong *)*puVar2;
  uVar13 = (longlong)*(int *)(param_1 + 0x178) & 0x1fffffffffffffff;
  if (plVar10 + *(int *)(param_1 + 0x178) < plVar10) {
    uVar13 = uVar9;
  }
  if (uVar13 != 0) {
    do {
      lVar11 = *plVar10;
      if (lVar11 != 0) {
        plVar6 = *(longlong **)(param_1 + 0xc0);
        plVar7 = plVar6;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          iVar3 = (int)plVar6[1];
          bVar14 = iVar3 == 0;
          if (bVar14) {
            *(int *)(plVar6 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          while (plVar7 = (longlong *)0x0, !bVar14) {
            LOCK();
            bVar14 = iVar3 == (int)plVar6[1];
            if (bVar14) {
              *(int *)(plVar6 + 1) = iVar3 + 1;
            }
            UNLOCK();
            if (bVar14) {
              plVar7 = plVar6;
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                UNLOCK();
              }
              break;
            }
            LOCK();
            iVar3 = (int)plVar6[1];
            bVar14 = iVar3 == 0;
            if (bVar14) {
              *(int *)(plVar6 + 1) = 0;
              iVar3 = 0;
            }
            UNLOCK();
          }
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
          UNLOCK();
          LOCK();
          plVar6 = plVar7 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
          LOCK();
          plVar6 = plVar7 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        FUN_142c81170(*(undefined8 *)(param_1 + 0x18),lVar11);
      }
      plVar10 = plVar10 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar13);
  }
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x17c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(puVar2,0);
  }
  lVar4 = FUN_142c6f130();
  lVar11 = *(longlong *)(param_1 + 0x100);
  lVar12 = (longlong)*(int *)(param_1 + 0x108) * 0x10 + lVar11;
  for (; lVar11 != lVar12; lVar11 = lVar11 + 0x10) {
    lVar8 = 0;
    if (*(longlong *)(lVar11 + 8) != 0) {
      lVar8 = *(longlong *)(*(longlong *)(lVar11 + 8) + 0x118);
    }
    if ((lVar8 != 0) && (lVar8 != lVar4)) {
      plVar6 = (longlong *)*puVar2;
      plVar10 = plVar6 + *(int *)(param_1 + 0x178);
      for (; plVar6 != plVar10; plVar6 = plVar6 + 1) {
        if (*plVar6 == lVar8) goto LAB_142ce298a;
      }
      uVar5 = FUN_142c61880(param_1,local_58);
      FUN_142c66430(*(undefined8 *)(param_1 + 0x18),lVar8,uVar5);
      iVar3 = *(int *)(param_1 + 0x178);
      *(int *)(param_1 + 0x178) = iVar3 + 1;
      if (*(int *)(param_1 + 0x17c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar2,iVar3);
      }
      *(longlong *)(*puVar2 + (longlong)iVar3 * 8) = lVar8;
    }
LAB_142ce298a:
  }
  uVar9 = 0;
  plVar10 = *(longlong **)(param_1 + 0x110);
  uVar13 = (longlong)*(int *)(param_1 + 0x118) & 0x1fffffffffffffff;
  if (plVar10 + *(int *)(param_1 + 0x118) < plVar10) {
    uVar13 = uVar9;
  }
  if (uVar13 != 0) {
    do {
      lVar11 = 0;
      if (*plVar10 != 0) {
        lVar11 = *(longlong *)(*plVar10 + 0x118);
      }
      if ((lVar11 != 0) && (lVar11 != lVar4)) {
        plVar7 = (longlong *)*puVar2;
        plVar6 = plVar7 + *(int *)(param_1 + 0x178);
        for (; plVar7 != plVar6; plVar7 = plVar7 + 1) {
          if (*plVar7 == lVar11) goto LAB_142ce2a4c;
        }
        uVar5 = FUN_142c61880(param_1,local_48);
        FUN_142c66430(*(undefined8 *)(param_1 + 0x18),lVar11,uVar5);
        iVar3 = *(int *)(param_1 + 0x178);
        *(int *)(param_1 + 0x178) = iVar3 + 1;
        if (*(int *)(param_1 + 0x17c) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar2,iVar3);
        }
        *(longlong *)(*puVar2 + (longlong)iVar3 * 8) = lVar11;
      }
LAB_142ce2a4c:
      plVar10 = plVar10 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar13);
  }
  uVar9 = 0;
  plVar10 = *(longlong **)(param_1 + 0x120);
  uVar13 = (longlong)*(int *)(param_1 + 0x128) & 0x1fffffffffffffff;
  if (plVar10 + *(int *)(param_1 + 0x128) < plVar10) {
    uVar13 = uVar9;
  }
  if (uVar13 != 0) {
    do {
      lVar11 = 0;
      if (*plVar10 != 0) {
        lVar11 = *(longlong *)(*plVar10 + 0x118);
      }
      if ((lVar11 != 0) && (lVar11 != lVar4)) {
        plVar7 = (longlong *)*puVar2;
        plVar6 = plVar7 + *(int *)(param_1 + 0x178);
        for (; plVar7 != plVar6; plVar7 = plVar7 + 1) {
          if (*plVar7 == lVar11) goto LAB_142ce2b0c;
        }
        uVar5 = FUN_142c61880(param_1,local_38);
        FUN_142c66430(*(undefined8 *)(param_1 + 0x18),lVar11,uVar5);
        iVar3 = *(int *)(param_1 + 0x178);
        *(int *)(param_1 + 0x178) = iVar3 + 1;
        if (*(int *)(param_1 + 0x17c) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar2,iVar3);
        }
        *(longlong *)(*puVar2 + (longlong)iVar3 * 8) = lVar11;
      }
LAB_142ce2b0c:
      plVar10 = plVar10 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar13);
  }
  return;
}



// FUNCTION 142ce2b40 FUN_142ce2b40 body=745 status=ok
// SIG undefined FUN_142ce2b40(void)

float * FUN_142ce2b40(longlong *param_1,float *param_2,float param_3,float *param_4,float *param_5,
                     char param_6)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float local_68;
  float fStack_64;
  
  lVar2 = param_1[0x1fb];
  if (lVar2 == 0) {
    *(undefined8 *)param_2 = DAT_1468b5d88;
  }
  else {
    fVar3 = *param_4;
    local_68 = DAT_1468b5d90;
    fStack_64 = DAT_1468b5d94;
    if (0.0 < fVar3) {
      lVar1 = *(longlong *)(lVar2 + 0x168);
      if (lVar1 == 0) {
      }
      else {
        local_68 = *(float *)(lVar1 + 0x220);
        fStack_64 = *(float *)(lVar1 + 0x224);
      }
      local_68 = *param_5 - local_68;
      fStack_64 = param_5[1] - fStack_64;
      fVar6 = fStack_64 * fStack_64 + local_68 * local_68;
      if (fVar6 <= 1e-08) {
        local_68 = 0.0;
        fStack_64 = 0.0;
      }
      else {
        auVar5 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
        fVar4 = auVar5._0_4_;
        fVar4 = fVar4 + fVar4 * (0.5 - fVar6 * 0.5 * fVar4 * fVar4);
        fVar4 = fVar4 + fVar4 * (0.5 - fVar6 * 0.5 * fVar4 * fVar4);
        local_68 = local_68 * fVar4;
        fStack_64 = fStack_64 * fVar4;
      }
      local_68 = (local_68 / fVar3) * SQRT(fVar6);
      fStack_64 = (fStack_64 / fVar3) * SQRT(fVar6);
      if (param_6 != '\0') {
        fVar3 = (float)(**(code **)(*param_1 + 0x400))();
        if (0.0001 <= fVar3) {
          fVar6 = fStack_64 * fStack_64 + local_68 * local_68;
          if (fVar3 * fVar3 < fVar6) {
            auVar5 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
            fVar4 = auVar5._0_4_;
            fVar4 = fVar4 + fVar4 * (0.5 - fVar6 * 0.5 * fVar4 * fVar4);
            fVar3 = (fVar4 + fVar4 * (0.5 - fVar6 * 0.5 * fVar4 * fVar4)) * fVar3;
            fStack_64 = fVar3 * fStack_64;
            local_68 = fVar3 * local_68;
          }
        }
        else {
          local_68 = DAT_1468b5d90;
          fStack_64 = DAT_1468b5d94;
        }
        lVar2 = param_1[0x1fb];
      }
    }
    if ((*(byte *)(lVar2 + 0x56c) & 8) == 0) {
      *param_4 = *param_4 - param_3;
    }
    *param_2 = local_68;
    param_2[1] = fStack_64;
  }
  return param_2;
}



// FUNCTION 142ce2e30 FUN_142ce2e30 body=846 status=ok
// SIG undefined FUN_142ce2e30(void)

ulonglong *
FUN_142ce2e30(longlong *param_1,ulonglong *param_2,float param_3,float param_4,float *param_5,
             char param_6)

{
  longlong lVar1;
  longlong lVar2;
  float *in_R9;
  float fVar3;
  ulonglong uVar4;
  float fVar5;
  ulonglong uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  float local_70;
  
  local_70 = DAT_1468b5d98;
  lVar2 = param_1[0x1fb];
  if (lVar2 == 0) {
    *param_2 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  else {
    uVar4 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    fVar3 = *in_R9;
    if (0.0 < fVar3) {
      lVar1 = *(longlong *)(lVar2 + 0x168);
      if (lVar1 == 0) {
        uVar13 = uVar4;
      }
      else {
        local_70 = *(float *)(lVar1 + 0x228);
        uVar13 = *(ulonglong *)(lVar1 + 0x220);
      }
      fVar9 = *param_5 - (float)uVar13;
      fVar11 = param_5[1] - (float)(uVar13 >> 0x20);
      local_70 = param_5[2] - local_70;
      fVar12 = fVar11 * fVar11 + fVar9 * fVar9 + local_70 * local_70;
      uVar6 = uVar4;
      fVar10 = fVar9;
      fVar5 = fVar11;
      fVar7 = local_70;
      if ((fVar12 != 1.0) &&
         (fVar10 = DAT_1468b5d90, fVar5 = DAT_1468b5d94, fVar7 = DAT_1468b5d98, 1e-08 <= fVar12)) {
        auVar8 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
        fVar7 = auVar8._0_4_;
        fVar10 = 0.5 - fVar12 * 0.5 * fVar7 * fVar7;
        fVar7 = fVar7 + fVar7 * fVar10;
        param_4 = fVar12 * 0.5 * fVar7 * fVar7;
        fVar7 = fVar7 + fVar7 * (0.5 - param_4);
        uVar6 = (ulonglong)(uint)fVar10;
        fVar10 = fVar9 * fVar7;
        fVar5 = fVar11 * fVar7;
        fVar7 = local_70 * fVar7;
      }
      fVar12 = SQRT(fVar12);
      fVar10 = (fVar10 / fVar3) * fVar12;
      local_70 = (fVar7 / fVar3) * fVar12;
      fVar12 = (fVar5 / fVar3) * fVar12;
      uVar4 = CONCAT44(fVar12,fVar10);
      if (param_6 != '\0') {
        fVar3 = (float)(**(code **)(*param_1 + 0x400))(param_1,lVar2,uVar6,param_4,uVar13);
        if (0.0001 <= fVar3) {
          fVar5 = fVar12 * fVar12 + fVar10 * fVar10 + local_70 * local_70;
          if (fVar3 * fVar3 < fVar5) {
            auVar8 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
            fVar7 = auVar8._0_4_;
            fVar7 = fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7);
            fVar3 = (fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7)) * fVar3;
            fVar10 = fVar10 * fVar3;
            fVar12 = fVar12 * fVar3;
            local_70 = local_70 * fVar3;
          }
          uVar4 = CONCAT44(fVar12,fVar10);
        }
        else {
          local_70 = DAT_1468b5d98;
          uVar4 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        }
        lVar2 = param_1[0x1fb];
      }
    }
    if ((*(byte *)(lVar2 + 0x56c) & 8) == 0) {
      *in_R9 = *in_R9 - param_3;
    }
    *param_2 = uVar4;
  }
  *(float *)(param_2 + 1) = local_70;
  return param_2;
}



// FUNCTION 142ce3180 FUN_142ce3180 body=530 status=ok
// SIG undefined FUN_142ce3180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142ce3180(longlong param_1,float *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float local_res8 [2];
  float local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_98;
  float local_90;
  float local_88;
  float fStack_84;
  
  (**(code **)(*param_3 + 0x578))(param_3,local_res10,local_res18);
  (**(code **)(**(longlong **)(param_1 + 0xfd8) + 0x578))
            (*(longlong **)(param_1 + 0xfd8),local_res8,local_res20);
  if (param_3[0x2d] == 0) {
    local_98 = _DAT_1468b5d90;
  }
  else {
    local_98 = *(undefined8 *)(param_3[0x2d] + 0x220);
  }
  uVar2 = local_98;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xfd8) + 0x168);
  if (lVar1 == 0) {
    local_98 = _DAT_1468b5d90;
    local_90 = DAT_1468b5d98;
  }
  else {
    local_98 = *(undefined8 *)(lVar1 + 0x220);
    local_90 = *(float *)(lVar1 + 0x228);
  }
  local_88 = (float)uVar2;
  fStack_84 = (float)((ulonglong)uVar2 >> 0x20);
  local_88 = local_88 - (float)local_98;
  fStack_84 = fStack_84 - local_98._4_4_;
  fVar5 = fStack_84 * fStack_84 + local_88 * local_88;
  if (fVar5 <= 1e-08) {
    local_88 = 0.0;
    fStack_84 = 0.0;
  }
  else {
    auVar4 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar3 = auVar4._0_4_;
    fVar3 = fVar3 + fVar3 * (0.5 - fVar5 * 0.5 * fVar3 * fVar3);
    fVar3 = fVar3 + fVar3 * (0.5 - fVar5 * 0.5 * fVar3 * fVar3);
    local_88 = local_88 * fVar3;
    fStack_84 = fStack_84 * fVar3;
  }
  fVar5 = SQRT(fVar5) - (local_res8[0] + local_res10[0]);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  param_2[1] = fVar5 * fStack_84 + local_98._4_4_;
  *param_2 = fVar5 * local_88 + (float)local_98;
  param_2[2] = local_90;
  return param_2;
}



// FUNCTION 142ce33a0 FUN_142ce33a0 body=1297 status=ok
// SIG undefined FUN_142ce33a0(void)

void FUN_142ce33a0(longlong *param_1,float param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res8;
  undefined4 local_resc;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar15;
  longlong local_98;
  float local_90;
  undefined1 local_8c [116];
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  cVar2 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar2 == '\0') {
    return;
  }
  cVar2 = (**(code **)(*param_1 + 0xa68))(param_1);
  if (cVar2 != '\0') {
    return;
  }
  if (param_2 < 1e-06) {
    return;
  }
  if ((param_1[0x44] != 0) && (*(char *)(param_1[0x44] + 0x128) == '\x01')) {
    return;
  }
  cVar2 = FUN_1407c3030(param_1 + 0x116);
  if (cVar2 != '\0') {
    param_1[0x6a] = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    *(float *)(param_1 + 0x6b) = DAT_1468b5d98;
  }
  bVar3 = *(byte *)(param_1 + 0x32d);
  if ((bVar3 & 4) == 0) goto LAB_142ce35ed;
  fVar8 = *(float *)(param_1 + 0x6a);
  if (((fVar8 != 0.0) || (*(float *)((longlong)param_1 + 0x354) != 0.0)) ||
     (*(float *)(param_1 + 0x6b) != 0.0)) {
    fVar12 = *(float *)((longlong)param_1 + 0x354);
    fVar9 = fVar12 * fVar12 + fVar8 * fVar8;
    if (fVar9 == 1.0) {
      if (*(float *)(param_1 + 0x6b) == 0.0) {
        local_98 = param_1[0x6a];
        local_90 = *(float *)(param_1 + 0x6b);
        fVar11 = (float)local_98;
        fVar13 = (float)((ulonglong)local_98 >> 0x20);
        fVar14 = local_90;
      }
      else {
LAB_142ce358b:
        fVar11 = fVar8;
        fVar13 = fVar12;
        fVar14 = 0.0;
      }
    }
    else {
      fVar11 = DAT_1468b5d90;
      fVar13 = DAT_1468b5d94;
      fVar14 = DAT_1468b5d98;
      if (1e-08 <= fVar9) {
        auVar10 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        local_res8 = auVar10._0_4_;
        local_res8 = local_res8 + local_res8 * (0.5 - fVar9 * 0.5 * local_res8 * local_res8);
        local_res8 = local_res8 + local_res8 * (0.5 - fVar9 * 0.5 * local_res8 * local_res8);
        fVar8 = fVar8 * local_res8;
        fVar12 = fVar12 * local_res8;
        goto LAB_142ce358b;
      }
    }
    fVar8 = (float)(**(code **)(*param_1 + 0x400))(param_1);
    local_90 = fVar14 * fVar8;
    *(ulonglong *)((longlong)param_1 + 0x18c) = CONCAT44(fVar13 * fVar8,fVar11 * fVar8);
    *(float *)((longlong)param_1 + 0x194) = local_90;
    bVar3 = *(byte *)(param_1 + 0x32d);
  }
  *(byte *)(param_1 + 0x32d) = bVar3 & 0xfb;
LAB_142ce35ed:
  if (((param_1[0x2ef] == 0) || ((*(byte *)((longlong)param_1 + 0x18cc) & 2) != 0)) ||
     (param_1[0x2f] == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((char)param_1[0x217] == '\0') {
    if ((param_1[0x1fc] == 0) || ((char)param_1[0x460] == '\0')) {
      FUN_142331410(param_1,param_2,param_3,param_4,CONCAT44(uVar15,param_5));
      if (bVar1) {
        FUN_142cbaeb0(param_1 + 0x2ee,param_2,(longlong)param_1 + 0x18c,param_1 + 0x6a);
      }
    }
    else {
      if (*(float *)(param_1 + 0x46b) != 0.0) {
        param_3 = 0;
      }
      (**(code **)(*param_1 + 0x860))(param_1,param_2,param_3);
    }
  }
  else {
    local_90 = 0.0;
    param_1[0x6a] = 0;
    *(undefined4 *)(param_1 + 0x6b) = 0;
    if ((*(byte *)(param_1 + 0x215) & 8) == 0) {
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x212);
      if ((lVar4 == 0) || ((*(byte *)(param_1 + 0x215) & 1) == 0)) {
        local_98 = *(longlong *)((longlong)param_1 + 0x10ac);
        local_90 = *(float *)((longlong)param_1 + 0x10b4);
      }
      else {
        uVar5 = FWeakObjectPtr::Get(param_1 + 0x212);
        FUN_142ce3180(param_1,&local_98,uVar5);
      }
      FUN_142ce2b40(param_1,&local_res8,param_2,(longlong)param_1 + 0x10bc,&local_98,
                    (byte)(*(uint *)(param_1 + 0x215) >> 1) & 1);
      local_90 = 0.0;
      *(ulonglong *)((longlong)param_1 + 0x18c) = CONCAT44(local_resc,local_res8);
      *(undefined4 *)((longlong)param_1 + 0x194) = 0;
    }
    else {
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x212);
      if ((lVar4 == 0) || ((*(byte *)(param_1 + 0x215) & 1) == 0)) {
        local_98 = *(longlong *)((longlong)param_1 + 0x10ac);
        local_90 = *(float *)((longlong)param_1 + 0x10b4);
      }
      else {
        uVar5 = FWeakObjectPtr::Get(param_1 + 0x212);
        FUN_142ce3180(param_1,&local_98,uVar5);
      }
      puVar6 = (undefined8 *)
               FUN_142ce2e30(param_1,local_8c,param_2,(longlong)param_1 + 0x10bc,&local_98,
                             (byte)(*(uint *)(param_1 + 0x215) >> 1) & 1);
      *(undefined8 *)((longlong)param_1 + 0x18c) = *puVar6;
      *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(puVar6 + 1);
    }
  }
  puVar6 = (undefined8 *)((longlong)param_1 + 0x18c);
  puVar7 = (undefined8 *)FUN_142d9bf60(param_1 + 0x4ad,local_8c,puVar6);
  *puVar6 = *puVar7;
  *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(puVar7 + 1);
  if (((param_1[0x41f] != 0) && (!bVar1)) &&
     ((cVar2 = (**(code **)(*param_1 + 0x560))(param_1), cVar2 != '\0' ||
      (cVar2 = (**(code **)(*param_1 + 0x570))(param_1), cVar2 != '\0')))) {
    puVar7 = (undefined8 *)
             (**(code **)(*(longlong *)param_1[0x41f] + 0x420))
                       ((longlong *)param_1[0x41f],local_8c,puVar6,param_1 + 0x70);
    *puVar6 = *puVar7;
    *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(puVar7 + 1);
  }
  return;
}



// FUNCTION 142ce38f0 FUN_142ce38f0 body=48 status=ok
// SIG undefined FUN_142ce38f0(void)

void FUN_142ce38f0(undefined8 *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)*param_1 + 0x5c0))();
  if (cVar1 != '\0') {
    FUN_142d008e0(*param_1,param_1[1]);
    return;
  }
  return;
}



// FUNCTION 142ce39a0 FUN_142ce39a0 body=57 status=ok
// SIG undefined FUN_142ce39a0(void)

void FUN_142ce39a0(undefined8 *param_1)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_18 = *(undefined8 *)((longlong)param_1 + 0xc);
  FUN_142e3bce0(*param_1,*(undefined4 *)(param_1 + 1),&local_18,*(undefined1 *)(param_1 + 3),
                *(undefined4 *)((longlong)param_1 + 0x1c));
  return;
}



// FUNCTION 142ce3b20 FUN_142ce3b20 body=51 status=ok
// SIG undefined FUN_142ce3b20(void)

void FUN_142ce3b20(longlong param_1)

{
  FUN_1423328e0();
  if ((*(longlong *)(param_1 + 0xfd8) != 0) &&
     (1 < *(byte *)(*(longlong *)(param_1 + 0xfd8) + 0x128))) {
    FUN_142cc9250();
    return;
  }
  return;
}



// FUNCTION 142ce3b60 FUN_142ce3b60 body=2116 status=ok
// SIG undefined FUN_142ce3b60(void)

void FUN_142ce3b60(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  char cVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined2 uVar19;
  longlong lVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined8 in_stack_fffffffffffffe58;
  undefined4 uVar24;
  undefined4 in_stack_fffffffffffffe78;
  undefined2 uVar25;
  undefined8 local_158;
  undefined4 local_150;
  uint local_148;
  undefined4 local_144;
  undefined8 local_140;
  longlong local_138;
  undefined4 local_130;
  longlong local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  code *local_e8 [2];
  undefined1 local_d8 [32];
  undefined8 local_b8;
  undefined4 local_a8;
  
  uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
  uVar25 = (undefined2)((uint)in_stack_fffffffffffffe78 >> 0x10);
  fVar22 = *(float *)((longlong)param_2 + 0x184) * 182.04445;
  fVar23 = *(float *)((longlong)param_2 + 0x18c) * 0.7111111;
  uVar21 = ((int)ROUND(*(float *)(param_2 + 0x31) * 182.04445 +
                       *(float *)(param_2 + 0x31) * 182.04445 + 0.5) >> 1) << 0x10 |
           (int)ROUND(fVar22 + fVar22 + 0.5) >> 1 & 0xffffU;
  fVar22 = *(float *)((longlong)param_2 + 0x104) * 182.04445;
  uVar13 = (int)ROUND(fVar23 + fVar23 + 0.5) >> 1;
  local_148 = uVar21;
  local_140 = FWeakObjectPtr::Get(param_2 + 0x32);
  lVar5 = param_2[0x33];
  cVar9 = FUN_142314560(local_140);
  lVar20 = 0x154;
  if (cVar9 != '\0') {
    lVar20 = 0x178;
  }
  uVar3 = *(undefined4 *)(lVar20 + 8 + (longlong)param_2);
  lVar20 = *(longlong *)(lVar20 + (longlong)param_2);
  if (param_3 != (longlong *)0x0) {
    plVar6 = (longlong *)param_3[0x69];
    if (plVar6 != (longlong *)0x0) {
      lVar15 = plVar6[0x1f];
      if (lVar15 == 0) {
        (**(code **)(*plVar6 + 0x368))(plVar6);
        lVar15 = plVar6[0x1f];
        if (lVar15 == 0) goto LAB_142ce3d7e;
      }
      if ((*(uint *)(lVar15 + 0x28) & 0x10000) != 0) {
        uVar16 = FVector::Rotation(param_3 + 0x6c,&local_138);
        uVar14 = FUN_142cbd090(uVar16);
        uVar1 = *(undefined4 *)((longlong)param_3 + 0x1c);
        uVar16 = *(undefined8 *)((longlong)param_3 + 0x354);
        uVar4 = *(undefined4 *)((longlong)param_3 + 0x35c);
        uVar10 = (**(code **)(*param_3 + 0x50))(param_3);
        uStack_f8 = CONCAT31(uStack_f8._1_3_,uVar10);
        uStack_104 = (undefined4)uVar16;
        uStack_100 = (undefined4)((ulonglong)uVar16 >> 0x20);
        local_b8 = 0;
        local_a8 = 0;
        local_110 = param_1;
        uStack_108 = uVar1;
        uStack_fc = uVar4;
        uStack_f4 = uVar14;
        puVar17 = (undefined8 *)FUN_140438ef0(0x28,local_d8);
        if (puVar17 != (undefined8 *)0x0) {
          *puVar17 = &PTR_FUN_143ff7760;
          *(undefined4 *)(puVar17 + 1) = (undefined4)local_110;
          *(undefined4 *)((longlong)puVar17 + 0xc) = local_110._4_4_;
          *(undefined4 *)(puVar17 + 2) = uStack_108;
          *(undefined4 *)((longlong)puVar17 + 0x14) = uStack_104;
          puVar17[3] = CONCAT44(uStack_fc,uStack_100);
          puVar17[4] = CONCAT44(uStack_f4,uStack_f8);
        }
        local_e8[0] = FUN_142ce39a0;
        FUN_14234b4d0(param_1,local_e8);
        goto LAB_142ce3dba;
      }
    }
LAB_142ce3d7e:
    local_150 = (undefined4)param_3[0x36];
    local_158 = param_3[0x35];
    lVar15 = *param_1;
    uVar10 = (**(code **)(*param_3 + 0x50))(param_3);
    (**(code **)(lVar15 + 0x9e8))
              (param_1,*(undefined4 *)((longlong)param_3 + 0x1c),&local_158,uVar10);
  }
LAB_142ce3dba:
  lVar18 = FUN_14233f840(param_1);
  bVar8 = false;
  local_144 = 0;
  lVar15 = *(longlong *)(lVar18 + 0x30);
  if (((lVar15 != 0) && (*(char *)(lVar15 + 0x350) != '\0')) || ((char)param_2[0x6a] != '\0')) {
    bVar8 = true;
    uVar16 = FVector::Rotation(param_2 + 0x6c,&local_138);
    local_144 = FUN_142cbd090(uVar16);
  }
  uVar19 = (undefined2)((int)ROUND(fVar22 + fVar22 + 0.5) >> 1);
  uVar10 = (undefined1)uVar13;
  if (lVar15 == 0) {
    if (!bVar8) {
      local_120 = (undefined4)param_2[0x36];
      local_128 = param_2[0x35];
      lVar15 = *param_1;
      local_138 = lVar20;
      local_130 = uVar3;
      uVar10 = (**(code **)(*param_2 + 0x50))(param_2);
      (**(code **)(lVar15 + 0x9a0))
                (param_1,*(undefined4 *)((longlong)param_2 + 0x1c),&local_128,&local_138,uVar10,
                 uVar13 & 0xff,CONCAT44(uVar24,uVar21),local_140,lVar5,(char)param_2[0x2a],
                 CONCAT22(uVar25,uVar19));
      goto LAB_142ce42d5;
    }
    uVar24 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar16 = *(undefined8 *)((longlong)param_2 + 0x354);
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x35c);
    uVar11 = (**(code **)(*param_2 + 0x50))(param_2);
    FWeakObjectPtr::operator=(&local_158,local_140);
    uVar14 = local_158._4_4_;
    lVar15 = param_2[0x2a];
    uVar4 = (undefined4)local_158;
    local_b8 = 0;
    local_a8 = 0;
    puVar17 = (undefined8 *)FUN_140438ef0(0x58,local_d8);
    if (puVar17 != (undefined8 *)0x0) {
      *puVar17 = &PTR_FUN_14585dab0;
      puVar17[4] = lVar20;
      *(undefined4 *)(puVar17 + 5) = uVar3;
      *(undefined1 *)((longlong)puVar17 + 0x2d) = uVar10;
      *(undefined8 *)((longlong)puVar17 + 0x14) = uVar16;
      *(undefined4 *)(puVar17 + 2) = uVar24;
      puVar17[1] = param_1;
      *(undefined4 *)((longlong)puVar17 + 0x1c) = uVar1;
      *(undefined1 *)((longlong)puVar17 + 0x2c) = uVar11;
      *(uint *)(puVar17 + 6) = uVar21;
      *(undefined4 *)(puVar17 + 7) = uVar14;
      *(undefined4 *)((longlong)puVar17 + 0x34) = uVar4;
      *(undefined4 *)((longlong)puVar17 + 0x4c) = local_144;
      *(undefined2 *)(puVar17 + 10) = uVar19;
      puVar17[8] = lVar5;
      *(char *)(puVar17 + 9) = (char)lVar15;
    }
    local_e8[0] = (code *)&LAB_142ce3980;
  }
  else {
    lVar7 = *(longlong *)(lVar18 + 0x30);
    fVar22 = *(float *)(lVar7 + 0x188) * 182.04445;
    fVar23 = *(float *)(lVar7 + 0x184) * 182.04445;
    uVar13 = ((int)ROUND(fVar22 + fVar22 + 0.5) >> 1) << 0x10 |
             (int)ROUND(fVar23 + fVar23 + 0.5) >> 1 & 0xffffU;
    cVar9 = FUN_14044aea0(lVar7 + 0x1c8,0);
    if (cVar9 != '\0') {
      cVar9 = FUN_14044af00(param_2 + 0x39,0);
      if (cVar9 != '\0') {
        local_120 = (undefined4)param_2[0x36];
        plVar6 = *(longlong **)(lVar18 + 0x30);
        local_128 = param_2[0x35];
        lVar15 = *param_1;
        local_130 = (undefined4)plVar6[0x36];
        local_138 = plVar6[0x35];
        local_158 = lVar20;
        local_150 = uVar3;
        uVar11 = (**(code **)(*param_2 + 0x50))(param_2);
        uVar12 = (**(code **)(*plVar6 + 0x50))(plVar6);
        (**(code **)(lVar15 + 0x9d0))
                  (param_1,*(undefined4 *)((longlong)plVar6 + 0x1c),&local_138,uVar12,uVar13,
                   *(undefined4 *)((longlong)param_2 + 0x1c),&local_128,&local_158,uVar11,uVar10,
                   local_148,local_140,lVar5,(char)param_2[0x2a],uVar19);
        goto LAB_142ce42d5;
      }
    }
    if (!bVar8) {
      local_120 = (undefined4)param_2[0x36];
      plVar6 = *(longlong **)(lVar18 + 0x30);
      local_128 = param_2[0x35];
      lVar15 = *param_1;
      local_150 = (undefined4)plVar6[0x36];
      local_158 = plVar6[0x35];
      local_138 = lVar20;
      local_130 = uVar3;
      uVar11 = (**(code **)(*param_2 + 0x50))(param_2);
      uVar12 = (**(code **)(*plVar6 + 0x50))(plVar6);
      (**(code **)(lVar15 + 0x9b8))
                (param_1,*(undefined4 *)((longlong)plVar6 + 0x1c),&local_158,uVar12,uVar13,
                 *(undefined4 *)((longlong)param_2 + 0x1c),&local_128,&local_138,uVar11,uVar10,
                 local_148,local_140,lVar5,(char)param_2[0x2a],uVar19);
      goto LAB_142ce42d5;
    }
    uVar16 = FVector::Rotation(lVar15 + 0x360,&local_138);
    uVar14 = FUN_142cbd090(uVar16);
    uVar16 = *(undefined8 *)(lVar15 + 0x354);
    uVar4 = *(undefined4 *)(lVar15 + 0x35c);
    uVar24 = *(undefined4 *)((longlong)*(longlong **)(lVar18 + 0x30) + 0x1c);
    uVar11 = (**(code **)(**(longlong **)(lVar18 + 0x30) + 0x50))();
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_118 = *(undefined4 *)((longlong)param_2 + 0x35c);
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x354);
    uVar12 = (**(code **)(*param_2 + 0x50))(param_2);
    FWeakObjectPtr::operator=(&local_158,local_140);
    lVar15 = param_2[0x2a];
    local_114 = (undefined4)local_158;
    local_140 = CONCAT44(local_140._4_4_,local_158._4_4_);
    local_b8 = 0;
    local_a8 = 0;
    puVar17 = (undefined8 *)FUN_140438ef0(0x70,local_d8);
    if (puVar17 != (undefined8 *)0x0) {
      *puVar17 = &PTR_FUN_14585da98;
      puVar17[6] = uVar2;
      *(undefined4 *)(puVar17 + 7) = local_118;
      *(longlong *)((longlong)puVar17 + 0x3c) = lVar20;
      *(undefined4 *)((longlong)puVar17 + 0x44) = uVar3;
      *(undefined1 *)(puVar17 + 9) = uVar12;
      *(undefined1 *)((longlong)puVar17 + 0x49) = uVar10;
      *(uint *)((longlong)puVar17 + 0x4c) = local_148;
      *(undefined8 *)((longlong)puVar17 + 0x14) = uVar16;
      *(undefined4 *)(puVar17 + 2) = uVar24;
      *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar1;
      puVar17[1] = param_1;
      *(undefined4 *)((longlong)puVar17 + 0x1c) = uVar4;
      *(undefined1 *)(puVar17 + 4) = uVar11;
      *(uint *)((longlong)puVar17 + 0x24) = uVar13;
      *(undefined4 *)(puVar17 + 5) = uVar14;
      *(undefined4 *)(puVar17 + 10) = local_114;
      *(undefined4 *)((longlong)puVar17 + 0x54) = (undefined4)local_140;
      *(undefined4 *)((longlong)puVar17 + 100) = local_144;
      *(undefined2 *)(puVar17 + 0xd) = uVar19;
      puVar17[0xb] = lVar5;
      *(char *)(puVar17 + 0xc) = (char)lVar15;
    }
    local_e8[0] = (code *)&LAB_142ce3a00;
  }
  FUN_14234b4d0(param_1,local_e8);
LAB_142ce42d5:
  lVar5 = *(longlong *)(param_1[0x44] + 0x490);
  if (lVar5 != 0) {
    lVar20 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar20 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar20 + 0x90) * 8)
        != lVar20 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (((bVar8) && (lVar5 = *(longlong *)(lVar5 + 0x528), lVar5 != 0)) &&
       ((char)*(uint *)(lVar5 + 0x2c40) < '\0')) {
      *(uint *)(lVar5 + 0x2c40) = *(uint *)(lVar5 + 0x2c40) | 0x200;
    }
  }
  return;
}



// FUNCTION 142ce43f0 FUN_142ce43f0 body=245 status=ok
// SIG undefined FUN_142ce43f0(void)

ulonglong FUN_142ce43f0(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  byte bVar4;
  
  lVar1 = *param_2;
  bVar3 = *(byte *)(param_1 + 0x330);
  uVar2 = 0;
  if (((*(byte *)(lVar1 + 0x330) ^ bVar3) & 4) == 0) {
    bVar4 = *(byte *)(lVar1 + 0x330) & 1;
    uVar2 = 0;
    if (((((bVar3 & 1) == bVar4) && ((bVar3 >> 1 & 1) == bVar4)) &&
        (uVar2 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                           (param_1 + 0x334,lVar1 + 0x334), (char)uVar2 == '\0')) &&
       (uVar2 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                          (param_1 + 0x33c,lVar1 + 0x334), (char)uVar2 == '\0')) {
      uVar2 = 0;
      bVar3 = *(byte *)(lVar1 + 0x330) >> 5 & 1;
      if (((*(byte *)(param_1 + 0x330) >> 5 & 1) == bVar3) &&
         ((*(byte *)(param_1 + 0x330) >> 6 & 1) == bVar3)) {
        uVar2 = FUN_142332ea0(param_1,param_2,param_3,param_4);
        return uVar2;
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 142ce44f0 FUN_142ce44f0 body=225 status=ok
// SIG undefined FUN_142ce44f0(void)

undefined8 FUN_142ce44f0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_14233f450();
  if (iVar2 == 1) {
    return 1;
  }
  cVar1 = FUN_1407c3030(param_1 + 0x1c1);
  if (cVar1 == '\0') {
    if (((longlong *)param_1[0x1fb] != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*(longlong *)param_1[0x1fb] + 0x990))(), cVar1 != '\0')) {
      return 0;
    }
    if ((((char)param_1[0x49] != '\x06') || (*(char *)((longlong)param_1 + 0x249) != '\0')) ||
       (param_1[0x2f] == 0)) {
      if (((longlong *)param_1[0x1fb] != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*(longlong *)param_1[0x1fb] + 0x988))(), cVar1 != '\0')) {
        return 1;
      }
      if (((*(byte *)(param_1 + 0x225) & 1) == 0) &&
         (cVar1 = (**(code **)(*param_1 + 0x558))(param_1), cVar1 != '\0')) {
        return 0;
      }
      if ((((param_1[0x2ef] == 0) || ((*(byte *)((longlong)param_1 + 0x18cc) & 2) != 0)) ||
          (param_1[0x2f] == 0)) || ((*(byte *)(param_1[0x2ef] + 0x2c) & 0x40) == 0)) {
        if (*(char *)((longlong)param_1 + 0x221c) != '\0') {
          return 1;
        }
        uVar3 = FUN_142333190(param_1);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 142ce45e0 FUN_142ce45e0 body=43 status=ok
// SIG undefined FUN_142ce45e0(void)

undefined1 FUN_142ce45e0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142333200();
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x10b8) == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 142ce4610 FUN_142ce4610 body=49 status=ok
// SIG undefined FUN_142ce4610(void)

bool FUN_142ce4610(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1407c3030(param_1 + 0x570);
  if (cVar1 != '\0') {
    return false;
  }
  return *(char *)(param_1 + 0x418) == '\x02';
}



// FUNCTION 142ce4670 FUN_142ce4670 body=51 status=ok
// SIG undefined FUN_142ce4670(void)

ulonglong FUN_142ce4670(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1407c3030(param_1 + 0x116);
  if ((char)uVar1 != '\0') {
    return uVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x000142ce469c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0xbc0))(param_1);
  return uVar1;
}



// FUNCTION 142ce46b0 FUN_142ce46b0 body=92 status=ok
// SIG undefined FUN_142ce46b0(void)

undefined1 FUN_142ce46b0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142c6a420(param_1 + 0x2110,1);
  if (cVar1 != '\0') {
    return 1;
  }
  if ((((*(longlong *)(param_1 + 0xfe0) != 0) && (*(longlong *)(param_1 + 0x1448) != 0)) &&
      (cVar1 = FUN_142ca54c0(), cVar1 != '\0')) &&
     (cVar1 = FUN_1407c3030(param_1 + 0x1620), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 142ce4740 FUN_142ce4740 body=1317 status=ok
// SIG undefined FUN_142ce4740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_142ce4740(longlong *param_1,undefined4 *param_2,undefined8 param_3,float *param_4,float *param_5
             ,float param_6,undefined4 param_7,undefined4 param_8,char param_9)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_258 [32];
  float *local_238;
  float local_230;
  undefined1 *local_228;
  undefined8 *local_220;
  undefined1 *local_218;
  undefined8 local_208;
  float local_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8 [4];
  float local_1e4;
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [12];
  float local_1ac;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined2 local_114;
  undefined1 local_112;
  undefined4 local_110;
  undefined1 local_10c;
  undefined4 local_108;
  undefined2 local_104;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_c0;
  undefined8 local_b8;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  cVar2 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar2 == '\0') {
LAB_142ce4c2f:
    uVar7 = 0;
  }
  else {
    if (param_6 == 0.0) {
      if (param_9 != '\0') {
        if (((((*param_4 == 0.0) && (param_4[1] == 0.0)) && (param_4[2] == 0.0)) &&
            ((*(float *)(param_1 + 0x6a) == 0.0 && (*(float *)((longlong)param_1 + 0x354) == 0.0))))
           && ((*(float *)(param_1 + 0x6b) == 0.0 && (((byte)*param_2 & 3) != 3)))) {
          lVar6 = param_1[0x2f];
          local_1f8 = *(float *)(lVar6 + 0x220);
          fStack_1f4 = *(float *)(lVar6 + 0x224);
          fStack_1f0 = *(float *)(lVar6 + 0x228);
          uStack_1ec = *(undefined4 *)(lVar6 + 0x22c);
          if ((((local_1f8 == *param_5) && (fStack_1f4 == param_5[1])) && (fStack_1f0 == param_5[2])
              ) && (((plVar5 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x21),
                     plVar5 != (longlong *)0x0 &&
                     (iVar3 = (**(code **)(*plVar5 + 0x4e8))(plVar5), (iVar3 - 1U & 0xfffffffd) == 0
                     )) && (iVar3 = (**(code **)(*plVar5 + 0x4f0))(plVar5,2), iVar3 == 2)))) {
            return 1;
          }
        }
        goto LAB_142ce4893;
      }
LAB_142ce489c:
      lVar6 = param_1[0x2ef];
      if (((((lVar6 != 0) && ((*(byte *)((longlong)param_1 + 0x18cc) & 2) == 0)) &&
           (param_1[0x2f] != 0)) &&
          (((*param_4 != 0.0 || (param_4[1] != 0.0)) || (param_4[2] != 0.0)))) &&
         ((*(char *)(lVar6 + 0x390) != '\0' && (0.0 < *(float *)(lVar6 + 0x394))))) {
        local_120 = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_110 = 0;
        local_208 = 0;
        local_128 = 0;
        local_114 = 0;
        local_10c = 0;
        local_112 = 0;
        local_108 = 0;
        local_118 = 0x10000;
        local_104 = 0x101;
        FCollisionQueryParams::AddIgnoredActor(&local_128,param_1[0x44]);
        FUN_1426d3dd0(local_1d8);
        FUN_1426ea8d0(local_1d8,2);
        (**(code **)(*param_1 + 0x478))(param_1,&local_128,local_1d8);
        FUN_14233f510(param_1,local_1e8,0,0);
        uVar4 = (**(code **)(*(longlong *)param_1[0x2f] + 0x4f8))();
        fVar9 = *param_4;
        fVar10 = param_4[1];
        fVar11 = param_4[2];
        fVar8 = fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
        auVar13 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
        fVar12 = auVar13._0_4_;
        fVar12 = fVar12 + fVar12 * (0.5 - fVar8 * 0.5 * fVar12 * fVar12);
        fVar12 = fVar12 + fVar12 * (0.5 - fVar8 * 0.5 * fVar12 * fVar12);
        local_208 = CONCAT44(local_208._4_4_,fVar12);
        lVar1 = param_1[0x2f];
        fVar8 = *(float *)(lVar1 + 0x220) + fVar12 * fVar9 * local_1e4;
        fVar10 = *(float *)(lVar1 + 0x224) + fVar12 * fVar10 * local_1e4;
        fVar11 = *(float *)(lVar1 + 0x228) + fVar12 * fVar11 * local_1e4;
        local_1f8 = fVar8;
        fStack_1f4 = fVar10;
        fStack_1f0 = fVar11;
        _guard_xfg_dispatch_icall_nop(local_1b8,0,0x90);
        fVar9 = *(float *)((longlong)param_1 + 0x234) + *(float *)(lVar6 + 0x394);
        lVar6 = param_1[0x24];
        local_1ac = 1.0;
        local_200 = fVar11 - fVar9 * DAT_1464aa7a0;
        local_208 = CONCAT44(fVar10 - fVar9 * DAT_1464aa798._4_4_,
                             fVar8 - fVar9 * (float)DAT_1464aa798);
        if (lVar6 == 0) {
          lVar6 = FUN_1423407b0(param_1);
        }
        local_218 = local_1d8;
        local_220 = &local_128;
        local_228 = local_1e8;
        local_238 = (float *)&DAT_1464aa810;
        local_230 = (float)uVar4;
        UWorld::SweepSingleByChannel(lVar6,local_1b8,&local_1f8,&local_208);
        if ((1.0 <= local_1ac) ||
           (cVar2 = (**(code **)(*param_1 + 0x7f0))(param_1,local_1b8), cVar2 == '\0')) {
          FUN_142cc8510(param_1 + 0x2ee);
          if (local_c0 != 0) {
            FMemory::Free();
          }
          if (local_e0 != 0) {
            FMemory::Free();
          }
          goto LAB_142ce4c2f;
        }
        param_9 = '\x01';
        if (local_c0 != 0) {
          FMemory::Free();
        }
        if (local_e0 != 0) {
          FMemory::Free();
        }
      }
    }
    else {
LAB_142ce4893:
      if (param_9 == '\0') goto LAB_142ce489c;
    }
    local_218 = (undefined1 *)CONCAT71(local_218._1_7_,param_9);
    local_220 = (undefined8 *)CONCAT44(local_220._4_4_,param_8);
    local_228 = (undefined1 *)CONCAT44(local_228._4_4_,param_7);
    local_230 = param_6;
    local_238 = param_5;
    uVar7 = FUN_142333950(param_1,param_2,param_3,param_4);
  }
  return uVar7;
}



// FUNCTION 142ce4c70 FUN_142ce4c70 body=494 status=ok
// SIG undefined FUN_142ce4c70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce4c70(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  float local_28;
  float fStack_24;
  float local_20;
  undefined1 local_18 [8];
  float local_10;
  
  if ((*(byte *)((longlong)param_1 + 0x137c) & 2) == 0) {
    return;
  }
  cVar4 = (**(code **)(*param_1 + 0xbc8))();
  if (cVar4 == '\0') {
    return;
  }
  if (param_1[0x26b] == 0) {
    return;
  }
  if (param_1[0x26c] == 0) {
    return;
  }
  if (param_1[0x1fb] == 0) {
    return;
  }
  if ((((char)param_1[0x49] == '\x06') && (*(char *)((longlong)param_1 + 0x249) == '\0')) &&
     (param_1[0x2f] != 0)) {
    return;
  }
  cVar4 = (**(code **)(*(longlong *)param_1[0x26c] + 0x40))((longlong *)param_1[0x26c],param_1);
  plVar6 = (longlong *)0x0;
  if (cVar4 != '\0') {
    plVar5 = plVar6;
    if (param_1[0x26b] != 0) {
      plVar5 = (longlong *)param_1[0x26c];
    }
    cVar4 = (**(code **)(*plVar5 + 0x30))();
    if (cVar4 != '\0') {
      cVar4 = '\x01';
      goto LAB_142ce4d28;
    }
  }
  cVar4 = '\0';
LAB_142ce4d28:
  *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xfffff7ff;
  *(char *)(param_1 + 0x270) = cVar4 * '\x02' + '\x01';
  if ((*(byte *)(param_1[0x1fb] + 0x56c) & 1) != 0) {
    (**(code **)(*param_1 + 0x770))(param_1,0);
  }
  if (cVar4 != '\0') {
    if (param_1[0x26b] != 0) {
      plVar6 = (longlong *)param_1[0x26c];
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,&local_28,param_1);
    if ((((local_28 != 0.0) || (fStack_24 != 0.0)) || (local_20 != 0.0)) &&
       (lVar1 = param_1[0x2f], lVar1 != 0)) {
      uVar2 = *(undefined4 *)(lVar1 + 0x224);
      uVar3 = *(undefined4 *)(lVar1 + 0x228);
      *(undefined4 *)((longlong)param_1 + 0x1384) = *(undefined4 *)(lVar1 + 0x220);
      *(undefined4 *)(param_1 + 0x271) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x138c) = uVar3;
      local_10 = local_20;
      FUN_1423990b0(lVar1,local_18,0,0,1);
      *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) | 0x20;
      *(undefined8 *)((longlong)param_1 + 0x18c) = _DAT_1468b5d90;
      *(undefined4 *)((longlong)param_1 + 0x194) = DAT_1468b5d98;
    }
  }
  (**(code **)(*param_1 + 0x5a0))(param_1,6);
  return;
}



// FUNCTION 142ce4e60 FUN_142ce4e60 body=4961 status=ok
// SIG undefined FUN_142ce4e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ce4e60(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  float *pfVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined4 *puVar25;
  undefined8 *puVar26;
  longlong lVar27;
  bool bVar28;
  bool bVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  longlong local_1b0;
  uint local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong *local_190;
  longlong local_188;
  float local_180;
  float local_17c;
  float local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  undefined4 local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  float local_110;
  undefined1 local_108 [8];
  undefined4 local_100;
  undefined8 local_f8 [16];
  undefined8 *local_78;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  if (*(char *)(param_1 + 400) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 400) = 0;
  local_1a0 = param_1;
  plVar7 = (longlong *)FUN_142c6f130();
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 0x192) != '\0') {
    return;
  }
  local_190 = plVar7;
  iVar5 = FUN_142235230(plVar7);
  if (iVar5 == 1) {
    return;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar8 = FUN_142c61880(param_1,&local_168);
    FUN_142c81170(*(undefined8 *)(param_1 + 0x18),plVar7,uVar8);
    uVar22 = 0;
    plVar14 = *(longlong **)(param_1 + 0x170);
    uVar24 = (longlong)*(int *)(param_1 + 0x178) & 0x1fffffffffffffff;
    if (plVar14 + *(int *)(param_1 + 0x178) < plVar14) {
      uVar24 = uVar22;
    }
    if (uVar24 != 0) {
      do {
        lVar19 = *plVar14;
        if (lVar19 != 0) {
          uVar8 = FUN_142c61880(param_1,&local_168);
          FUN_142c81170(*(undefined8 *)(param_1 + 0x18),lVar19,uVar8);
        }
        plVar14 = plVar14 + 1;
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar24);
    }
    *(undefined4 *)(param_1 + 0x178) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x17c)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x170);
    }
  }
  uVar17 = 0;
  lVar19 = *(longlong *)(param_1 + 0x10);
  uVar24 = uVar17;
  uVar22 = uVar17;
  local_188 = lVar19;
  if (0 < *(int *)(param_1 + 0xd8)) {
    do {
      plVar14 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + uVar17 * 8);
      if ((plVar14 != (longlong *)0x0) && (plVar14[0x23] != 0)) {
        if (lVar19 != 0) {
          if (((longlong)uVar17 < 0) || (*(int *)(lVar19 + 0xf0) <= (int)uVar24)) {
            bVar29 = false;
          }
          else {
            bVar29 = true;
          }
          if ((bVar29) && ((*(byte *)(uVar22 + 0x71 + *(longlong *)(lVar19 + 0xe8)) & 8) != 0))
          goto LAB_142ce5059;
        }
        cVar3 = (**(code **)(*plVar14 + 0x2a0))(plVar14);
        if (cVar3 == '\0') {
          (**(code **)(*plVar14 + 0x3b0))(plVar14);
        }
        else {
          *(byte *)((longlong)plVar14 + 0x71a) = *(byte *)((longlong)plVar14 + 0x71a) | 0x40;
          (**(code **)(*plVar14 + 0x290))(plVar14,0,0);
        }
      }
LAB_142ce5059:
      uVar21 = (int)uVar24 + 1;
      uVar17 = uVar17 + 1;
      uVar24 = (ulonglong)uVar21;
      uVar22 = uVar22 + 0x80;
    } while ((int)uVar21 < *(int *)(param_1 + 0xd8));
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo();
  }
  uVar22 = 0;
  plVar14 = *(longlong **)(param_1 + 0xe0);
  uVar24 = (longlong)*(int *)(param_1 + 0xe8) & 0x1fffffffffffffff;
  if (plVar14 + *(int *)(param_1 + 0xe8) < plVar14) {
    uVar24 = uVar22;
  }
  if (uVar24 != 0) {
    do {
      plVar23 = (longlong *)*plVar14;
      if ((plVar23 != (longlong *)0x0) && (plVar23[0x23] != 0)) {
        (**(code **)(*plVar23 + 0x3b0))();
      }
      plVar14 = plVar14 + 1;
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar24);
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0xec) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xe0);
  }
  lVar15 = 0;
  iVar5 = *(int *)((longlong)plVar7 + 0xc);
  if (iVar5 < (int)DAT_1469e91c4) {
    uVar11 = iVar5 >> 0x1f & 0xffff;
    uVar21 = iVar5 + uVar11;
    lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar21 >> 0x10) * 8) +
             (longlong)(int)((uVar21 & 0xffff) - uVar11) * 0x18;
  }
  if ((*(uint *)(lVar15 + 8) >> 0x1c & 1) != 0) {
    return;
  }
  if (lVar19 == 0) {
    return;
  }
  pfVar9 = (float *)(**(code **)(*plVar7 + 0x560))(plVar7,&local_168,0);
  uVar8 = 0;
  local_118 = *(undefined8 *)(pfVar9 + 4);
  local_128 = *pfVar9;
  fStack_124 = pfVar9[1];
  fStack_120 = pfVar9[2];
  fStack_11c = pfVar9[3];
  local_110 = pfVar9[6];
  local_178 = (fStack_120 + (float)((ulonglong)local_118 >> 0x20)) * 0.5;
  local_17c = (fStack_124 + (float)local_118) * 0.5;
  local_180 = (local_128 + fStack_11c) * 0.5;
  if ((0 < *(int *)(param_1 + 0x108)) &&
     ((0 < *(int *)(lVar19 + 0xa8) || (0 < *(int *)(lVar19 + 0xb8))))) {
    fVar30 = *(float *)(param_1 + 0x198) / *(float *)(param_1 + 0x194);
    if (0.0 <= fVar30) {
      if (1.0 <= fVar30) {
        fVar30 = 1.0;
      }
      if ((1.0 <= fVar30) && ((*(byte *)(lVar19 + 0xd1) & 0x10) == 0)) goto LAB_142ce5436;
    }
    iVar5 = *(int *)(param_1 + 0x108) + -1;
    lVar15 = param_1;
    if (-1 < iVar5) {
      lVar18 = (longlong)iVar5 << 4;
      lVar27 = lVar18;
      do {
        lVar19 = *(longlong *)(param_1 + 0x100);
        lVar15 = *(longlong *)(lVar18 + 8 + lVar19);
        if (lVar15 == 0) {
LAB_142ce52d0:
          iVar13 = *(int *)(param_1 + 0x108);
          iVar6 = (iVar13 - iVar5) + -1;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          if (iVar6 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar27 + lVar19),
                       (void *)((longlong)(iVar13 - iVar6) * 0x10 + lVar19),(longlong)iVar6 << 4);
            iVar13 = *(int *)(param_1 + 0x108);
          }
          *(int *)(param_1 + 0x108) = iVar13 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink();
        }
        else {
          iVar13 = *(int *)(lVar15 + 0xc);
          lVar15 = 0;
          if (iVar13 < (int)DAT_1469e91c4) {
            uVar11 = iVar13 >> 0x1f & 0xffff;
            uVar21 = iVar13 + uVar11;
            lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar21 >> 0x10) * 8) +
                     (longlong)(int)((uVar21 & 0xffff) - uVar11) * 0x18;
          }
          if (((byte)((uint)*(undefined4 *)(lVar15 + 8) >> 0x1d) & 1) != 0) goto LAB_142ce52d0;
        }
        lVar27 = lVar27 + -0x10;
        lVar18 = lVar18 + -0x10;
        iVar5 = iVar5 + -1;
        lVar15 = local_1a0;
        lVar19 = local_188;
      } while (-1 < iVar5);
    }
    param_1 = lVar15;
    if (((*(byte *)(lVar19 + 0xd1) & 0x20) != 0) ||
       ((*(longlong *)(param_1 + 0x1b0) == 0 && (*(longlong *)(param_1 + 0x1b8) == 0)))) {
      if ((*(byte *)(lVar19 + 0xd1) & 0x10) == 0) {
        uVar22 = 0;
        uVar24 = uVar22;
        if (0 < *(int *)(lVar19 + 0xa8)) {
          do {
            local_1b0 = 0;
            puVar20 = (undefined8 *)(*(longlong *)(lVar19 + 0xa0) + uVar24);
            iVar5 = (int)uVar22;
            if ((iVar5 < 0) || (*(int *)(param_1 + 0x138) <= iVar5)) {
              bVar29 = false;
            }
            else {
              bVar29 = true;
            }
            if (bVar29) {
              local_1b0 = *(longlong *)(param_1 + 0x130) + (longlong)iVar5 * 8;
            }
            local_1b8 = local_190;
            uVar31 = FUN_142ce99f0(puVar20,0x3f800000,&local_128);
            lVar15 = *(longlong *)(param_1 + 0x100);
            lVar27 = lVar15 + (longlong)*(int *)(param_1 + 0x108) * 0x10;
            if (lVar15 != lVar27) {
              do {
                local_1b8 = puVar20 + 0x29;
                if ((*(byte *)(puVar20 + 0x28) & 1) == 0) {
                  local_1b8 = (longlong *)0x0;
                }
                FUN_142cff4c0(*(undefined8 *)(lVar15 + 8),*puVar20,uVar31);
                lVar15 = lVar15 + 0x10;
                param_1 = local_1a0;
              } while (lVar15 != lVar27);
            }
            uVar22 = (ulonglong)(iVar5 + 1U);
            uVar24 = uVar24 + 0x158;
          } while ((int)(iVar5 + 1U) < *(int *)(lVar19 + 0xa8));
        }
        uVar22 = 0;
        uVar24 = uVar22;
        if (0 < *(int *)(lVar19 + 0xb8)) {
          do {
            puVar20 = (undefined8 *)(*(longlong *)(lVar19 + 0xb0) + uVar24);
            FUN_142ce9b30(puVar20,&local_168,0x3f800000);
            lVar15 = *(longlong *)(param_1 + 0x100);
            lVar27 = lVar15 + (longlong)*(int *)(param_1 + 0x108) * 0x10;
            if (lVar15 != lVar27) {
              do {
                local_1b8 = puVar20 + 0x4b;
                if ((*(byte *)(puVar20 + 0x4a) & 1) == 0) {
                  local_1b8 = (longlong *)0x0;
                }
                FUN_142cff5b0(*(undefined8 *)(lVar15 + 8),*puVar20,&local_168);
                lVar15 = lVar15 + 0x10;
                param_1 = local_1a0;
              } while (lVar15 != lVar27);
            }
            uVar21 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar21;
            uVar24 = uVar24 + 0x268;
          } while ((int)uVar21 < *(int *)(lVar19 + 0xb8));
        }
      }
      else {
        puVar20 = *(undefined8 **)(lVar19 + 0xa0);
        puVar12 = puVar20 + (longlong)*(int *)(lVar19 + 0xa8) * 0x2b;
        for (; puVar20 != puVar12; puVar20 = puVar20 + 0x2b) {
          lVar15 = *(longlong *)(param_1 + 0x100);
          lVar27 = (longlong)*(int *)(param_1 + 0x108) * 0x10 + lVar15;
          for (; lVar15 != lVar27; lVar15 = lVar15 + 0x10) {
            FUN_142ce64c0(*(undefined8 *)(lVar15 + 8),*puVar20,1);
          }
        }
        puVar20 = *(undefined8 **)(lVar19 + 0xb0);
        puVar12 = puVar20 + (longlong)*(int *)(lVar19 + 0xb8) * 0x4d;
        for (; puVar20 != puVar12; puVar20 = puVar20 + 0x4d) {
          lVar15 = *(longlong *)(param_1 + 0x100);
          lVar27 = (longlong)*(int *)(param_1 + 0x108) * 0x10 + lVar15;
          for (; lVar15 != lVar27; lVar15 = lVar15 + 0x10) {
            FUN_142ce64c0(*(undefined8 *)(lVar15 + 8),*puVar20,1);
          }
        }
      }
    }
  }
LAB_142ce5436:
  iVar5 = *(int *)(param_1 + 0x118);
  iVar13 = iVar5 + -1;
  if (-1 < iVar13) {
    lVar15 = (longlong)iVar13 * 8;
    lVar27 = lVar15;
    do {
      lVar18 = 0;
      lVar1 = *(longlong *)(param_1 + 0x110);
      if (*(longlong *)(lVar1 + lVar15) == 0) {
LAB_142ce56bc:
        iVar5 = *(int *)(param_1 + 0x118);
        iVar6 = (iVar5 - iVar13) + -1;
        if (0 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar1 + lVar27),(void *)(lVar1 + (longlong)(iVar5 - iVar6) * 8),
                     (longlong)iVar6 << 3);
          iVar5 = *(int *)(param_1 + 0x118);
        }
        *(int *)(param_1 + 0x118) = iVar5 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x110);
      }
      else {
        iVar5 = *(int *)(*(longlong *)(lVar1 + lVar15) + 0xc);
        if (iVar5 < (int)DAT_1469e91c4) {
          uVar11 = iVar5 >> 0x1f & 0xffff;
          uVar21 = iVar5 + uVar11;
          lVar18 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar21 >> 0x10) * 8) +
                   (longlong)(int)((uVar21 & 0xffff) - uVar11) * 0x18;
        }
        if (((byte)((uint)*(undefined4 *)(lVar18 + 8) >> 0x1d) & 1) != 0) goto LAB_142ce56bc;
      }
      lVar27 = lVar27 + -8;
      lVar15 = lVar15 + -8;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
    iVar5 = *(int *)(param_1 + 0x118);
  }
  uVar24 = 0;
  if ((0 < iVar5) &&
     (local_1a8 = 0, uVar22 = uVar24, uVar31 = local_168, uVar32 = uStack_164, uVar33 = uStack_160,
     uVar34 = uStack_15c, 0 < *(int *)(lVar19 + 0x128))) {
    do {
      lVar15 = 0;
      lVar19 = *(longlong *)(lVar19 + 0x120);
      iVar5 = (int)uVar24;
      if ((iVar5 < 0) || (*(int *)(param_1 + 0x168) <= iVar5)) {
        bVar29 = false;
      }
      else {
        bVar29 = true;
      }
      if (bVar29) {
        lVar15 = (longlong)iVar5 * 0x1c + *(longlong *)(param_1 + 0x160);
      }
      bVar4 = *(byte *)(lVar19 + 8 + uVar22);
      if ((bVar4 & 1) != 0) {
        puVar10 = (undefined4 *)FUN_142ce9b30(uVar22 + 0x10 + lVar19,local_108,0x3f800000);
        uVar31 = *puVar10;
        uVar32 = puVar10[1];
        uVar33 = puVar10[2];
        uVar34 = puVar10[3];
        bVar4 = *(byte *)(lVar19 + 8 + uVar22);
      }
      if ((bVar4 & 2) != 0) {
        local_1b0 = lVar15 + 0x14;
        if (lVar15 == 0) {
          local_1b0 = 0;
        }
        local_1b8 = local_190;
        uVar8 = FUN_142ce99f0(uVar22 + 0x278 + lVar19,0x3f800000,&local_128);
      }
      uVar17 = 0;
      plVar7 = *(longlong **)(param_1 + 0x110);
      uVar24 = (longlong)*(int *)(param_1 + 0x118) & 0x1fffffffffffffff;
      if (plVar7 + *(int *)(param_1 + 0x118) < plVar7) {
        uVar24 = uVar17;
      }
      if (uVar24 != 0) {
        local_198 = 0;
        do {
          lVar15 = *plVar7;
          if ((*(longlong *)(lVar19 + uVar22) == 0) ||
             (*(int *)(lVar15 + 0x18) == (int)*(longlong *)(lVar19 + uVar22))) {
            bVar29 = true;
          }
          else {
            bVar29 = false;
          }
          if (bVar29) {
            bVar4 = *(byte *)(lVar19 + 8 + uVar22);
            if ((bVar4 & 1) != 0) {
              local_168 = uVar31;
              uStack_164 = uVar32;
              uStack_160 = uVar33;
              uStack_15c = uVar34;
              FUN_142377550(lVar15,&local_168,1);
              bVar4 = *(byte *)(lVar19 + 8 + uVar22);
            }
            if ((bVar4 & 2) != 0) {
              FUN_1423772c0(lVar15,uVar8);
            }
          }
          plVar7 = plVar7 + 1;
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar24);
      }
      local_1a8 = local_1a8 + 1;
      uVar24 = (ulonglong)local_1a8;
      uVar22 = uVar22 + 0x3d0;
      param_1 = local_1a0;
      lVar19 = local_188;
    } while ((int)local_1a8 < *(int *)(local_188 + 0x128));
  }
  iVar5 = *(int *)(param_1 + 0x128);
  iVar13 = iVar5 + -1;
  if (-1 < iVar13) {
    lVar19 = (longlong)iVar13 * 8;
    lVar15 = lVar19;
    do {
      lVar27 = 0;
      lVar18 = *(longlong *)(param_1 + 0x120);
      if (*(longlong *)(lVar18 + lVar19) == 0) {
LAB_142ce5944:
        iVar5 = *(int *)(param_1 + 0x128);
        iVar6 = (iVar5 - iVar13) + -1;
        if (0 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar18 + lVar15),(void *)(lVar18 + (longlong)(iVar5 - iVar6) * 8),
                     (longlong)iVar6 << 3);
          iVar5 = *(int *)(param_1 + 0x128);
        }
        *(int *)(param_1 + 0x128) = iVar5 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x120);
      }
      else {
        iVar5 = *(int *)(*(longlong *)(lVar18 + lVar19) + 0xc);
        if (iVar5 < (int)DAT_1469e91c4) {
          uVar11 = iVar5 >> 0x1f & 0xffff;
          uVar21 = iVar5 + uVar11;
          lVar27 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar21 >> 0x10) * 8) +
                   (longlong)(int)((uVar21 & 0xffff) - uVar11) * 0x18;
        }
        if (((byte)((uint)*(undefined4 *)(lVar27 + 8) >> 0x1d) & 1) != 0) goto LAB_142ce5944;
      }
      lVar15 = lVar15 + -8;
      lVar19 = lVar19 + -8;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
    iVar5 = *(int *)(param_1 + 0x128);
    lVar19 = local_188;
  }
  puVar20 = (undefined8 *)0x0;
  if (0 < iVar5) {
    local_78 = (undefined8 *)0x0;
    local_1a8 = 0;
    local_70 = 0;
    if (0 < *(int *)(lVar19 + 0x100)) {
      local_198 = 0;
      puVar12 = puVar20;
      do {
        lVar15 = local_1a0;
        plVar7 = (longlong *)0x0;
        lVar19 = *(longlong *)(lVar19 + 0xf8);
        iVar5 = (int)puVar20;
        if ((iVar5 < 0) || (*(int *)(param_1 + 0x158) <= iVar5)) {
          bVar29 = false;
        }
        else {
          bVar29 = true;
        }
        plVar14 = plVar7;
        if (bVar29) {
          plVar14 = (longlong *)((longlong)iVar5 * 0x20 + *(longlong *)(local_1a0 + 0x150));
        }
        bVar29 = (longlong)local_70 < 0;
        local_70 = local_70 & 0xffffffff00000000;
        local_140 = lVar19;
        if (bVar29) {
          FUN_1407418a0(local_f8,0);
          plVar7 = (longlong *)(local_70 & 0xffffffff);
          puVar12 = local_78;
        }
        uVar17 = 0;
        uVar22 = (ulonglong)*(int *)(lVar15 + 0x128);
        plVar23 = *(longlong **)(lVar15 + 0x120);
        uVar24 = uVar22 & 0x1fffffffffffffff;
        if (plVar23 + uVar22 < plVar23) {
          uVar24 = uVar17;
        }
        lVar15 = local_198;
        if (uVar24 != 0) {
          do {
            lVar27 = *plVar23;
            lVar18 = *(longlong *)(lVar15 + lVar19 + 8);
            if (lVar27 != 0) {
              if ((lVar18 == 0) || (*(longlong *)(lVar27 + 0x6f0) != lVar18)) {
                local_148 = 0;
                if ((*(longlong *)(lVar15 + lVar19) != 0) &&
                   (*(int *)(lVar27 + 0x18) != (int)*(longlong *)(lVar15 + lVar19)))
                goto LAB_142ce5af3;
              }
              iVar5 = (int)plVar7 + 1;
              local_70 = CONCAT44(local_70._4_4_,iVar5);
              if (local_70._4_4_ < iVar5) {
                TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
                          (local_f8,plVar7);
                puVar12 = local_78;
                lVar15 = local_198;
              }
              puVar20 = local_f8;
              if (puVar12 != (undefined8 *)0x0) {
                puVar20 = puVar12;
              }
              puVar20[(int)plVar7] = lVar27;
              plVar7 = (longlong *)(local_70 & 0xffffffff);
              puVar12 = local_78;
            }
LAB_142ce5af3:
            plVar23 = plVar23 + 1;
            uVar17 = uVar17 + 1;
          } while (uVar17 != uVar24);
        }
        iVar5 = 0;
        if ((int)plVar7 != 0) {
          if ((*(byte *)(local_188 + 0x10d) & 1) == 0) {
            if (0 < *(int *)(lVar15 + lVar19 + 0x18)) {
              do {
                local_1b0 = 0;
                puVar20 = (undefined8 *)
                          ((longlong)iVar5 * 0x158 + *(longlong *)(lVar15 + lVar19 + 0x10));
                if (plVar14 != (longlong *)0x0) {
                  if ((iVar5 < 0) || ((int)plVar14[1] <= iVar5)) {
                    bVar29 = false;
                  }
                  else {
                    bVar29 = true;
                  }
                  if (bVar29) {
                    local_1b0 = *plVar14 + (longlong)iVar5 * 8;
                  }
                }
                local_1b8 = local_190;
                uVar31 = FUN_142ce99f0(puVar20,0x3f800000,&local_128,&local_180);
                puVar12 = local_f8;
                if (local_78 != (undefined8 *)0x0) {
                  puVar12 = local_78;
                }
                uVar24 = 0;
                uVar22 = (longlong)(int)local_70 & 0x1fffffffffffffff;
                if (puVar12 + (int)local_70 < puVar12) {
                  uVar22 = 0;
                }
                if (uVar22 != 0) {
                  do {
                    FUN_14260f0c0(*puVar12,*puVar20,uVar31);
                    uVar24 = uVar24 + 1;
                    puVar12 = puVar12 + 1;
                  } while (uVar24 != uVar22);
                }
                iVar5 = iVar5 + 1;
                puVar12 = local_78;
                lVar15 = local_198;
              } while (iVar5 < *(int *)(local_198 + lVar19 + 0x18));
            }
            iVar5 = 0;
            if (0 < *(int *)(lVar15 + lVar19 + 0x28)) {
              do {
                lVar27 = 0;
                puVar20 = (undefined8 *)
                          ((longlong)iVar5 * 0x268 + *(longlong *)(lVar15 + lVar19 + 0x20));
                if (plVar14 != (longlong *)0x0) {
                  if ((iVar5 < 0) || ((int)plVar14[3] <= iVar5)) {
                    bVar29 = false;
                  }
                  else {
                    bVar29 = true;
                  }
                  if (bVar29) {
                    lVar27 = plVar14[2] + (longlong)iVar5 * 0x14;
                  }
                }
                FUN_142ce9b30(puVar20,&local_168,0x3f800000,lVar27);
                puVar12 = local_f8;
                if (local_78 != (undefined8 *)0x0) {
                  puVar12 = local_78;
                }
                uVar24 = 0;
                uVar22 = (longlong)(int)local_70 & 0x1fffffffffffffff;
                if (puVar12 + (int)local_70 < puVar12) {
                  uVar22 = 0;
                }
                if (uVar22 != 0) {
                  do {
                    local_138 = CONCAT44(uStack_164,local_168);
                    local_100 = uStack_160;
                    local_130 = uStack_160;
                    FUN_142610200(*puVar12,*puVar20,&local_138);
                    uVar24 = uVar24 + 1;
                    puVar12 = puVar12 + 1;
                  } while (uVar24 != uVar22);
                }
                iVar5 = iVar5 + 1;
                puVar12 = local_78;
                lVar15 = local_198;
              } while (iVar5 < *(int *)(local_198 + lVar19 + 0x28));
            }
          }
          else {
            puVar20 = *(undefined8 **)(lVar15 + lVar19 + 0x10);
            puVar26 = puVar20 + (longlong)*(int *)(lVar15 + lVar19 + 0x18) * 0x2b;
            for (; puVar20 != puVar26; puVar20 = puVar20 + 0x2b) {
              uVar24 = 0;
              puVar16 = local_f8;
              if (puVar12 != (undefined8 *)0x0) {
                puVar16 = puVar12;
              }
              uVar22 = (longlong)(int)plVar7 & 0x1fffffffffffffff;
              if (puVar16 + (int)plVar7 < puVar16) {
                uVar22 = uVar24;
              }
              if (uVar22 != 0) {
                do {
                  FUN_1425ff2e0(*puVar16,*puVar20,1);
                  uVar24 = uVar24 + 1;
                  puVar16 = puVar16 + 1;
                } while (uVar24 != uVar22);
                plVar7 = (longlong *)(local_70 & 0xffffffff);
                puVar12 = local_78;
              }
              lVar19 = local_140;
              lVar15 = local_198;
            }
            puVar20 = *(undefined8 **)(lVar15 + lVar19 + 0x20);
            puVar26 = puVar20 + (longlong)*(int *)(lVar15 + lVar19 + 0x28) * 0x4d;
            for (; puVar20 != puVar26; puVar20 = puVar20 + 0x4d) {
              uVar24 = 0;
              puVar16 = local_f8;
              if (puVar12 != (undefined8 *)0x0) {
                puVar16 = puVar12;
              }
              uVar22 = (longlong)(int)plVar7 & 0x1fffffffffffffff;
              if (puVar16 + (int)plVar7 < puVar16) {
                uVar22 = uVar24;
              }
              if (uVar22 != 0) {
                do {
                  FUN_1425ff2e0(*puVar16,*puVar20,3);
                  uVar24 = uVar24 + 1;
                  puVar16 = puVar16 + 1;
                } while (uVar24 != uVar22);
                plVar7 = (longlong *)(local_70 & 0xffffffff);
                puVar12 = local_78;
              }
              lVar15 = local_198;
            }
          }
        }
        lVar19 = local_188;
        param_1 = local_1a0;
        local_198 = lVar15 + 0x30;
        local_1a8 = local_1a8 + 1;
        puVar20 = (undefined8 *)(ulonglong)local_1a8;
      } while ((int)local_1a8 < *(int *)(local_188 + 0x100));
      if (puVar12 != (undefined8 *)0x0) {
        FMemory::Free(puVar12);
      }
    }
  }
  if (0 < *(int *)(param_1 + 0xf8)) {
    bVar28 = *(char *)(lVar19 + 0x10c) == '\x01';
    bVar29 = *(char *)(lVar19 + 0x10c) == '\x02';
    lVar15 = *(longlong *)(param_1 + 0x18);
    if (lVar15 != 0) {
      plVar7 = *(longlong **)(lVar15 + 0x228);
      plVar14 = plVar7 + (longlong)*(int *)(lVar15 + 0x230) * 2;
      for (; plVar7 != plVar14; plVar7 = plVar7 + 2) {
        if ((*plVar7 != 0) && (lVar15 = *(longlong *)(*plVar7 + 0x10), lVar15 != 0)) {
          lVar27 = USafeZone::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar27 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar27 + 0x90) * 8) != lVar27 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (((bVar2) && (lVar15 != lVar19)) && (cVar3 = *(char *)(lVar15 + 0x10c), cVar3 != '\0'))
          {
            if (cVar3 == '\x01') {
              bVar28 = false;
            }
            else if (cVar3 == '\x02') {
              bVar29 = false;
            }
          }
        }
      }
    }
    uVar24 = 0;
    if (bVar28) {
      plVar14 = *(longlong **)(param_1 + 0xf0);
      plVar7 = plVar14 + *(int *)(param_1 + 0xf8);
      for (; plVar14 != plVar7; plVar14 = plVar14 + 1) {
        lVar15 = 0;
        lVar27 = *plVar14;
        if (lVar27 != 0) {
          iVar5 = *(int *)(lVar27 + 0xc);
          if (iVar5 < (int)DAT_1469e91c4) {
            uVar11 = iVar5 >> 0x1f & 0xffff;
            uVar21 = iVar5 + uVar11;
            lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar21 >> 0x10) * 8) +
                     (longlong)(int)((uVar21 & 0xffff) - uVar11) * 0x18;
          }
          if (((*(uint *)(lVar15 + 8) & 0x30000000) == 0) && (*(longlong *)(lVar27 + 0x118) != 0)) {
            lVar15 = *(longlong *)(lVar27 + 400);
            if (lVar15 != 0) {
              lVar18 = FUN_1429f11d0();
              if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar18 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar18 + 0x90) * 8) != lVar18 + 0x88)) {
                bVar29 = false;
              }
              else {
                bVar29 = true;
              }
              if ((bVar29) && ((*(byte *)(lVar15 + 0x24c) & 0x40) != 0)) goto LAB_142ce6014;
            }
            FUN_142397540(lVar27,0,1);
          }
        }
LAB_142ce6014:
      }
    }
    else if (bVar29) {
      plVar7 = *(longlong **)(param_1 + 0xf0);
      uVar22 = (longlong)*(int *)(param_1 + 0xf8) & 0x1fffffffffffffff;
      if (plVar7 + *(int *)(param_1 + 0xf8) < plVar7) {
        uVar22 = uVar24;
      }
      if (uVar22 != 0) {
        do {
          lVar15 = 0;
          lVar27 = *plVar7;
          if (lVar27 != 0) {
            uVar21 = *(uint *)(lVar27 + 0xc);
            if ((int)uVar21 < (int)DAT_1469e91c4) {
              uVar11 = uVar21 & 0xffff;
              if ((int)uVar21 < 0) {
                uVar21 = uVar21 + 0xffff;
                uVar11 = uVar11 - 0x10000;
              }
              lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar21 >> 0x10) * 8) +
                       (longlong)(int)uVar11 * 0x18;
            }
            if (((*(uint *)(lVar15 + 8) & 0x30000000) == 0) && (*(longlong *)(lVar27 + 0x118) != 0))
            {
              FUN_1425fcab0(lVar27,0);
            }
          }
          plVar7 = plVar7 + 1;
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar22);
      }
    }
    *(undefined4 *)(param_1 + 0xf8) = 0;
    if (*(int *)(param_1 + 0xfc) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xf0,0);
    }
  }
  puVar10 = *(undefined4 **)(param_1 + 0x100);
  puVar25 = puVar10 + (longlong)*(int *)(param_1 + 0x108) * 4;
  for (; puVar10 != puVar25; puVar10 = puVar10 + 4) {
    if ((*(byte *)(lVar19 + 0xd1) & 8) == 0) {
      FUN_142cfb1a0(param_1,*(undefined8 *)(puVar10 + 2),*puVar10);
    }
    if ((*(longlong *)(param_1 + 0x1b0) != 0) || (*(longlong *)(param_1 + 0x1b8) != 0)) {
      FUN_142cfaf60(param_1,*(undefined8 *)(puVar10 + 2));
    }
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x100,0);
  }
  return;
}



// FUNCTION 142ce61d0 FUN_142ce61d0 body=176 status=ok
// SIG undefined FUN_142ce61d0(void)

void FUN_142ce61d0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong local_28 [2];
  longlong local_18 [2];
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  if (param_1 + 4 != local_28) {
    param_1[4] = 0;
    plVar3 = (longlong *)param_1[5];
    param_1[5] = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (param_1 + 6 != local_18) {
    param_1[6] = 0;
    plVar3 = (longlong *)param_1[7];
    param_1[7] = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x260))();
  }
  return;
}



// FUNCTION 142ce6280 FUN_142ce6280 body=223 status=ok
// SIG undefined FUN_142ce6280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce6280(longlong param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  FUN_1423346e0();
  *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0x80;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x334) = local_res8;
  *(undefined4 *)(param_1 + 0x338) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x33c) = local_res8;
  *(undefined4 *)(param_1 + 0x340) = local_resc;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined1 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x354) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x35c) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x360) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x368) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x36c) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x374) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x378) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x37c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x380) = 0xbf800000;
  return;
}



// FUNCTION 142ce6360 FUN_142ce6360 body=344 status=ok
// SIG undefined FUN_142ce6360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce6360(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 local_98 [4];
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60;
  undefined8 local_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  uVar4 = DAT_1468b5d98;
  uVar3 = _DAT_1468b5d90;
  plVar1 = *(longlong **)(param_1 + 0xfd8);
  if (plVar1 != (longlong *)0x0) {
    uVar6 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    local_44 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    if (param_2 == '\0') {
      cVar5 = (**(code **)(*plVar1 + 0x780))();
      lVar2 = *(longlong *)(param_1 + 0xfd8);
      if ((cVar5 == '\0') && ((lVar2 == 0 || (*(char *)(lVar2 + 0x128) != '\x01')))) {
        uVar6 = 9;
        FUN_142ccd260(lVar2 + 0xbe0);
      }
      else {
        uVar6 = 8;
        FUN_142ccd260(lVar2 + 0xbe0);
      }
    }
    else if (param_2 == '\x01') {
      cVar5 = (**(code **)(*plVar1 + 0x780))();
      if ((cVar5 == '\0') &&
         ((*(longlong *)(param_1 + 0xfd8) == 0 ||
          (*(char *)(*(longlong *)(param_1 + 0xfd8) + 0x128) != '\x01')))) {
        uVar6 = 0;
      }
      else {
        uVar6 = 8;
      }
    }
    local_94 = 0xffffffff;
    uStack_8c = 0xffffffff;
    local_7c = uStack_3c;
    local_84 = local_44;
    local_78 = CONCAT44(uStack_34,uStack_38);
    local_70 = uStack_30;
    local_6c = uVar3;
    local_64 = uVar4;
    local_60 = 0;
    local_98[0] = uVar6;
    FUN_142ccf650(*(longlong *)(param_1 + 0xfd8) + 0xbe0,param_2,local_98);
  }
  return;
}



// FUNCTION 142ce64c0 FUN_142ce64c0 body=202 status=ok
// SIG undefined FUN_142ce64c0(void)

void FUN_142ce64c0(longlong *param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x6c8))();
  iVar3 = iVar2;
  if ((param_3 != '\0') && (iVar3 = (**(code **)(*param_1 + 0x908))(param_1), iVar3 <= iVar2)) {
    iVar3 = iVar2;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      lVar4 = (**(code **)(*param_1 + 0x560))(param_1,iVar2);
      if (lVar4 != 0) {
        lVar5 = FUN_1429ba110();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (*(longlong **)(lVar4 + 0x20) == param_1)) {
          FUN_142588f70(lVar4,param_2);
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  return;
}



// FUNCTION 142ce6590 FUN_142ce6590 body=202 status=ok
// SIG undefined FUN_142ce6590(void)

void FUN_142ce6590(longlong *param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x6c8))();
  iVar3 = iVar2;
  if ((param_3 != '\0') && (iVar3 = (**(code **)(*param_1 + 0x908))(param_1), iVar3 <= iVar2)) {
    iVar3 = iVar2;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      lVar4 = (**(code **)(*param_1 + 0x560))(param_1,iVar2);
      if (lVar4 != 0) {
        lVar5 = FUN_1429ba110();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (*(longlong **)(lVar4 + 0x20) == param_1)) {
          FUN_142589050(lVar4,param_2);
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  return;
}



// FUNCTION 142ce6660 FUN_142ce6660 body=272 status=ok
// SIG undefined FUN_142ce6660(void)

void FUN_142ce6660(undefined8 param_1,undefined4 param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FWeakObjectPtr::operator=(&local_res8,param_6);
  local_48 = 0;
  local_38 = 0;
  puVar8 = (undefined8 *)FUN_140438ef0(0x58,local_68);
  if (puVar8 != (undefined8 *)0x0) {
    uVar1 = *param_4;
    uVar2 = *(undefined4 *)(param_4 + 1);
    *puVar8 = &PTR_FUN_14585da80;
    *(undefined8 *)((longlong)puVar8 + 0x14) = uVar1;
    *(undefined4 *)(puVar8 + 2) = param_2;
    puVar8[1] = param_1;
    uVar3 = *(undefined4 *)(param_5 + 1);
    puVar8[4] = *param_5;
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    *(undefined4 *)(puVar8 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0x2c) = local_res8;
    *(undefined4 *)(puVar8 + 6) = local_resc;
    puVar8[7] = param_7;
    *(undefined1 *)(puVar8 + 8) = param_8;
    *(undefined1 *)((longlong)puVar8 + 0x41) = param_9;
    *(undefined1 *)((longlong)puVar8 + 0x42) = param_10;
    *(undefined4 *)(puVar8 + 9) = uVar4;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar5;
    *(undefined4 *)(puVar8 + 10) = uVar6;
    *(undefined4 *)((longlong)puVar8 + 0x54) = uVar7;
  }
  local_78[0] = &LAB_142ce3ab0;
  FUN_142339040(param_1,local_78);
  return;
}



// FUNCTION 142ce6770 FUN_142ce6770 body=257 status=ok
// SIG undefined FUN_142ce6770(void)

void FUN_142ce6770(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FWeakObjectPtr::operator=(&local_res8,param_5);
  local_48 = 0;
  local_38 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x48,local_68);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = *(undefined4 *)(param_3 + 1);
    *puVar4 = &PTR_FUN_14504b6b0;
    uVar3 = *(undefined4 *)(param_4 + 1);
    *(undefined8 *)((longlong)puVar4 + 0x14) = uVar1;
    puVar4[4] = *param_4;
    *(undefined4 *)(puVar4 + 5) = uVar3;
    *(undefined4 *)(puVar4 + 2) = param_2;
    puVar4[1] = param_1;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar2;
    *(undefined4 *)((longlong)puVar4 + 0x2c) = local_res8;
    *(undefined4 *)(puVar4 + 6) = local_resc;
    puVar4[7] = param_6;
    *(undefined1 *)(puVar4 + 8) = param_7;
    *(undefined1 *)((longlong)puVar4 + 0x41) = param_8;
    *(undefined1 *)((longlong)puVar4 + 0x42) = param_9;
  }
  local_78[0] = &LAB_142ce3af0;
  FUN_142339040(param_1,local_78);
  return;
}



// FUNCTION 142ce6880 FUN_142ce6880 body=467 status=ok
// SIG undefined FUN_142ce6880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142ce6880(longlong *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_88 [4];
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar3 = (**(code **)(*param_1 + 0x5c0))();
  if ((char)uVar3 == '\0') {
LAB_142ce6a48:
    return uVar3 & 0xffffffffffffff00;
  }
  uVar3 = FUN_14233f840(param_1);
  if ((*(byte *)(uVar3 + 0xa0) & 1) == 0) goto LAB_142ce6a48;
  if ((((char)param_1[0x49] == '\x06') && (*(char *)((longlong)param_1 + 0x249) == '\0')) &&
     (param_1[0x2f] != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x268) = uVar1;
  local_84 = _DAT_1468b5d90;
  local_78 = _DAT_1468b5d90;
  local_6c = _DAT_1468b5d90;
  local_88[0] = 0;
  local_7c = DAT_1468b5d98;
  local_70 = DAT_1468b5d98;
  local_64 = DAT_1468b5d98;
  FUN_142cbf360(param_1 + 0x2ee,local_88);
  bVar2 = FUN_1423355a0(param_1);
  if ((char)param_1[0x268] == '\0') {
    if ((((char)param_1[0x49] != '\x06') || (*(char *)((longlong)param_1 + 0x249) != '\0')) ||
       (param_1[0x2f] == 0)) goto LAB_142ce6a13;
    local_28 = 0;
    local_18 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_58[0] = &LAB_142ce3a60;
  }
  else {
    if ((((char)param_1[0x49] == '\x06') && (*(char *)((longlong)param_1 + 0x249) == '\0')) &&
       (param_1[0x2f] != 0)) goto LAB_142ce6a13;
    local_28 = 0;
    local_18 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_58[0] = &LAB_142ce3a30;
  }
  uVar5 = FUN_14247f500();
  FUN_14247d5a0(uVar5,param_1,local_58);
LAB_142ce6a13:
  FUN_142cd9700(param_1 + 0x2ee,local_88);
  *(undefined1 *)((longlong)param_1 + 0x1944) = 0;
  return (ulonglong)bVar2;
}



// FUNCTION 142ce6a60 FUN_142ce6a60 body=218 status=ok
// SIG undefined FUN_142ce6a60(void)

void FUN_142ce6a60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  byte bVar2;
  
  FUN_142335b90(param_1,param_2,param_3,param_4,param_5);
  bVar2 = *(byte *)(param_2 + 0x330);
  lVar1 = *(longlong *)(param_3 + 0x900);
  if ((((bVar2 & 0x20) != 0) && (*(char *)(lVar1 + 0x10b8) != '\0')) &&
     (0.0 <= *(float *)(param_2 + 0x380))) {
    *(float *)(lVar1 + 0x10bc) = *(float *)(param_2 + 0x380);
    bVar2 = *(byte *)(param_2 + 0x330);
  }
  if ((((bVar2 & 1) != 0) && (*(longlong *)(lVar1 + 0x1778) != 0)) &&
     (((*(byte *)(lVar1 + 0x18cc) & 2) == 0 &&
      ((*(longlong *)(lVar1 + 0x178) != 0 && (0.0 <= *(float *)(param_2 + 0x378))))))) {
    *(float *)(lVar1 + 0x17c0) = *(float *)(param_2 + 0x378);
    bVar2 = *(byte *)(param_2 + 0x330);
  }
  if ((((bVar2 & 8) != 0) && ((*(byte *)(lVar1 + 0x1968) & 1) != 0)) &&
     (0.0 <= *(float *)(param_2 + 0x37c))) {
    *(float *)(lVar1 + 0x1988) = *(float *)(param_2 + 0x37c);
  }
  return;
}



// FUNCTION 142ce6b40 FUN_142ce6b40 body=102 status=ok
// SIG undefined FUN_142ce6b40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142ce6b40(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_2c [36];
  
  uVar3 = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  if (*(longlong *)(param_1 + 0xfd8) != 0) {
    puVar2 = (undefined8 *)
             FUN_142cc2d20(*(longlong *)(param_1 + 0xfd8) + 0xbe0,local_2c,param_3,param_1);
    uVar3 = *puVar2;
    uVar1 = *(undefined4 *)(puVar2 + 1);
  }
  *param_2 = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 142ce6bb0 FUN_142ce6bb0 body=103 status=ok
// SIG undefined FUN_142ce6bb0(void)

undefined8 * FUN_142ce6bb0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_2c [36];
  
  uVar3 = DAT_1468b5da0;
  uVar1 = DAT_1468b5da8;
  if (*(longlong *)(param_1 + 0xfd8) != 0) {
    lVar2 = FUN_142cc2d20(*(longlong *)(param_1 + 0xfd8) + 0xbe0,local_2c,param_3,param_1);
    uVar3 = *(undefined8 *)(lVar2 + 0xc);
    uVar1 = *(undefined4 *)(lVar2 + 0x14);
  }
  *param_2 = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 142ce6c20 FUN_142ce6c20 body=587 status=ok
// SIG undefined FUN_142ce6c20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142ce6c20(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  undefined8 uVar2;
  float *pfVar3;
  longlong *plVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_68;
  float fStack_64;
  undefined8 local_58;
  float local_50;
  
  local_50 = DAT_1468b5d98;
  local_58 = _DAT_1468b5d90;
  fVar1 = *(float *)(param_1 + 0x354);
  fVar7 = *(float *)(param_1 + 0x350);
  fVar8 = *(float *)(param_1 + 0x358);
  *param_2 = _DAT_1468b5d90;
  *(float *)(param_2 + 1) = local_50;
  fVar9 = SQRT(fVar7 * fVar7 + fVar1 * fVar1 + fVar8 * fVar8);
  if (fVar9 <= 1e-08) {
  }
  else {
    fVar6 = 1.0 / fVar9;
    local_50 = fVar8 * fVar6;
    local_58 = CONCAT44(fVar1 * fVar6,fVar7 * fVar6);
  }
  fVar1 = local_50;
  uVar2 = local_58;
  plVar5 = (longlong *)0x0;
  plVar4 = plVar5;
  if (*(longlong *)(param_1 + 0x1358) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x1360);
  }
  pfVar3 = (float *)(**(code **)(*plVar4 + 0x10))(local_58,&local_58);
  fStack_64 = (float)((ulonglong)uVar2 >> 0x20);
  local_68 = (float)uVar2;
  fVar8 = fStack_64 * pfVar3[1] + local_68 * *pfVar3 + fVar1 * pfVar3[2];
  fVar7 = ABS(fVar8);
  if (fVar7 <= 0.707107) {
    plVar4 = plVar5;
    if (*(longlong *)(param_1 + 0x1358) != 0) {
      plVar4 = *(longlong **)(param_1 + 0x1360);
    }
    pfVar3 = (float *)(**(code **)(*plVar4 + 0x18))(fVar7,&local_58);
    if (0.0 < fStack_64 * pfVar3[1] + local_68 * *pfVar3 + fVar1 * pfVar3[2]) {
      if (*(longlong *)(param_1 + 0x1358) != 0) {
        plVar5 = *(longlong **)(param_1 + 0x1360);
      }
      pfVar3 = (float *)(**(code **)(*plVar5 + 0x10))(plVar5,&local_58);
      fVar9 = -fVar9;
    }
    else {
      if (*(longlong *)(param_1 + 0x1358) != 0) {
        plVar5 = *(longlong **)(param_1 + 0x1360);
      }
      pfVar3 = (float *)(**(code **)(*plVar5 + 0x10))(plVar5,&local_58);
    }
  }
  else {
    if (fVar8 <= 0.0) {
      fVar9 = -fVar9;
    }
    if (*(longlong *)(param_1 + 0x1358) != 0) {
      plVar5 = *(longlong **)(param_1 + 0x1360);
    }
    pfVar3 = (float *)(**(code **)(*plVar5 + 0x10))(plVar5,&local_58);
  }
  fVar1 = pfVar3[2];
  *param_2 = CONCAT44(fVar9 * pfVar3[1],fVar9 * *pfVar3);
  *(float *)(param_2 + 1) = fVar9 * fVar1;
  return param_2;
}



// FUNCTION 142ce6e70 FUN_142ce6e70 body=955 status=ok
// SIG undefined FUN_142ce6e70(void)

void FUN_142ce6e70(longlong param_1,undefined1 *param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  bool bVar17;
  longlong local_res10;
  
  puVar5 = (undefined1 *)0x0;
  if (param_2 != (undefined1 *)0x0) {
    lVar2 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) {
      local_res10 = *(longlong *)(param_2 + 0x4c0);
      goto LAB_142ce6ede;
    }
  }
  local_res10 = 0;
  param_2 = puVar5;
LAB_142ce6ede:
  puVar16 = puVar5;
  if (param_2 != (undefined1 *)0x0) {
    puVar16 = *(undefined1 **)(param_2 + 0x4d0);
  }
  if (param_3 == '\0') {
    if (((*(uint *)(param_1 + 0x544) & 0x4000) != 0) && (local_res10 != 0)) {
      puVar3 = (undefined1 *)(local_res10 + 0x9a0);
      lVar2 = *(longlong *)(param_1 + 0x18);
      if (0 < *(int *)(local_res10 + 0x9f8)) {
        uVar1 = local_res10 + 0x9b0;
        lVar7 = (longlong)*(int *)(local_res10 + 0x9f8);
        iVar9 = 0;
        if (*(int *)(local_res10 + 0x9f8) != 0) {
          uVar13 = *(ulonglong *)(local_res10 + 0x9f0);
          if (*(ulonglong *)(local_res10 + 0x9f0) == 0) {
            uVar13 = uVar1;
          }
          bVar17 = *(longlong *)(uVar13 + 8) != lVar2;
          puVar10 = puVar5;
          puVar11 = puVar5;
          do {
            iVar9 = (int)puVar5;
            puVar10 = puVar10 + 1;
            puVar5 = (undefined1 *)(ulonglong)(iVar9 + 1);
            if ((longlong)puVar10 < lVar7) {
              uVar13 = *(ulonglong *)(local_res10 + 0x9f0);
              if (*(ulonglong *)(local_res10 + 0x9f0) == 0) {
                uVar13 = uVar1;
              }
              plVar8 = (longlong *)((longlong)puVar10 * 0x10 + 8 + uVar13);
              do {
                if (bVar17 != (*plVar8 != lVar2)) break;
                puVar5 = (undefined1 *)(ulonglong)((int)puVar5 + 1);
                puVar10 = puVar10 + 1;
                plVar8 = plVar8 + 2;
              } while ((longlong)puVar10 < lVar7);
            }
            iVar15 = (int)puVar5 - iVar9;
            if (bVar17 != false) {
              iVar14 = (int)puVar11;
              if (iVar14 != iVar9) {
                uVar13 = (ulonglong)(*(longlong *)(local_res10 + 0x9f0) != 0) - 1 & uVar1 |
                         *(ulonglong *)(local_res10 + 0x9f0);
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar14 * 0x10 + uVar13),
                           (void *)((longlong)iVar9 * 0x10 + uVar13),(longlong)iVar15 << 4);
              }
              puVar11 = (undefined1 *)(ulonglong)(uint)(iVar14 + iVar15);
            }
            bVar17 = (bool)(bVar17 ^ 1);
            iVar9 = (int)puVar11;
          } while ((longlong)puVar10 < lVar7);
          *(int *)(local_res10 + 0x9f8) = iVar9;
        }
        if (*(undefined1 **)(local_res10 + 0x9a8) != (undefined1 *)0x0) {
          if (*(int *)(local_res10 + 0x9f8) != 0) {
            uVar13 = *(ulonglong *)(local_res10 + 0x9f0);
            if (*(ulonglong *)(local_res10 + 0x9f0) == 0) {
              uVar13 = uVar1;
            }
            puVar3 = (undefined1 *)((longlong)iVar9 * 0x10 + -0x10 + uVar13);
          }
          **(undefined1 **)(local_res10 + 0x9a8) = *puVar3;
        }
      }
    }
    if ((*(uint *)(param_1 + 0x544) & 0x10000) == 0) {
      return;
    }
    if (puVar16 == (undefined1 *)0x0) {
      return;
    }
    uVar6 = *(undefined1 *)(param_1 + 0x548);
  }
  else {
    if (param_3 != '\x02') {
      return;
    }
    if (((*(uint *)(param_1 + 0x544) & 0x4000) != 0) && (local_res10 != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x18);
      puVar3 = (undefined1 *)(local_res10 + 0x9b0);
      puVar10 = (undefined1 *)(local_res10 + 0x9a0);
      puVar11 = *(undefined1 **)(local_res10 + 0x9f0);
      if (*(undefined1 **)(local_res10 + 0x9f0) == (undefined1 *)0x0) {
        puVar11 = puVar3;
      }
      puVar4 = puVar11 + (longlong)*(int *)(local_res10 + 0x9f8) * 0x10;
      for (; (puVar12 = puVar5, puVar11 != puVar4 &&
             (puVar12 = puVar11, *(longlong *)(puVar11 + 8) != lVar2)); puVar11 = puVar11 + 0x10) {
      }
      if ((*(int *)(local_res10 + 0x9f8) == 0) &&
         (*(undefined1 **)(local_res10 + 0x9a8) != (undefined1 *)0x0)) {
        *puVar10 = **(undefined1 **)(local_res10 + 0x9a8);
      }
      if (puVar12 == (undefined1 *)0x0) {
        iVar9 = *(int *)(local_res10 + 0x9f8);
        *(int *)(local_res10 + 0x9f8) = iVar9 + 1;
        if (*(int *)(local_res10 + 0x9fc) < iVar9 + 1) {
          TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(puVar3,iVar9);
        }
        lVar7 = (longlong)iVar9 * 0x10;
        puVar5 = *(undefined1 **)(local_res10 + 0x9f0);
        if (*(undefined1 **)(local_res10 + 0x9f0) == (undefined1 *)0x0) {
          puVar5 = puVar3;
        }
        *(undefined8 *)(puVar5 + lVar7) = 0;
        *(undefined8 *)(puVar5 + lVar7 + 8) = 0;
        puVar12 = *(undefined1 **)(local_res10 + 0x9f0);
        if (*(undefined1 **)(local_res10 + 0x9f0) == (undefined1 *)0x0) {
          puVar12 = puVar3;
        }
        puVar12 = puVar12 + lVar7;
        *(longlong *)(puVar12 + 8) = lVar2;
      }
      *puVar12 = 4;
      if (*(undefined1 **)(local_res10 + 0x9a8) != (undefined1 *)0x0) {
        if (*(int *)(local_res10 + 0x9f8) != 0) {
          puVar10 = *(undefined1 **)(local_res10 + 0x9f0);
          if (*(undefined1 **)(local_res10 + 0x9f0) == (undefined1 *)0x0) {
            puVar10 = puVar3;
          }
          puVar10 = puVar10 + (longlong)*(int *)(local_res10 + 0x9f8) * 0x10 + -0x10;
        }
        **(undefined1 **)(local_res10 + 0x9a8) = *puVar10;
      }
    }
    if ((*(uint *)(param_1 + 0x544) & 0x10000) == 0) {
      return;
    }
    if (puVar16 == (undefined1 *)0x0) {
      return;
    }
    *(byte *)(param_1 + 0x548) = puVar16[0x2ef] & 1;
    uVar6 = 0;
  }
  FUN_1423974f0(puVar16,uVar6);
  return;
}



// FUNCTION 142ce7230 FUN_142ce7230 body=113 status=ok
// SIG undefined FUN_142ce7230(void)

void FUN_142ce7230(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (((*(uint *)(param_1 + 0x544) & 0x800) != 0) && (param_2 != (longlong *)0x0)) {
    lVar2 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && ((*(byte *)((longlong)param_2 + 0x56c) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000142ce7294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x998))(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 142ce72b0 FUN_142ce72b0 body=370 status=ok
// SIG undefined FUN_142ce72b0(void)

void FUN_142ce72b0(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x544);
  if ((-1 < (char)uVar1) || (param_2 == 0)) goto LAB_142ce7304;
  if (param_3 == '\0') {
LAB_142ce72fa:
    uVar4 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  else {
    if (param_3 == '\x01') {
LAB_142ce72f0:
      if ((uVar1 >> 9 & 1) != 0) goto LAB_142ce72fa;
    }
    else if (param_3 != '\x02') {
      if (param_3 != '\x03') goto LAB_142ce7304;
      goto LAB_142ce72f0;
    }
    uVar4 = 0;
  }
  FUN_14223c460(param_2,uVar4);
LAB_142ce7304:
  if (((*(uint *)(param_1 + 0x544) & 0x1000) != 0) && (param_2 != 0)) {
    if (param_3 == '\0') {
      if (((*(char *)(param_1 + 0x440) == '\0') || (*(longlong *)(param_1 + 0x118) == 0)) ||
         (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x118), lVar5 == 0)) {
        lVar5 = *(longlong *)(param_1 + 0x118);
      }
      FUN_14269db40(param_2,lVar5);
    }
    else {
      if (((*(char *)(param_1 + 0x440) == '\0') || (*(longlong *)(param_1 + 0x118) == 0)) ||
         (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x118), lVar5 == 0)) {
        lVar5 = *(longlong *)(param_1 + 0x118);
      }
      FUN_14269dad0(param_2,lVar5);
    }
  }
  if (((*(uint *)(param_1 + 0x544) & 0x2000) != 0) &&
     ((((*(char *)(param_1 + 0x440) != '\0' && (*(longlong *)(param_1 + 0x118) != 0)) &&
       (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x118), lVar5 != 0)) ||
      (lVar5 = *(longlong *)(param_1 + 0x118), lVar5 != 0)))) {
    lVar3 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (param_2 != 0)) {
      if (param_3 == '\0') {
        FUN_14269db40();
      }
      else {
        FUN_14269dad0(lVar5,param_2);
      }
    }
  }
  return;
}



// FUNCTION 142ce7430 FUN_142ce7430 body=220 status=ok
// SIG undefined FUN_142ce7430(void)

void FUN_142ce7430(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  if (((*(uint *)(param_1 + 0x544) & 0x8000) != 0) && (param_2 != 0)) {
    lVar3 = AHeoCon::GetPrivateStaticClass();
    plVar1 = *(longlong **)(param_2 + 0x10);
    if (((int)plVar1[0x12] < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(plVar1[0x11] + (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(param_2 + 0x900) != 0)) {
      if (param_3 != '\0') {
        *(undefined1 *)(*(longlong *)(param_2 + 0x900) + 0x838) = 0;
        return;
      }
      lVar3 = plVar1[0x1f];
      if (lVar3 == 0) {
        (**(code **)(*plVar1 + 0x368))(plVar1);
        lVar3 = plVar1[0x1f];
      }
      if (*(longlong *)(lVar3 + 0x900) != 0) {
        *(undefined1 *)(*(longlong *)(param_2 + 0x900) + 0x838) =
             *(undefined1 *)(*(longlong *)(lVar3 + 0x900) + 0x838);
      }
    }
  }
  return;
}



// FUNCTION 142ce7510 FUN_142ce7510 body=178 status=ok
// SIG undefined FUN_142ce7510(void)

undefined8 *
FUN_142ce7510(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_18 [16];
  
  uVar1 = *(undefined4 *)(param_4 + 1);
  *param_2 = *param_4;
  *(undefined4 *)(param_2 + 1) = uVar1;
  cVar2 = FUN_1407c3030(param_1 + 0x8b0);
  if (((cVar2 == '\0') &&
      (((*(longlong *)(param_1 + 0xfd8) == 0 || (*(longlong *)(param_1 + 0xfe8) == 0)) ||
       ((lVar3 = FUN_142274500(), lVar3 == 0 &&
        (cVar2 = FUN_142285b90(*(undefined8 *)(param_1 + 0xfe8)), cVar2 == '\0')))))) &&
     (*(char *)(param_1 + 0x2580) == '\0')) {
    return param_2;
  }
  puVar4 = (undefined8 *)
           UCharacterMovementComponent::ConstrainAnimRootMotionVelocity
                     (param_1,local_18,param_3,param_4);
  uVar1 = *(undefined4 *)(puVar4 + 1);
  *param_2 = *puVar4;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 142ce75d0 FUN_142ce75d0 body=363 status=ok
// SIG undefined FUN_142ce75d0(void)

void FUN_142ce75d0(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined1 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
                  undefined2 param_17)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FWeakObjectPtr::operator=(&local_res8,param_13);
  local_48 = 0;
  local_38 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x70,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    *puVar3 = &PTR_FUN_14585daf8;
    uVar2 = *(undefined4 *)(param_3 + 1);
    puVar3[3] = uVar1;
    *(undefined4 *)(puVar3 + 4) = uVar2;
    *(undefined1 *)((longlong)puVar3 + 0x25) = param_11;
    *(undefined4 *)(puVar3 + 5) = param_5;
    *(undefined4 *)(puVar3 + 2) = param_2;
    puVar3[1] = param_1;
    *(undefined4 *)((longlong)puVar3 + 0x14) = param_6;
    *(undefined1 *)((longlong)puVar3 + 0x24) = param_4;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = local_res8;
    *(undefined4 *)(puVar3 + 6) = local_resc;
    puVar3[7] = param_14;
    *(undefined1 *)(puVar3 + 8) = param_15;
    *(undefined2 *)((longlong)puVar3 + 0x42) = param_17;
    *(undefined4 *)(puVar3 + 9) = param_16;
    *(undefined4 *)((longlong)puVar3 + 0x44) = param_7;
    uVar2 = *(undefined4 *)(param_8 + 1);
    *(undefined8 *)((longlong)puVar3 + 0x4c) = *param_8;
    *(undefined4 *)((longlong)puVar3 + 0x54) = uVar2;
    uVar2 = *(undefined4 *)(param_9 + 1);
    puVar3[0xb] = *param_9;
    *(undefined4 *)(puVar3 + 0xc) = uVar2;
    *(undefined1 *)((longlong)puVar3 + 100) = param_10;
    *(undefined4 *)(puVar3 + 0xd) = param_12;
  }
  local_78[0] = &LAB_142ce39e0;
  FUN_142339040(param_1,local_78);
  return;
}



// FUNCTION 142ce7740 FUN_142ce7740 body=147 status=ok
// SIG undefined FUN_142ce7740(void)

void FUN_142ce7740(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar1 = *param_3;
  uVar2 = *(undefined4 *)(param_3 + 1);
  uStack_5c = CONCAT31(uStack_5c._1_3_,param_4);
  local_28 = 0;
  local_18 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x28,local_48);
  if (puVar3 != (undefined8 *)0x0) {
    local_78 = (undefined4)param_1;
    uStack_74 = (undefined4)((ulonglong)param_1 >> 0x20);
    *puVar3 = &PTR_FUN_143ff7760;
    *(undefined4 *)(puVar3 + 1) = local_78;
    *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_74;
    *(undefined4 *)(puVar3 + 2) = param_2;
    *(undefined4 *)((longlong)puVar3 + 0x14) = param_5;
    puVar3[3] = uVar1;
    puVar3[4] = CONCAT44(uStack_5c,uVar2);
  }
  local_58[0] = &LAB_142ce3920;
  FUN_142339040(param_1,local_58);
  return;
}



// FUNCTION 142ce77e0 FUN_142ce77e0 body=293 status=ok
// SIG undefined FUN_142ce77e0(void)

void FUN_142ce77e0(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined2 param_12)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FWeakObjectPtr::operator=(&local_res8,param_8);
  local_48 = 0;
  local_38 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x50,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    *puVar3 = &PTR_FUN_14585dae0;
    uVar2 = *(undefined4 *)(param_3 + 1);
    puVar3[3] = uVar1;
    uVar1 = *param_4;
    *(undefined4 *)(puVar3 + 4) = uVar2;
    uVar2 = *(undefined4 *)(param_4 + 1);
    *(undefined8 *)((longlong)puVar3 + 0x24) = uVar1;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = uVar2;
    *(undefined1 *)(puVar3 + 6) = param_5;
    *(undefined1 *)((longlong)puVar3 + 0x31) = param_6;
    *(undefined4 *)((longlong)puVar3 + 0x34) = param_7;
    *(undefined4 *)(puVar3 + 2) = param_2;
    puVar3[1] = param_1;
    *(undefined4 *)((longlong)puVar3 + 0x14) = param_11;
    *(undefined4 *)(puVar3 + 7) = local_res8;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = local_resc;
    puVar3[8] = param_9;
    *(undefined1 *)(puVar3 + 9) = param_10;
    *(undefined2 *)((longlong)puVar3 + 0x4a) = param_12;
  }
  local_78[0] = &LAB_142ce3a90;
  FUN_142339040(param_1,local_78);
  return;
}



// FUNCTION 142ce7910 FUN_142ce7910 body=292 status=ok
// SIG undefined FUN_142ce7910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142ce7910(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  longlong lVar10;
  float *pfVar11;
  undefined8 local_48;
  undefined4 local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [32];
  
  if (*(longlong *)(param_1 + 0xfd8) != 0) {
    lVar10 = FUN_14222e2a0();
    if (lVar10 != 0) {
      cVar9 = FUN_142cf3330(param_1);
      if (cVar9 != '\0') {
        if (*(longlong *)(lVar10 + 0x168) == 0) {
          pfVar11 = (float *)&DAT_1468b5b70;
        }
        else {
          pfVar11 = (float *)(*(longlong *)(lVar10 + 0x168) + 0x210);
        }
        fVar1 = *pfVar11;
        fVar2 = pfVar11[1];
        fVar3 = pfVar11[2];
        fVar4 = pfVar11[3];
        pfVar11 = (float *)FRotator::Quaternion(param_3,local_28);
        fVar5 = *pfVar11;
        fVar6 = pfVar11[1];
        fVar7 = pfVar11[2];
        fVar8 = pfVar11[3];
        local_38 = fVar8 * fVar1 * _DAT_146b31660 + fVar4 * fVar5 + fVar7 * fVar2 * _DAT_146b31650 +
                   fVar6 * fVar3 * _DAT_146b31640;
        fStack_34 = fVar7 * fVar1 * fRam0000000146b31664 + fVar4 * fVar6 +
                    fVar8 * fVar2 * fRam0000000146b31654 + fVar5 * fVar3 * fRam0000000146b31644;
        fStack_30 = fVar6 * fVar1 * fRam0000000146b31668 + fVar4 * fVar7 +
                    fVar5 * fVar2 * fRam0000000146b31658 + fVar8 * fVar3 * fRam0000000146b31648;
        fStack_2c = fVar5 * fVar1 * fRam0000000146b3166c + fVar4 * fVar8 +
                    fVar6 * fVar2 * fRam0000000146b3165c + fVar7 * fVar3 * fRam0000000146b3164c;
        FQuat::Rotator(&local_38,&local_48);
        goto LAB_142ce7a12;
      }
    }
  }
  local_48 = *param_3;
  local_40 = *(undefined4 *)(param_3 + 1);
LAB_142ce7a12:
  *param_2 = local_48;
  *(undefined4 *)(param_2 + 1) = local_40;
  return param_2;
}



// FUNCTION 142ce7a40 FUN_142ce7a40 body=431 status=ok
// SIG undefined FUN_142ce7a40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142ce7a40(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  longlong lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_78;
  undefined4 local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [80];
  
  if (*(longlong *)(param_1 + 0xfd8) != 0) {
    lVar7 = FUN_14222e2a0();
    if (lVar7 != 0) {
      cVar6 = FUN_142cf3330(param_1);
      if (cVar6 != '\0') {
        if (*(longlong *)(lVar7 + 0x168) == 0) {
          pfVar8 = (float *)&DAT_1468b5b70;
        }
        else {
          pfVar8 = (float *)(*(longlong *)(lVar7 + 0x168) + 0x210);
        }
        fVar1 = pfVar8[3];
        fVar9 = -pfVar8[1];
        fVar10 = -pfVar8[2];
        fVar11 = -*pfVar8;
        pfVar8 = (float *)FRotator::Quaternion(param_3,local_58);
        fVar2 = *pfVar8;
        fVar3 = pfVar8[1];
        fVar4 = pfVar8[2];
        fVar5 = pfVar8[3];
        local_68 = fVar5 * fVar11 * _DAT_146b31660 + fVar1 * fVar2 + fVar4 * fVar9 * _DAT_146b31650
                   + fVar3 * fVar10 * _DAT_146b31640;
        fStack_64 = fVar4 * fVar11 * fRam0000000146b31664 + fVar1 * fVar3 +
                    fVar5 * fVar9 * fRam0000000146b31654 + fVar2 * fVar10 * fRam0000000146b31644;
        fStack_60 = fVar3 * fVar11 * fRam0000000146b31668 + fVar1 * fVar4 +
                    fVar2 * fVar9 * fRam0000000146b31658 + fVar5 * fVar10 * fRam0000000146b31648;
        fStack_5c = fVar2 * fVar11 * fRam0000000146b3166c + fVar1 * fVar5 +
                    fVar3 * fVar9 * fRam0000000146b3165c + fVar4 * fVar10 * fRam0000000146b3164c;
        FQuat::Rotator(&local_68,&local_78);
        goto LAB_142ce7bcc;
      }
    }
  }
  local_78 = *param_3;
  local_70 = *(undefined4 *)(param_3 + 1);
LAB_142ce7bcc:
  *param_2 = local_78;
  *(undefined4 *)(param_2 + 1) = local_70;
  return param_2;
}



// FUNCTION 142ce7bf0 FUN_142ce7bf0 body=639 status=ok
// SIG undefined FUN_142ce7bf0(void)

undefined8 * FUN_142ce7bf0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_a8;
  undefined1 local_98 [144];
  
  if (*(longlong *)(param_1 + 0xfd8) != 0) {
    lVar4 = FUN_14222e2a0();
    if (lVar4 != 0) {
      cVar3 = FUN_142cf3330(param_1);
      if (cVar3 != '\0') {
        if (*(longlong *)(lVar4 + 0x168) == 0) {
          pfVar5 = (float *)&DAT_1468b5b70;
        }
        else {
          pfVar5 = (float *)(*(longlong *)(lVar4 + 0x168) + 0x210);
        }
        fVar1 = pfVar5[1];
        fVar2 = pfVar5[2];
        fVar16 = pfVar5[3];
        fVar17 = -fVar1;
        fVar12 = -fVar2;
        fVar18 = -*pfVar5;
        puVar6 = (undefined8 *)FUN_142d08040(param_3,local_98);
        fVar13 = *(float *)(puVar6 + 1);
        fVar7 = (float)((ulonglong)*puVar6 >> 0x20);
        local_a8 = (float)*puVar6;
        fVar14 = fVar17 * fVar13 - fVar12 * fVar7;
        fVar14 = fVar14 + fVar14;
        fVar15 = fVar12 * local_a8 - fVar18 * fVar13;
        fVar10 = fVar18 * fVar7 - fVar17 * local_a8;
        fVar15 = fVar15 + fVar15;
        fVar10 = fVar10 + fVar10;
        fVar11 = (fVar10 * fVar17 - fVar15 * fVar12) + local_a8 + fVar14 * fVar16;
        fVar7 = (fVar14 * fVar12 - fVar10 * fVar18) + fVar7 + fVar15 * fVar16;
        fVar16 = (fVar15 * fVar18 - fVar14 * fVar17) + fVar13 + fVar10 * fVar16;
        fVar13 = fVar7 * fVar7 + fVar11 * fVar11;
        uVar8 = FGenericPlatformMath::Atan2(CONCAT44(fVar1,fVar7),CONCAT44(fVar1,fVar11));
        uVar9 = FGenericPlatformMath::Atan2(CONCAT44(fVar2,fVar16),SQRT(fVar13));
        *param_2 = CONCAT44(uVar8,SQRT(fVar16 * fVar16 + fVar13));
        goto LAB_142ce7e50;
      }
    }
  }
  uVar9 = *(undefined4 *)(param_3 + 1);
  *param_2 = *param_3;
LAB_142ce7e50:
  *(undefined4 *)(param_2 + 1) = uVar9;
  return param_2;
}



// FUNCTION 142ce7e70 FUN_142ce7e70 body=159 status=ok
// SIG undefined FUN_142ce7e70(void)

undefined8 * FUN_142ce7e70(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14585db10;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(uint *)(puVar1 + 5) =
         *(uint *)(puVar1 + 5) ^ (*(uint *)(puVar1 + 5) ^ *(uint *)(param_1 + 0x28)) & 1;
    uVar2 = (*(uint *)(param_1 + 0x28) ^ *(uint *)(puVar1 + 5)) & 2 ^ *(uint *)(puVar1 + 5);
    *(uint *)(puVar1 + 5) = uVar2;
    uVar2 = (*(uint *)(param_1 + 0x28) ^ uVar2) & 4 ^ uVar2;
    *(uint *)(puVar1 + 5) = uVar2;
    *(uint *)(puVar1 + 5) = (*(uint *)(param_1 + 0x28) ^ uVar2) & 8 ^ uVar2;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142ce7f10 FUN_142ce7f10 body=169 status=ok
// SIG undefined FUN_142ce7f10(void)

undefined8 * FUN_142ce7f10(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14585dac8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined2 *)((longlong)puVar1 + 0x14) = *(undefined2 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined8 *)((longlong)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
    *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_1 + 0x30);
    *(undefined1 *)((longlong)puVar1 + 0x31) = *(undefined1 *)(param_1 + 0x31);
    *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)((longlong)puVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    puVar1[8] = *(undefined8 *)(param_1 + 0x40);
    *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(param_1 + 0x48);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142ce7fc0 FUN_142ce7fc0 body=176 status=ok
// SIG undefined FUN_142ce7fc0(void)

undefined8 * FUN_142ce7fc0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14585dab0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined8 *)((longlong)puVar1 + 0x14) = *(undefined8 *)(param_1 + 0x14);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined1 *)((longlong)puVar1 + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
    *(undefined1 *)((longlong)puVar1 + 0x2d) = *(undefined1 *)(param_1 + 0x2d);
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
    puVar1[8] = *(undefined8 *)(param_1 + 0x40);
    *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(param_1 + 0x48);
    *(undefined4 *)((longlong)puVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined2 *)(puVar1 + 10) = *(undefined2 *)(param_1 + 0x50);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142ce8070 FUN_142ce8070 body=223 status=ok
// SIG undefined FUN_142ce8070(void)

undefined8 * FUN_142ce8070(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14585daf8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined1 *)((longlong)puVar1 + 0x24) = *(undefined1 *)(param_1 + 0x24);
    *(undefined1 *)((longlong)puVar1 + 0x25) = *(undefined1 *)(param_1 + 0x25);
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
    puVar1[7] = *(undefined8 *)(param_1 + 0x38);
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(param_1 + 0x40);
    *(undefined2 *)((longlong)puVar1 + 0x42) = *(undefined2 *)(param_1 + 0x42);
    *(undefined4 *)((longlong)puVar1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(puVar1 + 9) = *(undefined4 *)(param_1 + 0x48);
    *(undefined8 *)((longlong)puVar1 + 0x4c) = *(undefined8 *)(param_1 + 0x4c);
    *(undefined4 *)((longlong)puVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    puVar1[0xb] = *(undefined8 *)(param_1 + 0x58);
    *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(param_1 + 0x60);
    *(undefined1 *)((longlong)puVar1 + 100) = *(undefined1 *)(param_1 + 100);
    *(undefined4 *)(puVar1 + 0xd) = *(undefined4 *)(param_1 + 0x68);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142ce8150 FUN_142ce8150 body=223 status=ok
// SIG undefined FUN_142ce8150(void)

undefined8 * FUN_142ce8150(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14585da98;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined8 *)((longlong)puVar1 + 0x14) = *(undefined8 *)(param_1 + 0x14);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
    *(undefined8 *)((longlong)puVar1 + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined4 *)((longlong)puVar1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(param_1 + 0x48);
    *(undefined1 *)((longlong)puVar1 + 0x49) = *(undefined1 *)(param_1 + 0x49);
    *(undefined4 *)((longlong)puVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)((longlong)puVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    puVar1[0xb] = *(undefined8 *)(param_1 + 0x58);
    *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(param_1 + 0x60);
    *(undefined4 *)((longlong)puVar1 + 100) = *(undefined4 *)(param_1 + 100);
    *(undefined2 *)(puVar1 + 0xd) = *(undefined2 *)(param_1 + 0x68);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142ce8230 FUN_142ce8230 body=176 status=ok
// SIG undefined FUN_142ce8230(void)

undefined8 * FUN_142ce8230(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14585dae0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined8 *)((longlong)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
    *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_1 + 0x30);
    *(undefined1 *)((longlong)puVar1 + 0x31) = *(undefined1 *)(param_1 + 0x31);
    *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)((longlong)puVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    puVar1[8] = *(undefined8 *)(param_1 + 0x40);
    *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(param_1 + 0x48);
    *(undefined2 *)((longlong)puVar1 + 0x4a) = *(undefined2 *)(param_1 + 0x4a);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142ce82e0 FUN_142ce82e0 body=158 status=ok
// SIG undefined FUN_142ce82e0(void)

undefined8 * FUN_142ce82e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14585da80;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined8 *)((longlong)puVar2 + 0x14) = *(undefined8 *)(param_1 + 0x14);
    *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    *(undefined1 *)(puVar2 + 8) = *(undefined1 *)(param_1 + 0x40);
    *(undefined1 *)((longlong)puVar2 + 0x41) = *(undefined1 *)(param_1 + 0x41);
    *(undefined1 *)((longlong)puVar2 + 0x42) = *(undefined1 *)(param_1 + 0x42);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    puVar2[10] = uVar1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142ce8380 FUN_142ce8380 body=77 status=ok
// SIG undefined FUN_142ce8380(void)

void FUN_142ce8380(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14585dbb8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_14585dc00;
  }
  return;
}



// FUNCTION 142ce83d0 FUN_142ce83d0 body=91 status=ok
// SIG undefined FUN_142ce83d0(void)

void FUN_142ce83d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14585db28;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
    *(undefined1 *)((longlong)puVar1 + 0x14) = *(undefined1 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_14585db70;
  }
  return;
}



// FUNCTION 142ce8430 FUN_142ce8430 body=118 status=ok
// SIG undefined FUN_142ce8430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ce8430(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [448];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  FUN_14237e6d0(local_1d8,*(undefined8 *)(param_1 + 0x178),1,1);
  FUN_142338880(param_1,param_2);
  FUN_14237f990(local_1d8);
  return;
}



// FUNCTION 142ce84c0 FUN_142ce84c0 body=1385 status=ok
// SIG undefined FUN_142ce84c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ce84c0(longlong *param_1)

{
  int *piVar1;
  float fVar2;
  longlong *plVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  bool bVar13;
  longlong *local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28 [2];
  
  if ((longlong *)param_1[0x23] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x23] + 0x600))();
  }
  lVar10 = 0;
  if (param_1[0xaa] != 0) {
    lVar8 = param_1[0x24];
    if (lVar8 == 0) {
      lVar8 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar8 + 400) == 0) {
      uVar9 = *(undefined8 *)(lVar8 + 0x3f8);
    }
    else {
      uVar9 = *(undefined8 *)(*(longlong *)(lVar8 + 400) + 0x90);
    }
    FUN_142880530(uVar9,param_1 + 0xaa);
    param_1[0xaa] = 0;
  }
  if (((param_1[0xab] != 0) && (plVar11 = param_1 + 0xac, *plVar11 != 0)) && (param_1[0xad] != 0)) {
    piVar1 = (int *)(param_1[0xad] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_a0 = (longlong *)param_1[0xad];
      lVar8 = lVar10;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)local_a0[1];
        bVar13 = iVar6 == 0;
        if (bVar13) {
          *(int *)(local_a0 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar13) {
          LOCK();
          bVar13 = iVar6 == (int)local_a0[1];
          if (bVar13) {
            *(int *)(local_a0 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar13) {
            lVar8 = *plVar11;
            goto LAB_142ce85d3;
          }
          LOCK();
          iVar6 = (int)local_a0[1];
          bVar13 = iVar6 == 0;
          if (bVar13) {
            *(int *)(local_a0 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        lVar8 = 0;
        local_a0 = (longlong *)0x0;
      }
LAB_142ce85d3:
      TBaseMulticastDelegate<void>::Remove(lVar8 + 0x58,param_1[0xab]);
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_a0 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      param_1[0xab] = 0;
      if (plVar11 != local_28) {
        *plVar11 = 0;
        plVar11 = (longlong *)param_1[0xad];
        param_1[0xad] = 0;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0x542) == '\0') {
    FUN_142cfe8d0(param_1);
  }
  if (param_1[0x81] == 0) goto LAB_142ce8973;
  FUN_142ce6e70(param_1,param_1[0x81],0);
  FUN_142ce72b0(param_1,param_1[0x81],0);
  if (((*(uint *)((longlong)param_1 + 0x544) & 0x100) != 0) && (param_1[0x81] != 0)) {
    FUN_142d6e0b0(param_1[0x81],param_1[3]);
  }
  FUN_142d01170(param_1);
  uVar7 = *(uint *)((longlong)param_1 + 0x544);
  if ((uVar7 & 0x10) != 0) {
    FUN_142cffb10(param_1,0,param_1[0x81]);
    uVar7 = *(uint *)((longlong)param_1 + 0x544);
  }
  if ((uVar7 & 0x20) != 0) {
    FUN_142cff140(param_1,0,param_1[0x81]);
    uVar7 = *(uint *)((longlong)param_1 + 0x544);
  }
  if ((uVar7 >> 10 & 1) != 0) {
    plVar11 = (longlong *)param_1[0x81];
    plVar3 = (longlong *)param_1[0x23];
    lVar8 = lVar10;
    if (plVar11 != (longlong *)0x0) {
      uVar9 = UCircularThrobber::GetPrivateStaticClass();
      lVar8 = (**(code **)(*plVar11 + 0x628))(plVar11,uVar9);
    }
    if (plVar3 != (longlong *)0x0) {
      uVar9 = UCircularThrobber::GetPrivateStaticClass();
      lVar10 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar9);
    }
    if ((lVar8 != 0) && (lVar10 != 0)) {
      FUN_142df2b50(lVar10,0);
    }
  }
  if (*(char *)((longlong)param_1 + 0x419) == '\0') {
    FUN_142cefa50(param_1,&local_98);
    local_88 = CONCAT44(fStack_94,local_98);
    local_80 = local_90;
    iVar6 = *(int *)((longlong)param_1 + 0x41c);
    if ((iVar6 < 0) || ((int)param_1[0xa7] <= iVar6)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (((bVar13) &&
        (lVar10 = (longlong)iVar6 * 0x68 + param_1[0xa6], *(char *)(lVar10 + 0x48) != '\0')) &&
       (fVar2 = *(float *)(lVar10 + 0x50), 0.0 < fVar2)) {
      lVar10 = param_1[0x81];
      lVar8 = *(longlong *)(lVar10 + 0x168);
      if (lVar8 == 0) {
        puVar12 = &local_6c;
        local_6c = _DAT_1468b5d90;
        local_64 = DAT_1468b5d98;
      }
      else {
        puVar12 = (undefined8 *)&local_78;
        local_78 = *(undefined4 *)(lVar8 + 0x220);
        local_70 = *(undefined4 *)(lVar8 + 0x228);
        uStack_74 = *(undefined4 *)(lVar8 + 0x224);
      }
      local_98 = (float)*puVar12 - local_98;
      fStack_94 = (float)((ulonglong)*puVar12 >> 0x20) - fStack_94;
      if (local_98 * local_98 + fStack_94 * fStack_94 +
          (*(float *)(puVar12 + 1) - local_90) * (*(float *)(puVar12 + 1) - local_90) <=
          fVar2 * fVar2) {
        lVar8 = param_1[0x24];
        if (lVar8 == 0) {
          lVar8 = FUN_1423407b0(param_1);
          lVar10 = param_1[0x81];
          if (lVar8 == 0) goto LAB_142ce890e;
        }
        local_40 = *(undefined4 *)(puVar12 + 1);
        local_58 = DAT_1468b5da0;
        local_48 = *puVar12;
        local_50 = DAT_1468b5da8;
        cVar4 = FUN_142543f80(lVar8,lVar10,&local_48,&local_58,0);
        if (cVar4 == '\0') {
          local_88 = *puVar12;
          local_80 = *(float *)(puVar12 + 1);
        }
      }
    }
LAB_142ce890e:
    FUN_142cf7ce0(param_1,param_1[0x81],&local_88);
  }
  else if (param_1[0x81] != 0) {
    FUN_1422279d0(param_1[0x81],&DAT_146532190);
  }
  plVar11 = (longlong *)param_1[0x81];
  if (plVar11 != (longlong *)0x0) {
    uVar9 = FUN_142e39920();
    plVar11 = (longlong *)(**(code **)(*plVar11 + 0x628))(plVar11,uVar9);
    if (plVar11 != (longlong *)0x0) {
      FUN_142cff210(plVar11,0);
      FUN_142dbb5d0(plVar11 + 0x1ae,&DAT_146b31760);
      (**(code **)(*plVar11 + 0x6f8))(plVar11);
    }
  }
LAB_142ce8973:
  lVar10 = param_1[0x81];
  if (lVar10 != 0) {
    lVar8 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if ((bVar13) &&
       (uVar5 = (**(code **)(*param_1 + 0x4d0))(param_1), *(char *)(lVar10 + 0x128) == '\x03')) {
      *(undefined8 *)(lVar10 + 0xae8) = 0;
      *(undefined1 *)(lVar10 + 0xaf0) = 0;
      *(undefined2 *)(lVar10 + 0xaf2) = uVar5;
      FUN_142cf6b00(lVar10);
    }
  }
  local_38 = param_1[0x81];
  local_30 = param_1[0x82];
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x7c,&local_38);
  return;
}



// FUNCTION 142ce8a30 FUN_142ce8a30 body=141 status=ok
// SIG undefined FUN_142ce8a30(void)

void FUN_142ce8a30(longlong param_1,char param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_14233f450();
  if (iVar2 == 3) {
    FUN_142cfcd10(param_1);
    cVar1 = *(char *)(param_1 + 0x418);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        FUN_142ceb590(param_1);
        cVar1 = *(char *)(param_1 + 0x418);
      }
      if (cVar1 == '\x02') {
        FUN_142cf2c50(param_1,param_2,param_3);
        return;
      }
      if ((cVar1 == '\x03') && (param_2 != '\0')) {
        FUN_142ceb5d0(param_1);
      }
    }
  }
  return;
}



// FUNCTION 142ce8ac0 FUN_142ce8ac0 body=67 status=ok
// SIG undefined FUN_142ce8ac0(void)

void FUN_142ce8ac0(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  FUN_142cfd690(local_28,param_1);
  lVar1 = FUN_142cebc70(local_18,local_20);
  if (lVar1 != 0) {
    FUN_142ce8a30(lVar1,param_2,0);
    return;
  }
  return;
}



// FUNCTION 142ce8b10 FUN_142ce8b10 body=45 status=ok
// SIG undefined FUN_142ce8b10(void)

void FUN_142ce8b10(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142cebc70();
  if (lVar1 != 0) {
    FUN_142ce8a30(lVar1,param_3,0);
    return;
  }
  return;
}



// FUNCTION 142ce8b40 FUN_142ce8b40 body=334 status=ok
// SIG undefined FUN_142ce8b40(void)

void FUN_142ce8b40(longlong *param_1)

{
  bool bVar1;
  undefined2 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18;
  longlong local_10;
  
  if ((longlong *)param_1[0x23] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x23] + 0x600))();
  }
  lVar4 = param_1[0x81];
  if ((lVar4 != 0) && ((char)param_1[0x83] == '\x03')) {
    if (*(char *)((longlong)param_1 + 0x542) != '\0') {
      FUN_142cfe8d0(param_1);
      lVar4 = param_1[0x81];
    }
    if ((lVar4 != 0) && ((char)param_1[0x83] == '\x03')) {
      local_18 = 0;
      if (lVar4 != 0) {
        if ((*(byte *)((longlong)param_1 + 0x544) & 0x40) != 0) {
          FUN_142ce14e0(param_1,0,lVar4);
          lVar4 = param_1[0x81];
        }
        if (lVar4 != 0) {
          lVar3 = AHeoCon::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) &&
             (uVar2 = (**(code **)(*param_1 + 0x4d0))(param_1), *(char *)(lVar4 + 0x128) == '\x03'))
          {
            *(longlong **)(lVar4 + 0xae8) = param_1;
            *(undefined1 *)(lVar4 + 0xaf0) = 3;
            *(undefined2 *)(lVar4 + 0xaf2) = uVar2;
            FUN_142cf6b00(lVar4);
          }
        }
        local_18 = param_1[0x81];
        if (local_18 == 0) {
          return;
        }
        if ((char)param_1[0x83] != '\x03') {
          return;
        }
      }
      local_10 = param_1[0x82];
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x7a,&local_18);
      (**(code **)(*param_1 + 0x460))(param_1);
    }
  }
  return;
}



// FUNCTION 142ce8c90 FUN_142ce8c90 body=886 status=ok
// SIG undefined FUN_142ce8c90(void)

void FUN_142ce8c90(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  float *pfVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  short *psVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  ulonglong local_res8;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  short *local_68;
  int local_60;
  longlong local_58 [8];
  
  bVar7 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_142339930();
  if (*(longlong *)(param_1 + 0xfd8) != 0) {
    local_88 = 0;
    local_80 = 0;
    local_98 = 0;
    local_90 = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"OverlappingLadderVolumes",0x32,param_4,param_5);
    FString::PrintfImpl(&local_68,&DAT_145855db4,*(undefined4 *)(param_1 + 0x1350));
    FUN_140c334b0(&local_88,&local_98,&local_68);
    if (local_68 != (short *)0x0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    if ((*(longlong *)(param_1 + 0x1358) == 0) || (*(longlong *)(param_1 + 0x1360) == 0)) {
      puVar2 = (undefined8 *)FText::ToString(&DAT_1468e2338);
      if (*(int *)(puVar2 + 1) == 0) {
        psVar9 = &DAT_143f3eda8;
      }
      else {
        psVar9 = (short *)*puVar2;
        bVar7 = false;
      }
    }
    else {
      local_res8 = *(ulonglong *)(*(longlong *)(param_1 + 0x1358) + 0x18);
      FName::ToString(&local_res8,&local_68);
      bVar7 = true;
      psVar9 = &DAT_143f3eda8;
      if (local_60 != 0) {
        psVar9 = local_68;
      }
    }
    local_90 = 0;
    local_98 = 0;
    if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (psVar9[lVar5] != 0);
      uVar4 = (int)lVar5 + 1;
      local_90 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      }
      FGenericPlatformString::Memcpy(local_98,psVar9,(longlong)(int)uVar4 * 2);
    }
    local_78 = 0;
    local_70 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"CurrentLadderVolume",0x28);
    FUN_140c334b0(&local_88,&local_78,&local_98);
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    if ((bVar7) && (local_68 != (short *)0x0)) {
      FMemory::Free();
    }
    lVar5 = local_88;
    lVar10 = param_2 + 0x98;
    fVar12 = 0.0;
    lVar8 = (longlong)(int)local_80 * 0x20 + local_88;
    lVar6 = local_88;
    if (local_88 != lVar8) {
      do {
        FString::FString(&local_68,lVar6);
        FString::FString(local_58,lVar6 + 0x10);
        pfVar3 = (float *)FUN_1428adeb0(lVar10,&local_res8,&local_68);
        fVar11 = *pfVar3;
        if (*pfVar3 <= fVar12) {
          fVar11 = fVar12;
        }
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        if (local_68 != (short *)0x0) {
          FMemory::Free();
        }
        lVar6 = lVar6 + 0x20;
        fVar12 = fVar11;
      } while (lVar6 != lVar8);
      for (; lVar5 != lVar8; lVar5 = lVar5 + 0x20) {
        FString::FString(&local_68,lVar5);
        FString::FString(local_58,lVar5 + 0x10);
        fVar12 = *(float *)(param_2 + 0x240);
        uVar1 = *(undefined4 *)(param_2 + 0x244);
        FUN_1428adeb0(lVar10,&local_98,&local_68);
        local_res8 = local_res8 & 0xffffffff00000000;
        FUN_1428a6fb0(lVar10,&local_68,&local_res8);
        *(undefined4 *)(param_2 + 0x244) = uVar1;
        local_res8 = local_res8 & 0xffffffff00000000;
        *(float *)(param_2 + 0x240) = fVar12 + fVar11;
        FUN_1428a6fb0(lVar10,local_58,&local_res8);
        *(float *)(param_2 + 0x240) = fVar12;
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        if (local_68 != (short *)0x0) {
          FMemory::Free();
        }
      }
    }
    TArray<FSaveGameUserSetting,FDefaultAllocator>::~TArray<FSaveGameUserSetting,FDefaultAllocator>
              (&local_88);
  }
  return;
}



// FUNCTION 142ce9010 FUN_142ce9010 body=91 status=ok
// SIG undefined FUN_142ce9010(void)

undefined8 FUN_142ce9010(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xb70))();
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0xbd8))(param_1,param_2);
  if ((cVar1 == '\0') && (cVar1 = FUN_14233a370(param_1,param_2), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 142ce9070 FUN_142ce9070 body=610 status=ok
// SIG undefined FUN_142ce9070(void)

undefined8 FUN_142ce9070(longlong *param_1,char param_2)

{
  char cVar1;
  float *pfVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 local_48;
  float local_40;
  
  if ((((((char)param_1[0x49] != '\x06') || (*(char *)((longlong)param_1 + 0x249) != '\0')) ||
       (param_1[0x2f] == 0)) || ((param_1[0x26b] == 0 || (param_1[0x26c] == 0)))) ||
     ((param_1[0x44] == 0 || (cVar1 = thunk_FUN_142912390(), cVar1 == '\0')))) {
    return 0;
  }
  if (param_1[0x26b] == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)param_1[0x26c];
  }
  pfVar2 = (float *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  uVar10 = 0;
  fVar11 = pfVar2[1];
  fVar8 = *pfVar2;
  fVar5 = fVar8 * fVar8 + fVar11 * fVar11;
  if (fVar5 == 1.0) {
    if (pfVar2[2] == 0.0) {
      local_48 = *(undefined8 *)pfVar2;
      fVar6 = (float)((ulonglong)local_48 >> 0x20);
      local_40 = pfVar2[2];
      fVar9 = (float)local_48;
      goto LAB_142ce91f7;
    }
  }
  else {
    fVar6 = DAT_1468b5d94;
    local_40 = DAT_1468b5d98;
    fVar9 = DAT_1468b5d90;
    if (fVar5 < 1e-08) goto LAB_142ce91f7;
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    fVar8 = fVar8 * fVar6;
    fVar11 = fVar11 * fVar6;
  }
  fVar6 = fVar11;
  local_40 = 0.0;
  fVar9 = fVar8;
LAB_142ce91f7:
  fVar11 = *(float *)((longlong)param_1 + 0x1164);
  local_40 = local_40 * fVar11;
  *(ulonglong *)((longlong)param_1 + 0x18c) = CONCAT44(fVar6 * fVar11,fVar9 * fVar11);
  *(float *)((longlong)param_1 + 0x194) = local_40;
  (**(code **)(*param_1 + 0x5a0))(param_1,3);
  param_1[0x26d] = param_1[0x26b];
  param_1[0x26e] = param_1[0x26c];
  if (param_2 == '\0') {
    if ((param_1[0x24] != 0) || (lVar3 = FUN_1423407b0(param_1), lVar3 != 0)) {
      lVar3 = param_1[0x24];
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      uVar10 = *(undefined4 *)(lVar3 + 0x790);
    }
    *(undefined4 *)(param_1 + 0x26f) = uVar10;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x238,0);
  }
  return 1;
}



// FUNCTION 142ce92e0 FUN_142ce92e0 body=475 status=ok
// SIG undefined FUN_142ce92e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * FUN_142ce92e0(void *param_1,longlong *param_2,undefined8 *param_3,float param_4,
                    undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  float local_170;
  undefined1 local_168 [8];
  undefined1 local_160 [72];
  longlong local_118;
  longlong local_f8;
  undefined1 local_e8 [72];
  undefined8 local_a0;
  float local_98;
  undefined8 local_94;
  float local_8c;
  undefined1 local_78 [16];
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if (param_2 == (longlong *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x68) = 0;
    *(undefined4 *)((longlong)param_1 + 0x70) = 0;
    *(undefined4 *)((longlong)param_1 + 0x78) = 0;
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    _guard_xfg_dispatch_icall_nop(param_1,0,0x90);
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x68) = 0;
      *(undefined4 *)((longlong)param_1 + 0x70) = 0;
      *(undefined4 *)((longlong)param_1 + 0x78) = 0;
      *(undefined4 *)((longlong)param_1 + 0x84) = 0;
      *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
      _guard_xfg_dispatch_icall_nop(param_1,0,0x90);
      *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
    }
    else {
      FUN_142326da0(local_168);
      local_a0 = *param_3;
      local_98 = *(float *)(param_3 + 1) + param_4;
      local_170 = *(float *)(param_3 + 1) - param_4;
      local_188 = param_6;
      local_94 = *param_3;
      local_8c = local_170;
      FUN_142cee900(param_2,param_5,local_160,local_e8);
      FUN_142cf2eb0(local_168,param_2,lVar1);
      FUN_142ceb750(param_1,param_2,*(undefined4 *)(param_3 + 1),local_68);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_78);
      if (local_f8 != 0) {
        FMemory::Free();
      }
      if (local_118 != 0) {
        FMemory::Free();
      }
    }
  }
  return param_1;
}



// FUNCTION 142ce94c0 FUN_142ce94c0 body=113 status=ok
// SIG undefined FUN_142ce94c0(void)

void FUN_142ce94c0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1[0x81] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x4b0))();
    if (cVar1 == '\0') {
      iVar2 = FUN_14233f450(param_1);
      if (iVar2 == 3) {
        FUN_142cfcd10(param_1);
        cVar1 = (char)param_1[0x83];
        if (cVar1 != '\0') {
          if (cVar1 == '\x01') {
            FUN_142ceb590(param_1);
            cVar1 = (char)param_1[0x83];
          }
          if (cVar1 == '\x02') {
            FUN_142cf2c50(param_1,0,0);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142ce9540 FUN_142ce9540 body=55 status=ok
// SIG undefined FUN_142ce9540(void)

void FUN_142ce9540(longlong param_1)

{
  FUN_142c6be70();
  FUN_142c835c0(param_1,0);
  FUN_142c84e30(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xcc),1);
  return;
}



// FUNCTION 142ce9580 FUN_142ce9580 body=663 status=ok
// SIG undefined FUN_142ce9580(void)

void FUN_142ce9580(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 local_1d8 [32];
  longlong local_1b8;
  int local_1b0;
  int local_1ac;
  undefined1 local_1a7;
  undefined1 local_108 [56];
  undefined1 local_d0 [200];
  
  FUN_142c6b9b0();
  (**(code **)(*param_1 + 200))(param_1);
  if ((char)param_1[6] != '\x01') {
    return;
  }
  lVar8 = param_1[2];
  if ((*(byte *)(lVar8 + 0x60) & 8) != 0) {
    if (param_1[3] == 0) {
      return;
    }
    iVar7 = FUN_14233f450();
    if ((iVar7 != 3) && ((char)param_1[0x14] != -1)) {
      return;
    }
    lVar8 = FUN_142c6f130(param_1);
    if (lVar8 != 0) {
      FUN_142227350(lVar8,0,1);
    }
    plVar9 = (longlong *)param_1[0x30];
    uVar13 = 0;
    uVar15 = (longlong)(int)param_1[0x31] & 0x1fffffffffffffff;
    if (plVar9 + (int)param_1[0x31] < plVar9) {
      uVar15 = uVar13;
    }
    if (uVar15 == 0) {
      return;
    }
    do {
      if (*plVar9 != 0) {
        FUN_142227350(*plVar9,0,1);
      }
      plVar9 = plVar9 + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar15);
    return;
  }
  if (((*(byte *)(lVar8 + 0x60) & 0x20) != 0) &&
     (plVar9 = (longlong *)FUN_142c6f130(param_1), plVar9 != (longlong *)0x0)) {
    (**(code **)(*plVar9 + 0x310))(plVar9,1);
  }
  if (*(longlong *)(lVar8 + 0x68) == 0) {
    return;
  }
  lVar10 = USafeZone::GetPrivateStaticClass();
  lVar14 = *(longlong *)(lVar8 + 0x68);
  while( true ) {
    if (lVar14 == 0) {
      return;
    }
    if (lVar14 == lVar10) break;
    lVar14 = *(longlong *)(lVar14 + 0x30);
  }
  if (*(longlong *)(lVar8 + 0x68) == 0) {
    return;
  }
  if (param_1[3] == 0) {
    return;
  }
  iVar7 = FUN_14233f450();
  if ((iVar7 != 3) && ((char)param_1[0x14] != -1)) {
    return;
  }
  FUN_142c62180(local_1d8);
  local_1a7 = *(undefined1 *)((longlong)param_1 + 0x31);
  if (param_1[0x19] != 0) {
    puVar11 = (undefined8 *)FUN_142c625b0(local_108,&DAT_146b31780);
    iVar7 = local_1b0;
    lVar14 = (longlong)local_1b0;
    local_1b0 = local_1b0 + 1;
    if (local_1ac < local_1b0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_1b8,iVar7);
    }
    uVar12 = puVar11[1];
    lVar14 = lVar14 * 0x38;
    *(undefined8 *)(lVar14 + local_1b8) = *puVar11;
    ((undefined8 *)(lVar14 + local_1b8))[1] = uVar12;
    uVar12 = puVar11[3];
    puVar2 = (undefined8 *)(lVar14 + 0x10 + local_1b8);
    *puVar2 = puVar11[2];
    puVar2[1] = uVar12;
    uVar4 = *(undefined4 *)((longlong)puVar11 + 0x24);
    uVar5 = *(undefined4 *)(puVar11 + 5);
    uVar6 = *(undefined4 *)((longlong)puVar11 + 0x2c);
    puVar3 = (undefined4 *)(lVar14 + 0x20 + local_1b8);
    *puVar3 = *(undefined4 *)(puVar11 + 4);
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    *(undefined8 *)(lVar14 + 0x30 + local_1b8) = puVar11[6];
  }
  if (*(longlong *)(lVar8 + 0x68) != 0) {
    lVar10 = USafeZone::GetPrivateStaticClass();
    lVar8 = *(longlong *)(lVar8 + 0x68);
    for (lVar14 = lVar8; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x30)) {
      if (lVar14 == lVar10) goto LAB_142ce9791;
    }
  }
  lVar8 = 0;
LAB_142ce9791:
  uVar12 = FUN_1405e0fd0(local_d0,local_1d8);
  FUN_142c7bb40(param_1[3],local_1e8,lVar8,uVar12,0);
  if (local_1e0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1e0 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1e0)(local_1e0);
      LOCK();
      piVar1 = (int *)((longlong)local_1e0 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_1e0 + 8))(local_1e0,1);
      }
    }
  }
  FUN_142c63c50(local_1d8);
  return;
}



// FUNCTION 142ce9820 FUN_142ce9820 body=460 status=ok
// SIG undefined FUN_142ce9820(void)

void FUN_142ce9820(longlong *param_1,int param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  FUN_14233a670();
  if ((param_2 - 2U & 0xfffffffd) != 0) {
    iVar4 = FUN_142340f30(param_1);
    if ((iVar4 == 3) || (iVar4 = FUN_14233f450(param_1), iVar4 != 3)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    plVar1 = (longlong *)param_1[0x23];
    if ((((plVar1 != (longlong *)0x0) && (plVar1[4] != 0)) &&
        (lVar6 = (**(code **)(*plVar1 + 0x148))(), lVar6 != 0)) &&
       (lVar6 = param_1[0x81], lVar6 != 0)) {
      iVar4 = *(int *)(lVar6 + 0xc);
      if (iVar4 < (int)DAT_1469e91c4) {
        uVar8 = iVar4 >> 0x1f & 0xffff;
        uVar5 = iVar4 + uVar8;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                (longlong)(int)((uVar5 & 0xffff) - uVar8) * 0x18;
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x30000000) == 0) {
        if (bVar2) {
          if (param_2 == 1) {
            FUN_142cf73e0(param_1,lVar6,0,(char)param_1[0x83]);
            FUN_142ce61d0(param_1 + 0x80);
            if (((char)param_1[0x83] == '\x01') && (param_1[0x81] != 0)) {
              FUN_142cfcd80(param_1);
            }
            (**(code **)(*param_1 + 0x460))(param_1);
          }
        }
        else {
          if (param_2 != 1) {
            FUN_142cec090(param_1);
            return;
          }
          cVar3 = (char)param_1[0x83];
          if (cVar3 == '\x01') {
            *(undefined1 *)(param_1 + 0x83) = 2;
            if ((longlong *)param_1[0x80] != (longlong *)0x0) {
              (**(code **)(*(longlong *)param_1[0x80] + 0x260))();
            }
            (**(code **)(*param_1 + 0x468))(param_1);
            cVar3 = (char)param_1[0x83];
          }
          if (cVar3 == '\x02') {
            FUN_142cf2c50(param_1,1);
            return;
          }
          if (cVar3 == '\x03') {
            FUN_142ceb5d0(param_1);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142ce99f0 FUN_142ce99f0 body=308 status=ok
// SIG undefined FUN_142ce99f0(void)

float FUN_142ce99f0(longlong param_1,undefined4 param_2,float *param_3,float *param_4,
                   undefined8 param_5,char *param_6)

{
  char cVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  uVar2 = FRuntimeFloatCurve::GetRichCurve(param_1 + 8);
  fVar3 = (float)FRichCurve::Eval(uVar2,param_2,param_2);
  cVar1 = *(char *)(param_1 + 0x80);
  if (cVar1 == '\x01') {
    fVar4 = param_3[3] - *param_3;
  }
  else if (cVar1 == '\x02') {
    fVar4 = param_3[4] - param_3[1];
  }
  else {
    if (cVar1 != '\x03') goto LAB_142ce9a72;
    fVar4 = param_3[5] - param_3[2];
  }
  fVar3 = fVar3 * fVar4 * 0.5;
LAB_142ce9a72:
  cVar1 = *(char *)(param_1 + 0x81);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      fVar4 = *param_4;
    }
    else if (cVar1 == '\x02') {
      fVar4 = param_4[1];
    }
    else {
      fVar4 = param_4[2];
    }
    fVar3 = fVar3 + fVar4;
  }
  fVar4 = fVar3;
  if ((*(byte *)(param_1 + 0x100) & 1) != 0) {
    fVar4 = (float)FUN_142c98860(param_1 + 0x108,param_5);
    if ((*(byte *)(param_1 + 0x100) & 2) != 0) {
      fVar4 = fVar3 * fVar4;
    }
  }
  if ((((*(byte *)(param_1 + 0x82) & 2) != 0) && (param_6 != (char *)0x0)) && (*param_6 != '\0')) {
    uVar2 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x88);
    fVar3 = (float)FRichCurve::Eval(uVar2,param_2,param_2);
    fVar4 = (fVar4 - *(float *)(param_6 + 4)) * fVar3 + *(float *)(param_6 + 4);
  }
  return fVar4;
}



// FUNCTION 142ce9b30 FUN_142ce9b30 body=278 status=ok
// SIG undefined FUN_142ce9b30(void)

float * FUN_142ce9b30(longlong param_1,float *param_2,undefined4 param_3,char *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined1 local_38 [48];
  
  FUN_1423d25b0(param_1 + 8);
  if ((((*(byte *)(param_1 + 0x1d0) & 2) != 0) && (param_4 != (char *)0x0)) && (*param_4 != '\0')) {
    uVar7 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x1d8);
    fVar9 = (float)FRichCurve::Eval(uVar7,param_3,param_3);
    if ((*(byte *)(param_1 + 0x1d0) & 4) == 0) {
      fVar1 = *(float *)(param_4 + 8);
      fVar2 = *(float *)(param_4 + 0xc);
      fVar3 = *(float *)(param_4 + 0x10);
      fVar4 = *(float *)(param_4 + 8);
      fVar5 = *(float *)(param_4 + 0xc);
      fVar6 = *(float *)(param_4 + 0x10);
      *param_2 = (*param_2 - *(float *)(param_4 + 4)) * fVar9 + *(float *)(param_4 + 4);
      param_2[1] = (param_2[1] - fVar1) * fVar9 + fVar4;
      param_2[2] = (param_2[2] - fVar2) * fVar9 + fVar5;
      param_2[3] = (param_2[3] - fVar3) * fVar9 + fVar6;
    }
    else {
      puVar8 = (undefined8 *)FLinearColor::LerpUsingHSV(local_38,param_4 + 4,param_2,fVar9);
      uVar7 = puVar8[1];
      *(undefined8 *)param_2 = *puVar8;
      *(undefined8 *)(param_2 + 2) = uVar7;
    }
  }
  return param_2;
}



// FUNCTION 142ce9c50 FUN_142ce9c50 body=2394 status=ok
// SIG undefined FUN_142ce9c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142ce9c50(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  char *pcVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
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
  undefined4 uVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  undefined4 local_200;
  undefined1 local_1f8;
  undefined8 *local_1f0;
  undefined8 local_1e8;
  float local_1e0;
  undefined8 local_1d8;
  float local_1d0;
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
  undefined8 local_188;
  float local_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
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
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  local_1e8 = *(undefined8 *)(param_2 + 0x58);
  uVar41 = (undefined4)local_1e8;
  uVar42 = (undefined4)((ulonglong)local_1e8 >> 0x20);
  local_108 = (uint)_DAT_146b31620 & _DAT_146b31630;
  uStack_104 = (uint)fRam0000000146b31624 & uRam0000000146b31634;
  uStack_100 = (uint)fRam0000000146b31628 & uRam0000000146b31638;
  uStack_fc = (uint)fRam0000000146b3162c & uRam0000000146b3163c;
  fVar21 = *(float *)(param_2 + 0x60);
  bVar2 = false;
  local_128 = 0.0;
  fStack_124 = 0.0;
  fStack_120 = 0.0;
  fStack_11c = fRam0000000146b3162c;
  local_118 = 0;
  uStack_110 = 0;
  local_1e0 = fVar21;
  local_1d8 = param_3;
  if ((*(char *)(param_2 + 0x54) != '\0') && (*(longlong *)(param_2 + 8) != 0)) {
    lVar6 = FUN_142e20fc0();
    lVar12 = *(longlong *)(param_2 + 8);
    for (lVar8 = lVar12; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar6) {
        if (lVar12 != 0) {
          puVar9 = (undefined8 *)FUN_142c6e860(&local_188,lVar12,param_3,&local_128);
          bVar2 = true;
          local_1e8 = *puVar9;
          uVar41 = (undefined4)local_1e8;
          uVar42 = (undefined4)((ulonglong)local_1e8 >> 0x20);
          fVar21 = *(float *)(puVar9 + 1);
          local_1e0 = fVar21;
        }
        break;
      }
    }
  }
  pcVar11 = (char *)(param_2 + 0x18);
  if (*(char *)(param_2 + 0x12) == '\0') {
    pcVar11 = (char *)(param_1 + 0x440);
  }
  if (((*pcVar11 == '\0') || (*(longlong *)(param_1 + 0x118) == 0)) ||
     (lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x118), lVar12 == 0)) {
    lVar12 = *(longlong *)(param_1 + 0x118);
  }
  plVar7 = (longlong *)FUN_14222b250(lVar12,*(undefined8 *)(pcVar11 + 8),0);
  if (plVar7 == (longlong *)0x0) {
LAB_142cea546:
    uVar10 = 0;
  }
  else {
    (**(code **)(*plVar7 + 0x420))(plVar7,&local_158,*(undefined8 *)(pcVar11 + 8),0);
    uVar10 = local_1d8;
    uVar4 = FUN_142ceca90(pcVar11,&local_1d8,local_1d8,lVar12);
    fVar31 = fRam0000000146b31628;
    fVar29 = fRam0000000146b31624;
    fVar27 = _DAT_146b31620;
    auVar14._4_4_ = fStack_134;
    auVar14._0_4_ = local_138;
    auVar14._8_4_ = fStack_130;
    auVar14._12_4_ = fStack_12c;
    fVar43 = (float)((uint)_DAT_146b31620 & _DAT_146b31630);
    fVar44 = (float)((uint)fRam0000000146b31624 & uRam0000000146b31634);
    fVar45 = (float)((uint)fRam0000000146b31628 & uRam0000000146b31638);
    fVar46 = (float)((uint)fRam0000000146b3162c & uRam0000000146b3163c);
    auVar13._4_4_ = fVar44;
    auVar13._0_4_ = fVar43;
    auVar13._8_4_ = fVar45;
    auVar13._12_4_ = fVar46;
    auVar14 = minps(auVar13,auVar14);
    auVar15._4_4_ = -(uint)(auVar14._4_4_ < fRam0000000146b31684);
    auVar15._0_4_ = -(uint)(auVar14._0_4_ < _DAT_146b31680);
    auVar15._8_4_ = -(uint)(auVar14._8_4_ < fRam0000000146b31688);
    auVar15._12_4_ = -(uint)(auVar14._12_4_ < fRam0000000146b3168c);
    iVar5 = movmskps(uVar4,auVar15);
    if (iVar5 == 0) {
      fVar22 = local_138 * (float)local_1d8;
      fVar24 = fStack_134 * local_1d8._4_4_;
      fVar25 = fStack_130 * local_1d0;
      fVar17 = fStack_12c * 0.0;
      fVar18 = fRam0000000146b3162c * local_158 * _DAT_146b31660 + fStack_14c * 0.0 +
               fStack_154 * 0.0 * _DAT_146b31650 + fStack_150 * 0.0 * _DAT_146b31640;
      fVar19 = local_158 * 0.0 * fRam0000000146b31664 + fStack_14c * 0.0 +
               fRam0000000146b3162c * fStack_154 * fRam0000000146b31654 +
               fStack_150 * 0.0 * fRam0000000146b31644;
      fVar20 = local_158 * 0.0 * fRam0000000146b31668 + fStack_14c * 0.0 +
               fStack_154 * 0.0 * fRam0000000146b31658 +
               fRam0000000146b3162c * fStack_150 * fRam0000000146b31648;
      fVar26 = local_158 * 0.0 * fRam0000000146b3166c + fRam0000000146b3162c * fStack_14c +
               fStack_154 * 0.0 * fRam0000000146b3165c + fStack_150 * 0.0 * fRam0000000146b3164c;
      fVar27 = fVar25 * fStack_154 - fVar24 * fStack_150;
      fVar29 = fVar22 * fStack_150 - fVar25 * local_158;
      fVar31 = fVar24 * local_158 - fVar22 * fStack_154;
      fVar23 = fVar17 * fStack_14c - fVar17 * fStack_14c;
      fVar27 = fVar27 + fVar27;
      fVar29 = fVar29 + fVar29;
      fVar31 = fVar31 + fVar31;
      fVar23 = fVar23 + fVar23;
      local_148 = (fVar31 * fStack_154 - fVar29 * fStack_150) + fVar27 * fStack_14c + fVar22 +
                  local_148;
      fStack_144 = (fVar27 * fStack_150 - fVar31 * local_158) + fVar29 * fStack_14c + fVar24 +
                   fStack_144;
      fStack_140 = (fVar29 * local_158 - fVar27 * fStack_154) + fVar31 * fStack_14c + fVar25 +
                   fStack_140;
      fStack_13c = (fVar23 * fStack_14c - fVar23 * fStack_14c) + fVar23 * fStack_14c + fVar17 +
                   fStack_13c;
    }
    else {
      fVar22 = fStack_154 + fStack_154;
      fVar24 = fStack_150 + fStack_150;
      fVar25 = (local_158 + local_158) * local_158;
      fVar23 = (local_158 + local_158) * fStack_14c;
      fVar38 = (fVar24 * fStack_14c + fVar22 * local_158) * local_138;
      fVar39 = (fVar23 + fVar24 * fStack_154) * fStack_134;
      fVar40 = (fVar22 * fStack_14c + fVar24 * local_158) * fStack_130;
      fVar32 = fStack_134 * (fVar22 * local_158 - fVar24 * fStack_14c);
      fVar33 = fStack_130 * (fVar24 * fStack_154 - fVar23);
      fVar34 = local_138 * (fVar24 * local_158 - fVar22 * fStack_14c);
      fVar23 = (float)((uint)((_DAT_146b31620 - (fVar24 * fStack_150 + fVar22 * fStack_154)) *
                             local_138) & _DAT_146b31630);
      fVar24 = (float)((uint)((fRam0000000146b31624 - (fVar24 * fStack_150 + fVar25)) * fStack_134)
                      & uRam0000000146b31634);
      fVar17 = (float)((uint)((fRam0000000146b31628 - (fVar22 * fStack_154 + fVar25)) * fStack_130)
                      & uRam0000000146b31638);
      fVar19 = (float)((uint)((fRam0000000146b3162c - (fVar25 + fVar25)) * fStack_12c) &
                      uRam0000000146b3163c);
      fVar35 = (fRam0000000146b3162c * 0.0 + 0.0) * fVar43;
      fVar36 = (fRam0000000146b3162c * 0.0 + 0.0) * fVar44;
      fVar37 = (fRam0000000146b3162c * 0.0 + 0.0) * fVar45;
      fVar26 = fVar44 * (0.0 - fRam0000000146b3162c * 0.0);
      fVar28 = fVar45 * (0.0 - fRam0000000146b3162c * 0.0);
      fVar30 = fVar43 * (0.0 - fRam0000000146b3162c * 0.0);
      fVar22 = (float)((uint)((_DAT_146b31620 - 0.0) * fVar43) & _DAT_146b31630);
      fVar25 = (float)((uint)((fRam0000000146b31624 - 0.0) * fVar44) & uRam0000000146b31634);
      fVar18 = (float)((uint)((fRam0000000146b31628 - 0.0) * fVar45) & uRam0000000146b31638);
      fVar20 = (float)((uint)((fRam0000000146b3162c - 0.0) * fVar46) & uRam0000000146b3163c);
      local_1c8 = fVar35 * fVar32 + fVar22 * fVar23 + fVar30 * fVar40 + fVar20 * local_148;
      fStack_1c4 = fVar35 * fVar24 + fVar22 * fVar38 + fVar30 * fVar33 + fVar20 * fStack_144;
      fStack_1c0 = fVar35 * fVar39 + fVar22 * fVar34 + fVar30 * fVar17 + fVar20 * fStack_140;
      fStack_1bc = fVar35 * fVar19 + fVar22 * fVar19 + fVar30 * fVar19 +
                   fVar20 * fRam0000000146b3162c;
      local_1b8 = fVar25 * fVar32 + fVar26 * fVar23 + fVar36 * fVar40 + fVar20 * local_148;
      fStack_1b4 = fVar25 * fVar24 + fVar26 * fVar38 + fVar36 * fVar33 + fVar20 * fStack_144;
      fStack_1b0 = fVar25 * fVar39 + fVar26 * fVar34 + fVar36 * fVar17 + fVar20 * fStack_140;
      fStack_1ac = fVar25 * fVar19 + fVar26 * fVar19 + fVar36 * fVar19 +
                   fVar20 * fRam0000000146b3162c;
      local_1a8 = fVar28 * fVar32 + fVar37 * fVar23 + fVar18 * fVar40 + fVar20 * local_148;
      fStack_1a4 = fVar28 * fVar24 + fVar37 * fVar38 + fVar18 * fVar33 + fVar20 * fStack_144;
      fStack_1a0 = fVar28 * fVar39 + fVar37 * fVar34 + fVar18 * fVar17 + fVar20 * fStack_140;
      fStack_19c = fVar28 * fVar19 + fVar37 * fVar19 + fVar18 * fVar19 +
                   fVar20 * fRam0000000146b3162c;
      local_198 = local_1d8._4_4_ * fVar32 + (float)local_1d8 * fVar23 + local_1d0 * fVar40 +
                  fRam0000000146b3162c * local_148;
      fStack_194 = local_1d8._4_4_ * fVar24 + (float)local_1d8 * fVar38 + local_1d0 * fVar33 +
                   fRam0000000146b3162c * fStack_144;
      fStack_190 = local_1d8._4_4_ * fVar39 + (float)local_1d8 * fVar34 + local_1d0 * fVar17 +
                   fRam0000000146b3162c * fStack_140;
      fStack_18c = local_1d8._4_4_ * fVar19 + (float)local_1d8 * fVar19 + local_1d0 * fVar19 +
                   fRam0000000146b3162c * fRam0000000146b3162c;
      FMatrix::RemoveScaling(&local_1c8);
      fVar27 = (float)(-(uint)(_DAT_146b31680 <= local_138 * fVar43) &
                       (_DAT_146b31670 ^ (uint)fVar27) ^ _DAT_146b31670);
      fVar29 = (float)(-(uint)(fRam0000000146b31684 <= fStack_134 * fVar44) &
                       (uRam0000000146b31674 ^ (uint)fVar29) ^ uRam0000000146b31674);
      fVar31 = (float)(-(uint)(fRam0000000146b31688 <= fStack_130 * fVar45) &
                       (uRam0000000146b31678 ^ (uint)fVar31) ^ uRam0000000146b31678);
      local_1c8 = local_1c8 * fVar27;
      fStack_1c4 = fStack_1c4 * fVar27;
      fStack_1c0 = fStack_1c0 * fVar27;
      fStack_1b0 = fStack_1b0 * fVar29;
      fStack_1b4 = fStack_1b4 * fVar29;
      local_1b8 = local_1b8 * fVar29;
      fStack_1a0 = fStack_1a0 * fVar31;
      local_1a8 = local_1a8 * fVar31;
      fStack_1a4 = fStack_1a4 * fVar31;
      FQuat::FQuat(&local_178,&local_1c8);
      local_1d8 = CONCAT44(local_1d8._4_4_,0x322bcc77);
      auVar16._0_4_ = local_178 * local_178 + fStack_170 * fStack_170;
      auVar16._4_4_ = fStack_174 * fStack_174 + fStack_16c * fStack_16c;
      auVar16._8_4_ = fStack_170 * fStack_170 + local_178 * local_178;
      auVar16._12_4_ = fStack_16c * fStack_16c + fStack_174 * fStack_174;
      fVar22 = auVar16._4_4_ + auVar16._0_4_;
      fVar24 = auVar16._8_4_ + auVar16._4_4_;
      fVar25 = auVar16._12_4_ + auVar16._8_4_;
      fVar17 = auVar16._0_4_ + auVar16._12_4_;
      auVar1._4_4_ = fVar24;
      auVar1._0_4_ = fVar22;
      auVar1._8_4_ = fVar25;
      auVar1._12_4_ = fVar17;
      auVar14 = rsqrtps(auVar16,auVar1);
      fVar27 = auVar14._0_4_;
      fVar29 = auVar14._4_4_;
      fVar31 = auVar14._8_4_;
      fVar23 = auVar14._12_4_;
      fVar27 = (_DAT_146b31610 - fVar27 * fVar27 * fVar22 * _DAT_146b31610) * fVar27 + fVar27;
      fVar29 = (fRam0000000146b31614 - fVar29 * fVar29 * fVar24 * fRam0000000146b31614) * fVar29 +
               fVar29;
      fVar31 = (fRam0000000146b31618 - fVar31 * fVar31 * fVar25 * fRam0000000146b31618) * fVar31 +
               fVar31;
      fVar23 = (fRam0000000146b3161c - fVar23 * fVar23 * fVar17 * fRam0000000146b3161c) * fVar23 +
               fVar23;
      fStack_13c = 0.0;
      fVar18 = (float)(((uint)(((_DAT_146b31610 - fVar27 * fVar27 * fVar22 * _DAT_146b31610) *
                                fVar27 + fVar27) * local_178) ^ _DAT_146b31600) &
                       -(uint)(1e-08 <= fVar22) ^ _DAT_146b31600);
      fVar19 = (float)(((uint)(((fRam0000000146b31614 -
                                fVar29 * fVar29 * fVar24 * fRam0000000146b31614) * fVar29 + fVar29)
                              * fStack_174) ^ uRam0000000146b31604) & -(uint)(1e-08 <= fVar24) ^
                      uRam0000000146b31604);
      fVar20 = (float)(((uint)(((fRam0000000146b31618 -
                                fVar31 * fVar31 * fVar25 * fRam0000000146b31618) * fVar31 + fVar31)
                              * fStack_170) ^ uRam0000000146b31608) & -(uint)(1e-08 <= fVar25) ^
                      uRam0000000146b31608);
      fVar26 = (float)(((uint)(((fRam0000000146b3161c -
                                fVar23 * fVar23 * fVar17 * fRam0000000146b3161c) * fVar23 + fVar23)
                              * fStack_16c) ^ uRam0000000146b3160c) & -(uint)(1e-08 <= fVar17) ^
                      uRam0000000146b3160c);
      local_148 = local_198;
      fStack_144 = fStack_194;
      fStack_140 = fStack_190;
    }
    fStack_12c = fStack_12c * fVar46;
    fStack_130 = fStack_130 * fVar45;
    fStack_134 = fStack_134 * fVar44;
    local_138 = local_138 * fVar43;
    if (*(char *)(param_2 + 0x55) == '\0') {
      local_1e8._0_4_ = (float)local_1e8 * local_138;
      local_1e8._4_4_ = local_1e8._4_4_ * fStack_134;
      local_1e0 = local_1e0 * fStack_130;
      fVar21 = local_1e0 * fVar19 - local_1e8._4_4_ * fVar20;
      fVar27 = (float)local_1e8 * fVar20 - local_1e0 * fVar18;
      fVar29 = local_1e8._4_4_ * fVar18 - (float)local_1e8 * fVar19;
      fVar21 = fVar21 + fVar21;
      fVar27 = fVar27 + fVar27;
      fVar29 = fVar29 + fVar29;
      local_1e0 = (fVar27 * fVar18 - fVar21 * fVar19) + fVar26 * fVar29 + local_1e0 + fStack_140;
      local_1e8 = CONCAT44((fVar21 * fVar20 - fVar29 * fVar18) + fVar26 * fVar27 + local_1e8._4_4_ +
                           fStack_144,
                           (fVar29 * fVar19 - fVar27 * fVar20) + fVar26 * fVar21 + (float)local_1e8
                           + local_148);
    }
    else {
      local_1e8 = CONCAT44(uVar42,uVar41);
      local_1e0 = fVar21;
    }
    local_188 = local_1e8;
    local_180 = local_1e0;
    if (*(char *)(param_2 + 0x48) == '\0') {
      *param_4 = local_1e8;
      *(float *)(param_4 + 1) = local_1e0;
    }
    else {
      local_1e8 = CONCAT44(fStack_144,local_148);
      local_1e0 = fStack_140;
      if ((*(char *)(param_1 + 0x529) != '\0') &&
         (((lVar12 = *(longlong *)(param_1 + 0x118), lVar12 != 0 &&
           (lVar8 = *(longlong *)(lVar12 + 0x118), *(longlong *)(lVar12 + 0x118) != 0)) ||
          (lVar8 = lVar12, lVar12 != 0)))) {
        lVar12 = *(longlong *)(lVar8 + 0x168);
        if (lVar12 == 0) {
          local_1d8 = _DAT_1468b5d90;
          local_1d0 = DAT_1468b5d98;
        }
        else {
          local_1d8 = *(undefined8 *)(lVar12 + 0x220);
          local_1d0 = *(float *)(lVar12 + 0x228);
        }
        local_1e8 = local_1d8;
        local_1e0 = local_1d0;
      }
      local_158 = fVar18;
      fStack_154 = fVar19;
      fStack_150 = fVar20;
      fStack_14c = fVar26;
      if (bVar2) {
        local_168 = fStack_11c * fVar18 * _DAT_146b31660 + fVar26 * local_128 +
                    fStack_120 * fVar19 * _DAT_146b31650 + fStack_124 * fVar20 * _DAT_146b31640;
        fStack_164 = fStack_120 * fVar18 * fRam0000000146b31664 + fVar26 * fStack_124 +
                     fStack_11c * fVar19 * fRam0000000146b31654 +
                     local_128 * fVar20 * fRam0000000146b31644;
        fStack_160 = fStack_124 * fVar18 * fRam0000000146b31668 + fVar26 * fStack_120 +
                     local_128 * fVar19 * fRam0000000146b31658 +
                     fStack_11c * fVar20 * fRam0000000146b31648;
        fStack_15c = local_128 * fVar18 * fRam0000000146b3166c + fVar26 * fStack_11c +
                     fStack_124 * fVar19 * fRam0000000146b3165c +
                     fStack_120 * fVar20 * fRam0000000146b3164c;
        puVar9 = (undefined8 *)FQuat::Rotator(&local_168,&local_178);
        local_1d8 = *puVar9;
        local_1d0 = *(float *)(puVar9 + 1);
      }
      local_200 = *(undefined4 *)(param_2 + 0x4c);
      local_1f0 = &local_1d8;
      if (!bVar2) {
        local_1f0 = (undefined8 *)0x0;
      }
      local_1f8 = 0;
      local_208 = param_4;
      cVar3 = FUN_142d042d0(param_1,&local_188,uVar10,&local_1e8);
      if (cVar3 == '\0') goto LAB_142cea546;
    }
    uVar10 = 1;
  }
  return uVar10;
}



// FUNCTION 142cea610 FUN_142cea610 body=225 status=ok
// SIG undefined FUN_142cea610(void)

ulonglong FUN_142cea610(longlong param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  char local_res10 [16];
  undefined8 local_res20;
  
  if (param_2 != (longlong *)0x0) {
    local_res10[0] = '\0';
    lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(lVar2 + 0x790);
    }
    puVar3 = (undefined8 *)0x0;
    if (*(char *)(param_1 + 0x29) != '\x04') {
      puVar3 = (undefined8 *)FUN_142c4ab50(param_1,param_2,param_3,uVar6,local_res10);
    }
    if (local_res10[0] == '\0') {
      bVar1 = FUN_142e434e0(param_1,param_2,param_3);
      if (puVar3 != (undefined8 *)0x0) {
        *(byte *)((longlong)puVar3 + 0xc) = bVar1;
        if (param_3 == 0) {
          local_res20 = 0;
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(param_3 + 0x18);
        }
        *(undefined4 *)(puVar3 + 1) = uVar6;
        *puVar3 = uVar5;
      }
    }
    else {
      bVar1 = *(byte *)((longlong)puVar3 + 0xc);
    }
    FUN_142c487e0(param_1,uVar6);
    return (ulonglong)bVar1;
  }
  uVar4 = FUN_142e434e0();
  return uVar4;
}



// FUNCTION 142cea700 FUN_142cea700 body=343 status=ok
// SIG undefined FUN_142cea700(void)

ulonglong FUN_142cea700(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar5;
  ulonglong uVar4;
  float fVar6;
  float fVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if (param_2 == (longlong *)0x0) {
LAB_142cea7a4:
    lVar2 = 0;
    lVar3 = lVar2;
  }
  else {
    lVar2 = FUN_1428dfc70();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(param_2[2] + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX == '\0') goto LAB_142cea7a4;
    lVar2 = (**(code **)(*param_2 + 0x678))(param_2);
    in_RAX = 0;
    if (lVar2 == 0) goto LAB_142cea7a4;
    lVar3 = AHeoCon::GetPrivateStaticClass();
    uVar5 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      in_RAX = (ulonglong)uVar5 << 8;
    }
    else {
      in_RAX = CONCAT71(uVar5,1);
    }
    if ((char)in_RAX == '\0') goto LAB_142cea7a4;
    lVar3 = *(longlong *)(lVar2 + 0x4c0);
  }
  if (lVar3 == 0) goto switchD_142cea80c_default;
  local_38 = *(undefined4 *)(lVar2 + 0x9e8);
  uStack_34 = *(undefined4 *)(lVar2 + 0x9ec);
  uStack_30 = *(undefined4 *)(lVar2 + 0x9f0);
  uStack_2c = *(undefined4 *)(lVar2 + 0x9f4);
  local_28 = *(undefined8 *)(lVar2 + 0x9f8);
  fVar6 = (float)FUN_142d9ccd0(&local_38,lVar3);
  fVar7 = (float)FUN_142d9ccd0(param_1 + 0x90,lVar3);
  in_RAX = (ulonglong)*(byte *)(param_1 + 0x88);
  switch(in_RAX) {
  case 0:
    uVar4 = (ulonglong)(fVar6 <= fVar7);
    break;
  case 1:
    uVar4 = (ulonglong)(fVar6 < fVar7);
    break;
  case 2:
    if (fVar6 == fVar7) {
      return 1;
    }
  default:
switchD_142cea80c_default:
    uVar4 = in_RAX & 0xffffffffffffff00;
    break;
  case 3:
    if (fVar6 != fVar7) {
      return 1;
    }
    goto switchD_142cea80c_default;
  case 4:
    uVar4 = (ulonglong)(fVar7 < fVar6);
    break;
  case 5:
    uVar4 = (ulonglong)(fVar7 <= fVar6);
  }
  return uVar4;
}



// FUNCTION 142cea870 FUN_142cea870 body=242 status=ok
// SIG undefined FUN_142cea870(void)

bool FUN_142cea870(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_142c98860(param_1 + 0x88);
  fVar2 = (float)FUN_142c98860(param_1 + 200,param_2);
  switch(*(undefined1 *)(param_1 + 0xc0)) {
  case 0:
    if (fVar1 == fVar2) {
      return true;
    }
    break;
  case 1:
    if (fVar1 != fVar2) {
      return true;
    }
    break;
  case 2:
    return fVar1 < fVar2;
  case 3:
    return fVar1 <= fVar2;
  case 4:
    return fVar2 < fVar1;
  case 5:
    return fVar2 <= fVar1;
  }
  return false;
}



// FUNCTION 142cea980 FUN_142cea980 body=328 status=ok
// SIG undefined FUN_142cea980(void)

byte FUN_142cea980(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  cVar1 = *(char *)(param_1 + 0x90);
  if (cVar1 == '\0') {
    if ((*(longlong *)(param_1 + 0x88) != 0) && (cVar1 = FUN_142c48f60(), cVar1 == '\0')) {
      return 0;
    }
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        if (*(longlong *)(param_1 + 0x88) == 0) {
          bVar2 = 1;
        }
        else {
          bVar2 = FUN_142c48f60();
        }
        if (*(longlong *)(param_1 + 0x98) != 0) {
          bVar3 = FUN_142c48f60(*(longlong *)(param_1 + 0x98),param_2,param_3);
          return bVar3 ^ bVar2;
        }
        return bVar2 ^ 1;
      }
      if (cVar1 != '\x03') {
        return 0;
      }
      if (*(longlong *)(param_1 + 0x88) != 0) {
        cVar1 = FUN_142c48f60();
        if (cVar1 != '\0') {
          return 0;
        }
        if (*(longlong *)(param_1 + 0x98) != 0) {
          cVar1 = FUN_142c48f60(*(longlong *)(param_1 + 0x98),param_2,param_3);
          if (cVar1 == '\0') {
            return 1;
          }
          return 0;
        }
        return 0;
      }
      return 0;
    }
    if (*(longlong *)(param_1 + 0x88) == 0) {
      return 1;
    }
    cVar1 = FUN_142c48f60();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if ((*(longlong *)(param_1 + 0x98) != 0) &&
     (cVar1 = FUN_142c48f60(*(longlong *)(param_1 + 0x98),param_2,param_3), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 142ceaad0 FUN_142ceaad0 body=218 status=ok
// SIG undefined FUN_142ceaad0(void)

undefined8 FUN_142ceaad0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar4 = (longlong *)(**(code **)(*param_2 + 0x688))(param_2);
      param_1 = param_1 + 0x88;
      if (((plVar4 == (longlong *)0x0) || (cVar2 = FUN_142def1c0(param_1,plVar4), cVar2 == '\0')) &&
         ((plVar5 = (longlong *)(**(code **)(*param_2 + 0x668))(param_2), plVar5 == (longlong *)0x0
          || (cVar2 = FUN_142def1c0(param_1,plVar5), cVar2 == '\0')))) {
        if (plVar4 == param_2) {
          return 0;
        }
        if (plVar5 == param_2) {
          return 0;
        }
        cVar2 = FUN_142def1c0(param_1,param_2);
        if (cVar2 == '\0') {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142ceabb0 FUN_142ceabb0 body=225 status=ok
// SIG undefined FUN_142ceabb0(void)

ulonglong FUN_142ceabb0(longlong param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  char local_res10 [16];
  undefined8 local_res20;
  
  if (param_2 != (longlong *)0x0) {
    local_res10[0] = '\0';
    lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(lVar2 + 0x790);
    }
    puVar3 = (undefined8 *)0x0;
    if (*(char *)(param_1 + 0x29) != '\x04') {
      puVar3 = (undefined8 *)FUN_142c4ab50(param_1,param_2,param_3,uVar6,local_res10);
    }
    if (local_res10[0] == '\0') {
      bVar1 = FUN_142ceb400(param_1,param_2,param_3);
      if (puVar3 != (undefined8 *)0x0) {
        *(byte *)((longlong)puVar3 + 0xc) = bVar1;
        if (param_3 == 0) {
          local_res20 = 0;
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(param_3 + 0x18);
        }
        *(undefined4 *)(puVar3 + 1) = uVar6;
        *puVar3 = uVar5;
      }
    }
    else {
      bVar1 = *(byte *)((longlong)puVar3 + 0xc);
    }
    FUN_142c487e0(param_1,uVar6);
    return (ulonglong)bVar1;
  }
  uVar4 = FUN_142ceb400();
  return uVar4;
}



// FUNCTION 142ceaca0 FUN_142ceaca0 body=347 status=ok
// SIG undefined FUN_142ceaca0(void)

bool FUN_142ceaca0(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  undefined1 local_38 [16];
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    return false;
  }
  if (param_2 == 0) {
LAB_142cead06:
    param_2 = 0;
  }
  else {
    lVar2 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142cead06;
  }
  if (param_3 != 0) {
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar2 = param_3;
    if (bVar1) goto LAB_142cead4a;
  }
  lVar2 = 0;
LAB_142cead4a:
  if (param_2 != 0) {
    uVar3 = UNavigateHomeCharacterWidget::GetPrivateStaticClass();
    lVar4 = AGameStateBase::OnRep_GameModeClass(param_2,uVar3);
    if (lVar4 != 0) {
      lVar5 = UNavigateHomeCharacterWidget::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((lVar2 == 0) ||
           (local_20 = *(longlong *)(lVar2 + 0x118), *(longlong *)(lVar2 + 0x118) == 0)) {
          local_20 = param_3;
        }
        local_28 = *(undefined8 *)(param_1 + 0x88);
        local_18 = 0;
        piVar6 = (int *)FUN_142dd6dc0(lVar4,local_38,&local_28);
        return 0 < *piVar6;
      }
    }
  }
  return false;
}



// FUNCTION 142ceae00 FUN_142ceae00 body=173 status=ok
// SIG undefined FUN_142ceae00(void)

bool FUN_142ceae00(undefined8 param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined1 local_res18 [16];
  
  if (param_3 == 0) {
    return false;
  }
  if (param_2 != 0) {
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142ceae56;
  }
  param_2 = 0;
LAB_142ceae56:
  lVar2 = FUN_142be3fc0(param_2);
  if (lVar2 != 0) {
    FName::FName(local_res18,L"Target",1);
    lVar2 = FUN_142bbf6c0(lVar2,local_res18);
    if (lVar2 != 0) {
      return lVar2 == param_3;
    }
  }
  return false;
}



// FUNCTION 142ceaeb0 FUN_142ceaeb0 body=237 status=ok
// SIG undefined FUN_142ceaeb0(void)

bool FUN_142ceaeb0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  float extraout_XMM0_Da;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(char *)(param_1 + 0x8c) == '\0') {
        lVar2 = (**(code **)(*param_2 + 0x688))(param_2);
      }
      else {
        lVar2 = param_2[0x23];
      }
      if (lVar2 != 0) {
        uVar3 = UScrollBox::GetPrivateStaticClass();
        lVar2 = AGameStateBase::OnRep_GameModeClass(lVar2,uVar3);
        if (lVar2 != 0) {
          lVar4 = UScrollBox::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            FUN_142d199e0(lVar2);
            return extraout_XMM0_Da < *(float *)(param_1 + 0x88);
          }
        }
      }
    }
  }
  return false;
}



// FUNCTION 142ceafa0 FUN_142ceafa0 body=100 status=ok
// SIG undefined FUN_142ceafa0(void)

bool FUN_142ceafa0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = (**(code **)(*param_2 + 0x670))(param_2);
      return lVar2 != 0;
    }
  }
  return false;
}



// FUNCTION 142ceb010 FUN_142ceb010 body=417 status=ok
// SIG undefined FUN_142ceb010(void)

bool FUN_142ceb010(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  cVar1 = *(char *)(param_1 + 0x88);
  if (cVar1 == '\0') {
    plVar4 = *(longlong **)(param_1 + 0x90);
    plVar6 = plVar4 + *(int *)(param_1 + 0x98);
    if (plVar4 == plVar6) {
      return true;
    }
    while ((*plVar4 == 0 || (cVar1 = FUN_142c48f60(*plVar4,param_2,param_3), cVar1 != '\0'))) {
      plVar4 = plVar4 + 1;
      if (plVar4 == plVar6) {
        return true;
      }
    }
  }
  else if (cVar1 == '\x01') {
    plVar4 = *(longlong **)(param_1 + 0x90);
    plVar6 = plVar4 + *(int *)(param_1 + 0x98);
    for (; plVar4 != plVar6; plVar4 = plVar4 + 1) {
      if ((*plVar4 != 0) && (cVar1 = FUN_142c48f60(*plVar4,param_2,param_3), cVar1 != '\0')) {
        return true;
      }
    }
  }
  else {
    if (cVar1 == '\x02') {
      uVar2 = 0;
      plVar6 = *(longlong **)(param_1 + 0x90);
      uVar7 = (longlong)*(int *)(param_1 + 0x98) & 0x1fffffffffffffff;
      if (plVar6 + *(int *)(param_1 + 0x98) < plVar6) {
        uVar7 = uVar2;
      }
      uVar3 = uVar2;
      uVar5 = uVar2;
      if (uVar7 != 0) {
        do {
          cVar1 = '\0';
          if (*plVar6 != 0) {
            cVar1 = FUN_142c48f60(*plVar6,param_2,param_3);
          }
          uVar2 = uVar3 + 1;
          if (cVar1 == '\0') {
            uVar2 = uVar3;
          }
          plVar6 = plVar6 + 1;
          uVar5 = uVar5 + 1;
          uVar3 = uVar2;
        } while (uVar5 != uVar7);
      }
      return uVar2 == 1;
    }
    if (cVar1 == '\x03') {
      plVar4 = *(longlong **)(param_1 + 0x90);
      plVar6 = plVar4 + *(int *)(param_1 + 0x98);
      while( true ) {
        if (plVar4 == plVar6) {
          return true;
        }
        if ((*plVar4 != 0) && (cVar1 = FUN_142c48f60(*plVar4,param_2,param_3), cVar1 != '\0'))
        break;
        plVar4 = plVar4 + 1;
      }
      return false;
    }
  }
  return false;
}



// FUNCTION 142ceb1c0 FUN_142ceb1c0 body=415 status=ok
// SIG undefined FUN_142ceb1c0(void)

ulonglong FUN_142ceb1c0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  plVar9 = (longlong *)0x0;
  if (param_2 == (longlong *)0x0) {
LAB_142ceb220:
    param_2 = plVar9;
  }
  else {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142ceb220;
  }
  if (param_3 == (longlong *)0x0) {
LAB_142ceb25e:
    param_3 = plVar9;
  }
  else {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142ceb25e;
  }
  plVar6 = plVar9;
  if (param_2 != (longlong *)0x0) {
    uVar5 = UCircularThrobber::GetPrivateStaticClass();
    plVar6 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,uVar5);
    if ((plVar6 == (longlong *)0x0) &&
       (plVar8 = (longlong *)param_2[0x2a], plVar8 != (longlong *)0x0)) {
      uVar5 = UCircularThrobber::GetPrivateStaticClass();
      plVar6 = (longlong *)(**(code **)(*plVar8 + 0x628))(plVar8,uVar5);
    }
  }
  plVar8 = plVar9;
  if (param_3 == (longlong *)0x0) goto LAB_142ceb2fb;
  uVar5 = UCircularThrobber::GetPrivateStaticClass();
  lVar4 = (**(code **)(*param_3 + 0x628))(param_3,uVar5);
  if (lVar4 == 0) {
    plVar1 = (longlong *)param_3[0x2a];
    if (plVar1 == (longlong *)0x0) goto LAB_142ceb2fb;
    uVar5 = UCircularThrobber::GetPrivateStaticClass();
    lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
    if (lVar4 == 0) goto LAB_142ceb2fb;
  }
  plVar8 = *(longlong **)(lVar4 + 0x180);
LAB_142ceb2fb:
  if (plVar6 != (longlong *)0x0) {
    plVar9 = (longlong *)plVar6[0x30];
  }
  iVar3 = FUN_142df3570(plVar9,plVar8);
  if (iVar3 == 0) {
    uVar7 = (ulonglong)(*(byte *)(param_1 + 0x88) >> 2);
  }
  else if (iVar3 == 1) {
    uVar7 = (ulonglong)(*(byte *)(param_1 + 0x88) >> 1);
  }
  else {
    if (iVar3 + -2 != 0) {
      return (ulonglong)(uint3)((uint)(iVar3 + -2) >> 8) << 8;
    }
    uVar7 = (ulonglong)*(byte *)(param_1 + 0x88);
  }
  return uVar7 & 0xffffffffffffff01;
}



// FUNCTION 142ceb360 FUN_142ceb360 body=159 status=ok
// SIG undefined FUN_142ceb360(void)

ulonglong FUN_142ceb360(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((*(longlong *)(param_1 + 0x88) != 0) && (param_2 != 0)) {
    lVar2 = AHeoCon::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      if (*(longlong *)(param_2 + 0x908) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x908) + 0x180);
        return CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar2 == *(longlong *)(param_1 + 0x88));
      }
      return (ulonglong)(*(longlong *)(param_1 + 0x88) == 0);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142ceb400 FUN_142ceb400 body=297 status=ok
// SIG undefined FUN_142ceb400(void)

ulonglong FUN_142ceb400(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong *in_RAX;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  
  if (param_2 != (longlong *)0x0) {
    lVar5 = FUN_1428dfc70();
    iVar3 = *(int *)(lVar5 + 0x90);
    uVar6 = (longlong)iVar3;
    if ((*(int *)(param_2[2] + 0x90) < iVar3) ||
       (uVar6 = *(ulonglong *)(param_2[2] + 0x88),
       *(longlong *)(uVar6 + (longlong)iVar3 * 8) != lVar5 + 0x88)) {
      in_RAX = (longlong *)(uVar6 & 0xffffffffffffff00);
    }
    else {
      in_RAX = (longlong *)CONCAT71((int7)(uVar6 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      plVar7 = (longlong *)(**(code **)(*param_2 + 0x678))(param_2);
      in_RAX = (longlong *)0x0;
      if (plVar7 != (longlong *)0x0) {
        uVar8 = UThrobber::GetPrivateStaticClass();
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
        in_RAX = plVar7;
        if ((plVar7 != (longlong *)0x0) && (iVar3 = *(int *)(param_1 + 0x90), iVar3 != 0)) {
          plVar10 = *(longlong **)(param_1 + 0x88);
          plVar1 = plVar10 + iVar3;
          in_RAX = (longlong *)(longlong)iVar3;
          if (plVar10 != plVar1) {
            plVar4 = (longlong *)plVar7[0x31];
            do {
              if (plVar4 != plVar4 + (int)plVar7[0x32]) {
                in_RAX = plVar4;
                do {
                  if (*in_RAX == *plVar10) goto LAB_142ceb51c;
                  in_RAX = in_RAX + 1;
                } while (in_RAX != plVar4 + (int)plVar7[0x32]);
              }
              puVar9 = (undefined8 *)plVar7[0x33];
              in_RAX = (longlong *)(longlong)(int)plVar7[0x34];
              puVar2 = puVar9 + (longlong)in_RAX;
              if (puVar9 != puVar2) {
                in_RAX = (longlong *)*plVar10;
                do {
                  if ((longlong *)*puVar9 == in_RAX) {
LAB_142ceb51c:
                    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
                  }
                  puVar9 = puVar9 + 1;
                } while (puVar9 != puVar2);
              }
              plVar10 = plVar10 + 1;
            } while (plVar10 != plVar1);
          }
        }
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142ceb550 FUN_142ceb550 body=20 status=ok
// SIG undefined FUN_142ceb550(void)

undefined1 FUN_142ceb550(longlong param_1)

{
  FUN_142ce02f0(param_1 + 8);
  return 1;
}



// FUNCTION 142ceb570 FUN_142ceb570 body=24 status=ok
// SIG undefined FUN_142ceb570(void)

undefined1 FUN_142ceb570(longlong param_1)

{
  FUN_142ce02f0(param_1 + 8,*(undefined1 *)(param_1 + 0x14));
  return 1;
}



// FUNCTION 142ceb590 FUN_142ceb590 body=64 status=ok
// SIG undefined FUN_142ceb590(void)

void FUN_142ceb590(longlong *param_1)

{
  if ((char)param_1[0x83] != '\x02') {
    *(undefined1 *)(param_1 + 0x83) = 2;
    if ((longlong *)param_1[0x80] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x80] + 0x260))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142ceb5c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x478))(param_1);
  return;
}



// FUNCTION 142ceb5d0 FUN_142ceb5d0 body=373 status=ok
// SIG undefined FUN_142ceb5d0(void)

void FUN_142ceb5d0(longlong *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  undefined8 local_res8;
  longlong *local_28;
  int local_20;
  undefined4 local_1c;
  
  (**(code **)(*param_1 + 0x488))();
  pwVar7 = (wchar_t *)0x0;
  if (param_1[0x81] != 0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UPawnAttachSlotComponent::HandleActorDestroyed",L"::")
    ;
    pwVar5 = pwVar7;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar5 = pwVar2;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_1[0x81] + 0x290,param_1,local_res8);
  }
  FUN_142ce61d0(param_1 + 0x80);
  (**(code **)(*param_1 + 0x460))(param_1);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_1c = 0;
  if (param_1[0x81] != 0) {
    FUN_14083bac0(param_1[0x81],&local_28,1);
  }
  plVar3 = local_28;
  pwVar5 = (wchar_t *)((ulonglong)((longlong)(local_28 + local_20) + (7 - (longlong)local_28)) >> 3)
  ;
  if (local_28 + local_20 < local_28) {
    pwVar5 = pwVar7;
  }
  plVar6 = local_28;
  if (pwVar5 != (wchar_t *)0x0) {
    do {
      if ((*plVar6 != 0) && (lVar1 = *(longlong *)(*plVar6 + 0xa48), lVar1 != 0)) {
        *(undefined4 *)(lVar1 + 0x420) = 0;
        if (*(int *)(lVar1 + 0x424) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(lVar1 + 0x418,0);
        }
        *(undefined1 *)(lVar1 + 0x428) = 1;
      }
      pwVar7 = (wchar_t *)((longlong)pwVar7 + 1);
      plVar6 = plVar6 + 1;
    } while (pwVar7 != pwVar5);
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  return;
}



// FUNCTION 142ceb750 FUN_142ceb750 body=1048 status=ok
// SIG undefined FUN_142ceb750(void)

byte * FUN_142ceb750(byte *param_1,longlong *param_2,undefined4 param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  longlong lVar24;
  byte *pbVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 uVar28;
  int iVar29;
  int iVar30;
  longlong lVar31;
  int iVar32;
  int iVar33;
  undefined4 local_res10 [4];
  float local_res20 [2];
  undefined1 local_138 [16];
  longlong *local_128;
  undefined4 local_120;
  undefined1 local_118 [8];
  uint local_110;
  undefined4 uStack_e8;
  undefined8 local_e0;
  float local_d8;
  
  local_128 = param_2;
  local_120 = FUN_142dd0770(param_2);
  FUN_142cdcea0(param_4,&local_128,0);
  if ((int)param_4[1] < 1) {
    param_1[0x68] = 0;
    param_1[0x69] = 0;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    param_1[0x70] = 0;
    param_1[0x71] = 0;
    param_1[0x72] = 0;
    param_1[0x73] = 0;
    param_1[0x78] = 0;
    param_1[0x79] = 0;
    param_1[0x7a] = 0;
    param_1[0x7b] = 0;
    param_1[0x84] = 0;
    param_1[0x85] = 0;
    param_1[0x86] = 0;
    param_1[0x87] = 0;
    param_1[0x8c] = 0;
    param_1[0x8d] = 0;
    param_1[0x8e] = 0;
    param_1[0x8f] = 0;
    _guard_xfg_dispatch_icall_nop(param_1,0,0x90);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0x80;
    param_1[0xf] = 0x3f;
  }
  else {
    FUN_142cdc8a0(*param_4,(longlong)(int)param_4[1],(undefined1)local_res10[0],local_res10);
    (**(code **)(*param_2 + 0x578))(param_2,local_138,local_res20);
    iVar33 = (int)param_4[1];
    iVar30 = 0;
    if (0 < iVar33 + -1) {
      iVar32 = 1;
      lVar31 = 0;
      do {
        lVar24 = *param_4;
        if (*(float *)(lVar24 + 0xb8 + lVar31) - *(float *)(lVar24 + 0x28 + lVar31) <
            local_res20[0] * 2.0) {
          iVar29 = (iVar33 - iVar30) + -1;
          if (iVar29 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar30 * 0x90 + lVar24),
                       (void *)((longlong)iVar32 * 0x90 + lVar24),(longlong)iVar29 * 0x90);
            iVar33 = (int)param_4[1];
          }
          *(int *)(param_4 + 1) = iVar33 + -1;
          TArray<HAPI_ParmInfo,FDefaultAllocator>::ResizeShrink(param_4);
          iVar33 = (int)param_4[1];
          iVar30 = iVar30 + -1;
          iVar32 = iVar32 + -1;
          lVar31 = lVar31 + -0x90;
        }
        iVar30 = iVar30 + 1;
        iVar32 = iVar32 + 1;
        lVar31 = lVar31 + 0x90;
      } while (iVar30 < iVar33 + -1);
    }
    _guard_xfg_dispatch_icall_nop(local_118,0,0x90);
    local_res10[0]._0_1_ = (undefined1)param_3;
    uVar28 = (undefined1)local_res10[0];
    local_res10[0] = param_3;
    FUN_142cdc250(*param_4,(longlong)iVar33,uVar28,local_res10);
    pbVar25 = (byte *)*param_4;
    local_d8 = *(float *)(pbVar25 + 0x40);
    local_e0 = *(undefined8 *)(pbVar25 + 0x38);
    uVar10 = *(uint *)(pbVar25 + 8);
    uVar4 = *(undefined8 *)(pbVar25 + 0x2c);
    fVar11 = *(float *)(pbVar25 + 0x34);
    bVar9 = *pbVar25;
    uVar12 = *(undefined4 *)(pbVar25 + 4);
    uVar1 = *(undefined4 *)(pbVar25 + 0xc);
    uVar2 = *(undefined4 *)(pbVar25 + 0x10);
    uVar5 = *(undefined8 *)(pbVar25 + 0x14);
    uVar13 = *(undefined4 *)(pbVar25 + 0x1c);
    uVar6 = *(undefined8 *)(pbVar25 + 0x20);
    uVar14 = *(undefined4 *)(pbVar25 + 0x28);
    uVar7 = *(undefined8 *)(pbVar25 + 0x44);
    uVar15 = *(undefined4 *)(pbVar25 + 0x4c);
    uVar8 = *(undefined8 *)(pbVar25 + 0x50);
    uVar16 = *(undefined4 *)(pbVar25 + 0x58);
    uVar3 = *(undefined4 *)(pbVar25 + 0x5c);
    uVar17 = *(undefined4 *)(pbVar25 + 0x60);
    uVar18 = *(undefined4 *)(pbVar25 + 100);
    uVar19 = *(undefined4 *)(pbVar25 + 0x68);
    uVar20 = *(undefined4 *)(pbVar25 + 0x6c);
    uVar21 = *(undefined4 *)(pbVar25 + 0x70);
    uVar22 = *(undefined4 *)(pbVar25 + 0x74);
    uVar23 = *(undefined4 *)(pbVar25 + 0x78);
    uVar26 = *(undefined8 *)(pbVar25 + 0x80);
    uVar27 = *(undefined8 *)(pbVar25 + 0x88);
    if (local_d8 < 0.7) {
      if (fVar11 < 0.7) {
        local_e0._0_4_ = (undefined4)DAT_1464aa798;
        local_d8 = DAT_1464aa7a0;
        uStack_e8 = DAT_1464aa798._4_4_;
      }
      else {
        uStack_e8 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_e0._0_4_ = (undefined4)uVar4;
        local_d8 = fVar11;
      }
      local_e0 = CONCAT44(uStack_e8,(undefined4)local_e0);
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | ((uVar10 ^ local_110) & 1 ^ local_110) & 1;
    *param_1 = (bVar9 ^ *param_1) & 2 ^ *param_1 | 1;
    *(undefined8 *)(param_1 + 0x14) = uVar5;
    *(undefined8 *)(param_1 + 0x44) = uVar7;
    *(undefined8 *)(param_1 + 0x50) = uVar8;
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    *(undefined8 *)(param_1 + 0x2c) = uVar4;
    *(undefined8 *)(param_1 + 0x38) = local_e0;
    *(float *)(param_1 + 0x40) = local_d8;
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x4c) = uVar15;
    *(undefined4 *)(param_1 + 0x60) = uVar17;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    *(undefined4 *)(param_1 + 4) = uVar12;
    *(undefined4 *)(param_1 + 0x1c) = uVar13;
    *(undefined4 *)(param_1 + 0x28) = uVar14;
    *(float *)(param_1 + 0x34) = fVar11;
    *(undefined4 *)(param_1 + 0x58) = uVar16;
    *(undefined4 *)(param_1 + 100) = uVar18;
    *(undefined4 *)(param_1 + 0x68) = uVar19;
    *(undefined4 *)(param_1 + 0x6c) = uVar20;
    *(undefined4 *)(param_1 + 0x70) = uVar21;
    *(undefined4 *)(param_1 + 0x74) = uVar22;
    *(undefined4 *)(param_1 + 0x78) = uVar23;
    *(undefined8 *)(param_1 + 0x80) = uVar26;
    *(undefined8 *)(param_1 + 0x88) = uVar27;
  }
  return param_1;
}



// FUNCTION 142cebb70 FindDeltaAngleDegrees body=46 status=ok
// SIG undefined FindDeltaAngleDegrees(void)

float FMath::FindDeltaAngleDegrees(float param_1,float param_2)

{
  param_2 = param_2 - param_1;
  if (180.0 < param_2) {
    return param_2 + -360.0;
  }
  if (param_2 < -180.0) {
    param_2 = param_2 + 360.0;
  }
  return param_2;
}



// FUNCTION 142cebba0 FUN_142cebba0 body=207 status=ok
// SIG undefined FUN_142cebba0(void)

longlong FUN_142cebba0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  local_38 = (**(code **)(*param_1 + 0x148))();
  local_30 = &local_38;
  local_28 = FUN_14073d760(&local_38,DAT_146b31748);
  puVar1 = local_30;
  local_20 = &local_38;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_14073d760(local_30,local_28);
  puVar3 = (undefined8 *)FUN_14073d760(local_20,local_18);
  while( true ) {
    if (puVar2 == puVar3) {
      return 0;
    }
    if (*(longlong **)(puVar2[2] + 0x408) == param_1) break;
    puVar2 = (undefined8 *)FUN_14073d760(puVar1,*puVar2);
  }
  return puVar2[2];
}



// FUNCTION 142cebc70 FUN_142cebc70 body=671 status=ok
// SIG undefined FUN_142cebc70(void)

longlong FUN_142cebc70(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint local_98;
  uint uStack_94;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_70;
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
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  plVar2 = (longlong *)(param_1 + 0x2b0);
  uVar3 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_98 = 0;
  uStack_94 = 1;
  uStack_84 = 0;
  uStack_80 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = *puVar11;
    local_98 = 0;
    uStack_80 = 0;
    while (uVar8 == 0) {
      lVar6 = (longlong)(int)local_98;
      uStack_80 = uStack_80 + 0x20;
      uVar8 = local_98 + 1;
      bVar4 = (int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= (int)local_98;
      local_98 = uVar8;
      if (bVar4) goto LAB_142cebd5e;
      uVar8 = puVar11[lVar6 + 1];
    }
    uStack_94 = uVar8 - 1 & uVar8 ^ uVar8;
    iVar5 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (uStack_80 - iVar5) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_142cebd5e:
      uStack_84 = uVar3;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x2d8);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,uStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar9 = uVar8 & 0xffffffe0;
  uStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar8;
  if (uVar8 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar10 = puVar11[(int)uVar8 >> 5] & -1 << ((byte)uVar8 & 0x1f);
    iVar5 = (int)uVar8 >> 5;
    while (uVar10 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= iVar5) goto LAB_142cebe30;
      uVar10 = puVar11[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar10 = uVar10 - 1 & uVar10 ^ uVar10;
    iVar5 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_142cebe30:
      uStack_84 = uVar3;
    }
  }
  do {
    if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      return 0;
    }
    lVar6 = *(longlong *)(*plVar2 + (longlong)(int)uStack_5c * 0x10);
    if (lVar6 != 0) {
      lVar7 = FUN_142e6b880();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (*(longlong *)(lVar6 + 0x18) == param_2)) {
        return lVar6;
      }
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
  } while( true );
}



// FUNCTION 142cebf10 FUN_142cebf10 body=374 status=ok
// SIG undefined FUN_142cebf10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cebf10(longlong param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_178 [32];
  undefined1 local_158 [24];
  undefined1 local_140 [120];
  undefined1 local_c8 [176];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if (*(char *)(param_1 + 0x1200) != '\0') {
    FUN_142d07960(param_1,*(undefined4 *)(param_1 + 0x1208));
    *(undefined1 *)(param_1 + 0x1200) = 0;
    puVar1 = (undefined4 *)FUN_142cdd1c0(local_158);
    *(undefined4 *)(param_1 + 0x1208) = *puVar1;
    *(undefined4 *)(param_1 + 0x120c) = puVar1[1];
    *(undefined4 *)(param_1 + 0x1210) = puVar1[2];
    *(undefined8 *)(param_1 + 0x1218) = *(undefined8 *)(puVar1 + 4);
    FRichCurve::operator=(param_1 + 0x1220,puVar1 + 6);
    *(undefined8 *)(param_1 + 0x1290) = *(undefined8 *)(puVar1 + 0x22);
    FRichCurve::operator=(param_1 + 0x1298,puVar1 + 0x24);
    *(undefined8 *)(param_1 + 0x1308) = *(undefined8 *)(puVar1 + 0x40);
    *(undefined8 *)(param_1 + 0x1310) = *(undefined8 *)(puVar1 + 0x42);
    *(undefined4 *)(param_1 + 0x1318) = puVar1[0x44];
    *(undefined8 *)(param_1 + 0x131c) = *(undefined8 *)(puVar1 + 0x45);
    *(undefined4 *)(param_1 + 0x1324) = puVar1[0x47];
    *(undefined8 *)(param_1 + 0x1328) = *(undefined8 *)(puVar1 + 0x48);
    *(undefined4 *)(param_1 + 0x1330) = puVar1[0x4a];
    *(undefined8 *)(param_1 + 0x1334) = *(undefined8 *)(puVar1 + 0x4b);
    *(undefined4 *)(param_1 + 0x133c) = puVar1[0x4d];
    FRichCurve::~FRichCurve(local_c8);
    FRichCurve::~FRichCurve(local_140);
  }
  return;
}



// FUNCTION 142cec090 FUN_142cec090 body=116 status=ok
// SIG undefined FUN_142cec090(void)

void FUN_142cec090(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (char)param_1[0x83];
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x83) = 2;
    if ((longlong *)param_1[0x80] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x80] + 0x260))();
    }
    (**(code **)(*param_1 + 0x478))(param_1);
    cVar1 = (char)param_1[0x83];
  }
  if (cVar1 != '\x02') {
    if (cVar1 != '\x03') {
      return;
    }
    FUN_142ceb5d0(param_1);
    return;
  }
  FUN_142cf2c50(param_1,1,0);
  return;
}



// FUNCTION 142cec110 FUN_142cec110 body=55 status=ok
// SIG undefined FUN_142cec110(void)

undefined8 FUN_142cec110(longlong param_1)

{
  char cVar1;
  
  if (((*(uint *)(param_1 + 0x1c0) >> 1 & 1) != 0) && ((*(byte *)(param_1 + 0x200) & 2) != 0)) {
    cVar1 = FUN_1407c3030(param_1 + 0xc40);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cec150 FUN_142cec150 body=76 status=ok
// SIG undefined FUN_142cec150(void)

void FUN_142cec150(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    FUN_1423b4b50(param_2,param_3);
    lVar1 = *param_1;
    uVar2 = FUN_1423ac7e0(param_2);
    (**(code **)(lVar1 + 0xb28))(param_1,uVar2);
  }
  return;
}



// FUNCTION 142cec1a0 FUN_142cec1a0 body=681 status=ok
// SIG undefined FUN_142cec1a0(void)

void FUN_142cec1a0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  void *_Src;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *local_38;
  undefined8 local_30;
  
  uVar6 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_3 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if ((*(int *)((longlong)param_2 + 0xc) < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  lVar2 = *(longlong *)(param_1 + 0x118);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  if (lVar2 != 0) {
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
    }
    *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
    FUN_14222e300(lVar2,&local_38);
    uVar8 = (ulonglong)((longlong)(local_38 + (int)local_30) + (7 - (longlong)local_38)) >> 3;
    if (local_38 + (int)local_30 < local_38) {
      uVar8 = uVar6;
    }
    plVar7 = local_38;
    if (uVar8 != 0) {
      do {
        plVar3 = (longlong *)*param_3;
        iVar1 = (int)param_3[1];
        lVar4 = *plVar7;
        for (plVar5 = plVar3; plVar5 != plVar3 + iVar1; plVar5 = plVar5 + 1) {
          if (*plVar5 == lVar4) {
            if ((int)((longlong)plVar5 - (longlong)plVar3 >> 3) != -1) goto LAB_142cec2da;
            break;
          }
        }
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
        }
        *(longlong *)((longlong)iVar1 * 8 + *param_3) = lVar4;
LAB_142cec2da:
        plVar7 = plVar7 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar8);
    }
    uVar6 = 0;
    lVar2 = *(longlong *)(lVar2 + 0x118);
    if (lVar2 != 0) {
      iVar1 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
      }
      *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
      FUN_14222e300(lVar2,&local_38);
      uVar8 = (ulonglong)((longlong)(local_38 + (int)local_30) + (7 - (longlong)local_38)) >> 3;
      if (local_38 + (int)local_30 < local_38) {
        uVar8 = uVar6;
      }
      plVar7 = local_38;
      if (uVar8 != 0) {
        do {
          plVar3 = (longlong *)*param_3;
          iVar1 = (int)param_3[1];
          lVar2 = *plVar7;
          for (plVar5 = plVar3; plVar5 != plVar3 + iVar1; plVar5 = plVar5 + 1) {
            if (*plVar5 == lVar2) {
              if ((int)((longlong)plVar5 - (longlong)plVar3 >> 3) != -1) goto LAB_142cec3ba;
              break;
            }
          }
          *(int *)(param_3 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
          }
          *(longlong *)((longlong)iVar1 * 8 + *param_3) = lVar2;
LAB_142cec3ba:
          uVar6 = uVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (uVar6 != uVar8);
      }
    }
  }
  if (param_2 != param_3) {
    iVar1 = (int)param_3[1];
    _Src = (void *)*param_3;
    *(int *)(param_2 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1);
      _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 3);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}



// FUNCTION 142cec450 FUN_142cec450 body=168 status=ok
// SIG undefined FUN_142cec450(void)

undefined8 * FUN_142cec450(longlong param_1,undefined8 *param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  float local_18;
  float local_14;
  float local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x1358);
  fVar2 = param_3[2];
  *param_2 = *(undefined8 *)param_3;
  *(float *)(param_2 + 1) = fVar2;
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x1360) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x1360) + 0x10))
              (*(longlong **)(param_1 + 0x1360),&local_18);
    fVar2 = local_14 * param_3[1] + local_18 * *param_3 + local_10 * param_3[2];
    *param_2 = CONCAT44(local_14 * fVar2,local_18 * fVar2);
    *(float *)(param_2 + 1) = local_10 * fVar2;
  }
  return param_2;
}



// FUNCTION 142cec500 FUN_142cec500 body=399 status=ok
// SIG undefined FUN_142cec500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142cec500(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_28 [2];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  fVar10 = DAT_1468b5da8;
  local_28[0] = DAT_1468b5da0;
  lVar1 = *(longlong *)(param_1 + 0xfd8);
  *param_2 = DAT_1468b5da0;
  *(float *)(param_2 + 1) = fVar10;
  if (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x168);
    if (lVar1 == 0) {
    }
    else {
      local_18 = *(float *)(lVar1 + 0x210);
      fStack_14 = *(float *)(lVar1 + 0x214);
      fStack_10 = *(float *)(lVar1 + 0x218);
      fStack_c = *(float *)(lVar1 + 0x21c);
      auVar9._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_14);
      auVar9._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_18);
      auVar9._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_10);
      auVar9._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_c);
      iVar6 = movmskps(fVar10,auVar9);
      if (iVar6 != 0) {
        *(float *)(lVar1 + 0x250) = local_18;
        *(float *)(lVar1 + 0x254) = fStack_14;
        *(float *)(lVar1 + 600) = fStack_10;
        *(float *)(lVar1 + 0x25c) = fStack_c;
        puVar7 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
        *(undefined8 *)(lVar1 + 0x260) = *puVar7;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar7 + 1);
      }
      local_28[0] = *(undefined8 *)(lVar1 + 0x260);
      fVar10 = *(float *)(lVar1 + 0x268);
    }
    fVar12 = *(float *)(param_1 + 0x13d8) * 57.295776 - (float)local_28[0];
    fVar3 = (float)DAT_146b315f0;
    fVar4 = DAT_146b315f0._4_4_;
    fVar5 = DAT_146b315f0._8_4_;
    fVar11 = *(float *)(param_1 + 0x13d4) * 57.295776 - (float)((ulonglong)local_28[0] >> 0x20);
    auVar8._4_4_ = fVar11;
    auVar8._0_4_ = fVar12;
    auVar8._8_4_ = -fVar10;
    auVar8._12_4_ = 0;
    auVar9 = divps(auVar8,_DAT_146b315f0);
    fVar12 = fVar12 - (float)(int)auVar9._0_4_ * fVar3;
    fVar11 = fVar11 - (float)(int)auVar9._4_4_ * fVar4;
    fVar13 = -fVar10 - (float)(int)auVar9._8_4_ * fVar5;
    fVar10 = (float)(((uint)(fVar12 + fVar3) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                    (uint)(fVar12 + fVar3));
    fVar11 = (float)(((uint)(fVar11 + fVar4) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                    (uint)(fVar11 + fVar4));
    fVar12 = (float)(((uint)(fVar13 + fVar5) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                    (uint)(fVar13 + fVar5));
    bVar2 = fRam0000000146b315e8 < fVar12;
    *param_2 = CONCAT44(((uint)(fVar11 - fVar4) ^ (uint)fVar11) &
                        -(uint)(fRam0000000146b315e4 < fVar11) ^ (uint)fVar11,
                        ((uint)(fVar10 - fVar3) ^ (uint)fVar10) & -(uint)(_DAT_146b315e0 < fVar10) ^
                        (uint)fVar10);
    *(uint *)(param_2 + 1) = ((uint)(fVar12 - fVar5) ^ (uint)fVar12) & -(uint)bVar2 ^ (uint)fVar12;
  }
  return param_2;
}



// FUNCTION 142cec690 FUN_142cec690 body=122 status=ok
// SIG undefined FUN_142cec690(void)

float * FUN_142cec690(longlong *param_1,float *param_2,undefined4 param_3,float param_4,
                     float *param_5)

{
  float fVar1;
  float fVar2;
  
  if ((param_1[0x2ef] != 0) && ((char)param_1[0x30f] != '\0')) {
    param_4 = *(float *)((longlong)param_1 + 0x1874);
  }
  if (param_4 != 0.0) {
    param_4 = (float)(**(code **)(*param_1 + 0x728))(0,param_3,param_4,param_5);
  }
  fVar1 = param_5[1];
  fVar2 = param_5[2];
  *param_2 = param_4 * *param_5;
  param_2[1] = param_4 * fVar1;
  param_2[2] = param_4 * fVar2;
  return param_2;
}



// FUNCTION 142cec710 FUN_142cec710 body=377 status=ok
// SIG undefined FUN_142cec710(void)

void FUN_142cec710(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xd0);
  lVar1 = (longlong)*(int *)(param_1 + 0xd8) * 0x78 + lVar2;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x78) {
    FUN_142c66a00(lVar2,param_2);
  }
  lVar2 = *(longlong *)(param_1 + 0xe0);
  lVar1 = (longlong)*(int *)(param_1 + 0xe8) * 0x78 + lVar2;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x78) {
    FUN_142c66a00(lVar2,param_2);
  }
  lVar2 = *(longlong *)(param_1 + 0xf0);
  lVar1 = (longlong)*(int *)(param_1 + 0xf8) * 0x78 + lVar2;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x78) {
    FUN_142c66a00(lVar2,param_2);
  }
  lVar2 = *(longlong *)(param_1 + 0x100);
  lVar1 = (longlong)*(int *)(param_1 + 0x108) * 0x78 + lVar2;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x78) {
    FUN_142c66a00(lVar2,param_2);
  }
  lVar2 = *(longlong *)(param_1 + 0x110);
  lVar1 = (longlong)*(int *)(param_1 + 0x118) * 0x78 + lVar2;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x78) {
    FUN_142c66a00(lVar2,param_2);
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  lVar1 = (longlong)*(int *)(param_1 + 0x128) * 0x78 + lVar2;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x78) {
    FUN_142c66a00(lVar2,param_2);
  }
  lVar2 = *(longlong *)(param_1 + 0x130);
  lVar1 = (longlong)*(int *)(param_1 + 0x138) * 0x78 + lVar2;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x78) {
    FUN_142c66a00(lVar2,param_2);
  }
  return;
}



// FUNCTION 142cec890 FUN_142cec890 body=176 status=ok
// SIG undefined FUN_142cec890(void)

undefined8 * FUN_142cec890(longlong param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  
  if (param_3 != '\x01') {
    if (param_3 == '\x02') {
      *param_2 = *(undefined8 *)(param_1 + 0x1170);
      return param_2;
    }
    if (param_3 == '\x03') {
      *param_2 = *(undefined8 *)(param_1 + 0x1178);
      return param_2;
    }
    if (param_3 == '\x04') {
      *param_2 = *(undefined8 *)(param_1 + 0x1180);
      return param_2;
    }
LAB_142cec8b8:
    *param_2 = 0;
    return param_2;
  }
  if ((*(byte *)(param_1 + 0x137c) & 4) == 0) {
    iVar1 = FUN_14233f450();
    if (1 < iVar1) goto LAB_142cec8b8;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x1168);
  return param_2;
}



// FUNCTION 142cec940 FUN_142cec940 body=257 status=ok
// SIG undefined FUN_142cec940(void)

longlong FUN_142cec940(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  while( true ) {
    switch(param_2) {
    case '\x01':
      lVar5 = 0xd0;
      break;
    case '\x02':
      lVar5 = 0xe0;
      break;
    case '\x03':
      lVar5 = 0xf0;
      break;
    case '\x04':
      lVar5 = 0x100;
      break;
    case '\x05':
      lVar5 = 0x110;
      break;
    case '\x06':
      lVar5 = 0x120;
      break;
    case '\a':
      lVar5 = 0x130;
      break;
    default:
      return 0;
    }
    plVar1 = (longlong *)(param_1 + lVar5);
    if (plVar1 == (longlong *)0x0) break;
    iVar2 = (int)plVar1[1];
    if (iVar2 != 0) {
      if (0 < iVar2) {
        iVar3 = rand();
        iVar4 = (int)((float)iVar3 * 3.051851e-05 * (float)iVar2);
        iVar3 = iVar2 + -1;
        if (iVar4 <= iVar2 + -1) {
          iVar3 = iVar4;
        }
        return (longlong)iVar3 * 0x78 + *plVar1;
      }
      return *plVar1;
    }
    if (param_2 == '\x06') {
      param_2 = '\x05';
    }
    else {
      if (param_2 != '\a') {
        return 0;
      }
      param_2 = '\x03';
    }
  }
  return 0;
}



// FUNCTION 142ceca60 FUN_142ceca60 body=36 status=ok
// SIG undefined FUN_142ceca60(void)

longlong FUN_142ceca60(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (((param_2 == '\0') || (*(longlong *)(param_1 + 0x118) == 0)) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x118), lVar1 == 0)) {
    lVar1 = *(longlong *)(param_1 + 0x118);
  }
  return lVar1;
}



// FUNCTION 142ceca90 FUN_142ceca90 body=523 status=ok
// SIG undefined FUN_142ceca90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142ceca90(longlong param_1,float *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_e8 [32];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined1 local_98 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  if ((*(char *)(param_1 + 0x1c) != '\0') && (param_4 != 0)) {
    plVar1 = (longlong *)FUN_14222b250(param_4,*(undefined8 *)(param_1 + 8),0);
    plVar2 = (longlong *)FUN_14222b250(param_4,*(undefined8 *)(param_1 + 0x20),0);
    if ((plVar2 != (longlong *)0x0) && (plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x420))(plVar1,&local_c8,*(undefined8 *)(param_1 + 8),0);
      (**(code **)(*plVar2 + 0x420))(plVar2,local_98,*(undefined8 *)(param_1 + 0x20),0);
      local_c8 = local_c8 * _DAT_146b316e0;
      fStack_c4 = fStack_c4 * fRam0000000146b316e4;
      fStack_c0 = fStack_c0 * fRam0000000146b316e8;
      fStack_bc = fStack_bc * fRam0000000146b316ec;
      fVar7 = (float)((uint)(local_88 - local_b8) & _DAT_146b31630);
      fVar8 = (float)((uint)(fStack_84 - fStack_b4) & uRam0000000146b31634);
      fVar6 = (float)((uint)(fStack_80 - fStack_b0) & uRam0000000146b31638);
      fVar9 = fVar6 * fStack_c4 - fVar8 * fStack_c0;
      fVar4 = fVar7 * fStack_c0 - fVar6 * local_c8;
      fVar5 = fVar8 * local_c8 - fVar7 * fStack_c4;
      fVar9 = fVar9 + fVar9;
      fVar4 = fVar4 + fVar4;
      fVar5 = fVar5 + fVar5;
      fVar7 = (fVar5 * fStack_c4 - fVar4 * fStack_c0) + fStack_bc * fVar9 + fVar7;
      fVar8 = (fVar9 * fStack_c0 - fVar5 * local_c8) + fStack_bc * fVar4 + fVar8;
      fVar9 = (fVar4 * local_c8 - fVar9 * fStack_c4) + fStack_bc * fVar5 + fVar6;
    }
  }
  if (((*(char *)(param_1 + 2) == '\0') ||
      (lVar3 = (**(code **)(*param_3 + 0x678))(param_3), lVar3 == 0)) ||
     (lVar3 = *(longlong *)(lVar3 + 0x4c0), lVar3 == 0)) {
    fVar9 = fVar9 + *(float *)(param_1 + 0x18);
    fVar8 = fVar8 + *(float *)(param_1 + 0x14);
    fVar7 = fVar7 + *(float *)(param_1 + 0x10);
  }
  else {
    fVar9 = (fVar9 + *(float *)(param_1 + 0x18)) - *(float *)(lVar3 + 500);
    fVar8 = (fVar8 + *(float *)(param_1 + 0x14)) - *(float *)(lVar3 + 0x1f0);
    fVar7 = (fVar7 + *(float *)(param_1 + 0x10)) - *(float *)(lVar3 + 0x1ec);
  }
  param_2[2] = fVar9;
  param_2[1] = fVar8;
  *param_2 = fVar7;
  return param_2;
}



// FUNCTION 142cecca0 FUN_142cecca0 body=224 status=ok
// SIG undefined FUN_142cecca0(void)

ulonglong FUN_142cecca0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((((char)param_1[0x49] == '\x06') && (*(char *)((longlong)param_1 + 0x249) == '\0')) &&
     (param_1[0x2f] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000142cecccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*param_1 + 0xb48))();
    return uVar3;
  }
  switch((char)param_1[0x49]) {
  case '\x01':
  case '\x02':
    cVar1 = (**(code **)(*param_1 + 0x550))(param_1);
    lVar2 = 0x278;
    if (cVar1 != '\0') {
      lVar2 = 0x284;
    }
    return (ulonglong)*(uint *)(lVar2 + (longlong)param_1);
  case '\x03':
    return (ulonglong)*(uint *)(param_1 + 0x4f);
  case '\x04':
    return (ulonglong)*(uint *)(param_1 + 0x52);
  case '\x05':
    break;
  case '\x06':
    return (ulonglong)*(uint *)(param_1 + 0x55);
  default:
    return 0;
  }
  if ((param_1[0x2ef] != 0) && (*(char *)(param_1[0x2ef] + 0x68) == '\x01')) {
    return (ulonglong)*(uint *)(param_1 + 0x2f1);
  }
  return (ulonglong)*(uint *)((longlong)param_1 + 0x29c);
}



// FUNCTION 142cecda0 FUN_142cecda0 body=382 status=ok
// SIG undefined FUN_142cecda0(void)

undefined8 * FUN_142cecda0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  if ((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_20 = *(longlong **)(param_1 + 0x38);
      local_28 = 0;
      if (local_20 == (longlong *)0x0) {
LAB_142cece3d:
        puVar8 = &local_28;
        bVar3 = true;
        bVar9 = false;
        uVar7 = local_28;
      }
      else {
        LOCK();
        iVar6 = (int)local_20[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_20 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_20[1];
          if (bVar9) {
            *(int *)(local_20 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_20 != (longlong *)0x0) {
              local_28 = *(undefined8 *)(param_1 + 0x30);
            }
            goto LAB_142cece3d;
          }
          LOCK();
          iVar6 = (int)local_20[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_20 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        puVar8 = &local_28;
        local_20 = (longlong *)0x0;
        bVar3 = true;
        bVar9 = false;
        uVar7 = 0;
      }
      goto LAB_142cece64;
    }
  }
  puVar8 = &local_18;
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  bVar3 = false;
  bVar9 = true;
  uVar7 = 0;
LAB_142cece64:
  *param_2 = uVar7;
  uVar7 = puVar8[1];
  puVar8[1] = 0;
  param_2[1] = uVar7;
  *puVar8 = 0;
  plVar5 = plStack_10;
  if ((bVar9) && (plStack_10 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_10 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_10 + 8))(plStack_10,1);
      }
    }
  }
  plVar5 = local_20;
  if ((bVar3) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142cecf20 FUN_142cecf20 body=91 status=ok
// SIG undefined FUN_142cecf20(void)

float FUN_142cecf20(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(longlong *)(param_1 + 0xfd8) == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)FUN_14256bd80(*(longlong *)(param_1 + 0xfd8) + 0xbe0);
    if (fVar1 < 0.0) {
      fVar1 = *(float *)(param_1 + 0x146c);
      if (*(float *)(param_1 + 0x146c) <= *(float *)(param_1 + 0x1468)) {
        fVar1 = *(float *)(param_1 + 0x1468);
      }
      return fVar1;
    }
  }
  fVar2 = *(float *)(param_1 + 0x146c);
  if (*(float *)(param_1 + 0x146c) <= fVar1) {
    fVar2 = fVar1;
  }
  return fVar2;
}



// FUNCTION 142cecf80 FUN_142cecf80 body=31 status=ok
// SIG undefined FUN_142cecf80(void)

byte FUN_142cecf80(longlong param_1)

{
  byte bVar1;
  
  bVar1 = FSavedMove_Character::GetCompressedFlags();
  if ((*(byte *)(param_1 + 0x330) & 4) != 0) {
    bVar1 = bVar1 | 0x10;
  }
  return bVar1;
}



// FUNCTION 142cecfa0 FUN_142cecfa0 body=52 status=ok
// SIG undefined FUN_142cecfa0(void)

ulonglong FUN_142cecfa0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ulonglong in_RAX;
  
  if (((*(longlong *)(param_1 + 0x1778) != 0) && ((*(byte *)(param_1 + 0x18cc) & 2) == 0)) &&
     (*(longlong *)(param_1 + 0x178) != 0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x17c0);
    uVar1 = *(undefined4 *)(param_1 + 0x17bc);
    *param_3 = uVar1;
    return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142cecfe0 FUN_142cecfe0 body=69 status=ok
// SIG undefined FUN_142cecfe0(void)

undefined1 FUN_142cecfe0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x1778) != 0) && ((*(byte *)(param_1 + 0x18cc) & 2) == 0)) &&
     (*(longlong *)(param_1 + 0x178) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x18e8);
    *param_2 = *(undefined8 *)(param_1 + 0x18e0);
    param_2[1] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x18f8);
    param_2[2] = *(undefined8 *)(param_1 + 0x18f0);
    param_2[3] = uVar1;
    param_2[4] = *(undefined8 *)(param_1 + 0x1900);
    return 1;
  }
  return 0;
}



// FUNCTION 142ced030 FUN_142ced030 body=336 status=ok
// SIG undefined FUN_142ced030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142ced030(longlong param_1,undefined8 *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined4 uVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 uVar7;
  float local_38;
  float local_34;
  float local_30;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  uVar4 = DAT_1468b5d98;
  uVar7 = _DAT_1468b5d90;
  lVar3 = *(longlong *)(param_1 + 0xfd8);
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = uVar4;
  if (lVar3 != 0) {
    if (param_3 == '\0') {
      FUN_142ced280(uVar7,local_28,0);
      FUN_142ced180(param_1,&local_38,0);
      pfVar5 = (float *)FRotator::Vector(local_28,local_18);
      fVar1 = pfVar5[2];
      *param_2 = CONCAT44(pfVar5[1] * 10000.0 + local_34,*pfVar5 * 10000.0 + local_38);
      *(float *)(param_2 + 1) = fVar1 * 10000.0 + local_30;
      return param_2;
    }
    if (param_3 == '\x01') {
      pfVar5 = (float *)FUN_142d08040(param_1 + 0x13d0,local_28);
      uVar7 = 1;
    }
    else {
      if (param_3 != '\x02') {
        return param_2;
      }
      pfVar5 = (float *)FUN_142d08040(param_1 + 0x13dc,local_28);
      uVar7 = 2;
    }
    pfVar6 = (float *)FUN_142ced180(param_1,&local_38,uVar7);
    fVar1 = pfVar5[2];
    fVar2 = pfVar6[2];
    *param_2 = CONCAT44(pfVar5[1] + pfVar6[1],*pfVar5 + *pfVar6);
    *(float *)(param_2 + 1) = fVar1 + fVar2;
  }
  return param_2;
}



// FUNCTION 142ced180 FUN_142ced180 body=250 status=ok
// SIG undefined FUN_142ced180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142ced180(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_1468b5d98;
  plVar1 = *(longlong **)(param_1 + 0xfd8);
  if (plVar1 != (longlong *)0x0) {
    if (param_3 == '\0') {
      lVar2 = plVar1[0x2d];
      if (lVar2 != 0) {
        uVar3 = *(undefined4 *)(lVar2 + 0x228);
        *param_2 = *(undefined8 *)(lVar2 + 0x220);
        *(undefined4 *)(param_2 + 1) = uVar3;
        return param_2;
      }
      *param_2 = _DAT_1468b5d90;
      *(undefined4 *)(param_2 + 1) = uVar3;
      return param_2;
    }
    if (param_3 == '\x01') {
      FUN_142cc0b00(plVar1,param_2);
      return param_2;
    }
    if (param_3 == '\x02') {
      (**(code **)(*plVar1 + 0x790))(plVar1,param_2);
      return param_2;
    }
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  return param_2;
}



// FUNCTION 142ced280 FUN_142ced280 body=372 status=ok
// SIG undefined FUN_142ced280(void)

undefined8 * FUN_142ced280(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_28;
  undefined4 local_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_20 = DAT_1468b5da8;
  local_28 = DAT_1468b5da0;
  lVar1 = *(longlong *)(param_1 + 0xfd8);
  *param_2 = DAT_1468b5da0;
  *(undefined4 *)(param_2 + 1) = local_20;
  if (lVar1 != 0) {
    if (param_3 == '\0') {
      lVar1 = *(longlong *)(lVar1 + 0x168);
      if (lVar1 == 0) {
      }
      else {
        local_18 = *(float *)(lVar1 + 0x210);
        fStack_14 = *(float *)(lVar1 + 0x214);
        fStack_10 = *(float *)(lVar1 + 0x218);
        fStack_c = *(float *)(lVar1 + 0x21c);
        auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_14);
        auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_18);
        auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_10);
        auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_c);
        iVar3 = movmskps(in_EAX,auVar2);
        if (iVar3 != 0) {
          *(float *)(lVar1 + 0x250) = local_18;
          *(float *)(lVar1 + 0x254) = fStack_14;
          *(float *)(lVar1 + 600) = fStack_10;
          *(float *)(lVar1 + 0x25c) = fStack_c;
          puVar4 = (undefined8 *)FQuat::Rotator(&local_18,&local_28);
          *(undefined8 *)(lVar1 + 0x260) = *puVar4;
          *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar4 + 1);
        }
        local_28 = *(undefined8 *)(lVar1 + 0x260);
        local_20 = *(undefined4 *)(lVar1 + 0x268);
      }
      *param_2 = local_28;
      *(undefined4 *)(param_2 + 1) = local_20;
    }
    else {
      if (param_3 == '\x01') {
        *param_2 = CONCAT44(*(float *)(param_1 + 0x13d4) * 57.295776,
                            *(float *)(param_1 + 0x13d8) * 57.295776);
        *(undefined4 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (param_3 == '\x02') {
        *param_2 = CONCAT44(*(float *)(param_1 + 0x13e0) * 57.295776,
                            *(float *)(param_1 + 0x13e4) * 57.295776);
        *(undefined4 *)(param_2 + 1) = 0;
        return param_2;
      }
    }
  }
  return param_2;
}



// FUNCTION 142ced400 FUN_142ced400 body=127 status=ok
// SIG undefined FUN_142ced400(void)

float * FUN_142ced400(longlong param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  undefined1 local_28 [12];
  undefined1 local_1c [20];
  
  *param_3 = *(undefined4 *)(param_1 + 0x13ec);
  pfVar5 = (float *)FUN_142d08040(param_1 + 0x13dc,local_28);
  pfVar6 = (float *)FUN_142ced180(param_1,local_1c,2);
  fVar1 = pfVar5[1];
  fVar2 = pfVar6[1];
  *param_2 = *pfVar5 + *pfVar6;
  fVar3 = pfVar5[2];
  fVar4 = pfVar6[2];
  param_2[1] = fVar1 + fVar2;
  param_2[2] = fVar3 + fVar4;
  return param_2;
}



// FUNCTION 142ced480 FUN_142ced480 body=49 status=ok
// SIG undefined FUN_142ced480(void)

undefined8 * FUN_142ced480(longlong param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 0x111c) != '\0') {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
  FUN_14233cd50();
  return param_2;
}



// FUNCTION 142ced4c0 FUN_142ced4c0 body=99 status=ok
// SIG undefined FUN_142ced4c0(void)

undefined8 FUN_142ced4c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_1407c3030(param_1 + 0xa78);
  if (cVar2 != '\0') {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0xfd8);
  cVar2 = '\0';
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0xce8) != '\0') {
      cVar2 = FUN_142cc5d20();
      goto LAB_142ced508;
    }
    cVar2 = FUN_142cc1640(lVar1 + 0xbe0,2);
  }
  cVar2 = cVar2 != '\0';
LAB_142ced508:
  if (cVar2 == '\0') {
    return 0;
  }
  return 0x3f800000;
}



// FUNCTION 142ced540 FUN_142ced540 body=153 status=ok
// SIG undefined FUN_142ced540(void)

float FUN_142ced540(longlong *param_1,longlong param_2,float param_3)

{
  char cVar1;
  char cVar2;
  float fVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x560))();
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x28) & 0x80) != 0)) {
    if ((cVar1 == '\0') && (cVar2 = (**(code **)(*param_1 + 0x558))(param_1), cVar2 == '\0')) {
      return param_3;
    }
    param_3 = param_3 * *(float *)(param_1 + 0x226);
  }
  if ((cVar1 != '\0') && (fVar3 = (float)FUN_14247f5a0((longlong)param_1 + 0x274), 0.0 < fVar3)) {
    fVar3 = *(float *)(param_1 + 0x4f) / fVar3;
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    param_3 = param_3 * fVar3;
  }
  return param_3;
}



// FUNCTION 142ced5e0 FUN_142ced5e0 body=364 status=ok
// SIG undefined FUN_142ced5e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_142ced5e0(longlong param_1,undefined1 *param_2,char param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  
  uVar2 = DAT_1468b5d98;
  uVar1 = _DAT_1468b5d90;
  if (*(longlong *)(param_1 + 0xfd8) == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 4) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x14) = 0;
    *(undefined8 *)(param_2 + 0x2c) = uVar1;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0x34) = uVar2;
    param_2[0x38] = 0;
    return param_2;
  }
  if ((param_3 == '\0') && (*(longlong **)(param_1 + 0x20f8) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x20f8) + 0x3f8))();
    uVar2 = DAT_1468b5d98;
    uVar1 = _DAT_1468b5d90;
    if (cVar3 != '\0') {
      *param_2 = 9;
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined4 *)(param_2 + 4) = 0xffffffff;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x14) = 0;
      *(undefined8 *)(param_2 + 0x2c) = uVar1;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      *(undefined4 *)(param_2 + 0x34) = uVar2;
      param_2[0x38] = 0;
      return param_2;
    }
  }
  FUN_142cc15c0(*(longlong *)(param_1 + 0xfd8) + 0xbe0,param_2,param_3);
  return param_2;
}



// FUNCTION 142ced750 FUN_142ced750 body=245 status=ok
// SIG undefined FUN_142ced750(void)

float FUN_142ced750(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = (float)FUN_14233e600();
  lVar3 = *(longlong *)(param_1 + 0x1778);
  if (((lVar3 != 0) && ((*(byte *)(param_1 + 0x18cc) & 2) == 0)) &&
     (*(longlong *)(param_1 + 0x178) != 0)) {
    cVar1 = *(char *)(lVar3 + 0x408);
    if (cVar1 == '\0') {
      fVar5 = fVar5 * *(float *)(param_1 + 0x186c);
    }
    else if (cVar1 == '\x01') {
      plVar4 = (longlong *)UAudioSettings::GetPrivateStaticClass();
      lVar3 = plVar4[0x1f];
      if (lVar3 == 0) {
        (**(code **)(*plVar4 + 0x368))(plVar4);
        lVar3 = plVar4[0x1f];
      }
      fVar5 = *(float *)(param_1 + 0x186c) * *(float *)(lVar3 + 0x38);
      lVar3 = *(longlong *)(param_1 + 0x1778);
    }
    else if (cVar1 == '\x02') {
      fVar5 = *(float *)(param_1 + 0x186c);
    }
    plVar4 = (longlong *)FRuntimeFloatCurve::GetRichCurve(lVar3 + 0x410);
    iVar2 = (**(code **)(*plVar4 + 8))(plVar4);
    if (0 < iVar2) {
      fVar6 = (float)FRichCurve::Eval(plVar4,*(undefined4 *)(param_1 + 0x17c0),0x3f800000);
      fVar5 = fVar5 * fVar6;
    }
  }
  return fVar5;
}



// FUNCTION 142ced850 FUN_142ced850 body=9 status=ok
// SIG undefined FUN_142ced850(void)

undefined4 FUN_142ced850(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x238);
}



// FUNCTION 142ced880 FUN_142ced880 body=2176 status=ok
// SIG undefined FUN_142ced880(void)

void FUN_142ced880(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_14233ead0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b317a0) && (_Init_thread_header(&DAT_146b317a0), DAT_146b317a0 == -1)) {
    uVar1 = FUN_142e39920();
    FUN_142e39920();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MaxGroundSpeedScale",1);
    DAT_146b31798 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b317a0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b31798 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b31798 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b31798 + 0x30));
  }
  if ((*piVar5 < DAT_146b317b0) && (_Init_thread_header(&DAT_146b317b0), DAT_146b317b0 == -1)) {
    uVar1 = FUN_142e39920();
    FUN_142e39920();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MaxLadderAscendSpeed",1);
    DAT_146b317a8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b317b0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b317a8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b317a8 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b317a8 + 0x30));
  }
  if ((*piVar5 < DAT_146b317c0) && (_Init_thread_header(&DAT_146b317c0), DAT_146b317c0 == -1)) {
    uVar1 = FUN_142e39920();
    FUN_142e39920();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MaxLadderDescendSpeed",1);
    DAT_146b317b8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b317c0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b317b8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b317b8 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b317b8 + 0x30));
  }
  if ((*piVar5 < DAT_146b317d0) && (_Init_thread_header(&DAT_146b317d0), DAT_146b317d0 == -1)) {
    uVar1 = FUN_142e39920();
    FUN_142e39920();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RotationRateYaw",1);
    DAT_146b317c8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b317d0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b317c8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b317c8 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b317c8 + 0x30));
  }
  if ((*piVar5 < DAT_146b317e0) && (_Init_thread_header(&DAT_146b317e0), DAT_146b317e0 == -1)) {
    uVar1 = FUN_142e39920();
    FUN_142e39920();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"IdleRotationRateYaw",1);
    DAT_146b317d8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b317e0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b317d8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b317d8 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b317d8 + 0x30));
  }
  if ((*piVar5 < DAT_146b317f0) && (_Init_thread_header(&DAT_146b317f0), DAT_146b317f0 == -1)) {
    uVar1 = FUN_142e39920();
    FUN_142e39920();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MaxAllowedAimOffset",1);
    DAT_146b317e8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b317f0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b317e8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b317e8 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b317e8 + 0x30));
  }
  if ((*piVar5 < DAT_146b31800) && (_Init_thread_header(&DAT_146b31800), DAT_146b31800 == -1)) {
    uVar1 = FUN_142e39920();
    FUN_142e39920();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedMantleState",1);
    DAT_146b317f8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b31800);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b317f8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b317f8 + 0x40) + (short)iVar3;
      local_24 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b317f8 + 0x30));
  }
  if ((*piVar5 < DAT_146b31810) && (_Init_thread_header(&DAT_146b31810), DAT_146b31810 == -1)) {
    uVar1 = FUN_142e39920();
    FUN_142e39920();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedLadderState",1);
    DAT_146b31808 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b31810);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b31808 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b31808 + 0x40) + (short)iVar3;
      local_24 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b31808 + 0x30));
  }
  if ((*piVar5 < DAT_146b31820) && (_Init_thread_header(&DAT_146b31820), DAT_146b31820 == -1)) {
    uVar1 = FUN_142e39920();
    FUN_142e39920();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ControlledMoveReplicationData",1);
    DAT_146b31818 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b31820);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b31818 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b31818 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b31818 + 0x30));
  }
  if ((*piVar5 < DAT_146b31830) && (_Init_thread_header(&DAT_146b31830), DAT_146b31830 == -1)) {
    uVar1 = FUN_142e39920();
    FUN_142e39920();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NavAnimState",1);
    DAT_146b31828 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b31830);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b31828 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b31828 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b31828 + 0x30));
  }
  if ((*piVar5 < DAT_146b31840) && (_Init_thread_header(&DAT_146b31840), DAT_146b31840 == -1)) {
    uVar1 = FUN_142e39920();
    FUN_142e39920();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NavClientData",1);
    DAT_146b31838 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b31840);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b31838 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b31838 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b31838 + 0x30));
  }
  if ((*piVar5 < DAT_146b31850) && (_Init_thread_header(&DAT_146b31850), DAT_146b31850 == -1)) {
    uVar1 = FUN_142e39920();
    FUN_142e39920();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bPretendToBeWalking",1);
    DAT_146b31848 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b31850);
  }
  if (0 < *(int *)(DAT_146b31848 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b31848 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b31848 + 0x30));
  }
  return;
}



// FUNCTION 142cee100 FUN_142cee100 body=232 status=ok
// SIG undefined FUN_142cee100(void)

void FUN_142cee100(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b318a0) && (_Init_thread_header(&DAT_146b318a0), DAT_146b318a0 == -1))
  {
    uVar1 = FUN_142e6b880();
    FUN_142e6b880();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AttachState",1);
    DAT_146b31898 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b318a0);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b31898 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b31898 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b31898 + 0x30));
  }
  return;
}



// FUNCTION 142cee1f0 FUN_142cee1f0 body=285 status=ok
// SIG undefined FUN_142cee1f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_142cee1f0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  float fVar1;
  undefined8 *puVar2;
  float *pfVar3;
  undefined8 local_78;
  float local_70;
  undefined1 local_68 [24];
  undefined8 local_50 [9];
  
  local_78 = _DAT_1468b5d90;
  local_70 = DAT_1468b5d98;
  if (*(longlong *)(param_1 + 0xfd8) != 0) {
    FUN_142cc15c0(*(longlong *)(param_1 + 0xfd8) + 0xbe0,local_50,2);
    local_78 = _DAT_1468b5d90;
    local_70 = DAT_1468b5d98;
    if (*(longlong *)(param_1 + 0xfd8) != 0) {
      puVar2 = (undefined8 *)
               FUN_142cc2d20(*(longlong *)(param_1 + 0xfd8) + 0xbe0,local_68,local_50,param_1);
      local_78 = *puVar2;
      local_70 = *(float *)(puVar2 + 1);
    }
  }
  *param_3 = local_78;
  *(float *)(param_3 + 1) = local_70;
  FUN_142d08040(param_1 + 0x13dc,&local_78);
  pfVar3 = (float *)FUN_142ced180(param_1,local_68,2);
  fVar1 = pfVar3[2];
  *param_2 = CONCAT44(local_78._4_4_ + pfVar3[1],(float)local_78 + *pfVar3);
  *(float *)(param_2 + 1) = local_70 + fVar1;
  *param_4 = *(undefined4 *)(param_1 + 0x1400);
  return *(undefined4 *)(param_1 + 0x13ec);
}



// FUNCTION 142cee320 FUN_142cee320 body=871 status=ok
// SIG undefined FUN_142cee320(void)

ulonglong FUN_142cee320(longlong param_1)

{
  float fVar1;
  undefined8 *puVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_b8;
  float local_b0;
  undefined1 local_ac [12];
  undefined1 local_a0 [152];
  
  lVar3 = *(longlong *)(param_1 + 0x220);
  if ((lVar3 != 0) &&
     (((fVar10 = *(float *)(param_1 + 0x350), 0.0001 < ABS(fVar10) ||
       (0.0001 < ABS(*(float *)(param_1 + 0x354)))) || (0.0001 < ABS(*(float *)(param_1 + 0x358)))))
     ) {
    fVar8 = *(float *)(param_1 + 0x354);
    fVar11 = *(float *)(param_1 + 0x358);
    fVar9 = *(float *)(param_1 + 0x1158);
    fVar1 = *(float *)(param_1 + 0x1154);
    fVar4 = fVar10 * fVar10 + fVar8 * fVar8 + fVar11 * fVar11;
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar10 = fVar10 * fVar5;
    fVar8 = fVar8 * fVar5;
    fVar11 = fVar11 * fVar5;
    if (*(longlong *)(lVar3 + 0x168) == 0) {
      local_b0 = (float)DAT_1464aa7b0;
      puVar2 = &local_b8;
      local_b8 = DAT_1464aa7a8;
    }
    else {
      puVar2 = (undefined8 *)FUN_142369f10(*(longlong *)(lVar3 + 0x168),local_ac);
      lVar3 = *(longlong *)(param_1 + 0x220);
    }
    local_b8 = *puVar2;
    uVar7 = 0;
    local_b0 = *(float *)(puVar2 + 1);
    fVar4 = fVar8 * (float)((ulonglong)local_b8 >> 0x20) + (float)local_b8 * fVar10 +
            fVar11 * local_b0;
    if (0.0 <= fVar4) {
      fVar4 = fVar4 * *(float *)(param_1 + 0x1154);
    }
    else {
      uVar7 = 0x80000000;
      fVar4 = -(fVar4 * *(float *)(param_1 + 0x1158));
    }
    if (*(longlong *)(lVar3 + 0x168) == 0) {
      local_b0 = (float)DAT_1464aa7c0;
      puVar2 = &local_b8;
      local_b8 = DAT_1464aa7b8;
    }
    else {
      puVar2 = (undefined8 *)FUN_14238d380(*(longlong *)(lVar3 + 0x168),local_a0);
      lVar3 = *(longlong *)(param_1 + 0x220);
    }
    local_b8 = *puVar2;
    local_b0 = *(float *)(puVar2 + 1);
    fVar5 = fVar8 * (float)((ulonglong)local_b8 >> 0x20) + (float)local_b8 * fVar10 +
            local_b0 * fVar11;
    fVar9 = fVar5 * (fVar9 + fVar1) * 0.5;
    if (fVar5 < 0.0) {
      fVar9 = -fVar9;
    }
    fVar1 = *(float *)(param_1 + 0x114c);
    fVar5 = *(float *)(param_1 + 0x1140);
    if (*(longlong *)(lVar3 + 0x168) == 0) {
      local_b0 = (float)DAT_1464aa7a0;
      puVar2 = &local_b8;
      local_b8 = DAT_1464aa798;
    }
    else {
      puVar2 = (undefined8 *)FUN_14238db80(*(longlong *)(lVar3 + 0x168),&local_b8);
    }
    fVar10 = fVar8 * (float)((ulonglong)*puVar2 >> 0x20) + (float)*puVar2 * fVar10 +
             fVar11 * *(float *)(puVar2 + 1);
    if (0.0 <= fVar10) {
      fVar10 = fVar10 * fVar5;
    }
    else {
      fVar10 = -(fVar10 * fVar1);
    }
    return CONCAT44(uVar7,fVar4 + fVar9 + fVar10);
  }
  return (ulonglong)*(uint *)(param_1 + 0x1140);
}



// FUNCTION 142cee690 FUN_142cee690 body=80 status=ok
// SIG undefined FUN_142cee690(void)

float FUN_142cee690(longlong *param_1)

{
  char cVar1;
  float fVar2;
  
  fVar2 = (float)(**(code **)(*param_1 + 0xb78))();
  cVar1 = (**(code **)(*param_1 + 0x560))(param_1);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x558))(param_1), cVar1 == '\0')) {
    return fVar2;
  }
  return fVar2 * *(float *)(param_1 + 0x226);
}



// FUNCTION 142cee6e0 FUN_142cee6e0 body=538 status=ok
// SIG undefined FUN_142cee6e0(void)

longlong * FUN_142cee6e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18;
  
  if (*(char *)(param_1 + 0x248) == '\x06') {
    if ((*(char *)(param_1 + 0x249) == '\0') && (*(longlong *)(param_1 + 0x178) != 0)) {
      *param_2 = 0;
      param_2[1] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      FGenericPlatformString::Memcpy(*param_2,L"Ladder",0xe);
      return param_2;
    }
    if (*(char *)(param_1 + 0x249) == '\x02') {
      *param_2 = 0;
      param_2[1] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      FGenericPlatformString::Memcpy(*param_2,L"PawnAttached",0x1a);
      return param_2;
    }
    if (*(char *)(param_1 + 0x249) == '\x04') {
      *param_2 = 0;
      param_2[1] = 0x13;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      FGenericPlatformString::Memcpy(*param_2,L"NoneWithRootMotion",0x26);
      return param_2;
    }
  }
  if (((*(longlong *)(param_1 + 0x1778) == 0) || ((*(byte *)(param_1 + 0x18cc) & 2) != 0)) ||
     (*(longlong *)(param_1 + 0x178) == 0)) {
    FUN_14233f100();
  }
  else {
    plVar1 = (longlong *)FUN_14233f100();
    lVar2 = plVar1[1];
    local_28 = *plVar1;
    *plVar1 = 0;
    local_20 = (int)plVar1[1];
    local_1c = *(int *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
    iVar3 = local_20;
    if (local_1c < (int)((0x13 - (uint)((int)lVar2 != 0)) + local_20)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
      iVar3 = local_20;
    }
    local_20 = (0x13 - (uint)(iVar3 != 0)) + iVar3;
    if (local_1c < local_20) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar3);
    }
    lVar2 = (longlong)iVar3 - (ulonglong)(iVar3 != 0);
    builtin_wcsncpy((wchar_t *)(local_28 + lVar2 * 2),L" + Contr",8);
    lVar2 = local_28 + lVar2 * 2;
    ((wchar_t *)(lVar2 + 0x10))[0] = L'o';
    ((wchar_t *)(lVar2 + 0x10))[1] = L'l';
    ((wchar_t *)(lVar2 + 0x14))[0] = L'l';
    ((wchar_t *)(lVar2 + 0x14))[1] = L'e';
    ((wchar_t *)(lVar2 + 0x18))[0] = L'd';
    ((wchar_t *)(lVar2 + 0x18))[1] = L' ';
    ((wchar_t *)(lVar2 + 0x1c))[0] = L'M';
    ((wchar_t *)(lVar2 + 0x1c))[1] = L'o';
    *(undefined4 *)(lVar2 + 0x20) = 0x650076;
    *(undefined2 *)(lVar2 + 0x24) = 0;
    *param_2 = local_28;
    *(int *)(param_2 + 1) = local_20;
    *(int *)((longlong)param_2 + 0xc) = local_1c;
    if (local_18 != 0) {
      FMemory::Free();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 142cee900 FUN_142cee900 body=546 status=ok
// SIG undefined FUN_142cee900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cee900(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_f8;
  undefined4 local_f7;
  undefined4 uStack_f3;
  undefined4 uStack_ef;
  undefined4 uStack_eb;
  undefined4 local_e7;
  undefined4 uStack_e3;
  undefined4 uStack_df;
  undefined4 uStack_db;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined1 local_b2;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined8 local_a0 [4];
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_108 = 0;
  FUN_1422ffb20(&local_c8,param_2,&local_f8,0);
  lVar2 = local_80;
  *param_3 = local_c8;
  param_3[1] = local_c0;
  *(undefined1 *)(param_3 + 2) = local_b8;
  *(undefined1 *)((longlong)param_3 + 0x11) = local_b7;
  *(undefined1 *)((longlong)param_3 + 0x12) = local_b6;
  *(undefined1 *)((longlong)param_3 + 0x13) = local_b5;
  *(undefined1 *)((longlong)param_3 + 0x14) = local_b4;
  *(undefined1 *)((longlong)param_3 + 0x15) = local_b3;
  *(undefined1 *)((longlong)param_3 + 0x16) = local_b2;
  *(undefined4 *)(param_3 + 3) = local_b0;
  *(undefined1 *)((longlong)param_3 + 0x1c) = local_ac;
  *(undefined1 *)((longlong)param_3 + 0x24) = local_a4;
  *(undefined1 *)((longlong)param_3 + 0x25) = local_a3;
  *(undefined4 *)(param_3 + 4) = local_a8;
  if (param_3 + 5 != local_a0) {
    if (local_80 == 0) {
      _guard_xfg_dispatch_icall_nop(param_3 + 5,local_a0,0x20);
    }
    if (param_3[9] != 0) {
      FMemory::Free();
      lVar2 = local_80;
    }
    param_3[9] = lVar2;
    *(undefined4 *)(param_3 + 10) = (undefined4)local_78;
    *(undefined4 *)((longlong)param_3 + 0x54) = local_78._4_4_;
    local_78 = 0;
    local_80 = 0;
  }
  lVar2 = local_60;
  if (param_3 + 0xb == local_70) {
    if (local_60 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (local_60 == 0) {
      _guard_xfg_dispatch_icall_nop(param_3 + 0xb,local_70,0x10);
    }
    if (param_3[0xd] != 0) {
      FMemory::Free();
      lVar2 = local_60;
    }
    param_3[0xd] = lVar2;
    *(undefined4 *)(param_3 + 0xe) = (undefined4)local_58;
    *(undefined4 *)((longlong)param_3 + 0x74) = local_58._4_4_;
    local_58 = 0;
    local_60 = 0;
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  uVar1 = (**(code **)(*param_1 + 0x688))(param_1);
  FCollisionQueryParams::AddIgnoredActor(param_3,uVar1);
  FUN_142301490(param_3,param_5);
  FUN_1426d3dd0(&local_f7);
  FUN_1426ea8d0(&local_f7,0,0);
  *param_4 = local_f7;
  param_4[1] = uStack_f3;
  param_4[2] = uStack_ef;
  param_4[3] = uStack_eb;
  param_4[4] = local_e7;
  param_4[5] = uStack_e3;
  param_4[6] = uStack_df;
  param_4[7] = uStack_db;
  FCollisionResponseContainer::SetResponse(param_4,0,1);
  FCollisionResponseContainer::SetResponse(param_4,1,1);
  return;
}



// FUNCTION 142ceeb30 GetScrollOffset body=14 status=ok
// SIG undefined GetScrollOffset(void)

undefined8 * FSlateEditableTextLayout::GetScrollOffset(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x8a8);
  return param_2;
}



// FUNCTION 142ceeb40 FUN_142ceeb40 body=42 status=ok
// SIG undefined FUN_142ceeb40(void)

longlong FUN_142ceeb40(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x408);
  if ((lVar1 == 0) ||
     ((1 < (byte)(*(char *)(param_1 + 0x418) - 1U) &&
      ((param_2 == '\0' || (*(char *)(param_1 + 0x418) != '\x03')))))) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 142ceeb70 FUN_142ceeb70 body=163 status=ok
// SIG undefined FUN_142ceeb70(void)

undefined8 FUN_142ceeb70(longlong *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  *param_3 = -1;
  if (param_1 != (longlong *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0x6c8))();
    iVar1 = (int)param_1[0xdf];
    if (iVar2 < iVar1) {
      iVar2 = iVar1 - iVar2;
      if (iVar2 < 1) {
        iVar2 = 0;
      }
      iVar2 = iVar2 + param_2;
      if ((-1 < iVar2) && (iVar2 < iVar1)) {
        *param_3 = iVar2;
        return *(undefined8 *)(param_1[0xde] + (longlong)iVar2 * 8);
      }
    }
    else if ((-1 < param_2) && (param_2 < iVar1)) {
      *param_3 = param_2;
      return *(undefined8 *)(param_1[0xde] + (longlong)param_2 * 8);
    }
  }
  return 0;
}



// FUNCTION 142ceec20 FUN_142ceec20 body=292 status=ok
// SIG undefined FUN_142ceec20(void)

void FUN_142ceec20(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *_Src;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_1 != (longlong *)0x0) {
    iVar3 = (**(code **)(*param_1 + 0x6c8))();
    iVar4 = (int)param_1[0xdf];
    if (iVar3 < iVar4) {
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,iVar3);
        iVar4 = (int)param_1[0xdf];
      }
      iVar3 = iVar4 - iVar3;
      if (iVar3 < iVar4) {
        lVar5 = (longlong)iVar3 * 8;
        do {
          iVar4 = (int)param_2[1];
          lVar2 = param_1[0xde];
          *(int *)(param_2 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
          }
          puVar1 = (undefined8 *)(lVar5 + lVar2);
          iVar3 = iVar3 + 1;
          lVar5 = lVar5 + 8;
          *(undefined8 *)(*param_2 + (longlong)iVar4 * 8) = *puVar1;
        } while (iVar3 < (int)param_1[0xdf]);
      }
    }
    else if (param_2 != param_1 + 0xde) {
      iVar4 = (int)param_1[0xdf];
      _Src = (void *)param_1[0xde];
      *(int *)(param_2 + 1) = iVar4;
      if ((iVar4 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        return;
      }
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar4);
      _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar4 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 142ceed50 FUN_142ceed50 body=550 status=ok
// SIG undefined FUN_142ceed50(void)

bool FUN_142ceed50(longlong param_1,longlong *param_2,undefined4 param_3,int param_4,
                  longlong *param_5,longlong *param_6,byte *param_7)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  if (param_2 == (longlong *)0x0) {
    return false;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  *param_5 = *(longlong *)(lVar1 + 0x78);
  *param_6 = lVar1 + 0xc0;
  plVar5 = (longlong *)(**(code **)(*param_2 + 0x560))(param_2,param_3);
  if (plVar5 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar5 + 0x4f8))(plVar5);
    if (cVar3 != '\0') {
      return false;
    }
    if (((*(byte *)(lVar1 + 0xd1) & 4) == 0) &&
       (iVar4 = (**(code **)(*plVar5 + 0x460))(plVar5), iVar4 == 2)) {
      return false;
    }
    lVar6 = FUN_14258e9b0(plVar5);
    plVar11 = *(longlong **)(lVar1 + 0x90);
    plVar12 = plVar11 + (longlong)*(int *)(lVar1 + 0x98) * 6;
    for (; plVar11 != plVar12; plVar11 = plVar11 + 6) {
      lVar8 = plVar11[2];
      if (((lVar8 != 0) && ((*plVar11 == 0 || (lVar6 == *plVar11)))) &&
         (((int)plVar11[1] == -1 || ((int)plVar11[1] == param_4)))) {
        if ((*(byte *)(plVar11 + 3) & 1) != 0) {
          lVar7 = FUN_1429b6de0();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          lVar7 = 0;
          if (bVar2) {
            lVar7 = lVar8;
          }
          lVar8 = FUN_1429b6de0();
          if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          plVar10 = (longlong *)0x0;
          if (bVar2) {
            plVar10 = plVar5;
          }
          if ((lVar7 != 0) && (plVar10 != (longlong *)0x0)) {
            plVar13 = (longlong *)(lVar1 + 0xd8);
            if (*(int *)(lVar1 + 0xe0) < 1) {
              plVar13 = (longlong *)0x0;
            }
            cVar3 = FUN_1425988d0(lVar7,plVar10,0,plVar13);
            if (cVar3 == '\0') goto LAB_142ceeefa;
          }
        }
        *param_5 = plVar11[2];
        if (((*(byte *)(plVar11 + 3) & 2) == 0) &&
           (bVar9 = *(byte *)(plVar11 + 3) >> 2 & 1, *param_7 = bVar9, bVar9 == 0)) {
          *param_6 = (longlong)(plVar11 + 4);
        }
        break;
      }
LAB_142ceeefa:
    }
  }
  return *param_5 != 0;
}



// FUNCTION 142ceef80 FUN_142ceef80 body=21 status=ok
// SIG undefined FUN_142ceef80(void)

undefined8 FUN_142ceef80(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xaf8) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0xaf8) + 0x118);
  }
  return 0;
}



// FUNCTION 142ceefa0 FUN_142ceefa0 body=8 status=ok
// SIG undefined FUN_142ceefa0(void)

undefined8 FUN_142ceefa0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xaf8);
}



// FUNCTION 142ceefb0 FUN_142ceefb0 body=375 status=ok
// SIG undefined FUN_142ceefb0(void)

longlong FUN_142ceefb0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((param_2 == 0) || (lVar2 = *(longlong *)(param_2 + 0x490), lVar2 == 0)) &&
     ((*(longlong *)(param_1 + 0x408) != param_2 ||
      (lVar2 = *(longlong *)(param_1 + 0x410), lVar2 == 0)))) {
    if (param_2 != 0) {
      lVar2 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (lVar2 = *(longlong *)(param_2 + 0x9c0), lVar2 != 0)) {
        lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar2 = *(longlong *)(param_2 + 0x9c0);
          if (lVar2 != 0) {
            lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              return lVar2;
            }
          }
          return 0;
        }
      }
    }
    if ((((*(longlong *)(param_1 + 0x408) != 0) && (*(longlong *)(param_1 + 0x408) != param_2)) ||
        (*(char *)(param_1 + 0x540) != '\0')) ||
       (((*(longlong **)(param_1 + 0x118) == (longlong *)0x0 ||
         (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x668))(), lVar2 == 0)) ||
        ((param_2 != 0 && (*(longlong *)(lVar2 + 0x488) != param_2)))))) {
      lVar2 = 0;
    }
  }
  return lVar2;
}



// FUNCTION 142cef130 FUN_142cef130 body=382 status=ok
// SIG undefined FUN_142cef130(void)

undefined8 * FUN_142cef130(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_20 = *(longlong **)(param_1 + 0x28);
      local_28 = 0;
      if (local_20 == (longlong *)0x0) {
LAB_142cef1cd:
        puVar8 = &local_28;
        bVar3 = true;
        bVar9 = false;
        uVar7 = local_28;
      }
      else {
        LOCK();
        iVar6 = (int)local_20[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_20 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_20[1];
          if (bVar9) {
            *(int *)(local_20 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_20 != (longlong *)0x0) {
              local_28 = *(undefined8 *)(param_1 + 0x20);
            }
            goto LAB_142cef1cd;
          }
          LOCK();
          iVar6 = (int)local_20[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_20 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        puVar8 = &local_28;
        local_20 = (longlong *)0x0;
        bVar3 = true;
        bVar9 = false;
        uVar7 = 0;
      }
      goto LAB_142cef1f4;
    }
  }
  puVar8 = &local_18;
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  bVar3 = false;
  bVar9 = true;
  uVar7 = 0;
LAB_142cef1f4:
  *param_2 = uVar7;
  uVar7 = puVar8[1];
  puVar8[1] = 0;
  param_2[1] = uVar7;
  *puVar8 = 0;
  plVar5 = plStack_10;
  if ((bVar9) && (plStack_10 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_10 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_10 + 8))(plStack_10,1);
      }
    }
  }
  plVar5 = local_20;
  if ((bVar3) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142cef2b0 FUN_142cef2b0 body=1629 status=ok
// SIG undefined FUN_142cef2b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142cef2b0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong *plVar6;
  float *pfVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar14 [16];
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
  undefined1 auStack_168 [48];
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
  undefined1 local_e8 [48];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if (((*(char *)(param_1 + 0x440) == '\0') || (*(longlong *)(param_1 + 0x118) == 0)) ||
     (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x118), lVar9 == 0)) {
    lVar9 = *(longlong *)(param_1 + 0x118);
  }
  plVar6 = (longlong *)FUN_14222b250(lVar9,*(undefined8 *)(param_1 + 0x448),0);
  fVar15 = fRam0000000146b3162c;
  if (plVar6 == (longlong *)0x0) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = fVar15;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    fVar15 = (float)((uint)fRam0000000146b31624 & uRam0000000146b31634);
    fVar19 = (float)((uint)fRam0000000146b31628 & uRam0000000146b31638);
    fVar23 = (float)((uint)fRam0000000146b3162c & uRam0000000146b3163c);
    param_2[8] = (float)((uint)_DAT_146b31620 & _DAT_146b31630);
    param_2[9] = fVar15;
    param_2[10] = fVar19;
    param_2[0xb] = fVar23;
  }
  else {
    fVar19 = *(float *)(param_1 + 0x454);
    fVar23 = *(float *)(param_1 + 0x450);
    fVar45 = (float)((uint)_DAT_146b31620 & _DAT_146b31630);
    fVar46 = (float)((uint)fRam0000000146b31624 & uRam0000000146b31634);
    fVar47 = (float)((uint)fRam0000000146b31628 & uRam0000000146b31638);
    fVar48 = (float)((uint)fRam0000000146b3162c & uRam0000000146b3163c);
    fVar25 = *(float *)(param_1 + 0x458);
    pfVar7 = (float *)(**(code **)(*plVar6 + 0x420))
                                (plVar6,local_e8,*(undefined8 *)(param_1 + 0x448),0);
    fVar39 = fRam0000000146b31688;
    fVar38 = fRam0000000146b31684;
    fVar27 = _DAT_146b31680;
    fVar24 = fRam0000000146b31628;
    fVar22 = fRam0000000146b31624;
    fVar33 = _DAT_146b31620;
    auVar10._4_4_ = fVar46;
    auVar10._0_4_ = fVar45;
    auVar10._8_4_ = fVar47;
    auVar10._12_4_ = fVar48;
    auVar11 = *(undefined1 (*) [16])(pfVar7 + 8);
    fVar1 = auVar11._0_4_;
    fVar2 = auVar11._4_4_;
    fVar3 = auVar11._8_4_;
    fVar4 = auVar11._12_4_;
    fVar13 = *pfVar7;
    fVar18 = pfVar7[1];
    fVar17 = pfVar7[2];
    fVar21 = pfVar7[3];
    auVar11 = minps(auVar10,auVar11);
    auVar12._4_4_ = -(uint)(auVar11._4_4_ < fRam0000000146b31684);
    auVar12._0_4_ = -(uint)(auVar11._0_4_ < _DAT_146b31680);
    auVar12._8_4_ = -(uint)(auVar11._8_4_ < fRam0000000146b31688);
    auVar12._12_4_ = -(uint)(auVar11._12_4_ < fRam0000000146b3168c);
    iVar8 = movmskps((int)plVar6,auVar12);
    if (iVar8 == 0) {
      fVar23 = fVar1 * fVar23;
      fVar19 = fVar2 * fVar19;
      fVar25 = fVar3 * fVar25;
      fVar27 = fVar4 * 0.0;
      fVar38 = fVar15 * fVar13 * _DAT_146b31660 + fVar21 * 0.0 + fVar18 * 0.0 * _DAT_146b31650 +
               fVar17 * 0.0 * _DAT_146b31640;
      fVar39 = fVar13 * 0.0 * fRam0000000146b31664 + fVar21 * 0.0 +
               fVar15 * fVar18 * fRam0000000146b31654 + fVar17 * 0.0 * fRam0000000146b31644;
      fVar40 = fVar13 * 0.0 * fRam0000000146b31668 + fVar21 * 0.0 +
               fVar18 * 0.0 * fRam0000000146b31658 + fVar15 * fVar17 * fRam0000000146b31648;
      fVar41 = fVar13 * 0.0 * fRam0000000146b3166c + fVar21 * fVar15 +
               fVar18 * 0.0 * fRam0000000146b3165c + fVar17 * 0.0 * fRam0000000146b3164c;
      fVar15 = fVar25 * fVar18 - fVar19 * fVar17;
      fVar33 = fVar23 * fVar17 - fVar25 * fVar13;
      fVar22 = fVar19 * fVar13 - fVar23 * fVar18;
      fVar24 = fVar27 * fVar21 - fVar27 * fVar21;
      fVar15 = fVar15 + fVar15;
      fVar33 = fVar33 + fVar33;
      fVar22 = fVar22 + fVar22;
      fVar24 = fVar24 + fVar24;
      local_108 = (fVar22 * fVar18 - fVar33 * fVar17) + fVar21 * fVar15 + fVar23 + pfVar7[4];
      fStack_104 = (fVar15 * fVar17 - fVar22 * fVar13) + fVar21 * fVar33 + fVar19 + pfVar7[5];
      fStack_100 = (fVar33 * fVar13 - fVar15 * fVar18) + fVar21 * fVar22 + fVar25 + pfVar7[6];
      fVar15 = (fVar24 * fVar21 - fVar24 * fVar21) + fVar21 * fVar24 + fVar27 + pfVar7[7];
    }
    else {
      fVar16 = fVar18 + fVar18;
      fVar20 = fVar17 + fVar17;
      fVar40 = pfVar7[4];
      fVar41 = pfVar7[5];
      fVar5 = pfVar7[6];
      fVar26 = fVar13 * (fVar13 + fVar13);
      fVar34 = fVar21 * (fVar13 + fVar13);
      fVar28 = fVar2 * (fVar13 * fVar16 - fVar21 * fVar20);
      fVar29 = fVar3 * (fVar18 * fVar20 - fVar34);
      fVar31 = fVar1 * (fVar13 * fVar20 - fVar21 * fVar16);
      fVar42 = (fVar21 * fVar20 + fVar13 * fVar16) * fVar1;
      fVar43 = (fVar34 + fVar18 * fVar20) * fVar2;
      fVar44 = (fVar21 * fVar16 + fVar13 * fVar20) * fVar3;
      fVar13 = (float)((uint)((_DAT_146b31620 - (fVar17 * fVar20 + fVar18 * fVar16)) * fVar1) &
                      _DAT_146b31630);
      fVar17 = (float)((uint)((fRam0000000146b31624 - (fVar17 * fVar20 + fVar26)) * fVar2) &
                      uRam0000000146b31634);
      fVar21 = (float)((uint)((fRam0000000146b31628 - (fVar18 * fVar16 + fVar26)) * fVar3) &
                      uRam0000000146b31638);
      fVar20 = (float)((uint)((fRam0000000146b3162c - (fVar26 + fVar26)) * fVar4) &
                      uRam0000000146b3163c);
      fVar35 = (fVar15 * 0.0 + 0.0) * fVar45;
      fVar36 = (fVar15 * 0.0 + 0.0) * fVar46;
      fVar37 = (fVar15 * 0.0 + 0.0) * fVar47;
      fVar34 = fVar46 * (0.0 - fVar15 * 0.0);
      fVar30 = fVar47 * (0.0 - fVar15 * 0.0);
      fVar32 = fVar45 * (0.0 - fVar15 * 0.0);
      fVar15 = (float)((uint)((_DAT_146b31620 - 0.0) * fVar45) & _DAT_146b31630);
      fVar18 = (float)((uint)((fRam0000000146b31624 - 0.0) * fVar46) & uRam0000000146b31634);
      fVar16 = (float)((uint)((fRam0000000146b31628 - 0.0) * fVar47) & uRam0000000146b31638);
      fVar26 = (float)((uint)((fRam0000000146b3162c - 0.0) * fVar48) & uRam0000000146b3163c);
      local_138 = fVar35 * fVar28 + fVar15 * fVar13 + fVar32 * fVar44 + fVar26 * fVar40;
      fStack_134 = fVar35 * fVar17 + fVar15 * fVar42 + fVar32 * fVar29 + fVar26 * fVar41;
      fStack_130 = fVar35 * fVar43 + fVar15 * fVar31 + fVar32 * fVar21 + fVar26 * fVar5;
      fStack_12c = fVar35 * fVar20 + fVar15 * fVar20 + fVar32 * fVar20 +
                   fVar26 * fRam0000000146b3162c;
      local_128 = fVar18 * fVar28 + fVar34 * fVar13 + fVar36 * fVar44 + fVar26 * fVar40;
      fStack_124 = fVar18 * fVar17 + fVar34 * fVar42 + fVar36 * fVar29 + fVar26 * fVar41;
      fStack_120 = fVar18 * fVar43 + fVar34 * fVar31 + fVar36 * fVar21 + fVar26 * fVar5;
      fStack_11c = fVar18 * fVar20 + fVar34 * fVar20 + fVar36 * fVar20 +
                   fVar26 * fRam0000000146b3162c;
      local_118 = fVar30 * fVar28 + fVar37 * fVar13 + fVar16 * fVar44 + fVar26 * fVar40;
      fStack_114 = fVar30 * fVar17 + fVar37 * fVar42 + fVar16 * fVar29 + fVar26 * fVar41;
      fStack_110 = fVar30 * fVar43 + fVar37 * fVar31 + fVar16 * fVar21 + fVar26 * fVar5;
      fStack_10c = fVar30 * fVar20 + fVar37 * fVar20 + fVar16 * fVar20 +
                   fVar26 * fRam0000000146b3162c;
      local_108 = fVar19 * fVar28 + fVar23 * fVar13 + fVar25 * fVar44 +
                  fRam0000000146b3162c * fVar40;
      fStack_104 = fVar19 * fVar17 + fVar23 * fVar42 + fVar25 * fVar29 +
                   fRam0000000146b3162c * fVar41;
      fStack_100 = fVar19 * fVar43 + fVar23 * fVar31 + fVar25 * fVar21 +
                   fRam0000000146b3162c * fVar5;
      fStack_fc = fVar19 * fVar20 + fVar23 * fVar20 + fVar25 * fVar20 +
                  fRam0000000146b3162c * fRam0000000146b3162c;
      FMatrix::RemoveScaling(&local_138);
      fVar15 = (float)(-(uint)(fVar27 <= fVar1 * fVar45) & (_DAT_146b31670 ^ (uint)fVar33) ^
                      _DAT_146b31670);
      fVar19 = (float)(-(uint)(fVar38 <= fVar2 * fVar46) & (uRam0000000146b31674 ^ (uint)fVar22) ^
                      uRam0000000146b31674);
      fVar23 = (float)(-(uint)(fVar39 <= fVar3 * fVar47) & (uRam0000000146b31678 ^ (uint)fVar24) ^
                      uRam0000000146b31678);
      local_138 = local_138 * fVar15;
      fStack_134 = fStack_134 * fVar15;
      fStack_130 = fStack_130 * fVar15;
      fStack_120 = fStack_120 * fVar19;
      fStack_124 = fStack_124 * fVar19;
      local_128 = local_128 * fVar19;
      fStack_110 = fStack_110 * fVar23;
      local_118 = local_118 * fVar23;
      fStack_114 = fStack_114 * fVar23;
      FQuat::FQuat(&local_f8,&local_138);
      auVar14._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
      auVar14._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
      auVar14._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
      auVar14._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
      fVar18 = auVar14._4_4_ + auVar14._0_4_;
      fVar17 = auVar14._8_4_ + auVar14._4_4_;
      fVar21 = auVar14._12_4_ + auVar14._8_4_;
      fVar33 = auVar14._0_4_ + auVar14._12_4_;
      auVar11._4_4_ = fVar17;
      auVar11._0_4_ = fVar18;
      auVar11._8_4_ = fVar21;
      auVar11._12_4_ = fVar33;
      auVar11 = rsqrtps(auVar14,auVar11);
      fVar19 = auVar11._0_4_;
      fVar23 = auVar11._4_4_;
      fVar25 = auVar11._8_4_;
      fVar13 = auVar11._12_4_;
      fVar19 = (_DAT_146b31610 - fVar19 * fVar19 * fVar18 * _DAT_146b31610) * fVar19 + fVar19;
      fVar23 = (fRam0000000146b31614 - fVar23 * fVar23 * fVar17 * fRam0000000146b31614) * fVar23 +
               fVar23;
      fVar25 = (fRam0000000146b31618 - fVar25 * fVar25 * fVar21 * fRam0000000146b31618) * fVar25 +
               fVar25;
      fVar13 = (fRam0000000146b3161c - fVar13 * fVar13 * fVar33 * fRam0000000146b3161c) * fVar13 +
               fVar13;
      fVar15 = 0.0;
      fVar38 = (float)(((uint)(((_DAT_146b31610 - fVar19 * fVar19 * fVar18 * _DAT_146b31610) *
                                fVar19 + fVar19) * local_f8) ^ _DAT_146b31600) &
                       -(uint)(1e-08 <= fVar18) ^ _DAT_146b31600);
      fVar39 = (float)(((uint)(((fRam0000000146b31614 -
                                fVar23 * fVar23 * fVar17 * fRam0000000146b31614) * fVar23 + fVar23)
                              * fStack_f4) ^ uRam0000000146b31604) & -(uint)(1e-08 <= fVar17) ^
                      uRam0000000146b31604);
      fVar40 = (float)(((uint)(((fRam0000000146b31618 -
                                fVar25 * fVar25 * fVar21 * fRam0000000146b31618) * fVar25 + fVar25)
                              * fStack_f0) ^ uRam0000000146b31608) & -(uint)(1e-08 <= fVar21) ^
                      uRam0000000146b31608);
      fVar41 = (float)(((uint)(((fRam0000000146b3161c -
                                fVar13 * fVar13 * fVar33 * fRam0000000146b3161c) * fVar13 + fVar13)
                              * fStack_ec) ^ uRam0000000146b3160c) & -(uint)(1e-08 <= fVar33) ^
                      uRam0000000146b3160c);
    }
    *param_2 = fVar38;
    param_2[1] = fVar39;
    param_2[2] = fVar40;
    param_2[3] = fVar41;
    param_2[4] = local_108;
    param_2[5] = fStack_104;
    param_2[6] = fStack_100;
    param_2[7] = fVar15;
    param_2[8] = fVar1 * fVar45;
    param_2[9] = fVar2 * fVar46;
    param_2[10] = fVar3 * fVar47;
    param_2[0xb] = fVar4 * fVar48;
  }
  return param_2;
}



// FUNCTION 142cef910 FUN_142cef910 body=104 status=ok
// SIG undefined FUN_142cef910(void)

undefined8 * FUN_142cef910(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x3f8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)operator_new(0x160);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      FUN_142325eb0(puVar1,param_1 + -0x218);
      *puVar1 = &PTR__scalar_deleting_destructor__14585b0f8;
    }
    *(undefined8 **)(param_1 + 0x3f8) = puVar1;
  }
  return puVar1;
}



// FUNCTION 142cef980 FUN_142cef980 body=161 status=ok
// SIG undefined FUN_142cef980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142cef980(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x400);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)operator_new(0xa8);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      FUN_1423261d0(puVar1,param_1 + -0x218);
      *puVar1 = &PTR__scalar_deleting_destructor__14585b118;
      puVar1[0x11] = 0xffffffffbf800000;
      puVar1[0x12] = _DAT_1468b5d90;
      *(undefined4 *)(puVar1 + 0x13) = DAT_1468b5d98;
      FWeakObjectPtr::operator=((longlong)puVar1 + 0x9c,0);
    }
    *(undefined8 **)(param_1 + 0x400) = puVar1;
  }
  return puVar1;
}



// FUNCTION 142cefa30 FUN_142cefa30 body=27 status=ok
// SIG undefined FUN_142cefa30(void)

void FUN_142cefa30(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x618) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142cefa46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x218) + 0x30))();
    return;
  }
  return;
}



// FUNCTION 142cefa50 FUN_142cefa50 body=974 status=ok
// SIG undefined FUN_142cefa50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142cefa50(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined1 auStack_f8 [32];
  undefined8 **local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  float local_88;
  undefined1 local_84 [12];
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  float local_60;
  char local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  iVar1 = *(int *)(param_1 + 0x41c);
  if ((((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x538))) &&
      (*(longlong *)(param_1 + 0x408) != 0)) &&
     (cVar4 = FUN_142ce9c50(param_1,(longlong)iVar1 * 0x68 + *(longlong *)(param_1 + 0x530),
                            *(longlong *)(param_1 + 0x408),&local_68), cVar4 != '\0')) {
    *param_2 = local_68;
    *(float *)(param_2 + 1) = local_60;
    return param_2;
  }
  plVar2 = *(longlong **)(param_1 + 0x118);
  if ((plVar2 == (longlong *)0x0) ||
     (plVar8 = (longlong *)plVar2[0x23], (longlong *)plVar2[0x23] == (longlong *)0x0)) {
    plVar8 = plVar2;
  }
  lVar7 = *(longlong *)(param_1 + 0x408);
  if (lVar7 == 0) {
    lVar3 = plVar2[0x2d];
    if (lVar3 == 0) {
      local_b8 = _DAT_1468b5d90;
      puVar6 = &local_b8;
      fStack_b0 = DAT_1468b5d98;
    }
    else {
      puVar6 = &local_a8;
      local_a0 = (float)*(undefined4 *)(lVar3 + 0x228);
      local_a8 = *(undefined8 *)(lVar3 + 0x220);
    }
    local_60 = *(float *)(puVar6 + 1);
    puVar5 = &local_68;
    local_68 = *puVar6;
  }
  else {
    lVar3 = *(longlong *)(lVar7 + 0x168);
    if (lVar3 == 0) {
      local_68 = _DAT_1468b5d90;
      puVar6 = &local_68;
      local_60 = DAT_1468b5d98;
    }
    else {
      puVar6 = &local_a8;
      local_a0 = (float)*(undefined4 *)(lVar3 + 0x228);
      local_a8 = *(undefined8 *)(lVar3 + 0x220);
    }
    fStack_b0 = *(float *)(puVar6 + 1);
    puVar5 = &local_b8;
    local_b8 = *puVar6;
  }
  fVar11 = *(float *)(puVar5 + 1);
  local_98 = *puVar5;
  local_90 = fVar11;
  if ((*(char *)(param_1 + 0x52a) != '\0') && (plVar8 != (longlong *)0x0)) {
    lVar3 = plVar8[0x2d];
    if (lVar3 == 0) {
      local_b8 = _DAT_1468b5d90;
      puVar6 = &local_b8;
      fStack_b0 = DAT_1468b5d98;
    }
    else {
      puVar6 = &local_a8;
      local_a0 = (float)*(undefined4 *)(lVar3 + 0x228);
      local_a8 = *(undefined8 *)(lVar3 + 0x220);
    }
    fVar11 = *(float *)(puVar6 + 1);
    fStack_b0 = fVar11;
    local_98 = *puVar6;
    local_90 = fVar11;
    local_b8 = *puVar6;
  }
  local_90 = fVar11;
  if ((*(char *)(param_1 + 0x528) != '\0') && (plVar8 != (longlong *)0x0)) {
    (**(code **)(*plVar8 + 0x578))(plVar8,local_84,&local_88);
    lVar7 = *(longlong *)(param_1 + 0x408);
    local_90 = fVar11 + local_88;
  }
  if (lVar7 != 0) {
    lVar7 = *(longlong *)(lVar7 + 0x168);
    if (lVar7 == 0) {
      local_b8 = _DAT_1468b5d90;
      puVar6 = &local_b8;
      fStack_b0 = DAT_1468b5d98;
    }
    else {
      puVar6 = &local_68;
      local_60 = *(float *)(lVar7 + 0x228);
      local_68 = *(undefined8 *)(lVar7 + 0x220);
    }
    local_a8 = *puVar6;
    local_a0 = *(float *)(puVar6 + 1);
    if (plVar8 != (longlong *)0x0) {
      if (*(char *)(param_1 + 0x529) != '\0') {
        lVar7 = plVar8[0x2d];
        if (lVar7 == 0) {
          local_b8 = _DAT_1468b5d90;
          puVar6 = &local_b8;
          fStack_b0 = DAT_1468b5d98;
        }
        else {
          puVar6 = &local_68;
          local_60 = *(float *)(lVar7 + 0x228);
          local_68 = *(undefined8 *)(lVar7 + 0x220);
        }
        local_a8 = *puVar6;
        local_a0 = *(float *)(puVar6 + 1);
      }
      if (*(char *)(param_1 + 0x52a) != '\0') {
        local_78 = &local_58;
        local_58 = 0x4234000000000000;
        uStack_50 = 0x42b40000c2340000;
        uStack_70 = CONCAT44(uStack_ac,8);
        local_d8 = &local_78;
        local_c8 = 0;
        local_d0 = 0;
        local_48 = 0xc2b40000;
        uStack_44 = 0x43070000;
        uStack_40 = 0xc3070000;
        uStack_3c = 0x43340000;
        local_b8 = local_a8;
        fStack_b0 = local_a0;
        FUN_142d03dc0(param_1,&local_68,plVar8,&local_b8);
        if (local_5c != '\0') {
          uVar9 = (undefined4)local_68;
          uVar10 = (undefined4)((ulonglong)local_68 >> 0x20);
          goto LAB_142cefdf5;
        }
      }
    }
    local_d8 = (undefined8 **)&local_98;
    local_c0 = 0;
    local_c8 = 1;
    local_d0 = 0x7f7fffff;
    FUN_142d042d0(param_1,&local_98,*(undefined8 *)(param_1 + 0x408),&local_a8);
  }
  uVar9 = (undefined4)local_98;
  uVar10 = (undefined4)((ulonglong)local_98 >> 0x20);
  local_60 = local_90;
LAB_142cefdf5:
  *param_2 = CONCAT44(uVar10,uVar9);
  *(float *)(param_2 + 1) = local_60;
  return param_2;
}



// FUNCTION 142cefe20 FUN_142cefe20 body=705 status=ok
// SIG undefined FUN_142cefe20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_142cefe20(longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                     float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_528 [32];
  undefined8 local_508;
  float local_500;
  undefined1 local_4f8 [48];
  undefined1 local_4c8 [1136];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_528;
  fVar6 = *(float *)(param_1 + 0x1208);
  if (fVar6 <= param_7) {
    *(undefined8 *)param_2 = *(undefined8 *)param_4;
    param_2[2] = param_4[2];
    return param_2;
  }
  if ((0.0 < param_6) && (param_7 < param_6)) {
    fVar6 = param_3[2];
    param_7 = param_7 / param_6;
    fVar7 = param_5[2];
    fVar1 = *param_5;
    fVar2 = *param_3;
    fVar3 = *param_3;
    param_2[1] = (param_5[1] - param_3[1]) * param_7 + param_3[1];
    *param_2 = (fVar1 - fVar2) * param_7 + fVar3;
    param_2[2] = (fVar7 - fVar6) * param_7 + fVar6;
    return param_2;
  }
  fVar7 = 1.0;
  if (0.0 < param_6) {
    param_3 = param_5;
  }
  local_508 = *(undefined8 *)param_3;
  local_500 = param_3[2];
  if (param_6 <= 0.0) {
LAB_142cefff3:
    param_7 = param_7 / fVar6;
    if (0.0 <= param_7) {
      if (1.0 <= param_7) goto LAB_142cf000a;
      goto LAB_142cf000e;
    }
    param_7 = 0.0;
  }
  else {
    if (*(longlong *)(param_1 + 0x1218) != 0) {
      FUN_142295fa0(*(longlong *)(param_1 + 0x1218),local_4c8);
      lVar4 = FTransformCurve::Evaluate(local_4c8,local_4f8,param_6,0x3f800000);
      fVar6 = *(float *)(lVar4 + 0x10);
      fVar7 = *(float *)(lVar4 + 0x14);
      fVar1 = *(float *)(lVar4 + 0x18);
      lVar4 = FTransformCurve::Evaluate(local_4c8,local_4f8,param_7,0x3f800000);
      fVar2 = *(float *)(lVar4 + 0x14);
      fVar3 = *(float *)(lVar4 + 0x18);
      *param_2 = (*(float *)(lVar4 + 0x10) - fVar6) + (float)local_508;
      param_2[1] = (fVar2 - fVar7) + local_508._4_4_;
      param_2[2] = (fVar3 - fVar1) + local_500;
      FUN_142255920(local_4c8);
      return param_2;
    }
    fVar6 = fVar6 - param_6;
    if (0.0 < fVar6) {
      param_7 = param_7 - param_6;
      goto LAB_142cefff3;
    }
LAB_142cf000a:
    param_7 = 1.0;
LAB_142cf000e:
    fVar6 = 1.0;
    if (param_7 == 1.0) goto LAB_142cf0053;
  }
  uVar5 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x1220);
  fVar7 = (float)FRichCurve::Eval(uVar5,param_7,0);
  uVar5 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x1298);
  fVar6 = (float)FRichCurve::Eval(uVar5,param_7,0);
LAB_142cf0053:
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  *param_2 = (*param_4 - (float)local_508) * fVar7 + (float)local_508;
  param_2[1] = (fVar1 - local_508._4_4_) * fVar7 + local_508._4_4_;
  param_2[2] = (fVar2 - local_500) * fVar6 + local_500;
  return param_2;
}



// FUNCTION 142cf00f0 FUN_142cf00f0 body=712 status=ok
// SIG undefined FUN_142cf00f0(void)

void FUN_142cf00f0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  lVar5 = *(longlong *)(param_1 + 0x168);
  if (lVar5 != 0) {
    lVar10 = 0;
    if (param_2 != '\0') {
      lVar10 = param_1;
    }
    FUN_142cf03c0(lVar5,lVar10);
  }
  uStack_a4 = 1;
  plVar2 = (longlong *)(param_1 + 0x2b0);
  local_a8 = 0;
  uVar3 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar4 = *puVar12;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar4 == 0) {
      lVar10 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar8 = local_a8 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar8;
      if (bVar6) goto LAB_142cf01ed;
      uVar4 = puVar12[lVar10 + 1];
    }
    uStack_a4 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar8 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_94 = (iStack_90 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_142cf01ed:
      uStack_94 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x2d8);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  uVar11 = uVar4 & 0xffffffe0;
  iStack_80 = local_a8;
  uStack_7c = uStack_a4;
  local_78 = puVar1;
  local_60 = plVar2;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  uStack_94 = uVar4;
  if (uVar4 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar9 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar8 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_142cf02c5;
      uVar9 = puVar12[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar9 = uVar9 - 1 & uVar9 ^ uVar9;
    iVar8 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_94 = (uVar11 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_142cf02c5:
      uStack_94 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_6c == uStack_94) && (local_78 == puVar1)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) break;
    lVar10 = *(longlong *)(*plVar2 + (longlong)(int)uStack_6c * 0x10);
    if ((lVar10 != lVar5) && (lVar10 != 0)) {
      lVar7 = FUN_1429bed90();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (((bVar6) && ((*(byte *)(lVar10 + 0xb8) & 1) != 0)) &&
         ((*(longlong *)(lVar10 + 400) == 0 ||
          (*(longlong *)(*(longlong *)(lVar10 + 400) + 0x118) != param_1)))) {
        lVar7 = 0;
        if (param_2 != '\0') {
          lVar7 = param_1;
        }
        FUN_142cf03c0(lVar10,lVar7,param_3,param_4);
      }
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  return;
}



// FUNCTION 142cf03c0 FUN_142cf03c0 body=455 status=ok
// SIG undefined FUN_142cf03c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cf03c0(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  code *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar7 = 0;
  if (param_1 != 0) {
    lVar4 = UAkAudioInputComponent::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && ((*(byte *)(param_1 + 0x34c) & 0x40) == 0)) {
      plVar8 = (longlong *)*param_3;
      plVar6 = plVar8 + (int)param_3[1];
      for (; plVar8 != plVar6; plVar8 = plVar8 + 1) {
        if (*plVar8 == param_1) goto LAB_142cf04b8;
      }
      if ((param_2 == 0) || (*(longlong *)(param_1 + 0x118) == param_2)) {
        if (*(int *)(param_4 + 0x40) != 0) {
          uVar5 = uVar7;
          if (*(longlong *)(param_4 + 0x30) == 0) {
            uVar5 = param_4 + 0x10;
          }
          if ((uVar5 != 0 || *(longlong *)(param_4 + 0x30) != 0) &&
             (cVar3 = FUN_142582750(param_4,param_1), cVar3 == '\0')) goto LAB_142cf04b8;
        }
        iVar1 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
        }
        *(longlong *)(*param_3 + (longlong)iVar1 * 8) = param_1;
      }
    }
  }
LAB_142cf04b8:
  plVar6 = *(longlong **)(param_1 + 0x1a0);
  uVar5 = (longlong)*(int *)(param_1 + 0x1a8) & 0x1fffffffffffffff;
  if (plVar6 + *(int *)(param_1 + 0x1a8) < plVar6) {
    uVar5 = uVar7;
  }
  if (uVar5 != 0) {
    do {
      if (*plVar6 != 0) {
        local_68 = (longlong *)0x0;
        local_58 = 0;
        local_98[0] = FUN_1407c3030;
        FUN_142cf03c0(*plVar6,param_2,param_3,local_98);
        if (local_58 != 0) {
          plVar8 = local_88;
          if (local_68 != (longlong *)0x0) {
            plVar8 = local_68;
          }
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x10))(plVar8,0);
          }
        }
        if (local_68 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      plVar6 = plVar6 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar5);
  }
  return;
}



// FUNCTION 142cf0590 FUN_142cf0590 body=723 status=ok
// SIG undefined FUN_142cf0590(void)

void FUN_142cf0590(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
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
  
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_142cf0870();
  }
  uStack_94 = 1;
  plVar1 = (longlong *)(param_1 + 0x2b0);
  uVar4 = *(uint *)(param_1 + 0x2d8);
  puVar3 = (uint *)(param_1 + 0x2c0);
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar4 != 0) {
    puVar13 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar3;
    }
    uVar5 = *puVar13;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar5 == 0) {
      lVar11 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar9 = local_98 + 1;
      bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar9;
      if (bVar6) goto LAB_142cf067d;
      uVar5 = puVar13[lVar11 + 1];
    }
    uStack_94 = uVar5 - 1 & uVar5 ^ uVar5;
    iVar9 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (iStack_80 - iVar9) + 0x1f;
    if ((int)uVar4 < (int)uStack_84) {
LAB_142cf067d:
      uStack_84 = uVar4;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x2d8);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar12 = uVar5 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar3;
  local_50 = plVar1;
  puStack_40 = puVar3;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar5;
  if (uVar5 != uVar4) {
    puVar13 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar3;
    }
    uVar10 = puVar13[(int)uVar5 >> 5] & -1 << ((byte)uVar5 & 0x1f);
    iVar9 = (int)uVar5 >> 5;
    while (uVar10 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_142cf0755;
      uVar10 = puVar13[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar10 = uVar10 - 1 & uVar10 ^ uVar10;
    iVar9 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (uVar12 - iVar9) + 0x1f;
    if ((int)uVar4 < (int)uStack_84) {
LAB_142cf0755:
      uStack_84 = uVar4;
    }
  }
  do {
    if ((uStack_5c == uStack_84) && (local_68 == puVar3)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      return;
    }
    lVar11 = *(longlong *)(*plVar1 + (longlong)(int)uStack_5c * 0x10);
    if (lVar11 != 0) {
      lVar7 = FUN_1429bed90();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (((bVar6) && ((*(byte *)(lVar11 + 0xb8) & 1) != 0)) &&
         ((*(longlong *)(lVar11 + 400) == 0 ||
          (*(longlong *)(*(longlong *)(lVar11 + 400) + 0x118) != param_1)))) {
        plVar8 = (longlong *)*param_2;
        plVar2 = plVar8 + (int)param_2[1];
        for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
          if (*plVar8 == lVar11) goto LAB_142cf082c;
        }
        FUN_142cf0870(lVar11,param_2,param_3);
      }
    }
LAB_142cf082c:
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  } while( true );
}



// FUNCTION 142cf0870 FUN_142cf0870 body=296 status=ok
// SIG undefined FUN_142cf0870(void)

void FUN_142cf0870(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  uVar6 = 0;
  if (param_1 != 0) {
    lVar4 = FUN_1429bed90();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(char *)(param_1 + 0x714) == '\0')) &&
       ((*(byte *)(param_1 + 0x24c) & 0x20) != 0)) {
      if (*(int *)(param_3 + 0x40) != 0) {
        uVar5 = uVar6;
        if (*(longlong *)(param_3 + 0x30) == 0) {
          uVar5 = param_3 + 0x10;
        }
        if (uVar5 != 0 || *(longlong *)(param_3 + 0x30) != 0) {
          cVar3 = FUN_142582750(param_3,param_1);
          if (cVar3 == '\0') goto LAB_142cf092f;
        }
      }
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1;
    }
  }
LAB_142cf092f:
  plVar7 = *(longlong **)(param_1 + 0x1a0);
  uVar5 = (longlong)*(int *)(param_1 + 0x1a8) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 0x1a8) < plVar7) {
    uVar5 = uVar6;
  }
  if (uVar5 != 0) {
    do {
      if (*plVar7 != 0) {
        FUN_142cf0870(*plVar7,param_2,param_3);
      }
      plVar7 = plVar7 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar5);
  }
  return;
}



// FUNCTION 142cf09a0 FUN_142cf09a0 body=712 status=ok
// SIG undefined FUN_142cf09a0(void)

void FUN_142cf09a0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  lVar5 = *(longlong *)(param_1 + 0x168);
  if (lVar5 != 0) {
    lVar10 = 0;
    if (param_2 != '\0') {
      lVar10 = param_1;
    }
    FUN_142cf0c70(lVar5,lVar10);
  }
  uStack_a4 = 1;
  plVar2 = (longlong *)(param_1 + 0x2b0);
  local_a8 = 0;
  uVar3 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar4 = *puVar12;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar4 == 0) {
      lVar10 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar8 = local_a8 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar8;
      if (bVar6) goto LAB_142cf0a9d;
      uVar4 = puVar12[lVar10 + 1];
    }
    uStack_a4 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar8 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_94 = (iStack_90 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_142cf0a9d:
      uStack_94 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x2d8);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  uVar11 = uVar4 & 0xffffffe0;
  iStack_80 = local_a8;
  uStack_7c = uStack_a4;
  local_78 = puVar1;
  local_60 = plVar2;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  uStack_94 = uVar4;
  if (uVar4 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar9 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar8 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_142cf0b75;
      uVar9 = puVar12[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar9 = uVar9 - 1 & uVar9 ^ uVar9;
    iVar8 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_94 = (uVar11 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_142cf0b75:
      uStack_94 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_6c == uStack_94) && (local_78 == puVar1)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) break;
    lVar10 = *(longlong *)(*plVar2 + (longlong)(int)uStack_6c * 0x10);
    if ((lVar10 != lVar5) && (lVar10 != 0)) {
      lVar7 = FUN_1429bed90();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (((bVar6) && ((*(byte *)(lVar10 + 0xb8) & 1) != 0)) &&
         ((*(longlong *)(lVar10 + 400) == 0 ||
          (*(longlong *)(*(longlong *)(lVar10 + 400) + 0x118) != param_1)))) {
        lVar7 = 0;
        if (param_2 != '\0') {
          lVar7 = param_1;
        }
        FUN_142cf0c70(lVar10,lVar7,param_3,param_4);
      }
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  return;
}



// FUNCTION 142cf0c70 FUN_142cf0c70 body=347 status=ok
// SIG undefined FUN_142cf0c70(void)

void FUN_142cf0c70(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  if (param_1 != 0) {
    lVar4 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(char *)(param_1 + 0x978) == '\0')) {
      plVar6 = (longlong *)*param_3;
      plVar7 = plVar6 + (int)param_3[1];
      for (; plVar6 != plVar7; plVar6 = plVar6 + 1) {
        if (*plVar6 == param_1) goto LAB_142cf0d60;
      }
      if ((param_2 == 0) || (*(longlong *)(param_1 + 0x118) == param_2)) {
        if (*(int *)(param_4 + 0x40) != 0) {
          uVar5 = uVar8;
          if (*(longlong *)(param_4 + 0x30) == 0) {
            uVar5 = param_4 + 0x10;
          }
          if ((uVar5 != 0 || *(longlong *)(param_4 + 0x30) != 0) &&
             (cVar3 = FUN_142582750(param_4,param_1), cVar3 == '\0')) goto LAB_142cf0d60;
        }
        iVar1 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
        }
        *(longlong *)(*param_3 + (longlong)iVar1 * 8) = param_1;
      }
    }
  }
LAB_142cf0d60:
  plVar7 = *(longlong **)(param_1 + 0x1a0);
  uVar5 = (longlong)*(int *)(param_1 + 0x1a8) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 0x1a8) < plVar7) {
    uVar5 = uVar8;
  }
  if (uVar5 != 0) {
    do {
      if (*plVar7 != 0) {
        FUN_142cf0c70(*plVar7,param_2,param_3,param_4);
      }
      plVar7 = plVar7 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar5);
  }
  return;
}



// FUNCTION 142cf0dd0 FUN_142cf0dd0 body=52 status=ok
// SIG undefined FUN_142cf0dd0(void)

undefined1 FUN_142cf0dd0(longlong param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x13c7) != '\0') && (*(char *)(param_1 + 0x13c5) == '\0')) {
    cVar1 = FUN_1407c3030(param_1 + 0x948);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cf0e10 FUN_142cf0e10 body=28 status=ok
// SIG undefined FUN_142cf0e10(void)

void FUN_142cf0e10(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  if (((param_2 == 0) || (param_2 != param_1[0x81])) || ((char)param_1[0x83] == '\0')) {
    return;
  }
  cVar1 = (char)param_1[0x83];
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x83) = 2;
    if ((longlong *)param_1[0x80] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x80] + 0x260))();
    }
    (**(code **)(*param_1 + 0x478))(param_1);
    cVar1 = (char)param_1[0x83];
  }
  if (cVar1 != '\x02') {
    if (cVar1 != '\x03') {
      return;
    }
    FUN_142ceb5d0(param_1);
    return;
  }
  FUN_142cf2c50(param_1,1,0);
  return;
}


