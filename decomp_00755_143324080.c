// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143324080 FUN_143324080 body=296 status=ok
// SIG undefined FUN_143324080(void)

void FUN_143324080(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      uVar2 = 1;
    }
    else if (*(int *)(param_1 + 0x18) != 0) {
      FUN_143324340(param_1 + 8);
    }
  }
  if (*(int *)(param_1 + 0x40) != *(int *)(*(longlong *)(param_1 + 0x20) + 0x10)) {
    do {
      puVar4 = (undefined8 *)
               ((ulonglong)*(uint *)(param_1 + 0x40) * 0x10 +
               *(longlong *)(*(longlong *)(param_1 + 0x38) + 8));
      iVar1 = (**(code **)(*(longlong *)*puVar4 + 8))((longlong *)*puVar4,puVar4,param_1,uVar2);
      uVar3 = uVar2;
      if (iVar1 != 0) {
        iVar1 = (**(code **)(*(longlong *)*puVar4 + 8))((longlong *)*puVar4,puVar4,param_1,1);
        if (DAT_146b64353 == '\0') {
          DAT_146b64353 = '\x01';
        }
        uVar3 = 1;
        if (iVar1 == 0) {
          FUN_1433241b0(param_1);
          uVar3 = 1;
        }
      }
      uVar2 = 0;
      if (param_2 != 1) {
        uVar2 = uVar3;
      }
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      iVar1 = *(int *)(param_1 + 0x40);
      if (iVar1 == **(int **)(param_1 + 0x38)) {
        iVar1 = 0;
      }
      *(int *)(param_1 + 0x40) = iVar1;
    } while (iVar1 != *(int *)(*(longlong *)(param_1 + 0x20) + 0x10));
  }
  if ((*(int *)(param_1 + 0x28) == 1) && (*(int *)(param_1 + 0x18) != 0)) {
    return;
  }
  FUN_1433241b0(param_1);
  return;
}



// FUNCTION 1433241b0 FUN_1433241b0 body=268 status=ok
// SIG undefined FUN_1433241b0(void)

void FUN_1433241b0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_143324340(param_1 + 8);
  }
  if (piVar1[5] != *(int *)(param_1 + 0x40)) {
    do {
      plVar4 = (longlong *)((ulonglong)(uint)piVar1[5] * 0x10 + *(longlong *)(piVar1 + 2));
      (**(code **)(*(longlong *)*plVar4 + 0x10))((longlong *)*plVar4,plVar4,param_1);
      if (*plVar4 != 0) {
        puVar2 = (undefined8 *)((ulonglong)(uint)piVar1[5] * 0x10 + *(longlong *)(piVar1 + 2));
        *puVar2 = 0;
        puVar2[1] = 0;
        piVar1[5] = piVar1[5] + 1;
        iVar3 = piVar1[5];
        if (iVar3 == *piVar1) {
          iVar3 = 0;
        }
        piVar1[5] = iVar3;
      }
    } while (piVar1[5] != *(int *)(param_1 + 0x40));
  }
  if (*(int *)(param_1 + 0x40) != piVar1[4]) {
    puVar2 = (undefined8 *)((ulonglong)(uint)piVar1[5] * 0x10 + *(longlong *)(piVar1 + 2));
    plVar4 = (longlong *)*puVar2;
    (**(code **)(*plVar4 + 0x10))(plVar4,puVar2,param_1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x48),0,0xc0);
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  return;
}



// FUNCTION 1433242d0 FUN_1433242d0 body=103 status=ok
// SIG undefined FUN_1433242d0(void)

void FUN_1433242d0(longlong param_1)

{
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x48),0,0xc0);
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  return;
}



// FUNCTION 143324340 FUN_143324340 body=92 status=ok
// SIG undefined FUN_143324340(void)

void FUN_143324340(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar2 = 1;
  lVar3 = 2;
  do {
    if (((*puVar1 & uVar2) != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)*param_1 + 8))();
    }
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    param_1 = param_1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 1433243d0 FUN_1433243d0 body=91 status=ok
// SIG undefined FUN_1433243d0(void)

void FUN_1433243d0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10) >> 4;
  if (*(ulonglong *)(param_1 + 0x18) <= uVar1) {
    FUN_143324830(param_1 + 8,uVar1);
  }
  *(ulonglong *)
   (*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar1 * 8) +
   (ulonglong)(*(uint *)(param_1 + 0x10) & 0xf) * 8) = CONCAT44(param_3,param_2);
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
  return;
}



// FUNCTION 143324440 FUN_143324440 body=256 status=ok
// SIG undefined FUN_143324440(void)

void FUN_143324440(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (2 < *(longlong *)(param_1 + 0x10) - (ulonglong)uVar1) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    uVar3 = *(longlong *)(param_1 + 0x10) - 1;
    if ((*(float *)(*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 4) * 8) +
                   (ulonglong)(uVar1 & 0xf) * 8) !=
         *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + (uVar3 >> 4) * 8) +
                   (ulonglong)((uint)uVar3 & 0xf) * 8)) ||
       (uVar3 = *(longlong *)(param_1 + 0x10) - 1,
       *(float *)(*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 4) * 8) + 4 +
                 (ulonglong)(uVar1 & 0xf) * 8) !=
       *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + (uVar3 >> 4) * 8) + 4 +
                 (ulonglong)((uint)uVar3 & 0xf) * 8))) {
      uVar3 = *(ulonglong *)(param_1 + 0x10) >> 4;
      lVar2 = *(longlong *)(lVar2 + (ulonglong)(uVar1 >> 4) * 8);
      if (*(ulonglong *)(param_1 + 0x18) <= uVar3) {
        FUN_143324830(param_1 + 8,uVar3);
      }
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar3 * 8) +
       (ulonglong)(*(uint *)(param_1 + 0x10) & 0xf) * 8) =
           *(undefined8 *)(lVar2 + (ulonglong)(uVar1 & 0xf) * 8);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    }
  }
  return;
}



// FUNCTION 143324550 FUN_143324550 body=139 status=ok
// SIG undefined FUN_143324550(void)

void FUN_143324550(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  uVar3 = (ulonglong)uVar1;
  if (*(longlong *)(param_1 + 0x10) - uVar3 < 3) {
    if (uVar3 < *(ulonglong *)(param_1 + 0x10)) {
      *(ulonglong *)(param_1 + 0x10) = uVar3;
      return;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x10);
    uVar3 = *(ulonglong *)(param_1 + 0x38) >> 2;
    if (*(ulonglong *)(param_1 + 0x40) <= uVar3) {
      FUN_143324790(param_1 + 0x30,uVar3);
    }
    *(ulonglong *)
     (*(longlong *)(*(longlong *)(param_1 + 0x50) + uVar3 * 8) +
     (ulonglong)(*(uint *)(param_1 + 0x38) & 3) * 8) = CONCAT44(iVar2 - uVar1,uVar1);
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 1433245e0 FUN_1433245e0 body=304 status=ok
// SIG undefined FUN_1433245e0(void)

void FUN_1433245e0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  uVar3 = param_2 + 7U & 0xfffffffffffffff8;
  if (param_1[3] == 0) {
    pvVar2 = (void *)(**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,0x600,0);
    param_1[2] = pvVar2;
    param_1[3] = pvVar2;
    _guard_xfg_dispatch_icall_nop(pvVar2,0,0x600);
    param_1[4] = 0x40;
  }
  else {
    lVar1 = FUN_143324710(param_1,uVar3);
    if (lVar1 != 0) {
      return;
    }
    param_1[3] = param_1[3] + 0x18;
  }
  lVar1 = (longlong)(param_1[3] - param_1[2]) / 6 + ((longlong)(param_1[3] - param_1[2]) >> 0x3f);
  lVar1 = (lVar1 >> 2) - (lVar1 >> 0x3f);
  if ((longlong)param_1[4] <= lVar1) {
    pvVar2 = (void *)(**(code **)(*(longlong *)*param_1 + 0x50))
                               ((longlong *)*param_1,param_1[4] * 0x30,0);
    _guard_xfg_dispatch_icall_nop(pvVar2,(void *)param_1[2],param_1[4] * 0x18);
    _guard_xfg_dispatch_icall_nop
              ((void *)(param_1[4] * 0x18 + (longlong)pvVar2),0,param_1[4] * 0x18);
    (**(code **)(*(longlong *)*param_1 + 0x60))((longlong *)*param_1,param_1[2]);
    param_1[2] = pvVar2;
    param_1[4] = param_1[4] * 2;
    param_1[3] = (void *)((longlong)pvVar2 + lVar1 * 0x18);
  }
  FUN_143324710(param_1,uVar3);
  return;
}



// FUNCTION 143324710 FUN_143324710 body=121 status=ok
// SIG undefined FUN_143324710(void)

longlong FUN_143324710(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  lVar2 = plVar1[2];
  if (param_2 <= plVar1[1] - lVar2) {
    plVar1[2] = lVar2 + param_2;
    return *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) - param_2;
  }
  if (lVar2 == *plVar1) {
    FUN_1433248d0(param_1,param_2);
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
    *plVar1 = *plVar1 + param_2;
    return **(longlong **)(param_1 + 0x18);
  }
  return 0;
}



// FUNCTION 143324790 FUN_143324790 body=155 status=ok
// SIG undefined FUN_143324790(void)

void FUN_143324790(undefined8 *param_1,ulonglong param_2)

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
  uVar1 = FUN_1433245e0(*param_1,0x20);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 143324830 FUN_143324830 body=155 status=ok
// SIG undefined FUN_143324830(void)

void FUN_143324830(undefined8 *param_1,ulonglong param_2)

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
  uVar1 = FUN_1433245e0(*param_1,0x80);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 1433248d0 FUN_1433248d0 body=116 status=ok
// SIG undefined FUN_1433248d0(void)

void FUN_1433248d0(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong *)param_1[3] != 0) {
    (**(code **)(*(longlong *)*param_1 + 0x60))();
  }
  uVar1 = param_1[1];
  lVar3 = ((param_2 + -1 + uVar1) / uVar1) * uVar1;
  uVar2 = (**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,lVar3,0);
  *(undefined8 *)(param_1[3] + 0x10) = uVar2;
  *(undefined8 *)param_1[3] = uVar2;
  ((longlong *)param_1[3])[1] = *(longlong *)param_1[3] + lVar3;
  return;
}



// FUNCTION 143324970 FUN_143324970 body=17 status=ok
// SIG undefined FUN_143324970(void)

undefined8 FUN_143324970(ulonglong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11;
  if ((param_1 & 0x10) == 0) {
    uVar1 = 4;
  }
  return uVar1;
}



// FUNCTION 143324990 FUN_143324990 body=304 status=ok
// SIG undefined FUN_143324990(void)

ulonglong FUN_143324990(float *param_1,undefined1 (*param_2) [16],longlong param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  uint uVar8;
  float extraout_XMM0_Da;
  undefined8 uVar9;
  undefined8 uVar10;
  float extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  
  if (param_3 != 0) {
    uVar7 = FUN_143324ad0();
    return uVar7;
  }
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[4];
  fVar5 = param_1[5];
  fVar11 = fVar2 * (fVar5 - fVar4);
  fVar12 = fVar4 * fVar4 + fVar2 * fVar2;
  fVar13 = fVar5 * fVar5 + fVar3 * fVar3;
  auVar15._4_4_ = fVar13;
  auVar15._0_4_ = fVar12;
  auVar15._8_4_ = param_1[6] * param_1[6] + param_1[2] * param_1[2];
  auVar15._12_4_ = param_1[7] * param_1[7] + param_1[3] * param_1[3];
  auVar15 = rsqrtps(unaff_XMM8,auVar15);
  uVar9 = FUN_143326110();
  fVar14 = auVar15._0_4_;
  fVar18 = (float)((uint)(fVar11 - fVar4 * (fVar3 - fVar2)) & (uint)uVar9) * fVar14;
  fVar19 = (fVar5 * fVar4 + fVar3 * fVar2) * fVar14;
  uVar10 = FUN_1433260a0();
  uVar8 = FUN_143326180();
  auVar16._4_4_ =
       (float)((uint)(fVar11 - fVar4 * (fVar3 - fVar2)) & (uint)((ulonglong)uVar9 >> 0x20)) * fVar14
       - (float)(extraout_XMM0_Dc_00 & (uint)fVar18);
  auVar16._0_4_ = fVar18 - (float)(uVar8 & (uint)fVar19);
  auVar16._8_4_ = fVar14;
  auVar16._12_4_ = auVar15._4_4_;
  auVar16 = rcpps(auVar15,auVar16);
  fVar11 = auVar16._0_4_ * fVar18 + 0.0;
  uVar6 = FUN_1433260a0();
  auVar1._4_4_ = -(uint)((float)((ulonglong)uVar10 >> 0x20) != fVar13);
  auVar1._0_4_ = -(uint)((float)uVar10 != fVar12);
  auVar1._8_4_ = -(uint)(extraout_XMM0_Dc != fVar18);
  auVar1._12_4_ = -(uint)(extraout_XMM0_Dd != fVar18);
  uVar6 = movmskps(uVar6,auVar1);
  uVar8 = -(uint)(extraout_XMM0_Da <= fVar19) &
          ((uint)(auVar16._4_4_ * (fVar5 * fVar4 + fVar3 * fVar2) * fVar14 + 1.0) ^ (uint)fVar11) ^
          (uint)fVar11;
  auVar17._0_8_ = auVar16._8_8_;
  auVar17._8_4_ = uVar8;
  auVar17._12_4_ = uVar8;
  *param_2 = auVar17;
  return (ulonglong)(((byte)uVar6 & 0xf) == 0xf);
}



// FUNCTION 143324ad0 FUN_143324ad0 body=714 status=ok
// SIG undefined FUN_143324ad0(void)

BADSPACEBASE * FUN_143324ad0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float _X;
  float fVar11;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0 [2];
  ulonglong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  fVar8 = param_1[5];
  fVar9 = 0.0;
  fVar1 = param_1[1];
  fVar2 = *param_1;
  fVar3 = param_1[4];
  fVar11 = fVar3 * fVar3 + fVar2 * fVar2;
  _X = fVar8 * fVar8 + fVar1 * fVar1;
  if ((fVar11 != 0.0) && (_X != 0.0)) {
    fVar7 = _guard_xfg_dispatch_icall_nop(fVar11);
    fVar10 = ABS((fVar8 - fVar3) * fVar2 - (fVar1 - fVar2) * fVar3) / fVar7;
    if (1e-08 <= fVar10) {
      *param_2 = fVar7;
      fVar11 = ((fVar8 * fVar3 + fVar1 * fVar2) * fVar7) / fVar11;
      fVar8 = _guard_xfg_dispatch_icall_nop(_X);
      param_2[1] = fVar8;
      if (fVar11 < 0.0) {
        fVar8 = fVar10 / (fVar10 - fVar11);
      }
      else {
        fVar8 = fVar11 / fVar10 + 1.0;
      }
      param_2[2] = fVar8;
      if (param_3 != (float *)0x0) {
        local_c0[0] = 0.0;
        local_c0[1] = 0.0;
        uStack_b8 = (ulonglong)(uint)fVar7;
        local_b0 = CONCAT44(fVar10,fVar11 + fVar7);
        uStack_a8 = 0;
        local_d8 = 0;
        uStack_d4 = 0;
        uStack_d0 = 0x3f800000;
        uStack_cc = 0;
        local_c8 = 0x3f800000;
        local_c4 = 0x3f800000;
        FUN_143326520(param_3,&local_d8,local_c0);
        pfVar5 = local_c0;
        uVar6 = 4;
        fVar8 = param_3[1];
        uVar4 = 0;
        fVar1 = *param_3;
        fVar2 = param_3[5];
        fVar3 = param_3[4];
        local_c0[0] = 1.0;
        local_c0[1] = 0.0;
        uStack_b8 = 0x3f3504f33f3504f3;
        local_b0 = 0x3f86666600000000;
        uStack_a8 = 0x3f3504f3bf3504f3;
        do {
          fVar11 = *pfVar5;
          *pfVar5 = fVar1 * fVar11 + fVar8 * pfVar5[1];
          fVar11 = fVar3 * fVar11 + fVar2 * pfVar5[1];
          pfVar5[1] = fVar11;
          fVar11 = fVar11 * fVar11 + *pfVar5 * *pfVar5;
          if (fVar9 < fVar11) {
            fVar9 = fVar11;
            uVar6 = uVar4;
          }
          uVar4 = uVar4 + 2;
          pfVar5 = pfVar5 + 2;
        } while (uVar4 < 8);
        fVar8 = _guard_xfg_dispatch_icall_nop(local_c0[uVar6 + 1],local_c0[uVar6]);
        FUN_143326480(param_3,1.5707964 - fVar8);
      }
      register0x00000020 = (BADSPACEBASE *)0x1;
    }
    else {
      register0x00000020 = (BADSPACEBASE *)0x0;
    }
  }
  return register0x00000020;
}



// FUNCTION 143324da0 FUN_143324da0 body=711 status=ok
// SIG undefined FUN_143324da0(void)

ulonglong FUN_143324da0(longlong param_1,float param_2,uint param_3,float *param_4,longlong param_5)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pfVar1 = (float *)(ulonglong)*(ushort *)(param_1 + 0x2a);
  if ((param_3 == *(ushort *)(param_1 + 0x2a)) &&
     (pfVar1 = *(float **)(param_1 + 0x20), param_2 == pfVar1[0x21])) {
    if ((param_3 >> 0xf & 1) == 0) {
      pfVar1 = param_4;
      if ((param_3 & 0x10) == 0) {
        fVar6 = *(float *)(param_5 + 0x10);
        fVar7 = *(float *)(param_5 + 0x14);
        if (((byte)param_3 & 0xc0) != 0x40) {
          fVar6 = *(float *)(param_5 + 0x18);
          fVar7 = *(float *)(param_5 + 0x1c);
        }
        uVar2 = param_3 & 7;
        if (uVar2 == 1) {
          uVar2 = 0;
          do {
            fVar4 = *(float *)((param_1 - (longlong)param_4) + 0x30 + (longlong)pfVar1);
            if ((*pfVar1 < fVar4 * fVar6) || (fVar4 * fVar7 < *pfVar1)) goto LAB_143325060;
            uVar2 = uVar2 + 1;
            pfVar1 = pfVar1 + 1;
          } while (uVar2 < 3);
        }
        else if (uVar2 == 2) {
          fVar6 = *(float *)(param_5 + 0x20);
          fVar7 = *(float *)(param_5 + 0x24);
          if ((param_3 & 0x20) != 0) {
            fVar5 = *(float *)(param_1 + 0x34) * *param_4;
            fVar4 = *(float *)(param_1 + 0x30) * param_4[1];
            if ((((*(float *)(param_1 + 0x38) * 0.999 <= param_4[2]) &&
                 (param_4[2] <= *(float *)(param_1 + 0x38) * 1.001)) && (fVar4 * 0.999 <= fVar5)) &&
               (fVar5 <= fVar4 * 1.001)) {
              fVar6 = *(float *)(param_5 + 0x10);
              fVar7 = *(float *)(param_5 + 0x14);
            }
          }
          uVar2 = 0;
          do {
            fVar4 = *(float *)((longlong)pfVar1 + (param_1 - (longlong)param_4) + 0x30);
            if ((*pfVar1 < fVar4 * fVar6) || (fVar4 * fVar7 < *pfVar1)) goto LAB_143325060;
            uVar2 = uVar2 + 1;
            pfVar1 = pfVar1 + 1;
          } while (uVar2 < 3);
        }
        else if (uVar2 == 3) {
          uVar2 = 0;
          do {
            fVar6 = *(float *)((longlong)pfVar1 + (param_1 - (longlong)param_4) + 0x30);
            if ((*pfVar1 < fVar6 * *(float *)(param_5 + 0x28)) ||
               (fVar6 * *(float *)(param_5 + 0x2c) < *pfVar1)) goto LAB_143325060;
            uVar2 = uVar2 + 1;
            pfVar1 = pfVar1 + 1;
          } while (uVar2 < 3);
        }
      }
      else {
        uVar3 = 0;
        uVar2 = uVar3;
        do {
          if (*pfVar1 != *(float *)((param_1 - (longlong)param_4) + 0x30 + (longlong)pfVar1))
          goto LAB_143325060;
          uVar2 = uVar2 + 1;
          pfVar1 = pfVar1 + 1;
        } while (uVar2 < 8);
        uVar2 = uVar3;
        do {
          pfVar1 = (float *)(ulonglong)(uVar2 + 8);
          fVar6 = *(float *)(param_1 + 0x30 + (longlong)pfVar1 * 4);
          if ((param_4[(longlong)pfVar1] < fVar6 * *(float *)(param_5 + 0x30)) ||
             (fVar6 * *(float *)(param_5 + 0x34) < param_4[(longlong)pfVar1])) goto LAB_143325060;
          uVar2 = uVar2 + 1;
        } while (uVar2 < 3);
        do {
          pfVar1 = (float *)(ulonglong)(uVar3 + 0xb);
          if (param_4[(longlong)pfVar1] != *(float *)(param_1 + 0x30 + (longlong)pfVar1 * 4))
          goto LAB_143325060;
          uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
      }
      uVar2 = *(ushort *)(param_1 + 0x28) - 1;
      pfVar1 = (float *)(ulonglong)uVar2;
      fVar6 = *(float *)(param_1 + 0x30 + (longlong)(int)uVar2 * 4);
      if ((param_4[(int)uVar2] < (1.0 - *(float *)(param_5 + 0x3c)) * fVar6) ||
         ((*(float *)(param_5 + 0x3c) + 1.0) * fVar6 < param_4[(int)uVar2])) goto LAB_143325060;
    }
    return CONCAT71((int7)((ulonglong)pfVar1 >> 8),1);
  }
LAB_143325060:
  return (ulonglong)pfVar1 & 0xffffffffffffff00;
}



// FUNCTION 143325070 FUN_143325070 body=68 status=ok
// SIG undefined FUN_143325070(void)

void FUN_143325070(longlong param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = (int *)(param_1 + 0x2c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return;
  }
  if (((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) &&
      (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(), cVar2 == '\0')) &&
     ((*(ushort *)(param_1 + 0x2a) & 0x110) == 0)) {
    return;
  }
  FUN_143325540(*(undefined8 *)(param_1 + 0x18),param_1);
  return;
}



// FUNCTION 1433250c0 releaseFont body=58 status=ok
// SIG undefined releaseFont(void)

void Scaleform::Render::FontCacheHandleRef::releaseFont(undefined8 param_1)

{
  RefCountImpl *this;
  
  this = (RefCountImpl *)AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_1,0);
  if (this != (RefCountImpl *)0x0) {
    FUN_143325df0(this,param_1);
    RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 143325150 releaseFont body=58 status=ok
// SIG undefined releaseFont(void)

void Scaleform::Render::FontCacheHandleRef::releaseFont(undefined8 param_1)

{
  RefCountImpl *this;
  
  this = (RefCountImpl *)AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_1,0);
  if (this != (RefCountImpl *)0x0) {
    FUN_143325df0(this,param_1);
    RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 143325190 FUN_143325190 body=58 status=ok
// SIG undefined FUN_143325190(void)

void FUN_143325190(longlong param_1)

{
  RefCountImpl *this;
  
  this = (RefCountImpl *)Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_1,0);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_1 + 8,0);
    Scaleform::RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 1433251e0 PostLoadDefaultObject body=27 status=ok
// SIG undefined PostLoadDefaultObject(void)

void UAnimBlueprintGeneratedClass::PostLoadDefaultObject(undefined8 param_1,RefCountImpl *param_2)

{
  Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync();
  Scaleform::RefCountImpl::AddRef(param_2);
  return;
}



// FUNCTION 143325230 FUN_143325230 body=79 status=ok
// SIG undefined FUN_143325230(void)

void FUN_143325230(longlong param_1)

{
  RefCountImpl *this;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    this = (RefCountImpl *)Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_1 + 0x18,0);
    if (this != (RefCountImpl *)0x0) {
      FUN_143325df0(this,param_1 + 0x18);
      Scaleform::RefCountImpl::Release(this);
    }
  }
  return;
}



// FUNCTION 143325290 FUN_143325290 body=170 status=ok
// SIG undefined FUN_143325290(void)

void FUN_143325290(RefCountImplCore *param_1)

{
  RefCountImpl *pRVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_145b00760;
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_145b00768;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    pRVar1 = (RefCountImpl *)Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_1 + 0x18,0);
    if (pRVar1 != (RefCountImpl *)0x0) {
      FUN_143325df0(pRVar1,param_1 + 0x18);
      Scaleform::RefCountImpl::Release(pRVar1);
    }
  }
  pRVar1 = (RefCountImpl *)Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_1 + 0x18,0);
  if (pRVar1 != (RefCountImpl *)0x0) {
    FUN_143325df0(pRVar1,param_1 + 0x18);
    Scaleform::RefCountImpl::Release(pRVar1);
  }
  *(undefined ***)param_1 = &PTR_FUN_145b00750;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_145b006e0;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 143325340 FUN_143325340 body=34 status=ok
// SIG undefined FUN_143325340(void)

bool FUN_143325340(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x20;
    if (lVar1 == -0x28) {
      lVar2 = 0;
    }
    return *(longlong *)(lVar1 + 0x30) == lVar2;
  }
  return true;
}



// FUNCTION 1433253a0 MeshKeySet body=102 status=ok
// SIG undefined MeshKeySet(MeshKeySet * this, MeshKeyManager * param_1, MeshProvider_KeySupport * param_2)

/* public: __cdecl Scaleform::Render::MeshKeySet::MeshKeySet(class Scaleform::Render::MeshKeyManager
   * __ptr64,class Scaleform::Render::MeshProvider_KeySupport * __ptr64) __ptr64 */

MeshKeySet * __thiscall
Scaleform::Render::MeshKeySet::MeshKeySet
          (MeshKeySet *this,MeshKeyManager *param_1,MeshProvider_KeySupport *param_2)

{
                    /* 0x33253a0  4
                       ??0MeshKeySet@Render@Scaleform@@QEAA@PEAVMeshKeyManager@12@PEAVMeshProvider_KeySupport@12@@Z
                        */
  *(undefined8 *)(this + 8) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
  *(undefined ***)this = &PTR_FUN_145b007d8;
  if (param_1 != (MeshKeyManager *)0x0) {
    RefCountImpl::AddRef((RefCountImpl *)param_1);
  }
  *(MeshKeyManager **)(this + 0x18) = param_1;
  *(MeshProvider_KeySupport **)(this + 0x20) = param_2;
  *(MeshKeySet **)(this + 0x28) = this + 0x20;
  *(MeshKeySet **)(this + 0x30) = this + 0x20;
  return this;
}



// FUNCTION 143325410 ~MeshKeySet body=54 status=ok
// SIG void ~MeshKeySet(MeshKeySet * this)

/* public: virtual __cdecl Scaleform::Render::MeshKeySet::~MeshKeySet(void) __ptr64 */

void __thiscall Scaleform::Render::MeshKeySet::~MeshKeySet(MeshKeySet *this)

{
                    /* 0x3325410  33  ??1MeshKeySet@Render@Scaleform@@UEAA@XZ */
  *(undefined ***)this = &PTR_FUN_145b007d8;
  FUN_143325630();
  if (*(RefCountImpl **)(this + 0x18) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(this + 0x18));
  }
  *(undefined ***)this = &PTR_FUN_145b006e0;
  return;
}



// FUNCTION 143325450 FUN_143325450 body=222 status=ok
// SIG undefined FUN_143325450(void)

undefined8 * FUN_143325450(longlong param_1,void *param_2,ushort param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  uVar3 = 0x11;
  if ((param_3 & 0x10) == 0) {
    uVar3 = 4;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x60);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,(ulonglong)(uVar3 - 1) * 4 + 0x38,0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0xffffffffffffffff;
    puVar2[2] = 0xffffffffffffffff;
    *puVar2 = &PTR_FUN_145b00758;
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 1;
    *(undefined4 *)(puVar2 + 6) = 0;
    puVar2[3] = param_1;
    *(short *)(puVar2 + 5) = (short)uVar3;
    *(ushort *)((longlong)puVar2 + 0x2a) = param_3;
    _guard_xfg_dispatch_icall_nop(puVar2 + 6,param_2,(ulonglong)uVar3 << 2);
    puVar2[1] = *(undefined8 *)(param_1 + 0x28);
    puVar2[2] = param_1 + 0x20;
    *(undefined8 **)(*(longlong *)(param_1 + 0x28) + 0x10) = puVar2;
    *(undefined8 **)(param_1 + 0x28) = puVar2;
  }
  return puVar2;
}



// FUNCTION 143325540 FUN_143325540 body=229 status=ok
// SIG undefined FUN_143325540(void)

void FUN_143325540(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2[1] + 0x10) = param_2[2];
    *(undefined8 *)(param_2[2] + 8) = param_2[1];
    param_2[1] = 0xffffffffffffffff;
    param_2[2] = 0xffffffffffffffff;
    if (param_2[4] != 0) {
      lVar2 = param_2[4];
      plVar1 = *(longlong **)(lVar2 + 0x50);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      *(undefined8 *)(lVar2 + 0x50) = 0;
      if ((RefCountImpl *)param_2[4] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)param_2[4]);
      }
      param_2[4] = 0;
    }
    (**(code **)*param_2)(param_2,0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_2);
    lVar2 = param_1 + 0x20;
    if (param_1 == -0x28) {
      lVar2 = 0;
    }
    if (*(longlong *)(param_1 + 0x30) == lVar2) {
      FUN_143325ea0(*(undefined8 *)(param_1 + 0x18),param_1);
    }
  }
  return;
}



// FUNCTION 143325630 FUN_143325630 body=210 status=ok
// SIG undefined FUN_143325630(void)

void FUN_143325630(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 0x30);
  plVar1 = (longlong *)(param_1 + 0x28);
  puVar6 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)(param_1 + 0x20);
  if (plVar1 == (longlong *)0x0) {
    puVar5 = puVar6;
  }
  for (; puVar4 != puVar5; puVar4 = (undefined8 *)puVar4[2]) {
    lVar2 = puVar4[4];
    if (lVar2 != 0) {
      if (*(longlong **)(lVar2 + 0x50) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar2 + 0x50) + 0x10))();
      }
      *(undefined8 *)(lVar2 + 0x50) = 0;
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x30);
  puVar5 = (undefined8 *)(param_1 + 0x20);
  if (plVar1 == (longlong *)0x0) {
    puVar5 = puVar6;
  }
  while (puVar4 != puVar5) {
    puVar3 = (undefined8 *)puVar4[2];
    if (puVar4[4] != 0) {
      if ((RefCountImpl *)puVar4[4] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)puVar4[4]);
      }
      puVar4[4] = 0;
    }
    (**(code **)*puVar4)(puVar4,0);
    (**(code **)(*DAT_146b62f28 + 0x60))();
    puVar4 = puVar3;
  }
  puVar4 = (undefined8 *)(param_1 + 0x20);
  if (plVar1 == (longlong *)0x0) {
    puVar4 = puVar6;
  }
  *plVar1 = (longlong)puVar4;
  *(undefined8 **)(param_1 + 0x30) = puVar4;
  return;
}



// FUNCTION 1433257a0 GetBoundsLocal body=33 status=ok
// SIG undefined GetBoundsLocal(void)

undefined8
Scaleform::GFx::ImageShapeCharacterDef::GetBoundsLocal(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x28))
            (*(longlong *)(param_1 + 0x20) + 0x10);
  return param_2;
}



// FUNCTION 1433257d0 GetBounds body=33 status=ok
// SIG undefined GetBounds(void)

undefined8 Scaleform::Render::MeshKeySet::GetBounds(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x30))
            (*(longlong *)(param_1 + 0x20) + 0x10);
  return param_2;
}



// FUNCTION 143325800 FUN_143325800 body=53 status=ok
// SIG undefined FUN_143325800(void)

undefined8 FUN_143325800(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x38))();
  return param_2;
}



// FUNCTION 143325930 FUN_143325930 body=86 status=ok
// SIG undefined FUN_143325930(void)

void FUN_143325930(longlong param_1)

{
  longlong lVar1;
  RefCountImpl *this;
  
  lVar1 = Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_1 + 0x20,0);
  if ((lVar1 != 0) &&
     (this = (RefCountImpl *)Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(lVar1 + 0x18,0),
     this != (RefCountImpl *)0x0)) {
    Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(lVar1 + 0x20,0);
    Scaleform::RefCountImpl::Release(this);
  }
  return;
}



// FUNCTION 143325990 FUN_143325990 body=34 status=ok
// SIG undefined FUN_143325990(void)

void FUN_143325990(longlong param_1)

{
  Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_1 + 0x20,0);
  return;
}



// FUNCTION 1433259c0 FUN_1433259c0 body=175 status=ok
// SIG undefined FUN_1433259c0(void)

longlong FUN_1433259c0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  lVar4 = param_1 + 0x20;
  if (param_1 == -0x28) {
    lVar4 = 0;
  }
  do {
    lVar3 = lVar1;
    if (lVar3 == lVar4) {
      return 0;
    }
    lVar1 = *(longlong *)(lVar3 + 0x10);
    cVar2 = FUN_143324da0(lVar3,param_2,param_3,param_4,param_5);
  } while (cVar2 == '\0');
  return lVar3;
}



// FUNCTION 143325a80 FUN_143325a80 body=216 status=ok
// SIG undefined FUN_143325a80(void)

void FUN_143325a80(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  Scaleform::Lock::DoLock();
  plVar1 = (longlong *)(param_1 + 0x50);
  puVar2 = (undefined8 *)(param_1 + 0x48);
  if (plVar1 == (longlong *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  if (*(undefined8 **)(param_1 + 0x58) != puVar2) {
    puVar2 = *(undefined8 **)(param_1 + 0x58);
    local_18 = &local_20;
    puVar4 = (undefined8 *)(param_1 + 0x48);
    if (plVar1 == (longlong *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    local_10 = &local_20;
    puVar3 = &local_20;
    if (puVar2 != puVar4) {
      local_18 = (undefined8 *)*plVar1;
      *plVar1 = (longlong)puVar4;
      *(undefined8 **)(param_1 + 0x58) = puVar4;
      local_18[2] = &local_20;
      puVar2[1] = &local_20;
      local_10 = puVar2;
      puVar3 = puVar2;
    }
    do {
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)(puVar3[1] + 0x10) = puVar3[2];
        *(undefined8 *)(puVar3[2] + 8) = puVar3[1];
        puVar3[1] = 0xffffffffffffffff;
        puVar3[2] = 0xffffffffffffffff;
        (**(code **)*puVar3)(puVar3,1);
        puVar3 = local_10;
      }
    } while (puVar3 != &local_20);
  }
  Scaleform::Lock::DoLock(param_1 + 0x10);
  return;
}



// FUNCTION 143325b60 FUN_143325b60 body=234 status=ok
// SIG undefined FUN_143325b60(void)

void FUN_143325b60(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  Scaleform::Lock::DoLock();
  plVar1 = (longlong *)(param_1 + 0x50);
  puVar2 = (undefined8 *)(param_1 + 0x48);
  if (plVar1 == (longlong *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  if (*(undefined8 **)(param_1 + 0x58) != puVar2) {
    puVar2 = *(undefined8 **)(param_1 + 0x58);
    local_18 = &local_20;
    puVar4 = (undefined8 *)(param_1 + 0x48);
    if (plVar1 == (longlong *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    local_10 = &local_20;
    puVar3 = &local_20;
    if (puVar2 != puVar4) {
      local_18 = (undefined8 *)*plVar1;
      *plVar1 = (longlong)puVar4;
      *(undefined8 **)(param_1 + 0x58) = puVar4;
      local_18[2] = &local_20;
      puVar2[1] = &local_20;
      local_10 = puVar2;
      puVar3 = puVar2;
    }
    do {
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)(puVar3[1] + 0x10) = puVar3[2];
        *(undefined8 *)(puVar3[2] + 8) = puVar3[1];
        puVar3[1] = 0xffffffffffffffff;
        puVar3[2] = 0xffffffffffffffff;
        (**(code **)*puVar3)(puVar3,1);
        puVar3 = local_10;
      }
    } while (puVar3 != &local_20);
  }
  FUN_143325f60(param_1,0);
  Scaleform::Lock::DoLock(param_1 + 0x10);
  return;
}



// FUNCTION 143325c50 FUN_143325c50 body=297 status=ok
// SIG undefined FUN_143325c50(void)

longlong FUN_143325c50(RefCountImpl *param_1,MeshProvider_KeySupport *param_2,undefined4 param_3,
                      undefined4 param_4,undefined8 param_5,undefined8 param_6)

{
  MeshKeySet *this;
  longlong lVar1;
  longlong lVar2;
  
  Scaleform::Lock::DoLock(param_1 + 0x10);
  if (*(longlong *)(param_2 + 0x18) == 0) {
    Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_2 + 0x18,param_1);
    Scaleform::RefCountImpl::AddRef(param_1);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    this = (MeshKeySet *)
           (**(code **)(**(longlong **)(param_1 + 0x60) + 0x50))
                     (*(longlong **)(param_1 + 0x60),0x38);
    lVar2 = 0;
    lVar1 = lVar2;
    if (this != (MeshKeySet *)0x0) {
      lVar1 = Scaleform::Render::MeshKeySet::MeshKeySet(this,(MeshKeyManager *)param_1,param_2);
    }
    Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_2 + 0x20,lVar1);
    lVar1 = *(longlong *)(param_2 + 0x20);
    if (lVar1 == 0) goto LAB_143325d4f;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 0x40);
    *(RefCountImpl **)(lVar1 + 0x10) = param_1 + 0x38;
    *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) = lVar1;
    *(longlong *)(param_1 + 0x40) = lVar1;
  }
  lVar1 = *(longlong *)(param_2 + 0x20);
  if ((lVar1 == 0) || (lVar2 = FUN_1433259c0(lVar1,param_3,param_4,param_5,param_6), lVar2 == 0)) {
    lVar2 = FUN_143325450(lVar1,param_5,param_4);
  }
  else {
    *(int *)(lVar2 + 0x2c) = *(int *)(lVar2 + 0x2c) + 1;
  }
LAB_143325d4f:
  Scaleform::Lock::DoLock(param_1 + 0x10);
  return lVar2;
}



// FUNCTION 143325d80 FUN_143325d80 body=98 status=ok
// SIG undefined FUN_143325d80(void)

void FUN_143325d80(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1433259c0(param_2,param_3,param_4,param_5,param_6);
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0x2c) = *(int *)(lVar1 + 0x2c) + 1;
      return;
    }
  }
  FUN_143325450(param_2,param_5,param_4);
  return;
}



// FUNCTION 143325df0 FUN_143325df0 body=167 status=ok
// SIG undefined FUN_143325df0(void)

void FUN_143325df0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  Scaleform::Lock::DoLock(param_1 + 0x10);
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 != 0) {
    *(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x10) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8) = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 0x50);
    *(longlong *)(lVar1 + 0x10) = param_1 + 0x48;
    *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x10) = lVar1;
    *(longlong *)(param_1 + 0x50) = lVar1;
    Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(lVar1 + 0x20,0);
    Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_2 + 8,0);
  }
  Scaleform::Lock::DoLock(param_1 + 0x10);
  return;
}



// FUNCTION 143325ea0 FUN_143325ea0 body=183 status=ok
// SIG undefined FUN_143325ea0(void)

void FUN_143325ea0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  RefCountImpl *this;
  
  if (param_2 != (undefined8 *)0x0) {
    Scaleform::Lock::DoLock(param_1 + 0x10);
    lVar1 = Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_2 + 4,0);
    if ((lVar1 != 0) &&
       (this = (RefCountImpl *)Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(lVar1 + 0x18,0),
       this != (RefCountImpl *)0x0)) {
      Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(lVar1 + 0x20,0);
      Scaleform::RefCountImpl::Release(this);
    }
    *(undefined8 *)(param_2[1] + 0x10) = param_2[2];
    *(undefined8 *)(param_2[2] + 8) = param_2[1];
    param_2[1] = 0xffffffffffffffff;
    param_2[2] = 0xffffffffffffffff;
    (**(code **)*param_2)(param_2,1);
    Scaleform::Lock::DoLock(param_1 + 0x10);
  }
  return;
}



// FUNCTION 143325f60 FUN_143325f60 body=306 status=ok
// SIG undefined FUN_143325f60(void)

void FUN_143325f60(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  RefCountImpl *this;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lStack_20;
  longlong *local_18;
  longlong *local_10;
  
  lVar5 = ((longlong)param_2 + 4) * 0x10 + param_1;
  plVar1 = (longlong *)(lVar5 + -8);
  if (lVar5 == 0) {
    plVar1 = (longlong *)0x0;
  }
  if (*(longlong **)(lVar5 + 8) != plVar1) {
    plVar2 = (longlong *)(((longlong)param_2 + 4) * 0x10 + param_1);
    local_18 = &lStack_20;
    local_10 = &lStack_20;
    plVar1 = (longlong *)plVar2[1];
    plVar3 = plVar2 + -1;
    if (plVar2 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    plVar4 = &lStack_20;
    if (plVar1 != plVar3) {
      local_18 = (longlong *)*plVar2;
      *plVar2 = (longlong)plVar3;
      plVar2[1] = (longlong)plVar3;
      local_18[2] = (longlong)&lStack_20;
      plVar1[1] = (longlong)&lStack_20;
      local_10 = plVar1;
      plVar4 = plVar1;
    }
    do {
      if (plVar4 != (longlong *)0x0) {
        if (((param_2 != 1) &&
            (lVar5 = Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(plVar4 + 4,0), lVar5 != 0))
           && (this = (RefCountImpl *)
                      Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(lVar5 + 0x18,0),
              this != (RefCountImpl *)0x0)) {
          Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(lVar5 + 0x20,0);
          Scaleform::RefCountImpl::Release(this);
        }
        *(longlong *)(plVar4[1] + 0x10) = plVar4[2];
        *(longlong *)(plVar4[2] + 8) = plVar4[1];
        plVar4[1] = -1;
        plVar4[2] = -1;
        (**(code **)*plVar4)(plVar4);
        plVar4 = local_10;
      }
    } while (plVar4 != &lStack_20);
  }
  return;
}



// FUNCTION 1433260a0 FUN_1433260a0 body=97 status=ok
// SIG undefined FUN_1433260a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1433260a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b62fb0) {
    _Init_thread_header(&DAT_146b62fb0);
    if (DAT_146b62fb0 == -1) {
      _DAT_146b62fa0 = 0;
      uRam0000000146b62fa8 = 0;
      _Init_thread_footer(&DAT_146b62fb0);
    }
  }
  return _DAT_146b62fa0;
}



// FUNCTION 143326110 FUN_143326110 body=102 status=ok
// SIG undefined FUN_143326110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143326110(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b64370) {
    _Init_thread_header(&DAT_146b64370);
    if (DAT_146b64370 == -1) {
      _DAT_146b64360 = 0x7fffffff7fffffff;
      uRam0000000146b64368 = 0x7fffffff7fffffff;
      _Init_thread_footer(&DAT_146b64370);
    }
  }
  return;
}



// FUNCTION 143326180 FUN_143326180 body=102 status=ok
// SIG undefined FUN_143326180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143326180(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b64390) {
    _Init_thread_header(&DAT_146b64390);
    if (DAT_146b64390 == -1) {
      _DAT_146b64380 = 0xffffffff;
      uRam0000000146b64388 = 0;
      _Init_thread_footer(&DAT_146b64390);
    }
  }
  return;
}



// FUNCTION 1433261f0 FUN_1433261f0 body=294 status=ok
// SIG undefined FUN_1433261f0(void)

undefined8 * FUN_1433261f0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if ((param_2 & 2) != 0) {
    lVar3 = param_1[-1];
    puVar1 = param_1 + lVar3 * 7;
    while (lVar3 != 0) {
      puVar2 = puVar1 + -7;
      lVar3 = lVar3 + -1;
      *puVar2 = &PTR_FUN_145b007d8;
      FUN_143325630(puVar2);
      if ((RefCountImpl *)puVar1[-4] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)puVar1[-4]);
      }
      *puVar2 = &PTR_FUN_145b006e0;
      puVar1 = puVar2;
    }
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(param_1 + -1,param_1[-1] * 0x38 + 8);
    }
    return param_1 + -1;
  }
  *param_1 = &PTR_FUN_145b007d8;
  FUN_143325630();
  if ((RefCountImpl *)param_1[3] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[3]);
  }
  *param_1 = &PTR_FUN_145b006e0;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 143326330 FUN_143326330 body=72 status=ok
// SIG undefined FUN_143326330(void)

undefined8 * FUN_143326330(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145b00758;
  if ((RefCountImpl *)param_1[4] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[4]);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 143326380 FUN_143326380 body=43 status=ok
// SIG undefined FUN_143326380(void)

undefined8 * FUN_143326380(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b006e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1433263b0 FUN_1433263b0 body=89 status=ok
// SIG undefined FUN_1433263b0(void)

undefined8 FUN_1433263b0(undefined8 param_1,ulonglong param_2)

{
  FUN_143325290();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 143326410 FUN_143326410 body=110 status=ok
// SIG undefined FUN_143326410(void)

RefCountImplCore * FUN_143326410(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b00750;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_145b006e0;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 143326480 FUN_143326480 body=122 status=ok
// SIG undefined FUN_143326480(void)

void FUN_143326480(Matrix2x4<float> *param_1,float param_2)

{
  float fVar1;
  float local_48;
  float local_44;
  undefined8 local_40;
  float local_38;
  float local_34;
  undefined8 local_30;
  
  fVar1 = _guard_xfg_dispatch_icall_nop(param_2);
  local_38 = _guard_xfg_dispatch_icall_nop(param_2);
  local_44 = -local_38;
  local_40 = 0;
  local_30 = 0;
  local_48 = fVar1;
  local_34 = fVar1;
  Scaleform::Render::Matrix2x4<float>::Append(param_1,(Matrix2x4<float> *)&local_48);
  return;
}



// FUNCTION 143326500 GetIdentityBounds body=31 status=ok
// SIG undefined GetIdentityBounds(void)

undefined8 Scaleform::Render::MeshProvider::GetIdentityBounds(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x30))(param_1,param_2,&DAT_14621c810);
  return param_2;
}



// FUNCTION 143326520 FUN_143326520 body=311 status=ok
// SIG undefined FUN_143326520(void)

Matrix2x4<float> * FUN_143326520(Matrix2x4<float> *param_1,float *param_2,float *param_3)

{
  float local_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  
  local_6c = *param_2;
  local_74 = param_2[4] - local_6c;
  local_78 = param_2[2] - local_6c;
  local_68 = param_2[3];
  local_64 = param_2[5];
  local_5c = param_2[1];
  *(float *)param_1 = local_78;
  local_64 = local_64 - local_5c;
  *(float *)(param_1 + 4) = local_74;
  local_68 = local_68 - local_5c;
  *(float *)(param_1 + 0xc) = local_6c;
  *(float *)(param_1 + 0x1c) = local_5c;
  *(undefined4 *)(param_1 + 8) = 0;
  *(float *)(param_1 + 0x14) = local_64;
  *(float *)(param_1 + 0x10) = local_68;
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_4c = *param_3;
  local_58 = param_3[2] - local_4c;
  local_54 = param_3[4] - local_4c;
  local_3c = param_3[1];
  local_48 = param_3[3] - local_3c;
  local_44 = param_3[5] - local_3c;
  local_50 = 0;
  local_40 = 0;
  local_70 = 0;
  local_60 = 0;
  Scaleform::Render::Matrix2x4<float>::SetInverse(param_1,(Matrix2x4<float> *)&local_78);
  Scaleform::Render::Matrix2x4<float>::Append(param_1,(Matrix2x4<float> *)&local_58);
  return param_1;
}



// FUNCTION 143326660 Disconnect body=9 status=ok
// SIG undefined Disconnect(void)

void CAkVPLNode::Disconnect(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 143326670 ClearAndRelease body=19 status=ok
// SIG undefined ClearAndRelease(void)

void Scaleform::Render::StrokePath::ClearAndRelease(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 143326690 FUN_143326690 body=199 status=ok
// SIG undefined FUN_143326690(void)

void FUN_143326690(longlong param_1,float *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar3 = *(longlong *)(param_1 + 8) - 1;
    uVar2 = (ulonglong)((uint)uVar3 & 0xf);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar3 >> 4) * 8);
    fVar4 = param_2[1] - *(float *)(lVar1 + 4 + uVar2 * 0xc);
    fVar5 = *param_2 - *(float *)(lVar1 + uVar2 * 0xc);
    fVar4 = _guard_xfg_dispatch_icall_nop(fVar4 * fVar4 + fVar5 * fVar5);
    *(float *)(lVar1 + 8 + uVar2 * 0xc) = fVar4;
    if (fVar4 <= 0.0) {
      return;
    }
  }
  uVar3 = *(ulonglong *)(param_1 + 8) >> 4;
  if (*(ulonglong *)(param_1 + 0x10) <= uVar3) {
    FUN_143329c80(param_1,uVar3);
  }
  uVar2 = (ulonglong)(*(uint *)(param_1 + 8) & 0xf);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar3 * 8);
  *(undefined8 *)(lVar1 + uVar2 * 0xc) = *(undefined8 *)param_2;
  *(float *)(lVar1 + 8 + uVar2 * 0xc) = param_2[2];
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
  return;
}



// FUNCTION 143326760 FUN_143326760 body=162 status=ok
// SIG undefined FUN_143326760(void)

ulonglong FUN_143326760(longlong param_1)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong extraout_RAX;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  
  uVar4 = *(ulonglong *)(param_1 + 8);
  if (1 < uVar4) {
    uVar2 = (ulonglong)((uint)(uVar4 - 1) & 0xf);
    pfVar1 = (float *)**(undefined8 **)(param_1 + 0x20);
    lVar3 = (*(undefined8 **)(param_1 + 0x20))[uVar4 - 1 >> 4];
    fVar5 = pfVar1[1] - *(float *)(lVar3 + 4 + uVar2 * 0xc);
    fVar6 = *pfVar1 - *(float *)(lVar3 + uVar2 * 0xc);
    fVar5 = _guard_xfg_dispatch_icall_nop(fVar5 * fVar5 + fVar6 * fVar6);
    *(float *)(lVar3 + 8 + uVar2 * 0xc) = fVar5;
    uVar4 = extraout_RAX;
    if (fVar5 <= 0.0) {
      lVar3 = *(longlong *)(param_1 + 8);
      if (lVar3 != 0) {
        lVar3 = lVar3 + -1;
        *(longlong *)(param_1 + 8) = lVar3;
      }
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),2 < *(ulonglong *)(param_1 + 8));
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 143326810 FUN_143326810 body=92 status=ok
// SIG undefined FUN_143326810(void)

undefined8 * FUN_143326810(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_145b00880;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[2] = param_2;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 2;
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined4 *)((longlong)param_1 + 0x44) = 2;
  *(undefined4 *)(param_1 + 9) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x3c23d70a;
  return param_1;
}



// FUNCTION 143326880 SetToleranceParam body=13 status=ok
// SIG undefined SetToleranceParam(void)

void Scaleform::Render::Stroker::SetToleranceParam(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0xc);
  return;
}



// FUNCTION 1433268d0 ClosePath body=28 status=ok
// SIG undefined ClosePath(void)

void Scaleform::Render::Stroker::ClosePath(longlong param_1)

{
  FUN_143326760(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x54) = 1;
  return;
}



// FUNCTION 143326900 FUN_143326900 body=1269 status=ok
// SIG undefined FUN_143326900(void)

void FUN_143326900(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong in_stack_ffffffffffffffc8;
  undefined8 uVar9;
  undefined4 uVar11;
  longlong lVar10;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    uVar2 = FUN_143326760();
    *(undefined1 *)(param_1 + 0x54) = uVar2;
  }
  if (*(ulonglong *)(param_1 + 0x18) < 2) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x54) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x54) == '\0') {
    lVar10 = **(longlong **)(param_1 + 0x30);
    uVar9 = CONCAT44((int)(in_stack_ffffffffffffffc8 >> 0x20),*(undefined4 *)(lVar10 + 8));
    FUN_143327640(param_1,param_2,lVar10,lVar10 + 0xc,uVar9,*(undefined4 *)(param_1 + 0x40));
    uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (2 < *(ulonglong *)(param_1 + 0x18)) {
      uVar6 = 1;
      uVar4 = 2;
      do {
        uVar5 = uVar6;
        if (uVar6 == 0) {
          uVar5 = *(ulonglong *)(param_1 + 0x18);
        }
        uVar8 = *(ulonglong *)(param_1 + 0x18);
        uVar7 = uVar4;
        if (uVar8 <= uVar4) {
          uVar7 = uVar4 - uVar8;
        }
        uVar3 = uVar6;
        if (uVar6 == 0) {
          uVar3 = uVar8;
        }
        uVar8 = (ulonglong)((uint)uVar6 & 0xf);
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar6 >> 4) * 8);
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar7 >> 4) * 8) +
                 (ulonglong)((uint)uVar7 & 0xf) * 0xc;
        FUN_1433278d0(param_1,param_2,
                      *(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar3 - 1 >> 4) * 8) +
                      (ulonglong)((uint)(uVar3 - 1) & 0xf) * 0xc,lVar1 + uVar8 * 0xc,lVar10,
                      *(undefined4 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar5 - 1 >> 4) * 8) + 8 +
                       (ulonglong)((uint)(uVar5 - 1) & 0xf) * 0xc),
                      *(undefined4 *)(lVar1 + 8 + uVar8 * 0xc));
        uVar11 = (undefined4)((ulonglong)lVar10 >> 0x20);
        uVar5 = uVar4 + 1;
        uVar6 = uVar4;
        uVar4 = uVar5;
      } while (uVar5 < *(ulonglong *)(param_1 + 0x18));
    }
    lVar10 = *(longlong *)(param_1 + 0x30);
    uVar6 = *(longlong *)(param_1 + 0x18) - 2;
    uVar4 = *(longlong *)(param_1 + 0x18) - 1;
    uVar5 = CONCAT44(uVar11,*(undefined4 *)
                             (*(longlong *)(lVar10 + (uVar6 >> 4) * 8) + 8 +
                             (ulonglong)((uint)uVar6 & 0xf) * 0xc));
    FUN_143327640(param_1,param_2,
                  *(longlong *)(lVar10 + (uVar4 >> 4) * 8) + (ulonglong)((uint)uVar4 & 0xf) * 0xc,
                  *(longlong *)(lVar10 + (uVar6 >> 4) * 8) + (ulonglong)((uint)uVar6 & 0xf) * 0xc,
                  uVar5,*(undefined4 *)(param_1 + 0x44));
    for (uVar6 = *(longlong *)(param_1 + 0x18) - 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      uVar4 = uVar6;
      if (uVar6 == 0) {
        uVar4 = *(ulonglong *)(param_1 + 0x18);
      }
      uVar5 = uVar6;
      if (uVar6 == 0) {
        uVar5 = *(ulonglong *)(param_1 + 0x18);
      }
      uVar8 = uVar6 + 1;
      if (*(ulonglong *)(param_1 + 0x18) <= uVar8) {
        uVar8 = uVar8 - *(ulonglong *)(param_1 + 0x18);
      }
      lVar10 = *(longlong *)(param_1 + 0x30);
      uVar7 = (ulonglong)((uint)uVar6 & 0xf);
      lVar1 = *(longlong *)(lVar10 + (uVar6 >> 4) * 8);
      uVar5 = *(longlong *)(lVar10 + (uVar5 - 1 >> 4) * 8) +
              (ulonglong)((uint)(uVar5 - 1) & 0xf) * 0xc;
      FUN_1433278d0(param_1,param_2,
                    *(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar8 >> 4) * 8) +
                    (ulonglong)((uint)uVar8 & 0xf) * 0xc,lVar1 + uVar7 * 0xc,uVar5,
                    *(undefined4 *)(lVar1 + 8 + uVar7 * 0xc),
                    *(undefined4 *)
                     (*(longlong *)(lVar10 + (uVar4 - 1 >> 4) * 8) + 8 +
                     (ulonglong)((uint)(uVar4 - 1) & 0xf) * 0xc));
    }
    (**(code **)(*param_2 + 0x28))(param_2);
    (**(code **)(*param_2 + 0x30))(param_2,0,1,0,uVar5 & 0xffffffffffffff00);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  else {
    uVar6 = 0;
    if (*(ulonglong *)(param_1 + 0x18) != 0) {
      do {
        uVar4 = uVar6;
        if (uVar6 == 0) {
          uVar4 = *(ulonglong *)(param_1 + 0x18);
        }
        uVar5 = uVar6 + 1;
        uVar8 = *(ulonglong *)(param_1 + 0x18);
        uVar7 = uVar5;
        if (uVar8 <= uVar5) {
          uVar7 = uVar5 - uVar8;
        }
        uVar3 = uVar6;
        if (uVar6 == 0) {
          uVar3 = uVar8;
        }
        uVar8 = (ulonglong)((uint)uVar6 & 0xf);
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar6 >> 4) * 8);
        in_stack_ffffffffffffffc8 =
             *(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar7 >> 4) * 8) +
             (ulonglong)((uint)uVar7 & 0xf) * 0xc;
        FUN_1433278d0(param_1,param_2,
                      *(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar3 - 1 >> 4) * 8) +
                      (ulonglong)((uint)(uVar3 - 1) & 0xf) * 0xc,lVar10 + uVar8 * 0xc,
                      in_stack_ffffffffffffffc8,
                      *(undefined4 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar4 - 1 >> 4) * 8) + 8 +
                       (ulonglong)((uint)(uVar4 - 1) & 0xf) * 0xc),
                      *(undefined4 *)(lVar10 + 8 + uVar8 * 0xc));
        uVar6 = uVar5;
      } while (uVar5 < *(ulonglong *)(param_1 + 0x18));
    }
    (**(code **)(*param_2 + 0x28))(param_2);
    uVar6 = in_stack_ffffffffffffffc8 & 0xffffffffffffff00;
    (**(code **)(*param_2 + 0x30))(param_2,0,1,0,uVar6);
    uVar4 = *(ulonglong *)(param_1 + 0x18);
    uVar5 = uVar4;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      uVar5 = uVar5 - 1;
      uVar8 = uVar5;
      if (uVar5 == 0) {
        uVar8 = *(ulonglong *)(param_1 + 0x18);
      }
      uVar6 = uVar5;
      if (uVar5 == 0) {
        uVar6 = *(ulonglong *)(param_1 + 0x18);
      }
      uVar7 = uVar4;
      if (*(ulonglong *)(param_1 + 0x18) <= uVar4) {
        uVar7 = uVar4 - *(ulonglong *)(param_1 + 0x18);
      }
      lVar10 = *(longlong *)(param_1 + 0x30);
      uVar3 = (ulonglong)((uint)uVar5 & 0xf);
      lVar1 = *(longlong *)(lVar10 + (uVar5 >> 4) * 8);
      uVar6 = *(longlong *)(lVar10 + (uVar6 - 1 >> 4) * 8) +
              (ulonglong)((uint)(uVar6 - 1) & 0xf) * 0xc;
      FUN_1433278d0(param_1,param_2,
                    *(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar7 >> 4) * 8) +
                    (ulonglong)((uint)uVar7 & 0xf) * 0xc,lVar1 + uVar3 * 0xc,uVar6,
                    *(undefined4 *)(lVar1 + 8 + uVar3 * 0xc),
                    *(undefined4 *)
                     (*(longlong *)(lVar10 + (uVar8 - 1 >> 4) * 8) + 8 +
                     (ulonglong)((uint)(uVar8 - 1) & 0xf) * 0xc));
    }
    (**(code **)(*param_2 + 0x28))(param_2);
    (**(code **)(*param_2 + 0x30))(param_2,0,1,0,uVar6 & 0xffffffffffffff00);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  return;
}



// FUNCTION 143326e00 FUN_143326e00 body=572 status=ok
// SIG undefined FUN_143326e00(void)

void FUN_143326e00(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong in_stack_ffffffffffffffc8;
  
  uVar6 = *(ulonglong *)(param_1 + 0x18);
  if (uVar6 < 3) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    return;
  }
  uVar7 = uVar6;
  if (param_3 == 0) {
    uVar7 = 0;
    if (uVar6 != 0) {
      do {
        uVar6 = uVar7;
        if (uVar7 == 0) {
          uVar6 = *(ulonglong *)(param_1 + 0x18);
        }
        uVar3 = uVar7 + 1;
        uVar4 = *(ulonglong *)(param_1 + 0x18);
        uVar8 = uVar3;
        if (uVar4 <= uVar3) {
          uVar8 = uVar3 - uVar4;
        }
        uVar5 = uVar7;
        if (uVar7 == 0) {
          uVar5 = uVar4;
        }
        uVar4 = (ulonglong)((uint)uVar7 & 0xf);
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar7 >> 4) * 8);
        in_stack_ffffffffffffffc8 =
             *(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar8 >> 4) * 8) +
             (ulonglong)((uint)uVar8 & 0xf) * 0xc;
        FUN_1433278d0(param_1,param_2,
                      *(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar5 - 1 >> 4) * 8) +
                      (ulonglong)((uint)(uVar5 - 1) & 0xf) * 0xc,lVar1 + uVar4 * 0xc,
                      in_stack_ffffffffffffffc8,
                      *(undefined4 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar6 - 1 >> 4) * 8) + 8 +
                       (ulonglong)((uint)(uVar6 - 1) & 0xf) * 0xc),
                      *(undefined4 *)(lVar1 + 8 + uVar4 * 0xc));
        uVar7 = uVar3;
      } while (uVar3 < *(ulonglong *)(param_1 + 0x18));
    }
  }
  else {
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      uVar7 = uVar7 - 1;
      uVar3 = uVar7;
      if (uVar7 == 0) {
        uVar3 = *(ulonglong *)(param_1 + 0x18);
      }
      uVar4 = uVar7;
      if (uVar7 == 0) {
        uVar4 = *(ulonglong *)(param_1 + 0x18);
      }
      uVar8 = uVar6;
      if (*(ulonglong *)(param_1 + 0x18) <= uVar6) {
        uVar8 = uVar6 - *(ulonglong *)(param_1 + 0x18);
      }
      lVar1 = *(longlong *)(param_1 + 0x30);
      uVar5 = (ulonglong)((uint)uVar7 & 0xf);
      lVar2 = *(longlong *)(lVar1 + (uVar7 >> 4) * 8);
      in_stack_ffffffffffffffc8 =
           *(longlong *)(lVar1 + (uVar4 - 1 >> 4) * 8) + (ulonglong)((uint)(uVar4 - 1) & 0xf) * 0xc;
      FUN_1433278d0(param_1,param_2,
                    *(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar8 >> 4) * 8) +
                    (ulonglong)((uint)uVar8 & 0xf) * 0xc,lVar2 + uVar5 * 0xc,
                    in_stack_ffffffffffffffc8,*(undefined4 *)(lVar2 + 8 + uVar5 * 0xc),
                    *(undefined4 *)
                     (*(longlong *)(lVar1 + (uVar3 - 1 >> 4) * 8) + 8 +
                     (ulonglong)((uint)(uVar3 - 1) & 0xf) * 0xc));
    }
  }
  (**(code **)(*param_2 + 0x28))(param_2);
  (**(code **)(*param_2 + 0x30))(param_2,0,1,0,in_stack_ffffffffffffffc8 & 0xffffffffffffff00);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 143327050 FUN_143327050 body=439 status=ok
// SIG undefined FUN_143327050(void)

void FUN_143327050(longlong param_1,longlong *param_2,undefined8 param_3,float param_4,float param_5
                  ,float param_6,float param_7,float param_8)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  float _X;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  
  _X = _guard_xfg_dispatch_icall_nop(param_6,param_5);
  fVar4 = _guard_xfg_dispatch_icall_nop(param_8,param_7);
  fVar5 = _guard_xfg_dispatch_icall_nop
                    (*(float *)(param_1 + 0x38) /
                     (*(float *)(param_1 + 0x4c) * 0.25 + *(float *)(param_1 + 0x38)));
  auVar6._8_4_ = in_XMM2_Dc;
  auVar6._0_8_ = param_3;
  auVar6._12_4_ = in_XMM2_Dd;
  auVar7._4_12_ = auVar6._4_12_;
  auVar7._0_4_ = (float)param_3 + param_5;
  (**(code **)(*param_2 + 0x20))(param_2,auVar7._0_8_,param_4 + param_6);
  if (fVar4 < _X) {
    fVar4 = fVar4 + 6.2831855;
  }
  fVar4 = fVar4 - _X;
  uVar2 = (uint)(fVar4 / (fVar5 * 2.0));
  if (0 < (int)uVar2) {
    uVar3 = (ulonglong)uVar2;
    do {
      _X = _X + fVar4 / (float)(int)(uVar2 + 1);
      lVar1 = *param_2;
      _guard_xfg_dispatch_icall_nop(_X);
      _guard_xfg_dispatch_icall_nop(_X);
      (**(code **)(lVar1 + 0x20))(param_2);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x000143327203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 143327210 FUN_143327210 body=1053 status=ok
// SIG undefined FUN_143327210(void)

void FUN_143327210(longlong param_1,longlong *param_2,float *param_3,float *param_4,float *param_5,
                  float param_6,float param_7,float param_8,float param_9,int param_10,
                  float param_11,float param_12,float param_13)

{
  longlong lVar1;
  bool bVar2;
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
  
  fVar8 = *param_4;
  bVar2 = true;
  fVar5 = *param_3 + param_6;
  fVar9 = param_4[1];
  fVar11 = fVar8 + param_6;
  fVar10 = param_11 * *(float *)(param_1 + 0x38);
  fVar12 = fVar9 + param_7;
  fVar3 = param_3[1] + param_7;
  fVar6 = (param_5[1] + param_9) - (fVar9 + param_9);
  fVar4 = (*param_5 + param_8) - (fVar8 + param_8);
  fVar7 = fVar6 * (fVar11 - fVar5) - fVar4 * (fVar12 - fVar3);
  if (ABS(fVar7) < param_12) {
    if ((*param_3 - fVar11) * param_7 - (param_3[1] - fVar12) * param_6 < 0.0 !=
        (*param_5 - fVar11) * param_7 - (param_5[1] - fVar12) * param_6 < 0.0) goto LAB_1433275e1;
    fVar3 = 1.0;
  }
  else {
    fVar7 = ((fVar3 - (fVar9 + param_9)) * fVar4 - (fVar5 - (fVar8 + param_8)) * fVar6) / fVar7;
    fVar9 = (fVar12 - fVar3) * fVar7 + fVar3;
    fVar8 = (fVar11 - fVar5) * fVar7 + fVar5;
    fVar3 = _guard_xfg_dispatch_icall_nop
                      ((fVar9 - param_4[1]) * (fVar9 - param_4[1]) +
                       (fVar8 - *param_4) * (fVar8 - *param_4));
    if (fVar3 <= fVar10) {
      (**(code **)(*param_2 + 0x20))(param_2,fVar8,fVar9);
    }
    bVar2 = false;
    if (fVar3 <= fVar10) {
      return;
    }
  }
  lVar1 = *param_2;
  if (param_10 == 1) {
    (**(code **)(lVar1 + 0x20))(param_2,param_6 + *param_4,param_7 + param_4[1]);
    fVar12 = param_9 + param_4[1];
    fVar11 = param_8 + *param_4;
  }
  else if (bVar2) {
    (**(code **)(lVar1 + 0x20))
              (param_2,(param_6 + *param_4) - param_7 * param_11,
               param_7 + param_4[1] + param_6 * param_11);
    fVar12 = (param_9 + param_4[1]) - param_8 * param_11;
    fVar11 = param_8 + *param_4 + param_9 * param_11;
  }
  else {
    param_8 = *param_4 + param_8;
    param_6 = *param_4 + param_6;
    param_9 = param_4[1] + param_9;
    param_7 = param_4[1] + param_7;
    fVar3 = (fVar10 - param_13) / (fVar3 - param_13);
    (**(code **)(lVar1 + 0x20))
              (param_2,(fVar8 - param_6) * fVar3 + param_6,(fVar9 - param_7) * fVar3 + param_7);
    fVar12 = (fVar9 - param_9) * fVar3 + param_9;
    fVar11 = (fVar8 - param_8) * fVar3 + param_8;
  }
LAB_1433275e1:
  (**(code **)(*param_2 + 0x20))(param_2,fVar11,fVar12);
  return;
}



// FUNCTION 143327640 FUN_143327640 body=646 status=ok
// SIG undefined FUN_143327640(void)

void FUN_143327640(longlong param_1,longlong *param_2,float *param_3,float *param_4,float param_5,
                  int param_6)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = *(float *)(param_1 + 0x38);
  if (fVar6 == 0.0) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_3,param_3[1]);
  }
  else {
    fVar1 = param_3[1];
    fVar7 = *param_3;
    fVar9 = ((param_4[1] - fVar1) / param_5) * fVar6;
    fVar10 = ((fVar7 - *param_4) / param_5) * fVar6;
    if (param_6 == 2) {
      fVar5 = _guard_xfg_dispatch_icall_nop(-fVar10,-fVar9);
      fVar11 = (fVar5 + 3.1415927) - fVar5;
      fVar6 = _guard_xfg_dispatch_icall_nop(fVar6 / (*(float *)(param_1 + 0x4c) * 0.25 + fVar6));
      uVar3 = (uint)(fVar11 / (fVar6 * 2.0));
      (**(code **)(*param_2 + 0x20))(param_2,fVar7 - fVar9,fVar1 - fVar10);
      if (0 < (int)uVar3) {
        uVar4 = (ulonglong)uVar3;
        do {
          fVar5 = fVar5 + fVar11 / (float)(int)(uVar3 + 1);
          lVar2 = *param_2;
          fVar7 = _guard_xfg_dispatch_icall_nop(fVar5);
          fVar6 = *(float *)(param_1 + 0x38);
          fVar1 = param_3[1];
          fVar8 = _guard_xfg_dispatch_icall_nop(fVar5);
          (**(code **)(lVar2 + 0x20))
                    (param_2,fVar8 * *(float *)(param_1 + 0x38) + *param_3,fVar7 * fVar6 + fVar1);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      (**(code **)(*param_2 + 0x20))(param_2,fVar9 + *param_3,fVar10 + param_3[1]);
    }
    else {
      fVar6 = 0.0;
      fVar5 = 0.0;
      if (param_6 == 1) {
        fVar6 = fVar10;
        fVar5 = fVar9;
      }
      (**(code **)(*param_2 + 0x20))(param_2,(fVar7 - fVar9) + fVar6,(fVar1 - fVar10) - fVar5);
      (**(code **)(*param_2 + 0x20))(param_2,fVar9 + *param_3 + fVar6,(fVar10 + param_3[1]) - fVar5)
      ;
    }
  }
  return;
}



// FUNCTION 1433278d0 FUN_1433278d0 body=1049 status=ok
// SIG undefined FUN_1433278d0(void)

void FUN_1433278d0(longlong param_1,longlong *param_2,float *param_3,float *param_4,float *param_5,
                  float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar13;
  
  uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  fVar7 = *(float *)(param_1 + 0x38);
  if (fVar7 == 0.0) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_4,param_4[1]);
  }
  else {
    fVar1 = *param_4;
    fVar2 = param_4[1];
    fVar11 = *param_3;
    fVar12 = param_3[1];
    fVar5 = fVar2 - fVar12;
    fVar10 = (param_6 + param_7) * *(float *)(param_1 + 0x50);
    fVar9 = (fVar5 * fVar7) / param_6;
    param_6 = ((fVar11 - fVar1) * fVar7) / param_6;
    fVar8 = ((param_5[1] - fVar2) * fVar7) / param_7;
    param_7 = ((fVar1 - *param_5) * fVar7) / param_7;
    if (0.0 < (*param_5 - fVar1) * fVar5 - (fVar1 - fVar11) * (param_5[1] - fVar2)) {
      FUN_143327210();
    }
    else {
      fVar5 = (param_7 + param_6) * 0.5;
      fVar6 = (fVar8 + fVar9) * 0.5;
      fVar5 = _guard_xfg_dispatch_icall_nop(fVar5 * fVar5 + fVar6 * fVar6);
      iVar3 = *(int *)(param_1 + 0x3c);
      if ((1 < iVar3 - 2U) || (*(float *)(param_1 + 0x4c) * 0.125 <= fVar7 - fVar5)) {
        if (-1 < iVar3) {
          if (iVar3 < 2) {
            FUN_143327210(param_1,param_2,param_3,param_4,param_5,fVar9,param_6,fVar8,param_7,iVar3,
                          *(undefined4 *)(param_1 + 0x48),fVar10,fVar5);
            return;
          }
          if (iVar3 == 2) {
            FUN_143327050(param_1,param_2,fVar1,fVar2,CONCAT44(uVar13,fVar9),param_6,fVar8,param_7);
            return;
          }
        }
        (**(code **)(*param_2 + 0x20))(param_2,fVar1 + fVar9,fVar2 + param_6);
        param_6 = param_7 + param_4[1];
        fVar9 = fVar8 + *param_4;
        lVar4 = *param_2;
      }
      else {
        fVar12 = fVar12 + param_6;
        lVar4 = *param_2;
        fVar11 = fVar11 + fVar9;
        fVar9 = fVar1 + fVar9;
        param_6 = fVar2 + param_6;
        fVar6 = (param_5[1] + param_7) - (fVar2 + param_7);
        fVar5 = (*param_5 + fVar8) - (fVar1 + fVar8);
        fVar7 = fVar6 * (fVar9 - fVar11) - fVar5 * (param_6 - fVar12);
        if (fVar10 <= ABS(fVar7)) {
          fVar7 = ((fVar12 - (fVar2 + param_7)) * fVar5 - (fVar11 - (fVar1 + fVar8)) * fVar6) /
                  fVar7;
          fVar9 = (fVar9 - fVar11) * fVar7 + fVar11;
          param_6 = (param_6 - fVar12) * fVar7 + fVar12;
        }
      }
      (**(code **)(lVar4 + 0x20))(param_2,fVar9,param_6);
    }
  }
  return;
}



// FUNCTION 143327cf0 FUN_143327cf0 body=145 status=ok
// SIG undefined FUN_143327cf0(void)

undefined8 * FUN_143327cf0(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_145b00900;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[2] = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[7] = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = param_2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xf] = param_2;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x14] = param_2;
  *(undefined4 *)(param_1 + 0x19) = 0;
  return param_1;
}



// FUNCTION 143327e10 FUN_143327e10 body=113 status=ok
// SIG undefined FUN_143327e10(void)

void FUN_143327e10(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined1 uStack_9;
  
  uVar2 = *(ulonglong *)(param_1 + 0x18) >> 4;
  if (*(ulonglong *)(param_1 + 0x20) <= uVar2) {
    FUN_143329d20(param_1 + 0x10,uVar2);
  }
  puVar1 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x30) + uVar2 * 8) +
           (ulonglong)(*(uint *)(param_1 + 0x18) & 0xf) * 0x10);
  *puVar1 = CONCAT44(param_3,param_2);
  puVar1[1] = CONCAT17(uStack_9,0x100000000);
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
  return;
}



// FUNCTION 143327e90 FUN_143327e90 body=154 status=ok
// SIG undefined FUN_143327e90(void)

void FUN_143327e90(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 uStackX_c;
  
  uVar1 = *(uint *)(param_1 + 200);
  if ((ulonglong)(uVar1 + 1) < *(ulonglong *)(param_1 + 0x18)) {
    uStackX_c = *(int *)(param_1 + 0x18) - uVar1;
    if (param_2 != 0) {
      uStackX_c = uStackX_c | 0x20000000;
    }
    uVar2 = *(ulonglong *)(param_1 + 0x40) >> 4;
    if (*(ulonglong *)(param_1 + 0x48) <= uVar2) {
      FUN_143324830(param_1 + 0x38,uVar2);
    }
    *(ulonglong *)
     (*(longlong *)(*(longlong *)(param_1 + 0x58) + uVar2 * 8) +
     (ulonglong)(*(uint *)(param_1 + 0x40) & 0xf) * 8) = CONCAT44(uStackX_c,uVar1);
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x18);
    return;
  }
  if ((ulonglong)uVar1 < *(ulonglong *)(param_1 + 0x18)) {
    *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar1;
  }
  return;
}



// FUNCTION 143327f30 FUN_143327f30 body=276 status=ok
// SIG undefined FUN_143327f30(void)

void FUN_143327f30(longlong param_1,float param_2,float param_3,byte param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined1 uStack_9;
  
  uVar2 = *(ulonglong *)(param_1 + 0x18);
  if ((((uVar2 == *(uint *)(param_1 + 200)) && (uVar2 != 0)) &&
      (*(float *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar2 - 1 >> 4) * 8) +
                 (ulonglong)((uint)(uVar2 - 1) & 0xf) * 0x10) == param_2)) &&
     (uVar2 = *(longlong *)(param_1 + 0x18) - 1,
     *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar2 >> 4) * 8) + 4 +
               (ulonglong)((uint)uVar2 & 0xf) * 0x10) == param_3)) {
    uVar2 = *(longlong *)(param_1 + 0x40) - 1;
    *(undefined4 *)(param_1 + 200) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x58) + (uVar2 >> 4) * 8) +
          (ulonglong)((uint)uVar2 & 0xf) * 8);
    if (*(longlong *)(param_1 + 0x40) != 0) {
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
      return;
    }
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x18) >> 4;
    if (*(ulonglong *)(param_1 + 0x20) <= uVar2) {
      FUN_143329d20(param_1 + 0x10,uVar2);
    }
    puVar1 = (undefined8 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x30) + uVar2 * 8) +
             (ulonglong)(*(uint *)(param_1 + 0x18) & 0xf) * 0x10);
    *puVar1 = CONCAT44(param_3,param_2);
    puVar1[1] = CONCAT17(uStack_9,(uint7)param_4 << 0x20);
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
  }
  return;
}



// FUNCTION 143328050 FUN_143328050 body=61 status=ok
// SIG undefined FUN_143328050(void)

void FUN_143328050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  FUN_143327f30();
  FUN_143327f30(param_1,param_4,param_5,2);
  return;
}



// FUNCTION 1433280a0 FUN_1433280a0 body=87 status=ok
// SIG undefined FUN_1433280a0(void)

void FUN_1433280a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_143327f30();
  FUN_143327f30(param_1,param_4,param_5,3);
  FUN_143327f30(param_1,param_6,param_7,3);
  return;
}



// FUNCTION 143328100 FUN_143328100 body=902 status=ok
// SIG undefined FUN_143328100(void)

void FUN_143328100(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  float *pfVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float *pfVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 local_res8;
  
  uVar11 = 0;
  uVar16 = *(ulonglong *)(param_1 + 0x40);
  uVar15 = uVar11;
  if (uVar16 != 0) {
    do {
      uVar10 = *(ulonglong *)(param_1 + 0x40) >> 4;
      uVar7 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x58) + (uVar15 >> 4) * 8) +
               (ulonglong)((uint)uVar15 & 0xf) * 8);
      if (*(ulonglong *)(param_1 + 0x48) <= uVar10) {
        FUN_143324830(param_1 + 0x38,uVar10);
      }
      uVar15 = uVar15 + 1;
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x58) + uVar10 * 8) +
       (ulonglong)(*(uint *)(param_1 + 0x40) & 0xf) * 8) = uVar7;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
    } while (uVar15 < uVar16);
  }
  if (*(ulonglong *)(param_1 + 0x68) < uVar16) {
    pvVar6 = (void *)FUN_1433245e0(*(undefined8 *)(param_1 + 0x60));
    _guard_xfg_dispatch_icall_nop(pvVar6,0,uVar16 << 4);
    if ((*(void **)(param_1 + 0x70) != (void *)0x0) && (*(longlong *)(param_1 + 0x68) != 0)) {
      _guard_xfg_dispatch_icall_nop
                (pvVar6,*(void **)(param_1 + 0x70),*(longlong *)(param_1 + 0x68) << 4);
    }
    *(void **)(param_1 + 0x70) = pvVar6;
  }
  *(ulonglong *)(param_1 + 0x68) = uVar16;
  uVar15 = uVar11;
  uVar10 = uVar11;
  if (uVar16 != 0) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x70);
      uVar13 = (ulonglong)((uint)uVar10 & 0xf);
      uVar14 = uVar10 + 1;
      uVar5 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + (uVar10 >> 4) * 8) +
                       uVar13 * 8);
      puVar8 = (undefined4 *)
               ((ulonglong)(uVar5 & 0xf) * 0x10 +
               *(longlong *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar5 >> 4) * 8));
      *(undefined4 *)(uVar15 + lVar2) = *puVar8;
      *(undefined4 *)(uVar15 + 4 + lVar2) = puVar8[1];
      *(ulonglong *)(uVar15 + 8 + lVar2) =
           *(longlong *)(*(longlong *)(param_1 + 0x58) + (uVar10 >> 4) * 8) + uVar13 * 8;
      uVar15 = uVar15 + 0x10;
      uVar10 = uVar14;
    } while (uVar14 < uVar16);
  }
  FUN_143329870(param_1 + 0x60,0,*(undefined8 *)(param_1 + 0x68),&LAB_143329dc0);
  uVar16 = uVar11;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    do {
      if ((*(uint *)(*(longlong *)(uVar16 + 8 + *(longlong *)(param_1 + 0x70)) + 4) & 0x40000000) ==
          0) {
        uVar15 = uVar11 & 0xffffffff;
        local_res8 = 0;
        do {
          uVar15 = (ulonglong)((uint)uVar15 & 0xfffffff);
          puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8 + uVar15 * 0x10) + 4);
          *puVar1 = *puVar1 | 0x40000000;
          FUN_143329280(param_1,&local_res8,
                        *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8 + uVar15 * 0x10));
          uVar5 = (uint)local_res8;
          uVar3 = local_res8._4_4_;
          pfVar9 = (float *)((ulonglong)((uint)local_res8 & 0xf) * 0x10 +
                            *(longlong *)
                             (*(longlong *)(param_1 + 0x98) + (ulonglong)((uint)local_res8 >> 4) * 8
                             ));
          uVar4 = ((local_res8._4_4_ & 0xfffffff) - 1) + (uint)local_res8;
          pfVar12 = (float *)((ulonglong)(uVar4 & 0xf) * 0x10 +
                             *(longlong *)
                              (*(longlong *)(param_1 + 0x98) + (ulonglong)(uVar4 >> 4) * 8));
          if ((*pfVar9 == *pfVar12) && (pfVar9[1] == pfVar12[1])) break;
          uVar15 = FUN_1433293d0(param_1,&local_res8);
        } while ((int)uVar15 != -1);
        pfVar9 = (float *)((ulonglong)(uVar5 & 0xf) * 0x10 +
                          *(longlong *)(*(longlong *)(param_1 + 0x98) + (ulonglong)(uVar5 >> 4) * 8)
                          );
        uVar5 = ((uVar3 & 0xfffffff) - 1) + uVar5;
        pfVar12 = (float *)((ulonglong)(uVar5 & 0xf) * 0x10 +
                           *(longlong *)
                            (*(longlong *)(param_1 + 0x98) + (ulonglong)(uVar5 >> 4) * 8));
        if ((*pfVar9 == *pfVar12) && (pfVar9[1] == pfVar12[1])) {
          local_res8 = CONCAT44(uVar3,(uint)local_res8) | 0x2000000000000000;
        }
        uVar15 = *(ulonglong *)(param_1 + 0xa8) >> 4;
        if (*(ulonglong *)(param_1 + 0xb0) <= uVar15) {
          if (*(ulonglong *)(param_1 + 0xb8) <= uVar15) {
            if (*(longlong *)(param_1 + 0xc0) == 0) {
              *(undefined8 *)(param_1 + 0xb8) = 0x10;
              uVar7 = FUN_1433245e0(*(undefined8 *)(param_1 + 0xa0),0x80);
              *(undefined8 *)(param_1 + 0xc0) = uVar7;
            }
            else {
              pvVar6 = (void *)FUN_1433245e0(*(undefined8 *)(param_1 + 0xa0),
                                             *(ulonglong *)(param_1 + 0xb8) << 4);
              _guard_xfg_dispatch_icall_nop
                        (pvVar6,*(void **)(param_1 + 0xc0),*(longlong *)(param_1 + 0xb0) << 3);
              *(void **)(param_1 + 0xc0) = pvVar6;
              *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) * 2;
            }
          }
          uVar7 = FUN_1433245e0(*(undefined8 *)(param_1 + 0xa0),0x80);
          *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + uVar15 * 8) = uVar7;
          *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + 1;
        }
        *(ulonglong *)
         (*(longlong *)(*(longlong *)(param_1 + 0xc0) + uVar15 * 8) +
         (ulonglong)(*(uint *)(param_1 + 0xa8) & 0xf) * 8) = local_res8;
        *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + 1;
      }
      uVar11 = uVar11 + 1;
      uVar16 = uVar16 + 0x10;
    } while (uVar11 < *(ulonglong *)(param_1 + 0x68));
  }
  return;
}



// FUNCTION 143328490 FUN_143328490 body=551 status=ok
// SIG undefined FUN_143328490(void)

void FUN_143328490(longlong param_1,float param_2,float param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar8 = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    do {
      uVar6 = (ulonglong)((uint)uVar8 & 0xf);
      uVar3 = 0;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + (uVar8 >> 4) * 8);
      iVar1 = *(int *)(lVar2 + uVar6 * 8);
      uVar10 = *(uint *)(lVar2 + 4 + uVar6 * 8) & 0xfffffff;
      if (3 < uVar10) {
        uVar7 = iVar1 + 1;
        uVar3 = (uVar10 - 4 >> 2) + 1;
        uVar6 = (ulonglong)uVar3;
        uVar3 = uVar3 * 4;
        do {
          uVar9 = (ulonglong)(uVar7 - 1 & 0xf);
          uVar5 = (ulonglong)(uVar7 - 1 >> 4);
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x98) + uVar5 * 8);
          *(float *)(lVar2 + uVar9 * 0x10) = param_2 + *(float *)(lVar2 + uVar9 * 0x10);
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x98) + uVar5 * 8);
          *(float *)(lVar2 + 4 + uVar9 * 0x10) = param_3 + *(float *)(lVar2 + 4 + uVar9 * 0x10);
          uVar9 = (ulonglong)(uVar7 & 0xf);
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x98) + (ulonglong)(uVar7 >> 4) * 8);
          *(float *)(lVar2 + uVar9 * 0x10) = param_2 + *(float *)(lVar2 + uVar9 * 0x10);
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x98) + (ulonglong)(uVar7 >> 4) * 8);
          uVar5 = (ulonglong)(uVar7 + 1 >> 4);
          *(float *)(lVar2 + 4 + uVar9 * 0x10) = param_3 + *(float *)(lVar2 + 4 + uVar9 * 0x10);
          uVar9 = (ulonglong)(uVar7 + 1 & 0xf);
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x98) + uVar5 * 8);
          *(float *)(lVar2 + uVar9 * 0x10) = param_2 + *(float *)(lVar2 + uVar9 * 0x10);
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x98) + uVar5 * 8);
          uVar4 = uVar7 + 2;
          uVar7 = uVar7 + 4;
          uVar5 = (ulonglong)(uVar4 >> 4);
          *(float *)(lVar2 + 4 + uVar9 * 0x10) = param_3 + *(float *)(lVar2 + 4 + uVar9 * 0x10);
          uVar9 = (ulonglong)(uVar4 & 0xf);
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x98) + uVar5 * 8);
          *(float *)(lVar2 + uVar9 * 0x10) = param_2 + *(float *)(lVar2 + uVar9 * 0x10);
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x98) + uVar5 * 8);
          *(float *)(lVar2 + 4 + uVar9 * 0x10) = param_3 + *(float *)(lVar2 + 4 + uVar9 * 0x10);
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      for (; uVar3 < uVar10; uVar3 = uVar3 + 1) {
        uVar7 = uVar3 + iVar1;
        uVar5 = (ulonglong)(uVar7 & 0xf);
        uVar6 = (ulonglong)(uVar7 >> 4);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x98) + uVar6 * 8);
        *(float *)(lVar2 + uVar5 * 0x10) = param_2 + *(float *)(lVar2 + uVar5 * 0x10);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x98) + uVar6 * 8);
        *(float *)(lVar2 + 4 + uVar5 * 0x10) = param_3 + *(float *)(lVar2 + 4 + uVar5 * 0x10);
      }
      uVar8 = (ulonglong)((uint)uVar8 + 1);
    } while (uVar8 < *(ulonglong *)(param_1 + 0xa8));
  }
  return;
}



// FUNCTION 1433286c0 FUN_1433286c0 body=101 status=ok
// SIG undefined FUN_1433286c0(void)

void FUN_1433286c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    do {
      lVar1 = (ulonglong)((uint)uVar2 & 0xf) * 0x10 +
              *(longlong *)(*(longlong *)(param_1 + 0x98) + (uVar2 >> 4) * 8);
      (**(code **)(*param_2 + 8))(param_2,lVar1,lVar1 + 4);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulonglong *)(param_1 + 0x80));
  }
  return;
}



// FUNCTION 143328730 FUN_143328730 body=933 status=ok
// SIG undefined FUN_143328730(void)

void FUN_143328730(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar15;
  float fVar16;
  
  uVar13 = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x98);
      uVar12 = (ulonglong)((uint)uVar13 & 0xf);
      bVar5 = false;
      bVar6 = false;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + (uVar13 >> 4) * 8);
      uVar2 = *(uint *)(lVar4 + uVar12 * 8);
      uVar7 = *(uint *)(lVar4 + 4 + uVar12 * 8);
      uVar14 = uVar7 & 0xfffffff;
      pfVar9 = (float *)((ulonglong)(uVar2 & 0xf) * 0x10 +
                        *(longlong *)(lVar3 + (ulonglong)(uVar2 >> 4) * 8));
      bVar15 = (uVar7 >> 0x1d & 1) == 0;
      if (!bVar15) {
        uVar7 = (uVar2 - 1) + uVar14;
        pfVar9 = (float *)((ulonglong)(uVar7 & 0xf) * 0x10 +
                          *(longlong *)(lVar3 + (ulonglong)(uVar7 >> 4) * 8));
      }
      uVar7 = (uint)bVar15;
      if (uVar7 < uVar14) {
        if (3 < uVar14 - uVar7) {
          uVar11 = uVar2 + 1 + uVar7;
          uVar8 = ((uVar14 - uVar7) - 4 >> 2) + 1;
          uVar12 = (ulonglong)uVar8;
          uVar7 = uVar7 + uVar8 * 4;
          do {
            pfVar10 = (float *)((ulonglong)(uVar11 - 1 & 0xf) * 0x10 +
                               *(longlong *)(lVar3 + (ulonglong)(uVar11 - 1 >> 4) * 8));
            fVar16 = *pfVar10;
            if ((*pfVar9 == fVar16) && (pfVar9[1] != pfVar10[1])) {
              bVar5 = true;
            }
            if ((pfVar9[1] == pfVar10[1]) && (*pfVar9 != fVar16)) {
              bVar6 = true;
            }
            pfVar9 = (float *)((ulonglong)(uVar11 & 0xf) * 0x10 +
                              *(longlong *)(lVar3 + (ulonglong)(uVar11 >> 4) * 8));
            fVar1 = *pfVar9;
            if ((fVar16 == fVar1) && (pfVar10[1] != pfVar9[1])) {
              bVar5 = true;
            }
            if ((pfVar10[1] == pfVar9[1]) && (fVar16 != fVar1)) {
              bVar6 = true;
            }
            pfVar10 = (float *)((ulonglong)(uVar11 + 1 & 0xf) * 0x10 +
                               *(longlong *)(lVar3 + (ulonglong)(uVar11 + 1 >> 4) * 8));
            fVar16 = *pfVar10;
            if ((fVar1 == fVar16) && (pfVar9[1] != pfVar10[1])) {
              bVar5 = true;
            }
            if ((pfVar9[1] == pfVar10[1]) && (fVar1 != fVar16)) {
              bVar6 = true;
            }
            pfVar9 = (float *)((ulonglong)(uVar11 + 2 & 0xf) * 0x10 +
                              *(longlong *)(lVar3 + (ulonglong)(uVar11 + 2 >> 4) * 8));
            if ((fVar16 == *pfVar9) && (pfVar10[1] != pfVar9[1])) {
              bVar5 = true;
            }
            if ((pfVar10[1] == pfVar9[1]) && (fVar16 != *pfVar9)) {
              bVar6 = true;
            }
            uVar11 = uVar11 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        for (; uVar7 < uVar14; uVar7 = uVar7 + 1) {
          pfVar10 = (float *)((ulonglong)(uVar7 + uVar2 & 0xf) * 0x10 +
                             *(longlong *)(lVar3 + (ulonglong)(uVar7 + uVar2 >> 4) * 8));
          if ((*pfVar9 == *pfVar10) && (pfVar9[1] != pfVar10[1])) {
            bVar5 = true;
          }
          if ((pfVar9[1] == pfVar10[1]) && (*pfVar9 != *pfVar10)) {
            bVar6 = true;
          }
          pfVar9 = pfVar10;
        }
        if ((bVar5) && (uVar7 = 0, uVar14 != 0)) {
          do {
            uVar12 = (ulonglong)(uVar7 + uVar2 & 0xf);
            lVar3 = *(longlong *)
                     (*(longlong *)(param_1 + 0x98) + (ulonglong)(uVar7 + uVar2 >> 4) * 8);
            fVar16 = *(float *)(lVar3 + uVar12 * 0x10);
            if (0.0 <= fVar16) {
              fVar16 = fVar16 + 0.5;
            }
            else {
              fVar16 = fVar16 - 0.5;
            }
            fVar16 = _guard_xfg_dispatch_icall_nop(fVar16);
            uVar7 = uVar7 + 1;
            *(float *)(lVar3 + uVar12 * 0x10) = fVar16 + param_2;
          } while (uVar7 < uVar14);
        }
        if ((bVar6) && (uVar7 = 0, uVar14 != 0)) {
          do {
            uVar12 = (ulonglong)(uVar7 + uVar2 & 0xf);
            lVar3 = *(longlong *)
                     (*(longlong *)(param_1 + 0x98) + (ulonglong)(uVar7 + uVar2 >> 4) * 8);
            fVar16 = *(float *)(lVar3 + 4 + uVar12 * 0x10);
            if (0.0 <= fVar16) {
              fVar16 = fVar16 + 0.5;
            }
            else {
              fVar16 = fVar16 - 0.5;
            }
            fVar16 = _guard_xfg_dispatch_icall_nop(fVar16);
            uVar7 = uVar7 + 1;
            *(float *)(lVar3 + 4 + uVar12 * 0x10) = fVar16 + param_3;
          } while (uVar7 < uVar14);
        }
      }
      uVar13 = (ulonglong)((uint)uVar13 + 1);
    } while (uVar13 < *(ulonglong *)(param_1 + 0xa8));
  }
  return;
}



// FUNCTION 143328ae0 FUN_143328ae0 body=1933 status=ok
// SIG undefined FUN_143328ae0(void)

void FUN_143328ae0(longlong *param_1,longlong param_2,undefined4 *param_3,float param_4)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  void *pvVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  uint uVar21;
  int iVar22;
  undefined4 local_res8 [2];
  longlong local_res10;
  int local_res18;
  undefined4 uStackX_1c;
  uint local_res20 [2];
  ulonglong in_stack_fffffffffffffe68;
  undefined4 uVar23;
  uint in_stack_fffffffffffffe78;
  undefined4 uStack_16c;
  undefined4 local_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_118 [32];
  undefined1 local_98 [88];
  
  uVar8 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  local_158 = *(undefined8 *)(param_3 + 4);
  uStack_150 = *(undefined8 *)(param_3 + 6);
  local_120 = param_3[0x12];
  local_168 = *param_3;
  uStack_15c = param_3[3];
  local_148 = *(undefined8 *)(param_3 + 8);
  uStack_140 = *(undefined8 *)(param_3 + 10);
  local_res20[0] = 0;
  local_138 = *(undefined8 *)(param_3 + 0xc);
  uStack_130 = *(undefined8 *)(param_3 + 0xe);
  fStack_160 = (float)param_3[2] * (1.0 / param_4);
  fStack_164 = (float)param_3[1] * (1.0 / param_4);
  local_128 = *(undefined8 *)(param_3 + 0x10);
  local_res10 = param_2;
  if ((int)param_1[0x15] != 0) {
    do {
      uVar5 = 0;
      uVar6 = (uint)uVar8;
      uVar21 = *(uint *)(*(longlong *)(param_1[0x18] + (uVar8 >> 4) * 8) + 4 +
                        (ulonglong)(uVar6 & 0xf) * 8) & 0xfffffff;
      if (uVar21 != 0) {
        do {
          lVar11 = param_1[0x18];
          lVar3 = param_1[0x13];
          lVar4 = *(longlong *)(lVar11 + (uVar8 >> 4) * 8);
          uVar13 = *(uint *)(lVar4 + 4 + (ulonglong)(uVar6 & 0xf) * 8) & 0xfffffff;
          uVar12 = uVar5;
          if (uVar13 <= uVar5) {
            uVar12 = uVar5 - uVar13;
          }
          uVar13 = uVar5 + 1;
          uVar12 = uVar12 + *(int *)(lVar4 + (ulonglong)(uVar6 & 0xf) * 8);
          puVar20 = (undefined4 *)
                    ((ulonglong)(uVar12 & 0xf) * 0x10 +
                    *(longlong *)(lVar3 + (ulonglong)(uVar12 >> 4) * 8));
          cVar2 = *(char *)(puVar20 + 3);
          if (cVar2 == '\x01') {
            (**(code **)(*param_1 + 0x20))(param_1,*puVar20,puVar20[1]);
          }
          else {
            uVar23 = (undefined4)(in_stack_fffffffffffffe68 >> 0x20);
            if (cVar2 == '\x02') {
              lVar11 = *(longlong *)(lVar11 + (uVar8 >> 4) * 8);
              uVar12 = *(uint *)(lVar11 + 4 + (ulonglong)(uVar6 & 0xf) * 8) & 0xfffffff;
              if (uVar12 <= uVar13) {
                uVar13 = uVar13 - uVar12;
              }
              uVar13 = uVar13 + *(int *)(lVar11 + (ulonglong)(uVar6 & 0xf) * 8);
              puVar18 = (undefined4 *)
                        ((ulonglong)(uVar13 & 0xf) * 0x10 +
                        *(longlong *)(lVar3 + (ulonglong)(uVar13 >> 4) * 8));
              in_stack_fffffffffffffe68 = CONCAT44(uVar23,*puVar18);
              FUN_1433bd900(param_1,&local_168,*puVar20,puVar20[1],in_stack_fffffffffffffe68,
                            puVar18[1]);
              uVar13 = uVar5 + 2;
            }
            else if (cVar2 == '\x03') {
              uVar16 = (ulonglong)(uVar6 & 0xf);
              lVar11 = *(longlong *)(lVar11 + (uVar8 >> 4) * 8);
              uVar12 = *(uint *)(lVar11 + 4 + uVar16 * 8) & 0xfffffff;
              if (uVar12 <= uVar13) {
                uVar13 = uVar13 - uVar12;
              }
              uVar14 = *(uint *)(lVar11 + 4 + uVar16 * 8) & 0xfffffff;
              uVar13 = uVar13 + *(int *)(lVar11 + uVar16 * 8);
              uVar12 = uVar5 + 2;
              puVar18 = (undefined4 *)
                        ((ulonglong)(uVar13 & 0xf) * 0x10 +
                        *(longlong *)(lVar3 + (ulonglong)(uVar13 >> 4) * 8));
              if (uVar14 <= uVar12) {
                uVar12 = uVar12 - uVar14;
              }
              uVar12 = uVar12 + *(int *)(lVar11 + uVar16 * 8);
              puVar15 = (uint *)((ulonglong)(uVar12 & 0xf) * 0x10 +
                                *(longlong *)(lVar3 + (ulonglong)(uVar12 >> 4) * 8));
              in_stack_fffffffffffffe78 = *puVar15;
              in_stack_fffffffffffffe68 = CONCAT44(uVar23,*puVar18);
              FUN_1433bda10(param_1,&local_168,*puVar20,puVar20[1],in_stack_fffffffffffffe68,
                            puVar18[1],in_stack_fffffffffffffe78,puVar15[1]);
              uVar13 = uVar5 + 3;
            }
          }
          uVar5 = uVar13;
        } while (uVar5 < uVar21);
      }
      in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffffffffff00;
      (**(code **)(*param_1 + 0x30))
                (param_1,*(uint *)(*(longlong *)(param_1[0x18] + (uVar8 >> 4) * 8) + 4 +
                                  (ulonglong)(uVar6 & 0xf) * 8) >> 0x1d & 1,0,0,
                 in_stack_fffffffffffffe68);
      local_res20[0] = local_res20[0] + 1;
      uVar8 = (ulonglong)local_res20[0];
    } while (local_res20[0] < *(uint *)(param_1 + 0x15));
  }
  uVar16 = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  uVar6 = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  uVar21 = *(uint *)(local_res10 + 0x54);
  uVar8 = uVar16;
  uVar5 = uVar6;
  if (3 < uVar21) {
    uVar12 = 2;
    uVar5 = (uVar21 - 4 >> 2) + 1;
    uVar19 = (ulonglong)uVar5;
    uVar5 = uVar5 * 4;
    puVar20 = (undefined4 *)(local_res10 + 0x14);
    uVar17 = uVar16;
    do {
      uVar8 = (ulonglong)((int)uVar17 + 4);
      local_118[uVar17] = puVar20[-1];
      local_118[uVar12 - 1] = *puVar20;
      local_118[uVar12] = puVar20[1];
      uVar13 = uVar12 + 1;
      uVar12 = uVar12 + 4;
      local_118[uVar13] = puVar20[2];
      uVar19 = uVar19 - 1;
      puVar20 = puVar20 + 4;
      uVar17 = uVar8;
    } while (uVar19 != 0);
  }
  if (uVar5 < uVar21) {
    uVar19 = (ulonglong)(uVar21 - uVar5);
    puVar20 = (undefined4 *)(local_res10 + ((ulonglong)uVar5 + 4) * 4);
    uVar17 = uVar8;
    do {
      uVar23 = *puVar20;
      puVar20 = puVar20 + 1;
      uVar8 = (ulonglong)((int)uVar17 + 1);
      local_118[uVar17] = uVar23;
      uVar19 = uVar19 - 1;
      uVar17 = uVar8;
    } while (uVar19 != 0);
  }
  if ((uVar8 & 1) != 0) {
    if (3 < uVar21) {
      uVar5 = (int)uVar8 + 2;
      uVar6 = (uVar21 - 4 >> 2) + 1;
      uVar19 = (ulonglong)uVar6;
      uVar6 = uVar6 * 4;
      puVar20 = (undefined4 *)(local_res10 + 0x14);
      uVar17 = uVar8;
      do {
        uVar8 = (ulonglong)((int)uVar17 + 4);
        local_118[uVar17] = puVar20[-1];
        local_118[uVar5 - 1] = *puVar20;
        uVar12 = uVar5 + 1;
        local_118[uVar5] = puVar20[1];
        uVar5 = uVar5 + 4;
        local_118[uVar12] = puVar20[2];
        uVar19 = uVar19 - 1;
        puVar20 = puVar20 + 4;
        uVar17 = uVar8;
      } while (uVar19 != 0);
    }
    if (uVar6 < uVar21) {
      uVar19 = (ulonglong)(uVar21 - uVar6);
      puVar20 = (undefined4 *)(local_res10 + ((ulonglong)uVar6 + 4) * 4);
      uVar17 = uVar8;
      do {
        uVar23 = *puVar20;
        puVar20 = puVar20 + 1;
        uVar8 = (ulonglong)((int)uVar17 + 1);
        local_118[uVar17] = uVar23;
        uVar19 = uVar19 - 1;
        uVar17 = uVar8;
      } while (uVar19 != 0);
    }
  }
  lVar11 = local_res10;
  uVar17 = uVar16;
  if (param_1[8] != 0) {
    do {
      uVar19 = (ulonglong)((uint)uVar16 & 0xf);
      lVar3 = *(longlong *)(param_1[0xb] + (uVar16 >> 4) * 8);
      uVar5 = *(uint *)(lVar3 + uVar19 * 8);
      uVar6 = *(uint *)(lVar3 + 4 + uVar19 * 8);
      in_stack_fffffffffffffe78 =
           CONCAT31((int3)(in_stack_fffffffffffffe78 >> 8),(byte)(uVar6 >> 0x1d)) & 0xffffff01;
      FUN_1433294d0(local_98,local_118,uVar8,*(undefined4 *)(lVar11 + 0x50),
                    (ulonglong)(uVar5 & 0xf) * 0x10 +
                    *(longlong *)(param_1[6] + (ulonglong)(uVar5 >> 4) * 8),uVar6 & 0xfffffff,
                    in_stack_fffffffffffffe78);
      iVar7 = FUN_1433296c0(local_98,local_res8,local_res20);
      while (iVar7 != 4) {
        iVar22 = (int)uVar17;
        if (iVar7 == 0) {
          uStackX_1c = 0;
          uVar17 = (ulonglong)param_1[0x15] >> 4;
          local_res18 = iVar22;
          if ((ulonglong)param_1[0x16] <= uVar17) {
            if ((ulonglong)param_1[0x17] <= uVar17) {
              if (param_1[0x18] == 0) {
                param_1[0x17] = 0x10;
                lVar11 = FUN_1433245e0(param_1[0x14],0x80);
                param_1[0x18] = lVar11;
              }
              else {
                pvVar9 = (void *)FUN_1433245e0(param_1[0x14],param_1[0x17] << 4);
                _guard_xfg_dispatch_icall_nop(pvVar9,(void *)param_1[0x18],param_1[0x16] << 3);
                param_1[0x18] = (longlong)pvVar9;
                param_1[0x17] = param_1[0x17] * 2;
              }
            }
            uVar10 = FUN_1433245e0(param_1[0x14],0x80);
            *(undefined8 *)(param_1[0x18] + uVar17 * 8) = uVar10;
            param_1[0x16] = param_1[0x16] + 1;
          }
          *(ulonglong *)
           (*(longlong *)(param_1[0x18] + uVar17 * 8) +
           (ulonglong)(*(uint *)(param_1 + 0x15) & 0xf) * 8) = CONCAT44(uStackX_1c,local_res18);
          param_1[0x15] = param_1[0x15] + 1;
        }
        uVar6 = local_res20[0];
        uVar23 = local_res8[0];
        uVar19 = (ulonglong)param_1[0x10] >> 4;
        uVar5 = (uint)uStack_16c >> 0x18;
        uStack_16c = CONCAT13((char)uVar5,1);
        if ((ulonglong)param_1[0x11] <= uVar19) {
          if ((ulonglong)param_1[0x12] <= uVar19) {
            if (param_1[0x13] == 0) {
              param_1[0x12] = 0x10;
              lVar11 = FUN_1433245e0(param_1[0xf],0x80);
              param_1[0x13] = lVar11;
            }
            else {
              pvVar9 = (void *)FUN_1433245e0(param_1[0xf],param_1[0x12] << 4);
              _guard_xfg_dispatch_icall_nop(pvVar9,(void *)param_1[0x13],param_1[0x11] << 3);
              param_1[0x13] = (longlong)pvVar9;
              param_1[0x12] = param_1[0x12] * 2;
            }
          }
          uVar10 = FUN_1433245e0(param_1[0xf],0x100);
          *(undefined8 *)(param_1[0x13] + uVar19 * 8) = uVar10;
          param_1[0x11] = param_1[0x11] + 1;
        }
        uVar17 = (ulonglong)(iVar22 + 1);
        puVar20 = (undefined4 *)
                  (*(longlong *)(param_1[0x13] + uVar19 * 8) +
                  (ulonglong)(*(uint *)(param_1 + 0x10) & 0xf) * 0x10);
        *puVar20 = uVar23;
        puVar20[1] = uVar6;
        puVar20[2] = 0;
        puVar20[3] = uStack_16c;
        param_1[0x10] = param_1[0x10] + 1;
        piVar1 = (int *)(*(longlong *)(param_1[0x18] + (param_1[0x15] - 1U >> 4) * 8) + 4 +
                        (ulonglong)((uint)(param_1[0x15] - 1U) & 0xf) * 8);
        *piVar1 = *piVar1 + 1;
        iVar7 = FUN_1433296c0(local_98,local_res8,local_res20);
        lVar11 = local_res10;
      }
      uVar16 = (ulonglong)((uint)uVar16 + 1);
    } while (uVar16 < (ulonglong)param_1[8]);
  }
  return;
}



// FUNCTION 143329280 FUN_143329280 body=315 status=ok
// SIG undefined FUN_143329280(void)

void FUN_143329280(longlong param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  
  if (param_2[1] == 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x80);
    uVar7 = *(ulonglong *)(param_1 + 0x80) >> 4;
    puVar8 = (undefined4 *)
             ((ulonglong)(*param_3 & 0xf) * 0x10 +
             *(longlong *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(*param_3 >> 4) * 8));
    if (*(ulonglong *)(param_1 + 0x88) <= uVar7) {
      FUN_143329d20(param_1 + 0x78,uVar7);
    }
    uVar3 = puVar8[1];
    uVar4 = puVar8[2];
    uVar5 = puVar8[3];
    puVar1 = (undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x98) + uVar7 * 8) +
             (ulonglong)(*(uint *)(param_1 + 0x80) & 0xf) * 0x10);
    *puVar1 = *puVar8;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + 1;
    param_2[1] = param_2[1] + 1;
  }
  uVar2 = param_3[1];
  uVar6 = 1;
  if (1 < (uVar2 & 0xfffffff)) {
    do {
      uVar7 = *(ulonglong *)(param_1 + 0x80) >> 4;
      puVar8 = (undefined4 *)
               ((ulonglong)(*param_3 + uVar6 & 0xf) * 0x10 +
               *(longlong *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(*param_3 + uVar6 >> 4) * 8)
               );
      if (*(ulonglong *)(param_1 + 0x88) <= uVar7) {
        FUN_143329d20(param_1 + 0x78,uVar7);
      }
      uVar6 = uVar6 + 1;
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      puVar1 = (undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x98) + uVar7 * 8) +
               (ulonglong)(*(uint *)(param_1 + 0x80) & 0xf) * 0x10);
      *puVar1 = *puVar8;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + 1;
      param_2[1] = param_2[1] + 1;
    } while (uVar6 < (uVar2 & 0xfffffff));
  }
  return;
}



// FUNCTION 1433293d0 FUN_1433293d0 body=239 status=ok
// SIG undefined FUN_1433293d0(void)

ulonglong FUN_1433293d0(longlong param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  float *pfVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  
  uVar5 = *param_2 + -1 + (param_2[1] & 0xfffffffU);
  pfVar7 = (float *)((ulonglong)(uVar5 & 0xf) * 0x10 +
                    *(longlong *)(*(longlong *)(param_1 + 0x98) + (ulonglong)(uVar5 >> 4) * 8));
  uVar6 = 0;
  fVar1 = *pfVar7;
  fVar2 = pfVar7[1];
  if (0 < *(longlong *)(param_1 + 0x68)) {
    lVar4 = *(longlong *)(param_1 + 0x68);
    do {
      lVar8 = lVar4 >> 1;
      pfVar7 = (float *)((lVar8 + uVar6) * 0x10 + *(longlong *)(param_1 + 0x70));
      fVar3 = *pfVar7;
      if (fVar3 == fVar1) {
        pfVar7 = pfVar7 + 1;
        bVar10 = fVar2 == *pfVar7;
        bVar9 = fVar2 < *pfVar7;
      }
      else {
        bVar10 = fVar1 == fVar3;
        bVar9 = fVar1 < fVar3;
      }
      if (!bVar9 && !bVar10) {
        uVar6 = lVar8 + uVar6 + 1;
        lVar8 = lVar4 + (-1 - lVar8);
      }
      lVar4 = lVar8;
    } while (0 < lVar8);
  }
  if (uVar6 < *(ulonglong *)(param_1 + 0x68)) {
    pfVar7 = (float *)(uVar6 * 0x10 + *(longlong *)(param_1 + 0x70));
    do {
      if (*pfVar7 != fVar1) {
        return 0xffffffff;
      }
      if (pfVar7[1] != fVar2) {
        return 0xffffffff;
      }
      if ((*(uint *)(*(longlong *)(pfVar7 + 2) + 4) & 0x40000000) == 0) {
        return uVar6 & 0xffffffff;
      }
      uVar6 = uVar6 + 1;
      pfVar7 = pfVar7 + 4;
    } while (uVar6 < *(ulonglong *)(param_1 + 0x68));
  }
  return 0xffffffff;
}



// FUNCTION 1433294d0 FUN_1433294d0 body=475 status=ok
// SIG undefined FUN_1433294d0(void)

longlong *
FUN_1433294d0(longlong *param_1,longlong param_2,uint param_3,float param_4,longlong param_5,
             uint param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  float *pfVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  uVar8 = 0;
  param_1[4] = param_5;
  *param_1 = param_2;
  *(uint *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = param_7;
  *(float *)((longlong)param_1 + 0xc) = param_4;
  *(uint *)(param_1 + 5) = param_6;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  if (0.0 < param_4) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    do {
      fVar12 = *(float *)(param_2 + (ulonglong)*(uint *)(param_1 + 2) * 4);
      if (param_4 <= fVar12) {
        *(float *)(param_1 + 3) = param_4;
        break;
      }
      uVar6 = *(uint *)(param_1 + 2) + 1;
      *(undefined4 *)(param_1 + 3) = 0;
      param_4 = param_4 - fVar12;
      if (param_3 <= uVar6) {
        uVar6 = 0;
      }
      *(uint *)(param_1 + 2) = uVar6;
    } while (0.0 < param_4);
  }
  uVar9 = uVar8;
  uVar10 = uVar8;
  if (1 < param_6) {
    do {
      lVar3 = param_1[4];
      uVar6 = (uint)uVar10;
      uVar11 = uVar6 + 1;
      fVar12 = *(float *)(lVar3 + 4 + (ulonglong)uVar11 * 0x10) -
               *(float *)(lVar3 + 4 + uVar10 * 0x10);
      fVar13 = *(float *)(lVar3 + (ulonglong)uVar11 * 0x10) - *(float *)(lVar3 + uVar10 * 0x10);
      fVar12 = _guard_xfg_dispatch_icall_nop(fVar12 * fVar12 + fVar13 * fVar13);
      uVar9 = uVar8;
      if (1e-10 < fVar12) {
        if ((uint)uVar8 < uVar6) {
          puVar1 = (undefined8 *)(lVar3 + uVar10 * 0x10);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar3 + uVar8 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
        }
        uVar9 = (ulonglong)((uint)uVar8 + 1);
        *(float *)(param_1[4] + 8 + uVar8 * 0x10) = fVar12;
      }
      uVar8 = uVar9;
      uVar10 = (ulonglong)uVar11;
    } while (uVar6 + 2 < *(uint *)(param_1 + 5));
  }
  iVar7 = (int)uVar9;
  *(undefined4 *)(param_1[4] + 8 + uVar9 * 0x10) = 0x501502f9;
  *(uint *)(param_1 + 5) = iVar7 + 1U;
  if (((char)param_1[8] != '\0') && (2 < iVar7 + 1U)) {
    pfVar4 = (float *)param_1[4];
    fVar12 = _guard_xfg_dispatch_icall_nop
                       ((pfVar4[uVar9 * 4 + 1] - pfVar4[1]) * (pfVar4[uVar9 * 4 + 1] - pfVar4[1]) +
                        (pfVar4[uVar9 * 4] - *pfVar4) * (pfVar4[uVar9 * 4] - *pfVar4));
    if (fVar12 <= 1e-10) {
      *(int *)(param_1 + 5) = iVar7;
      uVar8 = (ulonglong)(iVar7 - 1);
      fVar12 = _guard_xfg_dispatch_icall_nop
                         ((pfVar4[uVar8 * 4 + 1] - pfVar4[1]) * (pfVar4[uVar8 * 4 + 1] - pfVar4[1])
                          + (pfVar4[uVar8 * 4] - *pfVar4) * (pfVar4[uVar8 * 4] - *pfVar4));
      pfVar4[uVar8 * 4 + 2] = fVar12;
    }
    else {
      pfVar4[uVar9 * 4 + 2] = fVar12;
    }
  }
  return param_1;
}



// FUNCTION 1433296c0 FUN_1433296c0 body=430 status=ok
// SIG undefined FUN_1433296c0(void)

uint FUN_1433296c0(longlong *param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = *(int *)((longlong)param_1 + 0x44);
  do {
    if (iVar1 == 0) {
      if (*(uint *)(param_1 + 1) < 2) {
        return 4;
      }
      if (*(uint *)(param_1 + 5) < 2) {
        return 4;
      }
      pfVar2 = (float *)param_1[4];
      param_1[6] = (longlong)pfVar2;
      *(undefined4 *)((longlong)param_1 + 0x44) = 1;
      *(undefined4 *)(param_1 + 9) = 1;
      param_1[7] = (longlong)(pfVar2 + 4);
      *(float *)((longlong)param_1 + 0x14) = pfVar2[2];
      *param_2 = *pfVar2;
      *param_3 = *(float *)(param_1[6] + 4);
      return 0;
    }
    if (iVar1 == 1) {
      uVar3 = *(uint *)(param_1 + 2);
      fVar6 = *(float *)((longlong)param_1 + 0x14);
      uVar4 = ~uVar3 & 1;
      fVar5 = *(float *)(*param_1 + (ulonglong)uVar3 * 4) - *(float *)(param_1 + 3);
      if (fVar5 < fVar6) {
        fVar6 = fVar6 - fVar5;
        *(undefined4 *)(param_1 + 3) = 0;
        uVar3 = uVar3 + 1;
        if (*(uint *)(param_1 + 1) <= uVar3) {
          uVar3 = 0;
        }
        *(uint *)(param_1 + 2) = uVar3;
        *(float *)((longlong)param_1 + 0x14) = fVar6;
        *param_2 = *(float *)param_1[7] -
                   ((*(float *)param_1[7] - *(float *)param_1[6]) * fVar6) /
                   ((float *)param_1[6])[2];
        *param_3 = *(float *)(param_1[7] + 4) -
                   ((*(float *)(param_1[7] + 4) - *(float *)(param_1[6] + 4)) *
                   *(float *)((longlong)param_1 + 0x14)) / *(float *)(param_1[6] + 8);
        return uVar4;
      }
      *(float *)(param_1 + 3) = fVar6 + *(float *)(param_1 + 3);
      *param_2 = *(float *)param_1[7];
      *param_3 = *(float *)(param_1[7] + 4);
      *(int *)(param_1 + 9) = (int)param_1[9] + 1;
      uVar3 = *(uint *)(param_1 + 9);
      param_1[6] = param_1[7];
      *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_1[7] + 8);
      if ((char)param_1[8] == '\0') {
        if (uVar3 < *(uint *)(param_1 + 5)) {
          param_1[7] = (ulonglong)uVar3 * 0x10 + param_1[4];
          return uVar4;
        }
      }
      else if (uVar3 <= *(uint *)(param_1 + 5)) {
        if (*(uint *)(param_1 + 5) <= uVar3) {
          uVar3 = 0;
        }
        param_1[7] = (ulonglong)uVar3 * 0x10 + param_1[4];
        return uVar4;
      }
      *(undefined4 *)((longlong)param_1 + 0x44) = 2;
      return uVar4;
    }
  } while (iVar1 != 2);
  return 4;
}



// FUNCTION 143329870 FUN_143329870 body=691 status=ok
// SIG undefined FUN_143329870(void)

void FUN_143329870(longlong param_1,longlong param_2,longlong param_3,code *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  longlong local_res10;
  longlong local_2b8 [80];
  
  if (1 < (ulonglong)(param_3 - param_2)) {
    plVar18 = local_2b8;
    local_res10 = param_3;
LAB_1433298b9:
    while (lVar20 = param_2, 9 < local_res10 - param_2) {
      lVar17 = *(longlong *)(param_1 + 0x10);
      lVar20 = param_2 + 1;
      lVar14 = (local_res10 - param_2) / 2 + param_2;
      lVar15 = lVar20 * 0x10;
      lVar19 = local_res10 + -1;
      puVar1 = (undefined4 *)(lVar17 + param_2 * 0x10);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar1 = (undefined4 *)(lVar17 + lVar14 * 0x10);
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      lVar16 = lVar19 * 0x10;
      puVar2 = (undefined4 *)(lVar17 + param_2 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
      puVar1 = (undefined4 *)(lVar17 + lVar14 * 0x10);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      cVar13 = (*param_4)(lVar16 + *(longlong *)(param_1 + 0x10),
                          *(longlong *)(param_1 + 0x10) + lVar15);
      if (cVar13 != '\0') {
        lVar17 = *(longlong *)(param_1 + 0x10);
        puVar1 = (undefined4 *)(lVar17 + lVar15);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        uVar11 = *(undefined8 *)(lVar17 + lVar16);
        uVar12 = ((undefined8 *)(lVar17 + lVar16))[1];
        puVar2 = (undefined4 *)(lVar17 + lVar16);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        *(undefined8 *)(lVar17 + lVar15) = uVar11;
        ((undefined8 *)(lVar17 + lVar15))[1] = uVar12;
      }
      cVar13 = (*param_4)(*(longlong *)(param_1 + 0x10) + param_2 * 0x10,
                          *(longlong *)(param_1 + 0x10) + lVar15);
      if (cVar13 != '\0') {
        lVar17 = *(longlong *)(param_1 + 0x10);
        puVar1 = (undefined4 *)(lVar17 + lVar15);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar3 = (undefined8 *)(lVar17 + param_2 * 0x10);
        uVar11 = *puVar3;
        uVar12 = puVar3[1];
        puVar2 = (undefined4 *)(lVar17 + param_2 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        *(undefined8 *)(lVar17 + lVar15) = uVar11;
        ((undefined8 *)(lVar17 + lVar15))[1] = uVar12;
      }
      cVar13 = (*param_4)(*(longlong *)(param_1 + 0x10) + lVar16,
                          *(longlong *)(param_1 + 0x10) + param_2 * 0x10);
      if (cVar13 != '\0') {
        lVar17 = *(longlong *)(param_1 + 0x10);
        puVar1 = (undefined4 *)(lVar17 + param_2 * 0x10);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        uVar11 = *(undefined8 *)(lVar17 + lVar16);
        uVar12 = ((undefined8 *)(lVar17 + lVar16))[1];
        puVar2 = (undefined4 *)(lVar17 + lVar16);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        puVar3 = (undefined8 *)(lVar17 + param_2 * 0x10);
        *puVar3 = uVar11;
        puVar3[1] = uVar12;
      }
      while( true ) {
        do {
          lVar15 = lVar15 + 0x10;
          lVar20 = lVar20 + 1;
          cVar13 = (*param_4)(lVar15 + *(longlong *)(param_1 + 0x10),
                              *(longlong *)(param_1 + 0x10) + param_2 * 0x10);
        } while (cVar13 != '\0');
        do {
          lVar16 = lVar16 + -0x10;
          lVar19 = lVar19 + -1;
          cVar13 = (*param_4)(*(longlong *)(param_1 + 0x10) + param_2 * 0x10,
                              lVar16 + *(longlong *)(param_1 + 0x10));
        } while (cVar13 != '\0');
        lVar17 = *(longlong *)(param_1 + 0x10);
        if (lVar19 < lVar20) break;
        lVar16 = lVar19 * 0x10;
        lVar15 = lVar20 * 0x10;
        puVar1 = (undefined4 *)(lVar17 + lVar16);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        uVar11 = *(undefined8 *)(lVar17 + lVar15);
        uVar12 = ((undefined8 *)(lVar17 + lVar15))[1];
        puVar2 = (undefined4 *)(lVar17 + lVar15);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        *(undefined8 *)(lVar17 + lVar16) = uVar11;
        ((undefined8 *)(lVar17 + lVar16))[1] = uVar12;
      }
      puVar3 = (undefined8 *)(lVar17 + param_2 * 0x10);
      uVar11 = *puVar3;
      uVar12 = puVar3[1];
      puVar1 = (undefined4 *)(lVar17 + lVar19 * 0x10);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(lVar17 + param_2 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar3 = (undefined8 *)(lVar17 + lVar19 * 0x10);
      *puVar3 = uVar11;
      puVar3[1] = uVar12;
      if (local_res10 - lVar20 < lVar19 - param_2) {
        *plVar18 = param_2;
        plVar18[1] = lVar19;
        plVar18 = plVar18 + 2;
        param_2 = lVar20;
      }
      else {
        *plVar18 = lVar20;
        plVar18[1] = local_res10;
        plVar18 = plVar18 + 2;
        local_res10 = lVar19;
      }
    }
joined_r0x000143329a6a:
    lVar15 = lVar20 + 1;
    if (lVar15 < local_res10) {
      lVar16 = lVar20 * 0x10;
      cVar13 = (*param_4)(*(longlong *)(param_1 + 0x10) + lVar16 + 0x10);
      lVar17 = lVar20;
      while (lVar20 = lVar15, cVar13 != '\0') {
        lVar14 = *(longlong *)(param_1 + 0x10);
        puVar1 = (undefined4 *)(lVar14 + lVar16);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar2 = (undefined4 *)(lVar14 + 0x10 + lVar16);
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar2 = (undefined4 *)(lVar14 + 0x10 + lVar16);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        puVar1 = (undefined4 *)(lVar14 + lVar16);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        puVar1[2] = uVar9;
        puVar1[3] = uVar10;
        if (lVar17 == param_2) break;
        lVar17 = lVar17 + -1;
        lVar16 = lVar17 * 0x10;
        cVar13 = (*param_4)(*(longlong *)(param_1 + 0x10) + lVar16 + 0x10);
      }
      goto joined_r0x000143329a6a;
    }
    if (local_2b8 < plVar18) {
      local_res10 = plVar18[-1];
      plVar18 = plVar18 + -2;
      param_2 = *plVar18;
      goto LAB_1433298b9;
    }
  }
  return;
}



// FUNCTION 143329b30 FUN_143329b30 body=43 status=ok
// SIG undefined FUN_143329b30(void)

undefined8 * FUN_143329b30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af86a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 143329b60 FUN_143329b60 body=43 status=ok
// SIG undefined FUN_143329b60(void)

undefined8 * FUN_143329b60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af86a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 143329b90 FUN_143329b90 body=44 status=ok
// SIG undefined FUN_143329b90(void)

void FUN_143329b90(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = 0;
  local_18 = param_2;
  local_14 = param_3;
  FUN_143326690(param_1 + 0x10,&local_18);
  return;
}



// FUNCTION 143329c80 FUN_143329c80 body=155 status=ok
// SIG undefined FUN_143329c80(void)

void FUN_143329c80(undefined8 *param_1,ulonglong param_2)

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
  uVar1 = FUN_1433245e0(*param_1,0xc0);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 143329d20 FUN_143329d20 body=155 status=ok
// SIG undefined FUN_143329d20(void)

void FUN_143329d20(undefined8 *param_1,ulonglong param_2)

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
  uVar1 = FUN_1433245e0(*param_1,0x100);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 143329e70 FUN_143329e70 body=247 status=ok
// SIG undefined FUN_143329e70(void)

longlong *
FUN_143329e70(longlong *param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             undefined4 *param_5,undefined4 param_6)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x50))();
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2[1] = 0;
    *plVar2 = (longlong)&PTR_FUN_144f70a50;
    *plVar2 = (longlong)&PTR_FUN_144f70a80;
    *(undefined4 *)(plVar2 + 1) = 1;
    plVar2[2] = 0;
    *plVar2 = (longlong)&PTR_FUN_144f70b50;
    plVar2[3] = 0;
    plVar2[4] = 0;
    *(undefined4 *)(plVar2 + 5) = 9;
    uVar1 = param_5[1];
    *(undefined4 *)((longlong)plVar2 + 0x2c) = *param_5;
    *(undefined4 *)(plVar2 + 6) = uVar1;
    *plVar2 = (longlong)&PTR_FUN_145b00af0;
    *(undefined4 *)((longlong)plVar2 + 0x34) = param_6;
    plVar2[7] = param_3;
    *(undefined4 *)(plVar2 + 8) = param_4;
  }
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,9,1,param_5,param_6,plVar2,0);
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x10))();
    plVar2 = (longlong *)0x0;
  }
  else {
    FStringTable::SetOwnerAsset(plVar2,lVar3);
  }
  return plVar2;
}



// FUNCTION 143329f70 FUN_143329f70 body=45 status=ok
// SIG undefined FUN_143329f70(void)

void FUN_143329f70(longlong param_1,undefined4 param_2)

{
  Scaleform::Render::Image::releaseTexture();
  FUN_14332ae90(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40),param_2);
  return;
}



// FUNCTION 143329fb0 FUN_143329fb0 body=757 status=ok
// SIG undefined FUN_143329fb0(void)

/* WARNING: Type propagation algorithm not settling */

bool FUN_143329fb0(undefined1 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  RefCountImpl **ppRVar1;
  undefined4 uVar2;
  longlong *plVar3;
  RefCountImpl *pRVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  RefCountImpl **ppRVar9;
  bool bVar10;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar11;
  undefined8 local_58;
  undefined2 local_50 [4];
  RefCountImpl *local_48;
  RefCountImpl *local_40 [3];
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  *(undefined8 *)(param_1 + 8) = param_4;
  *(int *)(param_1 + 4) = param_2;
  if (param_2 == 2) {
    if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))();
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
    plVar3 = (longlong *)FUN_1432cb620(9,1,param_8,0x10,param_3,0);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
    }
    bVar10 = plVar3 != (longlong *)0x0;
    *(longlong **)(param_1 + 0x50) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      pRVar4 = (RefCountImpl *)(**(code **)(*plVar3 + 0xa8))(plVar3,param_4);
      lVar8 = 2;
      local_58 = 0xc;
      puVar6 = local_50;
      lVar7 = 2;
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      local_40[1] = (RefCountImpl *)&DAT_1467ce2d0;
      local_50[0] = 0x101;
      local_50[1] = 0;
      local_48 = (RefCountImpl *)0x0;
      local_40[0] = (RefCountImpl *)0x0;
      if (pRVar4 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar4);
      }
      if (local_48 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_48);
      }
      local_48 = pRVar4;
      if (local_40[0] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_40[0]);
      }
      local_40[0] = (RefCountImpl *)0x0;
      uVar5 = FUN_1432d2110(param_5,&local_58);
      if (*(RefCountNTSImpl **)(param_1 + 0x60) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x60));
      }
      *(undefined8 *)(param_1 + 0x60) = uVar5;
      ppRVar9 = local_40 + 1;
      do {
        ppRVar1 = ppRVar9 + 0xffffffffffffffff;
        ppRVar9 = ppRVar9 + 0xffffffffffffffff;
        lVar8 = lVar8 + -1;
        if (*ppRVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(*ppRVar1);
        }
      } while (lVar8 != 0);
    }
  }
  else {
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    uVar2 = 0x20;
    if (param_2 != 1) {
      uVar2 = 0xc0;
    }
    plVar3 = (longlong *)
             FUN_143329e70(param_3,param_4,param_6,param_7,param_8,CONCAT44(uVar11,uVar2));
    if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))();
    }
    bVar10 = plVar3 != (longlong *)0x0;
    *(longlong **)(param_1 + 0x58) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      pRVar4 = (RefCountImpl *)(**(code **)(*plVar3 + 0xa8))(plVar3,param_4);
      lVar8 = 2;
      local_58 = 0xc;
      puVar6 = local_50;
      lVar7 = 2;
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      local_40[1] = (RefCountImpl *)&DAT_1467ce2d0;
      local_50[0] = 0x101;
      local_50[1] = 0;
      local_48 = (RefCountImpl *)0x0;
      local_40[0] = (RefCountImpl *)0x0;
      if (pRVar4 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar4);
      }
      if (local_48 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_48);
      }
      local_48 = pRVar4;
      if (local_40[0] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_40[0]);
      }
      local_40[0] = (RefCountImpl *)0x0;
      uVar5 = FUN_1432d2110(param_5,&local_58);
      if (*(RefCountNTSImpl **)(param_1 + 0x60) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x60));
      }
      *(undefined8 *)(param_1 + 0x60) = uVar5;
      ppRVar9 = local_40 + 1;
      do {
        ppRVar1 = ppRVar9 + 0xffffffffffffffff;
        ppRVar9 = ppRVar9 + 0xffffffffffffffff;
        lVar8 = lVar8 + -1;
        if (*ppRVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(*ppRVar1);
        }
      } while (lVar8 != 0);
    }
  }
  *param_1 = bVar10;
  return bVar10;
}



// FUNCTION 14332a2b0 Map body=94 status=ok
// SIG undefined Map(void)

undefined8 Scaleform::Render::GlyphTextureMapper::Map(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (*(char *)(param_1 + 0x68) != '\0') goto LAB_14332a304;
    plVar2 = *(longlong **)(param_1 + 0x58);
    uVar3 = 1;
  }
  else {
    if (*(int *)(param_1 + 4) != 2) {
      return 0;
    }
    if (*(char *)(param_1 + 0x68) != '\0') goto LAB_14332a304;
    plVar2 = *(longlong **)(param_1 + 0x50);
    uVar3 = 0;
  }
  cVar1 = (**(code **)(*plVar2 + 0x88))(plVar2,param_1 + 0x10,0,uVar3);
  if (cVar1 == '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x68) = 1;
LAB_14332a304:
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 14332a320 FUN_14332a320 body=132 status=ok
// SIG undefined FUN_14332a320(void)

ulonglong FUN_14332a320(longlong param_1)

{
  int iVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x68) != '\0') {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x90))();
      *(undefined1 *)(param_1 + 0x68) = 0;
      return uVar4;
    }
  }
  else if ((iVar1 == 2) && (*(char *)(param_1 + 0x68) != '\0')) {
    bVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x90))();
    plVar3 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa8))
                       (*(longlong **)(param_1 + 0x50),*(undefined8 *)(param_1 + 8));
    (**(code **)(*plVar3 + 0x90))(plVar3);
    *(undefined1 *)(param_1 + 0x68) = 0;
    return (ulonglong)bVar2;
  }
  return (ulonglong)(uint3)((uint)iVar1 >> 8) << 8;
}



// FUNCTION 14332a3b0 FUN_14332a3b0 body=92 status=ok
// SIG undefined FUN_14332a3b0(void)

ulonglong FUN_14332a3b0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong in_RAX;
  longlong *plVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 4) == 1) {
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x58) + 0xa8))
                       (*(longlong **)(param_1 + 0x58),*(undefined8 *)(param_1 + 8));
    in_RAX = 0;
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014332a3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x98))(plVar1,param_2,param_3,0);
      return uVar2;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14332a420 FUN_14332a420 body=88 status=ok
// SIG undefined FUN_14332a420(void)

void FUN_14332a420(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (*(RefCountNTSImpl **)(param_1 + 0x60) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x60));
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 14332a4a0 FUN_14332a4a0 body=1134 status=ok
// SIG undefined FUN_14332a4a0(void)

undefined8 * FUN_14332a4a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  
  uVar5 = 1;
  param_1[1] = 0;
  uVar3 = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b00be0;
  lVar7 = 0x20;
  param_1[2] = &PTR_LAB_145b00be8;
  param_1[3] = &PTR_LAB_145b00bf8;
  *(undefined4 *)(param_1 + 4) = 0x400;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x400;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x30;
  *(undefined4 *)(param_1 + 6) = 2;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x100;
  *(undefined4 *)(param_1 + 7) = 0x200;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 500;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3e800000;
  *(undefined4 *)(param_1 + 9) = 0x3d3851ec;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x56) = 1;
  param_1[0xb] = param_2;
  puVar4 = param_1 + 0x13;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f800000;
  puVar2 = param_1 + 0x1a;
  do {
    *(undefined1 *)puVar4 = 0;
    *(undefined4 *)((longlong)puVar2 + -0x34) = 0;
    puVar4 = puVar4 + 0xe;
    puVar2[-6] = 0;
    puVar2[-3] = puVar2 + -1;
    puVar2[-5] = 0;
    *(undefined4 *)(puVar2 + -4) = 0x10000;
    puVar2[-2] = 0;
    *(undefined4 *)((longlong)puVar2 + -4) = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + -1) = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    lVar7 = lVar7 + -1;
    puVar2 = puVar2 + 0xe;
  } while (lVar7 != 0);
  FUN_1433c6c30(param_1 + 0x1d3);
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  param_1[0x201] = 0;
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  param_1[0x204] = 0;
  param_1[0x205] = 0;
  param_1[0x206] = 0;
  param_1[0x207] = 0;
  param_1[0x208] = param_1 + 0x207;
  param_1[0x209] = param_1 + 0x207;
  param_1[0x20a] = param_1 + 0x209;
  param_1[0x20b] = param_1 + 0x209;
  param_1[0x20c] = &PTR_FUN_145b00bc0;
  param_1[0x20e] = 0;
  param_1[0x20f] = 0;
  param_1[0x211] = param_1 + 0x20c;
  param_1[0x212] = param_1 + 0x20c;
  param_1[0x213] = 0;
  param_1[0x214] = 0;
  param_1[0x215] = 0;
  FUN_1433c98d0(param_1 + 0x237,param_2,0x400);
  FUN_1433ca810(param_1 + 0x25b,param_2);
  FUN_143331c70(param_1 + 0x2b5,0x3f638e39,0x3e638e39,0x3cb60b61);
  param_1[0x315] = 0;
  puVar4 = param_1 + 0x32a;
  param_1[0x316] = 0;
  puVar2 = param_1 + 0x325;
  param_1[0x317] = 0;
  param_1[0x318] = 0;
  param_1[0x319] = 0;
  param_1[0x31a] = 0;
  param_1[0x31b] = 0;
  param_1[0x31c] = 0;
  param_1[0x31d] = 0;
  *(undefined4 *)(param_1 + 0x31e) = 0;
  param_1[799] = 0;
  param_1[800] = 0;
  param_1[0x321] = 0;
  param_1[0x322] = 0;
  param_1[0x323] = 0;
  param_1[0x324] = 0;
  *puVar2 = param_2;
  param_1[0x326] = 0x2000;
  param_1[0x327] = 0;
  param_1[0x328] = 0;
  param_1[0x329] = 0;
  *puVar4 = param_2;
  param_1[0x32b] = 0x2000;
  param_1[0x32c] = 0;
  param_1[0x32d] = 0;
  param_1[0x32e] = 0;
  FUN_143326810(param_1 + 0x32f,puVar4);
  param_1[0x33a] = &PTR_FUN_145af8728;
  param_1[0x33b] = puVar2;
  param_1[0x33c] = 0;
  param_1[0x33d] = 0;
  param_1[0x33e] = 0;
  param_1[0x33f] = 0;
  param_1[0x340] = puVar2;
  param_1[0x341] = 0;
  param_1[0x342] = 0;
  param_1[0x343] = 0;
  param_1[0x344] = 0;
  *(undefined4 *)(param_1 + 0x345) = 0;
  param_1[0x346] = &PTR_FUN_145af8728;
  param_1[0x347] = puVar4;
  param_1[0x348] = 0;
  param_1[0x349] = 0;
  param_1[0x34a] = 0;
  param_1[0x34b] = 0;
  param_1[0x34c] = puVar4;
  param_1[0x34d] = 0;
  param_1[0x34e] = 0;
  param_1[0x34f] = 0;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x351) = 0;
  *(undefined4 *)(param_1 + 0x352) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1a94) = 0x101;
  param_1[0x20d] = param_1;
  puVar8 = (undefined1 *)((longlong)param_1 + 0x10b1);
  uVar6 = uVar3;
  do {
    if (*(uint *)(&DAT_1467ce2f0 + uVar5 * 4) < uVar3) {
      uVar6 = uVar6 + 1;
      uVar5 = (ulonglong)((int)uVar5 + 1);
    }
    puVar8[(longlong)param_1 + (0x10b0 - ((longlong)param_1 + 0x10b1))] = (char)uVar6;
    if (*(uint *)(&DAT_1467ce2f0 + uVar5 * 4) < uVar3 + 1) {
      uVar6 = uVar6 + 1;
      uVar5 = (ulonglong)((int)uVar5 + 1);
    }
    *puVar8 = (char)uVar6;
    uVar3 = uVar3 + 2;
    puVar8 = puVar8 + 2;
  } while (uVar3 < 0x100);
  lVar7 = Scaleform::Log::GetGlobalLog();
  param_1[0x210] = lVar7;
  if (lVar7 == 0) {
    uVar1 = FUN_1432c1b30();
    param_1[0x210] = uVar1;
  }
  return param_1;
}



// FUNCTION 14332a920 FUN_14332a920 body=573 status=ok
// SIG undefined FUN_14332a920(void)

void FUN_14332a920(RefCountImplCore *param_1)

{
  int iVar1;
  RefCountImplCore *pRVar2;
  longlong lVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_145b00be0;
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_145b00be8;
  *(undefined ***)(param_1 + 0x18) = &PTR_LAB_145b00bf8;
  FUN_14332abb0();
  *(undefined ***)(param_1 + 0x1a30) = &PTR_FUN_145af86a8;
  *(undefined ***)(param_1 + 0x19d0) = &PTR_FUN_145af86a8;
  *(undefined ***)(param_1 + 0x1978) = &PTR_FUN_145af86a8;
  Scaleform::Render::LinearHeap::ClearAndRelease(param_1 + 0x1950);
  Scaleform::Render::LinearHeap::ClearAndRelease(param_1 + 0x1928);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x1910));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x18f8));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x18d8));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x18c0));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x18a8));
  Scaleform::Render::LinearHeap::ClearAndRelease(param_1 + 0x12e0);
  *(undefined ***)(param_1 + 0x12d8) = &PTR_FUN_145af86a8;
  Scaleform::Render::LinearHeap::ClearAndRelease(param_1 + 0x11c8);
  *(undefined ***)(param_1 + 0x11b8) = &PTR_FUN_145af86a8;
  if (*(RefCountNTSImpl **)(param_1 + 0x10a8) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10a8));
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x10a0) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10a0));
  }
  FUN_143331d70(param_1 + 0x1098);
  if (*(RefCountImpl **)(param_1 + 0x1070) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x1070));
  }
  *(undefined ***)(param_1 + 0x1060) = &PTR_FUN_145af3848;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x1028));
  Scaleform::ArrayPagedBase<unsigned_int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned_int,2>_>::
  ClearAndRelease(param_1 + 0x1000);
  if (*(longlong **)(param_1 + 0xff8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xff8) + 0x10))();
  }
  FUN_143331e00(param_1 + 0xe98);
  lVar3 = 0x20;
  pRVar2 = param_1 + 0xef8;
  do {
    lVar3 = lVar3 + -1;
    if (*(RefCountNTSImpl **)(pRVar2 + -0x70) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(pRVar2 + -0x70));
    }
    if (*(longlong **)(pRVar2 + -0x78) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(pRVar2 + -0x78) + 0x10))();
    }
    if (*(longlong **)(pRVar2 + -0x80) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(pRVar2 + -0x80) + 0x10))();
    }
    Scaleform::Render::ImageData::freePlanes(pRVar2 + -0xc0);
    if (*(longlong *)(pRVar2 + -0xa8) != 0) {
      iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        (*(longlong *)(pRVar2 + -0xa8),0xffffffff);
      if (iVar1 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
    pRVar2 = pRVar2 + -0x70;
  } while (lVar3 != 0);
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_145af3848;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_145af1858;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 14332ab70 FUN_14332ab70 body=49 status=ok
// SIG undefined FUN_14332ab70(void)

void FUN_14332ab70(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  
  *(longlong **)(param_1 + 0x60) = param_2;
  *(undefined8 *)(param_1 + 0x68) = param_3;
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 != '\0') {
    FUN_14332c9f0(param_1);
    return;
  }
  return;
}



// FUNCTION 14332abb0 FUN_14332abb0 body=179 status=ok
// SIG undefined FUN_14332abb0(void)

void FUN_14332abb0(longlong param_1)

{
  longlong lVar1;
  
  FUN_14332b080();
  FUN_1433c6d10(param_1 + 0xe98);
  FUN_14332e6f0(param_1);
  *(undefined8 *)(param_1 + 0xfec) = 0;
  *(undefined4 *)(param_1 + 0xff4) = 0;
  *(undefined8 *)(param_1 + 0x1008) = 0;
  lVar1 = param_1 + 0x1060;
  if ((longlong *)(param_1 + 0x1088) == (longlong *)0x0) {
    lVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x1030) = 0;
  *(longlong *)(param_1 + 0x1088) = lVar1;
  *(longlong *)(param_1 + 0x1090) = lVar1;
  FUN_143331d70(param_1 + 0x1098);
  if (*(longlong *)(param_1 + 0x1070) != 0) {
    FUN_1433977c0();
    if (*(RefCountImpl **)(param_1 + 0x1070) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x1070));
    }
    *(undefined8 *)(param_1 + 0x1070) = 0;
  }
  if (*(longlong *)(param_1 + 0x1078) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x1078) + 8) = 0;
    *(undefined8 *)(param_1 + 0x1078) = 0;
  }
  return;
}



// FUNCTION 14332ac70 OnBeginFrame body=79 status=ok
// SIG undefined OnBeginFrame(void)

void Scaleform::Render::GlyphCache::OnBeginFrame(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x1070) == 0) {
    if (*(longlong **)(param_1 + 0x60) == (longlong *)0x0) {
      return;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x30))();
    if (cVar1 == '\0') {
      return;
    }
    FUN_14332c9f0(param_1);
  }
  if (*(longlong *)(param_1 + 0x1070) == 0) {
    return;
  }
  FontCacheHandleManager::ProcessKillList();
  return;
}



// FUNCTION 14332acd0 FUN_14332acd0 body=3 status=ok
// SIG undefined FUN_14332acd0(void)

void FUN_14332acd0(void)

{
  return;
}



// FUNCTION 14332ace0 FUN_14332ace0 body=101 status=ok
// SIG undefined FUN_14332ace0(void)

void FUN_14332ace0(longlong param_1)

{
  longlong lVar1;
  
  FUN_14332b080(param_1 + -0x18);
  FUN_1433c6d10();
  *(undefined8 *)(param_1 + 0xfd4) = 0;
  *(undefined4 *)(param_1 + 0xfdc) = 0;
  *(undefined8 *)(param_1 + 0xff0) = 0;
  lVar1 = param_1 + 0x1048;
  if ((longlong *)(param_1 + 0x1070) == (longlong *)0x0) {
    lVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x1018) = 0;
  *(longlong *)(param_1 + 0x1070) = lVar1;
  *(longlong *)(param_1 + 0x1078) = lVar1;
  FUN_143331d70(param_1 + 0x1080);
  return;
}



// FUNCTION 14332ad50 SetParams body=78 status=ok
// SIG undefined SetParams(void)

undefined8 Scaleform::Render::GlyphCache::SetParams(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  
  uVar4 = param_2[1];
  *(undefined8 *)(param_1 + 8) = *param_2;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  uVar4 = param_2[3];
  *(undefined8 *)(param_1 + 0x18) = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 5);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = param_2[6];
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x30))();
    if (cVar5 != '\0') {
      FUN_14332c9f0(param_1 + -0x18);
    }
  }
  return 1;
}



// FUNCTION 14332adb0 FUN_14332adb0 body=209 status=ok
// SIG undefined FUN_14332adb0(void)

void FUN_14332adb0(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0xfd0) == 1) {
    FUN_14332e360(param_1 + -0x10);
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    do {
      lVar4 = (ulonglong)uVar5 * 0x70;
      iVar2 = *(int *)(lVar4 + 0x8c + param_1);
      if (iVar2 == 0) {
        if (*(char *)(lVar4 + 0xf0 + param_1) != '\0') {
          (**(code **)(**(longlong **)(lVar4 + 0xe0 + param_1) + 0x90))();
          goto LAB_14332ae53;
        }
      }
      else if ((iVar2 == 2) && (*(char *)(lVar4 + 0xf0 + param_1) != '\0')) {
        (**(code **)(**(longlong **)(lVar4 + 0xd8 + param_1) + 0x90))();
        plVar3 = *(longlong **)(lVar4 + 0xd8 + param_1);
        plVar3 = (longlong *)
                 (**(code **)(*plVar3 + 0xa8))(plVar3,*(undefined8 *)(lVar4 + 0x90 + param_1));
        (**(code **)(*plVar3 + 0x90))(plVar3);
LAB_14332ae53:
        *(undefined1 *)(lVar4 + 0xf0 + param_1) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x70));
  }
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x1068) + 0x10);
  *puVar1 = *puVar1 & 0xfffffffd;
  return;
}



// FUNCTION 14332ae90 FUN_14332ae90 body=260 status=ok
// SIG undefined FUN_14332ae90(void)

void FUN_14332ae90(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  
  FUN_1433c7160(param_1 + 0xe98);
  uVar6 = 0;
  uVar10 = uVar6;
  if (*(longlong *)(param_1 + 0x1008) != 0) {
    do {
      puVar9 = (undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x1020) + (uVar6 >> 6) * 8) +
               (ulonglong)((uint)uVar6 & 0x3f) * 0x1c);
      if (puVar9[6] != param_2) {
        uVar3 = puVar9[1];
        uVar4 = puVar9[2];
        uVar5 = puVar9[3];
        lVar7 = (ulonglong)((uint)uVar10 & 0x3f) * 0x1c;
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1020) + (uVar10 >> 6) * 8);
        uVar10 = uVar10 + 1;
        puVar1 = (undefined4 *)(lVar2 + lVar7);
        *puVar1 = *puVar9;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        *(undefined8 *)(lVar2 + 0x10 + lVar7) = *(undefined8 *)(puVar9 + 4);
        *(undefined4 *)(lVar2 + 0x18 + lVar7) = puVar9[6];
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ulonglong *)(param_1 + 0x1008));
  }
  if (uVar10 < *(ulonglong *)(param_1 + 0x1008)) {
    *(ulonglong *)(param_1 + 0x1008) = uVar10;
  }
  puVar8 = (undefined1 *)(param_1 + 0x98 + (ulonglong)param_2 * 0x70);
  *puVar8 = 0;
  *(undefined4 *)(puVar8 + 0x6c) = 0;
  if (*(longlong **)(puVar8 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(puVar8 + 0x58) + 0x10))();
  }
  *(undefined8 *)(puVar8 + 0x58) = 0;
  if (*(longlong **)(puVar8 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(puVar8 + 0x50) + 0x10))();
  }
  *(undefined8 *)(puVar8 + 0x50) = 0;
  if (*(RefCountNTSImpl **)(puVar8 + 0x60) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(puVar8 + 0x60));
  }
  *(undefined8 *)(puVar8 + 0x60) = 0;
  return;
}



// FUNCTION 14332afa0 FUN_14332afa0 body=185 status=ok
// SIG undefined FUN_14332afa0(void)

void FUN_14332afa0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_res8;
  
  FUN_14332b120();
  FUN_14332b1d0(param_1);
  FUN_1433c7220(param_1 + 0xe98,param_2);
  lVar2 = param_1 + 0x1060;
  lVar1 = *(longlong *)(param_1 + 0x1090);
  if (param_1 == -0x1088) {
    lVar2 = 0;
  }
  while (local_res8 = lVar1, local_res8 != lVar2) {
    lVar1 = *(longlong *)(local_res8 + 0x30);
    if (*(longlong *)(local_res8 + 0x38) == param_2) {
      *(longlong *)(*(longlong *)(local_res8 + 0x28) + 0x30) = lVar1;
      *(undefined8 *)(*(longlong *)(local_res8 + 0x30) + 0x28) = *(undefined8 *)(local_res8 + 0x28);
      *(undefined8 *)(local_res8 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(local_res8 + 0x30) = 0xffffffffffffffff;
      FUN_143331740(param_1 + 0x1098,&local_res8);
    }
  }
  return;
}



// FUNCTION 14332b060 MergeCacheSlots body=12 status=ok
// SIG undefined MergeCacheSlots(void)

void Scaleform::Render::GlyphCache::MergeCacheSlots(longlong param_1)

{
  FUN_1433c7380(param_1 + 0xe98);
  return;
}



// FUNCTION 14332b080 FUN_14332b080 body=135 status=ok
// SIG undefined FUN_14332b080(void)

void FUN_14332b080(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x1048);
  plVar1 = (longlong *)(param_1 + 0x1040);
  lVar5 = 0;
  lVar4 = param_1 + 0x1038;
  if (plVar1 == (longlong *)0x0) {
    lVar4 = lVar5;
  }
  for (; lVar3 != lVar4; lVar3 = *(longlong *)(lVar3 + 0x10)) {
    *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) & 0xfffffff9;
  }
  lVar3 = *(longlong *)(param_1 + 0x1058);
  plVar2 = (longlong *)(param_1 + 0x1050);
  lVar4 = param_1 + 0x1048;
  if (plVar2 == (longlong *)0x0) {
    lVar4 = lVar5;
  }
  for (; lVar3 != lVar4; lVar3 = *(longlong *)(lVar3 + 0x10)) {
    *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) & 0xfffffff9;
  }
  lVar3 = param_1 + 0x1038;
  if (plVar1 == (longlong *)0x0) {
    lVar3 = lVar5;
  }
  *plVar1 = lVar3;
  *(longlong *)(param_1 + 0x1048) = lVar3;
  lVar3 = param_1 + 0x1048;
  if (plVar2 == (longlong *)0x0) {
    lVar3 = lVar5;
  }
  *plVar2 = lVar3;
  *(longlong *)(param_1 + 0x1058) = lVar3;
  FUN_1433c70b0(param_1 + 0xe98);
  return;
}



// FUNCTION 14332b120 FUN_14332b120 body=168 status=ok
// SIG undefined FUN_14332b120(void)

void FUN_14332b120(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_1 + 0x1040);
  lVar3 = *(longlong *)(param_1 + 0x1048);
  lVar4 = param_1 + 0x1038;
  if (plVar1 == (longlong *)0x0) {
    lVar4 = 0;
  }
  while (lVar3 != lVar4) {
    lVar2 = *(longlong *)(lVar3 + 0x10);
    *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) & 0xfffffffd;
    Scaleform::Render::TextMeshProvider::PinSlots(lVar3);
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_1 + 0x1050);
    *(longlong *)(lVar3 + 0x10) = param_1 + 0x1048;
    *(longlong *)(*(longlong *)(param_1 + 0x1050) + 0x10) = lVar3;
    *(longlong *)(param_1 + 0x1050) = lVar3;
    *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) | 4;
    lVar3 = lVar2;
  }
  lVar3 = param_1 + 0x1038;
  if (plVar1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  *plVar1 = lVar3;
  *(longlong *)(param_1 + 0x1048) = lVar3;
  return;
}



// FUNCTION 14332b1d0 FUN_14332b1d0 body=155 status=ok
// SIG undefined FUN_14332b1d0(void)

undefined8 FUN_14332b1d0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  lVar1 = *(longlong *)(param_1 + 0x1058);
  lVar5 = param_1 + 0x1048;
  if (param_1 == -0x1050) {
    lVar5 = 0;
  }
  while (lVar3 = lVar1, lVar3 != lVar5) {
    lVar1 = *(longlong *)(lVar3 + 0x10);
    iVar2 = FUN_1433c0b70(lVar3);
    if (iVar2 < 4) {
      *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) & 0xfffffffb;
      FUN_1433bf880(lVar3);
      uVar4 = 1;
      *(undefined8 *)(*(longlong *)(lVar3 + 8) + 0x10) = *(undefined8 *)(lVar3 + 0x10);
      *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 8) = *(undefined8 *)(lVar3 + 8);
      *(undefined8 *)(lVar3 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
    }
  }
  return uVar4;
}



// FUNCTION 14332b280 FUN_14332b280 body=63 status=ok
// SIG undefined FUN_14332b280(void)

undefined8 FUN_14332b280(longlong param_1,undefined4 param_2,uint param_3)

{
  switch(param_2) {
  case 0:
  case 1:
  case 8:
  case 9:
  case 10:
  case 0xc:
  case 0xd:
    return *(undefined8 *)(param_1 + 0x10a0);
  case 2:
  case 3:
  case 4:
    return *(undefined8 *)((ulonglong)param_3 * 0x70 + 0xf8 + param_1);
  default:
    return 0;
  case 0xb:
    return *(undefined8 *)(param_1 + 0x10a8);
  }
}



// FUNCTION 14332b300 FUN_14332b300 body=28 status=ok
// SIG undefined FUN_14332b300(void)

longlong FUN_14332b300(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (param_2 & 0xffffffff) * 0x70;
  lVar1 = *(longlong *)(lVar2 + 0xe8 + param_1);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(lVar2 + 0xf0 + param_1);
  }
  return lVar1;
}



// FUNCTION 14332b330 RegisterFont body=101 status=ok
// SIG undefined RegisterFont(void)

undefined8 Scaleform::Render::GlyphCache::RegisterFont(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x1070) == 0) {
    if (*(longlong **)(param_1 + 0x60) == (longlong *)0x0) {
      return 0;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x30))();
    if (cVar1 == '\0') {
      return 0;
    }
    FUN_14332c9f0(param_1);
  }
  if (*(longlong *)(param_1 + 0x1070) == 0) {
    return 0;
  }
  uVar2 = FUN_1433978d0(*(longlong *)(param_1 + 0x1070),param_2);
  return uVar2;
}



// FUNCTION 14332b3a0 FUN_14332b3a0 body=163 status=ok
// SIG undefined FUN_14332b3a0(void)

undefined8 FUN_14332b3a0(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  undefined4 extraout_XMM0_Db;
  float fVar4;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)param_3 >> 0x20);
  fVar3 = (float)param_3;
  if (param_4 == '\0') {
    if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
      fVar3 = _guard_xfg_dispatch_icall_nop(fVar3);
      uVar2 = (int)(longlong)fVar3 + ((int)(longlong)fVar3 + 3U >> 2);
      uVar1 = 0xff;
      if (uVar2 < 0x100) {
        uVar1 = (&DAT_1467ce2f4)[*(byte *)((ulonglong)uVar2 + 0x10b0 + param_1)];
      }
      uVar5 = 0;
      fVar3 = (float)uVar1;
    }
    else {
      fVar3 = _guard_xfg_dispatch_icall_nop(fVar3 * 4.0 + 0.5);
      fVar3 = fVar3 * 0.25;
      uVar5 = extraout_XMM0_Db;
    }
  }
  fVar4 = (float)(uint)(*(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x88) * -2);
  if ((fVar3 <= fVar4 * *(float *)(param_1 + 0x3c)) && (fVar4 <= fVar3)) {
    fVar3 = fVar4;
  }
  return CONCAT44(uVar5,fVar3);
}



// FUNCTION 14332b450 FUN_14332b450 body=116 status=ok
// SIG undefined FUN_14332b450(void)

float FUN_14332b450(longlong param_1,float param_2,longlong param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 != 0) {
    return (float)*(uint *)(param_3 + 0x38);
  }
  fVar2 = _guard_xfg_dispatch_icall_nop(param_2);
  uVar1 = 0xff;
  if ((uint)(longlong)fVar2 < 0x100) {
    uVar1 = (&DAT_1467ce2f4)[*(byte *)(((longlong)fVar2 & 0xffffffffU) + 0x10b0 + param_1)];
  }
  fVar3 = (float)(uint)(*(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x88) * -2);
  fVar2 = (float)uVar1;
  if (fVar3 <= (float)uVar1) {
    fVar2 = fVar3;
  }
  return fVar2;
}



// FUNCTION 14332b4d0 FUN_14332b4d0 body=88 status=ok
// SIG undefined FUN_14332b4d0(void)

longlong FUN_14332b4d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1433c7570(param_1 + 0xe98,param_3);
  if (lVar1 != 0) {
    uVar2 = Scaleform::Render::GlyphQueue::CreateNotifier(param_1 + 0xe98,lVar1,param_2);
    FUN_1433bf7b0(param_2,uVar2);
  }
  return lVar1;
}



// FUNCTION 14332b530 FUN_14332b530 body=1117 status=ok
// SIG undefined FUN_14332b530(void)

longlong FUN_14332b530(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                      longlong *param_5)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    *(undefined4 *)(param_1 + 0x11b0) = 4;
    return 0;
  }
  if (*(int *)(param_3 + 0x68) != 0) {
    lVar9 = FUN_14332e140(param_1,param_3,param_4,param_5);
    return lVar9;
  }
  if (*(longlong *)(param_3 + 0xe8) == 0) {
    *(undefined4 *)(param_1 + 0x11b0) = 2;
    return 0;
  }
  sVar7 = 0;
  sVar6 = 0;
  if ((*(char *)(param_1 + 0x54) == '\0') || ((*(byte *)((longlong)param_5 + 0xc) >> 1 & 1) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(byte *)((longlong)param_5 + 0xc) & 4) == 0) {
    fVar22 = 1.0;
  }
  else {
    fVar22 = 2.5;
  }
  if (bVar4) {
    lVar9 = *(longlong *)(*param_5 + 0x18);
    if (*(short *)(lVar9 + 0x20) == 0) {
      FUN_1433be7a0(lVar9,param_1);
    }
    sVar6 = *(short *)(lVar9 + 0x20);
    if (sVar6 < 1) {
      sVar6 = 0;
    }
    lVar9 = *(longlong *)(*param_5 + 0x18);
    if (*(short *)(lVar9 + 0x22) == 0) {
      FUN_1433be7a0(lVar9,param_1);
    }
    sVar7 = *(short *)(lVar9 + 0x22);
    if (sVar7 < 1) {
      sVar7 = 0;
    }
    if ((sVar6 == 0) || (sVar7 == 0)) {
      bVar4 = false;
    }
  }
  fVar19 = *(float *)(param_3 + 0x70);
  if (*(uint *)(param_3 + 0xe4) != 0) {
    bVar4 = false;
    fVar19 = (float)*(uint *)(param_3 + 0xe4);
  }
  fVar19 = ((float)*(ushort *)((longlong)param_5 + 10) * 0.0625) / fVar19;
  fVar20 = _guard_xfg_dispatch_icall_nop(fVar19 * *(float *)(param_3 + 0x94));
  fVar21 = _guard_xfg_dispatch_icall_nop(fVar19 * *(float *)(param_3 + 0x9c));
  if (fVar21 <= fVar20) {
    fVar20 = 0.0;
    fVar21 = 0.0;
  }
  if ((uint)((int)(longlong)(fVar21 - fVar20) + *(int *)(param_1 + 0x88) * 2) <
      *(uint *)(param_1 + 0x84)) {
    plVar1 = (longlong *)(param_1 + 0x12d8);
    (**(code **)(*plVar1 + 8))(plVar1);
    if (bVar4) {
      uVar2 = *(ushort *)((longlong)param_5 + 10);
      fVar19 = *(float *)(param_3 + 0x70);
      uVar10 = FUN_1432d8640(param_2);
      FUN_14332e9f0(param_1,*(undefined8 *)(param_3 + 0xe8),uVar10,(longlong)fVar19 & 0xffffffff,
                    sVar6,sVar7,(float)uVar2 * 0.0625,fVar22);
    }
    else {
      uVar10 = FUN_1432d8640(param_2);
      FUN_14332e7d0(param_1,*(undefined8 *)(param_3 + 0xe8),uVar10,fVar19 * fVar22,fVar19);
    }
    iVar3 = *(int *)(param_1 + 0x88);
    iVar11 = 0;
    iVar13 = 0;
    iVar15 = 0;
    iVar17 = 0;
    cVar5 = FUN_1433cabc0(plVar1);
    if (cVar5 != '\0') {
      iVar11 = *(int *)(param_1 + 0x1580) - iVar3;
      iVar13 = *(int *)(param_1 + 0x1588) + iVar3;
      iVar15 = *(int *)(param_1 + 0x1584) - iVar3;
      iVar17 = *(int *)(param_1 + 0x158c) + iVar3;
    }
    uVar14 = (iVar13 - iVar11) + 1;
    uVar18 = (iVar17 - iVar15) + 1;
    if (*(uint *)(param_1 + 0x84) < uVar18) {
      uVar18 = *(uint *)(param_1 + 0x84);
    }
    lVar9 = FUN_14332e0d0(param_1,param_4,param_5,uVar14,uVar18);
    if (lVar9 == 0) {
      *(undefined4 *)(param_1 + 0x11b0) = 5;
      Scaleform::Render::GlyphCache::cacheFullWarning(param_1);
      lVar9 = 0;
    }
    else {
      *(undefined4 *)(lVar9 + 0x3c) = 0x3f800000;
      *(short *)(lVar9 + 0x38) = (short)iVar11 << 4;
      *(short *)(lVar9 + 0x3a) = (short)iVar15 << 4;
      FUN_143333590(param_1 + 0x18a8);
      *(uint *)(param_1 + 0x18f0) = uVar14;
      _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x18a8),0,(ulonglong)(uVar18 * uVar14));
      if (*(float *)(param_1 + 0x130c) != 1.0) {
        FUN_1433ca940(plVar1,0x3f800000);
      }
      if ((uVar14 < 5) || (fVar22 <= 1.0)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      uVar12 = 0;
      if (*(longlong *)(param_1 + 0x1560) != 0) {
        do {
          uVar8 = (int)uVar12 + iVar3;
          if (uVar18 <= uVar8) break;
          lVar16 = (ulonglong)(uVar8 * *(int *)(param_1 + 0x18f0)) + *(longlong *)(param_1 + 0x18a8)
          ;
          FUN_1433cae10(plVar1,uVar12,lVar16 + iVar3,1,0);
          if (bVar4) {
            FUN_14332f1c0(param_1,lVar16,uVar14);
          }
          uVar12 = (ulonglong)((int)uVar12 + 1);
        } while (uVar12 < *(ulonglong *)(param_1 + 0x1560));
      }
      FUN_14332f3b0(param_1,lVar9);
      *(int *)(param_1 + 0x1a90) = *(int *)(param_1 + 0x1a90) + 1;
      (**(code **)(*plVar1 + 8))(plVar1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x11b0) = 3;
    lVar9 = 0;
  }
  return lVar9;
}



// FUNCTION 14332b9a0 FUN_14332b9a0 body=1413 status=ok
// SIG undefined FUN_14332b9a0(void)

longlong FUN_14332b9a0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                      longlong param_5,float param_6,longlong param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float _X;
  float _X_00;
  float fVar25;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    *(undefined4 *)(param_1 + 0x11b0) = 4;
    return 0;
  }
  if ((param_7 == 0) ||
     (lVar8 = FUN_14332f6a0(param_1,param_3,param_4,param_5,param_6,param_7), lVar8 == 0)) {
    if (*(longlong *)(param_3 + 0xe8) == 0) {
      *(undefined4 *)(param_1 + 0x11b0) = 2;
      lVar8 = 0;
    }
    else {
      fVar25 = 1.0;
      fVar24 = (float)*(ushort *)(param_5 + 10) * 0.0625;
      param_6 = fVar24 / param_6;
      _X_00 = (float)*(ushort *)(param_5 + 0xe) * 0.0625 * param_6 * *(float *)(param_3 + 0xe0);
      _X = (float)*(ushort *)(param_5 + 0x10) * 0.0625 * param_6 * *(float *)(param_3 + 0xe0);
      fVar22 = (float)*(uint *)(param_1 + 0x84) * *(float *)(param_1 + 0x94) -
               (float)(uint)(*(int *)(param_1 + 0x88) * 2);
      if (*(uint *)(param_3 + 0xe4) == 0) {
        fVar21 = *(float *)(param_3 + 0x70);
      }
      else {
        fVar21 = (float)*(uint *)(param_3 + 0xe4);
      }
      fVar23 = *(float *)(param_3 + 0x94);
      fVar24 = fVar24 / fVar21;
      fVar21 = *(float *)(param_3 + 0x9c);
      if (fVar21 <= fVar23) {
        fVar21 = 0.0;
        fVar23 = 0.0;
      }
      fVar21 = (fVar21 * fVar24 + _X) - (fVar23 * fVar24 - _X);
      if (fVar22 <= fVar21) {
        fVar22 = fVar22 / fVar21;
        fVar24 = fVar24 * fVar22;
        _X_00 = _X_00 * fVar22;
        _X = _X * fVar22;
        fVar25 = 1.0 / fVar22;
      }
      plVar1 = (longlong *)(param_1 + 0x12d8);
      (**(code **)(*plVar1 + 8))(plVar1);
      uVar9 = FUN_1432d8640(param_2);
      FUN_14332e7d0(param_1,*(undefined8 *)(param_3 + 0xe8),uVar9,fVar24,fVar24);
      iVar6 = *(int *)(param_1 + 0x88);
      fVar22 = _guard_xfg_dispatch_icall_nop(_X_00);
      iVar5 = (int)fVar22 + iVar6;
      fVar22 = _guard_xfg_dispatch_icall_nop(_X);
      uVar16 = 0;
      iVar14 = 0;
      iVar6 = (int)fVar22 + iVar6;
      cVar4 = FUN_1433cabc0(plVar1);
      iVar20 = iVar14;
      iVar11 = iVar14;
      iVar18 = iVar14;
      if (cVar4 != '\0') {
        iVar11 = *(int *)(param_1 + 0x1580) - iVar5;
        iVar18 = *(int *)(param_1 + 0x1588) + iVar5;
        iVar20 = *(int *)(param_1 + 0x1584) - iVar6;
        iVar14 = *(int *)(param_1 + 0x158c) + iVar6;
      }
      uVar19 = (iVar18 - iVar11) + 1;
      uVar15 = (iVar14 - iVar20) + 1;
      if (*(uint *)(param_1 + 0x84) < uVar15) {
        uVar15 = *(uint *)(param_1 + 0x84);
      }
      lVar8 = FUN_14332e0d0(param_1,param_4,param_5,uVar19,uVar15);
      if (lVar8 == 0) {
        *(undefined4 *)(param_1 + 0x11b0) = 5;
        if (*(char *)(param_1 + 0x1a94) != '\0') {
          FUN_14332bf30(param_1,
                        "Warning: Increase raster glyph cache capacity - see GlyphCacheParams");
          *(undefined1 *)(param_1 + 0x1a94) = 0;
        }
        lVar8 = 0;
      }
      else {
        *(float *)(lVar8 + 0x3c) = fVar25;
        *(short *)(lVar8 + 0x38) = (short)iVar11 << 4;
        *(short *)(lVar8 + 0x3a) = (short)iVar20 << 4;
        plVar2 = (longlong *)(param_1 + 0x18a8);
        FUN_143333590(plVar2);
        *(uint *)(param_1 + 0x18f0) = uVar19;
        _guard_xfg_dispatch_icall_nop((void *)*plVar2,0,(ulonglong)(uVar15 * uVar19));
        if ((1 < uVar19) && (1 < uVar15)) {
          fVar22 = 1.0;
          if ((*(short *)(param_5 + 0xe) != 0) || (*(short *)(param_5 + 0x10) != 0)) {
            fVar22 = 0.4;
          }
          if (fVar22 != *(float *)(param_1 + 0x1310)) {
            FUN_1433ca980(plVar1);
          }
          if (*(longlong *)(param_1 + 0x1560) != 0) {
            uVar13 = uVar16;
            do {
              uVar7 = (int)uVar13 + iVar6;
              if (uVar15 <= uVar7) break;
              FUN_1433cae10(plVar1,uVar13,
                            (ulonglong)(uVar7 * *(int *)(param_1 + 0x18f0)) + (longlong)iVar5 +
                            *plVar2,1,1);
              uVar13 = (ulonglong)((int)uVar13 + 1);
            } while (uVar13 < *(ulonglong *)(param_1 + 0x1560));
          }
          if ((*(byte *)(param_5 + 0xc) >> 5 & 1) != 0) {
            FUN_143331f20(param_1 + 0x18d8,plVar2);
          }
          if ((0.0 < _X_00) || (uVar12 = 0, 0.0 < _X)) {
            FUN_14332ef20(param_1,*plVar2,*(undefined4 *)(param_1 + 0x18f0),0,0,uVar19,uVar15,_X_00,
                          _X);
            uVar12 = 8;
          }
          fVar22 = (float)*(ushort *)(param_5 + 0x12) * 0.0625;
          if (fVar22 <= 1.0) {
            uVar12 = 0;
          }
          FUN_14332f000(param_1,*plVar2,*(undefined4 *)(param_1 + 0x18f0),0,0,uVar19,uVar15,fVar22,
                        uVar12);
          if ((*(byte *)(param_5 + 0xc) >> 5 & 1) != 0) {
            pbVar17 = *(byte **)(param_1 + 0x18d8);
            pbVar10 = (byte *)*plVar2;
            if (*(longlong *)(param_1 + 0x18e0) != 0) {
              do {
                bVar3 = *pbVar17;
                pbVar17 = pbVar17 + 1;
                uVar16 = uVar16 + 1;
                *pbVar10 = (byte)((uint)*pbVar10 * (0xff - (uint)bVar3) + 0xff >> 8);
                pbVar10 = pbVar10 + 1;
              } while (uVar16 < *(ulonglong *)(param_1 + 0x18e0));
            }
          }
        }
        FUN_14332f3b0(param_1,lVar8);
        *(int *)(param_1 + 0x1a90) = *(int *)(param_1 + 0x1a90) + 1;
        (**(code **)(*plVar1 + 8))(plVar1);
      }
    }
  }
  return lVar8;
}



// FUNCTION 14332bf30 FUN_14332bf30 body=63 status=ok
// SIG undefined FUN_14332bf30(void)

void FUN_14332bf30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [6];
  
  plVar1 = *(longlong **)(param_1 + 0x1080);
  if (plVar1 != (longlong *)0x0) {
    local_18[0] = 0x23000;
    local_res18 = param_3;
    local_res20 = param_4;
    (**(code **)(*plVar1 + 8))(plVar1,local_18,param_2,&local_res18);
  }
  return;
}



// FUNCTION 14332bf80 FUN_14332bf80 body=63 status=ok
// SIG undefined FUN_14332bf80(void)

void FUN_14332bf80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [6];
  
  plVar1 = *(longlong **)(param_1 + 0x1080);
  if (plVar1 != (longlong *)0x0) {
    local_18[0] = 0x33000;
    local_res18 = param_3;
    local_res20 = param_4;
    (**(code **)(*plVar1 + 8))(plVar1,local_18,param_2,&local_res18);
  }
  return;
}



// FUNCTION 14332bfd0 FUN_14332bfd0 body=2273 status=ok
// SIG undefined FUN_14332bfd0(void)

undefined8 *
FUN_14332bfd0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,float param_5,
             char param_6,char param_7,uint param_8,char param_9)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  char cVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  RefCountImpl *pRVar12;
  RefCountImpl *pRVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  longlong *plVar21;
  ushort uVar22;
  uint uVar23;
  ulonglong uVar24;
  short sVar25;
  ulonglong uVar26;
  int iVar27;
  undefined8 *puVar28;
  undefined4 uVar29;
  int local_res20;
  undefined8 *local_70;
  longlong *local_68;
  longlong *local_60;
  
  plVar21 = *(longlong **)(param_2 + 0x50);
  local_70 = (undefined8 *)(param_2 + 0x90);
  uVar17 = 0;
  *(undefined8 *)(param_2 + 100) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *local_70 = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  uVar26 = param_4 & 0xffffffff;
  local_60 = plVar21;
  uVar29 = (**(code **)(*plVar21 + 0xb0))(plVar21);
  *(undefined4 *)(param_2 + 0x70) = uVar29;
  uVar29 = (**(code **)(*plVar21 + 0xa8))(plVar21);
  *(undefined4 *)(param_2 + 0x6c) = uVar29;
  sVar25 = (short)uVar26;
  if (sVar25 == -1) {
    return (undefined8 *)0x0;
  }
  if ((*(uint *)((longlong)plVar21 + 0x1c) >> 5 & 1) == 0) {
    param_5 = 0.0;
  }
  uVar16 = 0;
  local_res20 = 0;
  if (param_5 != 0.0) {
    uVar18 = (ulonglong)param_5;
    cVar8 = (**(code **)(*plVar21 + 0x48))(plVar21,uVar26,uVar18 & 0xffffffff);
    uVar16 = 0;
    if (cVar8 != '\0') {
      uVar16 = (uint)uVar18;
    }
    cVar8 = (**(code **)(*plVar21 + 0x40))(plVar21,uVar26);
    if (cVar8 != '\0') {
      uVar17 = uVar18 & 0xffffffff;
    }
    local_res20 = (int)uVar17;
  }
  iVar27 = (int)uVar17;
  uVar22 = -(ushort)(param_6 != '\0') & 2 | (ushort)(param_7 != '\0');
  if ((((uVar22 == 0) && (iVar27 == 0)) && (uVar16 == 0)) && ((param_8 == 0 && (param_9 == '\0'))))
  {
    lVar9 = (**(code **)(*plVar21 + 0x70))(plVar21,uVar26);
    *(longlong *)(param_2 + 0xe8) = lVar9;
    if (lVar9 != 0) {
      (**(code **)(*plVar21 + 0x38))(plVar21,uVar26,local_70);
      return (undefined8 *)0x0;
    }
  }
  uVar18 = *(ulonglong *)(param_2 + 0x58);
  plVar1 = (longlong *)(param_1 + 0x1098);
  lVar9 = *plVar1;
  local_68 = plVar1;
  if (lVar9 != 0) {
    uVar24 = (uVar18 >> 6 ^ (ulonglong)uVar22 ^ (ulonglong)(param_8 & 0xffff) ^
              (ulonglong)(uVar16 & 0xff) ^ uVar17 & 0xff ^ param_4 & 0xffff ^ uVar18) &
             *(ulonglong *)(lVar9 + 8);
    lVar2 = uVar24 * 3 + 2;
    puVar15 = (ulonglong *)(lVar9 + lVar2 * 8);
    if ((*(longlong *)(lVar9 + lVar2 * 8) != -2) && (uVar14 = uVar24, puVar15[1] == uVar24)) {
      while (((puVar15[1] != uVar24 ||
              (((uVar6 = puVar15[2], *(ulonglong *)(uVar6 + 0x38) != uVar18 ||
                (*(short *)(uVar6 + 0x40) != sVar25)) || (*(char *)(uVar6 + 0x42) != (char)uVar17)))
              ) || (((*(char *)(uVar6 + 0x43) != (char)uVar16 ||
                     (*(ushort *)(uVar6 + 0x44) != uVar22)) ||
                    (*(short *)(uVar6 + 0x46) != (short)param_8))))) {
        uVar14 = *puVar15;
        if (uVar14 == 0xffffffffffffffff) goto LAB_14332c2fc;
        puVar15 = (ulonglong *)(lVar9 + uVar14 * 0x18 + 0x10);
      }
      if ((-1 < (longlong)uVar14) &&
         (plVar3 = (longlong *)(lVar9 + uVar14 * 0x18 + 0x20), plVar3 != (longlong *)0x0)) {
        lVar9 = *plVar3;
        *(undefined8 *)(*(longlong *)(lVar9 + 0x28) + 0x30) = *(undefined8 *)(lVar9 + 0x30);
        *(undefined8 *)(*(longlong *)(lVar9 + 0x30) + 0x28) = *(undefined8 *)(lVar9 + 0x28);
        *(undefined8 *)(lVar9 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(param_1 + 0x1088);
        *(longlong *)(lVar9 + 0x30) = param_1 + 0x1060;
        *(longlong *)(*(longlong *)(param_1 + 0x1088) + 0x30) = lVar9;
        *(longlong *)(param_1 + 0x1088) = lVar9;
        *(uint *)(param_2 + 100) = (uint)*(byte *)(*plVar3 + 0x42);
        *(uint *)(param_2 + 0x68) = (uint)*(byte *)(*plVar3 + 0x43);
        *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(*plVar3 + 0x48);
        *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)(*plVar3 + 0x50);
        pRVar12 = (RefCountImpl *)*plVar3;
        uVar29 = *(undefined4 *)(pRVar12 + 0x6c);
        uVar4 = *(undefined4 *)(pRVar12 + 0x68);
        uVar5 = *(undefined4 *)(pRVar12 + 0x60);
        *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(pRVar12 + 100);
        *(undefined4 *)(param_2 + 0x98) = uVar4;
        *(undefined4 *)(param_2 + 0x9c) = uVar29;
        *(undefined4 *)(param_2 + 0x90) = uVar5;
        Scaleform::RefCountImpl::AddRef(pRVar12);
        return (undefined8 *)*plVar3;
      }
    }
  }
LAB_14332c2fc:
  puVar11 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  puVar10 = puVar11;
  if (*(ulonglong **)(param_1 + 0x1098) != (ulonglong *)0x0) {
    puVar10 = (undefined8 *)**(ulonglong **)(param_1 + 0x1098);
  }
  uVar23 = *(uint *)(param_1 + 0x40);
  if ((undefined8 *)(ulonglong)uVar23 < puVar10) {
    local_70 = *(undefined8 **)(param_1 + 0x1090);
    if (*(undefined8 **)(param_1 + 0x1098) == (undefined8 *)0x0) {
      iVar19 = 0;
    }
    else {
      iVar19 = (int)**(undefined8 **)(param_1 + 0x1098);
    }
    uVar20 = iVar19 - uVar23;
    if (uVar23 < iVar19 - uVar23) {
      uVar20 = uVar23;
    }
    if (uVar20 != 0) {
      puVar10 = puVar11;
      puVar28 = (undefined8 *)(param_1 + 0x1060);
      if (param_1 == -0x1088) {
        puVar10 = (undefined8 *)0x0;
        puVar28 = puVar11;
      }
      do {
        puVar11 = local_70;
        plVar21 = local_60;
        iVar27 = local_res20;
        if (local_70 == puVar28) break;
        puVar7 = (undefined8 *)local_70[6];
        cVar8 = FUN_143325340(local_70);
        if (cVar8 != '\0') {
          *(undefined8 *)(puVar11[5] + 0x30) = puVar11[6];
          *(undefined8 *)(puVar11[6] + 0x28) = puVar11[5];
          puVar11[5] = 0xffffffffffffffff;
          puVar11[6] = 0xffffffffffffffff;
          FUN_143331740(plVar1,&local_70);
        }
        uVar23 = (int)puVar10 + 1;
        puVar10 = (undefined8 *)(ulonglong)uVar23;
        plVar21 = local_60;
        local_70 = puVar7;
      } while (uVar23 < uVar20);
    }
  }
  puVar10 = (undefined8 *)
            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x50))
                      (*(longlong **)(param_1 + 0x58),0x80,0);
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_144f70a50;
    *puVar10 = &PTR_FUN_145b00760;
    puVar10[2] = &PTR_LAB_145b00768;
    *(undefined4 *)(puVar10 + 1) = 1;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0xffffffffffffffff;
    puVar10[6] = 0xffffffffffffffff;
    *puVar10 = &PTR_FUN_145b009f8;
    puVar10[2] = &PTR_LAB_145b00a00;
    puVar10[7] = 0;
    *(undefined2 *)(puVar10 + 8) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x42) = 0;
    *(undefined2 *)((longlong)puVar10 + 0x46) = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[0xe] = param_1;
  }
  puVar10[7] = *(undefined8 *)(param_2 + 0x58);
  *(short *)(puVar10 + 8) = sVar25;
  *(char *)((longlong)puVar10 + 0x42) = (char)iVar27;
  *(char *)((longlong)puVar10 + 0x43) = (char)uVar16;
  *(ushort *)((longlong)puVar10 + 0x44) = uVar22;
  *(ushort *)((longlong)puVar10 + 0x46) = (ushort)(byte)param_8;
  local_70 = puVar10;
  puVar11 = (undefined8 *)
            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x50))
                      (*(longlong **)(param_1 + 0x58),0x90,0);
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    puVar28 = puVar11 + 0xc;
    puVar11[1] = 0;
    *puVar11 = &PTR_FUN_144f70a50;
    *(undefined4 *)(puVar11 + 1) = 1;
    puVar11[2] = puVar28;
    *(undefined4 *)(puVar11 + 4) = 0x3f800000;
    puVar11[3] = puVar28;
    *(undefined4 *)(puVar11 + 5) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x2c) = 0x3f800000;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    *puVar11 = &PTR_FUN_145b009a0;
    *puVar28 = 0;
    puVar11[0xd] = 0;
    puVar11[0xe] = 0;
    *(undefined4 *)(puVar11 + 0xf) = 0;
    puVar11[0x10] = 0;
    puVar11[0x11] = 0;
  }
  if ((RefCountImpl *)puVar10[9] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)puVar10[9]);
  }
  puVar10[9] = puVar11;
  if (uVar16 != 0) {
    puVar11 = (undefined8 *)
              (**(code **)(**(longlong **)(param_1 + 0x58) + 0x50))
                        (*(longlong **)(param_1 + 0x58),0x40);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11[1] = 0;
      *puVar11 = &PTR_FUN_145b00988;
      *(undefined4 *)(puVar11 + 1) = 1;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[6] = 0;
      *(undefined4 *)(puVar11 + 7) = 0;
    }
    if ((RefCountNTSImpl *)puVar10[10] != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)puVar10[10]);
    }
    puVar10[10] = puVar11;
  }
  lVar9 = 0;
  if (iVar27 == 0) {
    lVar9 = (**(code **)(*plVar21 + 0x70))(plVar21,uVar26);
  }
  uVar29 = *(undefined4 *)((longlong)plVar21 + 0x14);
  if (lVar9 == 0) {
    if (((param_6 == '\0') && (param_7 == '\0')) && (param_8 == 0)) {
      Scaleform::Render::GlyphShape::Clear(puVar10[9]);
      (**(code **)(*plVar21 + 0x78))(plVar21,uVar26,iVar27,puVar10[9]);
      FUN_14332cde0(param_1,puVar10,puVar10[9]);
    }
    else {
      pRVar12 = (RefCountImpl *)
                (**(code **)(**(longlong **)(param_1 + 0x58) + 0x50))
                          (*(longlong **)(param_1 + 0x58),0x90,0);
      if (pRVar12 == (RefCountImpl *)0x0) {
        pRVar12 = (RefCountImpl *)0x0;
      }
      else {
        pRVar13 = pRVar12 + 0x60;
        *(undefined8 *)(pRVar12 + 8) = 0;
        *(undefined ***)pRVar12 = &PTR_FUN_144f70a50;
        *(undefined4 *)(pRVar12 + 8) = 1;
        *(RefCountImpl **)(pRVar12 + 0x10) = pRVar13;
        *(undefined4 *)(pRVar12 + 0x20) = 0x3f800000;
        *(RefCountImpl **)(pRVar12 + 0x18) = pRVar13;
        *(undefined4 *)(pRVar12 + 0x28) = 0;
        *(undefined4 *)(pRVar12 + 0x2c) = 0x3f800000;
        *(undefined8 *)(pRVar12 + 0x30) = 0;
        *(undefined8 *)(pRVar12 + 0x38) = 0;
        *(undefined8 *)(pRVar12 + 0x40) = 0;
        *(undefined8 *)(pRVar12 + 0x48) = 0;
        *(undefined8 *)(pRVar12 + 0x50) = 0;
        *(undefined8 *)(pRVar12 + 0x58) = 0;
        *(undefined ***)pRVar12 = &PTR_FUN_145b009a0;
        *(undefined8 *)pRVar13 = 0;
        *(undefined8 *)(pRVar12 + 0x68) = 0;
        *(undefined8 *)(pRVar12 + 0x70) = 0;
        *(undefined4 *)(pRVar12 + 0x78) = 0;
        *(undefined8 *)(pRVar12 + 0x80) = 0;
        *(undefined8 *)(pRVar12 + 0x88) = 0;
      }
      (**(code **)(*plVar21 + 0x78))(plVar21,uVar26,iVar27,pRVar12);
      FUN_14332cde0(param_1,puVar10,pRVar12);
      FUN_14332d360(param_1,puVar10,param_3,pRVar12,param_6,param_7,param_8,uVar29,
                    *(undefined4 *)(param_2 + 0x70));
      if (pRVar12 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(pRVar12);
      }
    }
  }
  else {
    (**(code **)(*plVar21 + 0x38))(plVar21,uVar26,puVar10 + 0xc);
    FUN_14332d360(param_1,puVar10,param_3,lVar9,param_6,param_7,param_8,uVar29,
                  *(undefined4 *)(param_2 + 0x70));
  }
  if (uVar16 != 0) {
    (**(code **)(*plVar21 + 0x80))(plVar21,uVar26,uVar16,puVar10[10]);
    *(uint *)(puVar10[10] + 0x38) = uVar16;
  }
  uVar29 = *(undefined4 *)((longlong)puVar10 + 0x6c);
  uVar4 = *(undefined4 *)(puVar10 + 0xd);
  uVar5 = *(undefined4 *)((longlong)puVar10 + 100);
  *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(puVar10 + 0xc);
  *(undefined4 *)(param_2 + 0x94) = uVar5;
  *(undefined4 *)(param_2 + 0x98) = uVar4;
  *(undefined4 *)(param_2 + 0x9c) = uVar29;
  *(int *)(param_2 + 100) = iVar27;
  *(uint *)(param_2 + 0x68) = uVar16;
  *(undefined8 *)(param_2 + 0xe8) = puVar10[9];
  *(undefined8 *)(param_2 + 0xf0) = puVar10[10];
  *(undefined4 *)(param_2 + 0xe4) = *(undefined4 *)(puVar10[9] + 0x78);
  puVar10[5] = *(undefined8 *)(param_1 + 0x1088);
  puVar10[6] = param_1 + 0x1060;
  *(undefined8 **)(*(longlong *)(param_1 + 0x1088) + 0x30) = puVar10;
  *(undefined8 **)(param_1 + 0x1088) = puVar10;
  FUN_143331870(param_1 + 0x1098,param_1 + 0x1098,&local_70,
                (ulonglong)
                (*(ushort *)((longlong)puVar10 + 0x46) ^ *(ushort *)((longlong)puVar10 + 0x44)) ^
                (ulonglong)*(byte *)((longlong)puVar10 + 0x43) ^
                (ulonglong)*(byte *)((longlong)puVar10 + 0x42) ^ (ulonglong)*(ushort *)(puVar10 + 8)
                ^ (ulonglong)puVar10[7] >> 6 ^ puVar10[7]);
  return puVar10;
}



// FUNCTION 14332c8c0 FUN_14332c8c0 body=71 status=ok
// SIG undefined FUN_14332c8c0(void)

float FUN_14332c8c0(longlong param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  fVar3 = _guard_xfg_dispatch_icall_nop(param_2);
  uVar2 = (int)(longlong)fVar3 + ((int)(longlong)fVar3 + 3U >> 2);
  uVar1 = 0xff;
  if (uVar2 < 0x100) {
    uVar1 = (&DAT_1467ce2f4)[*(byte *)((ulonglong)uVar2 + 0x10b0 + param_1)];
  }
  return (float)uVar1;
}



// FUNCTION 14332c910 FUN_14332c910 body=65 status=ok
// SIG undefined FUN_14332c910(void)

float FUN_14332c910(longlong param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  
  fVar2 = _guard_xfg_dispatch_icall_nop(param_2);
  uVar1 = 0xff;
  if ((uint)(longlong)fVar2 < 0x100) {
    uVar1 = (&DAT_1467ce2f4)[*(byte *)(((longlong)fVar2 & 0xffffffffU) + 0x10b0 + param_1)];
  }
  return (float)uVar1;
}



// FUNCTION 14332c9f0 FUN_14332c9f0 body=987 status=ok
// SIG undefined FUN_14332c9f0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14332c9f0(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar19;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar20;
  undefined8 local_80;
  undefined2 local_78 [4];
  undefined8 local_70;
  undefined *local_68 [3];
  undefined2 local_50 [4];
  undefined8 local_48;
  undefined *local_40 [3];
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  FUN_14332abb0();
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x128))();
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar3 = *(uint *)(param_1 + 0x24);
  uVar4 = *(undefined4 *)(param_1 + 0x34);
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = uVar9;
  uVar8 = 0x3f;
  uVar13 = 0x3f;
  if (0x3f < uVar2) {
    uVar13 = uVar2 - 1;
  }
  if (0x3f < uVar3) {
    uVar8 = uVar3 - 1;
  }
  uVar11 = 0;
  uVar15 = uVar11;
  for (; uVar6 = uVar11, uVar13 != 0; uVar13 = uVar13 >> 1) {
    uVar15 = (ulonglong)((int)uVar15 + 1);
  }
  for (; uVar8 != 0; uVar8 = uVar8 >> 1) {
    uVar6 = (ulonglong)((int)uVar6 + 1);
  }
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x2c);
  uVar13 = *(uint *)(param_1 + 0x28);
  if (0x20 < *(uint *)(param_1 + 0x28)) {
    uVar13 = 0x20;
  }
  uVar14 = 1 << ((byte)uVar15 & 0x1f);
  *(uint *)(param_1 + 0x78) = uVar14;
  uVar8 = 1 << ((byte)uVar6 & 0x1f);
  lVar18 = 2;
  *(uint *)(param_1 + 0x7c) = uVar8;
  *(uint *)(param_1 + 0x80) = uVar13;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x50);
  *(float *)(param_1 + 0x8c) = 1.0 / (float)uVar14;
  *(float *)(param_1 + 0x90) = 1.0 / (float)uVar8;
  if (uVar13 != 0) {
    FUN_1433c6eb0(param_1 + 0xe98,param_1 + 0x1060,0,uVar13,CONCAT44(uVar19,uVar2),
                  CONCAT44(uVar20,uVar3),*(undefined4 *)(param_1 + 0x2c),
                  *(undefined1 *)(param_1 + 0x56));
    bVar7 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x20))(*(longlong **)(param_1 + 0x70),9);
    if ((char)bVar7 < '\0') {
      *(undefined4 *)(param_1 + 0xfe0) = 0;
    }
    else if ((bVar7 & 0x20) == 0) {
      *(undefined4 *)(param_1 + 0xfe0) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0xfe0) = 1;
      *(undefined4 *)(param_1 + 0xfe4) = uVar4;
      *(undefined4 *)(param_1 + 0xfe8) = uVar5;
      *(undefined4 *)(param_1 + 0xfec) = 0;
      *(undefined4 *)(param_1 + 0xff0) = 0;
      *(undefined4 *)(param_1 + 0xff4) = 0;
      local_res8 = uVar4;
      local_resc = uVar5;
      uVar9 = FUN_1432cb620(9,1,&local_res8,0,*(undefined8 *)(param_1 + 0x58),0);
      if (*(longlong **)(param_1 + 0xff8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xff8) + 0x10))();
      }
      *(undefined8 *)(param_1 + 0xff8) = uVar9;
    }
    uVar15 = uVar11;
    if (*(int *)(param_1 + 0x80) != 0) {
      do {
        local_res8 = *(undefined4 *)(param_1 + 0x78);
        local_resc = *(undefined4 *)(param_1 + 0x7c);
        FUN_143329fb0(uVar15 * 0x70 + 0x98 + param_1,*(undefined4 *)(param_1 + 0xfe0),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x70),
                      *(undefined8 *)(param_1 + 0x68),param_1,(int)uVar15,&local_res8);
        uVar13 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar13;
      } while (uVar13 < *(uint *)(param_1 + 0x80));
    }
  }
  if (*(longlong *)(param_1 + 0x1070) == 0) {
    lVar10 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x70);
    if (lVar10 != 0) {
      uVar11 = FUN_143331bf0(lVar10,*(undefined8 *)(param_1 + 0x58),param_1);
    }
    if (*(RefCountImpl **)(param_1 + 0x1070) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x1070));
    }
    *(ulonglong *)(param_1 + 0x1070) = uVar11;
  }
  local_68[2] = (undefined *)0x4;
  puVar12 = local_50;
  lVar10 = 2;
  do {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  local_48 = 0;
  local_40[1] = &DAT_1467cdbb8;
  lVar10 = 2;
  puVar12 = local_78;
  local_40[0] = (undefined *)0x0;
  local_80 = 1;
  do {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  local_68[1] = &DAT_1467cdb40;
  local_70 = 0;
  local_68[0] = (undefined *)0x0;
  uVar9 = FUN_1432d2110(*(undefined8 *)(param_1 + 0x68),local_68 + 2);
  if (*(RefCountNTSImpl **)(param_1 + 0x10a0) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10a0));
  }
  *(undefined8 *)(param_1 + 0x10a0) = uVar9;
  uVar9 = FUN_1432d2110(*(undefined8 *)(param_1 + 0x68),&local_80);
  if (*(RefCountNTSImpl **)(param_1 + 0x10a8) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10a8));
  }
  *(undefined8 *)(param_1 + 0x10a8) = uVar9;
  lVar10 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0xc0))();
  *(longlong *)(param_1 + 0x1078) = lVar10;
  lVar16 = 2;
  puVar17 = local_68 + 1;
  *(longlong *)(lVar10 + 8) = param_1 + 0x10;
  do {
    puVar1 = puVar17 + 0xffffffffffffffff;
    puVar17 = puVar17 + 0xffffffffffffffff;
    lVar16 = lVar16 + -1;
    if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
    }
  } while (lVar16 != 0);
  puVar17 = local_40 + 1;
  do {
    puVar1 = puVar17 + 0xffffffffffffffff;
    puVar17 = puVar17 + 0xffffffffffffffff;
    lVar18 = lVar18 + -1;
    if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
    }
  } while (lVar18 != 0);
  return;
}



// FUNCTION 14332cde0 FUN_14332cde0 body=542 status=ok
// SIG undefined FUN_14332cde0(void)

void FUN_14332cde0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(char *)(param_2 + 0x42) == '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x38) + 0x18);
    (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined2 *)(param_2 + 0x40),param_2 + 0x60);
    if (((*(float *)(param_2 + 0x68) <= *(float *)(param_2 + 0x60)) ||
        (*(float *)(param_2 + 0x6c) <= *(float *)(param_2 + 100))) &&
       (cVar2 = (**(code **)(*param_3 + 8))(param_3), cVar2 == '\0')) {
      local_28 = 0x3f800000;
      uStack_20 = 0;
      local_98 = 0x7149f2ca;
      uStack_94 = 0x7149f2ca;
      uStack_90 = 0xf149f2ca;
      uStack_8c = 0xf149f2ca;
      local_18 = 0;
      uStack_14 = 0x3f800000;
      uStack_10 = 0;
      uStack_c = 0;
      local_88 = (**(code **)(*param_3 + 0x30))(param_3);
      local_58 = 0x3f800000;
      local_84 = 0;
      local_7c = 0;
      local_74 = 0;
      local_6c = 0;
      local_64 = 0;
      local_5c = 0;
      local_54 = 0;
      iVar3 = (**(code **)(*param_3 + 0x40))(param_3,&local_88,local_40,local_50);
      while (iVar3 != 0) {
        FUN_14332fd60(param_3,&local_28,&local_88,local_40,&local_98);
        iVar3 = (**(code **)(*param_3 + 0x40))(param_3,&local_88,local_40,local_50);
      }
      *(ulonglong *)(param_2 + 0x60) = CONCAT44(uStack_94,local_98);
      *(ulonglong *)(param_2 + 0x68) = CONCAT44(uStack_8c,uStack_90);
    }
  }
  else {
    cVar2 = (**(code **)(*param_3 + 8))(param_3);
    if (cVar2 == '\0') {
      local_28 = 0x3f800000;
      uStack_20 = 0;
      local_98 = 0x7149f2ca;
      uStack_94 = 0x7149f2ca;
      uStack_90 = 0xf149f2ca;
      uStack_8c = 0xf149f2ca;
      local_18 = 0;
      uStack_14 = 0x3f800000;
      uStack_10 = 0;
      uStack_c = 0;
      local_88 = (**(code **)(*param_3 + 0x30))(param_3);
      local_58 = 0x3f800000;
      local_84 = 0;
      local_7c = 0;
      local_74 = 0;
      local_6c = 0;
      local_64 = 0;
      local_5c = 0;
      local_54 = 0;
      iVar3 = (**(code **)(*param_3 + 0x40))(param_3,&local_88,local_40,local_50);
      while (iVar3 != 0) {
        FUN_14332fd60(param_3,&local_28,&local_88,local_40,&local_98);
        iVar3 = (**(code **)(*param_3 + 0x40))(param_3,&local_88,local_40,local_50);
      }
      *(ulonglong *)(param_2 + 0x60) = CONCAT44(uStack_94,local_98);
      *(ulonglong *)(param_2 + 0x68) = CONCAT44(uStack_8c,uStack_90);
    }
    else {
      plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x38) + 0x18);
      (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined2 *)(param_2 + 0x40),param_2 + 0x60);
    }
  }
  return;
}



// FUNCTION 14332d010 FUN_14332d010 body=828 status=ok
// SIG undefined FUN_14332d010(void)

bool FUN_14332d010(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
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
  float local_res10;
  float local_res18;
  float local_res20;
  int local_118;
  int local_114;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_bc;
  
  fVar13 = 1e+10;
  bVar5 = true;
  fVar14 = -1e+10;
  fVar15 = 1e+10;
  fVar16 = -1e+10;
  fVar17 = 1e+10;
  local_res10 = 1e+10;
  local_res18 = -1e+10;
  local_res20 = -1e+10;
  local_f0 = (**(code **)(*param_2 + 0x30))(param_2);
  local_c0 = 0x3f800000;
  local_ec = 0;
  local_e4 = 0;
  local_dc = 0;
  bVar1 = true;
  local_d4 = 0;
  local_cc = 0;
  local_c4 = 0;
  local_bc = 0;
  iVar4 = (**(code **)(*param_2 + 0x40))(param_2,&local_f0,&local_108,&local_118);
  if (iVar4 == 0) {
    bVar5 = true;
  }
  else {
    do {
      fVar3 = local_104;
      fVar2 = local_108;
      if ((!bVar1) && (iVar4 == 2)) {
        return bVar5;
      }
      bVar1 = false;
      if (local_118 == local_114) {
        (**(code **)(*param_2 + 0x50))(param_2,&local_f0);
      }
      else {
        fVar12 = 0.0;
        iVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_f0,&local_108);
        fVar6 = fVar13;
        fVar7 = fVar14;
        fVar8 = fVar15;
        fVar9 = fVar16;
        fVar10 = fVar2;
        fVar11 = fVar3;
        while (iVar4 != 0) {
          fVar14 = local_108;
          if (fVar6 <= local_108) {
            fVar14 = fVar6;
          }
          fVar13 = local_104;
          if (fVar8 <= local_104) {
            fVar13 = fVar8;
          }
          fVar15 = local_108;
          if (local_108 <= fVar7) {
            fVar15 = fVar7;
          }
          fVar16 = local_104;
          if (local_104 <= fVar9) {
            fVar16 = fVar9;
          }
          fVar12 = fVar12 + (local_104 * fVar10 - local_108 * fVar11);
          fVar9 = fVar16;
          fVar10 = local_108;
          fVar11 = local_104;
          fVar6 = fVar14;
          fVar7 = fVar15;
          fVar8 = fVar13;
          if (iVar4 == 2) {
            fVar6 = local_100;
            if (fVar14 <= local_100) {
              fVar6 = fVar14;
            }
            fVar8 = local_fc;
            if (fVar13 <= local_fc) {
              fVar8 = fVar13;
            }
            fVar7 = local_100;
            if (local_100 <= fVar15) {
              fVar7 = fVar15;
            }
            fVar9 = local_fc;
            if (local_fc <= fVar16) {
              fVar9 = fVar16;
            }
            fVar12 = fVar12 + (local_fc * local_108 - local_100 * local_104);
            fVar10 = local_100;
            fVar11 = local_fc;
          }
          iVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_f0,&local_108);
        }
        if ((fVar10 != fVar2) ||
           (fVar13 = fVar6, fVar14 = fVar7, fVar15 = fVar8, fVar16 = fVar9, fVar11 != fVar3)) {
          fVar13 = fVar2;
          if (fVar6 <= fVar2) {
            fVar13 = fVar6;
          }
          fVar15 = fVar3;
          if (fVar8 <= fVar3) {
            fVar15 = fVar8;
          }
          fVar14 = fVar2;
          if (fVar2 <= fVar7) {
            fVar14 = fVar7;
          }
          fVar12 = fVar12 + (fVar10 * fVar3 - fVar11 * fVar2);
          fVar16 = fVar3;
          if (fVar3 <= fVar9) {
            fVar16 = fVar9;
          }
        }
        if ((((fVar13 < fVar17) || (fVar15 < local_res10)) || (local_res18 < fVar14)) ||
           (local_res20 < fVar16)) {
          bVar5 = 0.0 < fVar12;
          fVar17 = fVar13;
          local_res10 = fVar15;
          local_res18 = fVar14;
          local_res20 = fVar16;
        }
      }
      iVar4 = (**(code **)(*param_2 + 0x40))(param_2,&local_f0,&local_108,&local_118);
    } while (iVar4 != 0);
  }
  return bVar5;
}



// FUNCTION 14332d360 FUN_14332d360 body=3434 status=ok
// SIG undefined FUN_14332d360(void)

void FUN_14332d360(longlong param_1,longlong param_2,undefined4 *param_3,longlong *param_4,
                  char param_5,char param_6,uint param_7,float param_8,float param_9)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int iVar16;
  longlong *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_res20;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_228;
  float fStack_224;
  undefined4 uStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  undefined4 uStack_210;
  float fStack_20c;
  uint local_208;
  int local_200;
  int local_1fc;
  undefined4 local_1f8;
  undefined4 local_1e8;
  float fStack_1e4;
  undefined8 uStack_1e0;
  float fStack_1d8;
  undefined8 uStack_1d4;
  undefined8 uStack_1cc;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined1 local_1b4;
  int local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  float local_190;
  longlong *local_188;
  float local_180;
  undefined4 local_178;
  undefined8 local_174;
  undefined8 local_16c;
  undefined8 local_164;
  undefined8 local_15c;
  undefined8 local_154;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_144;
  ulonglong local_140;
  longlong *local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  
  cVar3 = (**(code **)(*param_4 + 8))(param_4);
  if (cVar3 == '\0') {
    local_f8 = *(undefined8 *)(param_3 + 4);
    uStack_f0 = *(undefined8 *)(param_3 + 6);
    local_c0 = param_3[0x12];
    local_108 = *param_3;
    uStack_fc = param_3[3];
    local_e8 = *(undefined8 *)(param_3 + 8);
    uStack_e0 = *(undefined8 *)(param_3 + 10);
    local_d8 = *(undefined8 *)(param_3 + 0xc);
    uStack_d0 = *(undefined8 *)(param_3 + 0xe);
    fVar19 = 0.0;
    local_c8 = *(undefined8 *)(param_3 + 0x10);
    fStack_100 = (float)param_3[2] * param_9 * 0.015625;
    fStack_104 = (float)param_3[1] * param_9 * 0.015625;
    local_228 = 1.0;
    fStack_224 = 0.0;
    uStack_220 = 0;
    fStack_21c = 0.0;
    local_218 = 0.0;
    fStack_214 = 1.0;
    uStack_210 = 0;
    fStack_20c = 0.0;
    if (param_6 != '\0') {
      fStack_21c = 0.0;
      fStack_20c = param_8 + 0.0;
      local_1e8 = 0x3f800000;
      fStack_1e4 = _guard_xfg_dispatch_icall_nop(-*(float *)(param_1 + 0x44));
      uStack_1e0._0_4_ = 0;
      uStack_1e0._4_4_ = 0;
      fStack_1d8 = _guard_xfg_dispatch_icall_nop(0.0);
      uStack_1d4 = 0x3f800000;
      uStack_1cc = (ulonglong)uStack_1cc._4_4_ << 0x20;
      Scaleform::Render::Matrix2x4<float>::Append
                ((Matrix2x4<float> *)&local_228,(Matrix2x4<float> *)&local_1e8);
      fStack_21c = fStack_21c + 0.0;
      fStack_20c = fStack_20c - param_8;
    }
    local_178 = (**(code **)(*param_4 + 0x30))(param_4);
    uVar14 = 0;
    local_140 = 0;
    bVar10 = true;
    local_174 = 0;
    local_16c = 0;
    local_164 = 0;
    local_15c = 0;
    local_154 = 0;
    local_14c = 0;
    local_148 = 0x3f800000;
    local_144 = 0;
    local_1e8 = 0;
    uStack_1d4 = 0;
    uStack_1cc = 0;
    local_1c4 = 0;
    local_1bc = 0;
    local_1b8 = 0x3f800000;
    local_1b4 = 0;
    fStack_1e4 = 0.0;
    uStack_1e0._0_4_ = 0;
    uStack_1e0._4_4_ = 0;
    fStack_1d8 = 0.0;
    if ((param_5 == '\0') && (param_7 == 0)) {
      iVar4 = (**(code **)(*param_4 + 0x40))(param_4,&local_178,&local_248,&local_200);
      while ((iVar4 != 0 && ((bVar10 || (iVar4 != 2))))) {
        if (local_200 == local_1fc) {
          (**(code **)(*param_4 + 0x50))(param_4,&local_178);
        }
        else {
          fVar19 = local_218 * local_248;
          local_248 = local_244 * fStack_224 + local_248 * local_228 + fStack_21c;
          local_244 = fVar19 + local_244 * fStack_214 + fStack_20c;
          FUN_143333690(*(undefined8 *)(param_2 + 0x48),&local_1e8,iVar4,local_200,local_1fc,
                        local_1f8,local_248,local_244);
          iVar5 = (**(code **)(*param_4 + 0x48))(param_4,&local_178,&local_248);
          iVar4 = uStack_1e0._4_4_;
          fVar19 = fStack_1d8;
          while (iVar5 != 0) {
            lVar1 = *(longlong *)(param_2 + 0x48);
            if (iVar5 == 1) {
              fVar18 = local_218 * local_248;
              local_248 = local_244 * fStack_224 + local_248 * local_228 + fStack_21c;
              local_244 = fVar18 + local_244 * fStack_214 + fStack_20c;
              local_180 = *(float *)(lVar1 + 0x2c);
              local_188 = *(longlong **)(lVar1 + 0x10);
              iVar5 = (int)(local_248 * local_180) - iVar4;
              iVar11 = (int)(local_244 * local_180) - (int)fVar19;
              if (iVar11 == 0) {
                FUN_1433337c0(&local_188,iVar5);
                iVar4 = iVar4 + iVar5;
              }
              else if (iVar5 == 0) {
                FUN_143335930(&local_188,iVar11);
                fVar19 = (float)((int)fVar19 + iVar11);
              }
              else {
                FUN_1433339f0(&local_188,iVar5,iVar11);
                iVar4 = iVar4 + iVar5;
                fVar19 = (float)((int)fVar19 + iVar11);
              }
            }
            else {
              fVar20 = local_218 * local_248;
              local_248 = local_244 * fStack_224 + local_248 * local_228 + fStack_21c;
              fVar18 = local_23c * fStack_224;
              local_244 = fVar20 + local_244 * fStack_214 + fStack_20c;
              local_23c = local_218 * local_240 + local_23c * fStack_214 + fStack_20c;
              local_240 = fVar18 + local_240 * local_228 + fStack_21c;
              local_190 = *(float *)(lVar1 + 0x2c);
              local_198 = *(undefined8 *)(lVar1 + 0x10);
              iVar11 = (int)(local_240 * local_190) - iVar4;
              iVar5 = (int)(local_23c * local_190) - (int)fVar19;
              FUN_143334010(&local_198,(int)(local_248 * local_190) - iVar4,
                            (int)(local_244 * local_190) - (int)fVar19,iVar11,iVar5);
              iVar4 = iVar4 + iVar11;
              fVar19 = (float)((int)fVar19 + iVar5);
            }
            uStack_1e0._4_4_ = iVar4;
            fStack_1d8 = fVar19;
            iVar5 = (**(code **)(*param_4 + 0x48))(param_4,&local_178,&local_248);
          }
          FUN_1433323e0(*(undefined8 *)(param_2 + 0x48),&local_1e8);
          FUN_143332580(*(undefined8 *)(param_2 + 0x48));
        }
        bVar10 = false;
        iVar4 = (**(code **)(*param_4 + 0x40))(param_4,&local_178,&local_248,&local_200);
      }
      FUN_1433325e0(*(undefined8 *)(param_2 + 0x48));
    }
    else {
      cVar3 = FUN_14332d010(param_1,param_4);
      plVar15 = (longlong *)(param_1 + 0x1978);
      local_188 = plVar15;
      (**(code **)(*plVar15 + 8))(plVar15);
      (**(code **)(*(longlong *)(param_1 + 0x19d0) + 8))(param_1 + 0x19d0);
      if (param_5 != '\0') {
        fVar19 = param_9 * *(float *)(param_1 + 0x48);
      }
      local_1e8 = 0x45b00a70;
      fStack_1e4 = 1.4013e-45;
      fStack_1d8 = 1.0;
      uStack_1d4 = 0x447a0000;
      uStack_1cc = uStack_1cc & 0xffffffff00000000;
      *(float *)(param_1 + 0x19b0) = fVar19 * 0.5;
      uStack_1e0 = plVar15;
      iVar4 = (**(code **)(*param_4 + 0x40))(param_4,&local_178,&local_248,&local_200);
      while ((iVar4 != 0 && ((bVar10 || (iVar4 != 2))))) {
        bVar10 = false;
        if (local_200 == local_1fc) {
          (**(code **)(*param_4 + 0x50))(param_4,&local_178);
        }
        else {
          fVar19 = local_218 * local_248;
          local_248 = local_244 * fStack_224 + local_248 * local_228 + fStack_21c;
          local_244 = local_244 * fStack_214 + fVar19 + fStack_20c;
          uStack_1d4 = CONCAT44(local_248,(float)uStack_1d4);
          uStack_1cc._4_4_ = (uint)(uStack_1cc >> 0x20);
          uStack_1cc = CONCAT44(uStack_1cc._4_4_,local_244);
          (**(code **)(*uStack_1e0 + 0x20))
                    (uStack_1e0,local_248 * fStack_1d8,local_244 * (float)uStack_1d4);
          iVar4 = (**(code **)(*param_4 + 0x48))(param_4,&local_178,&local_248);
          while (iVar4 != 0) {
            if (iVar4 == 1) {
              fVar19 = local_218 * local_248;
              local_248 = local_244 * fStack_224 + local_248 * local_228 + fStack_21c;
              local_244 = local_244 * fStack_214 + fVar19 + fStack_20c;
              uStack_1d4 = CONCAT44(local_248,(float)uStack_1d4);
              uStack_1cc._4_4_ = (uint)(uStack_1cc >> 0x20);
              uStack_1cc = CONCAT44(uStack_1cc._4_4_,local_244);
              (**(code **)(*uStack_1e0 + 0x20))
                        (uStack_1e0,local_248 * fStack_1d8,local_244 * (float)uStack_1d4);
            }
            else {
              fVar18 = local_23c * fStack_224;
              fVar19 = local_218 * local_248;
              local_248 = local_244 * fStack_224 + local_248 * local_228 + fStack_21c;
              local_244 = local_244 * fStack_214 + fVar19 + fStack_20c;
              local_23c = local_23c * fStack_214 + local_218 * local_240 + fStack_20c;
              local_240 = fVar18 + local_240 * local_228 + fStack_21c;
              FUN_1433bd900(&local_1e8,&local_108,local_248,local_244,local_240,local_23c);
            }
            iVar4 = (**(code **)(*param_4 + 0x48))(param_4,&local_178,&local_248);
          }
          (**(code **)(*plVar15 + 0x28))(plVar15);
          FUN_143326e00(plVar15,param_1 + 0x19d0,cVar3 == '\0');
        }
        iVar4 = (**(code **)(*param_4 + 0x40))(param_4,&local_178,&local_248,&local_200);
      }
      plVar17 = (longlong *)(param_1 + 0x19d0);
      uVar9 = uVar14;
      if (*(longlong *)(param_1 + 0x19e0) != 0) {
        do {
          uVar8 = (ulonglong)((uint)uVar9 & 0xf);
          uVar13 = uVar9 + 1;
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x19f8) + (uVar9 >> 4) * 8);
          *(float *)(lVar1 + 4 + uVar8 * 8) = *(float *)(lVar1 + 4 + uVar8 * 8) * 0.001;
          uVar9 = uVar13;
        } while (uVar13 < *(ulonglong *)(param_1 + 0x19e0));
      }
      local_1a0 = plVar17;
      if (param_7 != 0) {
        plVar17 = (longlong *)(param_1 + 0x1a30);
        local_1a0 = plVar17;
        (**(code **)(*plVar17 + 8))(plVar17);
        (**(code **)(*plVar15 + 8))(plVar15);
        *(undefined4 *)(param_1 + 0x19b4) = 0;
        local_res20 = 0;
        *(float *)(param_1 + 0x19b0) = (float)param_7 * *(float *)(param_1 + 0x4c) * param_9 * 0.5;
        uVar9 = uVar14;
        if (*(longlong *)(param_1 + 0x1a08) != 0) {
          do {
            uVar8 = (ulonglong)((uint)uVar9 & 3);
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1a20) + (uVar9 >> 2) * 8);
            uVar6 = *(uint *)(lVar1 + 4 + uVar8 * 8);
            uVar7 = (uint)uVar9;
            if (2 < uVar6) {
              uVar9 = uVar14;
              if (uVar6 != 0) {
                do {
                  uVar6 = *(int *)(lVar1 + uVar8 * 8) + (int)uVar9;
                  uVar13 = (ulonglong)(uVar6 & 0xf);
                  lVar2 = *(longlong *)
                           (*(longlong *)(param_1 + 0x19f8) + (ulonglong)(uVar6 >> 4) * 8);
                  (**(code **)(*plVar15 + 0x20))
                            (plVar15,*(undefined4 *)(lVar2 + uVar13 * 8),
                             *(undefined4 *)(lVar2 + 4 + uVar13 * 8));
                  uVar6 = (int)uVar9 + 1;
                  uVar9 = (ulonglong)uVar6;
                } while (uVar6 < *(uint *)(lVar1 + 4 + uVar8 * 8));
              }
              (**(code **)(*plVar15 + 0x28))(plVar15);
              FUN_143326900(plVar15,plVar17);
              uVar7 = local_res20;
            }
            local_res20 = uVar7 + 1;
            uVar9 = (ulonglong)local_res20;
          } while ((ulonglong)local_res20 < *(ulonglong *)(param_1 + 0x1a08));
        }
      }
      local_208 = 0;
      uVar9 = uVar14;
      if (plVar17[7] != 0) {
        do {
          uVar8 = (ulonglong)((uint)uVar14 & 3);
          lVar1 = *(longlong *)(plVar17[10] + (uVar14 >> 2) * 8);
          uVar6 = (uint)uVar14;
          if (2 < *(uint *)(lVar1 + 4 + uVar8 * 8)) {
            uVar6 = *(uint *)(lVar1 + uVar8 * 8);
            uVar14 = (ulonglong)(uVar6 & 0xf);
            lVar2 = *(longlong *)(plVar17[5] + (ulonglong)(uVar6 >> 4) * 8);
            fVar19 = *(float *)(lVar2 + 4 + uVar14 * 8);
            plVar15 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0x10);
            fVar18 = *(float *)(*(longlong *)(param_2 + 0x48) + 0x2c);
            fVar20 = *(float *)(lVar2 + uVar14 * 8);
            local_138 = plVar15;
            local_130 = fVar18;
            FUN_1433354a0(&local_138,2 - (uint)((int)uVar9 != 0));
            uVar9 = plVar15[1];
            uVar14 = uVar9 + 1;
            if (uVar14 < uVar9) {
              uVar13 = uVar14;
              if (uVar14 < (ulonglong)plVar15[2] >> 1) {
LAB_14332ddeb:
                FUN_143333390(plVar15,plVar15,uVar13);
              }
            }
            else if ((ulonglong)plVar15[2] < uVar14) {
              uVar13 = (uVar14 >> 2) + uVar14;
              goto LAB_14332ddeb;
            }
            plVar15[1] = uVar14;
            *(undefined1 *)(uVar9 + *plVar15) = 4;
            uVar14 = plVar15[1] + 1;
            if (uVar14 < (ulonglong)plVar15[1]) {
              uVar9 = uVar14;
              if (uVar14 < (ulonglong)plVar15[2] >> 1) {
LAB_14332de30:
                FUN_143333390(plVar15,plVar15,uVar9);
              }
            }
            else if ((ulonglong)plVar15[2] < uVar14) {
              uVar9 = (uVar14 >> 2) + uVar14;
              goto LAB_14332de30;
            }
            plVar15[1] = uVar14;
            *(undefined1 *)(*plVar15 + -1 + uVar14) = 0;
            uVar14 = plVar15[1] + 1;
            if (uVar14 < (ulonglong)plVar15[1]) {
              uVar9 = uVar14;
              if (uVar14 < (ulonglong)plVar15[2] >> 1) {
LAB_14332de75:
                FUN_143333390(plVar15,plVar15,uVar9);
              }
            }
            else if ((ulonglong)plVar15[2] < uVar14) {
              uVar9 = (uVar14 >> 2) + uVar14;
              goto LAB_14332de75;
            }
            plVar15[1] = uVar14;
            *(undefined1 *)(*plVar15 + -1 + uVar14) = 0;
            iVar16 = (int)(fVar18 * fVar20);
            local_1a8 = iVar16;
            FUN_143335130(&local_138,iVar16);
            iVar11 = (int)(fVar18 * fVar19);
            FUN_143335130(&local_138,iVar11);
            uVar6 = 1;
            iVar4 = iVar16;
            iVar5 = iVar11;
            if (1 < *(uint *)(lVar1 + 4 + uVar8 * 8)) {
              do {
                uVar7 = *(int *)(lVar1 + uVar8 * 8) + uVar6;
                uVar14 = (ulonglong)(uVar7 & 0xf);
                lVar2 = *(longlong *)(local_1a0[5] + (ulonglong)(uVar7 >> 4) * 8);
                local_120 = *(float *)(*(longlong *)(param_2 + 0x48) + 0x2c);
                local_128 = *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x10);
                iVar4 = (int)(local_120 * *(float *)(lVar2 + uVar14 * 8)) - iVar16;
                iVar12 = (int)(local_120 * *(float *)(lVar2 + 4 + uVar14 * 8)) - iVar5;
                if (iVar12 == 0) {
                  FUN_1433337c0(&local_128,iVar4);
                }
                else if (iVar4 == 0) {
                  FUN_143335930(&local_128,iVar12);
                }
                else {
                  FUN_1433339f0(&local_128,iVar4,iVar12);
                }
                iVar16 = iVar16 + iVar4;
                iVar5 = iVar5 + iVar12;
                uVar6 = uVar6 + 1;
                iVar4 = local_1a8;
              } while (uVar6 < *(uint *)(lVar1 + 4 + uVar8 * 8));
            }
            local_198 = *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x10);
            local_190 = *(float *)(*(longlong *)(param_2 + 0x48) + 0x2c);
            if ((iVar16 != iVar4) || (iVar5 != iVar11)) {
              iVar4 = iVar4 - iVar16;
              iVar11 = iVar11 - iVar5;
              if (iVar11 == 0) {
                FUN_1433337c0(&local_198,iVar4);
              }
              else if (iVar4 == 0) {
                FUN_143335930(&local_198,iVar11);
              }
              else {
                FUN_1433339f0(&local_198,iVar4,iVar11);
              }
            }
            local_118 = *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x10);
            local_110 = *(undefined4 *)(*(longlong *)(param_2 + 0x48) + 0x2c);
            Scaleform::Render::
            PathDataEncoder<Scaleform::ArrayLH_POD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>
            ::WriteEndPath(&local_118);
            uVar9 = (ulonglong)((int)local_140 + 1);
            plVar17 = local_1a0;
            uVar6 = local_208;
            local_140 = uVar9;
          }
          local_208 = uVar6 + 1;
          uVar14 = (ulonglong)local_208;
          plVar15 = local_188;
        } while (uVar14 < (ulonglong)plVar17[7]);
      }
      FUN_1433325e0(*(undefined8 *)(param_2 + 0x48));
      (**(code **)(*plVar15 + 8))(plVar15);
      (**(code **)(*(longlong *)(param_1 + 0x19d0) + 8))();
      (**(code **)(*(longlong *)(param_1 + 0x1a30) + 8))();
      Scaleform::Render::LinearHeap::ClearAndRelease(param_1 + 0x1928);
      Scaleform::Render::LinearHeap::ClearAndRelease(param_1 + 0x1950);
    }
  }
  return;
}



// FUNCTION 14332e0d0 FUN_14332e0d0 body=102 status=ok
// SIG undefined FUN_14332e0d0(void)

longlong FUN_14332e0d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1433c7670(param_1 + 0xe98,param_3,param_4,param_5);
  if (lVar1 != 0) {
    uVar2 = Scaleform::Render::GlyphQueue::CreateNotifier(param_1 + 0xe98,lVar1,param_2);
    FUN_1433bf7b0(param_2,uVar2);
  }
  return lVar1;
}



// FUNCTION 14332e140 FUN_14332e140 body=527 status=ok
// SIG undefined FUN_14332e140(void)

longlong FUN_14332e140(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  lVar4 = *(longlong *)(param_2 + 0xf0);
  if (*(uint *)(param_1 + 0x84) <= (uint)(*(int *)(lVar4 + 0x2c) + *(int *)(param_1 + 0x88) * 2)) {
    cVar5 = (**(code **)(**(longlong **)(param_2 + 0xe8) + 8))();
    if (cVar5 == '\0') {
      *(undefined4 *)(param_1 + 0x11b0) = 3;
      return 0;
    }
  }
  iVar3 = *(int *)(param_1 + 0x88);
  iVar1 = *(int *)(lVar4 + 0x30) + iVar3;
  iVar2 = *(int *)(lVar4 + 0x34) + iVar3;
  uVar9 = iVar3 + 1 + (*(int *)(lVar4 + 0x2c) - *(int *)(lVar4 + 0x34)) + iVar2;
  iVar10 = *(int *)(lVar4 + 0x28) + 1 + (iVar3 - *(int *)(lVar4 + 0x30)) + iVar1;
  uVar8 = *(uint *)(param_1 + 0x84);
  if ((uVar8 < uVar9) && (uVar9 = uVar8, *(char *)(param_1 + 0x1a95) != '\0')) {
    FUN_14332bf30(param_1,
                  "Warning: Raster glyph is too big - increase GlyphCacheParams.MaxSlotHeight");
    *(undefined1 *)(param_1 + 0x1a95) = 0;
  }
  lVar6 = FUN_1433c7670(param_1 + 0xe98,param_4,iVar10,uVar9);
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0x11b0) = 5;
    if (*(char *)(param_1 + 0x1a94) != '\0') {
      FUN_14332bf30(param_1,"Warning: Increase raster glyph cache capacity - see GlyphCacheParams");
      *(undefined1 *)(param_1 + 0x1a94) = 0;
    }
    lVar6 = 0;
  }
  else {
    uVar7 = Scaleform::Render::GlyphQueue::CreateNotifier(param_1 + 0xe98,lVar6,param_3);
    FUN_1433bf7b0(param_3,uVar7);
    *(short *)(lVar6 + 0x38) = (short)iVar1 * -0x10;
    *(short *)(lVar6 + 0x3a) = (short)iVar2 * -0x10;
    *(undefined4 *)(lVar6 + 0x3c) = 0x3f800000;
    FUN_143333590(param_1 + 0x18a8);
    *(int *)(param_1 + 0x18f0) = iVar10;
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x18a8),0,(ulonglong)(uVar9 * iVar10));
    uVar8 = 0;
    if (*(int *)(lVar4 + 0x2c) != 0) {
      do {
        if (uVar9 <= uVar8 + iVar3) break;
        _guard_xfg_dispatch_icall_nop
                  ((void *)((ulonglong)((uVar8 + iVar3) * *(int *)(param_1 + 0x18f0) + iVar3) +
                           *(longlong *)(param_1 + 0x18a8)),
                   (void *)((ulonglong)(*(uint *)(lVar4 + 0x28) * uVar8) +
                           *(longlong *)(lVar4 + 0x10)),(ulonglong)*(uint *)(lVar4 + 0x28));
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(lVar4 + 0x2c));
    }
    FUN_14332f3b0(param_1,lVar6);
    *(int *)(param_1 + 0x1a90) = *(int *)(param_1 + 0x1a90) + 1;
  }
  return lVar6;
}



// FUNCTION 14332e360 FUN_14332e360 body=743 status=ok
// SIG undefined FUN_14332e360(void)

void FUN_14332e360(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  undefined4 *puVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong uVar6;
  
  uVar12 = 0;
  local_68 = &local_58;
  local_78 = 0;
  local_70 = 0x10000;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  Scaleform::Render::RawImage::GetImageData(*(undefined8 *)(param_1 + 0xff8),&local_78);
  if (*(int *)(param_1 + 0x80) != 0) {
    do {
      lVar9 = param_1 + 0x98 + uVar12 * 0x70;
      uVar5 = *(uint *)(lVar9 + 0x6c);
      if (uVar5 != 0) {
        FUN_1433334e0(param_1 + 0x1028,uVar5);
        uVar6 = 0;
        *(ulonglong *)(param_1 + 0x1030) = (ulonglong)uVar5;
        uVar8 = 0;
        uVar10 = uVar6;
        if (*(int *)(param_1 + 0x1008) != 0) {
          do {
            puVar13 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1020) + (uVar6 >> 6) * 8) +
                              (ulonglong)((uint)uVar6 & 0x3f) * 0x1c);
            uVar11 = uVar10;
            if (puVar13[6] == (uint)uVar12) {
              uVar11 = (ulonglong)((int)uVar10 + 1);
              local_a8 = &local_98;
              local_b8 = 0;
              puVar7 = (undefined4 *)(uVar10 * 0x38 + *(longlong *)(param_1 + 0x1028));
              local_b0 = 0x10000;
              local_a0 = 0;
              local_98 = 0;
              local_90 = 0;
              local_88 = 0;
              local_80 = 0;
              Scaleform::Render::RawImage::GetImageData(*(undefined8 *)(param_1 + 0xff8),&local_b8);
              puVar7[8] = puVar13[2];
              puVar7[9] = puVar13[3];
              puVar7[10] = puVar13[4] + puVar13[2];
              puVar7[0xb] = puVar13[5] + puVar13[3];
              *puVar7 = *(undefined4 *)local_68;
              puVar7[1] = *(undefined4 *)((longlong)local_68 + 4);
              *(undefined8 *)(puVar7 + 2) = local_68[1];
              *(undefined8 *)(puVar7 + 4) = local_68[2];
              *(undefined8 *)(puVar7 + 6) = local_68[3];
              *(ulonglong *)(puVar7 + 6) =
                   (ulonglong)puVar13[1] * local_a8[1] + local_a8[3] + (ulonglong)*puVar13;
              puVar7[0xc] = 0;
              Scaleform::Render::ImageData::freePlanes(&local_b8);
              lVar2 = local_a0;
              if ((local_a0 != 0) &&
                 (iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(local_a0,0xffffffff)
                 , iVar3 == 1)) {
                (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
              }
            }
            uVar5 = (uint)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
            uVar10 = uVar11;
          } while (uVar5 < *(uint *)(param_1 + 0x1008));
          uVar8 = (undefined4)uVar11;
        }
        uVar1 = *(undefined8 *)(param_1 + 0x1028);
        if ((*(int *)(lVar9 + 4) == 1) &&
           (plVar4 = (longlong *)
                     (**(code **)(**(longlong **)(lVar9 + 0x58) + 0xa8))
                               (*(longlong **)(lVar9 + 0x58),*(undefined8 *)(lVar9 + 8)),
           plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x98))(plVar4,uVar1,uVar8,0);
        }
        *(undefined4 *)(lVar9 + 0x6c) = 0;
      }
      uVar5 = (uint)uVar12 + 1;
      uVar12 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0x80));
  }
  *(undefined8 *)(param_1 + 0x1008) = 0;
  *(undefined8 *)(param_1 + 0xfec) = 0;
  *(undefined4 *)(param_1 + 0xff4) = 0;
  Scaleform::Render::ImageData::freePlanes(&local_78);
  lVar9 = local_60;
  if ((local_60 != 0) &&
     (iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(local_60,0xffffffff), iVar3 == 1
     )) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar9);
  }
  return;
}



// FUNCTION 14332e650 FUN_14332e650 body=145 status=ok
// SIG undefined FUN_14332e650(void)

void FUN_14332e650(undefined8 param_1,longlong param_2,void *param_3,uint param_4,uint param_5,
                  int param_6,uint param_7,uint param_8)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_8 != 0) {
    do {
      _guard_xfg_dispatch_icall_nop
                ((void *)((ulonglong)(uVar1 + param_6) * *(longlong *)(param_2 + 8) +
                          (ulonglong)param_5 + *(longlong *)(param_2 + 0x18)),param_3,
                 (ulonglong)param_7);
      param_3 = (void *)((longlong)param_3 + (ulonglong)param_4);
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_8);
  }
  return;
}



// FUNCTION 14332e6f0 FUN_14332e6f0 body=210 status=ok
// SIG undefined FUN_14332e6f0(void)

void FUN_14332e6f0(longlong param_1)

{
  longlong *plVar1;
  RefCountNTSImpl *this;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x80) == 0) {
    *(undefined8 *)(param_1 + 0x1008) = 0;
    return;
  }
  do {
    lVar2 = uVar3 * 0x70;
    *(undefined1 *)(lVar2 + 0x98 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x104 + param_1) = 0;
    plVar1 = *(longlong **)(lVar2 + 0xf0 + param_1);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    *(undefined8 *)(lVar2 + 0xf0 + param_1) = 0;
    plVar1 = *(longlong **)(lVar2 + 0xe8 + param_1);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    *(undefined8 *)(lVar2 + 0xe8 + param_1) = 0;
    this = *(RefCountNTSImpl **)(lVar2 + 0xf8 + param_1);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
    uVar4 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar4;
    *(undefined8 *)(lVar2 + 0xf8 + param_1) = 0;
  } while (uVar4 < *(uint *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x1008) = 0;
  return;
}



// FUNCTION 14332e7d0 FUN_14332e7d0 body=533 status=ok
// SIG undefined FUN_14332e7d0(void)

void FUN_14332e7d0(longlong param_1,longlong *param_2,undefined8 param_3,float param_4,float param_5
                  )

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_98;
  int local_94;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  
  cVar2 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar2 == '\0') {
    local_70 = (**(code **)(*param_2 + 0x30))(param_2);
    local_40 = 0x3f800000;
    local_6c = 0;
    local_64 = 0;
    local_5c = 0;
    bVar1 = true;
    local_54 = 0;
    local_4c = 0;
    local_44 = 0;
    local_3c = 0;
    iVar3 = (**(code **)(*param_2 + 0x40))(param_2,&local_70,&local_88,&local_98);
    while ((iVar3 != 0 && ((bVar1 || (iVar3 != 2))))) {
      bVar1 = false;
      if (local_98 == local_94) {
        (**(code **)(*param_2 + 0x50))(param_2,&local_70);
      }
      else {
        local_88 = local_88 * param_4;
        local_84 = local_84 * param_5;
        Scaleform::Render::Rasterizer::MoveTo(param_1 + 0x12d8);
        iVar3 = (**(code **)(*param_2 + 0x48))(param_2,&local_70,&local_88);
        while (iVar3 != 0) {
          if (iVar3 == 1) {
            local_88 = local_88 * param_4;
            local_84 = local_84 * param_5;
            FUN_1433caad0();
          }
          else {
            local_7c = local_7c * param_5;
            local_80 = local_80 * param_4;
            local_88 = local_88 * param_4;
            local_84 = local_84 * param_5;
            FUN_1433bd900(param_1 + 0x12d8,param_3,local_88,local_84,local_80,local_7c);
          }
          iVar3 = (**(code **)(*param_2 + 0x48))(param_2,&local_70,&local_88);
        }
        (**(code **)(*(longlong *)(param_1 + 0x12d8) + 0x28))(param_1 + 0x12d8);
      }
      iVar3 = (**(code **)(*param_2 + 0x40))(param_2,&local_70,&local_88,&local_98);
    }
  }
  return;
}



// FUNCTION 14332e9f0 FUN_14332e9f0 body=1315 status=ok
// SIG undefined FUN_14332e9f0(void)

void FUN_14332e9f0(longlong param_1,longlong *param_2,undefined4 *param_3,uint param_4,int param_5,
                  int param_6,float param_7,float param_8)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  short sVar10;
  ulonglong uVar11;
  float fVar12;
  short local_res8;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  int local_f0;
  int local_ec;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  
  plVar1 = (longlong *)(param_1 + 0x11b8);
  (**(code **)(*plVar1 + 8))(plVar1);
  cVar5 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar5 == '\0') {
    iVar6 = (int)(param_7 * 64.0);
    if (0x800 < (int)(param_7 * 64.0)) {
      iVar6 = 0x800;
    }
    *(int *)(param_1 + 0x11c0) = iVar6;
    local_a8 = *param_3;
    uStack_9c = param_3[3];
    local_88 = *(undefined8 *)(param_3 + 8);
    uStack_80 = *(undefined8 *)(param_3 + 10);
    local_60 = param_3[0x12];
    local_68 = *(undefined8 *)(param_3 + 0x10);
    fVar12 = (float)iVar6 / (float)param_4;
    fStack_a0 = ((float)iVar6 * 0.5) / param_7;
    local_98 = *(undefined8 *)(param_3 + 4);
    uStack_90 = *(undefined8 *)(param_3 + 6);
    fStack_a4 = (float)param_3[1] * fStack_a0;
    local_78 = *(undefined8 *)(param_3 + 0xc);
    uStack_70 = *(undefined8 *)(param_3 + 0xe);
    fStack_a0 = (float)param_3[2] * fStack_a0;
    local_e0 = (**(code **)(*param_2 + 0x30))(param_2);
    uVar11 = 0;
    local_dc = 0;
    local_d4 = 0;
    local_cc = 0;
    bVar4 = true;
    local_c4 = 0;
    local_bc = 0;
    local_b4 = 0;
    local_b0 = 0x3f800000;
    local_ac = 0;
    iVar6 = (**(code **)(*param_2 + 0x40))(param_2,&local_e0,&local_108,&local_f0);
    while ((iVar6 != 0 && ((bVar4 || (iVar6 != 2))))) {
      bVar4 = false;
      if (local_f0 == local_ec) {
        (**(code **)(*param_2 + 0x50))(param_2,&local_e0);
      }
      else {
        local_108 = local_108 * fVar12;
        local_104 = -(local_104 * fVar12);
        FUN_1433c9a40(plVar1);
        iVar6 = (**(code **)(*param_2 + 0x48))(param_2,&local_e0,&local_108);
        while (iVar6 != 0) {
          if (iVar6 == 1) {
            local_108 = local_108 * fVar12;
            local_104 = -(local_104 * fVar12);
            FUN_1433c9b30();
          }
          else {
            local_100 = local_100 * fVar12;
            local_fc = -(local_fc * fVar12);
            local_108 = local_108 * fVar12;
            local_104 = -(local_104 * fVar12);
            FUN_1433bd900(plVar1,&local_a8);
          }
          iVar6 = (**(code **)(*param_2 + 0x48))(param_2,&local_e0,&local_108);
        }
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      iVar6 = (**(code **)(*param_2 + 0x40))(param_2,&local_e0,&local_108,&local_f0);
    }
    FUN_1433c9c60(plVar1,(int)param_7,0,(int)((float)param_5 * fVar12),
                  (int)((float)param_6 * fVar12));
    fVar12 = 1.0 / (float)*(int *)(param_1 + 0x12c0);
    if (*(longlong *)(param_1 + 0x11f8) != 0) {
      do {
        uVar9 = (ulonglong)((uint)uVar11 & 3);
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1210) + (uVar11 >> 2) * 8);
        if (2 < *(uint *)(lVar3 + 4 + uVar9 * 8)) {
          uVar8 = *(uint *)(lVar3 + uVar9 * 8);
          uVar2 = *(undefined4 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x1238) + (ulonglong)(uVar8 >> 4) * 8) +
                   (ulonglong)(uVar8 & 0xf) * 4);
          sVar10 = (short)((uint)uVar2 >> 0x10);
          iVar6 = (int)sVar10 - (int)*(short *)(param_1 + 0x12b2);
          if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x12a0))) {
            sVar10 = *(short *)(*(longlong *)(param_1 + 0x12a8) + (longlong)iVar6 * 2) +
                     *(short *)(param_1 + 0x12b2);
          }
          local_res8 = (short)uVar2;
          iVar6 = (int)local_res8 - (int)*(short *)(param_1 + 0x12b0);
          if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x1288))) {
            local_res8 = *(short *)(*(longlong *)(param_1 + 0x1290) + (longlong)iVar6 * 2) +
                         *(short *)(param_1 + 0x12b0);
          }
          Scaleform::Render::Rasterizer::MoveTo
                    (param_1 + 0x12d8,(float)(int)local_res8 * fVar12 * param_8,
                     (float)-(int)sVar10 * fVar12);
          uVar8 = 1;
          if (1 < *(uint *)(lVar3 + 4 + uVar9 * 8)) {
            do {
              uVar7 = *(int *)(lVar3 + uVar9 * 8) + uVar8;
              uVar2 = *(undefined4 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x1238) + (ulonglong)(uVar7 >> 4) * 8)
                       + (ulonglong)(uVar7 & 0xf) * 4);
              sVar10 = (short)((uint)uVar2 >> 0x10);
              iVar6 = (int)sVar10 - (int)*(short *)(param_1 + 0x12b2);
              if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x12a0))) {
                sVar10 = *(short *)(*(longlong *)(param_1 + 0x12a8) + (longlong)iVar6 * 2) +
                         *(short *)(param_1 + 0x12b2);
              }
              local_res8 = (short)uVar2;
              iVar6 = (int)local_res8 - (int)*(short *)(param_1 + 0x12b0);
              if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x1288))) {
                local_res8 = *(short *)(*(longlong *)(param_1 + 0x1290) + (longlong)iVar6 * 2) +
                             *(short *)(param_1 + 0x12b0);
              }
              FUN_1433caad0(param_1 + 0x12d8,(float)(int)local_res8 * fVar12 * param_8,
                            (float)-(int)sVar10 * fVar12);
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(uint *)(lVar3 + 4 + uVar9 * 8));
          }
          (**(code **)(*(longlong *)(param_1 + 0x12d8) + 0x28))(param_1 + 0x12d8);
        }
        uVar11 = (ulonglong)((uint)uVar11 + 1);
      } while (uVar11 < *(ulonglong *)(param_1 + 0x11f8));
    }
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  return;
}



// FUNCTION 14332ef20 FUN_14332ef20 body=204 status=ok
// SIG undefined FUN_14332ef20(void)

void FUN_14332ef20(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  local_38 = param_5;
  local_34 = param_6;
  local_30 = param_7;
  local_48 = param_2;
  local_40 = param_3;
  local_3c = param_4;
  FUN_143330810(&local_48,param_8,param_1 + 0x1910,param_1 + 0x18f8);
  local_38 = param_5;
  local_34 = param_6;
  local_30 = param_7;
  local_48 = param_2;
  local_40 = param_3;
  local_3c = param_4;
  FUN_143330fb0(&local_48,param_9,param_1 + 0x1910,param_1 + 0x18f8);
  return;
}



// FUNCTION 14332f000 FUN_14332f000 body=440 status=ok
// SIG undefined FUN_14332f000(void)

void FUN_14332f000(undefined8 param_1,longlong param_2,int param_3,ulonglong param_4,int param_5,
                  uint param_6,uint param_7,float param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if ((param_8 != 1.0) && (param_7 != 0)) {
    uVar6 = param_3 * param_5;
    uVar4 = (ulonglong)param_7;
    do {
      uVar1 = 0;
      pbVar3 = (byte *)((ulonglong)uVar6 + (param_4 & 0xffffffff) + param_2);
      if (3 < param_6) {
        uVar1 = (param_6 - 4 >> 2) + 1;
        uVar5 = (ulonglong)uVar1;
        uVar1 = uVar1 * 4;
        do {
          iVar2 = (int)((float)(int)((uint)*pbVar3 - param_9) * param_8 + 0.5) + param_9;
          if (iVar2 < 0) {
            iVar2 = 0;
          }
          else if (0xff < iVar2) {
            iVar2 = 0xff;
          }
          *pbVar3 = (byte)iVar2;
          iVar2 = (int)((float)(int)((uint)pbVar3[1] - param_9) * param_8 + 0.5) + param_9;
          if (iVar2 < 0) {
            iVar2 = 0;
          }
          else if (0xff < iVar2) {
            iVar2 = 0xff;
          }
          pbVar3[1] = (byte)iVar2;
          iVar2 = (int)((float)(int)((uint)pbVar3[2] - param_9) * param_8 + 0.5) + param_9;
          if (iVar2 < 0) {
            iVar2 = 0;
          }
          else if (0xff < iVar2) {
            iVar2 = 0xff;
          }
          pbVar3[2] = (byte)iVar2;
          iVar2 = (int)((float)(int)((uint)pbVar3[3] - param_9) * param_8 + 0.5) + param_9;
          if (iVar2 < 0) {
            iVar2 = 0;
          }
          else if (0xff < iVar2) {
            iVar2 = 0xff;
          }
          pbVar3[3] = (byte)iVar2;
          pbVar3 = pbVar3 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (uVar1 < param_6) {
        uVar5 = (ulonglong)(param_6 - uVar1);
        do {
          iVar2 = (int)((float)(int)((uint)*pbVar3 - param_9) * param_8 + 0.5) + param_9;
          if (iVar2 < 0) {
            iVar2 = 0;
          }
          else if (0xff < iVar2) {
            iVar2 = 0xff;
          }
          *pbVar3 = (byte)iVar2;
          pbVar3 = pbVar3 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      uVar6 = uVar6 + param_3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 14332f1c0 FUN_14332f1c0 body=176 status=ok
// SIG undefined FUN_14332f1c0(void)

void FUN_14332f1c0(longlong param_1,void *param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  ulonglong uVar6;
  uint uVar7;
  char local_108 [256];
  
  uVar4 = 0x100;
  if (param_3 < 0x101) {
    uVar4 = param_3;
  }
  _guard_xfg_dispatch_icall_nop(local_108,0,(ulonglong)uVar4);
  if (4 < uVar4) {
    uVar7 = 4;
    pcVar5 = local_108 + 1;
    do {
      uVar6 = (ulonglong)(byte)pcVar5[(longlong)param_2 + (2 - (longlong)(local_108 + 1))];
      pcVar1 = pcVar5 + 1;
      uVar7 = uVar7 + 1;
      cVar2 = *(char *)(uVar6 + 0x17a8 + param_1);
      cVar3 = *(char *)(uVar6 + 0x16a8 + param_1);
      pcVar5[-1] = pcVar5[-1] + cVar2;
      *pcVar5 = *pcVar5 + cVar3;
      pcVar5[2] = pcVar5[2] + cVar3;
      pcVar5[3] = pcVar5[3] + cVar2;
      *pcVar1 = *pcVar1 + *(char *)(uVar6 + 0x15a8 + param_1);
      pcVar5 = pcVar1;
    } while (uVar7 < uVar4);
  }
  _guard_xfg_dispatch_icall_nop(param_2,local_108,(ulonglong)uVar4);
  return;
}



// FUNCTION 14332f2e0 cacheFullWarning body=43 status=ok
// SIG undefined cacheFullWarning(void)

void Scaleform::Render::GlyphCache::cacheFullWarning(longlong param_1)

{
  if (*(char *)(param_1 + 0x1a94) != '\0') {
    FUN_14332bf30(param_1,"Warning: Increase raster glyph cache capacity - see GlyphCacheParams");
    *(undefined1 *)(param_1 + 0x1a94) = 0;
  }
  return;
}



// FUNCTION 14332f320 FUN_14332f320 body=43 status=ok
// SIG undefined FUN_14332f320(void)

void FUN_14332f320(longlong param_1)

{
  if (*(char *)(param_1 + 0x1a95) != '\0') {
    FUN_14332bf30(param_1,
                  "Warning: Raster glyph is too big - increase GlyphCacheParams.MaxSlotHeight");
    *(undefined1 *)(param_1 + 0x1a95) = 0;
  }
  return;
}



// FUNCTION 14332f360 FUN_14332f360 body=71 status=ok
// SIG undefined FUN_14332f360(void)

bool FUN_14332f360(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x1070) != 0) {
LAB_14332f38e:
    return *(longlong *)(param_1 + 0x1070) != 0;
  }
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x30))();
    if (cVar1 != '\0') {
      FUN_14332c9f0(param_1);
      goto LAB_14332f38e;
    }
  }
  return false;
}



// FUNCTION 14332f3b0 FUN_14332f3b0 body=736 status=ok
// SIG undefined FUN_14332f3b0(void)

undefined8 FUN_14332f3b0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined8 in_stack_ffffffffffffff28;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined8 in_stack_ffffffffffffff30;
  undefined4 uVar19;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 *puVar20;
  undefined4 uVar21;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x18a8);
  uVar16 = (uint)*(ushort *)(param_2 + 0x34);
  uVar3 = *(ushort *)(param_2 + 0x36);
  uVar11 = (uint)uVar3;
  uVar6 = *(undefined4 *)(param_1 + 0x18f0);
  uVar14 = *(ushort *)(*(longlong *)(param_2 + 0x18) + 0x40) & 0x7fff;
  uVar4 = *(ushort *)(param_2 + 0x30);
  uVar5 = *(ushort *)(param_2 + 0x32);
  lVar15 = (ulonglong)uVar14 * 0x70 + param_1;
  if (*(char *)(lVar15 + 0x98) == '\0') {
    local_res20 = *(undefined4 *)(param_1 + 0x78);
    local_res24 = *(undefined4 *)(param_1 + 0x7c);
    puVar20 = &local_res20;
    uVar17 = *(undefined8 *)(param_1 + 0x68);
    lVar10 = param_1;
    FUN_143329fb0(lVar15 + 0x98,*(undefined4 *)(param_1 + 0xfe0),*(undefined8 *)(param_1 + 0x58),
                  *(undefined8 *)(param_1 + 0x70),uVar17,param_1,uVar14,puVar20);
    uVar18 = (undefined4)((ulonglong)uVar17 >> 0x20);
    uVar19 = (undefined4)((ulonglong)lVar10 >> 0x20);
    uVar21 = (undefined4)((ulonglong)puVar20 >> 0x20);
  }
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x1078) + 0x10);
  *puVar1 = *puVar1 | 2;
  if (*(int *)(param_1 + 0xfe0) != 1) {
    lVar15 = Scaleform::Render::GlyphTextureMapper::Map(lVar15 + 0x98);
    if (lVar15 != 0) {
      FUN_14332e650(param_1,lVar15,uVar7,uVar6,CONCAT44(uVar18,(uint)uVar4),
                    CONCAT44(uVar19,(uint)uVar5),uVar16,CONCAT44(uVar21,uVar11));
      return 1;
    }
    return 0;
  }
  iVar8 = *(int *)(param_1 + 0xfec);
  uVar9 = iVar8 + uVar16;
  if ((*(uint *)(param_1 + 0xfe4) < uVar9) ||
     (iVar12 = *(int *)(param_1 + 0xff0), *(uint *)(param_1 + 0xfe8) < iVar12 + uVar11)) {
    iVar12 = *(int *)(param_1 + 0xff4) + *(int *)(param_1 + 0xff0);
    *(int *)(param_1 + 0xff0) = iVar12;
    if (*(uint *)(param_1 + 0xfe8) < iVar12 + uVar11) {
      FUN_14332e360(param_1);
      iVar8 = *(int *)(param_1 + 0xfec);
      uVar9 = iVar8 + uVar16;
      if ((uVar9 <= *(uint *)(param_1 + 0xfe4)) &&
         (iVar12 = *(int *)(param_1 + 0xff0), iVar12 + uVar11 <= *(uint *)(param_1 + 0xfe8)))
      goto LAB_14332f49e;
      iVar12 = *(int *)(param_1 + 0xff4) + *(int *)(param_1 + 0xff0);
      *(int *)(param_1 + 0xff0) = iVar12;
      if (*(uint *)(param_1 + 0xfe8) < iVar12 + uVar11) {
        return 0;
      }
    }
    *(uint *)(param_1 + 0xfec) = uVar16;
    iVar8 = 0;
  }
  else {
LAB_14332f49e:
    *(uint *)(param_1 + 0xfec) = uVar9;
    if (uVar11 <= *(uint *)(param_1 + 0xff4)) goto LAB_14332f532;
  }
  *(uint *)(param_1 + 0xff4) = uVar11;
LAB_14332f532:
  local_78 = &local_68;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_88 = 0;
  local_80 = 0x10000;
  local_68 = 0;
  Scaleform::Render::RawImage::GetImageData(*(undefined8 *)(param_1 + 0xff8),&local_88);
  FUN_14332e650(param_1,local_78,uVar7,uVar6,CONCAT44(uVar18,iVar8),CONCAT44(uVar19,iVar12),uVar16,
                CONCAT44(uVar21,uVar11));
  *(int *)(lVar15 + 0x104) = *(int *)(lVar15 + 0x104) + 1;
  uVar13 = *(ulonglong *)(param_1 + 0x1008) >> 6;
  if (*(ulonglong *)(param_1 + 0x1010) <= uVar13) {
    FUN_143335b50(param_1 + 0x1000,uVar13);
  }
  lVar10 = (ulonglong)(*(uint *)(param_1 + 0x1008) & 0x3f) * 0x1c;
  lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1020) + uVar13 * 8);
  piVar2 = (int *)(lVar15 + lVar10);
  *piVar2 = iVar8;
  piVar2[1] = iVar12;
  piVar2[2] = (uint)uVar4;
  piVar2[3] = (uint)uVar5;
  *(ulonglong *)(lVar15 + 0x10 + lVar10) = (ulonglong)CONCAT24(uVar3,uVar16);
  *(uint *)(lVar15 + 0x18 + lVar10) = uVar14;
  *(longlong *)(param_1 + 0x1008) = *(longlong *)(param_1 + 0x1008) + 1;
  Scaleform::Render::ImageData::freePlanes(&local_88);
  lVar15 = local_70;
  if ((local_70 != 0) &&
     (iVar8 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(local_70,0xffffffff), iVar8 == 1
     )) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar15);
    return 1;
  }
  return 1;
}



// FUNCTION 14332f6a0 FUN_14332f6a0 body=1429 status=ok
// SIG undefined FUN_14332f6a0(void)

longlong FUN_14332f6a0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                      float param_5,longlong param_6)

{
  longlong *plVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  ulonglong uVar17;
  int iVar18;
  longlong *plVar19;
  float fVar20;
  float fVar21;
  float _X;
  float fVar22;
  float _X_00;
  float fVar23;
  ulonglong in_stack_fffffffffffffef8;
  
  iVar9 = *(int *)(param_1 + 0x88);
  uVar12 = *(uint *)(param_6 + 0x2c);
  fVar22 = 1.0;
  param_5 = ((float)*(ushort *)(param_4 + 10) * 0.0625) / param_5;
  _X_00 = (float)*(ushort *)(param_4 + 0xe) * 0.0625 * param_5 * *(float *)(param_2 + 0xe0);
  _X = (float)*(ushort *)(param_4 + 0x10) * 0.0625 * param_5 * *(float *)(param_2 + 0xe0);
  fVar20 = (float)*(uint *)(param_1 + 0x84) * *(float *)(param_1 + 0x94) - (float)(uint)(iVar9 * 2);
  fVar21 = _X + _X + (float)uVar12;
  if (fVar20 <= fVar21) {
    fVar22 = fVar20 / fVar21;
    _X_00 = _X_00 * fVar22;
    _X = _X * fVar22;
  }
  fVar20 = _guard_xfg_dispatch_icall_nop(_X_00);
  iVar18 = (int)fVar20 + iVar9;
  fVar20 = _guard_xfg_dispatch_icall_nop(_X);
  uVar2 = *(int *)(param_6 + 0x28) + 1 + iVar18 * 2;
  iVar9 = (int)fVar20 + iVar9;
  fVar23 = (float)uVar2;
  uVar12 = uVar12 + iVar9 * 2 + 1;
  fVar20 = _guard_xfg_dispatch_icall_nop(fVar23 * fVar22);
  uVar17 = (ulonglong)fVar20;
  fVar21 = (float)uVar12;
  fVar20 = _guard_xfg_dispatch_icall_nop(fVar21 * fVar22);
  uVar4 = (longlong)fVar20 & 0xffffffff;
  if (*(uint *)(param_1 + 0x84) < (uint)(longlong)fVar20) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x84);
  }
  lVar5 = FUN_1433c7670(param_1 + 0xe98,param_4,uVar17 & 0xffffffff,uVar4);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x11b0) = 5;
    if (*(char *)(param_1 + 0x1a94) != '\0') {
      FUN_14332bf30(param_1,"Warning: Increase raster glyph cache capacity - see GlyphCacheParams");
      *(undefined1 *)(param_1 + 0x1a94) = 0;
    }
    lVar5 = 0;
  }
  else {
    uVar6 = Scaleform::Render::GlyphQueue::CreateNotifier(param_1 + 0xe98,lVar5,param_3);
    FUN_1433bf7b0(param_3,uVar6);
    uVar14 = (uint)uVar17;
    *(short *)(lVar5 + 0x38) =
         (short)(int)(((float)((*(int *)(param_6 + 0x30) + iVar18) * -0x10) *
                      (float)(uVar17 & 0xffffffff)) / fVar23);
    *(short *)(lVar5 + 0x3a) =
         (short)(int)(((float)((*(int *)(param_6 + 0x34) + iVar9) * -0x10) * (float)uVar4) / fVar21)
    ;
    *(float *)(lVar5 + 0x3c) = (fVar21 / (float)uVar4 + fVar23 / (float)(uVar17 & 0xffffffff)) * 0.5
    ;
    plVar1 = (longlong *)(param_1 + 0x18c0);
    FUN_143333590(plVar1,uVar12 * uVar2);
    FUN_143333590(param_1 + 0x18a8);
    *(uint *)(param_1 + 0x18f0) = uVar14;
    _guard_xfg_dispatch_icall_nop((void *)*plVar1,0,(ulonglong)(uVar12 * uVar2));
    uVar10 = 0;
    uVar11 = 0;
    if ((1 < uVar2) && (1 < uVar12)) {
      if (*(int *)(param_6 + 0x2c) != 0) {
        uVar13 = uVar2 * iVar9 + iVar18;
        uVar15 = uVar10;
        do {
          if (uVar12 <= uVar15 + iVar9) break;
          _guard_xfg_dispatch_icall_nop
                    ((void *)((ulonglong)uVar13 + *plVar1),
                     (void *)((ulonglong)(*(uint *)(param_6 + 0x28) * uVar15) +
                             *(longlong *)(param_6 + 0x10)),(ulonglong)*(uint *)(param_6 + 0x28));
          uVar15 = uVar15 + 1;
          uVar13 = uVar13 + uVar2;
        } while (uVar15 < *(uint *)(param_6 + 0x2c));
      }
      if (((*(byte *)(param_4 + 0xc) >> 5 & 1) != 0) &&
         (FUN_143333590(param_1 + 0x18d8,*(undefined8 *)(param_1 + 0x18c8)), uVar7 = uVar11,
         *(longlong *)(param_1 + 0x18e0) != 0)) {
        do {
          *(undefined1 *)(uVar7 + *(longlong *)(param_1 + 0x18d8)) =
               *(undefined1 *)(uVar7 + *plVar1);
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ulonglong *)(param_1 + 0x18e0));
      }
      if ((0.0 < _X_00) || (uVar15 = uVar10, 0.0 < _X)) {
        in_stack_fffffffffffffef8 = in_stack_fffffffffffffef8 & 0xffffffff00000000;
        FUN_14332ef20(param_1,*plVar1,uVar2,0,in_stack_fffffffffffffef8,uVar2,uVar12,_X_00,_X);
        uVar15 = 8;
      }
      fVar20 = (float)*(ushort *)(param_4 + 0x12) * 0.0625;
      if (fVar20 <= 1.0) {
        uVar15 = uVar10;
      }
      FUN_14332f000(param_1,*plVar1,uVar2,0,in_stack_fffffffffffffef8 & 0xffffffff00000000,uVar2,
                    uVar12,fVar20,uVar15);
      if ((*(byte *)(param_4 + 0xc) >> 5 & 1) != 0) {
        pbVar16 = *(byte **)(param_1 + 0x18d8);
        pbVar8 = (byte *)*plVar1;
        uVar7 = uVar11;
        if (*(longlong *)(param_1 + 0x18e0) != 0) {
          do {
            bVar3 = *pbVar16;
            pbVar16 = pbVar16 + 1;
            uVar7 = uVar7 + 1;
            *pbVar8 = (byte)((uint)*pbVar8 * (0xff - (uint)bVar3) + 0xff >> 8);
            pbVar8 = pbVar8 + 1;
          } while (uVar7 < *(ulonglong *)(param_1 + 0x18e0));
        }
      }
    }
    plVar19 = (longlong *)(param_1 + 0x18a8);
    if ((uVar12 == (uint)uVar4) && (uVar2 == uVar14)) {
      FUN_143333590(plVar19,*(undefined8 *)(param_1 + 0x18c8));
      if (*(longlong *)(param_1 + 0x18b0) != 0) {
        do {
          *(undefined1 *)(uVar11 + *plVar19) = *(undefined1 *)(uVar11 + *plVar1);
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ulonglong *)(param_1 + 0x18b0));
      }
    }
    else {
      _guard_xfg_dispatch_icall_nop((void *)*plVar19,0,(ulonglong)((uint)uVar4 * uVar14));
      FUN_14338adf0(*plVar19,uVar17 & 0xffffffff,uVar4,uVar17 & 0xffffffff,*plVar1,uVar2,uVar12,
                    uVar2,4);
    }
    FUN_14332f3b0(param_1,lVar5);
    *(int *)(param_1 + 0x1a90) = *(int *)(param_1 + 0x1a90) + 1;
  }
  return lVar5;
}



// FUNCTION 14332fc40 FUN_14332fc40 body=274 status=ok
// SIG undefined FUN_14332fc40(void)

void FUN_14332fc40(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int local_78;
  int local_74;
  undefined1 local_68 [24];
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  local_50 = (**(code **)(*param_1 + 0x30))();
  local_20 = 0x3f800000;
  local_4c = 0;
  local_44 = 0;
  local_3c = 0;
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_1c = 0;
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1,&local_50,local_68,&local_78);
  do {
    if (iVar1 == 0) {
      return;
    }
    if (param_4 == 0) {
      bVar2 = (local_78 == 0) == (local_74 == 0);
LAB_14332fd31:
      if (bVar2) goto LAB_14332fcd0;
LAB_14332fd38:
      FUN_14332fd60(param_1,param_2,&local_50,local_68,param_3);
    }
    else {
      if (param_4 == 1) {
        bVar2 = local_78 == local_74;
        goto LAB_14332fd31;
      }
      if (param_4 == 2) goto LAB_14332fd38;
LAB_14332fcd0:
      (**(code **)(*param_1 + 0x50))(param_1,&local_50);
    }
    iVar1 = (**(code **)(*param_1 + 0x40))(param_1,&local_50,local_68,&local_78);
  } while( true );
}



// FUNCTION 14332fd60 FUN_14332fd60 body=2723 status=ok
// SIG undefined FUN_14332fd60(void)

void FUN_14332fd60(longlong *param_1,float *param_2,undefined8 param_3,float *param_4,float *param_5
                  )

{
  longlong lVar1;
  float *pfVar2;
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
  float local_res8 [2];
  
  pfVar2 = param_5;
  fVar11 = *param_4;
  lVar1 = *param_1;
  *param_4 = fVar11 * *param_2 + param_4[1] * param_2[1] + param_2[3];
  fVar9 = param_4[1] * param_2[5] + fVar11 * param_2[4] + param_2[7];
  param_4[1] = fVar9;
  fVar11 = *param_4;
  fVar14 = *param_5;
  if (fVar11 <= *param_5) {
    fVar14 = fVar11;
  }
  fVar4 = param_5[1];
  if (fVar9 <= param_5[1]) {
    fVar4 = fVar9;
  }
  *param_5 = fVar14;
  param_5[1] = fVar4;
  fVar14 = param_5[2];
  if (param_5[2] <= fVar11) {
    fVar14 = fVar11;
  }
  fVar11 = param_5[3];
  if (param_5[3] <= fVar9) {
    fVar11 = fVar9;
  }
  param_5[2] = fVar14;
  param_5[3] = fVar11;
  fVar11 = *param_4;
  fVar9 = param_4[1];
  iVar3 = (**(code **)(lVar1 + 0x48))(fVar14,param_3,param_4);
  while (iVar3 != 0) {
    if (iVar3 == 1) {
      fVar11 = *param_4;
      *param_4 = fVar11 * *param_2 + param_4[1] * param_2[1] + param_2[3];
      fVar9 = param_4[1] * param_2[5] + fVar11 * param_2[4] + param_2[7];
      param_4[1] = fVar9;
      fVar11 = *param_4;
      fVar14 = *pfVar2;
      if (fVar11 <= *pfVar2) {
        fVar14 = fVar11;
      }
      fVar4 = pfVar2[1];
      if (fVar9 <= pfVar2[1]) {
        fVar4 = fVar9;
      }
      *pfVar2 = fVar14;
      pfVar2[1] = fVar4;
      fVar14 = pfVar2[2];
      if (pfVar2[2] <= fVar11) {
        fVar14 = fVar11;
      }
      fVar11 = pfVar2[3];
      if (pfVar2[3] <= fVar9) {
        fVar11 = fVar9;
      }
      pfVar2[2] = fVar14;
      pfVar2[3] = fVar11;
      fVar11 = *param_4;
      fVar9 = param_4[1];
    }
    else if (iVar3 == 2) {
      fVar14 = *param_4;
      *param_4 = param_4[1] * param_2[1] + fVar14 * *param_2 + param_2[3];
      param_4[1] = param_4[1] * param_2[5] + fVar14 * param_2[4] + param_2[7];
      fVar14 = param_4[2];
      param_4[2] = param_4[3] * param_2[1] + fVar14 * *param_2 + param_2[3];
      fVar10 = param_4[3] * param_2[5] + fVar14 * param_2[4] + param_2[7];
      param_4[3] = fVar10;
      fVar14 = *param_4;
      fVar4 = ((fVar14 + fVar14) - fVar11) - param_4[2];
      if (((fVar4 != 0.0) && (fVar4 = (fVar14 - fVar11) / fVar4, 0.0 < fVar4)) && (fVar4 < 1.0)) {
        fVar13 = param_4[1];
        fVar5 = (fVar13 - fVar9) * fVar4 + fVar9;
        fVar7 = (fVar14 - fVar11) * fVar4 + fVar11;
        fVar5 = (((fVar10 - fVar13) * fVar4 + fVar13) - fVar5) * fVar4 + fVar5;
        fVar7 = (((param_4[2] - fVar14) * fVar4 + fVar14) - fVar7) * fVar4 + fVar7;
        fVar14 = pfVar2[1];
        if (fVar5 <= pfVar2[1]) {
          fVar14 = fVar5;
        }
        fVar4 = *pfVar2;
        if (fVar7 <= *pfVar2) {
          fVar4 = fVar7;
        }
        pfVar2[1] = fVar14;
        *pfVar2 = fVar4;
        fVar14 = pfVar2[3];
        if (pfVar2[3] <= fVar5) {
          fVar14 = fVar5;
        }
        fVar4 = pfVar2[2];
        if (pfVar2[2] <= fVar7) {
          fVar4 = fVar7;
        }
        pfVar2[3] = fVar14;
        pfVar2[2] = fVar4;
      }
      fVar14 = param_4[1];
      fVar4 = ((fVar14 + fVar14) - fVar9) - param_4[3];
      if (((fVar4 != 0.0) && (fVar4 = (fVar14 - fVar9) / fVar4, 0.0 < fVar4)) && (fVar4 < 1.0)) {
        fVar10 = *param_4;
        fVar9 = (fVar14 - fVar9) * fVar4 + fVar9;
        fVar11 = (fVar10 - fVar11) * fVar4 + fVar11;
        fVar9 = (((param_4[3] - fVar14) * fVar4 + fVar14) - fVar9) * fVar4 + fVar9;
        fVar14 = pfVar2[1];
        if (fVar9 <= pfVar2[1]) {
          fVar14 = fVar9;
        }
        fVar11 = (((param_4[2] - fVar10) * fVar4 + fVar10) - fVar11) * fVar4 + fVar11;
        pfVar2[1] = fVar14;
        fVar14 = pfVar2[3];
        if (pfVar2[3] <= fVar9) {
          fVar14 = fVar9;
        }
        fVar9 = *pfVar2;
        if (fVar11 <= *pfVar2) {
          fVar9 = fVar11;
        }
        pfVar2[3] = fVar14;
        *pfVar2 = fVar9;
        fVar14 = pfVar2[2];
        if (pfVar2[2] <= fVar11) {
          fVar14 = fVar11;
        }
        pfVar2[2] = fVar14;
      }
      fVar11 = param_4[3];
      fVar14 = param_4[2];
      fVar9 = *pfVar2;
      if (fVar14 <= *pfVar2) {
        fVar9 = fVar14;
      }
      fVar4 = pfVar2[1];
      if (fVar11 <= pfVar2[1]) {
        fVar4 = fVar11;
      }
      *pfVar2 = fVar9;
      pfVar2[1] = fVar4;
      fVar9 = pfVar2[2];
      if (pfVar2[2] <= fVar14) {
        fVar9 = fVar14;
      }
      fVar14 = pfVar2[3];
      if (pfVar2[3] <= fVar11) {
        fVar14 = fVar11;
      }
      pfVar2[2] = fVar9;
      pfVar2[3] = fVar14;
      fVar11 = param_4[2];
      fVar9 = param_4[3];
    }
    else if (iVar3 == 3) {
      fVar14 = *param_4;
      *param_4 = param_4[1] * param_2[1] + fVar14 * *param_2 + param_2[3];
      param_4[1] = param_4[1] * param_2[5] + fVar14 * param_2[4] + param_2[7];
      fVar14 = param_4[2];
      param_4[2] = param_4[3] * param_2[1] + fVar14 * *param_2 + param_2[3];
      param_4[3] = param_4[3] * param_2[5] + fVar14 * param_2[4] + param_2[7];
      fVar14 = param_4[4];
      param_4[4] = param_4[5] * param_2[1] + fVar14 * *param_2 + param_2[3];
      fVar13 = param_4[5] * param_2[5] + fVar14 * param_2[4] + param_2[7];
      param_4[5] = fVar13;
      fVar14 = param_4[4];
      fVar4 = param_4[2];
      fVar10 = *param_4;
      FUN_143332460(fVar11,fVar10,fVar4,fVar14,&param_5,local_res8);
      if ((0.0 < param_5._0_4_) && (param_5._0_4_ < 1.0)) {
        fVar5 = param_4[1];
        fVar7 = param_4[3];
        fVar6 = (fVar7 - fVar5) * param_5._0_4_ + fVar5;
        fVar12 = (fVar4 - fVar10) * param_5._0_4_ + fVar10;
        fVar8 = (fVar10 - fVar11) * param_5._0_4_ + fVar11;
        fVar10 = (fVar5 - fVar9) * param_5._0_4_ + fVar9;
        fVar8 = (fVar12 - fVar8) * param_5._0_4_ + fVar8;
        fVar10 = (fVar6 - fVar10) * param_5._0_4_ + fVar10;
        fVar8 = (((((fVar14 - fVar4) * param_5._0_4_ + fVar4) - fVar12) * param_5._0_4_ + fVar12) -
                fVar8) * param_5._0_4_ + fVar8;
        fVar10 = (((((fVar13 - fVar7) * param_5._0_4_ + fVar7) - fVar6) * param_5._0_4_ + fVar6) -
                 fVar10) * param_5._0_4_ + fVar10;
        fVar14 = *pfVar2;
        if (fVar8 <= *pfVar2) {
          fVar14 = fVar8;
        }
        fVar4 = pfVar2[1];
        if (fVar10 <= pfVar2[1]) {
          fVar4 = fVar10;
        }
        *pfVar2 = fVar14;
        pfVar2[1] = fVar4;
        fVar14 = pfVar2[2];
        if (pfVar2[2] <= fVar8) {
          fVar14 = fVar8;
        }
        fVar4 = pfVar2[3];
        if (pfVar2[3] <= fVar10) {
          fVar4 = fVar10;
        }
        pfVar2[2] = fVar14;
        pfVar2[3] = fVar4;
      }
      if ((0.0 < local_res8[0]) && (local_res8[0] < 1.0)) {
        fVar14 = *param_4;
        fVar4 = param_4[2];
        fVar10 = param_4[1];
        fVar13 = param_4[3];
        fVar6 = (fVar14 - fVar11) * local_res8[0] + fVar11;
        fVar7 = (fVar10 - fVar9) * local_res8[0] + fVar9;
        fVar10 = (fVar13 - fVar10) * local_res8[0] + fVar10;
        fVar14 = (fVar4 - fVar14) * local_res8[0] + fVar14;
        fVar7 = (fVar10 - fVar7) * local_res8[0] + fVar7;
        fVar6 = (fVar14 - fVar6) * local_res8[0] + fVar6;
        fVar5 = param_4[4];
        fVar7 = (((((param_4[5] - fVar13) * local_res8[0] + fVar13) - fVar10) * local_res8[0] +
                 fVar10) - fVar7) * local_res8[0] + fVar7;
        fVar10 = pfVar2[1];
        if (fVar7 <= pfVar2[1]) {
          fVar10 = fVar7;
        }
        pfVar2[1] = fVar10;
        fVar10 = pfVar2[3];
        if (pfVar2[3] <= fVar7) {
          fVar10 = fVar7;
        }
        pfVar2[3] = fVar10;
        fVar6 = (((((fVar5 - fVar4) * local_res8[0] + fVar4) - fVar14) * local_res8[0] + fVar14) -
                fVar6) * local_res8[0] + fVar6;
        fVar14 = *pfVar2;
        if (fVar6 <= *pfVar2) {
          fVar14 = fVar6;
        }
        *pfVar2 = fVar14;
        fVar14 = pfVar2[2];
        if (pfVar2[2] <= fVar6) {
          fVar14 = fVar6;
        }
        pfVar2[2] = fVar14;
      }
      fVar14 = param_4[5];
      fVar4 = param_4[3];
      fVar10 = param_4[1];
      FUN_143332460(fVar9,fVar10,fVar4,fVar14,&param_5,local_res8);
      if ((0.0 < param_5._0_4_) && (param_5._0_4_ < 1.0)) {
        fVar13 = *param_4;
        fVar5 = param_4[2];
        fVar8 = (fVar13 - fVar11) * param_5._0_4_ + fVar11;
        fVar6 = (fVar4 - fVar10) * param_5._0_4_ + fVar10;
        fVar13 = (fVar5 - fVar13) * param_5._0_4_ + fVar13;
        fVar7 = (fVar10 - fVar9) * param_5._0_4_ + fVar9;
        fVar8 = (fVar13 - fVar8) * param_5._0_4_ + fVar8;
        fVar10 = param_4[4];
        fVar7 = (fVar6 - fVar7) * param_5._0_4_ + fVar7;
        fVar7 = (((((fVar14 - fVar4) * param_5._0_4_ + fVar4) - fVar6) * param_5._0_4_ + fVar6) -
                fVar7) * param_5._0_4_ + fVar7;
        fVar14 = pfVar2[1];
        if (fVar7 <= pfVar2[1]) {
          fVar14 = fVar7;
        }
        pfVar2[1] = fVar14;
        fVar14 = pfVar2[3];
        if (pfVar2[3] <= fVar7) {
          fVar14 = fVar7;
        }
        pfVar2[3] = fVar14;
        fVar8 = (((((fVar10 - fVar5) * param_5._0_4_ + fVar5) - fVar13) * param_5._0_4_ + fVar13) -
                fVar8) * param_5._0_4_ + fVar8;
        fVar14 = *pfVar2;
        if (fVar8 <= *pfVar2) {
          fVar14 = fVar8;
        }
        *pfVar2 = fVar14;
        fVar14 = pfVar2[2];
        if (pfVar2[2] <= fVar8) {
          fVar14 = fVar8;
        }
        pfVar2[2] = fVar14;
      }
      if ((0.0 < local_res8[0]) && (local_res8[0] < 1.0)) {
        fVar14 = *param_4;
        fVar4 = param_4[2];
        fVar10 = param_4[1];
        fVar13 = param_4[3];
        fVar11 = (fVar14 - fVar11) * local_res8[0] + fVar11;
        fVar9 = (fVar10 - fVar9) * local_res8[0] + fVar9;
        fVar10 = (fVar13 - fVar10) * local_res8[0] + fVar10;
        fVar14 = (fVar4 - fVar14) * local_res8[0] + fVar14;
        fVar9 = (fVar10 - fVar9) * local_res8[0] + fVar9;
        fVar11 = (fVar14 - fVar11) * local_res8[0] + fVar11;
        fVar5 = param_4[4];
        fVar9 = (((((param_4[5] - fVar13) * local_res8[0] + fVar13) - fVar10) * local_res8[0] +
                 fVar10) - fVar9) * local_res8[0] + fVar9;
        fVar10 = pfVar2[1];
        if (fVar9 <= pfVar2[1]) {
          fVar10 = fVar9;
        }
        pfVar2[1] = fVar10;
        fVar10 = pfVar2[3];
        if (pfVar2[3] <= fVar9) {
          fVar10 = fVar9;
        }
        pfVar2[3] = fVar10;
        fVar11 = (((((fVar5 - fVar4) * local_res8[0] + fVar4) - fVar14) * local_res8[0] + fVar14) -
                 fVar11) * local_res8[0] + fVar11;
        fVar14 = *pfVar2;
        if (fVar11 <= *pfVar2) {
          fVar14 = fVar11;
        }
        *pfVar2 = fVar14;
        fVar14 = pfVar2[2];
        if (pfVar2[2] <= fVar11) {
          fVar14 = fVar11;
        }
        pfVar2[2] = fVar14;
      }
      fVar11 = param_4[5];
      fVar14 = param_4[4];
      fVar9 = *pfVar2;
      if (fVar14 <= *pfVar2) {
        fVar9 = fVar14;
      }
      fVar4 = pfVar2[1];
      if (fVar11 <= pfVar2[1]) {
        fVar4 = fVar11;
      }
      *pfVar2 = fVar9;
      pfVar2[1] = fVar4;
      fVar9 = pfVar2[2];
      if (pfVar2[2] <= fVar14) {
        fVar9 = fVar14;
      }
      fVar14 = pfVar2[3];
      if (pfVar2[3] <= fVar11) {
        fVar14 = fVar11;
      }
      pfVar2[2] = fVar9;
      pfVar2[3] = fVar14;
      fVar11 = param_4[4];
      fVar9 = param_4[5];
    }
    iVar3 = (**(code **)(*param_1 + 0x48))(param_1,param_3,param_4);
  }
  return;
}



// FUNCTION 143330810 FUN_143330810 body=1946 status=ok
// SIG undefined FUN_143330810(void)

void FUN_143330810(longlong *param_1,float param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
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
  
  lVar3 = param_1[3];
  uVar2 = *(uint *)((longlong)param_1 + 0x14);
  fVar24 = 0.62;
  if (0.62 <= param_2) {
    fVar24 = param_2;
  }
  fVar15 = _guard_xfg_dispatch_icall_nop(fVar24);
  fVar24 = fVar24 * 0.5;
  uVar14 = (int)fVar15 + 3;
  if (2.5 <= fVar24) {
    fVar24 = fVar24 * 0.98711 - 0.9633;
  }
  else {
    fVar24 = _guard_xfg_dispatch_icall_nop(1.0 - fVar24 * 0.26891);
    fVar24 = 3.97156 - fVar24 * 4.14554;
  }
  fVar21 = fVar24 * fVar24;
  lVar10 = (longlong)(int)(uVar2 + uVar14 * 2);
  fVar17 = fVar21 * fVar24 * 1.26661;
  fVar23 = fVar21 * fVar24 * 0.422205;
  fVar22 = fVar21 * -1.4281 - fVar17;
  fVar17 = fVar21 * 2.85619 + fVar24 * 2.44413 + fVar17;
  fVar24 = 1.0 / (fVar21 * 1.4281 + fVar24 * 2.44413 + 1.57825 + fVar23);
  fVar21 = fVar17 * fVar24;
  fVar17 = 1.0 - (fVar22 + fVar17 + fVar23) * fVar24;
  fVar22 = fVar22 * fVar24;
  fVar23 = fVar23 * fVar24;
  FUN_143333610(param_3,lVar10);
  FUN_143333590(param_4,lVar10);
  iVar9 = 0;
  lVar10 = (longlong)(int)uVar14;
  if (0 < (int)lVar3) {
    lVar1 = (longlong)(int)uVar2 + -1 + lVar10 * 2;
    do {
      lVar13 = 0;
      fVar24 = 0.0;
      fVar19 = 0.0;
      fVar18 = 0.0;
      if ((0 < (int)uVar14) && (3 < uVar14)) {
        plVar11 = (longlong *)*param_3;
        if ((param_3 < plVar11) ||
           ((longlong *)((longlong)plVar11 + (longlong)((int)fVar15 + 2) * 4) < param_3)) {
          uVar4 = uVar14 & 0x80000003;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
          }
          do {
            lVar13 = lVar13 + 4;
          } while (lVar13 < (int)(uVar14 - uVar4));
          iVar6 = (uVar14 - uVar4) + 3;
          for (lVar5 = ((longlong)((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) & 0xfffffffffffffffU)
                       << 2; lVar5 != 0; lVar5 = lVar5 + -1) {
            *(undefined4 *)plVar11 = 0;
            plVar11 = (longlong *)((longlong)plVar11 + 4);
          }
        }
      }
      uVar7 = 0;
      if (lVar13 < lVar10) {
        if (3 < lVar10 - lVar13) {
          do {
            *(undefined4 *)(*param_3 + lVar13 * 4) = 0;
            *(undefined4 *)(*param_3 + 4 + lVar13 * 4) = 0;
            *(undefined4 *)(*param_3 + 8 + lVar13 * 4) = 0;
            *(undefined4 *)(*param_3 + 0xc + lVar13 * 4) = 0;
            lVar13 = lVar13 + 4;
          } while (lVar13 < lVar10 + -3);
        }
        for (; lVar13 < lVar10; lVar13 = lVar13 + 1) {
          *(undefined4 *)(*param_3 + lVar13 * 4) = 0;
        }
      }
      uVar12 = uVar7;
      if (3 < (int)uVar2) {
        lVar13 = lVar10 * 4;
        uVar12 = (ulonglong)((uVar2 - 4 >> 2) + 1) << 2;
        do {
          iVar6 = (int)uVar7;
          fVar16 = (float)*(byte *)((ulonglong)
                                    (uint)(((int)param_1[2] + iVar9) * (int)param_1[1] +
                                           *(int *)((longlong)param_1 + 0xc) + iVar6) + *param_1) *
                   fVar17 + fVar24 * fVar21 + fVar19 * fVar22 + fVar18 * fVar23;
          *(float *)(lVar13 + *param_3) = fVar16;
          fVar18 = (float)*(byte *)((ulonglong)
                                    (uint)(((int)param_1[2] + iVar9) * (int)param_1[1] + 1 +
                                           *(int *)((longlong)param_1 + 0xc) + iVar6) + *param_1) *
                   fVar17 + fVar16 * fVar21 + fVar24 * fVar22 + fVar19 * fVar23;
          *(float *)(lVar13 + 4 + *param_3) = fVar18;
          fVar19 = (float)*(byte *)((ulonglong)
                                    (uint)(((int)param_1[2] + iVar9) * (int)param_1[1] + 2 +
                                           *(int *)((longlong)param_1 + 0xc) + iVar6) + *param_1) *
                   fVar17 + fVar18 * fVar21 + fVar16 * fVar22 + fVar24 * fVar23;
          *(float *)(lVar13 + 8 + *param_3) = fVar19;
          fVar24 = (float)*(byte *)((ulonglong)
                                    (uint)(((int)param_1[2] + iVar9) * (int)param_1[1] + 3 +
                                           *(int *)((longlong)param_1 + 0xc) + iVar6) + *param_1) *
                   fVar17 + fVar19 * fVar21 + fVar18 * fVar22 + fVar16 * fVar23;
          uVar7 = (ulonglong)(iVar6 + 4U);
          *(float *)(lVar13 + 0xc + *param_3) = fVar24;
          lVar13 = lVar13 + 0x10;
        } while ((int)(iVar6 + 4U) < (int)(uVar2 - 3));
      }
      if ((int)uVar7 < (int)uVar2) {
        lVar13 = (uVar12 + lVar10) * 4;
        fVar16 = fVar18;
        fVar20 = fVar19;
        do {
          fVar19 = fVar24;
          fVar18 = fVar20;
          iVar6 = (int)uVar7;
          uVar4 = iVar6 + 1;
          uVar7 = (ulonglong)uVar4;
          fVar24 = (float)*(byte *)((ulonglong)
                                    (uint)(((int)param_1[2] + iVar9) * (int)param_1[1] +
                                           *(int *)((longlong)param_1 + 0xc) + iVar6) + *param_1) *
                   fVar17 + fVar19 * fVar21 + fVar18 * fVar22 + fVar16 * fVar23;
          *(float *)(lVar13 + *param_3) = fVar24;
          lVar13 = lVar13 + 4;
          fVar16 = fVar18;
          fVar20 = fVar19;
        } while ((int)uVar4 < (int)uVar2);
      }
      lVar13 = 0;
      if (3 < lVar10) {
        lVar5 = ((int)uVar2 + lVar10) * 4;
        lVar8 = (lVar10 - 4U >> 2) + 1;
        lVar13 = lVar8 * 4;
        do {
          fVar16 = fVar19 * fVar22 + fVar24 * fVar21 + fVar18 * fVar23;
          *(float *)(lVar5 + *param_3) = fVar16;
          fVar18 = fVar24 * fVar22 + fVar16 * fVar21 + fVar19 * fVar23;
          *(float *)(lVar5 + 4 + *param_3) = fVar18;
          fVar19 = fVar16 * fVar22 + fVar18 * fVar21 + fVar24 * fVar23;
          *(float *)(lVar5 + 8 + *param_3) = fVar19;
          fVar24 = fVar18 * fVar22 + fVar19 * fVar21 + fVar16 * fVar23;
          *(float *)(lVar5 + 0xc + *param_3) = fVar24;
          lVar5 = lVar5 + 0x10;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (lVar13 < lVar10) {
        lVar5 = ((int)uVar2 + lVar10 + lVar13) * 4;
        lVar13 = lVar10 - lVar13;
        do {
          fVar20 = fVar19;
          fVar16 = fVar20 * fVar22 + fVar24 * fVar21 + fVar18 * fVar23;
          *(float *)(lVar5 + *param_3) = fVar16;
          lVar5 = lVar5 + 4;
          lVar13 = lVar13 + -1;
          fVar19 = fVar24;
          fVar18 = fVar20;
          fVar24 = fVar16;
        } while (lVar13 != 0);
      }
      fVar24 = 0.0;
      fVar19 = 0.0;
      fVar18 = 0.0;
      if (lVar10 <= lVar1) {
        lVar13 = lVar1;
        if (3 < (lVar1 - lVar10) + 1) {
          do {
            fVar16 = fVar17 * *(float *)(*param_3 + lVar13 * 4) + fVar18 * fVar21 + fVar19 * fVar22
                     + fVar24 * fVar23;
            *(char *)(lVar13 + *param_4) = (char)(longlong)(fVar16 + 0.5);
            fVar24 = fVar17 * *(float *)(*param_3 + -4 + lVar13 * 4) + fVar16 * fVar21 +
                     fVar18 * fVar22 + fVar19 * fVar23;
            *(char *)(lVar13 + -1 + *param_4) = (char)(longlong)(fVar24 + 0.5);
            fVar19 = fVar17 * *(float *)(*param_3 + -8 + lVar13 * 4) + fVar24 * fVar21 +
                     fVar16 * fVar22 + fVar18 * fVar23;
            *(char *)(lVar13 + -2 + *param_4) = (char)(longlong)(fVar19 + 0.5);
            fVar18 = fVar17 * *(float *)(*param_3 + -0xc + lVar13 * 4) + fVar19 * fVar21 +
                     fVar24 * fVar22 + fVar16 * fVar23;
            *(char *)(lVar13 + -3 + *param_4) = (char)(longlong)(fVar18 + 0.5);
            lVar13 = lVar13 + -4;
          } while (lVar10 + 3 <= lVar13);
        }
        for (; fVar16 = fVar18, lVar10 <= lVar13; lVar13 = lVar13 + -1) {
          fVar18 = fVar17 * *(float *)(*param_3 + lVar13 * 4) + fVar16 * fVar21 + fVar19 * fVar22 +
                   fVar24 * fVar23;
          *(char *)(lVar13 + *param_4) = (char)(longlong)(fVar18 + 0.5);
          fVar24 = fVar19;
          fVar19 = fVar16;
        }
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((ulonglong)(uint)(((int)param_1[2] + iVar9) * (int)param_1[1]) +
                          (ulonglong)*(uint *)((longlong)param_1 + 0xc) + *param_1),
                 (void *)(*param_4 + lVar10),(ulonglong)uVar2);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)lVar3);
  }
  return;
}



// FUNCTION 143330fb0 FUN_143330fb0 body=1928 status=ok
// SIG undefined FUN_143330fb0(void)

void FUN_143330fb0(longlong *param_1,float param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
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
  
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  iVar4 = (int)param_1[3];
  lVar19 = (longlong)iVar4;
  fVar29 = 0.62;
  if (0.62 <= param_2) {
    fVar29 = param_2;
  }
  fVar20 = _guard_xfg_dispatch_icall_nop(fVar29);
  fVar29 = fVar29 * 0.5;
  uVar11 = (int)fVar20 + 3;
  if (2.5 <= fVar29) {
    fVar29 = fVar29 * 0.98711 - 0.9633;
  }
  else {
    fVar29 = _guard_xfg_dispatch_icall_nop(1.0 - fVar29 * 0.26891);
    fVar29 = 3.97156 - fVar29 * 4.14554;
  }
  fVar26 = fVar29 * fVar29;
  lVar13 = (longlong)(int)(iVar4 + uVar11 * 2);
  fVar22 = fVar26 * fVar29 * 1.26661;
  fVar28 = fVar26 * fVar29 * 0.422205;
  fVar27 = fVar26 * -1.4281 - fVar22;
  fVar22 = fVar26 * 2.85619 + fVar29 * 2.44413 + fVar22;
  fVar29 = 1.0 / (fVar26 * 1.4281 + fVar29 * 2.44413 + 1.57825 + fVar28);
  fVar26 = fVar22 * fVar29;
  fVar22 = 1.0 - (fVar27 + fVar22 + fVar28) * fVar29;
  fVar27 = fVar27 * fVar29;
  fVar28 = fVar28 * fVar29;
  FUN_143333610(param_3,lVar13);
  FUN_143333590(param_4,lVar13);
  uVar14 = 0;
  lVar13 = (longlong)(int)uVar11;
  if (0 < iVar3) {
    lVar1 = lVar19 + -1 + lVar13 * 2;
    do {
      lVar17 = 0;
      fVar29 = 0.0;
      fVar24 = 0.0;
      fVar23 = 0.0;
      if ((0 < (int)uVar11) && (3 < uVar11)) {
        plVar15 = (longlong *)*param_3;
        if ((param_3 < plVar15) ||
           ((longlong *)((longlong)plVar15 + (longlong)((int)fVar20 + 2) * 4) < param_3)) {
          uVar5 = uVar11 & 0x80000003;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
          }
          do {
            lVar17 = lVar17 + 4;
          } while (lVar17 < (int)(uVar11 - uVar5));
          iVar18 = (uVar11 - uVar5) + 3;
          for (lVar6 = ((longlong)((int)(iVar18 + (iVar18 >> 0x1f & 3U)) >> 2) & 0xfffffffffffffffU)
                       << 2; lVar6 != 0; lVar6 = lVar6 + -1) {
            *(undefined4 *)plVar15 = 0;
            plVar15 = (longlong *)((longlong)plVar15 + 4);
          }
        }
      }
      uVar8 = 0;
      if (lVar17 < lVar13) {
        if (3 < lVar13 - lVar17) {
          do {
            *(undefined4 *)(*param_3 + lVar17 * 4) = 0;
            *(undefined4 *)(*param_3 + 4 + lVar17 * 4) = 0;
            *(undefined4 *)(*param_3 + 8 + lVar17 * 4) = 0;
            *(undefined4 *)(*param_3 + 0xc + lVar17 * 4) = 0;
            lVar17 = lVar17 + 4;
          } while (lVar17 < lVar13 + -3);
        }
        for (; lVar17 < lVar13; lVar17 = lVar17 + 1) {
          *(undefined4 *)(*param_3 + lVar17 * 4) = 0;
        }
      }
      iVar18 = (int)uVar14;
      uVar16 = uVar8;
      if (3 < iVar4) {
        lVar17 = lVar13 * 4;
        uVar16 = (ulonglong)((iVar4 - 4U >> 2) + 1) << 2;
        do {
          iVar12 = (int)uVar8;
          fVar21 = (float)*(byte *)((ulonglong)
                                    (uint)(((int)param_1[2] + iVar12) * (int)param_1[1] +
                                           *(int *)((longlong)param_1 + 0xc) + iVar18) + *param_1) *
                   fVar22 + fVar29 * fVar26 + fVar24 * fVar27 + fVar23 * fVar28;
          *(float *)(lVar17 + *param_3) = fVar21;
          fVar23 = (float)*(byte *)((ulonglong)
                                    (uint)(((int)param_1[2] + 1 + iVar12) * (int)param_1[1] +
                                           *(int *)((longlong)param_1 + 0xc) + iVar18) + *param_1) *
                   fVar22 + fVar21 * fVar26 + fVar29 * fVar27 + fVar24 * fVar28;
          *(float *)(lVar17 + 4 + *param_3) = fVar23;
          fVar24 = (float)*(byte *)((ulonglong)
                                    (uint)(((int)param_1[2] + 2 + iVar12) * (int)param_1[1] +
                                           *(int *)((longlong)param_1 + 0xc) + iVar18) + *param_1) *
                   fVar22 + fVar23 * fVar26 + fVar21 * fVar27 + fVar29 * fVar28;
          *(float *)(lVar17 + 8 + *param_3) = fVar24;
          fVar29 = (float)*(byte *)((ulonglong)
                                    (uint)(((int)param_1[2] + 3 + iVar12) * (int)param_1[1] +
                                           *(int *)((longlong)param_1 + 0xc) + iVar18) + *param_1) *
                   fVar22 + fVar24 * fVar26 + fVar23 * fVar27 + fVar21 * fVar28;
          uVar8 = (ulonglong)(iVar12 + 4U);
          *(float *)(lVar17 + 0xc + *param_3) = fVar29;
          lVar17 = lVar17 + 0x10;
        } while ((int)(iVar12 + 4U) < iVar4 + -3);
      }
      if ((int)uVar8 < iVar4) {
        lVar17 = (uVar16 + lVar13) * 4;
        fVar21 = fVar23;
        fVar25 = fVar24;
        do {
          fVar24 = fVar29;
          fVar23 = fVar25;
          iVar12 = (int)uVar8;
          uVar5 = iVar12 + 1;
          uVar8 = (ulonglong)uVar5;
          fVar29 = (float)*(byte *)((ulonglong)
                                    (uint)(((int)param_1[2] + iVar12) * (int)param_1[1] +
                                           *(int *)((longlong)param_1 + 0xc) + iVar18) + *param_1) *
                   fVar22 + fVar24 * fVar26 + fVar23 * fVar27 + fVar21 * fVar28;
          *(float *)(lVar17 + *param_3) = fVar29;
          lVar17 = lVar17 + 4;
          fVar21 = fVar23;
          fVar25 = fVar24;
        } while ((int)uVar5 < iVar4);
      }
      lVar17 = 0;
      if (3 < lVar13) {
        lVar6 = (lVar13 + lVar19) * 4;
        lVar9 = (lVar13 - 4U >> 2) + 1;
        lVar17 = lVar9 * 4;
        do {
          fVar21 = fVar24 * fVar27 + fVar29 * fVar26 + fVar23 * fVar28;
          *(float *)(lVar6 + *param_3) = fVar21;
          fVar23 = fVar29 * fVar27 + fVar21 * fVar26 + fVar24 * fVar28;
          *(float *)(lVar6 + 4 + *param_3) = fVar23;
          fVar24 = fVar21 * fVar27 + fVar23 * fVar26 + fVar29 * fVar28;
          *(float *)(lVar6 + 8 + *param_3) = fVar24;
          fVar29 = fVar23 * fVar27 + fVar24 * fVar26 + fVar21 * fVar28;
          *(float *)(lVar6 + 0xc + *param_3) = fVar29;
          lVar6 = lVar6 + 0x10;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (lVar17 < lVar13) {
        lVar6 = (lVar13 + lVar19 + lVar17) * 4;
        lVar17 = lVar13 - lVar17;
        do {
          fVar25 = fVar24;
          fVar21 = fVar25 * fVar27 + fVar29 * fVar26 + fVar23 * fVar28;
          *(float *)(lVar6 + *param_3) = fVar21;
          lVar6 = lVar6 + 4;
          lVar17 = lVar17 + -1;
          fVar24 = fVar29;
          fVar23 = fVar25;
          fVar29 = fVar21;
        } while (lVar17 != 0);
      }
      fVar29 = 0.0;
      fVar24 = 0.0;
      fVar23 = 0.0;
      if (lVar13 <= lVar1) {
        lVar17 = lVar1;
        if (3 < (lVar1 - lVar13) + 1) {
          do {
            fVar21 = fVar22 * *(float *)(*param_3 + lVar17 * 4) + fVar23 * fVar26 + fVar24 * fVar27
                     + fVar29 * fVar28;
            *(char *)(lVar17 + *param_4) = (char)(longlong)(fVar21 + 0.5);
            fVar29 = fVar22 * *(float *)(*param_3 + -4 + lVar17 * 4) + fVar21 * fVar26 +
                     fVar23 * fVar27 + fVar24 * fVar28;
            *(char *)(lVar17 + -1 + *param_4) = (char)(longlong)(fVar29 + 0.5);
            fVar24 = fVar22 * *(float *)(*param_3 + -8 + lVar17 * 4) + fVar29 * fVar26 +
                     fVar21 * fVar27 + fVar23 * fVar28;
            *(char *)(lVar17 + -2 + *param_4) = (char)(longlong)(fVar24 + 0.5);
            fVar23 = fVar22 * *(float *)(*param_3 + -0xc + lVar17 * 4) + fVar24 * fVar26 +
                     fVar29 * fVar27 + fVar21 * fVar28;
            *(char *)(lVar17 + -3 + *param_4) = (char)(longlong)(fVar23 + 0.5);
            lVar17 = lVar17 + -4;
          } while (lVar13 + 3 <= lVar17);
        }
        for (; fVar21 = fVar23, lVar13 <= lVar17; lVar17 = lVar17 + -1) {
          fVar23 = fVar22 * *(float *)(*param_3 + lVar17 * 4) + fVar21 * fVar26 + fVar24 * fVar27 +
                   fVar29 * fVar28;
          *(char *)(lVar17 + *param_4) = (char)(longlong)(fVar23 + 0.5);
          fVar29 = fVar24;
          fVar24 = fVar21;
        }
      }
      puVar10 = (undefined1 *)(*param_4 + lVar13);
      puVar7 = (undefined1 *)
               ((ulonglong)(uint)((int)param_1[2] * (int)param_1[1]) +
                (ulonglong)*(uint *)((longlong)param_1 + 0xc) + uVar14 + *param_1);
      iVar12 = iVar4;
      do {
        uVar2 = *puVar10;
        puVar10 = puVar10 + 1;
        *puVar7 = uVar2;
        puVar7 = puVar7 + *(uint *)(param_1 + 1);
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      uVar14 = (ulonglong)(iVar18 + 1U);
    } while ((int)(iVar18 + 1U) < iVar3);
  }
  return;
}



// FUNCTION 143331740 FUN_143331740 body=304 status=ok
// SIG undefined FUN_143331740(void)

ulonglong FUN_143331740(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar2 = *param_2;
  uVar6 = ((ulonglong)(*(ushort *)(uVar2 + 0x46) ^ *(ushort *)(uVar2 + 0x44)) ^
           (ulonglong)*(byte *)(uVar2 + 0x43) ^ (ulonglong)*(byte *)(uVar2 + 0x42) ^
           (ulonglong)*(ushort *)(uVar2 + 0x40) ^ *(ulonglong *)(uVar2 + 0x38) >> 6 ^
          *(ulonglong *)(uVar2 + 0x38)) & *(ulonglong *)(lVar1 + 8);
  uVar4 = uVar6 * 3;
  puVar8 = (ulonglong *)(lVar1 + 0x10 + uVar6 * 0x18);
  if ((*(longlong *)(lVar1 + 0x10 + uVar6 * 0x18) != -2) && (puVar8[1] == uVar6)) {
    uVar5 = 0xffffffffffffffff;
    uVar7 = uVar6;
    while( true ) {
      if ((puVar8[1] == uVar6) && (puVar8[2] == uVar2)) {
        uVar2 = *puVar8;
        if (uVar6 == uVar7) {
          if (uVar2 != 0xffffffffffffffff) {
            lVar1 = lVar1 + uVar2 * 0x18;
            if ((RefCountImpl *)puVar8[2] != (RefCountImpl *)0x0) {
              Scaleform::RefCountImpl::Release((RefCountImpl *)puVar8[2]);
            }
            *puVar8 = 0xfffffffffffffffe;
            FUN_1432ef2c0(puVar8,lVar1 + 0x10);
            puVar8 = (ulonglong *)(lVar1 + 0x10);
          }
        }
        else {
          *(ulonglong *)(lVar1 + 0x10 + uVar5 * 0x18) = uVar2;
        }
        if ((RefCountImpl *)puVar8[2] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)puVar8[2]);
        }
        *puVar8 = 0xfffffffffffffffe;
        param_1 = (longlong *)*param_1;
        *param_1 = *param_1 + -1;
        return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
      uVar3 = *puVar8;
      if (uVar3 == 0xffffffffffffffff) break;
      uVar4 = uVar3 * 3;
      puVar8 = (ulonglong *)(lVar1 + 0x10 + uVar3 * 0x18);
      uVar5 = uVar7;
      uVar7 = uVar3;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 143331870 FUN_143331870 body=466 status=ok
// SIG undefined FUN_143331870(void)

longlong FUN_143331870(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  RefCountImpl *pRVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_1433318c6;
    lVar10 = plVar3[1] * 2 + 2;
  }
  FUN_143335bf0(param_1,param_2,lVar10);
LAB_1433318c6:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  lVar10 = lVar4 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar5 == -2) {
    pRVar6 = (RefCountImpl *)*param_3;
    if (pRVar6 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(pRVar6);
    }
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    if (pRVar6 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(pRVar6);
    }
    *(RefCountImpl **)(lVar10 + 0x20) = pRVar6;
    if (pRVar6 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar6);
    }
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar3[1];
      lVar2 = lVar4 + uVar9 * 0x18;
    } while (*(longlong *)(lVar4 + 0x10 + uVar9 * 0x18) != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      if (*(RefCountImpl **)(lVar10 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar10 + 0x20));
      }
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      pRVar6 = (RefCountImpl *)*param_3;
      if (pRVar6 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar6);
      }
      if (*(RefCountImpl **)(lVar10 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar10 + 0x20));
      }
      *(RefCountImpl **)(lVar10 + 0x20) = pRVar6;
      *(ulonglong *)(lVar10 + 0x10) = uVar9;
    }
    else {
      lVar1 = *(ulonglong *)(lVar10 + 0x18) * 3 + 2;
      uVar7 = *(ulonglong *)(lVar4 + lVar1 * 8);
      while (puVar8 = (ulonglong *)(lVar4 + lVar1 * 8), uVar7 != param_4) {
        lVar1 = *puVar8 * 3 + 2;
        uVar7 = *(ulonglong *)(lVar4 + lVar1 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      if (*(RefCountImpl **)(lVar10 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar10 + 0x20));
      }
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      *puVar8 = uVar9;
      pRVar6 = (RefCountImpl *)*param_3;
      if (pRVar6 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar6);
      }
      if (*(RefCountImpl **)(lVar10 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar10 + 0x20));
      }
      *(RefCountImpl **)(lVar10 + 0x20) = pRVar6;
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  return lVar10 + 0x20;
}



// FUNCTION 143331a50 FUN_143331a50 body=412 status=ok
// SIG undefined FUN_143331a50(void)

longlong FUN_143331a50(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  
  FUN_1433322c0();
  plVar4 = (longlong *)*param_1;
  *plVar4 = *plVar4 + 1;
  param_4 = param_4 & plVar4[1];
  lVar5 = *param_1;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x18);
  lVar2 = lVar5 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    if ((RefCountImpl *)*param_3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_3);
    }
    *(undefined8 *)(lVar2 + 0x20) = *param_3;
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar4[1];
      lVar3 = lVar5 + uVar9 * 0x18;
    } while (*(longlong *)(lVar5 + 0x10 + uVar9 * 0x18) != -2);
    if (*(ulonglong *)(lVar2 + 0x18) == param_4) {
      *(longlong *)(lVar3 + 0x10) = lVar6;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      if (*(RefCountImpl **)(lVar2 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar2 + 0x20));
      }
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
      if ((RefCountImpl *)*param_3 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_3);
      }
      if (*(RefCountImpl **)(lVar2 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar2 + 0x20));
      }
      *(undefined8 *)(lVar2 + 0x20) = *param_3;
      *(ulonglong *)(lVar2 + 0x10) = uVar9;
    }
    else {
      lVar1 = *(ulonglong *)(lVar2 + 0x18) * 3 + 2;
      uVar7 = *(ulonglong *)(lVar5 + lVar1 * 8);
      while (puVar8 = (ulonglong *)(lVar5 + lVar1 * 8), uVar7 != param_4) {
        lVar1 = *puVar8 * 3 + 2;
        uVar7 = *(ulonglong *)(lVar5 + lVar1 * 8);
      }
      *(longlong *)(lVar3 + 0x10) = lVar6;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      if (*(RefCountImpl **)(lVar2 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(lVar2 + 0x20));
      }
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
      *puVar8 = uVar9;
      if ((RefCountImpl *)*param_3 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_3);
      }
      if (*(RefCountImpl **)(lVar2 + 0x20) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar2 + 0x20));
      }
      *(undefined8 *)(lVar2 + 0x20) = *param_3;
      *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar2 + 0x18) = param_4;
  return lVar2 + 0x20;
}



// FUNCTION 143331bf0 FUN_143331bf0 body=124 status=ok
// SIG undefined FUN_143331bf0(void)

undefined8 * FUN_143331bf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b00c18;
  FUN_1432bdc50(param_1 + 2,0);
  lVar2 = 2;
  puVar1 = param_1 + 8;
  do {
    *puVar1 = puVar1;
    puVar1[1] = puVar1;
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  return param_1;
}



// FUNCTION 143331c70 FUN_143331c70 body=244 status=ok
// SIG undefined FUN_143331c70(void)

longlong FUN_143331c70(longlong param_1,float param_2,float param_3,float param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = 0;
  fVar4 = 1.0 / (param_3 + param_3 + param_2 + param_4 + param_4);
  puVar1 = (undefined1 *)(param_1 + 0x100);
  do {
    fVar5 = (float)uVar2;
    fVar3 = _guard_xfg_dispatch_icall_nop(fVar5 * param_2 * fVar4);
    puVar1[-0x100] = (char)(longlong)fVar3;
    fVar3 = _guard_xfg_dispatch_icall_nop(fVar5 * param_3 * fVar4);
    *puVar1 = (char)(longlong)fVar3;
    fVar3 = _guard_xfg_dispatch_icall_nop(fVar5 * param_4 * fVar4);
    uVar2 = uVar2 + 1;
    puVar1[0x100] = (char)(longlong)fVar3;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 0x100);
  return param_1;
}



// FUNCTION 143331d70 FUN_143331d70 body=134 status=ok
// SIG undefined FUN_143331d70(void)

void FUN_143331d70(longlong *param_1)

{
  longlong lVar1;
  RefCountImpl *this;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    lVar3 = 0;
    lVar2 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar3) != -2) {
        this = *(RefCountImpl **)(lVar1 + 0x20 + lVar3);
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this);
        }
        *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0xfffffffffffffffe;
      }
      lVar3 = lVar3 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143331e00 FUN_143331e00 body=274 status=ok
// SIG undefined FUN_143331e00(void)

void FUN_143331e00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0xfe0);
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 8) + 1;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x10 + lVar1) != -2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x108) + 0x10 + lVar1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x108));
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xf0));
  lVar1 = *(longlong *)(param_1 + 200);
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x1fc0);
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x10))();
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x3398);
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  return;
}



// FUNCTION 143331f20 FUN_143331f20 body=71 status=ok
// SIG undefined FUN_143331f20(void)

longlong * FUN_143331f20(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  FUN_143333590(param_1,param_2[1]);
  uVar1 = 0;
  if (param_1[1] != 0) {
    do {
      *(undefined1 *)(uVar1 + *param_1) = *(undefined1 *)(uVar1 + *param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (ulonglong)param_1[1]);
  }
  return param_1;
}



// FUNCTION 143331f90 FUN_143331f90 body=43 status=ok
// SIG undefined FUN_143331f90(void)

undefined8 * FUN_143331f90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af3848;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 143331fc0 FUN_143331fc0 body=116 status=ok
// SIG undefined FUN_143331fc0(void)

RefCountImplCore * FUN_143331fc0(RefCountImplCore *param_1,ulonglong param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b00c18;
  FUN_1433977c0();
  Scaleform::Lock::~Lock(param_1 + 0x10);
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 143332040 FUN_143332040 body=89 status=ok
// SIG undefined FUN_143332040(void)

undefined8 FUN_143332040(undefined8 param_1,ulonglong param_2)

{
  FUN_14332a920();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1a98);
  }
  return param_1;
}



// FUNCTION 1433320a0 FUN_1433320a0 body=109 status=ok
// SIG undefined FUN_1433320a0(void)

RefCountNTSImplCore * FUN_1433320a0(RefCountNTSImplCore *param_1,uint param_2)

{
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 143332110 FUN_143332110 body=127 status=ok
// SIG undefined FUN_143332110(void)

RefCountImplCore * FUN_143332110(RefCountImplCore *param_1,uint param_2)

{
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x60));
  FUN_1432ef960(param_1 + 0x48);
  FUN_1432ef860(param_1 + 0x30);
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 143332190 FUN_143332190 body=89 status=ok
// SIG undefined FUN_143332190(void)

undefined8 FUN_143332190(undefined8 param_1,ulonglong param_2)

{
  FUN_1432caa70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1433321f0 FUN_1433321f0 body=43 status=ok
// SIG undefined FUN_1433321f0(void)

undefined8 * FUN_1433321f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af86a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143332220 FUN_143332220 body=89 status=ok
// SIG undefined FUN_143332220(void)

undefined8 FUN_143332220(undefined8 param_1,ulonglong param_2)

{
  FUN_1433be960();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1433322c0 FUN_1433322c0 body=67 status=ok
// SIG undefined FUN_1433322c0(void)

void FUN_1433322c0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_143335bf0(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_143335bf0(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 143332310 Clear body=55 status=ok
// SIG undefined Clear(void)

void Scaleform::Render::GlyphShape::Clear(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x68) != 0) &&
     ((*(ulonglong *)(param_1 + 0x70) & 0xfffffffffffffffe) != 0)) {
    FUN_143333390(param_1 + 0x60,param_1 + 0x60,0);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 143332350 ClearAndRelease body=129 status=ok
// SIG undefined ClearAndRelease(void)

void Scaleform::ArrayPagedBase<unsigned_int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned_int,2>_>::
     ClearAndRelease(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar1 = (undefined8 *)
             (*(longlong *)(param_1 + 0x20) + (*(longlong *)(param_1 + 0x10) + -1) * 8);
    do {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar1);
      puVar1 = puVar1 + -1;
    } while (*(longlong *)(param_1 + 0x10) != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 1433323e0 FUN_1433323e0 body=125 status=ok
// SIG undefined FUN_1433323e0(void)

void FUN_1433323e0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *(undefined8 *)(param_1 + 0x10);
  local_10 = *(undefined4 *)(param_1 + 0x2c);
  if ((*(int *)(param_2 + 0xc) != *(int *)(param_2 + 4)) ||
     (*(int *)(param_2 + 0x10) != *(int *)(param_2 + 8))) {
    iVar2 = *(int *)(param_2 + 4) - *(int *)(param_2 + 0xc);
    iVar1 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x10);
    if (iVar1 == 0) {
      FUN_1433337c0(&local_18,iVar2);
    }
    else if (iVar2 == 0) {
      FUN_143335930(&local_18,iVar1);
    }
    else {
      FUN_1433339f0(&local_18,iVar2,iVar1);
    }
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + iVar2;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + iVar1;
  }
  return;
}



// FUNCTION 143332460 FUN_143332460 body=287 status=ok
// SIG undefined FUN_143332460(void)

void FUN_143332460(float param_1,float param_2,float param_3,float param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *param_5 = -1.0;
  *param_6 = -1.0;
  fVar3 = ((param_4 - param_3 * 3.0) + param_2 * 3.0) - param_1;
  fVar2 = (param_3 - (param_2 + param_2)) + param_1;
  if (ABS(fVar3) <= 0.001) {
    if (0.001 < ABS(fVar2)) {
      *param_5 = (param_2 - param_1) / (fVar2 * -2.0);
    }
  }
  else {
    fVar1 = fVar2 * fVar2 - (param_2 - param_1) * fVar3;
    if (fVar1 <= 0.0) {
      if (fVar1 == 0.0) {
        *param_5 = -(fVar2 / fVar3);
      }
    }
    else {
      fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
      *param_5 = -((fVar2 - fVar1) / fVar3);
      *param_6 = -((fVar1 + fVar2) / fVar3);
    }
  }
  return;
}



// FUNCTION 143332580 FUN_143332580 body=94 status=ok
// SIG undefined FUN_143332580(void)

void FUN_143332580(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  uVar2 = plVar1[1] + 1;
  if (uVar2 < (ulonglong)plVar1[1]) {
    uVar3 = uVar2;
    if ((ulonglong)plVar1[2] >> 1 <= uVar2) goto LAB_1433325c7;
  }
  else {
    if (uVar2 <= (ulonglong)plVar1[2]) goto LAB_1433325c7;
    uVar3 = (uVar2 >> 2) + uVar2;
  }
  FUN_143333390(plVar1,plVar1,uVar3);
LAB_1433325c7:
  plVar1[1] = uVar2;
  *(undefined1 *)(*plVar1 + -1 + uVar2) = 0xf;
  return;
}



// FUNCTION 1433325e0 FUN_1433325e0 body=94 status=ok
// SIG undefined FUN_1433325e0(void)

void FUN_1433325e0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  uVar2 = plVar1[1] + 1;
  if (uVar2 < (ulonglong)plVar1[1]) {
    uVar3 = uVar2;
    if ((ulonglong)plVar1[2] >> 1 <= uVar2) goto LAB_143332627;
  }
  else {
    if (uVar2 <= (ulonglong)plVar1[2]) goto LAB_143332627;
    uVar3 = (uVar2 >> 2) + uVar2;
  }
  FUN_143333390(plVar1,plVar1,uVar3);
LAB_143332627:
  plVar1[1] = uVar2;
  *(undefined1 *)(*plVar1 + -1 + uVar2) = 0;
  return;
}



// FUNCTION 143332650 FUN_143332650 body=259 status=ok
// SIG undefined FUN_143332650(void)

void FUN_143332650(longlong param_1,uint param_2,undefined4 *param_3)

{
  RefCountImpl *pRVar1;
  undefined4 *puVar2;
  
  if (*(ulonglong *)(param_1 + 0x38) < (ulonglong)param_2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b643d8) {
      _Init_thread_header(&DAT_146b643d8);
      if (DAT_146b643d8 == -1) {
        DAT_146b643c8 = 0;
        DAT_146b643d0 = (RefCountImpl *)0x0;
        atexit((_func_5014 *)&LAB_143ec4860);
        _Init_thread_footer(&DAT_146b643d8);
      }
    }
    *param_3 = DAT_146b643c8;
    if (DAT_146b643d0 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(DAT_146b643d0);
    }
    pRVar1 = DAT_146b643d0;
    if (*(RefCountImpl **)(param_3 + 2) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_3 + 2));
      *(RefCountImpl **)(param_3 + 2) = DAT_146b643d0;
      return;
    }
  }
  else {
    puVar2 = (undefined4 *)((ulonglong)(param_2 - 1) * 0x10 + *(longlong *)(param_1 + 0x30));
    *param_3 = *puVar2;
    if (*(RefCountImpl **)(puVar2 + 2) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(puVar2 + 2));
    }
    if (*(RefCountImpl **)(param_3 + 2) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_3 + 2));
    }
    pRVar1 = *(RefCountImpl **)(puVar2 + 2);
  }
  *(RefCountImpl **)(param_3 + 2) = pRVar1;
  return;
}



// FUNCTION 143332770 FUN_143332770 body=345 status=ok
// SIG undefined FUN_143332770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143332770(longlong param_1,uint param_2,undefined4 *param_3)

{
  if (*(ulonglong *)(param_1 + 0x50) < (ulonglong)param_2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b643c0) {
      _Init_thread_header(&DAT_146b643c0);
      if (DAT_146b643c0 == -1) {
        _DAT_146b64398 = 0;
        _DAT_146b643a0 = 0;
        DAT_146b643a8 = 0;
        DAT_146b643b0 = (RefCountImpl *)0x0;
        DAT_146b643b8 = (RefCountImpl *)0x0;
        atexit(FUN_143ec4880);
        _Init_thread_footer(&DAT_146b643c0);
      }
    }
    *param_3 = DAT_146b64398;
    param_3[1] = DAT_146b6439c;
    param_3[2] = DAT_146b643a0;
    param_3[3] = DAT_146b643a4;
    param_3[4] = DAT_146b643a8;
    if (DAT_146b643b0 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(DAT_146b643b0);
    }
    if (*(RefCountImpl **)(param_3 + 6) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_3 + 6));
    }
    *(RefCountImpl **)(param_3 + 6) = DAT_146b643b0;
    if (DAT_146b643b8 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(DAT_146b643b8);
    }
    if (*(RefCountImpl **)(param_3 + 8) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_3 + 8));
    }
    *(RefCountImpl **)(param_3 + 8) = DAT_146b643b8;
    return;
  }
  FUN_1432efc80(param_3,*(longlong *)(param_1 + 0x48) + (ulonglong)(param_2 - 1) * 0x28);
  return;
}



// FUNCTION 1433328e0 FUN_1433328e0 body=1668 status=ok
// SIG undefined FUN_1433328e0(void)

int FUN_1433328e0(undefined8 *param_1,uint param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte local_17 [4];
  byte local_13;
  undefined2 local_12;
  byte local_10;
  byte local_f;
  byte local_e;
  byte local_d;
  byte local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  
  pbVar4 = local_17;
  lVar3 = *(longlong *)*param_1;
  bVar1 = *(byte *)((ulonglong)param_2 + lVar3);
  bVar2 = (&DAT_145b00990)[bVar1 & 0xf];
  if (bVar2 != 0) {
    uVar5 = (ulonglong)bVar2;
    do {
      param_2 = param_2 + 1;
      *pbVar4 = *(byte *)(lVar3 + (ulonglong)param_2);
      pbVar4 = pbVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  switch(bVar1 & 0xf) {
  case 0:
    *param_3 = 0;
    break;
  case 1:
    *param_3 = 0;
    param_3[1] = (((int)(char)local_17[2] << 8 | (int)(char)local_17[1]) << 8 | (uint)local_17[0])
                 << 4 | (uint)(bVar1 >> 4);
    return bVar2 + 1;
  case 2:
    *param_3 = 1;
    break;
  case 3:
    *param_3 = 1;
    param_3[1] = (((int)(char)local_17[2] << 8 | (int)(char)local_17[1]) << 8 | (uint)local_17[0])
                 << 4 | (uint)(bVar1 >> 4);
    return bVar2 + 1;
  case 4:
    *param_3 = 2;
    param_3[1] = (int)((uint)(bVar1 >> 2) | (int)(char)(local_17[0] << 6)) >> 2;
    param_3[2] = (int)(char)local_17[0] >> 2;
    return bVar2 + 1;
  case 5:
    *param_3 = 2;
    param_3[2] = (uint)(local_17[0] >> 6) | (int)(char)local_17[1] << 2;
    param_3[1] = (int)(char)(local_17[0] << 2) << 2 | (uint)(bVar1 >> 4);
    return bVar2 + 1;
  case 6:
    *param_3 = 2;
    param_3[1] = ((int)(char)(local_17[1] << 6) << 2 | (uint)local_17[0]) << 4 | (uint)(bVar1 >> 4);
    param_3[2] = (uint)(local_17[1] >> 2) | (int)(char)local_17[2] << 6;
    return bVar2 + 1;
  case 7:
    *param_3 = 2;
    param_3[1] = ((((int)(char)(local_17[3] << 6) << 2 | (uint)local_17[2]) << 8 | (uint)local_17[1]
                  ) << 8 | (uint)local_17[0]) << 4 | (uint)(bVar1 >> 4);
    param_3[2] = (int)CONCAT21(local_12,local_13) << 6 | (uint)(local_17[3] >> 2);
    return bVar2 + 1;
  case 8:
    *param_3 = 3;
    param_3[1] = (int)((uint)(bVar1 >> 1) | (int)(char)(local_17[0] << 7)) >> 3;
    param_3[2] = (int)(char)(local_17[0] << 2) >> 3;
    param_3[4] = (int)(char)local_17[1] >> 3;
    param_3[3] = (int)((uint)(local_17[0] >> 3) | (int)(char)(local_17[1] << 5)) >> 3;
    return bVar2 + 1;
  case 9:
    param_3[1] = (int)((uint)(bVar1 >> 3) | (int)(char)(local_17[0] << 5)) >> 1;
    param_3[4] = (int)(char)local_17[2] >> 1;
    *param_3 = 3;
    param_3[2] = (int)((uint)(local_17[0] >> 2) | (int)(char)(local_17[1] << 6)) >> 1;
    param_3[3] = (int)((uint)(local_17[1] >> 1) | (int)(char)(local_17[2] << 7)) >> 1;
    return bVar2 + 1;
  case 10:
    *param_3 = 3;
    param_3[1] = (char)(local_17[0] << 3) * 2 | (uint)(bVar1 >> 4);
    param_3[2] = (char)(local_17[1] << 2) * 2 | (uint)(local_17[0] >> 5);
    param_3[3] = (uint)(local_17[1] >> 6) | (char)(local_17[2] * '\x02') * 2;
    param_3[4] = (uint)(local_17[2] >> 7) | (char)local_17[3] * 2;
    return bVar2 + 1;
  case 0xb:
    *param_3 = 3;
    param_3[1] = (int)(char)(local_17[0] * '\x02') << 3 | (uint)(bVar1 >> 4);
    param_3[2] = ((int)(char)(local_17[2] << 6) << 2 | (uint)local_17[1]) * 2 |
                 (uint)(local_17[0] >> 7);
    param_3[3] = (int)(char)(local_17[3] << 3) << 3 | (uint)(local_17[2] >> 2);
    param_3[4] = (uint)(local_17[3] >> 5) | (int)(char)local_13 << 3;
    return bVar2 + 1;
  case 0xc:
    *param_3 = 3;
    param_3[1] = ((char)(local_17[1] << 7) * 2 | (uint)local_17[0]) << 4 | (uint)(bVar1 >> 4);
    param_3[2] = (int)(char)(local_17[2] << 2) << 5 | (uint)(local_17[1] >> 1);
    param_3[3] = ((int)(char)(local_13 << 5) << 3 | (uint)local_17[3]) << 2 |
                 (uint)(local_17[2] >> 6);
    param_3[4] = (uint)(local_13 >> 3) | (int)(char)(byte)local_12 << 5;
    return bVar2 + 1;
  case 0xd:
    *param_3 = 3;
    param_3[1] = ((int)(char)(local_17[1] << 5) << 3 | (uint)local_17[0]) << 4 | (uint)(bVar1 >> 4);
    param_3[2] = ((int)(char)(local_17[3] << 6) << 2 | (uint)local_17[2]) << 5 |
                 (uint)(local_17[1] >> 3);
    param_3[3] = ((char)((byte)local_12 << 7) * 2 | (uint)local_13) << 6 | (uint)(local_17[3] >> 2);
    param_3[4] = (uint)((byte)local_12 >> 1) | (int)(char)local_12._1_1_ << 7;
    return bVar2 + 1;
  case 0xe:
    *param_3 = 3;
    param_3[1] = ((((int)(char)(local_17[3] << 5) << 3 | (uint)local_17[2]) << 8 | (uint)local_17[1]
                  ) << 8 | (uint)local_17[0]) << 4 | (uint)(bVar1 >> 4);
    param_3[2] = ((((int)(char)(local_10 << 6) << 2 | (uint)local_12._1_1_) << 8 |
                  (uint)(byte)local_12) << 8 | (uint)local_13) << 5 | (uint)(local_17[3] >> 3);
    param_3[3] = ((((char)(local_c << 7) * 2 | (uint)local_d) << 8 | (uint)local_e) << 8 |
                 (uint)local_f) << 6 | (uint)(local_10 >> 2);
    param_3[4] = (int)CONCAT21(CONCAT11(local_9,local_a),local_b) << 7 | (uint)(local_c >> 1);
    return bVar2 + 1;
  case 0xf:
    *param_3 = 4;
    return bVar2 + 1;
  }
  param_3[1] = (uint)(bVar1 >> 4) | (int)(char)local_17[0] << 4;
  return bVar2 + 1;
}



// FUNCTION 143332fc0 FUN_143332fc0 body=309 status=ok
// SIG undefined FUN_143332fc0(void)

undefined8 FUN_143332fc0(longlong param_1,int *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar3 = FUN_1433328e0(param_1,*param_2,&local_28);
  *param_2 = *param_2 + iVar3;
  if (local_28 == 0) {
    param_2[3] = param_2[3] + local_24;
  }
  else if (local_28 == 1) {
    param_2[4] = param_2[4] + local_24;
  }
  else {
    if (local_28 != 2) {
      if (local_28 != 3) {
        return 0;
      }
      iVar3 = param_2[4];
      iVar1 = param_2[3];
      iVar2 = param_2[4];
      *param_3 = (float)(local_24 + param_2[3]) * *(float *)(param_1 + 8);
      param_3[1] = (float)(local_20 + iVar3) * *(float *)(param_1 + 8);
      param_3[2] = (float)(local_1c + iVar1) * *(float *)(param_1 + 8);
      param_3[3] = (float)(local_18 + iVar2) * *(float *)(param_1 + 8);
      param_2[3] = local_1c + iVar1;
      param_2[4] = local_18 + iVar2;
      return 2;
    }
    param_2[3] = param_2[3] + local_24;
    param_2[4] = param_2[4] + local_20;
  }
  *param_3 = (float)param_2[3] * *(float *)(param_1 + 8);
  param_3[1] = (float)param_2[4] * *(float *)(param_1 + 8);
  return 1;
}



// FUNCTION 143333110 FUN_143333110 body=266 status=ok
// SIG undefined FUN_143333110(void)

uint FUN_143333110(undefined8 *param_1,uint *param_2,float *param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = *(byte *)((ulonglong)*param_2 + *(longlong *)*param_1);
  if ((bVar1 & 1) == 0) {
    uVar3 = (uint)(bVar1 >> 1);
    iVar2 = 1;
  }
  else {
    uVar3 = (uint)*(byte *)((ulonglong)(*param_2 + 1) + *(longlong *)*param_1) << 7 |
            (uint)(bVar1 >> 1);
    iVar2 = 2;
  }
  *param_2 = *param_2 + iVar2;
  if (uVar3 != 0) {
    iVar2 = FUN_1433332e0(param_1,*param_2,param_4);
    *param_2 = *param_2 + iVar2;
    iVar2 = FUN_1433332e0(param_1,*param_2,param_4 + 4);
    *param_2 = *param_2 + iVar2;
    iVar2 = FUN_1433332e0(param_1,*param_2,param_4 + 8);
    *param_2 = *param_2 + iVar2;
    iVar2 = FUN_143333220(param_1,*param_2,param_2 + 1);
    *param_2 = *param_2 + iVar2;
    iVar2 = FUN_143333220(param_1,*param_2,param_2 + 2);
    *param_2 = *param_2 + iVar2;
    param_2[3] = param_2[1];
    param_2[4] = param_2[2];
    *param_3 = (float)(int)param_2[1] * *(float *)(param_1 + 1);
    param_3[1] = (float)(int)param_2[2] * *(float *)(param_1 + 1);
  }
  return uVar3;
}



// FUNCTION 143333220 FUN_143333220 body=179 status=ok
// SIG undefined FUN_143333220(void)

undefined8 FUN_143333220(undefined8 *param_1,uint param_2,uint *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)*param_1;
  uVar2 = (int)*(char *)((ulonglong)param_2 + lVar1) & 3;
  uVar3 = (int)*(char *)((ulonglong)param_2 + lVar1) >> 2;
  if (uVar2 == 0) {
    *param_3 = uVar3;
    return 1;
  }
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      *param_3 = (int)CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)(param_2 + 3) + lVar1),
                                        *(undefined1 *)((ulonglong)(param_2 + 2) + lVar1)),
                               *(undefined1 *)((ulonglong)(param_2 + 1) + lVar1)) << 6 |
                 uVar3 & 0x3f;
      return 4;
    }
    *param_3 = (int)CONCAT11(*(undefined1 *)((ulonglong)(param_2 + 2) + lVar1),
                             *(undefined1 *)((ulonglong)(param_2 + 1) + lVar1)) << 6 | uVar3 & 0x3f;
    return 3;
  }
  *param_3 = (int)*(char *)((ulonglong)(param_2 + 1) + lVar1) << 6 | uVar3 & 0x3f;
  return 2;
}



// FUNCTION 1433332e0 FUN_1433332e0 body=171 status=ok
// SIG undefined FUN_1433332e0(void)

undefined8 FUN_1433332e0(undefined8 *param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)*param_1;
  bVar1 = *(byte *)((ulonglong)param_2 + lVar2);
  if ((bVar1 & 3) == 0) {
    *param_3 = (uint)(bVar1 >> 2);
    return 1;
  }
  if ((bVar1 & 3) != 1) {
    if ((bVar1 & 3) != 2) {
      *param_3 = (uint)CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)(param_2 + 3) + lVar2),
                                         *(undefined1 *)((ulonglong)(param_2 + 2) + lVar2)),
                                *(undefined1 *)((ulonglong)(param_2 + 1) + lVar2)) << 6 |
                 (uint)(bVar1 >> 2);
      return 4;
    }
    *param_3 = (uint)CONCAT11(*(undefined1 *)((ulonglong)(param_2 + 2) + lVar2),
                              *(undefined1 *)((ulonglong)(param_2 + 1) + lVar2)) << 6 |
               (uint)(bVar1 >> 2);
    return 3;
  }
  *param_3 = (uint)*(byte *)((ulonglong)(param_2 + 1) + lVar2) << 6 | (uint)(bVar1 >> 2);
  return 2;
}



// FUNCTION 143333390 FUN_143333390 body=160 status=ok
// SIG undefined FUN_143333390(void)

void FUN_143333390(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 143333430 FUN_143333430 body=165 status=ok
// SIG undefined FUN_143333430(void)

void FUN_143333430(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 4,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1433334e0 FUN_1433334e0 body=170 status=ok
// SIG undefined FUN_1433334e0(void)

void FUN_1433334e0(undefined8 *param_1,ulonglong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined4 local_res8 [2];
  
  if (param_2 <= (ulonglong)param_1[2]) {
    param_1[1] = 0;
    return;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  param_3 = param_2 + param_3;
  param_1[2] = param_3;
  if (param_3 != 0) {
    local_res8[0] = 2;
    uVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,param_3 * 0x38,local_res8);
    *param_1 = uVar1;
    param_1[1] = 0;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 143333590 FUN_143333590 body=114 status=ok
// SIG undefined FUN_143333590(void)

void FUN_143333590(longlong param_1,ulonglong param_2)

{
  if (param_2 < *(ulonglong *)(param_1 + 8)) {
    if (param_2 < *(ulonglong *)(param_1 + 0x10) >> 1) {
      FUN_143333390(param_1,param_1,param_2);
      *(ulonglong *)(param_1 + 8) = param_2;
      return;
    }
  }
  else if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_143333390(param_1,param_1,(param_2 >> 2) + param_2);
    *(ulonglong *)(param_1 + 8) = param_2;
    return;
  }
  *(ulonglong *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 143333610 FUN_143333610 body=114 status=ok
// SIG undefined FUN_143333610(void)

void FUN_143333610(longlong param_1,ulonglong param_2)

{
  if (param_2 < *(ulonglong *)(param_1 + 8)) {
    if (param_2 < *(ulonglong *)(param_1 + 0x10) >> 1) {
      FUN_143333430(param_1,param_1,param_2);
      *(ulonglong *)(param_1 + 8) = param_2;
      return;
    }
  }
  else if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_143333430(param_1,param_1,(param_2 >> 2) + param_2);
    *(ulonglong *)(param_1 + 8) = param_2;
    return;
  }
  *(ulonglong *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 143333690 FUN_143333690 body=171 status=ok
// SIG undefined FUN_143333690(void)

void FUN_143333690(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,float param_7,float param_8)

{
  float fVar1;
  undefined8 local_28;
  float local_20;
  
  local_28 = *(undefined8 *)(param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x2c);
  local_20 = fVar1;
  FUN_1433354a0(&local_28,param_3);
  FUN_1433355d0(&local_28,param_4);
  FUN_1433355d0(&local_28,param_5);
  FUN_1433355d0(&local_28,param_6);
  *(int *)(param_2 + 0xc) = (int)(fVar1 * param_7);
  *(int *)(param_2 + 4) = (int)(fVar1 * param_7);
  FUN_143335130(&local_28);
  *(int *)(param_2 + 0x10) = (int)(fVar1 * param_8);
  *(int *)(param_2 + 8) = (int)(fVar1 * param_8);
  FUN_143335130(&local_28);
  return;
}



// FUNCTION 143333750 WriteEndPath body=98 status=ok
// SIG undefined WriteEndPath(void)

undefined8
Scaleform::Render::
PathDataEncoder<Scaleform::ArrayLH_POD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
WriteEndPath(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  param_1 = (longlong *)*param_1;
  uVar1 = param_1[1] + 1;
  if (uVar1 < (ulonglong)param_1[1]) {
    uVar2 = uVar1;
    if ((ulonglong)param_1[2] >> 1 <= uVar1) goto LAB_143333796;
  }
  else {
    if (uVar1 <= (ulonglong)param_1[2]) goto LAB_143333796;
    uVar2 = (uVar1 >> 2) + uVar1;
  }
  FUN_143333390(param_1,param_1,uVar2);
LAB_143333796:
  param_1[1] = uVar1;
  *(undefined1 *)(*param_1 + -1 + uVar1) = 0xf;
  return 1;
}



// FUNCTION 1433337c0 FUN_1433337c0 body=550 status=ok
// SIG undefined FUN_1433337c0(void)

undefined8 FUN_1433337c0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  byte bVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  bVar3 = (char)param_2 << 4;
  uVar4 = (undefined1)(param_2 >> 4);
  if (0xfff < param_2 + 0x800U) {
    plVar1 = (longlong *)*param_1;
    uVar2 = plVar1[1] + 1;
    if (uVar2 < (ulonglong)plVar1[1]) {
      uVar5 = uVar2;
      if (uVar2 < (ulonglong)plVar1[2] >> 1) {
LAB_1433338ca:
        FUN_143333390(plVar1,plVar1,uVar5);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar2) {
      uVar5 = (uVar2 >> 2) + uVar2;
      goto LAB_1433338ca;
    }
    plVar1[1] = uVar2;
    *(byte *)(*plVar1 + -1 + uVar2) = bVar3 | 1;
    plVar1 = (longlong *)*param_1;
    uVar2 = plVar1[1] + 1;
    if (uVar2 < (ulonglong)plVar1[1]) {
      uVar5 = uVar2;
      if (uVar2 < (ulonglong)plVar1[2] >> 1) {
LAB_143333917:
        FUN_143333390(plVar1,plVar1,uVar5);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar2) {
      uVar5 = (uVar2 >> 2) + uVar2;
      goto LAB_143333917;
    }
    plVar1[1] = uVar2;
    *(undefined1 *)(*plVar1 + -1 + uVar2) = uVar4;
    plVar1 = (longlong *)*param_1;
    uVar2 = plVar1[1] + 1;
    if (uVar2 < (ulonglong)plVar1[1]) {
      uVar5 = uVar2;
      if (uVar2 < (ulonglong)plVar1[2] >> 1) {
LAB_143333964:
        FUN_143333390(plVar1,plVar1,uVar5);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar2) {
      uVar5 = (uVar2 >> 2) + uVar2;
      goto LAB_143333964;
    }
    plVar1[1] = uVar2;
    *(char *)(*plVar1 + -1 + uVar2) = (char)(param_2 >> 0xc);
    param_1 = (longlong *)*param_1;
    uVar2 = param_1[1] + 1;
    if (uVar2 < (ulonglong)param_1[1]) {
      uVar5 = uVar2;
      if ((ulonglong)param_1[2] >> 1 <= uVar2) goto LAB_1433339ba;
    }
    else {
      if (uVar2 <= (ulonglong)param_1[2]) goto LAB_1433339ba;
      uVar5 = (uVar2 >> 2) + uVar2;
    }
    FUN_143333390(param_1,param_1,uVar5);
LAB_1433339ba:
    param_1[1] = uVar2;
    *(char *)(*param_1 + -1 + uVar2) = (char)(param_2 >> 0x14);
    return 3;
  }
  plVar1 = (longlong *)*param_1;
  uVar2 = plVar1[1] + 1;
  if (uVar2 < (ulonglong)plVar1[1]) {
    uVar5 = uVar2;
    if (uVar2 < (ulonglong)plVar1[2] >> 1) {
LAB_143333829:
      FUN_143333390(plVar1,plVar1,uVar5);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar2) {
    uVar5 = (uVar2 >> 2) + uVar2;
    goto LAB_143333829;
  }
  plVar1[1] = uVar2;
  *(byte *)(*plVar1 + -1 + uVar2) = bVar3;
  param_1 = (longlong *)*param_1;
  uVar2 = param_1[1] + 1;
  if (uVar2 < (ulonglong)param_1[1]) {
    uVar5 = uVar2;
    if ((ulonglong)param_1[2] >> 1 <= uVar2) goto LAB_14333387f;
  }
  else {
    if (uVar2 <= (ulonglong)param_1[2]) goto LAB_14333387f;
    uVar5 = (uVar2 >> 2) + uVar2;
  }
  FUN_143333390(param_1,param_1,uVar5);
LAB_14333387f:
  param_1[1] = uVar2;
  *(undefined1 *)(*param_1 + -1 + uVar2) = uVar4;
  return 2;
}



// FUNCTION 1433339f0 FUN_1433339f0 body=1564 status=ok
// SIG undefined FUN_1433339f0(void)

undefined8 FUN_1433339f0(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  byte bVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  byte bVar5;
  
  cVar3 = (char)param_3;
  cVar4 = (char)param_2;
  bVar5 = (byte)(param_2 >> 4);
  if ((0x3f < param_2 + 0x20U) || (0x3f < param_3 + 0x20U)) {
    if ((0x3ff < param_2 + 0x200U) || (0x3ff < param_3 + 0x200U)) {
      uVar8 = (undefined1)(param_3 >> 6);
      bVar6 = (byte)(param_2 >> 0xc);
      if ((0x3fff < param_2 + 0x2000U) || (0x3fff < param_3 + 0x2000U)) {
        plVar1 = (longlong *)*param_1;
        uVar7 = plVar1[1] + 1;
        if (uVar7 < (ulonglong)plVar1[1]) {
          uVar9 = uVar7;
          if (uVar7 < (ulonglong)plVar1[2] >> 1) {
LAB_143333daf:
            FUN_143333390(plVar1,plVar1,uVar9);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar7) {
          uVar9 = (uVar7 >> 2) + uVar7;
          goto LAB_143333daf;
        }
        plVar1[1] = uVar7;
        *(byte *)(*plVar1 + -1 + uVar7) = cVar4 << 4 | 7;
        plVar1 = (longlong *)*param_1;
        uVar7 = plVar1[1] + 1;
        if (uVar7 < (ulonglong)plVar1[1]) {
          uVar9 = uVar7;
          if (uVar7 < (ulonglong)plVar1[2] >> 1) {
LAB_143333dfe:
            FUN_143333390(plVar1,plVar1,uVar9);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar7) {
          uVar9 = (uVar7 >> 2) + uVar7;
          goto LAB_143333dfe;
        }
        plVar1[1] = uVar7;
        *(byte *)(*plVar1 + -1 + uVar7) = bVar5;
        plVar1 = (longlong *)*param_1;
        uVar7 = plVar1[1] + 1;
        if (uVar7 < (ulonglong)plVar1[1]) {
          uVar9 = uVar7;
          if (uVar7 < (ulonglong)plVar1[2] >> 1) {
LAB_143333e4d:
            FUN_143333390(plVar1,plVar1,uVar9);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar7) {
          uVar9 = (uVar7 >> 2) + uVar7;
          goto LAB_143333e4d;
        }
        plVar1[1] = uVar7;
        *(byte *)(*plVar1 + -1 + uVar7) = bVar6;
        plVar1 = (longlong *)*param_1;
        uVar7 = plVar1[1] + 1;
        if (uVar7 < (ulonglong)plVar1[1]) {
          uVar9 = uVar7;
          if (uVar7 < (ulonglong)plVar1[2] >> 1) {
LAB_143333e9c:
            FUN_143333390(plVar1,plVar1,uVar9);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar7) {
          uVar9 = (uVar7 >> 2) + uVar7;
          goto LAB_143333e9c;
        }
        plVar1[1] = uVar7;
        *(char *)(*plVar1 + -1 + uVar7) = (char)(param_2 >> 0x14);
        plVar1 = (longlong *)*param_1;
        uVar7 = plVar1[1] + 1;
        if (uVar7 < (ulonglong)plVar1[1]) {
          uVar9 = uVar7;
          if (uVar7 < (ulonglong)plVar1[2] >> 1) {
LAB_143333ef3:
            FUN_143333390(plVar1,plVar1,uVar9);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar7) {
          uVar9 = (uVar7 >> 2) + uVar7;
          goto LAB_143333ef3;
        }
        plVar1[1] = uVar7;
        *(byte *)(*plVar1 + -1 + uVar7) = (byte)(param_2 >> 0x1c) & 3 | cVar3 << 2;
        plVar1 = (longlong *)*param_1;
        uVar7 = plVar1[1] + 1;
        if (uVar7 < (ulonglong)plVar1[1]) {
          uVar9 = uVar7;
          if (uVar7 < (ulonglong)plVar1[2] >> 1) {
LAB_143333f3f:
            FUN_143333390(plVar1,plVar1,uVar9);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar7) {
          uVar9 = (uVar7 >> 2) + uVar7;
          goto LAB_143333f3f;
        }
        plVar1[1] = uVar7;
        *(undefined1 *)(*plVar1 + -1 + uVar7) = uVar8;
        plVar1 = (longlong *)*param_1;
        uVar7 = plVar1[1] + 1;
        if (uVar7 < (ulonglong)plVar1[1]) {
          uVar9 = uVar7;
          if (uVar7 < (ulonglong)plVar1[2] >> 1) {
LAB_143333f8c:
            FUN_143333390(plVar1,plVar1,uVar9);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar7) {
          uVar9 = (uVar7 >> 2) + uVar7;
          goto LAB_143333f8c;
        }
        plVar1[1] = uVar7;
        *(char *)(*plVar1 + -1 + uVar7) = (char)(param_3 >> 0xe);
        param_1 = (longlong *)*param_1;
        lVar2 = param_1[1];
        uVar7 = lVar2 + 1;
        if (uVar7 < (ulonglong)param_1[1]) {
          uVar9 = uVar7;
          if ((ulonglong)param_1[2] >> 1 <= uVar7) goto LAB_143333fe2;
        }
        else {
          if (uVar7 <= (ulonglong)param_1[2]) goto LAB_143333fe2;
          uVar9 = (uVar7 >> 2) + uVar7;
        }
        FUN_143333390(param_1,param_1,uVar9);
LAB_143333fe2:
        param_1[1] = uVar7;
        *(char *)(lVar2 + *param_1) = (char)(param_3 >> 0x16);
        return 8;
      }
      plVar1 = (longlong *)*param_1;
      uVar7 = plVar1[1] + 1;
      if (uVar7 < (ulonglong)plVar1[1]) {
        uVar9 = uVar7;
        if (uVar7 < (ulonglong)plVar1[2] >> 1) {
LAB_143333c61:
          FUN_143333390(plVar1,plVar1,uVar9);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar7) {
        uVar9 = (uVar7 >> 2) + uVar7;
        goto LAB_143333c61;
      }
      plVar1[1] = uVar7;
      *(byte *)(*plVar1 + -1 + uVar7) = cVar4 << 4 | 6;
      plVar1 = (longlong *)*param_1;
      uVar7 = plVar1[1] + 1;
      if (uVar7 < (ulonglong)plVar1[1]) {
        uVar9 = uVar7;
        if (uVar7 < (ulonglong)plVar1[2] >> 1) {
LAB_143333cb0:
          FUN_143333390(plVar1,plVar1,uVar9);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar7) {
        uVar9 = (uVar7 >> 2) + uVar7;
        goto LAB_143333cb0;
      }
      plVar1[1] = uVar7;
      *(byte *)(*plVar1 + -1 + uVar7) = bVar5;
      plVar1 = (longlong *)*param_1;
      uVar7 = plVar1[1] + 1;
      if (uVar7 < (ulonglong)plVar1[1]) {
        uVar9 = uVar7;
        if (uVar7 < (ulonglong)plVar1[2] >> 1) {
LAB_143333d07:
          FUN_143333390(plVar1,plVar1,uVar9);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar7) {
        uVar9 = (uVar7 >> 2) + uVar7;
        goto LAB_143333d07;
      }
      plVar1[1] = uVar7;
      *(byte *)(*plVar1 + -1 + uVar7) = bVar6 & 3 | cVar3 << 2;
      param_1 = (longlong *)*param_1;
      uVar7 = param_1[1] + 1;
      if (uVar7 < (ulonglong)param_1[1]) {
        uVar9 = uVar7;
        if ((ulonglong)param_1[2] >> 1 <= uVar7) goto LAB_143333d5c;
      }
      else {
        if (uVar7 <= (ulonglong)param_1[2]) goto LAB_143333d5c;
        uVar9 = (uVar7 >> 2) + uVar7;
      }
      FUN_143333390(param_1,param_1,uVar9);
LAB_143333d5c:
      param_1[1] = uVar7;
      *(undefined1 *)(*param_1 + -1 + uVar7) = uVar8;
      return 4;
    }
    plVar1 = (longlong *)*param_1;
    uVar7 = plVar1[1] + 1;
    if (uVar7 < (ulonglong)plVar1[1]) {
      uVar9 = uVar7;
      if (uVar7 < (ulonglong)plVar1[2] >> 1) {
LAB_143333b3c:
        FUN_143333390(plVar1,plVar1,uVar9);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar7) {
      uVar9 = (uVar7 >> 2) + uVar7;
      goto LAB_143333b3c;
    }
    plVar1[1] = uVar7;
    *(byte *)(*plVar1 + -1 + uVar7) = cVar4 << 4 | 5;
    plVar1 = (longlong *)*param_1;
    lVar2 = plVar1[1];
    uVar7 = lVar2 + 1;
    if (uVar7 < (ulonglong)plVar1[1]) {
      uVar9 = uVar7;
      if (uVar7 < (ulonglong)plVar1[2] >> 1) {
LAB_143333b95:
        FUN_143333390(plVar1,plVar1,uVar9);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar7) {
      uVar9 = (uVar7 >> 2) + uVar7;
      goto LAB_143333b95;
    }
    plVar1[1] = uVar7;
    *(byte *)(lVar2 + *plVar1) = cVar3 << 6 | bVar5 & 0x3f;
    param_1 = (longlong *)*param_1;
    lVar2 = param_1[1];
    uVar7 = lVar2 + 1;
    if (uVar7 < (ulonglong)param_1[1]) {
      uVar9 = uVar7;
      if ((ulonglong)param_1[2] >> 1 <= uVar7) goto LAB_143333beb;
    }
    else {
      if (uVar7 <= (ulonglong)param_1[2]) goto LAB_143333beb;
      uVar9 = (uVar7 >> 2) + uVar7;
    }
    FUN_143333390(param_1,param_1,uVar9);
LAB_143333beb:
    param_1[1] = uVar7;
    *(char *)(lVar2 + *param_1) = (char)(param_3 >> 2);
    return 3;
  }
  plVar1 = (longlong *)*param_1;
  uVar7 = plVar1[1] + 1;
  if (uVar7 < (ulonglong)plVar1[1]) {
    uVar9 = uVar7;
    if (uVar7 < (ulonglong)plVar1[2] >> 1) {
LAB_143333a66:
      FUN_143333390(plVar1,plVar1,uVar9);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar7) {
    uVar9 = (uVar7 >> 2) + uVar7;
    goto LAB_143333a66;
  }
  plVar1[1] = uVar7;
  *(byte *)(*plVar1 + -1 + uVar7) = cVar4 << 4 | 4;
  param_1 = (longlong *)*param_1;
  uVar7 = param_1[1] + 1;
  if (uVar7 < (ulonglong)param_1[1]) {
    uVar9 = uVar7;
    if ((ulonglong)param_1[2] >> 1 <= uVar7) goto LAB_143333ac6;
  }
  else {
    if (uVar7 <= (ulonglong)param_1[2]) goto LAB_143333ac6;
    uVar9 = (uVar7 >> 2) + uVar7;
  }
  FUN_143333390(param_1,param_1,uVar9);
LAB_143333ac6:
  param_1[1] = uVar7;
  *(byte *)(*param_1 + -1 + uVar7) = cVar3 << 2 | bVar5 & 3;
  return 2;
}



// FUNCTION 143334010 FUN_143334010 body=4371 status=ok
// SIG undefined FUN_143334010(void)

undefined8 FUN_143334010(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  byte bVar8;
  char cVar9;
  undefined1 uVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  byte bVar7;
  
  iVar4 = param_2;
  if (param_2 < param_3) {
    iVar4 = param_3;
  }
  iVar5 = param_2;
  if (param_3 < param_2) {
    iVar5 = param_3;
  }
  if (param_4 < iVar5) {
    iVar5 = param_4;
  }
  if (iVar4 < param_4) {
    iVar4 = param_4;
  }
  if (param_5 < iVar5) {
    iVar5 = param_5;
  }
  if (iVar4 < param_5) {
    iVar4 = param_5;
  }
  cVar6 = (char)param_2;
  cVar9 = (char)param_5;
  cVar11 = (char)param_3;
  bVar7 = (byte)(param_2 >> 4);
  cVar3 = (char)param_4;
  bVar13 = (byte)(param_4 >> 2);
  if ((iVar5 < -0x10) || (0xf < iVar4)) {
    bVar12 = (byte)(param_3 >> 5);
    bVar14 = (byte)(param_4 >> 6);
    if ((iVar5 < -0x40) || (0x3f < iVar4)) {
      if ((iVar5 < -0x100) || (0xff < iVar4)) {
        if ((iVar5 < -0x400) || (0x3ff < iVar4)) {
          bVar8 = (byte)(param_2 >> 0xc);
          if ((iVar5 < -0x1000) || (0xfff < iVar4)) {
            bVar13 = (byte)(param_3 >> 0xd);
            bVar15 = (byte)(param_4 >> 0xe);
            uVar10 = (undefined1)(param_5 >> 7);
            if ((iVar5 < -0x4000) || (0x3fff < iVar4)) {
              plVar1 = (longlong *)*param_1;
              uVar17 = plVar1[1] + 1;
              if (uVar17 < (ulonglong)plVar1[1]) {
                uVar16 = uVar17;
                if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334c36:
                  FUN_143333390(plVar1,plVar1,uVar16);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar17) {
                uVar16 = (uVar17 >> 2) + uVar17;
                goto LAB_143334c36;
              }
              plVar1[1] = uVar17;
              *(byte *)(*plVar1 + -1 + uVar17) = cVar6 << 4 | 0xe;
              plVar1 = (longlong *)*param_1;
              uVar17 = plVar1[1] + 1;
              if (uVar17 < (ulonglong)plVar1[1]) {
                uVar16 = uVar17;
                if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334c85:
                  FUN_143333390(plVar1,plVar1,uVar16);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar17) {
                uVar16 = (uVar17 >> 2) + uVar17;
                goto LAB_143334c85;
              }
              plVar1[1] = uVar17;
              *(byte *)(*plVar1 + -1 + uVar17) = bVar7;
              plVar1 = (longlong *)*param_1;
              uVar17 = plVar1[1] + 1;
              if (uVar17 < (ulonglong)plVar1[1]) {
                uVar16 = uVar17;
                if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334cd4:
                  FUN_143333390(plVar1,plVar1,uVar16);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar17) {
                uVar16 = (uVar17 >> 2) + uVar17;
                goto LAB_143334cd4;
              }
              plVar1[1] = uVar17;
              *(byte *)(*plVar1 + -1 + uVar17) = bVar8;
              plVar1 = (longlong *)*param_1;
              uVar17 = plVar1[1] + 1;
              if (uVar17 < (ulonglong)plVar1[1]) {
                uVar16 = uVar17;
                if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334d23:
                  FUN_143333390(plVar1,plVar1,uVar16);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar17) {
                uVar16 = (uVar17 >> 2) + uVar17;
                goto LAB_143334d23;
              }
              plVar1[1] = uVar17;
              *(char *)(*plVar1 + -1 + uVar17) = (char)(param_2 >> 0x14);
              plVar1 = (longlong *)*param_1;
              uVar17 = plVar1[1] + 1;
              if (uVar17 < (ulonglong)plVar1[1]) {
                uVar16 = uVar17;
                if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334d7a:
                  FUN_143333390(plVar1,plVar1,uVar16);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar17) {
                uVar16 = (uVar17 >> 2) + uVar17;
                goto LAB_143334d7a;
              }
              plVar1[1] = uVar17;
              *(byte *)(*plVar1 + -1 + uVar17) = (byte)(param_2 >> 0x1c) & 7 | cVar11 << 3;
              plVar1 = (longlong *)*param_1;
              uVar17 = plVar1[1] + 1;
              if (uVar17 < (ulonglong)plVar1[1]) {
                uVar16 = uVar17;
                if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334dc9:
                  FUN_143333390(plVar1,plVar1,uVar16);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar17) {
                uVar16 = (uVar17 >> 2) + uVar17;
                goto LAB_143334dc9;
              }
              plVar1[1] = uVar17;
              *(byte *)(*plVar1 + -1 + uVar17) = bVar12;
              plVar1 = (longlong *)*param_1;
              lVar2 = plVar1[1];
              uVar17 = lVar2 + 1;
              if (uVar17 < (ulonglong)plVar1[1]) {
                uVar16 = uVar17;
                if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334e18:
                  FUN_143333390(plVar1,plVar1,uVar16);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar17) {
                uVar16 = (uVar17 >> 2) + uVar17;
                goto LAB_143334e18;
              }
              plVar1[1] = uVar17;
              *(byte *)(lVar2 + *plVar1) = bVar13;
              plVar1 = (longlong *)*param_1;
              lVar2 = plVar1[1];
              uVar17 = lVar2 + 1;
              if (uVar17 < (ulonglong)plVar1[1]) {
                uVar16 = uVar17;
                if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334e67:
                  FUN_143333390(plVar1,plVar1,uVar16);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar17) {
                uVar16 = (uVar17 >> 2) + uVar17;
                goto LAB_143334e67;
              }
              plVar1[1] = uVar17;
              *(char *)(lVar2 + *plVar1) = (char)(param_3 >> 0x15);
              plVar1 = (longlong *)*param_1;
              uVar17 = plVar1[1] + 1;
              if (uVar17 < (ulonglong)plVar1[1]) {
                uVar16 = uVar17;
                if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334ec0:
                  FUN_143333390(plVar1,plVar1,uVar16);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar17) {
                uVar16 = (uVar17 >> 2) + uVar17;
                goto LAB_143334ec0;
              }
              plVar1[1] = uVar17;
              *(byte *)(*plVar1 + -1 + uVar17) = (byte)(param_3 >> 0x1d) & 3 | cVar3 << 2;
              plVar1 = (longlong *)*param_1;
              uVar17 = plVar1[1] + 1;
              if (uVar17 < (ulonglong)plVar1[1]) {
                uVar16 = uVar17;
                if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334f0f:
                  FUN_143333390(plVar1,plVar1,uVar16);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar17) {
                uVar16 = (uVar17 >> 2) + uVar17;
                goto LAB_143334f0f;
              }
              plVar1[1] = uVar17;
              *(byte *)(*plVar1 + -1 + uVar17) = bVar14;
              plVar1 = (longlong *)*param_1;
              uVar17 = plVar1[1] + 1;
              if (uVar17 < (ulonglong)plVar1[1]) {
                uVar16 = uVar17;
                if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334f5e:
                  FUN_143333390(plVar1,plVar1,uVar16);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar17) {
                uVar16 = (uVar17 >> 2) + uVar17;
                goto LAB_143334f5e;
              }
              plVar1[1] = uVar17;
              *(byte *)(*plVar1 + -1 + uVar17) = bVar15;
              plVar1 = (longlong *)*param_1;
              uVar17 = plVar1[1] + 1;
              if (uVar17 < (ulonglong)plVar1[1]) {
                uVar16 = uVar17;
                if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334fad:
                  FUN_143333390(plVar1,plVar1,uVar16);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar17) {
                uVar16 = (uVar17 >> 2) + uVar17;
                goto LAB_143334fad;
              }
              plVar1[1] = uVar17;
              *(char *)(*plVar1 + -1 + uVar17) = (char)(param_4 >> 0x16);
              plVar1 = (longlong *)*param_1;
              uVar17 = plVar1[1] + 1;
              if (uVar17 < (ulonglong)plVar1[1]) {
                uVar16 = uVar17;
                if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143335005:
                  FUN_143333390(plVar1,plVar1,uVar16);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar17) {
                uVar16 = (uVar17 >> 2) + uVar17;
                goto LAB_143335005;
              }
              plVar1[1] = uVar17;
              *(byte *)(*plVar1 + -1 + uVar17) = (byte)(param_4 >> 0x1e) & 1 | cVar9 * '\x02';
              plVar1 = (longlong *)*param_1;
              lVar2 = plVar1[1];
              uVar17 = lVar2 + 1;
              if (uVar17 < (ulonglong)plVar1[1]) {
                uVar16 = uVar17;
                if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143335052:
                  FUN_143333390(plVar1,plVar1,uVar16);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar17) {
                uVar16 = (uVar17 >> 2) + uVar17;
                goto LAB_143335052;
              }
              plVar1[1] = uVar17;
              *(undefined1 *)(lVar2 + *plVar1) = uVar10;
              plVar1 = (longlong *)*param_1;
              lVar2 = plVar1[1];
              uVar17 = lVar2 + 1;
              if (uVar17 < (ulonglong)plVar1[1]) {
                uVar16 = uVar17;
                if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_14333509f:
                  FUN_143333390(plVar1,plVar1,uVar16);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar17) {
                uVar16 = (uVar17 >> 2) + uVar17;
                goto LAB_14333509f;
              }
              plVar1[1] = uVar17;
              *(char *)(lVar2 + *plVar1) = (char)(param_5 >> 0xf);
              param_1 = (longlong *)*param_1;
              lVar2 = param_1[1];
              uVar17 = lVar2 + 1;
              if (uVar17 < (ulonglong)param_1[1]) {
                uVar16 = uVar17;
                if ((ulonglong)param_1[2] >> 1 <= uVar17) goto LAB_1433350f5;
              }
              else {
                if (uVar17 <= (ulonglong)param_1[2]) goto LAB_1433350f5;
                uVar16 = (uVar17 >> 2) + uVar17;
              }
              FUN_143333390(param_1,param_1,uVar16);
LAB_1433350f5:
              param_1[1] = uVar17;
              *(char *)(lVar2 + *param_1) = (char)(param_5 >> 0x17);
              return 0x10;
            }
            plVar1 = (longlong *)*param_1;
            lVar2 = plVar1[1];
            uVar17 = lVar2 + 1;
            if (uVar17 < (ulonglong)plVar1[1]) {
              uVar16 = uVar17;
              if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334996:
                FUN_143333390(plVar1,plVar1,uVar16);
              }
            }
            else if ((ulonglong)plVar1[2] < uVar17) {
              uVar16 = (uVar17 >> 2) + uVar17;
              goto LAB_143334996;
            }
            plVar1[1] = uVar17;
            *(byte *)(lVar2 + *plVar1) = cVar6 << 4 | 0xd;
            plVar1 = (longlong *)*param_1;
            lVar2 = plVar1[1];
            uVar17 = lVar2 + 1;
            if (uVar17 < (ulonglong)plVar1[1]) {
              uVar16 = uVar17;
              if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_1433349e5:
                FUN_143333390(plVar1,plVar1,uVar16);
              }
            }
            else if ((ulonglong)plVar1[2] < uVar17) {
              uVar16 = (uVar17 >> 2) + uVar17;
              goto LAB_1433349e5;
            }
            plVar1[1] = uVar17;
            *(byte *)(lVar2 + *plVar1) = bVar7;
            plVar1 = (longlong *)*param_1;
            lVar2 = plVar1[1];
            uVar17 = lVar2 + 1;
            if (uVar17 < (ulonglong)plVar1[1]) {
              uVar16 = uVar17;
              if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334a3c:
                FUN_143333390(plVar1,plVar1,uVar16);
              }
            }
            else if ((ulonglong)plVar1[2] < uVar17) {
              uVar16 = (uVar17 >> 2) + uVar17;
              goto LAB_143334a3c;
            }
            plVar1[1] = uVar17;
            *(byte *)(lVar2 + *plVar1) = bVar8 & 7 | cVar11 << 3;
            plVar1 = (longlong *)*param_1;
            lVar2 = plVar1[1];
            uVar17 = lVar2 + 1;
            if (uVar17 < (ulonglong)plVar1[1]) {
              uVar16 = uVar17;
              if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334a8b:
                FUN_143333390(plVar1,plVar1,uVar16);
              }
            }
            else if ((ulonglong)plVar1[2] < uVar17) {
              uVar16 = (uVar17 >> 2) + uVar17;
              goto LAB_143334a8b;
            }
            plVar1[1] = uVar17;
            *(byte *)(lVar2 + *plVar1) = bVar12;
            plVar1 = (longlong *)*param_1;
            lVar2 = plVar1[1];
            uVar17 = lVar2 + 1;
            if (uVar17 < (ulonglong)plVar1[1]) {
              uVar16 = uVar17;
              if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334ae5:
                FUN_143333390(plVar1,plVar1,uVar16);
              }
            }
            else if ((ulonglong)plVar1[2] < uVar17) {
              uVar16 = (uVar17 >> 2) + uVar17;
              goto LAB_143334ae5;
            }
            plVar1[1] = uVar17;
            *(byte *)(lVar2 + *plVar1) = cVar3 << 2 | bVar13 & 3;
            plVar1 = (longlong *)*param_1;
            lVar2 = plVar1[1];
            uVar17 = lVar2 + 1;
            if (uVar17 < (ulonglong)plVar1[1]) {
              uVar16 = uVar17;
              if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334b34:
                FUN_143333390(plVar1,plVar1,uVar16);
              }
            }
            else if ((ulonglong)plVar1[2] < uVar17) {
              uVar16 = (uVar17 >> 2) + uVar17;
              goto LAB_143334b34;
            }
            plVar1[1] = uVar17;
            *(byte *)(lVar2 + *plVar1) = bVar14;
            plVar1 = (longlong *)*param_1;
            lVar2 = plVar1[1];
            uVar17 = lVar2 + 1;
            if (uVar17 < (ulonglong)plVar1[1]) {
              uVar16 = uVar17;
              if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334b8d:
                FUN_143333390(plVar1,plVar1,uVar16);
              }
            }
            else if ((ulonglong)plVar1[2] < uVar17) {
              uVar16 = (uVar17 >> 2) + uVar17;
              goto LAB_143334b8d;
            }
            plVar1[1] = uVar17;
            *(byte *)(lVar2 + *plVar1) = cVar9 * '\x02' | bVar15 & 1;
            param_1 = (longlong *)*param_1;
            lVar2 = param_1[1];
            uVar17 = lVar2 + 1;
            if (uVar17 < (ulonglong)param_1[1]) {
              uVar16 = uVar17;
              if ((ulonglong)param_1[2] >> 1 <= uVar17) goto LAB_143334be3;
            }
            else {
              if (uVar17 <= (ulonglong)param_1[2]) goto LAB_143334be3;
              uVar16 = (uVar17 >> 2) + uVar17;
            }
            FUN_143333390(param_1,param_1,uVar16);
LAB_143334be3:
            param_1[1] = uVar17;
            *(undefined1 *)(lVar2 + *param_1) = uVar10;
            return 8;
          }
          plVar1 = (longlong *)*param_1;
          uVar17 = plVar1[1] + 1;
          if (uVar17 < (ulonglong)plVar1[1]) {
            uVar16 = uVar17;
            if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334730:
              FUN_143333390(plVar1,plVar1,uVar16);
            }
          }
          else if ((ulonglong)plVar1[2] < uVar17) {
            uVar16 = (uVar17 >> 2) + uVar17;
            goto LAB_143334730;
          }
          plVar1[1] = uVar17;
          *(byte *)(*plVar1 + -1 + uVar17) = cVar6 << 4 | 0xc;
          plVar1 = (longlong *)*param_1;
          lVar2 = plVar1[1];
          uVar17 = lVar2 + 1;
          if (uVar17 < (ulonglong)plVar1[1]) {
            uVar16 = uVar17;
            if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_14333477f:
              FUN_143333390(plVar1,plVar1,uVar16);
            }
          }
          else if ((ulonglong)plVar1[2] < uVar17) {
            uVar16 = (uVar17 >> 2) + uVar17;
            goto LAB_14333477f;
          }
          plVar1[1] = uVar17;
          *(byte *)(lVar2 + *plVar1) = bVar7;
          plVar1 = (longlong *)*param_1;
          lVar2 = plVar1[1];
          uVar17 = lVar2 + 1;
          if (uVar17 < (ulonglong)plVar1[1]) {
            uVar16 = uVar17;
            if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_1433347d5:
              FUN_143333390(plVar1,plVar1,uVar16);
            }
          }
          else if ((ulonglong)plVar1[2] < uVar17) {
            uVar16 = (uVar17 >> 2) + uVar17;
            goto LAB_1433347d5;
          }
          plVar1[1] = uVar17;
          *(byte *)(lVar2 + *plVar1) = bVar8 & 1 | cVar11 * '\x02';
          plVar1 = (longlong *)*param_1;
          lVar2 = plVar1[1];
          uVar17 = lVar2 + 1;
          if (uVar17 < (ulonglong)plVar1[1]) {
            uVar16 = uVar17;
            if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_14333482e:
              FUN_143333390(plVar1,plVar1,uVar16);
            }
          }
          else if ((ulonglong)plVar1[2] < uVar17) {
            uVar16 = (uVar17 >> 2) + uVar17;
            goto LAB_14333482e;
          }
          plVar1[1] = uVar17;
          *(byte *)(lVar2 + *plVar1) = (byte)(param_3 >> 7) & 0x3f | cVar3 << 6;
          plVar1 = (longlong *)*param_1;
          lVar2 = plVar1[1];
          uVar17 = lVar2 + 1;
          if (uVar17 < (ulonglong)plVar1[1]) {
            uVar16 = uVar17;
            if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_14333487d:
              FUN_143333390(plVar1,plVar1,uVar16);
            }
          }
          else if ((ulonglong)plVar1[2] < uVar17) {
            uVar16 = (uVar17 >> 2) + uVar17;
            goto LAB_14333487d;
          }
          plVar1[1] = uVar17;
          *(byte *)(lVar2 + *plVar1) = bVar13;
          plVar1 = (longlong *)*param_1;
          lVar2 = plVar1[1];
          uVar17 = lVar2 + 1;
          if (uVar17 < (ulonglong)plVar1[1]) {
            uVar16 = uVar17;
            if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_1433348d6:
              FUN_143333390(plVar1,plVar1,uVar16);
            }
          }
          else if ((ulonglong)plVar1[2] < uVar17) {
            uVar16 = (uVar17 >> 2) + uVar17;
            goto LAB_1433348d6;
          }
          plVar1[1] = uVar17;
          *(byte *)(lVar2 + *plVar1) = (byte)(param_4 >> 10) & 7 | cVar9 << 3;
          param_1 = (longlong *)*param_1;
          lVar2 = param_1[1];
          uVar17 = lVar2 + 1;
          if (uVar17 < (ulonglong)param_1[1]) {
            uVar16 = uVar17;
            if ((ulonglong)param_1[2] >> 1 <= uVar17) goto LAB_14333492c;
          }
          else {
            if (uVar17 <= (ulonglong)param_1[2]) goto LAB_14333492c;
            uVar16 = (uVar17 >> 2) + uVar17;
          }
          FUN_143333390(param_1,param_1,uVar16);
LAB_14333492c:
          param_1[1] = uVar17;
          *(char *)(lVar2 + *param_1) = (char)(param_5 >> 5);
          return 7;
        }
        plVar1 = (longlong *)*param_1;
        lVar2 = plVar1[1];
        uVar17 = lVar2 + 1;
        if (uVar17 < (ulonglong)plVar1[1]) {
          uVar16 = uVar17;
          if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334519:
            FUN_143333390(plVar1,plVar1,uVar16);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar17) {
          uVar16 = (uVar17 >> 2) + uVar17;
          goto LAB_143334519;
        }
        plVar1[1] = uVar17;
        *(byte *)(lVar2 + *plVar1) = cVar6 << 4 | 0xb;
        plVar1 = (longlong *)*param_1;
        lVar2 = plVar1[1];
        uVar17 = lVar2 + 1;
        if (uVar17 < (ulonglong)plVar1[1]) {
          uVar16 = uVar17;
          if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334570:
            FUN_143333390(plVar1,plVar1,uVar16);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar17) {
          uVar16 = (uVar17 >> 2) + uVar17;
          goto LAB_143334570;
        }
        plVar1[1] = uVar17;
        *(byte *)(lVar2 + *plVar1) = bVar7 & 0x7f | cVar11 << 7;
        plVar1 = (longlong *)*param_1;
        lVar2 = plVar1[1];
        uVar17 = lVar2 + 1;
        if (uVar17 < (ulonglong)plVar1[1]) {
          uVar16 = uVar17;
          if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_1433345be:
            FUN_143333390(plVar1,plVar1,uVar16);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar17) {
          uVar16 = (uVar17 >> 2) + uVar17;
          goto LAB_1433345be;
        }
        plVar1[1] = uVar17;
        *(char *)(lVar2 + *plVar1) = (char)(param_3 >> 1);
        plVar1 = (longlong *)*param_1;
        lVar2 = plVar1[1];
        uVar17 = lVar2 + 1;
        if (uVar17 < (ulonglong)plVar1[1]) {
          uVar16 = uVar17;
          if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334617:
            FUN_143333390(plVar1,plVar1,uVar16);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar17) {
          uVar16 = (uVar17 >> 2) + uVar17;
          goto LAB_143334617;
        }
        plVar1[1] = uVar17;
        *(byte *)(lVar2 + *plVar1) = (byte)(param_3 >> 9) & 3 | cVar3 << 2;
        plVar1 = (longlong *)*param_1;
        lVar2 = plVar1[1];
        uVar17 = lVar2 + 1;
        if (uVar17 < (ulonglong)plVar1[1]) {
          uVar16 = uVar17;
          if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334670:
            FUN_143333390(plVar1,plVar1,uVar16);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar17) {
          uVar16 = (uVar17 >> 2) + uVar17;
          goto LAB_143334670;
        }
        plVar1[1] = uVar17;
        *(byte *)(lVar2 + *plVar1) = bVar14 & 0x1f | cVar9 << 5;
        param_1 = (longlong *)*param_1;
        uVar17 = param_1[1] + 1;
        if (uVar17 < (ulonglong)param_1[1]) {
          uVar16 = uVar17;
          if ((ulonglong)param_1[2] >> 1 <= uVar17) goto LAB_1433346c6;
        }
        else {
          if (uVar17 <= (ulonglong)param_1[2]) goto LAB_1433346c6;
          uVar16 = (uVar17 >> 2) + uVar17;
        }
        FUN_143333390(param_1,param_1,uVar16);
LAB_1433346c6:
        param_1[1] = uVar17;
        *(char *)(*param_1 + -1 + uVar17) = (char)(param_5 >> 3);
        return 6;
      }
      plVar1 = (longlong *)*param_1;
      lVar2 = plVar1[1];
      uVar17 = lVar2 + 1;
      if (uVar17 < (ulonglong)plVar1[1]) {
        uVar16 = uVar17;
        if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334351:
          FUN_143333390(plVar1,plVar1,uVar16);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar17) {
        uVar16 = (uVar17 >> 2) + uVar17;
        goto LAB_143334351;
      }
      plVar1[1] = uVar17;
      *(byte *)(lVar2 + *plVar1) = cVar6 << 4 | 10;
      plVar1 = (longlong *)*param_1;
      lVar2 = plVar1[1];
      uVar17 = lVar2 + 1;
      if (uVar17 < (ulonglong)plVar1[1]) {
        uVar16 = uVar17;
        if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_1433343a8:
          FUN_143333390(plVar1,plVar1,uVar16);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar17) {
        uVar16 = (uVar17 >> 2) + uVar17;
        goto LAB_1433343a8;
      }
      plVar1[1] = uVar17;
      *(byte *)(lVar2 + *plVar1) = bVar7 & 0x1f | cVar11 << 5;
      plVar1 = (longlong *)*param_1;
      uVar17 = plVar1[1] + 1;
      if (uVar17 < (ulonglong)plVar1[1]) {
        uVar16 = uVar17;
        if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334401:
          FUN_143333390(plVar1,plVar1,uVar16);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar17) {
        uVar16 = (uVar17 >> 2) + uVar17;
        goto LAB_143334401;
      }
      plVar1[1] = uVar17;
      *(byte *)(*plVar1 + -1 + uVar17) = (byte)(param_3 >> 3) & 0x3f | cVar3 << 6;
      plVar1 = (longlong *)*param_1;
      uVar17 = plVar1[1] + 1;
      if (uVar17 < (ulonglong)plVar1[1]) {
        uVar16 = uVar17;
        if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_14333445a:
          FUN_143333390(plVar1,plVar1,uVar16);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar17) {
        uVar16 = (uVar17 >> 2) + uVar17;
        goto LAB_14333445a;
      }
      plVar1[1] = uVar17;
      *(byte *)(*plVar1 + -1 + uVar17) = bVar13 & 0x7f | cVar9 << 7;
      param_1 = (longlong *)*param_1;
      uVar17 = param_1[1] + 1;
      if (uVar17 < (ulonglong)param_1[1]) {
        uVar16 = uVar17;
        if ((ulonglong)param_1[2] >> 1 <= uVar17) goto LAB_1433344af;
      }
      else {
        if (uVar17 <= (ulonglong)param_1[2]) goto LAB_1433344af;
        uVar16 = (uVar17 >> 2) + uVar17;
      }
      FUN_143333390(param_1,param_1,uVar16);
LAB_1433344af:
      param_1[1] = uVar17;
      *(char *)(*param_1 + -1 + uVar17) = (char)(param_5 >> 1);
      return 5;
    }
    plVar1 = (longlong *)*param_1;
    uVar17 = plVar1[1] + 1;
    if (uVar17 < (ulonglong)plVar1[1]) {
      uVar16 = uVar17;
      if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_1433341d7:
        FUN_143333390(plVar1,plVar1,uVar16);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar17) {
      uVar16 = (uVar17 >> 2) + uVar17;
      goto LAB_1433341d7;
    }
    plVar1[1] = uVar17;
    *(byte *)(*plVar1 + -1 + uVar17) = cVar6 << 4 | 9;
    plVar1 = (longlong *)*param_1;
    uVar17 = plVar1[1] + 1;
    if (uVar17 < (ulonglong)plVar1[1]) {
      uVar16 = uVar17;
      if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_14333422e:
        FUN_143333390(plVar1,plVar1,uVar16);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar17) {
      uVar16 = (uVar17 >> 2) + uVar17;
      goto LAB_14333422e;
    }
    plVar1[1] = uVar17;
    *(byte *)(*plVar1 + -1 + uVar17) = bVar7 & 7 | cVar11 << 3;
    plVar1 = (longlong *)*param_1;
    lVar2 = plVar1[1];
    uVar17 = lVar2 + 1;
    if (uVar17 < (ulonglong)plVar1[1]) {
      uVar16 = uVar17;
      if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334287:
        FUN_143333390(plVar1,plVar1,uVar16);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar17) {
      uVar16 = (uVar17 >> 2) + uVar17;
      goto LAB_143334287;
    }
    plVar1[1] = uVar17;
    *(byte *)(lVar2 + *plVar1) = bVar12 & 3 | cVar3 << 2;
    param_1 = (longlong *)*param_1;
    lVar2 = param_1[1];
    uVar17 = lVar2 + 1;
    if (uVar17 < (ulonglong)param_1[1]) {
      uVar16 = uVar17;
      if ((ulonglong)param_1[2] >> 1 <= uVar17) goto LAB_1433342e7;
    }
    else {
      if (uVar17 <= (ulonglong)param_1[2]) goto LAB_1433342e7;
      uVar16 = (uVar17 >> 2) + uVar17;
    }
    FUN_143333390(param_1,param_1,uVar16);
LAB_1433342e7:
    param_1[1] = uVar17;
    *(byte *)(lVar2 + *param_1) = bVar14 & 1 | cVar9 * '\x02';
    return 4;
  }
  plVar1 = (longlong *)*param_1;
  uVar17 = plVar1[1] + 1;
  if (uVar17 < (ulonglong)plVar1[1]) {
    uVar16 = uVar17;
    if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_1433340b1:
      FUN_143333390(plVar1,plVar1,uVar16);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar17) {
    uVar16 = (uVar17 >> 2) + uVar17;
    goto LAB_1433340b1;
  }
  plVar1[1] = uVar17;
  *(byte *)(*plVar1 + -1 + uVar17) = cVar6 << 4 | 8;
  plVar1 = (longlong *)*param_1;
  uVar17 = plVar1[1] + 1;
  if (uVar17 < (ulonglong)plVar1[1]) {
    uVar16 = uVar17;
    if (uVar17 < (ulonglong)plVar1[2] >> 1) {
LAB_143334111:
      FUN_143333390(plVar1,plVar1,uVar16);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar17) {
    uVar16 = (uVar17 >> 2) + uVar17;
    goto LAB_143334111;
  }
  plVar1[1] = uVar17;
  *(byte *)(*plVar1 + -1 + uVar17) = bVar7 & 1 | cVar11 * '\x02' & 0x3fU | cVar3 << 6;
  param_1 = (longlong *)*param_1;
  uVar17 = param_1[1] + 1;
  if (uVar17 < (ulonglong)param_1[1]) {
    uVar16 = uVar17;
    if ((ulonglong)param_1[2] >> 1 <= uVar17) goto LAB_143334172;
  }
  else {
    if (uVar17 <= (ulonglong)param_1[2]) goto LAB_143334172;
    uVar16 = (uVar17 >> 2) + uVar17;
  }
  FUN_143333390(param_1,param_1,uVar16);
LAB_143334172:
  param_1[1] = uVar17;
  *(byte *)(*param_1 + -1 + uVar17) = bVar13 & 7 | cVar9 << 3;
  return 3;
}



// FUNCTION 143335130 FUN_143335130 body=867 status=ok
// SIG undefined FUN_143335130(void)

undefined8 FUN_143335130(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = plVar1[1];
  uVar6 = lVar2 + 1;
  if (param_2 + 0x20U < 0x40) {
    if (uVar6 < (ulonglong)plVar1[1]) {
      uVar7 = uVar6;
      if ((ulonglong)plVar1[2] >> 1 <= uVar6) goto LAB_143335191;
    }
    else {
      if (uVar6 <= (ulonglong)plVar1[2]) goto LAB_143335191;
      uVar7 = (uVar6 >> 2) + uVar6;
    }
    FUN_143333390(plVar1,plVar1,uVar7);
LAB_143335191:
    plVar1[1] = uVar6;
    *(char *)(*plVar1 + -1 + uVar6) = (char)param_2 << 2;
    return 1;
  }
  bVar5 = (char)param_2 << 2;
  uVar3 = (undefined1)(param_2 >> 6);
  if (0x3fff < param_2 + 0x2000U) {
    uVar4 = (undefined1)(param_2 >> 0xe);
    if (0x3fffff < param_2 + 0x200000U) {
      if (uVar6 < (ulonglong)plVar1[1]) {
        uVar7 = uVar6;
        if (uVar6 < (ulonglong)plVar1[2] >> 1) {
LAB_143335378:
          FUN_143333390(plVar1,plVar1,uVar7);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar6) {
        uVar7 = (uVar6 >> 2) + uVar6;
        goto LAB_143335378;
      }
      plVar1[1] = uVar6;
      *(byte *)(*plVar1 + -1 + uVar6) = bVar5 | 3;
      plVar1 = (longlong *)*param_1;
      uVar6 = plVar1[1] + 1;
      if (uVar6 < (ulonglong)plVar1[1]) {
        uVar7 = uVar6;
        if (uVar6 < (ulonglong)plVar1[2] >> 1) {
LAB_1433353c5:
          FUN_143333390(plVar1,plVar1,uVar7);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar6) {
        uVar7 = (uVar6 >> 2) + uVar6;
        goto LAB_1433353c5;
      }
      plVar1[1] = uVar6;
      *(undefined1 *)(*plVar1 + -1 + uVar6) = uVar3;
      plVar1 = (longlong *)*param_1;
      uVar6 = plVar1[1] + 1;
      if (uVar6 < (ulonglong)plVar1[1]) {
        uVar7 = uVar6;
        if (uVar6 < (ulonglong)plVar1[2] >> 1) {
LAB_143335412:
          FUN_143333390(plVar1,plVar1,uVar7);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar6) {
        uVar7 = (uVar6 >> 2) + uVar6;
        goto LAB_143335412;
      }
      plVar1[1] = uVar6;
      *(undefined1 *)(*plVar1 + -1 + uVar6) = uVar4;
      param_1 = (longlong *)*param_1;
      uVar6 = param_1[1] + 1;
      if (uVar6 < (ulonglong)param_1[1]) {
        uVar7 = uVar6;
        if ((ulonglong)param_1[2] >> 1 <= uVar6) goto LAB_143335468;
      }
      else {
        if (uVar6 <= (ulonglong)param_1[2]) goto LAB_143335468;
        uVar7 = (uVar6 >> 2) + uVar6;
      }
      FUN_143333390(param_1,param_1,uVar7);
LAB_143335468:
      param_1[1] = uVar6;
      *(char *)(*param_1 + -1 + uVar6) = (char)(param_2 >> 0x16);
      return 4;
    }
    if (uVar6 < (ulonglong)plVar1[1]) {
      uVar7 = uVar6;
      if (uVar6 < (ulonglong)plVar1[2] >> 1) {
LAB_143335295:
        FUN_143333390(plVar1,plVar1,uVar7);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar6) {
      uVar7 = (uVar6 >> 2) + uVar6;
      goto LAB_143335295;
    }
    plVar1[1] = uVar6;
    *(byte *)(lVar2 + *plVar1) = bVar5 | 2;
    plVar1 = (longlong *)*param_1;
    lVar2 = plVar1[1];
    uVar6 = lVar2 + 1;
    if (uVar6 < (ulonglong)plVar1[1]) {
      uVar7 = uVar6;
      if (uVar6 < (ulonglong)plVar1[2] >> 1) {
LAB_1433352e2:
        FUN_143333390(plVar1,plVar1,uVar7);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar6) {
      uVar7 = (uVar6 >> 2) + uVar6;
      goto LAB_1433352e2;
    }
    plVar1[1] = uVar6;
    *(undefined1 *)(lVar2 + *plVar1) = uVar3;
    param_1 = (longlong *)*param_1;
    uVar6 = param_1[1] + 1;
    if (uVar6 < (ulonglong)param_1[1]) {
      uVar7 = uVar6;
      if ((ulonglong)param_1[2] >> 1 <= uVar6) goto LAB_143335338;
    }
    else {
      if (uVar6 <= (ulonglong)param_1[2]) goto LAB_143335338;
      uVar7 = (uVar6 >> 2) + uVar6;
    }
    FUN_143333390(param_1,param_1,uVar7);
LAB_143335338:
    param_1[1] = uVar6;
    *(undefined1 *)(*param_1 + -1 + uVar6) = uVar4;
    return 3;
  }
  if (uVar6 < (ulonglong)plVar1[1]) {
    uVar7 = uVar6;
    if (uVar6 < (ulonglong)plVar1[2] >> 1) {
LAB_1433351ee:
      FUN_143333390(plVar1,plVar1,uVar7);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar6) {
    uVar7 = (uVar6 >> 2) + uVar6;
    goto LAB_1433351ee;
  }
  plVar1[1] = uVar6;
  *(byte *)(*plVar1 + -1 + uVar6) = bVar5 | 1;
  param_1 = (longlong *)*param_1;
  uVar6 = param_1[1] + 1;
  if (uVar6 < (ulonglong)param_1[1]) {
    uVar7 = uVar6;
    if ((ulonglong)param_1[2] >> 1 <= uVar6) goto LAB_143335244;
  }
  else {
    if (uVar6 <= (ulonglong)param_1[2]) goto LAB_143335244;
    uVar7 = (uVar6 >> 2) + uVar6;
  }
  FUN_143333390(param_1,param_1,uVar7);
LAB_143335244:
  param_1[1] = uVar6;
  *(undefined1 *)(*param_1 + -1 + uVar6) = uVar3;
  return 2;
}



// FUNCTION 1433354a0 FUN_1433354a0 body=301 status=ok
// SIG undefined FUN_1433354a0(void)

undefined8 FUN_1433354a0(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = plVar1[1];
  uVar3 = lVar2 + 1;
  if (param_2 < 0x80) {
    if (uVar3 < (ulonglong)plVar1[1]) {
      uVar4 = uVar3;
      if ((ulonglong)plVar1[2] >> 1 <= uVar3) goto LAB_1433354fe;
    }
    else {
      if (uVar3 <= (ulonglong)plVar1[2]) goto LAB_1433354fe;
      uVar4 = (uVar3 >> 2) + uVar3;
    }
    FUN_143333390(plVar1,plVar1,uVar4);
LAB_1433354fe:
    plVar1[1] = uVar3;
    *(char *)(lVar2 + *plVar1) = (char)param_2 * '\x02';
    return 1;
  }
  if (uVar3 < (ulonglong)plVar1[1]) {
    uVar4 = uVar3;
    if (uVar3 < (ulonglong)plVar1[2] >> 1) {
LAB_14333554b:
      FUN_143333390(plVar1,plVar1,uVar4);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar3) {
    uVar4 = (uVar3 >> 2) + uVar3;
    goto LAB_14333554b;
  }
  plVar1[1] = uVar3;
  *(byte *)(*plVar1 + -1 + uVar3) = (char)param_2 * '\x02' | 1;
  param_1 = (longlong *)*param_1;
  uVar3 = param_1[1] + 1;
  if (uVar3 < (ulonglong)param_1[1]) {
    uVar4 = uVar3;
    if ((ulonglong)param_1[2] >> 1 <= uVar3) goto LAB_1433355a6;
  }
  else {
    if (uVar3 <= (ulonglong)param_1[2]) goto LAB_1433355a6;
    uVar4 = (uVar3 >> 2) + uVar3;
  }
  FUN_143333390(param_1,param_1,uVar4);
LAB_1433355a6:
  param_1[1] = uVar3;
  *(char *)(*param_1 + -1 + uVar3) = (char)(param_2 >> 7);
  return 2;
}



// FUNCTION 1433355d0 FUN_1433355d0 body=854 status=ok
// SIG undefined FUN_1433355d0(void)

undefined8 FUN_1433355d0(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = plVar1[1];
  uVar4 = lVar2 + 1;
  if (param_2 < 0x40) {
    if (uVar4 < (ulonglong)plVar1[1]) {
      uVar5 = uVar4;
      if ((ulonglong)plVar1[2] >> 1 <= uVar4) goto LAB_14333562e;
    }
    else {
      if (uVar4 <= (ulonglong)plVar1[2]) goto LAB_14333562e;
      uVar5 = (uVar4 >> 2) + uVar4;
    }
    FUN_143333390(plVar1,plVar1,uVar5);
LAB_14333562e:
    plVar1[1] = uVar4;
    *(char *)(*plVar1 + -1 + uVar4) = (char)param_2 << 2;
    return 1;
  }
  bVar3 = (char)param_2 << 2;
  if (0x3fff < param_2) {
    if (0x3fffff < param_2) {
      if (uVar4 < (ulonglong)plVar1[1]) {
        uVar5 = uVar4;
        if (uVar4 < (ulonglong)plVar1[2] >> 1) {
LAB_14333580b:
          FUN_143333390(plVar1,plVar1,uVar5);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar4) {
        uVar5 = (uVar4 >> 2) + uVar4;
        goto LAB_14333580b;
      }
      plVar1[1] = uVar4;
      *(byte *)(*plVar1 + -1 + uVar4) = bVar3 | 3;
      plVar1 = (longlong *)*param_1;
      uVar4 = plVar1[1] + 1;
      if (uVar4 < (ulonglong)plVar1[1]) {
        uVar5 = uVar4;
        if (uVar4 < (ulonglong)plVar1[2] >> 1) {
LAB_143335858:
          FUN_143333390(plVar1,plVar1,uVar5);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar4) {
        uVar5 = (uVar4 >> 2) + uVar4;
        goto LAB_143335858;
      }
      plVar1[1] = uVar4;
      *(char *)(*plVar1 + -1 + uVar4) = (char)(param_2 >> 6);
      plVar1 = (longlong *)*param_1;
      uVar4 = plVar1[1] + 1;
      if (uVar4 < (ulonglong)plVar1[1]) {
        uVar5 = uVar4;
        if (uVar4 < (ulonglong)plVar1[2] >> 1) {
LAB_1433358a5:
          FUN_143333390(plVar1,plVar1,uVar5);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar4) {
        uVar5 = (uVar4 >> 2) + uVar4;
        goto LAB_1433358a5;
      }
      plVar1[1] = uVar4;
      *(char *)(*plVar1 + -1 + uVar4) = (char)(param_2 >> 0xe);
      param_1 = (longlong *)*param_1;
      uVar4 = param_1[1] + 1;
      if (uVar4 < (ulonglong)param_1[1]) {
        uVar5 = uVar4;
        if ((ulonglong)param_1[2] >> 1 <= uVar4) goto LAB_1433358fb;
      }
      else {
        if (uVar4 <= (ulonglong)param_1[2]) goto LAB_1433358fb;
        uVar5 = (uVar4 >> 2) + uVar4;
      }
      FUN_143333390(param_1,param_1,uVar5);
LAB_1433358fb:
      param_1[1] = uVar4;
      *(char *)(*param_1 + -1 + uVar4) = (char)(param_2 >> 0x16);
      return 4;
    }
    if (uVar4 < (ulonglong)plVar1[1]) {
      uVar5 = uVar4;
      if (uVar4 < (ulonglong)plVar1[2] >> 1) {
LAB_143335728:
        FUN_143333390(plVar1,plVar1,uVar5);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar4) {
      uVar5 = (uVar4 >> 2) + uVar4;
      goto LAB_143335728;
    }
    plVar1[1] = uVar4;
    *(byte *)(lVar2 + *plVar1) = bVar3 | 2;
    plVar1 = (longlong *)*param_1;
    lVar2 = plVar1[1];
    uVar4 = lVar2 + 1;
    if (uVar4 < (ulonglong)plVar1[1]) {
      uVar5 = uVar4;
      if (uVar4 < (ulonglong)plVar1[2] >> 1) {
LAB_143335775:
        FUN_143333390(plVar1,plVar1,uVar5);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar4) {
      uVar5 = (uVar4 >> 2) + uVar4;
      goto LAB_143335775;
    }
    plVar1[1] = uVar4;
    *(char *)(lVar2 + *plVar1) = (char)(param_2 >> 6);
    param_1 = (longlong *)*param_1;
    uVar4 = param_1[1] + 1;
    if (uVar4 < (ulonglong)param_1[1]) {
      uVar5 = uVar4;
      if ((ulonglong)param_1[2] >> 1 <= uVar4) goto LAB_1433357cb;
    }
    else {
      if (uVar4 <= (ulonglong)param_1[2]) goto LAB_1433357cb;
      uVar5 = (uVar4 >> 2) + uVar4;
    }
    FUN_143333390(param_1,param_1,uVar5);
LAB_1433357cb:
    param_1[1] = uVar4;
    *(char *)(*param_1 + -1 + uVar4) = (char)(param_2 >> 0xe);
    return 3;
  }
  if (uVar4 < (ulonglong)plVar1[1]) {
    uVar5 = uVar4;
    if (uVar4 < (ulonglong)plVar1[2] >> 1) {
LAB_143335686:
      FUN_143333390(plVar1,plVar1,uVar5);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar4) {
    uVar5 = (uVar4 >> 2) + uVar4;
    goto LAB_143335686;
  }
  plVar1[1] = uVar4;
  *(byte *)(*plVar1 + -1 + uVar4) = bVar3 | 1;
  param_1 = (longlong *)*param_1;
  uVar4 = param_1[1] + 1;
  if (uVar4 < (ulonglong)param_1[1]) {
    uVar5 = uVar4;
    if ((ulonglong)param_1[2] >> 1 <= uVar4) goto LAB_1433356dc;
  }
  else {
    if (uVar4 <= (ulonglong)param_1[2]) goto LAB_1433356dc;
    uVar5 = (uVar4 >> 2) + uVar4;
  }
  FUN_143333390(param_1,param_1,uVar5);
LAB_1433356dc:
  param_1[1] = uVar4;
  *(char *)(*param_1 + -1 + uVar4) = (char)(param_2 >> 6);
  return 2;
}



// FUNCTION 143335930 FUN_143335930 body=544 status=ok
// SIG undefined FUN_143335930(void)

undefined8 FUN_143335930(longlong *param_1,int param_2)

{
  longlong *plVar1;
  byte bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)*param_1;
  bVar2 = (char)param_2 << 4;
  uVar4 = plVar1[1] + 1;
  uVar3 = (undefined1)(param_2 >> 4);
  if (0xfff < param_2 + 0x800U) {
    if (uVar4 < (ulonglong)plVar1[1]) {
      uVar5 = uVar4;
      if (uVar4 < (ulonglong)plVar1[2] >> 1) {
LAB_143335a34:
        FUN_143333390(plVar1,plVar1,uVar5);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar4) {
      uVar5 = (uVar4 >> 2) + uVar4;
      goto LAB_143335a34;
    }
    plVar1[1] = uVar4;
    *(byte *)(*plVar1 + -1 + uVar4) = bVar2 | 3;
    plVar1 = (longlong *)*param_1;
    uVar4 = plVar1[1] + 1;
    if (uVar4 < (ulonglong)plVar1[1]) {
      uVar5 = uVar4;
      if (uVar4 < (ulonglong)plVar1[2] >> 1) {
LAB_143335a81:
        FUN_143333390(plVar1,plVar1,uVar5);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar4) {
      uVar5 = (uVar4 >> 2) + uVar4;
      goto LAB_143335a81;
    }
    plVar1[1] = uVar4;
    *(undefined1 *)(*plVar1 + -1 + uVar4) = uVar3;
    plVar1 = (longlong *)*param_1;
    uVar4 = plVar1[1] + 1;
    if (uVar4 < (ulonglong)plVar1[1]) {
      uVar5 = uVar4;
      if (uVar4 < (ulonglong)plVar1[2] >> 1) {
LAB_143335ace:
        FUN_143333390(plVar1,plVar1,uVar5);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar4) {
      uVar5 = (uVar4 >> 2) + uVar4;
      goto LAB_143335ace;
    }
    plVar1[1] = uVar4;
    *(char *)(*plVar1 + -1 + uVar4) = (char)(param_2 >> 0xc);
    param_1 = (longlong *)*param_1;
    uVar4 = param_1[1] + 1;
    if (uVar4 < (ulonglong)param_1[1]) {
      uVar5 = uVar4;
      if ((ulonglong)param_1[2] >> 1 <= uVar4) goto LAB_143335b24;
    }
    else {
      if (uVar4 <= (ulonglong)param_1[2]) goto LAB_143335b24;
      uVar5 = (uVar4 >> 2) + uVar4;
    }
    FUN_143333390(param_1,param_1,uVar5);
LAB_143335b24:
    param_1[1] = uVar4;
    *(char *)(*param_1 + -1 + uVar4) = (char)(param_2 >> 0x14);
    return 3;
  }
  if (uVar4 < (ulonglong)plVar1[1]) {
    uVar5 = uVar4;
    if (uVar4 < (ulonglong)plVar1[2] >> 1) {
LAB_14333599d:
      FUN_143333390(plVar1,plVar1,uVar5);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar4) {
    uVar5 = (uVar4 >> 2) + uVar4;
    goto LAB_14333599d;
  }
  plVar1[1] = uVar4;
  *(byte *)(*plVar1 + -1 + uVar4) = bVar2 | 2;
  param_1 = (longlong *)*param_1;
  uVar4 = param_1[1] + 1;
  if (uVar4 < (ulonglong)param_1[1]) {
    uVar5 = uVar4;
    if ((ulonglong)param_1[2] >> 1 <= uVar4) goto LAB_1433359f3;
  }
  else {
    if (uVar4 <= (ulonglong)param_1[2]) goto LAB_1433359f3;
    uVar5 = (uVar4 >> 2) + uVar4;
  }
  FUN_143333390(param_1,param_1,uVar5);
LAB_1433359f3:
  param_1[1] = uVar4;
  *(undefined1 *)(*param_1 + -1 + uVar4) = uVar3;
  return 2;
}



// FUNCTION 143335b50 FUN_143335b50 body=152 status=ok
// SIG undefined FUN_143335b50(void)

void FUN_143335b50(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined4 local_res8 [2];
  
  if (*(ulonglong *)(param_1 + 0x18) <= param_2) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      local_res8[0] = 2;
      uVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x80,local_res8);
    }
    else {
      uVar1 = (**(code **)(*DAT_146b62f28 + 0x58))
                        (DAT_146b62f28,*(longlong *)(param_1 + 0x20),
                         *(ulonglong *)(param_1 + 0x18) * 8 + 0x80);
    }
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 0x10;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  local_res8[0] = 2;
  uVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x700,local_res8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + param_2 * 8) = uVar1;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
  return;
}



// FUNCTION 143335bf0 FUN_143335bf0 body=391 status=ok
// SIG undefined FUN_143335bf0(void)

void FUN_143335bf0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_143331d70();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar3 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar5 * 0x18 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar4 = lVar3;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar4 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar4 = lVar4 + 0x18;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar4 = *param_1 + lVar3;
      if (*(longlong *)(lVar4 + 0x10) != -2) {
        lVar1 = *(longlong *)(lVar4 + 0x20);
        FUN_143331a50(&local_res20,param_2,lVar4 + 0x20,
                      (ulonglong)(*(ushort *)(lVar1 + 0x46) ^ *(ushort *)(lVar1 + 0x44)) ^
                      (ulonglong)*(byte *)(lVar1 + 0x43) ^ (ulonglong)*(byte *)(lVar1 + 0x42) ^
                      (ulonglong)*(ushort *)(lVar1 + 0x40) ^ *(ulonglong *)(lVar1 + 0x38) >> 6 ^
                      *(ulonglong *)(lVar1 + 0x38));
        if (*(RefCountImpl **)(lVar4 + 0x20) != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar4 + 0x20));
        }
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar3 = lVar3 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 143335d80 FUN_143335d80 body=1239 status=ok
// SIG undefined FUN_143335d80(void)

undefined8 * FUN_143335d80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__145b00d20;
  param_1[3] = 0;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 4) = 0x10000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xfffe;
  param_1[5] = param_3;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
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
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = param_2;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = param_2;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = param_2;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = param_2;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = param_2;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = param_2;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = param_2;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = param_2;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = param_2;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = param_2;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0xf149f2ca;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x7149f2ca;
  *(undefined4 *)(param_1 + 0x43) = 0x7149f2ca;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0xf149f2ca;
  *(undefined4 *)(param_1 + 0x44) = 0xf149f2ca;
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
  param_1[0x4f] = param_2;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = param_2;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = param_3;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = param_3;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = param_3;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = param_3;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = param_3;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = param_2;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x75) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x76) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0x3c23d70a;
  param_1[0x77] = param_2;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = param_2;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = param_2;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = param_2;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = param_2;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = param_2;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = param_2;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = param_2;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0x9d] = param_2;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa2] = param_2;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xa7] = param_2;
  *(undefined4 *)(param_1 + 0xac) = 0;
  return param_1;
}



// FUNCTION 143336260 SetFillRule body=25 status=ok
// SIG undefined SetFillRule(void)

void Scaleform::Render::Tessellator::SetFillRule(longlong param_1,int param_2)

{
  if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x21) = 1;
    return;
  }
  *(int *)(param_1 + 0x18) = param_2;
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}



// FUNCTION 143336280 SetToleranceParam body=31 status=ok
// SIG undefined SetToleranceParam(void)

void Scaleform::Render::Tessellator::SetToleranceParam(longlong param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_2;
  *(float *)(param_1 + 0x1c) = fVar1;
  *(bool *)(param_1 + 0x20) = 0.0 < fVar1;
  *(float *)(param_1 + 0x3b4) = param_2[3];
  return;
}



// FUNCTION 1433362b0 SetEdgeAAWidth body=24 status=ok
// SIG undefined SetEdgeAAWidth(void)

void Scaleform::Render::Tessellator::SetEdgeAAWidth(longlong param_1,float param_2)

{
  *(float *)(param_1 + 0x3ac) = param_2;
  *(bool *)(param_1 + 0x3b0) = 0.0 < param_2;
  return;
}



// FUNCTION 1433362d0 FUN_1433362d0 body=950 status=ok
// SIG undefined FUN_1433362d0(void)

void FUN_1433362d0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x210) = 0xf149f2ca;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0x7149f2ca;
  *(undefined4 *)(param_1 + 0x218) = 0x7149f2ca;
  *(undefined4 *)(param_1 + 0x21c) = 0xf149f2ca;
  *(undefined4 *)(param_1 + 0x220) = 0xf149f2ca;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x490) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined8 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x550) = 0;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined8 *)(param_1 + 0x540) = 0;
  *(undefined8 *)(param_1 + 0x558) = 0;
  Scaleform::Render::LinearHeap::ClearAndRelease(*(undefined8 *)(param_1 + 8));
  Scaleform::Render::LinearHeap::ClearAndRelease(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 143336690 FUN_143336690 body=268 status=ok
// SIG undefined FUN_143336690(void)

void FUN_143336690(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x98);
  if ((ulonglong)(uVar1 + 2) < *(ulonglong *)(param_1 + 0x78)) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    uVar3 = *(longlong *)(param_1 + 0x78) - 1;
    if ((*(float *)(*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 4) * 8) +
                   (ulonglong)(uVar1 & 0xf) * 8) !=
         *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + (uVar3 >> 4) * 8) +
                   (ulonglong)((uint)uVar3 & 0xf) * 8)) ||
       (uVar3 = *(longlong *)(param_1 + 0x78) - 1,
       *(float *)(*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 4) * 8) + 4 +
                 (ulonglong)(uVar1 & 0xf) * 8) !=
       *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + (uVar3 >> 4) * 8) + 4 +
                 (ulonglong)((uint)uVar3 & 0xf) * 8))) {
      uVar3 = *(ulonglong *)(param_1 + 0x78) >> 4;
      lVar2 = *(longlong *)(lVar2 + (ulonglong)(uVar1 >> 4) * 8);
      if (*(ulonglong *)(param_1 + 0x80) <= uVar3) {
        FUN_143324830(param_1 + 0x70,uVar3);
      }
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x90) + uVar3 * 8) +
       (ulonglong)(*(uint *)(param_1 + 0x78) & 0xf) * 8) =
           *(undefined8 *)(lVar2 + (ulonglong)(uVar1 & 0xf) * 8);
      *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 1;
    }
  }
  return;
}



// FUNCTION 1433367b0 FUN_1433367b0 body=1403 status=ok
// SIG undefined FUN_1433367b0(void)

void FUN_1433367b0(longlong param_1,int param_2,int param_3,undefined1 param_4,undefined1 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined4 uVar12;
  ulonglong uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_res8;
  float fStackX_c;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  undefined4 uVar13;
  
  uVar14 = (ulonglong)*(uint *)(param_1 + 0x98);
  if ((*(ulonglong *)(param_1 + 0x78) < (ulonglong)(*(uint *)(param_1 + 0x98) + 2)) ||
     (param_2 == param_3)) {
    if (uVar14 < *(ulonglong *)(param_1 + 0x78)) {
      *(ulonglong *)(param_1 + 0x78) = uVar14;
    }
  }
  else {
    iVar11 = param_3;
    iVar8 = param_2;
    if (*(char *)(param_1 + 0x21) != '\0') {
      if ((param_2 == 0) == (param_3 == 0)) {
        if (*(ulonglong *)(param_1 + 0x78) <= uVar14) {
          return;
        }
        *(ulonglong *)(param_1 + 0x78) = uVar14;
        return;
      }
      param_5 = 0;
      param_4 = 0;
      iVar8 = 1;
      if (param_2 == 0) {
        iVar8 = param_2;
      }
      iVar11 = 1;
      if (param_3 == 0) {
        iVar11 = param_3;
      }
    }
    FUN_143338e40(param_1,iVar8,param_4);
    FUN_143338e40(param_1,iVar11,param_5);
    uVar6 = *(uint *)(param_1 + 0x98);
    uVar15 = *(int *)(param_1 + 0x78) - 1;
    uVar13 = 0;
    uVar12 = 0;
    uVar9 = uVar13;
    if (((*(longlong *)(param_1 + 0x50) == 0) &&
        (lVar7 = *(longlong *)(param_1 + 0x90), uVar14 = *(longlong *)(param_1 + 0x78) - 1,
        *(float *)(*(longlong *)(lVar7 + (ulonglong)(uVar6 >> 4) * 8) + (ulonglong)(uVar6 & 0xf) * 8
                  ) ==
        *(float *)(*(longlong *)(lVar7 + (uVar14 >> 4) * 8) + (ulonglong)((uint)uVar14 & 0xf) * 8)))
       && (uVar14 = *(longlong *)(param_1 + 0x78) - 1, uVar9 = uVar12,
          *(float *)(*(longlong *)(lVar7 + (ulonglong)(uVar6 >> 4) * 8) + 4 +
                    (ulonglong)(uVar6 & 0xf) * 8) ==
          *(float *)(*(longlong *)(lVar7 + (uVar14 >> 4) * 8) + 4 +
                    (ulonglong)((uint)uVar14 & 0xf) * 8))) {
      uVar1 = uVar6 + 3;
      if (uVar1 == uVar15) {
        uVar3 = *(undefined8 *)
                 (*(longlong *)(lVar7 + (ulonglong)(uVar6 >> 4) * 8) + (ulonglong)(uVar6 & 0xf) * 8)
        ;
        uVar4 = *(undefined8 *)
                 (*(longlong *)(lVar7 + (ulonglong)(uVar6 + 1 >> 4) * 8) +
                 (ulonglong)(uVar6 + 1 & 0xf) * 8);
        local_res8 = (float)uVar4;
        uVar5 = *(undefined8 *)
                 (*(longlong *)(lVar7 + (ulonglong)(uVar6 + 2 >> 4) * 8) +
                 (ulonglong)(uVar6 + 2 & 0xf) * 8);
        fStackX_c = (float)((ulonglong)uVar4 >> 0x20);
        local_c8 = (float)uVar5;
        fStack_bc = (float)((ulonglong)uVar3 >> 0x20);
        fStack_c4 = (float)((ulonglong)uVar5 >> 0x20);
        local_c0 = (float)uVar3;
        fVar20 = (fStackX_c - fStack_bc) * (local_c8 - local_res8) -
                 (local_res8 - local_c0) * (fStack_c4 - fStackX_c);
        fVar19 = ABS(local_c8 - local_res8);
        fVar16 = ABS(fStack_c4 - fStackX_c);
        fVar17 = ABS(local_res8 - local_c0);
        if (fVar19 <= fVar16) {
          fVar19 = fVar16;
        }
        fVar16 = ABS(fStackX_c - fStack_bc);
        if (fVar17 <= fVar16) {
          fVar17 = fVar16;
        }
        fVar17 = fVar19 * fVar17 * 0.001;
        if (-fVar17 <= fVar20) {
          if (fVar17 < fVar20) {
            uVar9 = 1;
          }
        }
        else {
          uVar9 = 1;
        }
      }
      else if (uVar6 + 4 == uVar15) {
        uVar3 = *(undefined8 *)
                 (*(longlong *)(lVar7 + (ulonglong)(uVar6 >> 4) * 8) + (ulonglong)(uVar6 & 0xf) * 8)
        ;
        fStackX_c = (float)((ulonglong)uVar3 >> 0x20);
        uVar4 = *(undefined8 *)
                 (*(longlong *)(lVar7 + (ulonglong)(uVar6 + 1 >> 4) * 8) +
                 (ulonglong)(uVar6 + 1 & 0xf) * 8);
        local_c0 = (float)uVar4;
        uVar5 = *(undefined8 *)
                 (*(longlong *)(lVar7 + (ulonglong)(uVar6 + 2 >> 4) * 8) +
                 (ulonglong)(uVar6 + 2 & 0xf) * 8);
        fStack_c4 = (float)((ulonglong)uVar5 >> 0x20);
        local_c8 = (float)uVar5;
        fVar16 = local_c8 - local_c0;
        local_res8 = (float)uVar3;
        local_c0 = local_c0 - local_res8;
        uVar3 = *(undefined8 *)
                 (*(longlong *)(lVar7 + (ulonglong)(uVar1 >> 4) * 8) + (ulonglong)(uVar1 & 0xf) * 8)
        ;
        fStack_bc = (float)((ulonglong)uVar4 >> 0x20);
        local_b8 = (float)uVar3;
        fVar19 = fStack_c4 - fStack_bc;
        fStack_b4 = (float)((ulonglong)uVar3 >> 0x20);
        fStack_bc = fStack_bc - fStackX_c;
        local_c8 = local_b8 - local_c8;
        fStack_c4 = fStack_b4 - fStack_c4;
        fVar24 = fStack_bc * fVar16 - fVar19 * local_c0;
        fVar23 = local_c8 * fVar19 - fStack_c4 * fVar16;
        fVar20 = (fStackX_c - fStack_b4) * local_c0 - (local_res8 - local_b8) * fStack_bc;
        fVar22 = (local_res8 - local_b8) * fStack_c4 - (fStackX_c - fStack_b4) * local_c8;
        fVar17 = ABS(local_c0);
        if (ABS(local_c0) <= ABS(fStack_bc)) {
          fVar17 = ABS(fStack_bc);
        }
        fVar21 = ABS(fVar16);
        if (ABS(fVar16) <= ABS(fVar19)) {
          fVar21 = ABS(fVar19);
        }
        fVar19 = ABS(local_c8);
        if (ABS(local_c8) <= ABS(fStack_c4)) {
          fVar19 = ABS(fStack_c4);
        }
        fVar16 = ABS(local_b8 - local_res8);
        if (ABS(local_b8 - local_res8) <= ABS(fStack_b4 - fStackX_c)) {
          fVar16 = ABS(fStack_b4 - fStackX_c);
        }
        fVar18 = fVar21 * fVar17 * 0.001;
        if ((-fVar18 <= fVar24) || (fVar19 * fVar21 * -0.001 <= fVar23)) {
          uVar9 = uVar13;
          if (((fVar18 < fVar24) &&
              ((fVar19 * fVar21 * 0.001 < fVar23 &&
               (uVar9 = uVar12, fVar16 * fVar19 * 0.001 < fVar22)))) &&
             (uVar9 = 0, fVar16 * fVar17 * 0.001 < fVar20)) {
            uVar9 = 2;
          }
        }
        else {
          uVar9 = uVar13;
          if ((fVar22 < fVar16 * fVar19 * -0.001) && (fVar20 < fVar16 * fVar17 * -0.001)) {
            uVar9 = 2;
          }
        }
        fVar20 = *(float *)(param_1 + 0x1c);
        if ((((fVar17 < fVar20) || (fVar21 < fVar20)) || (fVar19 < fVar20)) || (fVar16 < fVar20)) {
          uVar9 = 0;
        }
      }
    }
    uVar14 = *(ulonglong *)(param_1 + 0x50) >> 4;
    if (*(ulonglong *)(param_1 + 0x58) <= uVar14) {
      FUN_143344180(param_1 + 0x48,uVar14);
    }
    uVar10 = (ulonglong)(*(uint *)(param_1 + 0x50) & 0xf);
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x68) + uVar14 * 8);
    puVar2 = (undefined8 *)(lVar7 + uVar10 * 0x14);
    *puVar2 = CONCAT44(uVar15,uVar6);
    puVar2[1] = CONCAT44(iVar11,iVar8);
    *(undefined4 *)(lVar7 + 0x10 + uVar10 * 0x14) = uVar9;
    *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 1;
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x78);
  }
  return;
}



// FUNCTION 143336d40 FUN_143336d40 body=549 status=ok
// SIG undefined FUN_143336d40(void)

void FUN_143336d40(longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  uVar2 = *(ulonglong *)(param_1 + 0x78);
  uVar7 = 0;
  fVar10 = -1e+30;
  fVar11 = 1e+30;
  fVar14 = 1e+30;
  fVar12 = -1e+30;
  if (3 < uVar2) {
    lVar3 = *(longlong *)(param_1 + 0x90);
    uVar6 = 2;
    do {
      uVar4 = uVar7 >> 4;
      uVar5 = (uint)uVar7;
      uVar7 = uVar7 + 4;
      uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + uVar4 * 8) + (ulonglong)(uVar5 & 0xf) * 8);
      local_res8 = (float)uVar1;
      uStackX_c = (float)((ulonglong)uVar1 >> 0x20);
      fVar9 = local_res8;
      if (fVar11 <= local_res8) {
        fVar9 = fVar11;
      }
      fVar11 = local_res8;
      if (local_res8 <= fVar10) {
        fVar11 = fVar10;
      }
      fVar10 = uStackX_c;
      if (fVar14 <= uStackX_c) {
        fVar10 = fVar14;
      }
      fVar14 = uStackX_c;
      if (uStackX_c <= fVar12) {
        fVar14 = fVar12;
      }
      uVar1 = *(undefined8 *)
               (*(longlong *)(lVar3 + (uVar6 - 1 >> 4) * 8) +
               (ulonglong)((uint)(uVar6 - 1) & 0xf) * 8);
      local_res8 = (float)uVar1;
      uStackX_c = (float)((ulonglong)uVar1 >> 0x20);
      fVar12 = local_res8;
      if (fVar9 <= local_res8) {
        fVar12 = fVar9;
      }
      fVar9 = local_res8;
      if (local_res8 <= fVar11) {
        fVar9 = fVar11;
      }
      fVar11 = uStackX_c;
      if (uStackX_c <= fVar14) {
        fVar11 = fVar14;
      }
      fVar14 = uStackX_c;
      if (fVar10 <= uStackX_c) {
        fVar14 = fVar10;
      }
      uVar1 = *(undefined8 *)
               (*(longlong *)(lVar3 + (uVar6 >> 4) * 8) + (ulonglong)((uint)uVar6 & 0xf) * 8);
      uVar4 = uVar6 + 1;
      local_res8 = (float)uVar1;
      uStackX_c = (float)((ulonglong)uVar1 >> 0x20);
      fVar10 = local_res8;
      if (fVar12 <= local_res8) {
        fVar10 = fVar12;
      }
      fVar12 = local_res8;
      if (local_res8 <= fVar9) {
        fVar12 = fVar9;
      }
      fVar9 = uStackX_c;
      if (uStackX_c <= fVar11) {
        fVar9 = fVar11;
      }
      uVar6 = uVar6 + 4;
      fVar8 = uStackX_c;
      if (fVar14 <= uStackX_c) {
        fVar8 = fVar14;
      }
      uVar1 = *(undefined8 *)
               (*(longlong *)(lVar3 + (uVar4 >> 4) * 8) + (ulonglong)((uint)uVar4 & 0xf) * 8);
      local_res8 = (float)uVar1;
      uStackX_c = (float)((ulonglong)uVar1 >> 0x20);
      fVar11 = local_res8;
      if (fVar10 <= local_res8) {
        fVar11 = fVar10;
      }
      fVar14 = uStackX_c;
      if (fVar8 <= uStackX_c) {
        fVar14 = fVar8;
      }
      fVar10 = local_res8;
      if (local_res8 <= fVar12) {
        fVar10 = fVar12;
      }
      fVar12 = uStackX_c;
      if (uStackX_c <= fVar9) {
        fVar12 = fVar9;
      }
    } while (uVar7 < uVar2 - 3);
  }
  if (uVar7 < uVar2) {
    fVar9 = fVar10;
    fVar8 = fVar11;
    fVar13 = fVar12;
    do {
      uVar6 = uVar7 >> 4;
      uVar5 = (uint)uVar7;
      uVar7 = uVar7 + 1;
      uVar1 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x90) + uVar6 * 8) +
               (ulonglong)(uVar5 & 0xf) * 8);
      local_res8 = (float)uVar1;
      uStackX_c = (float)((ulonglong)uVar1 >> 0x20);
      fVar11 = local_res8;
      if (fVar8 <= local_res8) {
        fVar11 = fVar8;
      }
      fVar12 = uStackX_c;
      if (fVar14 <= uStackX_c) {
        fVar12 = fVar14;
      }
      fVar14 = fVar12;
      fVar10 = local_res8;
      if (local_res8 <= fVar9) {
        fVar10 = fVar9;
      }
      fVar12 = uStackX_c;
      if (uStackX_c <= fVar13) {
        fVar12 = fVar13;
      }
      fVar9 = fVar10;
      fVar8 = fVar11;
      fVar13 = fVar12;
    } while (uVar7 < uVar2);
  }
  *param_2 = fVar11;
  *param_3 = fVar14;
  *param_4 = fVar10;
  *param_5 = fVar12;
  return;
}



// FUNCTION 143336f70 FUN_143336f70 body=948 status=ok
// SIG undefined FUN_143336f70(void)

void FUN_143336f70(longlong param_1,char param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  size_t _Size;
  char cVar7;
  void *_Dst;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  uVar11 = 0;
  *(undefined4 *)(param_1 + 0x214) = 0x7149f2ca;
  *(undefined4 *)(param_1 + 0x218) = 0x7149f2ca;
  *(undefined4 *)(param_1 + 0x21c) = 0xf149f2ca;
  *(undefined4 *)(param_1 + 0x220) = 0xf149f2ca;
  if ((((*(char *)(param_1 + 0x3b0) == '\0') && (*(ulonglong *)(param_1 + 0x50) < 2)) &&
      (*(char *)(param_1 + 0x21) == '\0')) &&
     (((*(ulonglong *)(param_1 + 0x50) != 0 &&
       (piVar5 = (int *)**(undefined8 **)(param_1 + 0x68), piVar5[4] != 0)) &&
      ((piVar5[2] == 0) != (piVar5[3] == 0))))) {
    iVar3 = *piVar5;
    uVar4 = piVar5[1];
    if ((iVar3 + 3U <= uVar4) && (uVar4 <= iVar3 + 4U)) {
      if (uVar4 == iVar3 + 3U) {
        cVar7 = FUN_143337cc0(param_1);
      }
      else {
        if (uVar4 != iVar3 + 4U) goto LAB_143337028;
        cVar7 = FUN_143337f70(param_1);
      }
      if (cVar7 != '\0') {
        return;
      }
    }
  }
LAB_143337028:
  FUN_1433385f0(param_1);
  uVar10 = *(ulonglong *)(param_1 + 0x360) >> 4;
  if (*(ulonglong *)(param_1 + 0x368) <= uVar10) {
    FUN_143343fa0(param_1 + 0x358,uVar10);
  }
  lVar9 = (ulonglong)(*(uint *)(param_1 + 0x360) & 0xf) * 0x1c;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x378) + uVar10 * 8);
  puVar1 = (undefined4 *)(lVar6 + lVar9);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)(lVar6 + 0x10 + lVar9) = 0;
  *(undefined4 *)(lVar6 + 0x18 + lVar9) = 0;
  *(longlong *)(param_1 + 0x360) = *(longlong *)(param_1 + 0x360) + 1;
  if (*(char *)(param_1 + 0x23) != '\0') {
    uVar10 = (ulonglong)(*(int *)(param_1 + 0x40) + 1);
    *(ulonglong *)(param_1 + 0x348) = uVar10;
    _Size = uVar10 * uVar10 * 2;
    _Dst = (void *)FUN_1433245e0(*(undefined8 *)(param_1 + 0x340),_Size);
    *(void **)(param_1 + 0x350) = _Dst;
    _guard_xfg_dispatch_icall_nop(_Dst,0xff,_Size);
    uVar10 = uVar11;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      do {
        uVar8 = (ulonglong)((uint)uVar10 & 0xf);
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x68) + (uVar10 >> 4) * 8);
        if ((*(int *)(lVar6 + 8 + uVar8 * 0x14) != 0) && (*(int *)(lVar6 + 0xc + uVar8 * 0x14) != 0)
           ) {
          FUN_14333c320(param_1);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ulonglong *)(param_1 + 0x50));
    }
    uVar10 = uVar11;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      do {
        uVar8 = (ulonglong)((uint)uVar10 & 0xf);
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x68) + (uVar10 >> 4) * 8);
        if (*(int *)(lVar6 + 8 + uVar8 * 0x14) != 0) {
          FUN_14333c1a0(param_1);
        }
        if (*(int *)(lVar6 + 0xc + uVar8 * 0x14) != 0) {
          FUN_14333c1a0(param_1);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ulonglong *)(param_1 + 0x50));
    }
  }
  FUN_1433382e0(param_1);
  uVar10 = uVar11;
  if (*(longlong *)(param_1 + 0x360) != 0) {
    do {
      FUN_143343790(param_1 + 0x380);
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(ulonglong *)(param_1 + 0x360));
  }
  if (*(char *)(param_1 + 0x3b0) == '\0') {
    uVar10 = uVar11;
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      do {
        FUN_143340ff0(param_1,(ulonglong)((uint)uVar10 & 0xf) * 0x20 +
                              *(longlong *)(*(longlong *)(param_1 + 0x2e8) + (uVar10 >> 4) * 8));
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ulonglong *)(param_1 + 0x2d0));
    }
  }
  else if (*(char *)(param_1 + 0x21) == '\0') {
    FUN_14333fba0(param_1);
  }
  else {
    FUN_14333c1a0(param_1,1);
    *(undefined1 *)(param_1 + 0x3b0) = 0;
    uVar10 = uVar11;
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      do {
        FUN_143340ff0(param_1,(ulonglong)((uint)uVar10 & 0xf) * 0x20 +
                              *(longlong *)(*(longlong *)(param_1 + 0x2e8) + (uVar10 >> 4) * 8));
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ulonglong *)(param_1 + 0x2d0));
    }
    *(undefined1 *)(param_1 + 0x3b0) = 1;
    FUN_14333f6b0(param_1);
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    do {
      uVar10 = (ulonglong)((uint)uVar11 & 0xf);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x338) + (uVar11 >> 4) * 8);
      uVar2 = *(ushort *)(lVar6 + 0x12 + uVar10 * 0x14);
      if (uVar2 != 0xffff) {
        lVar12 = (ulonglong)(uVar2 & 0xf) * 0x1c;
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x378) + (ulonglong)(uVar2 >> 4) * 8);
        *(undefined4 *)(lVar6 + 8 + uVar10 * 0x14) = *(undefined4 *)(lVar9 + 0x18 + lVar12);
        piVar5 = (int *)(lVar9 + 0x18 + lVar12);
        *piVar5 = *piVar5 + 1;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(ulonglong *)(param_1 + 800));
  }
  if (((param_2 != '\0') && (*(uint *)(param_1 + 0x24) != 0)) &&
     ((ulonglong)*(uint *)(param_1 + 0x24) < *(ulonglong *)(param_1 + 800))) {
    FUN_143337330(param_1);
  }
  return;
}



// FUNCTION 143337330 FUN_143337330 body=350 status=ok
// SIG undefined FUN_143337330(void)

void FUN_143337330(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar8 = 0;
  while( true ) {
    uVar10 = *(ulonglong *)(param_1 + 0x360);
    bVar5 = true;
    uVar9 = uVar8;
    if (uVar10 == 0) {
      return;
    }
    do {
      if (*(uint *)(param_1 + 0x24) <
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x378) + (uVar9 >> 4) * 8) +
                    (ulonglong)((uint)uVar9 & 0xf) * 0x1c + 0x18)) {
        FUN_14333c7d0(param_1);
        bVar5 = false;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar10);
    if (bVar5) break;
    uVar10 = uVar8;
    if (*(longlong *)(param_1 + 0x360) != 0) {
      do {
        uVar6 = (uint)uVar10;
        uVar9 = uVar10 >> 4;
        uVar10 = uVar10 + 1;
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x378) + uVar9 * 8) + 0x18 +
         (ulonglong)(uVar6 & 0xf) * 0x1c) = 0;
      } while (uVar10 < *(ulonglong *)(param_1 + 0x360));
    }
    uVar10 = uVar8;
    if (*(longlong *)(param_1 + 800) != 0) {
      do {
        uVar9 = (ulonglong)((uint)uVar10 & 0xf);
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x338) + (uVar10 >> 4) * 8);
        uVar2 = *(ushort *)(lVar3 + 0x12 + uVar9 * 0x14);
        if (uVar2 != 0xffff) {
          lVar7 = (ulonglong)(uVar2 & 0xf) * 0x1c;
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x378) + (ulonglong)(uVar2 >> 4) * 8);
          *(undefined4 *)(lVar3 + uVar9 * 0x14 + 8) = *(undefined4 *)(lVar4 + 0x18 + lVar7);
          piVar1 = (int *)(lVar4 + 0x18 + lVar7);
          *piVar1 = *piVar1 + 1;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ulonglong *)(param_1 + 800));
    }
  }
  return;
}



// FUNCTION 1433375d0 FUN_1433375d0 body=654 status=ok
// SIG undefined FUN_1433375d0(void)

Matrix2x4<float> *
FUN_1433375d0(longlong param_1,Matrix2x4<float> *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar6 = 0;
  *(undefined8 *)param_2 = 0x3f800000;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0x3f800000;
  if ((*(float *)(param_1 + 0x21c) <= *(float *)(param_1 + 0x214)) ||
     (*(float *)(param_1 + 0x220) <= *(float *)(param_1 + 0x218))) {
    *(undefined4 *)(param_1 + 0x214) = 0x7149f2ca;
    *(undefined4 *)(param_1 + 0x218) = 0x7149f2ca;
    *(undefined4 *)(param_1 + 0x21c) = 0xf149f2ca;
    *(undefined4 *)(param_1 + 0x220) = 0xf149f2ca;
    if (*(ulonglong *)(param_1 + 800) != 0) {
      fVar11 = 1e+30;
      fVar8 = -1e+30;
      fVar10 = 1e+30;
      fVar9 = -1e+30;
      uVar7 = uVar6;
      do {
        pfVar1 = (float *)(*(longlong *)(*(longlong *)(param_1 + 0x338) + (uVar7 >> 4) * 8) +
                          (ulonglong)((uint)uVar7 & 0xf) * 0x14);
        fVar3 = *pfVar1;
        fVar4 = pfVar1[1];
        if (fVar3 < fVar11) {
          *(float *)(param_1 + 0x214) = fVar3;
          fVar11 = fVar3;
        }
        if (fVar4 < fVar10) {
          *(float *)(param_1 + 0x218) = fVar4;
          fVar10 = fVar4;
        }
        if (fVar8 < fVar3) {
          *(float *)(param_1 + 0x21c) = fVar3;
          fVar8 = fVar3;
        }
        if (fVar9 < fVar4) {
          *(float *)(param_1 + 0x220) = fVar4;
          fVar9 = fVar4;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ulonglong *)(param_1 + 800));
    }
  }
  fVar8 = *(float *)(param_1 + 0x21c);
  if (*(float *)(param_1 + 0x214) < fVar8) {
    fVar9 = *(float *)(param_1 + 0x218);
    if (fVar9 < *(float *)(param_1 + 0x220)) {
      uStack_60 = param_5;
      local_58 = param_5;
      local_54 = param_6;
      local_48 = CONCAT44(fVar9,*(float *)(param_1 + 0x214));
      uStack_40 = CONCAT44(fVar9,fVar8);
      local_38 = CONCAT44(*(float *)(param_1 + 0x220),fVar8);
      local_68 = param_3;
      uStack_64 = param_4;
      uStack_5c = param_4;
      FUN_143326520(param_2,&local_48,&local_68);
      if (*(longlong *)(param_1 + 800) != 0) {
        do {
          uVar7 = (ulonglong)((uint)uVar6 & 0xf);
          uVar5 = uVar6 >> 4;
          uVar6 = uVar6 + 1;
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x338) + uVar5 * 8);
          fVar8 = *(float *)(lVar2 + uVar7 * 0x14);
          fVar9 = *(float *)(lVar2 + 4 + uVar7 * 0x14);
          *(float *)(lVar2 + uVar7 * 0x14) =
               fVar8 * *(float *)param_2 + fVar9 * *(float *)(param_2 + 4) +
               *(float *)(param_2 + 0xc);
          *(float *)(lVar2 + 4 + uVar7 * 0x14) =
               fVar8 * *(float *)(param_2 + 0x10) + fVar9 * *(float *)(param_2 + 0x14) +
               *(float *)(param_2 + 0x1c);
        } while (uVar6 < *(ulonglong *)(param_1 + 800));
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



// FUNCTION 1433378c0 FUN_1433378c0 body=186 status=ok
// SIG undefined FUN_1433378c0(void)

ulonglong FUN_1433378c0(longlong param_1,uint *param_2,longlong param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  if (param_4 == 0) {
    return 0;
  }
  do {
    uVar3 = param_2[5];
    if (*(ulonglong *)(param_1 + 800) <= (ulonglong)uVar3) {
      return uVar6;
    }
    uVar7 = uVar6;
    if ((uint)*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x338) + (ulonglong)(uVar3 >> 4) * 8) + 0x12 +
               (ulonglong)(uVar3 & 0xf) * 0x14) == *param_2) {
      uVar7 = (ulonglong)((int)uVar6 + 1);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x338) + (ulonglong)(uVar3 >> 4) * 8);
      puVar1 = (undefined8 *)(lVar4 + (ulonglong)(uVar3 & 0xf) * 0x14);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(param_3 + uVar6 * 0x14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      *(undefined4 *)(param_3 + 0x10 + uVar6 * 0x14) =
           *(undefined4 *)(lVar4 + 0x10 + (ulonglong)(uVar3 & 0xf) * 0x14);
    }
    param_2[5] = param_2[5] + 1;
    uVar6 = uVar7;
  } while ((uint)uVar7 < param_4);
  return uVar7;
}



// FUNCTION 143337980 FUN_143337980 body=229 status=ok
// SIG undefined FUN_143337980(void)

void FUN_143337980(longlong param_1,uint param_2,undefined2 *param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_5 != 0) {
    do {
      uVar1 = uVar3 + param_4;
      uVar3 = uVar3 + 1;
      puVar2 = (uint *)(*(longlong *)
                         (*(longlong *)
                           (*(longlong *)(param_1 + 0x388) + 0x18 + (ulonglong)param_2 * 0x20) +
                         (ulonglong)(uVar1 >> 4) * 8) + (ulonglong)(uVar1 & 0xf) * 0x18);
      *param_3 = *(undefined2 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x338) + (ulonglong)(*puVar2 >> 4) * 8) + 8
                  + (ulonglong)(*puVar2 & 0xf) * 0x14);
      param_3[1] = *(undefined2 *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x338) + (ulonglong)(puVar2[1] >> 4) * 8)
                     + 8 + (ulonglong)(puVar2[1] & 0xf) * 0x14);
      param_3[2] = *(undefined2 *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x338) + (ulonglong)(puVar2[2] >> 4) * 8)
                     + 8 + (ulonglong)(puVar2[2] & 0xf) * 0x14);
      param_3 = param_3 + 3;
    } while (uVar3 < param_5);
  }
  return;
}



// FUNCTION 143337a70 FUN_143337a70 body=61 status=ok
// SIG undefined FUN_143337a70(void)

void FUN_143337a70(longlong param_1,uint param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)((ulonglong)param_2 * 0x20 + *(longlong *)(param_1 + 0x388));
  local_10 = *(undefined8 *)((ulonglong)param_2 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x388));
  FUN_143343010(&local_18,0,local_18,param_1 + 0x318);
  return;
}



// FUNCTION 143337b60 FUN_143337b60 body=337 status=ok
// SIG undefined FUN_143337b60(void)

void FUN_143337b60(longlong param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  uVar3 = param_2;
  if (*(char *)(param_1 + 0x23) != '\0') {
    uVar3 = 0;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x360) >> 4;
  if (*(ulonglong *)(param_1 + 0x368) <= uVar6) {
    FUN_143343fa0(param_1 + 0x358,uVar6);
  }
  lVar4 = (ulonglong)(*(uint *)(param_1 + 0x360) & 0xf) * 0x1c;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x378) + uVar6 * 8);
  puVar1 = (undefined4 *)(lVar2 + lVar4);
  *puVar1 = 0;
  puVar1[1] = uVar3;
  puVar1[2] = uVar3;
  puVar1[3] = param_3 & 8;
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0;
  *(undefined4 *)(lVar2 + 0x18 + lVar4) = 0;
  *(longlong *)(param_1 + 0x360) = *(longlong *)(param_1 + 0x360) + 1;
  if (*(char *)(param_1 + 0x23) != '\0') {
    uVar3 = *(undefined4 *)(param_1 + 0x360);
    uVar6 = *(ulonglong *)(param_1 + 0x360) >> 4;
    if (*(ulonglong *)(param_1 + 0x368) <= uVar6) {
      FUN_143343fa0(param_1 + 0x358,uVar6);
    }
    lVar4 = (ulonglong)(*(uint *)(param_1 + 0x360) & 0xf) * 0x1c;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x378) + uVar6 * 8);
    puVar1 = (undefined4 *)(lVar2 + lVar4);
    *puVar1 = uVar3;
    puVar1[1] = param_2;
    puVar1[2] = param_2;
    puVar1[3] = param_3 & 8 | 0x8000;
    *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x8000;
    *(undefined4 *)(lVar2 + 0x18 + lVar4) = 0;
    *(longlong *)(param_1 + 0x360) = *(longlong *)(param_1 + 0x360) + 1;
  }
  *(uint *)(param_1 + 0x3a4) = (uint)(*(char *)(param_1 + 0x23) != '\0');
  if (*(longlong *)(param_1 + 0x360) != 0) {
    do {
      FUN_143343790(param_1 + 0x380);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ulonglong *)(param_1 + 0x360));
  }
  return;
}



// FUNCTION 143337cc0 FUN_143337cc0 body=682 status=ok
// SIG undefined FUN_143337cc0(void)

undefined8 FUN_143337cc0(longlong param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined2 uVar20;
  uint uVar21;
  bool bVar22;
  undefined4 uStack_34;
  
  uVar21 = param_2[2];
  if (uVar21 == 0) {
    uVar21 = param_2[3];
  }
  FUN_143337b60(param_1,uVar21,10);
  uVar6 = *param_2;
  uVar13 = (ulonglong)uVar6;
  lVar17 = *(longlong *)(param_1 + 0x90);
  uVar20 = (undefined2)uVar21;
  lVar7 = *(longlong *)(lVar17 + (ulonglong)(uVar6 >> 4) * 8);
  uVar19 = (ulonglong)((uint)(uVar13 + 1) & 0xf);
  lVar8 = *(longlong *)(lVar17 + (uVar13 + 1 >> 4) * 8);
  uVar16 = (ulonglong)((uint)(uVar13 + 2) & 0xf);
  fVar4 = *(float *)(lVar8 + 4 + uVar19 * 8);
  lVar17 = *(longlong *)(lVar17 + (uVar13 + 2 >> 4) * 8);
  fVar5 = *(float *)(lVar8 + uVar19 * 8);
  bVar9 = (fVar4 - *(float *)(lVar7 + 4 + (ulonglong)(uVar6 & 0xf) * 8)) *
          (*(float *)(lVar17 + uVar16 * 8) - fVar5) -
          (fVar5 - *(float *)(lVar7 + (ulonglong)(uVar6 & 0xf) * 8)) *
          (*(float *)(lVar17 + 4 + uVar16 * 8) - fVar4) <= 1e-05;
  uVar16 = 0;
  bVar22 = *(char *)(param_1 + 0x23) != '\0';
  uVar19 = uVar13 + 2;
  if (bVar9) {
    uVar19 = uVar13;
  }
  do {
    uVar13 = uVar16;
    if (!bVar9) {
      uVar13 = -uVar16;
    }
    uVar14 = (ulonglong)((uint)(uVar19 + uVar13) & 0xf);
    uVar18 = *(ulonglong *)(param_1 + 800) >> 4;
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (uVar19 + uVar13 >> 4) * 8);
    uVar10 = *(undefined4 *)(lVar17 + uVar14 * 8);
    uVar11 = *(undefined4 *)(lVar17 + 4 + uVar14 * 8);
    if (*(ulonglong *)(param_1 + 0x328) <= uVar18) {
      FUN_143344360(param_1 + 0x318,uVar18);
    }
    uVar16 = uVar16 + 1;
    uVar13 = (ulonglong)(*(uint *)(param_1 + 800) & 0xf);
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x338) + uVar18 * 8);
    puVar1 = (undefined4 *)(lVar17 + uVar13 * 0x14);
    *puVar1 = uVar10;
    puVar1[1] = uVar11;
    puVar1[2] = 0xffffffff;
    puVar1[3] = CONCAT22(uVar20,uVar20);
    *(uint *)(lVar17 + 0x10 + uVar13 * 0x14) = (uint)CONCAT12(bVar22,10);
    *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
  } while (uVar16 < 3);
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x378) + (ulonglong)(*(uint *)(param_1 + 0x3a4) >> 4) * 8)
    + 0x18 + (ulonglong)(*(uint *)(param_1 + 0x3a4) & 0xf) * 0x1c) = 3;
  uVar10 = FUN_14333c670(param_1,*(undefined4 *)(param_1 + 0x3a4),0,uVar21,10);
  uVar11 = FUN_14333c670(param_1,*(undefined4 *)(param_1 + 0x3a4),1,uVar21,10);
  uVar12 = FUN_14333c670(param_1,*(undefined4 *)(param_1 + 0x3a4),2,uVar21,10);
  lVar17 = (ulonglong)*(uint *)(param_1 + 0x3a4) * 0x20;
  puVar15 = (ulonglong *)(*(longlong *)(param_1 + 0x388) + lVar17);
  uVar19 = *puVar15 >> 4;
  if (puVar15[1] <= uVar19) {
    FUN_143343d10(param_1 + 0x380,puVar15,uVar19);
  }
  uVar13 = (ulonglong)((uint)*puVar15 & 0xf);
  lVar7 = *(longlong *)(puVar15[3] + uVar19 * 8);
  puVar2 = (undefined8 *)(lVar7 + uVar13 * 0x18);
  *puVar2 = CONCAT44(uVar11,uVar10);
  puVar2[1] = CONCAT26(uVar20,CONCAT24(uVar20,uVar12));
  *(ulonglong *)(lVar7 + 0x10 + uVar13 * 0x18) = CONCAT44(uStack_34,CONCAT22((ushort)bVar22,10));
  lVar7 = *(longlong *)(param_1 + 0x388);
  plVar3 = (longlong *)(lVar17 + lVar7);
  *plVar3 = *plVar3 + 1;
  return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
}



// FUNCTION 143337f70 FUN_143337f70 body=859 status=ok
// SIG undefined FUN_143337f70(void)

undefined8 FUN_143337f70(longlong param_1,uint *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  ushort uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined2 uVar21;
  uint uVar22;
  bool bVar23;
  undefined4 uStack_34;
  
  uVar22 = param_2[2];
  if (uVar22 == 0) {
    uVar22 = param_2[3];
  }
  FUN_143337b60(param_1,uVar22,10);
  uVar6 = *param_2;
  uVar14 = (ulonglong)uVar6;
  lVar20 = *(longlong *)(param_1 + 0x90);
  uVar21 = (undefined2)uVar22;
  lVar7 = *(longlong *)(lVar20 + (ulonglong)(uVar6 >> 4) * 8);
  uVar19 = (ulonglong)((uint)(uVar14 + 1) & 0xf);
  lVar8 = *(longlong *)(lVar20 + (uVar14 + 1 >> 4) * 8);
  uVar16 = (ulonglong)((uint)(uVar14 + 2) & 0xf);
  fVar4 = *(float *)(lVar8 + 4 + uVar19 * 8);
  lVar20 = *(longlong *)(lVar20 + (uVar14 + 2 >> 4) * 8);
  fVar5 = *(float *)(lVar8 + uVar19 * 8);
  bVar9 = (fVar4 - *(float *)(lVar7 + 4 + (ulonglong)(uVar6 & 0xf) * 8)) *
          (*(float *)(lVar20 + uVar16 * 8) - fVar5) -
          (fVar5 - *(float *)(lVar7 + (ulonglong)(uVar6 & 0xf) * 8)) *
          (*(float *)(lVar20 + 4 + uVar16 * 8) - fVar4) <= 1e-05;
  uVar16 = 0;
  bVar23 = *(char *)(param_1 + 0x23) != '\0';
  uVar10 = (ushort)bVar23;
  uVar19 = uVar14 + 3;
  if (bVar9) {
    uVar19 = uVar14;
  }
  do {
    uVar14 = uVar16;
    if (!bVar9) {
      uVar14 = -uVar16;
    }
    uVar15 = (ulonglong)((uint)(uVar19 + uVar14) & 0xf);
    uVar18 = *(ulonglong *)(param_1 + 800) >> 4;
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (uVar19 + uVar14 >> 4) * 8);
    uVar11 = *(undefined4 *)(lVar20 + uVar15 * 8);
    uVar12 = *(undefined4 *)(lVar20 + 4 + uVar15 * 8);
    if (*(ulonglong *)(param_1 + 0x328) <= uVar18) {
      FUN_143344360(param_1 + 0x318,uVar18);
    }
    uVar16 = uVar16 + 1;
    uVar14 = (ulonglong)(*(uint *)(param_1 + 800) & 0xf);
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x338) + uVar18 * 8);
    puVar1 = (undefined4 *)(lVar20 + uVar14 * 0x14);
    *puVar1 = uVar11;
    puVar1[1] = uVar12;
    puVar1[2] = 0xffffffff;
    puVar1[3] = CONCAT22(uVar21,uVar21);
    *(uint *)(lVar20 + 0x10 + uVar14 * 0x14) = (uint)CONCAT12(bVar23,10);
    *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
  } while (uVar16 < 4);
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x378) + (ulonglong)(*(uint *)(param_1 + 0x3a4) >> 4) * 8)
    + 0x18 + (ulonglong)(*(uint *)(param_1 + 0x3a4) & 0xf) * 0x1c) = 4;
  uVar11 = FUN_14333c670(param_1,*(undefined4 *)(param_1 + 0x3a4),1,uVar22,10);
  uVar12 = FUN_14333c670(param_1,*(undefined4 *)(param_1 + 0x3a4),2,uVar22,10);
  uVar13 = FUN_14333c670(param_1,*(undefined4 *)(param_1 + 0x3a4),0,uVar22,10);
  lVar20 = (ulonglong)*(uint *)(param_1 + 0x3a4) * 0x20;
  puVar17 = (ulonglong *)(*(longlong *)(param_1 + 0x388) + lVar20);
  uVar19 = *puVar17 >> 4;
  if (puVar17[1] <= uVar19) {
    FUN_143343d10(param_1 + 0x380,puVar17,uVar19);
  }
  uVar14 = (ulonglong)((uint)*puVar17 & 0xf);
  lVar7 = *(longlong *)(puVar17[3] + uVar19 * 8);
  puVar1 = (undefined4 *)(lVar7 + uVar14 * 0x18);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  puVar1[2] = uVar13;
  puVar1[3] = CONCAT22(uVar21,uVar21);
  *(ulonglong *)(lVar7 + 0x10 + uVar14 * 0x18) = CONCAT44(uStack_34,CONCAT22(uVar10,10));
  plVar2 = (longlong *)(lVar20 + *(longlong *)(param_1 + 0x388));
  *plVar2 = *plVar2 + 1;
  uVar11 = FUN_14333c670(param_1,*(undefined4 *)(param_1 + 0x3a4),0,uVar22,10);
  uVar12 = FUN_14333c670(param_1,*(undefined4 *)(param_1 + 0x3a4),2,uVar22,10);
  uVar13 = FUN_14333c670(param_1,*(undefined4 *)(param_1 + 0x3a4),3,uVar22,10);
  lVar20 = (ulonglong)*(uint *)(param_1 + 0x3a4) * 0x20;
  puVar17 = (ulonglong *)(*(longlong *)(param_1 + 0x388) + lVar20);
  uVar19 = *puVar17 >> 4;
  if (puVar17[1] <= uVar19) {
    FUN_143343d10(param_1 + 0x380,puVar17,uVar19);
  }
  uVar14 = (ulonglong)((uint)*puVar17 & 0xf);
  lVar7 = *(longlong *)(puVar17[3] + uVar19 * 8);
  puVar3 = (undefined8 *)(lVar7 + uVar14 * 0x18);
  *puVar3 = CONCAT44(uVar12,uVar11);
  puVar3[1] = CONCAT26(uVar21,CONCAT24(uVar21,uVar13));
  *(ulonglong *)(lVar7 + 0x10 + uVar14 * 0x18) = CONCAT44(uStack_34,CONCAT22(uVar10,10));
  lVar7 = *(longlong *)(param_1 + 0x388);
  plVar2 = (longlong *)(lVar20 + lVar7);
  *plVar2 = *plVar2 + 1;
  return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
}



// FUNCTION 1433382e0 FUN_1433382e0 body=772 status=ok
// SIG undefined FUN_1433382e0(void)

void FUN_1433382e0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x490) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined8 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x550) = 0;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined8 *)(param_1 + 0x540) = 0;
  *(undefined8 *)(param_1 + 0x558) = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar3 = uVar2;
  if (*(longlong *)(lVar1 + 0x20) != 0) {
    do {
      uVar3 = uVar3 + 0x18;
      uVar2 = uVar2 + 1;
      *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + -8 + uVar3) =
           *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + -0x18 + uVar3);
    } while (uVar2 < *(ulonglong *)(lVar1 + 0x20));
  }
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x10);
  return;
}



// FUNCTION 1433385f0 FUN_1433385f0 body=1062 status=ok
// SIG undefined FUN_1433385f0(void)

void FUN_1433385f0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  void *_Dst;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_143343ae0(param_1 + 0x1f8);
    uVar5 = 0;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      do {
        uVar6 = *(ulonglong *)(param_1 + 0x110) >> 4;
        if (*(ulonglong *)(param_1 + 0x118) <= uVar6) {
          FUN_143343dc0(param_1 + 0x108);
        }
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x128) + uVar6 * 8) +
                (ulonglong)(*(uint *)(param_1 + 0x110) & 0xf) * 4) = (int)uVar5;
        uVar5 = uVar5 + 1;
        *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + 1;
      } while (uVar5 < *(ulonglong *)(param_1 + 0x78));
    }
    FUN_143341af0(param_1 + 0x108,0,*(undefined8 *)(param_1 + 0x110),param_1 + 0x70);
    fVar9 = -1e+30;
    uVar6 = 0;
    uVar5 = 0;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      do {
        uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x128) + (uVar5 >> 4) * 8) +
                         (ulonglong)((uint)uVar5 & 0xf) * 4);
        uVar7 = (ulonglong)(uVar8 & 0xf);
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar8 >> 4) * 8);
        fVar10 = *(float *)(lVar1 + 4 + uVar7 * 8);
        if (fVar10 - fVar9 <= ABS(fVar10) * *(float *)(param_1 + 0x1c)) {
          *(float *)(lVar1 + 4 + uVar7 * 8) = fVar9;
        }
        else {
          uVar3 = uVar6 >> 4;
          uVar2 = (uint)uVar6;
          uVar6 = uVar6 + 1;
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x128) + uVar3 * 8) +
                   (ulonglong)(uVar2 & 0xf) * 4) = uVar8;
          fVar9 = *(float *)(lVar1 + 4 + uVar7 * 8);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ulonglong *)(param_1 + 0x110));
    }
    if (uVar6 < *(ulonglong *)(param_1 + 0x110)) {
      *(ulonglong *)(param_1 + 0x110) = uVar6;
    }
    uVar5 = 0;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      do {
        FUN_143338c20(param_1,*(longlong *)(*(longlong *)(param_1 + 0x68) + (uVar5 >> 4) * 8) +
                              (ulonglong)((uint)uVar5 & 0xf) * 0x14);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ulonglong *)(param_1 + 0x50));
    }
    uVar5 = *(ulonglong *)(param_1 + 0xd0);
    if (*(ulonglong *)(param_1 + 0xf8) < uVar5) {
      _Dst = (void *)FUN_1433245e0(*(undefined8 *)(param_1 + 0xf0));
      _guard_xfg_dispatch_icall_nop(_Dst,0,uVar5 * 8);
      if ((*(void **)(param_1 + 0x100) != (void *)0x0) && (*(longlong *)(param_1 + 0xf8) != 0)) {
        _guard_xfg_dispatch_icall_nop
                  (_Dst,*(void **)(param_1 + 0x100),*(longlong *)(param_1 + 0xf8) * 8);
      }
      *(void **)(param_1 + 0x100) = _Dst;
    }
    uVar6 = 0;
    *(ulonglong *)(param_1 + 0xf8) = uVar5;
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      do {
        *(ulonglong *)(*(longlong *)(param_1 + 0x100) + uVar6 * 8) =
             (ulonglong)((uint)uVar6 & 0xf) * 0x2c +
             *(longlong *)(*(longlong *)(param_1 + 0xe8) + (uVar6 >> 4) * 8);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ulonglong *)(param_1 + 0xd0));
    }
    FUN_143342db0((undefined8 *)(param_1 + 0xf0),0,*(undefined8 *)(param_1 + 0xf8),&LAB_143344440);
    uVar8 = 0;
    uVar5 = *(ulonglong *)(param_1 + 0x110);
    if (uVar5 != 0) {
      uVar6 = 0;
      fVar9 = *(float *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x90) +
                          (ulonglong)(*(uint *)**(undefined8 **)(param_1 + 0x128) >> 4) * 8) + 4 +
                        (ulonglong)(*(uint *)**(undefined8 **)(param_1 + 0x128) & 0xf) * 8);
      uVar2 = 0;
      do {
        uVar8 = uVar8 + 1;
        fVar10 = fVar9;
        if (uVar8 < uVar5) {
          uVar4 = *(uint *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x128) + (ulonglong)(uVar8 >> 4) * 8) +
                           (ulonglong)(uVar8 & 0xf) * 4);
          fVar10 = *(float *)(*(longlong *)
                               (*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar4 >> 4) * 8) + 4 +
                             (ulonglong)(uVar4 & 0xf) * 8);
        }
        uVar4 = uVar2;
        if (uVar6 < *(ulonglong *)(param_1 + 0xf8)) {
          do {
            if (fVar9 < *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x100) + uVar6 * 8) + 8))
            break;
            uVar4 = uVar4 + 1;
            uVar6 = (ulonglong)uVar4;
          } while (uVar6 < *(ulonglong *)(param_1 + 0xf8));
        }
        uVar2 = FUN_143339060(param_1,fVar9,fVar10,uVar2,uVar4 - uVar2);
        if (*(longlong *)(param_1 + 0x1d8) == 0) {
          if (uVar2 != 0) {
            FUN_143338f50(param_1,param_1 + 0x130);
          }
          FUN_14333b5a0(param_1,param_1 + 0x130,fVar9);
        }
        else {
          FUN_14333c000(param_1,fVar9,fVar10,uVar2);
        }
        if ((uVar2 & 2) != 0) {
          uVar7 = 0;
          uVar5 = 0;
          if (*(longlong *)(param_1 + 0x138) != 0) {
            do {
              lVar1 = *(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x150) + (uVar5 >> 4) * 8) +
                       (ulonglong)((uint)uVar5 & 0xf) * 8);
              if ((*(byte *)(lVar1 + 0x16) & 2) == 0) {
                uVar3 = uVar7 >> 4;
                uVar2 = (uint)uVar7;
                uVar7 = uVar7 + 1;
                *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x150) + uVar3 * 8) +
                 (ulonglong)(uVar2 & 0xf) * 8) = lVar1;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < *(ulonglong *)(param_1 + 0x138));
          }
          if (uVar7 < *(ulonglong *)(param_1 + 0x138)) {
            *(ulonglong *)(param_1 + 0x138) = uVar7;
          }
        }
        uVar5 = *(ulonglong *)(param_1 + 0x110);
        fVar9 = fVar10;
        uVar2 = uVar4;
      } while (uVar8 < uVar5);
    }
  }
  return;
}



// FUNCTION 143338a20 FUN_143338a20 body=492 status=ok
// SIG undefined FUN_143338a20(void)

void FUN_143338a20(longlong param_1,uint param_2,uint param_3,int param_4,undefined2 param_5,
                  undefined2 param_6)

{
  ulonglong *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar9 = *(uint *)(param_1 + 0xa8);
  if (param_3 != 0) {
    uVar14 = (ulonglong)param_3;
    do {
      uVar13 = param_2 + param_4;
      uVar15 = *(ulonglong *)(param_1 + 0xa8) >> 4;
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(param_2 >> 4) * 8);
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar13 >> 4) * 8);
      fVar2 = *(float *)(lVar12 + (ulonglong)(uVar13 & 0xf) * 8);
      fVar3 = *(float *)(lVar12 + 4 + (ulonglong)(uVar13 & 0xf) * 8);
      fVar4 = *(float *)(lVar11 + (ulonglong)(param_2 & 0xf) * 8);
      fVar5 = *(float *)(lVar11 + 4 + (ulonglong)(param_2 & 0xf) * 8);
      if (*(ulonglong *)(param_1 + 0xb0) <= uVar15) {
        FUN_143324830(param_1 + 0xa0,uVar15);
      }
      *(ulonglong *)
       (*(longlong *)(*(longlong *)(param_1 + 0xc0) + uVar15 * 8) +
       (ulonglong)(*(uint *)(param_1 + 0xa8) & 0xf) * 8) =
           CONCAT44((fVar2 - fVar4) / (fVar3 - fVar5),param_2);
      *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + 1;
      uVar14 = uVar14 - 1;
      param_2 = uVar13;
    } while (uVar14 != 0);
  }
  uVar14 = *(ulonglong *)(param_1 + 0xd0) >> 4;
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)(uVar9 >> 4) * 8);
  uVar13 = *(uint *)(lVar11 + (ulonglong)(uVar9 & 0xf) * 8);
  uVar15 = (ulonglong)(uVar13 & 0xf);
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar13 >> 4) * 8);
  iVar10 = *(int *)(param_1 + 0xa8);
  uVar6 = *(undefined4 *)(lVar12 + 4 + uVar15 * 8);
  uVar7 = *(undefined4 *)(lVar12 + uVar15 * 8);
  uVar8 = *(undefined4 *)(lVar11 + 4 + (ulonglong)(uVar9 & 0xf) * 8);
  if (*(ulonglong *)(param_1 + 0xd8) <= uVar14) {
    FUN_143344040(param_1 + 200,uVar14);
  }
  lVar12 = (ulonglong)(*(uint *)(param_1 + 0xd0) & 0xf) * 0x2c;
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + uVar14 * 8);
  *(undefined8 *)(lVar11 + lVar12) = CONCAT44(iVar10 + -1,uVar9);
  ((undefined8 *)(lVar11 + lVar12))[1] = CONCAT44(uVar7,uVar6);
  puVar1 = (ulonglong *)(lVar11 + 0x10 + lVar12);
  *puVar1 = (ulonglong)CONCAT24((short)param_4,uVar8);
  puVar1[1] = (ulonglong)CONCAT22(param_6,param_5);
  *(undefined8 *)(lVar11 + 0x20 + lVar12) = 0xffffffff00000000;
  *(undefined4 *)(lVar11 + 0x28 + lVar12) = 0;
  *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_1 + 0xd0) + 1;
  return;
}



// FUNCTION 143338c20 FUN_143338c20 body=532 status=ok
// SIG undefined FUN_143338c20(void)

void FUN_143338c20(longlong param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  iVar7 = *param_2;
  iVar6 = param_2[1];
  if (iVar7 < iVar6) {
    do {
      cVar4 = FUN_143344510(param_1,iVar7,*param_2);
      if (cVar4 != '\0') {
        uVar8 = iVar7 + 1;
        iVar5 = 1;
        uVar9 = uVar8;
        while ((uVar9 = uVar9 + 1, (int)uVar8 < iVar6 &&
               (*(float *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x90) +
                            ((ulonglong)(longlong)(int)uVar8 >> 4) * 8) + 4 +
                          (ulonglong)(uVar8 & 0xf) * 8) <
                *(float *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x90) +
                            ((ulonglong)(longlong)(int)uVar9 >> 4) * 8) + 4 +
                          (ulonglong)(uVar9 & 0xf) * 8)))) {
          iVar5 = iVar5 + 1;
          uVar8 = uVar8 + 1;
        }
        FUN_143338a20(param_1,iVar7,iVar5,1,param_2[2],param_2[3]);
        iVar7 = iVar7 + -1 + iVar5;
      }
      iVar6 = param_2[1];
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar6);
  }
  uVar8 = param_2[1];
  iVar7 = *param_2;
  if (iVar7 < (int)uVar8) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x90);
      uVar9 = uVar8 - 1;
      fVar1 = *(float *)(*(longlong *)(lVar3 + ((ulonglong)(longlong)(int)uVar8 >> 4) * 8) + 4 +
                        (ulonglong)(uVar8 & 0xf) * 8);
      fVar2 = *(float *)(*(longlong *)(lVar3 + ((ulonglong)(longlong)(int)uVar9 >> 4) * 8) + 4 +
                        (ulonglong)(uVar9 & 0xf) * 8);
      if ((int)uVar8 < param_2[1]) {
        if ((fVar1 < fVar2) &&
           (fVar1 <= *(float *)(*(longlong *)
                                 (lVar3 + ((ulonglong)(longlong)(int)(uVar8 + 1) >> 4) * 8) + 4 +
                               (ulonglong)(uVar8 + 1 & 0xf) * 8))) goto LAB_143338d8b;
      }
      else if (fVar1 < fVar2) {
LAB_143338d8b:
        iVar6 = 1;
        uVar10 = uVar9;
        while ((uVar10 = uVar10 - 1, iVar7 < (int)uVar9 &&
               (*(float *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x90) +
                            ((ulonglong)(longlong)(int)uVar9 >> 4) * 8) + 4 +
                          (ulonglong)(uVar9 & 0xf) * 8) <
                *(float *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x90) +
                            ((ulonglong)(longlong)(int)uVar10 >> 4) * 8) + 4 +
                          (ulonglong)(uVar10 & 0xf) * 8)))) {
          iVar6 = iVar6 + 1;
          uVar9 = uVar9 - 1;
        }
        FUN_143338a20(param_1,uVar8,iVar6,0xffffffff,param_2[2],param_2[3]);
        uVar8 = uVar8 + (1 - iVar6);
      }
      iVar7 = *param_2;
      uVar8 = uVar8 - 1;
    } while (iVar7 < (int)uVar8);
  }
  return;
}



// FUNCTION 143338e40 FUN_143338e40 body=260 status=ok
// SIG undefined FUN_143338e40(void)

void FUN_143338e40(longlong param_1,uint param_2,char param_3)

{
  uint *puVar1;
  void *_Dst;
  ulonglong uVar2;
  
  if (param_2 != 0) {
    uVar2 = *(ulonglong *)(param_1 + 0x30);
    while (uVar2 << 5 <= (ulonglong)param_2) {
      if (*(longlong *)(param_1 + 0x30) == 0) {
        uVar2 = 8;
      }
      else {
        uVar2 = *(longlong *)(param_1 + 0x30) * 2;
      }
      if (*(ulonglong *)(param_1 + 0x30) < uVar2) {
        _Dst = (void *)FUN_1433245e0(*(undefined8 *)(param_1 + 0x28));
        _guard_xfg_dispatch_icall_nop(_Dst,0,uVar2 * 4);
        if ((*(void **)(param_1 + 0x38) != (void *)0x0) && (*(longlong *)(param_1 + 0x30) != 0)) {
          _guard_xfg_dispatch_icall_nop
                    (_Dst,*(void **)(param_1 + 0x38),*(longlong *)(param_1 + 0x30) * 4);
        }
        *(void **)(param_1 + 0x38) = _Dst;
      }
      *(ulonglong *)(param_1 + 0x30) = uVar2;
    }
    if (param_3 != '\0') {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(param_2 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
      *(undefined1 *)(param_1 + 0x23) = 1;
    }
    if (*(uint *)(param_1 + 0x40) < param_2) {
      *(uint *)(param_1 + 0x40) = param_2;
    }
  }
  return;
}



// FUNCTION 143338f50 FUN_143338f50 body=251 status=ok
// SIG undefined FUN_143338f50(void)

void FUN_143338f50(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x208),0,*(longlong *)(param_1 + 0x200) << 2);
  uVar5 = 0;
  uVar6 = uVar5;
  if (*(longlong *)(param_2 + 8) != 0) {
    do {
      lVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x20) + (uVar6 >> 4) * 8) +
               (ulonglong)((uint)uVar6 & 0xf) * 8);
      *(ushort *)(lVar3 + 0x16) = *(ushort *)(lVar3 + 0x16) & 0xfffb;
      if ((*(byte *)(lVar3 + 0x16) & 2) == 0) {
        uVar4 = *(ushort *)(lVar3 + 0x1a);
        if (*(int *)(param_1 + 0x18) == 0) {
          piVar1 = (int *)(*(longlong *)(param_1 + 0x208) + (ulonglong)*(ushort *)(lVar3 + 0x18) * 4
                          );
          *piVar1 = *piVar1 + (int)*(short *)(lVar3 + 0x14);
          piVar1 = (int *)(*(longlong *)(param_1 + 0x208) + (ulonglong)uVar4 * 4);
          *piVar1 = *piVar1 - (int)*(short *)(lVar3 + 0x14);
        }
        else {
          puVar2 = (uint *)(*(longlong *)(param_1 + 0x208) +
                           (ulonglong)*(ushort *)(lVar3 + 0x18) * 4);
          *puVar2 = *puVar2 ^ 1;
          puVar2 = (uint *)(*(longlong *)(param_1 + 0x208) + (ulonglong)uVar4 * 4);
          *puVar2 = *puVar2 ^ 1;
        }
        uVar4 = FUN_1433444d0(param_1);
        *(ushort *)(lVar3 + 0x22) = uVar4;
        *(ushort *)(lVar3 + 0x1e) = (ushort)uVar5;
        if ((ushort)uVar5 != uVar4) {
          *(ushort *)(lVar3 + 0x16) = *(ushort *)(lVar3 + 0x16) | 4;
        }
        uVar5 = (ulonglong)uVar4;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ulonglong *)(param_2 + 8));
  }
  return;
}



// FUNCTION 143339060 FUN_143339060 body=2281 status=ok
// SIG undefined FUN_143339060(void)

byte FUN_143339060(longlong param_1,float param_2,float param_3,uint param_4,uint param_5)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  void *_Dst;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  byte bVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  bool bVar21;
  byte bVar22;
  bool bVar23;
  float fVar24;
  ulonglong local_98;
  float local_80;
  
  uVar19 = 0;
  bVar22 = param_5 != 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  bVar14 = bVar22;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    do {
      uVar9 = (uint)uVar19;
      puVar6 = *(uint **)(*(longlong *)(*(longlong *)(param_1 + 0x150) + (uVar19 >> 4) * 8) +
                         (ulonglong)(uVar9 & 0xf) * 8);
      *(ushort *)((longlong)puVar6 + 0x16) = *(ushort *)((longlong)puVar6 + 0x16) & 0xfff7;
      uVar3 = *puVar6;
      uVar15 = (ulonglong)(uVar3 & 0xf);
      lVar20 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)(uVar3 >> 4) * 8);
      uVar12 = *(int *)(lVar20 + uVar15 * 8) + (int)(short)puVar6[5];
      if (*(float *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar12 >> 4) * 8) + 4
                    + (ulonglong)(uVar12 & 0xf) * 8) == param_2) {
        if (uVar3 < puVar6[1]) {
          uVar3 = uVar3 + 1;
          *puVar6 = uVar3;
          uVar18 = (ulonglong)(uVar3 & 0xf);
          lVar20 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)(uVar3 >> 4) * 8);
          uVar12 = *(uint *)(lVar20 + uVar18 * 8);
          uVar3 = uVar12 + (int)(short)puVar6[5];
          uVar15 = (ulonglong)(uVar3 & 0xf);
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar3 >> 4) * 8);
          puVar6[3] = *(uint *)(*(longlong *)
                                 (*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar12 >> 4) * 8) +
                               (ulonglong)(uVar12 & 0xf) * 8);
          if (*(float *)(lVar7 + 4 + uVar15 * 8) == param_3) {
            fVar24 = *(float *)(lVar7 + uVar15 * 8);
          }
          else {
            uVar3 = *(uint *)(lVar20 + uVar18 * 8);
            uVar15 = (ulonglong)(uVar3 & 0xf);
            lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar3 >> 4) * 8);
            fVar24 = (param_3 - *(float *)(lVar7 + 4 + uVar15 * 8)) *
                     *(float *)(lVar20 + 4 + uVar18 * 8) + *(float *)(lVar7 + uVar15 * 8);
          }
          puVar6[4] = (uint)fVar24;
          uVar15 = *(ulonglong *)(param_1 + 0x188) >> 4;
          if (*(ulonglong *)(param_1 + 400) <= uVar15) {
            FUN_143343dc0(param_1 + 0x180,uVar15);
          }
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + uVar15 * 8) +
                   (ulonglong)(*(uint *)(param_1 + 0x188) & 0xf) * 4) = uVar9;
          *(longlong *)(param_1 + 0x188) = *(longlong *)(param_1 + 0x188) + 1;
          *(ushort *)((longlong)puVar6 + 0x16) = *(ushort *)((longlong)puVar6 + 0x16) | 8;
          bVar22 = bVar14;
        }
        else {
          bVar14 = bVar22 | 2;
          *(ushort *)((longlong)puVar6 + 0x16) = *(ushort *)((longlong)puVar6 + 0x16) | 2;
          *(ushort *)((longlong)puVar6 + 0x16) = *(ushort *)((longlong)puVar6 + 0x16) | 8;
          puVar6[3] = puVar6[4];
          bVar22 = bVar14;
        }
      }
      else {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar12 >> 4) * 8);
        puVar6[3] = puVar6[4];
        if (*(float *)(lVar7 + 4 + (ulonglong)(uVar12 & 0xf) * 8) == param_3) {
          fVar24 = *(float *)(lVar7 + (ulonglong)(uVar12 & 0xf) * 8);
        }
        else {
          uVar3 = *(uint *)(lVar20 + uVar15 * 8);
          uVar18 = (ulonglong)(uVar3 & 0xf);
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar3 >> 4) * 8);
          fVar24 = (param_3 - *(float *)(lVar7 + 4 + uVar18 * 8)) *
                   *(float *)(lVar20 + 4 + uVar15 * 8) + *(float *)(lVar7 + uVar18 * 8);
        }
        puVar6[4] = (uint)fVar24;
        uVar15 = *(ulonglong *)(param_1 + 0x188) >> 4;
        if (*(ulonglong *)(param_1 + 400) <= uVar15) {
          FUN_143343dc0(param_1 + 0x180,uVar15);
        }
        *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + uVar15 * 8) +
                 (ulonglong)(*(uint *)(param_1 + 0x188) & 0xf) * 4) = uVar9;
        *(longlong *)(param_1 + 0x188) = *(longlong *)(param_1 + 0x188) + 1;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(ulonglong *)(param_1 + 0x138));
  }
  if (param_5 != 0) {
    lVar20 = (ulonglong)param_4 << 3;
    uVar19 = (ulonglong)param_5;
    do {
      puVar6 = *(uint **)(lVar20 + *(longlong *)(param_1 + 0x100));
      uVar18 = (ulonglong)(*puVar6 & 0xf);
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)(*puVar6 >> 4) * 8);
      uVar3 = *(uint *)(lVar7 + uVar18 * 8);
      uVar9 = (int)(short)puVar6[5] + uVar3;
      uVar15 = (ulonglong)(uVar9 & 0xf);
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar9 >> 4) * 8);
      puVar6[3] = *(uint *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar3 >> 4) * 8) +
                           (ulonglong)(uVar3 & 0xf) * 8);
      *(undefined2 *)((longlong)puVar6 + 0x16) = 8;
      if (*(float *)(lVar13 + 4 + uVar15 * 8) == param_3) {
        fVar24 = *(float *)(lVar13 + uVar15 * 8);
      }
      else {
        uVar3 = *(uint *)(lVar7 + uVar18 * 8);
        uVar15 = (ulonglong)(uVar3 & 0xf);
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar3 >> 4) * 8);
        fVar24 = (param_3 - *(float *)(lVar13 + 4 + uVar15 * 8)) *
                 *(float *)(lVar7 + 4 + uVar18 * 8) + *(float *)(lVar13 + uVar15 * 8);
      }
      puVar6[4] = (uint)fVar24;
      uVar15 = *(ulonglong *)(param_1 + 0x138) >> 4;
      if (*(ulonglong *)(param_1 + 0x140) <= uVar15) {
        FUN_143343e60(param_1 + 0x130,uVar15);
      }
      lVar20 = lVar20 + 8;
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x150) + uVar15 * 8) +
       (ulonglong)(*(uint *)(param_1 + 0x138) & 0xf) * 8) = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
    lVar20 = *(longlong *)(param_1 + 0x138);
    uVar18 = lVar20 - (ulonglong)param_5;
    uVar15 = (ulonglong)(param_4 + param_5);
    uVar19 = uVar18 - 1;
    do {
      if (uVar18 == 0) {
LAB_1433394d7:
        uVar15 = (ulonglong)((int)uVar15 - 1);
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x150) + (lVar20 - 1U >> 4) * 8);
        uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x100) + uVar15 * 8);
      }
      else {
        lVar7 = *(longlong *)(param_1 + 0x150);
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x100) + (ulonglong)((int)uVar15 - 1) * 8);
        fVar24 = *(float *)(lVar13 + 0xc);
        lVar8 = *(longlong *)
                 (*(longlong *)(lVar7 + (uVar19 >> 4) * 8) + (ulonglong)((uint)uVar19 & 0xf) * 8);
        fVar2 = *(float *)(lVar8 + 0xc);
        if (fVar2 == fVar24) {
          fVar24 = *(float *)(lVar13 + 0x10);
          pfVar1 = (float *)(lVar8 + 0x10);
          bVar23 = fVar24 == *pfVar1;
          bVar21 = fVar24 < *pfVar1;
        }
        else {
          bVar23 = fVar24 == fVar2;
          bVar21 = fVar24 < fVar2;
        }
        if (!bVar21 && !bVar23) goto LAB_1433394d7;
        uVar18 = uVar18 - 1;
        uVar19 = uVar19 - 1;
        lVar13 = *(longlong *)(lVar7 + (lVar20 - 1U >> 4) * 8);
        uVar10 = *(undefined8 *)
                  (*(longlong *)(lVar7 + (uVar18 >> 4) * 8) + (ulonglong)((uint)uVar18 & 0xf) * 8);
      }
      lVar20 = lVar20 + -1;
      *(undefined8 *)(lVar13 + (ulonglong)((uint)lVar20 & 0xf) * 8) = uVar10;
    } while ((uint)uVar15 != param_4);
  }
  uVar19 = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (((bVar14 & 1) != 0) &&
     (*(undefined8 *)(param_1 + 0x188) = 0, *(longlong *)(param_1 + 0x138) != 0)) {
    do {
      if ((*(byte *)(*(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x150) + (uVar19 >> 4) * 8) +
                      (ulonglong)((uint)uVar19 & 0xf) * 8) + 0x16) & 2) == 0) {
        uVar15 = *(ulonglong *)(param_1 + 0x188) >> 4;
        if (*(ulonglong *)(param_1 + 400) <= uVar15) {
          FUN_143343dc0(param_1 + 0x180,uVar15);
        }
        *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + uVar15 * 8) +
                 (ulonglong)(*(uint *)(param_1 + 0x188) & 0xf) * 4) = (uint)uVar19;
        *(longlong *)(param_1 + 0x188) = *(longlong *)(param_1 + 0x188) + 1;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(ulonglong *)(param_1 + 0x138));
  }
  if (1 < *(ulonglong *)(param_1 + 0x188)) {
    local_98 = 0;
    do {
      if (-1 < (longlong)local_98) {
        uVar19 = local_98 + 1;
        uVar15 = local_98;
        do {
          uVar17 = (ulonglong)((uint)uVar15 & 0xf);
          uVar18 = (ulonglong)((uint)uVar19 & 0xf);
          uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + (uVar15 >> 4) * 8) +
                           uVar17 * 4);
          lVar20 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x150) + (ulonglong)(uVar3 >> 4) * 8) +
                    (ulonglong)(uVar3 & 0xf) * 8);
          uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + (uVar19 >> 4) * 8) +
                           uVar18 * 4);
          lVar7 = *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x150) + (ulonglong)(uVar3 >> 4) * 8) +
                   (ulonglong)(uVar3 & 0xf) * 8);
          if (*(float *)(lVar20 + 0x10) <= *(float *)(lVar7 + 0x10)) break;
          if (*(longlong *)(param_1 + 0x1d8) == 0) {
            FUN_143339950(param_1);
          }
          uVar4 = *(undefined4 *)(lVar20 + 0x24);
          uVar5 = *(undefined4 *)(lVar7 + 0x24);
          fVar24 = ((*(float *)(lVar7 + 0x10) - *(float *)(lVar7 + 0xc)) - *(float *)(lVar20 + 0x10)
                   ) + *(float *)(lVar20 + 0xc);
          local_80 = param_2;
          if (fVar24 != 0.0) {
            local_80 = ((*(float *)(lVar20 + 0xc) - *(float *)(lVar7 + 0xc)) * (param_3 - param_2))
                       / fVar24 + param_2;
          }
          if (local_80 < param_2) {
            local_80 = param_2;
          }
          if (param_3 < local_80) {
            local_80 = param_3;
          }
          uVar16 = *(ulonglong *)(param_1 + 0x1d8) >> 4;
          if (*(ulonglong *)(param_1 + 0x1e0) <= uVar16) {
            if (*(ulonglong *)(param_1 + 0x1e8) <= uVar16) {
              if (*(longlong *)(param_1 + 0x1f0) == 0) {
                *(undefined8 *)(param_1 + 0x1e8) = 4;
                uVar10 = FUN_1433245e0(*(undefined8 *)(param_1 + 0x1d0),0x20);
                *(undefined8 *)(param_1 + 0x1f0) = uVar10;
              }
              else {
                _Dst = (void *)FUN_1433245e0(*(undefined8 *)(param_1 + 0x1d0),
                                             *(ulonglong *)(param_1 + 0x1e8) << 4);
                _guard_xfg_dispatch_icall_nop
                          (_Dst,*(void **)(param_1 + 0x1f0),*(longlong *)(param_1 + 0x1e0) << 3);
                *(void **)(param_1 + 0x1f0) = _Dst;
                *(longlong *)(param_1 + 0x1e8) = *(longlong *)(param_1 + 0x1e8) * 2;
              }
            }
            uVar10 = FUN_1433245e0(*(undefined8 *)(param_1 + 0x1d0),0xc0);
            *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + uVar16 * 8) = uVar10;
            *(longlong *)(param_1 + 0x1e0) = *(longlong *)(param_1 + 0x1e0) + 1;
          }
          uVar11 = (ulonglong)(*(uint *)(param_1 + 0x1d8) & 0xf);
          lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + uVar16 * 8);
          *(ulonglong *)(lVar20 + uVar11 * 0xc) = CONCAT44(uVar5,uVar4);
          *(float *)(lVar20 + 8 + uVar11 * 0xc) = local_80;
          *(longlong *)(param_1 + 0x1d8) = *(longlong *)(param_1 + 0x1d8) + 1;
          uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + (uVar19 >> 4) * 8) +
                           uVar18 * 4);
          uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + (uVar15 >> 4) * 8) +
                           uVar17 * 4);
          uVar17 = (ulonglong)(uVar3 & 0xf);
          lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x150) + (ulonglong)(uVar3 >> 4) * 8);
          uVar18 = (ulonglong)(uVar9 & 0xf);
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x150) + (ulonglong)(uVar9 >> 4) * 8);
          uVar10 = *(undefined8 *)(lVar7 + uVar18 * 8);
          *(undefined8 *)(lVar7 + uVar18 * 8) = *(undefined8 *)(lVar20 + uVar17 * 8);
          uVar19 = uVar19 - 1;
          *(undefined8 *)(lVar20 + uVar17 * 8) = uVar10;
          uVar15 = uVar15 - 1;
        } while (-1 < (longlong)uVar15);
      }
      uVar19 = local_98 + 2;
      local_98 = local_98 + 1;
    } while (uVar19 < *(ulonglong *)(param_1 + 0x188));
  }
  uVar19 = 0;
  if (((1 < *(ulonglong *)(param_1 + 0x1d8)) &&
      (FUN_143341990(param_1 + 0x1d0,0,*(undefined8 *)(param_1 + 0x1d8),&LAB_143344430),
      *(char *)(param_1 + 0x20) != '\0')) && (*(longlong *)(param_1 + 0x1d8) != 0)) {
    do {
      uVar15 = (ulonglong)((uint)uVar19 & 0xf);
      uVar18 = uVar19 >> 4;
      lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + uVar18 * 8);
      if (*(float *)(lVar20 + 8 + uVar15 * 0xc) - param_2 <
          ABS(param_2) * *(float *)(param_1 + 0x1c)) {
        *(float *)(lVar20 + 8 + uVar15 * 0xc) = param_2;
      }
      uVar19 = uVar19 + 1;
      param_2 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x1f0) + uVar18 * 8) + 8 +
                          uVar15 * 0xc);
    } while (uVar19 < *(ulonglong *)(param_1 + 0x1d8));
  }
  return bVar14;
}



// FUNCTION 143339950 FUN_143339950 body=281 status=ok
// SIG undefined FUN_143339950(void)

void FUN_143339950(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    do {
      lVar1 = (uVar5 >> 4) * 8;
      uVar3 = (uint)uVar5;
      lVar2 = (ulonglong)(uVar3 & 0xf) * 8;
      *(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x150) + lVar1) + lVar2) + 0x24)
           = uVar3;
      uVar4 = *(ulonglong *)(param_1 + 0x160) >> 4;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x150) + lVar1);
      if (*(ulonglong *)(param_1 + 0x168) <= uVar4) {
        FUN_143343e60(param_1 + 0x158,uVar4);
      }
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x178) + uVar4 * 8) +
       (ulonglong)(*(uint *)(param_1 + 0x160) & 0xf) * 8) = *(undefined8 *)(lVar1 + lVar2);
      *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + 1;
      uVar4 = *(ulonglong *)(param_1 + 0x1b0) >> 4;
      if (*(ulonglong *)(param_1 + 0x1b8) <= uVar4) {
        FUN_143343dc0(param_1 + 0x1a8,uVar4);
      }
      *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1c8) + uVar4 * 8) +
               (ulonglong)(*(uint *)(param_1 + 0x1b0) & 0xf) * 4) = uVar3;
      uVar5 = uVar5 + 1;
      *(longlong *)(param_1 + 0x1b0) = *(longlong *)(param_1 + 0x1b0) + 1;
    } while (uVar5 < *(ulonglong *)(param_1 + 0x138));
  }
  return;
}



// FUNCTION 143339a70 FUN_143339a70 body=523 status=ok
// SIG undefined FUN_143339a70(void)

ulonglong FUN_143339a70(longlong param_1,uint *param_2,float param_3,char param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  
  uVar6 = (ulonglong)(*param_2 & 0xf);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)(*param_2 >> 4) * 8);
  if ((((param_4 == '\0') && ((*(ushort *)((longlong)param_2 + 0x16) & 0x10) == 0)) &&
      ((short)param_2[7] == *(short *)((longlong)param_2 + 0x1e))) &&
     ((short)param_2[8] == *(short *)((longlong)param_2 + 0x22))) {
    if ((*(ushort *)((longlong)param_2 + 0x16) & 8) != 0) {
      uVar2 = *(uint *)(lVar3 + uVar6 * 8);
      if (*(float *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar2 >> 4) * 8) + 4
                    + (ulonglong)(uVar2 & 0xf) * 8) == param_3) {
        uVar6 = FUN_143343c60(param_1,*(longlong *)
                                       (*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar2 >> 4) * 8)
                                      + (ulonglong)(uVar2 & 0xf) * 8);
        return uVar6;
      }
    }
    return 0xffffffff;
  }
  uVar2 = *(uint *)(lVar3 + uVar6 * 8);
  lVar4 = *(longlong *)(param_1 + 0x90);
  if (*(float *)(*(longlong *)(lVar4 + (ulonglong)(uVar2 >> 4) * 8) + 4 +
                (ulonglong)(uVar2 & 0xf) * 8) == param_3) {
    uVar6 = FUN_143343c60(param_1,*(longlong *)(lVar4 + (ulonglong)(uVar2 >> 4) * 8) +
                                  (ulonglong)(uVar2 & 0xf) * 8);
    return uVar6;
  }
  if (((*(byte *)((longlong)param_2 + 0x16) & 2) != 0) &&
     (uVar5 = (int)(short)param_2[5] + uVar2,
     *(float *)(*(longlong *)(lVar4 + (ulonglong)(uVar5 >> 4) * 8) + 4 +
               (ulonglong)(uVar5 & 0xf) * 8) == param_3)) {
    uVar6 = FUN_143343c60(param_1,*(longlong *)(lVar4 + (ulonglong)(uVar5 >> 4) * 8) +
                                  (ulonglong)(uVar5 & 0xf) * 8);
    return uVar6;
  }
  lVar4 = *(longlong *)(lVar4 + (ulonglong)(uVar2 >> 4) * 8);
  fVar8 = (param_3 - *(float *)(lVar4 + 4 + (ulonglong)(uVar2 & 0xf) * 8)) *
          *(float *)(lVar3 + 4 + uVar6 * 8) + *(float *)(lVar4 + (ulonglong)(uVar2 & 0xf) * 8);
  if (ABS(param_3) * *(float *)(param_1 + 0x1c) < fVar8 - *(float *)(param_1 + 0x210)) {
    *(float *)(param_1 + 0x210) = fVar8;
    uVar6 = *(ulonglong *)(param_1 + 800) >> 4;
    if (*(ulonglong *)(param_1 + 0x328) <= uVar6) {
      FUN_143344360(param_1 + 0x318,uVar6);
    }
    uVar7 = (ulonglong)(*(uint *)(param_1 + 800) & 0xf);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x338) + uVar6 * 8);
    puVar1 = (undefined8 *)(lVar3 + uVar7 * 0x14);
    *puVar1 = CONCAT44(param_3,fVar8);
    puVar1[1] = 0xffffffffffffffff;
    *(undefined4 *)(lVar3 + 0x10 + uVar7 * 0x14) = 2;
    *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
  }
  return (ulonglong)(*(int *)(param_1 + 800) - 1);
}



// FUNCTION 143339c90 FUN_143339c90 body=354 status=ok
// SIG undefined FUN_143339c90(void)

void FUN_143339c90(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uStack_24;
  
  if (((param_2 != 0) && (lVar6 = *(longlong *)(param_2 + 8), lVar6 != 0)) &&
     (*(int *)(lVar6 + 0x14) != 0)) {
    if (*(longlong *)(lVar6 + 0x18) == 0) {
      uVar9 = *(ulonglong *)(param_1 + 0x280) >> 4;
      uVar4 = *(undefined4 *)(param_2 + 0x10);
      uVar5 = *(uint *)(param_1 + 0x2a8);
      uStack_24 = (uint)*(ushort *)(*param_3 + 0x1c);
      if (*(ulonglong *)(param_1 + 0x288) <= uVar9) {
        FUN_143343fa0(param_1 + 0x278,uVar9);
      }
      lVar8 = (ulonglong)(*(uint *)(param_1 + 0x280) & 0xf) * 0x1c;
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x298) + uVar9 * 8);
      puVar2 = (undefined4 *)(lVar7 + lVar8);
      *puVar2 = param_4;
      puVar2[1] = uStack_24;
      puVar2[2] = uVar4;
      puVar2[3] = 0xffffffff;
      *(ulonglong *)(lVar7 + 0x10 + lVar8) = (ulonglong)uVar5;
      *(undefined4 *)(lVar7 + 0x18 + lVar8) = 0xffffffff;
      *(longlong *)(param_1 + 0x280) = *(longlong *)(param_1 + 0x280) + 1;
      uVar9 = *(longlong *)(param_1 + 0x280) - 1;
      *(ulonglong *)(lVar6 + 0x18) =
           (ulonglong)((uint)uVar9 & 0xf) * 0x1c +
           *(longlong *)(*(longlong *)(param_1 + 0x298) + (uVar9 >> 4) * 8);
    }
    lVar8 = param_3[2];
    uVar9 = *(ulonglong *)(param_1 + 0x2a8) >> 4;
    lVar7 = param_3[1];
    if (*(ulonglong *)(param_1 + 0x2b0) <= uVar9) {
      FUN_143344220(param_1 + 0x2a0,uVar9);
    }
    puVar3 = (undefined8 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x2c0) + uVar9 * 8) +
             (ulonglong)(*(uint *)(param_1 + 0x2a8) & 0xf) * 0x10);
    *puVar3 = CONCAT44(uStack_24,(int)lVar8);
    puVar3[1] = lVar7;
    *(longlong *)(param_1 + 0x2a8) = *(longlong *)(param_1 + 0x2a8) + 1;
    piVar1 = (int *)(*(longlong *)(lVar6 + 0x18) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 143339e00 FUN_143339e00 body=112 status=ok
// SIG undefined FUN_143339e00(void)

void FUN_143339e00(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  
  if (*(int *)(param_2 + 1) != -1) {
    if ((*(int *)(param_2 + 1) == *(int *)(param_1 + 0x2f8) + -1) &&
       (*(longlong *)(param_1 + 0x2f8) != 0)) {
      *(longlong *)(param_1 + 0x2f8) = *(longlong *)(param_1 + 0x2f8) + -1;
    }
    uVar1 = *(uint *)((longlong)param_2 + 0xc);
    *(uint *)(param_2 + 1) = uVar1;
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(param_2 + 2) = 0xffffffff;
    if (uVar1 == 0xffffffff) {
      *param_2 = 0;
      return;
    }
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x310) + (ulonglong)(uVar1 >> 4) * 8) + 8 +
     (ulonglong)(uVar1 & 0xf) * 0x10) = 0;
  }
  return;
}



// FUNCTION 143339e80 FUN_143339e80 body=156 status=ok
// SIG undefined FUN_143339e80(void)

longlong FUN_143339e80(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = *(ulonglong *)(param_1 + 0x2d0) >> 4;
  if (*(ulonglong *)(param_1 + 0x2d8) <= uVar4) {
    FUN_1433440e0(param_1 + 0x2c8,uVar4);
  }
  lVar3 = (ulonglong)(*(uint *)(param_1 + 0x2d0) & 0xf) * 0x20;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2e8) + uVar4 * 8);
  puVar1 = (undefined8 *)(lVar2 + lVar3);
  *puVar1 = 0;
  puVar1[1] = 0xffffffffffffffff;
  puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar3);
  *puVar1 = CONCAT44(param_2,0xffffffff);
  puVar1[1] = 0;
  *(longlong *)(param_1 + 0x2d0) = *(longlong *)(param_1 + 0x2d0) + 1;
  uVar4 = *(longlong *)(param_1 + 0x2d0) - 1;
  return (ulonglong)((uint)uVar4 & 0xf) * 0x20 +
         *(longlong *)(*(longlong *)(param_1 + 0x2e8) + (uVar4 >> 4) * 8);
}



// FUNCTION 143339f30 FUN_143339f30 body=86 status=ok
// SIG undefined FUN_143339f30(void)

void FUN_143339f30(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  
  param_2[1] = 0;
  if (*(short *)(*param_2 + 0x22) != 0) {
    lVar1 = FUN_143339e80(param_1,*(short *)(*param_2 + 0x22));
    param_2[1] = lVar1;
    FUN_143344710(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 143339f90 replaceMonotone body=130 status=ok
// SIG undefined replaceMonotone(void)

void Scaleform::Render::Tessellator::replaceMonotone
               (undefined8 param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if (param_3 != 0) {
    plVar4 = *(longlong **)(param_2 + 8);
    if (plVar4 == (longlong *)0x0) {
      uVar2 = FUN_143339e80(param_1,param_3);
      *(undefined8 *)(param_2 + 8) = uVar2;
      return;
    }
    if ((*(int *)((longlong)plVar4 + 0x14) != param_3) && (*plVar4 != 0)) {
      puVar3 = (undefined8 *)FUN_143339e80(param_1,param_3);
      puVar1 = *(undefined8 **)(param_2 + 8);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      plVar4 = *(longlong **)(param_2 + 8);
      *plVar4 = 0;
      plVar4[1] = -1;
      *(undefined4 *)(plVar4 + 2) = 0xffffffff;
      plVar4[3] = 0;
    }
    *(int *)((longlong)plVar4 + 0x14) = param_3;
  }
  return;
}



// FUNCTION 14333a020 replaceMonotone body=130 status=ok
// SIG undefined replaceMonotone(void)

void Scaleform::Render::Tessellator::replaceMonotone
               (undefined8 param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if (param_3 != 0) {
    plVar4 = *(longlong **)(param_2 + 8);
    if (plVar4 == (longlong *)0x0) {
      uVar2 = FUN_143339e80(param_1,param_3);
      *(undefined8 *)(param_2 + 8) = uVar2;
      return;
    }
    if ((*(int *)((longlong)plVar4 + 0x14) != param_3) && (*plVar4 != 0)) {
      puVar3 = (undefined8 *)FUN_143339e80(param_1,param_3);
      puVar1 = *(undefined8 **)(param_2 + 8);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      plVar4 = *(longlong **)(param_2 + 8);
      *plVar4 = 0;
      plVar4[1] = -1;
      *(undefined4 *)(plVar4 + 2) = 0xffffffff;
      plVar4[3] = 0;
    }
    *(int *)((longlong)plVar4 + 0x14) = param_3;
  }
  return;
}



// FUNCTION 14333a0b0 FUN_14333a0b0 body=596 status=ok
// SIG undefined FUN_14333a0b0(void)

void FUN_14333a0b0(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int local_50 [2];
  undefined8 local_48;
  
  lVar3 = *(longlong *)(param_2 + 8);
  piVar8 = local_50;
  lVar4 = *(longlong *)(lVar3 + 0x18);
  iVar1 = *(int *)(lVar3 + 0x14);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  uVar13 = *(uint *)(lVar4 + 0x10);
  local_50[0] = *(int *)(lVar4 + 8);
  iVar12 = *(int *)(lVar4 + 0x14);
  local_48 = *(undefined8 *)(param_2 + 8);
  iVar2 = *(int *)(lVar4 + 0xc);
  iVar11 = *(int *)(lVar4 + 4);
  bVar5 = true;
  iVar9 = local_50[0];
  iVar10 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2c0) + (ulonglong)(uVar13 >> 4) * 8) +
                   (ulonglong)(uVar13 & 0xf) * 0x10);
  do {
    if (iVar9 != iVar10) {
      if (bVar5) {
        FUN_1433445b0(param_1,*(undefined8 *)(param_2 + 8));
        uVar6 = *(undefined8 *)(param_2 + 8);
        if (param_3 == 0xffffffff) goto LAB_14333a22a;
        FUN_1433445b0(param_1,uVar6,param_3 | 0x80000000);
      }
      else {
        if ((iVar11 != iVar1) || (*(longlong *)(piVar8 + 2) == 0)) {
          uVar6 = FUN_143339e80(param_1,iVar1);
          *(undefined8 *)(piVar8 + 2) = uVar6;
          if (iVar9 != -1) {
            FUN_1433445b0(param_1,uVar6);
          }
          if (iVar10 != -1) {
            FUN_1433445b0(param_1,uVar6);
          }
        }
        if (iVar12 == 0) {
          uVar6 = *(undefined8 *)(piVar8 + 2);
          *(undefined8 *)(param_2 + 8) = uVar6;
        }
        else {
          uVar6 = *(undefined8 *)(piVar8 + 2);
          if (param_3 == 0xffffffff) goto LAB_14333a22a;
          FUN_1433445b0(param_1,uVar6,param_3 | 0x80000000);
        }
      }
      FUN_1433445b0(param_1,uVar6);
    }
LAB_14333a22a:
    bVar5 = false;
    if (iVar12 == 0) {
      uVar7 = *(longlong *)(param_1 + 0x280) - 1;
      if (lVar4 == (ulonglong)((uint)uVar7 & 0xf) * 0x1c +
                   *(longlong *)(*(longlong *)(param_1 + 0x298) + (uVar7 >> 4) * 8)) {
        if ((ulonglong)*(uint *)(lVar4 + 0x10) < *(ulonglong *)(param_1 + 0x2a8)) {
          *(ulonglong *)(param_1 + 0x2a8) = (ulonglong)*(uint *)(lVar4 + 0x10);
        }
        if (*(longlong *)(param_1 + 0x280) != 0) {
          *(longlong *)(param_1 + 0x280) = *(longlong *)(param_1 + 0x280) + -1;
        }
      }
      return;
    }
    uVar14 = uVar13 + 1;
    piVar8 = (int *)((ulonglong)(uVar13 & 0xf) * 0x10 +
                    *(longlong *)(*(longlong *)(param_1 + 0x2c0) + (ulonglong)(uVar13 >> 4) * 8));
    iVar12 = iVar12 + -1;
    iVar11 = iVar2;
    if (iVar12 != 0) {
      iVar11 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2c0) + (ulonglong)(uVar14 >> 4) * 8)
                       + (ulonglong)(uVar14 & 0xf) * 0x10);
    }
    uVar13 = uVar14;
    iVar9 = iVar10;
    iVar10 = iVar11;
    if (*(longlong *)(piVar8 + 2) == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(*(longlong *)(piVar8 + 2) + 0x14);
    }
  } while( true );
}



// FUNCTION 14333a310 FUN_14333a310 body=531 status=ok
// SIG undefined FUN_14333a310(void)

void FUN_14333a310(longlong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  
  lVar8 = *(longlong *)(param_2 + 8);
  lVar3 = *(longlong *)(lVar8 + 0x18);
  iVar1 = *(int *)(lVar8 + 0x14);
  *(undefined8 *)(lVar8 + 0x18) = 0;
  uVar14 = *(undefined4 *)(lVar3 + 8);
  uVar11 = *(uint *)(lVar3 + 0x10);
  uVar15 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(uint *)(lVar3 + 0xc);
  iVar13 = *(int *)(lVar3 + 0x14);
  uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x2c0) + (ulonglong)(uVar11 >> 4) * 8) +
                    (ulonglong)(uVar11 & 0xf) * 0x10);
  FUN_1433445b0(param_1,uVar15,uVar10,param_4,uVar14,uVar15);
  FUN_1433445b0(param_1,*(undefined8 *)(param_2 + 8),param_3);
  while (uVar9 = uVar10, iVar13 != 0) {
    uVar12 = uVar11 + 1;
    lVar8 = (ulonglong)(uVar11 & 0xf) * 0x10 +
            *(longlong *)(*(longlong *)(param_1 + 0x2c0) + (ulonglong)(uVar11 >> 4) * 8);
    iVar13 = iVar13 + -1;
    uVar10 = uVar2;
    if (iVar13 != 0) {
      uVar10 = *(uint *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x2c0) + (ulonglong)(uVar12 >> 4) * 8) +
                        (ulonglong)(uVar12 & 0xf) * 0x10);
    }
    lVar4 = *(longlong *)(lVar8 + 8);
    if (lVar4 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(lVar4 + 0x14);
    }
    uVar11 = uVar12;
    if (uVar9 != uVar10) {
      if ((iVar7 != iVar1) || (lVar4 == 0)) {
        uVar5 = FUN_143339e80(param_1,iVar1);
        *(undefined8 *)(lVar8 + 8) = uVar5;
        if (uVar9 != 0xffffffff) {
          FUN_1433445b0(param_1,uVar5,uVar9 | 0x80000000,param_4,uVar14,uVar15);
        }
        if (uVar10 != 0xffffffff) {
          FUN_1433445b0(param_1,uVar5,uVar10 & 0x7fffffff);
        }
      }
      uVar5 = *(undefined8 *)(lVar8 + 8);
      if (param_3 != 0xffffffff) {
        FUN_1433445b0(param_1,uVar5,param_3 | 0x80000000,param_4,uVar14,uVar15);
        FUN_1433445b0(param_1,uVar5,param_3 & 0x7fffffff);
      }
    }
  }
  uVar6 = *(longlong *)(param_1 + 0x280) - 1;
  if (lVar3 == (ulonglong)((uint)uVar6 & 0xf) * 0x1c +
               *(longlong *)(*(longlong *)(param_1 + 0x298) + (uVar6 >> 4) * 8)) {
    if ((ulonglong)*(uint *)(lVar3 + 0x10) < *(ulonglong *)(param_1 + 0x2a8)) {
      *(ulonglong *)(param_1 + 0x2a8) = (ulonglong)*(uint *)(lVar3 + 0x10);
    }
    if (*(longlong *)(param_1 + 0x280) != 0) {
      *(longlong *)(param_1 + 0x280) = *(longlong *)(param_1 + 0x280) + -1;
    }
  }
  return;
}



// FUNCTION 14333a530 FUN_14333a530 body=2079 status=ok
// SIG undefined FUN_14333a530(void)

void FUN_14333a530(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  uint local_res8;
  uint local_res20;
  uint local_98;
  undefined4 *local_90;
  uint local_60 [2];
  longlong local_58;
  
  lVar12 = param_2[1];
  puVar19 = local_60;
  lVar4 = *(longlong *)(lVar12 + 0x18);
  uVar1 = *(uint *)(lVar12 + 0x14);
  *(undefined8 *)(lVar12 + 0x18) = 0;
  uVar21 = *(uint *)(lVar4 + 0x10);
  local_res20 = *(uint *)(lVar4 + 8);
  uVar20 = *(uint *)(lVar4 + 0x14);
  local_res8 = *(uint *)(param_3 + 0x14);
  local_58 = param_2[1];
  uVar25 = *(uint *)(lVar4 + 0xc);
  uVar22 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x2c0) + (ulonglong)(uVar21 >> 4) * 8) +
                    (ulonglong)(uVar21 & 0xf) * 0x10);
  local_90._0_4_ = *(uint *)(lVar4 + 4);
  uVar2 = *(uint *)(param_3 + 0xc);
  uVar3 = *(uint *)(param_3 + 0x10);
  uVar24 = *(uint *)(param_3 + 4);
  bVar26 = uVar20 < local_res8;
  uVar23 = *(uint *)(param_3 + 8);
  uVar18 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x270) + (ulonglong)(uVar3 >> 4) * 8) +
                     0x10 + (ulonglong)(uVar3 & 0xf) * 0x18);
  local_98 = uVar20;
  local_60[0] = local_res20;
  while( true ) {
    if ((((local_res20 != uVar22) || ((uVar23 != 0xffffffff && (uVar18 != 0xffffffff)))) &&
        ((uVar23 != uVar18 || ((local_res20 != 0xffffffff && (uVar22 != 0xffffffff)))))) &&
       ((local_res20 != uVar22 || (uVar23 != uVar18)))) {
      if ((uint)local_90 != uVar1) {
        Scaleform::Render::Tessellator::replaceMonotone(param_1,puVar19,uVar1);
        uVar5 = *(undefined8 *)(puVar19 + 2);
        if (local_res20 != 0xffffffff) {
          FUN_1433445b0(param_1,uVar5,local_res20 | 0x80000000);
        }
        if (uVar22 != 0xffffffff) {
          FUN_1433445b0(param_1,uVar5,uVar22 & 0x7fffffff);
        }
      }
      uVar5 = *(undefined8 *)(puVar19 + 2);
      if (uVar23 != 0xffffffff) {
        FUN_1433445b0(param_1,uVar5,uVar23 | 0x80000000);
      }
      if (uVar18 != 0xffffffff) {
        FUN_1433445b0(param_1,uVar5,uVar18 & 0x7fffffff);
      }
      param_2[1] = *(longlong *)(puVar19 + 2);
      uVar20 = local_98;
    }
    if ((uVar24 != uVar1) || (param_2[1] == 0)) {
      if (uVar24 == 0) {
        param_2[1] = 0;
      }
      else {
        plVar11 = (longlong *)param_2[1];
        if (plVar11 == (longlong *)0x0) {
          lVar12 = FUN_143339e80(param_1,uVar24);
          param_2[1] = lVar12;
        }
        else {
          if ((*(uint *)((longlong)plVar11 + 0x14) != uVar24) && (*plVar11 != 0)) {
            puVar13 = (undefined4 *)FUN_143339e80(param_1,uVar24);
            puVar6 = (undefined4 *)param_2[1];
            uVar8 = puVar6[1];
            uVar9 = puVar6[2];
            uVar10 = puVar6[3];
            *puVar13 = *puVar6;
            puVar13[1] = uVar8;
            puVar13[2] = uVar9;
            puVar13[3] = uVar10;
            uVar5 = *(undefined8 *)(puVar6 + 6);
            *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(puVar6 + 4);
            *(undefined8 *)(puVar13 + 6) = uVar5;
            plVar11 = (longlong *)param_2[1];
            *plVar11 = 0;
            plVar11[1] = -1;
            *(undefined4 *)(plVar11 + 2) = 0xffffffff;
            plVar11[3] = 0;
          }
          *(uint *)((longlong)plVar11 + 0x14) = uVar24;
        }
        lVar12 = param_2[1];
        if (uVar23 != 0xffffffff) {
          FUN_1433445b0(param_1,lVar12,uVar23 | 0x80000000);
        }
        uVar20 = local_98;
        if (uVar18 != 0xffffffff) {
          FUN_1433445b0(param_1,lVar12,uVar18 & 0x7fffffff);
        }
      }
    }
    if (uVar20 == bVar26) break;
    uVar17 = uVar22;
    if (uVar20 != 0) {
      uVar20 = uVar20 - 1;
      uVar16 = uVar21 + 1;
      puVar19 = (uint *)((ulonglong)(uVar21 & 0xf) * 0x10 +
                        *(longlong *)(*(longlong *)(param_1 + 0x2c0) + (ulonglong)(uVar21 >> 4) * 8)
                        );
      uVar17 = uVar25;
      if (uVar20 != 0) {
        uVar17 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x2c0) + (ulonglong)(uVar16 >> 4) * 8) +
                          (ulonglong)(uVar16 & 0xf) * 0x10);
      }
      local_98 = uVar20;
      uVar21 = uVar16;
      if (*(longlong *)(puVar19 + 2) == 0) {
        local_90._0_4_ = 0;
        local_res20 = uVar22;
      }
      else {
        local_90._0_4_ = *(uint *)(*(longlong *)(puVar19 + 2) + 0x14);
        local_res20 = uVar22;
      }
    }
    uVar22 = uVar17;
    if (local_res8 != 0) {
      local_res8 = local_res8 - 1;
      uVar17 = uVar3 + 1;
      param_2 = (longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x270) + (ulonglong)(uVar3 >> 4) * 8) +
                (ulonglong)(uVar3 & 0xf) * 0x18);
      uVar23 = uVar18;
      uVar3 = uVar17;
      if (local_res8 == 0) {
        uVar24 = (uint)*(ushort *)(*param_2 + 0x22);
        uVar18 = uVar2;
      }
      else {
        uVar24 = (uint)*(ushort *)(*param_2 + 0x22);
        uVar18 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x270) + (ulonglong)(uVar17 >> 4) * 8) + 0x10 +
                          (ulonglong)(uVar17 & 0xf) * 0x18);
      }
    }
  }
  uVar24 = local_res20;
  if (uVar22 != 0xffffffff) {
    uVar24 = uVar22;
  }
  if ((local_res8 != 0) && (uVar24 != 0xffffffff)) {
    local_90 = (undefined4 *)0x0;
    uVar23 = uVar22;
    if (uVar20 != 0) {
      puVar19 = (uint *)((ulonglong)(uVar21 & 0xf) * 0x10 +
                        *(longlong *)(*(longlong *)(param_1 + 0x2c0) + (ulonglong)(uVar21 >> 4) * 8)
                        );
      uVar23 = uVar25;
      local_res20 = uVar22;
      if (uVar20 != 1) {
        uVar23 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x2c0) + (ulonglong)(uVar21 + 1 >> 4) * 8) +
                          (ulonglong)(uVar21 + 1 & 0xf) * 0x10);
      }
    }
    local_res8 = local_res8 - 1;
    uVar21 = uVar3 + 1;
    plVar11 = (longlong *)
              (*(longlong *)(*(longlong *)(param_1 + 0x270) + (ulonglong)(uVar3 >> 4) * 8) +
              (ulonglong)(uVar3 & 0xf) * 0x18);
    uVar20 = uVar2;
    if (local_res8 != 0) {
      uVar20 = *(uint *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x270) + (ulonglong)(uVar21 >> 4) * 8) + 0x10 +
                        (ulonglong)(uVar21 & 0xf) * 0x18);
    }
    uVar25 = (uint)*(ushort *)(*plVar11 + 0x22);
    if ((*(longlong *)(puVar19 + 2) != 0) && (*(uint *)(*(longlong *)(puVar19 + 2) + 0x14) == uVar1)
       ) {
      local_90 = (undefined4 *)FUN_143339e80(param_1,uVar1);
      puVar6 = *(undefined4 **)(puVar19 + 2);
      uVar8 = puVar6[1];
      uVar9 = puVar6[2];
      uVar10 = puVar6[3];
      *local_90 = *puVar6;
      local_90[1] = uVar8;
      local_90[2] = uVar9;
      local_90[3] = uVar10;
      uVar5 = *(undefined8 *)(puVar6 + 6);
      *(undefined8 *)(local_90 + 4) = *(undefined8 *)(puVar6 + 4);
      *(undefined8 *)(local_90 + 6) = uVar5;
      puVar7 = *(undefined8 **)(puVar19 + 2);
      *puVar7 = 0;
      puVar7[1] = 0xffffffffffffffff;
      *(undefined4 *)(puVar7 + 2) = 0xffffffff;
      *(uint *)((longlong)puVar7 + 0x14) = uVar1;
      puVar7[3] = 0;
    }
LAB_14333aa50:
    if (local_res8 == 0) {
      plVar11[1] = (longlong)local_90;
      if (local_90 == (undefined4 *)0x0) {
        lVar12 = FUN_143339e80(param_1,uVar1);
        plVar11[1] = lVar12;
        if (local_res20 != 0xffffffff) {
          FUN_1433445b0(param_1,lVar12,local_res20 | 0x80000000);
        }
        uVar22 = uVar23;
        if (uVar23 != 0xffffffff) goto LAB_14333ab40;
      }
LAB_14333ab50:
      lVar12 = plVar11[1];
      if (uVar18 != 0xffffffff) {
        FUN_1433445b0(param_1,lVar12,uVar18 | 0x80000000);
      }
      if (uVar20 != 0xffffffff) {
        FUN_1433445b0(param_1,lVar12,uVar20 & 0x7fffffff);
      }
    }
    else if (uVar18 != uVar20) {
      if (uVar1 != 0) {
        plVar14 = (longlong *)plVar11[1];
        if (plVar14 == (longlong *)0x0) {
          lVar12 = FUN_143339e80(param_1,uVar1);
          plVar11[1] = lVar12;
        }
        else {
          if ((*(uint *)((longlong)plVar14 + 0x14) != uVar1) && (*plVar14 != 0)) {
            puVar13 = (undefined4 *)FUN_143339e80(param_1,uVar1);
            puVar6 = (undefined4 *)plVar11[1];
            uVar8 = puVar6[1];
            uVar9 = puVar6[2];
            uVar10 = puVar6[3];
            *puVar13 = *puVar6;
            puVar13[1] = uVar8;
            puVar13[2] = uVar9;
            puVar13[3] = uVar10;
            uVar5 = *(undefined8 *)(puVar6 + 6);
            *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(puVar6 + 4);
            *(undefined8 *)(puVar13 + 6) = uVar5;
            plVar14 = (longlong *)plVar11[1];
            *plVar14 = 0;
            plVar14[1] = -1;
            *(undefined4 *)(plVar14 + 2) = 0xffffffff;
            plVar14[3] = 0;
          }
          *(uint *)((longlong)plVar14 + 0x14) = uVar1;
        }
      }
      lVar12 = plVar11[1];
      FUN_1433445b0(param_1,lVar12,uVar24 | 0x80000000);
      uVar22 = uVar24;
LAB_14333ab40:
      FUN_1433445b0(param_1,lVar12,uVar22 & 0x7fffffff);
      goto LAB_14333ab50;
    }
    if ((uVar25 != uVar1) || (plVar11[1] == 0)) {
      if (uVar25 == 0) {
        plVar11[1] = 0;
      }
      else {
        plVar14 = (longlong *)plVar11[1];
        if (plVar14 == (longlong *)0x0) {
          lVar12 = FUN_143339e80(param_1,uVar25);
          plVar11[1] = lVar12;
        }
        else {
          if ((*(uint *)((longlong)plVar14 + 0x14) != uVar25) && (*plVar14 != 0)) {
            puVar13 = (undefined4 *)FUN_143339e80(param_1,uVar25);
            puVar6 = (undefined4 *)plVar11[1];
            uVar8 = puVar6[1];
            uVar9 = puVar6[2];
            uVar10 = puVar6[3];
            *puVar13 = *puVar6;
            puVar13[1] = uVar8;
            puVar13[2] = uVar9;
            puVar13[3] = uVar10;
            uVar5 = *(undefined8 *)(puVar6 + 6);
            *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(puVar6 + 4);
            *(undefined8 *)(puVar13 + 6) = uVar5;
            plVar14 = (longlong *)plVar11[1];
            *plVar14 = 0;
            plVar14[1] = -1;
            *(undefined4 *)(plVar14 + 2) = 0xffffffff;
            plVar14[3] = 0;
          }
          *(uint *)((longlong)plVar14 + 0x14) = uVar25;
        }
        lVar12 = plVar11[1];
        if (uVar18 != 0xffffffff) {
          FUN_1433445b0(param_1,lVar12,uVar18 | 0x80000000);
        }
        if (uVar20 != 0xffffffff) {
          FUN_1433445b0(param_1,lVar12,uVar20 & 0x7fffffff);
        }
      }
    }
    if (local_res8 != 0) {
      local_res8 = local_res8 + -1;
      uVar22 = uVar21 + 1;
      plVar11 = (longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x270) + (ulonglong)(uVar21 >> 4) * 8) +
                (ulonglong)(uVar21 & 0xf) * 0x18);
      uVar18 = uVar20;
      uVar21 = uVar22;
      if (local_res8 == 0) {
        uVar25 = (uint)*(ushort *)(*plVar11 + 0x22);
        uVar20 = uVar2;
      }
      else {
        uVar25 = (uint)*(ushort *)(*plVar11 + 0x22);
        uVar20 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x270) + (ulonglong)(uVar22 >> 4) * 8) + 0x10 +
                          (ulonglong)(uVar22 & 0xf) * 0x18);
      }
      goto LAB_14333aa50;
    }
  }
  uVar15 = *(longlong *)(param_1 + 0x280) - 1;
  if (lVar4 == (ulonglong)((uint)uVar15 & 0xf) * 0x1c +
               *(longlong *)(*(longlong *)(param_1 + 0x298) + (uVar15 >> 4) * 8)) {
    if ((ulonglong)*(uint *)(lVar4 + 0x10) < *(ulonglong *)(param_1 + 0x2a8)) {
      *(ulonglong *)(param_1 + 0x2a8) = (ulonglong)*(uint *)(lVar4 + 0x10);
    }
    if (*(longlong *)(param_1 + 0x280) != 0) {
      *(longlong *)(param_1 + 0x280) = *(longlong *)(param_1 + 0x280) + -1;
    }
  }
  *(undefined4 *)(param_3 + 0x14) = 0;
  return;
}



// FUNCTION 14333ad60 FUN_14333ad60 body=900 status=ok
// SIG undefined FUN_14333ad60(void)

void FUN_14333ad60(longlong param_1,longlong *param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  longlong *local_60;
  
  uVar1 = *(uint *)(param_3 + 0x18);
  local_60 = param_2;
  if (uVar1 != 0xffffffff) {
    local_60 = (longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x270) + (ulonglong)(uVar1 >> 4) * 8) +
               (ulonglong)(uVar1 & 0xf) * 0x18);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  uVar2 = *(uint *)(param_3 + 0xc);
  iVar18 = *(int *)(param_3 + 0x14);
  uVar16 = *(uint *)(param_3 + 8);
  uVar19 = *(uint *)(param_3 + 4);
  bVar10 = true;
  uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x270) + (ulonglong)(uVar1 >> 4) * 8) +
                     0x10 + (ulonglong)(uVar1 & 0xf) * 0x18);
  uVar3 = *(uint *)(param_2[1] + 0x14);
  puVar11 = (undefined4 *)FUN_143339e80(param_1);
  puVar4 = (undefined4 *)param_2[1];
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  *puVar11 = *puVar4;
  puVar11[1] = uVar6;
  puVar11[2] = uVar7;
  puVar11[3] = uVar8;
  uVar9 = *(undefined8 *)(puVar4 + 6);
  *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar4 + 4);
  *(undefined8 *)(puVar11 + 6) = uVar9;
  puVar5 = (undefined8 *)param_2[1];
  *puVar5 = 0;
  puVar5[1] = 0xffffffffffffffff;
  *(undefined4 *)(puVar5 + 2) = 0xffffffff;
  *(uint *)((longlong)puVar5 + 0x14) = uVar3;
  puVar5[3] = 0;
  while( true ) {
    if (iVar18 == 0) {
      param_2[1] = (longlong)puVar11;
      if (uVar16 != 0xffffffff) {
        FUN_1433445b0(param_1,puVar11,uVar16 | 0x80000000);
      }
      if (uVar15 != 0xffffffff) {
        FUN_1433445b0(param_1,puVar11,uVar15 & 0x7fffffff);
      }
    }
    else if (uVar16 != uVar15) {
      if (uVar3 != 0) {
        plVar14 = (longlong *)param_2[1];
        if (plVar14 == (longlong *)0x0) {
          lVar12 = FUN_143339e80(param_1,uVar3);
          param_2[1] = lVar12;
        }
        else {
          if ((*(uint *)((longlong)plVar14 + 0x14) != uVar3) && (*plVar14 != 0)) {
            puVar13 = (undefined4 *)FUN_143339e80(param_1,uVar3);
            puVar4 = (undefined4 *)param_2[1];
            uVar6 = puVar4[1];
            uVar7 = puVar4[2];
            uVar8 = puVar4[3];
            *puVar13 = *puVar4;
            puVar13[1] = uVar6;
            puVar13[2] = uVar7;
            puVar13[3] = uVar8;
            uVar9 = *(undefined8 *)(puVar4 + 6);
            *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(puVar4 + 4);
            *(undefined8 *)(puVar13 + 6) = uVar9;
            plVar14 = (longlong *)param_2[1];
            *plVar14 = 0;
            plVar14[1] = -1;
            *(undefined4 *)(plVar14 + 2) = 0xffffffff;
            plVar14[3] = 0;
          }
          *(uint *)((longlong)plVar14 + 0x14) = uVar3;
        }
      }
      lVar12 = param_2[1];
      if (param_4 != 0xffffffff) {
        FUN_1433445b0(param_1,lVar12,param_4 | 0x80000000);
        FUN_1433445b0(param_1,lVar12,param_4 & 0x7fffffff);
      }
      lVar12 = param_2[1];
      if (uVar16 != 0xffffffff) {
        FUN_1433445b0(param_1,lVar12,uVar16 | 0x80000000);
      }
      if (uVar15 != 0xffffffff) {
        FUN_1433445b0(param_1,lVar12,uVar15 & 0x7fffffff);
      }
    }
    if ((uVar19 != uVar3) || (param_2[1] == 0)) {
      if (uVar19 == 0) {
        param_2[1] = 0;
      }
      else {
        if (bVar10) {
          param_2 = local_60;
        }
        plVar14 = (longlong *)param_2[1];
        if (plVar14 == (longlong *)0x0) {
          lVar12 = FUN_143339e80(param_1,uVar19);
          param_2[1] = lVar12;
        }
        else {
          if ((*(uint *)((longlong)plVar14 + 0x14) != uVar19) && (*plVar14 != 0)) {
            puVar13 = (undefined4 *)FUN_143339e80(param_1,uVar19);
            puVar4 = (undefined4 *)param_2[1];
            uVar6 = puVar4[1];
            uVar7 = puVar4[2];
            uVar8 = puVar4[3];
            *puVar13 = *puVar4;
            puVar13[1] = uVar6;
            puVar13[2] = uVar7;
            puVar13[3] = uVar8;
            uVar9 = *(undefined8 *)(puVar4 + 6);
            *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(puVar4 + 4);
            *(undefined8 *)(puVar13 + 6) = uVar9;
            plVar14 = (longlong *)param_2[1];
            *plVar14 = 0;
            plVar14[1] = -1;
            *(undefined4 *)(plVar14 + 2) = 0xffffffff;
            plVar14[3] = 0;
          }
          *(uint *)((longlong)plVar14 + 0x14) = uVar19;
        }
        lVar12 = param_2[1];
        if (uVar16 != 0xffffffff) {
          FUN_1433445b0(param_1,lVar12,uVar16 | 0x80000000);
        }
        if (uVar15 != 0xffffffff) {
          FUN_1433445b0(param_1,lVar12,uVar15 & 0x7fffffff);
        }
      }
    }
    bVar10 = false;
    if (iVar18 == 0) break;
    uVar17 = uVar1 + 1;
    param_2 = (longlong *)
              (*(longlong *)(*(longlong *)(param_1 + 0x270) + (ulonglong)(uVar1 >> 4) * 8) +
              (ulonglong)(uVar1 & 0xf) * 0x18);
    iVar18 = iVar18 + -1;
    uVar16 = uVar15;
    uVar1 = uVar17;
    if (iVar18 == 0) {
      uVar19 = (uint)*(ushort *)(*param_2 + 0x22);
      uVar15 = uVar2;
    }
    else {
      uVar19 = (uint)*(ushort *)(*param_2 + 0x22);
      uVar15 = *(uint *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x270) + (ulonglong)(uVar17 >> 4) * 8) + 0x10 +
                        (ulonglong)(uVar17 & 0xf) * 0x18);
    }
  }
  *(undefined4 *)(param_3 + 0x14) = 0;
  return;
}



// FUNCTION 14333b0f0 FUN_14333b0f0 body=775 status=ok
// SIG undefined FUN_14333b0f0(void)

void FUN_14333b0f0(longlong param_1,longlong *param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int local_res8;
  longlong *local_58;
  ulonglong local_50;
  
  uVar14 = *(uint *)(param_3 + 0x18);
  local_58 = param_2;
  if (uVar14 != 0xffffffff) {
    local_58 = (longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x270) + (ulonglong)(uVar14 >> 4) * 8) +
               (ulonglong)(uVar14 & 0xf) * 0x18);
  }
  uVar14 = *(uint *)(param_3 + 0x10);
  bVar8 = true;
  uVar1 = *(uint *)(param_3 + 0xc);
  local_res8 = *(int *)(param_3 + 0x14);
  uVar15 = *(uint *)(param_3 + 4);
  uVar2 = *(uint *)(param_2[1] + 0x14);
  uVar13 = *(uint *)(param_3 + 8);
  uVar12 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x270) + (ulonglong)(uVar14 >> 4) * 8) +
                     0x10 + (ulonglong)(uVar14 & 0xf) * 0x18);
  local_50 = (ulonglong)uVar14;
  do {
    if (bVar8) {
LAB_14333b25a:
      lVar9 = param_2[1];
      if (uVar13 != 0xffffffff) {
        FUN_1433445b0(param_1,lVar9,uVar13 | 0x80000000);
      }
      if (uVar12 != 0xffffffff) {
        FUN_1433445b0(param_1,lVar9,uVar12 & 0x7fffffff);
      }
    }
    else if (uVar13 != uVar12) {
      if (uVar2 != 0) {
        plVar11 = (longlong *)param_2[1];
        if (plVar11 == (longlong *)0x0) {
          lVar9 = FUN_143339e80(param_1,uVar2);
          param_2[1] = lVar9;
        }
        else {
          if ((*(uint *)((longlong)plVar11 + 0x14) != uVar2) && (*plVar11 != 0)) {
            puVar10 = (undefined4 *)FUN_143339e80(param_1,uVar2);
            puVar3 = (undefined4 *)param_2[1];
            uVar4 = puVar3[1];
            uVar5 = puVar3[2];
            uVar6 = puVar3[3];
            *puVar10 = *puVar3;
            puVar10[1] = uVar4;
            puVar10[2] = uVar5;
            puVar10[3] = uVar6;
            uVar7 = *(undefined8 *)(puVar3 + 6);
            *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar3 + 4);
            *(undefined8 *)(puVar10 + 6) = uVar7;
            plVar11 = (longlong *)param_2[1];
            *plVar11 = 0;
            plVar11[1] = -1;
            *(undefined4 *)(plVar11 + 2) = 0xffffffff;
            plVar11[3] = 0;
          }
          *(uint *)((longlong)plVar11 + 0x14) = uVar2;
        }
      }
      lVar9 = param_2[1];
      if (param_4 != 0xffffffff) {
        FUN_1433445b0(param_1,lVar9,param_4 | 0x80000000);
        FUN_1433445b0(param_1,lVar9,param_4 & 0x7fffffff);
      }
      goto LAB_14333b25a;
    }
    if ((uVar15 != uVar2) || (param_2[1] == 0)) {
      if (uVar15 == 0) {
        param_2[1] = 0;
      }
      else {
        if (bVar8) {
          param_2 = local_58;
        }
        plVar11 = (longlong *)param_2[1];
        if (plVar11 == (longlong *)0x0) {
          lVar9 = FUN_143339e80(param_1,uVar15);
          param_2[1] = lVar9;
        }
        else {
          if ((*(uint *)((longlong)plVar11 + 0x14) != uVar15) && (*plVar11 != 0)) {
            puVar10 = (undefined4 *)FUN_143339e80(param_1,uVar15);
            puVar3 = (undefined4 *)param_2[1];
            uVar4 = puVar3[1];
            uVar5 = puVar3[2];
            uVar6 = puVar3[3];
            *puVar10 = *puVar3;
            puVar10[1] = uVar4;
            puVar10[2] = uVar5;
            puVar10[3] = uVar6;
            uVar7 = *(undefined8 *)(puVar3 + 6);
            *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar3 + 4);
            *(undefined8 *)(puVar10 + 6) = uVar7;
            plVar11 = (longlong *)param_2[1];
            *plVar11 = 0;
            plVar11[1] = -1;
            *(undefined4 *)(plVar11 + 2) = 0xffffffff;
            plVar11[3] = 0;
          }
          *(uint *)((longlong)plVar11 + 0x14) = uVar15;
        }
        lVar9 = param_2[1];
        if (uVar13 != 0xffffffff) {
          FUN_1433445b0(param_1,lVar9,uVar13 | 0x80000000);
        }
        if (uVar12 != 0xffffffff) {
          FUN_1433445b0(param_1,lVar9,uVar12 & 0x7fffffff);
        }
      }
    }
    bVar8 = false;
    if (local_res8 == 0) {
      *(undefined4 *)(param_3 + 0x14) = 0;
      return;
    }
    local_res8 = local_res8 + -1;
    uVar14 = (uint)local_50 + 1;
    param_2 = (longlong *)
              (*(longlong *)(*(longlong *)(param_1 + 0x270) + (local_50 >> 4) * 8) +
              (ulonglong)((uint)local_50 & 0xf) * 0x18);
    uVar13 = uVar12;
    local_50 = (ulonglong)uVar14;
    if (local_res8 == 0) {
      uVar15 = (uint)*(ushort *)(*param_2 + 0x22);
      uVar12 = uVar1;
    }
    else {
      uVar15 = (uint)*(ushort *)(*param_2 + 0x22);
      uVar12 = *(uint *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x270) + (ulonglong)(uVar14 >> 4) * 8) + 0x10 +
                        (ulonglong)(uVar14 & 0xf) * 0x18);
    }
  } while( true );
}



// FUNCTION 14333b400 FUN_14333b400 body=405 status=ok
// SIG undefined FUN_14333b400(void)

void FUN_14333b400(longlong param_1,longlong param_2,float *param_3)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 8) == 0)) goto LAB_14333b579;
  uVar5 = *(uint *)(*(longlong *)(param_2 + 8) + 8);
  if (uVar5 == 0xffffffff) {
    fVar4 = -NAN;
  }
  else {
    fVar4 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x310) + (ulonglong)(uVar5 >> 4) * 8) +
                      (ulonglong)(uVar5 & 0xf) * 0x10);
  }
  param_3[2] = -NAN;
  param_3[3] = -NAN;
  uVar5 = 0;
  do {
    if ((fVar4 == -NAN) ||
       (pfVar1 = (float *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x338) +
                            (ulonglong)(((uint)fVar4 & 0xfffffff) >> 4) * 8) + 4 +
                          (ulonglong)((uint)fVar4 & 0xf) * 0x14),
       *pfVar1 <= *param_3 && *param_3 != *pfVar1)) break;
    if ((int)fVar4 < 0) {
      param_3[2] = (float)((uint)fVar4 & 0xfffffff);
    }
    else {
      param_3[3] = fVar4;
    }
    FUN_143339e00(param_1,*(undefined8 *)(param_2 + 8));
    uVar2 = *(uint *)(*(longlong *)(param_2 + 8) + 8);
    if (uVar2 == 0xffffffff) {
      fVar4 = -NAN;
    }
    else {
      fVar4 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x310) + (ulonglong)(uVar2 >> 4) * 8)
                        + (ulonglong)(uVar2 & 0xf) * 0x10);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  if (*(longlong *)(*(longlong *)(param_2 + 8) + 0x18) != 0) {
    FUN_14333a530(param_1,param_2,param_3);
    return;
  }
  if (fVar4 == -NAN) {
    fVar3 = param_3[3];
    if (fVar3 != -NAN) {
      param_3[3] = -NAN;
      fVar4 = fVar3;
LAB_14333b53a:
      FUN_1433445b0(param_1,*(undefined8 *)(param_2 + 8),fVar4);
      goto LAB_14333b54b;
    }
    fVar3 = param_3[2];
    if (fVar3 != -NAN) {
      param_3[2] = -NAN;
      fVar4 = fVar3;
      goto LAB_14333b53a;
    }
  }
  else {
LAB_14333b54b:
    if (-1 < (int)fVar4) {
      FUN_14333b0f0(param_1,param_2,param_3,fVar4);
      goto LAB_14333b579;
    }
  }
  FUN_14333ad60(param_1,param_2,param_3,(uint)fVar4 & 0xfffffff);
LAB_14333b579:
  param_3[5] = 0.0;
  return;
}



// FUNCTION 14333b5a0 FUN_14333b5a0 body=2269 status=ok
// SIG undefined FUN_14333b5a0(void)

void FUN_14333b5a0(longlong param_1,longlong param_2,float param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  longlong lVar14;
  void *_Dst;
  undefined8 uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  uint uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong *plVar25;
  uint uVar26;
  longlong *plVar27;
  uint local_res8;
  uint local_res18;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  int iStack_64;
  uint local_60;
  
  uVar23 = 0;
  *(undefined4 *)(param_1 + 0x210) = 0xf149f2ca;
  *(undefined8 *)(param_1 + 600) = 0;
  if (*(longlong *)(param_2 + 8) != 0) {
    do {
      lVar14 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_2 + 0x20) + (uVar23 >> 4) * 8) +
                (ulonglong)((uint)uVar23 & 0xf) * 8);
      *(uint *)(lVar14 + 0x28) = (uint)uVar23;
      if ((*(byte *)(lVar14 + 0x16) & 4) != 0) {
        uStack_70 = 0;
        uVar20 = *(ulonglong *)(param_1 + 600) >> 4;
        local_68 = 0xffffffff;
        local_78 = lVar14;
        if (*(ulonglong *)(param_1 + 0x260) <= uVar20) {
          FUN_1433442c0(param_1 + 0x250,uVar20);
        }
        uVar22 = (ulonglong)(*(uint *)(param_1 + 600) & 0xf);
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x270) + uVar20 * 8);
        puVar1 = (undefined4 *)(lVar14 + uVar22 * 0x18);
        *puVar1 = (undefined4)local_78;
        puVar1[1] = local_78._4_4_;
        puVar1[2] = (undefined4)uStack_70;
        puVar1[3] = uStack_70._4_4_;
        *(ulonglong *)(lVar14 + 0x10 + uVar22 * 0x18) = CONCAT44(iStack_64,local_68);
        *(longlong *)(param_1 + 600) = *(longlong *)(param_1 + 600) + 1;
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 < *(ulonglong *)(param_2 + 8));
  }
  plVar19 = (longlong *)0x0;
  local_78 = CONCAT44(local_78._4_4_,param_3);
  local_res8 = 0xffffffff;
  iStack_64 = 0;
  plVar21 = plVar19;
  plVar25 = plVar19;
  while( true ) {
    while( true ) {
      while( true ) {
        uVar26 = (uint)plVar25;
        uVar18 = (uint)plVar21;
        if ((*(longlong **)(param_1 + 0x230) <= plVar25) ||
           (*(longlong **)(param_1 + 600) <= plVar21)) break;
        uVar23 = (ulonglong)(uVar26 & 0xf);
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x248) + ((ulonglong)plVar25 >> 4) * 8);
        uVar20 = (ulonglong)(uVar18 & 0xf);
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x270) + ((ulonglong)plVar21 >> 4) * 8);
        lVar7 = *(longlong *)(lVar14 + uVar23 * 0x18);
        lVar8 = *(longlong *)(lVar6 + uVar20 * 0x18);
        uVar24 = *(uint *)(lVar7 + 0x28);
        if (*(uint *)(lVar8 + 0x28) == uVar24) {
          uVar12 = FUN_143339a70(param_1,lVar8,param_3,0);
          plVar25 = (longlong *)(ulonglong)(uVar26 + 1);
          plVar21 = (longlong *)(ulonglong)(uVar18 + 1);
          *(undefined4 *)(lVar6 + 0x10 + uVar20 * 0x18) = uVar12;
          *(undefined4 *)(lVar14 + 0x10 + uVar23 * 0x18) = uVar12;
        }
        else if (*(uint *)(lVar8 + 0x28) < uVar24) {
          uVar12 = FUN_143339a70(param_1,lVar8,param_3,1);
          plVar21 = (longlong *)(ulonglong)(uVar18 + 1);
          *(undefined4 *)(lVar6 + 0x10 + uVar20 * 0x18) = uVar12;
        }
        else {
          uVar12 = FUN_143339a70(param_1,lVar7,param_3,1);
          *(undefined4 *)(lVar14 + 0x10 + uVar23 * 0x18) = uVar12;
          plVar25 = (longlong *)(ulonglong)(uVar26 + 1);
        }
      }
      if (*(longlong **)(param_1 + 600) <= plVar21) break;
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x270) + ((ulonglong)plVar21 >> 4) * 8);
      uVar12 = FUN_143339a70(param_1,*(undefined8 *)(lVar14 + (ulonglong)(uVar18 & 0xf) * 0x18),
                             param_3,1);
      *(undefined4 *)(lVar14 + 0x10 + (ulonglong)(uVar18 & 0xf) * 0x18) = uVar12;
      plVar21 = (longlong *)(ulonglong)(uVar18 + 1);
    }
    if (*(longlong **)(param_1 + 0x230) <= plVar25) break;
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x248) + ((ulonglong)plVar25 >> 4) * 8);
    uVar12 = FUN_143339a70(param_1,*(undefined8 *)(lVar14 + (ulonglong)(uVar26 & 0xf) * 0x18),
                           param_3,1);
    *(undefined4 *)(lVar14 + 0x10 + (ulonglong)(uVar26 & 0xf) * 0x18) = uVar12;
    plVar25 = (longlong *)(ulonglong)(uVar26 + 1);
  }
  uVar23 = 0;
  local_res18 = 0;
  plVar21 = plVar19;
  uVar20 = uVar23;
  uVar18 = local_res8;
LAB_14333b800:
  do {
    while( true ) {
      while( true ) {
        uVar22 = 0;
        uVar24 = (uint)uVar20;
        uVar26 = (uint)uVar23;
        if ((uVar20 < *(ulonglong *)(param_1 + 0x230)) && (uVar23 < *(ulonglong *)(param_1 + 600)))
        break;
        if (uVar23 < *(ulonglong *)(param_1 + 600)) {
          lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x270) + (uVar23 >> 4) * 8);
          plVar25 = (longlong *)(lVar14 + (ulonglong)(uVar26 & 0xf) * 0x18);
          FUN_143344710(param_1,plVar21,
                        *(undefined4 *)(lVar14 + 0x10 + (ulonglong)(uVar26 & 0xf) * 0x18));
          uVar18 = *(uint *)(plVar25 + 2);
          plVar25[1] = 0;
          if (*(short *)(*plVar25 + 0x22) != 0) {
            lVar14 = FUN_143339e80(param_1,*(short *)(*plVar25 + 0x22));
            plVar25[1] = lVar14;
            FUN_143344710(param_1,plVar25,uVar18 | 0x80000000);
          }
          uVar23 = (ulonglong)(uVar26 + 1);
          plVar21 = plVar25;
          uVar18 = local_res8;
        }
        else {
          if (*(ulonglong *)(param_1 + 0x230) <= uVar20) {
            *(undefined8 *)(param_1 + 0x230) = 0;
            if (*(longlong *)(param_1 + 600) != 0) {
              do {
                uVar23 = (ulonglong)((uint)uVar22 & 0xf);
                uVar20 = *(ulonglong *)(param_1 + 0x230) >> 4;
                lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x270) + (uVar22 >> 4) * 8);
                if (*(ulonglong *)(param_1 + 0x238) <= uVar20) {
                  if (*(ulonglong *)(param_1 + 0x240) <= uVar20) {
                    if (*(longlong *)(param_1 + 0x248) == 0) {
                      *(undefined8 *)(param_1 + 0x240) = 8;
                      uVar15 = FUN_1433245e0(*(undefined8 *)(param_1 + 0x228),0x40);
                      *(undefined8 *)(param_1 + 0x248) = uVar15;
                    }
                    else {
                      _Dst = (void *)FUN_1433245e0(*(undefined8 *)(param_1 + 0x228),
                                                   *(ulonglong *)(param_1 + 0x240) << 4);
                      _guard_xfg_dispatch_icall_nop
                                (_Dst,*(void **)(param_1 + 0x248),
                                 *(longlong *)(param_1 + 0x238) << 3);
                      *(void **)(param_1 + 0x248) = _Dst;
                      *(longlong *)(param_1 + 0x240) = *(longlong *)(param_1 + 0x240) * 2;
                    }
                  }
                  uVar15 = FUN_1433245e0(*(undefined8 *)(param_1 + 0x228),0x180);
                  *(undefined8 *)(*(longlong *)(param_1 + 0x248) + uVar20 * 8) = uVar15;
                  *(longlong *)(param_1 + 0x238) = *(longlong *)(param_1 + 0x238) + 1;
                }
                uVar22 = uVar22 + 1;
                uVar16 = (ulonglong)(*(uint *)(param_1 + 0x230) & 0xf);
                puVar1 = (undefined4 *)(lVar14 + uVar23 * 0x18);
                uVar12 = puVar1[1];
                uVar10 = puVar1[2];
                uVar11 = puVar1[3];
                lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x248) + uVar20 * 8);
                puVar2 = (undefined4 *)(lVar6 + uVar16 * 0x18);
                *puVar2 = *puVar1;
                puVar2[1] = uVar12;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                *(undefined8 *)(lVar6 + 0x10 + uVar16 * 0x18) =
                     *(undefined8 *)(lVar14 + 0x10 + uVar23 * 0x18);
                *(longlong *)(param_1 + 0x230) = *(longlong *)(param_1 + 0x230) + 1;
              } while (uVar22 < *(ulonglong *)(param_1 + 600));
            }
            uVar23 = 0;
            if (*(longlong *)(param_2 + 8) != 0) {
              do {
                uVar18 = (uint)uVar23;
                uVar20 = uVar23 >> 4;
                uVar23 = uVar23 + 1;
                lVar14 = *(longlong *)
                          (*(longlong *)(*(longlong *)(param_2 + 0x20) + uVar20 * 8) +
                          (ulonglong)(uVar18 & 0xf) * 8);
                *(ushort *)(lVar14 + 0x16) = *(ushort *)(lVar14 + 0x16) & 0xffef;
                *(undefined2 *)(lVar14 + 0x1c) = *(undefined2 *)(lVar14 + 0x1e);
                *(undefined2 *)(lVar14 + 0x20) = *(undefined2 *)(lVar14 + 0x22);
              } while (uVar23 < *(ulonglong *)(param_2 + 8));
            }
            return;
          }
          lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x248) + (uVar20 >> 4) * 8);
          plVar25 = (longlong *)(lVar14 + (ulonglong)(uVar24 & 0xf) * 0x18);
          FUN_143344710(param_1,plVar19,
                        *(undefined4 *)(lVar14 + 0x10 + (ulonglong)(uVar24 & 0xf) * 0x18));
          FUN_143344710(param_1,plVar25,*(uint *)(plVar25 + 2) | 0x80000000);
          if (iStack_64 != 0) {
            FUN_14333b400(param_1,plVar19,&local_78);
          }
          FUN_143339c90(param_1,plVar21,plVar25,param_3);
          local_res18 = uVar24 + 1;
          local_res8 = 0xffffffff;
          plVar19 = plVar25;
          uVar20 = (ulonglong)local_res18;
          uVar18 = 0xffffffff;
        }
      }
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x248) + (uVar20 >> 4) * 8);
      fVar4 = *(float *)(lVar14 + 0x10 + (ulonglong)(uVar24 & 0xf) * 0x18);
      plVar25 = (longlong *)(lVar14 + (ulonglong)(uVar24 & 0xf) * 0x18);
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x270) + (uVar23 >> 4) * 8);
      fVar5 = *(float *)(lVar14 + 0x10 + (ulonglong)(uVar26 & 0xf) * 0x18);
      plVar27 = (longlong *)(lVar14 + (ulonglong)(uVar26 & 0xf) * 0x18);
      iVar13 = 1;
      if (fVar4 != fVar5) {
        iVar13 = 3 - (uint)(*(uint *)(*plVar27 + 0x28) < *(uint *)(*plVar25 + 0x28));
      }
      if (iVar13 != 1) break;
      if (fVar4 == -NAN) {
        if (iStack_64 != 0) {
          FUN_14333b400(param_1,plVar19,&local_78);
        }
LAB_14333bba4:
        plVar27[1] = plVar25[1];
      }
      else {
        FUN_143344710(param_1,plVar19,fVar4);
        FUN_143344710(param_1,plVar21,fVar4);
        if (iStack_64 != 0) {
          FUN_14333b400(param_1,plVar19,&local_78);
        }
        uVar18 = uVar26 + 1;
        uVar24 = local_res18 + 1;
        iVar13 = FUN_1433447d0(param_1,uVar24,uVar18,fVar4);
        while (iVar13 != 0) {
          if (iVar13 == 2) {
            uVar23 = (ulonglong)uVar18;
            lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x270) + (ulonglong)(uVar18 >> 4) * 8);
            plVar27[1] = 0;
            plVar19 = (longlong *)(lVar14 + (ulonglong)(uVar18 & 0xf) * 0x18);
            plVar17 = plVar27;
            plVar21 = plVar27;
            if (*(short *)(*plVar27 + 0x22) != 0) {
              lVar14 = FUN_143339e80(param_1,*(short *)(*plVar27 + 0x22));
              plVar27[1] = lVar14;
              FUN_143344710(param_1,plVar27,(uint)fVar4 | 0x80000000);
            }
          }
          else {
            lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x248) + (ulonglong)(uVar24 >> 4) * 8);
            FUN_143344710(param_1,plVar25,(uint)fVar4 | 0x80000000);
            plVar17 = plVar25;
            plVar25 = (longlong *)(lVar14 + (ulonglong)(uVar24 & 0xf) * 0x18);
            plVar19 = plVar27;
            local_res18 = uVar24;
          }
          FUN_143344710(param_1,plVar17,fVar4);
          uVar26 = (uint)uVar23;
          uVar18 = uVar26 + 1;
          uVar24 = local_res18 + 1;
          iVar13 = FUN_1433447d0(param_1,uVar24,uVar18,fVar4);
          plVar27 = plVar19;
        }
        FUN_143344710(param_1,plVar25,(uint)fVar4 | 0x80000000);
        if (*(short *)(*plVar25 + 0x20) == *(short *)(*plVar27 + 0x22)) {
          FUN_143344710(param_1,plVar21,fVar4);
          goto LAB_14333bba4;
        }
        plVar27[1] = 0;
        sVar3 = *(short *)(*plVar27 + 0x22);
        if (sVar3 != 0) {
          lVar14 = FUN_143339e80(param_1,sVar3);
          plVar27[1] = lVar14;
          FUN_143344710(param_1,plVar27,(uint)fVar4 | 0x80000000);
        }
      }
      local_res18 = local_res18 + 1;
      uVar23 = (ulonglong)(uVar26 + 1);
      plVar19 = plVar25;
      plVar21 = plVar27;
      uVar20 = (ulonglong)local_res18;
      local_res8 = uVar26;
      uVar18 = uVar26;
    }
    if (iVar13 == 2) {
      if (((plVar19 == (longlong *)0x0) || (plVar19[1] == 0)) || (*(int *)(plVar19[1] + 0x14) == 0))
      {
        FUN_143344710(param_1,plVar21,fVar5);
        uVar24 = *(uint *)(plVar27 + 2);
        plVar27[1] = 0;
        uVar18 = local_res8;
        if (*(short *)(*plVar27 + 0x22) != 0) {
          lVar14 = FUN_143339e80(param_1,*(short *)(*plVar27 + 0x22));
          plVar27[1] = lVar14;
          FUN_143344710(param_1,plVar27,uVar24 | 0x80000000);
        }
      }
      else {
        if (iStack_64 == 0) {
          iStack_64 = 1;
          local_78 = (ulonglong)CONCAT24(*(undefined2 *)(*plVar27 + 0x1e),(undefined4)local_78);
          local_68 = uVar26;
          local_60 = uVar18;
        }
        else {
          iStack_64 = iStack_64 + 1;
        }
        if (((plVar21 != (longlong *)0x0) && (plVar21[1] != 0)) &&
           ((pfVar9 = *(float **)(plVar21[1] + 0x18), pfVar9 != (float *)0x0 && (*pfVar9 == param_3)
            ))) {
          pfVar9[3] = fVar5;
          uVar23 = (ulonglong)(uVar26 + 1);
          plVar21 = plVar27;
          uVar20 = (ulonglong)local_res18;
          goto LAB_14333b800;
        }
      }
      uVar23 = (ulonglong)(uVar26 + 1);
      plVar21 = plVar27;
      uVar20 = (ulonglong)local_res18;
      goto LAB_14333b800;
    }
    uVar20 = (ulonglong)local_res18;
    if (iVar13 == 3) {
      FUN_143344710(param_1,plVar19,fVar4);
      FUN_143344710(param_1,plVar25,*(uint *)(plVar25 + 2) | 0x80000000);
      if (iStack_64 != 0) {
        FUN_14333b400(param_1,plVar19,&local_78);
      }
      FUN_143339c90(param_1,plVar21,plVar25,param_3);
      local_res18 = local_res18 + 1;
      local_res8 = 0xffffffff;
      plVar19 = plVar25;
      uVar20 = (ulonglong)local_res18;
      uVar18 = 0xffffffff;
    }
  } while( true );
}



// FUNCTION 14333be90 FUN_14333be90 body=348 status=ok
// SIG undefined FUN_14333be90(void)

void FUN_14333be90(longlong param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  
  if (param_2 < param_3) {
    uVar14 = (ulonglong)param_2;
    uVar13 = (ulonglong)(param_3 - param_2);
    do {
      uVar12 = (ulonglong)((uint)uVar14 & 0xf);
      uVar15 = uVar14 >> 4;
      uVar14 = uVar14 + 1;
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + uVar15 * 8);
      uVar7 = *(uint *)(lVar10 + uVar12 * 0xc);
      puVar2 = (uint *)(lVar10 + uVar12 * 0xc);
      uVar8 = *(uint *)(lVar10 + 4 + uVar12 * 0xc);
      uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1c8) + (ulonglong)(uVar8 >> 4) * 8)
                       + (ulonglong)(uVar8 & 0xf) * 4);
      uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1c8) + (ulonglong)(uVar7 >> 4) * 8)
                       + (ulonglong)(uVar7 & 0xf) * 4);
      lVar10 = (ulonglong)(uVar7 & 0xf) * 8;
      lVar4 = (ulonglong)(uVar7 >> 4) * 8;
      lVar5 = (ulonglong)(uVar8 & 0xf) * 8;
      puVar1 = (ushort *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x178) + lVar4) + lVar10) + 0x16
               );
      *puVar1 = *puVar1 | 0x10;
      lVar6 = (ulonglong)(uVar8 >> 4) * 8;
      puVar1 = (ushort *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x178) + lVar6) + lVar5) + 0x16)
      ;
      *puVar1 = *puVar1 | 0x10;
      lVar4 = *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x178));
      puVar16 = (undefined8 *)(*(longlong *)(lVar6 + *(longlong *)(param_1 + 0x178)) + lVar5);
      uVar11 = *(undefined8 *)(lVar4 + lVar10);
      *(undefined8 *)(lVar4 + lVar10) = *puVar16;
      *puVar16 = uVar11;
      uVar7 = puVar2[1];
      uVar8 = *puVar2;
      puVar3 = (undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x1c8) + (ulonglong)(uVar7 >> 4) * 8) +
               (ulonglong)(uVar7 & 0xf) * 4);
      uVar12 = (ulonglong)(uVar8 & 0xf);
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + (ulonglong)(uVar8 >> 4) * 8);
      uVar9 = *(undefined4 *)(lVar10 + uVar12 * 4);
      *(undefined4 *)(lVar10 + uVar12 * 4) = *puVar3;
      *puVar3 = uVar9;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return;
}



// FUNCTION 14333c000 FUN_14333c000 body=400 status=ok
// SIG undefined FUN_14333c000(void)

void FUN_14333c000(longlong param_1,float param_2,float param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = 0;
  fVar5 = param_2;
  if (*(ulonglong *)(param_1 + 0x1d8) != 0) {
    iVar1 = param_4;
    do {
      param_4 = iVar1;
      fVar5 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x1f0) + (uVar2 >> 4) * 8) + 8 +
                        (ulonglong)((uint)uVar2 & 0xf) * 0xc);
      if (param_2 < fVar5) break;
      uVar2 = (ulonglong)((uint)uVar2 + 1);
      param_4 = 1;
      iVar1 = 1;
    } while (uVar2 < *(ulonglong *)(param_1 + 0x1d8));
  }
  FUN_14333be90(param_1,0,uVar2);
  if (param_4 != 0) {
    FUN_143338f50(param_1,param_1 + 0x158);
  }
  uVar4 = *(ulonglong *)(param_1 + 0x1d8);
  if (uVar2 < uVar4) {
    do {
      fVar6 = fVar5;
      uVar3 = uVar2;
      fVar5 = fVar6;
      if (uVar2 < uVar4) {
        do {
          fVar5 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x1f0) + (uVar3 >> 4) * 8) + 8 +
                            (ulonglong)((uint)uVar3 & 0xf) * 0xc);
          if (fVar6 < fVar5) break;
          uVar3 = (ulonglong)((uint)uVar3 + 1);
        } while (uVar3 < uVar4);
      }
      FUN_143338f50(param_1,param_1 + 0x158);
      FUN_14333b5a0(param_1,param_1 + 0x158,param_2);
      FUN_14333be90(param_1,uVar2,uVar3);
      uVar4 = *(ulonglong *)(param_1 + 0x1d8);
      uVar2 = uVar3;
      param_2 = fVar6;
    } while (uVar3 < uVar4);
  }
  FUN_143338f50(param_1,param_1 + 0x130);
  if (fVar5 < param_3) {
    FUN_14333b5a0(param_1,param_1 + 0x130,fVar5);
  }
  return;
}



// FUNCTION 14333c1a0 FUN_14333c1a0 body=366 status=ok
// SIG undefined FUN_14333c1a0(void)

undefined2 FUN_14333c1a0(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = (ulonglong)param_2;
  if (*(char *)(param_1 + 0x23) != '\0') {
    if (*(short *)(*(longlong *)(param_1 + 0x350) + (*(longlong *)(param_1 + 0x348) + 1) * uVar5 * 2
                  ) == -1) {
      if ((*(uint *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(param_2 >> 5) * 4) &
          1 << ((byte)param_2 & 0x1f)) == 0) {
        *(undefined2 *)
         (*(longlong *)(param_1 + 0x350) + (*(longlong *)(param_1 + 0x348) + 1) * uVar5 * 2) = 0;
      }
      else {
        *(undefined2 *)
         (*(longlong *)(param_1 + 0x350) + (*(longlong *)(param_1 + 0x348) + 1) * uVar5 * 2) =
             *(undefined2 *)(param_1 + 0x360);
        uVar2 = *(undefined4 *)(param_1 + 0x360);
        uVar6 = *(ulonglong *)(param_1 + 0x360) >> 4;
        if (*(ulonglong *)(param_1 + 0x368) <= uVar6) {
          FUN_143343fa0(param_1 + 0x358,uVar6);
        }
        lVar4 = (ulonglong)(*(uint *)(param_1 + 0x360) & 0xf) * 0x1c;
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x378) + uVar6 * 8);
        puVar1 = (undefined4 *)(lVar3 + lVar4);
        *puVar1 = uVar2;
        puVar1[1] = param_2;
        puVar1[2] = param_2;
        puVar1[3] = 0x8000;
        *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0x8000;
        *(undefined4 *)(lVar3 + 0x18 + lVar4) = 0;
        *(longlong *)(param_1 + 0x360) = *(longlong *)(param_1 + 0x360) + 1;
        FUN_143343790(param_1 + 0x380);
      }
    }
    return *(undefined2 *)
            (*(longlong *)(param_1 + 0x350) + (*(longlong *)(param_1 + 0x348) + 1) * uVar5 * 2);
  }
  return 0;
}



// FUNCTION 14333c320 FUN_14333c320 body=838 status=ok
// SIG undefined FUN_14333c320(void)

undefined2 FUN_14333c320(longlong param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ushort uVar13;
  
  uVar11 = (ulonglong)param_3;
  uVar10 = (ulonglong)param_2;
  if (*(char *)(param_1 + 0x23) != '\0') {
    if (*(short *)(*(longlong *)(param_1 + 0x350) +
                  (*(longlong *)(param_1 + 0x348) * uVar10 + uVar11) * 2) == -1) {
      uVar7 = 1 << ((byte)param_2 & 0x1f) &
              *(uint *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(param_2 >> 5) * 4);
      uVar9 = 1 << ((byte)param_3 & 0x1f) &
              *(uint *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(param_3 >> 5) * 4);
      if (uVar9 == 0 && uVar7 == 0) {
        *(undefined2 *)
         (*(longlong *)(param_1 + 0x350) + (*(longlong *)(param_1 + 0x348) + 1) * uVar10 * 2) = 0;
        *(undefined2 *)
         (*(longlong *)(param_1 + 0x350) + (*(longlong *)(param_1 + 0x348) + 1) * uVar11 * 2) = 0;
        *(undefined2 *)
         (*(longlong *)(param_1 + 0x350) + (*(longlong *)(param_1 + 0x348) * uVar10 + uVar11) * 2) =
             0;
        *(undefined2 *)
         (*(longlong *)(param_1 + 0x350) + (*(longlong *)(param_1 + 0x348) * uVar11 + uVar10) * 2) =
             0;
      }
      else {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = 0x8000;
        }
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = 0x8000;
        }
        uVar12 = 0;
        uVar9 = uVar7;
        if (uVar8 == 0) {
          uVar10 = (ulonglong)param_3;
          uVar11 = (ulonglong)param_2;
          uVar9 = uVar12;
          uVar8 = uVar7;
        }
        uVar2 = *(ushort *)(param_1 + 0x360);
        uVar13 = *(ushort *)
                  (*(longlong *)(param_1 + 0x350) +
                  (*(longlong *)(param_1 + 0x348) + 1) * uVar10 * 2);
        if (((uVar9 != 0) || (uVar13 == 0xffff)) ||
           ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x378) + (ulonglong)(uVar13 >> 4) * 8)
                       + 0x10 + (ulonglong)(uVar13 & 0xf) * 0x1c) & 0x8000) != 0)) {
          uVar3 = *(undefined4 *)(param_1 + 0x360);
          if (uVar9 != 0) {
            uVar12 = (uint)uVar11;
          }
          uVar5 = *(ulonglong *)(param_1 + 0x360) >> 4;
          if (*(ulonglong *)(param_1 + 0x368) <= uVar5) {
            FUN_143343fa0(param_1 + 0x358,uVar5);
          }
          lVar6 = (ulonglong)(*(uint *)(param_1 + 0x360) & 0xf) * 0x1c;
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x378) + uVar5 * 8);
          puVar1 = (undefined4 *)(lVar4 + lVar6);
          *puVar1 = uVar3;
          puVar1[1] = (int)uVar10;
          puVar1[2] = uVar12;
          puVar1[3] = uVar8;
          *(ulonglong *)(lVar4 + 0x10 + lVar6) = (ulonglong)uVar9;
          *(undefined4 *)(lVar4 + 0x18 + lVar6) = 0;
          *(longlong *)(param_1 + 0x360) = *(longlong *)(param_1 + 0x360) + 1;
          FUN_143343790(param_1 + 0x380);
          uVar13 = uVar2;
        }
        *(ushort *)
         (*(longlong *)(param_1 + 0x350) + (*(longlong *)(param_1 + 0x348) * uVar10 + uVar11) * 2) =
             uVar13;
        *(ushort *)
         (*(longlong *)(param_1 + 0x350) + (*(longlong *)(param_1 + 0x348) * uVar11 + uVar10) * 2) =
             uVar13;
        lVar4 = *(longlong *)(param_1 + 0x350);
        lVar6 = (*(longlong *)(param_1 + 0x348) + 1) * uVar10;
        if (*(char *)(param_1 + 0x22) == '\0') {
          if (((*(short *)(lVar4 + lVar6 * 2) == -1) && (uVar8 != 0)) && (uVar9 == 0)) {
            *(ushort *)(lVar4 + (*(longlong *)(param_1 + 0x348) + 1) * uVar10 * 2) = uVar13;
          }
        }
        else {
          if (*(short *)(lVar4 + lVar6 * 2) == -1) {
            *(ushort *)(lVar4 + (*(longlong *)(param_1 + 0x348) + 1) * uVar10 * 2) = uVar13;
          }
          if (*(short *)(*(longlong *)(param_1 + 0x350) +
                        (*(longlong *)(param_1 + 0x348) + 1) * uVar11 * 2) == -1) {
            *(ushort *)
             (*(longlong *)(param_1 + 0x350) + (*(longlong *)(param_1 + 0x348) + 1) * uVar11 * 2) =
                 uVar13;
          }
        }
      }
    }
    return *(undefined2 *)
            (*(longlong *)(param_1 + 0x350) + (*(longlong *)(param_1 + 0x348) * uVar10 + uVar11) * 2
            );
  }
  return 0;
}



// FUNCTION 14333c670 FUN_14333c670 body=339 status=ok
// SIG undefined FUN_14333c670(void)

ulonglong FUN_14333c670(longlong param_1,uint param_2,uint param_3,uint param_4,undefined2 param_5)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined2 uVar10;
  undefined4 local_18;
  
  uVar9 = param_3 & 0xfffffff;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x338) + (ulonglong)(uVar9 >> 4) * 8);
  uVar1 = *(uint *)(lVar2 + 8 + (ulonglong)(param_3 & 0xf) * 0x14);
  puVar5 = (undefined8 *)(lVar2 + (ulonglong)(param_3 & 0xf) * 0x14);
  uVar10 = (undefined2)param_4;
  if (uVar1 == 0xffffffff) {
    *(uint *)(puVar5 + 1) = uVar9;
    *(undefined2 *)((longlong)puVar5 + 0xe) = uVar10;
    *(undefined2 *)((longlong)puVar5 + 0xc) = uVar10;
    *(undefined2 *)(puVar5 + 2) = param_5;
    *(short *)((longlong)puVar5 + 0x12) = (short)param_2;
  }
  else if ((*(ushort *)((longlong)puVar5 + 0x12) != param_2) ||
          (*(ushort *)((longlong)puVar5 + 0xc) != param_4)) {
    if (uVar1 != uVar9) {
      do {
        uVar1 = *(uint *)(puVar5 + 1);
        puVar5 = (undefined8 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x338) + (ulonglong)(uVar1 >> 4) * 8) +
                 (ulonglong)(uVar1 & 0xf) * 0x14);
        if ((*(ushort *)((longlong)puVar5 + 0x12) == param_2) &&
           (*(ushort *)((longlong)puVar5 + 0xc) == param_4)) {
          return (ulonglong)uVar1;
        }
      } while (*(uint *)(puVar5 + 1) != uVar1);
    }
    uVar3 = *(ulonglong *)(param_1 + 800);
    uVar7 = (undefined4)uVar3;
    *(undefined4 *)(puVar5 + 1) = uVar7;
    uVar4 = *puVar5;
    uVar8 = *(ulonglong *)(param_1 + 800) >> 4;
    local_18 = CONCAT22((short)param_2,param_5);
    if (*(ulonglong *)(param_1 + 0x328) <= uVar8) {
      FUN_143344360(param_1 + 0x318,uVar8);
    }
    uVar6 = (ulonglong)(*(uint *)(param_1 + 800) & 0xf);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x338) + uVar8 * 8);
    puVar5 = (undefined8 *)(lVar2 + uVar6 * 0x14);
    *puVar5 = uVar4;
    puVar5[1] = CONCAT26(uVar10,CONCAT24(uVar10,uVar7));
    *(undefined4 *)(lVar2 + uVar6 * 0x14 + 0x10) = local_18;
    *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
    return uVar3 & 0xffffffff;
  }
  return (ulonglong)uVar9;
}



// FUNCTION 14333c7d0 FUN_14333c7d0 body=1688 status=ok
// SIG undefined FUN_14333c7d0(void)

void FUN_14333c7d0(longlong param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  uint uVar13;
  void *pvVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined2 uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong local_res8;
  ulonglong local_res18;
  undefined8 local_68;
  undefined8 uStack_60;
  
  uVar21 = *(uint *)(param_1 + 0x24) - (*(uint *)(param_1 + 0x24) >> 2);
  uVar20 = *param_2;
  uVar9 = (ulonglong)((param_2[6] - 1) + uVar21) / (ulonglong)uVar21;
  uVar21 = *(uint *)((ulonglong)uVar20 * 0x20 + *(longlong *)(param_1 + 0x388));
  local_68 = *(undefined8 *)((ulonglong)uVar20 * 0x20 + *(longlong *)(param_1 + 0x388));
  uStack_60 = *(undefined8 *)((ulonglong)uVar20 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x388));
  FUN_143343010(&local_68,0);
  uVar23 = 0;
  uVar18 = *(ulonglong *)((ulonglong)*param_2 * 0x20 + *(longlong *)(param_1 + 0x388));
  if (uVar18 != 0) {
    do {
      uVar22 = uVar23 >> 4;
      uVar13 = (uint)uVar23;
      uVar23 = uVar23 + 1;
      puVar1 = (uint *)(*(longlong *)
                         (*(longlong *)
                           (*(longlong *)(param_1 + 0x388) + 0x18 + (ulonglong)uVar20 * 0x20) +
                         uVar22 * 8) + (ulonglong)(uVar13 & 0xf) * 0x18);
      *(undefined2 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x338) + (ulonglong)(*puVar1 >> 4) * 8) + 0x12 +
       (ulonglong)(*puVar1 & 0xf) * 0x14) = 0xffff;
      *(undefined2 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x338) + (ulonglong)(puVar1[1] >> 4) * 8) + 0x12 +
       (ulonglong)(puVar1[1] & 0xf) * 0x14) = 0xffff;
      *(undefined2 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x338) + (ulonglong)(puVar1[2] >> 4) * 8) + 0x12 +
       (ulonglong)(puVar1[2] & 0xf) * 0x14) = 0xffff;
    } while (uVar23 < uVar18);
  }
  uVar18 = 1;
  if (1 < uVar9) {
    do {
      cVar12 = FUN_143343b80(param_1 + 0x380,uVar20,uVar21 / uVar9);
      if (cVar12 == '\0') break;
      lVar16 = (ulonglong)(uVar20 & 0xf) * 0x1c;
      lVar7 = (ulonglong)(uVar20 >> 4) * 8;
      *(undefined4 *)(*(longlong *)(lVar7 + *(longlong *)(param_1 + 0x378)) + 0x18 + lVar16) =
           0xffffffff;
      uVar20 = *(uint *)(param_1 + 0x360);
      uVar23 = *(ulonglong *)(param_1 + 0x360) >> 4;
      lVar7 = *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x378));
      uStack_60 = ((undefined8 *)(lVar7 + lVar16))[1];
      uVar8 = *(undefined4 *)(lVar7 + 0x18 + lVar16);
      local_68._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + lVar16) >> 0x20);
      local_68 = CONCAT44(local_68._4_4_,uVar20);
      uVar15 = *(undefined8 *)(lVar7 + 0x10 + lVar16);
      if (*(ulonglong *)(param_1 + 0x368) <= uVar23) {
        FUN_143343fa0(param_1 + 0x358,uVar23);
      }
      uVar18 = uVar18 + 1;
      lVar16 = (ulonglong)(*(uint *)(param_1 + 0x360) & 0xf) * 0x1c;
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x378) + uVar23 * 8);
      puVar2 = (undefined4 *)(lVar7 + lVar16);
      *puVar2 = (undefined4)local_68;
      puVar2[1] = local_68._4_4_;
      puVar2[2] = (undefined4)uStack_60;
      puVar2[3] = uStack_60._4_4_;
      *(undefined8 *)(lVar7 + 0x10 + lVar16) = uVar15;
      *(undefined4 *)(lVar7 + 0x18 + lVar16) = uVar8;
      *(longlong *)(param_1 + 0x360) = *(longlong *)(param_1 + 0x360) + 1;
    } while (uVar18 < uVar9);
  }
  puVar17 = (undefined8 *)(param_1 + 0x318);
  uVar18 = 0;
  if (*(longlong *)(param_1 + 0x360) != 0) {
    local_res8 = 0;
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x378) + (uVar18 >> 4) * 8) + 0x18 +
                  (ulonglong)((uint)uVar18 & 0xf) * 0x1c) == -1) {
        local_res18 = 0;
        uVar9 = *(ulonglong *)(local_res8 + *(longlong *)(param_1 + 0x388));
        if (uVar9 != 0) {
          do {
            uVar23 = (ulonglong)((uint)local_res18 & 0xf);
            lVar7 = *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x388) + 0x18 + local_res8) +
                     (local_res18 >> 4) * 8);
            lVar16 = *(longlong *)(param_1 + 0x338);
            puVar2 = (undefined4 *)(lVar7 + uVar23 * 0x18);
            uVar21 = *(uint *)(lVar7 + uVar23 * 0x18);
            puVar3 = (undefined4 *)
                     (*(longlong *)(lVar16 + (ulonglong)(uVar21 >> 4) * 8) +
                     (ulonglong)(uVar21 & 0xf) * 0x14);
            puVar4 = (undefined4 *)
                     (*(longlong *)(lVar16 + (ulonglong)((uint)puVar2[1] >> 4) * 8) +
                     (ulonglong)(puVar2[1] & 0xf) * 0x14);
            puVar5 = (undefined4 *)
                     (*(longlong *)(lVar16 + (ulonglong)((uint)puVar2[2] >> 4) * 8) +
                     (ulonglong)(puVar2[2] & 0xf) * 0x14);
            uVar19 = (undefined2)uVar18;
            if (*(short *)((longlong)puVar3 + 0x12) == -1) {
              *(undefined2 *)((longlong)puVar3 + 0x12) = uVar19;
            }
            if (*(short *)((longlong)puVar4 + 0x12) == -1) {
              *(undefined2 *)((longlong)puVar4 + 0x12) = uVar19;
            }
            if (*(short *)((longlong)puVar5 + 0x12) == -1) {
              *(undefined2 *)((longlong)puVar5 + 0x12) = uVar19;
            }
            if (*(ushort *)((longlong)puVar3 + 0x12) != uVar18) {
              *puVar2 = *(undefined4 *)(param_1 + 800);
              uVar23 = *(ulonglong *)(param_1 + 800) >> 4;
              if (*(ulonglong *)(param_1 + 0x328) <= uVar23) {
                if (*(ulonglong *)(param_1 + 0x330) <= uVar23) {
                  if (*(longlong *)(param_1 + 0x338) == 0) {
                    *(undefined8 *)(param_1 + 0x330) = 0x10;
                    uVar15 = FUN_1433245e0(*puVar17,0x80);
                    *(undefined8 *)(param_1 + 0x338) = uVar15;
                  }
                  else {
                    pvVar14 = (void *)FUN_1433245e0(*puVar17,*(ulonglong *)(param_1 + 0x330) << 4);
                    _guard_xfg_dispatch_icall_nop
                              (pvVar14,*(void **)(param_1 + 0x338),
                               *(longlong *)(param_1 + 0x328) << 3);
                    *(void **)(param_1 + 0x338) = pvVar14;
                    *(longlong *)(param_1 + 0x330) = *(longlong *)(param_1 + 0x330) * 2;
                  }
                }
                uVar15 = FUN_1433245e0(*puVar17,0x140);
                *(undefined8 *)(*(longlong *)(param_1 + 0x338) + uVar23 * 8) = uVar15;
                *(longlong *)(param_1 + 0x328) = *(longlong *)(param_1 + 0x328) + 1;
              }
              uVar22 = (ulonglong)(*(uint *)(param_1 + 800) & 0xf);
              uVar8 = puVar3[1];
              uVar10 = puVar3[2];
              uVar11 = puVar3[3];
              lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x338) + uVar23 * 8);
              puVar6 = (undefined4 *)(lVar7 + uVar22 * 0x14);
              *puVar6 = *puVar3;
              puVar6[1] = uVar8;
              puVar6[2] = uVar10;
              puVar6[3] = uVar11;
              *(undefined4 *)(lVar7 + uVar22 * 0x14 + 0x10) = puVar3[4];
              *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
              uVar23 = *(longlong *)(param_1 + 800) - 1;
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x338) + (uVar23 >> 4) * 8) + 0x12 +
               (ulonglong)((uint)uVar23 & 0xf) * 0x14) = uVar19;
            }
            if (*(ushort *)((longlong)puVar4 + 0x12) != uVar18) {
              puVar2[1] = *(undefined4 *)(param_1 + 800);
              uVar23 = *(ulonglong *)(param_1 + 800) >> 4;
              if (*(ulonglong *)(param_1 + 0x328) <= uVar23) {
                if (*(ulonglong *)(param_1 + 0x330) <= uVar23) {
                  if (*(longlong *)(param_1 + 0x338) == 0) {
                    *(undefined8 *)(param_1 + 0x330) = 0x10;
                    uVar15 = FUN_1433245e0(*puVar17,0x80);
                    *(undefined8 *)(param_1 + 0x338) = uVar15;
                  }
                  else {
                    pvVar14 = (void *)FUN_1433245e0(*puVar17,*(ulonglong *)(param_1 + 0x330) << 4);
                    _guard_xfg_dispatch_icall_nop
                              (pvVar14,*(void **)(param_1 + 0x338),
                               *(longlong *)(param_1 + 0x328) << 3);
                    *(void **)(param_1 + 0x338) = pvVar14;
                    *(longlong *)(param_1 + 0x330) = *(longlong *)(param_1 + 0x330) * 2;
                  }
                }
                uVar15 = FUN_1433245e0(*puVar17,0x140);
                *(undefined8 *)(*(longlong *)(param_1 + 0x338) + uVar23 * 8) = uVar15;
                *(longlong *)(param_1 + 0x328) = *(longlong *)(param_1 + 0x328) + 1;
              }
              uVar22 = (ulonglong)(*(uint *)(param_1 + 800) & 0xf);
              uVar8 = puVar4[1];
              uVar10 = puVar4[2];
              uVar11 = puVar4[3];
              lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x338) + uVar23 * 8);
              puVar3 = (undefined4 *)(lVar7 + uVar22 * 0x14);
              *puVar3 = *puVar4;
              puVar3[1] = uVar8;
              puVar3[2] = uVar10;
              puVar3[3] = uVar11;
              *(undefined4 *)(lVar7 + uVar22 * 0x14 + 0x10) = puVar4[4];
              *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
              uVar23 = *(longlong *)(param_1 + 800) - 1;
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x338) + (uVar23 >> 4) * 8) + 0x12 +
               (ulonglong)((uint)uVar23 & 0xf) * 0x14) = uVar19;
            }
            if (*(ushort *)((longlong)puVar5 + 0x12) != uVar18) {
              puVar2[2] = *(undefined4 *)(param_1 + 800);
              uVar23 = *(ulonglong *)(param_1 + 800) >> 4;
              if (*(ulonglong *)(param_1 + 0x328) <= uVar23) {
                if (*(ulonglong *)(param_1 + 0x330) <= uVar23) {
                  if (*(longlong *)(param_1 + 0x338) == 0) {
                    *(undefined8 *)(param_1 + 0x330) = 0x10;
                    uVar15 = FUN_1433245e0(*puVar17,0x80);
                    *(undefined8 *)(param_1 + 0x338) = uVar15;
                  }
                  else {
                    pvVar14 = (void *)FUN_1433245e0(*puVar17,*(ulonglong *)(param_1 + 0x330) << 4);
                    _guard_xfg_dispatch_icall_nop
                              (pvVar14,*(void **)(param_1 + 0x338),
                               *(longlong *)(param_1 + 0x328) << 3);
                    *(void **)(param_1 + 0x338) = pvVar14;
                    *(longlong *)(param_1 + 0x330) = *(longlong *)(param_1 + 0x330) * 2;
                  }
                }
                uVar15 = FUN_1433245e0(*puVar17,0x140);
                *(undefined8 *)(*(longlong *)(param_1 + 0x338) + uVar23 * 8) = uVar15;
                *(longlong *)(param_1 + 0x328) = *(longlong *)(param_1 + 0x328) + 1;
              }
              uVar22 = (ulonglong)(*(uint *)(param_1 + 800) & 0xf);
              uVar8 = puVar5[1];
              uVar10 = puVar5[2];
              uVar11 = puVar5[3];
              lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x338) + uVar23 * 8);
              puVar2 = (undefined4 *)(lVar7 + uVar22 * 0x14);
              *puVar2 = *puVar5;
              puVar2[1] = uVar8;
              puVar2[2] = uVar10;
              puVar2[3] = uVar11;
              *(undefined4 *)(lVar7 + uVar22 * 0x14 + 0x10) = puVar5[4];
              *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
              uVar23 = *(longlong *)(param_1 + 800) - 1;
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x338) + (uVar23 >> 4) * 8) + 0x12 +
               (ulonglong)((uint)uVar23 & 0xf) * 0x14) = uVar19;
            }
            local_res18 = local_res18 + 1;
          } while (local_res18 < uVar9);
        }
      }
      local_res8 = local_res8 + 0x20;
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(ulonglong *)(param_1 + 0x360));
  }
  return;
}



// FUNCTION 14333ce70 FUN_14333ce70 body=363 status=ok
// SIG undefined FUN_14333ce70(void)

void FUN_14333ce70(longlong param_1,longlong param_2,longlong param_3,ushort param_4)

{
  short *psVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint *puVar9;
  bool bVar10;
  
  if (*(longlong *)(param_3 + 8) == 0) {
    uVar8 = *(longlong *)(param_2 + 8) - 1;
    puVar6 = *(uint **)(*(longlong *)(*(longlong *)(param_2 + 0x20) + (uVar8 >> 4) * 8) +
                       (ulonglong)((uint)uVar8 & 0xf) * 8);
  }
  else {
    puVar6 = *(uint **)**(undefined8 **)(param_3 + 0x20);
  }
  uVar8 = *(ulonglong *)(param_2 + 8);
  if (uVar8 != 0) {
    uVar5 = 1;
    puVar7 = *(uint **)**(undefined8 **)(param_2 + 0x20);
    do {
      if (uVar5 < uVar8) {
        puVar9 = *(uint **)(*(longlong *)(*(longlong *)(param_2 + 0x20) + (uVar5 >> 4) * 8) +
                           (ulonglong)((uint)uVar5 & 0xf) * 8);
      }
      else if (*(longlong *)(param_3 + 8) == 0) {
        puVar9 = *(uint **)**(undefined8 **)(param_2 + 0x20);
      }
      else {
        uVar8 = *(longlong *)(param_3 + 8) - 1;
        puVar9 = *(uint **)(*(longlong *)(*(longlong *)(param_3 + 0x20) + (uVar8 >> 4) * 8) +
                           (ulonglong)((uint)uVar8 & 0xf) * 8);
      }
      uVar8 = (ulonglong)(*puVar7 & 0xf);
      lVar4 = *(longlong *)
               (*(longlong *)(param_1 + 0x338) + (ulonglong)((*puVar7 & 0xfffffff) >> 4) * 8);
      lVar2 = lVar4 + uVar8 * 0x14;
      puVar3 = (undefined8 *)
               (*(longlong *)(param_1 + 0x440) +
               (ulonglong)(*(int *)(lVar2 + 8) + (uint)*(ushort *)(lVar4 + 0x12 + uVar8 * 0x14)) *
               0x18);
      *puVar3 = puVar7;
      puVar3[1] = puVar6;
      *(undefined2 *)((longlong)puVar3 + 0x12) = 0;
      *(ushort *)(puVar3 + 2) = param_4;
      puVar3[3] = puVar7;
      puVar3[4] = puVar9;
      *(undefined2 *)((longlong)puVar3 + 0x2a) = 0;
      *(ushort *)(puVar3 + 5) = param_4 ^ 0x8000;
      psVar1 = (short *)(lVar2 + 0x12);
      *psVar1 = *psVar1 + 2;
      uVar8 = *(ulonglong *)(param_2 + 8);
      bVar10 = uVar5 < uVar8;
      uVar5 = uVar5 + 1;
      puVar6 = puVar7;
      puVar7 = puVar9;
    } while (bVar10);
  }
  return;
}



// FUNCTION 14333cff0 FUN_14333cff0 body=414 status=ok
// SIG undefined FUN_14333cff0(void)

int FUN_14333cff0(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  short *psVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint *puVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  
  puVar12 = (uint *)*param_2;
  iVar10 = 0;
  if ((puVar12 != (uint *)0x0) && (puVar9 = *(uint **)(puVar12 + 2), puVar9 != (uint *)0x0)) {
    puVar1 = *(uint **)(puVar9 + 2);
    while( true ) {
      if (puVar1 == (uint *)0x0) {
        *param_2 = 0;
        return 0;
      }
      if ((((*puVar12 & 0xfffffff) != (*puVar9 & 0xfffffff)) &&
          ((*puVar9 & 0xfffffff) != (*puVar1 & 0xfffffff))) &&
         ((*puVar1 & 0xfffffff) != (*puVar12 & 0xfffffff))) break;
      puVar12 = puVar9;
      puVar9 = puVar1;
      puVar1 = *(uint **)(puVar1 + 2);
    }
    *param_2 = puVar12;
    puVar9 = (uint *)0x0;
    if (puVar12 != (uint *)0x0) {
      while ((puVar9 == (uint *)0x0 || (((*puVar12 ^ *puVar9) & 0xfffffff) != 0))) {
        iVar10 = iVar10 + 2;
        psVar3 = (short *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x338) +
                            (ulonglong)((*puVar12 & 0xfffffff) >> 4) * 8) + 0x12 +
                          (ulonglong)(*puVar12 & 0xf) * 0x14);
        *psVar3 = *psVar3 + 2;
        puVar1 = puVar12 + 2;
        puVar9 = puVar12;
        puVar12 = *(uint **)puVar1;
        if (*(uint **)puVar1 == (uint *)0x0) {
          return iVar10;
        }
      }
      if ((*(longlong *)(puVar12 + 2) != 0) && (*(longlong *)(*(longlong *)(puVar12 + 2) + 8) != 0))
      {
        uVar5 = param_2[1];
        uVar6 = param_2[2];
        uVar7 = param_2[3];
        uVar11 = *(ulonglong *)(param_1 + 0x2d0) >> 4;
        if (*(ulonglong *)(param_1 + 0x2d8) <= uVar11) {
          FUN_1433440e0(param_1 + 0x2c8,uVar11);
        }
        lVar8 = (ulonglong)(*(uint *)(param_1 + 0x2d0) & 0xf) * 0x20;
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2e8) + uVar11 * 8);
        puVar2 = (undefined8 *)(lVar4 + lVar8);
        *puVar2 = puVar12;
        puVar2[1] = uVar5;
        puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar8);
        *puVar2 = uVar6;
        puVar2[1] = uVar7;
        *(longlong *)(param_1 + 0x2d0) = *(longlong *)(param_1 + 0x2d0) + 1;
      }
      puVar9[2] = 0;
      puVar9[3] = 0;
    }
    return iVar10;
  }
  *param_2 = 0;
  return 0;
}



// FUNCTION 14333d1a0 FUN_14333d1a0 body=247 status=ok
// SIG undefined FUN_14333d1a0(void)

void FUN_14333d1a0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  for (piVar1 = (int *)*param_2; piVar1 != (int *)0x0; piVar1 = *(int **)(piVar1 + 2)) {
    lVar3 = param_1 + 0x3b8;
    if (-1 < *piVar1) {
      lVar3 = param_1 + 0x3e0;
    }
    uVar2 = *(ulonglong *)(lVar3 + 8) >> 4;
    if (*(ulonglong *)(lVar3 + 0x10) <= uVar2) {
      FUN_143343e60(lVar3,uVar2);
    }
    *(int **)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar2 * 8) +
             (ulonglong)(*(uint *)(lVar3 + 8) & 0xf) * 8) = piVar1;
    *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 1;
  }
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FUN_14333ce70(param_1,param_1 + 0x3b8,param_1 + 0x3e0,
                  *(uint *)((longlong)param_2 + 0x14) | 0x8000);
  }
  if (*(longlong *)(param_1 + 1000) != 0) {
    FUN_14333ce70(param_1,param_1 + 0x3e0,param_1 + 0x3b8,*(undefined4 *)((longlong)param_2 + 0x14))
    ;
  }
  return;
}



// FUNCTION 14333d2a0 FUN_14333d2a0 body=1045 status=ok
// SIG undefined FUN_14333d2a0(void)

undefined8
FUN_14333d2a0(longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5,
             float *param_6)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
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
  
  fVar15 = *param_2;
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar12 = fVar2 - param_2[1];
  fVar4 = _guard_xfg_dispatch_icall_nop(fVar12 * fVar12 + (fVar1 - fVar15) * (fVar1 - fVar15));
  fVar20 = param_4[1] - fVar2;
  fVar5 = _guard_xfg_dispatch_icall_nop(fVar20 * fVar20 + (*param_4 - fVar1) * (*param_4 - fVar1));
  fVar6 = (float)FUN_1433436d0(param_2,param_3,param_4,fVar4,fVar5);
  fVar18 = *(float *)(param_1 + 0x3ac);
  fVar19 = 0.0;
  uVar3 = 0;
  fVar21 = ((fVar15 - fVar1) * fVar18) / fVar4;
  fVar20 = (fVar20 * fVar18) / fVar5;
  fVar22 = (fVar18 * fVar12) / fVar4;
  fVar12 = ((fVar1 - *param_4) * fVar18) / fVar5;
  if (0.125 <= ABS(fVar6)) {
    fVar15 = fVar15 + fVar22;
    fVar9 = fVar1 + fVar20;
    fVar7 = param_2[1] + fVar21;
    fVar16 = (fVar1 + fVar22) - fVar15;
    fVar11 = (param_4[1] + fVar12) - (fVar2 + fVar12);
    fVar10 = (*param_4 + fVar20) - fVar9;
    fVar13 = (fVar2 + fVar21) - fVar7;
    fVar8 = fVar11 * fVar16 - fVar10 * fVar13;
    fVar14 = fVar2;
    fVar17 = fVar1;
    if ((fVar5 + fVar4) * *(float *)(param_1 + 0x3b4) <= ABS(fVar8)) {
      fVar8 = ((fVar7 - (fVar2 + fVar12)) * fVar10 - (fVar15 - fVar9) * fVar11) / fVar8;
      fVar17 = fVar16 * fVar8 + fVar15;
      fVar14 = fVar13 * fVar8 + fVar7;
      fVar8 = fVar17 - fVar1;
      fVar7 = fVar14 - fVar2;
      fVar15 = _guard_xfg_dispatch_icall_nop(fVar7 * fVar7 + fVar8 * fVar8);
      if (0.0 <= fVar6) {
        if (fVar5 <= fVar4) {
          fVar4 = fVar5;
        }
        fVar18 = fVar4 / ABS(fVar6);
      }
      else {
        fVar18 = fVar18 * 4.0;
      }
      if (fVar18 < fVar15) {
        if (param_6 == (float *)0x0) {
          fVar14 = fVar7 * (fVar18 / fVar15) + fVar2;
          fVar17 = fVar8 * (fVar18 / fVar15) + fVar1;
        }
        else {
          if (fVar6 < 0.0) {
            fVar19 = 2.0;
          }
          uVar3 = 1;
          *param_6 = fVar19 * fVar12 + fVar9;
          param_6[1] = (fVar12 + param_3[1]) - fVar19 * fVar20;
          fVar14 = fVar19 * fVar22 + fVar2 + fVar21;
          fVar17 = (fVar1 + fVar22) - fVar19 * fVar21;
        }
      }
    }
  }
  else if (fVar4 <= fVar5) {
    fVar14 = fVar2 + fVar12;
    fVar17 = fVar1 + fVar20;
  }
  else {
    fVar14 = fVar2 + fVar21;
    fVar17 = fVar1 + fVar22;
  }
  *param_5 = fVar17;
  param_5[1] = fVar14;
  return uVar3;
}



// FUNCTION 14333d6c0 FUN_14333d6c0 body=2516 status=ok
// SIG undefined FUN_14333d6c0(void)

void FUN_14333d6c0(longlong param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  char cVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  ushort uStack_ac;
  ushort uStack_aa;
  undefined4 local_a8;
  ulonglong local_a0;
  uint local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined4 local_80;
  uint local_78;
  undefined4 uStack_74;
  longlong *local_70;
  undefined8 local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (param_2 != param_3) {
    *(undefined8 *)(param_1 + 0x450) = 0;
    *(undefined8 *)(param_1 + 0x478) = 0;
    if (param_2 < param_3) {
      lVar12 = (ulonglong)param_2 * 0x18;
      uVar18 = param_3 - 1;
      uVar14 = param_2;
      do {
        lVar15 = *(longlong *)(param_1 + 0x440);
        uVar16 = (ulonglong)uVar18;
        if (((**(uint **)(lVar15 + 8 + lVar12) ^ **(uint **)(lVar15 + 8 + uVar16 * 0x18)) &
            0xfffffff) == 0) {
          if (((*(ushort *)(lVar15 + 0x10 + lVar12) ^ *(ushort *)(lVar15 + 0x10 + uVar16 * 0x18)) &
              0x7fff) != 0) {
LAB_14333d7a0:
            uVar16 = *(ulonglong *)(param_1 + 0x450) >> 3;
            if (*(ulonglong *)(param_1 + 0x458) <= uVar16) {
              FUN_143324790(param_1 + 0x448,uVar16);
            }
            *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x468) + uVar16 * 8) +
                     (ulonglong)(*(uint *)(param_1 + 0x450) & 7) * 4) = uVar14;
            *(longlong *)(param_1 + 0x450) = *(longlong *)(param_1 + 0x450) + 1;
            uVar16 = *(ulonglong *)(param_1 + 0x478) >> 3;
            if (*(ulonglong *)(param_1 + 0x480) <= uVar16) {
              FUN_143324790(param_1 + 0x470,uVar16);
            }
            *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x490) + uVar16 * 8) +
                     (ulonglong)(*(uint *)(param_1 + 0x478) & 7) * 4) = uVar18;
            *(longlong *)(param_1 + 0x478) = *(longlong *)(param_1 + 0x478) + 1;
          }
        }
        else if (((*(short *)(lVar15 + 0x12 + uVar16 * 0x18) != *(short *)(lVar15 + 0x12 + lVar12))
                 && (-1 < *(short *)(lVar15 + 0x10 + uVar16 * 0x18))) &&
                (*(short *)(lVar15 + 0x10 + lVar12) < 0)) goto LAB_14333d7a0;
        lVar12 = lVar12 + 0x18;
        uVar17 = uVar14 + 1;
        uVar18 = uVar14;
        uVar14 = uVar17;
      } while (uVar17 < param_3);
    }
    uVar16 = (ulonglong)param_2;
    if (*(longlong *)(param_1 + 0x450) == 0) {
      uStack_b0 = 0xffffffff;
      local_a8 = 0xffff0002;
      uVar14 = **(uint **)(*(longlong *)(param_1 + 0x440) + uVar16 * 0x18);
      uVar13 = (ulonglong)(uVar14 & 0xf);
      lVar12 = *(longlong *)
                (*(longlong *)(param_1 + 0x338) + (ulonglong)((uVar14 & 0xfffffff) >> 4) * 8);
      local_b8 = *(undefined4 *)(lVar12 + uVar13 * 0x14);
      uStack_b4 = *(undefined4 *)(lVar12 + 4 + uVar13 * 0x14);
      uStack_ac = *(ushort *)(*(longlong *)(param_1 + 0x440) + 0x10 + uVar16 * 0x18) & 0x7fff;
      if (uVar16 < param_3) {
        lVar15 = param_3 - uVar16;
        lVar12 = uVar16 * 0x18;
        do {
          *(undefined4 *)(*(longlong *)(lVar12 + *(longlong *)(param_1 + 0x440)) + 4) =
               *(undefined4 *)(param_1 + 800);
          lVar15 = lVar15 + -1;
          lVar12 = lVar12 + 0x18;
        } while (lVar15 != 0);
      }
      uVar16 = *(ulonglong *)(param_1 + 800) >> 4;
      uStack_aa = uStack_ac;
      if (*(ulonglong *)(param_1 + 0x328) <= uVar16) {
        FUN_143344360(param_1 + 0x318,uVar16);
      }
      uVar13 = (ulonglong)(*(uint *)(param_1 + 800) & 0xf);
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x338) + uVar16 * 8);
      puVar1 = (undefined8 *)(lVar12 + uVar13 * 0x14);
      *puVar1 = CONCAT44(uStack_b4,local_b8);
      puVar1[1] = CONCAT26(uStack_aa,CONCAT24(uStack_ac,uStack_b0));
      *(undefined4 *)(lVar12 + 0x10 + uVar13 * 0x14) = local_a8;
      *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
    }
    else {
      uVar13 = *(ulonglong *)(param_1 + 0x478) >> 3;
      puVar6 = (undefined4 *)**(undefined8 **)(param_1 + 0x490);
      if (*(ulonglong *)(param_1 + 0x480) <= uVar13) {
        FUN_143324790(param_1 + 0x470,uVar13);
      }
      local_50 = 0;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x490) + uVar13 * 8) +
       (ulonglong)(*(uint *)(param_1 + 0x478) & 7) * 4) = *puVar6;
      *(longlong *)(param_1 + 0x478) = *(longlong *)(param_1 + 0x478) + 1;
      local_98 = *(uint *)(param_1 + 0x540);
      local_78 = **(uint **)(*(longlong *)(param_1 + 0x440) + uVar16 * 0x18) & 0xfffffff;
      if (*(longlong *)(param_1 + 0x450) != 0) {
        do {
          local_a0 = (ulonglong)((uint)local_50 & 7);
          uVar13 = local_50 >> 3;
          local_50 = local_50 + 1;
          uVar14 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x468) + uVar13 * 8) +
                            local_a0 * 4);
          uVar16 = (ulonglong)uVar14;
          lVar12 = *(longlong *)(param_1 + 0x440);
          uVar18 = *(uint *)(*(longlong *)
                              (*(longlong *)(param_1 + 0x490) + (local_50 & 0xfffffffffffffff8)) +
                            (ulonglong)((uint)local_50 & 7) * 4);
          plVar2 = (longlong *)(lVar12 + uVar16 * 0x18);
          uVar17 = **(uint **)(lVar12 + 8 + uVar16 * 0x18);
          uVar4 = *(uint *)*plVar2;
          local_70 = plVar2;
          if (((uVar17 & 0xfffffff) == (uVar4 & 0xfffffff)) ||
             (uVar5 = **(uint **)(lVar12 + 8 + (ulonglong)uVar18 * 0x18),
             (uVar5 & 0xfffffff) == (uVar4 & 0xfffffff))) {
            local_b8 = *(undefined4 *)
                        (*(longlong *)
                          (*(longlong *)(param_1 + 0x338) +
                          (ulonglong)((uVar4 & 0xfffffff) >> 4) * 8) +
                        (ulonglong)(uVar4 & 0xf) * 0x14);
            uStack_b4 = *(undefined4 *)
                         (*(longlong *)
                           (*(longlong *)(param_1 + 0x338) +
                           (ulonglong)((uVar4 & 0xfffffff) >> 4) * 8) + 4 +
                         (ulonglong)(uVar4 & 0xf) * 0x14);
          }
          else {
            lVar12 = *(longlong *)(param_1 + 0x338);
            FUN_14333d2a0(param_1,*(longlong *)(lVar12 + (ulonglong)((uVar17 & 0xfffffff) >> 4) * 8)
                                  + (ulonglong)(uVar17 & 0xf) * 0x14,
                          *(longlong *)(lVar12 + (ulonglong)((uVar4 & 0xfffffff) >> 4) * 8) +
                          (ulonglong)(uVar4 & 0xf) * 0x14,
                          *(longlong *)(lVar12 + (ulonglong)((uVar5 & 0xfffffff) >> 4) * 8) +
                          (ulonglong)(uVar5 & 0xf) * 0x14,&local_b8,0);
          }
          uStack_74 = *(undefined4 *)(param_1 + 800);
          if ((uVar14 <= uVar18) || (uVar18 = uVar18 + (param_3 - param_2), uVar14 <= uVar18)) {
            do {
              uVar14 = (uint)uVar16;
              if (param_3 <= uVar14) {
                uVar16 = (ulonglong)(uVar14 - (param_3 - param_2));
              }
              *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x440) + uVar16 * 0x18) + 4) =
                   uStack_74;
              uVar16 = (ulonglong)(uVar14 + 1);
            } while (uVar14 + 1 <= uVar18);
          }
          lVar15 = param_1 + 0x318;
          lVar12 = param_1 + 0x538;
          uStack_ac = *(ushort *)(plVar2 + 2) & 0x7fff;
          uVar16 = *(ulonglong *)(param_1 + 800) >> 4;
          uStack_b0 = 0xffffffff;
          local_a8 = 0xffff0002;
          uStack_aa = uStack_ac;
          if (*(ulonglong *)(param_1 + 0x328) <= uVar16) {
            FUN_143344360(lVar15,uVar16);
          }
          uVar11 = (ulonglong)(*(uint *)(param_1 + 800) & 0xf);
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x338) + uVar16 * 8);
          puVar6 = (undefined4 *)(lVar7 + uVar11 * 0x14);
          *puVar6 = local_b8;
          puVar6[1] = uStack_b4;
          puVar6[2] = uStack_b0;
          puVar6[3] = CONCAT22(uStack_aa,uStack_ac);
          *(undefined4 *)(lVar7 + 0x10 + uVar11 * 0x14) = local_a8;
          *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
          uVar16 = *(ulonglong *)(param_1 + 0x540) >> 4;
          if (*(ulonglong *)(param_1 + 0x548) <= uVar16) {
            FUN_143324830(lVar12,uVar16);
          }
          *(ulonglong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x558) + uVar16 * 8) +
           (ulonglong)(*(uint *)(param_1 + 0x540) & 0xf) * 8) = CONCAT44(uStack_74,local_78);
          *(longlong *)(param_1 + 0x540) = *(longlong *)(param_1 + 0x540) + 1;
          uVar16 = (ulonglong)
                   *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x490) + uVar13 * 8) +
                            local_a0 * 4);
          puVar8 = *(uint **)(*(longlong *)(param_1 + 0x440) + 8 + uVar16 * 0x18);
          lVar7 = *(longlong *)(param_1 + 0x440) + uVar16 * 0x18;
          uVar14 = *puVar8;
          uVar18 = *(uint *)plVar2[1];
          local_58 = lVar7;
          if ((uVar18 & 0xfffffff) == (uVar14 & 0xfffffff)) {
            if ((puVar8[1] & 0x40000000) == 0) {
              uVar16 = *(ulonglong *)(param_1 + 0x518) >> 4;
              local_48 = plVar2;
              uStack_40 = lVar7;
              if (*(ulonglong *)(param_1 + 0x520) <= uVar16) {
                FUN_143329d20(param_1 + 0x510,uVar16);
              }
              puVar6 = (undefined4 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x530) + uVar16 * 8) +
                       (ulonglong)(*(uint *)(param_1 + 0x518) & 0xf) * 0x10);
              *puVar6 = (undefined4)local_48;
              puVar6[1] = local_48._4_4_;
              puVar6[2] = (undefined4)uStack_40;
              puVar6[3] = uStack_40._4_4_;
              *(longlong *)(param_1 + 0x518) = *(longlong *)(param_1 + 0x518) + 1;
              *(uint *)(*plVar2 + 4) = *(uint *)(*plVar2 + 4) | 0x40000000;
            }
          }
          else {
            cVar10 = '\0';
            uVar17 = *(uint *)*plVar2;
            if (((uVar18 & 0xfffffff) == (uVar17 & 0xfffffff)) ||
               ((uVar14 & 0xfffffff) == (uVar17 & 0xfffffff))) {
              local_b8 = *(undefined4 *)
                          (*(longlong *)
                            (*(longlong *)(param_1 + 0x338) +
                            (ulonglong)((uVar17 & 0xfffffff) >> 4) * 8) +
                          (ulonglong)(uVar17 & 0xf) * 0x14);
              uStack_b4 = *(undefined4 *)
                           (*(longlong *)
                             (*(longlong *)(param_1 + 0x338) +
                             (ulonglong)((uVar17 & 0xfffffff) >> 4) * 8) + 4 +
                           (ulonglong)(uVar17 & 0xf) * 0x14);
            }
            else {
              lVar9 = *(longlong *)(param_1 + 0x338);
              cVar10 = FUN_14333d2a0(param_1,*(longlong *)
                                              (lVar9 + (ulonglong)((uVar14 & 0xfffffff) >> 4) * 8) +
                                             (ulonglong)(uVar14 & 0xf) * 0x14,
                                     *(longlong *)
                                      (lVar9 + (ulonglong)((uVar17 & 0xfffffff) >> 4) * 8) +
                                     (ulonglong)(uVar17 & 0xf) * 0x14,
                                     *(longlong *)
                                      (lVar9 + (ulonglong)((uVar18 & 0xfffffff) >> 4) * 8) +
                                     (ulonglong)(uVar18 & 0xf) * 0x14,&local_b8,&local_90);
            }
            uVar14 = *(uint *)(param_1 + 800);
            uStack_ac = *(ushort *)(lVar7 + 0x10) & 0x7fff;
            uStack_88 = 0xffffffff;
            uVar3 = *(ushort *)(local_70 + 2);
            uStack_b0 = 0xffffffff;
            uStack_84 = CONCAT22(uVar3,uVar3) & 0x7fff7fff;
            local_80 = 0xffff0000;
            local_a8 = 0xffff0000;
            uStack_aa = uStack_ac;
            if (uStack_ac != (uVar3 & 0x7fff)) {
              FUN_14333c320(param_1,uStack_ac,uVar3 & 0x7fff);
            }
            uVar16 = *(ulonglong *)(param_1 + 800) >> 4;
            if (*(ulonglong *)(param_1 + 0x328) <= uVar16) {
              FUN_143344360(lVar15,uVar16);
            }
            uVar13 = (ulonglong)(*(uint *)(param_1 + 800) & 0xf);
            lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x338) + uVar16 * 8);
            puVar6 = (undefined4 *)(lVar7 + uVar13 * 0x14);
            *puVar6 = local_b8;
            puVar6[1] = uStack_b4;
            puVar6[2] = uStack_b0;
            puVar6[3] = CONCAT22(uStack_aa,uStack_ac);
            *(undefined4 *)(lVar7 + 0x10 + uVar13 * 0x14) = local_a8;
            *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
            uVar18 = uVar14;
            if (cVar10 != '\0') {
              uVar18 = *(uint *)(param_1 + 800);
              uVar16 = *(ulonglong *)(param_1 + 800) >> 4;
              if (*(ulonglong *)(param_1 + 0x328) <= uVar16) {
                FUN_143344360(lVar15,uVar16);
              }
              uVar13 = (ulonglong)(*(uint *)(param_1 + 800) & 0xf);
              lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x338) + uVar16 * 8);
              puVar6 = (undefined4 *)(lVar15 + uVar13 * 0x14);
              *puVar6 = local_90;
              puVar6[1] = uStack_8c;
              puVar6[2] = uStack_88;
              puVar6[3] = uStack_84;
              *(undefined4 *)(lVar15 + 0x10 + uVar13 * 0x14) = local_80;
              *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
            }
            uVar16 = *(longlong *)(param_1 + 0x540) - 1;
            uVar13 = *(ulonglong *)(param_1 + 0x540) >> 4;
            local_a0 = *(longlong *)(*(longlong *)(param_1 + 0x558) + (uVar16 >> 4) * 8);
            if (*(ulonglong *)(param_1 + 0x548) <= uVar13) {
              FUN_143324830(lVar12,uVar13);
            }
            *(undefined8 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x558) + uVar13 * 8) +
             (ulonglong)(*(uint *)(param_1 + 0x540) & 0xf) * 8) =
                 *(undefined8 *)(local_a0 + (ulonglong)((uint)uVar16 & 0xf) * 8);
            *(longlong *)(param_1 + 0x540) = *(longlong *)(param_1 + 0x540) + 1;
            if (cVar10 == '\0') {
              uVar16 = *(longlong *)(param_1 + 0x540) - 2;
              *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x558) + (uVar16 >> 4) * 8) + 4 +
                       (ulonglong)((uint)uVar16 & 0xf) * 8) = uVar14;
            }
            else {
              uVar16 = *(longlong *)(param_1 + 0x540) - 1;
              uVar13 = *(ulonglong *)(param_1 + 0x540) >> 4;
              local_a0 = *(longlong *)(*(longlong *)(param_1 + 0x558) + (uVar16 >> 4) * 8);
              if (*(ulonglong *)(param_1 + 0x548) <= uVar13) {
                FUN_143324830(lVar12,uVar13);
              }
              *(undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x558) + uVar13 * 8) +
               (ulonglong)(*(uint *)(param_1 + 0x540) & 0xf) * 8) =
                   *(undefined8 *)(local_a0 + (ulonglong)((uint)uVar16 & 0xf) * 8);
              *(longlong *)(param_1 + 0x540) = *(longlong *)(param_1 + 0x540) + 1;
              uVar16 = *(longlong *)(param_1 + 0x540) - 3;
              *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x558) + (uVar16 >> 4) * 8) + 4 +
                       (ulonglong)((uint)uVar16 & 0xf) * 8) = uVar14;
              uVar16 = *(longlong *)(param_1 + 0x540) - 2;
              *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x558) + (uVar16 >> 4) * 8) + 4 +
                       (ulonglong)((uint)uVar16 & 0xf) * 8) = uVar18;
            }
            uVar16 = *(ulonglong *)(param_1 + 0x4a0) >> 4;
            local_68 = local_70;
            uStack_60 = uVar18;
            if (*(ulonglong *)(param_1 + 0x4a8) <= uVar16) {
              FUN_143329d20(param_1 + 0x498,uVar16);
            }
            puVar6 = (undefined4 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x4b8) + uVar16 * 8) +
                     (ulonglong)(*(uint *)(param_1 + 0x4a0) & 0xf) * 0x10);
            *puVar6 = (undefined4)local_68;
            puVar6[1] = local_68._4_4_;
            puVar6[2] = uStack_60;
            puVar6[3] = uStack_5c;
            *(longlong *)(param_1 + 0x4a0) = *(longlong *)(param_1 + 0x4a0) + 1;
            uVar16 = *(ulonglong *)(param_1 + 0x4a0) >> 4;
            local_68 = (longlong *)local_58;
            uStack_60 = uVar14 | 0x40000000;
            if (*(ulonglong *)(param_1 + 0x4a8) <= uVar16) {
              FUN_143329d20(param_1 + 0x498,uVar16);
            }
            puVar6 = (undefined4 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x4b8) + uVar16 * 8) +
                     (ulonglong)(*(uint *)(param_1 + 0x4a0) & 0xf) * 0x10);
            *puVar6 = (undefined4)local_68;
            puVar6[1] = local_68._4_4_;
            puVar6[2] = uStack_60;
            puVar6[3] = uStack_5c;
            *(longlong *)(param_1 + 0x4a0) = *(longlong *)(param_1 + 0x4a0) + 1;
          }
        } while (local_50 < *(ulonglong *)(param_1 + 0x450));
      }
      if ((*(ulonglong *)(param_1 + 0x540) < (ulonglong)(local_98 + 3)) &&
         ((ulonglong)local_98 < *(ulonglong *)(param_1 + 0x540))) {
        *(ulonglong *)(param_1 + 0x540) = (ulonglong)local_98;
      }
    }
  }
  return;
}



// FUNCTION 14333e0a0 FUN_14333e0a0 body=432 status=ok
// SIG undefined FUN_14333e0a0(void)

ulonglong FUN_14333e0a0(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6,char param_7)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar9 = param_3 & 0xfffffff;
  uVar5 = (ulonglong)uVar9;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x338) + (ulonglong)(uVar9 >> 4) * 8);
  uVar1 = *(uint *)(lVar2 + 8 + (ulonglong)(param_3 & 0xf) * 0x14);
  puVar4 = (undefined8 *)(lVar2 + (ulonglong)(param_3 & 0xf) * 0x14);
  if (uVar1 == 0xffffffff) {
    *(uint *)(puVar4 + 1) = uVar9;
    *(undefined2 *)((longlong)puVar4 + 0xe) = (undefined2)param_5;
    *(short *)((longlong)puVar4 + 0xc) = (short)param_4;
    *(undefined2 *)(puVar4 + 2) = (undefined2)param_6;
    *(short *)((longlong)puVar4 + 0x12) = (short)param_2;
    return (ulonglong)uVar9;
  }
  if ((((*(ushort *)((longlong)puVar4 + 0x12) != param_2) ||
       (*(ushort *)((longlong)puVar4 + 0xc) != param_4)) ||
      (*(ushort *)((longlong)puVar4 + 0xe) != param_5)) ||
     ((param_7 != '\0' && (*(ushort *)(puVar4 + 2) != param_6)))) {
    if (uVar1 != uVar9) {
      do {
        uVar1 = *(uint *)(puVar4 + 1);
        puVar4 = (undefined8 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x338) + (ulonglong)(uVar1 >> 4) * 8) +
                 (ulonglong)(uVar1 & 0xf) * 0x14);
        if (((*(ushort *)((longlong)puVar4 + 0x12) == param_2) &&
            (*(ushort *)((longlong)puVar4 + 0xc) == param_4)) &&
           (*(ushort *)((longlong)puVar4 + 0xe) == param_5)) {
          if (param_7 == '\0') {
            return (ulonglong)uVar1;
          }
          if (*(ushort *)(puVar4 + 2) == param_6) {
            return (ulonglong)uVar1;
          }
        }
      } while (*(uint *)(puVar4 + 1) != uVar1);
    }
    uVar5 = *(ulonglong *)(param_1 + 800);
    uVar7 = (undefined4)uVar5;
    *(undefined4 *)(puVar4 + 1) = uVar7;
    uVar3 = *puVar4;
    uVar8 = *(ulonglong *)(param_1 + 800) >> 4;
    if (*(ulonglong *)(param_1 + 0x328) <= uVar8) {
      FUN_143344360(param_1 + 0x318,uVar8);
    }
    uVar5 = uVar5 & 0xffffffff;
    uVar6 = (ulonglong)(*(uint *)(param_1 + 800) & 0xf);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x338) + uVar8 * 8);
    puVar4 = (undefined8 *)(lVar2 + uVar6 * 0x14);
    *puVar4 = uVar3;
    puVar4[1] = CONCAT26((undefined2)param_5,CONCAT24((short)param_4,uVar7));
    *(uint *)(lVar2 + uVar6 * 0x14 + 0x10) = CONCAT22((short)param_2,(undefined2)param_6);
    *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
  }
  return uVar5;
}



// FUNCTION 14333e260 FUN_14333e260 body=3441 status=ok
// SIG undefined FUN_14333e260(void)

void FUN_14333e260(longlong param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  ulonglong uVar24;
  ushort uVar25;
  ushort uVar26;
  undefined8 *puVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong *plVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong *puVar34;
  longlong *plVar35;
  ushort uVar36;
  uint uVar37;
  longlong lVar38;
  uint uVar39;
  uint uVar40;
  bool bVar41;
  uint local_res8;
  undefined8 local_90;
  int iStack_88;
  uint uStack_84;
  undefined8 local_80;
  
  uVar32 = 0;
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    do {
      uVar16 = (uint)uVar32;
      lVar30 = (ulonglong)(uVar16 & 0xf) * 0x20 +
               *(longlong *)(*(longlong *)(param_1 + 0x2e8) + (uVar32 >> 4) * 8);
      if (*(int *)(lVar30 + 0xc) != 0) {
        uVar37 = *(uint *)(lVar30 + 0x10);
        uVar19 = 2;
        if (*(int *)(lVar30 + 0x14) ==
            *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x378) + (ulonglong)(uVar37 >> 4) * 8) +
                     4 + (ulonglong)(uVar37 & 0xf) * 0x1c)) {
          uVar19 = 10;
        }
        uVar39 = 0;
        if (*(int *)(lVar30 + 0xc) != 0) {
          do {
            uVar16 = *(int *)(lVar30 + 8) + uVar39;
            puVar1 = (uint *)(*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)(param_1 + 0x388) + 0x18 + (ulonglong)uVar37 * 0x20)
                               + (ulonglong)(uVar16 >> 4) * 8) + (ulonglong)(uVar16 & 0xf) * 0x18);
            uVar17 = FUN_14333c670(param_1,uVar37,*(undefined4 *)(*(longlong *)puVar1 + 4),
                                   *(undefined4 *)(lVar30 + 0x14),uVar19);
            *(undefined4 *)(*(longlong *)puVar1 + 4) = uVar17;
            uVar17 = FUN_14333c670(param_1,uVar37,*(undefined4 *)(*(longlong *)(puVar1 + 2) + 4),
                                   *(undefined4 *)(lVar30 + 0x14),uVar19);
            *(undefined4 *)(*(longlong *)(puVar1 + 2) + 4) = uVar17;
            uVar17 = FUN_14333c670(param_1,uVar37,*(undefined4 *)(*(longlong *)(puVar1 + 4) + 4),
                                   *(undefined4 *)(lVar30 + 0x14),uVar19);
            uVar39 = uVar39 + 1;
            *(undefined4 *)(*(longlong *)(puVar1 + 4) + 4) = uVar17;
            *puVar1 = *(uint *)(*(longlong *)puVar1 + 4) & 0xfffffff;
            puVar1[1] = *(uint *)(*(longlong *)(puVar1 + 2) + 4) & 0xfffffff;
            puVar1[2] = *(uint *)(*(longlong *)(puVar1 + 4) + 4) & 0xfffffff;
            uVar16 = local_res8;
          } while (uVar39 < *(uint *)(lVar30 + 0xc));
        }
      }
      local_res8 = uVar16 + 1;
      uVar32 = (ulonglong)local_res8;
    } while (uVar32 < *(ulonglong *)(param_1 + 0x2d0));
  }
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x518) != 0) {
    uVar32 = 0;
    do {
      uVar33 = (ulonglong)((uint)uVar32 & 0xf);
      lVar30 = *(longlong *)(*(longlong *)(param_1 + 0x530) + (uVar32 >> 4) * 8);
      plVar35 = *(longlong **)(lVar30 + uVar33 * 0x10);
      plVar9 = *(longlong **)(lVar30 + 8 + uVar33 * 0x10);
      uVar40 = *(ushort *)(plVar35 + 2) & 0x7fff;
      uVar37 = *(ushort *)(plVar9 + 2) & 0x7fff;
      uVar39 = FUN_14333c320(param_1,uVar40,uVar37);
      lVar30 = (ulonglong)(uVar39 & 0xf) * 0x1c +
               *(longlong *)(*(longlong *)(param_1 + 0x378) + (ulonglong)(uVar39 >> 4) * 8);
      plVar31 = plVar9;
      uVar16 = uVar40;
      if ((*(uint *)(lVar30 + 4) != 0) && (uVar40 != *(uint *)(lVar30 + 4))) {
        plVar31 = plVar35;
        plVar35 = plVar9;
        uVar16 = uVar37;
        uVar37 = uVar40;
      }
      lVar28 = plVar35[1];
      lVar10 = *plVar31;
      lVar11 = *plVar35;
      lVar12 = plVar31[1];
      uVar18 = (*(uint *)(lVar30 + 0x10) ^ *(uint *)(lVar30 + 0xc)) & 0x8000;
      uVar40 = uVar16;
      if (uVar18 != 0) {
        uVar40 = uVar37;
      }
      uVar19 = 0x2a;
      if (uVar18 == 0) {
        uVar19 = 10;
      }
      uVar17 = FUN_14333e0a0(param_1,uVar39,*(undefined4 *)(lVar11 + 4),uVar16,uVar40,uVar19,0);
      *(undefined4 *)(lVar11 + 4) = uVar17;
      uVar19 = FUN_14333e0a0(param_1,uVar39,*(undefined4 *)(lVar28 + 4),uVar16,uVar40,uVar19,0);
      *(undefined4 *)(lVar28 + 4) = uVar19;
      uVar19 = FUN_14333c670(param_1,uVar39,*(undefined4 *)(lVar10 + 4),uVar37,2);
      *(undefined4 *)(lVar10 + 4) = uVar19;
      uVar19 = FUN_14333c670(param_1,uVar39,*(undefined4 *)(lVar12 + 4),uVar37,2);
      *(undefined4 *)(lVar12 + 4) = uVar19;
      lVar30 = (ulonglong)uVar39 * 0x20;
      puVar34 = (ulonglong *)(*(longlong *)(param_1 + 0x388) + lVar30);
      local_90 = CONCAT44(*(undefined4 *)(lVar28 + 4),*(undefined4 *)(lVar11 + 4)) &
                 0xfffffff0fffffff;
      uVar16 = *(uint *)(lVar10 + 4);
      uVar32 = *puVar34 >> 4;
      if (puVar34[1] <= uVar32) {
        FUN_143343d10(param_1 + 0x380,puVar34,uVar32);
      }
      uVar33 = (ulonglong)((uint)*puVar34 & 0xf);
      lVar38 = (ulonglong)uVar39 * 0x20;
      lVar11 = *(longlong *)(puVar34[3] + uVar32 * 8);
      puVar2 = (undefined4 *)(lVar11 + uVar33 * 0x18);
      *puVar2 = (int)local_90;
      puVar2[1] = local_90._4_4_;
      puVar2[2] = uVar16 & 0xfffffff;
      puVar2[3] = uStack_84;
      *(undefined8 *)(lVar11 + 0x10 + uVar33 * 0x18) = local_80;
      plVar35 = (longlong *)(*(longlong *)(param_1 + 0x388) + lVar30);
      *plVar35 = *plVar35 + 1;
      puVar34 = (ulonglong *)(*(longlong *)(param_1 + 0x388) + lVar38);
      uVar32 = *puVar34 >> 4;
      local_90 = CONCAT44(*(undefined4 *)(lVar10 + 4),*(undefined4 *)(lVar12 + 4)) &
                 0xfffffff0fffffff;
      uVar16 = *(uint *)(lVar28 + 4);
      if (puVar34[1] <= uVar32) {
        FUN_143343d10(param_1 + 0x380,puVar34,uVar32);
      }
      uVar33 = (ulonglong)((uint)*puVar34 & 0xf);
      lVar30 = *(longlong *)(puVar34[3] + uVar32 * 8);
      puVar2 = (undefined4 *)(lVar30 + uVar33 * 0x18);
      *puVar2 = (int)local_90;
      puVar2[1] = local_90._4_4_;
      puVar2[2] = uVar16 & 0xfffffff;
      puVar2[3] = uStack_84;
      *(undefined8 *)(lVar30 + 0x10 + uVar33 * 0x18) = local_80;
      local_res8 = local_res8 + 1;
      uVar32 = (ulonglong)local_res8;
      plVar35 = (longlong *)(*(longlong *)(param_1 + 0x388) + lVar38);
      *plVar35 = *plVar35 + 1;
    } while (uVar32 < *(ulonglong *)(param_1 + 0x518));
  }
  FUN_143342020(param_1 + 0x498,0,*(undefined8 *)(param_1 + 0x4a0),&LAB_143344480);
  uVar32 = *(ulonglong *)(param_1 + 0x4a0);
  local_res8 = 0;
  if (uVar32 != 0) {
    uVar33 = 0;
    do {
      plVar35 = (longlong *)
                ((ulonglong)((uint)uVar33 & 0xf) * 0x10 +
                *(longlong *)(*(longlong *)(param_1 + 0x4b8) + (uVar33 >> 4) * 8));
      if ((*(uint *)(plVar35 + 1) & 0x40000000) == 0) {
        puVar34 = (ulonglong *)*plVar35;
        uVar33 = 0;
        uVar24 = puVar34[1];
        if (0 < *(longlong *)(param_1 + 0x4a0)) {
          lVar30 = *(longlong *)(param_1 + 0x4a0);
          do {
            lVar28 = lVar30 >> 1;
            uVar29 = lVar28 + uVar33;
            puVar13 = *(ulonglong **)
                       ((ulonglong)((uint)uVar29 & 0xf) * 0x10 +
                       *(longlong *)(*(longlong *)(param_1 + 0x4b8) + (uVar29 >> 4) * 8));
            uVar14 = *puVar13;
            bVar41 = uVar14 < uVar24;
            if (uVar14 == uVar24) {
              bVar41 = puVar13[1] < *puVar34;
            }
            if (bVar41) {
              uVar33 = uVar29 + 1;
              lVar28 = lVar30 + (-1 - lVar28);
            }
            lVar30 = lVar28;
          } while (0 < lVar28);
        }
        if (((uVar33 & 0xffffffff) < uVar32) &&
           (puVar27 = (undefined8 *)
                      ((ulonglong)((uint)uVar33 & 0xf) * 0x10 +
                      *(longlong *)
                       (*(longlong *)(param_1 + 0x4b8) + ((uVar33 & 0xffffffff) >> 4) * 8)),
           *(ulonglong *)*puVar27 == uVar24)) {
          uVar39 = (ushort)puVar34[2] & 0x7fff;
          uVar37 = FUN_14333c1a0(param_1,uVar39);
          uVar32 = (ulonglong)uVar37;
          uVar16 = 0;
          if (uVar39 == *(uint *)(*(longlong *)
                                   (*(longlong *)(param_1 + 0x378) + (ulonglong)(uVar37 >> 4) * 8) +
                                  4 + (ulonglong)(uVar37 & 0xf) * 0x1c)) {
            uVar16 = 8;
          }
          lVar30 = ((longlong *)*plVar35)[1];
          uVar19 = FUN_14333c670(param_1,uVar32,*(undefined4 *)(*(longlong *)*plVar35 + 4),uVar39,
                                 uVar16 | 2);
          uVar40 = FUN_14333c670(param_1,uVar37,*(undefined4 *)(lVar30 + 4),uVar39,uVar16 | 2);
          uVar18 = FUN_14333c670(param_1,uVar32,(int)plVar35[1],uVar39,uVar16);
          *(uint *)(plVar35 + 1) = uVar18 | 0x40000000;
          uVar39 = FUN_14333c670(param_1,uVar37,*(undefined4 *)(puVar27 + 1),uVar39,uVar16);
          *(uint *)(puVar27 + 1) = uVar39 | 0x40000000;
          uVar16 = *(uint *)(plVar35 + 1);
          puVar34 = (ulonglong *)(*(longlong *)(param_1 + 0x388) + uVar32 * 0x20);
          uVar33 = *puVar34 >> 4;
          if (puVar34[1] <= uVar33) {
            FUN_143343d10(param_1 + 0x380,puVar34,uVar33);
          }
          uVar24 = (ulonglong)((uint)*puVar34 & 0xf);
          lVar30 = *(longlong *)(puVar34[3] + uVar33 * 8);
          puVar2 = (undefined4 *)(lVar30 + uVar24 * 0x18);
          *puVar2 = uVar19;
          puVar2[1] = uVar40;
          puVar2[2] = uVar16 & 0xfffffff;
          puVar2[3] = uStack_84;
          *(undefined8 *)(lVar30 + 0x10 + uVar24 * 0x18) = local_80;
          plVar35 = (longlong *)(uVar32 * 0x20 + *(longlong *)(param_1 + 0x388));
          *plVar35 = *plVar35 + 1;
          puVar34 = (ulonglong *)(*(longlong *)(param_1 + 0x388) + (ulonglong)uVar37 * 0x20);
          uVar32 = *puVar34 >> 4;
          if (puVar34[1] <= uVar32) {
            FUN_143343d10(param_1 + 0x380,puVar34,uVar32);
          }
          uVar33 = (ulonglong)((uint)*puVar34 & 0xf);
          lVar30 = *(longlong *)(puVar34[3] + uVar32 * 8);
          puVar1 = (uint *)(lVar30 + uVar33 * 0x18);
          *puVar1 = uVar39 & 0xfffffff;
          puVar1[1] = uVar16 & 0xfffffff;
          puVar1[2] = uVar40;
          puVar1[3] = uStack_84;
          *(undefined8 *)(lVar30 + 0x10 + uVar33 * 0x18) = local_80;
          plVar35 = (longlong *)(*(longlong *)(param_1 + 0x388) + (ulonglong)uVar37 * 0x20);
          *plVar35 = *plVar35 + 1;
        }
      }
      uVar32 = *(ulonglong *)(param_1 + 0x4a0);
      local_res8 = local_res8 + 1;
      uVar33 = (ulonglong)local_res8;
    } while (uVar33 < uVar32);
  }
  uVar32 = *(ulonglong *)(param_1 + 0x540);
  uVar16 = 0;
  if (uVar32 != 0) {
    do {
      lVar30 = *(longlong *)(param_1 + 0x558);
      uVar33 = (ulonglong)uVar16;
      iVar8 = *(int *)(*(longlong *)(lVar30 + (ulonglong)(uVar16 >> 4) * 8) +
                      (ulonglong)(uVar16 & 0xf) * 8);
      uVar37 = uVar16;
      do {
        uVar39 = uVar37;
        uVar37 = uVar39 + 1;
        if (uVar32 <= uVar37) break;
      } while (iVar8 == *(int *)(*(longlong *)(lVar30 + (ulonglong)(uVar37 >> 4) * 8) +
                                (ulonglong)(uVar37 & 0xf) * 8));
      if (uVar16 + 3 == uVar37) {
        lVar28 = *(longlong *)(param_1 + 0x338);
        uVar40 = uVar16 + 1;
        uVar18 = uVar16 + 2;
        uVar20 = *(uint *)(*(longlong *)(lVar30 + (ulonglong)(uVar16 >> 4) * 8) + 4 +
                          (ulonglong)(uVar16 & 0xf) * 8);
        uVar32 = (ulonglong)(uVar20 & 0xf);
        lVar10 = *(longlong *)(lVar28 + (ulonglong)(uVar20 >> 4) * 8);
        uVar4 = *(ushort *)(lVar10 + 0xc + uVar32 * 0x14);
        uVar20 = *(uint *)(*(longlong *)(lVar30 + (ulonglong)(uVar40 >> 4) * 8) + 4 +
                          (ulonglong)(uVar40 & 0xf) * 8);
        uVar24 = (ulonglong)(uVar20 & 0xf);
        lVar11 = *(longlong *)(lVar28 + (ulonglong)(uVar20 >> 4) * 8);
        uVar36 = *(ushort *)(lVar11 + 0xc + uVar24 * 0x14);
        uVar20 = *(uint *)(*(longlong *)(lVar30 + (ulonglong)(uVar18 >> 4) * 8) + 4 +
                          (ulonglong)(uVar18 & 0xf) * 8);
        uVar29 = (ulonglong)(uVar20 & 0xf);
        lVar30 = *(longlong *)(lVar28 + (ulonglong)(uVar20 >> 4) * 8);
        uVar26 = *(ushort *)(lVar30 + 0xc + uVar29 * 0x14);
        uVar5 = *(ushort *)(lVar30 + 0x10 + uVar29 * 0x14);
        uVar6 = *(ushort *)(lVar10 + uVar32 * 0x14 + 0x10);
        uVar7 = *(ushort *)(lVar11 + uVar24 * 0x14 + 0x10);
        uVar20 = FUN_14333c320(param_1,uVar4,uVar36);
        uVar21 = FUN_14333c320(param_1,uVar36,uVar26);
        uVar22 = FUN_14333c320(param_1,uVar26,uVar4);
        if ((((uVar20 != uVar21) && (uVar20 != uVar22)) && (uVar20 = uVar21, uVar21 != uVar22)) ||
           (uVar20 == 0xffffffff)) goto joined_r0x00014333eaf4;
        lVar30 = *(longlong *)(param_1 + 0x558);
        iStack_88 = -1;
        local_90._0_4_ = -1;
        local_90._4_4_ = -1;
        uVar19 = *(undefined4 *)
                  (*(longlong *)(lVar30 + (ulonglong)(uVar16 >> 4) * 8) + 4 +
                  (ulonglong)(uVar16 & 0xf) * 8);
        uVar17 = *(undefined4 *)
                  (*(longlong *)(lVar30 + (ulonglong)(uVar40 >> 4) * 8) + 4 +
                  (ulonglong)(uVar40 & 0xf) * 8);
        uVar23 = *(undefined4 *)
                  (*(longlong *)(lVar30 + (ulonglong)(uVar18 >> 4) * 8) + 4 +
                  (ulonglong)(uVar18 & 0xf) * 8);
        lVar28 = (ulonglong)(uVar20 & 0xf) * 0x1c;
        lVar30 = *(longlong *)(*(longlong *)(param_1 + 0x378) + (ulonglong)(uVar20 >> 4) * 8);
        if (((*(uint *)(lVar30 + 0x10 + lVar28) ^ *(uint *)(lVar30 + 0xc + lVar28)) >> 0xf & 1) == 0
           ) {
LAB_14333edbc:
          local_90._0_4_ = FUN_14333c670(param_1,uVar20,uVar19,uVar4,uVar6);
        }
        else {
          lVar30 = *(longlong *)(param_1 + 0x38);
          uVar40 = 1 << ((byte)uVar4 & 0x1f) & *(uint *)(lVar30 + (ulonglong)(uVar4 >> 5) * 4);
          uVar16 = 1 << ((byte)uVar36 & 0x1f) & *(uint *)(lVar30 + (ulonglong)(uVar36 >> 5) * 4);
          uVar39 = 1 << ((byte)uVar26 & 0x1f) & *(uint *)(lVar30 + (ulonglong)(uVar26 >> 5) * 4);
          if (uVar40 != 0) {
            uVar25 = uVar36;
            if (uVar16 != 0) {
              uVar25 = uVar26;
            }
            local_90._0_4_ = FUN_14333e0a0(param_1,uVar20,uVar19,uVar4,uVar25,uVar6 | 0x20,0);
          }
          local_90._4_4_ = -1;
          if (uVar16 != 0) {
            uVar25 = uVar26;
            if (uVar39 != 0) {
              uVar25 = uVar4;
            }
            local_90._4_4_ = FUN_14333e0a0(param_1,uVar20,uVar17,uVar36,uVar25,uVar7 | 0x20,0);
          }
          if (uVar39 != 0) {
            uVar25 = uVar4;
            if (uVar40 != 0) {
              uVar25 = uVar36;
            }
            iStack_88 = FUN_14333e0a0(param_1,uVar20,uVar23,uVar26,uVar25,uVar5 | 0x20,0);
          }
          if ((int)local_90 == -1) goto LAB_14333edbc;
        }
        if (local_90._4_4_ == -1) {
          local_90._4_4_ = FUN_14333c670(param_1,uVar20,uVar17,uVar36,uVar7);
        }
        if (iStack_88 == -1) {
          iStack_88 = FUN_14333c670(param_1,uVar20,uVar23,uVar26,uVar5);
        }
        puVar34 = (ulonglong *)(*(longlong *)(param_1 + 0x388) + (ulonglong)uVar20 * 0x20);
        uVar32 = *puVar34 >> 4;
        if (puVar34[1] <= uVar32) {
          FUN_143343d10(param_1 + 0x380,puVar34,uVar32);
        }
        uVar33 = (ulonglong)((uint)*puVar34 & 0xf);
        lVar30 = *(longlong *)(puVar34[3] + uVar32 * 8);
        piVar3 = (int *)(lVar30 + uVar33 * 0x18);
        *piVar3 = (int)local_90;
        piVar3[1] = local_90._4_4_;
        piVar3[2] = iStack_88;
        piVar3[3] = uStack_84;
        *(undefined8 *)(lVar30 + 0x10 + uVar33 * 0x18) = local_80;
        plVar35 = (longlong *)((ulonglong)uVar20 * 0x20 + *(longlong *)(param_1 + 0x388));
        *plVar35 = *plVar35 + 1;
      }
      else {
joined_r0x00014333eaf4:
        while (uVar40 = uVar16, uVar40 < uVar37) {
          uVar16 = *(uint *)(*(longlong *)
                              (*(longlong *)(param_1 + 0x558) + (ulonglong)(uVar39 >> 4) * 8) + 4 +
                            (ulonglong)(uVar39 & 0xf) * 8);
          uVar39 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x558) + (uVar33 >> 4) * 8) + 4 +
                            (ulonglong)((uint)uVar33 & 0xf) * 8);
          lVar30 = *(longlong *)(*(longlong *)(param_1 + 0x338) + (ulonglong)(uVar16 >> 4) * 8);
          uVar4 = *(ushort *)(lVar30 + 0x10 + (ulonglong)(uVar16 & 0xf) * 0x14);
          uVar36 = *(ushort *)(lVar30 + (ulonglong)(uVar16 & 0xf) * 0x14 + 0xc);
          lVar30 = *(longlong *)(*(longlong *)(param_1 + 0x338) + (ulonglong)(uVar39 >> 4) * 8);
          uVar5 = *(ushort *)(lVar30 + 0xc + (ulonglong)(uVar39 & 0xf) * 0x14);
          uVar26 = *(ushort *)(lVar30 + 0x10 + (ulonglong)(uVar39 & 0xf) * 0x14);
          uVar20 = FUN_14333c320(param_1,uVar36,uVar5);
          lVar30 = (ulonglong)(uVar20 & 0xf) * 0x1c +
                   *(longlong *)(*(longlong *)(param_1 + 0x378) + (ulonglong)(uVar20 >> 4) * 8);
          uVar18 = uVar16;
          uVar6 = uVar36;
          uVar7 = uVar26;
          if ((*(uint *)(lVar30 + 4) != 0) && ((uint)uVar36 != *(uint *)(lVar30 + 4))) {
            uVar18 = uVar39;
            uVar6 = uVar5;
            uVar39 = uVar16;
            uVar7 = uVar4;
            uVar4 = uVar26;
            uVar5 = uVar36;
          }
          uVar4 = uVar4 & 2;
          uVar26 = uVar4 | 8;
          uVar36 = uVar6;
          if (((*(uint *)(lVar30 + 0x10) ^ *(uint *)(lVar30 + 0xc)) >> 0xf & 1) != 0) {
            uVar26 = uVar4 | 0x28;
            uVar36 = uVar5;
          }
          uVar19 = FUN_14333e0a0(param_1,uVar20,uVar18,uVar6,uVar36,uVar26,0);
          uVar17 = FUN_14333c670(param_1,uVar20,uVar39,uVar5,uVar7 & 2);
          if (((*(uint *)(lVar30 + 0x10) | *(uint *)(lVar30 + 0xc)) >> 0xf & 1) == 0) {
            bVar15 = 0x10;
            uVar36 = uVar5;
          }
          else {
            bVar15 = 0x24;
          }
          uVar23 = FUN_14333e0a0(param_1,uVar20,iVar8,uVar6,uVar36,
                                 bVar15 | ((uVar7 & 2 & uVar4) != 0) + 1U,1);
          puVar34 = (ulonglong *)(*(longlong *)(param_1 + 0x388) + (ulonglong)uVar20 * 0x20);
          uVar32 = *puVar34 >> 4;
          if (puVar34[1] <= uVar32) {
            FUN_143343d10(param_1 + 0x380,puVar34,uVar32);
          }
          uVar24 = (ulonglong)((uint)*puVar34 & 0xf);
          uVar33 = uVar33 + 1;
          lVar30 = *(longlong *)(puVar34[3] + uVar32 * 8);
          puVar2 = (undefined4 *)(lVar30 + uVar24 * 0x18);
          *puVar2 = uVar19;
          puVar2[1] = uVar17;
          puVar2[2] = uVar23;
          puVar2[3] = uStack_84;
          *(undefined8 *)(lVar30 + 0x10 + uVar24 * 0x18) = local_80;
          plVar35 = (longlong *)((ulonglong)uVar20 * 0x20 + *(longlong *)(param_1 + 0x388));
          *plVar35 = *plVar35 + 1;
          uVar39 = uVar40;
          uVar16 = uVar40 + 1;
        }
      }
      uVar32 = *(ulonglong *)(param_1 + 0x540);
      uVar16 = uVar37;
    } while (uVar37 < uVar32);
  }
  return;
}



// FUNCTION 14333efe0 FUN_14333efe0 body=1165 status=ok
// SIG undefined FUN_14333efe0(void)

undefined8 FUN_14333efe0(longlong param_1,uint *param_2,longlong param_3)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
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
  uint local_e0;
  int local_dc;
  int local_d8;
  
  lVar3 = *(longlong *)(param_1 + 0x338);
  uVar8 = param_2[1] & 0xfffffff;
  fVar19 = *(float *)(param_1 + 0x3ac) * -2.0;
  uVar6 = (ulonglong)(*param_2 & 0xf);
  lVar4 = *(longlong *)(lVar3 + (ulonglong)((*param_2 & 0xfffffff) >> 4) * 8);
  fVar22 = *(float *)(lVar4 + uVar6 * 0x14);
  lVar4 = lVar4 + uVar6 * 0x14;
  uVar6 = (ulonglong)(param_2[1] & 0xf);
  lVar5 = *(longlong *)(lVar3 + (ulonglong)(uVar8 >> 4) * 8);
  fVar15 = *(float *)(lVar5 + uVar6 * 0x14);
  pfVar1 = (float *)(lVar5 + uVar6 * 0x14);
  fVar13 = pfVar1[1];
  fVar24 = fVar15 - fVar22;
  fVar9 = fVar13 - *(float *)(lVar4 + 4);
  pfVar2 = (float *)(*(longlong *)
                      (lVar3 + (ulonglong)((*(uint *)(param_3 + 4) & 0xfffffff) >> 4) * 8) +
                    (ulonglong)(*(uint *)(param_3 + 4) & 0xf) * 0x14);
  fVar10 = _guard_xfg_dispatch_icall_nop(fVar9 * fVar9 + fVar24 * fVar24);
  fVar9 = pfVar2[1];
  fVar18 = *pfVar2 - fVar15;
  fVar11 = _guard_xfg_dispatch_icall_nop((fVar9 - fVar13) * (fVar9 - fVar13) + fVar18 * fVar18);
  fVar12 = (float)FUN_1433436d0(lVar4,pfVar1,pfVar2,fVar10,fVar11);
  fVar21 = ((*(float *)(lVar4 + 4) - fVar13) * fVar19) / fVar10;
  fVar25 = (fVar24 * fVar19) / fVar10;
  fVar24 = ((fVar13 - fVar9) * fVar19) / fVar11;
  fVar18 = (fVar18 * fVar19) / fVar11;
  if (ABS(fVar12) < 0.125) {
    if (fVar11 < fVar10) {
      fVar18 = fVar25;
      fVar24 = fVar21;
    }
    FUN_14333f480(param_1,fVar15 + fVar24,fVar13 + fVar18);
    return 1;
  }
  fVar22 = fVar22 + fVar21;
  fVar14 = fVar13 + fVar25;
  fVar17 = *(float *)(lVar4 + 4) + fVar25;
  fVar23 = fVar15 + fVar21;
  fVar20 = (fVar9 + fVar18) - (fVar13 + fVar18);
  fVar16 = (*pfVar2 + fVar24) - (fVar15 + fVar24);
  fVar9 = fVar20 * (fVar23 - fVar22) - fVar16 * (fVar14 - fVar17);
  if (ABS(fVar9) < (fVar11 + fVar10) * *(float *)(param_1 + 0x3b4)) {
LAB_14333f401:
    FUN_14333f480(param_1,fVar23,fVar14);
    FUN_14333f480(param_1,fVar24 + *pfVar1,fVar18 + pfVar1[1]);
LAB_14333f422:
    uVar7 = 2;
  }
  else {
    fVar9 = ((fVar17 - (fVar13 + fVar18)) * fVar16 - (fVar22 - (fVar15 + fVar24)) * fVar20) / fVar9;
    fVar17 = (fVar14 - fVar17) * fVar9 + fVar17;
    fVar22 = (fVar23 - fVar22) * fVar9 + fVar22;
    fVar13 = fVar17 - fVar13;
    fVar15 = fVar22 - fVar15;
    fVar15 = _guard_xfg_dispatch_icall_nop(fVar13 * fVar13 + fVar15 * fVar15);
    if (0.0 < fVar12) {
      if (fVar11 <= fVar10) {
        fVar10 = fVar11;
      }
      if (fVar10 / fVar12 < fVar15) goto LAB_14333f401;
    }
    else if (fVar19 * -4.0 < fVar15) {
      FUN_14333f480(param_1,fVar23 - (fVar25 + fVar25),fVar21 + fVar21 + fVar14);
      FUN_14333f480(param_1,fVar24 + *pfVar1 + fVar18 + fVar18,
                    (fVar18 + pfVar1[1]) - (fVar24 + fVar24));
      local_dc = *(int *)(param_1 + 800) + -2;
      local_d8 = *(int *)(param_1 + 800) + -1;
      local_e0 = uVar8;
      FUN_143343a50(param_1 + 0x380,0,&local_e0);
      goto LAB_14333f422;
    }
    FUN_14333f480(param_1,fVar22,fVar17);
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 14333f480 FUN_14333f480 body=123 status=ok
// SIG undefined FUN_14333f480(void)

void FUN_14333f480(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = *(ulonglong *)(param_1 + 800) >> 4;
  if (*(ulonglong *)(param_1 + 0x328) <= uVar4) {
    FUN_143344360(param_1 + 0x318,uVar4);
  }
  uVar3 = (ulonglong)(*(uint *)(param_1 + 800) & 0xf);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x338) + uVar4 * 8);
  puVar1 = (undefined8 *)(lVar2 + uVar3 * 0x14);
  *puVar1 = CONCAT44(param_3,param_2);
  puVar1[1] = 0x10001ffffffff;
  *(undefined4 *)(lVar2 + 0x10 + uVar3 * 0x14) = 0;
  *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
  return;
}



// FUNCTION 14333f510 FUN_14333f510 body=268 status=ok
// SIG undefined FUN_14333f510(void)

void FUN_14333f510(longlong param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uStack_1c;
  undefined8 local_18;
  
  uVar2 = *param_2;
  puVar4 = *(ulonglong **)(param_1 + 0x388);
  uVar7 = *puVar4 >> 4;
  if (puVar4[1] <= uVar7) {
    FUN_143343d10(param_1 + 0x380,puVar4,uVar7);
  }
  uVar6 = (ulonglong)((uint)*puVar4 & 0xf);
  lVar5 = *(longlong *)(puVar4[3] + uVar7 * 8);
  puVar1 = (uint *)(lVar5 + uVar6 * 0x18);
  *puVar1 = uVar2 & 0xfffffff;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  puVar1[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x10 + uVar6 * 0x18) = local_18;
  **(longlong **)(param_1 + 0x388) = **(longlong **)(param_1 + 0x388) + 1;
  puVar4 = *(ulonglong **)(param_1 + 0x388);
  uVar2 = param_2[1];
  uVar3 = *param_2;
  uVar7 = *puVar4 >> 4;
  if (puVar4[1] <= uVar7) {
    FUN_143343d10(param_1 + 0x380,puVar4,uVar7);
  }
  uVar6 = (ulonglong)((uint)*puVar4 & 0xf);
  lVar5 = *(longlong *)(puVar4[3] + uVar7 * 8);
  puVar4 = (ulonglong *)(lVar5 + uVar6 * 0x18);
  *puVar4 = CONCAT44(uVar3,uVar2) & 0xfffffff0fffffff;
  puVar4[1] = CONCAT44(uStack_1c,param_4);
  *(undefined8 *)(lVar5 + 0x10 + uVar6 * 0x18) = local_18;
  **(longlong **)(param_1 + 0x388) = **(longlong **)(param_1 + 0x388) + 1;
  return;
}



// FUNCTION 14333f630 FUN_14333f630 body=115 status=ok
// SIG undefined FUN_14333f630(void)

void FUN_14333f630(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  if ((param_2 & 0xfffffff) != (param_3 & 0xfffffff)) {
    uVar1 = *(ulonglong *)(param_1 + 0x4c8) >> 4;
    if (*(ulonglong *)(param_1 + 0x4d0) <= uVar1) {
      FUN_143324830(param_1 + 0x4c0,uVar1);
    }
    *(ulonglong *)
     (*(longlong *)(*(longlong *)(param_1 + 0x4e0) + uVar1 * 8) +
     (ulonglong)(*(uint *)(param_1 + 0x4c8) & 0xf) * 8) =
         CONCAT44(param_3,param_2) & 0xfffffff0fffffff;
    *(longlong *)(param_1 + 0x4c8) = *(longlong *)(param_1 + 0x4c8) + 1;
  }
  return;
}



// FUNCTION 14333f6b0 FUN_14333f6b0 body=1249 status=ok
// SIG undefined FUN_14333f6b0(void)

void FUN_14333f6b0(longlong param_1)

{
  ulonglong uVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  bool bVar20;
  
  uVar18 = 0;
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    do {
      puVar3 = *(uint **)((ulonglong)((uint)uVar18 & 0xf) * 0x20 +
                         *(longlong *)(*(longlong *)(param_1 + 0x2e8) + (uVar18 >> 4) * 8));
      if (puVar3 != (uint *)0x0) {
        puVar14 = *(uint **)(puVar3 + 2);
        uVar9 = *puVar3;
        if (puVar14 != (uint *)0x0) {
          uVar19 = *puVar14;
          if ((uVar9 & 0xfffffff) != (uVar19 & 0xfffffff)) {
            uVar13 = *(ulonglong *)(param_1 + 0x4c8) >> 4;
            if (*(ulonglong *)(param_1 + 0x4d0) <= uVar13) {
              FUN_143324830(param_1 + 0x4c0,uVar13);
            }
            *(ulonglong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x4e0) + uVar13 * 8) +
             (ulonglong)(*(uint *)(param_1 + 0x4c8) & 0xf) * 8) =
                 CONCAT44(uVar19,uVar9) & 0xfffffff0fffffff;
            *(longlong *)(param_1 + 0x4c8) = *(longlong *)(param_1 + 0x4c8) + 1;
          }
          for (puVar3 = *(uint **)(puVar14 + 2); puVar3 != (uint *)0x0;
              puVar3 = *(uint **)(puVar3 + 2)) {
            uVar12 = *puVar3;
            if ((int)uVar12 < 0) {
              if ((uVar12 & 0xfffffff) != (uVar9 & 0xfffffff)) {
                uVar13 = *(ulonglong *)(param_1 + 0x4c8) >> 4;
                if (*(ulonglong *)(param_1 + 0x4d0) <= uVar13) {
                  FUN_143324830(param_1 + 0x4c0,uVar13);
                }
                *(ulonglong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x4e0) + uVar13 * 8) +
                 (ulonglong)(*(uint *)(param_1 + 0x4c8) & 0xf) * 8) =
                     CONCAT44(uVar9,uVar12) & 0xfffffff0fffffff;
                *(longlong *)(param_1 + 0x4c8) = *(longlong *)(param_1 + 0x4c8) + 1;
              }
              uVar9 = *puVar3;
            }
            else {
              if ((uVar19 & 0xfffffff) != (uVar12 & 0xfffffff)) {
                uVar13 = *(ulonglong *)(param_1 + 0x4c8) >> 4;
                if (*(ulonglong *)(param_1 + 0x4d0) <= uVar13) {
                  FUN_143324830(param_1 + 0x4c0,uVar13);
                }
                *(ulonglong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x4e0) + uVar13 * 8) +
                 (ulonglong)(*(uint *)(param_1 + 0x4c8) & 0xf) * 8) =
                     CONCAT44(uVar12,uVar19) & 0xfffffff0fffffff;
                *(longlong *)(param_1 + 0x4c8) = *(longlong *)(param_1 + 0x4c8) + 1;
              }
              uVar19 = *puVar3;
            }
          }
          if ((uVar19 & 0xfffffff) != (uVar9 & 0xfffffff)) {
            uVar13 = *(ulonglong *)(param_1 + 0x4c8) >> 4;
            if (*(ulonglong *)(param_1 + 0x4d0) <= uVar13) {
              FUN_143324830(param_1 + 0x4c0,uVar13);
            }
            *(ulonglong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x4e0) + uVar13 * 8) +
             (ulonglong)(*(uint *)(param_1 + 0x4c8) & 0xf) * 8) =
                 CONCAT44(uVar9,uVar19) & 0xfffffff0fffffff;
            *(longlong *)(param_1 + 0x4c8) = *(longlong *)(param_1 + 0x4c8) + 1;
          }
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(ulonglong *)(param_1 + 0x2d0));
  }
  if (1 < *(ulonglong *)(param_1 + 0x4c8)) {
    FUN_143342460(param_1 + 0x4c0,0,*(undefined8 *)(param_1 + 0x4c8));
    uVar18 = *(ulonglong *)(param_1 + 0x4c8);
    uVar13 = 0;
    if (uVar18 != 0) {
      do {
        lVar16 = *(longlong *)(param_1 + 0x4e0);
        uVar7 = (ulonglong)((uint)uVar13 & 0xf);
        lVar17 = *(longlong *)(lVar16 + (uVar13 >> 4) * 8);
        uVar9 = *(uint *)(lVar17 + uVar7 * 8);
        puVar3 = (uint *)(lVar17 + uVar7 * 8);
        if ((uVar9 >> 0x1e & 1) == 0) {
          uVar7 = 0;
          uVar19 = puVar3[1];
          if (0 < *(longlong *)(param_1 + 0x4c8)) {
            uVar12 = uVar19 & 0xfffffff;
            lVar17 = *(longlong *)(param_1 + 0x4c8);
            do {
              lVar15 = lVar17 >> 1;
              uVar1 = lVar15 + uVar7;
              uVar8 = (ulonglong)((uint)uVar1 & 0xf);
              lVar4 = *(longlong *)(lVar16 + (uVar1 >> 4) * 8);
              uVar5 = *(uint *)(lVar4 + uVar8 * 8) & 0xfffffff;
              bVar20 = uVar5 < uVar12;
              if (uVar5 == uVar12) {
                bVar20 = (*(uint *)(lVar4 + uVar8 * 8 + 4) & 0xfffffff) < (uVar9 & 0xfffffff);
              }
              if (bVar20) {
                uVar7 = uVar1 + 1;
                lVar15 = lVar17 + (-1 - lVar15);
              }
              lVar17 = lVar15;
            } while (0 < lVar15);
          }
          if (uVar7 < uVar18) {
            uVar18 = (ulonglong)((uint)uVar7 & 0xf);
            lVar16 = *(longlong *)(lVar16 + (uVar7 >> 4) * 8);
            if ((uVar9 == *(uint *)(lVar16 + 4 + uVar18 * 8)) &&
               (uVar19 == *(uint *)(lVar16 + uVar18 * 8))) {
              *puVar3 = uVar9 | 0x40000000;
              puVar3 = (uint *)(lVar16 + uVar18 * 8);
              *puVar3 = *puVar3 | 0x40000000;
            }
          }
        }
        uVar18 = *(ulonglong *)(param_1 + 0x4c8);
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar18);
    }
    uVar18 = 0;
    if (*(longlong *)(param_1 + 0x4c8) != 0) {
      do {
        uVar13 = (ulonglong)((uint)uVar18 & 0xf);
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x4e0) + (uVar18 >> 4) * 8);
        puVar3 = (uint *)(lVar16 + uVar13 * 8);
        if ((*(uint *)(lVar16 + uVar13 * 8) & 0x40000000) == 0) {
          iVar10 = -1;
          iVar11 = -1;
          puVar14 = puVar3;
          while( true ) {
            uVar13 = 0;
            if (0 < *(longlong *)(param_1 + 0x4c8)) {
              lVar16 = *(longlong *)(param_1 + 0x4c8);
              do {
                lVar17 = lVar16 >> 1;
                uVar7 = lVar17 + uVar13;
                if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x4e0) + (uVar7 >> 4) * 8) +
                              (ulonglong)((uint)uVar7 & 0xf) * 8) & 0xfffffff) <
                    (puVar14[1] & 0xfffffff)) {
                  uVar13 = uVar7 + 1;
                  lVar17 = lVar16 + (-1 - lVar17);
                }
                lVar16 = lVar17;
              } while (0 < lVar17);
            }
            if (*(ulonglong *)(param_1 + 0x4c8) <= uVar13) goto LAB_14333fb6b;
            while( true ) {
              uVar7 = (ulonglong)((uint)uVar13 & 0xf);
              lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x4e0) + (uVar13 >> 4) * 8);
              puVar2 = (uint *)(lVar16 + uVar7 * 8);
              uVar9 = *(uint *)(lVar16 + uVar7 * 8);
              if (((uVar9 >> 0x1e & 1) == 0) && (((uVar9 ^ puVar14[1]) & 0xfffffff) == 0)) break;
              uVar13 = uVar13 + 1;
              if (*(ulonglong *)(param_1 + 0x4c8) <= uVar13) goto LAB_14333fb6b;
            }
            iVar6 = FUN_14333efe0(param_1,puVar14,puVar2);
            if (iVar11 == -1) {
              iVar10 = *(int *)(param_1 + 800) - iVar6;
            }
            else {
              FUN_14333f510(param_1,puVar14,iVar11,*(int *)(param_1 + 800) - iVar6);
              *puVar14 = *puVar14 | 0x40000000;
            }
            if (puVar2 == puVar3) break;
            iVar11 = *(int *)(param_1 + 800) + -1;
            puVar14 = puVar2;
          }
          FUN_14333f510(param_1,puVar3,*(int *)(param_1 + 800) + -1,iVar10);
          *puVar3 = *puVar3 | 0x40000000;
        }
LAB_14333fb6b:
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(ulonglong *)(param_1 + 0x4c8));
    }
  }
  return;
}



// FUNCTION 14333fba0 FUN_14333fba0 body=1354 status=ok
// SIG undefined FUN_14333fba0(void)

void FUN_14333fba0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  void *pvVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulonglong local_res8;
  
  uVar19 = 0;
  uVar18 = uVar19;
  uVar20 = uVar19;
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    do {
      iVar10 = FUN_14333cff0(param_1,(ulonglong)((uint)uVar18 & 0xf) * 0x20 +
                                     *(longlong *)
                                      (*(longlong *)(param_1 + 0x2e8) + (uVar18 >> 4) * 8));
      uVar20 = (ulonglong)(uint)((int)uVar20 + iVar10);
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(ulonglong *)(param_1 + 0x2d0));
  }
  if (*(ulonglong *)(param_1 + 0x438) < uVar20) {
    pvVar11 = (void *)FUN_1433245e0(*(undefined8 *)(param_1 + 0x430));
    _guard_xfg_dispatch_icall_nop(pvVar11,0,uVar20 * 0x18);
    if ((*(void **)(param_1 + 0x440) != (void *)0x0) && (*(longlong *)(param_1 + 0x438) != 0)) {
      _guard_xfg_dispatch_icall_nop
                (pvVar11,*(void **)(param_1 + 0x440),*(longlong *)(param_1 + 0x438) * 0x18);
    }
    *(void **)(param_1 + 0x440) = pvVar11;
  }
  *(ulonglong *)(param_1 + 0x438) = uVar20;
  uVar18 = uVar19;
  uVar20 = uVar19;
  if (*(longlong *)(param_1 + 800) != 0) {
    do {
      uVar12 = (ulonglong)((uint)uVar18 & 0xf);
      uVar17 = uVar18 >> 4;
      uVar18 = uVar18 + 1;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x338) + uVar17 * 8);
      *(int *)(lVar6 + 8 + uVar12 * 0x14) = (int)uVar20;
      uVar20 = (ulonglong)((int)uVar20 + (uint)*(ushort *)(lVar6 + 0x12 + uVar12 * 0x14));
      *(undefined2 *)(lVar6 + 0x12 + uVar12 * 0x14) = 0;
    } while (uVar18 < *(ulonglong *)(param_1 + 800));
  }
  uVar18 = uVar19;
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    do {
      FUN_14333d1a0(param_1,(ulonglong)((uint)uVar18 & 0xf) * 0x20 +
                            *(longlong *)(*(longlong *)(param_1 + 0x2e8) + (uVar18 >> 4) * 8));
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(ulonglong *)(param_1 + 0x2d0));
  }
  uVar18 = *(ulonglong *)(param_1 + 800);
  local_res8 = 0;
  if (uVar18 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x408);
    do {
      uVar12 = (ulonglong)((uint)local_res8 & 0xf);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x338) + (local_res8 >> 4) * 8);
      *(undefined8 *)(param_1 + 0x410) = 0;
      uVar20 = uVar19;
      if (*(short *)(lVar6 + 0x12 + uVar12 * 0x14) != 0) {
        do {
          lVar13 = *(uint *)(lVar6 + 8 + uVar12 * 0x14) + uVar20;
          lVar7 = *(longlong *)(param_1 + 0x440);
          puVar8 = *(uint **)(lVar7 + lVar13 * 0x18);
          puVar9 = *(uint **)(lVar7 + 8 + lVar13 * 0x18);
          uVar3 = *(undefined2 *)(lVar7 + 0x10 + lVar13 * 0x18);
          uVar4 = *puVar8;
          uVar5 = *puVar9;
          uVar17 = (ulonglong)(uVar5 & 0xf);
          lVar7 = *(longlong *)
                   (*(longlong *)(param_1 + 0x338) + (ulonglong)((uVar5 & 0xfffffff) >> 4) * 8);
          uVar15 = (ulonglong)(uVar4 & 0xf);
          lVar13 = *(longlong *)
                    (*(longlong *)(param_1 + 0x338) + (ulonglong)((uVar4 & 0xfffffff) >> 4) * 8);
          fVar22 = *(float *)(lVar7 + uVar17 * 0x14) - *(float *)(lVar13 + uVar15 * 0x14);
          fVar23 = *(float *)(lVar7 + 4 + uVar17 * 0x14) - *(float *)(lVar13 + 4 + uVar15 * 0x14);
          fVar21 = fVar23 * fVar23 + fVar22 * fVar22;
          fVar21 = fVar21 + fVar21;
          if (fVar21 == 0.0) {
            fVar21 = 0.0;
          }
          else {
            fVar21 = (fVar22 * fVar22) / fVar21;
            if (fVar22 < 0.0) {
              fVar21 = -fVar21;
            }
            if (0.0 < fVar23) {
              fVar21 = 1.0 - fVar21;
            }
            fVar21 = fVar21 - 0.5;
          }
          uVar17 = *(ulonglong *)(param_1 + 0x410) >> 3;
          if (*(ulonglong *)(param_1 + 0x418) <= uVar17) {
            if (*(ulonglong *)(param_1 + 0x420) <= uVar17) {
              if (*(longlong *)(param_1 + 0x428) == 0) {
                *(undefined8 *)(param_1 + 0x420) = 4;
                uVar14 = FUN_1433245e0(*puVar1,0x20);
                *(undefined8 *)(param_1 + 0x428) = uVar14;
              }
              else {
                pvVar11 = (void *)FUN_1433245e0(*puVar1,*(ulonglong *)(param_1 + 0x420) << 4);
                _guard_xfg_dispatch_icall_nop
                          (pvVar11,*(void **)(param_1 + 0x428),*(longlong *)(param_1 + 0x418) << 3);
                *(void **)(param_1 + 0x428) = pvVar11;
                *(longlong *)(param_1 + 0x420) = *(longlong *)(param_1 + 0x420) * 2;
              }
            }
            uVar14 = FUN_1433245e0(*puVar1,0xc0);
            *(undefined8 *)(*(longlong *)(param_1 + 0x428) + uVar17 * 8) = uVar14;
            *(longlong *)(param_1 + 0x418) = *(longlong *)(param_1 + 0x418) + 1;
          }
          uVar20 = uVar20 + 1;
          uVar15 = (ulonglong)(*(uint *)(param_1 + 0x410) & 7);
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x428) + uVar17 * 8);
          puVar2 = (undefined8 *)(lVar7 + uVar15 * 0x18);
          *puVar2 = puVar8;
          puVar2[1] = puVar9;
          *(ulonglong *)(lVar7 + 0x10 + uVar15 * 0x18) = (ulonglong)CONCAT24(uVar3,fVar21);
          *(longlong *)(param_1 + 0x410) = *(longlong *)(param_1 + 0x410) + 1;
        } while (uVar20 < *(ushort *)(lVar6 + 0x12 + uVar12 * 0x14));
      }
      FUN_143342890(puVar1,0,*(undefined8 *)(param_1 + 0x410),&LAB_143344400);
      fVar21 = -1e+30;
      uVar20 = uVar19;
      uVar17 = uVar19;
      if (*(longlong *)(param_1 + 0x410) != 0) {
        do {
          lVar16 = *(uint *)(lVar6 + 8 + uVar12 * 0x14) + uVar20;
          lVar7 = *(longlong *)(param_1 + 0x440);
          uVar15 = (ulonglong)((uint)uVar20 & 7);
          lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x428) + (uVar20 & 0xfffffffffffffff8));
          *(undefined8 *)(lVar7 + lVar16 * 0x18) = *(undefined8 *)(lVar13 + uVar15 * 0x18);
          *(undefined8 *)(lVar7 + 8 + lVar16 * 0x18) = *(undefined8 *)(lVar13 + 8 + uVar15 * 0x18);
          *(undefined2 *)(lVar7 + 0x10 + lVar16 * 0x18) =
               *(undefined2 *)(lVar13 + 0x14 + uVar15 * 0x18);
          *(short *)(lVar7 + 0x12 + lVar16 * 0x18) = (short)uVar17;
          fVar22 = *(float *)(lVar13 + 0x10 + uVar15 * 0x18);
          if (fVar22 != fVar21) {
            uVar17 = (ulonglong)((int)uVar17 + 1);
            fVar21 = fVar22;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < *(ulonglong *)(param_1 + 0x410));
      }
      iVar10 = *(int *)(lVar6 + 8 + uVar12 * 0x14);
      FUN_14333d6c0(param_1,iVar10,(uint)*(ushort *)(lVar6 + 0x12 + uVar12 * 0x14) + iVar10);
      *(undefined4 *)(lVar6 + 8 + uVar12 * 0x14) = 0xffffffff;
      *(undefined2 *)(lVar6 + 0x12 + uVar12 * 0x14) = 0xffff;
      local_res8 = local_res8 + 1;
    } while (local_res8 < uVar18);
  }
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    do {
      FUN_143340ff0(param_1,(ulonglong)((uint)uVar19 & 0xf) * 0x20 +
                            *(longlong *)(*(longlong *)(param_1 + 0x2e8) + (uVar19 >> 4) * 8));
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(ulonglong *)(param_1 + 0x2d0));
  }
  FUN_143341270(param_1);
  FUN_14333e260(param_1);
  return;
}



// FUNCTION 1433400f0 FUN_1433400f0 body=465 status=ok
// SIG undefined FUN_1433400f0(void)

void FUN_1433400f0(longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_2;
  fVar3 = *param_3 - fVar1;
  fVar5 = param_2[1];
  fVar4 = param_3[1] - fVar5;
  fVar7 = *param_5 - *param_4;
  fVar6 = fVar3 * (param_5[1] - param_4[1]) - fVar7 * fVar4;
  fVar2 = (ABS(fVar5 - param_3[1]) + ABS(fVar1 - *param_3) + ABS(*param_4 - *param_5) +
          ABS(param_4[1] - param_5[1])) * *(float *)(param_1 + 0x3b4);
  if (((ABS(fVar6) <= fVar2 && fVar2 != ABS(fVar6)) ||
      (fVar6 = ((fVar5 - param_4[1]) * fVar7 - (fVar1 - *param_4) * (param_5[1] - param_4[1])) /
               fVar6, fVar6 <= 0.0)) || (1.0 <= fVar6)) {
    *param_3 = fVar1;
    param_3[1] = param_2[1];
  }
  else {
    fVar2 = fVar3 * fVar6 + fVar1;
    fVar5 = fVar4 * fVar6 + fVar5;
    *param_3 = (fVar1 - fVar2) * 0.125 + fVar2;
    param_3[1] = (param_2[1] - fVar5) * 0.125 + fVar5;
  }
  return;
}


