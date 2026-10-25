// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142f14920 FUN_142f14920 body=501 status=ok
// SIG undefined FUN_142f14920(void)

void FUN_142f14920(int *param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  float fVar9;
  
  iVar3 = param_1[4];
  uVar6 = 0;
  if (*param_1 < iVar3) {
    do {
      puVar5 = (undefined8 *)((longlong)*param_1 * 0x1c + *(longlong *)(param_1 + 2));
      *puVar5 = *(undefined8 *)(param_1 + 6);
      puVar5[1] = 0;
      iVar3 = rand();
      *(float *)(puVar5 + 3) = (float)iVar3 * 7.629627e-05 + 0.5;
      iVar3 = rand();
      fVar9 = (float)iVar3 * 0.0022583697 + 1.0;
      rand();
      uVar8 = __libm_sse2_sincosf_();
      *(float *)((longlong)puVar5 + 0x14) = -((float)uVar8 * fVar9);
      *(float *)(puVar5 + 2) = (float)((ulonglong)uVar8 >> 0x20) * fVar9;
      *param_1 = *param_1 + 1;
      iVar3 = param_1[4];
    } while (*param_1 < iVar3);
  }
  uVar7 = uVar6;
  if (0 < iVar3) {
    do {
      iVar3 = (int)uVar7;
      lVar2 = *(longlong *)(param_1 + 2);
      fVar9 = *(float *)(uVar6 + 0x18 + lVar2) - param_2;
      *(float *)(uVar6 + 0x18 + lVar2) = fVar9;
      if (fVar9 <= 0.0) {
        iVar1 = *param_1;
        iVar4 = iVar1 + -1;
        *param_1 = iVar4;
        if (iVar3 != iVar4) {
          FGenericPlatformMemory::MemswapGreaterThan8
                    (uVar6 + *(longlong *)(param_1 + 2),
                     *(longlong *)(param_1 + 2) + -0x1c + (longlong)iVar1 * 0x1c,0x1c);
        }
        iVar3 = iVar3 + -1;
        uVar6 = uVar6 - 0x1c;
      }
      else {
        *(float *)(uVar6 + 8 + lVar2) =
             param_2 * *(float *)(uVar6 + 0x10 + lVar2) + *(float *)(uVar6 + 8 + lVar2);
        *(float *)(uVar6 + 0xc + lVar2) =
             *(float *)(uVar6 + 0x14 + lVar2) * param_2 + *(float *)(uVar6 + 0xc + lVar2);
      }
      uVar6 = uVar6 + 0x1c;
      uVar7 = (ulonglong)(iVar3 + 1U);
    } while ((int)(iVar3 + 1U) < param_1[4]);
  }
  return;
}



// FUNCTION 142f14b20 FUN_142f14b20 body=459 status=ok
// SIG undefined FUN_142f14b20(void)

void FUN_142f14b20(longlong param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x2f0);
  if (param_2 != '\0') {
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x278))(plVar2,0);
    }
    plVar2 = *(longlong **)(param_1 + 0x2f8);
    if (plVar2 == (longlong *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000142f14b61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x278))(plVar2,0);
    return;
  }
  if (plVar2 != (longlong *)0x0) {
    iVar1 = *(int *)(param_1 + 0x2d8);
    if (((iVar1 == 0) || (iVar1 < 0)) || (*(int *)(param_1 + 0x2d0) <= iVar1)) {
LAB_142f14cba:
      if (*(char *)(param_1 + 0x308) != '\0') goto LAB_142f14bf1;
      uVar4 = 0;
    }
    else {
      if (0 < *(int *)(param_1 + 0x2e8)) {
        iVar5 = 0;
        if (0 < iVar1) {
          do {
            piVar3 = *(int **)(param_1 + 0x2e0);
            while( true ) {
              if (piVar3 == *(int **)(param_1 + 0x2e0) + *(int *)(param_1 + 0x2e8))
              goto LAB_142f14bf1;
              if (*piVar3 == iVar5) break;
              piVar3 = piVar3 + 1;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar1);
        }
        goto LAB_142f14cba;
      }
LAB_142f14bf1:
      uVar4 = 1;
    }
    (**(code **)(*plVar2 + 0x278))(plVar2,uVar4);
  }
  plVar2 = *(longlong **)(param_1 + 0x2f8);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2d0);
  iVar5 = *(int *)(param_1 + 0x2d8);
  if (((iVar5 == iVar1 + -1) || (iVar5 < 0)) || (iVar1 <= iVar5)) {
LAB_142f14cde:
    if (*(char *)(param_1 + 0x308) == '\0') {
      uVar4 = 0;
      goto LAB_142f14c8f;
    }
  }
  else if (0 < *(int *)(param_1 + 0x2e8)) {
    iVar5 = iVar5 + 1;
    if (iVar5 < iVar1) {
      do {
        piVar3 = *(int **)(param_1 + 0x2e0);
        while( true ) {
          if (piVar3 == *(int **)(param_1 + 0x2e0) + *(int *)(param_1 + 0x2e8)) goto LAB_142f14c8d;
          if (*piVar3 == iVar5) break;
          piVar3 = piVar3 + 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    goto LAB_142f14cde;
  }
LAB_142f14c8d:
  uVar4 = 1;
LAB_142f14c8f:
  (**(code **)(*plVar2 + 0x278))(plVar2,uVar4);
  return;
}



// FUNCTION 142f14cf0 FUN_142f14cf0 body=1487 status=ok
// SIG undefined FUN_142f14cf0(void)

void FUN_142f14cf0(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  float fVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_148;
  float local_144;
  float local_140;
  undefined4 local_138;
  float local_134;
  float local_130;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8 [16];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined1 local_c8 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [128];
  
  cVar4 = FUN_14044af00(param_1 + 4,0);
  if ((((cVar4 != '\0') && (cVar4 = FUN_14044af00(param_1 + 5,0), cVar4 != '\0')) &&
      (cVar4 = FUN_14044af00(param_1 + 6,0), cVar4 != '\0')) && (*param_1 != 0)) {
    plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 4);
    (**(code **)(*plVar6 + 0x610))(plVar6,&local_118,local_a8);
    fVar15 = *(float *)((longlong)param_1 + 0x44);
    fVar17 = *(float *)(param_1 + 9);
    fVar18 = *(float *)((longlong)param_1 + 0x4c);
    *(undefined8 *)((longlong)param_1 + 0x44) = local_118;
    *(float *)((longlong)param_1 + 0x4c) = local_110;
    plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 5);
    lVar7 = FWeakObjectPtr::Get(param_1 + 5);
    lVar2 = *(longlong *)(lVar7 + 0x168);
    if (lVar2 == 0) {
      uVar13 = (undefined4)DAT_1468b5da0;
      uVar14 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_120 = (float)DAT_1468b5da8;
    }
    else {
      local_b8 = *(float *)(lVar2 + 0x210);
      fStack_b4 = *(float *)(lVar2 + 0x214);
      fStack_b0 = *(float *)(lVar2 + 0x218);
      fStack_ac = *(float *)(lVar2 + 0x21c);
      auVar3._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != fStack_b4);
      auVar3._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != local_b8);
      auVar3._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fStack_b0);
      auVar3._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != fStack_ac);
      iVar5 = movmskps((int)lVar7,auVar3);
      if (iVar5 != 0) {
        *(float *)(lVar2 + 0x250) = local_b8;
        *(float *)(lVar2 + 0x254) = fStack_b4;
        *(float *)(lVar2 + 600) = fStack_b0;
        *(float *)(lVar2 + 0x25c) = fStack_ac;
        puVar8 = (undefined8 *)FQuat::Rotator(&local_b8,local_98);
        *(undefined8 *)(lVar2 + 0x260) = *puVar8;
        *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar8 + 1);
      }
      uVar13 = (undefined4)*(undefined8 *)(lVar2 + 0x260);
      uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x260) >> 0x20);
      local_120 = (float)*(undefined4 *)(lVar2 + 0x268);
    }
    local_128 = CONCAT44(uVar14,uVar13);
    local_108 = local_128;
    local_100 = local_120;
    uVar9 = (**(code **)(*plVar6 + 0x308))(plVar6,local_c8);
    FRotator::UnrotateVector(&local_128,&local_148,uVar9);
    lVar2 = *param_1;
    fVar12 = local_148 * *(float *)(lVar2 + 0x30);
    fVar19 = local_144 * *(float *)(lVar2 + 0x34);
    fVar16 = local_140 * *(float *)(lVar2 + 0x38);
    fVar1 = *(float *)(lVar2 + 0x54);
    local_148 = -fVar1;
    if ((local_148 <= fVar12) && (local_148 = fVar12, fVar1 <= fVar12)) {
      local_148 = fVar1;
    }
    fVar1 = *(float *)(lVar2 + 0x58);
    local_144 = -fVar1;
    if ((local_144 <= fVar19) && (local_144 = fVar19, fVar1 <= fVar19)) {
      local_144 = fVar1;
    }
    fVar1 = *(float *)(lVar2 + 0x5c);
    local_140 = -fVar1;
    if ((local_140 <= fVar16) && (local_140 = fVar16, fVar1 <= fVar16)) {
      local_140 = fVar1;
    }
    fVar1 = *(float *)(param_1 + 10);
    puVar8 = (undefined8 *)(lVar2 + 0x48);
    if (fVar1 * fVar1 + *(float *)((longlong)param_1 + 0x54) * *(float *)((longlong)param_1 + 0x54)
        + *(float *)(param_1 + 0xb) * *(float *)(param_1 + 0xb) <=
        local_148 * local_148 + local_144 * local_144 + local_140 * local_140) {
      puVar8 = (undefined8 *)(lVar2 + 0x3c);
    }
    uVar9 = *puVar8;
    local_120 = *(float *)(puVar8 + 1);
    uVar13 = FMath::FInterpTo(fVar1,local_148,param_2,(int)uVar9);
    *(undefined4 *)(param_1 + 10) = uVar13;
    uVar13 = FMath::FInterpTo(*(undefined4 *)((longlong)param_1 + 0x54),local_144,param_2,
                              (int)((ulonglong)uVar9 >> 0x20));
    *(undefined4 *)((longlong)param_1 + 0x54) = uVar13;
    uVar13 = FMath::FInterpTo((int)param_1[0xb],local_140,param_2,local_120);
    *(undefined4 *)(param_1 + 0xb) = uVar13;
    uVar9 = FWeakObjectPtr::Get(param_1 + 6);
    FUN_1426e1ca0(uVar9,&local_e8);
    uVar9 = FWeakObjectPtr::Get(param_1 + 6);
    FUN_1426e1d20(uVar9,local_f8);
    pfVar10 = (float *)FRotator::Vector(local_f8,local_c8);
    local_120 = local_e0 + pfVar10[2];
    local_d0 = (local_120 - *(float *)(param_1 + 8)) - (local_110 - fVar18);
    local_d8 = ((local_e8 + *pfVar10) - *(float *)(param_1 + 7)) - ((float)local_118 - fVar15);
    local_d4 = ((local_e4 + pfVar10[1]) - *(float *)((longlong)param_1 + 0x3c)) -
               (local_118._4_4_ - fVar17);
    param_1[7] = CONCAT44(local_e4 + pfVar10[1],local_e8 + *pfVar10);
    *(float *)(param_1 + 8) = local_120;
    FRotator::UnrotateVector(local_f8,&local_138,&local_d8);
    uVar9 = FWeakObjectPtr::Get(param_1 + 4);
    cVar4 = FUN_142dd3d20(uVar9);
    lVar2 = *param_1;
    if (cVar4 == '\0') {
      fVar15 = 1.0;
    }
    else {
      fVar15 = *(float *)(lVar2 + 0x80);
    }
    local_138 = 0;
    fVar17 = *(float *)(lVar2 + 100) * fVar15 * local_130;
    fVar18 = *(float *)(lVar2 + 0x60) * fVar15 * local_134;
    fVar15 = *(float *)(lVar2 + 0x78);
    puVar11 = (undefined4 *)(lVar2 + 0x70);
    if (*(float *)((longlong)param_1 + 0x5c) * *(float *)((longlong)param_1 + 0x5c) +
        *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc) +
        *(float *)((longlong)param_1 + 100) * *(float *)((longlong)param_1 + 100) <=
        fVar18 * fVar18 + fVar17 * fVar17) {
      puVar11 = (undefined4 *)(lVar2 + 0x68);
    }
    local_134 = -fVar15;
    uVar13 = *puVar11;
    uVar14 = puVar11[1];
    if ((local_134 <= fVar18) && (local_134 = fVar18, fVar15 <= fVar18)) {
      local_134 = fVar15;
    }
    fVar15 = *(float *)(lVar2 + 0x7c);
    local_130 = -fVar15;
    if ((local_130 <= fVar17) && (local_130 = fVar17, fVar15 <= fVar17)) {
      local_130 = fVar15;
    }
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
    uVar13 = FMath::FInterpTo((int)param_1[0xc],local_134,param_2,uVar13);
    *(undefined4 *)(param_1 + 0xc) = uVar13;
    fVar17 = (float)FMath::FInterpTo(*(undefined4 *)((longlong)param_1 + 100),local_130,param_2,
                                     uVar14);
    *(float *)((longlong)param_1 + 100) = fVar17;
    fVar15 = *(float *)(param_1 + 0xb);
    *param_3 = CONCAT44(*(float *)(param_1 + 0xc) + *(float *)((longlong)param_1 + 0x54),
                        *(float *)((longlong)param_1 + 0x5c) + *(float *)(param_1 + 10));
    *(float *)(param_3 + 1) = fVar17 + fVar15;
  }
  return;
}



// FUNCTION 142f152c0 FUN_142f152c0 body=270 status=ok
// SIG undefined FUN_142f152c0(void)

