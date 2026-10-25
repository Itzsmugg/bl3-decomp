// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1430db2e0 FUN_1430db2e0 body=68 status=ok
// SIG undefined FUN_1430db2e0(void)

void FUN_1430db2e0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_140966e80();
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xd34);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0xd34);
    FUN_1430d40b0(param_1,uVar1);
  }
  return;
}



// FUNCTION 1430db330 NativePostEvaluateAnimation body=27 status=ok
// SIG undefined NativePostEvaluateAnimation(void)

void UMassCrowdAnimInstance::NativePostEvaluateAnimation(longlong param_1)

{
  FUN_1422396c0();
  *(undefined1 *)(param_1 + 0x470) = 0;
  return;
}



// FUNCTION 1430db350 FUN_1430db350 body=259 status=ok
// SIG undefined FUN_1430db350(void)

void FUN_1430db350(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong local_res8;
  undefined4 local_res10 [2];
  longlong local_res18 [2];
  undefined1 *local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  undefined4 *local_20;
  
  FUN_140966ed0();
  if (*(int *)(param_1 + 0x228) != 0) {
    local_res8 = 0;
    local_res10[0] = param_2;
    local_res18[0] =
         (**(code **)(**(longlong **)(param_1 + 0x180) + 0x6d0))
                   (*(longlong **)(param_1 + 0x180),0,1);
    if (local_res18[0] != 0) {
      local_res8 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x940);
      lVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0xa48);
      if (((*(longlong *)(param_1 + 0xce8) != 0) && ((local_res8 != 0 || (lVar1 != 0)))) &&
         ((*(char *)(param_1 + 0x93c) != '\0' || (*(char *)(param_1 + 0xa40) != '\0')))) {
        local_30 = local_res18;
        local_28 = &local_res8;
        local_20 = local_res10;
        plStack_40 = &local_38;
        local_48 = &LAB_1430cf480;
        local_38 = param_1;
        FUN_142693730(local_res18[0],&local_48);
      }
    }
  }
  return;
}



// FUNCTION 1430db460 FUN_1430db460 body=684 status=ok
// SIG undefined FUN_1430db460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1430db460(float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
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
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  fVar19 = *param_3;
  if (param_2[1] * param_3[1] + fVar19 * *param_2 + param_2[2] * param_3[2] +
      param_2[3] * param_3[3] < 0.0) {
    fVar12 = -1.0;
  }
  else {
    fVar12 = 1.0;
  }
  local_78 = -(*param_2 * fVar12);
  fStack_74 = -(param_2[1] * fVar12);
  fStack_6c = param_2[3] * fVar12;
  fStack_70 = -(param_2[2] * fVar12);
  fVar13 = *param_3 * local_78 * fRam0000000146b4a36c + param_3[3] * fStack_6c +
           param_3[1] * fStack_74 * fRam0000000146b4a35c +
           param_3[2] * fStack_70 * fRam0000000146b4a34c;
  fVar12 = -1.0;
  if ((-1.0 <= fVar13) && (fVar12 = fVar13, 1.0 <= fVar13)) {
    fVar12 = 1.0;
  }
  fVar12 = _guard_xfg_dispatch_icall_nop(fVar12);
  if (1e-08 < ABS(fVar12 + fVar12)) {
    fVar12 = (param_5 * 0.017453292 * param_4) / (fVar12 + fVar12);
    fVar19 = 0.0;
    if ((0.0 <= fVar12) && (fVar19 = fVar12, 1.0 <= fVar12)) {
      fVar19 = 1.0;
    }
    pfVar5 = (float *)FQuat::Slerp_NotNormalized(&local_78,param_2,param_3,fVar19);
    fVar4 = fRam0000000146b4a2ec;
    fVar3 = fRam0000000146b4a2e8;
    fVar2 = fRam0000000146b4a2e4;
    fVar1 = _DAT_146b4a2e0;
    *param_1 = *pfVar5;
    param_1[1] = pfVar5[1];
    param_1[2] = pfVar5[2];
    param_1[3] = pfVar5[3];
    fVar19 = *param_1;
    fVar12 = param_1[1];
    fVar13 = param_1[2];
    fVar18 = param_1[3];
    auVar6._0_4_ = fVar19 * fVar19 + fVar13 * fVar13;
    auVar6._4_4_ = fVar12 * fVar12 + fVar18 * fVar18;
    auVar6._8_4_ = fVar13 * fVar13 + fVar19 * fVar19;
    auVar6._12_4_ = fVar18 * fVar18 + fVar12 * fVar12;
    fVar14 = auVar6._4_4_ + auVar6._0_4_;
    fVar15 = auVar6._8_4_ + auVar6._4_4_;
    fVar16 = auVar6._12_4_ + auVar6._8_4_;
    fVar17 = auVar6._0_4_ + auVar6._12_4_;
    auVar7._4_4_ = fVar15;
    auVar7._0_4_ = fVar14;
    auVar7._8_4_ = fVar16;
    auVar7._12_4_ = fVar17;
    auVar7 = rsqrtps(auVar6,auVar7);
    fVar8 = auVar7._0_4_;
    fVar9 = auVar7._4_4_;
    fVar10 = auVar7._8_4_;
    fVar11 = auVar7._12_4_;
    fVar8 = (fVar1 - fVar8 * fVar8 * fVar14 * fVar1) * fVar8 + fVar8;
    fVar9 = (fVar2 - fVar9 * fVar9 * fVar15 * fVar2) * fVar9 + fVar9;
    fVar10 = (fVar3 - fVar10 * fVar10 * fVar16 * fVar3) * fVar10 + fVar10;
    fVar11 = (fVar4 - fVar11 * fVar11 * fVar17 * fVar4) * fVar11 + fVar11;
    fVar12 = (float)(((uint)(((fVar2 - fVar9 * fVar9 * fVar15 * fVar2) * fVar9 + fVar9) * fVar12) ^
                     uRam0000000146b4a2d4) & -(uint)(1e-08 <= fVar15) ^ uRam0000000146b4a2d4);
    fVar13 = (float)(((uint)(((fVar3 - fVar10 * fVar10 * fVar16 * fVar3) * fVar10 + fVar10) * fVar13
                            ) ^ uRam0000000146b4a2d8) & -(uint)(1e-08 <= fVar16) ^
                    uRam0000000146b4a2d8);
    fVar18 = (float)(((uint)(((fVar4 - fVar11 * fVar11 * fVar17 * fVar4) * fVar11 + fVar11) * fVar18
                            ) ^ uRam0000000146b4a2dc) & -(uint)(1e-08 <= fVar17) ^
                    uRam0000000146b4a2dc);
    *param_1 = (float)(((uint)(((fVar1 - fVar8 * fVar8 * fVar14 * fVar1) * fVar8 + fVar8) * fVar19)
                       ^ _DAT_146b4a2d0) & -(uint)(1e-08 <= fVar14) ^ _DAT_146b4a2d0);
    param_1[1] = fVar12;
    param_1[2] = fVar13;
    param_1[3] = fVar18;
  }
  else {
    *param_1 = fVar19;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return param_1;
}



// FUNCTION 1430db710 FUN_1430db710 body=166 status=ok
// SIG undefined FUN_1430db710(void)

void FUN_1430db710(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  FWeakObjectPtr::operator=(&local_30,0);
  local_30 = *param_3;
  local_2c = param_3[1];
  local_28 = *(undefined8 *)(param_3 + 2);
  iVar1 = *(int *)(param_1 + 0x200);
  lVar3 = (longlong)iVar1;
  *(int *)(param_1 + 0x200) = iVar1 + 1;
  if (*(int *)(param_1 + 0x204) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x1f8,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x1f8);
  *(undefined4 *)(lVar2 + lVar3 * 0x18) = param_2;
  *(undefined4 *)(lVar2 + 8 + lVar3 * 0x18) = local_30;
  *(undefined4 *)(lVar2 + 0xc + lVar3 * 0x18) = local_2c;
  *(undefined8 *)(lVar2 + 0x10 + lVar3 * 0x18) = local_28;
  return;
}



// FUNCTION 1430db7c0 FUN_1430db7c0 body=105 status=ok
// SIG undefined FUN_1430db7c0(void)

void FUN_1430db7c0(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_142374760();
  if ((((param_2 != '\0') && (*(char *)(param_1 + 0x290) == '\0')) &&
      (*(longlong *)(param_1 + 0x178) == 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x118) + 0x168), plVar1 != (longlong *)0x0)) {
    plVar2 = (longlong *)plVar1[0x32];
    if ((longlong *)plVar1[0x32] == (longlong *)0x0) {
      plVar2 = plVar1;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x3d0))(plVar2,param_1);
    }
  }
  return;
}



// FUNCTION 1430db830 FUN_1430db830 body=112 status=ok
// SIG undefined FUN_1430db830(void)

void FUN_1430db830(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x540);
    plVar3 = plVar1;
    if (plVar1 != plVar1 + *(int *)(param_1 + 0x548)) {
      while (*plVar3 != param_2) {
        plVar3 = plVar3 + 1;
        if (plVar3 == plVar1 + *(int *)(param_1 + 0x548)) {
          return;
        }
      }
      iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
      if (iVar2 != -1) {
        _guard_xfg_dispatch_icall_nop
                  (plVar1 + iVar2,plVar1 + iVar2 + 1,
                   (longlong)((*(int *)(param_1 + 0x548) - iVar2) + -1) << 3);
        *(int *)(param_1 + 0x548) = *(int *)(param_1 + 0x548) + -1;
      }
    }
  }
  return;
}



// FUNCTION 1430db8a0 FUN_1430db8a0 body=265 status=ok
// SIG undefined FUN_1430db8a0(void)

void FUN_1430db8a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar4 = FUN_14233f450();
  if (iVar4 == 3) {
    lVar1 = param_1 + 0x228;
    cVar3 = FUN_142d52a00(lVar1);
    if (cVar3 != '\0') {
      uVar2 = FUN_142d52a20(lVar1);
      uVar2 = FArchive::operator<<(uVar2);
      fVar5 = (float)FUN_142d61c30(uVar2);
      iVar4 = *(int *)(param_1 + 0x1d8);
      uVar2 = FUN_142d52a20(lVar1);
      uVar2 = FArchive::operator<<(uVar2);
      fVar6 = (float)FUN_142d5fed0(uVar2);
      if (fVar6 < fVar5 / (float)iVar4) {
        return;
      }
    }
    cVar3 = FUN_142c48f90(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x220),0);
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 0x240) = 1;
      cVar3 = FUN_142d52a00(lVar1);
      if (cVar3 != '\0') {
        uVar2 = FUN_142d52a20(lVar1);
        uVar2 = FArchive::operator<<(uVar2);
        FUN_142d61c30(uVar2);
        uVar2 = FUN_142d52a20(lVar1);
        uVar2 = FArchive::operator<<(uVar2);
        FUN_142d55510(uVar2);
      }
    }
  }
  return;
}



// FUNCTION 1430db9f0 AddEventTriggerToList body=31 status=ok
// SIG undefined AddEventTriggerToList(void)

void UCigars_DrivingManager::AddEventTriggerToList(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_142dbb5d0(param_1 + 0x1c8,local_res10);
  return;
}



// FUNCTION 1430dba20 FUN_1430dba20 body=122 status=ok
// SIG undefined FUN_1430dba20(void)

void FUN_1430dba20(longlong param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x19c) = param_4;
  *(undefined4 *)(param_1 + 0x198) = param_3;
  FUN_1430cc8e0();
  *(undefined4 *)(param_1 + 0x1a8) = param_4;
  *(undefined4 *)(param_1 + 0x1a4) = param_3;
  uVar1 = *(undefined4 *)(param_5 + 1);
  *(undefined8 *)(param_1 + 0x1ac) = *param_5;
  *(undefined1 *)(param_1 + 0x1a0) = param_2;
  *(undefined4 *)(param_1 + 0x1b4) = uVar1;
  return;
}



// FUNCTION 1430dbaa0 FUN_1430dbaa0 body=65 status=ok
// SIG undefined FUN_1430dbaa0(void)

void FUN_1430dbaa0(longlong param_1,float param_2,float param_3)

{
  if (-1.0 <= param_2) {
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
  }
  else {
    param_2 = -1.0;
  }
  *(float *)(param_1 + 0x1f8) = param_2;
  if (param_3 < -1.0) {
    *(undefined4 *)(param_1 + 0x1fc) = 0xbf800000;
    return;
  }
  if (1.0 <= param_3) {
    param_3 = 1.0;
  }
  *(float *)(param_1 + 0x1fc) = param_3;
  return;
}



// FUNCTION 1430dbaf0 FUN_1430dbaf0 body=8 status=ok
// SIG undefined FUN_1430dbaf0(void)

void FUN_1430dbaf0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1b0) = param_2;
  return;
}



// FUNCTION 1430dbb00 FUN_1430dbb00 body=373 status=ok
// SIG undefined FUN_1430dbb00(void)