void FUN_142f152c0(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  piVar5 = *(int **)(param_1 + 0x3a8);
  piVar1 = piVar5 + *(int *)(param_1 + 0x3b0);
  for (; piVar5 != piVar1; piVar5 = piVar5 + 1) {
    iVar3 = *piVar5;
    if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x3a0))) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x398) + 0x18 + (longlong)iVar3 * 0x30);
      if (lVar4 != 0) {
        cVar2 = *(char *)(param_1 + 0x1e1);
        iVar6 = 0;
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x398) + 0x2c + (longlong)iVar3 * 0x30);
        iVar7 = 0;
        if (cVar2 == '\0') {
          iVar7 = iVar3 / *(int *)(param_1 + 0x37c);
          iVar6 = iVar3 % *(int *)(param_1 + 0x37c);
        }
        else if (cVar2 == '\x01') {
          iVar6 = iVar3 / *(int *)(param_1 + 0x378);
          iVar7 = iVar3 % *(int *)(param_1 + 0x378);
        }
        fVar8 = (float)iVar6 * *(float *)(param_1 + 0x368) + *(float *)(param_1 + 0x370);
        fVar9 = (float)iVar7 * *(float *)(param_1 + 0x36c) + *(float *)(param_1 + 0x374);
        if (cVar2 == '\0') {
          fVar9 = fVar9 - *(float *)(param_1 + 0x394);
        }
        else if (cVar2 == '\x01') {
          fVar8 = fVar8 - *(float *)(param_1 + 0x394);
        }
        FUN_14208ff10(lVar4,fVar8,fVar9);
      }
    }
  }
  return;
}



// FUNCTION 142f153d0 FUN_142f153d0 body=210 status=ok
// SIG undefined FUN_142f153d0(void)

void FUN_142f153d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  local_res8[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_14170c210(local_res8);
  }
  FWeakObjectPtr::operator=(&local_res10,param_1);
  uVar2 = local_res8[0];
  local_res8[0] = 0xffffffff;
  local_38 = 0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c50;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res10;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_res14;
    *(undefined4 *)(puVar1 + 3) = uVar2;
    uVar2 = 0xffffffff;
  }
  local_68[0] = &LAB_142ee3970;
  FUN_14208c5d0(param_1,local_68);
  FUN_1416f8340(uVar2);
  FUN_1416f8340(local_res8[0]);
  return;
}



// FUNCTION 142f154b0 FUN_142f154b0 body=99 status=ok
// SIG undefined FUN_142f154b0(void)

ulonglong FUN_142f154b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  ulonglong in_RAX;
  
  lVar1 = DAT_146b3e270;
  if (*(char *)(param_1 + 0x35) == '\0') goto LAB_142f1550c;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 == DAT_1468c21c0) goto LAB_142f154f8;
    in_RAX = 4;
  }
  else {
LAB_142f154f8:
    in_RAX = 0;
  }
  if (*(int *)(in_RAX + lVar1) != 0) {
    return 1;
  }
LAB_142f1550c:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142f15520 FUN_142f15520 body=112 status=ok
// SIG undefined FUN_142f15520(void)

undefined8 FUN_142f15520(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined1 uVar4;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    uVar4 = 1;
    cVar1 = FUN_142edb1a0();
    if (cVar1 != '\0') {
      uVar3 = 1;
      puVar2 = (undefined8 *)FUN_142eeeda0(param_1,&local_res8,param_3,param_4,uVar4);
      goto LAB_142f15575;
    }
  }
  puVar2 = &local_res8;
  local_res8 = DAT_1468b5d88;
  uVar3 = 0;
LAB_142f15575:
  *param_3 = *puVar2;
  return uVar3;
}



// FUNCTION 142f15590 FUN_142f15590 body=25 status=ok
// SIG undefined FUN_142f15590(void)

void FUN_142f15590(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_2 + 0x10c);
  return;
}



// FUNCTION 142f155b0 FUN_142f155b0 body=316 status=ok
// SIG undefined FUN_142f155b0(void)