void FUN_1430dbb00(longlong *param_1,char param_2,char param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = param_1[0x36];
  if ((lVar5 == 0) || ((*(char *)((longlong)param_1 + 0x1c1) == param_2 && (param_3 == '\0')))) {
    return;
  }
  if ((param_2 != '\0') && (lVar1 = param_1[0x37], lVar1 != 0)) {
    *(undefined1 *)((longlong)param_1 + 0x1c4) = 0;
    *(undefined1 *)((longlong)param_1 + 0x1c1) = 1;
    if ((*(longlong *)(lVar1 + 0x4d8) == 0) || (*(longlong *)(lVar1 + 0x4e0) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(lVar1 + 0x4e0) + 0x48))();
      lVar5 = param_1[0x36];
    }
    *(undefined1 *)((longlong)param_1 + 0x1c5) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
    if (((*(char *)(lVar5 + 0x308) != '\0') && (0 < *(int *)(lVar5 + 0x30c))) &&
       (cVar3 = FUN_142d52a00(param_1 + 0x3b), cVar3 != '\0')) {
      uVar4 = FUN_142d52a20(param_1 + 0x3b);
      uVar4 = FArchive::operator<<(uVar4);
      FUN_142d61c30(uVar4);
      uVar4 = FUN_142d52a20(param_1 + 0x3b);
      uVar4 = FArchive::operator<<(uVar4);
      FUN_142d55510(uVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x0001430dbc2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x408))(param_1);
    return;
  }
  lVar5 = param_1[0x24];
  *(undefined1 *)((longlong)param_1 + 0x1c1) = 0;
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(lVar5 + 0x790);
                    /* WARNING: Could not recover jumptable at 0x0001430dbc68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x410))(param_1);
  return;
}



// FUNCTION 1430dbc80 FUN_1430dbc80 body=13 status=ok
// SIG undefined FUN_1430dbc80(void)

void FUN_1430dbc80(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xa40) = param_2;
  FUN_1430dcc80(param_1,0);
  return;
}



// FUNCTION 1430dbc90 FUN_1430dbc90 body=39 status=ok
// SIG undefined FUN_1430dbc90(void)

void FUN_1430dbc90(longlong param_1,float param_2)

{
  if (param_2 < -1.0) {
    *(undefined4 *)(param_1 + 0x19c) = 0xbf800000;
    return;
  }
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  *(float *)(param_1 + 0x19c) = param_2;
  return;
}



// FUNCTION 1430dbcc0 FUN_1430dbcc0 body=65 status=ok
// SIG undefined FUN_1430dbcc0(void)

void FUN_1430dbcc0(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14096cb40();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (lVar2 != 0) {
    FUN_140968540(lVar2,param_2);
  }
  return;
}



// FUNCTION 1430dbd10 FUN_1430dbd10 body=295 status=ok
// SIG undefined FUN_1430dbd10(void)

void FUN_1430dbd10(longlong param_1,float param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((((*(char *)(param_1 + 0x5d0) == '\x02') &&
       (lVar1 = *(longlong *)(param_1 + 0x2a0), lVar1 != 0)) &&
      (plVar3 = *(longlong **)(param_1 + 0x180), plVar3 != (longlong *)0x0)) &&
     ((-1 < param_3 && (param_3 < *(int *)(param_1 + 0x228))))) {
    lVar2 = (**(code **)(*plVar3 + 0x6d0))(plVar3,0,1);
    lVar5 = *(longlong *)(lVar2 + 0x110);
    lVar6 = lVar5;
    if (lVar5 == 0) {
      lVar6 = *(longlong *)(lVar2 + 0x118);
    }
    if (lVar6 != 0) {
      if (lVar6 == lVar5) {
        sVar4 = *(short *)(lVar2 + 6);
      }
      else {
        sVar4 = *(short *)(lVar2 + 8);
      }
      plVar3 = (longlong *)FUN_1426e2550((int)sVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x358))
                  (plVar3,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0x136);
      }
      lVar5 = 0;
      if (*(short *)(lVar6 + 8) == 6) {
        lVar5 = lVar6;
      }
      if (lVar5 != 0) {
        physx::PxVehicleNoDrive::setBrakeTorque(lVar1,param_3,param_2 * 10000.0);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x360))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1430dbe40 FUN_1430dbe40 body=295 status=ok
// SIG undefined FUN_1430dbe40(void)

void FUN_1430dbe40(longlong param_1,float param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((((*(char *)(param_1 + 0x5d0) == '\x02') &&
       (lVar1 = *(longlong *)(param_1 + 0x2a0), lVar1 != 0)) &&
      (plVar3 = *(longlong **)(param_1 + 0x180), plVar3 != (longlong *)0x0)) &&
     ((-1 < param_3 && (param_3 < *(int *)(param_1 + 0x228))))) {
    lVar2 = (**(code **)(*plVar3 + 0x6d0))(plVar3,0,1);
    lVar5 = *(longlong *)(lVar2 + 0x110);
    lVar6 = lVar5;
    if (lVar5 == 0) {
      lVar6 = *(longlong *)(lVar2 + 0x118);
    }
    if (lVar6 != 0) {
      if (lVar6 == lVar5) {
        sVar4 = *(short *)(lVar2 + 6);
      }
      else {
        sVar4 = *(short *)(lVar2 + 8);
      }
      plVar3 = (longlong *)FUN_1426e2550((int)sVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x358))
                  (plVar3,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0x136);
      }
      lVar5 = 0;
      if (*(short *)(lVar6 + 8) == 6) {
        lVar5 = lVar6;
      }
      if (lVar5 != 0) {
        physx::PxVehicleNoDrive::setDriveTorque(lVar1,param_3,param_2 * 10000.0);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x360))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1430dbf70 FUN_1430dbf70 body=295 status=ok
// SIG undefined FUN_1430dbf70(void)

void FUN_1430dbf70(longlong param_1,float param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((((*(char *)(param_1 + 0x5d0) == '\x02') &&
       (lVar1 = *(longlong *)(param_1 + 0x2a0), lVar1 != 0)) &&
      (plVar3 = *(longlong **)(param_1 + 0x180), plVar3 != (longlong *)0x0)) &&
     ((-1 < param_3 && (param_3 < *(int *)(param_1 + 0x228))))) {
    lVar2 = (**(code **)(*plVar3 + 0x6d0))(plVar3,0,1);
    lVar5 = *(longlong *)(lVar2 + 0x110);
    lVar6 = lVar5;
    if (lVar5 == 0) {
      lVar6 = *(longlong *)(lVar2 + 0x118);
    }
    if (lVar6 != 0) {
      if (lVar6 == lVar5) {
        sVar4 = *(short *)(lVar2 + 6);
      }
      else {
        sVar4 = *(short *)(lVar2 + 8);
      }
      plVar3 = (longlong *)FUN_1426e2550((int)sVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x358))
                  (plVar3,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0x136);
      }
      lVar5 = 0;
      if (*(short *)(lVar6 + 8) == 6) {
        lVar5 = lVar6;
      }
      if (lVar5 != 0) {
        physx::PxVehicleNoDrive::setSteerAngle(lVar1,param_3,param_2 * 0.017453292);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x360))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1430dc0a0 bpf__TransformCharacterTo__pf body=15 status=ok
// SIG undefined bpf__TransformCharacterTo__pf(void)

void ABP_DestroyableObject_DLC_C__pf210322148::bpf__TransformCharacterTo__pf
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x460) = param_2;
  *(undefined8 *)(param_1 + 0x468) = param_3;
  return;
}



// FUNCTION 1430dc0b0 FUN_1430dc0b0 body=498 status=ok
// SIG undefined FUN_1430dc0b0(void)

void FUN_1430dc0b0(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  float local_res8 [2];
  undefined1 local_28 [32];
  
  lVar2 = *(longlong *)(param_1 + 0x270);
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x4d8) != 0)) && (*(longlong *)(lVar2 + 0x4e0) != 0))
  {
    lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x4e0) + 0x28))();
    if (lVar2 != 0) {
      if (param_2 == '\0') {
        cVar1 = FUN_1407c3030(param_1 + 0x1c8);
        if (cVar1 != '\0') {
          FUN_1430cf830(param_1);
          return;
        }
        if (*(char *)(param_1 + 0x1c0) != '\0') {
          if ((*(char *)(param_1 + 0x178) != '\0') &&
             (*(char *)(*(longlong *)(param_1 + 0x270) + 0x128) != '\x01')) {
            FUN_1430dbcc0(*(longlong *)(param_1 + 0x270),0);
          }
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 400,0);
          *(undefined4 *)(param_1 + 0x268) = 0;
          if (*(float *)(param_1 + 0x284) < *(float *)(param_1 + 0x264)) {
            pfVar3 = (float *)(**(code **)(**(longlong **)(param_1 + 0x270) + 0x308))
                                        (*(longlong **)(param_1 + 0x270),local_28);
            fVar4 = SQRT(*pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1] + pfVar3[2] * pfVar3[2]);
            if (*(float *)(param_1 + 0x314) <= fVar4 && fVar4 != *(float *)(param_1 + 0x314)) {
              local_res8[0] = 0.0;
              fVar4 = *(float *)(param_1 + 0x310);
              *(undefined1 *)(param_1 + 0x260) = 1;
              if (0.0 < fVar4) {
                local_res8[0] = (float)FUN_1430d5030(param_1,*(undefined4 *)(param_1 + 0x264));
                local_res8[0] = local_res8[0] / fVar4;
              }
              TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                        (param_1 + 0x1a0,local_res8);
              *(undefined1 *)(param_1 + 0x1c0) = 0;
              return;
            }
          }
        }
      }
      else if (*(char *)(param_1 + 0x1c0) == '\0') {
        if (*(char *)(param_1 + 0x260) != '\0') {
          FUN_1430cf830(param_1);
        }
        if ((*(char *)(param_1 + 0x178) != '\0') &&
           (*(char *)(*(longlong *)(param_1 + 0x270) + 0x128) != '\x01')) {
          FUN_1430dbcc0(*(longlong *)(param_1 + 0x270),1);
        }
        *(undefined4 *)(param_1 + 0x264) = 0;
        *(undefined1 *)(param_1 + 0x26c) = 0;
        *(undefined1 *)(param_1 + 0x260) = 0;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x180,0);
      }
      *(char *)(param_1 + 0x1c0) = param_2;
    }
  }
  return;
}



// FUNCTION 1430dc2b0 FUN_1430dc2b0 body=79 status=ok
// SIG undefined FUN_1430dc2b0(void)

void FUN_1430dc2b0(longlong *param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = param_2 - *(float *)(param_1 + 0x4c);
  if ((fVar1 == 0.0) && (fVar1 = param_3 - *(float *)((longlong)param_1 + 0x264), fVar1 == 0.0)) {
    return;
  }
  *(float *)(param_1 + 0x4c) = param_2;
  *(float *)((longlong)param_1 + 0x264) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0001430dc2f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x598))(fVar1,CONCAT44(param_3,param_2));
  return;
}



// FUNCTION 1430dc300 FUN_1430dc300 body=13 status=ok
// SIG undefined FUN_1430dc300(void)

void FUN_1430dc300(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x93c) = param_2;
  FUN_1430dcc80(param_1,0);
  return;
}



// FUNCTION 1430dc310 FUN_1430dc310 body=169 status=ok
// SIG undefined FUN_1430dc310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430dc310(longlong param_1,float param_2,int param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + 0x2a0) != 0) && (-1 < param_3)) &&
     (param_3 < *(int *)(param_1 + 0x228))) {
    puVar1 = (undefined8 *)
             physx::PxVehicleWheelsSimData::getWheelData
                       (*(longlong *)(param_1 + 0x2a0) + 0x10,param_3);
    fStack_3c = param_2 * 0.017453292;
    local_58 = *puVar1;
    uStack_50 = puVar1[1];
    local_48 = *(undefined4 *)(puVar1 + 2);
    uStack_44 = *(undefined4 *)((longlong)puVar1 + 0x14);
    uStack_40 = *(undefined4 *)(puVar1 + 3);
    local_38 = *(undefined4 *)(puVar1 + 4);
    uStack_34 = *(undefined4 *)((longlong)puVar1 + 0x24);
    uStack_30 = *(undefined4 *)(puVar1 + 5);
    uStack_2c = *(undefined4 *)((longlong)puVar1 + 0x2c);
    physx::PxVehicleWheelsSimData::setWheelData
              (*(longlong *)(param_1 + 0x2a0) + 0x10,param_3,&local_58);
  }
  return;
}



// FUNCTION 1430dc3c0 FUN_1430dc3c0 body=39 status=ok
// SIG undefined FUN_1430dc3c0(void)

void FUN_1430dc3c0(longlong param_1,float param_2)

{
  if (param_2 < -1.0) {
    *(undefined4 *)(param_1 + 0x198) = 0xbf800000;
    return;
  }
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  *(float *)(param_1 + 0x198) = param_2;
  return;
}



// FUNCTION 1430dc3f0 FUN_1430dc3f0 body=17 status=ok
// SIG undefined FUN_1430dc3f0(void)

void FUN_1430dc3f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x518);
  if (lVar1 == 0) {
    return;
  }
  iVar2 = FUN_14233f450();
  if ((iVar2 == 3) && (*(longlong *)(lVar1 + 0x1b0) == 0)) {
    FUN_142df2e20(lVar1,param_2);
  }
  return;
}



// FUNCTION 1430dc430 FUN_1430dc430 body=50 status=ok
// SIG undefined FUN_1430dc430(void)

void FUN_1430dc430(longlong param_1)

{
  undefined8 local_res8 [4];
  
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    local_res8[0] = *(undefined8 *)(param_1 + 0x180);
    FUN_1430c6e60(*(undefined1 *)(param_1 + 0x5d0),*(longlong *)(param_1 + 0x2a0),local_res8);
  }
  return;
}



// FUNCTION 1430dc470 FUN_1430dc470 body=27 status=ok
// SIG undefined FUN_1430dc470(void)

void FUN_1430dc470(undefined8 param_1)

{
  FUN_142378f20();
  FUN_1430e1b70(param_1);
  return;
}



// FUNCTION 1430dc490 FUN_1430dc490 body=1088 status=ok
// SIG undefined FUN_1430dc490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430dc490(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_2e8 [32];
  undefined4 local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  float local_298 [4];
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280 [30];
  undefined4 local_208;
  int local_204;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined1 local_188 [4];
  undefined4 local_184;
  undefined4 auStack_180 [30];
  undefined4 local_108;
  undefined4 auStack_100 [30];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  lVar12 = 0;
  local_2a0 = 0;
  switch(*(undefined1 *)(param_1 + 0x4e8)) {
  case 1:
    local_2a0 = 1;
    break;
  case 2:
    local_2a0 = 2;
    break;
  case 3:
    local_2a0 = 3;
    break;
  case 4:
    local_2a0 = 4;
    break;
  case 5:
    local_2a0 = 5;
  }
  local_2b8 = *(undefined8 *)(param_1 + 0x4ec);
  uStack_2b0 = *(undefined8 *)(param_1 + 0x4f4);
  local_2a4 = *(undefined4 *)(param_1 + 0x500);
  local_2a8 = *(undefined4 *)(param_1 + 0x4fc);
  physx::PxVehicleDriveSimData4W::setDiffData(param_3,&local_2b8);
  local_1a8 = 0x43fa00003f800000;
  uStack_1a0 = 0x3e19999a44160000;
  local_1f8 = 0x3f4ccccd00000000;
  uStack_1f0 = 0x3f8000003ea8f5c3;
  local_194 = 0x3eb33333;
  local_18c = 0x3ada740e;
  local_1e4 = 0x3f4ccccd;
  local_198 = 0x40000000;
  local_1e8 = 0x3f800000;
  local_1b8 = 3;
  local_190 = 0x3f800000;
  FUN_1430d7870(param_1 + 0x458,&local_1f8,param_1);
  physx::PxVehicleDriveSimData::setEngineData(param_3,&local_1f8);
  local_298[0] = *(float *)(param_1 + 0x530) * 10000.0;
  local_298[1] = 1.4013e-45;
  local_298[2] = 7.00649e-45;
  physx::PxVehicleDriveSimData::setClutchData(param_3,local_298);
  pfVar8 = (float *)physx::PxVehicleWheelsSimData::getWheelCentreOffset(param_2,0);
  fVar1 = *pfVar8;
  fVar2 = pfVar8[1];
  lVar9 = physx::PxVehicleWheelsSimData::getWheelCentreOffset(param_2,1);
  fVar3 = *(float *)(lVar9 + 4);
  pfVar8 = (float *)physx::PxVehicleWheelsSimData::getWheelCentreOffset(param_2,2);
  fVar4 = *pfVar8;
  fVar5 = pfVar8[1];
  lVar9 = physx::PxVehicleWheelsSimData::getWheelCentreOffset(param_2,3);
  local_2c8 = *(undefined4 *)(param_1 + 0x5b0);
  local_2bc = ABS(fVar1 - fVar4);
  local_2c4 = ABS(fVar3 - fVar2);
  local_2c0 = ABS(*(float *)(lVar9 + 4) - fVar5);
  physx::PxVehicleDriveSimData4W::setAckermannGeometryData(param_3,&local_2c8);
  local_284 = 0;
  local_280[3] = 0x3f8ccccd;
  local_280[2] = 0x3fc00000;
  local_280[0] = 0x40800000;
  local_280[1] = 0x40000000;
  iVar6 = *(int *)(param_1 + 0x520);
  lVar13 = (longlong)iVar6;
  local_200 = *(undefined4 *)(param_1 + 0x50c);
  local_288 = *(undefined4 *)(param_1 + 0x528);
  local_280[4] = 0x3f800000;
  puVar10 = local_280 + 5;
  for (lVar9 = 0x19; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  lVar9 = lVar12;
  if (3 < lVar13) {
    puVar10 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + 0x18);
    do {
      local_280[lVar9] = puVar10[-6];
      local_280[lVar9 + 1] = puVar10[-3];
      local_280[lVar9 + 2] = *puVar10;
      local_280[lVar9 + 3] = puVar10[3];
      lVar9 = lVar9 + 4;
      puVar10 = puVar10 + 0xc;
    } while (lVar9 < lVar13 + -3);
  }
  if (lVar9 < lVar13) {
    puVar10 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + lVar9 * 0xc);
    do {
      uVar7 = *puVar10;
      puVar10 = puVar10 + 3;
      local_280[lVar9] = uVar7;
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar13);
  }
  local_208 = *(undefined4 *)(param_1 + 0x514);
  local_204 = iVar6 + 2;
  physx::PxVehicleDriveSimData::setGearsData(param_3,&local_288);
  physx::PxVehicleAutoBoxData::PxVehicleAutoBoxData(local_188);
  lVar9 = (longlong)*(int *)(param_1 + 0x520);
  if (3 < lVar9) {
    puVar10 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + 4);
    puVar11 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + 0x1c);
    do {
      auStack_180[lVar12] = puVar10[1];
      auStack_100[lVar12] = *puVar10;
      auStack_180[lVar12 + 1] = puVar10[4];
      auStack_100[lVar12 + 1] = puVar10[3];
      auStack_180[lVar12 + 2] = puVar11[1];
      auStack_100[lVar12 + 2] = *puVar11;
      auStack_180[lVar12 + 3] = puVar11[4];
      auStack_100[lVar12 + 3] = puVar11[3];
      lVar12 = lVar12 + 4;
      puVar10 = puVar10 + 0xc;
      puVar11 = puVar11 + 0xc;
    } while (lVar12 < lVar9 + -3);
  }
  if (lVar12 < lVar9) {
    puVar10 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + (lVar12 * 3 + 1) * 4);
    do {
      auStack_180[lVar12] = puVar10[1];
      auStack_100[lVar12] = *puVar10;
      lVar12 = lVar12 + 1;
      puVar10 = puVar10 + 3;
    } while (lVar12 < lVar9);
  }
  local_184 = *(undefined4 *)(param_1 + 0x52c);
  local_108 = *(undefined4 *)(param_1 + 0x510);
  physx::PxVehicleDriveSimData::setAutoBoxData(param_3,local_188);
  return;
}



// FUNCTION 1430dc8f0 FUN_1430dc8f0 body=899 status=ok
// SIG undefined FUN_1430dc8f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430dc8f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  char *pcVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined4 local_250;
  float local_248 [4];
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230 [30];
  undefined4 local_1b8;
  int local_1b4;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_138 [4];
  undefined4 local_134;
  undefined4 auStack_130 [30];
  undefined4 local_b8;
  undefined4 auStack_b0 [30];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  uVar7 = 0;
  local_258 = 0;
  local_250 = 0;
  if (*(int *)(param_1 + 0x5c8) == 0) {
    uVar5 = uVar7;
    if (0 < *(int *)(param_1 + 0x228)) {
      do {
        physx::PxVehicleDifferentialNWData::setDrivenWheel(&local_258,uVar5,1);
        uVar8 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar8;
      } while ((int)uVar8 < *(int *)(param_1 + 0x228));
    }
  }
  else {
    pcVar9 = *(char **)(param_1 + 0x5c0);
    uVar5 = (longlong)*(int *)(param_1 + 0x5c8);
    if (pcVar9 + *(int *)(param_1 + 0x5c8) < pcVar9) {
      uVar5 = uVar7;
    }
    uVar11 = uVar7;
    if (uVar5 != 0) {
      do {
        physx::PxVehicleDifferentialNWData::setDrivenWheel(&local_258,(int)*pcVar9,1);
        uVar11 = uVar11 + 1;
        pcVar9 = pcVar9 + 1;
      } while (uVar11 != uVar5);
    }
  }
  physx::PxVehicleDriveSimDataNW::setDiffData(param_3,&local_258);
  local_158 = 0x43fa00003f800000;
  uStack_150 = 0x3e19999a44160000;
  local_1a8 = 0x3f4ccccd00000000;
  uStack_1a0 = 0x3f8000003ea8f5c3;
  local_144 = 0x3eb33333;
  local_13c = 0x3ada740e;
  local_194 = 0x3f4ccccd;
  local_148 = 0x40000000;
  local_198 = 0x3f800000;
  local_168 = 3;
  local_140 = 0x3f800000;
  FUN_1430d7870(param_1 + 0x458,&local_1a8,param_1);
  physx::PxVehicleDriveSimData::setEngineData(param_3,&local_1a8);
  local_248[0] = *(float *)(param_1 + 0x530) * 10000.0;
  local_248[1] = 1.4013e-45;
  local_248[2] = 7.00649e-45;
  physx::PxVehicleDriveSimData::setClutchData(param_3,local_248);
  iVar1 = *(int *)(param_1 + 0x520);
  lVar10 = (longlong)iVar1;
  local_230[2] = 0x3fc00000;
  local_1b0 = *(undefined4 *)(param_1 + 0x50c);
  local_230[3] = 0x3f8ccccd;
  local_238 = *(undefined4 *)(param_1 + 0x528);
  local_234 = 0;
  local_230[0] = 0x40800000;
  local_230[1] = 0x40000000;
  local_230[4] = 0x3f800000;
  puVar4 = local_230 + 5;
  for (lVar3 = 0x19; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar5 = uVar7;
  if (3 < lVar10) {
    puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + 0x18);
    do {
      local_230[uVar5] = puVar4[-6];
      local_230[uVar5 + 1] = puVar4[-3];
      local_230[uVar5 + 2] = *puVar4;
      local_230[uVar5 + 3] = puVar4[3];
      uVar5 = uVar5 + 4;
      puVar4 = puVar4 + 0xc;
    } while ((longlong)uVar5 < lVar10 + -3);
  }
  if ((longlong)uVar5 < lVar10) {
    puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + uVar5 * 0xc);
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 3;
      local_230[uVar5] = uVar2;
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < lVar10);
  }
  local_1b8 = *(undefined4 *)(param_1 + 0x514);
  local_1b4 = iVar1 + 2;
  physx::PxVehicleDriveSimData::setGearsData(param_3,&local_238);
  physx::PxVehicleAutoBoxData::PxVehicleAutoBoxData(local_138);
  lVar3 = (longlong)*(int *)(param_1 + 0x520);
  if (3 < lVar3) {
    puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + 4);
    puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + 0x1c);
    do {
      auStack_130[uVar7] = puVar4[1];
      auStack_b0[uVar7] = *puVar4;
      auStack_130[uVar7 + 1] = puVar4[4];
      auStack_b0[uVar7 + 1] = puVar4[3];
      auStack_130[uVar7 + 2] = puVar6[1];
      auStack_b0[uVar7 + 2] = *puVar6;
      auStack_130[uVar7 + 3] = puVar6[4];
      auStack_b0[uVar7 + 3] = puVar6[3];
      uVar7 = uVar7 + 4;
      puVar4 = puVar4 + 0xc;
      puVar6 = puVar6 + 0xc;
    } while ((longlong)uVar7 < lVar3 + -3);
  }
  if ((longlong)uVar7 < lVar3) {
    puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + (uVar7 * 3 + 1) * 4);
    do {
      auStack_130[uVar7] = puVar4[1];
      auStack_b0[uVar7] = *puVar4;
      uVar7 = uVar7 + 1;
      puVar4 = puVar4 + 3;
    } while ((longlong)uVar7 < lVar3);
  }
  local_134 = *(undefined4 *)(param_1 + 0x52c);
  local_b8 = *(undefined4 *)(param_1 + 0x510);
  physx::PxVehicleDriveSimData::setAutoBoxData(param_3,local_138);
  return;
}



// FUNCTION 1430dcc80 FUN_1430dcc80 body=317 status=ok
// SIG undefined FUN_1430dcc80(void)

void FUN_1430dcc80(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8 [4];
  undefined1 *local_18;
  longlong *plStack_10;
  
  if (((param_2 != '\0') || (*(longlong *)(param_1 + 0xce8) == 0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x180), plVar1 != (longlong *)0x0)) {
    local_res8[0] = 0;
    lVar2 = (**(code **)(*plVar1 + 0x6d0))(plVar1,0,1);
    if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x2a0) != 0)) {
      plStack_10 = local_res8;
      local_18 = &LAB_1430cf340;
      local_res8[0] = param_1;
      FUN_1426936b0(lVar2,&local_18);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0xce8) + 0xe8))(*(longlong **)(param_1 + 0xce8),0,2);
  (**(code **)(**(longlong **)(param_1 + 0xce8) + 0xe8))(*(longlong **)(param_1 + 0xce8),1,2);
  (**(code **)(**(longlong **)(param_1 + 0xce8) + 0xe8))(*(longlong **)(param_1 + 0xce8),2,2);
  if (*(char *)(param_1 + 0x93c) == '\0') {
    uVar3 = 2;
  }
  else {
    uVar3 = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0xce8) + 0xe8))(*(longlong **)(param_1 + 0xce8),3,uVar3);
  if (*(char *)(param_1 + 0xa40) == '\0') {
    uVar3 = 2;
  }
  else {
    uVar3 = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0xce8) + 0xe8))(*(longlong **)(param_1 + 0xce8),5,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001430dcdb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0xce8) + 0xe8))(*(longlong **)(param_1 + 0xce8),4,2);
  return;
}



// FUNCTION 1430dcdc0 FUN_1430dcdc0 body=744 status=ok
// SIG undefined FUN_1430dcdc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430dcdc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_258 [32];
  float local_238 [4];
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220 [30];
  undefined4 local_1a8;
  int local_1a4;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128 [4];
  undefined4 local_124;
  undefined4 auStack_120 [30];
  undefined4 local_a8;
  undefined4 auStack_a0 [30];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  local_148 = 0x43fa00003f800000;
  uStack_140 = 0x3e19999a44160000;
  local_198 = 0x3f4ccccd00000000;
  uStack_190 = 0x3f8000003ea8f5c3;
  local_134 = 0x3eb33333;
  local_12c = 0x3ada740e;
  local_184 = 0x3f4ccccd;
  local_138 = 0x40000000;
  local_188 = 0x3f800000;
  local_158 = 3;
  local_130 = 0x3f800000;
  FUN_1430d7870(param_1 + 0x458,&local_198,param_1);
  physx::PxVehicleDriveSimData::setEngineData(param_3,&local_198);
  local_238[0] = *(float *)(param_1 + 0x530) * 10000.0;
  local_238[1] = 1.4013e-45;
  local_238[2] = 7.00649e-45;
  physx::PxVehicleDriveSimData::setClutchData(param_3,local_238);
  iVar2 = *(int *)(param_1 + 0x520);
  lVar7 = (longlong)iVar2;
  local_224 = 0;
  local_220[3] = 0x3f8ccccd;
  local_228 = *(undefined4 *)(param_1 + 0x528);
  local_220[2] = 0x3fc00000;
  uVar1 = *(undefined4 *)(param_1 + 0x50c);
  local_220[0] = 0x40800000;
  local_220[1] = 0x40000000;
  local_220[4] = 0x3f800000;
  puVar4 = local_220 + 5;
  for (lVar3 = 0x19; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  lVar6 = 0;
  lVar3 = lVar6;
  local_1a0 = uVar1;
  if (3 < lVar7) {
    puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + 0x18);
    do {
      local_220[lVar3] = puVar4[-6];
      local_220[lVar3 + 1] = puVar4[-3];
      local_220[lVar3 + 2] = *puVar4;
      local_220[lVar3 + 3] = puVar4[3];
      lVar3 = lVar3 + 4;
      puVar4 = puVar4 + 0xc;
    } while (lVar3 < lVar7 + -3);
  }
  if (lVar3 < lVar7) {
    puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + lVar3 * 0xc);
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 3;
      local_220[lVar3] = uVar1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < lVar7);
  }
  local_1a8 = *(undefined4 *)(param_1 + 0x514);
  local_1a4 = iVar2 + 2;
  physx::PxVehicleDriveSimData::setGearsData(param_3,&local_228);
  physx::PxVehicleAutoBoxData::PxVehicleAutoBoxData(local_128);
  lVar3 = (longlong)*(int *)(param_1 + 0x520);
  if (3 < lVar3) {
    puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + 4);
    puVar5 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + 0x1c);
    do {
      auStack_120[lVar6] = puVar4[1];
      auStack_a0[lVar6] = *puVar4;
      auStack_120[lVar6 + 1] = puVar4[4];
      auStack_a0[lVar6 + 1] = puVar4[3];
      auStack_120[lVar6 + 2] = puVar5[1];
      auStack_a0[lVar6 + 2] = *puVar5;
      auStack_120[lVar6 + 3] = puVar5[4];
      auStack_a0[lVar6 + 3] = puVar5[3];
      lVar6 = lVar6 + 4;
      puVar4 = puVar4 + 0xc;
      puVar5 = puVar5 + 0xc;
    } while (lVar6 < lVar3 + -3);
  }
  if (lVar6 < lVar3) {
    puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + (lVar6 * 3 + 1) * 4);
    do {
      auStack_120[lVar6] = puVar4[1];
      auStack_a0[lVar6] = *puVar4;
      lVar6 = lVar6 + 1;
      puVar4 = puVar4 + 3;
    } while (lVar6 < lVar3);
  }
  local_124 = *(undefined4 *)(param_1 + 0x52c);
  local_a8 = *(undefined4 *)(param_1 + 0x510);
  physx::PxVehicleDriveSimData::setAutoBoxData(param_3,local_128);
  return;
}



// FUNCTION 1430dd0b0 FUN_1430dd0b0 body=1990 status=ok
// SIG undefined FUN_1430dd0b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430dd0b0(longlong *param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  void *_Memory;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  short sVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_2b8 [32];
  undefined1 *local_298;
  undefined4 local_290;
  undefined8 local_288;
  int local_280;
  undefined1 local_278 [112];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec [25];
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined1 local_168 [256];
  undefined8 local_68;
  ulonglong uStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  if (param_1[0x30] == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x658))();
  (**(code **)(*param_1 + 0x660))(param_1);
  _Memory = (void *)physx::PxVehicleWheelsSimData::allocate((int)param_1[0x45]);
  (**(code **)(*param_1 + 0x670))(param_1,_Memory);
  iVar12 = (int)param_1[0x45];
  uVar11 = 0;
  uVar17 = uVar11;
  uVar7 = uVar11;
  if (0 < iVar12) {
    do {
      puVar4 = (ulonglong *)physx::PxVehicleWheelsSimData::getTireForceAppPointOffset(_Memory,uVar7)
      ;
      local_288 = *puVar4;
      local_280 = (int)puVar4[1];
      plVar9 = *(longlong **)(param_1[0x44] + uVar17);
      if (plVar9 == (longlong *)0x0) {
LAB_1430dd1e5:
        uVar13 = uVar11;
      }
      else {
        uVar13 = plVar9[0x1f];
        if (uVar13 == 0) {
          (**(code **)(*plVar9 + 0x368))(plVar9);
          uVar13 = plVar9[0x1f];
          if (uVar13 == 0) goto LAB_1430dd1e5;
        }
        lVar5 = FUN_1430e3550();
        if ((*(int *)(*(longlong *)(uVar13 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar13 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_1430dd1e5;
      }
      local_288 = CONCAT44(local_288._4_4_ + *(float *)(uVar13 + 0x114),
                           (float)local_288 + *(float *)(uVar13 + 0x110));
      physx::PxVehicleWheelsSimData::setTireForceAppPointOffset(_Memory,uVar7,&local_288);
      physx::PxVehicleWheelsSimData::setSuspForceAppPointOffset(_Memory,uVar7,&local_288);
      iVar12 = (int)param_1[0x45];
      uVar16 = (int)uVar7 + 1;
      uVar17 = uVar17 + 0x38;
      uVar7 = (ulonglong)uVar16;
    } while ((int)uVar16 < iVar12);
  }
  puVar14 = (ulonglong *)param_1[0x198];
  puVar4 = (ulonglong *)((longlong)puVar14 + (longlong)(int)param_1[0x199] * 0xc);
  if (puVar14 != puVar4) {
    do {
      if ((((int)*puVar14 != *(int *)((longlong)puVar14 + 4)) && ((int)*puVar14 < iVar12)) &&
         (*(int *)((longlong)puVar14 + 4) < iVar12)) {
        local_280 = (int)puVar14[1];
        local_288 = *puVar14;
        physx::PxVehicleWheelsSimData::addAntiRollBarData(_Memory,&local_288);
      }
      puVar14 = (ulonglong *)((longlong)puVar14 + 0xc);
    } while (puVar14 != puVar4);
    iVar12 = (int)param_1[0x45];
  }
  uVar17 = (ulonglong)iVar12;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar17;
  uVar6 = SUB168(ZEXT816(0xa0) * auVar2,0);
  if (SUB168(ZEXT816(0xa0) * auVar2,8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  uVar7 = operator_new(uVar6);
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  else if (iVar12 != 0) {
    lVar5 = uVar7 + 0x9c;
    do {
      _guard_xfg_dispatch_icall_nop((void *)(lVar5 + -0x9c),0,0xa0);
      *(undefined1 *)(lVar5 + -0x80) = 1;
      *(undefined4 *)(lVar5 + -100) = 0xffffffff;
      *(undefined8 *)(lVar5 + -0x18) = 0;
      *(undefined4 *)(lVar5 + -0x10) = 0;
      *(undefined8 *)(lVar5 + -0xc) = 0x3f800000;
      *(undefined8 *)(lVar5 + -4) = 0;
      lVar5 = lVar5 + 0xa0;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  puVar4 = (ulonglong *)(param_1 + 0x19e);
  if (puVar4 != &local_288) {
    uVar17 = *puVar4;
    *puVar4 = uVar7;
    FMemory::operator_delete(uVar17);
    uVar7 = uVar11;
  }
  FMemory::operator_delete(uVar7);
  cVar1 = (char)param_1[0xba];
  if (cVar1 == '\0') {
    FUN_1430c8370(local_278);
    local_68 = 0x3f0000003ee66666;
    uStack_60 = 0x3fa666663f000000;
    local_48 = 0x3f800000;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    local_58 = 0x3fa66666;
    local_54 = 0x3fa66666;
    FUN_1430dc490(param_1,_Memory,local_278);
    lVar5 = physx::PxVehicleDrive4W::allocate(4);
    local_288 = 0;
    lVar8 = (**(code **)(*(longlong *)param_1[0x30] + 0x6d0))((longlong *)param_1[0x30],0,1);
    uVar17 = *(ulonglong *)(lVar8 + 0x110);
    uVar7 = uVar17;
    if (uVar17 == 0) {
      uVar7 = *(ulonglong *)(lVar8 + 0x118);
    }
    if (uVar7 != 0) {
      if (uVar7 == uVar17) {
        sVar10 = *(short *)(lVar8 + 6);
      }
      else {
        sVar10 = *(short *)(lVar8 + 8);
      }
      plVar9 = (longlong *)FUN_1426e2550((int)sVar10);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x358))
                  (plVar9,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0x136);
      }
      uVar17 = uVar11;
      if (*(short *)(uVar7 + 8) == 6) {
        uVar17 = uVar7;
      }
      if (uVar17 != 0) {
        local_298 = local_278;
        local_290 = 0;
        physx::PxVehicleDrive4W::setup(lVar5,DAT_146b08400,uVar17,_Memory);
        physx::PxVehicleDrive::setToRestState(lVar5);
LAB_1430dd7aa:
        physx::PxVehicleWheelsSimData::free(_Memory);
      }
LAB_1430dd7b2:
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x360))(plVar9);
      }
    }
LAB_1430dd7c3:
    param_1[0x55] = lVar5;
  }
  else {
    if (cVar1 == '\x01') {
      FUN_1430c8370(local_278);
      local_68 = 0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      FUN_1430dc8f0(param_1,_Memory,local_278);
      lVar5 = physx::PxVehicleDriveNW::allocate((int)param_1[0x45]);
      local_288 = 0;
      lVar8 = (**(code **)(*(longlong *)param_1[0x30] + 0x6d0))((longlong *)param_1[0x30],0,1);
      uVar17 = *(ulonglong *)(lVar8 + 0x110);
      uVar7 = uVar17;
      if (uVar17 == 0) {
        uVar7 = *(ulonglong *)(lVar8 + 0x118);
      }
      if (uVar7 != 0) {
        if (uVar7 == uVar17) {
          sVar10 = *(short *)(lVar8 + 6);
        }
        else {
          sVar10 = *(short *)(lVar8 + 8);
        }
        plVar9 = (longlong *)FUN_1426e2550((int)sVar10);
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x358))
                    (plVar9,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                     0x136);
        }
        uVar17 = uVar11;
        if (*(short *)(uVar7 + 8) == 6) {
          uVar17 = uVar7;
        }
        if (uVar17 != 0) {
          local_290 = (undefined4)param_1[0x45];
          local_298 = local_278;
          physx::PxVehicleDriveNW::setup(lVar5,DAT_146b08400,uVar17,_Memory);
          physx::PxVehicleDrive::setToRestState(lVar5);
          goto LAB_1430dd7aa;
        }
        goto LAB_1430dd7b2;
      }
      goto LAB_1430dd7c3;
    }
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') goto LAB_1430dd7d1;
      physx::PxVehicleEngineData::PxVehicleEngineData(local_278);
      local_188 = 0x40800000;
      local_180 = 0x3f000000;
      local_208 = 0xc0800000;
      uStack_200 = 0x4000000040800000;
      local_1f8 = 0x3fc00000;
      local_1f4 = 0x3f8ccccd;
      local_1f0 = 0x3f800000;
      local_184 = 7;
      puVar15 = local_1ec;
      for (lVar5 = 0x19; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      local_178 = 0x41200000;
      local_174 = 1;
      local_170 = 5;
      physx::PxVehicleAutoBoxData::PxVehicleAutoBoxData(local_168);
      FUN_1430dcdc0(param_1,_Memory,local_278);
      lVar5 = physx::PxVehicleDriveTank::allocate((int)param_1[0x45]);
      local_288 = 0;
      lVar8 = (**(code **)(*(longlong *)param_1[0x30] + 0x6d0))((longlong *)param_1[0x30],0,1);
      uVar17 = *(ulonglong *)(lVar8 + 0x110);
      uVar7 = uVar17;
      if (uVar17 == 0) {
        uVar7 = *(ulonglong *)(lVar8 + 0x118);
      }
      if (uVar7 != 0) {
        if (uVar7 == uVar17) {
          sVar10 = *(short *)(lVar8 + 6);
        }
        else {
          sVar10 = *(short *)(lVar8 + 8);
        }
        plVar9 = (longlong *)FUN_1426e2550((int)sVar10);
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x358))
                    (plVar9,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                     0x136);
        }
        uVar17 = uVar11;
        if (*(short *)(uVar7 + 8) == 6) {
          uVar17 = uVar7;
        }
        if (uVar17 != 0) {
          local_290 = (undefined4)param_1[0x45];
          local_298 = local_278;
          physx::PxVehicleDriveTank::setup(lVar5,DAT_146b08400,uVar17,_Memory);
          physx::PxVehicleDrive::setToRestState(lVar5);
          goto LAB_1430dd7aa;
        }
        goto LAB_1430dd7b2;
      }
      goto LAB_1430dd7c3;
    }
    lVar5 = physx::PxVehicleNoDrive::allocate((int)param_1[0x45]);
    local_288 = 0;
    lVar8 = (**(code **)(*(longlong *)param_1[0x30] + 0x6d0))((longlong *)param_1[0x30],0,1);
    uVar17 = *(ulonglong *)(lVar8 + 0x110);
    uVar7 = uVar17;
    if (uVar17 == 0) {
      uVar7 = *(ulonglong *)(lVar8 + 0x118);
    }
    if (uVar7 != 0) {
      if (uVar7 == uVar17) {
        sVar10 = *(short *)(lVar8 + 6);
      }
      else {
        sVar10 = *(short *)(lVar8 + 8);
      }
      plVar9 = (longlong *)FUN_1426e2550((int)sVar10);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x358))
                  (plVar9,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0x136);
      }
      uVar17 = uVar11;
      if (*(short *)(uVar7 + 8) == 6) {
        uVar17 = uVar7;
      }
      if (uVar17 != 0) {
        physx::PxVehicleNoDrive::setup(lVar5,DAT_146b08400,uVar17,_Memory);
        physx::PxVehicleNoDrive::setToRestState(lVar5);
        physx::PxVehicleWheelsSimData::free(_Memory);
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x360))(plVar9);
      }
    }
    param_1[0x55] = 0;
  }
  param_1[0x54] = lVar5;
LAB_1430dd7d1:
  iVar12 = (int)param_1[0x45];
  if (0 < iVar12) {
    plVar9 = (longlong *)(param_1[0x44] + 8);
    local_288 = 0;
    do {
      if (*plVar9 == 0) {
        return;
      }
      uVar16 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar16;
      plVar9 = plVar9 + 7;
    } while ((int)uVar16 < iVar12);
  }
  if ((*(char *)((longlong)param_1 + 0x93c) != '\0') || ((char)param_1[0x148] != '\0')) {
    FUN_1430dcc80(param_1,CONCAT71((uint7)(uint3)((uint)iVar12 >> 8),1));
  }
  FUN_140968a90(param_1,(char)param_1[0xa1]);
  return;
}



// FUNCTION 1430dd880 FUN_1430dd880 body=18 status=ok
// SIG undefined FUN_1430dd880(void)

undefined1 FUN_1430dd880(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x1b0) + 0x30);
  }
  return 0;
}



// FUNCTION 1430dd8a0 FUN_1430dd8a0 body=88 status=ok
// SIG undefined FUN_1430dd8a0(void)

undefined8 FUN_1430dd8a0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if ((((*(longlong *)(param_1 + 0x1b0) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x1b0) + 0x2f9) != '\0')) &&
      (lVar1 = *(longlong *)(param_1 + 0x1b8), lVar1 != 0)) &&
     ((*(longlong *)(lVar1 + 0x4d8) != 0 && (*(longlong *)(lVar1 + 0x4e0) != 0)))) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x4e0) + 0x48))();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1430dd900 FUN_1430dd900 body=224 status=ok
// SIG undefined FUN_1430dd900(void)

undefined8 FUN_1430dd900(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  float extraout_XMM0_Da;
  
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 == 0) {
    return 1;
  }
  if (*(char *)(lVar1 + 0x308) == '\0') {
    cVar2 = FUN_142d52a00(param_1 + 0x1d8);
    if (cVar2 != '\0') {
      uVar3 = FUN_142d52a20(param_1 + 0x1d8);
      uVar3 = FArchive::operator<<(uVar3);
      FUN_142d5fed0(uVar3);
      if (extraout_XMM0_Da <= 0.0) {
        return 1;
      }
    }
    if ((*(char *)(param_1 + 0x1c3) == '\0') &&
       (*(float *)(*(longlong *)(param_1 + 0x1b0) + 0x34) < *(float *)(param_1 + 0x1cc))) {
      return 1;
    }
  }
  else if (*(float *)(lVar1 + 0x310) < *(float *)(param_1 + 0x1cc)) {
    return 1;
  }
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if ((((*(char *)(lVar1 + 0x2f8) == '\0') ||
       (*(float *)(lVar1 + 0x34) < *(float *)(param_1 + 0x1cc))) &&
      (*(longlong *)(lVar1 + 0x2f0) != 0)) &&
     (cVar2 = FUN_142c48f90(*(longlong *)(lVar1 + 0x2f0),*(undefined8 *)(param_1 + 0x1b8),0),
     cVar2 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1430dd9e0 FUN_1430dd9e0 body=99 status=ok
// SIG undefined FUN_1430dd9e0(void)

undefined1 FUN_1430dd9e0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_1[0x9b] != 0) && (param_1[0x9c] != 0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[0x9c] + 0x48))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  uVar2 = FUN_1430e3990();
  lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
  if (lVar3 != 0) {
    return *(undefined1 *)(lVar3 + 0x280);
  }
  return 0;
}



// FUNCTION 1430dda50 FUN_1430dda50 body=161 status=ok
// SIG undefined FUN_1430dda50(void)

void FUN_1430dda50(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_14233f450();
  if (((iVar2 == 3) && (param_1[0x37] != 0)) && (param_1[0x36] != 0)) {
    *(undefined1 *)((longlong)param_1 + 0x1c2) = 1;
    cVar1 = FUN_1430cf8e0(param_1);
    if (cVar1 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x1c3) = 1;
      cVar1 = (**(code **)(*param_1 + 0x400))(param_1);
      if (cVar1 == '\0') {
        if ((*(char *)(param_1[0x36] + 0x308) != '\0') && (0 < *(int *)(param_1[0x36] + 0x30c))) {
          FUN_1430dbb00(param_1,1);
          return;
        }
        FUN_1430dbb00(param_1,1,0);
        return;
      }
      *(undefined1 *)((longlong)param_1 + 0x1c4) = 1;
    }
  }
  return;
}



// FUNCTION 1430ddb00 FUN_1430ddb00 body=182 status=ok
// SIG undefined FUN_1430ddb00(void)

void FUN_1430ddb00(longlong *param_1,char param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1[0x36] != 0) {
    *(undefined2 *)((longlong)param_1 + 0x1c3) = 0;
    *(undefined1 *)((longlong)param_1 + 0x1c2) = 0;
    iVar2 = FUN_14233f450();
    if (((((iVar2 == 3) && (param_1[0x37] != 0)) && (*(char *)((longlong)param_1 + 0x1c1) != '\0'))
        && ((param_2 != '\0' ||
            ((*(char *)(param_1[0x36] + 0x308) == '\0' &&
             (fVar1 = *(float *)(param_1[0x36] + 0x34),
             fVar1 < *(float *)((longlong)param_1 + 0x1cc) ||
             fVar1 == *(float *)((longlong)param_1 + 0x1cc))))))) && (param_1[0x36] != 0)) {
      lVar3 = param_1[0x24];
      *(undefined1 *)((longlong)param_1 + 0x1c1) = 0;
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(lVar3 + 0x790);
      (**(code **)(*param_1 + 0x410))(param_1);
    }
  }
  return;
}



// FUNCTION 1430ddbc0 FUN_1430ddbc0 body=1053 status=ok
// SIG undefined FUN_1430ddbc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430ddbc0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar11 [16];
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar18 [16];
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
  uint uVar37;
  uint uVar38;
  float fVar39;
  float fVar40;
  undefined8 local_c8;
  float local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  if ((param_2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x528) != 0)) {
    uVar4 = AUGWeapon_Hook::GetPrivateStaticClass();
    lVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
    if (lVar5 != 0) {
      lVar1 = param_2[0x2d];
      auVar11._4_4_ = uRam0000000146b4a334;
      auVar11._0_4_ = _DAT_146b4a330;
      auVar11._8_4_ = uRam0000000146b4a338;
      auVar11._12_4_ = uRam0000000146b4a33c;
      if (lVar1 == 0) {
        fVar6 = 0.0;
        fVar9 = 0.0;
        fVar7 = 0.0;
        fVar12 = 0.0;
        fVar23 = 0.0;
        fVar25 = 0.0;
        fVar27 = 0.0;
        fVar31 = (float)(_DAT_146b4a320 & _DAT_146b4a330);
        fVar33 = (float)(uRam0000000146b4a324 & uRam0000000146b4a334);
        fVar35 = (float)(uRam0000000146b4a328 & uRam0000000146b4a338);
        uVar37 = (uint)fRam0000000146b4a32c & uRam0000000146b4a33c;
        fVar29 = fRam0000000146b4a32c;
      }
      else {
        fVar23 = *(float *)(lVar1 + 0x210);
        fVar25 = *(float *)(lVar1 + 0x214);
        fVar27 = *(float *)(lVar1 + 0x218);
        fVar6 = *(float *)(lVar1 + 0x220);
        fVar9 = *(float *)(lVar1 + 0x224);
        fVar7 = *(float *)(lVar1 + 0x228);
        fVar12 = *(float *)(lVar1 + 0x22c);
        fVar31 = *(float *)(lVar1 + 0x230);
        fVar33 = *(float *)(lVar1 + 0x234);
        fVar35 = *(float *)(lVar1 + 0x238);
        uVar37 = *(uint *)(lVar1 + 0x23c);
        fVar29 = *(float *)(lVar1 + 0x21c);
      }
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x528) + 0x168);
      if (lVar1 == 0) {
        fVar39 = 0.0;
        fVar40 = 0.0;
        local_c0 = 0.0;
        local_b8 = 0.0;
        fStack_b4 = 0.0;
        fStack_b0 = 0.0;
        fVar17 = (float)(_DAT_146b4a320 & _DAT_146b4a330);
        fVar20 = (float)(uRam0000000146b4a324 & uRam0000000146b4a334);
        fVar22 = (float)(uRam0000000146b4a328 & uRam0000000146b4a338);
        uVar38 = (uint)fRam0000000146b4a32c & uRam0000000146b4a33c;
        fStack_ac = fRam0000000146b4a32c;
      }
      else {
        local_b8 = *(float *)(lVar1 + 0x210);
        fStack_b4 = *(float *)(lVar1 + 0x214);
        fStack_b0 = *(float *)(lVar1 + 0x218);
        fVar39 = *(float *)(lVar1 + 0x220);
        fVar40 = *(float *)(lVar1 + 0x224);
        local_c0 = *(float *)(lVar1 + 0x228);
        fVar17 = *(float *)(lVar1 + 0x230);
        fVar20 = *(float *)(lVar1 + 0x234);
        fVar22 = *(float *)(lVar1 + 0x238);
        uVar38 = *(uint *)(lVar1 + 0x23c);
        fStack_ac = *(float *)(lVar1 + 0x21c);
      }
      fVar23 = fVar23 * _DAT_146b4a410;
      fVar25 = fVar25 * fRam0000000146b4a414;
      fVar27 = fVar27 * fRam0000000146b4a418;
      fVar29 = fVar29 * fRam0000000146b4a41c;
      auVar18._0_4_ = (float)((uint)(*(float *)(lVar5 + 0x220) - fVar6) & _DAT_146b4a330);
      auVar18._4_4_ = (float)((uint)(*(float *)(lVar5 + 0x224) - fVar9) & uRam0000000146b4a334);
      auVar18._8_4_ = (float)((uint)(*(float *)(lVar5 + 0x228) - fVar7) & uRam0000000146b4a338);
      auVar18._12_4_ = (uint)(0.0 - fVar12) & uRam0000000146b4a33c;
      auVar2._4_4_ = fVar33;
      auVar2._0_4_ = fVar31;
      auVar2._8_4_ = fVar35;
      auVar2._12_4_ = uVar37;
      auVar11 = rcpps(auVar11,auVar2);
      fVar6 = auVar18._8_4_ * fVar25 - auVar18._4_4_ * fVar27;
      fVar7 = auVar18._0_4_ * fVar27 - auVar18._8_4_ * fVar23;
      fVar8 = auVar18._4_4_ * fVar23 - auVar18._0_4_ * fVar25;
      fVar9 = auVar11._0_4_;
      fVar12 = auVar11._4_4_;
      fVar14 = auVar11._8_4_;
      fVar6 = fVar6 + fVar6;
      fVar7 = fVar7 + fVar7;
      fVar8 = fVar8 + fVar8;
      fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar31;
      fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar33;
      fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar35;
      auVar3._4_4_ = fVar20;
      auVar3._0_4_ = fVar17;
      auVar3._8_4_ = fVar22;
      auVar3._12_4_ = uVar38;
      auVar11 = rcpps(auVar18,auVar3);
      fVar10 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar31;
      fVar13 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar33;
      fVar15 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar35;
      fVar24 = local_b8 * _DAT_146b4a410;
      fVar26 = fStack_b4 * fRam0000000146b4a414;
      fVar28 = fStack_b0 * fRam0000000146b4a418;
      fVar30 = fStack_ac * fRam0000000146b4a41c;
      fVar32 = (float)((uint)(*(float *)(param_1 + 0x220) - fVar39) & _DAT_146b4a330);
      fVar34 = (float)((uint)(*(float *)(param_1 + 0x224) - fVar40) & uRam0000000146b4a334);
      fVar36 = (float)((uint)(*(float *)(param_1 + 0x228) - local_c0) & uRam0000000146b4a338);
      fVar9 = fVar36 * fVar26 - fVar34 * fVar28;
      fVar12 = fVar32 * fVar28 - fVar36 * fVar24;
      fVar14 = fVar34 * fVar24 - fVar32 * fVar26;
      fVar16 = auVar11._0_4_;
      fVar19 = auVar11._4_4_;
      fVar21 = auVar11._8_4_;
      fVar9 = fVar9 + fVar9;
      fVar12 = fVar12 + fVar12;
      fVar14 = fVar14 + fVar14;
      fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar17;
      fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * fVar20;
      fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar22;
      fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar17;
      fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * fVar20;
      fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar22;
      fVar17 = (((fVar14 * fVar26 - fVar12 * fVar28) + fVar30 * fVar9 + fVar32) *
                (float)(-(uint)((float)((uint)fVar17 & _DAT_146b4a3e0) <= _DAT_146b4a400) &
                        (uint)fVar16 ^ (uint)fVar16) -
               ((fVar8 * fVar25 - fVar7 * fVar27) + fVar29 * fVar6 + auVar18._0_4_) *
               (float)(-(uint)((float)((uint)fVar31 & _DAT_146b4a3e0) <= _DAT_146b4a400) &
                       (uint)fVar10 ^ (uint)fVar10)) * fVar17;
      fVar20 = (((fVar9 * fVar28 - fVar14 * fVar24) + fVar30 * fVar12 + fVar34) *
                (float)(-(uint)((float)((uint)fVar20 & uRam0000000146b4a3e4) <= fRam0000000146b4a404
                               ) & (uint)fVar19 ^ (uint)fVar19) -
               ((fVar6 * fVar27 - fVar8 * fVar23) + fVar29 * fVar7 + auVar18._4_4_) *
               (float)(-(uint)((float)((uint)fVar33 & uRam0000000146b4a3e4) <= fRam0000000146b4a404)
                       & (uint)fVar13 ^ (uint)fVar13)) * fVar20;
      fVar22 = (((fVar12 * fVar24 - fVar9 * fVar26) + fVar30 * fVar14 + fVar36) *
                (float)(-(uint)((float)((uint)fVar22 & uRam0000000146b4a3e8) <= fRam0000000146b4a408
                               ) & (uint)fVar21 ^ (uint)fVar21) -
               ((fVar7 * fVar23 - fVar6 * fVar25) + fVar29 * fVar8 + auVar18._8_4_) *
               (float)(-(uint)((float)((uint)fVar35 & uRam0000000146b4a3e8) <= fRam0000000146b4a408)
                       & (uint)fVar15 ^ (uint)fVar15)) * fVar22;
      fVar27 = fVar22 * fStack_b4 - fVar20 * fStack_b0;
      fVar23 = fVar17 * fStack_b0 - fVar22 * local_b8;
      fVar25 = fVar20 * local_b8 - fVar17 * fStack_b4;
      fVar27 = fVar27 + fVar27;
      fVar23 = fVar23 + fVar23;
      fVar25 = fVar25 + fVar25;
      local_c0 = (fVar23 * local_b8 - fVar27 * fStack_b4) + fStack_ac * fVar25 + fVar22 + local_c0;
      local_c8 = CONCAT44((fVar27 * fStack_b0 - fVar25 * local_b8) + fStack_ac * fVar23 + fVar20 +
                          fVar40,(fVar25 * fStack_b4 - fVar23 * fStack_b0) +
                                 fStack_ac * fVar27 + fVar17 + fVar39);
      FUN_14223c960(param_2,&local_c8,&local_b8,0,0,1);
      FUN_1430ce7a0(param_1,lVar5);
    }
  }
  return;
}



// FUNCTION 1430ddfe0 FUN_1430ddfe0 body=244 status=ok
// SIG undefined FUN_1430ddfe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430ddfe0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  FUN_1422409a0();
  if ((((*(longlong *)(param_1 + 0x4d8) != 0) && (*(longlong *)(param_1 + 0x4e0) != 0)) &&
      ((**(code **)(**(longlong **)(param_1 + 0x4e0) + 0x38))
                 (*(longlong **)(param_1 + 0x4e0),param_2), *(longlong *)(param_1 + 0x4d8) != 0)) &&
     ((*(longlong *)(param_1 + 0x4e0) != 0 &&
      (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e0) + 0x28))(), lVar1 != 0)))) {
    FUN_14268e510(lVar1,param_1 + 0x4e8,1,0);
    FUN_14268ed10(lVar1,param_1 + 0x4f4,1,0);
    *(undefined8 *)(param_1 + 0x4e8) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x4f0) = DAT_1468b5d98;
    *(undefined8 *)(param_1 + 0x4f4) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x4fc) = DAT_1468b5d98;
  }
  return;
}



// FUNCTION 1430de0e0 FUN_1430de0e0 body=3383 status=ok
// SIG undefined FUN_1430de0e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430de0e0(longlong *param_1,float param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [12];
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  ulonglong in_stack_fffffffffffffed8;
  undefined8 *in_stack_fffffffffffffee0;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
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
  
  FUN_14237ac80();
  plVar15 = (longlong *)param_1[0x5e];
  if (plVar15 == (longlong *)0x0) {
    plVar15 = (longlong *)param_1[0x41];
  }
  lVar7 = (**(code **)(*plVar15 + 0x668))(plVar15);
  auVar21._4_4_ = fRam0000000146b4a314;
  auVar21._0_4_ = _DAT_146b4a310;
  auVar21._8_4_ = fRam0000000146b4a318;
  auVar21._12_4_ = fRam0000000146b4a31c;
  if (lVar7 == 0) {
    lVar9 = *(longlong *)*(undefined1 (*) [12])(param_1 + 0x58);
    auVar19._12_4_ = 0;
    auVar19._0_12_ = *(undefined1 (*) [12])(param_1 + 0x58);
    auVar19 = divps(auVar19,auVar21);
    fVar16 = (float)lVar9 - (float)(int)auVar19._0_4_ * _DAT_146b4a310;
    fVar25 = (float)((ulonglong)lVar9 >> 0x20) - (float)(int)auVar19._4_4_ * fRam0000000146b4a314;
    fVar28 = *(float *)(param_1 + 0x59) - (float)(int)auVar19._8_4_ * fRam0000000146b4a318;
    fVar16 = (float)(((uint)(fVar16 + _DAT_146b4a310) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                    (uint)(fVar16 + _DAT_146b4a310));
    fVar25 = (float)(((uint)(fVar25 + fRam0000000146b4a314) ^ (uint)fVar25) & -(uint)(0.0 <= fVar25)
                    ^ (uint)(fVar25 + fRam0000000146b4a314));
    local_110 = (float)(((uint)(fVar28 + fRam0000000146b4a318) ^ (uint)fVar28) &
                        -(uint)(0.0 <= fVar28) ^ (uint)(fVar28 + fRam0000000146b4a318));
    local_110 = (float)(((uint)(local_110 - fRam0000000146b4a318) ^ (uint)local_110) &
                        -(uint)(fRam0000000146b4a308 < local_110) ^ (uint)local_110);
    local_108 = CONCAT44(((uint)(fVar25 - fRam0000000146b4a314) ^ (uint)fVar25) &
                         -(uint)(fRam0000000146b4a304 < fVar25) ^ (uint)fVar25,
                         ((uint)(fVar16 - _DAT_146b4a310) ^ (uint)fVar16) &
                         -(uint)(_DAT_146b4a300 < fVar16) ^ (uint)fVar16);
  }
  else {
    local_108 = param_1[0x42];
    local_110 = *(float *)(param_1 + 0x43);
  }
  fStack_100 = *(float *)(param_1 + 0x43);
  lVar9 = param_1[0x2f];
  local_118 = local_108;
  uVar1 = param_1[0x42];
  if (lVar9 == 0) {
    fStack_f4 = 0.0;
    local_108._4_4_ = (float)(uVar1 >> 0x20);
    local_108._0_4_ = (float)uVar1;
    fVar16 = local_108._4_4_;
    fVar25 = fStack_100;
    fVar28 = (float)local_108;
  }
  else {
    fVar16 = *(float *)(lVar9 + 0x200) - *(float *)((longlong)param_1 + 0x2d4);
    fVar25 = *(float *)(lVar9 + 0x1fc) - *(float *)(param_1 + 0x5a);
    fVar28 = *(float *)(lVar9 + 0x1f8) - *(float *)((longlong)param_1 + 0x2cc);
    auVar20._4_4_ = fVar25;
    auVar20._0_4_ = fVar28;
    auVar20._8_4_ = fVar16;
    auVar20._12_4_ = 0;
    auVar21 = divps(auVar20,auVar21);
    fVar28 = fVar28 - (float)(int)auVar21._0_4_ * _DAT_146b4a310;
    fVar25 = fVar25 - (float)(int)auVar21._4_4_ * fRam0000000146b4a314;
    fVar16 = fVar16 - (float)(int)auVar21._8_4_ * fRam0000000146b4a318;
    fVar28 = (float)(((uint)(fVar28 + _DAT_146b4a310) ^ (uint)fVar28) & -(uint)(0.0 <= fVar28) ^
                    (uint)(fVar28 + _DAT_146b4a310));
    fVar25 = (float)(((uint)(fVar25 + fRam0000000146b4a314) ^ (uint)fVar25) & -(uint)(0.0 <= fVar25)
                    ^ (uint)(fVar25 + fRam0000000146b4a314));
    fStack_f4 = (float)(((uint)(fVar16 + fRam0000000146b4a318) ^ (uint)fVar16) &
                        -(uint)(0.0 <= fVar16) ^ (uint)(fVar16 + fRam0000000146b4a318));
    fStack_f4 = (float)(((uint)(fStack_f4 - fRam0000000146b4a318) ^ (uint)fStack_f4) &
                        -(uint)(fRam0000000146b4a308 < fStack_f4) ^ (uint)fStack_f4);
    fVar16 = (float)(((uint)(fVar25 - fRam0000000146b4a314) ^ (uint)fVar25) &
                     -(uint)(fRam0000000146b4a304 < fVar25) ^ (uint)fVar25);
    fVar25 = fStack_f4;
    fVar28 = (float)(((uint)(fVar28 - _DAT_146b4a310) ^ (uint)fVar28) &
                     -(uint)(_DAT_146b4a300 < fVar28) ^ (uint)fVar28);
  }
  plVar14 = (longlong *)0x0;
  local_108 = uVar1;
  local_f8 = fVar25;
  fStack_f0 = fStack_f4;
  fStack_ec = fStack_f4;
  if (*(char *)((longlong)param_1 + 0x25d) == '\0') {
    if (lVar7 != 0) {
      cVar6 = (**(code **)(*plVar15 + 0x780))(plVar15);
      if (cVar6 == '\0') {
        uVar12 = FUN_1430d5980(param_1,&local_108);
        FRotator::Quaternion(uVar12,&local_e8);
        FUN_1430d4960(param_1,&local_108);
        fVar29 = -(float)local_108;
        fVar18 = -local_108._4_4_;
        fStack_100 = -fStack_100;
        local_108 = local_108 ^ 0x8000000080000000;
        local_d8 = fStack_dc * fVar29 * _DAT_146b4a360 + fStack_fc * local_e8 +
                   fStack_e0 * fVar18 * _DAT_146b4a350 + fStack_e4 * fStack_100 * _DAT_146b4a340;
        fStack_d4 = fStack_e0 * fVar29 * fRam0000000146b4a364 + fStack_fc * fStack_e4 +
                    fStack_dc * fVar18 * fRam0000000146b4a354 +
                    local_e8 * fStack_100 * fRam0000000146b4a344;
        fStack_d0 = fStack_e4 * fVar29 * fRam0000000146b4a368 + fStack_fc * fStack_e0 +
                    local_e8 * fVar18 * fRam0000000146b4a358 +
                    fStack_dc * fStack_100 * fRam0000000146b4a348;
        fStack_cc = local_e8 * fVar29 * fRam0000000146b4a36c + fStack_fc * fStack_dc +
                    fStack_e4 * fVar18 * fRam0000000146b4a35c +
                    fStack_e0 * fStack_100 * fRam0000000146b4a34c;
        pauVar8 = (undefined1 (*) [12])FQuat::Rotator(&local_d8,&local_108);
        auVar4._4_4_ = fRam0000000146b4a314;
        auVar4._0_4_ = _DAT_146b4a310;
        auVar4._8_4_ = fRam0000000146b4a318;
        auVar4._12_4_ = fRam0000000146b4a31c;
        local_108 = *(ulonglong *)*pauVar8;
        fStack_100 = *(float *)(*pauVar8 + 8);
        auVar22._12_4_ = 0;
        auVar22._0_12_ = *pauVar8;
        auVar21 = divps(auVar22,auVar4);
        fVar18 = (float)local_108 - (float)(int)auVar21._0_4_ * _DAT_146b4a310;
        fVar29 = (float)(local_108 >> 0x20) - (float)(int)auVar21._4_4_ * fRam0000000146b4a314;
        fVar18 = (float)(((uint)(fVar18 + _DAT_146b4a310) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                        (uint)(fVar18 + _DAT_146b4a310));
        fVar29 = (float)(((uint)(fVar29 + fRam0000000146b4a314) ^ (uint)fVar29) &
                         -(uint)(0.0 <= fVar29) ^ (uint)(fVar29 + fRam0000000146b4a314));
        local_110 = 0.0;
        local_118 = CONCAT44(((uint)(fVar29 - fRam0000000146b4a314) ^ (uint)fVar29) &
                             -(uint)(fRam0000000146b4a304 < fVar29) ^ (uint)fVar29,
                             ((uint)(fVar18 - _DAT_146b4a310) ^ (uint)fVar18) &
                             -(uint)(_DAT_146b4a300 < fVar18) ^ (uint)fVar18);
      }
      else if (*(char *)((longlong)param_1 + 0x25e) == '\0') {
        local_118 = CONCAT44(fVar16,fVar28);
        local_110 = fVar25;
      }
      else {
        if ((((int)param_1[0x56] != 0) && ((longlong *)param_1[0x55] != (longlong *)0x0)) &&
           (cVar6 = (**(code **)(*(longlong *)param_1[0x55] + 0x18))(), cVar6 != '\0')) {
          if ((int)param_1[0x56] != 0) {
            plVar14 = (longlong *)param_1[0x55];
          }
          cVar6 = (**(code **)(*plVar14 + 0x38))(plVar14,plVar15);
          if (cVar6 != '\0') goto LAB_1430de710;
        }
        FUN_1430d7170(param_1,&local_d8);
        FUN_1430d4960(param_1,&local_108);
        fVar29 = -(float)local_108;
        fVar18 = -local_108._4_4_;
        fStack_100 = -fStack_100;
        local_108 = local_108 ^ 0x8000000080000000;
        local_e8 = fStack_cc * fVar29 * _DAT_146b4a360 + fStack_fc * local_d8 +
                   fStack_d0 * fVar18 * _DAT_146b4a350 + fStack_d4 * fStack_100 * _DAT_146b4a340;
        fStack_e4 = fStack_d0 * fVar29 * fRam0000000146b4a364 + fStack_fc * fStack_d4 +
                    fStack_cc * fVar18 * fRam0000000146b4a354 +
                    local_d8 * fStack_100 * fRam0000000146b4a344;
        fStack_e0 = fStack_d4 * fVar29 * fRam0000000146b4a368 + fStack_fc * fStack_d0 +
                    local_d8 * fVar18 * fRam0000000146b4a358 +
                    fStack_cc * fStack_100 * fRam0000000146b4a348;
        fStack_dc = local_d8 * fVar29 * fRam0000000146b4a36c + fStack_fc * fStack_cc +
                    fStack_d4 * fVar18 * fRam0000000146b4a35c +
                    fStack_d0 * fStack_100 * fRam0000000146b4a34c;
        pauVar8 = (undefined1 (*) [12])FQuat::Rotator(&local_e8,&local_108);
        local_108 = *(ulonglong *)*pauVar8;
        fStack_100 = *(float *)(*pauVar8 + 8);
        auVar5._4_4_ = fRam0000000146b4a314;
        auVar5._0_4_ = _DAT_146b4a310;
        auVar5._8_4_ = fRam0000000146b4a318;
        auVar5._12_4_ = fRam0000000146b4a31c;
        auVar23._12_4_ = 0;
        auVar23._0_12_ = *pauVar8;
        auVar21 = divps(auVar23,auVar5);
        fVar18 = (float)local_108 - (float)(int)auVar21._0_4_ * _DAT_146b4a310;
        fVar29 = (float)(local_108 >> 0x20) - (float)(int)auVar21._4_4_ * fRam0000000146b4a314;
        fVar18 = (float)(((uint)(fVar18 + _DAT_146b4a310) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                        (uint)(fVar18 + _DAT_146b4a310));
        fVar29 = (float)(((uint)(fVar29 + fRam0000000146b4a314) ^ (uint)fVar29) &
                         -(uint)(0.0 <= fVar29) ^ (uint)(fVar29 + fRam0000000146b4a314));
        local_110 = 0.0;
        local_118 = CONCAT44(((uint)(fVar29 - fRam0000000146b4a314) ^ (uint)fVar29) &
                             -(uint)(fRam0000000146b4a304 < fVar29) ^ (uint)fVar29,
                             ((uint)(fVar18 - _DAT_146b4a310) ^ (uint)fVar18) &
                             -(uint)(_DAT_146b4a300 < fVar18) ^ (uint)fVar18);
        (**(code **)(*plVar15 + 0x830))(plVar15);
      }
    }
  }
  else {
    if ((((int)param_1[0x56] != 0) && ((longlong *)param_1[0x55] != (longlong *)0x0)) &&
       (cVar6 = (**(code **)(*(longlong *)param_1[0x55] + 0x18))(), cVar6 != '\0')) {
      if ((int)param_1[0x56] != 0) {
        plVar14 = (longlong *)param_1[0x55];
      }
      cVar6 = (**(code **)(*plVar14 + 0x38))(plVar14,plVar15);
      if (cVar6 != '\0') goto LAB_1430de710;
    }
    local_118 = *(longlong *)((longlong)param_1 + 0x2cc);
    local_110 = *(float *)((longlong)param_1 + 0x2d4);
  }
LAB_1430de710:
  if ((*(char *)((longlong)param_1 + 0x25d) == '\0') || (lVar9 = 0x27c, (char)param_1[0x4f] == '\0')
     ) {
    lVar9 = 0x268;
  }
  fVar18 = *(float *)(lVar9 + (longlong)param_1);
  fVar29 = *(float *)(lVar9 + 4 + (longlong)param_1);
  if (*(char *)((longlong)param_1 + 0x25e) == '\0') {
    fVar30 = fVar18 * param_2 * *(float *)(param_1 + 0x4c);
    fVar25 = fVar29 * param_2 * *(float *)((longlong)param_1 + 0x264);
  }
  else {
    auVar24._4_4_ = local_118._4_4_ - fVar16;
    auVar24._0_4_ = (float)local_118 - fVar28;
    auVar24._8_4_ = local_110 - fVar25;
    auVar24._12_4_ = 0;
    auVar3._4_4_ = fRam0000000146b4a314;
    auVar3._0_4_ = _DAT_146b4a310;
    auVar3._8_4_ = fRam0000000146b4a318;
    auVar3._12_4_ = fRam0000000146b4a31c;
    auVar21 = divps(auVar24,auVar3);
    fVar30 = ((float)local_118 - fVar28) - (float)(int)auVar21._0_4_ * _DAT_146b4a310;
    fVar31 = (local_118._4_4_ - fVar16) - (float)(int)auVar21._4_4_ * fRam0000000146b4a314;
    fVar25 = (local_110 - fVar25) - (float)(int)auVar21._8_4_ * fRam0000000146b4a318;
    fVar32 = 0.0 - (float)(int)auVar21._12_4_ * fRam0000000146b4a31c;
    fVar26 = (float)(((uint)(fVar30 + _DAT_146b4a310) ^ (uint)fVar30) & -(uint)(0.0 <= fVar30) ^
                    (uint)(fVar30 + _DAT_146b4a310));
    fVar27 = (float)(((uint)(fVar31 + fRam0000000146b4a314) ^ (uint)fVar31) & -(uint)(0.0 <= fVar31)
                    ^ (uint)(fVar31 + fRam0000000146b4a314));
    fStack_100 = (float)(((uint)(fVar25 + fRam0000000146b4a318) ^ (uint)fVar25) &
                         -(uint)(0.0 <= fVar25) ^ (uint)(fVar25 + fRam0000000146b4a318));
    fStack_fc = (float)(((uint)(fVar32 + fRam0000000146b4a31c) ^ (uint)fVar32) &
                        -(uint)(0.0 <= fVar32) ^ (uint)(fVar32 + fRam0000000146b4a31c));
    fVar26 = (float)(((uint)(fVar26 - _DAT_146b4a310) ^ (uint)fVar26) &
                     -(uint)(_DAT_146b4a300 < fVar26) ^ (uint)fVar26);
    fVar27 = (float)(((uint)(fVar27 - fRam0000000146b4a314) ^ (uint)fVar27) &
                     -(uint)(fRam0000000146b4a304 < fVar27) ^ (uint)fVar27);
    fStack_100 = (float)(((uint)(fStack_100 - fRam0000000146b4a318) ^ (uint)fStack_100) &
                         -(uint)(fRam0000000146b4a308 < fStack_100) ^ (uint)fStack_100);
    fStack_fc = (float)(((uint)(fStack_fc - fRam0000000146b4a31c) ^ (uint)fStack_fc) &
                        -(uint)(fRam0000000146b4a30c < fStack_fc) ^ (uint)fStack_fc);
    fVar25 = fVar18 * param_2;
    local_108 = CONCAT44(fVar27,fVar26);
    fVar31 = fVar29 * param_2;
    fVar30 = fVar27;
    if (((fVar18 != 0.0) && (fVar30 = -fVar25, -fVar25 <= fVar27)) &&
       (fVar30 = fVar27, fVar25 <= fVar27)) {
      fVar30 = fVar25;
    }
    fVar25 = fVar26;
    if (((fVar29 != 0.0) && (fVar25 = -fVar31, -fVar31 <= fVar26)) &&
       (fVar25 = fVar26, fVar31 <= fVar26)) {
      fVar25 = fVar31;
    }
  }
  if ((*(float *)((longlong)param_1 + 0x21c) < ABS(fVar30)) ||
     (*(float *)((longlong)param_1 + 0x21c) < ABS(fVar25))) {
    cVar6 = FUN_14059f160(param_1 + 0x48);
    if ((cVar6 == '\0') && (param_1[0x45] != 0)) {
      lVar9 = param_1[0x2f];
      *(undefined4 *)(param_1 + 0x4b) = 0;
      if (((lVar9 == 0) && (lVar2 = *(longlong *)(param_1[0x23] + 0x168), lVar2 != 0)) &&
         (lVar9 = lVar2, *(longlong *)(lVar2 + 400) != 0)) {
        lVar9 = *(longlong *)(lVar2 + 400);
      }
      lVar9 = FUN_1405ab470(param_1[0x23],0,1,lVar9);
      if (lVar9 != 0) {
        lVar9 = FUN_1405a3150(lVar9,&local_d8,param_1[0x45],0);
        FUN_1405913a0(param_1 + 0x48,lVar9);
        *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(lVar9 + 0x10);
        FUN_140591060(&local_d8);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x4b) = 0;
    }
  }
  else {
    plVar15 = param_1 + 0x48;
    *(float *)(param_1 + 0x4b) = param_2 + *(float *)(param_1 + 0x4b);
    cVar6 = FUN_14059f160(plVar15);
    if ((cVar6 != '\0') &&
       (*(float *)(param_1 + 0x44) < *(float *)(param_1 + 0x4b) ||
        *(float *)(param_1 + 0x44) == *(float *)(param_1 + 0x4b))) {
      if (param_1[0x46] == 0) {
        FUN_1405ac8f0(plVar15,0,4);
      }
      else {
        in_stack_fffffffffffffee0 = &local_108;
        in_stack_fffffffffffffed8 = in_stack_fffffffffffffed8 & 0xffffffff00000000;
        local_108 = 0;
        fStack_100 = 0.0;
        fStack_fc = 0.0;
        FUN_1405a2d20(*plVar15,&local_d8,param_1[0x46],0,in_stack_fffffffffffffed8,
                      in_stack_fffffffffffffee0);
        FUN_140591060(&local_d8);
        if (local_108 != 0) {
          FMemory::Free();
        }
      }
      FUN_1405913a0(plVar15,&DAT_1461fcfe0);
      *(undefined4 *)(param_1 + 0x4a) = DAT_1461fcff0;
    }
  }
  if ((fVar30 == 0.0) && (fVar25 == 0.0)) goto LAB_1430debcb;
  if (*(char *)((longlong)param_1 + 0x285) != '\0') {
    if (*(char *)((longlong)param_1 + 0x291) != '\0') {
      if (*(float *)((longlong)param_1 + 0x294) <= (float)local_118) {
        if (*(float *)(param_1 + 0x53) <= (float)local_118) {
          local_118 = CONCAT44(local_118._4_4_,*(float *)(param_1 + 0x53));
        }
      }
      else {
        local_118 = CONCAT44(local_118._4_4_,*(float *)((longlong)param_1 + 0x294));
      }
    }
    in_stack_fffffffffffffee0 =
         (undefined8 *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffee0 >> 0x20),param_2);
    in_stack_fffffffffffffed8 = CONCAT44((int)(in_stack_fffffffffffffed8 >> 0x20),fVar18);
    uVar17 = FUN_1408d8300();
    local_118 = CONCAT44(local_118._4_4_,uVar17);
  }
  if (*(char *)((longlong)param_1 + 0x284) == '\0') goto LAB_1430debcb;
  if (*(char *)((longlong)param_1 + 0x29c) == '\0') {
    if (local_118._4_4_ - fVar16 <= 180.0) {
      if (-180.0 <= local_118._4_4_ - fVar16) goto LAB_1430deb01;
      local_118._4_4_ = local_118._4_4_ + 360.0;
    }
    else {
      local_118._4_4_ = local_118._4_4_ + -360.0;
    }
  }
  else if (*(float *)(param_1 + 0x54) <= local_118._4_4_) {
    if (*(float *)((longlong)param_1 + 0x2a4) <= local_118._4_4_) {
      local_118 = CONCAT44(*(float *)((longlong)param_1 + 0x2a4),(float)local_118);
    }
  }
  else {
    local_118 = CONCAT44(*(float *)(param_1 + 0x54),(float)local_118);
  }
LAB_1430deb01:
  in_stack_fffffffffffffee0 =
       (undefined8 *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffee0 >> 0x20),param_2);
  in_stack_fffffffffffffed8 = CONCAT44((int)(in_stack_fffffffffffffed8 >> 0x20),fVar29);
  fVar18 = (float)FUN_1408d8300();
  uVar13 = (uint)(fVar16 * 0.0055555557);
  fVar25 = (float)(int)(fVar16 * 0.0055555557) * 180.0;
  if (ABS(fVar16) < ABS(fVar25)) {
    fVar25 = fVar16;
  }
  fVar16 = fVar16 - fVar25;
  if ((uVar13 & 1) != 0) {
    if ((int)uVar13 < 1) {
      fVar16 = fVar16 + 180.0;
    }
    else {
      fVar16 = fVar16 - 180.0;
    }
  }
  uVar13 = (uint)(fVar18 * 0.0055555557);
  fVar25 = (float)(int)(fVar18 * 0.0055555557) * 180.0;
  if (ABS(fVar18) < ABS(fVar25)) {
    fVar25 = fVar18;
  }
  fVar18 = fVar18 - fVar25;
  if ((uVar13 & 1) != 0) {
    if ((int)uVar13 < 1) {
      fVar18 = fVar18 + 180.0;
    }
    else {
      fVar18 = fVar18 - 180.0;
    }
  }
  local_118 = CONCAT44(fVar18,(float)local_118);
LAB_1430debcb:
  if ((((float)local_118 != fVar28) || (local_118._4_4_ != fVar16)) || (local_110 != local_f8)) {
    cVar6 = FUN_14059f160(param_1 + 0x48);
    if ((cVar6 != '\0') && (param_1[0x47] != 0)) {
      fVar16 = local_118._4_4_ - fVar16;
      if (fVar16 <= 180.0) {
        if (fVar16 < -180.0) {
          fVar16 = fVar16 + 360.0;
        }
      }
      else {
        fVar16 = fVar16 + -360.0;
      }
      fVar28 = (float)local_118 - fVar28;
      if (fVar28 <= 180.0) {
        if (fVar28 < -180.0) {
          fVar28 = fVar28 + 360.0;
        }
      }
      else {
        fVar28 = fVar28 + -360.0;
      }
      fVar25 = ABS(fVar28);
      if (ABS(fVar28) <= ABS(fVar16)) {
        fVar25 = ABS(fVar16);
      }
      in_stack_fffffffffffffee0 =
           (undefined8 *)((ulonglong)in_stack_fffffffffffffee0 & 0xffffffff00000000);
      in_stack_fffffffffffffed8 = CONCAT71((int7)(in_stack_fffffffffffffed8 >> 8),4);
      FUN_1405aaa50(param_1[0x48],param_1[0x47],fVar25);
    }
    if (param_1[0x2f] != 0) {
      if (*(char *)((longlong)param_1 + 0x286) == '\0') {
        local_108 = local_118;
        _fStack_100 = CONCAT44(fStack_fc,local_110);
        FUN_142398470(param_1[0x2f],&local_108,0,0,in_stack_fffffffffffffed8 & 0xffffffffffffff00);
      }
      else {
        pfVar10 = (float *)FRotator::Quaternion(&local_118,&local_e8);
        pfVar11 = (float *)FUN_1430d4960(param_1,&local_f8);
        fVar16 = *pfVar10;
        fVar25 = pfVar10[1];
        fVar28 = pfVar10[2];
        fVar18 = pfVar10[3];
        fVar29 = *pfVar11;
        fVar30 = pfVar11[1];
        fVar26 = pfVar11[2];
        fVar31 = pfVar11[3];
        local_d8 = fVar29 * fVar18 * _DAT_146b4a360 + fVar31 * fVar16 +
                   fVar30 * fVar28 * _DAT_146b4a350 + fVar26 * fVar25 * _DAT_146b4a340;
        fStack_d4 = fVar29 * fVar28 * fRam0000000146b4a364 + fVar31 * fVar25 +
                    fVar30 * fVar18 * fRam0000000146b4a354 + fVar26 * fVar16 * fRam0000000146b4a344;
        fStack_d0 = fVar29 * fVar25 * fRam0000000146b4a368 + fVar31 * fVar28 +
                    fVar30 * fVar16 * fRam0000000146b4a358 + fVar26 * fVar18 * fRam0000000146b4a348;
        fStack_cc = fVar29 * fVar16 * fRam0000000146b4a36c + fVar31 * fVar18 +
                    fVar30 * fVar25 * fRam0000000146b4a35c + fVar26 * fVar28 * fRam0000000146b4a34c;
        uVar12 = FUN_14247f500();
        FUN_14247ea90(uVar12);
        (**(code **)(*param_1 + 0x488))
                  (param_1,&DAT_1468b5d90,&local_d8,1,0,
                   (ulonglong)in_stack_fffffffffffffee0 & 0xffffffffffffff00);
      }
    }
    if (lVar7 != 0) {
      param_1[0x58] = local_118;
      *(float *)(param_1 + 0x59) = local_110;
    }
    param_1[0x42] = local_118;
    *(float *)(param_1 + 0x43) = local_110;
  }
  return;
}



// FUNCTION 1430dee20 FUN_1430dee20 body=581 status=ok
// SIG undefined FUN_1430dee20(void)

void FUN_1430dee20(longlong param_1,float param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_58;
  float fStack_54;
  undefined8 local_48;
  undefined4 local_40;
  
  FUN_142357eb0();
  lVar6 = *(longlong *)(param_1 + 0x200);
  if (lVar6 != 0) {
    if ((*(longlong *)(lVar6 + 0x4d8) == 0) || (*(longlong *)(lVar6 + 0x4e0) == 0)) {
      cVar2 = '\0';
    }
    else {
      cVar2 = (**(code **)(**(longlong **)(lVar6 + 0x4e0) + 0x48))();
    }
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x208) = 0;
      *(undefined8 *)(param_1 + 0x1f8) = 0;
      return;
    }
    param_2 = param_2 + *(float *)(param_1 + 0x208);
    *(float *)(param_1 + 0x208) = param_2;
    uVar3 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x180);
    fVar7 = (float)FRichCurve::Eval(uVar3,param_2,0x3f800000);
    if (*(longlong *)(*(longlong *)(param_1 + 0x200) + 0x4d8) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x200) + 0x4e0);
    }
    fVar8 = (float)(**(code **)(*plVar5 + 0x10))();
    fVar11 = *(float *)(param_1 + 0x1fc);
    fVar10 = fVar11 * fVar11;
    if (fVar11 < 0.0) {
      fVar10 = -fVar10;
    }
    fVar11 = *(float *)(param_1 + 0x1f8);
    fVar9 = fVar11 * fVar11;
    if (fVar11 < 0.0) {
      fVar9 = -fVar9;
    }
    lVar6 = *(longlong *)(param_1 + 0x200);
    fVar11 = fVar10 * fVar7 * *(float *)(param_1 + 0x178) * fVar8;
    fVar8 = fVar9 * fVar7 * *(float *)(param_1 + 0x17c) * fVar8;
    if (*(longlong *)(lVar6 + 0x168) == 0) {
      local_40 = DAT_1464aa7c0;
      puVar4 = &local_48;
      local_48 = DAT_1464aa7b8;
    }
    else {
      puVar4 = (undefined8 *)FUN_14238d380(*(longlong *)(lVar6 + 0x168),&local_48);
      lVar6 = *(longlong *)(param_1 + 0x200);
    }
    uVar3 = *puVar4;
    fVar7 = *(float *)(puVar4 + 1);
    if (*(longlong *)(lVar6 + 0x168) == 0) {
      local_40 = DAT_1464aa7a0;
      puVar4 = &local_48;
      local_48 = DAT_1464aa798;
    }
    else {
      puVar4 = (undefined8 *)FUN_14238db80(*(longlong *)(lVar6 + 0x168),&local_48);
      lVar6 = *(longlong *)(param_1 + 0x200);
    }
    uVar1 = *puVar4;
    fVar10 = *(float *)(puVar4 + 1);
    local_58 = (float)uVar3;
    fStack_54 = (float)((ulonglong)uVar3 >> 0x20);
    *(float *)(lVar6 + 0x4f4) = (float)uVar1 * fVar11 + local_58 * fVar8 + *(float *)(lVar6 + 0x4f4)
    ;
    *(float *)(lVar6 + 0x4f8) =
         (float)((ulonglong)uVar1 >> 0x20) * fVar11 + fStack_54 * fVar8 + *(float *)(lVar6 + 0x4f8);
    *(float *)(lVar6 + 0x4fc) = fVar10 * fVar11 + fVar7 * fVar8 + *(float *)(lVar6 + 0x4fc);
  }
  return;
}



// FUNCTION 1430df070 FUN_1430df070 body=2218 status=ok
// SIG undefined FUN_1430df070(void)

void FUN_1430df070(longlong *param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  float *pfVar16;
  ulonglong uVar17;
  uint uVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_128;
  code *local_118;
  ulonglong **ppuStack_110;
  longlong *local_108 [2];
  ulonglong local_f8;
  ulonglong *local_f0;
  longlong **local_e8;
  undefined1 local_d8 [160];
  
  lVar9 = param_1[0x37];
  if (lVar9 == 0) {
    return;
  }
  if (*(longlong *)(lVar9 + 0x4d8) == 0) {
    return;
  }
  if (*(longlong *)(lVar9 + 0x4e0) == 0) {
    return;
  }
  if (param_2 < 1e-08) {
    return;
  }
  if (param_1[0x36] == 0) {
    return;
  }
  uVar15 = 0;
  local_f8 = uVar15;
  local_108[0] = param_1;
  if (*(longlong **)(lVar9 + 0x4e0) != (longlong *)0x0) {
    local_f8 = (**(code **)(**(longlong **)(lVar9 + 0x4e0) + 0x28))();
  }
  if (local_f8 == 0) {
    return;
  }
  local_128 = 0x3f800000;
  cVar5 = FUN_142d52a00(param_1 + 0x3b);
  plVar13 = param_1;
  if (cVar5 != '\0') {
    uVar8 = FUN_142d52a20(param_1 + 0x3b);
    uVar8 = FArchive::operator<<(uVar8);
    fVar20 = (float)FUN_142d5fed0(uVar8);
    plVar14 = param_1 + 0x3f;
    pfVar19 = (float *)*plVar14;
    pfVar1 = pfVar19 + (longlong)(int)param_1[0x40] * 6;
    if (pfVar19 != pfVar1) {
      pfVar16 = pfVar19 + 4;
      do {
        fVar21 = *pfVar19;
        if ((((*(float *)(param_1 + 0x39) <= fVar21 && fVar21 != *(float *)(param_1 + 0x39)) &&
             (fVar21 <= fVar20)) && (local_138 = 0, *(longlong *)pfVar16 != 0)) &&
           ((lVar9 = FWeakObjectPtr::Get(pfVar16 + -2), lVar9 != 0 &&
            (lVar9 = UObject::FindFunction(lVar9,*(undefined8 *)pfVar16), lVar9 != 0)))) {
          plVar10 = (longlong *)FWeakObjectPtr::Get(pfVar16 + -2);
          uVar8 = FUN_14178ac60(plVar10,*(undefined8 *)pfVar16);
          param_3 = 0;
          (**(code **)(*plVar10 + 0x208))(plVar10,uVar8,0);
        }
        pfVar19 = pfVar19 + 6;
        pfVar16 = pfVar16 + 6;
      } while (pfVar19 != pfVar1);
    }
    fVar21 = param_2 + *(float *)((longlong)param_1 + 0x20c);
    *(float *)((longlong)param_1 + 0x20c) = fVar21;
    uVar18 = 0;
    if ((*(float *)(param_1 + 0x41) <= fVar21 && fVar21 != *(float *)(param_1 + 0x41)) &&
       (*(undefined4 *)((longlong)param_1 + 0x20c) = 0, 0 < (int)param_1[0x40])) {
      local_138 = 0;
      uVar17 = uVar15;
      do {
        lVar9 = *plVar14;
        iVar7 = (int)uVar17;
        if (((*(longlong *)(lVar9 + 0x10 + uVar15) == 0) ||
            (lVar11 = FWeakObjectPtr::Get(lVar9 + 8 + uVar15), lVar11 == 0)) ||
           (lVar9 = UObject::FindFunction(lVar11,*(undefined8 *)(lVar9 + 0x10 + uVar15)), lVar9 == 0
           )) {
          iVar6 = (int)param_1[0x40];
          iVar12 = (iVar6 - iVar7) + -1;
          if (0 < iVar12) {
            iVar12 = 1;
          }
          if (iVar12 != 0) {
            param_3 = (longlong)iVar12 * 0x18;
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar14 + (longlong)iVar7 * 0x18),
                       (void *)(*plVar14 + (longlong)(iVar6 - iVar12) * 0x18),param_3);
            iVar6 = (int)param_1[0x40];
          }
          *(int *)(param_1 + 0x40) = iVar6 + -1;
          TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar14);
        }
        else {
          uVar17 = (ulonglong)(iVar7 + 1);
          uVar15 = uVar15 + 0x18;
        }
        plVar13 = local_108[0];
      } while ((int)uVar17 < (int)param_1[0x40]);
    }
    *(float *)(plVar13 + 0x39) = fVar20;
    cVar5 = FUN_142d52a00(plVar13 + 0x3b);
    if (((cVar5 != '\0') && (plVar13[0x36] != 0)) && (*(int *)(plVar13[0x36] + 0x30c) != 0)) {
      uVar8 = FUN_142d52a20(plVar13 + 0x3b);
      uVar8 = FArchive::operator<<(uVar8);
      fVar20 = (float)FUN_142d5fea0(uVar8);
      uVar18 = (uint)((float)*(int *)(plVar13[0x36] + 0x30c) * fVar20);
    }
    uVar2 = *(uint *)(plVar13 + 0x42);
    local_138 = CONCAT44(local_138._4_4_,uVar2);
    if (uVar18 != uVar2) {
      bVar4 = false;
      *(int *)((longlong)plVar13 + 0x1ac) = *(int *)((longlong)plVar13 + 0x1ac) + 1;
      iVar7 = *(int *)((longlong)plVar13 + 0x1ac);
      iVar6 = (int)plVar13[0x34] + -1;
      lVar9 = (longlong)iVar6;
      if (-1 < iVar6) {
        lVar11 = lVar9 << 4;
        bVar4 = false;
        do {
          lVar3 = plVar13[0x33];
          if ((*(int *)(lVar11 + 8 + lVar3) == 0) ||
             (plVar14 = *(longlong **)(lVar11 + lVar3), plVar14 == (longlong *)0x0)) {
LAB_1430df3c6:
            bVar4 = true;
          }
          else {
            param_3 = (ulonglong)uVar2;
            cVar5 = (**(code **)(*plVar14 + 0x40))(plVar14,plVar13,param_3,uVar18);
            if (cVar5 == '\0') goto LAB_1430df3c6;
          }
          lVar11 = lVar11 + -0x10;
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
        iVar7 = *(int *)((longlong)plVar13 + 0x1ac);
      }
      *(int *)((longlong)plVar13 + 0x1ac) = iVar7 + -1;
      if (bVar4) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar13 + 0x33,0);
      }
      *(uint *)(plVar13 + 0x42) = uVar18;
    }
  }
  plVar14 = (longlong *)0x0;
  iVar7 = FUN_14233f450(plVar13);
  if (iVar7 == 3) {
    if (((((*(char *)(plVar13[0x36] + 0x2e0) != '\0') &&
          (*(char *)((longlong)plVar13 + 0x1c2) != '\0')) &&
         (*(char *)((longlong)plVar13 + 0x1c3) == '\0')) &&
        ((iVar7 = FUN_14233f450(plVar13), iVar7 == 3 && (plVar13[0x37] != 0)))) &&
       (plVar13[0x36] != 0)) {
      *(undefined1 *)((longlong)plVar13 + 0x1c2) = 1;
      cVar5 = FUN_1430cf8e0(plVar13);
      if (cVar5 != '\0') {
        *(undefined1 *)((longlong)plVar13 + 0x1c3) = 1;
        cVar5 = (**(code **)(*plVar13 + 0x400))(plVar13);
        if (cVar5 == '\0') {
          if ((*(char *)(plVar13[0x36] + 0x308) == '\0') || (*(int *)(plVar13[0x36] + 0x30c) < 1)) {
            FUN_1430dbb00(plVar13,1,param_3 & 0xffffffffffffff00);
          }
          else {
            FUN_1430dbb00(plVar13,1);
          }
        }
        else {
          *(undefined1 *)((longlong)plVar13 + 0x1c4) = 1;
        }
      }
    }
    if (*(char *)((longlong)plVar13 + 0x1c1) == '\0') {
      if (((*(char *)((longlong)plVar13 + 0x1c4) != '\0') &&
          (cVar5 = (**(code **)(*plVar13 + 0x400))(plVar13), cVar5 == '\0')) &&
         (cVar5 = FUN_1430cf8e0(plVar13), cVar5 != '\0')) {
        FUN_1430dbb00(plVar13,1,0);
      }
      if (*(char *)((longlong)plVar13 + 0x1c1) == '\0') goto LAB_1430df8c1;
    }
    cVar5 = (**(code **)(*plVar13 + 0x3f8))(plVar13);
    if (cVar5 != '\0') {
      if ((plVar13[0x36] != 0) && (*(char *)((longlong)plVar13 + 0x1c1) != '\0')) {
        lVar9 = plVar13[0x24];
        *(undefined1 *)((longlong)plVar13 + 0x1c1) = 0;
        if (lVar9 == 0) {
          lVar9 = FUN_1423407b0(plVar13);
        }
        *(undefined4 *)(plVar13 + 0x3a) = *(undefined4 *)(lVar9 + 0x790);
        (**(code **)(*plVar13 + 0x410))(plVar13);
      }
      goto LAB_1430df8c1;
    }
    cVar5 = (**(code **)(*plVar13 + 0x400))(plVar13);
    if (cVar5 != '\0') {
      *(undefined1 *)((longlong)plVar13 + 0x1c4) = 1;
      if ((plVar13[0x36] != 0) && (*(char *)((longlong)plVar13 + 0x1c1) != '\0')) {
        lVar9 = plVar13[0x24];
        *(undefined1 *)((longlong)plVar13 + 0x1c1) = 0;
        if (lVar9 == 0) {
          lVar9 = FUN_1423407b0(plVar13);
        }
        *(undefined4 *)(plVar13 + 0x3a) = *(undefined4 *)(lVar9 + 0x790);
        (**(code **)(*plVar13 + 0x410))(plVar13);
      }
      goto LAB_1430df8c1;
    }
  }
  if ((*(char *)((longlong)plVar13 + 0x1c1) != '\0') &&
     (*(char *)((longlong)plVar13 + 0x1c4) == '\0')) {
    local_f0 = &local_f8;
    local_e8 = local_108;
    ppuStack_110 = &local_f0;
    local_118 = FUN_1430cf430;
    FUN_1426936b0(local_f8,&local_118);
    cVar5 = FUN_1430dd9e0(plVar13[0x37]);
    lVar9 = 0x38;
    if (cVar5 != '\0') {
      lVar9 = 0x188;
    }
    lVar9 = lVar9 + plVar13[0x36];
    FUN_1430d4ae0(lVar9,&local_138,plVar13[0x37]);
    fVar24 = (float)local_138;
    uVar15 = (ulonglong)local_138 >> 0x20;
    local_e8 = (longlong **)CONCAT44(local_e8._4_4_,local_130);
    uVar8 = FRotationMatrix::MakeFromXZ(local_d8,&local_138,&DAT_1464aa798);
    FMatrix::GetUnitAxis(uVar8,&local_118,3);
    uVar8 = FRuntimeFloatCurve::GetRichCurve(lVar9 + 0x88);
    fVar20 = (float)FRichCurve::Eval(uVar8);
    uVar8 = FRuntimeFloatCurve::GetRichCurve(lVar9 + 8);
    fVar21 = (float)FRichCurve::Eval(uVar8);
    fVar20 = fVar21 * fVar20 * *(float *)(lVar9 + 4);
    fVar21 = local_e8._0_4_ * fVar20;
    if (*(longlong *)(plVar13[0x37] + 0x4d8) != 0) {
      plVar14 = *(longlong **)(plVar13[0x37] + 0x4e0);
    }
    fVar22 = (float)(**(code **)(*plVar14 + 0x10))(plVar14);
    lVar9 = plVar13[0x37];
    *(float *)(lVar9 + 0x4e8) = fVar24 * fVar20 * fVar22 + *(float *)(lVar9 + 0x4e8);
    *(float *)(lVar9 + 0x4f0) = fVar21 * fVar22 + *(float *)(lVar9 + 0x4f0);
    *(float *)(lVar9 + 0x4ec) = (float)uVar15 * fVar20 * fVar22 + *(float *)(lVar9 + 0x4ec);
    *(float *)((longlong)plVar13 + 0x1cc) = param_2 + *(float *)((longlong)plVar13 + 0x1cc);
    if (*(char *)(plVar13[0x36] + 0x314) != '\0') {
      uVar8 = FRuntimeFloatCurve::GetRichCurve(plVar13[0x36] + 0x318);
      local_128 = FRichCurve::Eval(uVar8);
    }
    *(char *)((longlong)plVar13 + 0x1c5) = cVar5;
  }
LAB_1430df8c1:
  uVar23 = FMath::FInterpConstantTo((int)plVar13[0x3e]);
  *(undefined4 *)(plVar13 + 0x3e) = uVar23;
  return;
}



// FUNCTION 1430df920 FUN_1430df920 body=2610 status=ok
// SIG undefined FUN_1430df920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430df920(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  undefined1 in_XMM5 [16];
  undefined1 auVar22 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  uint local_1c0;
  undefined4 *local_1b8;
  float local_1a8 [2];
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined8 *local_180;
  int local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_150;
  float local_14c;
  float local_148;
  longlong local_140;
  longlong *local_138;
  float local_128;
  undefined1 local_120 [16];
  longlong local_110;
  undefined1 *local_108;
  float *local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  longlong *local_d8;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  uint uStack_9c;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_142357eb0();
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (lVar7 == 0) {
    lVar7 = FUN_1423407b0(param_1);
  }
  lVar8 = (**(code **)(**(longlong **)(param_1 + 0x220) + 0x838))();
  lVar13 = *(longlong *)(param_1 + 0x220);
  if ((((lVar13 != 0) && (lVar8 != 0)) && (lVar7 != 0)) &&
     (((*(longlong *)(lVar13 + 0x4d8) != 0 && (*(longlong *)(lVar13 + 0x4e0) != 0)) &&
      ((lVar7 = (**(code **)(**(longlong **)(lVar13 + 0x4e0) + 0x28))(), lVar7 != 0 &&
       (*(longlong *)(lVar8 + 0x180) != 0)))))) {
    uVar9 = 0;
    iVar14 = 0;
    if (*(char *)(*(longlong *)(param_1 + 0x118) + 0x128) == '\x03') {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x220) + 0x168);
      if (lVar7 == 0) {
        local_b8 = 0;
        uStack_b4 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        local_a8 = (float)(_DAT_146b4a320 & _DAT_146b4a330);
        fStack_a4 = (float)(uRam0000000146b4a324 & uRam0000000146b4a334);
        fStack_a0 = (float)(uRam0000000146b4a328 & uRam0000000146b4a338);
        uStack_9c = (uint)fRam0000000146b4a32c & uRam0000000146b4a33c;
        local_c8 = 0.0;
        fStack_c4 = 0.0;
        fStack_c0 = 0.0;
        fStack_bc = fRam0000000146b4a32c;
      }
      else {
        local_c8 = *(float *)(lVar7 + 0x210);
        fStack_c4 = *(float *)(lVar7 + 0x214);
        fStack_c0 = *(float *)(lVar7 + 0x218);
        local_b8 = *(undefined4 *)(lVar7 + 0x220);
        uStack_b4 = *(undefined4 *)(lVar7 + 0x224);
        uStack_b0 = *(undefined4 *)(lVar7 + 0x228);
        uStack_ac = *(undefined4 *)(lVar7 + 0x22c);
        local_a8 = *(float *)(lVar7 + 0x230);
        fStack_a4 = *(float *)(lVar7 + 0x234);
        fStack_a0 = *(float *)(lVar7 + 0x238);
        uStack_9c = *(uint *)(lVar7 + 0x23c);
        fStack_bc = *(float *)(lVar7 + 0x21c);
      }
      fVar25 = *(float *)(param_1 + 0x244);
      if (0.0 < fVar25) {
        lVar7 = *(longlong *)(param_1 + 0x120);
        if (lVar7 == 0) {
          lVar7 = FUN_1423407b0(param_1);
          fVar25 = *(float *)(param_1 + 0x244);
        }
        local_1a8[0] = (*(float *)(lVar7 + 0x790) - fVar25) / *(float *)(param_1 + 0x1bc);
        if (1.0 <= local_1a8[0]) {
          local_1a8[0] = 1.0;
        }
        FSplineCurves::GetSplineLength(param_1 + 0x248);
        local_198 = 0;
        uVar16 = FInterpCurve<float>::Eval(param_1 + 0x290);
        FInterpCurve<FVector>::Eval(param_1 + 0x248,local_120,uVar16,&DAT_1468b5d90);
        local_108 = local_120;
        local_100 = local_1a8;
        local_110 = param_1;
        cVar5 = FUN_1430c9540(&local_110);
        if ((ABS(local_1a8[0] - 1.0) <= 1e-08) || (cVar5 == '\0')) {
          *(undefined4 *)(param_1 + 0x244) = 0xbf800000;
          if (*(char *)(param_1 + 0x1c1) != '\0') {
            lVar7 = *(longlong *)(param_1 + 0x220);
            lVar13 = *(longlong *)(lVar7 + 0x168);
            if (lVar13 == 0) {
              fVar21 = (float)(_DAT_146b4a320 & _DAT_146b4a330);
              fVar23 = (float)(uRam0000000146b4a324 & uRam0000000146b4a334);
              fVar24 = (float)(uRam0000000146b4a328 & uRam0000000146b4a338);
              fVar26 = (float)((uint)fRam0000000146b4a32c & uRam0000000146b4a33c);
              fVar19 = 0.0;
              fVar20 = 0.0;
              fVar25 = 0.0;
              fVar27 = fRam0000000146b4a32c;
            }
            else {
              fVar19 = *(float *)(lVar13 + 0x210);
              fVar20 = *(float *)(lVar13 + 0x214);
              fVar25 = *(float *)(lVar13 + 0x218);
              fVar21 = *(float *)(lVar13 + 0x230);
              fVar23 = *(float *)(lVar13 + 0x234);
              fVar24 = *(float *)(lVar13 + 0x238);
              fVar26 = *(float *)(lVar13 + 0x23c);
              fVar27 = *(float *)(lVar13 + 0x21c);
            }
            fVar21 = *(float *)(param_1 + 0x2b4) * fVar21;
            fVar23 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x2b4) >> 0x20) * fVar23;
            fVar24 = *(float *)(param_1 + 700) * fVar24;
            fVar26 = fVar26 * 0.0;
            fVar28 = fVar24 * fVar20 - fVar23 * fVar25;
            fVar29 = fVar21 * fVar25 - fVar24 * fVar19;
            fVar17 = fVar23 * fVar19 - fVar21 * fVar20;
            fVar18 = fVar26 * fVar27 - fVar26 * fVar27;
            fVar28 = fVar28 + fVar28;
            fVar29 = fVar29 + fVar29;
            fVar17 = fVar17 + fVar17;
            fVar18 = fVar18 + fVar18;
            local_150 = (fVar17 * fVar20 - fVar29 * fVar25) + fVar27 * fVar28 + fVar21;
            local_14c = (fVar28 * fVar25 - fVar17 * fVar19) + fVar27 * fVar29 + fVar23;
            local_148 = (fVar29 * fVar19 - fVar28 * fVar20) + fVar27 * fVar17 + fVar24;
            fStack_dc = (fVar18 * fVar27 - fVar18 * fVar27) + fVar27 * fVar18 + fVar26;
            local_e8 = local_150;
            fStack_e4 = local_14c;
            fStack_e0 = local_148;
            if ((*(longlong *)(lVar7 + 0x4d8) != 0) && (*(longlong *)(lVar7 + 0x4e0) != 0)) {
              uVar9 = (**(code **)(**(longlong **)(lVar7 + 0x4e0) + 0x28))();
            }
            FUN_1426a9420(uVar9,&local_150,0);
          }
          FUN_1430da500(&local_140,*(undefined8 *)(param_1 + 0x220),*(undefined8 *)(param_1 + 0x2c8)
                        ,*(undefined4 *)(param_1 + 0x2d0));
          if (local_140 != 0) {
            FWeakObjectPtr::operator=(&local_1a0,param_1);
            uVar16 = (undefined4)local_1a0;
            uVar4 = local_1a0._4_4_;
            plVar10 = (longlong *)FMemory::Realloc(0,0x20);
            local_d8 = plVar10;
            if (plVar10 != (longlong *)0x0) {
              *plVar10 = (longlong)&PTR_GetPoolName_145a9fb58;
              *(undefined4 *)(plVar10 + 1) = uVar16;
              *(undefined4 *)((longlong)plVar10 + 0xc) = uVar4;
              lVar7 = FDelegateHandle::GenerateNewID();
              plVar10[3] = lVar7;
              *plVar10 = (longlong)&PTR_GetPoolName_145a9fba0;
              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(local_140 + 0x58,1);
              (**(code **)(*plVar10 + 0x20))(plVar10,&local_190);
              iVar2 = *(int *)(local_140 + 0x60);
              *(int *)(local_140 + 0x60) = iVar2 + 1;
              if (*(int *)(local_140 + 100) < iVar2 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_140 + 0x58,iVar2);
              }
              puVar15 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(local_140 + 0x58));
              *puVar15 = plVar10;
              *(undefined4 *)(puVar15 + 1) = 2;
            }
          }
          if (local_138 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_138 + 1;
            lVar7 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_138)(local_138);
              LOCK();
              piVar1 = (int *)((longlong)local_138 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_138 + 8))(local_138,1);
              }
            }
          }
          FUN_1430e5d60(param_1);
        }
      }
      else if (*(char *)(param_1 + 0x240) != '\0') {
        local_1c0 = local_1c0 & 0xffffff00;
        local_1c8 = 1;
        FUN_1430cfdf0(param_1,&local_180,&local_c8,*(undefined4 *)(param_1 + 0x1b8));
        plVar10 = (longlong *)(param_1 + 0x248);
        *(undefined4 *)(param_1 + 0x250) = 0;
        if (*(int *)(param_1 + 0x254) != 0) {
          TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(plVar10,0);
        }
        *(undefined4 *)(param_1 + 0x268) = 0;
        if (*(int *)(param_1 + 0x26c) != 0) {
          TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1 + 0x260,0);
        }
        *(undefined4 *)(param_1 + 0x280) = 0;
        if (*(int *)(param_1 + 0x284) != 0) {
          TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(param_1 + 0x278,0);
        }
        local_1a0 = (undefined8 *)((longlong)local_178 * 0xc + (longlong)local_180);
        if (local_180 != local_1a0) {
          local_190 = 0x3f800000;
          uStack_18c = 0x3f800000;
          local_188 = 0x3f800000;
          puVar15 = local_180;
          do {
            iVar2 = *(int *)(param_1 + 0x250);
            if (iVar2 == 0) {
              fVar25 = 0.0;
            }
            else {
              fVar25 = *(float *)((longlong)iVar2 * 0x2c + -0x2c + *plVar10) + 1.0;
            }
            *(int *)(param_1 + 0x250) = iVar2 + 1;
            if (*(int *)(param_1 + 0x254) < iVar2 + 1) {
              TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow
                        (plVar10,iVar2);
            }
            pfVar12 = (float *)((longlong)iVar2 * 0x2c + *plVar10);
            *pfVar12 = fVar25;
            *(undefined8 *)(pfVar12 + 1) = *puVar15;
            pfVar12[3] = *(float *)(puVar15 + 1);
            *(undefined8 *)(pfVar12 + 4) = _DAT_1468b5d90;
            pfVar12[6] = DAT_1468b5d98;
            *(undefined8 *)(pfVar12 + 7) = _DAT_1468b5d90;
            pfVar12[9] = DAT_1468b5d98;
            *(undefined1 *)(pfVar12 + 10) = 1;
            iVar2 = *(int *)(param_1 + 0x268);
            *(int *)(param_1 + 0x268) = iVar2 + 1;
            if (*(int *)(param_1 + 0x26c) < iVar2 + 1) {
              TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 0x260,iVar2);
            }
            pfVar12 = (float *)((longlong)iVar2 * 0x50 + *(longlong *)(param_1 + 0x260));
            *pfVar12 = fVar25;
            pfVar12[4] = DAT_1464aa810;
            pfVar12[5] = DAT_1464aa814;
            pfVar12[6] = DAT_1464aa818;
            pfVar12[7] = DAT_1464aa81c;
            pfVar12[8] = DAT_1464aa810;
            pfVar12[9] = DAT_1464aa814;
            pfVar12[10] = DAT_1464aa818;
            pfVar12[0xb] = DAT_1464aa81c;
            pfVar12[0xc] = DAT_1464aa810;
            pfVar12[0xd] = DAT_1464aa814;
            pfVar12[0xe] = DAT_1464aa818;
            pfVar12[0xf] = DAT_1464aa81c;
            *(undefined1 *)(pfVar12 + 0x10) = 1;
            iVar2 = *(int *)(param_1 + 0x280);
            *(int *)(param_1 + 0x280) = iVar2 + 1;
            if (*(int *)(param_1 + 0x284) < iVar2 + 1) {
              TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x278,iVar2);
            }
            puVar15 = (undefined8 *)((longlong)puVar15 + 0xc);
            pfVar12 = (float *)((longlong)iVar2 * 0x2c + *(longlong *)(param_1 + 0x278));
            pfVar12[1] = 1.0;
            pfVar12[2] = 1.0;
            pfVar12[3] = 1.0;
            *pfVar12 = fVar25;
            *(undefined8 *)(pfVar12 + 4) = _DAT_1468b5d90;
            pfVar12[6] = DAT_1468b5d98;
            *(undefined8 *)(pfVar12 + 7) = _DAT_1468b5d90;
            pfVar12[9] = DAT_1468b5d98;
            *(undefined1 *)(pfVar12 + 10) = 1;
          } while (puVar15 != local_1a0);
        }
        puVar15 = local_180;
        local_1b8 = &local_170;
        local_170 = 0x3f800000;
        local_1c0 = 0;
        local_1c8 = 0;
        local_16c = 0x3f800000;
        local_168 = 0x3f800000;
        FSplineCurves::UpdateSpline(plVar10,0,0,10);
        lVar7 = *(longlong *)(param_1 + 0x120);
        *(undefined1 *)(param_1 + 0x240) = 0;
        if (lVar7 == 0) {
          lVar7 = FUN_1423407b0(param_1);
        }
        *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(lVar7 + 0x790);
        FUN_1430da500(local_f8,*(undefined8 *)(param_1 + 0x220),*(undefined8 *)(param_1 + 0x2c0),
                      *(undefined4 *)(param_1 + 0x1bc));
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_f0 + 1;
          lVar7 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          puVar15 = local_180;
          if ((int)lVar7 == 1) {
            (**(code **)*local_f0)(local_f0);
            LOCK();
            piVar1 = (int *)((longlong)local_f0 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            puVar15 = local_180;
            if (iVar2 == 1) {
              (**(code **)(*local_f0 + 8))(local_f0,1);
              puVar15 = local_180;
            }
          }
        }
        FUN_1430e5de0(param_1);
        lVar7 = *(longlong *)(param_1 + 0x220);
        if ((*(longlong *)(lVar7 + 0x4d8) != 0) && (*(longlong *)(lVar7 + 0x4e0) != 0)) {
          uVar9 = (**(code **)(**(longlong **)(lVar7 + 0x4e0) + 0x28))();
        }
        FUN_142699400(uVar9,&local_160);
        auVar22._4_4_ = fStack_a4;
        auVar22._0_4_ = local_a8;
        auVar22._8_4_ = fStack_a0;
        auVar22._12_4_ = uStack_9c;
        fVar26 = local_c8 * _DAT_146b4a410;
        fVar27 = fStack_c4 * fRam0000000146b4a414;
        fVar28 = fStack_c0 * fRam0000000146b4a418;
        fVar29 = fStack_bc * fRam0000000146b4a41c;
        auVar22 = rcpps(in_XMM5,auVar22);
        fVar25 = local_158 * fVar27 - local_15c * fVar28;
        fVar19 = local_160 * fVar28 - local_158 * fVar26;
        fVar20 = local_15c * fVar26 - local_160 * fVar27;
        fVar21 = auVar22._0_4_;
        fVar23 = auVar22._4_4_;
        fVar24 = auVar22._8_4_;
        fVar25 = fVar25 + fVar25;
        fVar19 = fVar19 + fVar19;
        fVar20 = fVar20 + fVar20;
        fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * local_a8;
        fVar23 = (fVar23 + fVar23) - fVar23 * fVar23 * fStack_a4;
        fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * fStack_a0;
        fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * local_a8;
        fVar23 = (fVar23 + fVar23) - fVar23 * fVar23 * fStack_a4;
        fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * fStack_a0;
        local_128 = ((fVar19 * fVar26 - fVar25 * fVar27) + fVar29 * fVar20 + local_158) *
                    (float)(-(uint)((float)((uint)fStack_a0 & uRam0000000146b4a3e8) <=
                                   fRam0000000146b4a408) & (uint)fVar24 ^ (uint)fVar24);
        *(ulonglong *)(param_1 + 0x2b4) =
             CONCAT44(((fVar25 * fVar28 - fVar20 * fVar26) + fVar29 * fVar19 + local_15c) *
                      (float)(-(uint)((float)((uint)fStack_a4 & uRam0000000146b4a3e4) <=
                                     fRam0000000146b4a404) & (uint)fVar23 ^ (uint)fVar23),
                      ((fVar20 * fVar27 - fVar19 * fVar28) + fVar29 * fVar25 + local_160) *
                      (float)(-(uint)((float)((uint)local_a8 & _DAT_146b4a3e0) <= _DAT_146b4a400) &
                              (uint)fVar21 ^ (uint)fVar21));
        *(float *)(param_1 + 700) = local_128;
        if (puVar15 != (undefined8 *)0x0) {
          FMemory::Free(puVar15);
        }
      }
    }
    cVar5 = FUN_142d52a00(param_1 + 0x228);
    if (cVar5 != '\0') {
      uVar9 = FUN_142d52a20(param_1 + 0x228);
      uVar9 = FArchive::operator<<(uVar9);
      fVar25 = (float)FUN_142d61c30(uVar9);
      iVar14 = *(int *)(param_1 + 0x1d8);
      uVar9 = FUN_142d52a20(param_1 + 0x228);
      uVar9 = FArchive::operator<<(uVar9);
      fVar19 = (float)FUN_142d5fed0(uVar9);
      iVar14 = (int)(fVar19 / (fVar25 / (float)iVar14));
    }
    iVar2 = *(int *)(param_1 + 0x2d4);
    if (iVar14 != iVar2) {
      bVar3 = false;
      *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + 1;
      iVar11 = *(int *)(param_1 + 500);
      iVar6 = *(int *)(param_1 + 0x1e8) + -1;
      lVar7 = (longlong)iVar6;
      if (-1 < iVar6) {
        lVar13 = lVar7 << 4;
        bVar3 = false;
        do {
          lVar8 = *(longlong *)(param_1 + 0x1e0);
          if (((*(int *)(lVar13 + 8 + lVar8) == 0) ||
              (plVar10 = *(longlong **)(lVar13 + lVar8), plVar10 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar10 + 0x40))(plVar10,param_1,iVar2,iVar14), cVar5 == '\0'))
          {
            bVar3 = true;
          }
          lVar13 = lVar13 + -0x10;
          lVar7 = lVar7 + -1;
        } while (-1 < lVar7);
        iVar11 = *(int *)(param_1 + 500);
      }
      *(int *)(param_1 + 500) = iVar11 + -1;
      if (bVar3) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                  ((longlong *)(param_1 + 0x1e0),0);
      }
      *(int *)(param_1 + 0x2d4) = iVar14;
    }
  }
  return;
}



// FUNCTION 1430e0360 FUN_1430e0360 body=61 status=ok
// SIG undefined FUN_1430e0360(void)

void FUN_1430e0360(longlong param_1)

{
  float fVar1;
  
  FUN_142357eb0();
  if (*(longlong *)(param_1 + 0x778) != 0) {
    fVar1 = (float)FUN_140963880();
    FUN_1430cd480(param_1,fVar1 * *(float *)(param_1 + 0x740));
    return;
  }
  return;
}



// FUNCTION 1430e03a0 FUN_1430e03a0 body=670 status=ok
// SIG undefined FUN_1430e03a0(void)

void FUN_1430e03a0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  longlong *local_res8;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_64;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  
  FUN_142357eb0();
  if ((*(longlong *)(param_1 + 0x528) != 0) && (*(longlong *)(param_1 + 0x530) != 0)) {
    cVar3 = FUN_1426e4b00(param_1);
    if (cVar3 != '\0') {
      fVar8 = (float)ACharacter::GetAnimRootMotionTranslationScale(*(undefined8 *)(param_1 + 0x530))
      ;
      if (1e-08 < ABS(fVar8)) {
        FUN_1430cd820(param_1,0x3f800000);
        return;
      }
      FUN_1430cd820(param_1,0);
      return;
    }
    if (*(longlong *)(param_1 + 0x520) == 0) {
      if (*(char *)(param_1 + 0x4d0) != '\0') {
        local_58 = *(longlong *)(param_1 + 0x120);
        if (local_58 == 0) {
          local_58 = FUN_1423407b0(param_1);
        }
        local_50 = &local_58;
        local_48 = FUN_14073d760(&local_58,DAT_146b4a460);
        plVar1 = local_50;
        local_40 = &local_58;
        local_38 = 0;
        puVar6 = (undefined8 *)FUN_14073d760(local_50,local_48);
        puVar7 = (undefined8 *)FUN_14073d760(local_40,local_38);
        for (; puVar6 != puVar7; puVar6 = (undefined8 *)FUN_14073d760(plVar1,*puVar6)) {
          uVar4 = puVar6[2];
          cVar3 = FUN_1430cf4e0(param_1,uVar4);
          if (cVar3 != '\0') {
            FUN_1430ce7a0(param_1,uVar4);
            return;
          }
        }
      }
    }
    else {
      cVar3 = FUN_1430cda50(param_1,param_2);
      if (cVar3 != '\0') {
        local_res8 = *(longlong **)(param_1 + 0x528);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x4e8,&local_res8);
        plVar1 = *(longlong **)(param_1 + 0x528);
        plVar2 = *(longlong **)(param_1 + 0x520);
        uVar4 = FUN_1430e3810();
        lVar5 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
        plVar2[0xef] = lVar5;
        local_res8 = plVar1;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (plVar2 + 0xeb,&local_res8);
        (**(code **)(*plVar2 + 0x358))(plVar2,1);
        local_res8 = (longlong *)0x0;
        local_78 = 0;
        FUN_1426eaa80(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x520) + 0x718),0,
                      *(undefined8 *)(*(longlong *)(param_1 + 0x530) + 0x180),0);
        local_78 = 0xbf80000000000000;
        local_70 = 0;
        local_68 = 0xbf800000;
        local_64 = 0;
        UMediumSkipWidget::CanWorkWhenGamePaused(param_1,0,&local_68,&local_78);
      }
    }
  }
  return;
}



// FUNCTION 1430e0640 FUN_1430e0640 body=2919 status=ok
// SIG undefined FUN_1430e0640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430e0640(longlong param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  float *pfVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  uint uVar34;
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  undefined8 *puStack_140;
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 local_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined1 *local_108;
  longlong *plStack_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  
  local_108 = (undefined1 *)CONCAT44(local_108._4_4_,param_2);
  FUN_142357eb0();
  plVar17 = *(longlong **)(param_1 + 0x270);
  if (plVar17 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar17 + 0x738))(plVar17,&local_e8);
  lVar18 = *(longlong *)(param_1 + 0x118);
  plVar17 = (longlong *)0x0;
  plVar16 = plVar17;
  if (lVar18 != 0) {
    lVar11 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      plVar16 = *(longlong **)(lVar18 + 0x490);
    }
  }
  if ((plVar16 == (longlong *)0x0) ||
     (cVar9 = (**(code **)(*plVar16 + 0x768))(plVar16), cVar9 == '\0')) {
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x1a8);
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x1a4);
    FUN_1430cc8e0(param_1,*(undefined1 *)(param_1 + 0x1a0));
    local_e8 = *(undefined8 *)(param_1 + 0x1ac);
    local_e0 = *(float *)(param_1 + 0x1b4);
  }
  else if (((*(byte *)(plVar16 + 0x83) & 1) == 0) ||
          (*(char *)(param_1 + 0x280) != *(char *)(param_1 + 0x1b8))) {
    uVar12 = *(ulonglong *)(param_1 + 0x120);
    if (uVar12 == 0) {
      uVar12 = FUN_1423407b0(param_1);
    }
    cVar9 = *(char *)(param_1 + 0x280);
    fVar30 = 0.0;
    fVar19 = *(float *)(uVar12 + 0x790);
    fStack_120 = 0.0;
    uVar8 = CONCAT71((int7)(local_128 >> 8),cVar9);
    local_128 = uVar8 & 0xffffffff;
    if (cVar9 != '\0') {
      fVar30 = *(float *)(param_1 + 0x198);
      fStack_120 = *(float *)(param_1 + 0x19c);
      uVar12 = (ulonglong)(uint)local_e0;
      local_128._0_4_ = (float)uVar8;
      local_128 = CONCAT44(fVar30,(float)local_128);
      fStack_11c = (float)local_e8;
      fStack_118 = (float)((ulonglong)local_e8 >> 0x20);
      fStack_114 = local_e0;
    }
    if (((*(char *)(param_1 + 0x1b8) == cVar9) &&
        (ABS(*(float *)(param_1 + 0x1bc) - fVar30) <= 0.005)) &&
       (ABS(*(float *)(param_1 + 0x1c0) - fStack_120) <= 0.005)) {
      fVar26 = *(float *)(param_1 + 0x1c4) - fStack_11c;
      fVar27 = *(float *)(param_1 + 0x1c8) - fStack_118;
      fVar28 = *(float *)(param_1 + 0x1cc) - fStack_114;
      local_158 = CONCAT44(local_158._4_4_,0x3e4ccccd);
      fVar20 = (float)DAT_146b4a310;
      fVar3 = DAT_146b4a310._4_4_;
      fVar4 = DAT_146b4a310._8_4_;
      fVar5 = DAT_146b4a310._12_4_;
      auVar21._4_4_ = fVar27;
      auVar21._0_4_ = fVar26;
      auVar21._8_4_ = fVar28;
      auVar21._12_4_ = 0;
      auVar21 = divps(auVar21,_DAT_146b4a310);
      fVar26 = fVar26 - (float)(int)auVar21._0_4_ * fVar20;
      fVar27 = fVar27 - (float)(int)auVar21._4_4_ * fVar3;
      fVar28 = fVar28 - (float)(int)auVar21._8_4_ * fVar4;
      fVar29 = 0.0 - (float)(int)auVar21._12_4_ * fVar5;
      fVar26 = (float)(((uint)(fVar26 + fVar20) ^ (uint)fVar26) & -(uint)(0.0 <= fVar26) ^
                      (uint)(fVar26 + fVar20));
      fVar27 = (float)(((uint)(fVar27 + fVar3) ^ (uint)fVar27) & -(uint)(0.0 <= fVar27) ^
                      (uint)(fVar27 + fVar3));
      fVar28 = (float)(((uint)(fVar28 + fVar4) ^ (uint)fVar28) & -(uint)(0.0 <= fVar28) ^
                      (uint)(fVar28 + fVar4));
      fVar29 = (float)(((uint)(fVar29 + fVar5) ^ (uint)fVar29) & -(uint)(0.0 <= fVar29) ^
                      (uint)(fVar29 + fVar5));
      auVar22._4_4_ =
           -(uint)(0.2 < (float)((((uint)(fVar27 - fVar3) ^ (uint)fVar27) &
                                  -(uint)(fRam0000000146b4a304 < fVar27) ^ (uint)fVar27) &
                                uRam0000000146b4a3e4));
      auVar22._0_4_ =
           -(uint)(0.2 < (float)((((uint)(fVar26 - fVar20) ^ (uint)fVar26) &
                                  -(uint)(_DAT_146b4a300 < fVar26) ^ (uint)fVar26) & _DAT_146b4a3e0)
                  );
      auVar22._8_4_ =
           -(uint)(0.2 < (float)((((uint)(fVar28 - fVar4) ^ (uint)fVar28) &
                                  -(uint)(fRam0000000146b4a308 < fVar28) ^ (uint)fVar28) &
                                uRam0000000146b4a3e8));
      auVar22._12_4_ =
           -(uint)(0.2 < (float)((((uint)(fVar29 - fVar5) ^ (uint)fVar29) &
                                  -(uint)(fRam0000000146b4a30c < fVar29) ^ (uint)fVar29) &
                                uRam0000000146b4a3ec));
      iVar10 = movmskps((int)uVar12,auVar22);
      if (iVar10 == 0) {
        if ((cVar9 == '\0') || (fVar19 - *(float *)(param_1 + 0x1d0) <= 0.2)) goto LAB_1430e09ec;
        if ((*(char *)(param_1 + 0x1b8) == cVar9) &&
           ((*(float *)(param_1 + 0x1bc) == fVar30 && (*(float *)(param_1 + 0x1c0) == fStack_120))))
        {
          if ((*(float *)(param_1 + 0x1c4) == fStack_11c) &&
             ((*(float *)(param_1 + 0x1c8) == fStack_118 &&
              (*(float *)(param_1 + 0x1cc) == fStack_114)))) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          if (!bVar7) goto LAB_1430e093f;
          bVar7 = true;
        }
        else {
LAB_1430e093f:
          bVar7 = false;
        }
        if (bVar7) goto LAB_1430e09ec;
      }
    }
    *(ulonglong *)(param_1 + 0x1b8) = local_128;
    *(ulonglong *)(param_1 + 0x1c0) = CONCAT44(fStack_11c,fStack_120);
    *(ulonglong *)(param_1 + 0x1c8) = CONCAT44(fStack_114,fStack_118);
    fStack_120 = *(float *)(param_1 + 0x1cc);
    local_128 = *(ulonglong *)(param_1 + 0x1c4);
    *(float *)(param_1 + 0x1d0) = fVar19;
    FUN_1430e5fc0(param_1,*(undefined1 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1bc),
                  *(undefined4 *)(param_1 + 0x1c0),&local_128);
  }
LAB_1430e09ec:
  lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x270) + 0x4d8);
  if ((lVar18 != 0) &&
     (plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x4e0), plVar16 != (longlong *)0x0))
  {
    if (lVar18 == 0) {
      plVar16 = plVar17;
    }
    cVar9 = (**(code **)(*plVar16 + 0x48))();
    if (cVar9 != '\0') {
      return;
    }
  }
  if (*(char *)(param_1 + 0x280) == '\0') {
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 0x270) + 0x308))(*(longlong **)(param_1 + 0x270),&local_f8)
  ;
  if (*(longlong *)(*(longlong *)(param_1 + 0x270) + 0x4d8) != 0) {
    plVar17 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x4e0);
  }
  fVar19 = (float)(**(code **)(*plVar17 + 0x10))();
  lVar18 = *(longlong *)(param_1 + 0x270);
  if (*(longlong *)(lVar18 + 0x168) == 0) {
    local_130 = (undefined8 *)CONCAT44(local_130._4_4_,DAT_1464aa7c0);
    puVar13 = &local_138;
    local_138 = DAT_1464aa7b8;
  }
  else {
    puVar13 = (undefined8 *)FUN_14238d380(*(longlong *)(lVar18 + 0x168),&local_138);
    lVar18 = *(longlong *)(param_1 + 0x270);
  }
  local_128 = *puVar13;
  fStack_120 = *(float *)(puVar13 + 1);
  if (*(longlong *)(lVar18 + 0x168) == 0) {
    puStack_140 = (undefined8 *)CONCAT44(puStack_140._4_4_,DAT_1464aa7b0);
    puVar13 = &local_148;
    local_148 = (code *)DAT_1464aa7a8;
  }
  else {
    puVar13 = (undefined8 *)FUN_142369f10(*(longlong *)(lVar18 + 0x168),&local_148);
    lVar18 = *(longlong *)(param_1 + 0x270);
  }
  local_138 = *puVar13;
  local_130 = (undefined8 *)CONCAT44(local_130._4_4_,*(undefined4 *)(puVar13 + 1));
  if (*(longlong *)(lVar18 + 0x168) == 0) {
    local_150 = (float)DAT_1464aa7a0;
    puVar13 = &local_158;
    local_158 = DAT_1464aa798;
  }
  else {
    puVar13 = (undefined8 *)FUN_14238db80(*(longlong *)(lVar18 + 0x168),&local_158);
    lVar18 = *(longlong *)(param_1 + 0x270);
  }
  local_148 = (code *)*puVar13;
  lVar18 = *(longlong *)(lVar18 + 0x4d8);
  puStack_140 = (undefined8 *)CONCAT44(puStack_140._4_4_,*(undefined4 *)(puVar13 + 1));
  if (lVar18 != 0) {
    lVar11 = FUN_1430e3810();
    if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      fVar30 = *(float *)(lVar18 + 0xcd4);
      goto LAB_1430e0bae;
    }
  }
  fVar30 = 1.0;
LAB_1430e0bae:
  fVar3 = (float)local_148;
  fVar4 = local_148._4_4_;
  fVar5 = puStack_140._0_4_;
  fVar26 = (float)local_148 * local_f8 + local_148._4_4_ * local_f4 + local_f0 * puStack_140._0_4_;
  fVar27 = local_f8 - (float)local_148 * fVar26;
  fVar28 = local_f4 - local_148._4_4_ * fVar26;
  fVar20 = *(float *)(param_1 + 0x1d4);
  fVar26 = local_f0 - puStack_140._0_4_ * fVar26;
  uVar14 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x1d8);
  fVar20 = (float)FRichCurve::Eval(uVar14,SQRT(fVar28 * fVar28 + fVar27 * fVar27 + fVar26 * fVar26)
                                          * (1.0 / fVar20),0);
  local_158._0_4_ = *(float *)(param_1 + 0x19c);
  local_158._4_4_ = *(float *)(param_1 + 0x198);
  fVar26 = local_158._4_4_ * local_158._4_4_ + (float)local_158 * (float)local_158;
  if (1.0 <= fVar26) {
    if (fVar26 <= 1e-08) {
      local_158._0_4_ = 0.0;
      local_158._4_4_ = 0.0;
    }
    else {
      auVar21 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
      fVar27 = auVar21._0_4_;
      fVar27 = fVar27 + fVar27 * (0.5 - fVar26 * 0.5 * fVar27 * fVar27);
      fVar27 = fVar27 + fVar27 * (0.5 - fVar26 * 0.5 * fVar27 * fVar27);
      local_158._0_4_ = (float)local_158 * fVar27;
      local_158._4_4_ = local_158._4_4_ * fVar27;
    }
  }
  if (1e-08 < SQRT(local_158._4_4_ * local_158._4_4_ + (float)local_158 * (float)local_158)) {
    fVar26 = *(float *)(param_1 + 0x250);
  }
  else {
    fVar26 = *(float *)(param_1 + 0x254);
  }
  lVar18 = *(longlong *)(param_1 + 0x270);
  fVar27 = (float)local_158 * fVar20 * fVar30 * fVar19;
  fVar20 = local_158._4_4_ * fVar20 * fVar30 * fVar19;
  fVar30 = fStack_120 * fVar20 + local_130._0_4_ * fVar27 + *(float *)(lVar18 + 0x4f0);
  auVar21 = ZEXT416((uint)fVar30);
  *(float *)(lVar18 + 0x4f0) = fVar30;
  *(float *)(lVar18 + 0x4e8) =
       (float)local_128 * fVar20 + (float)local_138 * fVar27 + -(fVar26 * fVar19) * local_f8 +
       *(float *)(lVar18 + 0x4e8);
  *(float *)(lVar18 + 0x4ec) =
       local_128._4_4_ * fVar20 + local_138._4_4_ * fVar27 + -(fVar26 * fVar19) * local_f4 +
       *(float *)(lVar18 + 0x4ec);
  if ((*(char *)(param_1 + 0x264) != '\0') && (*(longlong *)(param_1 + 0x278) != 0)) {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x270) + 0x168);
    if (lVar18 == 0) {
      fVar30 = (float)(_DAT_146b4a320 & _DAT_146b4a330);
      fVar20 = (float)(uRam0000000146b4a324 & uRam0000000146b4a334);
      fVar26 = (float)(uRam0000000146b4a328 & uRam0000000146b4a338);
      uVar34 = (uint)fRam0000000146b4a32c & uRam0000000146b4a33c;
      fVar27 = 0.0;
      fVar28 = 0.0;
      fVar19 = 0.0;
      fVar29 = fRam0000000146b4a32c;
    }
    else {
      fVar30 = *(float *)(lVar18 + 0x230);
      fVar20 = *(float *)(lVar18 + 0x234);
      fVar26 = *(float *)(lVar18 + 0x238);
      uVar34 = *(uint *)(lVar18 + 0x23c);
      fVar27 = *(float *)(lVar18 + 0x210);
      fVar28 = *(float *)(lVar18 + 0x214);
      fVar19 = *(float *)(lVar18 + 0x218);
      fVar29 = *(float *)(lVar18 + 0x21c);
    }
    pfVar15 = (float *)FRotator::Vector(&local_e8,&local_138);
    fVar27 = fVar27 * _DAT_146b4a410;
    fVar28 = fVar28 * fRam0000000146b4a414;
    fVar19 = fVar19 * fRam0000000146b4a418;
    fVar29 = fVar29 * fRam0000000146b4a41c;
    auVar6._4_4_ = fVar20;
    auVar6._0_4_ = fVar30;
    auVar6._8_4_ = fVar26;
    auVar6._12_4_ = uVar34;
    auVar21 = rcpps(auVar21,auVar6);
    fVar1 = pfVar15[2];
    fVar2 = *pfVar15;
    fVar23 = fVar1 * fVar28 - (float)((ulonglong)*(undefined8 *)pfVar15 >> 0x20) * fVar19;
    fVar24 = fVar2 * fVar19 - fVar1 * fVar27;
    fVar25 = pfVar15[1] * fVar27 - fVar2 * fVar28;
    fVar31 = auVar21._0_4_;
    fVar32 = auVar21._4_4_;
    fVar33 = auVar21._8_4_;
    fVar23 = fVar23 + fVar23;
    fVar24 = fVar24 + fVar24;
    fVar25 = fVar25 + fVar25;
    fVar31 = (fVar31 + fVar31) - fVar31 * fVar31 * fVar30;
    fVar32 = (fVar32 + fVar32) - fVar32 * fVar32 * fVar20;
    fVar33 = (fVar33 + fVar33) - fVar33 * fVar33 * fVar26;
    fVar31 = (fVar31 + fVar31) - fVar31 * fVar31 * fVar30;
    fVar32 = (fVar32 + fVar32) - fVar32 * fVar32 * fVar20;
    fVar33 = (fVar33 + fVar33) - fVar33 * fVar33 * fVar26;
    fStack_120 = ((fVar24 * fVar27 - fVar23 * fVar28) + fVar29 * fVar25 + fVar1) *
                 (float)(-(uint)((float)((uint)fVar26 & uRam0000000146b4a3e8) <=
                                fRam0000000146b4a408) & (uint)fVar33 ^ (uint)fVar33);
    fVar26 = 1.0 / *(float *)(param_1 + 0x268);
    local_128 = CONCAT44(((fVar23 * fVar19 - fVar25 * fVar27) + fVar29 * fVar24 + pfVar15[1]) *
                         (float)(-(uint)((float)((uint)fVar20 & uRam0000000146b4a3e4) <=
                                        fRam0000000146b4a404) & (uint)fVar32 ^ (uint)fVar32),
                         ((fVar25 * fVar28 - fVar24 * fVar19) + fVar29 * fVar23 + fVar2) *
                         (float)(-(uint)((float)((uint)fVar30 & _DAT_146b4a3e0) <= _DAT_146b4a400) &
                                 (uint)fVar31 ^ (uint)fVar31));
    fVar30 = fVar26 * fVar26 * 9.0;
    fVar20 = local_108._0_4_ * fVar30;
    fVar27 = 1.0 / ((fVar20 + fVar26 * 4.5) * local_108._0_4_ + 1.0);
    lVar11 = FVector::Rotation(&local_128,&local_138);
    lVar18 = *(longlong *)(param_1 + 0x278);
    fVar19 = *(float *)(lVar11 + 4);
    local_158 = 0;
    local_150 = 0.0;
    plVar17 = *(longlong **)(lVar18 + 0x180);
    if (plVar17 != (longlong *)0x0) {
      local_108 = (undefined1 *)0x0;
      lVar11 = (**(code **)(*plVar17 + 0x6d0))(plVar17,0,1);
      if ((lVar11 != 0) && (*(longlong *)(lVar18 + 0x2a0) != 0)) {
        local_130 = &local_158;
        puStack_140 = &local_138;
        local_148 = FUN_1430cf3b0;
        local_138 = lVar18;
        FUN_1426936b0(lVar11,&local_148);
      }
    }
    lVar18 = *(longlong *)(param_1 + 0x278);
    local_148 = (code *)0x0;
    local_108 = (undefined1 *)0x0;
    fVar19 = fVar19 * 0.017453292 * fVar27 * fVar30 -
             ((float)local_158 * fVar3 + local_158._4_4_ * fVar4 + local_150 * fVar5) *
             (fVar20 + fVar26 * 4.5) * fVar27;
    local_138 = CONCAT44(fVar4 * fVar19,fVar3 * fVar19);
    local_130 = (undefined8 *)CONCAT44(local_130._4_4_,fVar5 * fVar19);
    puStack_140 = (undefined8 *)((ulonglong)puStack_140 & 0xffffffff00000000);
    lVar11 = (**(code **)(**(longlong **)(lVar18 + 0x180) + 0x6d0))
                       (*(longlong **)(lVar18 + 0x180),0,1);
    if ((lVar11 != 0) && (*(longlong *)(lVar18 + 0x2a0) != 0)) {
      local_d0 = &local_148;
      local_c8 = &local_138;
      plStack_100 = &local_d8;
      local_108 = &LAB_1430cf330;
      local_d8 = lVar18;
      FUN_1426936b0(lVar11,&local_108);
    }
    lVar18 = *(longlong *)(param_1 + 0x270);
    *(float *)(lVar18 + 0x4f4) = (float)local_148 + *(float *)(lVar18 + 0x4f4);
    *(float *)(lVar18 + 0x4f8) = local_148._4_4_ + *(float *)(lVar18 + 0x4f8);
    *(float *)(lVar18 + 0x4fc) = puStack_140._0_4_ + *(float *)(lVar18 + 0x4fc);
  }
  return;
}



// FUNCTION 1430e11b0 FUN_1430e11b0 body=1266 status=ok
// SIG undefined FUN_1430e11b0(void)

void FUN_1430e11b0(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_78;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  
  if ((*(char *)(param_1 + 0x1c0) == '\0') && (*(char *)(param_1 + 0x260) == '\0')) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x270);
  if (lVar5 == 0) {
    return;
  }
  if (*(longlong *)(lVar5 + 0x4d8) == 0) {
    return;
  }
  if (*(longlong *)(lVar5 + 0x4e0) == 0) {
    return;
  }
  if (param_2 < 1e-08) {
    return;
  }
  if (*(longlong **)(lVar5 + 0x4e0) == (longlong *)0x0) {
    return;
  }
  lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x4e0) + 0x28))();
  if (lVar5 == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x270);
  plVar7 = (longlong *)0x0;
  if ((*(longlong *)(lVar2 + 0x4d8) == 0) || (*(longlong *)(lVar2 + 0x4e0) == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = (**(code **)(**(longlong **)(lVar2 + 0x4e0) + 0x50))();
  }
  iVar1 = *(int *)(param_1 + 0x17c);
  if (*(char *)(param_1 + 0x179) == '\x01') {
    cVar3 = FUN_1407c3030(param_1 + 0x1c8);
    if (cVar3 == '\0') {
      if (iVar1 < iVar4) {
        local_78 = DAT_146b4a478;
        FUN_142dafbc0(param_1 + 0x1c8,&local_78);
      }
    }
    else if (iVar4 <= iVar1) {
      local_78 = DAT_146b4a478;
      FUN_142dbb5d0(param_1 + 0x1c8,&local_78);
    }
  }
  else if ((*(char *)(param_1 + 0x179) == '\x02') && (iVar1 < iVar4)) {
    FUN_1430cf830(param_1);
    return;
  }
  cVar3 = FUN_1407c3030(param_1 + 0x1c8);
  if (cVar3 != '\0') {
    return;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x270) + 0x168);
  if (lVar2 == 0) {
    fVar16 = 0.0;
    fVar8 = 0.0;
    fVar11 = 0.0;
    fVar9 = fRam0000000146b4a32c;
  }
  else {
    fVar16 = *(float *)(lVar2 + 0x210);
    fVar8 = *(float *)(lVar2 + 0x214);
    fVar11 = *(float *)(lVar2 + 0x218);
    fVar9 = *(float *)(lVar2 + 0x21c);
  }
  fVar10 = fVar8 * 0.0 - fVar11 * 1.0;
  fVar12 = fVar11 * 0.0 - fVar16 * 0.0;
  fVar13 = fVar16 * 1.0 - fVar8 * 0.0;
  fVar14 = fVar9 * 0.0 - fVar9 * 0.0;
  fVar10 = fVar10 + fVar10;
  fVar12 = fVar12 + fVar12;
  fVar13 = fVar13 + fVar13;
  fVar14 = fVar14 + fVar14;
  local_78._0_4_ = (fVar13 * fVar8 - fVar12 * fVar11) + fVar10 * fVar9 + 0.0;
  local_78._4_4_ = (fVar10 * fVar11 - fVar13 * fVar16) + fVar12 * fVar9 + 1.0;
  fStack_70 = (fVar12 * fVar16 - fVar10 * fVar8) + fVar13 * fVar9 + 0.0;
  fStack_6c = (fVar14 * fVar9 - fVar14 * fVar9) + fVar14 * fVar9 + 0.0;
  fVar10 = fVar8 * 1.0 - fVar11 * 0.0;
  fVar12 = fVar11 * 0.0 - fVar16 * 1.0;
  fVar13 = fVar16 * 0.0 - fVar8 * 0.0;
  fVar10 = fVar10 + fVar10;
  fVar12 = fVar12 + fVar12;
  fVar13 = fVar13 + fVar13;
  fVar14 = (fVar13 * fVar8 - fVar12 * fVar11) + fVar10 * fVar9 + 0.0;
  fVar15 = (fVar10 * fVar11 - fVar13 * fVar16) + fVar12 * fVar9 + 0.0;
  fVar16 = (fVar12 * fVar16 - fVar10 * fVar8) + fVar13 * fVar9 + 1.0;
  FUN_1430d4dd0(param_1,&local_58);
  FUN_142699400(lVar5,&local_68);
  fVar11 = fVar14 * local_68 + fVar15 * local_64 + fVar16 * local_60;
  local_68 = local_68 - fVar14 * fVar11;
  local_64 = local_64 - fVar15 * fVar11;
  local_60 = local_60 - fVar16 * fVar11;
  if (*(char *)(param_1 + 0x260) == '\0') {
    fVar11 = local_78._4_4_ * local_64 + (float)local_78 * local_68 + fStack_70 * local_60;
    if ((*(float *)(param_1 + 0x27c) <= ABS(fVar11)) &&
       (fVar16 = _guard_xfg_dispatch_icall_nop((90.0 - *(float *)(param_1 + 0x278)) * 0.017453292),
       fVar16 < ABS(fVar11 / SQRT(local_64 * local_64 + local_68 * local_68 + local_60 * local_60)))
       ) {
      *(float *)(param_1 + 0x264) = param_2 + *(float *)(param_1 + 0x264);
      return;
    }
    fVar11 = *(float *)(param_1 + 0x264);
    param_2 = param_2 * *(float *)(param_1 + 0x280);
    if (fVar11 <= param_2) {
      param_2 = fVar11;
    }
    *(float *)(param_1 + 0x264) = fVar11 - param_2;
    return;
  }
  param_2 = param_2 + *(float *)(param_1 + 0x268);
  *(float *)(param_1 + 0x268) = param_2;
  fVar11 = (float)FUN_1430d5030(param_1,*(undefined4 *)(param_1 + 0x264));
  if (1e-08 < ABS(fVar11)) {
    fVar16 = param_2 / fVar11;
    if (param_2 / fVar11 < 0.0) {
      fVar16 = 0.0;
      goto LAB_1430e1595;
    }
  }
  else {
    fVar16 = 1.0;
    if (param_2 < fVar11) {
      fVar16 = 0.0;
    }
  }
  if (1.0 <= fVar16) {
    fVar16 = 1.0;
  }
LAB_1430e1595:
  uVar6 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x290);
  fVar8 = (float)FRichCurve::Eval(uVar6,fVar16,0);
  fVar16 = *(float *)(param_1 + 0x308);
  if (*(longlong *)(*(longlong *)(param_1 + 0x270) + 0x4d8) != 0) {
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x4e0);
  }
  fVar9 = (float)(**(code **)(*plVar7 + 0x10))(plVar7);
  lVar5 = *(longlong *)(param_1 + 0x270);
  fVar9 = fVar9 * fVar8 * fVar16;
  *(float *)(lVar5 + 0x4ec) = local_54 * fVar9 + *(float *)(lVar5 + 0x4ec);
  *(float *)(lVar5 + 0x4f0) = local_50 * fVar9 + *(float *)(lVar5 + 0x4f0);
  *(float *)(lVar5 + 0x4e8) = local_58 * fVar9 + *(float *)(lVar5 + 0x4e8);
  if (fVar11 < *(float *)(param_1 + 0x268) || fVar11 == *(float *)(param_1 + 0x268)) {
    *(undefined1 *)(param_1 + 0x260) = 0;
    *(undefined1 *)(param_1 + 0x1c0) = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x1b0,0);
  }
  return;
}



// FUNCTION 1430e16b0 FUN_1430e16b0 body=790 status=ok
// SIG undefined FUN_1430e16b0(void)

void FUN_1430e16b0(longlong *param_1,float *param_2,char param_3)

{
  float fVar1;
  float *pfVar2;
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
  undefined1 local_f4 [12];
  undefined1 local_e8 [16];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  
  if (param_3 == '\0') {
    pfVar2 = (float *)(**(code **)(*param_1 + 0x118))(param_1,local_e8);
  }
  else {
    pfVar2 = (float *)(**(code **)(*param_1 + 0x120))(param_1,local_f4);
  }
  fVar8 = *pfVar2;
  fVar13 = pfVar2[1];
  fVar1 = pfVar2[2];
  (**(code **)(*param_1 + 0xa0))(param_1,&local_d8);
  fVar6 = local_d4 + local_d4;
  fVar10 = local_d8 + local_d8;
  fVar9 = local_d0 * (local_d0 + local_d0);
  fVar3 = local_cc * (local_d0 + local_d0);
  fVar14 = fVar3 + fVar10 * local_d4;
  fVar3 = fVar10 * local_d4 - fVar3;
  fVar5 = (1.0 - fVar6 * local_d4) - fVar9;
  fVar7 = 1.0 - fVar10 * local_d8;
  fVar4 = local_d0 * fVar6 - local_cc * fVar10;
  fVar16 = local_d0 * fVar10 - local_cc * fVar6;
  fVar12 = local_cc * fVar6 + local_d0 * fVar10;
  fVar15 = local_d0 * fVar6 + local_cc * fVar10;
  fVar10 = fVar5 * fVar8;
  fVar6 = fVar7 - fVar6 * local_d4;
  fVar7 = fVar7 - fVar9;
  fVar11 = fVar3 * fVar13;
  fVar9 = fVar12 * fVar1;
  *param_2 = fVar3 * fVar11 + fVar5 * fVar10 + fVar12 * fVar9;
  param_2[4] = fVar7 * fVar13 * fVar7 + fVar14 * fVar8 * fVar14 + fVar4 * fVar1 * fVar4;
  fVar3 = fVar11 * fVar15 + fVar10 * fVar16 + fVar9 * fVar6;
  param_2[8] = fVar15 * fVar13 * fVar15 + fVar16 * fVar8 * fVar16 + fVar6 * fVar1 * fVar6;
  fVar13 = fVar7 * fVar13 * fVar15 + fVar14 * fVar8 * fVar16 + fVar4 * fVar1 * fVar6;
  fVar8 = fVar11 * fVar7 + fVar10 * fVar14 + fVar9 * fVar4;
  param_2[2] = fVar3;
  param_2[6] = fVar3;
  param_2[5] = fVar13;
  param_2[7] = fVar13;
  param_2[1] = fVar8;
  param_2[3] = fVar8;
  return;
}



// FUNCTION 1430e19d0 FUN_1430e19d0 body=16 status=ok
// SIG undefined FUN_1430e19d0(void)

void FUN_1430e19d0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x530) = 0;
  FUN_1426aed80();
  return;
}



// FUNCTION 1430e19e0 FUN_1430e19e0 body=99 status=ok
// SIG undefined FUN_1430e19e0(void)

void FUN_1430e19e0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_142e79d90();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0xa3] = lVar2;
  uVar1 = UScrollBox::GetPrivateStaticClass();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0xa4] = lVar2;
  uVar1 = FUN_142e0a580();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0xa5] = lVar2;
  return;
}



// FUNCTION 1430e1a50 FUN_1430e1a50 body=86 status=ok
// SIG undefined FUN_1430e1a50(void)

void FUN_1430e1a50(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x490);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_142e79600();
    uVar2 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    *(undefined8 *)(param_1 + 0x530) = uVar2;
    return;
  }
  *(undefined8 *)(param_1 + 0x530) = 0;
  return;
}



// FUNCTION 1430e1ab0 FUN_1430e1ab0 body=190 status=ok
// SIG undefined FUN_1430e1ab0(void)

void FUN_1430e1ab0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  float fVar6;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar2 = *(longlong *)(param_1 + 0x150);
  if (lVar2 != 0) {
    piVar4 = *(int **)(param_1 + 0x140);
    piVar5 = piVar4 + (longlong)*(int *)(param_1 + 0x148) * 0x1e;
    for (; piVar4 != piVar5; piVar4 = piVar4 + 0x1e) {
      uVar1 = *(undefined4 *)(param_2 + 0x10);
      lVar3 = (longlong)*piVar4 * 0x20 + *(longlong *)(lVar2 + 0x6c8);
      piVar4[0x1b] = *(int *)(lVar3 + 0x14);
      piVar4[0x1c] = *(int *)(lVar3 + 0x18);
      fVar6 = *(float *)(lVar3 + 0x1c);
      if (fVar6 - (float)piVar4[0x1d] < 0.0) {
        fVar6 = (float)FMath::FInterpConstantTo(piVar4[0x1d],fVar6,uVar1,piVar4[0x1a]);
      }
      piVar4[0x1d] = (int)fVar6;
    }
  }
  return;
}



// FUNCTION 1430e1b70 FUN_1430e1b70 body=116 status=ok
// SIG undefined FUN_1430e1b70(void)

void FUN_1430e1b70(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_18 [16];
  
  lVar2 = *(longlong *)(param_1 + 0x178);
  if ((lVar2 != 0) ||
     (((*(longlong *)(param_1 + 0x118) != 0 &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168), lVar2 != 0)) &&
      (*(longlong *)(lVar2 + 400) != 0)))) {
    *(undefined8 *)(param_1 + 0x2cc) = *(undefined8 *)(lVar2 + 0x1f8);
    *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(lVar2 + 0x200);
  }
  puVar3 = (undefined8 *)FRotator::Quaternion(param_1 + 0x2cc,local_18);
  uVar1 = puVar3[1];
  *(undefined8 *)(param_1 + 0x2e0) = *puVar3;
  *(undefined8 *)(param_1 + 0x2e8) = uVar1;
  return;
}



// FUNCTION 1430e1bf0 FUN_1430e1bf0 body=1298 status=ok
// SIG undefined FUN_1430e1bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430e1bf0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_218 [32];
  undefined4 local_1f8 [4];
  undefined8 local_1e8;
  longlong *plStack_1e0;
  longlong local_1d8;
  undefined ***local_1d0;
  undefined4 *local_1c8;
  undefined1 *local_1c0;
  undefined4 *local_1b8;
  undefined1 *local_1a8;
  longlong *plStack_1a0;
  undefined **local_198;
  undefined4 local_190;
  undefined1 local_18c;
  undefined4 local_188;
  undefined8 local_184;
  undefined8 local_17c;
  undefined2 local_174;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_e8 [64];
  undefined4 local_a8;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  lVar4 = *(longlong *)(param_1 + 0xcf0);
  uVar9 = 0;
  if ((lVar4 == 0) || (*(int *)(param_1 + 0x290) == 0)) {
    fVar12 = 1.0;
  }
  else {
    fVar12 = 0.0;
    uVar7 = uVar9;
    uVar6 = uVar9;
    uVar10 = uVar9;
    if (0 < *(int *)(param_1 + 0x290)) {
      do {
        lVar4 = *(longlong *)(param_1 + 0xcf0);
        if (*(char *)(lVar4 + 0x1c + uVar6) == '\0') {
          fVar11 = *(float *)(lVar4 + 0x50 + uVar6);
          if (-1.0 <= fVar11) {
            if (1.0 <= fVar11) {
              fVar11 = 1.0;
            }
          }
          else {
            fVar11 = -1.0;
          }
          fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
          uVar3 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x8c0);
          fVar11 = (float)FRichCurve::Eval(uVar3,fVar11 * 57.295776,0x3f800000);
          lVar4 = *(longlong *)(param_1 + 0xcf0);
          fVar12 = fVar12 + fVar11;
          uVar10 = (ulonglong)((int)uVar10 + 1);
        }
        uVar8 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar8;
        uVar6 = uVar6 + 0xa0;
      } while ((int)uVar8 < *(int *)(param_1 + 0x290));
      if ((int)uVar10 != 0) {
        fVar12 = fVar12 / (float)(int)uVar10;
        goto LAB_1430e1d47;
      }
    }
    fVar12 = 1.0;
  }
LAB_1430e1d47:
  *(float *)(param_1 + 0xcd4) = fVar12;
  if (lVar4 != 0) {
    uVar8 = *(uint *)(param_1 + 0x290);
    uVar7 = (ulonglong)uVar8;
    if ((uVar8 != 0) && (fVar12 = 0.0, 0 < (int)uVar8)) {
      pfVar5 = (float *)(lVar4 + 0x54);
      uVar6 = uVar9;
      do {
        if (*(char *)(pfVar5 + -0xe) == '\0') {
          fVar12 = fVar12 + *pfVar5;
          uVar6 = (ulonglong)((int)uVar6 + 1);
        }
        pfVar5 = pfVar5 + 0x28;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      if ((int)uVar6 != 0) {
        fVar12 = fVar12 / (float)(int)uVar6;
        goto LAB_1430e1dac;
      }
    }
  }
  fVar12 = 0.0;
LAB_1430e1dac:
  *(float *)(param_1 + 0xcd8) = fVar12;
  uVar7 = uVar9;
  if (0 < *(int *)(param_1 + 0xd18)) {
    do {
      if (((*(int *)(uVar9 + 8 + *(longlong *)(param_1 + 0xd10)) == 0) ||
          (plVar1 = *(longlong **)(uVar9 + *(longlong *)(param_1 + 0xd10)),
          plVar1 == (longlong *)0x0)) || (cVar2 = (**(code **)(*plVar1 + 0x18))(), cVar2 == '\0')) {
        FUN_1418bdc80(param_1 + 0xd10,uVar7,1,1);
      }
      else {
        uVar7 = (ulonglong)((int)uVar7 + 1);
        uVar9 = uVar9 + 0x10;
      }
    } while ((int)uVar7 < *(int *)(param_1 + 0xd18));
  }
  cVar2 = *(char *)(param_1 + 0x5d0);
  local_1f8[0] = param_2;
  if (cVar2 == '\0') {
    local_188 = *(undefined4 *)(param_1 + 0x318);
    local_198 = &PTR_FUN_14416bf40;
    local_190 = 0;
    local_184 = 0;
    local_17c = 0;
    local_18c = 0;
    local_174 = 0;
    fVar12 = (float)FUN_1430d7710(param_1);
    local_a8 = 0;
    local_164 = *(undefined4 *)(param_1 + 0x338);
    local_17c = CONCAT44(fVar12 * *(float *)(param_1 + 0x314),(undefined4)local_17c);
    local_184 = *(undefined8 *)(param_1 + 0x31c);
    local_168 = *(undefined4 *)(param_1 + 0x330);
    local_160 = *(undefined4 *)(param_1 + 0x340);
    local_15c = *(undefined4 *)(param_1 + 0x348);
    local_128 = *(undefined4 *)(param_1 + 0x334);
    local_124 = *(undefined4 *)(param_1 + 0x33c);
    local_120 = *(undefined4 *)(param_1 + 0x344);
    local_11c = *(undefined4 *)(param_1 + 0x34c);
    local_158 = local_15c;
    local_118 = local_11c;
    FUN_1430d3c60(param_1,local_e8);
    local_1a8 = &LAB_1430cf420;
  }
  else {
    if (cVar2 != '\x01') {
      if (cVar2 != '\x03') {
        return;
      }
      FUN_1430e2110(param_1,param_2);
      return;
    }
    FUN_1430d7710(param_1);
    local_188 = *(undefined4 *)(param_1 + 0x318);
    local_198 = &PTR_FUN_14416bf40;
    local_190 = 0;
    local_184 = 0;
    local_17c = 0;
    local_18c = 0;
    local_174 = 0;
    fVar12 = (float)FUN_1430d7710(param_1);
    local_a8 = 0;
    local_164 = *(undefined4 *)(param_1 + 0x338);
    local_17c = CONCAT44(fVar12 * *(float *)(param_1 + 0x314),(undefined4)local_17c);
    local_184 = *(undefined8 *)(param_1 + 0x31c);
    local_168 = *(undefined4 *)(param_1 + 0x330);
    local_160 = *(undefined4 *)(param_1 + 0x340);
    local_15c = *(undefined4 *)(param_1 + 0x348);
    local_128 = *(undefined4 *)(param_1 + 0x334);
    local_124 = *(undefined4 *)(param_1 + 0x33c);
    local_120 = *(undefined4 *)(param_1 + 0x344);
    local_11c = *(undefined4 *)(param_1 + 0x34c);
    local_158 = local_15c;
    local_118 = local_11c;
    FUN_1430d3c60(param_1,local_e8);
    local_1a8 = &LAB_1430cf470;
  }
  local_1b8 = local_1f8;
  local_1c0 = local_e8;
  local_1c8 = &local_168;
  local_1d0 = &local_198;
  plStack_1e0 = &local_1d8;
  local_1e8 = 0;
  plStack_1a0 = plStack_1e0;
  local_1d8 = param_1;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x6d0))
                    (*(longlong **)(param_1 + 0x180),0,1);
  FUN_1426936b0(uVar3,&local_1a8);
  return;
}



// FUNCTION 1430e2110 FUN_1430e2110 body=1478 status=ok
// SIG undefined FUN_1430e2110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430e2110(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_res10 [2];
  undefined1 auStack_218 [32];
  float local_1f8;
  undefined8 local_1e8;
  longlong *plStack_1e0;
  undefined4 local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined1 *local_1b8;
  longlong *plStack_1b0;
  longlong local_1a8;
  float *local_1a0;
  undefined1 **local_198;
  undefined4 *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined4 local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  undefined4 local_160;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_res10[0] = param_2;
  if (*(char *)(param_1 + 0x814) == '\0') {
    fVar7 = 1.0;
  }
  else {
    (**(code **)(*(longlong *)(param_1 + 0x5b8) + 0x18))((longlong *)(param_1 + 0x5b8),&local_1b8);
    local_1a0 = &local_1d0;
    local_198 = &local_1b8;
    plStack_1e0 = &local_1a8;
    local_188 = 0x430cf410;
    uStack_184 = 1;
    local_1e8 = 0;
    local_1a8 = param_1;
    uStack_180 = plStack_1e0;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x6d0))
                      (*(longlong **)(param_1 + 0x180),0,1);
    FUN_1426936b0(uVar3,&local_188);
    uVar3 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x538);
    fVar7 = (float)FRichCurve::Eval(uVar3,SQRT(local_1d0 * local_1d0 + local_1cc * local_1cc +
                                               local_1c8 * local_1c8) * 0.036,0x3f800000);
  }
  fVar4 = (float)FUN_1430d7710(param_1);
  fVar6 = *(float *)(param_1 + 0x318);
  fVar7 = fVar4 * *(float *)(param_1 + 0x314) * fVar7;
  local_1f8 = ABS(fVar7);
  bVar1 = 0.05 < local_1f8;
  iVar2 = FUN_140963c50(param_1);
  FUN_1409649c0(param_1);
  local_1d8 = UGeometryCacheComponent::GetStartTimeOffset(param_1);
  fVar9 = 0.0;
  fVar7 = -fVar7;
  fVar10 = 0.0;
  fVar8 = ((1.0 - ABS(fVar7)) + 1.0) * *(float *)(param_1 + 0x318);
  fVar7 = ((1.0 - ABS(*(float *)(param_1 + 0x318))) + 1.0) * fVar7;
  fVar4 = (fVar7 + fVar8) * 0.5;
  fVar7 = (fVar8 - fVar7) * 0.5;
  local_1e8 = CONCAT44(local_1e8._4_4_,ABS(fVar4));
  local_1d4 = ABS(fVar7);
  fVar8 = ABS(fVar4 - fVar7);
  if ((0.05 < fVar8) && (fVar8 <= 1.0)) {
    uVar3 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x790);
    fVar5 = (float)FRichCurve::Eval(uVar3,local_1d8,0);
    if (fVar7 <= fVar4) {
      if (0.0 > fVar6) {
        fVar10 = fVar5 * fVar8;
        goto LAB_1430e23d9;
      }
    }
    else if (0.0 <= fVar6) {
      fVar10 = fVar5 * fVar8;
      goto LAB_1430e23d9;
    }
    fVar9 = fVar5 * fVar8;
  }
LAB_1430e23d9:
  fVar5 = fVar4;
  local_168 = fVar7;
  if (bVar1) {
    if (ABS(fVar6) <= 0.05) {
      local_168 = -*(float *)(param_1 + 0x808);
      fVar5 = local_168;
      if (local_168 <= fVar4) {
        fVar5 = fVar4;
      }
      if (local_168 <= fVar7) {
        local_168 = fVar7;
      }
    }
    else {
      fVar5 = *(float *)(param_1 + 0x788) + 1.0;
      uVar3 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x710);
      fVar6 = (float)FRichCurve::Eval(uVar3,fVar8,0);
      fVar8 = ABS(*(float *)(param_1 + 0x318));
      if ((float)local_1e8 <= local_1d4) {
        fVar4 = fVar6 + local_1d4;
        if (fVar5 <= fVar6 + local_1d4) {
          fVar4 = fVar5;
        }
        local_168 = (fVar4 - 1.0) * fVar8 + 1.0;
        fVar5 = ((fVar4 - fVar6) - -1.0) * fVar8 - 1.0;
        if (fVar7 < 0.0) {
          fVar5 = -fVar5;
          local_168 = -local_168;
        }
      }
      else {
        fVar7 = fVar6 + (float)local_1e8;
        if (fVar5 <= fVar6 + (float)local_1e8) {
          fVar7 = fVar5;
        }
        fVar5 = (fVar7 - 1.0) * fVar8 + 1.0;
        local_168 = ((fVar7 - fVar6) - -1.0) * fVar8 - 1.0;
        if (fVar4 < 0.0) {
          fVar5 = (1.0 - fVar7) * fVar8 - 1.0;
          local_168 = 1.0 - ((fVar7 - fVar6) + 1.0) * fVar8;
        }
      }
    }
  }
  local_164 = fVar5;
  local_170 = fVar9;
  local_16c = fVar10;
  if ((iVar2 < 0) && (1e-08 < ABS(*(float *)(param_1 + 0x318)))) {
    local_164 = local_168;
    local_168 = fVar5;
    local_170 = fVar10;
    local_16c = fVar9;
  }
  fVar7 = ABS(*(float *)(param_1 + 0x318));
  local_174 = fVar7;
  if ((bVar1) && (local_174 = local_1f8, local_1f8 <= fVar7)) {
    local_174 = fVar7;
  }
  local_178 = 1;
  local_160 = 0;
  local_15c = 0;
  local_15a = 0;
  if (iVar2 < 0) {
    local_168 = -local_168;
    local_164 = -local_164;
  }
  if ((local_1f8 <= 1e-08) && (fVar7 = *(float *)(param_1 + 0x31c), 0.0 < fVar7)) {
    local_170 = fVar7;
    local_16c = fVar7;
  }
  local_154 = *(undefined4 *)(param_1 + 0x338);
  local_1a0 = (float *)&local_178;
  local_158 = *(undefined4 *)(param_1 + 0x330);
  local_118 = *(undefined4 *)(param_1 + 0x334);
  local_198 = (undefined1 **)&local_158;
  local_190 = local_res10;
  plStack_1b0 = &local_1a8;
  local_114 = *(undefined4 *)(param_1 + 0x33c);
  local_1b8 = &LAB_1430cf2c0;
  local_188 = 0x430cf2c0;
  uStack_184 = 1;
  local_1e8 = 0;
  local_1a8 = param_1;
  local_150 = local_154;
  local_14c = local_158;
  local_148 = local_158;
  local_110 = local_114;
  local_10c = local_118;
  local_108 = local_118;
  uStack_180 = plStack_1b0;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x6d0))
                    (*(longlong **)(param_1 + 0x180),0,1);
  FUN_1426936b0(uVar3,&local_188);
  return;
}



// FUNCTION 1430e26e0 FUN_1430e26e0 body=152 status=ok
// SIG undefined FUN_1430e26e0(void)

void FUN_1430e26e0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((*(byte *)(param_1 + 0x37) & 2) == 0) || ((char)param_1[0x52] != '\0')) {
    FUN_14237c350();
    return;
  }
  if (param_1[0x41] != 0) goto LAB_1430e275a;
  lVar3 = param_1[0x23];
  if (lVar3 == 0) {
LAB_1430e274c:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1430e274c;
  }
  param_1[0x41] = lVar3;
LAB_1430e275a:
                    /* WARNING: Could not recover jumptable at 0x0001430e2767. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x358))(param_1,1);
  return;
}



// FUNCTION 1430e2780 FUN_1430e2780 body=74 status=ok
// SIG undefined FUN_1430e2780(void)

void FUN_1430e2780(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (((*(char *)(param_1 + 0x290) == '\0') && (*(longlong *)(param_1 + 0x178) == 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x118) + 0x168), plVar1 != (longlong *)0x0)) {
    plVar2 = (longlong *)plVar1[0x32];
    if ((longlong *)plVar1[0x32] == (longlong *)0x0) {
      plVar2 = plVar1;
    }
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001430e27c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x3d0))(plVar2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1430e27d0 FUN_1430e27d0 body=55 status=ok
// SIG undefined FUN_1430e27d0(void)

void FUN_1430e27d0(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xd00) != 0) {
    if (param_2 == '\0') {
      lVar1 = *(longlong *)(param_1 + 0xca0);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0xca8);
    }
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001430e27ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xd00) + 0x4d0) + 0x850))();
      return;
    }
  }
  return;
}



// FUNCTION 1430e2810 FUN_1430e2810 body=1585 status=ok
// SIG undefined FUN_1430e2810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430e2810(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar21;
  float fVar22;
  undefined1 in_XMM4 [16];
  undefined1 auVar19 [16];
  float fVar23;
  undefined1 auVar20 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  float local_170;
  float local_168;
  float fStack_164;
  float local_160;
  undefined3 local_158;
  undefined1 uStack_155;
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
  undefined1 local_118 [16];
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined1 local_a8 [48];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar10 = *(longlong **)(param_1 + 0x168);
  if (plVar10 == (longlong *)0x0) {
LAB_1430e287a:
    plVar10 = (longlong *)0x0;
  }
  else {
    lVar6 = FUN_1429f11d0();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1430e287a;
  }
  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x460) + 0x168);
  if (plVar9 != (longlong *)0x0) {
    lVar6 = FUN_1429f11d0();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1430e28c9;
  }
  plVar9 = (longlong *)0x0;
LAB_1430e28c9:
  if ((plVar10 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
    local_178 = 0;
    lVar6 = (**(code **)(*plVar10 + 0x6d0))(plVar10,0,1);
    local_178 = 0;
    lVar7 = (**(code **)(*plVar9 + 0x6d0))(plVar9,0,1);
    if ((lVar6 != 0) && (lVar7 != 0)) {
      iVar5 = (**(code **)(*plVar10 + 0x4e8))(plVar10);
      if (iVar5 == 0) {
        (**(code **)(*plVar10 + 0x638))(plVar10,3);
      }
      local_178 = 0;
      cVar4 = (**(code **)(*plVar10 + 0x400))(plVar10,0);
      if (cVar4 == '\0') {
        (**(code **)(*plVar10 + 0x5b8))(plVar10,1);
      }
      if (*(char *)(param_1 + 0x45a) != '\0') {
        *(byte *)(lVar6 + 0x12) = *(byte *)(lVar6 + 0x12) | 0x40;
      }
      lVar1 = *(longlong *)(param_1 + 0x468);
      (**(code **)(*plVar9 + 0x420))(plVar9,local_d8,lVar1,0);
      if (*(char *)(param_1 + 0x459) == '\0') {
        FBodyInstance::SetMassOverride(lVar6,0x3727c5ac,1);
        FUN_142699110(lVar7,&local_138,1,0);
        lVar7 = FUN_142697310(lVar7,local_a8);
        fVar12 = local_118._0_4_;
        fVar2 = local_118._4_4_;
        fVar14 = local_118._8_4_;
        fVar17 = local_118._12_4_;
        fVar24 = local_138 * _DAT_146b4a410;
        fVar25 = fStack_134 * fRam0000000146b4a414;
        fVar26 = fStack_130 * fRam0000000146b4a418;
        fVar27 = fStack_12c * fRam0000000146b4a41c;
        auVar19 = rcpps(in_XMM4,local_118);
        fVar28 = (float)((uint)(*(float *)(lVar7 + 0x10) - local_128) & _DAT_146b4a330);
        fVar29 = (float)((uint)(*(float *)(lVar7 + 0x14) - fStack_124) & uRam0000000146b4a334);
        fVar30 = (float)((uint)(*(float *)(lVar7 + 0x18) - fStack_120) & uRam0000000146b4a338);
        fVar31 = (float)((uint)(0.0 - fStack_11c) & uRam0000000146b4a33c);
        fVar11 = fVar30 * fVar25 - fVar29 * fVar26;
        fVar13 = fVar28 * fVar26 - fVar30 * fVar24;
        fVar15 = fVar29 * fVar24 - fVar28 * fVar25;
        fVar16 = fVar31 * fVar27 - fVar31 * fVar27;
        fVar18 = auVar19._0_4_;
        fVar21 = auVar19._4_4_;
        fVar22 = auVar19._8_4_;
        fVar23 = auVar19._12_4_;
        fVar11 = fVar11 + fVar11;
        fVar13 = fVar13 + fVar13;
        fVar15 = fVar15 + fVar15;
        fVar16 = fVar16 + fVar16;
        fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar12;
        fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar2;
        fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar14;
        fVar23 = (fVar23 + fVar23) - fVar23 * fVar23 * fVar17;
        auVar19._0_4_ = (fVar18 + fVar18) - fVar18 * fVar18 * fVar12;
        auVar19._4_4_ = (fVar21 + fVar21) - fVar21 * fVar21 * fVar2;
        auVar19._8_4_ = (fVar22 + fVar22) - fVar22 * fVar22 * fVar14;
        auVar19._12_4_ = (fVar23 + fVar23) - fVar23 * fVar23 * fVar17;
        local_148 = ((fVar15 * fVar25 - fVar13 * fVar26) + fVar27 * fVar11 + fVar28) *
                    (float)(-(uint)((float)((uint)fVar12 & _DAT_146b4a3e0) <= _DAT_146b4a400) &
                            (uint)auVar19._0_4_ ^ (uint)auVar19._0_4_);
        fStack_144 = ((fVar11 * fVar26 - fVar15 * fVar24) + fVar27 * fVar13 + fVar29) *
                     (float)(-(uint)((float)((uint)fVar2 & uRam0000000146b4a3e4) <=
                                    fRam0000000146b4a404) & (uint)auVar19._4_4_ ^
                            (uint)auVar19._4_4_);
        fStack_140 = ((fVar13 * fVar24 - fVar11 * fVar25) + fVar27 * fVar15 + fVar30) *
                     (float)(-(uint)((float)((uint)fVar14 & uRam0000000146b4a3e8) <=
                                    fRam0000000146b4a408) & (uint)auVar19._8_4_ ^
                            (uint)auVar19._8_4_);
        fStack_13c = ((fVar16 * fVar27 - fVar16 * fVar27) + fVar27 * fVar16 + fVar31) *
                     (float)(-(uint)((float)((uint)fVar17 & uRam0000000146b4a3ec) <=
                                    fRam0000000146b4a40c) & (uint)auVar19._12_4_ ^
                            (uint)auVar19._12_4_);
        FUN_142699110(lVar6,&local_108,1,0);
        lVar7 = FUN_142697310(lVar6,local_a8);
        fVar12 = local_e8._0_4_;
        fVar2 = local_e8._4_4_;
        fVar14 = local_e8._8_4_;
        local_108 = local_108 * _DAT_146b4a410;
        fStack_104 = fStack_104 * fRam0000000146b4a414;
        fStack_100 = fStack_100 * fRam0000000146b4a418;
        fStack_fc = fStack_fc * fRam0000000146b4a41c;
        local_178 = 0;
        auVar19 = rcpps(auVar19,local_e8);
        fVar21 = (float)((uint)(*(float *)(lVar7 + 0x10) - local_f8) & _DAT_146b4a330);
        fVar22 = (float)((uint)(*(float *)(lVar7 + 0x14) - fStack_f4) & uRam0000000146b4a334);
        fVar23 = (float)((uint)(*(float *)(lVar7 + 0x18) - fStack_f0) & uRam0000000146b4a338);
        fVar17 = fVar23 * fStack_104 - fVar22 * fStack_100;
        fVar11 = fVar21 * fStack_100 - fVar23 * local_108;
        fVar13 = fVar22 * local_108 - fVar21 * fStack_104;
        fVar15 = auVar19._0_4_;
        fVar16 = auVar19._4_4_;
        fVar18 = auVar19._8_4_;
        fVar17 = fVar17 + fVar17;
        fVar11 = fVar11 + fVar11;
        fVar13 = fVar13 + fVar13;
        fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar12;
        fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar2;
        fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar14;
        fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar12;
        fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar2;
        fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar14;
        local_168 = ((fVar13 * fStack_104 - fVar11 * fStack_100) + fStack_fc * fVar17 + fVar21) *
                    (float)(-(uint)((float)((uint)fVar12 & _DAT_146b4a3e0) <= _DAT_146b4a400) &
                            (uint)fVar15 ^ (uint)fVar15);
        fStack_164 = ((fVar17 * fStack_100 - fVar13 * local_108) + fStack_fc * fVar11 + fVar22) *
                     (float)(-(uint)((float)((uint)fVar2 & uRam0000000146b4a3e4) <=
                                    fRam0000000146b4a404) & (uint)fVar16 ^ (uint)fVar16);
        local_160 = ((fVar11 * local_108 - fVar17 * fStack_104) + fStack_fc * fVar13 + fVar23) *
                    (float)(-(uint)((float)((uint)fVar14 & uRam0000000146b4a3e8) <=
                                   fRam0000000146b4a408) & (uint)fVar18 ^ (uint)fVar18);
        if (lVar1 == 0) {
          local_170 = local_160;
          pfVar8 = (float *)&local_178;
          local_178 = CONCAT44(fStack_164,local_168);
        }
        else {
          fVar12 = local_d8._0_4_;
          fVar14 = local_d8._4_4_;
          fVar11 = local_d8._8_4_;
          fVar15 = local_d8._12_4_;
          auVar20._0_8_ = local_d8._4_8_;
          auVar20._8_4_ = fVar12;
          auVar20._12_4_ = fVar15;
          local_168 = local_168 * local_b8;
          fStack_164 = fStack_164 * fStack_b4;
          local_160 = local_160 * fStack_b0;
          fVar16 = local_160 * fVar14 - fStack_164 * fVar11;
          fVar18 = local_168 * fVar11 - local_160 * fVar12;
          fVar21 = fStack_164 * fVar12 - local_168 * fVar14;
          fVar16 = fVar16 + fVar16;
          fVar18 = fVar18 + fVar18;
          fVar21 = fVar21 + fVar21;
          local_138 = local_138 * _DAT_146b4a410;
          fStack_134 = fStack_134 * fRam0000000146b4a414;
          fStack_130 = fStack_130 * fRam0000000146b4a418;
          fStack_12c = fStack_12c * fRam0000000146b4a41c;
          fVar2 = local_118._0_4_;
          fVar17 = local_118._4_4_;
          fVar13 = local_118._8_4_;
          auVar19 = rcpps(auVar20,local_118);
          fVar22 = (float)((uint)(((fVar21 * fVar14 - fVar18 * fVar11) + fVar15 * fVar16 + local_168
                                  + local_c8) - local_128) & _DAT_146b4a330);
          fVar23 = (float)((uint)(((fVar16 * fVar11 - fVar21 * fVar12) +
                                   fVar15 * fVar18 + fStack_164 + fStack_c4) - fStack_124) &
                          uRam0000000146b4a334);
          fVar21 = (float)((uint)(((fVar18 * fVar12 - fVar16 * fVar14) + fVar15 * fVar21 + local_160
                                  + fStack_c0) - fStack_120) & uRam0000000146b4a338);
          fVar12 = fVar21 * fStack_134 - fVar23 * fStack_130;
          fVar14 = fVar22 * fStack_130 - fVar21 * local_138;
          fVar11 = fVar23 * local_138 - fVar22 * fStack_134;
          fVar15 = auVar19._0_4_;
          fVar16 = auVar19._4_4_;
          fVar18 = auVar19._8_4_;
          fVar12 = fVar12 + fVar12;
          fVar14 = fVar14 + fVar14;
          fVar11 = fVar11 + fVar11;
          fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar2;
          fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar17;
          fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar13;
          fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar2;
          fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar17;
          fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar13;
          pfVar8 = &local_168;
          local_168 = ((fVar11 * fStack_134 - fVar14 * fStack_130) + fStack_12c * fVar12 + fVar22) *
                      (float)(-(uint)((float)((uint)fVar2 & _DAT_146b4a3e0) <= _DAT_146b4a400) &
                              (uint)fVar15 ^ (uint)fVar15);
          local_160 = ((fVar14 * local_138 - fVar12 * fStack_134) + fStack_12c * fVar11 + fVar21) *
                      (float)(-(uint)((float)((uint)fVar13 & uRam0000000146b4a3e8) <=
                                     fRam0000000146b4a408) & (uint)fVar18 ^ (uint)fVar18);
          fStack_164 = ((fVar12 * fStack_130 - fVar11 * local_138) + fStack_12c * fVar14 + fVar23) *
                       (float)(-(uint)((float)((uint)fVar17 & uRam0000000146b4a3e4) <=
                                      fRam0000000146b4a404) & (uint)fVar16 ^ (uint)fVar16);
        }
        local_160 = fStack_140 - pfVar8[2];
        *(ulonglong *)(lVar6 + 0x7c) =
             CONCAT44(fStack_144 - (float)((ulonglong)*(undefined8 *)pfVar8 >> 0x20),
                      local_148 - (float)*(undefined8 *)pfVar8);
        *(float *)(lVar6 + 0x84) = local_160;
      }
      _local_158 = CONCAT13(1,(int3)DAT_146532184);
      FUN_142382f60(plVar10,plVar9,&local_158,lVar1);
      local_178 = 0;
      (**(code **)(*plVar10 + 0x708))(plVar10,plVar9,0,1);
    }
  }
  return;
}



// FUNCTION 1430e2e50 FUN_1430e2e50 body=151 status=ok
// SIG undefined FUN_1430e2e50(void)

longlong FUN_1430e2e50(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_1 == 0) ||
     ((plVar2 = *(longlong **)(param_1 + 0x2f0), plVar2 == (longlong *)0x0 &&
      (plVar2 = *(longlong **)(param_1 + 0x208), plVar2 == (longlong *)0x0)))) {
    return 0;
  }
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x678))();
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = (**(code **)(*plVar2 + 0x6e8))(plVar2);
  if (lVar3 != 0) {
    lVar4 = FUN_142e39920();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 1430e2f40 FUN_1430e2f40 body=162 status=ok
// SIG undefined FUN_1430e2f40(void)

longlong FUN_1430e2f40(void)

{
  if (DAT_146b4a978 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"VehicleFlightComponent",&DAT_146b4a978,FUN_140447710,0x230
                  ,0x10000004,0,L"Engine",&LAB_1430e5010,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1429365a0,&LAB_140447700,0);
  }
  return DAT_146b4a978;
}



// FUNCTION 1430e3000 FUN_1430e3000 body=47 status=ok
// SIG undefined FUN_1430e3000(void)

longlong FUN_1430e3000(void)

{
  if (DAT_146b4a810 == 0) {
    FUN_141786440(&DAT_146b4a810,&PTR_LAB_145aa0740);
  }
  return DAT_146b4a810;
}



// FUNCTION 1430e3030 FUN_1430e3030 body=47 status=ok
// SIG undefined FUN_1430e3030(void)

longlong FUN_1430e3030(void)

{
  if (DAT_146b4a7b0 == 0) {
    FUN_141786a30(&DAT_146b4a7b0,&PTR_FUN_1467b23d0);
  }
  return DAT_146b4a7b0;
}



// FUNCTION 1430e3060 FUN_1430e3060 body=47 status=ok
// SIG undefined FUN_1430e3060(void)

longlong FUN_1430e3060(void)

{
  if (DAT_146b4a7b8 == 0) {
    FUN_141786a30(&DAT_146b4a7b8,&PTR_FUN_1467b2490);
  }
  return DAT_146b4a7b8;
}



// FUNCTION 1430e3090 FUN_1430e3090 body=47 status=ok
// SIG undefined FUN_1430e3090(void)

longlong FUN_1430e3090(void)

{
  if (DAT_146b4a7c0 == 0) {
    FUN_141786a30(&DAT_146b4a7c0,&PTR_FUN_1467b2510);
  }
  return DAT_146b4a7c0;
}



// FUNCTION 1430e30c0 FUN_1430e30c0 body=47 status=ok
// SIG undefined FUN_1430e30c0(void)

longlong FUN_1430e30c0(void)

{
  if (DAT_146b4a7c8 == 0) {
    FUN_141786a30(&DAT_146b4a7c8,&PTR_FUN_1467b2590);
  }
  return DAT_146b4a7c8;
}



// FUNCTION 1430e30f0 FUN_1430e30f0 body=47 status=ok
// SIG undefined FUN_1430e30f0(void)

longlong FUN_1430e30f0(void)

{
  if (DAT_146b4a7d0 == 0) {
    FUN_141786a30(&DAT_146b4a7d0,&PTR_FUN_1467b2610);
  }
  return DAT_146b4a7d0;
}



// FUNCTION 1430e3120 FUN_1430e3120 body=47 status=ok
// SIG undefined FUN_1430e3120(void)

longlong FUN_1430e3120(void)

{
  if (DAT_146b4a7d8 == 0) {
    FUN_141786a30(&DAT_146b4a7d8,&PTR_FUN_1467b2690);
  }
  return DAT_146b4a7d8;
}



// FUNCTION 1430e3150 FUN_1430e3150 body=47 status=ok
// SIG undefined FUN_1430e3150(void)

longlong FUN_1430e3150(void)

{
  if (DAT_146b4a7e0 == 0) {
    FUN_141786a30(&DAT_146b4a7e0,&PTR_FUN_1467b2710);
  }
  return DAT_146b4a7e0;
}



// FUNCTION 1430e3180 FUN_1430e3180 body=47 status=ok
// SIG undefined FUN_1430e3180(void)

longlong FUN_1430e3180(void)

{
  if (DAT_146b4a7e8 == 0) {
    FUN_141786a30(&DAT_146b4a7e8,&PTR_FUN_1467b27a0);
  }
  return DAT_146b4a7e8;
}



// FUNCTION 1430e31b0 FUN_1430e31b0 body=47 status=ok
// SIG undefined FUN_1430e31b0(void)

longlong FUN_1430e31b0(void)

{
  if (DAT_146b4a7f0 == 0) {
    FUN_141786a30(&DAT_146b4a7f0,&PTR_FUN_1467b2830);
  }
  return DAT_146b4a7f0;
}



// FUNCTION 1430e31e0 FUN_1430e31e0 body=47 status=ok
// SIG undefined FUN_1430e31e0(void)

longlong FUN_1430e31e0(void)

{
  if (DAT_146b4a7f8 == 0) {
    FUN_141786a30(&DAT_146b4a7f8,&PTR_FUN_1467b2870);
  }
  return DAT_146b4a7f8;
}



// FUNCTION 1430e3210 FUN_1430e3210 body=47 status=ok
// SIG undefined FUN_1430e3210(void)

longlong FUN_1430e3210(void)

{
  if (DAT_146b4a800 == 0) {
    FUN_141786a30(&DAT_146b4a800,&PTR_FUN_1467b28f0);
  }
  return DAT_146b4a800;
}



// FUNCTION 1430e3240 FUN_1430e3240 body=47 status=ok
// SIG undefined FUN_1430e3240(void)

longlong FUN_1430e3240(void)

{
  if (DAT_146b4a808 == 0) {
    FUN_141786a30(&DAT_146b4a808,&PTR_FUN_1467b2970);
  }
  return DAT_146b4a808;
}



// FUNCTION 1430e3280 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AUGWeapon_Hook::GetPrivateStaticClass(void)

{
  if (DAT_146b4a998 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"VehicleHitchAttachPtComponent",&DAT_146b4a998,
                  FUN_1430e6110,0x790,0x10000000,0,L"GbxVehicle",&LAB_1430e5030,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142a175e0,&LAB_140447700,0);
  }
  return DAT_146b4a998;
}



// FUNCTION 1430e3330 FUN_1430e3330 body=47 status=ok
// SIG undefined FUN_1430e3330(void)

longlong FUN_1430e3330(void)

{
  if (DAT_146b4a990 == 0) {
    FUN_141786440(&DAT_146b4a990,&PTR_GetPrivateStaticClass_145aa0470);
  }
  return DAT_146b4a990;
}



// FUNCTION 1430e3360 FUN_1430e3360 body=47 status=ok
// SIG undefined FUN_1430e3360(void)

longlong FUN_1430e3360(void)

{
  if (DAT_146b4a988 == 0) {
    FUN_141786a30(&DAT_146b4a988,&PTR_FUN_1467b4a90);
  }
  return DAT_146b4a988;
}



// FUNCTION 1430e33b0 FUN_1430e33b0 body=47 status=ok
// SIG undefined FUN_1430e33b0(void)

longlong FUN_1430e33b0(void)

{
  if (DAT_146b4a770 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b4a770,&PTR_s__Script_GbxVehicle_145aa6fd8);
  }
  return DAT_146b4a770;
}



// FUNCTION 1430e33e0 FUN_1430e33e0 body=53 status=ok
// SIG undefined FUN_1430e33e0(void)

void FUN_1430e33e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x158;
    *puVar1 = &PTR_FUN_145aa6d50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430e3420 FUN_1430e3420 body=53 status=ok
// SIG undefined FUN_1430e3420(void)

void FUN_1430e3420(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &PTR_FUN_145aa6e68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430e3460 FUN_1430e3460 body=47 status=ok
// SIG undefined FUN_1430e3460(void)

longlong FUN_1430e3460(void)

{
  if (DAT_146b4a830 == 0) {
    FUN_141786a30(&DAT_146b4a830,&PTR_FUN_1467b2e00);
  }
  return DAT_146b4a830;
}



// FUNCTION 1430e3490 FUN_1430e3490 body=47 status=ok
// SIG undefined FUN_1430e3490(void)

longlong FUN_1430e3490(void)

{
  if (DAT_146b4a910 == 0) {
    FUN_141786a30(&DAT_146b4a910,&PTR_FUN_1467b3f20);
  }
  return DAT_146b4a910;
}



// FUNCTION 1430e34c0 FUN_1430e34c0 body=47 status=ok
// SIG undefined FUN_1430e34c0(void)

longlong FUN_1430e34c0(void)

{
  if (DAT_146b4a980 == 0) {
    FUN_141786a30(&DAT_146b4a980,&PTR_FUN_1467b4a00);
  }
  return DAT_146b4a980;
}



// FUNCTION 1430e34f0 FUN_1430e34f0 body=47 status=ok
// SIG undefined FUN_1430e34f0(void)

longlong FUN_1430e34f0(void)

{
  if (DAT_146b4a9a0 == 0) {
    FUN_141786a30(&DAT_146b4a9a0,&PTR_FUN_1467b4d70);
  }
  return DAT_146b4a9a0;
}



// FUNCTION 1430e3520 FUN_1430e3520 body=47 status=ok
// SIG undefined FUN_1430e3520(void)

longlong FUN_1430e3520(void)

{
  if (DAT_146b4a9d0 == 0) {
    FUN_141786a30(&DAT_146b4a9d0,&PTR_FUN_1467b5200);
  }
  return DAT_146b4a9d0;
}



// FUNCTION 1430e3550 FUN_1430e3550 body=162 status=ok
// SIG undefined FUN_1430e3550(void)

longlong FUN_1430e3550(void)

{
  if (DAT_146b4ab40 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"GbxVehicleWheel",&DAT_146b4ab40,FUN_140447710,0x130,
                  0x10000000,0,L"Engine",&LAB_1430e4ec0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_14096caa0,&LAB_140447700,0);
  }
  return DAT_146b4ab40;
}



// FUNCTION 1430e3600 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ARemnantQuest::GetPrivateStaticClass(void)

{
  if (DAT_146b4a9c8 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"VehicleHitchComponent",&DAT_146b4a9c8,FUN_1430e6140,0x540,
                  0x10000000,0,L"GbxVehicle",&LAB_1430e5050,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  AFGPoleHologram::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b4a9c8;
}



// FUNCTION 1430e36b0 FUN_1430e36b0 body=151 status=ok
// SIG undefined FUN_1430e36b0(void)

longlong FUN_1430e36b0(void)

{
  if (DAT_146b4ab50 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"VehicleCollisionResponseModificationContext",
                  &DAT_146b4ab50,FUN_140447710,0x38,0x10000000,0,L"Engine",
                  InternalConstructor<UAIResource_Logic>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b4ab50;
}



// FUNCTION 1430e3750 FUN_1430e3750 body=47 status=ok
// SIG undefined FUN_1430e3750(void)

longlong FUN_1430e3750(void)

{
  if (DAT_146b4a9c0 == 0) {
    FUN_141786440(&DAT_146b4a9c0,&PTR_GetPrivateStaticClass_145aa0fb0);
  }
  return DAT_146b4a9c0;
}



// FUNCTION 1430e3780 FUN_1430e3780 body=47 status=ok
// SIG undefined FUN_1430e3780(void)

longlong FUN_1430e3780(void)

{
  if (DAT_146b4a9a8 == 0) {
    FUN_141786a30(&DAT_146b4a9a8,&PTR_FUN_1467b4df0);
  }
  return DAT_146b4a9a8;
}



// FUNCTION 1430e37b0 FUN_1430e37b0 body=47 status=ok
// SIG undefined FUN_1430e37b0(void)

longlong FUN_1430e37b0(void)

{
  if (DAT_146b4a9b0 == 0) {
    FUN_141786a30(&DAT_146b4a9b0,&PTR_FUN_1467b4e30);
  }
  return DAT_146b4a9b0;
}



// FUNCTION 1430e37e0 FUN_1430e37e0 body=47 status=ok
// SIG undefined FUN_1430e37e0(void)

longlong FUN_1430e37e0(void)

{
  if (DAT_146b4a9b8 == 0) {
    FUN_141786a30(&DAT_146b4a9b8,&PTR_FUN_1467b4eb0);
  }
  return DAT_146b4a9b8;
}



// FUNCTION 1430e3810 FUN_1430e3810 body=162 status=ok
// SIG undefined FUN_1430e3810(void)

longlong FUN_1430e3810(void)

{
  if (DAT_146b4ac18 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"WheeledVehicleMovementComponentNW",&DAT_146b4ac18,
                  FUN_1430e6200,0xd40,0x10000004,0,L"GbxVehicle",&LAB_1430e5140,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  AFGConveyorPoleStackable::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b4ac18;
}



// FUNCTION 1430e38c0 FUN_1430e38c0 body=162 status=ok
// SIG undefined FUN_1430e38c0(void)

longlong FUN_1430e38c0(void)

{
  if (DAT_146b4a828 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"VehicleAirControlComponent",&DAT_146b4a828,FUN_140447710,
                  0x210,0x10000000,0,L"GbxVehicle",&LAB_1430e4f00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b4a828;
}



// FUNCTION 1430e3990 FUN_1430e3990 body=162 status=ok
// SIG undefined FUN_1430e3990(void)

longlong FUN_1430e3990(void)

{
  if (DAT_146b4aa08 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"VehicleHoverComponent",&DAT_146b4aa08,FUN_1430e6170,0x288,
                  0x10000000,0,L"GbxVehicle",&LAB_1430e5070,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b4aa08;
}



// FUNCTION 1430e3a40 FUN_1430e3a40 body=47 status=ok
// SIG undefined FUN_1430e3a40(void)

longlong FUN_1430e3a40(void)

{
  if (DAT_146b4aa00 == 0) {
    FUN_141786440(&DAT_146b4aa00,&PTR_FUN_145aa1690);
  }
  return DAT_146b4aa00;
}



// FUNCTION 1430e3a70 FUN_1430e3a70 body=47 status=ok
// SIG undefined FUN_1430e3a70(void)

longlong FUN_1430e3a70(void)

{
  if (DAT_146b4a9e8 == 0) {
    FUN_141786a30(&DAT_146b4a9e8,&PTR_FUN_1467b53e0);
  }
  return DAT_146b4a9e8;
}



// FUNCTION 1430e3aa0 FUN_1430e3aa0 body=47 status=ok
// SIG undefined FUN_1430e3aa0(void)

longlong FUN_1430e3aa0(void)

{
  if (DAT_146b4a9f0 == 0) {
    FUN_141786a30(&DAT_146b4a9f0,&PTR_FUN_1467b5470);
  }
  return DAT_146b4a9f0;
}



// FUNCTION 1430e3ad0 FUN_1430e3ad0 body=47 status=ok
// SIG undefined FUN_1430e3ad0(void)

longlong FUN_1430e3ad0(void)

{
  if (DAT_146b4a9f8 == 0) {
    FUN_141786a30(&DAT_146b4a9f8,&PTR_FUN_1467b55b0);
  }
  return DAT_146b4a9f8;
}



// FUNCTION 1430e3b00 FUN_1430e3b00 body=53 status=ok
// SIG undefined FUN_1430e3b00(void)

void FUN_1430e3b00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_145aa7690;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1430e3b50 FUN_1430e3b50 body=53 status=ok
// SIG undefined FUN_1430e3b50(void)

void FUN_1430e3b50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_145aa7468;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430e3b90 FUN_1430e3b90 body=47 status=ok
// SIG undefined FUN_1430e3b90(void)

longlong FUN_1430e3b90(void)

{
  if (DAT_146b4a798 == 0) {
    FUN_141786440(&DAT_146b4a798,&PTR_GetPrivateStaticClass_145aa1e30);
  }
  return DAT_146b4a798;
}



// FUNCTION 1430e3bc0 FUN_1430e3bc0 body=47 status=ok
// SIG undefined FUN_1430e3bc0(void)

longlong FUN_1430e3bc0(void)

{
  if (DAT_146b4a778 == 0) {
    FUN_141786a30(&DAT_146b4a778,&PTR_FUN_1467b1a10);
  }
  return DAT_146b4a778;
}



// FUNCTION 1430e3bf0 FUN_1430e3bf0 body=162 status=ok
// SIG undefined FUN_1430e3bf0(void)

longlong FUN_1430e3bf0(void)

{
  if (DAT_146b4a908 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"VehicleContactPtModifierInterface",&DAT_146b4a908,
                  FUN_140447710,0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b4a908;
}



// FUNCTION 1430e3ca0 FUN_1430e3ca0 body=47 status=ok
// SIG undefined FUN_1430e3ca0(void)

longlong FUN_1430e3ca0(void)

{
  if (DAT_146b4a780 == 0) {
    FUN_141786a30(&DAT_146b4a780,&PTR_FUN_1467b1a90);
  }
  return DAT_146b4a780;
}



// FUNCTION 1430e3cd0 FUN_1430e3cd0 body=47 status=ok
// SIG undefined FUN_1430e3cd0(void)

longlong FUN_1430e3cd0(void)

{
  if (DAT_146b4a788 == 0) {
    FUN_141786a30(&DAT_146b4a788,&PTR_FUN_1467b1ad0);
  }
  return DAT_146b4a788;
}



// FUNCTION 1430e3d00 FUN_1430e3d00 body=47 status=ok
// SIG undefined FUN_1430e3d00(void)

longlong FUN_1430e3d00(void)

{
  if (DAT_146b4a790 == 0) {
    FUN_141786a30(&DAT_146b4a790,&PTR_FUN_1467b1b10);
  }
  return DAT_146b4a790;
}



// FUNCTION 1430e3d40 FUN_1430e3d40 body=47 status=ok
// SIG undefined FUN_1430e3d40(void)

longlong FUN_1430e3d40(void)

{
  if (DAT_146b4ac10 == 0) {
    FUN_141786440(&DAT_146b4ac10,&PTR_FUN_145aa5130);
  }
  return DAT_146b4ac10;
}



// FUNCTION 1430e3d70 FUN_1430e3d70 body=47 status=ok
// SIG undefined FUN_1430e3d70(void)

longlong FUN_1430e3d70(void)

{
  if (DAT_146b4ab58 == 0) {
    FUN_141786a30(&DAT_146b4ab58,&PTR_FUN_1467b6ec0);
  }
  return DAT_146b4ab58;
}



// FUNCTION 1430e3da0 FUN_1430e3da0 body=47 status=ok
// SIG undefined FUN_1430e3da0(void)

longlong FUN_1430e3da0(void)

{
  if (DAT_146b4ab60 == 0) {
    FUN_141786a30(&DAT_146b4ab60,&PTR_FUN_1467b6f50);
  }
  return DAT_146b4ab60;
}



// FUNCTION 1430e3dd0 FUN_1430e3dd0 body=47 status=ok
// SIG undefined FUN_1430e3dd0(void)

longlong FUN_1430e3dd0(void)

{
  if (DAT_146b4ab68 == 0) {
    FUN_141786a30(&DAT_146b4ab68,&PTR_FUN_1467b7110);
  }
  return DAT_146b4ab68;
}



// FUNCTION 1430e3e00 FUN_1430e3e00 body=47 status=ok
// SIG undefined FUN_1430e3e00(void)

longlong FUN_1430e3e00(void)

{
  if (DAT_146b4ab70 == 0) {
    FUN_141786a30(&DAT_146b4ab70,&PTR_FUN_1467b71a0);
  }
  return DAT_146b4ab70;
}



// FUNCTION 1430e3e30 FUN_1430e3e30 body=47 status=ok
// SIG undefined FUN_1430e3e30(void)

longlong FUN_1430e3e30(void)

{
  if (DAT_146b4ab78 == 0) {
    FUN_141786a30(&DAT_146b4ab78,&PTR_FUN_1467b7220);
  }
  return DAT_146b4ab78;
}



// FUNCTION 1430e3e60 FUN_1430e3e60 body=47 status=ok
// SIG undefined FUN_1430e3e60(void)

longlong FUN_1430e3e60(void)

{
  if (DAT_146b4ab80 == 0) {
    FUN_141786a30(&DAT_146b4ab80,&PTR_FUN_1467b72e0);
  }
  return DAT_146b4ab80;
}



// FUNCTION 1430e3e90 FUN_1430e3e90 body=47 status=ok
// SIG undefined FUN_1430e3e90(void)

longlong FUN_1430e3e90(void)

{
  if (DAT_146b4ab88 == 0) {
    FUN_141786a30(&DAT_146b4ab88,&PTR_FUN_1467b7370);
  }
  return DAT_146b4ab88;
}



// FUNCTION 1430e3ec0 FUN_1430e3ec0 body=47 status=ok
// SIG undefined FUN_1430e3ec0(void)

longlong FUN_1430e3ec0(void)

{
  if (DAT_146b4ab90 == 0) {
    FUN_141786a30(&DAT_146b4ab90,&PTR_FUN_1467b73f0);
  }
  return DAT_146b4ab90;
}



// FUNCTION 1430e3ef0 FUN_1430e3ef0 body=47 status=ok
// SIG undefined FUN_1430e3ef0(void)

longlong FUN_1430e3ef0(void)

{
  if (DAT_146b4ab98 == 0) {
    FUN_141786a30(&DAT_146b4ab98,&PTR_FUN_1467b7480);
  }
  return DAT_146b4ab98;
}



// FUNCTION 1430e3f20 FUN_1430e3f20 body=47 status=ok
// SIG undefined FUN_1430e3f20(void)

longlong FUN_1430e3f20(void)

{
  if (DAT_146b4aba0 == 0) {
    FUN_141786a30(&DAT_146b4aba0,&PTR_FUN_1467b7510);
  }
  return DAT_146b4aba0;
}



// FUNCTION 1430e3f50 FUN_1430e3f50 body=47 status=ok
// SIG undefined FUN_1430e3f50(void)

longlong FUN_1430e3f50(void)

{
  if (DAT_146b4aba8 == 0) {
    FUN_141786a30(&DAT_146b4aba8,&PTR_FUN_1467b75a0);
  }
  return DAT_146b4aba8;
}



// FUNCTION 1430e3f80 FUN_1430e3f80 body=47 status=ok
// SIG undefined FUN_1430e3f80(void)

longlong FUN_1430e3f80(void)

{
  if (DAT_146b4abb0 == 0) {
    FUN_141786a30(&DAT_146b4abb0,&PTR_FUN_1467b75e0);
  }
  return DAT_146b4abb0;
}



// FUNCTION 1430e3fb0 FUN_1430e3fb0 body=47 status=ok
// SIG undefined FUN_1430e3fb0(void)

longlong FUN_1430e3fb0(void)

{
  if (DAT_146b4abb8 == 0) {
    FUN_141786a30(&DAT_146b4abb8,&PTR_FUN_1467b7670);
  }
  return DAT_146b4abb8;
}



// FUNCTION 1430e3fe0 FUN_1430e3fe0 body=47 status=ok
// SIG undefined FUN_1430e3fe0(void)

longlong FUN_1430e3fe0(void)

{
  if (DAT_146b4abc0 == 0) {
    FUN_141786a30(&DAT_146b4abc0,&PTR_FUN_1467b7700);
  }
  return DAT_146b4abc0;
}



// FUNCTION 1430e4010 FUN_1430e4010 body=47 status=ok
// SIG undefined FUN_1430e4010(void)

longlong FUN_1430e4010(void)

{
  if (DAT_146b4abc8 == 0) {
    FUN_141786a30(&DAT_146b4abc8,&PTR_FUN_1467b7780);
  }
  return DAT_146b4abc8;
}



// FUNCTION 1430e4040 FUN_1430e4040 body=47 status=ok
// SIG undefined FUN_1430e4040(void)

longlong FUN_1430e4040(void)

{
  if (DAT_146b4abd0 == 0) {
    FUN_141786a30(&DAT_146b4abd0,&PTR_FUN_1467b7810);
  }
  return DAT_146b4abd0;
}



// FUNCTION 1430e4070 FUN_1430e4070 body=47 status=ok
// SIG undefined FUN_1430e4070(void)

longlong FUN_1430e4070(void)

{
  if (DAT_146b4abd8 == 0) {
    FUN_141786a30(&DAT_146b4abd8,&PTR_FUN_1467b78c0);
  }
  return DAT_146b4abd8;
}



// FUNCTION 1430e40a0 FUN_1430e40a0 body=47 status=ok
// SIG undefined FUN_1430e40a0(void)

longlong FUN_1430e40a0(void)

{
  if (DAT_146b4abe0 == 0) {
    FUN_141786a30(&DAT_146b4abe0,&PTR_FUN_1467b7970);
  }
  return DAT_146b4abe0;
}



// FUNCTION 1430e40d0 FUN_1430e40d0 body=47 status=ok
// SIG undefined FUN_1430e40d0(void)

longlong FUN_1430e40d0(void)

{
  if (DAT_146b4abe8 == 0) {
    FUN_141786a30(&DAT_146b4abe8,&PTR_FUN_1467b7a20);
  }
  return DAT_146b4abe8;
}



// FUNCTION 1430e4100 FUN_1430e4100 body=47 status=ok
// SIG undefined FUN_1430e4100(void)

longlong FUN_1430e4100(void)

{
  if (DAT_146b4abf0 == 0) {
    FUN_141786a30(&DAT_146b4abf0,&PTR_FUN_1467b7ab0);
  }
  return DAT_146b4abf0;
}



// FUNCTION 1430e4130 FUN_1430e4130 body=47 status=ok
// SIG undefined FUN_1430e4130(void)

longlong FUN_1430e4130(void)

{
  if (DAT_146b4abf8 == 0) {
    FUN_141786a30(&DAT_146b4abf8,&PTR_FUN_1467b7b40);
  }
  return DAT_146b4abf8;
}



// FUNCTION 1430e4160 FUN_1430e4160 body=47 status=ok
// SIG undefined FUN_1430e4160(void)

longlong FUN_1430e4160(void)

{
  if (DAT_146b4ac00 == 0) {
    FUN_141786a30(&DAT_146b4ac00,&PTR_FUN_1467b7bf0);
  }
  return DAT_146b4ac00;
}



// FUNCTION 1430e4190 FUN_1430e4190 body=47 status=ok
// SIG undefined FUN_1430e4190(void)

longlong FUN_1430e4190(void)

{
  if (DAT_146b4ac08 == 0) {
    FUN_141786a30(&DAT_146b4ac08,&PTR_FUN_1467b7c30);
  }
  return DAT_146b4ac08;
}



// FUNCTION 1430e41e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUserObjectListEntry::GetPrivateStaticClass(void)

{
  if (DAT_146b4aa30 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"VehicleMovementInterface",&DAT_146b4aa30,
                  StaticRegisterNativesUUserObjectListEntry,0x28,0x10004001,0,L"Engine",
                  &LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b4aa30;
}



// FUNCTION 1430e4290 FUN_1430e4290 body=47 status=ok
// SIG undefined FUN_1430e4290(void)

longlong FUN_1430e4290(void)

{
  if (DAT_146b4aa28 == 0) {
    FUN_141786440(&DAT_146b4aa28,&PTR_GetPrivateStaticClass_145aa2910);
  }
  return DAT_146b4aa28;
}



// FUNCTION 1430e42c0 FUN_1430e42c0 body=47 status=ok
// SIG undefined FUN_1430e42c0(void)

longlong FUN_1430e42c0(void)

{
  if (DAT_146b4aa20 == 0) {
    FUN_141786a30(&DAT_146b4aa20,&PTR_FUN_1467b5a60);
  }
  return DAT_146b4aa20;
}



// FUNCTION 1430e42f0 FUN_1430e42f0 body=47 status=ok
// SIG undefined FUN_1430e42f0(void)

longlong FUN_1430e42f0(void)

{
  if (DAT_146b4a8c0 == 0) {
    FUN_141786440(&DAT_146b4a8c0,&PTR_GetPrivateStaticClass_145aa3e50);
  }
  return DAT_146b4a8c0;
}



// FUNCTION 1430e4320 FUN_1430e4320 body=47 status=ok
// SIG undefined FUN_1430e4320(void)

longlong FUN_1430e4320(void)

{
  if (DAT_146b4a850 == 0) {
    FUN_141786a30(&DAT_146b4a850,&PTR_FUN_1467b2f90);
  }
  return DAT_146b4a850;
}



// FUNCTION 1430e4350 FUN_1430e4350 body=47 status=ok
// SIG undefined FUN_1430e4350(void)

longlong FUN_1430e4350(void)

{
  if (DAT_146b4a858 == 0) {
    FUN_141786a30(&DAT_146b4a858,&PTR_FUN_1467b3020);
  }
  return DAT_146b4a858;
}



// FUNCTION 1430e4380 FUN_1430e4380 body=47 status=ok
// SIG undefined FUN_1430e4380(void)

longlong FUN_1430e4380(void)

{
  if (DAT_146b4a860 == 0) {
    FUN_141786a30(&DAT_146b4a860,&PTR_FUN_1467b30a0);
  }
  return DAT_146b4a860;
}



// FUNCTION 1430e43b0 FUN_1430e43b0 body=47 status=ok
// SIG undefined FUN_1430e43b0(void)

longlong FUN_1430e43b0(void)

{
  if (DAT_146b4a868 == 0) {
    FUN_141786a30(&DAT_146b4a868,&PTR_FUN_1467b3120);
  }
  return DAT_146b4a868;
}



// FUNCTION 1430e43e0 FUN_1430e43e0 body=47 status=ok
// SIG undefined FUN_1430e43e0(void)

longlong FUN_1430e43e0(void)

{
  if (DAT_146b4a870 == 0) {
    FUN_141786a30(&DAT_146b4a870,&PTR_FUN_1467b31a0);
  }
  return DAT_146b4a870;
}



// FUNCTION 1430e4410 FUN_1430e4410 body=47 status=ok
// SIG undefined FUN_1430e4410(void)

longlong FUN_1430e4410(void)

{
  if (DAT_146b4a878 == 0) {
    FUN_141786a30(&DAT_146b4a878,&PTR_FUN_1467b3220);
  }
  return DAT_146b4a878;
}



// FUNCTION 1430e4440 FUN_1430e4440 body=47 status=ok
// SIG undefined FUN_1430e4440(void)

longlong FUN_1430e4440(void)

{
  if (DAT_146b4a880 == 0) {
    FUN_141786a30(&DAT_146b4a880,&PTR_FUN_1467b3260);
  }
  return DAT_146b4a880;
}



// FUNCTION 1430e4470 FUN_1430e4470 body=47 status=ok
// SIG undefined FUN_1430e4470(void)

longlong FUN_1430e4470(void)

{
  if (DAT_146b4a888 == 0) {
    FUN_141786a30(&DAT_146b4a888,&PTR_FUN_1467b32a0);
  }
  return DAT_146b4a888;
}



// FUNCTION 1430e44a0 FUN_1430e44a0 body=47 status=ok
// SIG undefined FUN_1430e44a0(void)

longlong FUN_1430e44a0(void)

{
  if (DAT_146b4a890 == 0) {
    FUN_141786a30(&DAT_146b4a890,&PTR_FUN_1467b3330);
  }
  return DAT_146b4a890;
}



// FUNCTION 1430e44d0 FUN_1430e44d0 body=47 status=ok
// SIG undefined FUN_1430e44d0(void)

longlong FUN_1430e44d0(void)

{
  if (DAT_146b4a898 == 0) {
    FUN_141786a30(&DAT_146b4a898,&PTR_FUN_1467b3370);
  }
  return DAT_146b4a898;
}



// FUNCTION 1430e4500 FUN_1430e4500 body=47 status=ok
// SIG undefined FUN_1430e4500(void)

longlong FUN_1430e4500(void)

{
  if (DAT_146b4a8a0 == 0) {
    FUN_141786a30(&DAT_146b4a8a0,&PTR_FUN_1467b3430);
  }
  return DAT_146b4a8a0;
}



// FUNCTION 1430e4530 FUN_1430e4530 body=47 status=ok
// SIG undefined FUN_1430e4530(void)

longlong FUN_1430e4530(void)

{
  if (DAT_146b4a8a8 == 0) {
    FUN_141786a30(&DAT_146b4a8a8,&PTR_FUN_1467b3470);
  }
  return DAT_146b4a8a8;
}



// FUNCTION 1430e4560 FUN_1430e4560 body=47 status=ok
// SIG undefined FUN_1430e4560(void)

longlong FUN_1430e4560(void)

{
  if (DAT_146b4a8b0 == 0) {
    FUN_141786a30(&DAT_146b4a8b0,&PTR_FUN_1467b34b0);
  }
  return DAT_146b4a8b0;
}



// FUNCTION 1430e4590 FUN_1430e4590 body=47 status=ok
// SIG undefined FUN_1430e4590(void)

longlong FUN_1430e4590(void)

{
  if (DAT_146b4a8b8 == 0) {
    FUN_141786a30(&DAT_146b4a8b8,&PTR_FUN_1467b3540);
  }
  return DAT_146b4a8b8;
}



// FUNCTION 1430e45d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APlayerState::GetPrivateStaticClass(void)

{
  if (DAT_146b4aa60 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"VehiclePartActor",&DAT_146b4aa60,FUN_1430e6050,0x478,
                  0x10000000,0,L"Engine",&LAB_1430e4ea0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b4aa60;
}



// FUNCTION 1430e4680 FUN_1430e4680 body=53 status=ok
// SIG undefined FUN_1430e4680(void)

void FUN_1430e4680(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_145aa7170;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430e46c0 FUN_1430e46c0 body=47 status=ok
// SIG undefined FUN_1430e46c0(void)

longlong FUN_1430e46c0(void)

{
  if (DAT_146b4aa58 == 0) {
    FUN_141786440(&DAT_146b4aa58,&PTR_GetPrivateStaticClass_145aa35c0);
  }
  return DAT_146b4aa58;
}



// FUNCTION 1430e46f0 FUN_1430e46f0 body=47 status=ok
// SIG undefined FUN_1430e46f0(void)

longlong FUN_1430e46f0(void)

{
  if (DAT_146b4aa38 == 0) {
    FUN_141786a30(&DAT_146b4aa38,&PTR_FUN_1467b5ad0);
  }
  return DAT_146b4aa38;
}



// FUNCTION 1430e4720 FUN_1430e4720 body=47 status=ok
// SIG undefined FUN_1430e4720(void)

longlong FUN_1430e4720(void)

{
  if (DAT_146b4aa40 == 0) {
    FUN_141786a30(&DAT_146b4aa40,&PTR_FUN_1467b5b10);
  }
  return DAT_146b4aa40;
}



// FUNCTION 1430e4750 FUN_1430e4750 body=47 status=ok
// SIG undefined FUN_1430e4750(void)

longlong FUN_1430e4750(void)

{
  if (DAT_146b4aa48 == 0) {
    FUN_141786a30(&DAT_146b4aa48,&PTR_FUN_1467b5b50);
  }
  return DAT_146b4aa48;
}



// FUNCTION 1430e4780 FUN_1430e4780 body=47 status=ok
// SIG undefined FUN_1430e4780(void)

longlong FUN_1430e4780(void)

{
  if (DAT_146b4aa50 == 0) {
    FUN_141786a30(&DAT_146b4aa50,&PTR_FUN_1467b5bd0);
  }
  return DAT_146b4aa50;
}



// FUNCTION 1430e47e0 FUN_1430e47e0 body=162 status=ok
// SIG undefined FUN_1430e47e0(void)

longlong FUN_1430e47e0(void)

{
  if (DAT_146b4aa90 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"VehiclePartSelectionData",&DAT_146b4aa90,FUN_140447710,
                  0x98,0x10000000,0,L"Engine",FUN_1430e50f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPawnAction_BlueprintBase::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b4aa90;
}



// FUNCTION 1430e48a0 FUN_1430e48a0 body=53 status=ok
// SIG undefined FUN_1430e48a0(void)

void FUN_1430e48a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_145aa7aa0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430e48f0 FUN_1430e48f0 body=53 status=ok
// SIG undefined FUN_1430e48f0(void)

void FUN_1430e48f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x150;
    *puVar1 = &PTR_FUN_145aa7350;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430e4930 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGameStateBase::GetPrivateStaticClass(void)

{
  if (DAT_146b4ab00 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"VehiclePowerSlideComponent",&DAT_146b4ab00,
                  StaticRegisterNativesAGameStateBase,0x368,0x10000000,0,L"GbxVehicle",
                  &LAB_1430e5120,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b4ab00;
}



// FUNCTION 1430e49e0 FUN_1430e49e0 body=47 status=ok
// SIG undefined FUN_1430e49e0(void)

longlong FUN_1430e49e0(void)

{
  if (DAT_146b4aaf8 == 0) {
    FUN_141786440(&DAT_146b4aaf8,&PTR_GetPrivateStaticClass_145aa5f30);
  }
  return DAT_146b4aaf8;
}



// FUNCTION 1430e4a10 FUN_1430e4a10 body=47 status=ok
// SIG undefined FUN_1430e4a10(void)

longlong FUN_1430e4a10(void)

{
  if (DAT_146b4aab0 == 0) {
    FUN_141786a30(&DAT_146b4aab0,&PTR_FUN_1467b5ff0);
  }
  return DAT_146b4aab0;
}



// FUNCTION 1430e4a40 FUN_1430e4a40 body=47 status=ok
// SIG undefined FUN_1430e4a40(void)

longlong FUN_1430e4a40(void)

{
  if (DAT_146b4aab8 == 0) {
    FUN_141786a30(&DAT_146b4aab8,&PTR_FUN_1467b6070);
  }
  return DAT_146b4aab8;
}



// FUNCTION 1430e4a70 FUN_1430e4a70 body=47 status=ok
// SIG undefined FUN_1430e4a70(void)

longlong FUN_1430e4a70(void)

{
  if (DAT_146b4aac0 == 0) {
    FUN_141786a30(&DAT_146b4aac0,&PTR_FUN_1467b6100);
  }
  return DAT_146b4aac0;
}



// FUNCTION 1430e4aa0 FUN_1430e4aa0 body=47 status=ok
// SIG undefined FUN_1430e4aa0(void)

longlong FUN_1430e4aa0(void)

{
  if (DAT_146b4aac8 == 0) {
    FUN_141786a30(&DAT_146b4aac8,&PTR_FUN_1467b6190);
  }
  return DAT_146b4aac8;
}



// FUNCTION 1430e4ad0 FUN_1430e4ad0 body=162 status=ok
// SIG undefined FUN_1430e4ad0(void)

longlong FUN_1430e4ad0(void)

{
  if (DAT_146b4a968 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"VehicleDigiThrustComponent",&DAT_146b4a968,FUN_1430e60e0,
                  0x2d8,0x10000000,0,L"GbxVehicle",&LAB_1430e4ff0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b4a968;
}



// FUNCTION 1430e4b80 FUN_1430e4b80 body=47 status=ok
// SIG undefined FUN_1430e4b80(void)

longlong FUN_1430e4b80(void)

{
  if (DAT_146b4aad0 == 0) {
    FUN_141786a30(&DAT_146b4aad0,&PTR_FUN_1467b6220);
  }
  return DAT_146b4aad0;
}



// FUNCTION 1430e4bb0 FUN_1430e4bb0 body=47 status=ok
// SIG undefined FUN_1430e4bb0(void)

longlong FUN_1430e4bb0(void)

{
  if (DAT_146b4aad8 == 0) {
    FUN_141786a30(&DAT_146b4aad8,&PTR_FUN_1467b62b0);
  }
  return DAT_146b4aad8;
}



// FUNCTION 1430e4be0 FUN_1430e4be0 body=47 status=ok
// SIG undefined FUN_1430e4be0(void)

longlong FUN_1430e4be0(void)

{
  if (DAT_146b4aae0 == 0) {
    FUN_141786a30(&DAT_146b4aae0,&PTR_FUN_1467b6330);
  }
  return DAT_146b4aae0;
}



// FUNCTION 1430e4c10 FUN_1430e4c10 body=47 status=ok
// SIG undefined FUN_1430e4c10(void)

longlong FUN_1430e4c10(void)

{
  if (DAT_146b4aae8 == 0) {
    FUN_141786a30(&DAT_146b4aae8,&PTR_FUN_1467b63b0);
  }
  return DAT_146b4aae8;
}



// FUNCTION 1430e4c40 FUN_1430e4c40 body=47 status=ok
// SIG undefined FUN_1430e4c40(void)

longlong FUN_1430e4c40(void)

{
  if (DAT_146b4aaf0 == 0) {
    FUN_141786a30(&DAT_146b4aaf0,&PTR_FUN_1467b6440);
  }
  return DAT_146b4aaf0;
}



// FUNCTION 1430e4c80 FUN_1430e4c80 body=47 status=ok
// SIG undefined FUN_1430e4c80(void)

longlong FUN_1430e4c80(void)

{
  if (DAT_146b4a960 == 0) {
    FUN_141786440(&DAT_146b4a960,&PTR_FUN_145aa6940);
  }
  return DAT_146b4a960;
}



// FUNCTION 1430e4cb0 FUN_1430e4cb0 body=47 status=ok
// SIG undefined FUN_1430e4cb0(void)

longlong FUN_1430e4cb0(void)

{
  if (DAT_146b4a918 == 0) {
    FUN_141786a30(&DAT_146b4a918,&PTR_FUN_1467b3fa0);
  }
  return DAT_146b4a918;
}



// FUNCTION 1430e4ce0 FUN_1430e4ce0 body=47 status=ok
// SIG undefined FUN_1430e4ce0(void)

longlong FUN_1430e4ce0(void)

{
  if (DAT_146b4a920 == 0) {
    FUN_141786a30(&DAT_146b4a920,&PTR_FUN_1467b4020);
  }
  return DAT_146b4a920;
}



// FUNCTION 1430e4d10 FUN_1430e4d10 body=47 status=ok
// SIG undefined FUN_1430e4d10(void)

longlong FUN_1430e4d10(void)

{
  if (DAT_146b4a928 == 0) {
    FUN_141786a30(&DAT_146b4a928,&PTR_FUN_1467b40b0);
  }
  return DAT_146b4a928;
}



// FUNCTION 1430e4d40 FUN_1430e4d40 body=47 status=ok
// SIG undefined FUN_1430e4d40(void)

longlong FUN_1430e4d40(void)

{
  if (DAT_146b4a930 == 0) {
    FUN_141786a30(&DAT_146b4a930,&PTR_FUN_1467b40f0);
  }
  return DAT_146b4a930;
}



// FUNCTION 1430e4d70 FUN_1430e4d70 body=47 status=ok
// SIG undefined FUN_1430e4d70(void)

longlong FUN_1430e4d70(void)

{
  if (DAT_146b4a938 == 0) {
    FUN_141786a30(&DAT_146b4a938,&PTR_FUN_1467b4130);
  }
  return DAT_146b4a938;
}



// FUNCTION 1430e4da0 FUN_1430e4da0 body=47 status=ok
// SIG undefined FUN_1430e4da0(void)

longlong FUN_1430e4da0(void)

{
  if (DAT_146b4a940 == 0) {
    FUN_141786a30(&DAT_146b4a940,&PTR_FUN_1467b4170);
  }
  return DAT_146b4a940;
}



// FUNCTION 1430e4dd0 FUN_1430e4dd0 body=47 status=ok
// SIG undefined FUN_1430e4dd0(void)

longlong FUN_1430e4dd0(void)

{
  if (DAT_146b4a948 == 0) {
    FUN_141786a30(&DAT_146b4a948,&PTR_FUN_1467b41b0);
  }
  return DAT_146b4a948;
}



// FUNCTION 1430e4e00 FUN_1430e4e00 body=47 status=ok
// SIG undefined FUN_1430e4e00(void)

longlong FUN_1430e4e00(void)

{
  if (DAT_146b4a950 == 0) {
    FUN_141786a30(&DAT_146b4a950,&PTR_FUN_1467b41f0);
  }
  return DAT_146b4a950;
}



// FUNCTION 1430e4e30 FUN_1430e4e30 body=47 status=ok
// SIG undefined FUN_1430e4e30(void)

longlong FUN_1430e4e30(void)

{
  if (DAT_146b4a958 == 0) {
    FUN_141786a30(&DAT_146b4a958,&PTR_FUN_1467b4270);
  }
  return DAT_146b4a958;
}



// FUNCTION 1430e4f40 FUN_1430e4f40 body=171 status=ok
// SIG undefined FUN_1430e4f40(void)

void FUN_1430e4f40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *(undefined1 *)(puVar1 + 6) = 0;
    *puVar1 = &PTR_FUN_144b52c28;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0xbf800000;
    FUN_1430c8100(puVar1 + 7);
    FUN_1430c8100(puVar1 + 0x31);
    puVar1[0x60] = 0x43340000;
    puVar1[0x5b] = 0;
    *(undefined1 *)(puVar1 + 0x5c) = 0;
    puVar1[0x5d] = 0;
    puVar1[0x5e] = 0;
    *(undefined2 *)(puVar1 + 0x5f) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2fc) = 0;
    *(undefined1 *)(puVar1 + 0x61) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x30c) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x314) = 0;
    FRuntimeFloatCurve::FRuntimeFloatCurve(puVar1 + 99);
    *(undefined4 *)(puVar1 + 0x72) = 0x40a00000;
  }
  return;
}



// FUNCTION 1430e50b0 FUN_1430e50b0 body=64 status=ok
// SIG undefined FUN_1430e50b0(void)

void FUN_1430e50b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142fdf540(puVar1,param_1);
    *puVar1 = &PTR_FUN_144b54998;
    puVar1[0x20] = &PTR_LAB_144b54c30;
    puVar1[0x4a] = 0;
  }
  return;
}



// FUNCTION 1430e50f0 FUN_1430e50f0 body=41 status=ok
// SIG undefined FUN_1430e50f0(void)

void FUN_1430e50f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142d7a640(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__145aa7818;
  }
  return;
}



// FUNCTION 1430e5160 FUN_1430e5160 body=688 status=ok
// SIG undefined FUN_1430e5160(void)

longlong FUN_1430e5160(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  
  puVar8 = (undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  if (puVar8 != (undefined8 *)(param_2 + 0x10)) {
    iVar10 = *(int *)(param_2 + 0x18);
    pvVar2 = *(void **)(param_2 + 0x10);
    *(int *)(param_1 + 0x18) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    else {
      TArray<FExposedValueCopyRecord,FDefaultAllocator>::ResizeForCopy(puVar8,iVar10);
      _guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar2,(longlong)iVar10 * 0x68);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  uVar7 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = uVar7;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  uVar7 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar7;
  uVar4 = *(undefined4 *)(param_2 + 0xec);
  uVar5 = *(undefined4 *)(param_2 + 0xf0);
  uVar6 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = uVar4;
  *(undefined4 *)(param_1 + 0xf0) = uVar5;
  *(undefined4 *)(param_1 + 0xf4) = uVar6;
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  if (plVar1 != (longlong *)(param_2 + 0x108)) {
    iVar10 = *(int *)(param_2 + 0x110);
    lVar3 = *(longlong *)(param_2 + 0x108);
    *(int *)(param_1 + 0x110) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x114) == 0)) {
      *(undefined4 *)(param_1 + 0x114) = 0;
    }
    else {
      TArray<FPropChildSocketData,FDefaultAllocator>::ResizeForCopy(plVar1,iVar10);
      puVar11 = (undefined4 *)*plVar1;
      if (iVar10 != 0) {
        puVar8 = (undefined8 *)(lVar3 + 0x30);
        puVar9 = (undefined8 *)(puVar11 + 0xc);
        do {
          *puVar11 = *(undefined4 *)(puVar8 + -6);
          puVar11 = puVar11 + 0x10;
          uVar7 = puVar8[-3];
          puVar9[-4] = puVar8[-4];
          puVar9[-3] = uVar7;
          uVar7 = puVar8[-1];
          puVar9[-2] = puVar8[-2];
          puVar9[-1] = uVar7;
          uVar7 = puVar8[1];
          *puVar9 = *puVar8;
          puVar9[1] = uVar7;
          iVar10 = iVar10 + -1;
          puVar8 = puVar8 + 8;
          puVar9 = puVar9 + 8;
        } while (iVar10 != 0);
      }
    }
  }
  puVar8 = (undefined8 *)(param_1 + 0x140);
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
  *(undefined1 *)(param_1 + 0x119) = *(undefined1 *)(param_2 + 0x119);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  uVar4 = *(undefined4 *)(param_2 + 0x124);
  uVar5 = *(undefined4 *)(param_2 + 0x128);
  uVar6 = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x124) = uVar4;
  *(undefined4 *)(param_1 + 0x128) = uVar5;
  *(undefined4 *)(param_1 + 300) = uVar6;
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  if (puVar8 != (undefined8 *)(param_2 + 0x140)) {
    iVar10 = *(int *)(param_2 + 0x148);
    pvVar2 = *(void **)(param_2 + 0x140);
    *(int *)(param_1 + 0x148) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x14c) == 0)) {
      *(undefined4 *)(param_1 + 0x14c) = 0;
    }
    else {
      FUN_1405d95e0(puVar8,iVar10);
      _guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar2,(longlong)iVar10 * 0x78);
    }
  }
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  return param_1;
}



// FUNCTION 1430e5410 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UGameplayTask_SpawnActor::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1430e5490 FUN_1430e5490 body=45 status=ok
// SIG undefined FUN_1430e5490(void)

void FUN_1430e5490(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FWeakObjectPtr::operator=(param_2 + 1,0);
  param_2[2] = 0;
  return;
}



// FUNCTION 1430e54c0 FUN_1430e54c0 body=121 status=ok
// SIG undefined FUN_1430e54c0(void)

void FUN_1430e54c0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x78);
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  *(undefined4 *)((longlong)param_2 + 0x10) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x30) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined4 *)((longlong)param_2 + 0x40) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0x44) = 0;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined4 *)((longlong)param_2 + 0x58) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x60) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x68) = 0x43480000;
  return;
}



// FUNCTION 1430e5540 FUN_1430e5540 body=47 status=ok
// SIG undefined FUN_1430e5540(void)

void FUN_1430e5540(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x58);
  FTickFunction::FTickFunction(param_2);
  *param_2 = &PTR__scalar_deleting_destructor__145a9c4c0;
  return;
}



// FUNCTION 1430e5570 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FDonNavigationDynamicCollisionTask>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1430e5160(param_2 + param_3,param_3);
      param_3 = param_3 + 0x158;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1430e55c0 FUN_1430e55c0 body=219 status=ok
// SIG undefined FUN_1430e55c0(void)

undefined8 FUN_1430e55c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 8;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8 + param_2);
      *(undefined4 *)(param_2 + -4) = *(undefined4 *)(param_3 + -4 + param_2);
      FRuntimeFloatCurve::operator=(param_2,param_3 + param_2);
      *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_3 + 0x78 + param_2);
      *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(param_3 + 0x7c + param_2);
      FRuntimeFloatCurve::operator=(param_2 + 0x80,param_3 + 0x80 + param_2);
      puVar1 = (undefined8 *)(param_3 + 0xf8 + param_2);
      uVar6 = puVar1[1];
      *(undefined8 *)(param_2 + 0xf8) = *puVar1;
      *(undefined8 *)(param_2 + 0x100) = uVar6;
      puVar1 = (undefined8 *)(param_3 + 0x108 + param_2);
      uVar6 = puVar1[1];
      *(undefined8 *)(param_2 + 0x108) = *puVar1;
      *(undefined8 *)(param_2 + 0x110) = uVar6;
      puVar1 = (undefined8 *)(param_3 + 0x118 + param_2);
      uVar6 = puVar1[1];
      *(undefined8 *)(param_2 + 0x118) = *puVar1;
      *(undefined8 *)(param_2 + 0x120) = uVar6;
      puVar2 = (undefined4 *)(param_3 + 0x128 + param_2);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(param_2 + 0x128) = *puVar2;
      *(undefined4 *)(param_2 + 300) = uVar3;
      *(undefined4 *)(param_2 + 0x130) = uVar4;
      *(undefined4 *)(param_2 + 0x134) = uVar5;
      puVar2 = (undefined4 *)(param_3 + 0x138 + param_2);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(param_2 + 0x138) = *puVar2;
      *(undefined4 *)(param_2 + 0x13c) = uVar3;
      *(undefined4 *)(param_2 + 0x140) = uVar4;
      *(undefined4 *)(param_2 + 0x144) = uVar5;
      param_2 = param_2 + 0x150;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1430e56a0 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FVertexInstancesForPolygonHole>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1430e56f0 FUN_1430e56f0 body=35 status=ok
// SIG undefined FUN_1430e56f0(void)

void FUN_1430e56f0(undefined8 param_1,longlong param_2)

{
  FRichCurve::~FRichCurve(param_2 + 0x88);
  FRichCurve::~FRichCurve(param_2 + 8);
  return;
}



// FUNCTION 1430e5720 FUN_1430e5720 body=85 status=ok
// SIG undefined FUN_1430e5720(void)

void FUN_1430e5720(void)

{
  if (DAT_146b4a5c0 == 0) {
    if (DAT_146b4a770 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b4a770,&PTR_s__Script_GbxVehicle_145aa6fd8);
    }
    DAT_146b4a5c0 = GetStaticEnum(FUN_1430e6900,DAT_146b4a770,L"EInAirBehavior");
  }
  return;
}



// FUNCTION 1430e5780 FUN_1430e5780 body=85 status=ok
// SIG undefined FUN_1430e5780(void)

void FUN_1430e5780(void)

{
  if (DAT_146b4a5b0 == 0) {
    if (DAT_146b4a770 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b4a770,&PTR_s__Script_GbxVehicle_145aa6fd8);
    }
    DAT_146b4a5b0 = GetStaticEnum(FUN_1430e6930,DAT_146b4a770,L"EVehicleCameraRelativeDrivingMode");
  }
  return;
}



// FUNCTION 1430e57e0 FUN_1430e57e0 body=85 status=ok
// SIG undefined FUN_1430e57e0(void)

void FUN_1430e57e0(void)

{
  if (DAT_146b4a5b8 == 0) {
    if (DAT_146b4a770 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b4a770,&PTR_s__Script_GbxVehicle_145aa6fd8);
    }
    DAT_146b4a5b8 = GetStaticEnum(FUN_1430e6960,DAT_146b4a770,L"EVehicleDriveType");
  }
  return;
}



// FUNCTION 1430e5840 FUN_1430e5840 body=162 status=ok
// SIG undefined FUN_1430e5840(void)

longlong FUN_1430e5840(void)

{
  if (DAT_146b4a818 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"Vehicle",&DAT_146b4a818,FUN_1430e6020,0x578,0x10000000,0,
                  L"Game",&LAB_1430e4e80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_14096dfa0,&LAB_140447700,0);
  }
  return DAT_146b4a818;
}



// FUNCTION 1430e58f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong URemnantQuestSubQuest::GetPrivateStaticClass(void)

{
  if (DAT_146b4a7a0 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"TurretMovementComponent",&DAT_146b4a7a0,
                  StaticRegisterNativesURemnantQuestSubQuest,0x300,0x10000004,0,L"Engine",
                  &LAB_1430e4ee0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1429d7b60,&LAB_140447700,0);
  }
  return DAT_146b4a7a0;
}



// FUNCTION 1430e59a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextBlock::GetPrivateStaticClass(void)

{
  if (DAT_146b4a8c8 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"VehicleBoostComponent",&DAT_146b4a8c8,
                  StaticRegisterNativesUTextBlock,0x218,0x10000000,0,L"GbxVehicle",&LAB_1430e4f20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b4a8c8;
}



// FUNCTION 1430e5a50 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AInteractiveFoliageActor::GetPrivateStaticClass(void)

{
  if (DAT_146b4a8e8 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"VehicleBoostData",&DAT_146b4a8e8,FUN_140447710,0x398,
                  0x10000000,0,L"Engine",FUN_1430e4f40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b4a8e8;
}



// FUNCTION 1430e5b00 FUN_1430e5b00 body=162 status=ok
// SIG undefined FUN_1430e5b00(void)

longlong FUN_1430e5b00(void)

{
  if (DAT_146b4aa18 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"VehicleInventoryBalanceStateComponent",&DAT_146b4aa18,
                  FUN_140447710,0x348,0x10000000,0,L"Engine",&LAB_1430e5090,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14142bfa0,&LAB_140447700,0);
  }
  return DAT_146b4aa18;
}



// FUNCTION 1430e5bb0 FUN_1430e5bb0 body=162 status=ok
// SIG undefined FUN_1430e5bb0(void)

longlong FUN_1430e5bb0(void)

{
  if (DAT_146b4aa70 == 0) {
    FUN_14171ccd0(L"/Script/GbxVehicle",L"VehiclePartData",&DAT_146b4aa70,FUN_140447710,0x260,
                  0x10000001,0,L"Engine",FUN_1430e50b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14302b1c0,&LAB_140447700,0);
  }
  return DAT_146b4aa70;
}



// FUNCTION 1430e5c60 FUN_1430e5c60 body=6 status=ok
// SIG undefined FUN_1430e5c60(void)

undefined8 FUN_1430e5c60(void)

{
  return 0x91a5172e;
}



// FUNCTION 1430e5c70 FUN_1430e5c70 body=6 status=ok
// SIG undefined FUN_1430e5c70(void)

undefined8 FUN_1430e5c70(void)

{
  return 0x29188ebc;
}



// FUNCTION 1430e5c80 FUN_1430e5c80 body=6 status=ok
// SIG undefined FUN_1430e5c80(void)

undefined8 FUN_1430e5c80(void)

{
  return 0xc23647f4;
}



// FUNCTION 1430e5c90 FUN_1430e5c90 body=6 status=ok
// SIG undefined FUN_1430e5c90(void)

undefined8 FUN_1430e5c90(void)

{
  return 0x6cfb391f;
}



// FUNCTION 1430e5ca0 FUN_1430e5ca0 body=6 status=ok
// SIG undefined FUN_1430e5ca0(void)

undefined8 FUN_1430e5ca0(void)

{
  return 0x139f3bda;
}



// FUNCTION 1430e5cb0 FUN_1430e5cb0 body=6 status=ok
// SIG undefined FUN_1430e5cb0(void)

undefined8 FUN_1430e5cb0(void)

{
  return 0xf2321d87;
}



// FUNCTION 1430e5cc0 FUN_1430e5cc0 body=6 status=ok
// SIG undefined FUN_1430e5cc0(void)

undefined8 FUN_1430e5cc0(void)

{
  return 0xb07359c7;
}



// FUNCTION 1430e5cd0 FUN_1430e5cd0 body=6 status=ok
// SIG undefined FUN_1430e5cd0(void)

undefined8 FUN_1430e5cd0(void)

{
  return 0x4df2904a;
}



// FUNCTION 1430e5ce0 FUN_1430e5ce0 body=57 status=ok
// SIG undefined FUN_1430e5ce0(void)

void FUN_1430e5ce0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b4a6c8);
                    /* WARNING: Could not recover jumptable at 0x0001430e5d16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1430e5d20 FUN_1430e5d20 body=57 status=ok
// SIG undefined FUN_1430e5d20(void)

void FUN_1430e5d20(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b4a6d0);
                    /* WARNING: Could not recover jumptable at 0x0001430e5d56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1430e5d60 FUN_1430e5d60 body=57 status=ok
// SIG undefined FUN_1430e5d60(void)

void FUN_1430e5d60(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b4a6f8);
                    /* WARNING: Could not recover jumptable at 0x0001430e5d96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1430e5da0 FUN_1430e5da0 body=57 status=ok
// SIG undefined FUN_1430e5da0(void)

void FUN_1430e5da0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b4a700);
                    /* WARNING: Could not recover jumptable at 0x0001430e5dd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1430e5de0 FUN_1430e5de0 body=57 status=ok
// SIG undefined FUN_1430e5de0(void)

void FUN_1430e5de0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b4a708);
                    /* WARNING: Could not recover jumptable at 0x0001430e5e16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1430e5f40 FUN_1430e5f40 body=57 status=ok
// SIG undefined FUN_1430e5f40(void)

void FUN_1430e5f40(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b4a728);
                    /* WARNING: Could not recover jumptable at 0x0001430e5f76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1430e5f80 FUN_1430e5f80 body=61 status=ok
// SIG undefined FUN_1430e5f80(void)

void FUN_1430e5f80(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b4a6b8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1430e5fc0 FUN_1430e5fc0 body=94 status=ok
// SIG undefined FUN_1430e5fc0(void)

void FUN_1430e5fc0(longlong *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar1 = *param_1;
  local_1c = *param_5;
  local_14 = *(undefined4 *)(param_5 + 1);
  local_28[0] = param_2;
  local_24 = param_3;
  local_20 = param_4;
  uVar2 = FUN_14178ac60(local_1c,DAT_146b4a720);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_28);
  return;
}



// FUNCTION 1430e6020 FUN_1430e6020 body=34 status=ok
// SIG undefined FUN_1430e6020(void)

void FUN_1430e6020(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1430e5840();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddVehiclePart_145aa70b0,0xc);
  return;
}



// FUNCTION 1430e6050 FUN_1430e6050 body=34 status=ok
// SIG undefined FUN_1430e6050(void)

void FUN_1430e6050(void)

{
  undefined8 uVar1;
  
  uVar1 = APlayerState::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnRep_OwningVehicle_145aa77e8,3);
  return;
}



// FUNCTION 1430e6080 StaticRegisterNativesURemnantQuestSubQuest body=34 status=ok
// SIG undefined StaticRegisterNativesURemnantQuestSubQuest(void)

void URemnantQuestSubQuest::StaticRegisterNativesURemnantQuestSubQuest(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ServerSetRotationInputs_145aa7070,4);
  return;
}



// FUNCTION 1430e60b0 StaticRegisterNativesUTextBlock body=34 status=ok
// SIG undefined StaticRegisterNativesUTextBlock(void)

void UTextBlock::StaticRegisterNativesUTextBlock(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetBoostDirection_145aa7290,0xc);
  return;
}



// FUNCTION 1430e60e0 FUN_1430e60e0 body=34 status=ok
// SIG undefined FUN_1430e60e0(void)

void FUN_1430e60e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1430e4ad0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetCurrentBoostPoolValue_145aa75c0,9);
  return;
}



// FUNCTION 1430e6110 FUN_1430e6110 body=34 status=ok
// SIG undefined FUN_1430e6110(void)

void FUN_1430e6110(void)

{
  undefined8 uVar1;
  
  uVar1 = AUGWeapon_Hook::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_IsAttached_145aa7650,1);
  return;
}



// FUNCTION 1430e6140 FUN_1430e6140 body=34 status=ok
// SIG undefined FUN_1430e6140(void)

void FUN_1430e6140(void)

{
  undefined8 uVar1;
  
  uVar1 = ARemnantQuest::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AttachToHitch_145aa7660,3);
  return;
}



// FUNCTION 1430e6170 FUN_1430e6170 body=34 status=ok
// SIG undefined FUN_1430e6170(void)

void FUN_1430e6170(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1430e3990();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_EnableHover_145aa77a8,3);
  return;
}



// FUNCTION 1430e61a0 StaticRegisterNativesUUserObjectListEntry body=34 status=ok
// SIG undefined StaticRegisterNativesUUserObjectListEntry(void)

void UUserObjectListEntry::StaticRegisterNativesUUserObjectListEntry(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_GetDirectionBasedThrottleAndStee_145aa77d8,1);
  return;
}



// FUNCTION 1430e61d0 StaticRegisterNativesAGameStateBase body=34 status=ok
// SIG undefined StaticRegisterNativesAGameStateBase(void)

void AGameStateBase::StaticRegisterNativesAGameStateBase(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CancelPowerSlide_145aa7bf0,9);
  return;
}



// FUNCTION 1430e6200 FUN_1430e6200 body=34 status=ok
// SIG undefined FUN_1430e6200(void)

void FUN_1430e6200(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1430e3810();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_ApplyAngularVelocityInfluence_145aa7d20,0x17);
  return;
}



// FUNCTION 1430e6230 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FClothLODDataCommon::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b4a750 == 0) {
    if (DAT_146b4a770 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b4a770,&PTR_s__Script_GbxVehicle_145aa6fd8);
    }
    lVar1 = DAT_146b4a770;
    uVar2 = FUN_1430e5c60();
    DAT_146b4a750 = GetStaticStruct(FUN_1430e6990,lVar1,L"AnimNode_ComplexWheelHandler",0x158,uVar2)
    ;
  }
  return;
}



// FUNCTION 1430e62b0 FUN_1430e62b0 body=113 status=ok
// SIG undefined FUN_1430e62b0(void)

void FUN_1430e62b0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b4ab28 == 0) {
    if (DAT_146b4a770 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b4a770,&PTR_s__Script_GbxVehicle_145aa6fd8);
    }
    lVar1 = DAT_146b4a770;
    uVar2 = FUN_1430e5c70();
    DAT_146b4ab28 = GetStaticStruct(FUN_1430e69c0,lVar1,L"AntiRollBarData",0xc,uVar2);
  }
  return;
}



// FUNCTION 1430e6330 FUN_1430e6330 body=113 status=ok
// SIG undefined FUN_1430e6330(void)

void FUN_1430e6330(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b4a8d0 == 0) {
    if (DAT_146b4a770 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b4a770,&PTR_s__Script_GbxVehicle_145aa6fd8);
    }
    lVar1 = DAT_146b4a770;
    uVar2 = FUN_1430e5c80();
    DAT_146b4a8d0 = GetStaticStruct(FUN_1430e69f0,lVar1,L"BoostPhysicsParams",0x150,uVar2);
  }
  return;
}



// FUNCTION 1430e63b0 FUN_1430e63b0 body=113 status=ok
// SIG undefined FUN_1430e63b0(void)

void FUN_1430e63b0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b4a840 == 0) {
    if (DAT_146b4a770 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b4a770,&PTR_s__Script_GbxVehicle_145aa6fd8);
    }
    lVar1 = DAT_146b4a770;
    uVar2 = FUN_1430e5c90();
    DAT_146b4a840 = GetStaticStruct(FUN_1430e6a20,lVar1,L"BoostRegenerateEvent",0x18,uVar2);
  }
  return;
}



// FUNCTION 1430e6430 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNodeHierarchyWithUserData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b4a760 == 0) {
    if (DAT_146b4a770 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b4a770,&PTR_s__Script_GbxVehicle_145aa6fd8);
    }
    lVar1 = DAT_146b4a770;
    uVar2 = FUN_1430e5ca0();
    DAT_146b4a760 = GetStaticStruct(FUN_1430e6a50,lVar1,L"ComplexWheelMovement",0x78,uVar2);
  }
  return;
}



// FUNCTION 1430e64b0 FUN_1430e64b0 body=113 status=ok
// SIG undefined FUN_1430e64b0(void)

void FUN_1430e64b0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b4a8f0 == 0) {
    if (DAT_146b4a770 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b4a770,&PTR_s__Script_GbxVehicle_145aa6fd8);
    }
    lVar1 = DAT_146b4a770;
    uVar2 = FUN_1430e5cb0();
    DAT_146b4a8f0 =
         GetStaticStruct(FUN_1430e6a80,lVar1,L"PushbackCharactersTickFunction",0x58,uVar2);
  }
  return;
}



// FUNCTION 1430e6530 FUN_1430e6530 body=113 status=ok
// SIG undefined FUN_1430e6530(void)

void FUN_1430e6530(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b4a9d8 == 0) {
    if (DAT_146b4a770 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b4a770,&PTR_s__Script_GbxVehicle_145aa6fd8);
    }
    lVar1 = DAT_146b4a770;
    uVar2 = FUN_1430e5cc0();
    DAT_146b4a9d8 = GetStaticStruct(FUN_1430e6ab0,lVar1,L"ReplicatedHoverComponentState",0x18,uVar2)
    ;
  }
  return;
}



// FUNCTION 1430e65b0 FUN_1430e65b0 body=113 status=ok
// SIG undefined FUN_1430e65b0(void)

void FUN_1430e65b0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b4aa78 == 0) {
    if (DAT_146b4a770 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b4a770,&PTR_s__Script_GbxVehicle_145aa6fd8);
    }
    lVar1 = DAT_146b4a770;
    uVar2 = FUN_1430e5cd0();
    DAT_146b4aa78 = GetStaticStruct(FUN_1430e6ae0,lVar1,L"VehiclePartList",0x10,uVar2);
  }
  return;
}



// FUNCTION 1430e6630 FUN_1430e6630 body=47 status=ok
// SIG undefined FUN_1430e6630(void)

longlong FUN_1430e6630(void)

{
  if (DAT_146b4ab38 == 0) {
    FUN_141786440(&DAT_146b4ab38,&PTR_FUN_145aa2a70);
  }
  return DAT_146b4ab38;
}



// FUNCTION 1430e6660 FUN_1430e6660 body=47 status=ok
// SIG undefined FUN_1430e6660(void)

longlong FUN_1430e6660(void)

{
  if (DAT_146b4a820 == 0) {
    FUN_141786440(&DAT_146b4a820,&PTR_FUN_145aa0ee0);
  }
  return DAT_146b4a820;
}



// FUNCTION 1430e6690 FUN_1430e6690 body=47 status=ok
// SIG undefined FUN_1430e6690(void)

longlong FUN_1430e6690(void)

{
  if (DAT_146b4a8e0 == 0) {
    FUN_141786440(&DAT_146b4a8e0,&PTR_LAB_145aa47c0);
  }
  return DAT_146b4a8e0;
}



// FUNCTION 1430e66c0 FUN_1430e66c0 body=47 status=ok
// SIG undefined FUN_1430e66c0(void)

longlong FUN_1430e66c0(void)

{
  if (DAT_146b4ab48 == 0) {
    FUN_141786440(&DAT_146b4ab48,&PTR_FUN_145aa2d40);
  }
  return DAT_146b4ab48;
}



// FUNCTION 1430e66f0 FUN_1430e66f0 body=47 status=ok
// SIG undefined FUN_1430e66f0(void)

longlong FUN_1430e66f0(void)

{
  if (DAT_146b4a900 == 0) {
    FUN_141786440(&DAT_146b4a900,&PTR_FUN_145aa1b00);
  }
  return DAT_146b4a900;
}



// FUNCTION 1430e6720 FUN_1430e6720 body=47 status=ok
// SIG undefined FUN_1430e6720(void)

longlong FUN_1430e6720(void)

{
  if (DAT_146b4a970 == 0) {
    FUN_141786440(&DAT_146b4a970,&PTR_FUN_145a9ff30);
  }
  return DAT_146b4a970;
}



// FUNCTION 1430e6750 FUN_1430e6750 body=47 status=ok
// SIG undefined FUN_1430e6750(void)

longlong FUN_1430e6750(void)

{
  if (DAT_146b4aa10 == 0) {
    FUN_141786440(&DAT_146b4aa10,&PTR_thunk_FUN_1430e5b00_145aa2180);
  }
  return DAT_146b4aa10;
}



// FUNCTION 1430e6780 FUN_1430e6780 body=47 status=ok
// SIG undefined FUN_1430e6780(void)

longlong FUN_1430e6780(void)

{
  if (DAT_146b4aa68 == 0) {
    FUN_141786440(&DAT_146b4aa68,&PTR_thunk_FUN_1430e5bb0_145aa3a70);
  }
  return DAT_146b4aa68;
}



// FUNCTION 1430e67b0 FUN_1430e67b0 body=47 status=ok
// SIG undefined FUN_1430e67b0(void)

longlong FUN_1430e67b0(void)

{
  if (DAT_146b4aa88 == 0) {
    FUN_141786440(&DAT_146b4aa88,&PTR_FUN_145aa42b0);
  }
  return DAT_146b4aa88;
}



// FUNCTION 1430e67e0 FUN_1430e67e0 body=47 status=ok
// SIG undefined FUN_1430e67e0(void)

longlong FUN_1430e67e0(void)

{
  if (DAT_146b4a7a8 == 0) {
    FUN_141786a30(&DAT_146b4a7a8,&PTR_FUN_1467b2350);
  }
  return DAT_146b4a7a8;
}



// FUNCTION 1430e6810 FUN_1430e6810 body=47 status=ok
// SIG undefined FUN_1430e6810(void)

longlong FUN_1430e6810(void)

{
  if (DAT_146b4ab10 == 0) {
    FUN_141786a30(&DAT_146b4ab10,&PTR_FUN_1467b6ab0);
  }
  return DAT_146b4ab10;
}