undefined1 * FUN_142f155b0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x2f0);
  if (cVar3 != '\0') {
    local_48 = *(undefined8 *)(param_4 + 0x18);
    local_40 = *(undefined8 *)(param_4 + 0x20);
    uVar2 = *(undefined4 *)(param_4 + 0xc);
    local_38 = *(longlong *)(param_4 + 0x28);
    uVar1 = *(undefined4 *)(param_4 + 0x38);
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x2f0);
    cVar3 = FUN_142ef0500(uVar4,&local_48,uVar1,uVar2);
    if (cVar3 != '\0') {
      *param_2 = 1;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_2 + 0x58) = 0;
      *(undefined8 *)(param_2 + 0x60) = 0;
      *(undefined8 *)(param_2 + 0x68) = 0;
      *(undefined8 *)(param_2 + 0x70) = 0;
      *(undefined8 *)(param_2 + 0x78) = 0;
      *(undefined8 *)(param_2 + 0x80) = 0;
      *(undefined8 *)(param_2 + 0x88) = 0;
      *(undefined8 *)(param_2 + 0x90) = 0;
      *(undefined8 *)(param_2 + 0x98) = 0;
      *(undefined8 *)(param_2 + 0xa0) = 0;
      *(undefined8 *)(param_2 + 0xa8) = 0;
      *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      return param_2;
    }
  }
  FUN_1417c9950(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 142f156f0 FUN_142f156f0 body=428 status=ok
// SIG undefined FUN_142f156f0(void)

undefined1 * FUN_142f156f0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  bVar10 = false;
  cVar8 = FWeakObjectPtr::IsValid(param_1 + 0x2f0);
  if (cVar8 == '\0') {
LAB_142f15768:
    bVar5 = false;
  }
  else {
    local_58 = *(undefined8 *)(param_4 + 0x18);
    local_50 = *(undefined8 *)(param_4 + 0x20);
    local_48 = *(longlong **)(param_4 + 0x28);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    bVar10 = true;
    cVar8 = FKey::IsGamepadKey(&local_58);
    if (cVar8 == '\0') goto LAB_142f15768;
    bVar5 = true;
  }
  plVar7 = local_48;
  if ((bVar10) && (local_48 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (bVar5) {
    local_40 = *(undefined8 *)(param_4 + 0x18);
    uVar4 = *(undefined4 *)(param_4 + 0xc);
    local_38 = *(undefined8 *)(param_4 + 0x20);
    local_30 = *(longlong *)(param_4 + 0x28);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x2f0);
    cVar8 = FUN_142ef09f0(uVar9,&local_40,1,uVar4);
    if (cVar8 != '\0') {
      *param_2 = 1;
      goto LAB_142f15817;
    }
  }
  *param_2 = 0;
LAB_142f15817:
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 142f158a0 FUN_142f158a0 body=436 status=ok
// SIG undefined FUN_142f158a0(void)

undefined1 * FUN_142f158a0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  bVar10 = false;
  cVar8 = FWeakObjectPtr::IsValid(param_1 + 0x2f0);
  if (cVar8 == '\0') {
LAB_142f15918:
    bVar5 = false;
  }
  else {
    local_58 = *(undefined8 *)(param_4 + 0x18);
    local_50 = *(undefined8 *)(param_4 + 0x20);
    local_48 = *(longlong **)(param_4 + 0x28);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    bVar10 = true;
    cVar8 = FKey::IsGamepadKey(&local_58);
    if (cVar8 == '\0') goto LAB_142f15918;
    bVar5 = true;
  }
  plVar7 = local_48;
  if ((bVar10) && (local_48 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (bVar5) {
    local_40 = *(undefined8 *)(param_4 + 0x18);
    uVar4 = *(undefined4 *)(param_4 + 0xc);
    cVar8 = *(char *)(param_4 + 10);
    local_38 = *(undefined8 *)(param_4 + 0x20);
    local_30 = *(longlong *)(param_4 + 0x28);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x2f0);
    cVar8 = FUN_142ef09f0(uVar9,&local_40,-(cVar8 != '\0') & 2,uVar4);
    if (cVar8 != '\0') {
      *param_2 = 1;
      goto LAB_142f159c7;
    }
  }
  *param_2 = 0;
LAB_142f159c7:
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 142f15a80 FUN_142f15a80 body=47 status=ok
// SIG undefined FUN_142f15a80(void)

longlong FUN_142f15a80(void)

{
  if (DAT_146b3ec38 == 0) {
    FUN_141786440(&DAT_146b3ec38,&PTR_GetPrivateStaticClass_145994d50);
  }
  return DAT_146b3ec38;
}



// FUNCTION 142f15ab0 FUN_142f15ab0 body=47 status=ok
// SIG undefined FUN_142f15ab0(void)

longlong FUN_142f15ab0(void)

{
  if (DAT_146b3ebf8 == 0) {
    FUN_141786a30(&DAT_146b3ebf8,&PTR_FUN_14673eef0);
  }
  return DAT_146b3ebf8;
}



// FUNCTION 142f15ae0 FUN_142f15ae0 body=47 status=ok
// SIG undefined FUN_142f15ae0(void)

longlong FUN_142f15ae0(void)

{
  if (DAT_146b3ec00 == 0) {
    FUN_141786a30(&DAT_146b3ec00,&PTR_FUN_14673ef70);
  }
  return DAT_146b3ec00;
}



// FUNCTION 142f15b10 FUN_142f15b10 body=47 status=ok
// SIG undefined FUN_142f15b10(void)

longlong FUN_142f15b10(void)

{
  if (DAT_146b3ec08 == 0) {
    FUN_141786a30(&DAT_146b3ec08,&PTR_FUN_14673f030);
  }
  return DAT_146b3ec08;
}



// FUNCTION 142f15b40 FUN_142f15b40 body=47 status=ok
// SIG undefined FUN_142f15b40(void)

longlong FUN_142f15b40(void)

{
  if (DAT_146b3ec10 == 0) {
    FUN_141786a30(&DAT_146b3ec10,&PTR_FUN_14673f0e0);
  }
  return DAT_146b3ec10;
}



// FUNCTION 142f15b70 FUN_142f15b70 body=47 status=ok
// SIG undefined FUN_142f15b70(void)

longlong FUN_142f15b70(void)

{
  if (DAT_146b3ec18 == 0) {
    FUN_141786a30(&DAT_146b3ec18,&PTR_FUN_14673f1a0);
  }
  return DAT_146b3ec18;
}



// FUNCTION 142f15ba0 FUN_142f15ba0 body=47 status=ok
// SIG undefined FUN_142f15ba0(void)

longlong FUN_142f15ba0(void)

{
  if (DAT_146b3ec20 == 0) {
    FUN_141786a30(&DAT_146b3ec20,&PTR_FUN_14673f250);
  }
  return DAT_146b3ec20;
}



// FUNCTION 142f15bd0 FUN_142f15bd0 body=47 status=ok
// SIG undefined FUN_142f15bd0(void)

longlong FUN_142f15bd0(void)

{
  if (DAT_146b3ec28 == 0) {
    FUN_141786a30(&DAT_146b3ec28,&PTR_FUN_14673f2d0);
  }
  return DAT_146b3ec28;
}



// FUNCTION 142f15c00 FUN_142f15c00 body=47 status=ok
// SIG undefined FUN_142f15c00(void)

longlong FUN_142f15c00(void)

{
  if (DAT_146b3ec30 == 0) {
    FUN_141786a30(&DAT_146b3ec30,&PTR_FUN_14673f380);
  }
  return DAT_146b3ec30;
}



// FUNCTION 142f15c40 FUN_142f15c40 body=53 status=ok
// SIG undefined FUN_142f15c40(void)

void FUN_142f15c40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_14599c928;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f15c80 FUN_142f15c80 body=53 status=ok
// SIG undefined FUN_142f15c80(void)

void FUN_142f15c80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_14599ca40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f15cd0 FUN_142f15cd0 body=47 status=ok
// SIG undefined FUN_142f15cd0(void)

longlong FUN_142f15cd0(void)

{
  if (DAT_146b3ed00 == 0) {
    FUN_141786a30(&DAT_146b3ed00,&PTR_FUN_146740000);
  }
  return DAT_146b3ed00;
}



// FUNCTION 142f15d00 FUN_142f15d00 body=47 status=ok
// SIG undefined FUN_142f15d00(void)

longlong FUN_142f15d00(void)

{
  if (DAT_146b3eda8 == 0) {
    FUN_141786440(&DAT_146b3eda8,&PTR_thunk_FUN_142f18d50_145995c40);
  }
  return DAT_146b3eda8;
}



// FUNCTION 142f15d30 FUN_142f15d30 body=47 status=ok
// SIG undefined FUN_142f15d30(void)

longlong FUN_142f15d30(void)

{
  if (DAT_146b3ed20 == 0) {
    FUN_141786a30(&DAT_146b3ed20,&PTR_FUN_1467400c0);
  }
  return DAT_146b3ed20;
}



// FUNCTION 142f15d60 FUN_142f15d60 body=47 status=ok
// SIG undefined FUN_142f15d60(void)

longlong FUN_142f15d60(void)

{
  if (DAT_146b3ed28 == 0) {
    FUN_141786a30(&DAT_146b3ed28,&PTR_FUN_146740180);
  }
  return DAT_146b3ed28;
}



// FUNCTION 142f15d90 FUN_142f15d90 body=47 status=ok
// SIG undefined FUN_142f15d90(void)

longlong FUN_142f15d90(void)

{
  if (DAT_146b3ed30 == 0) {
    FUN_141786a30(&DAT_146b3ed30,&PTR_FUN_146740240);
  }
  return DAT_146b3ed30;
}



// FUNCTION 142f15dc0 FUN_142f15dc0 body=47 status=ok
// SIG undefined FUN_142f15dc0(void)

longlong FUN_142f15dc0(void)

{
  if (DAT_146b3ed38 == 0) {
    FUN_141786a30(&DAT_146b3ed38,&PTR_FUN_1467402d0);
  }
  return DAT_146b3ed38;
}



// FUNCTION 142f15df0 FUN_142f15df0 body=47 status=ok
// SIG undefined FUN_142f15df0(void)

longlong FUN_142f15df0(void)

{
  if (DAT_146b3ed40 == 0) {
    FUN_141786a30(&DAT_146b3ed40,&PTR_FUN_1467403e0);
  }
  return DAT_146b3ed40;
}



// FUNCTION 142f15e20 FUN_142f15e20 body=47 status=ok
// SIG undefined FUN_142f15e20(void)

longlong FUN_142f15e20(void)

{
  if (DAT_146b3ed48 == 0) {
    FUN_141786a30(&DAT_146b3ed48,&PTR_FUN_1467404f0);
  }
  return DAT_146b3ed48;
}



// FUNCTION 142f15e50 FUN_142f15e50 body=47 status=ok
// SIG undefined FUN_142f15e50(void)

longlong FUN_142f15e50(void)

{
  if (DAT_146b3ed50 == 0) {
    FUN_141786a30(&DAT_146b3ed50,&PTR_FUN_146740600);
  }
  return DAT_146b3ed50;
}



// FUNCTION 142f15e80 FUN_142f15e80 body=47 status=ok
// SIG undefined FUN_142f15e80(void)

longlong FUN_142f15e80(void)

{
  if (DAT_146b3ed58 == 0) {
    FUN_141786a30(&DAT_146b3ed58,&PTR_FUN_146740710);
  }
  return DAT_146b3ed58;
}



// FUNCTION 142f15eb0 FUN_142f15eb0 body=47 status=ok
// SIG undefined FUN_142f15eb0(void)

longlong FUN_142f15eb0(void)

{
  if (DAT_146b3ed60 == 0) {
    FUN_141786a30(&DAT_146b3ed60,&PTR_FUN_146740820);
  }
  return DAT_146b3ed60;
}



// FUNCTION 142f15ee0 FUN_142f15ee0 body=47 status=ok
// SIG undefined FUN_142f15ee0(void)

longlong FUN_142f15ee0(void)

{
  if (DAT_146b3ed68 == 0) {
    FUN_141786a30(&DAT_146b3ed68,&PTR_FUN_1467408b0);
  }
  return DAT_146b3ed68;
}



// FUNCTION 142f15f10 FUN_142f15f10 body=47 status=ok
// SIG undefined FUN_142f15f10(void)

longlong FUN_142f15f10(void)

{
  if (DAT_146b3ed70 == 0) {
    FUN_141786a30(&DAT_146b3ed70,&PTR_FUN_146740940);
  }
  return DAT_146b3ed70;
}



// FUNCTION 142f15f40 FUN_142f15f40 body=47 status=ok
// SIG undefined FUN_142f15f40(void)

longlong FUN_142f15f40(void)

{
  if (DAT_146b3ed78 == 0) {
    FUN_141786a30(&DAT_146b3ed78,&PTR_FUN_146740aa0);
  }
  return DAT_146b3ed78;
}



// FUNCTION 142f15f70 FUN_142f15f70 body=47 status=ok
// SIG undefined FUN_142f15f70(void)

longlong FUN_142f15f70(void)

{
  if (DAT_146b3ed80 == 0) {
    FUN_141786a30(&DAT_146b3ed80,&PTR_FUN_146740b60);
  }
  return DAT_146b3ed80;
}



// FUNCTION 142f15fa0 FUN_142f15fa0 body=47 status=ok
// SIG undefined FUN_142f15fa0(void)

longlong FUN_142f15fa0(void)

{
  if (DAT_146b3ed88 == 0) {
    FUN_141786a30(&DAT_146b3ed88,&PTR_FUN_146740c20);
  }
  return DAT_146b3ed88;
}



// FUNCTION 142f15fd0 FUN_142f15fd0 body=47 status=ok
// SIG undefined FUN_142f15fd0(void)

longlong FUN_142f15fd0(void)

{
  if (DAT_146b3ed90 == 0) {
    FUN_141786a30(&DAT_146b3ed90,&PTR_FUN_146740d30);
  }
  return DAT_146b3ed90;
}



// FUNCTION 142f16000 FUN_142f16000 body=47 status=ok
// SIG undefined FUN_142f16000(void)

longlong FUN_142f16000(void)

{
  if (DAT_146b3ed98 == 0) {
    FUN_141786a30(&DAT_146b3ed98,&PTR_FUN_146740df0);
  }
  return DAT_146b3ed98;
}



// FUNCTION 142f16030 FUN_142f16030 body=47 status=ok
// SIG undefined FUN_142f16030(void)

longlong FUN_142f16030(void)

{
  if (DAT_146b3eda0 == 0) {
    FUN_141786a30(&DAT_146b3eda0,&PTR_FUN_146740f00);
  }
  return DAT_146b3eda0;
}



// FUNCTION 142f16080 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGHUDEmoteMenu::GetPrivateStaticClass(void)

{
  if (DAT_146b3ead8 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxComboBoxDropdownMenu",&DAT_146b3ead8,
                  StaticRegisterNativesUGHUDEmoteMenu,0x318,0x10000000,0,L"Engine",FUN_142f17480,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGPasswordResetPage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b3ead8;
}



// FUNCTION 142f16130 FUN_142f16130 body=162 status=ok
// SIG undefined FUN_142f16130(void)

longlong FUN_142f16130(void)

{
  if (DAT_146b3eaf8 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxComboBox",&DAT_146b3eaf8,FUN_142f19020,0x358,0x10000000,0,
                  L"Engine",FUN_142f173e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14141c8d0,&LAB_140447700,0);
  }
  return DAT_146b3eaf8;
}



// FUNCTION 142f161e0 FUN_142f161e0 body=47 status=ok
// SIG undefined FUN_142f161e0(void)

longlong FUN_142f161e0(void)

{
  if (DAT_146b3ead0 == 0) {
    FUN_141786440(&DAT_146b3ead0,&PTR_GetPrivateStaticClass_1459961d0);
  }
  return DAT_146b3ead0;
}



// FUNCTION 142f16210 FUN_142f16210 body=47 status=ok
// SIG undefined FUN_142f16210(void)

longlong FUN_142f16210(void)

{
  if (DAT_146b3eac0 == 0) {
    FUN_141786a30(&DAT_146b3eac0,&PTR_FUN_14673d5a0);
  }
  return DAT_146b3eac0;
}



// FUNCTION 142f16240 FUN_142f16240 body=47 status=ok
// SIG undefined FUN_142f16240(void)

longlong FUN_142f16240(void)

{
  if (DAT_146b3eac8 == 0) {
    FUN_141786a30(&DAT_146b3eac8,&PTR_FUN_14673d620);
  }
  return DAT_146b3eac8;
}



// FUNCTION 142f16270 FUN_142f16270 body=47 status=ok
// SIG undefined FUN_142f16270(void)

longlong FUN_142f16270(void)

{
  if (DAT_146b3eaf0 == 0) {
    FUN_141786440(&DAT_146b3eaf0,&PTR_FUN_145996530);
  }
  return DAT_146b3eaf0;
}



// FUNCTION 142f162a0 FUN_142f162a0 body=47 status=ok
// SIG undefined FUN_142f162a0(void)

longlong FUN_142f162a0(void)

{
  if (DAT_146b3eae0 == 0) {
    FUN_141786a30(&DAT_146b3eae0,&PTR_FUN_14673d800);
  }
  return DAT_146b3eae0;
}



// FUNCTION 142f162d0 FUN_142f162d0 body=47 status=ok
// SIG undefined FUN_142f162d0(void)

longlong FUN_142f162d0(void)

{
  if (DAT_146b3eae8 == 0) {
    FUN_141786a30(&DAT_146b3eae8,&PTR_FUN_14673d8c0);
  }
  return DAT_146b3eae8;
}



// FUNCTION 142f16320 FUN_142f16320 body=162 status=ok
// SIG undefined FUN_142f16320(void)

longlong FUN_142f16320(void)

{
  if (DAT_146b3ec60 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxDragDropContainerInterface",&DAT_146b3ec60,FUN_140447710,
                  0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b3ec60;
}



// FUNCTION 142f163f0 FUN_142f163f0 body=47 status=ok
// SIG undefined FUN_142f163f0(void)

longlong FUN_142f163f0(void)

{
  if (DAT_146b3ecd8 == 0) {
    FUN_141786440(&DAT_146b3ecd8,&PTR_GetPrivateStaticClass_145997a80);
  }
  return DAT_146b3ecd8;
}



// FUNCTION 142f16420 FUN_142f16420 body=47 status=ok
// SIG undefined FUN_142f16420(void)

longlong FUN_142f16420(void)

{
  if (DAT_146b3ecb8 == 0) {
    FUN_141786a30(&DAT_146b3ecb8,&PTR_FUN_14673fc20);
  }
  return DAT_146b3ecb8;
}



// FUNCTION 142f16450 FUN_142f16450 body=47 status=ok
// SIG undefined FUN_142f16450(void)

longlong FUN_142f16450(void)

{
  if (DAT_146b3ecc0 == 0) {
    FUN_141786a30(&DAT_146b3ecc0,&PTR_FUN_14673fcb0);
  }
  return DAT_146b3ecc0;
}



// FUNCTION 142f16480 FUN_142f16480 body=47 status=ok
// SIG undefined FUN_142f16480(void)

longlong FUN_142f16480(void)

{
  if (DAT_146b3ecc8 == 0) {
    FUN_141786a30(&DAT_146b3ecc8,&PTR_FUN_14673fd40);
  }
  return DAT_146b3ecc8;
}



// FUNCTION 142f164b0 FUN_142f164b0 body=47 status=ok
// SIG undefined FUN_142f164b0(void)

longlong FUN_142f164b0(void)

{
  if (DAT_146b3ecd0 == 0) {
    FUN_141786a30(&DAT_146b3ecd0,&PTR_FUN_14673fdd0);
  }
  return DAT_146b3ecd0;
}



// FUNCTION 142f164f0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEnvQueryTest_Random::StaticClass(void)

{
  if (DAT_146b3ecb0 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxFocusableWidgetStyleData",&DAT_146b3ecb0,FUN_140447710,0x1c0
                  ,0x10000000,0,L"Engine",FUN_142f178a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b3ecb0;
}



// FUNCTION 142f165a0 FUN_142f165a0 body=53 status=ok
// SIG undefined FUN_142f165a0(void)

void FUN_142f165a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_14599cc80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142f165e0 FUN_142f165e0 body=53 status=ok
// SIG undefined FUN_142f165e0(void)

void FUN_142f165e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &PTR_FUN_14599cd98;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f16620 FUN_142f16620 body=162 status=ok
// SIG undefined FUN_142f16620(void)

longlong FUN_142f16620(void)

{
  if (DAT_146b3ebf0 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxDialogBoxData",&DAT_146b3ebf0,FUN_140447710,200,0x10000000,0
                  ,L"Engine",FUN_142f17830,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f38260,&LAB_140447700,0);
  }
  return DAT_146b3ebf0;
}



// FUNCTION 142f166d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBlendableInterface::GetPrivateStaticClass(void)

{
  if (DAT_146b3ece0 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxFocusableWidget",&DAT_146b3ece0,
                  UGameplayTagAssetInterface::StaticRegisterNativesUGameplayTagAssetInterface,0x28,
                  0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b3ece0;
}



// FUNCTION 142f16790 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APickup::GetPrivateStaticClass(void)

{
  if (DAT_146b3ec40 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxDialogBox",&DAT_146b3ec40,StaticRegisterNativesAPickup,0x3d0
                  ,0x10000000,0,L"Engine",FUN_142f176f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGPasswordResetPage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b3ec40;
}



// FUNCTION 142f16840 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGPasswordResetPage::GetPrivateStaticClass(void)

{
  if (DAT_146b3ec50 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxDialogBoxChoiceWidget",&DAT_146b3ec50,FUN_140447710,0x2f0,
                  0x10000000,0,L"Engine",FUN_142f177e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14141c8d0,&LAB_140447700,0);
  }
  return DAT_146b3ec50;
}



// FUNCTION 142f168f0 FUN_142f168f0 body=162 status=ok
// SIG undefined FUN_142f168f0(void)

longlong FUN_142f168f0(void)

{
  if (DAT_146b3eb38 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxCoreDialogBoxHelpers",&DAT_146b3eb38,FUN_142f19080,0x28,
                  0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b3eb38;
}



// FUNCTION 142f169a0 FUN_142f169a0 body=47 status=ok
// SIG undefined FUN_142f169a0(void)

longlong FUN_142f169a0(void)

{
  if (DAT_146b3eb30 == 0) {
    FUN_141786440(&DAT_146b3eb30,&PTR_FUN_1459980c0);
  }
  return DAT_146b3eb30;
}



// FUNCTION 142f169d0 FUN_142f169d0 body=47 status=ok
// SIG undefined FUN_142f169d0(void)

longlong FUN_142f169d0(void)

{
  if (DAT_146b3eb08 == 0) {
    FUN_141786a30(&DAT_146b3eb08,&PTR_FUN_14673dc20);
  }
  return DAT_146b3eb08;
}



// FUNCTION 142f16a00 FUN_142f16a00 body=47 status=ok
// SIG undefined FUN_142f16a00(void)

longlong FUN_142f16a00(void)

{
  if (DAT_146b3eb10 == 0) {
    FUN_141786a30(&DAT_146b3eb10,&PTR_FUN_14673dda0);
  }
  return DAT_146b3eb10;
}



// FUNCTION 142f16a30 FUN_142f16a30 body=47 status=ok
// SIG undefined FUN_142f16a30(void)

longlong FUN_142f16a30(void)

{
  if (DAT_146b3eb18 == 0) {
    FUN_141786a30(&DAT_146b3eb18,&PTR_FUN_14673dea0);
  }
  return DAT_146b3eb18;
}



// FUNCTION 142f16a60 FUN_142f16a60 body=47 status=ok
// SIG undefined FUN_142f16a60(void)

longlong FUN_142f16a60(void)

{
  if (DAT_146b3eb20 == 0) {
    FUN_141786a30(&DAT_146b3eb20,&PTR_FUN_14673e0a0);
  }
  return DAT_146b3eb20;
}



// FUNCTION 142f16a90 FUN_142f16a90 body=47 status=ok
// SIG undefined FUN_142f16a90(void)

longlong FUN_142f16a90(void)

{
  if (DAT_146b3eb28 == 0) {
    FUN_141786a30(&DAT_146b3eb28,&PTR_FUN_14673e220);
  }
  return DAT_146b3eb28;
}



// FUNCTION 142f16ad0 FUN_142f16ad0 body=162 status=ok
// SIG undefined FUN_142f16ad0(void)

longlong FUN_142f16ad0(void)

{
  if (DAT_146b3eb50 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxCrosshairDataAsset",&DAT_146b3eb50,FUN_140447710,0x50,
                  0x10000000,0,L"Engine",FUN_142f17500,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b3eb50;
}



// FUNCTION 142f16b90 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGunfireTechRequirementsImplSteam::GetPrivateStaticClass(void)

{
  if (DAT_146b3ecf8 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxFullScreenMovie",&DAT_146b3ecf8,
                  StaticRegisterNativesUGunfireTechRequirementsImplSteam,0x2c0,0x10000000,0,
                  L"Engine",FUN_142f178f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301c80,&LAB_140447700,0);
  }
  return DAT_146b3ecf8;
}



// FUNCTION 142f16c40 FUN_142f16c40 body=47 status=ok
// SIG undefined FUN_142f16c40(void)

longlong FUN_142f16c40(void)

{
  if (DAT_146b3ecf0 == 0) {
    FUN_141786440(&DAT_146b3ecf0,&PTR_GetPrivateStaticClass_145998590);
  }
  return DAT_146b3ecf0;
}



// FUNCTION 142f16c70 FUN_142f16c70 body=47 status=ok
// SIG undefined FUN_142f16c70(void)

longlong FUN_142f16c70(void)

{
  if (DAT_146b3ece8 == 0) {
    FUN_141786a30(&DAT_146b3ece8,&PTR_FUN_14673fe40);
  }
  return DAT_146b3ece8;
}



// FUNCTION 142f16cb0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGHUDEmoteMenu::GetPrivateStaticClass(void)

{
  if (DAT_146b3eaa0 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxCascadingList",&DAT_146b3eaa0,FUN_142f18ff0,0x318,0x10000000
                  ,0,L"Engine",FUN_142f17310,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301c80,&LAB_140447700,0);
  }
  return DAT_146b3eaa0;
}



// FUNCTION 142f16d60 FUN_142f16d60 body=162 status=ok
// SIG undefined FUN_142f16d60(void)

longlong FUN_142f16d60(void)

{
  if (DAT_146b3eb70 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxDebugMenuData",&DAT_146b3eb70,FUN_140447710,0x68,0x10000000,
                  0,L"Engine",FUN_142f17610,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_142f18fd0,&LAB_140447700,0);
  }
  return DAT_146b3eb70;
}



// FUNCTION 142f16e10 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong URemnantMapGenComponent::StaticClass(void)

{
  if (DAT_146b3eb90 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxDebugMenu",&DAT_146b3eb90,FUN_142f190b0,0x330,0x10000004,0,
                  L"GbxUI",FUN_142f17590,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_142f18fc0,&LAB_140447700,0);
  }
  return DAT_146b3eb90;
}



// FUNCTION 142f16ec0 FUN_142f16ec0 body=47 status=ok
// SIG undefined FUN_142f16ec0(void)

longlong FUN_142f16ec0(void)

{
  if (DAT_146b3eb58 == 0) {
    FUN_141786440(&DAT_146b3eb58,&PTR_LAB_1459986a0);
  }
  return DAT_146b3eb58;
}



// FUNCTION 142f16ef0 FUN_142f16ef0 body=47 status=ok
// SIG undefined FUN_142f16ef0(void)

longlong FUN_142f16ef0(void)

{
  if (DAT_146b3eb88 == 0) {
    FUN_141786440(&DAT_146b3eb88,&PTR_StaticClass_145998a90);
  }
  return DAT_146b3eb88;
}



// FUNCTION 142f16f20 FUN_142f16f20 body=47 status=ok
// SIG undefined FUN_142f16f20(void)

longlong FUN_142f16f20(void)

{
  if (DAT_146b3eb78 == 0) {
    FUN_141786a30(&DAT_146b3eb78,&PTR_FUN_14673e530);
  }
  return DAT_146b3eb78;
}



// FUNCTION 142f16f50 FUN_142f16f50 body=47 status=ok
// SIG undefined FUN_142f16f50(void)

longlong FUN_142f16f50(void)

{
  if (DAT_146b3eb80 == 0) {
    FUN_141786a30(&DAT_146b3eb80,&PTR_FUN_14673e570);
  }
  return DAT_146b3eb80;
}



// FUNCTION 142f16f90 FUN_142f16f90 body=47 status=ok
// SIG undefined FUN_142f16f90(void)

longlong FUN_142f16f90(void)

{
  if (DAT_146b3ea98 == 0) {
    FUN_141786440(&DAT_146b3ea98,&PTR_GetPrivateStaticClass_145993ba0);
  }
  return DAT_146b3ea98;
}



// FUNCTION 142f16fc0 FUN_142f16fc0 body=47 status=ok
// SIG undefined FUN_142f16fc0(void)

longlong FUN_142f16fc0(void)

{
  if (DAT_146b3ea48 == 0) {
    FUN_141786a30(&DAT_146b3ea48,&PTR_FUN_14673cda0);
  }
  return DAT_146b3ea48;
}



// FUNCTION 142f16ff0 FUN_142f16ff0 body=47 status=ok
// SIG undefined FUN_142f16ff0(void)

longlong FUN_142f16ff0(void)

{
  if (DAT_146b3ea50 == 0) {
    FUN_141786a30(&DAT_146b3ea50,&PTR_FUN_14673ce20);
  }
  return DAT_146b3ea50;
}



// FUNCTION 142f17020 FUN_142f17020 body=47 status=ok
// SIG undefined FUN_142f17020(void)

longlong FUN_142f17020(void)

{
  if (DAT_146b3ea58 == 0) {
    FUN_141786a30(&DAT_146b3ea58,&PTR_FUN_14673ceb0);
  }
  return DAT_146b3ea58;
}



// FUNCTION 142f17050 FUN_142f17050 body=47 status=ok
// SIG undefined FUN_142f17050(void)

longlong FUN_142f17050(void)

{
  if (DAT_146b3ea60 == 0) {
    FUN_141786a30(&DAT_146b3ea60,&PTR_FUN_14673cf30);
  }
  return DAT_146b3ea60;
}



// FUNCTION 142f17080 FUN_142f17080 body=47 status=ok
// SIG undefined FUN_142f17080(void)

longlong FUN_142f17080(void)

{
  if (DAT_146b3ea68 == 0) {
    FUN_141786a30(&DAT_146b3ea68,&PTR_FUN_14673cfb0);
  }
  return DAT_146b3ea68;
}



// FUNCTION 142f170b0 FUN_142f170b0 body=47 status=ok
// SIG undefined FUN_142f170b0(void)

longlong FUN_142f170b0(void)

{
  if (DAT_146b3ea70 == 0) {
    FUN_141786a30(&DAT_146b3ea70,&PTR_FUN_14673cff0);
  }
  return DAT_146b3ea70;
}



// FUNCTION 142f170e0 FUN_142f170e0 body=47 status=ok
// SIG undefined FUN_142f170e0(void)

longlong FUN_142f170e0(void)

{
  if (DAT_146b3ea78 == 0) {
    FUN_141786a30(&DAT_146b3ea78,&PTR_FUN_14673d030);
  }
  return DAT_146b3ea78;
}



// FUNCTION 142f17110 FUN_142f17110 body=47 status=ok
// SIG undefined FUN_142f17110(void)

longlong FUN_142f17110(void)

{
  if (DAT_146b3ea80 == 0) {
    FUN_141786a30(&DAT_146b3ea80,&PTR_FUN_14673d070);
  }
  return DAT_146b3ea80;
}



// FUNCTION 142f17140 FUN_142f17140 body=47 status=ok
// SIG undefined FUN_142f17140(void)

longlong FUN_142f17140(void)

{
  if (DAT_146b3ea88 == 0) {
    FUN_141786a30(&DAT_146b3ea88,&PTR_FUN_14673d130);
  }
  return DAT_146b3ea88;
}



// FUNCTION 142f17170 FUN_142f17170 body=47 status=ok
// SIG undefined FUN_142f17170(void)

longlong FUN_142f17170(void)

{
  if (DAT_146b3ea90 == 0) {
    FUN_141786a30(&DAT_146b3ea90,&PTR_FUN_14673d1b0);
  }
  return DAT_146b3ea90;
}



// FUNCTION 142f171b0 FUN_142f171b0 body=53 status=ok
// SIG undefined FUN_142f171b0(void)

void FUN_142f171b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_145999a20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f17200 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGActiveSkill::GetPrivateStaticClass(void)

{
  if (DAT_146b3eba8 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxDebugRumbleMenu",&DAT_146b3eba8,FUN_142f190e0,0x338,
                  0x10000004,0,L"Game",&LAB_142f176d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301c60,&LAB_140447700,0);
  }
  return DAT_146b3eba8;
}



// FUNCTION 142f172b0 FUN_142f172b0 body=47 status=ok
// SIG undefined FUN_142f172b0(void)

longlong FUN_142f172b0(void)

{
  if (DAT_146b3eba0 == 0) {
    FUN_141786440(&DAT_146b3eba0,&PTR_GetPrivateStaticClass_145998e30);
  }
  return DAT_146b3eba0;
}



// FUNCTION 142f172e0 FUN_142f172e0 body=47 status=ok
// SIG undefined FUN_142f172e0(void)

longlong FUN_142f172e0(void)

{
  if (DAT_146b3eb98 == 0) {
    FUN_141786a30(&DAT_146b3eb98,&PTR_FUN_14673e750);
  }
  return DAT_146b3eb98;
}



// FUNCTION 142f17310 FUN_142f17310 body=193 status=ok
// SIG undefined FUN_142f17310(void)

void FUN_142f17310(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *puVar1 = &PTR_FUN_145999510;
    puVar1[0x20] = &PTR_LAB_1459999a8;
    puVar1[0x41] = &PTR_LAB_1459999d0;
    puVar1[0x57] = 0;
    puVar1[0x58] = 0;
    puVar1[0x59] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x5a,0);
    puVar1[0x5b] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x5c,0);
    puVar1[0x5d] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x5e,0);
    puVar1[0x5f] = 0;
    puVar1[0x61] = 0;
    puVar1[0x62] = 0;
  }
  return;
}



// FUNCTION 142f173e0 FUN_142f173e0 body=145 status=ok
// SIG undefined FUN_142f173e0(void)

void FUN_142f173e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14141a9f0(puVar1,param_1);
    *puVar1 = &PTR_FUN_14599a258;
    puVar1[0x20] = &PTR_LAB_14599a6f8;
    puVar1[0x41] = &PTR_LAB_14599a720;
    puVar1[0x5d] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x5f,0);
    puVar1[0x60] = 0;
    puVar1[0x61] = 0;
    puVar1[0x62] = 0;
    FGeometry::FGeometry((longlong)puVar1 + 0x31c);
  }
  return;
}



// FUNCTION 142f17480 FUN_142f17480 body=122 status=ok
// SIG undefined FUN_142f17480(void)

void FUN_142f17480(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x2ed) = 1;
    *puVar1 = &PTR_FUN_145999bc0;
    puVar1[0x20] = &PTR_LAB_14599a060;
    puVar1[0x41] = &PTR_LAB_14599a088;
    puVar1[0x57] = &PTR_LAB_14599a0d8;
    puVar1[0x5e] = 0;
    puVar1[0x5f] = 0;
    *(undefined4 *)(puVar1 + 0x62) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x314) = 0;
  }
  return;
}



// FUNCTION 142f17500 FUN_142f17500 body=131 status=ok
// SIG undefined FUN_142f17500(void)

void FUN_142f17500(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_14599b650;
    puVar1[6] = 0;
    puVar1[7] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 6,0);
    FGenericPlatformString::Convert<char,wchar_t>(puVar1[6],0x11,"AssaultCrosshair",0x11,0x3f);
    puVar1[8] = 0;
    *(undefined2 *)(puVar1 + 9) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x4a) = 0;
  }
  return;
}



// FUNCTION 142f17590 FUN_142f17590 body=113 status=ok
// SIG undefined FUN_142f17590(void)

void FUN_142f17590(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x2ed) = 1;
    puVar1[0x5f] = 0;
    *puVar1 = &PTR_FUN_14599c250;
    puVar1[0x20] = &PTR_LAB_14599c700;
    puVar1[0x41] = &PTR_LAB_14599c728;
    puVar1[0x57] = &PTR_LAB_14599c778;
    puVar1[100] = 0;
    puVar1[0x65] = 0;
  }
  return;
}



// FUNCTION 142f17610 FUN_142f17610 body=72 status=ok
// SIG undefined FUN_142f17610(void)

void FUN_142f17610(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *(undefined4 *)(puVar1 + 6) = 0x1010100;
    *(undefined2 *)((longlong)puVar1 + 0x34) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x36) = 1;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__14599b918;
  }
  return;
}



// FUNCTION 142f17660 FUN_142f17660 body=110 status=ok
// SIG undefined FUN_142f17660(void)

void FUN_142f17660(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x2ed) = 1;
    *(undefined4 *)(puVar1 + 0x5e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2f4) = 0;
    *puVar1 = &PTR_FUN_1447d72d0;
    puVar1[0x20] = &PTR_LAB_1447d7770;
    puVar1[0x41] = &PTR_LAB_1447d7798;
    puVar1[0x57] = &PTR_LAB_1447d7968;
  }
  return;
}



// FUNCTION 142f176f0 FUN_142f176f0 body=234 status=ok
// SIG undefined FUN_142f176f0(void)

void FUN_142f176f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x2ed) = 1;
    *puVar1 = &PTR_FUN_14599aa40;
    puVar1[0x20] = &PTR_LAB_14599aee0;
    puVar1[0x41] = &PTR_LAB_14599af08;
    puVar1[0x57] = &PTR_LAB_14599af58;
    FText::FText(puVar1 + 0x5f);
    FText::FText(puVar1 + 0x62);
    puVar1[0x65] = 0;
    puVar1[0x66] = 0;
    puVar1[0x69] = 0;
    puVar1[0x6a] = 0;
    *(undefined4 *)(puVar1 + 0x6b) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x35c) = 0;
    puVar1[0x6d] = 0;
    *(undefined4 *)(puVar1 + 0x6e) = 0;
    puVar1[0x6f] = 0;
    puVar1[0x70] = 0;
    puVar1[0x73] = 0;
    puVar1[0x74] = 0;
    *(undefined4 *)(puVar1 + 0x75) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x3ac) = 0;
    puVar1[0x77] = 0;
    *(undefined4 *)(puVar1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 142f177e0 FUN_142f177e0 body=78 status=ok
// SIG undefined FUN_142f177e0(void)

void FUN_142f177e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14141a9f0(puVar1,param_1);
    *puVar1 = &PTR_FUN_14599b0d8;
    puVar1[0x20] = &PTR_LAB_144991558;
    puVar1[0x41] = &PTR_LAB_14599b578;
    puVar1[0x5d] = 0;
  }
  return;
}



// FUNCTION 142f17830 FUN_142f17830 body=97 status=ok
// SIG undefined FUN_142f17830(void)

void FUN_142f17830(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *(undefined4 *)(puVar1 + 6) = 0x1010100;
    *(undefined2 *)((longlong)puVar1 + 0x34) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x36) = 1;
    puVar1[9] = 0;
    *puVar1 = &PTR_FUN_14599a7b0;
    FUN_142f17960(puVar1 + 0xb);
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
  }
  return;
}



// FUNCTION 142f178a0 FUN_142f178a0 body=77 status=ok
// SIG undefined FUN_142f178a0(void)

void FUN_142f178a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_145999290;
    puVar1[6] = 0;
    puVar1[7] = 0;
    FUN_142f179d0(puVar1 + 8);
    FUN_142f179d0(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 142f178f0 FUN_142f178f0 body=69 status=ok
// SIG undefined FUN_142f178f0(void)

void FUN_142f178f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *puVar1 = &PTR_FUN_14599cef0;
    puVar1[0x20] = &PTR_LAB_14599d388;
    puVar1[0x41] = &PTR_LAB_14599d3b0;
  }
  return;
}



// FUNCTION 142f17960 FUN_142f17960 body=102 status=ok
// SIG undefined FUN_142f17960(void)

longlong FUN_142f17960(longlong param_1)

{
  FText::FText();
  FText::FText(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x40) = 1;
  FWeakObjectPtr::operator=(param_1 + 0x48,0);
  *(undefined8 *)(param_1 + 0x50) = 0;
  FName::FName(param_1 + 0x58,"Default",1);
  return param_1;
}



// FUNCTION 142f179d0 FUN_142f179d0 body=207 status=ok
// SIG undefined FUN_142f179d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_142f179d0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uStackX_c;
  
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined ***)(param_1 + 0x38) = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x40) = 0x42000000;
  *(undefined8 *)(param_1 + 0x44) = 0x42000000;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  uVar1 = _DAT_1464aa6c8;
  *(undefined8 *)(param_1 + 0x58) = _DAT_1464aa6c0;
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x9c) = uStackX_c;
  *(undefined4 *)(param_1 + 0x94) = uStackX_c;
  *(undefined4 *)(param_1 + 0xa4) = 3;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0xfc;
  return param_1;
}



// FUNCTION 142f17aa0 FUN_142f17aa0 body=171 status=ok
// SIG undefined FUN_142f17aa0(void)

void FUN_142f17aa0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x28);
    do {
      FSlateBrush::~FSlateBrush(plVar7 + 2);
      plVar4 = (longlong *)*plVar7;
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
      }
      plVar7 = plVar7 + 0x18;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142f17b50 FUN_142f17b50 body=151 status=ok
// SIG undefined FUN_142f17b50(void)

void FUN_142f17b50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_142ea9b80(param_1 + 0x30);
  plVar4 = *(longlong **)(param_1 + 0x20);
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
  }
  plVar4 = *(longlong **)(param_1 + 8);
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
  }
  return;
}



// FUNCTION 142f17bf0 FUN_142f17bf0 body=328 status=ok
// SIG undefined FUN_142f17bf0(void)

longlong FUN_142f17bf0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  
  FText::operator=();
  FText::operator=(param_1 + 0x18,param_2 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x30);
  if (plVar1 != (longlong *)(param_2 + 0x30)) {
    iVar8 = *(int *)(param_1 + 0x38);
    if (iVar8 != 0) {
      plVar9 = (longlong *)(*plVar1 + 8);
      do {
        plVar5 = (longlong *)*plVar9;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar9 = plVar9 + 5;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = *(int *)(param_2 + 0x38);
    lVar6 = *(longlong *)(param_2 + 0x30);
    *(int *)(param_1 + 0x38) = iVar8;
    if ((iVar8 == 0) && (*(int *)(param_1 + 0x3c) == 0)) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
      TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar8);
      lVar10 = *plVar1;
      if (iVar8 != 0) {
        puVar7 = (undefined1 *)(lVar6 + 0x20);
        do {
          FText::FText(lVar10,puVar7 + -0x20);
          *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(puVar7 + -8);
          *(undefined1 *)(lVar10 + 0x20) = *puVar7;
          lVar10 = lVar10 + 0x28;
          iVar8 = iVar8 + -1;
          puVar7 = puVar7 + 0x28;
        } while (iVar8 != 0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_2 + 0x41);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  return param_1;
}



// FUNCTION 142f17e10 FUN_142f17e10 body=99 status=ok
// SIG undefined FUN_142f17e10(void)

longlong FUN_142f17e10(longlong param_1,ulonglong param_2)

{
  FUN_142ea9b10(param_1 + 0x308);
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x318);
  }
  return param_1;
}



// FUNCTION 142f17e80 FUN_142f17e80 body=81 status=ok
// SIG undefined FUN_142f17e80(void)

longlong FUN_142f17e80(longlong param_1,ulonglong param_2)

{
  FUN_141320a80(param_1 + 0x308);
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x358);
  }
  return param_1;
}



// FUNCTION 142f17ee0 FUN_142f17ee0 body=95 status=ok
// SIG undefined FUN_142f17ee0(void)

longlong FUN_142f17ee0(longlong param_1,ulonglong param_2)

{
  FUN_141320a80(param_1 + 0x2f0);
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x318);
  }
  return param_1;
}



// FUNCTION 142f17f40 FUN_142f17f40 body=101 status=ok
// SIG undefined FUN_142f17f40(void)

longlong FUN_142f17f40(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 800) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 142f17fb0 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieSceneLiveLinkSubSectionProperties::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  FUN_1414d0ad0(param_1 + 0x58);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142f17ff0 FUN_142f17ff0 body=362 status=ok
// SIG undefined FUN_142f17ff0(void)

longlong FUN_142f17ff0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x378,0);
  if (*(longlong *)(param_1 + 0x398) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x370) = 0;
  if (*(longlong *)(param_1 + 0x368) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x328,0);
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x318);
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
  }
  plVar4 = *(longlong **)(param_1 + 0x300);
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
  }
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3d0);
  }
  return param_1;
}



// FUNCTION 142f18160 FUN_142f18160 body=82 status=ok
// SIG undefined FUN_142f18160(void)

longlong FUN_142f18160(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  FUN_142f17b50(param_1 + 0x58);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 142f181c0 FUN_142f181c0 body=217 status=ok
// SIG undefined FUN_142f181c0(void)

longlong FUN_142f181c0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FSlateBrush::~FSlateBrush(param_1 + 0x138);
  plVar4 = *(longlong **)(param_1 + 0x128);
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
  }
  FSlateBrush::~FSlateBrush(param_1 + 0x78);
  plVar4 = *(longlong **)(param_1 + 0x68);
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
  }
  FUN_142f17aa0(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 142f182a0 FUN_142f182a0 body=66 status=ok
// SIG undefined FUN_142f182a0(void)

longlong FUN_142f182a0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2c0);
  }
  return param_1;
}



// FUNCTION 142f182f0 FUN_142f182f0 body=80 status=ok
// SIG undefined FUN_142f182f0(void)

longlong FUN_142f182f0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x308);
  }
  return param_1;
}



// FUNCTION 142f18340 FUN_142f18340 body=61 status=ok
// SIG undefined FUN_142f18340(void)

void FUN_142f18340(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_1404b03b0();
  FText::FText(param_2 + 1,uVar1);
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  return;
}



// FUNCTION 142f18380 FUN_142f18380 body=54 status=ok
// SIG undefined FUN_142f18380(void)

void FUN_142f18380(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  FText::FText(param_2);
  param_2[3] = 0;
  *(undefined1 *)(param_2 + 4) = 1;
  return;
}



// FUNCTION 142f183c0 Construct body=36 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FSubtitleInfo>::Construct(undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x60);
  FUN_142f17960(param_2);
  return;
}



// FUNCTION 142f183f0 FUN_142f183f0 body=74 status=ok
// SIG undefined FUN_142f183f0(void)

void FUN_142f183f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FWeakObjectPtr::operator=(param_2,0);
  FWeakObjectPtr::operator=(param_2 + 1,0);
  FWeakObjectPtr::operator=(param_2 + 2,0);
  FWeakObjectPtr::operator=(param_2 + 3,0);
  return;
}



// FUNCTION 142f18440 FUN_142f18440 body=38 status=ok
// SIG undefined FUN_142f18440(void)

void FUN_142f18440(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0xc0);
  FUN_142f179d0(param_2);
  return;
}



// FUNCTION 142f18470 FUN_142f18470 body=293 status=ok
// SIG undefined FUN_142f18470(void)

undefined8 FUN_142f18470(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  
  if (param_4 != 0) {
    puVar9 = (undefined1 *)(param_3 + 0x20);
    do {
      *param_2 = *(undefined8 *)(puVar9 + -0x20);
      FText::operator=(param_2 + 1,puVar9 + -0x18);
      plVar1 = param_2 + 5;
      *(undefined1 *)(param_2 + 4) = *puVar9;
      *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)(puVar9 + 4);
      if (plVar1 != (longlong *)(puVar9 + 8)) {
        iVar7 = *(int *)(param_2 + 6);
        if (iVar7 != 0) {
          plVar8 = (longlong *)(*plVar1 + 0x10);
          do {
            FUN_142ea9b10(plVar8 + 3);
            plVar5 = (longlong *)*plVar8;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar5 + 1;
              lVar6 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar3 = (int *)((longlong)plVar5 + 0xc);
                iVar4 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            plVar8 = plVar8 + 7;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        FUN_142ea7950(plVar1,*(longlong *)(puVar9 + 8),*(undefined4 *)(puVar9 + 0x10),
                      *(undefined4 *)((longlong)param_2 + 0x34),0);
      }
      puVar9 = puVar9 + 0x38;
      param_4 = param_4 + -1;
      param_2 = param_2 + 7;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f185a0 Copy body=106 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FDialogButtonParam>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x20);
    do {
      FText::operator=(puVar1 + -0x20,puVar1 + param_3 + -0x20);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + param_3 + -8);
      *puVar1 = puVar1[param_3];
      puVar1 = puVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f18610 FUN_142f18610 body=400 status=ok
// SIG undefined FUN_142f18610(void)

undefined8 FUN_142f18610(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 *puVar12;
  int local_res20;
  
  if (param_4 != 0) {
    puVar12 = (undefined4 *)(param_3 + 0x4c);
    local_res20 = param_4;
    do {
      FText::operator=(param_2,puVar12 + -0x13);
      FText::operator=(param_2 + 0x18,puVar12 + -0xd);
      plVar1 = (longlong *)(param_2 + 0x30);
      if (plVar1 != (longlong *)(puVar12 + -7)) {
        iVar9 = *(int *)(param_2 + 0x38);
        if (iVar9 != 0) {
          plVar10 = (longlong *)(*plVar1 + 8);
          do {
            plVar6 = (longlong *)*plVar10;
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar6 + 1;
              lVar7 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar3 = (int *)((longlong)plVar6 + 0xc);
                iVar5 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
            plVar10 = plVar10 + 5;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        iVar9 = puVar12[-5];
        lVar7 = *(longlong *)(puVar12 + -7);
        *(int *)(param_2 + 0x38) = iVar9;
        if ((iVar9 == 0) && (*(int *)(param_2 + 0x3c) == 0)) {
          *(undefined4 *)(param_2 + 0x3c) = 0;
        }
        else {
          TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar9);
          lVar11 = *plVar1;
          if (iVar9 != 0) {
            puVar8 = (undefined1 *)(lVar7 + 0x20);
            do {
              FText::FText(lVar11,puVar8 + -0x20);
              *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(puVar8 + -8);
              *(undefined1 *)(lVar11 + 0x20) = *puVar8;
              lVar11 = lVar11 + 0x28;
              iVar9 = iVar9 + -1;
              puVar8 = puVar8 + 0x28;
            } while (iVar9 != 0);
          }
        }
      }
      *(undefined1 *)(param_2 + 0x40) = *(undefined1 *)(puVar12 + -3);
      *(undefined1 *)(param_2 + 0x41) = *(undefined1 *)((longlong)puVar12 + -0xb);
      *(undefined4 *)(param_2 + 0x48) = puVar12[-1];
      *(undefined4 *)(param_2 + 0x4c) = *puVar12;
      *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(puVar12 + 1);
      puVar4 = (undefined8 *)(puVar12 + 3);
      puVar12 = puVar12 + 0x18;
      local_res20 = local_res20 + -1;
      *(undefined8 *)(param_2 + 0x58) = *puVar4;
      param_2 = param_2 + 0x60;
    } while (local_res20 != 0);
  }
  return 1;
}



// FUNCTION 142f18800 FUN_142f18800 body=522 status=ok
// SIG undefined FUN_142f18800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142f18800(undefined8 param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  uVar12 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (param_4 != 0) {
    puVar13 = (undefined1 *)(param_3 + 1);
    local_20 = uVar12;
    do {
      *param_2 = puVar13[-1];
      param_2[1] = *puVar13;
      param_2[2] = puVar13[1];
      param_2[3] = puVar13[2];
      FUN_140692440(param_2 + 8,puVar13 + 7);
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(puVar13 + 0x2f);
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(puVar13 + 0x3f);
      uVar8 = *(undefined4 *)(puVar13 + 0x4b);
      uVar9 = *(undefined4 *)(puVar13 + 0x4f);
      uVar10 = *(undefined4 *)(puVar13 + 0x53);
      *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(puVar13 + 0x47);
      *(undefined4 *)(param_2 + 0x4c) = uVar8;
      *(undefined4 *)(param_2 + 0x50) = uVar9;
      *(undefined4 *)(param_2 + 0x54) = uVar10;
      FUN_140692440(param_2 + 0x58,puVar13 + 0x57);
      puVar3 = (undefined8 *)(param_2 + 0xa8);
      *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(puVar13 + 0x7f);
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(puVar13 + 0x87);
      uVar8 = *(undefined4 *)(puVar13 + 0x93);
      uVar9 = *(undefined4 *)(puVar13 + 0x97);
      uVar10 = *(undefined4 *)(puVar13 + 0x9b);
      *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(puVar13 + 0x8f);
      *(undefined4 *)(param_2 + 0x94) = uVar8;
      *(undefined4 *)(param_2 + 0x98) = uVar9;
      *(undefined4 *)(param_2 + 0x9c) = uVar10;
      *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(puVar13 + 0x9f);
      local_48 = puVar13[0xa3];
      param_2[0xa4] = local_48;
      local_47 = puVar13[0xa4];
      param_2[0xa5] = local_47;
      local_46 = puVar13[0xa5];
      param_2[0xa6] = local_46;
      local_45 = puVar13[0xa6];
      param_2[0xa7] = local_45;
      plVar6 = *(longlong **)(puVar13 + 0xaf);
      uVar7 = *(undefined8 *)(puVar13 + 0xa7);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_40 = uVar7;
      plStack_38 = plVar6;
      if (&local_40 != puVar3) {
        local_40 = *puVar3;
        plStack_38 = *(longlong **)(param_2 + 0xb0);
        *puVar3 = uVar7;
        *(longlong **)(param_2 + 0xb0) = plVar6;
        local_30 = uVar7;
        plStack_28 = plVar6;
      }
      plVar6 = plStack_38;
      if (plStack_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_38 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_38)(plStack_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plStack_38 + 8))(plStack_38,1);
          }
        }
      }
      param_2[0xb8] = param_2[0xb8] ^ (param_2[0xb8] ^ puVar13[0xb7]) & 1;
      uVar12 = 0;
      pbVar4 = puVar13 + 0xb7;
      puVar13 = puVar13 + 0xc0;
      param_2[0xb8] = (*pbVar4 ^ param_2[0xb8]) & 2 ^ param_2[0xb8];
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xc0;
    } while (param_4 != 0);
  }
  return CONCAT71((int7)(uVar12 >> 8),1);
}



// FUNCTION 142f18a10 FUN_142f18a10 body=89 status=ok
// SIG undefined FUN_142f18a10(void)

void FUN_142f18a10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_142ea9b10(param_2 + 0x28);
  plVar4 = *(longlong **)(param_2 + 0x10);
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
  }
  return;
}



// FUNCTION 142f18a80 FUN_142f18a80 body=89 status=ok
// SIG undefined FUN_142f18a80(void)

void FUN_142f18a80(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FSlateBrush::~FSlateBrush(param_2 + 0x38);
  plVar4 = *(longlong **)(param_2 + 0x28);
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
  }
  return;
}



// FUNCTION 142f18ae0 EEnemyType_StaticEnum body=55 status=ok
// SIG undefined EEnemyType_StaticEnum(void)

void EEnemyType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3e600 == 0) {
    uVar1 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3e600 = GetStaticEnum(FUN_142f19770,uVar1,L"EChargeClipState");
  }
  return;
}



// FUNCTION 142f18b20 EEnemyType_StaticEnum body=55 status=ok
// SIG undefined EEnemyType_StaticEnum(void)

void EEnemyType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3e5f8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3e5f8 = GetStaticEnum(FUN_142f197a0,uVar1,L"EGbxDialogBoxHelpersDialogTemplate");
  }
  return;
}



// FUNCTION 142f18b60 EEnemyType_StaticEnum body=55 status=ok
// SIG undefined EEnemyType_StaticEnum(void)

void EEnemyType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3e5e8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3e5e8 = GetStaticEnum(FUN_142f197d0,uVar1,L"EGbxFocusableWidgetMouseBehavior");
  }
  return;
}



// FUNCTION 142f18ba0 EEnemyType_StaticEnum body=55 status=ok
// SIG undefined EEnemyType_StaticEnum(void)

void EEnemyType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3e5f0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3e5f0 = GetStaticEnum(FUN_142f19800,uVar1,L"EGbxFocusableWidgetState");
  }
  return;
}



// FUNCTION 142f18be0 EEnemyType_StaticEnum body=55 status=ok
// SIG undefined EEnemyType_StaticEnum(void)

void EEnemyType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3e5d8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3e5d8 = GetStaticEnum(FUN_142f19830,uVar1,L"EGbxGFxButtonCheckedState");
  }
  return;
}



// FUNCTION 142f18c20 EEnemyType_StaticEnum body=55 status=ok
// SIG undefined EEnemyType_StaticEnum(void)

void EEnemyType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3e5e0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3e5e0 = GetStaticEnum(FUN_142f19860,uVar1,L"EGbxGFxButtonLockedState");
  }
  return;
}



// FUNCTION 142f18c60 EEnemyType_StaticEnum body=55 status=ok
// SIG undefined EEnemyType_StaticEnum(void)

void EEnemyType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3e5d0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3e5d0 = GetStaticEnum(FUN_142f19890,uVar1,L"EGbxGFxButtonType");
  }
  return;
}



// FUNCTION 142f18ca0 FUN_142f18ca0 body=162 status=ok
// SIG undefined FUN_142f18ca0(void)

longlong FUN_142f18ca0(void)

{
  if (DAT_146b3eb60 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxDebugMenuSubmenu",&DAT_146b3eb60,FUN_140447710,0x2f8,
                  0x10000000,0,L"Engine",FUN_142f17660,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f32150,&LAB_140447700,0);
  }
  return DAT_146b3eb60;
}



// FUNCTION 142f18d50 FUN_142f18d50 body=162 status=ok
// SIG undefined FUN_142f18d50(void)

longlong FUN_142f18d50(void)

{
  if (DAT_146b3edb0 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGFxButton",&DAT_146b3edb0,FUN_142f191a0,0x2d0,0x10000008,0,
                  L"Engine",&LAB_142f17940,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146b3edb0;
}



// FUNCTION 142f18e00 FUN_142f18e00 body=6 status=ok
// SIG undefined FUN_142f18e00(void)

undefined8 FUN_142f18e00(void)

{
  return 0x2fa02fd5;
}



// FUNCTION 142f18e10 FUN_142f18e10 body=6 status=ok
// SIG undefined FUN_142f18e10(void)

undefined8 FUN_142f18e10(void)

{
  return 0x500d60b6;
}



// FUNCTION 142f18e20 FUN_142f18e20 body=6 status=ok
// SIG undefined FUN_142f18e20(void)

undefined8 FUN_142f18e20(void)

{
  return 0xe3f6a6a;
}



// FUNCTION 142f18e30 FUN_142f18e30 body=6 status=ok
// SIG undefined FUN_142f18e30(void)

undefined8 FUN_142f18e30(void)

{
  return 0xaf865684;
}



// FUNCTION 142f18e40 FUN_142f18e40 body=6 status=ok
// SIG undefined FUN_142f18e40(void)

undefined8 FUN_142f18e40(void)

{
  return 0xc9169aeb;
}



// FUNCTION 142f18e50 FUN_142f18e50 body=6 status=ok
// SIG undefined FUN_142f18e50(void)

undefined8 FUN_142f18e50(void)

{
  return 0xd3a6184e;
}



// FUNCTION 142f18e60 FUN_142f18e60 body=6 status=ok
// SIG undefined FUN_142f18e60(void)

undefined8 FUN_142f18e60(void)

{
  return 0x67d9fd7a;
}



// FUNCTION 142f18e70 FUN_142f18e70 body=6 status=ok
// SIG undefined FUN_142f18e70(void)

undefined8 FUN_142f18e70(void)

{
  return 0xf8a9e755;
}



// FUNCTION 142f18e80 FUN_142f18e80 body=70 status=ok
// SIG undefined FUN_142f18e80(void)

void FUN_142f18e80(longlong *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  
  lVar1 = *param_1;
  local_res10 = param_2;
  local_res11 = param_3;
  local_res12 = param_4;
  uVar2 = FUN_14178ac60(param_1,DAT_146b3ea28);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res10);
  return;
}



// FUNCTION 142f18ed0 FUN_142f18ed0 body=57 status=ok
// SIG undefined FUN_142f18ed0(void)

void FUN_142f18ed0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b3e960);
                    /* WARNING: Could not recover jumptable at 0x000142f18f06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 142f18f10 FUN_142f18f10 body=57 status=ok
// SIG undefined FUN_142f18f10(void)

void FUN_142f18f10(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b3e968);
                    /* WARNING: Could not recover jumptable at 0x000142f18f46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 142f18f50 FUN_142f18f50 body=104 status=ok
// SIG undefined FUN_142f18f50(void)

void FUN_142f18f50(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_68 [96];
  
  FUN_142f17960(local_68);
  FUN_142f17bf0(local_68,param_2);
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b3e9b0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_68);
  FUN_142f17b50(local_68);
  return;
}



// FUNCTION 142f18fe0 thunk_FUN_142f32150 body=5 status=ok
// SIG undefined thunk_FUN_142f32150(void)

void thunk_FUN_142f32150(void)

{
  FUN_142f32150();
  return;
}



// FUNCTION 142f18ff0 FUN_142f18ff0 body=34 status=ok
// SIG undefined FUN_142f18ff0(void)

void FUN_142f18ff0(void)

{
  undefined8 uVar1;
  
  uVar1 = UGHUDEmoteMenu::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_Clear_145999b40,8);
  return;
}



// FUNCTION 142f19020 FUN_142f19020 body=34 status=ok
// SIG undefined FUN_142f19020(void)

void FUN_142f19020(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f16130();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_GetCurentChoiceReferenceIndex_14599a790,2);
  return;
}



// FUNCTION 142f19050 StaticRegisterNativesUGHUDEmoteMenu body=34 status=ok
// SIG undefined StaticRegisterNativesUGHUDEmoteMenu(void)

void UGHUDEmoteMenu::StaticRegisterNativesUGHUDEmoteMenu(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_DismissWithoutChanging_14599a770,2);
  return;
}



// FUNCTION 142f19080 FUN_142f19080 body=34 status=ok
// SIG undefined FUN_142f19080(void)

void FUN_142f19080(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f168f0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ShowBlockingDialog_14599b600,5);
  return;
}



// FUNCTION 142f190b0 FUN_142f190b0 body=34 status=ok
// SIG undefined FUN_142f190b0(void)

void FUN_142f190b0(void)

{
  undefined8 uVar1;
  
  uVar1 = URemnantMapGenComponent::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnCategorySelected_14599c8f8,2);
  return;
}



// FUNCTION 142f190e0 FUN_142f190e0 body=34 status=ok
// SIG undefined FUN_142f190e0(void)

void FUN_142f190e0(void)

{
  undefined8 uVar1;
  
  uVar1 = UGActiveSkill::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnSliderValueChanged_14599c918,1);
  return;
}



// FUNCTION 142f19110 StaticRegisterNativesAPickup body=34 status=ok
// SIG undefined StaticRegisterNativesAPickup(void)

void APickup::StaticRegisterNativesAPickup(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_Dismiss_14599cb60,6);
  return;
}



// FUNCTION 142f19140 StaticRegisterNativesUGameplayTagAssetInterface body=34 status=ok
// SIG undefined StaticRegisterNativesUGameplayTagAssetInterface(void)

void UGameplayTagAssetInterface::StaticRegisterNativesUGameplayTagAssetInterface(void)

{
  undefined8 uVar1;
  
  uVar1 = UBlendableInterface::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetFocusableWidgetState_14599ceb0,4);
  return;
}



// FUNCTION 142f19170 StaticRegisterNativesUGunfireTechRequirementsImplSteam body=34 status=ok
// SIG undefined StaticRegisterNativesUGunfireTechRequirementsImplSteam(void)

void UGunfireTechRequirementsImplSteam::StaticRegisterNativesUGunfireTechRequirementsImplSteam(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnMovieFinishedPlaying_14599d400,1);
  return;
}



// FUNCTION 142f191a0 FUN_142f191a0 body=34 status=ok
// SIG undefined FUN_142f191a0(void)

void FUN_142f191a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f18d50();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetButtonType_14599d490,0x10);
  return;
}



// FUNCTION 142f191d0 FUN_142f191d0 body=82 status=ok
// SIG undefined FUN_142f191d0(void)

void FUN_142f191d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3ea38 == 0) {
    uVar1 = FUN_142f18e00();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3ea38 = GetStaticStruct(FUN_142f198c0,uVar2,L"GbxCascadingListItemData",0x38,uVar1);
  }
  return;
}



// FUNCTION 142f19230 FUN_142f19230 body=82 status=ok
// SIG undefined FUN_142f19230(void)

void FUN_142f19230(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3eab0 == 0) {
    uVar1 = FUN_142f18e10();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3eab0 = GetStaticStruct(FUN_142f198f0,uVar2,L"GbxComboBoxItemInfo",0x20,uVar1);
  }
  return;
}



// FUNCTION 142f19290 FUN_142f19290 body=82 status=ok
// SIG undefined FUN_142f19290(void)

void FUN_142f19290(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3ebd8 == 0) {
    uVar1 = FUN_142f18e20();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3ebd8 = GetStaticStruct(FUN_142f19920,uVar2,L"GbxDialogBoxChoiceInfo",0x28,uVar1);
  }
  return;
}



// FUNCTION 142f192f0 FUN_142f192f0 body=82 status=ok
// SIG undefined FUN_142f192f0(void)

void FUN_142f192f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3ebc8 == 0) {
    uVar1 = FUN_142f18e30();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3ebc8 = GetStaticStruct(FUN_142f19950,uVar2,L"GbxDialogBoxInfo",0x60,uVar1);
  }
  return;
}



// FUNCTION 142f19350 FUN_142f19350 body=82 status=ok
// SIG undefined FUN_142f19350(void)

void FUN_142f19350(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3ebb8 == 0) {
    uVar1 = FUN_142f18e40();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3ebb8 = GetStaticStruct(FUN_142f19980,uVar2,L"GbxDialogBoxTemplateMapItem",0x10,uVar1);
  }
  return;
}



// FUNCTION 142f193b0 FUN_142f193b0 body=82 status=ok
// SIG undefined FUN_142f193b0(void)

void FUN_142f193b0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3ec88 == 0) {
    uVar1 = FUN_142f18e50();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3ec88 =
         GetStaticStruct(FUN_142f199b0,uVar2,L"GbxFocusableWidgetAdjacencyInfo",0x20,uVar1);
  }
  return;
}



// FUNCTION 142f19410 FUN_142f19410 body=82 status=ok
// SIG undefined FUN_142f19410(void)

void FUN_142f19410(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3ec78 == 0) {
    uVar1 = FUN_142f18e60();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3ec78 =
         GetStaticStruct(FUN_142f199e0,uVar2,L"GbxFocusableWidgetAdjacencyNames",0x40,uVar1);
  }
  return;
}



// FUNCTION 142f19470 FUN_142f19470 body=82 status=ok
// SIG undefined FUN_142f19470(void)

void FUN_142f19470(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3ec98 == 0) {
    uVar1 = FUN_142f18e70();
    uVar2 = Z_Construct_UPackage__Script_HighMoon();
    DAT_146b3ec98 = GetStaticStruct(FUN_142f19a10,uVar2,L"GbxFocusableWidgetItemStyle",0xc0,uVar1);
  }
  return;
}



// FUNCTION 142f194d0 FUN_142f194d0 body=231 status=ok
// SIG undefined FUN_142f194d0(void)

void FUN_142f194d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FText::FText(local_38);
  FText::FText(local_20);
  FText::operator=(local_38,param_2);
  FText::operator=(local_20,param_3);
  lVar4 = *param_1;
  uVar5 = FUN_14178ac60(param_1,DAT_146b3e9b8);
  (**(code **)(lVar4 + 0x208))(param_1,uVar5,local_38);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 142f195c0 FUN_142f195c0 body=47 status=ok
// SIG undefined FUN_142f195c0(void)

longlong FUN_142f195c0(void)

{
  if (DAT_146b3eb48 == 0) {
    FUN_141786440(&DAT_146b3eb48,&PTR_FUN_145998380);
  }
  return DAT_146b3eb48;
}



// FUNCTION 142f195f0 FUN_142f195f0 body=47 status=ok
// SIG undefined FUN_142f195f0(void)

longlong FUN_142f195f0(void)

{
  if (DAT_146b3eb68 == 0) {
    FUN_141786440(&DAT_146b3eb68,&PTR_FUN_1459987d0);
  }
  return DAT_146b3eb68;
}



// FUNCTION 142f19620 FUN_142f19620 body=47 status=ok
// SIG undefined FUN_142f19620(void)

longlong FUN_142f19620(void)

{
  if (DAT_146b3ec48 == 0) {
    FUN_141786440(&DAT_146b3ec48,&PTR_GetPrivateStaticClass_145994fc0);
  }
  return DAT_146b3ec48;
}



// FUNCTION 142f19650 FUN_142f19650 body=47 status=ok
// SIG undefined FUN_142f19650(void)

longlong FUN_142f19650(void)

{
  if (DAT_146b3ebe8 == 0) {
    FUN_141786440(&DAT_146b3ebe8,&PTR_FUN_1459943a0);
  }
  return DAT_146b3ebe8;
}



// FUNCTION 142f19680 FUN_142f19680 body=47 status=ok
// SIG undefined FUN_142f19680(void)

longlong FUN_142f19680(void)

{
  if (DAT_146b3ec58 == 0) {
    FUN_141786440(&DAT_146b3ec58,&PTR_FUN_1459963f0);
  }
  return DAT_146b3ec58;
}



// FUNCTION 142f196b0 FUN_142f196b0 body=47 status=ok
// SIG undefined FUN_142f196b0(void)

longlong FUN_142f196b0(void)

{
  if (DAT_146b3eca8 == 0) {
    FUN_141786440(&DAT_146b3eca8,&PTR_StaticClass_1459976d0);
  }
  return DAT_146b3eca8;
}



// FUNCTION 142f196e0 FUN_142f196e0 body=47 status=ok
// SIG undefined FUN_142f196e0(void)

longlong FUN_142f196e0(void)

{
  if (DAT_146b3ea30 == 0) {
    FUN_141786a30(&DAT_146b3ea30,&PTR_Z_Construct_UPackage__Script_HighMoon_14673cc50);
  }
  return DAT_146b3ea30;
}



// FUNCTION 142f19710 FUN_142f19710 body=47 status=ok
// SIG undefined FUN_142f19710(void)

longlong FUN_142f19710(void)

{
  if (DAT_146b3eaa8 == 0) {
    FUN_141786a30(&DAT_146b3eaa8,&PTR_Z_Construct_UPackage__Script_HighMoon_14673d4a0);
  }
  return DAT_146b3eaa8;
}



// FUNCTION 142f19740 FUN_142f19740 body=47 status=ok
// SIG undefined FUN_142f19740(void)

longlong FUN_142f19740(void)

{
  if (DAT_146b3ebb0 == 0) {
    FUN_141786a30(&DAT_146b3ebb0,&PTR_Z_Construct_UPackage__Script_HighMoon_14673e9b0);
  }
  return DAT_146b3ebb0;
}



// FUNCTION 142f19770 FUN_142f19770 body=47 status=ok
// SIG undefined FUN_142f19770(void)

longlong FUN_142f19770(void)

{
  if (DAT_146b3eb40 == 0) {
    FUN_1417866a0(&DAT_146b3eb40,&PTR_Z_Construct_UPackage__Script_HighMoon_146741520);
  }
  return DAT_146b3eb40;
}



// FUNCTION 142f197a0 FUN_142f197a0 body=47 status=ok
// SIG undefined FUN_142f197a0(void)

longlong FUN_142f197a0(void)

{
  if (DAT_146b3eb00 == 0) {
    FUN_1417866a0(&DAT_146b3eb00,&PTR_Z_Construct_UPackage__Script_HighMoon_1467414d0);
  }
  return DAT_146b3eb00;
}



// FUNCTION 142f197d0 FUN_142f197d0 body=47 status=ok
// SIG undefined FUN_142f197d0(void)

longlong FUN_142f197d0(void)

{
  if (DAT_146b3ec68 == 0) {
    FUN_1417866a0(&DAT_146b3ec68,&PTR_Z_Construct_UPackage__Script_HighMoon_146741570);
  }
  return DAT_146b3ec68;
}



// FUNCTION 142f19800 FUN_142f19800 body=47 status=ok
// SIG undefined FUN_142f19800(void)

longlong FUN_142f19800(void)

{
  if (DAT_146b3ec70 == 0) {
    FUN_1417866a0(&DAT_146b3ec70,&PTR_Z_Construct_UPackage__Script_HighMoon_1467415c0);
  }
  return DAT_146b3ec70;
}



// FUNCTION 142f19830 FUN_142f19830 body=47 status=ok
// SIG undefined FUN_142f19830(void)

longlong FUN_142f19830(void)

{
  if (DAT_146b3ed10 == 0) {
    FUN_1417866a0(&DAT_146b3ed10,&PTR_Z_Construct_UPackage__Script_HighMoon_146741660);
  }
  return DAT_146b3ed10;
}



// FUNCTION 142f19860 FUN_142f19860 body=47 status=ok
// SIG undefined FUN_142f19860(void)

longlong FUN_142f19860(void)

{
  if (DAT_146b3ed18 == 0) {
    FUN_1417866a0(&DAT_146b3ed18,&PTR_Z_Construct_UPackage__Script_HighMoon_1467416b0);
  }
  return DAT_146b3ed18;
}



// FUNCTION 142f19890 FUN_142f19890 body=47 status=ok
// SIG undefined FUN_142f19890(void)

longlong FUN_142f19890(void)

{
  if (DAT_146b3ed08 == 0) {
    FUN_1417866a0(&DAT_146b3ed08,&PTR_Z_Construct_UPackage__Script_HighMoon_146741610);
  }
  return DAT_146b3ed08;
}



// FUNCTION 142f198c0 FUN_142f198c0 body=47 status=ok
// SIG undefined FUN_142f198c0(void)

longlong FUN_142f198c0(void)

{
  if (DAT_146b3ea40 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3ea40,&PTR_Z_Construct_UPackage__Script_HighMoon_14673cd50);
  }
  return DAT_146b3ea40;
}



// FUNCTION 142f198f0 FUN_142f198f0 body=47 status=ok
// SIG undefined FUN_142f198f0(void)

longlong FUN_142f198f0(void)

{
  if (DAT_146b3eab8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3eab8,&PTR_Z_Construct_UPackage__Script_HighMoon_14673d550);
  }
  return DAT_146b3eab8;
}



// FUNCTION 142f19920 FUN_142f19920 body=47 status=ok
// SIG undefined FUN_142f19920(void)

longlong FUN_142f19920(void)

{
  if (DAT_146b3ebe0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3ebe0,&PTR_Z_Construct_UPackage__Script_HighMoon_14673edc0);
  }
  return DAT_146b3ebe0;
}



// FUNCTION 142f19950 FUN_142f19950 body=47 status=ok
// SIG undefined FUN_142f19950(void)

longlong FUN_142f19950(void)

{
  if (DAT_146b3ebd0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3ebd0,&PTR_Z_Construct_UPackage__Script_HighMoon_14673ecb0);
  }
  return DAT_146b3ebd0;
}



// FUNCTION 142f19980 FUN_142f19980 body=47 status=ok
// SIG undefined FUN_142f19980(void)

longlong FUN_142f19980(void)

{
  if (DAT_146b3ebc0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3ebc0,&PTR_Z_Construct_UPackage__Script_HighMoon_14673ea70);
  }
  return DAT_146b3ebc0;
}



// FUNCTION 142f199b0 FUN_142f199b0 body=47 status=ok
// SIG undefined FUN_142f199b0(void)

longlong FUN_142f199b0(void)

{
  if (DAT_146b3ec90 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3ec90,&PTR_Z_Construct_UPackage__Script_HighMoon_14673f7a0);
  }
  return DAT_146b3ec90;
}



// FUNCTION 142f199e0 FUN_142f199e0 body=47 status=ok
// SIG undefined FUN_142f199e0(void)

longlong FUN_142f199e0(void)

{
  if (DAT_146b3ec80 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3ec80,&PTR_Z_Construct_UPackage__Script_HighMoon_14673f650);
  }
  return DAT_146b3ec80;
}



// FUNCTION 142f19a10 FUN_142f19a10 body=47 status=ok
// SIG undefined FUN_142f19a10(void)

longlong FUN_142f19a10(void)

{
  if (DAT_146b3eca0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3eca0,&PTR_Z_Construct_UPackage__Script_HighMoon_14673fa20);
  }
  return DAT_146b3eca0;
}



// FUNCTION 142f19aa0 execGetSoundPriority body=43 status=ok
// SIG undefined execGetSoundPriority(void)

void AStimuliActor::execGetSoundPriority(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = UPrimitiveComponent::GetStaticDepthPriorityGroup();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f19ad0 FUN_142f19ad0 body=43 status=ok
// SIG undefined FUN_142f19ad0(void)

void FUN_142f19ad0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142eb5ad0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f19b00 FUN_142f19b00 body=43 status=ok
// SIG undefined FUN_142f19b00(void)

void FUN_142f19b00(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = AGameSession::RequiresPushToTalk();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f19b30 FUN_142f19b30 body=43 status=ok
// SIG undefined FUN_142f19b30(void)

void FUN_142f19b30(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142eb7ef0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f19b60 FUN_142f19b60 body=43 status=ok
// SIG undefined FUN_142f19b60(void)

void FUN_142f19b60(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = ALadder::IsOccupied();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f19b90 FUN_142f19b90 body=43 status=ok
// SIG undefined FUN_142f19b90(void)

void FUN_142f19b90(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142ebda90();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f19bc0 FUN_142f19bc0 body=44 status=ok
// SIG undefined FUN_142f19bc0(void)

void FUN_142f19bc0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x40))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f19bf0 FUN_142f19bf0 body=44 status=ok
// SIG undefined FUN_142f19bf0(void)

void FUN_142f19bf0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x48))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f19c20 execByteToBoolean body=117 status=ok
// SIG undefined execByteToBoolean(void)

void ULowEntryExtendedStandardLibrary::execByteToBoolean
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = ByteToBoolean(local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f19ca0 execByteToBoolean body=117 status=ok
// SIG undefined execByteToBoolean(void)

void ULowEntryExtendedStandardLibrary::execByteToBoolean
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142ebdcd0(local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f19d20 execByteToBoolean body=117 status=ok
// SIG undefined execByteToBoolean(void)

void ULowEntryExtendedStandardLibrary::execByteToBoolean
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = UNF_CustomizationStatics::IsWeaponType(local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f19da0 execByteToBoolean body=117 status=ok
// SIG undefined execByteToBoolean(void)

void ULowEntryExtendedStandardLibrary::execByteToBoolean
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142ebdcf0(local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f19e20 execByteToBoolean body=117 status=ok
// SIG undefined execByteToBoolean(void)

void ULowEntryExtendedStandardLibrary::execByteToBoolean
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142ebdd00(local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f19ea0 execGetUseAutoGears body=43 status=ok
// SIG undefined execGetUseAutoGears(void)

void UChaosVehicleMovementComponent::execGetUseAutoGears
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetUseAutoGears();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f19ed0 execIsConsumed body=47 status=ok
// SIG undefined execIsConsumed(void)

void UMoviePipelineExecutorJob::execIsConsumed
               (longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x2a8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f19f00 FUN_142f19f00 body=334 status=ok
// SIG undefined FUN_142f19f00(void)

void FUN_142f19f00(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ebeff0(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 142f1a050 FUN_142f1a050 body=128 status=ok
// SIG undefined FUN_142f1a050(void)

void FUN_142f1a050(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ebf1c0(param_1,local_res10);
  return;
}



// FUNCTION 142f1a0d0 FUN_142f1a0d0 body=128 status=ok
// SIG undefined FUN_142f1a0d0(void)

void FUN_142f1a0d0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ebf2e0(param_1,local_res10);
  return;
}



// FUNCTION 142f1a170 FUN_142f1a170 body=334 status=ok
// SIG undefined FUN_142f1a170(void)

void FUN_142f1a170(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ebf470(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 142f1a2c0 FUN_142f1a2c0 body=128 status=ok
// SIG undefined FUN_142f1a2c0(void)

void FUN_142f1a2c0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ec6740(param_1,local_res10);
  return;
}



// FUNCTION 142f1a340 FUN_142f1a340 body=128 status=ok
// SIG undefined FUN_142f1a340(void)

void FUN_142f1a340(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ec69b0(param_1,local_res10);
  return;
}



// FUNCTION 142f1a3e0 FUN_142f1a3e0 body=128 status=ok
// SIG undefined FUN_142f1a3e0(void)

void FUN_142f1a3e0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ecb970(param_1,local_res10);
  return;
}



// FUNCTION 142f1a480 FUN_142f1a480 body=158 status=ok
// SIG undefined FUN_142f1a480(void)

void FUN_142f1a480(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ecea70(param_1,puVar1);
  FUN_142ea9b10(&local_18);
  return;
}



// FUNCTION 142f1a520 FUN_142f1a520 body=118 status=ok
// SIG undefined FUN_142f1a520(void)

void FUN_142f1a520(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ecf920(param_1,local_res10[0]);
  return;
}



// FUNCTION 142f1a5a0 FUN_142f1a5a0 body=128 status=ok
// SIG undefined FUN_142f1a5a0(void)

void FUN_142f1a5a0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ed2060(param_1,local_res10);
  return;
}



// FUNCTION 142f1a620 FUN_142f1a620 body=283 status=ok
// SIG undefined FUN_142f1a620(void)

void FUN_142f1a620(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  int local_res10 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res10[0] = 0;
  puVar5 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ed2490(param_1,puVar5,local_res10[0] != 0);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 142f1a740 FUN_142f1a740 body=287 status=ok
// SIG undefined FUN_142f1a740(void)

void FUN_142f1a740(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  FText::FText(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar5 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ed24e0(param_1,local_38,puVar5);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f1a860 FUN_142f1a860 body=118 status=ok
// SIG undefined FUN_142f1a860(void)

void FUN_142f1a860(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ed2600(param_1,local_res10[0]);
  return;
}



// FUNCTION 142f1a8e0 FUN_142f1a8e0 body=195 status=ok
// SIG undefined FUN_142f1a8e0(void)

void FUN_142f1a8e0(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  int local_res20 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ed2820(param_1,local_res10[0],local_res20[0] != 0);
  return;
}



// FUNCTION 142f1a9b0 FUN_142f1a9b0 body=131 status=ok
// SIG undefined FUN_142f1a9b0(void)

void FUN_142f1a9b0(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x38))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 142f1aa40 FUN_142f1aa40 body=283 status=ok
// SIG undefined FUN_142f1aa40(void)

void FUN_142f1aa40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  int local_res10 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res10[0] = 0;
  puVar5 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ed3800(param_1,puVar5,local_res10[0] != 0);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 142f1ab60 FUN_142f1ab60 body=287 status=ok
// SIG undefined FUN_142f1ab60(void)

void FUN_142f1ab60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  FText::FText(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar5 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ed3850(param_1,local_38,puVar5);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f1ac80 FUN_142f1ac80 body=283 status=ok
// SIG undefined FUN_142f1ac80(void)

void FUN_142f1ac80(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  int local_res10 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res10[0] = 0;
  puVar5 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ed3af0(param_1,puVar5,local_res10[0] != 0);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 142f1ada0 FUN_142f1ada0 body=195 status=ok
// SIG undefined FUN_142f1ada0(void)

void FUN_142f1ada0(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  int local_res20 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ed3c20(param_1,local_res10[0],local_res20[0] != 0);
  return;
}



// FUNCTION 142f1ae70 FUN_142f1ae70 body=495 status=ok
// SIG undefined FUN_142f1ae70(void)

void FUN_142f1ae70(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int local_res10 [2];
  undefined8 local_res18 [2];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  FText::FText(local_60);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  FText::FText(local_78);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar7 = local_res10[0] != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = FText::FText(local_48,local_78);
  uVar6 = FText::FText(local_30,local_60);
  uVar5 = FUN_142ed8230(local_res18[0],uVar6,uVar5,bVar7);
  *param_3 = uVar5;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  return;
}



// FUNCTION 142f1b060 FUN_142f1b060 body=495 status=ok
// SIG undefined FUN_142f1b060(void)

void FUN_142f1b060(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int local_res10 [2];
  undefined8 local_res18 [2];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  FText::FText(local_60);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  FText::FText(local_78);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar7 = local_res10[0] != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = FText::FText(local_48,local_78);
  uVar6 = FText::FText(local_30,local_60);
  uVar5 = FUN_142ed83f0(local_res18[0],uVar6,uVar5,bVar7);
  *param_3 = uVar5;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  return;
}



// FUNCTION 142f1b250 FUN_142f1b250 body=411 status=ok
// SIG undefined FUN_142f1b250(void)

void FUN_142f1b250(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_28;
  undefined1 local_20 [8];
  undefined8 local_18;
  undefined1 local_10 [8];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FText::FText(local_68);
  FText::FText(local_50);
  local_38 = 0;
  local_30 = 0;
  local_28 = 1;
  FWeakObjectPtr::operator=(local_20,0);
  local_18 = 0;
  FName::FName(local_10,"Default",1);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar6 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = FUN_142ed88d0(local_res10,puVar6);
  *param_3 = uVar5;
  FUN_142ea9b80(&local_38);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return;
}



// FUNCTION 142f1b3f0 FUN_142f1b3f0 body=517 status=ok
// SIG undefined FUN_142f1b3f0(void)

void FUN_142f1b3f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 local_res10 [8];
  int local_res18 [2];
  undefined8 local_res20;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  FText::FText(local_70);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  FText::FText(local_88);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  bVar7 = local_res18[0] != 0;
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = FText::FText(local_58,local_88);
  uVar6 = FText::FText(local_40,local_70);
  uVar5 = FUN_142ed8ea0(local_res20,uVar6,uVar5,bVar7,local_res10[0]);
  *param_3 = uVar5;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  return;
}



// FUNCTION 142f1b600 FUN_142f1b600 body=495 status=ok
// SIG undefined FUN_142f1b600(void)

void FUN_142f1b600(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int local_res10 [2];
  undefined8 local_res18 [2];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  FText::FText(local_60);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  FText::FText(local_78);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar7 = local_res10[0] != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = FText::FText(local_48,local_78);
  uVar6 = FText::FText(local_30,local_60);
  uVar5 = FUN_142ed91a0(local_res18[0],uVar6,uVar5,bVar7);
  *param_3 = uVar5;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  return;
}



// FUNCTION 142f1b7f0 FUN_142f1b7f0 body=47 status=ok
// SIG undefined FUN_142f1b7f0(void)

longlong FUN_142f1b7f0(void)

{
  if (DAT_146b3f2c8 == 0) {
    FUN_141786440(&DAT_146b3f2c8,&PTR_FUN_14599d830);
  }
  return DAT_146b3f2c8;
}



// FUNCTION 142f1b820 FUN_142f1b820 body=47 status=ok
// SIG undefined FUN_142f1b820(void)

longlong FUN_142f1b820(void)

{
  if (DAT_146b3f2b8 == 0) {
    FUN_141786a30(&DAT_146b3f2b8,&PTR_FUN_146741e90);
  }
  return DAT_146b3f2b8;
}



// FUNCTION 142f1b850 FUN_142f1b850 body=47 status=ok
// SIG undefined FUN_142f1b850(void)

longlong FUN_142f1b850(void)

{
  if (DAT_146b3f2c0 == 0) {
    FUN_141786a30(&DAT_146b3f2c0,&PTR_FUN_146741f50);
  }
  return DAT_146b3f2c0;
}



// FUNCTION 142f1b8a0 FUN_142f1b8a0 body=162 status=ok
// SIG undefined FUN_142f1b8a0(void)

longlong FUN_142f1b8a0(void)

{
  if (DAT_146b3f2f8 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGFxDropDownList",&DAT_146b3f2f8,FUN_142f1ed90,0x1f0,
                  0x10000008,0,L"Engine",FUN_142f1cbf0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146b3f2f8;
}



// FUNCTION 142f1b950 FUN_142f1b950 body=47 status=ok
// SIG undefined FUN_142f1b950(void)

longlong FUN_142f1b950(void)

{
  if (DAT_146b3f3e0 == 0) {
    FUN_141786440(&DAT_146b3f3e0,&PTR_GetPrivateStaticClass_14599dee0);
  }
  return DAT_146b3f3e0;
}



// FUNCTION 142f1b980 FUN_142f1b980 body=47 status=ok
// SIG undefined FUN_142f1b980(void)

longlong FUN_142f1b980(void)

{
  if (DAT_146b3f3d0 == 0) {
    FUN_141786a30(&DAT_146b3f3d0,&PTR_FUN_1467440f0);
  }
  return DAT_146b3f3d0;
}



// FUNCTION 142f1b9b0 FUN_142f1b9b0 body=47 status=ok
// SIG undefined FUN_142f1b9b0(void)

longlong FUN_142f1b9b0(void)

{
  if (DAT_146b3f3d8 == 0) {
    FUN_141786a30(&DAT_146b3f3d8,&PTR_FUN_146744130);
  }
  return DAT_146b3f3d8;
}



// FUNCTION 142f1b9e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXGameInstance::GetPrivateStaticClass(void)

{
  if (DAT_146b3f308 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGFxComboBoxScrollingList",&DAT_146b3f308,FUN_140447710,0x330
                  ,0x10000008,0,L"Engine",FUN_142f1c9c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGameInstanceGameParameters::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b3f308;
}



// FUNCTION 142f1ba90 FUN_142f1ba90 body=47 status=ok
// SIG undefined FUN_142f1ba90(void)

longlong FUN_142f1ba90(void)

{
  if (DAT_146b3f2f0 == 0) {
    FUN_141786440(&DAT_146b3f2f0,&PTR_FUN_14599e2c0);
  }
  return DAT_146b3f2f0;
}



// FUNCTION 142f1bac0 FUN_142f1bac0 body=47 status=ok
// SIG undefined FUN_142f1bac0(void)

longlong FUN_142f1bac0(void)

{
  if (DAT_146b3f2e0 == 0) {
    FUN_141786a30(&DAT_146b3f2e0,&PTR_FUN_146742080);
  }
  return DAT_146b3f2e0;
}



// FUNCTION 142f1baf0 FUN_142f1baf0 body=47 status=ok
// SIG undefined FUN_142f1baf0(void)

longlong FUN_142f1baf0(void)

{
  if (DAT_146b3f2e8 == 0) {
    FUN_141786a30(&DAT_146b3f2e8,&PTR_FUN_146742140);
  }
  return DAT_146b3f2e8;
}



// FUNCTION 142f1bb20 FUN_142f1bb20 body=47 status=ok
// SIG undefined FUN_142f1bb20(void)

longlong FUN_142f1bb20(void)

{
  if (DAT_146b3f368 == 0) {
    FUN_141786440(&DAT_146b3f368,&PTR_GetPrivateStaticClass_1459a0fa0);
  }
  return DAT_146b3f368;
}



// FUNCTION 142f1bb90 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameInstanceGameParameters::GetPrivateStaticClass(void)

{
  if (DAT_146b3f438 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxGFxListCellWithData",&DAT_146b3f438,FUN_140447710,800,
                  0x10000008,0,L"Engine",&LAB_142f1d240,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  URemnantGameInstance::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b3f438;
}


