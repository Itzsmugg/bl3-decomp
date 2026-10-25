// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14225d4a0 FUN_14225d4a0 body=1194 status=ok
// SIG undefined FUN_14225d4a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14225d4a0(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auVar4 [16];
  int iVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  float *pfVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
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
  undefined1 auStack_188 [32];
  longlong *local_168;
  longlong local_160;
  ulonglong local_158;
  longlong local_150;
  undefined8 local_148;
  longlong local_140 [3];
  longlong *local_128;
  undefined1 local_118 [32];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b8;
  ulonglong uVar13;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_128 = param_5;
  if (0 < (int)param_2[1]) {
    local_168 = param_4;
    local_140[2] = param_3;
    if ((int)param_2[1] == 1) {
      FUN_142291b50(*(undefined8 *)(*param_2 + 8),param_4,param_5);
    }
    else {
      uVar15 = 0;
      local_160 = 0;
      local_158 = 0;
      FUN_142256780(&local_160);
      uVar18 = uVar15;
      if (0 < (int)param_2[1]) {
        do {
          uVar13 = 0;
          local_150 = 0;
          lVar17 = (longlong)(int)uVar18 * 0x470 + local_160;
          local_148 = 0;
          local_140[0] = 0;
          local_140[1] = 0;
          FUN_142291b50(*(undefined8 *)(*param_2 + 8 + uVar15),&local_150,local_140);
          if (0 < (int)local_148) {
            lVar11 = 0;
            uVar14 = uVar13;
            do {
              local_e8 = *(undefined8 *)(lVar11 + local_150);
              uStack_e0 = ((undefined8 *)(lVar11 + local_150))[1];
              puVar1 = (undefined8 *)(lVar11 + 0x10 + local_150);
              local_d8 = *puVar1;
              uStack_d0 = puVar1[1];
              puVar2 = (undefined4 *)(lVar11 + 0x20 + local_150);
              local_c8 = *puVar2;
              uStack_c4 = puVar2[1];
              uStack_c0 = puVar2[2];
              uStack_bc = puVar2[3];
              FUN_1422858c0(lVar17,&local_e8,*(undefined4 *)(uVar14 + local_140[0]));
              uVar12 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar12;
              lVar11 = lVar11 + 0x30;
              uVar14 = uVar14 + 4;
            } while ((int)uVar12 < (int)local_148);
          }
          if (local_140[0] != 0) {
            FMemory::Free();
          }
          if (local_150 != 0) {
            FMemory::Free();
          }
          uVar12 = (int)uVar18 + 1;
          uVar15 = uVar15 + 0x40;
          param_3 = local_140[2];
          param_4 = local_168;
          uVar18 = (ulonglong)uVar12;
        } while ((int)uVar12 < (int)param_2[1]);
      }
      fVar19 = (float)UBlendSpaceBase::GetAnimationLengthFromSampleData(param_3,param_2);
      iVar7 = FUN_1422ac3a0(param_3,param_2);
      lVar17 = local_160;
      iVar5 = (int)local_158;
      uVar18 = local_158 & 0xffffffff;
      local_168 = (longlong *)CONCAT44(local_168._4_4_,iVar7 + 1);
      iVar9 = iVar7 + 1;
      if (0 < (int)local_158) {
        lVar11 = local_160 + 400;
        uVar15 = local_158 & 0xffffffff;
        do {
          FUN_142269800(lVar11 + -0x170);
          FUN_142269800(lVar11);
          FUN_142269800(lVar11 + 0x170);
          FUN_14227e0a0(lVar11 + -400);
          lVar11 = lVar11 + 0x470;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
        iVar9 = (int)local_168;
      }
      iVar16 = 0;
      if (0 < iVar9) {
        do {
          fVar30 = (float)iVar16 * (fVar19 / (float)iVar7);
          fVar23 = _DAT_1468b5b90;
          fVar20 = fRam00000001468b5b94;
          fVar21 = fRam00000001468b5b98;
          fVar22 = fRam00000001468b5b9c;
          fVar26 = _DAT_1468b5b80;
          fVar27 = fRam00000001468b5b84;
          fVar28 = fRam00000001468b5b88;
          fVar29 = fRam00000001468b5b8c;
          fVar31 = _DAT_1468b5b70;
          fVar32 = fRam00000001468b5b74;
          fVar33 = fRam00000001468b5b78;
          fVar34 = fRam00000001468b5b7c;
          if (0 < iVar5) {
            lVar11 = 0;
            uVar15 = uVar18;
            do {
              fVar23 = *(float *)(*param_2 + 0x10 + lVar11);
              if (0.0 <= fVar23) {
                if (1.0 <= fVar23) {
                  fVar23 = 1.0;
                }
              }
              else {
                fVar23 = 0.0;
              }
              uVar8 = FTransformCurve::Evaluate(lVar17,&local_e8,fVar30,fVar23);
              auVar4._4_4_ = -(uint)(uStack_e0._4_4_ * uStack_e0._4_4_ < fRam0000000146aef054);
              auVar4._0_4_ = -(uint)(uStack_e0._4_4_ * uStack_e0._4_4_ < _DAT_146aef050);
              auVar4._8_4_ = -(uint)(uStack_e0._4_4_ * uStack_e0._4_4_ < fRam0000000146aef058);
              auVar4._12_4_ = -(uint)(uStack_e0._4_4_ * uStack_e0._4_4_ < fRam0000000146aef05c);
              iVar9 = movmskps(uVar8,auVar4);
              if (iVar9 != 0) {
                fVar21 = (float)local_e8 * fVar32;
                fVar22 = (float)local_e8 * fVar31;
                fVar24 = (float)uStack_e0 * fVar31;
                fVar25 = (float)uStack_e0 * fVar33;
                fVar23 = local_e8._4_4_ * fVar31;
                fVar20 = local_e8._4_4_ * fVar32;
                fVar31 = (float)local_e8 * fVar34 * _DAT_146aeefb0 + uStack_e0._4_4_ * fVar31 +
                         local_e8._4_4_ * fVar33 * _DAT_146aeefa0 +
                         (float)uStack_e0 * fVar32 * _DAT_146aeef90;
                fVar32 = (float)local_e8 * fVar33 * fRam0000000146aeefb4 + uStack_e0._4_4_ * fVar32
                         + local_e8._4_4_ * fVar34 * fRam0000000146aeefa4 +
                         fVar24 * fRam0000000146aeef94;
                fVar33 = fVar21 * fRam0000000146aeefb8 + uStack_e0._4_4_ * fVar33 +
                         fVar23 * fRam0000000146aeefa8 +
                         (float)uStack_e0 * fVar34 * fRam0000000146aeef98;
                fVar34 = fVar22 * fRam0000000146aeefbc + uStack_e0._4_4_ * fVar34 +
                         fVar20 * fRam0000000146aeefac + fVar25 * fRam0000000146aeef9c;
              }
              fVar26 = fVar26 + (float)local_d8;
              fVar27 = fVar27 + local_d8._4_4_;
              fVar28 = fVar28 + (float)uStack_d0;
              fVar29 = fVar29 + uStack_d0._4_4_;
              FTransformCurve::Evaluate(lVar17,local_118,fVar30,0x3f800000);
              lVar17 = lVar17 + 0x470;
              lVar11 = lVar11 + 0x40;
              fVar22 = 0.0;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
            fVar23 = local_f8;
            fVar20 = fStack_f4;
            fVar21 = fStack_f0;
            iVar9 = (int)local_168;
          }
          iVar3 = (int)param_4[1];
          *(int *)(param_4 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_4 + 0xc) < iVar3 + 1) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_4,iVar3);
          }
          plVar6 = local_128;
          pfVar10 = (float *)((longlong)iVar3 * 0x30 + *param_4);
          *pfVar10 = fVar31;
          pfVar10[1] = fVar32;
          pfVar10[2] = fVar33;
          pfVar10[3] = fVar34;
          pfVar10[4] = fVar26;
          pfVar10[5] = fVar27;
          pfVar10[6] = fVar28;
          pfVar10[7] = fVar29;
          pfVar10[8] = fVar23;
          pfVar10[9] = fVar20;
          pfVar10[10] = fVar21;
          pfVar10[0xb] = fVar22;
          iVar3 = (int)local_128[1];
          *(int *)(local_128 + 1) = iVar3 + 1;
          if (*(int *)((longlong)local_128 + 0xc) < iVar3 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(local_128,iVar3);
          }
          iVar16 = iVar16 + 1;
          *(float *)(*plVar6 + (longlong)iVar3 * 4) = fVar30;
          lVar17 = local_160;
        } while (iVar16 < iVar9);
      }
      FUN_1422557f0(&local_160);
    }
  }
  return;
}



// FUNCTION 14225d950 FUN_14225d950 body=172 status=ok
// SIG undefined FUN_14225d950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_14225d950(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  uStack_30._0_4_ = 0;
  uStack_30._4_4_ = 0;
  local_54 = 0;
  local_58[0] = 0;
  local_28 = _DAT_146aeef40 & _DAT_146aeef50;
  uStack_24 = uRam0000000146aeef44 & uRam0000000146aeef54;
  uStack_20 = uRam0000000146aeef48 & uRam0000000146aeef58;
  uStack_1c = uRam0000000146aeef4c & uRam0000000146aeef5c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam0000000146aeef4c;
  local_38 = 0;
  uStack_30 = 0;
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x180)) {
    local_68 = local_58;
    FUN_14224d7e0(0,*(longlong *)(param_1 + 0x178) + 8);
    uVar1 = local_48;
    uVar2 = uStack_44;
    uVar3 = uStack_40;
  }
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uStack_3c;
  param_2[4] = (undefined4)local_38;
  param_2[5] = local_38._4_4_;
  param_2[6] = (undefined4)uStack_30;
  param_2[7] = uStack_30._4_4_;
  param_2[8] = local_28;
  param_2[9] = uStack_24;
  param_2[10] = uStack_20;
  param_2[0xb] = uStack_1c;
  return param_2;
}



// FUNCTION 14225da00 FUN_14225da00 body=941 status=ok
// SIG undefined FUN_14225da00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14225da00(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  float fVar15;
  undefined1 auStack_5c8 [32];
  undefined1 local_5a8;
  undefined4 local_5a0;
  undefined1 local_598 [4];
  undefined1 local_594 [4];
  float local_590;
  float local_58c;
  undefined8 local_588;
  undefined8 local_580;
  undefined2 local_578;
  undefined4 local_570;
  undefined **local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_540;
  undefined8 local_538;
  undefined4 local_530;
  undefined4 local_52c;
  undefined8 local_520;
  undefined4 local_518;
  undefined2 local_510;
  undefined4 local_50c;
  undefined8 local_508;
  undefined8 local_500;
  undefined1 local_4f8 [64];
  longlong local_4b8 [42];
  undefined1 local_368 [32];
  longlong local_348 [28];
  undefined1 local_268 [112];
  undefined1 local_1f8 [32];
  longlong local_1d8 [42];
  ulonglong local_88 [9];
  
  local_88[0] = DAT_1468387a8 ^ (ulonglong)auStack_5c8;
  FUN_142274510(param_1,local_4f8,param_2,param_3);
  plVar6 = local_4b8;
  lVar9 = 3;
  plVar13 = local_4b8;
  iVar8 = 0;
  lVar14 = 3;
  do {
    iVar4 = (**(code **)(*plVar6 + 8))(plVar13);
    plVar6 = plVar6 + 0xe;
    if (iVar4 <= iVar8) {
      iVar4 = iVar8;
    }
    iVar8 = iVar4;
    plVar13 = plVar13 + 0xe;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  plVar6 = local_348;
  iVar4 = 0;
  plVar13 = local_348;
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  lVar14 = 3;
  do {
    iVar5 = (**(code **)(*plVar6 + 8))(plVar13);
    plVar6 = plVar6 + 0xe;
    if (iVar5 <= iVar4) {
      iVar5 = iVar4;
    }
    iVar4 = iVar5;
    plVar13 = plVar13 + 0xe;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  plVar6 = local_1d8;
  lVar14 = 3;
  if (iVar4 <= iVar8) {
    iVar4 = iVar8;
  }
  iVar8 = 0;
  do {
    iVar5 = (**(code **)(*plVar6 + 8))();
    plVar6 = plVar6 + 0xe;
    if (iVar5 <= iVar8) {
      iVar5 = iVar8;
    }
    iVar8 = iVar5;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (iVar8 <= iVar4) {
    iVar8 = iVar4;
  }
  if (0 < iVar8) {
    local_588 = 0;
    local_578 = 0xffff;
    local_580 = 0;
    local_570 = 0;
    local_560 = 0;
    local_558 = 0;
    local_540 = 0;
    local_538 = 0;
    local_52c = 0;
    local_520 = 0;
    local_518 = 0;
    local_508 = 0;
    local_500 = 0;
    local_568 = &PTR_FUN_14413ebc8;
    local_50c = 0x7f7fffff;
    local_530 = 0xffffffff;
    local_510 = 0x404;
    FRichCurve::GetValueRange(local_268,&local_58c,&local_590);
    plVar6 = (longlong *)FUN_140573010(local_268);
    lVar14 = *plVar6;
    lVar10 = (longlong)(int)plVar6[1] * 0x1c + lVar14;
    if (ABS(local_590) < ABS(local_58c)) {
      fVar15 = 1.0;
      for (; lVar14 != lVar10; lVar14 = lVar14 + 0x1c) {
        fVar1 = *(float *)(lVar14 + 8);
        uVar2 = *(undefined4 *)(lVar14 + 4);
        if ((fVar1 <= 0.0) && (fVar1 < fVar15)) {
          puVar7 = (undefined4 *)FKeyHandle::FKeyHandle(local_594);
          local_5a0 = *puVar7;
          local_5a8 = 0;
          FRichCurve::AddKey(&local_568,local_598,uVar2,fVar1);
          fVar15 = fVar1;
        }
      }
    }
    else {
      fVar15 = -1.0;
      for (; lVar14 != lVar10; lVar14 = lVar14 + 0x1c) {
        fVar1 = *(float *)(lVar14 + 8);
        uVar2 = *(undefined4 *)(lVar14 + 4);
        if ((0.0 <= fVar1) && (fVar15 < fVar1)) {
          puVar7 = (undefined4 *)FKeyHandle::FKeyHandle(local_598);
          local_5a0 = *puVar7;
          local_5a8 = 0;
          FRichCurve::AddKey(&local_568,local_594,uVar2,fVar1);
          fVar15 = fVar1;
        }
      }
    }
    plVar6 = (longlong *)FUN_140573010(&local_568);
    lVar14 = *plVar6;
    lVar10 = (longlong)(int)plVar6[1] * 0x1c + lVar14;
    for (; lVar14 != lVar10; lVar14 = lVar14 + 0x1c) {
      uVar2 = *(undefined4 *)(lVar14 + 4);
      uVar3 = *(undefined4 *)(lVar14 + 8);
      puVar7 = (undefined4 *)FKeyHandle::FKeyHandle(local_594);
      local_5a0 = *puVar7;
      local_5a8 = 0;
      FRichCurve::AddKey(param_4 + 0x20,local_598,uVar3,uVar2);
    }
    FRichCurve::~FRichCurve(&local_568);
  }
  puVar11 = local_88;
  lVar14 = 3;
  do {
    puVar11 = puVar11 + -0xe;
    FRichCurve::~FRichCurve(puVar11);
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  lVar14 = 3;
  puVar12 = local_1f8;
  do {
    puVar12 = puVar12 + -0x70;
    FRichCurve::~FRichCurve(puVar12);
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar12 = local_368;
  do {
    puVar12 = puVar12 + -0x70;
    FRichCurve::~FRichCurve(puVar12);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  return;
}



// FUNCTION 14225ddb0 FUN_14225ddb0 body=355 status=ok
// SIG undefined FUN_14225ddb0(void)

void FUN_14225ddb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong local_18;
  undefined8 local_10;
  
  plVar2 = (longlong *)FAnimInstanceProxy::GetNodeFromIndex<FAnimNode_AssetPlayerBase>();
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (lVar3 != 0) {
      lVar4 = UAnimMontage::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_142291b50(lVar3,param_4,param_5);
        return;
      }
    }
    lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (lVar3 != 0) {
      lVar4 = UBlendSpaceBase::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_18 = 0;
        local_10 = 0;
        FUN_1422acfa0(lVar3,param_3,&local_18);
        FUN_14225d4a0(param_1,&local_18,lVar3,param_4,param_5);
        if ((int)local_10 != 0) {
          plVar2 = (longlong *)(local_18 + 0x30);
          iVar5 = (int)local_10;
          do {
            if (*plVar2 != 0) {
              FMemory::Free();
            }
            plVar2 = plVar2 + 8;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (local_18 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 14225df20 FindMontagePosition_Target body=99 status=ok
// SIG undefined FindMontagePosition_Target(void)

ulonglong FMontageSubStepper::FindMontagePosition_Target(longlong param_1,float param_2)

{
  ulonglong uVar1;
  
  if (param_2 != *(float *)(param_1 + 0x5c)) {
    *(float *)(param_1 + 0x5c) = param_2;
    FTimeStretchCurveInstance::UpdateMarkerIndexForPosition
              (param_1 + 0x60,param_1 + 0x34,param_2,param_1 + 0x70);
    uVar1 = FTimeStretchCurveInstance::Convert_P_Original_To_Target
                      (param_1 + 0x60,*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_1 + 0x5c));
    *(int *)(param_1 + 0x58) = (int)uVar1;
    return uVar1;
  }
  return (ulonglong)*(uint *)(param_1 + 0x58);
}



// FUNCTION 14225df90 FUN_14225df90 body=141 status=ok
// SIG undefined FUN_14225df90(void)

void FUN_14225df90(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x38))();
  }
  puVar1 = *(undefined8 **)(param_1 + 0xe8);
  uVar3 = 0;
  uVar2 = (longlong)*(int *)(param_1 + 0xf0) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0xf0) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x38))((longlong *)*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 14225e020 FUN_14225e020 body=213 status=ok
// SIG undefined FUN_14225e020(void)

undefined8 * FUN_14225e020(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 local_res8;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  plVar1 = param_2 + 1;
  *param_2 = 0;
  param_2[2] = 0;
  *plVar1 = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  if (0 < *(int *)(param_1 + 0x180)) {
    *(char *)(param_2 + 3) = (char)*(int *)(param_1 + 0x180);
    puVar2 = *(undefined8 **)(param_1 + 0x178);
    plVar3 = (longlong *)FAnimTrack::GetSegmentAtTime(puVar2 + 1,param_3);
    if (plVar3 != (longlong *)0x0) {
      *param_2 = *puVar2;
      local_res8 = *(undefined8 *)(*plVar3 + 0x18);
      FName::ToString(&local_res8,&local_18);
      if (plVar1 != &local_18) {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        *plVar1 = local_18;
        *(undefined4 *)(param_2 + 2) = local_10;
        *(undefined4 *)((longlong)param_2 + 0x14) = local_c;
        return param_2;
      }
      if (local_18 != 0) {
        FMemory::Free();
      }
    }
  }
  return param_2;
}



// FUNCTION 14225e100 FUN_14225e100 body=181 status=ok
// SIG undefined FUN_14225e100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14225e100(longlong param_1,byte param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  if (param_2 < 3) {
    TMap<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,0>_>
    ::Append<FDefaultSetAllocator>(&local_68,param_1 + 0x1d8 + (ulonglong)param_2 * 0x50);
  }
  TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
  GetKeys<FDefaultAllocator>(&local_68,param_3);
  local_20 = 0;
  if (local_28 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_68);
  return;
}



// FUNCTION 14225e1c0 GetActiveInstanceForMontage body=92 status=ok
// SIG undefined GetActiveInstanceForMontage(void)

undefined8 UAnimInstance::GetActiveInstanceForMontage(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [8];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x88),local_res8);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res8[0] * 0x18);
  }
  puVar1 = puVar2 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar1;
}



// FUNCTION 14225e220 FUN_14225e220 body=51 status=ok
// SIG undefined FUN_14225e220(void)

longlong FUN_14225e220(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x540) + -1;
  if (-1 < iVar1) {
    lVar3 = (longlong)iVar1;
    lVar2 = *(longlong *)(param_1 + 0x538) + lVar3 * 0x18;
    do {
      if (*(char *)(lVar2 + 0x15) != '\0') {
        return lVar2;
      }
      lVar2 = lVar2 + -0x18;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return 0;
}



// FUNCTION 14225e260 GetActiveMontageInstance body=73 status=ok
// SIG undefined GetActiveMontageInstance(void)

longlong * UAnimInstance::GetActiveMontageInstance(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar4 = (longlong)*(int *)(param_1 + 0x80) + -1;
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x78) + lVar4 * 8);
    do {
      plVar1 = (longlong *)*plVar3;
      if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x2b) != 0.0)) {
        return plVar1;
      }
      plVar3 = plVar3 + -1;
      bVar2 = 0 < lVar4;
      lVar4 = lVar4 + -1;
    } while (bVar2);
  }
  return (longlong *)0x0;
}



// FUNCTION 14225e2b0 GetActualAnimClass body=254 status=ok
// SIG undefined GetActualAnimClass(void)

longlong IAnimClassInterface::GetActualAnimClass(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 8))();
    lVar3 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar2;
    }
  }
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  lVar2 = (**(code **)(*param_1 + 8))(param_1);
  lVar3 = UObject::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar2 = *(longlong *)(lVar2 + 0x20);
    if (lVar2 != 0) {
      lVar3 = FUN_14171bfe0();
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
        return lVar2;
      }
    }
    return 0;
  }
  return 0;
}



// FUNCTION 14225e3b0 FUN_14225e3b0 body=78 status=ok
// SIG undefined FUN_14225e3b0(void)

void FUN_14225e3b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (((*(longlong *)(param_1 + 0x20) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x718), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 != 0)) {
    lVar1 = USkeleton::GetSmartNameContainer(lVar1,&DAT_146aef308);
    if (lVar1 != 0) {
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14225e400 FUN_14225e400 body=575 status=ok
// SIG undefined FUN_14225e400(void)

void FUN_14225e400(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  DWORD DVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int *piVar12;
  
  *(undefined4 *)(param_2 + 0x18) = 0;
  if (*(int *)(param_2 + 0x1c) != 0) {
    TArray<float,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(param_2,0);
  }
  plVar7 = (longlong *)FUN_142268ae0(param_1[2]);
  if (plVar7 != (longlong *)0x0) {
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7);
    piVar12 = (int *)param_1[0x86];
    piVar1 = piVar12 + (int)param_1[0x87];
    for (; piVar12 != piVar1; piVar12 = piVar12 + 1) {
      lVar9 = *(longlong *)(*plVar7 + (longlong)*piVar12 * 8);
      if ((lVar9 != 0) && ((longlong)*(int *)(lVar9 + 0x44) + (longlong)param_1 != 0)) {
        lVar9 = param_1[4];
        iVar11 = ((int)plVar7[1] - *piVar12) + -1;
        if (lVar9 != 0) {
          lVar8 = FUN_142a07000();
          lVar9 = *(longlong *)(lVar9 + 0x10);
          if ((*(int *)(lVar9 + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
              lVar8 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            cVar4 = FUN_1415ad720(&DAT_1468e2448);
            if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
              DVar6 = GetCurrentThreadId();
              bVar3 = false;
              if (DVar6 == DAT_1468c21c0) goto LAB_14225e513;
            }
            else {
LAB_14225e513:
              bVar3 = true;
            }
            if (bVar3) {
              FUN_1423b2d70(param_1[4],1);
            }
          }
        }
        lVar9 = param_1[0x72];
        if (lVar9 == 0) {
          lVar9 = (**(code **)(*param_1 + 0x308))(param_1);
          param_1[0x72] = lVar9;
        }
        if ((((*(longlong **)(lVar9 + 0xa8) != (longlong *)0x0) &&
             (plVar10 = (longlong *)(**(code **)(**(longlong **)(lVar9 + 0xa8) + 0x20))(),
             -1 < iVar11)) && (iVar11 < (int)plVar10[1])) &&
           ((lVar8 = (longlong)
                     *(int *)(*(longlong *)
                               (*plVar10 + -8 + (longlong)((int)plVar10[1] - iVar11) * 8) + 0x44) +
                     *(longlong *)(lVar9 + 0xa0), lVar8 != 0 && (*(short *)(lVar8 + 200) != -1)))) {
          if ((*(longlong *)(lVar8 + 0xc0) == -1) ||
             (*(short *)(lVar8 + 200) != *(short *)(lVar9 + 0x330))) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) {
            sVar5 = (short)*(undefined4 *)(lVar8 + 200) + 1;
            if (sVar5 == -1) {
              sVar5 = 0;
            }
            if ((DAT_1468c21b0 == -1) || (sVar5 != *(short *)(lVar9 + 0x330))) goto LAB_14225e612;
          }
          iVar2 = *(int *)(param_2 + 0x18);
          *(int *)(param_2 + 0x18) = iVar2 + 1;
          if (*(int *)(param_2 + 0x1c) < iVar2 + 1) {
            TArray<int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(param_2,iVar2);
          }
          lVar9 = *(longlong *)(param_2 + 0x10);
          if (*(longlong *)(param_2 + 0x10) == 0) {
            lVar9 = param_2;
          }
          *(int *)(lVar9 + (longlong)iVar2 * 4) = iVar11;
        }
      }
LAB_14225e612:
    }
  }
  return;
}



// FUNCTION 14225e640 FUN_14225e640 body=237 status=ok
// SIG undefined FUN_14225e640(void)

int FUN_14225e640(longlong param_1,float param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  *param_3 = 0.0;
  iVar2 = *(int *)(param_1 + 0x170);
  if (0 < iVar2) {
    do {
      iVar1 = iVar5 + 1;
      cVar3 = FUN_1422773e0(param_1,iVar5,iVar1,param_2);
      if (cVar3 != '\0') {
        lVar4 = (longlong)iVar5 * 0x58 + *(longlong *)(param_1 + 0x168);
        cVar3 = *(char *)(lVar4 + 0x19);
        if (cVar3 != '\0') {
          if (cVar3 == '\x01') {
            *param_3 = param_2 - (*(float *)(lVar4 + 0x24) + *(float *)(lVar4 + 0x1c));
            return iVar5;
          }
          if (cVar3 == '\x02') {
            *param_3 = param_2 - (*(float *)(lVar4 + 0x24) * *(float *)(lVar4 + 0x20) +
                                 *(float *)(lVar4 + 0x1c));
            return iVar5;
          }
        }
        *param_3 = param_2 - *(float *)(lVar4 + 0x24);
        return iVar5;
      }
      iVar5 = iVar1;
    } while (iVar1 < iVar2);
  }
  return -1;
}



// FUNCTION 14225e730 FUN_14225e730 body=114 status=ok
// SIG undefined FUN_14225e730(void)

longlong FUN_14225e730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar2 = FUN_14227ddc0(param_1,local_res10);
  if (lVar2 != 0) {
    lVar3 = UTextureRenderTarget::StaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14225e78c;
  }
  lVar2 = 0;
LAB_14225e78c:
  *(bool *)param_3 = lVar2 != 0;
  return lVar2;
}



// FUNCTION 14225e7b0 FUN_14225e7b0 body=139 status=ok
// SIG undefined FUN_14225e7b0(void)

undefined * FUN_14225e7b0(longlong param_1,byte param_2)

{
  if (param_2 < 3) {
    return (undefined *)(param_1 + 0x1d8 + (ulonglong)param_2 * 0x50);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aef0bc) {
    _Init_thread_header(&DAT_146aef0bc);
    if (DAT_146aef0bc == -1) {
      atexit(FUN_143ea81c0);
      _Init_thread_footer(&DAT_146aef0bc);
      return &DAT_146531a10;
    }
  }
  return &DAT_146531a10;
}



// FUNCTION 14225e840 FUN_14225e840 body=71 status=ok
// SIG undefined FUN_14225e840(void)

longlong * FUN_14225e840(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x180)) {
    plVar1 = *(longlong **)(param_1 + 0x178);
    uVar3 = uVar2;
    do {
      if (*plVar1 == param_2) {
        return *(longlong **)(param_1 + 0x178) + (longlong)(int)uVar3 * 3 + 1;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 3;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x180));
  }
  return (longlong *)0x0;
}



// FUNCTION 14225e8a0 FUN_14225e8a0 body=201 status=ok
// SIG undefined FUN_14225e8a0(void)

void FUN_14225e8a0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res10 [3];
  
  lVar5 = param_1[4];
  local_res10[0] = param_2;
  if (lVar5 == 0) goto LAB_14225e932;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_14225e932;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_14225e91c;
  }
  else {
LAB_14225e91c:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_14225e932:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  FUN_142274b40(lVar5,local_res10);
  return;
}



// FUNCTION 14225e970 GetNodeFromIndex<FAnimNode_AssetPlayerBase> body=5 status=ok
// SIG undefined GetNodeFromIndex<FAnimNode_AssetPlayerBase>(void)

longlong FAnimInstanceProxy::GetNodeFromIndex<FAnimNode_AssetPlayerBase>
                   (longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = FUN_1428f56b0();
  if (*(longlong **)(param_1 + 0xa8) != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xa8) + 0x20))();
    param_2 = (int)plVar4[1] - param_2;
    if ((0 < param_2) && (param_2 + -1 < (int)plVar4[1])) {
      lVar1 = *(longlong *)(*plVar4 + -8 + (longlong)param_2 * 8);
      for (lVar2 = *(longlong *)(lVar1 + 0x70); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar3) {
          return (longlong)*(int *)(lVar1 + 0x44) + *(longlong *)(param_1 + 0xa0);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14225e980 FUN_14225e980 body=371 status=ok
// SIG undefined FUN_14225e980(void)

undefined4 FUN_14225e980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  longlong local_28;
  undefined8 local_20;
  
  plVar2 = (longlong *)FAnimInstanceProxy::GetNodeFromIndex<FAnimNode_AssetPlayerBase>();
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  plVar3 = (longlong *)(**(code **)(*plVar2 + 0x108))(plVar2);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = UAnimMontage::GetPrivateStaticClass();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00014225e9fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(*plVar3 + 0x2a0))(plVar3);
      return uVar7;
    }
  }
  lVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
  if (lVar4 != 0) {
    lVar5 = UBlendSpaceBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_28 = 0;
      local_20 = 0;
      FUN_1422acfa0(lVar4,param_3,&local_28);
      uVar7 = UBlendSpaceBase::GetAnimationLengthFromSampleData(lVar4,&local_28);
      if ((int)local_20 != 0) {
        plVar2 = (longlong *)(local_28 + 0x30);
        iVar6 = (int)local_20;
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 8;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      return uVar7;
    }
  }
  return 0;
}



// FUNCTION 14225eb00 FUN_14225eb00 body=114 status=ok
// SIG undefined FUN_14225eb00(void)

longlong FUN_14225eb00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar2 = FUN_14227ddc0(param_1,local_res10);
  if (lVar2 != 0) {
    lVar3 = UBlendSpaceBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14225eb5c;
  }
  lVar2 = 0;
LAB_14225eb5c:
  *(bool *)param_3 = lVar2 != 0;
  return lVar2;
}



// FUNCTION 14225eb80 FUN_14225eb80 body=62 status=ok
// SIG undefined FUN_14225eb80(void)

longlong * FUN_14225eb80(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x3e0);
  plVar1 = plVar3 + *(int *)(param_1 + 1000);
  if (plVar3 != plVar1) {
    do {
      plVar2 = (longlong *)*plVar3;
      if ((*plVar2 == *param_3) && (plVar2[1] == param_2)) {
        return plVar2;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
  }
  return (longlong *)0x0;
}



// FUNCTION 14225ebc0 FUN_14225ebc0 body=1664 status=ok
// SIG undefined FUN_14225ebc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14225ebc0(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
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
  undefined1 auStack_a68 [32];
  uint local_a48;
  longlong local_a40;
  ulonglong local_a38;
  longlong local_a30;
  undefined8 local_a28;
  undefined8 *local_a20;
  float local_a18;
  float fStack_a14;
  float fStack_a10;
  float fStack_a0c;
  float local_a08;
  float fStack_a04;
  float fStack_a00;
  float fStack_9fc;
  undefined1 local_9f8 [16];
  undefined1 local_9e8 [48];
  float local_9b8;
  float fStack_9b4;
  float fStack_9b0;
  float fStack_9ac;
  float local_9a8;
  float fStack_9a4;
  float fStack_9a0;
  float fStack_99c;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined2 local_978;
  undefined6 uStack_976;
  undefined4 uStack_970;
  undefined4 uStack_96c;
  undefined1 local_968 [368];
  undefined1 local_7f8 [368];
  undefined1 local_688 [368];
  undefined1 local_518 [400];
  undefined1 local_388 [368];
  undefined1 local_218 [368];
  ulonglong local_a8 [14];
  
  local_a8[0] = DAT_1468387a8 ^ (ulonglong)auStack_a68;
  iVar14 = (int)param_3[1];
  local_a28 = param_4;
  local_a20 = param_2;
  if (iVar14 < 1) {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined2 *)(param_2 + 2) = 0xffff;
    *(undefined4 *)(param_2 + 3) = 0;
    FVectorCurve::FVectorCurve(param_2 + 4);
    FVectorCurve::FVectorCurve(param_2 + 0x32);
    FVectorCurve::FVectorCurve(param_2 + 0x60);
  }
  else if (iVar14 == 1) {
    if (*(longlong *)(*param_3 + 8) == 0) {
      FUN_142255020(param_2);
    }
    else {
      FUN_142295fa0();
    }
  }
  else {
    local_988 = 0;
    local_978 = 0xffff;
    uStack_980 = 0;
    uStack_970 = 0;
    FVectorCurve::FVectorCurve(local_968);
    FVectorCurve::FVectorCurve(local_7f8);
    FVectorCurve::FVectorCurve(local_688);
    local_a40 = 0;
    local_a38 = 0;
    FUN_142256780(&local_a40,iVar14);
    lVar10 = 3;
    local_a48 = 0;
    if (0 < (int)param_3[1]) {
      local_a30 = 0;
      lVar15 = local_a40 + 400;
      do {
        lVar9 = *(longlong *)(local_a30 + 8 + *param_3);
        if (lVar9 == 0) {
          *param_2 = 0;
          param_2[1] = 0;
          *(undefined2 *)(param_2 + 2) = 0xffff;
          *(undefined4 *)(param_2 + 3) = 0;
          FVectorCurve::FVectorCurve(param_2 + 4);
          FVectorCurve::FVectorCurve(param_2 + 0x32);
          FVectorCurve::FVectorCurve(param_2 + 0x60);
          FUN_1422557f0(&local_a40);
          puVar12 = local_518;
          lVar15 = lVar10;
          do {
            puVar12 = puVar12 + -0x70;
            FRichCurve::~FRichCurve(puVar12);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          puVar12 = local_688;
          lVar15 = lVar10;
          do {
            puVar12 = puVar12 + -0x70;
            FRichCurve::~FRichCurve(puVar12);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          puVar12 = local_7f8;
          do {
            puVar12 = puVar12 + -0x70;
            FRichCurve::~FRichCurve(puVar12);
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          return param_2;
        }
        puVar7 = (undefined4 *)FUN_142295fa0(lVar9,local_518);
        uVar6 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *(undefined4 *)(lVar15 + -400) = *puVar7;
        *(undefined4 *)(lVar15 + -0x18c) = uVar6;
        *(undefined4 *)(lVar15 + -0x188) = uVar2;
        *(undefined4 *)(lVar15 + -0x184) = uVar3;
        uVar4 = *(undefined8 *)(puVar7 + 6);
        *(undefined8 *)(lVar15 + -0x180) = *(undefined8 *)(puVar7 + 4);
        *(undefined8 *)(lVar15 + -0x178) = uVar4;
        FVectorCurve::operator=(lVar15 + -0x170,puVar7 + 8);
        FVectorCurve::operator=(lVar15,puVar7 + 100);
        FVectorCurve::operator=(lVar15 + 0x170,puVar7 + 0xc0);
        puVar11 = local_a8;
        lVar9 = lVar10;
        do {
          puVar11 = puVar11 + -0xe;
          FRichCurve::~FRichCurve(puVar11);
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        puVar12 = local_218;
        lVar9 = lVar10;
        do {
          puVar12 = puVar12 + -0x70;
          FRichCurve::~FRichCurve(puVar12);
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        puVar12 = local_388;
        lVar9 = lVar10;
        do {
          puVar12 = puVar12 + -0x70;
          FRichCurve::~FRichCurve(puVar12);
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        lVar15 = lVar15 + 0x470;
        local_a48 = local_a48 + 1;
        local_a30 = local_a30 + 0x40;
        param_4 = local_a28;
      } while ((int)local_a48 < (int)param_3[1]);
    }
    fVar17 = (float)UBlendSpaceBase::GetAnimationLengthFromSampleData(param_4,param_3);
    iVar5 = FUN_1422ac3a0(param_4,param_3);
    iVar14 = iVar5 + 1;
    local_a30 = CONCAT44(local_a30._4_4_,iVar14);
    if (0 < (int)(uint)local_a38) {
      uVar13 = local_a38 & 0xffffffff;
      lVar15 = local_a40 + 400;
      do {
        FUN_142269800(lVar15 + -0x170);
        FUN_142269800(lVar15);
        FUN_142269800(lVar15 + 0x170);
        FUN_14227e0a0(lVar15 + -400);
        lVar15 = lVar15 + 0x470;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    lVar15 = local_a40;
    local_a48 = 0;
    uVar13 = 0;
    uVar8 = (uint)local_a38;
    if (0 < iVar14) {
      do {
        local_a18 = _DAT_1468b5b70;
        fStack_a14 = fRam00000001468b5b74;
        fStack_a10 = fRam00000001468b5b78;
        fStack_a0c = fRam00000001468b5b7c;
        local_a08 = _DAT_1468b5b80;
        fStack_a04 = fRam00000001468b5b84;
        fStack_a00 = fRam00000001468b5b88;
        fStack_9fc = fRam00000001468b5b8c;
        local_9f8._4_4_ = uRam00000001468b5b94;
        local_9f8._0_4_ = _DAT_1468b5b90;
        local_9f8._8_4_ = uRam00000001468b5b98;
        local_9f8._12_4_ = uRam00000001468b5b9c;
        fVar28 = (float)(int)uVar13 * (fVar17 / (float)iVar5);
        if (0 < (int)uVar8) {
          uVar16 = (ulonglong)uVar8;
          lVar9 = lVar15;
          uVar13 = 0;
          fVar24 = _DAT_1468b5b80;
          fVar25 = fRam00000001468b5b84;
          fVar26 = fRam00000001468b5b88;
          fVar27 = fRam00000001468b5b8c;
          fVar29 = _DAT_1468b5b70;
          fVar30 = fRam00000001468b5b74;
          fVar31 = fRam00000001468b5b78;
          fVar32 = fRam00000001468b5b7c;
          do {
            fVar21 = *(float *)(uVar13 + 0x10 + *param_3);
            if (0.0 <= fVar21) {
              if (1.0 <= fVar21) {
                fVar21 = 1.0;
              }
            }
            else {
              fVar21 = 0.0;
            }
            uVar6 = FTransformCurve::Evaluate(lVar9,&local_9b8,fVar28,fVar21);
            auVar1._4_4_ = -(uint)(fStack_9ac * fStack_9ac < fRam0000000146aef054);
            auVar1._0_4_ = -(uint)(fStack_9ac * fStack_9ac < _DAT_146aef050);
            auVar1._8_4_ = -(uint)(fStack_9ac * fStack_9ac < fRam0000000146aef058);
            auVar1._12_4_ = -(uint)(fStack_9ac * fStack_9ac < fRam0000000146aef05c);
            iVar14 = movmskps(uVar6,auVar1);
            if (iVar14 != 0) {
              fVar19 = local_9b8 * fVar30;
              fVar20 = local_9b8 * fVar29;
              fVar22 = fStack_9b0 * fVar29;
              fVar23 = fStack_9b0 * fVar31;
              fVar21 = fStack_9b4 * fVar29;
              fVar18 = fStack_9b4 * fVar30;
              fVar29 = local_9b8 * fVar32 * _DAT_146aeefb0 + fStack_9ac * fVar29 +
                       fStack_9b4 * fVar31 * _DAT_146aeefa0 + fStack_9b0 * fVar30 * _DAT_146aeef90;
              fVar30 = local_9b8 * fVar31 * fRam0000000146aeefb4 + fStack_9ac * fVar30 +
                       fStack_9b4 * fVar32 * fRam0000000146aeefa4 + fVar22 * fRam0000000146aeef94;
              fVar31 = fVar19 * fRam0000000146aeefb8 + fStack_9ac * fVar31 +
                       fVar21 * fRam0000000146aeefa8 + fStack_9b0 * fVar32 * fRam0000000146aeef98;
              fVar32 = fVar20 * fRam0000000146aeefbc + fStack_9ac * fVar32 +
                       fVar18 * fRam0000000146aeefac + fVar23 * fRam0000000146aeef9c;
              local_a18 = fVar29;
              fStack_a14 = fVar30;
              fStack_a10 = fVar31;
              fStack_a0c = fVar32;
            }
            fVar24 = fVar24 + local_9a8;
            fVar25 = fVar25 + fStack_9a4;
            fVar26 = fVar26 + fStack_9a0;
            fVar27 = fVar27 + fStack_99c;
            FTransformCurve::Evaluate(lVar9,local_9e8,fVar28,0x3f800000);
            lVar9 = lVar9 + 0x470;
            uVar13 = uVar13 + 0x40;
            local_9f8._12_4_ = 0;
            local_9f8._0_12_ = local_9e8._32_12_;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
          iVar14 = (int)local_a30;
          local_a08 = fVar24;
          fStack_a04 = fVar25;
          fStack_a00 = fVar26;
          fStack_9fc = fVar27;
        }
        FUN_1422858c0(&local_988,&local_a18,fVar28);
        local_a48 = local_a48 + 1;
        uVar13 = (ulonglong)local_a48;
        param_2 = local_a20;
        uVar8 = (uint)local_a38;
      } while ((int)local_a48 < iVar14);
    }
    *(undefined4 *)param_2 = (undefined4)local_988;
    *(undefined4 *)((longlong)param_2 + 4) = local_988._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_980;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_980._4_4_;
    param_2[2] = CONCAT62(uStack_976,local_978);
    param_2[3] = CONCAT44(uStack_96c,uStack_970);
    FUN_142255070(param_2 + 4,local_968);
    FUN_142255070(param_2 + 0x32,local_7f8);
    FUN_142255070(param_2 + 0x60,local_688);
    FUN_1422557f0(&local_a40);
    puVar12 = local_518;
    lVar15 = lVar10;
    do {
      puVar12 = puVar12 + -0x70;
      FRichCurve::~FRichCurve(puVar12);
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    puVar12 = local_688;
    lVar15 = lVar10;
    do {
      puVar12 = puVar12 + -0x70;
      FRichCurve::~FRichCurve(puVar12);
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    puVar12 = local_7f8;
    do {
      puVar12 = puVar12 + -0x70;
      FRichCurve::~FRichCurve(puVar12);
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return param_2;
}



// FUNCTION 14225f240 FUN_14225f240 body=256 status=ok
// SIG undefined FUN_14225f240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14225f240(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4,float param_5
                  )

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  
  uVar2 = uRam0000000146aeef4c;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = uVar2;
  uVar2 = uRam0000000146aeef44 & uRam0000000146aeef54;
  uVar3 = uRam0000000146aeef48 & uRam0000000146aeef58;
  uVar4 = uRam0000000146aeef4c & uRam0000000146aeef5c;
  param_2[8] = _DAT_146aeef40 & _DAT_146aeef50;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  param_2[0xb] = uVar4;
  uVar1 = *(undefined4 *)(*(longlong *)(param_3 + 0xf8) + 4 + (longlong)(param_4 * 2) * 4);
  fVar5 = param_5 / *(float *)(param_3 + 0x90);
  FUN_142267d10(param_2,param_3,
                *(undefined4 *)(*(longlong *)(param_3 + 0xf8) + (longlong)(param_4 * 2) * 4),param_5
                ,fVar5);
  FUN_142262cb0(param_2,param_3,uVar1,param_5,fVar5);
  if (0 < *(int *)(param_3 + 0x110)) {
    FUN_142265620(param_2,param_3,
                  *(undefined4 *)
                   (*(longlong *)(param_3 + 0x108) +
                   (longlong)(*(int *)(param_3 + 0x118) * param_4) * 4),param_5,fVar5);
  }
  return;
}



// FUNCTION 14225f340 FUN_14225f340 body=351 status=ok
// SIG undefined FUN_14225f340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14225f340(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4,float param_5
                  )

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  
  uVar6 = uRam0000000146aeef4c;
  lVar5 = (longlong)(param_4 * 4);
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = uVar6;
  uVar6 = uRam0000000146aeef44 & uRam0000000146aeef54;
  uVar7 = uRam0000000146aeef48 & uRam0000000146aeef58;
  uVar8 = uRam0000000146aeef4c & uRam0000000146aeef5c;
  param_2[8] = _DAT_146aeef40 & _DAT_146aeef50;
  param_2[9] = uVar6;
  param_2[10] = uVar7;
  param_2[0xb] = uVar8;
  lVar4 = *(longlong *)(param_3 + 0xf8);
  lVar3 = *(longlong *)(param_3 + 0x120);
  iVar1 = *(int *)(lVar4 + 8 + lVar5 * 4);
  fVar9 = param_5 / *(float *)(param_3 + 0x90);
  uVar2 = *(undefined4 *)(lVar4 + 0xc + lVar5 * 4);
  (**(code **)(**(longlong **)(param_3 + 0x140) + 0x38))
            (*(longlong **)(param_3 + 0x140),param_2,param_3,*(int *)(lVar4 + lVar5 * 4) + lVar3,
             *(undefined4 *)(lVar4 + 4 + lVar5 * 4),param_5,fVar9);
  (**(code **)(**(longlong **)(param_3 + 0x148) + 0x30))
            (*(longlong **)(param_3 + 0x148),param_2,param_3,iVar1 + lVar3,uVar2,param_5,fVar9);
  if (0 < *(int *)(param_3 + 0x110)) {
    lVar4 = (longlong)(*(int *)(param_3 + 0x118) * param_4);
    (**(code **)(**(longlong **)(param_3 + 0x150) + 0x40))
              (*(longlong **)(param_3 + 0x150),param_2,param_3,
               (longlong)*(int *)(*(longlong *)(param_3 + 0x108) + lVar4 * 4) +
               *(longlong *)(param_3 + 0x120),
               *(undefined4 *)(*(longlong *)(param_3 + 0x108) + 4 + lVar4 * 4),param_5,fVar9);
  }
  return;
}



// FUNCTION 14225f4a0 FUN_14225f4a0 body=1015 status=ok
// SIG undefined FUN_14225f4a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14225f4a0(undefined8 param_1,uint *param_2,longlong param_3,float *param_4,int param_5,
                  undefined8 param_6,float param_7)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined4 in_EAX;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fStack_8c;
  
  if (param_5 == 1) {
    fVar8 = param_4[2];
    fVar14 = ((1.0 - *param_4 * *param_4) - param_4[1] * param_4[1]) - fVar8 * fVar8;
    if (fVar14 <= 0.0) {
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = (ulonglong)(uint)fVar8;
      return;
    }
    *(undefined8 *)param_2 = *(undefined8 *)param_4;
    *(ulonglong *)(param_2 + 2) = CONCAT44(SQRT(fVar14),fVar8);
    return;
  }
  if ((param_5 < 2) || (param_7 <= 0.0)) {
    param_5 = 0;
  }
  else {
    param_5 = param_5 + -1;
    if (param_7 < 1.0) {
      param_7 = (float)param_5 * param_7;
      iVar4 = (int)param_7;
      fVar8 = param_7;
      if ((iVar4 != -0x80000000) && ((float)iVar4 != param_7)) {
        auVar7._4_4_ = param_7;
        auVar7._0_4_ = param_7;
        auVar7._8_8_ = 0;
        uVar3 = movmskps(in_EAX,auVar7);
        fVar8 = (float)(int)(iVar4 - (uVar3 & 1));
      }
      iVar4 = param_5;
      if ((int)fVar8 <= param_5) {
        iVar4 = (int)fVar8;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        param_7 = 0.0;
      }
      else {
        param_7 = param_7 - fVar8;
      }
      iVar2 = param_5;
      if (iVar4 + 1 <= param_5) {
        iVar2 = iVar4 + 1;
      }
      param_5 = iVar4;
      if (iVar4 != iVar2) {
        lVar5 = (longlong)(iVar4 * 0xc);
        fVar8 = *(float *)(lVar5 + (longlong)param_4);
        fVar14 = *(float *)(lVar5 + 4 + (longlong)param_4);
        fVar11 = *(float *)(lVar5 + 8 + (longlong)param_4);
        fVar20 = 0.0;
        lVar5 = (longlong)(iVar2 * 0xc);
        fVar9 = ((1.0 - fVar8 * fVar8) - fVar14 * fVar14) - fVar11 * fVar11;
        if (0.0 < fVar9) {
          fVar20 = SQRT(fVar9);
        }
        fVar9 = *(float *)(lVar5 + (longlong)param_4);
        fVar12 = *(float *)(lVar5 + 4 + (longlong)param_4);
        fVar13 = *(float *)(lVar5 + 8 + (longlong)param_4);
        fVar21 = 0.0;
        fVar10 = ((1.0 - fVar9 * fVar9) - fVar12 * fVar12) - fVar13 * fVar13;
        if (0.0 < fVar10) {
          fVar21 = SQRT(fVar10);
        }
        if (fVar12 * fVar14 + fVar9 * fVar8 + fVar13 * fVar11 + fVar21 * fVar20 < 0.0) {
          fVar10 = -1.0;
        }
        else {
          fVar10 = 1.0;
        }
        fVar10 = (1.0 - param_7) * fVar10;
        fVar17 = fVar8 * fVar10 + fVar9 * param_7;
        fVar18 = fVar14 * fVar10 + fVar12 * param_7;
        fVar19 = fVar11 * fVar10 + fVar13 * param_7;
        fVar21 = fVar20 * fVar10 + fVar21 * param_7;
        auVar6._0_4_ = fVar17 * fVar17 + fVar19 * fVar19;
        auVar6._4_4_ = fVar18 * fVar18 + fVar21 * fVar21;
        auVar6._8_4_ = fVar19 * fVar19 + fVar17 * fVar17;
        auVar6._12_4_ = fVar21 * fVar21 + fVar18 * fVar18;
        fVar20 = auVar6._4_4_ + auVar6._0_4_;
        fVar12 = auVar6._8_4_ + auVar6._4_4_;
        fVar13 = auVar6._12_4_ + auVar6._8_4_;
        fVar10 = auVar6._0_4_ + auVar6._12_4_;
        auVar1._4_4_ = fVar12;
        auVar1._0_4_ = fVar20;
        auVar1._8_4_ = fVar13;
        auVar1._12_4_ = fVar10;
        auVar7 = rsqrtps(auVar6,auVar1);
        fVar8 = auVar7._0_4_;
        fVar14 = auVar7._4_4_;
        fVar11 = auVar7._8_4_;
        fVar9 = auVar7._12_4_;
        fVar8 = (_DAT_146aeef30 - fVar8 * fVar8 * fVar20 * _DAT_146aeef30) * fVar8 + fVar8;
        fVar14 = (fRam0000000146aeef34 - fVar14 * fVar14 * fVar12 * fRam0000000146aeef34) * fVar14 +
                 fVar14;
        fVar11 = (fRam0000000146aeef38 - fVar11 * fVar11 * fVar13 * fRam0000000146aeef38) * fVar11 +
                 fVar11;
        fVar9 = (fRam0000000146aeef3c - fVar9 * fVar9 * fVar10 * fRam0000000146aeef3c) * fVar9 +
                fVar9;
        uVar3 = ((uint)(((fRam0000000146aeef34 - fVar14 * fVar14 * fVar12 * fRam0000000146aeef34) *
                         fVar14 + fVar14) * fVar18) ^ uRam0000000146aeef24) &
                -(uint)(1e-08 <= fVar12) ^ uRam0000000146aeef24;
        uVar15 = ((uint)(((fRam0000000146aeef38 - fVar11 * fVar11 * fVar13 * fRam0000000146aeef38) *
                          fVar11 + fVar11) * fVar19) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar13) ^ uRam0000000146aeef28;
        uVar16 = ((uint)(((fRam0000000146aeef3c - fVar9 * fVar9 * fVar10 * fRam0000000146aeef3c) *
                          fVar9 + fVar9) * fVar21) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar10) ^ uRam0000000146aeef2c;
        *param_2 = ((uint)(((_DAT_146aeef30 - fVar8 * fVar8 * fVar20 * _DAT_146aeef30) * fVar8 +
                           fVar8) * fVar17) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar20) ^
                   _DAT_146aeef20;
        param_2[1] = uVar3;
        param_2[2] = uVar15;
        param_2[3] = uVar16;
        return;
      }
    }
  }
  lVar5 = (longlong)(param_5 * 0xc);
  fVar8 = *(float *)(lVar5 + (longlong)param_4);
  fVar14 = *(float *)(lVar5 + 4 + (longlong)param_4);
  fVar11 = *(float *)(lVar5 + 8 + (longlong)param_4);
  fStack_8c = ((1.0 - fVar8 * fVar8) - fVar14 * fVar14) - fVar11 * fVar11;
  if (fStack_8c <= 0.0) {
    fStack_8c = 0.0;
  }
  else {
    fStack_8c = SQRT(fStack_8c);
  }
  *(ulonglong *)param_2 = CONCAT44(fVar14,fVar8);
  *(ulonglong *)(param_2 + 2) = CONCAT44(fStack_8c,fVar11);
  return;
}



// FUNCTION 14225f8a0 FUN_14225f8a0 body=876 status=ok
// SIG undefined FUN_14225f8a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14225f8a0(undefined8 param_1,uint *param_2,longlong param_3,float *param_4,int param_5,
                  undefined8 param_6,float param_7)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined4 in_EAX;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  uint uVar18;
  uint uVar19;
  float fVar20;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  if (param_5 == 1) {
    fVar7 = param_4[2];
    fVar17 = ((1.0 - *param_4 * *param_4) - param_4[1] * param_4[1]) - fVar7 * fVar7;
    if (0.0 < fVar17) {
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = CONCAT44(SQRT(fVar17),fVar7);
      return;
    }
    *(undefined8 *)param_2 = *(undefined8 *)param_4;
    *(ulonglong *)(param_2 + 2) = (ulonglong)(uint)fVar7;
    return;
  }
  if ((param_5 < 2) || (param_7 <= 0.0)) {
    param_5 = 0;
  }
  else {
    param_5 = param_5 + -1;
    if (param_7 < 1.0) {
      param_7 = (float)param_5 * param_7;
      iVar4 = (int)param_7;
      fVar7 = param_7;
      if ((iVar4 != -0x80000000) && ((float)iVar4 != param_7)) {
        auVar6._4_4_ = param_7;
        auVar6._0_4_ = param_7;
        auVar6._8_8_ = 0;
        uVar3 = movmskps(in_EAX,auVar6);
        fVar7 = (float)(int)(iVar4 - (uVar3 & 1));
      }
      iVar4 = param_5;
      if ((int)fVar7 <= param_5) {
        iVar4 = (int)fVar7;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        param_7 = 0.0;
      }
      else {
        param_7 = param_7 - fVar7;
      }
      iVar2 = param_5;
      if (iVar4 + 1 <= param_5) {
        iVar2 = iVar4 + 1;
      }
      param_5 = iVar4;
      if (iVar4 != iVar2) {
        FQuatFixed48NoW::ToQuat((longlong)(iVar4 * 6) + (longlong)param_4,&local_88);
        FQuatFixed48NoW::ToQuat((longlong)(iVar2 * 6) + (longlong)param_4,&local_98);
        if (fStack_94 * fStack_84 + local_98 * local_88 + fStack_90 * fStack_80 +
            fStack_8c * fStack_7c < 0.0) {
          fVar7 = -1.0;
        }
        else {
          fVar7 = 1.0;
        }
        fVar7 = (1.0 - param_7) * fVar7;
        fVar20 = local_88 * fVar7 + local_98 * param_7;
        fVar12 = fStack_80 * fVar7 + fStack_90 * param_7;
        fVar11 = fStack_84 * fVar7 + fStack_94 * param_7;
        fVar7 = fStack_7c * fVar7 + fStack_8c * param_7;
        auVar5._0_4_ = fVar20 * fVar20 + fVar12 * fVar12;
        auVar5._4_4_ = fVar11 * fVar11 + fVar7 * fVar7;
        auVar5._8_4_ = fVar12 * fVar12 + fVar20 * fVar20;
        auVar5._12_4_ = fVar7 * fVar7 + fVar11 * fVar11;
        fVar13 = auVar5._4_4_ + auVar5._0_4_;
        fVar14 = auVar5._8_4_ + auVar5._4_4_;
        fVar15 = auVar5._12_4_ + auVar5._8_4_;
        fVar16 = auVar5._0_4_ + auVar5._12_4_;
        auVar1._4_4_ = fVar14;
        auVar1._0_4_ = fVar13;
        auVar1._8_4_ = fVar15;
        auVar1._12_4_ = fVar16;
        auVar6 = rsqrtps(auVar5,auVar1);
        fVar17 = auVar6._0_4_;
        fVar8 = auVar6._4_4_;
        fVar9 = auVar6._8_4_;
        fVar10 = auVar6._12_4_;
        fVar17 = (_DAT_146aeef30 - fVar17 * fVar17 * fVar13 * _DAT_146aeef30) * fVar17 + fVar17;
        fVar8 = (fRam0000000146aeef34 - fVar8 * fVar8 * fVar14 * fRam0000000146aeef34) * fVar8 +
                fVar8;
        fVar9 = (fRam0000000146aeef38 - fVar9 * fVar9 * fVar15 * fRam0000000146aeef38) * fVar9 +
                fVar9;
        fVar10 = (fRam0000000146aeef3c - fVar10 * fVar10 * fVar16 * fRam0000000146aeef3c) * fVar10 +
                 fVar10;
        uVar3 = ((uint)(((fRam0000000146aeef34 - fVar8 * fVar8 * fVar14 * fRam0000000146aeef34) *
                         fVar8 + fVar8) * fVar11) ^ uRam0000000146aeef24) & -(uint)(1e-08 <= fVar14)
                ^ uRam0000000146aeef24;
        uVar18 = ((uint)(((fRam0000000146aeef38 - fVar9 * fVar9 * fVar15 * fRam0000000146aeef38) *
                          fVar9 + fVar9) * fVar12) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar15) ^ uRam0000000146aeef28;
        uVar19 = ((uint)(((fRam0000000146aeef3c - fVar10 * fVar10 * fVar16 * fRam0000000146aeef3c) *
                          fVar10 + fVar10) * fVar7) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar16) ^ uRam0000000146aeef2c;
        *param_2 = ((uint)(((_DAT_146aeef30 - fVar17 * fVar17 * fVar13 * _DAT_146aeef30) * fVar17 +
                           fVar17) * fVar20) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar13) ^
                   _DAT_146aeef20;
        param_2[1] = uVar3;
        param_2[2] = uVar18;
        param_2[3] = uVar19;
        return;
      }
    }
  }
  FQuatFixed48NoW::ToQuat((longlong)(param_5 * 6) + (longlong)param_4,&local_88);
  *(ulonglong *)param_2 = CONCAT44(fStack_84,local_88);
  *(ulonglong *)(param_2 + 2) = CONCAT44(fStack_7c,fStack_80);
  return;
}



// FUNCTION 14225fc10 FUN_14225fc10 body=921 status=ok
// SIG undefined FUN_14225fc10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14225fc10(undefined8 param_1,uint *param_2,longlong param_3,float *param_4,int param_5,
                  undefined8 param_6,float param_7)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined4 in_EAX;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  uint uVar18;
  uint uVar19;
  float fVar20;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  if (param_5 == 1) {
    fVar7 = param_4[2];
    fVar17 = ((1.0 - *param_4 * *param_4) - param_4[1] * param_4[1]) - fVar7 * fVar7;
    if (fVar17 <= 0.0) {
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = (ulonglong)(uint)fVar7;
    }
    else {
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = CONCAT44(SQRT(fVar17),fVar7);
    }
  }
  else {
    if ((param_5 < 2) || (param_7 <= 0.0)) {
      param_5 = 0;
    }
    else {
      param_5 = param_5 + -1;
      if (param_7 < 1.0) {
        param_7 = (float)param_5 * param_7;
        iVar4 = (int)param_7;
        fVar7 = param_7;
        if ((iVar4 != -0x80000000) && ((float)iVar4 != param_7)) {
          auVar6._4_4_ = param_7;
          auVar6._0_4_ = param_7;
          auVar6._8_8_ = 0;
          uVar3 = movmskps(in_EAX,auVar6);
          fVar7 = (float)(int)(iVar4 - (uVar3 & 1));
        }
        iVar4 = param_5;
        if ((int)fVar7 <= param_5) {
          iVar4 = (int)fVar7;
        }
        if (*(char *)(param_3 + 0x198) == '\x01') {
          param_7 = 0.0;
        }
        else {
          param_7 = param_7 - fVar7;
        }
        iVar2 = param_5;
        if (iVar4 + 1 <= param_5) {
          iVar2 = iVar4 + 1;
        }
        param_5 = iVar4;
        if (iVar4 != iVar2) {
          FQuatIntervalFixed32NoW::ToQuat
                    ((longlong)(iVar4 * 4) + 0x18 + (longlong)param_4,&local_88,param_4,param_4 + 3)
          ;
          FQuatIntervalFixed32NoW::ToQuat
                    ((longlong)param_4 + (longlong)(iVar2 * 4) + 0x18,&local_98,param_4,param_4 + 3)
          ;
          if (fStack_94 * fStack_84 + local_98 * local_88 + fStack_90 * fStack_80 +
              fStack_8c * fStack_7c < 0.0) {
            fVar7 = -1.0;
          }
          else {
            fVar7 = 1.0;
          }
          fVar7 = (1.0 - param_7) * fVar7;
          fVar20 = local_88 * fVar7 + local_98 * param_7;
          fVar12 = fStack_80 * fVar7 + fStack_90 * param_7;
          fVar11 = fStack_84 * fVar7 + fStack_94 * param_7;
          fVar7 = fStack_7c * fVar7 + fStack_8c * param_7;
          auVar5._0_4_ = fVar20 * fVar20 + fVar12 * fVar12;
          auVar5._4_4_ = fVar11 * fVar11 + fVar7 * fVar7;
          auVar5._8_4_ = fVar12 * fVar12 + fVar20 * fVar20;
          auVar5._12_4_ = fVar7 * fVar7 + fVar11 * fVar11;
          fVar13 = auVar5._4_4_ + auVar5._0_4_;
          fVar14 = auVar5._8_4_ + auVar5._4_4_;
          fVar15 = auVar5._12_4_ + auVar5._8_4_;
          fVar16 = auVar5._0_4_ + auVar5._12_4_;
          auVar1._4_4_ = fVar14;
          auVar1._0_4_ = fVar13;
          auVar1._8_4_ = fVar15;
          auVar1._12_4_ = fVar16;
          auVar6 = rsqrtps(auVar5,auVar1);
          fVar17 = auVar6._0_4_;
          fVar8 = auVar6._4_4_;
          fVar9 = auVar6._8_4_;
          fVar10 = auVar6._12_4_;
          fVar17 = (_DAT_146aeef30 - fVar17 * fVar17 * fVar13 * _DAT_146aeef30) * fVar17 + fVar17;
          fVar8 = (fRam0000000146aeef34 - fVar8 * fVar8 * fVar14 * fRam0000000146aeef34) * fVar8 +
                  fVar8;
          fVar9 = (fRam0000000146aeef38 - fVar9 * fVar9 * fVar15 * fRam0000000146aeef38) * fVar9 +
                  fVar9;
          fVar10 = (fRam0000000146aeef3c - fVar10 * fVar10 * fVar16 * fRam0000000146aeef3c) * fVar10
                   + fVar10;
          uVar3 = ((uint)(((fRam0000000146aeef34 - fVar8 * fVar8 * fVar14 * fRam0000000146aeef34) *
                           fVar8 + fVar8) * fVar11) ^ uRam0000000146aeef24) &
                  -(uint)(1e-08 <= fVar14) ^ uRam0000000146aeef24;
          uVar18 = ((uint)(((fRam0000000146aeef38 - fVar9 * fVar9 * fVar15 * fRam0000000146aeef38) *
                            fVar9 + fVar9) * fVar12) ^ uRam0000000146aeef28) &
                   -(uint)(1e-08 <= fVar15) ^ uRam0000000146aeef28;
          uVar19 = ((uint)(((fRam0000000146aeef3c - fVar10 * fVar10 * fVar16 * fRam0000000146aeef3c)
                            * fVar10 + fVar10) * fVar7) ^ uRam0000000146aeef2c) &
                   -(uint)(1e-08 <= fVar16) ^ uRam0000000146aeef2c;
          *param_2 = ((uint)(((_DAT_146aeef30 - fVar17 * fVar17 * fVar13 * _DAT_146aeef30) * fVar17
                             + fVar17) * fVar20) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar13) ^
                     _DAT_146aeef20;
          param_2[1] = uVar3;
          param_2[2] = uVar18;
          param_2[3] = uVar19;
          return;
        }
      }
    }
    FQuatIntervalFixed32NoW::ToQuat
              ((longlong)(param_5 * 4) + 0x18 + (longlong)param_4,&local_88,param_4,param_4 + 3);
    *(ulonglong *)param_2 = CONCAT44(fStack_84,local_88);
    *(ulonglong *)(param_2 + 2) = CONCAT44(fStack_7c,fStack_80);
  }
  return;
}



// FUNCTION 14225ffb0 FUN_14225ffb0 body=882 status=ok
// SIG undefined FUN_14225ffb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14225ffb0(undefined8 param_1,uint *param_2,longlong param_3,float *param_4,int param_5,
                  undefined8 param_6,float param_7)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined4 in_EAX;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  uint uVar18;
  uint uVar19;
  float fVar20;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  if (param_5 == 1) {
    fVar7 = param_4[2];
    fVar17 = ((1.0 - *param_4 * *param_4) - param_4[1] * param_4[1]) - fVar7 * fVar7;
    if (0.0 < fVar17) {
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = CONCAT44(SQRT(fVar17),fVar7);
      return;
    }
    *(undefined8 *)param_2 = *(undefined8 *)param_4;
    *(ulonglong *)(param_2 + 2) = (ulonglong)(uint)fVar7;
    return;
  }
  if ((param_5 < 2) || (param_7 <= 0.0)) {
    param_5 = 0;
  }
  else {
    param_5 = param_5 + -1;
    if (param_7 < 1.0) {
      param_7 = (float)param_5 * param_7;
      iVar4 = (int)param_7;
      fVar7 = param_7;
      if ((iVar4 != -0x80000000) && ((float)iVar4 != param_7)) {
        auVar6._4_4_ = param_7;
        auVar6._0_4_ = param_7;
        auVar6._8_8_ = 0;
        uVar3 = movmskps(in_EAX,auVar6);
        fVar7 = (float)(int)(iVar4 - (uVar3 & 1));
      }
      iVar4 = param_5;
      if ((int)fVar7 <= param_5) {
        iVar4 = (int)fVar7;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        param_7 = 0.0;
      }
      else {
        param_7 = param_7 - fVar7;
      }
      iVar2 = param_5;
      if (iVar4 + 1 <= param_5) {
        iVar2 = iVar4 + 1;
      }
      param_5 = iVar4;
      if (iVar4 != iVar2) {
        FQuatFixed32NoW::ToQuat((longlong)(iVar4 * 4) + (longlong)param_4,&local_88);
        FQuatFixed32NoW::ToQuat((longlong)(iVar2 * 4) + (longlong)param_4,&local_98);
        if (fStack_94 * fStack_84 + local_98 * local_88 + fStack_90 * fStack_80 +
            fStack_8c * fStack_7c < 0.0) {
          fVar7 = -1.0;
        }
        else {
          fVar7 = 1.0;
        }
        fVar7 = (1.0 - param_7) * fVar7;
        fVar20 = local_88 * fVar7 + local_98 * param_7;
        fVar12 = fStack_80 * fVar7 + fStack_90 * param_7;
        fVar11 = fStack_84 * fVar7 + fStack_94 * param_7;
        fVar7 = fStack_7c * fVar7 + fStack_8c * param_7;
        auVar5._0_4_ = fVar20 * fVar20 + fVar12 * fVar12;
        auVar5._4_4_ = fVar11 * fVar11 + fVar7 * fVar7;
        auVar5._8_4_ = fVar12 * fVar12 + fVar20 * fVar20;
        auVar5._12_4_ = fVar7 * fVar7 + fVar11 * fVar11;
        fVar13 = auVar5._4_4_ + auVar5._0_4_;
        fVar14 = auVar5._8_4_ + auVar5._4_4_;
        fVar15 = auVar5._12_4_ + auVar5._8_4_;
        fVar16 = auVar5._0_4_ + auVar5._12_4_;
        auVar1._4_4_ = fVar14;
        auVar1._0_4_ = fVar13;
        auVar1._8_4_ = fVar15;
        auVar1._12_4_ = fVar16;
        auVar6 = rsqrtps(auVar5,auVar1);
        fVar17 = auVar6._0_4_;
        fVar8 = auVar6._4_4_;
        fVar9 = auVar6._8_4_;
        fVar10 = auVar6._12_4_;
        fVar17 = (_DAT_146aeef30 - fVar17 * fVar17 * fVar13 * _DAT_146aeef30) * fVar17 + fVar17;
        fVar8 = (fRam0000000146aeef34 - fVar8 * fVar8 * fVar14 * fRam0000000146aeef34) * fVar8 +
                fVar8;
        fVar9 = (fRam0000000146aeef38 - fVar9 * fVar9 * fVar15 * fRam0000000146aeef38) * fVar9 +
                fVar9;
        fVar10 = (fRam0000000146aeef3c - fVar10 * fVar10 * fVar16 * fRam0000000146aeef3c) * fVar10 +
                 fVar10;
        uVar3 = ((uint)(((fRam0000000146aeef34 - fVar8 * fVar8 * fVar14 * fRam0000000146aeef34) *
                         fVar8 + fVar8) * fVar11) ^ uRam0000000146aeef24) & -(uint)(1e-08 <= fVar14)
                ^ uRam0000000146aeef24;
        uVar18 = ((uint)(((fRam0000000146aeef38 - fVar9 * fVar9 * fVar15 * fRam0000000146aeef38) *
                          fVar9 + fVar9) * fVar12) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar15) ^ uRam0000000146aeef28;
        uVar19 = ((uint)(((fRam0000000146aeef3c - fVar10 * fVar10 * fVar16 * fRam0000000146aeef3c) *
                          fVar10 + fVar10) * fVar7) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar16) ^ uRam0000000146aeef2c;
        *param_2 = ((uint)(((_DAT_146aeef30 - fVar17 * fVar17 * fVar13 * _DAT_146aeef30) * fVar17 +
                           fVar17) * fVar20) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar13) ^
                   _DAT_146aeef20;
        param_2[1] = uVar3;
        param_2[2] = uVar18;
        param_2[3] = uVar19;
        return;
      }
    }
  }
  FQuatFixed32NoW::ToQuat((longlong)(param_5 * 4) + (longlong)param_4,&local_88);
  *(ulonglong *)param_2 = CONCAT44(fStack_84,local_88);
  *(ulonglong *)(param_2 + 2) = CONCAT44(fStack_7c,fStack_80);
  return;
}



// FUNCTION 142260330 FUN_142260330 body=882 status=ok
// SIG undefined FUN_142260330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142260330(undefined8 param_1,uint *param_2,longlong param_3,float *param_4,int param_5,
                  undefined8 param_6,float param_7)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined4 in_EAX;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  uint uVar18;
  uint uVar19;
  float fVar20;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  if (param_5 == 1) {
    fVar7 = param_4[2];
    fVar17 = ((1.0 - *param_4 * *param_4) - param_4[1] * param_4[1]) - fVar7 * fVar7;
    if (0.0 < fVar17) {
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = CONCAT44(SQRT(fVar17),fVar7);
      return;
    }
    *(undefined8 *)param_2 = *(undefined8 *)param_4;
    *(ulonglong *)(param_2 + 2) = (ulonglong)(uint)fVar7;
    return;
  }
  if ((param_5 < 2) || (param_7 <= 0.0)) {
    param_5 = 0;
  }
  else {
    param_5 = param_5 + -1;
    if (param_7 < 1.0) {
      param_7 = (float)param_5 * param_7;
      iVar4 = (int)param_7;
      fVar7 = param_7;
      if ((iVar4 != -0x80000000) && ((float)iVar4 != param_7)) {
        auVar6._4_4_ = param_7;
        auVar6._0_4_ = param_7;
        auVar6._8_8_ = 0;
        uVar3 = movmskps(in_EAX,auVar6);
        fVar7 = (float)(int)(iVar4 - (uVar3 & 1));
      }
      iVar4 = param_5;
      if ((int)fVar7 <= param_5) {
        iVar4 = (int)fVar7;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        param_7 = 0.0;
      }
      else {
        param_7 = param_7 - fVar7;
      }
      iVar2 = param_5;
      if (iVar4 + 1 <= param_5) {
        iVar2 = iVar4 + 1;
      }
      param_5 = iVar4;
      if (iVar4 != iVar2) {
        FQuatFloat32NoW::ToQuat((longlong)(iVar4 * 4) + (longlong)param_4,&local_88);
        FQuatFloat32NoW::ToQuat((longlong)(iVar2 * 4) + (longlong)param_4,&local_98);
        if (fStack_94 * fStack_84 + local_98 * local_88 + fStack_90 * fStack_80 +
            fStack_8c * fStack_7c < 0.0) {
          fVar7 = -1.0;
        }
        else {
          fVar7 = 1.0;
        }
        fVar7 = (1.0 - param_7) * fVar7;
        fVar20 = local_88 * fVar7 + local_98 * param_7;
        fVar12 = fStack_80 * fVar7 + fStack_90 * param_7;
        fVar11 = fStack_84 * fVar7 + fStack_94 * param_7;
        fVar7 = fStack_7c * fVar7 + fStack_8c * param_7;
        auVar5._0_4_ = fVar20 * fVar20 + fVar12 * fVar12;
        auVar5._4_4_ = fVar11 * fVar11 + fVar7 * fVar7;
        auVar5._8_4_ = fVar12 * fVar12 + fVar20 * fVar20;
        auVar5._12_4_ = fVar7 * fVar7 + fVar11 * fVar11;
        fVar13 = auVar5._4_4_ + auVar5._0_4_;
        fVar14 = auVar5._8_4_ + auVar5._4_4_;
        fVar15 = auVar5._12_4_ + auVar5._8_4_;
        fVar16 = auVar5._0_4_ + auVar5._12_4_;
        auVar1._4_4_ = fVar14;
        auVar1._0_4_ = fVar13;
        auVar1._8_4_ = fVar15;
        auVar1._12_4_ = fVar16;
        auVar6 = rsqrtps(auVar5,auVar1);
        fVar17 = auVar6._0_4_;
        fVar8 = auVar6._4_4_;
        fVar9 = auVar6._8_4_;
        fVar10 = auVar6._12_4_;
        fVar17 = (_DAT_146aeef30 - fVar17 * fVar17 * fVar13 * _DAT_146aeef30) * fVar17 + fVar17;
        fVar8 = (fRam0000000146aeef34 - fVar8 * fVar8 * fVar14 * fRam0000000146aeef34) * fVar8 +
                fVar8;
        fVar9 = (fRam0000000146aeef38 - fVar9 * fVar9 * fVar15 * fRam0000000146aeef38) * fVar9 +
                fVar9;
        fVar10 = (fRam0000000146aeef3c - fVar10 * fVar10 * fVar16 * fRam0000000146aeef3c) * fVar10 +
                 fVar10;
        uVar3 = ((uint)(((fRam0000000146aeef34 - fVar8 * fVar8 * fVar14 * fRam0000000146aeef34) *
                         fVar8 + fVar8) * fVar11) ^ uRam0000000146aeef24) & -(uint)(1e-08 <= fVar14)
                ^ uRam0000000146aeef24;
        uVar18 = ((uint)(((fRam0000000146aeef38 - fVar9 * fVar9 * fVar15 * fRam0000000146aeef38) *
                          fVar9 + fVar9) * fVar12) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar15) ^ uRam0000000146aeef28;
        uVar19 = ((uint)(((fRam0000000146aeef3c - fVar10 * fVar10 * fVar16 * fRam0000000146aeef3c) *
                          fVar10 + fVar10) * fVar7) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar16) ^ uRam0000000146aeef2c;
        *param_2 = ((uint)(((_DAT_146aeef30 - fVar17 * fVar17 * fVar13 * _DAT_146aeef30) * fVar17 +
                           fVar17) * fVar20) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar13) ^
                   _DAT_146aeef20;
        param_2[1] = uVar3;
        param_2[2] = uVar18;
        param_2[3] = uVar19;
        return;
      }
    }
  }
  FQuatFloat32NoW::ToQuat((longlong)(param_5 * 4) + (longlong)param_4,&local_88);
  *(ulonglong *)param_2 = CONCAT44(fStack_84,local_88);
  *(ulonglong *)(param_2 + 2) = CONCAT44(fStack_7c,fStack_80);
  return;
}



// FUNCTION 1422606b0 FUN_1422606b0 body=638 status=ok
// SIG undefined FUN_1422606b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422606b0(undefined8 param_1,uint *param_2,longlong param_3,float *param_4,int param_5,
                  undefined8 param_6,float param_7)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined4 in_EAX;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  uint uVar18;
  uint uVar19;
  float fVar20;
  undefined8 uStack_20;
  
  if (param_5 == 1) {
    fVar7 = param_4[2];
    fVar16 = ((1.0 - *param_4 * *param_4) - param_4[1] * param_4[1]) - fVar7 * fVar7;
    if (0.0 < fVar16) {
      uStack_20 = CONCAT44(SQRT(fVar16),fVar7);
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = uStack_20;
      return;
    }
    uStack_20 = (ulonglong)(uint)fVar7;
    *(undefined8 *)param_2 = *(undefined8 *)param_4;
    *(ulonglong *)(param_2 + 2) = uStack_20;
    return;
  }
  if (((1 < param_5) && (0.0 < param_7)) && (param_5 = param_5 + -1, param_7 < 1.0)) {
    param_7 = (float)param_5 * param_7;
    iVar4 = (int)param_7;
    fVar7 = param_7;
    if ((iVar4 != -0x80000000) && ((float)iVar4 != param_7)) {
      auVar6._4_4_ = param_7;
      auVar6._0_4_ = param_7;
      auVar6._8_8_ = 0;
      uVar3 = movmskps(in_EAX,auVar6);
      fVar7 = (float)(int)(iVar4 - (uVar3 & 1));
    }
    iVar4 = param_5;
    if ((int)fVar7 <= param_5) {
      iVar4 = (int)fVar7;
    }
    if (*(char *)(param_3 + 0x198) == '\x01') {
      param_7 = 0.0;
    }
    else {
      param_7 = param_7 - fVar7;
    }
    if (iVar4 + 1 <= param_5) {
      param_5 = iVar4 + 1;
    }
    if (iVar4 != param_5) {
      if (DAT_1464aa810 * DAT_1464aa810 + DAT_1464aa814 * DAT_1464aa814 +
          DAT_1464aa818 * DAT_1464aa818 + DAT_1464aa81c * DAT_1464aa81c < 0.0) {
        fVar7 = -1.0;
      }
      else {
        fVar7 = 1.0;
      }
      fVar7 = (1.0 - param_7) * fVar7;
      fVar20 = (fVar7 + param_7) * DAT_1464aa810;
      fVar17 = (fVar7 + param_7) * DAT_1464aa81c;
      fVar16 = (fVar7 + param_7) * DAT_1464aa814;
      fVar8 = (fVar7 + param_7) * DAT_1464aa818;
      auVar5._0_4_ = fVar20 * fVar20 + fVar8 * fVar8;
      auVar5._4_4_ = fVar16 * fVar16 + fVar17 * fVar17;
      auVar5._8_4_ = fVar8 * fVar8 + fVar20 * fVar20;
      auVar5._12_4_ = fVar17 * fVar17 + fVar16 * fVar16;
      fVar12 = auVar5._4_4_ + auVar5._0_4_;
      fVar13 = auVar5._8_4_ + auVar5._4_4_;
      fVar14 = auVar5._12_4_ + auVar5._8_4_;
      fVar15 = auVar5._0_4_ + auVar5._12_4_;
      auVar1._4_4_ = fVar13;
      auVar1._0_4_ = fVar12;
      auVar1._8_4_ = fVar14;
      auVar1._12_4_ = fVar15;
      auVar6 = rsqrtps(auVar5,auVar1);
      fVar7 = auVar6._0_4_;
      fVar9 = auVar6._4_4_;
      fVar10 = auVar6._8_4_;
      fVar11 = auVar6._12_4_;
      fVar7 = (_DAT_146aeef30 - fVar7 * fVar7 * fVar12 * _DAT_146aeef30) * fVar7 + fVar7;
      fVar9 = (fRam0000000146aeef34 - fVar9 * fVar9 * fVar13 * fRam0000000146aeef34) * fVar9 + fVar9
      ;
      fVar10 = (fRam0000000146aeef38 - fVar10 * fVar10 * fVar14 * fRam0000000146aeef38) * fVar10 +
               fVar10;
      fVar11 = (fRam0000000146aeef3c - fVar11 * fVar11 * fVar15 * fRam0000000146aeef3c) * fVar11 +
               fVar11;
      uVar3 = ((uint)(((fRam0000000146aeef34 - fVar9 * fVar9 * fVar13 * fRam0000000146aeef34) *
                       fVar9 + fVar9) * fVar16) ^ uRam0000000146aeef24) & -(uint)(1e-08 <= fVar13) ^
              uRam0000000146aeef24;
      uVar18 = ((uint)(((fRam0000000146aeef38 - fVar10 * fVar10 * fVar14 * fRam0000000146aeef38) *
                        fVar10 + fVar10) * fVar8) ^ uRam0000000146aeef28) & -(uint)(1e-08 <= fVar14)
               ^ uRam0000000146aeef28;
      uVar19 = ((uint)(((fRam0000000146aeef3c - fVar11 * fVar11 * fVar15 * fRam0000000146aeef3c) *
                        fVar11 + fVar11) * fVar17) ^ uRam0000000146aeef2c) &
               -(uint)(1e-08 <= fVar15) ^ uRam0000000146aeef2c;
      *param_2 = ((uint)(((_DAT_146aeef30 - fVar7 * fVar7 * fVar12 * _DAT_146aeef30) * fVar7 + fVar7
                         ) * fVar20) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar12) ^ _DAT_146aeef20;
      param_2[1] = uVar3;
      param_2[2] = uVar18;
      param_2[3] = uVar19;
      return;
    }
  }
  uVar2 = CONCAT44(DAT_1464aa81c,DAT_1464aa818);
  *(ulonglong *)param_2 = CONCAT44(DAT_1464aa814,DAT_1464aa810);
  *(undefined8 *)(param_2 + 2) = uVar2;
  return;
}



// FUNCTION 142260930 FUN_142260930 body=661 status=ok
// SIG undefined FUN_142260930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142260930(undefined8 param_1,uint *param_2,longlong param_3,float *param_4,int param_5,
                  undefined8 param_6,float param_7)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined4 in_EAX;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
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
  float fVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  undefined8 uStack_20;
  
  if (param_5 == 1) {
    fVar10 = param_4[2];
    fVar19 = ((1.0 - *param_4 * *param_4) - param_4[1] * param_4[1]) - fVar10 * fVar10;
    if (fVar19 <= 0.0) {
      uStack_20 = (ulonglong)(uint)fVar10;
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = uStack_20;
      return;
    }
    uStack_20 = CONCAT44(SQRT(fVar19),fVar10);
    *(undefined8 *)param_2 = *(undefined8 *)param_4;
    *(ulonglong *)(param_2 + 2) = uStack_20;
    return;
  }
  if ((param_5 < 2) || (param_7 <= 0.0)) {
    param_5 = 0;
  }
  else {
    param_5 = param_5 + -1;
    if (param_7 < 1.0) {
      param_7 = (float)param_5 * param_7;
      iVar6 = (int)param_7;
      fVar10 = param_7;
      if ((iVar6 != -0x80000000) && ((float)iVar6 != param_7)) {
        auVar9._4_4_ = param_7;
        auVar9._0_4_ = param_7;
        auVar9._8_8_ = 0;
        uVar4 = movmskps(in_EAX,auVar9);
        fVar10 = (float)(int)(iVar6 - (uVar4 & 1));
      }
      iVar6 = param_5;
      if ((int)fVar10 <= param_5) {
        iVar6 = (int)fVar10;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        param_7 = 0.0;
      }
      else {
        param_7 = param_7 - fVar10;
      }
      iVar7 = param_5;
      if (iVar6 + 1 <= param_5) {
        iVar7 = iVar6 + 1;
      }
      param_5 = iVar6;
      if (iVar6 != iVar7) {
        pfVar5 = (float *)((longlong)(iVar7 << 4) + (longlong)param_4);
        param_4 = (float *)((longlong)(iVar6 << 4) + (longlong)param_4);
        if (pfVar5[1] * param_4[1] + *pfVar5 * *param_4 + pfVar5[2] * param_4[2] +
            pfVar5[3] * param_4[3] < 0.0) {
          fVar10 = -1.0;
        }
        else {
          fVar10 = 1.0;
        }
        fVar10 = (1.0 - param_7) * fVar10;
        fVar23 = fVar10 * *param_4 + param_7 * *pfVar5;
        fVar11 = fVar10 * param_4[1] + param_7 * pfVar5[1];
        fVar19 = fVar10 * param_4[2] + param_7 * pfVar5[2];
        fVar20 = fVar10 * param_4[3] + param_7 * pfVar5[3];
        auVar8._0_4_ = fVar23 * fVar23 + fVar19 * fVar19;
        auVar8._4_4_ = fVar11 * fVar11 + fVar20 * fVar20;
        auVar8._8_4_ = fVar19 * fVar19 + fVar23 * fVar23;
        auVar8._12_4_ = fVar20 * fVar20 + fVar11 * fVar11;
        fVar15 = auVar8._4_4_ + auVar8._0_4_;
        fVar16 = auVar8._8_4_ + auVar8._4_4_;
        fVar17 = auVar8._12_4_ + auVar8._8_4_;
        fVar18 = auVar8._0_4_ + auVar8._12_4_;
        auVar2._4_4_ = fVar16;
        auVar2._0_4_ = fVar15;
        auVar2._8_4_ = fVar17;
        auVar2._12_4_ = fVar18;
        auVar9 = rsqrtps(auVar8,auVar2);
        fVar10 = auVar9._0_4_;
        fVar12 = auVar9._4_4_;
        fVar13 = auVar9._8_4_;
        fVar14 = auVar9._12_4_;
        fVar10 = (_DAT_146aeef30 - fVar10 * fVar10 * fVar15 * _DAT_146aeef30) * fVar10 + fVar10;
        fVar12 = (fRam0000000146aeef34 - fVar12 * fVar12 * fVar16 * fRam0000000146aeef34) * fVar12 +
                 fVar12;
        fVar13 = (fRam0000000146aeef38 - fVar13 * fVar13 * fVar17 * fRam0000000146aeef38) * fVar13 +
                 fVar13;
        fVar14 = (fRam0000000146aeef3c - fVar14 * fVar14 * fVar18 * fRam0000000146aeef3c) * fVar14 +
                 fVar14;
        uVar4 = ((uint)(((fRam0000000146aeef34 - fVar12 * fVar12 * fVar16 * fRam0000000146aeef34) *
                         fVar12 + fVar12) * fVar11) ^ uRam0000000146aeef24) &
                -(uint)(1e-08 <= fVar16) ^ uRam0000000146aeef24;
        uVar21 = ((uint)(((fRam0000000146aeef38 - fVar13 * fVar13 * fVar17 * fRam0000000146aeef38) *
                          fVar13 + fVar13) * fVar19) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar17) ^ uRam0000000146aeef28;
        uVar22 = ((uint)(((fRam0000000146aeef3c - fVar14 * fVar14 * fVar18 * fRam0000000146aeef3c) *
                          fVar14 + fVar14) * fVar20) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar18) ^ uRam0000000146aeef2c;
        *param_2 = ((uint)(((_DAT_146aeef30 - fVar10 * fVar10 * fVar15 * _DAT_146aeef30) * fVar10 +
                           fVar10) * fVar23) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar15) ^
                   _DAT_146aeef20;
        param_2[1] = uVar4;
        param_2[2] = uVar21;
        param_2[3] = uVar22;
        return;
      }
    }
  }
  puVar1 = (undefined8 *)((longlong)(param_5 << 4) + (longlong)param_4);
  uVar3 = puVar1[1];
  *(undefined8 *)param_2 = *puVar1;
  *(undefined8 *)(param_2 + 2) = uVar3;
  return;
}



// FUNCTION 142260bd0 FUN_142260bd0 body=1364 status=ok
// SIG undefined FUN_142260bd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142260bd0(undefined8 param_1,uint *param_2,longlong param_3,float *param_4,int param_5,
                  undefined8 param_6,float param_7)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
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
  float fVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fStack_8c;
  
  if (param_5 == 1) {
    fVar14 = param_4[2];
    fVar18 = ((1.0 - *param_4 * *param_4) - param_4[1] * param_4[1]) - fVar14 * fVar14;
    if (fVar18 <= 0.0) {
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = (ulonglong)(uint)fVar14;
    }
    else {
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = CONCAT44(SQRT(fVar18),fVar14);
    }
  }
  else {
    iVar2 = *(int *)(param_3 + 0xb8);
    iVar6 = param_5 + -1;
    uVar3 = (longlong)(param_5 * 0xc) + 3 + (longlong)param_4 & 0xfffffffffffffffc;
    if ((param_5 < 2) || (param_7 <= 0.0)) {
      iVar6 = 0;
    }
    else if (param_7 < 1.0) {
      fVar14 = (float)(iVar2 + -1) * param_7;
      iVar1 = (int)fVar14;
      if (iVar1 < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar2 + -2;
        if (iVar1 < iVar2 + -2) {
          iVar5 = iVar1;
        }
      }
      iVar1 = (int)((float)iVar6 * param_7);
      if (iVar1 < 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar6;
        if (iVar1 < iVar6) {
          iVar7 = iVar1;
        }
      }
      iVar1 = iVar6;
      if (iVar2 < 0x100) {
        if (iVar5 < (int)(uint)*(byte *)((longlong)iVar7 + uVar3)) {
          iVar7 = iVar7 + -1;
          lVar4 = (longlong)iVar7;
          iVar2 = 0;
          if (0 < iVar7) {
            do {
              iVar2 = iVar7;
              if ((int)(uint)*(byte *)(lVar4 + uVar3) <= iVar5) break;
              iVar7 = iVar7 + -1;
              lVar4 = lVar4 + -1;
              iVar2 = 0;
            } while (0 < lVar4);
          }
        }
        else {
          iVar7 = iVar7 + 1;
          for (lVar4 = (longlong)iVar7; iVar2 = iVar6, lVar4 <= (longlong)param_5 + -1;
              lVar4 = lVar4 + 1) {
            if (iVar5 < (int)(uint)*(byte *)(lVar4 + uVar3)) {
              iVar2 = iVar7 + -1;
              break;
            }
            iVar7 = iVar7 + 1;
          }
        }
        uVar20 = (uint)*(byte *)((longlong)iVar2 + uVar3);
        if (iVar2 + 1 <= iVar6) {
          iVar1 = iVar2 + 1;
        }
        uVar21 = (uint)*(byte *)((longlong)iVar1 + uVar3);
        iVar6 = iVar2;
      }
      else {
        if (iVar5 < (int)(uint)*(ushort *)(uVar3 + (longlong)iVar7 * 2)) {
          iVar7 = iVar7 + -1;
          lVar4 = (longlong)iVar7;
          iVar2 = 0;
          if (0 < iVar7) {
            do {
              iVar2 = iVar7;
              if ((int)(uint)*(ushort *)(uVar3 + lVar4 * 2) <= iVar5) break;
              iVar7 = iVar7 + -1;
              lVar4 = lVar4 + -1;
              iVar2 = 0;
            } while (0 < lVar4);
          }
        }
        else {
          iVar7 = iVar7 + 1;
          for (lVar4 = (longlong)iVar7; iVar2 = iVar6, lVar4 <= iVar6; lVar4 = lVar4 + 1) {
            if (iVar5 < (int)(uint)*(ushort *)(uVar3 + lVar4 * 2)) {
              iVar2 = iVar7 + -1;
              break;
            }
            iVar7 = iVar7 + 1;
          }
        }
        uVar20 = (uint)*(ushort *)(uVar3 + (longlong)iVar2 * 2);
        if (iVar2 + 1 <= iVar6) {
          iVar1 = iVar2 + 1;
        }
        uVar21 = (uint)*(ushort *)(uVar3 + (longlong)iVar1 * 2);
        iVar6 = iVar2;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        fVar14 = 0.0;
      }
      else {
        iVar2 = 1;
        if (0 < (int)(uVar21 - uVar20)) {
          iVar2 = uVar21 - uVar20;
        }
        fVar14 = (fVar14 - (float)uVar20) / (float)iVar2;
      }
      if (iVar6 != iVar1) {
        lVar4 = (longlong)(iVar6 * 0xc);
        fVar18 = *(float *)(lVar4 + (longlong)param_4);
        fVar12 = *(float *)(lVar4 + 4 + (longlong)param_4);
        fVar13 = *(float *)(lVar4 + 8 + (longlong)param_4);
        lVar4 = (longlong)(iVar1 * 0xc);
        fVar10 = ((1.0 - fVar18 * fVar18) - fVar12 * fVar12) - fVar13 * fVar13;
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = SQRT(fVar10);
        }
        fVar15 = *(float *)(lVar4 + (longlong)param_4);
        fVar16 = *(float *)(lVar4 + 4 + (longlong)param_4);
        fVar17 = *(float *)(lVar4 + 8 + (longlong)param_4);
        fVar11 = ((1.0 - fVar15 * fVar15) - fVar16 * fVar16) - fVar17 * fVar17;
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        else {
          fVar11 = SQRT(fVar11);
        }
        if (fVar16 * fVar12 + fVar15 * fVar18 + fVar17 * fVar13 + fVar11 * fVar10 < 0.0) {
          fVar19 = -1.0;
        }
        else {
          fVar19 = 1.0;
        }
        fVar19 = (1.0 - fVar14) * fVar19;
        fVar23 = fVar18 * fVar19 + fVar15 * fVar14;
        fVar24 = fVar12 * fVar19 + fVar16 * fVar14;
        fVar25 = fVar13 * fVar19 + fVar17 * fVar14;
        fVar11 = fVar11 * fVar14 + fVar10 * fVar19;
        auVar8._0_4_ = fVar23 * fVar23 + fVar25 * fVar25;
        auVar8._4_4_ = fVar24 * fVar24 + fVar11 * fVar11;
        auVar8._8_4_ = fVar25 * fVar25 + fVar23 * fVar23;
        auVar8._12_4_ = fVar11 * fVar11 + fVar24 * fVar24;
        fVar10 = auVar8._4_4_ + auVar8._0_4_;
        fVar15 = auVar8._8_4_ + auVar8._4_4_;
        fVar16 = auVar8._12_4_ + auVar8._8_4_;
        fVar17 = auVar8._0_4_ + auVar8._12_4_;
        auVar9._4_4_ = fVar15;
        auVar9._0_4_ = fVar10;
        auVar9._8_4_ = fVar16;
        auVar9._12_4_ = fVar17;
        auVar9 = rsqrtps(auVar8,auVar9);
        fVar14 = auVar9._0_4_;
        fVar18 = auVar9._4_4_;
        fVar12 = auVar9._8_4_;
        fVar13 = auVar9._12_4_;
        fVar14 = (_DAT_146aeef30 - fVar14 * fVar14 * fVar10 * _DAT_146aeef30) * fVar14 + fVar14;
        fVar18 = (fRam0000000146aeef34 - fVar18 * fVar18 * fVar15 * fRam0000000146aeef34) * fVar18 +
                 fVar18;
        fVar12 = (fRam0000000146aeef38 - fVar12 * fVar12 * fVar16 * fRam0000000146aeef38) * fVar12 +
                 fVar12;
        fVar13 = (fRam0000000146aeef3c - fVar13 * fVar13 * fVar17 * fRam0000000146aeef3c) * fVar13 +
                 fVar13;
        uVar20 = ((uint)(((fRam0000000146aeef34 - fVar18 * fVar18 * fVar15 * fRam0000000146aeef34) *
                          fVar18 + fVar18) * fVar24) ^ uRam0000000146aeef24) &
                 -(uint)(1e-08 <= fVar15) ^ uRam0000000146aeef24;
        uVar21 = ((uint)(((fRam0000000146aeef38 - fVar12 * fVar12 * fVar16 * fRam0000000146aeef38) *
                          fVar12 + fVar12) * fVar25) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar16) ^ uRam0000000146aeef28;
        uVar22 = ((uint)(((fRam0000000146aeef3c - fVar13 * fVar13 * fVar17 * fRam0000000146aeef3c) *
                          fVar13 + fVar13) * fVar11) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar17) ^ uRam0000000146aeef2c;
        *param_2 = ((uint)(((_DAT_146aeef30 - fVar14 * fVar14 * fVar10 * _DAT_146aeef30) * fVar14 +
                           fVar14) * fVar23) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar10) ^
                   _DAT_146aeef20;
        param_2[1] = uVar20;
        param_2[2] = uVar21;
        param_2[3] = uVar22;
        return;
      }
    }
    lVar4 = (longlong)(iVar6 * 0xc);
    fVar14 = *(float *)(lVar4 + (longlong)param_4);
    fVar18 = *(float *)(lVar4 + 4 + (longlong)param_4);
    fVar12 = *(float *)(lVar4 + 8 + (longlong)param_4);
    fStack_8c = ((1.0 - fVar14 * fVar14) - fVar18 * fVar18) - fVar12 * fVar12;
    if (fStack_8c <= 0.0) {
      fStack_8c = 0.0;
    }
    else {
      fStack_8c = SQRT(fStack_8c);
    }
    *(ulonglong *)param_2 = CONCAT44(fVar18,fVar14);
    *(ulonglong *)(param_2 + 2) = CONCAT44(fStack_8c,fVar12);
  }
  return;
}



// FUNCTION 142261130 FUN_142261130 body=1186 status=ok
// SIG undefined FUN_142261130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142261130(undefined8 param_1,uint *param_2,longlong param_3,float *param_4,int param_5,
                  undefined8 param_6,float param_7)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
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
  float fVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  if (param_5 == 1) {
    fVar23 = param_4[2];
    fVar19 = ((1.0 - *param_4 * *param_4) - param_4[1] * param_4[1]) - fVar23 * fVar23;
    if (fVar19 <= 0.0) {
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = (ulonglong)(uint)fVar23;
    }
    else {
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = CONCAT44(SQRT(fVar19),fVar23);
    }
  }
  else {
    iVar2 = *(int *)(param_3 + 0xb8);
    iVar6 = param_5 + -1;
    uVar3 = (longlong)(param_5 * 6) + 3 + (longlong)param_4 & 0xfffffffffffffffc;
    if ((param_5 < 2) || (param_7 <= 0.0)) {
      iVar6 = 0;
    }
    else if (param_7 < 1.0) {
      fVar23 = (float)(iVar2 + -1) * param_7;
      iVar1 = (int)fVar23;
      if (iVar1 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar2 + -2;
        if (iVar1 < iVar2 + -2) {
          iVar4 = iVar1;
        }
      }
      iVar1 = (int)((float)iVar6 * param_7);
      if (iVar1 < 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar6;
        if (iVar1 < iVar6) {
          iVar7 = iVar1;
        }
      }
      iVar1 = iVar6;
      if (iVar2 < 0x100) {
        if (iVar4 < (int)(uint)*(byte *)((longlong)iVar7 + uVar3)) {
          iVar7 = iVar7 + -1;
          lVar5 = (longlong)iVar7;
          iVar2 = 0;
          if (0 < iVar7) {
            do {
              iVar2 = iVar7;
              if ((int)(uint)*(byte *)(lVar5 + uVar3) <= iVar4) break;
              iVar7 = iVar7 + -1;
              lVar5 = lVar5 + -1;
              iVar2 = 0;
            } while (0 < lVar5);
          }
        }
        else {
          iVar7 = iVar7 + 1;
          for (lVar5 = (longlong)iVar7; iVar2 = iVar6, lVar5 <= (longlong)param_5 + -1;
              lVar5 = lVar5 + 1) {
            if (iVar4 < (int)(uint)*(byte *)(lVar5 + uVar3)) {
              iVar2 = iVar7 + -1;
              break;
            }
            iVar7 = iVar7 + 1;
          }
        }
        uVar20 = (uint)*(byte *)((longlong)iVar2 + uVar3);
        if (iVar2 + 1 <= iVar6) {
          iVar1 = iVar2 + 1;
        }
        uVar21 = (uint)*(byte *)((longlong)iVar1 + uVar3);
        iVar6 = iVar2;
      }
      else {
        if (iVar4 < (int)(uint)*(ushort *)(uVar3 + (longlong)iVar7 * 2)) {
          iVar7 = iVar7 + -1;
          lVar5 = (longlong)iVar7;
          iVar2 = 0;
          if (0 < iVar7) {
            do {
              iVar2 = iVar7;
              if ((int)(uint)*(ushort *)(uVar3 + lVar5 * 2) <= iVar4) break;
              iVar7 = iVar7 + -1;
              lVar5 = lVar5 + -1;
              iVar2 = 0;
            } while (0 < lVar5);
          }
        }
        else {
          iVar7 = iVar7 + 1;
          for (lVar5 = (longlong)iVar7; iVar2 = iVar6, lVar5 <= iVar6; lVar5 = lVar5 + 1) {
            if (iVar4 < (int)(uint)*(ushort *)(uVar3 + lVar5 * 2)) {
              iVar2 = iVar7 + -1;
              break;
            }
            iVar7 = iVar7 + 1;
          }
        }
        uVar20 = (uint)*(ushort *)(uVar3 + (longlong)iVar2 * 2);
        if (iVar2 + 1 <= iVar6) {
          iVar1 = iVar2 + 1;
        }
        uVar21 = (uint)*(ushort *)(uVar3 + (longlong)iVar1 * 2);
        iVar6 = iVar2;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        fVar23 = 0.0;
      }
      else {
        iVar2 = 1;
        if (0 < (int)(uVar21 - uVar20)) {
          iVar2 = uVar21 - uVar20;
        }
        fVar23 = (fVar23 - (float)uVar20) / (float)iVar2;
      }
      if (iVar6 != iVar1) {
        FQuatFixed48NoW::ToQuat((longlong)(iVar6 * 6) + (longlong)param_4,&local_88);
        FQuatFixed48NoW::ToQuat((longlong)(iVar1 * 6) + (longlong)param_4,&local_98);
        if (fStack_94 * fStack_84 + local_98 * local_88 + fStack_90 * fStack_80 +
            fStack_8c * fStack_7c < 0.0) {
          fVar19 = -1.0;
        }
        else {
          fVar19 = 1.0;
        }
        fVar19 = (1.0 - fVar23) * fVar19;
        fVar24 = local_88 * fVar19 + local_98 * fVar23;
        fVar14 = fStack_80 * fVar19 + fStack_90 * fVar23;
        fVar13 = fStack_84 * fVar19 + fStack_94 * fVar23;
        fVar23 = fStack_7c * fVar19 + fStack_8c * fVar23;
        auVar8._0_4_ = fVar24 * fVar24 + fVar14 * fVar14;
        auVar8._4_4_ = fVar13 * fVar13 + fVar23 * fVar23;
        auVar8._8_4_ = fVar14 * fVar14 + fVar24 * fVar24;
        auVar8._12_4_ = fVar23 * fVar23 + fVar13 * fVar13;
        fVar15 = auVar8._4_4_ + auVar8._0_4_;
        fVar16 = auVar8._8_4_ + auVar8._4_4_;
        fVar17 = auVar8._12_4_ + auVar8._8_4_;
        fVar18 = auVar8._0_4_ + auVar8._12_4_;
        auVar9._4_4_ = fVar16;
        auVar9._0_4_ = fVar15;
        auVar9._8_4_ = fVar17;
        auVar9._12_4_ = fVar18;
        auVar9 = rsqrtps(auVar8,auVar9);
        fVar19 = auVar9._0_4_;
        fVar10 = auVar9._4_4_;
        fVar11 = auVar9._8_4_;
        fVar12 = auVar9._12_4_;
        fVar19 = (_DAT_146aeef30 - fVar19 * fVar19 * fVar15 * _DAT_146aeef30) * fVar19 + fVar19;
        fVar10 = (fRam0000000146aeef34 - fVar10 * fVar10 * fVar16 * fRam0000000146aeef34) * fVar10 +
                 fVar10;
        fVar11 = (fRam0000000146aeef38 - fVar11 * fVar11 * fVar17 * fRam0000000146aeef38) * fVar11 +
                 fVar11;
        fVar12 = (fRam0000000146aeef3c - fVar12 * fVar12 * fVar18 * fRam0000000146aeef3c) * fVar12 +
                 fVar12;
        uVar20 = ((uint)(((fRam0000000146aeef34 - fVar10 * fVar10 * fVar16 * fRam0000000146aeef34) *
                          fVar10 + fVar10) * fVar13) ^ uRam0000000146aeef24) &
                 -(uint)(1e-08 <= fVar16) ^ uRam0000000146aeef24;
        uVar21 = ((uint)(((fRam0000000146aeef38 - fVar11 * fVar11 * fVar17 * fRam0000000146aeef38) *
                          fVar11 + fVar11) * fVar14) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar17) ^ uRam0000000146aeef28;
        uVar22 = ((uint)(((fRam0000000146aeef3c - fVar12 * fVar12 * fVar18 * fRam0000000146aeef3c) *
                          fVar12 + fVar12) * fVar23) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar18) ^ uRam0000000146aeef2c;
        *param_2 = ((uint)(((_DAT_146aeef30 - fVar19 * fVar19 * fVar15 * _DAT_146aeef30) * fVar19 +
                           fVar19) * fVar24) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar15) ^
                   _DAT_146aeef20;
        param_2[1] = uVar20;
        param_2[2] = uVar21;
        param_2[3] = uVar22;
        return;
      }
    }
    FQuatFixed48NoW::ToQuat((longlong)(iVar6 * 6) + (longlong)param_4,&local_88);
    *(ulonglong *)param_2 = CONCAT44(fStack_84,local_88);
    *(ulonglong *)(param_2 + 2) = CONCAT44(fStack_7c,fStack_80);
  }
  return;
}



// FUNCTION 1422615e0 FUN_1422615e0 body=1250 status=ok
// SIG undefined FUN_1422615e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422615e0(undefined8 param_1,uint *param_2,longlong param_3,float *param_4,int param_5,
                  undefined8 param_6,float param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
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
  float fVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  if (param_5 == 1) {
    fVar23 = param_4[2];
    fVar19 = ((1.0 - *param_4 * *param_4) - param_4[1] * param_4[1]) - fVar23 * fVar23;
    if (0.0 < fVar19) {
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = CONCAT44(SQRT(fVar19),fVar23);
      return;
    }
    *(undefined8 *)param_2 = *(undefined8 *)param_4;
    *(ulonglong *)(param_2 + 2) = (ulonglong)(uint)fVar23;
    return;
  }
  iVar2 = *(int *)(param_3 + 0xb8);
  iVar6 = param_5 + -1;
  uVar4 = (longlong)param_4 + (longlong)(param_5 * 4) + 0x1b & 0xfffffffffffffffc;
  if ((param_5 < 2) || (param_7 <= 0.0)) {
    iVar6 = 0;
    fVar23 = 0.0;
    iVar1 = 0;
  }
  else {
    if (1.0 <= param_7) goto LAB_1422616f9;
    fVar23 = (float)(iVar2 + -1) * param_7;
    iVar1 = (int)fVar23;
    if (iVar1 < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar2 + -2;
      if (iVar1 < iVar2 + -2) {
        iVar3 = iVar1;
      }
    }
    iVar1 = (int)((float)iVar6 * param_7);
    if (iVar1 < 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = iVar6;
      if (iVar1 < iVar6) {
        iVar7 = iVar1;
      }
    }
    iVar1 = iVar6;
    if (iVar2 < 0x100) {
      if (iVar3 < (int)(uint)*(byte *)((longlong)iVar7 + uVar4)) {
        iVar7 = iVar7 + -1;
        lVar5 = (longlong)iVar7;
        iVar2 = 0;
        if (0 < iVar7) {
          do {
            iVar2 = iVar7;
            if ((int)(uint)*(byte *)(lVar5 + uVar4) <= iVar3) break;
            iVar7 = iVar7 + -1;
            lVar5 = lVar5 + -1;
            iVar2 = 0;
          } while (0 < lVar5);
        }
      }
      else {
        iVar7 = iVar7 + 1;
        for (lVar5 = (longlong)iVar7; iVar2 = iVar6, lVar5 <= (longlong)param_5 + -1;
            lVar5 = lVar5 + 1) {
          if (iVar3 < (int)(uint)*(byte *)(lVar5 + uVar4)) {
            iVar2 = iVar7 + -1;
            break;
          }
          iVar7 = iVar7 + 1;
        }
      }
      uVar20 = (uint)*(byte *)((longlong)iVar2 + uVar4);
      if (iVar2 + 1 <= iVar6) {
        iVar1 = iVar2 + 1;
      }
      uVar21 = (uint)*(byte *)((longlong)iVar1 + uVar4);
      iVar6 = iVar2;
    }
    else {
      if (iVar3 < (int)(uint)*(ushort *)(uVar4 + (longlong)iVar7 * 2)) {
        iVar7 = iVar7 + -1;
        lVar5 = (longlong)iVar7;
        iVar2 = 0;
        if (0 < iVar7) {
          do {
            iVar2 = iVar7;
            if ((int)(uint)*(ushort *)(uVar4 + lVar5 * 2) <= iVar3) break;
            iVar7 = iVar7 + -1;
            lVar5 = lVar5 + -1;
            iVar2 = 0;
          } while (0 < lVar5);
        }
      }
      else {
        iVar7 = iVar7 + 1;
        for (lVar5 = (longlong)iVar7; iVar2 = iVar6, lVar5 <= iVar6; lVar5 = lVar5 + 1) {
          if (iVar3 < (int)(uint)*(ushort *)(uVar4 + lVar5 * 2)) {
            iVar2 = iVar7 + -1;
            break;
          }
          iVar7 = iVar7 + 1;
        }
      }
      uVar20 = (uint)*(ushort *)(uVar4 + (longlong)iVar2 * 2);
      if (iVar2 + 1 <= iVar6) {
        iVar1 = iVar2 + 1;
      }
      uVar21 = (uint)*(ushort *)(uVar4 + (longlong)iVar1 * 2);
      iVar6 = iVar2;
    }
    if (*(char *)(param_3 + 0x198) == '\x01') {
      fVar23 = 0.0;
    }
    else {
      iVar2 = 1;
      if (0 < (int)(uVar21 - uVar20)) {
        iVar2 = uVar21 - uVar20;
      }
      fVar23 = (fVar23 - (float)uVar20) / (float)iVar2;
    }
  }
  if (iVar6 != iVar1) {
    FQuatIntervalFixed32NoW::ToQuat
              ((longlong)(iVar6 * 4) + 0x18 + (longlong)param_4,&local_88,param_4,param_4 + 3);
    FQuatIntervalFixed32NoW::ToQuat
              ((longlong)param_4 + (longlong)(iVar1 * 4) + 0x18,&local_98,param_4,param_4 + 3);
    if (fStack_94 * fStack_84 + local_98 * local_88 + fStack_90 * fStack_80 + fStack_8c * fStack_7c
        < 0.0) {
      fVar19 = -1.0;
    }
    else {
      fVar19 = 1.0;
    }
    fVar19 = (1.0 - fVar23) * fVar19;
    fVar24 = local_88 * fVar19 + local_98 * fVar23;
    fVar14 = fStack_80 * fVar19 + fStack_90 * fVar23;
    fVar13 = fStack_84 * fVar19 + fStack_94 * fVar23;
    fVar23 = fStack_7c * fVar19 + fStack_8c * fVar23;
    auVar8._0_4_ = fVar24 * fVar24 + fVar14 * fVar14;
    auVar8._4_4_ = fVar13 * fVar13 + fVar23 * fVar23;
    auVar8._8_4_ = fVar14 * fVar14 + fVar24 * fVar24;
    auVar8._12_4_ = fVar23 * fVar23 + fVar13 * fVar13;
    fVar15 = auVar8._4_4_ + auVar8._0_4_;
    fVar16 = auVar8._8_4_ + auVar8._4_4_;
    fVar17 = auVar8._12_4_ + auVar8._8_4_;
    fVar18 = auVar8._0_4_ + auVar8._12_4_;
    auVar9._4_4_ = fVar16;
    auVar9._0_4_ = fVar15;
    auVar9._8_4_ = fVar17;
    auVar9._12_4_ = fVar18;
    auVar9 = rsqrtps(auVar8,auVar9);
    fVar19 = auVar9._0_4_;
    fVar10 = auVar9._4_4_;
    fVar11 = auVar9._8_4_;
    fVar12 = auVar9._12_4_;
    fVar19 = (_DAT_146aeef30 - fVar19 * fVar19 * fVar15 * _DAT_146aeef30) * fVar19 + fVar19;
    fVar10 = (fRam0000000146aeef34 - fVar10 * fVar10 * fVar16 * fRam0000000146aeef34) * fVar10 +
             fVar10;
    fVar11 = (fRam0000000146aeef38 - fVar11 * fVar11 * fVar17 * fRam0000000146aeef38) * fVar11 +
             fVar11;
    fVar12 = (fRam0000000146aeef3c - fVar12 * fVar12 * fVar18 * fRam0000000146aeef3c) * fVar12 +
             fVar12;
    uVar20 = ((uint)(((fRam0000000146aeef34 - fVar10 * fVar10 * fVar16 * fRam0000000146aeef34) *
                      fVar10 + fVar10) * fVar13) ^ uRam0000000146aeef24) & -(uint)(1e-08 <= fVar16)
             ^ uRam0000000146aeef24;
    uVar21 = ((uint)(((fRam0000000146aeef38 - fVar11 * fVar11 * fVar17 * fRam0000000146aeef38) *
                      fVar11 + fVar11) * fVar14) ^ uRam0000000146aeef28) & -(uint)(1e-08 <= fVar17)
             ^ uRam0000000146aeef28;
    uVar22 = ((uint)(((fRam0000000146aeef3c - fVar12 * fVar12 * fVar18 * fRam0000000146aeef3c) *
                      fVar12 + fVar12) * fVar23) ^ uRam0000000146aeef2c) & -(uint)(1e-08 <= fVar18)
             ^ uRam0000000146aeef2c;
    *param_2 = ((uint)(((_DAT_146aeef30 - fVar19 * fVar19 * fVar15 * _DAT_146aeef30) * fVar19 +
                       fVar19) * fVar24) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar15) ^
               _DAT_146aeef20;
    param_2[1] = uVar20;
    param_2[2] = uVar21;
    param_2[3] = uVar22;
    return;
  }
LAB_1422616f9:
  FQuatIntervalFixed32NoW::ToQuat
            ((longlong)(iVar6 * 4) + 0x18 + (longlong)param_4,&local_88,param_4,param_4 + 3);
  *(ulonglong *)param_2 = CONCAT44(fStack_84,local_88);
  *(ulonglong *)(param_2 + 2) = CONCAT44(fStack_7c,fStack_80);
  return;
}



// FUNCTION 142261ad0 FUN_142261ad0 body=1192 status=ok
// SIG undefined FUN_142261ad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142261ad0(undefined8 param_1,uint *param_2,longlong param_3,float *param_4,int param_5,
                  undefined8 param_6,float param_7)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
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
  float fVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  if (param_5 == 1) {
    fVar23 = param_4[2];
    fVar19 = ((1.0 - *param_4 * *param_4) - param_4[1] * param_4[1]) - fVar23 * fVar23;
    if (fVar19 <= 0.0) {
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = (ulonglong)(uint)fVar23;
    }
    else {
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = CONCAT44(SQRT(fVar19),fVar23);
    }
  }
  else {
    iVar2 = *(int *)(param_3 + 0xb8);
    iVar6 = param_5 + -1;
    uVar3 = (longlong)(param_5 * 4) + 3 + (longlong)param_4 & 0xfffffffffffffffc;
    if ((param_5 < 2) || (param_7 <= 0.0)) {
      iVar6 = 0;
    }
    else if (param_7 < 1.0) {
      fVar23 = (float)(iVar2 + -1) * param_7;
      iVar1 = (int)fVar23;
      if (iVar1 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar2 + -2;
        if (iVar1 < iVar2 + -2) {
          iVar4 = iVar1;
        }
      }
      iVar1 = (int)((float)iVar6 * param_7);
      if (iVar1 < 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar6;
        if (iVar1 < iVar6) {
          iVar7 = iVar1;
        }
      }
      iVar1 = iVar6;
      if (iVar2 < 0x100) {
        if (iVar4 < (int)(uint)*(byte *)((longlong)iVar7 + uVar3)) {
          iVar7 = iVar7 + -1;
          lVar5 = (longlong)iVar7;
          iVar2 = 0;
          if (0 < iVar7) {
            do {
              iVar2 = iVar7;
              if ((int)(uint)*(byte *)(lVar5 + uVar3) <= iVar4) break;
              iVar7 = iVar7 + -1;
              lVar5 = lVar5 + -1;
              iVar2 = 0;
            } while (0 < lVar5);
          }
        }
        else {
          iVar7 = iVar7 + 1;
          for (lVar5 = (longlong)iVar7; iVar2 = iVar6, lVar5 <= (longlong)param_5 + -1;
              lVar5 = lVar5 + 1) {
            if (iVar4 < (int)(uint)*(byte *)(lVar5 + uVar3)) {
              iVar2 = iVar7 + -1;
              break;
            }
            iVar7 = iVar7 + 1;
          }
        }
        uVar20 = (uint)*(byte *)((longlong)iVar2 + uVar3);
        if (iVar2 + 1 <= iVar6) {
          iVar1 = iVar2 + 1;
        }
        uVar21 = (uint)*(byte *)((longlong)iVar1 + uVar3);
        iVar6 = iVar2;
      }
      else {
        if (iVar4 < (int)(uint)*(ushort *)(uVar3 + (longlong)iVar7 * 2)) {
          iVar7 = iVar7 + -1;
          lVar5 = (longlong)iVar7;
          iVar2 = 0;
          if (0 < iVar7) {
            do {
              iVar2 = iVar7;
              if ((int)(uint)*(ushort *)(uVar3 + lVar5 * 2) <= iVar4) break;
              iVar7 = iVar7 + -1;
              lVar5 = lVar5 + -1;
              iVar2 = 0;
            } while (0 < lVar5);
          }
        }
        else {
          iVar7 = iVar7 + 1;
          for (lVar5 = (longlong)iVar7; iVar2 = iVar6, lVar5 <= iVar6; lVar5 = lVar5 + 1) {
            if (iVar4 < (int)(uint)*(ushort *)(uVar3 + lVar5 * 2)) {
              iVar2 = iVar7 + -1;
              break;
            }
            iVar7 = iVar7 + 1;
          }
        }
        uVar20 = (uint)*(ushort *)(uVar3 + (longlong)iVar2 * 2);
        if (iVar2 + 1 <= iVar6) {
          iVar1 = iVar2 + 1;
        }
        uVar21 = (uint)*(ushort *)(uVar3 + (longlong)iVar1 * 2);
        iVar6 = iVar2;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        fVar23 = 0.0;
      }
      else {
        iVar2 = 1;
        if (0 < (int)(uVar21 - uVar20)) {
          iVar2 = uVar21 - uVar20;
        }
        fVar23 = (fVar23 - (float)uVar20) / (float)iVar2;
      }
      if (iVar6 != iVar1) {
        FQuatFixed32NoW::ToQuat((longlong)(iVar6 * 4) + (longlong)param_4,&local_88);
        FQuatFixed32NoW::ToQuat((longlong)(iVar1 * 4) + (longlong)param_4,&local_98);
        if (fStack_94 * fStack_84 + local_98 * local_88 + fStack_90 * fStack_80 +
            fStack_8c * fStack_7c < 0.0) {
          fVar19 = -1.0;
        }
        else {
          fVar19 = 1.0;
        }
        fVar19 = (1.0 - fVar23) * fVar19;
        fVar24 = local_88 * fVar19 + local_98 * fVar23;
        fVar14 = fStack_80 * fVar19 + fStack_90 * fVar23;
        fVar13 = fStack_84 * fVar19 + fStack_94 * fVar23;
        fVar23 = fStack_7c * fVar19 + fStack_8c * fVar23;
        auVar8._0_4_ = fVar24 * fVar24 + fVar14 * fVar14;
        auVar8._4_4_ = fVar13 * fVar13 + fVar23 * fVar23;
        auVar8._8_4_ = fVar14 * fVar14 + fVar24 * fVar24;
        auVar8._12_4_ = fVar23 * fVar23 + fVar13 * fVar13;
        fVar15 = auVar8._4_4_ + auVar8._0_4_;
        fVar16 = auVar8._8_4_ + auVar8._4_4_;
        fVar17 = auVar8._12_4_ + auVar8._8_4_;
        fVar18 = auVar8._0_4_ + auVar8._12_4_;
        auVar9._4_4_ = fVar16;
        auVar9._0_4_ = fVar15;
        auVar9._8_4_ = fVar17;
        auVar9._12_4_ = fVar18;
        auVar9 = rsqrtps(auVar8,auVar9);
        fVar19 = auVar9._0_4_;
        fVar10 = auVar9._4_4_;
        fVar11 = auVar9._8_4_;
        fVar12 = auVar9._12_4_;
        fVar19 = (_DAT_146aeef30 - fVar19 * fVar19 * fVar15 * _DAT_146aeef30) * fVar19 + fVar19;
        fVar10 = (fRam0000000146aeef34 - fVar10 * fVar10 * fVar16 * fRam0000000146aeef34) * fVar10 +
                 fVar10;
        fVar11 = (fRam0000000146aeef38 - fVar11 * fVar11 * fVar17 * fRam0000000146aeef38) * fVar11 +
                 fVar11;
        fVar12 = (fRam0000000146aeef3c - fVar12 * fVar12 * fVar18 * fRam0000000146aeef3c) * fVar12 +
                 fVar12;
        uVar20 = ((uint)(((fRam0000000146aeef34 - fVar10 * fVar10 * fVar16 * fRam0000000146aeef34) *
                          fVar10 + fVar10) * fVar13) ^ uRam0000000146aeef24) &
                 -(uint)(1e-08 <= fVar16) ^ uRam0000000146aeef24;
        uVar21 = ((uint)(((fRam0000000146aeef38 - fVar11 * fVar11 * fVar17 * fRam0000000146aeef38) *
                          fVar11 + fVar11) * fVar14) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar17) ^ uRam0000000146aeef28;
        uVar22 = ((uint)(((fRam0000000146aeef3c - fVar12 * fVar12 * fVar18 * fRam0000000146aeef3c) *
                          fVar12 + fVar12) * fVar23) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar18) ^ uRam0000000146aeef2c;
        *param_2 = ((uint)(((_DAT_146aeef30 - fVar19 * fVar19 * fVar15 * _DAT_146aeef30) * fVar19 +
                           fVar19) * fVar24) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar15) ^
                   _DAT_146aeef20;
        param_2[1] = uVar20;
        param_2[2] = uVar21;
        param_2[3] = uVar22;
        return;
      }
    }
    FQuatFixed32NoW::ToQuat((longlong)(iVar6 * 4) + (longlong)param_4,&local_88);
    *(ulonglong *)param_2 = CONCAT44(fStack_84,local_88);
    *(ulonglong *)(param_2 + 2) = CONCAT44(fStack_7c,fStack_80);
  }
  return;
}



// FUNCTION 142261f80 FUN_142261f80 body=1192 status=ok
// SIG undefined FUN_142261f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142261f80(undefined8 param_1,uint *param_2,longlong param_3,float *param_4,int param_5,
                  undefined8 param_6,float param_7)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
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
  float fVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  if (param_5 == 1) {
    fVar23 = param_4[2];
    fVar19 = ((1.0 - *param_4 * *param_4) - param_4[1] * param_4[1]) - fVar23 * fVar23;
    if (fVar19 <= 0.0) {
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = (ulonglong)(uint)fVar23;
    }
    else {
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = CONCAT44(SQRT(fVar19),fVar23);
    }
  }
  else {
    iVar2 = *(int *)(param_3 + 0xb8);
    iVar6 = param_5 + -1;
    uVar3 = (longlong)(param_5 * 4) + 3 + (longlong)param_4 & 0xfffffffffffffffc;
    if ((param_5 < 2) || (param_7 <= 0.0)) {
      iVar6 = 0;
    }
    else if (param_7 < 1.0) {
      fVar23 = (float)(iVar2 + -1) * param_7;
      iVar1 = (int)fVar23;
      if (iVar1 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar2 + -2;
        if (iVar1 < iVar2 + -2) {
          iVar4 = iVar1;
        }
      }
      iVar1 = (int)((float)iVar6 * param_7);
      if (iVar1 < 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar6;
        if (iVar1 < iVar6) {
          iVar7 = iVar1;
        }
      }
      iVar1 = iVar6;
      if (iVar2 < 0x100) {
        if (iVar4 < (int)(uint)*(byte *)((longlong)iVar7 + uVar3)) {
          iVar7 = iVar7 + -1;
          lVar5 = (longlong)iVar7;
          iVar2 = 0;
          if (0 < iVar7) {
            do {
              iVar2 = iVar7;
              if ((int)(uint)*(byte *)(lVar5 + uVar3) <= iVar4) break;
              iVar7 = iVar7 + -1;
              lVar5 = lVar5 + -1;
              iVar2 = 0;
            } while (0 < lVar5);
          }
        }
        else {
          iVar7 = iVar7 + 1;
          for (lVar5 = (longlong)iVar7; iVar2 = iVar6, lVar5 <= (longlong)param_5 + -1;
              lVar5 = lVar5 + 1) {
            if (iVar4 < (int)(uint)*(byte *)(lVar5 + uVar3)) {
              iVar2 = iVar7 + -1;
              break;
            }
            iVar7 = iVar7 + 1;
          }
        }
        uVar20 = (uint)*(byte *)((longlong)iVar2 + uVar3);
        if (iVar2 + 1 <= iVar6) {
          iVar1 = iVar2 + 1;
        }
        uVar21 = (uint)*(byte *)((longlong)iVar1 + uVar3);
        iVar6 = iVar2;
      }
      else {
        if (iVar4 < (int)(uint)*(ushort *)(uVar3 + (longlong)iVar7 * 2)) {
          iVar7 = iVar7 + -1;
          lVar5 = (longlong)iVar7;
          iVar2 = 0;
          if (0 < iVar7) {
            do {
              iVar2 = iVar7;
              if ((int)(uint)*(ushort *)(uVar3 + lVar5 * 2) <= iVar4) break;
              iVar7 = iVar7 + -1;
              lVar5 = lVar5 + -1;
              iVar2 = 0;
            } while (0 < lVar5);
          }
        }
        else {
          iVar7 = iVar7 + 1;
          for (lVar5 = (longlong)iVar7; iVar2 = iVar6, lVar5 <= iVar6; lVar5 = lVar5 + 1) {
            if (iVar4 < (int)(uint)*(ushort *)(uVar3 + lVar5 * 2)) {
              iVar2 = iVar7 + -1;
              break;
            }
            iVar7 = iVar7 + 1;
          }
        }
        uVar20 = (uint)*(ushort *)(uVar3 + (longlong)iVar2 * 2);
        if (iVar2 + 1 <= iVar6) {
          iVar1 = iVar2 + 1;
        }
        uVar21 = (uint)*(ushort *)(uVar3 + (longlong)iVar1 * 2);
        iVar6 = iVar2;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        fVar23 = 0.0;
      }
      else {
        iVar2 = 1;
        if (0 < (int)(uVar21 - uVar20)) {
          iVar2 = uVar21 - uVar20;
        }
        fVar23 = (fVar23 - (float)uVar20) / (float)iVar2;
      }
      if (iVar6 != iVar1) {
        FQuatFloat32NoW::ToQuat((longlong)(iVar6 * 4) + (longlong)param_4,&local_88);
        FQuatFloat32NoW::ToQuat((longlong)(iVar1 * 4) + (longlong)param_4,&local_98);
        if (fStack_94 * fStack_84 + local_98 * local_88 + fStack_90 * fStack_80 +
            fStack_8c * fStack_7c < 0.0) {
          fVar19 = -1.0;
        }
        else {
          fVar19 = 1.0;
        }
        fVar19 = (1.0 - fVar23) * fVar19;
        fVar24 = local_88 * fVar19 + local_98 * fVar23;
        fVar14 = fStack_80 * fVar19 + fStack_90 * fVar23;
        fVar13 = fStack_84 * fVar19 + fStack_94 * fVar23;
        fVar23 = fStack_7c * fVar19 + fStack_8c * fVar23;
        auVar8._0_4_ = fVar24 * fVar24 + fVar14 * fVar14;
        auVar8._4_4_ = fVar13 * fVar13 + fVar23 * fVar23;
        auVar8._8_4_ = fVar14 * fVar14 + fVar24 * fVar24;
        auVar8._12_4_ = fVar23 * fVar23 + fVar13 * fVar13;
        fVar15 = auVar8._4_4_ + auVar8._0_4_;
        fVar16 = auVar8._8_4_ + auVar8._4_4_;
        fVar17 = auVar8._12_4_ + auVar8._8_4_;
        fVar18 = auVar8._0_4_ + auVar8._12_4_;
        auVar9._4_4_ = fVar16;
        auVar9._0_4_ = fVar15;
        auVar9._8_4_ = fVar17;
        auVar9._12_4_ = fVar18;
        auVar9 = rsqrtps(auVar8,auVar9);
        fVar19 = auVar9._0_4_;
        fVar10 = auVar9._4_4_;
        fVar11 = auVar9._8_4_;
        fVar12 = auVar9._12_4_;
        fVar19 = (_DAT_146aeef30 - fVar19 * fVar19 * fVar15 * _DAT_146aeef30) * fVar19 + fVar19;
        fVar10 = (fRam0000000146aeef34 - fVar10 * fVar10 * fVar16 * fRam0000000146aeef34) * fVar10 +
                 fVar10;
        fVar11 = (fRam0000000146aeef38 - fVar11 * fVar11 * fVar17 * fRam0000000146aeef38) * fVar11 +
                 fVar11;
        fVar12 = (fRam0000000146aeef3c - fVar12 * fVar12 * fVar18 * fRam0000000146aeef3c) * fVar12 +
                 fVar12;
        uVar20 = ((uint)(((fRam0000000146aeef34 - fVar10 * fVar10 * fVar16 * fRam0000000146aeef34) *
                          fVar10 + fVar10) * fVar13) ^ uRam0000000146aeef24) &
                 -(uint)(1e-08 <= fVar16) ^ uRam0000000146aeef24;
        uVar21 = ((uint)(((fRam0000000146aeef38 - fVar11 * fVar11 * fVar17 * fRam0000000146aeef38) *
                          fVar11 + fVar11) * fVar14) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar17) ^ uRam0000000146aeef28;
        uVar22 = ((uint)(((fRam0000000146aeef3c - fVar12 * fVar12 * fVar18 * fRam0000000146aeef3c) *
                          fVar12 + fVar12) * fVar23) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar18) ^ uRam0000000146aeef2c;
        *param_2 = ((uint)(((_DAT_146aeef30 - fVar19 * fVar19 * fVar15 * _DAT_146aeef30) * fVar19 +
                           fVar19) * fVar24) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar15) ^
                   _DAT_146aeef20;
        param_2[1] = uVar20;
        param_2[2] = uVar21;
        param_2[3] = uVar22;
        return;
      }
    }
    FQuatFloat32NoW::ToQuat((longlong)(iVar6 * 4) + (longlong)param_4,&local_88);
    *(ulonglong *)param_2 = CONCAT44(fStack_84,local_88);
    *(ulonglong *)(param_2 + 2) = CONCAT44(fStack_7c,fStack_80);
  }
  return;
}



// FUNCTION 142262430 FUN_142262430 body=998 status=ok
// SIG undefined FUN_142262430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142262430(undefined8 param_1,uint *param_2,longlong param_3,float *param_4,int param_5,
                  undefined8 param_6,float param_7)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_30;
  
  if (param_5 == 1) {
    fVar16 = param_4[2];
    fVar21 = ((1.0 - *param_4 * *param_4) - param_4[1] * param_4[1]) - fVar16 * fVar16;
    if (fVar21 <= 0.0) {
      uStack_30 = (ulonglong)(uint)fVar16;
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = uStack_30;
      return;
    }
    uStack_30 = CONCAT44(SQRT(fVar21),fVar16);
    *(undefined8 *)param_2 = *(undefined8 *)param_4;
    *(ulonglong *)(param_2 + 2) = uStack_30;
    return;
  }
  iVar3 = *(int *)(param_3 + 0xb8);
  uVar4 = (longlong)param_4 + 3U & 0xfffffffffffffffc;
  iVar7 = param_5 + -1;
  if (((1 < param_5) && (0.0 < param_7)) && (param_7 < 1.0)) {
    iVar8 = 0;
    fVar16 = (float)(iVar3 + -1) * param_7;
    iVar2 = (int)fVar16;
    iVar9 = 0;
    iVar5 = iVar9;
    if ((-1 < iVar2) && (iVar5 = iVar3 + -2, iVar2 < iVar3 + -2)) {
      iVar5 = iVar2;
    }
    iVar2 = (int)((float)iVar7 * param_7);
    if ((-1 < iVar2) && (iVar9 = iVar7, iVar2 < iVar7)) {
      iVar9 = iVar2;
    }
    iVar2 = iVar7;
    if (iVar3 < 0x100) {
      if (iVar5 < (int)(uint)*(byte *)((longlong)iVar9 + uVar4)) {
        iVar9 = iVar9 + -1;
        lVar6 = (longlong)iVar9;
        iVar2 = iVar8;
        if (0 < iVar9) {
          do {
            iVar2 = iVar9;
            if ((int)(uint)*(byte *)(lVar6 + uVar4) <= iVar5) break;
            iVar9 = iVar9 + -1;
            lVar6 = lVar6 + -1;
            iVar2 = iVar8;
          } while (0 < lVar6);
        }
      }
      else {
        iVar9 = iVar9 + 1;
        for (lVar6 = (longlong)iVar9; lVar6 <= (longlong)param_5 + -1; lVar6 = lVar6 + 1) {
          if (iVar5 < (int)(uint)*(byte *)(lVar6 + uVar4)) {
            iVar2 = iVar9 + -1;
            break;
          }
          iVar9 = iVar9 + 1;
        }
      }
      uVar22 = (uint)*(byte *)((longlong)iVar2 + uVar4);
      if (iVar2 + 1 <= iVar7) {
        iVar7 = iVar2 + 1;
      }
      uVar23 = (uint)*(byte *)((longlong)iVar7 + uVar4);
    }
    else {
      if (iVar5 < (int)(uint)*(ushort *)(uVar4 + (longlong)iVar9 * 2)) {
        iVar9 = iVar9 + -1;
        lVar6 = (longlong)iVar9;
        iVar2 = iVar8;
        if (0 < iVar9) {
          do {
            iVar2 = iVar9;
            if ((int)(uint)*(ushort *)(uVar4 + lVar6 * 2) <= iVar5) break;
            iVar9 = iVar9 + -1;
            lVar6 = lVar6 + -1;
            iVar2 = iVar8;
          } while (0 < lVar6);
        }
      }
      else {
        iVar9 = iVar9 + 1;
        for (lVar6 = (longlong)iVar9; lVar6 <= iVar7; lVar6 = lVar6 + 1) {
          if (iVar5 < (int)(uint)*(ushort *)(uVar4 + lVar6 * 2)) {
            iVar2 = iVar9 + -1;
            break;
          }
          iVar9 = iVar9 + 1;
        }
      }
      uVar22 = (uint)*(ushort *)(uVar4 + (longlong)iVar2 * 2);
      if (iVar2 + 1 <= iVar7) {
        iVar7 = iVar2 + 1;
      }
      uVar23 = (uint)*(ushort *)(uVar4 + (longlong)iVar7 * 2);
    }
    if (*(char *)(param_3 + 0x198) == '\x01') {
      fVar16 = 0.0;
    }
    else {
      iVar3 = 1;
      if (0 < (int)(uVar23 - uVar22)) {
        iVar3 = uVar23 - uVar22;
      }
      fVar16 = (fVar16 - (float)uVar22) / (float)iVar3;
    }
    if (iVar2 != iVar7) {
      if (DAT_1464aa814 * DAT_1464aa814 + DAT_1464aa810 * DAT_1464aa810 +
          DAT_1464aa818 * DAT_1464aa818 + DAT_1464aa81c * DAT_1464aa81c < 0.0) {
        fVar21 = -1.0;
      }
      else {
        fVar21 = 1.0;
      }
      fVar21 = (1.0 - fVar16) * fVar21;
      fVar25 = (fVar21 + fVar16) * DAT_1464aa810;
      fVar12 = (fVar21 + fVar16) * DAT_1464aa818;
      fVar26 = (fVar21 + fVar16) * DAT_1464aa81c;
      fVar16 = (fVar21 + fVar16) * DAT_1464aa814;
      auVar10._0_4_ = fVar25 * fVar25 + fVar12 * fVar12;
      auVar10._4_4_ = fVar16 * fVar16 + fVar26 * fVar26;
      auVar10._8_4_ = fVar12 * fVar12 + fVar25 * fVar25;
      auVar10._12_4_ = fVar26 * fVar26 + fVar16 * fVar16;
      fVar17 = auVar10._4_4_ + auVar10._0_4_;
      fVar18 = auVar10._8_4_ + auVar10._4_4_;
      fVar19 = auVar10._12_4_ + auVar10._8_4_;
      fVar20 = auVar10._0_4_ + auVar10._12_4_;
      auVar11._4_4_ = fVar18;
      auVar11._0_4_ = fVar17;
      auVar11._8_4_ = fVar19;
      auVar11._12_4_ = fVar20;
      auVar11 = rsqrtps(auVar10,auVar11);
      fVar21 = auVar11._0_4_;
      fVar13 = auVar11._4_4_;
      fVar14 = auVar11._8_4_;
      fVar15 = auVar11._12_4_;
      fVar21 = (_DAT_146aeef30 - fVar21 * fVar21 * fVar17 * _DAT_146aeef30) * fVar21 + fVar21;
      fVar13 = (fRam0000000146aeef34 - fVar13 * fVar13 * fVar18 * fRam0000000146aeef34) * fVar13 +
               fVar13;
      fVar14 = (fRam0000000146aeef38 - fVar14 * fVar14 * fVar19 * fRam0000000146aeef38) * fVar14 +
               fVar14;
      fVar15 = (fRam0000000146aeef3c - fVar15 * fVar15 * fVar20 * fRam0000000146aeef3c) * fVar15 +
               fVar15;
      uVar22 = ((uint)(((fRam0000000146aeef34 - fVar13 * fVar13 * fVar18 * fRam0000000146aeef34) *
                        fVar13 + fVar13) * fVar16) ^ uRam0000000146aeef24) &
               -(uint)(1e-08 <= fVar18) ^ uRam0000000146aeef24;
      uVar23 = ((uint)(((fRam0000000146aeef38 - fVar14 * fVar14 * fVar19 * fRam0000000146aeef38) *
                        fVar14 + fVar14) * fVar12) ^ uRam0000000146aeef28) &
               -(uint)(1e-08 <= fVar19) ^ uRam0000000146aeef28;
      uVar24 = ((uint)(((fRam0000000146aeef3c - fVar15 * fVar15 * fVar20 * fRam0000000146aeef3c) *
                        fVar15 + fVar15) * fVar26) ^ uRam0000000146aeef2c) &
               -(uint)(1e-08 <= fVar20) ^ uRam0000000146aeef2c;
      *param_2 = ((uint)(((_DAT_146aeef30 - fVar21 * fVar21 * fVar17 * _DAT_146aeef30) * fVar21 +
                         fVar21) * fVar25) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar17) ^
                 _DAT_146aeef20;
      param_2[1] = uVar22;
      param_2[2] = uVar23;
      param_2[3] = uVar24;
      return;
    }
  }
  uVar1 = CONCAT44(DAT_1464aa81c,DAT_1464aa818);
  *(ulonglong *)param_2 = CONCAT44(DAT_1464aa814,DAT_1464aa810);
  *(undefined8 *)(param_2 + 2) = uVar1;
  return;
}



// FUNCTION 142262820 FUN_142262820 body=1164 status=ok
// SIG undefined FUN_142262820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142262820(undefined8 param_1,uint *param_2,longlong param_3,float *param_4,int param_5,
                  undefined8 param_6,float param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uStack_90;
  
  if (param_5 == 1) {
    fVar15 = param_4[2];
    fVar20 = ((1.0 - *param_4 * *param_4) - param_4[1] * param_4[1]) - fVar15 * fVar15;
    if (fVar20 <= 0.0) {
      uStack_90 = (ulonglong)(uint)fVar15;
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = uStack_90;
    }
    else {
      uStack_90 = CONCAT44(SQRT(fVar20),fVar15);
      *(undefined8 *)param_2 = *(undefined8 *)param_4;
      *(ulonglong *)(param_2 + 2) = uStack_90;
    }
  }
  else {
    iVar4 = *(int *)(param_3 + 0xb8);
    iVar8 = param_5 + -1;
    uVar6 = (longlong)(param_5 << 4) + 3 + (longlong)param_4 & 0xfffffffffffffffc;
    if ((param_5 < 2) || (param_7 <= 0.0)) {
      iVar8 = 0;
    }
    else if (param_7 < 1.0) {
      fVar15 = (float)(iVar4 + -1) * param_7;
      iVar3 = (int)fVar15;
      if (iVar3 < 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar4 + -2;
        if (iVar3 < iVar4 + -2) {
          iVar7 = iVar3;
        }
      }
      iVar3 = (int)((float)iVar8 * param_7);
      if (iVar3 < 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = iVar8;
        if (iVar3 < iVar8) {
          iVar10 = iVar3;
        }
      }
      iVar3 = iVar8;
      if (iVar4 < 0x100) {
        if (iVar7 < (int)(uint)*(byte *)((longlong)iVar10 + uVar6)) {
          iVar10 = iVar10 + -1;
          lVar9 = (longlong)iVar10;
          iVar4 = 0;
          if (0 < iVar10) {
            do {
              iVar4 = iVar10;
              if ((int)(uint)*(byte *)(lVar9 + uVar6) <= iVar7) break;
              iVar10 = iVar10 + -1;
              lVar9 = lVar9 + -1;
              iVar4 = 0;
            } while (0 < lVar9);
          }
        }
        else {
          iVar10 = iVar10 + 1;
          for (lVar9 = (longlong)iVar10; iVar4 = iVar8, lVar9 <= (longlong)param_5 + -1;
              lVar9 = lVar9 + 1) {
            if (iVar7 < (int)(uint)*(byte *)(lVar9 + uVar6)) {
              iVar4 = iVar10 + -1;
              break;
            }
            iVar10 = iVar10 + 1;
          }
        }
        uVar21 = (uint)*(byte *)((longlong)iVar4 + uVar6);
        if (iVar4 + 1 <= iVar8) {
          iVar3 = iVar4 + 1;
        }
        uVar22 = (uint)*(byte *)((longlong)iVar3 + uVar6);
        iVar8 = iVar4;
      }
      else {
        if (iVar7 < (int)(uint)*(ushort *)(uVar6 + (longlong)iVar10 * 2)) {
          iVar10 = iVar10 + -1;
          lVar9 = (longlong)iVar10;
          iVar4 = 0;
          if (0 < iVar10) {
            do {
              iVar4 = iVar10;
              if ((int)(uint)*(ushort *)(uVar6 + lVar9 * 2) <= iVar7) break;
              iVar10 = iVar10 + -1;
              lVar9 = lVar9 + -1;
              iVar4 = 0;
            } while (0 < lVar9);
          }
        }
        else {
          iVar10 = iVar10 + 1;
          for (lVar9 = (longlong)iVar10; iVar4 = iVar8, lVar9 <= iVar8; lVar9 = lVar9 + 1) {
            if (iVar7 < (int)(uint)*(ushort *)(uVar6 + lVar9 * 2)) {
              iVar4 = iVar10 + -1;
              break;
            }
            iVar10 = iVar10 + 1;
          }
        }
        uVar21 = (uint)*(ushort *)(uVar6 + (longlong)iVar4 * 2);
        if (iVar4 + 1 <= iVar8) {
          iVar3 = iVar4 + 1;
        }
        uVar22 = (uint)*(ushort *)(uVar6 + (longlong)iVar3 * 2);
        iVar8 = iVar4;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        fVar15 = 0.0;
      }
      else {
        iVar4 = 1;
        if (0 < (int)(uVar22 - uVar21)) {
          iVar4 = uVar22 - uVar21;
        }
        fVar15 = (fVar15 - (float)uVar21) / (float)iVar4;
      }
      if (iVar8 != iVar3) {
        pfVar5 = (float *)((longlong)(iVar3 << 4) + (longlong)param_4);
        param_4 = (float *)((longlong)(iVar8 << 4) + (longlong)param_4);
        if (pfVar5[1] * param_4[1] + *pfVar5 * *param_4 + pfVar5[2] * param_4[2] +
            pfVar5[3] * param_4[3] < 0.0) {
          fVar20 = -1.0;
        }
        else {
          fVar20 = 1.0;
        }
        fVar20 = (1.0 - fVar15) * fVar20;
        fVar24 = *param_4 * fVar20 + *pfVar5 * fVar15;
        fVar25 = param_4[1] * fVar20 + pfVar5[1] * fVar15;
        fVar26 = param_4[2] * fVar20 + pfVar5[2] * fVar15;
        fVar27 = param_4[3] * fVar20 + pfVar5[3] * fVar15;
        auVar11._0_4_ = fVar24 * fVar24 + fVar26 * fVar26;
        auVar11._4_4_ = fVar25 * fVar25 + fVar27 * fVar27;
        auVar11._8_4_ = fVar26 * fVar26 + fVar24 * fVar24;
        auVar11._12_4_ = fVar27 * fVar27 + fVar25 * fVar25;
        fVar16 = auVar11._4_4_ + auVar11._0_4_;
        fVar17 = auVar11._8_4_ + auVar11._4_4_;
        fVar18 = auVar11._12_4_ + auVar11._8_4_;
        fVar19 = auVar11._0_4_ + auVar11._12_4_;
        auVar12._4_4_ = fVar17;
        auVar12._0_4_ = fVar16;
        auVar12._8_4_ = fVar18;
        auVar12._12_4_ = fVar19;
        auVar12 = rsqrtps(auVar11,auVar12);
        fVar15 = auVar12._0_4_;
        fVar20 = auVar12._4_4_;
        fVar13 = auVar12._8_4_;
        fVar14 = auVar12._12_4_;
        fVar15 = (_DAT_146aeef30 - fVar15 * fVar15 * fVar16 * _DAT_146aeef30) * fVar15 + fVar15;
        fVar20 = (fRam0000000146aeef34 - fVar20 * fVar20 * fVar17 * fRam0000000146aeef34) * fVar20 +
                 fVar20;
        fVar13 = (fRam0000000146aeef38 - fVar13 * fVar13 * fVar18 * fRam0000000146aeef38) * fVar13 +
                 fVar13;
        fVar14 = (fRam0000000146aeef3c - fVar14 * fVar14 * fVar19 * fRam0000000146aeef3c) * fVar14 +
                 fVar14;
        uVar21 = ((uint)(((fRam0000000146aeef34 - fVar20 * fVar20 * fVar17 * fRam0000000146aeef34) *
                          fVar20 + fVar20) * fVar25) ^ uRam0000000146aeef24) &
                 -(uint)(1e-08 <= fVar17) ^ uRam0000000146aeef24;
        uVar22 = ((uint)(((fRam0000000146aeef38 - fVar13 * fVar13 * fVar18 * fRam0000000146aeef38) *
                          fVar13 + fVar13) * fVar26) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar18) ^ uRam0000000146aeef28;
        uVar23 = ((uint)(((fRam0000000146aeef3c - fVar14 * fVar14 * fVar19 * fRam0000000146aeef3c) *
                          fVar14 + fVar14) * fVar27) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar19) ^ uRam0000000146aeef2c;
        *param_2 = ((uint)(((_DAT_146aeef30 - fVar15 * fVar15 * fVar16 * _DAT_146aeef30) * fVar15 +
                           fVar15) * fVar24) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar16) ^
                   _DAT_146aeef20;
        param_2[1] = uVar21;
        param_2[2] = uVar22;
        param_2[3] = uVar23;
        return;
      }
    }
    puVar1 = (undefined8 *)((longlong)(iVar8 << 4) + (longlong)param_4);
    uVar2 = puVar1[1];
    *(undefined8 *)param_2 = *puVar1;
    *(undefined8 *)(param_2 + 2) = uVar2;
  }
  return;
}



// FUNCTION 142262cb0 FUN_142262cb0 body=2908 status=ok
// SIG undefined FUN_142262cb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142262cb0(float *param_1,longlong param_2,int param_3,undefined8 param_4,float param_5)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  ulonglong uVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
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
  float local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  uVar21 = _DAT_1464aa818;
  if (param_3 == -1) {
    *(undefined8 *)param_1 = _DAT_1464aa810;
    *(ulonglong *)(param_1 + 2) = uVar21;
    return;
  }
  uVar19 = *(uint *)(*(longlong *)(param_2 + 0x120) + (longlong)param_3);
  pfVar12 = (float *)((longlong)param_3 + 4 + *(longlong *)(param_2 + 0x120));
  uVar14 = (int)uVar19 >> 0x1c & 0xf;
  uVar22 = (int)uVar19 >> 0x18;
  uVar21 = (ulonglong)uVar14;
  uVar19 = uVar19 & 0xffffff;
  bVar1 = (&DAT_145018db0)[uVar14 * 8 | uVar22 & 7];
  uVar15 = 1;
  if (uVar14 != 3) {
    uVar15 = (uint)bVar1;
  }
  iVar16 = uVar15 * *(int *)(&DAT_145018d30 + uVar21 * 4);
  local_f8 = 0.0;
  iVar8 = 0;
  uVar15 = 0;
  if (uVar14 == 3) {
    uVar15 = (uint)bVar1;
  }
  uVar20 = (ulonglong)(uVar15 << 2);
  iVar18 = 0;
  iVar6 = 0;
  if (1 < uVar19) {
    iVar11 = iVar8;
    if ((uVar22 & 8) == 0) {
      iVar11 = 0;
      if (((uVar19 < 2) || (iVar11 = iVar8, param_5 <= 0.0)) ||
         (iVar11 = uVar19 - 1, 1.0 <= param_5)) {
LAB_142262dc7:
        local_f8 = 0.0;
        iVar18 = iVar11;
        iVar6 = iVar11;
      }
      else {
        param_5 = (float)iVar11 * param_5;
        iVar8 = (int)param_5;
        local_f8 = param_5;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != param_5)) {
          auVar26._4_4_ = param_5;
          auVar26._0_4_ = param_5;
          auVar26._8_8_ = 0;
          uVar19 = movmskps((uint)bVar1,auVar26);
          local_f8 = (float)(int)(iVar8 - (uVar19 & 1));
        }
        iVar6 = iVar11;
        if ((int)local_f8 <= iVar11) {
          iVar6 = (int)local_f8;
        }
        iVar18 = iVar11;
        if (*(char *)(param_2 + 0x198) == '\x01') {
          local_f8 = 0.0;
          if (iVar6 + 1 <= iVar11) {
            iVar18 = iVar6 + 1;
          }
        }
        else {
          local_f8 = param_5 - local_f8;
          if (iVar6 + 1 <= iVar11) {
            iVar18 = iVar6 + 1;
          }
        }
      }
    }
    else {
      iVar3 = *(int *)(param_2 + 0xb8);
      iVar18 = uVar19 - 1;
      uVar10 = (longlong)pfVar12 + uVar20 + (longlong)(int)(uVar19 * iVar16) + 3 &
               0xfffffffffffffffc;
      if (((uVar19 < 2) || (param_5 <= 0.0)) || (iVar11 = iVar18, 1.0 <= param_5))
      goto LAB_142262dc7;
      fVar28 = (float)(iVar3 + -1) * param_5;
      iVar6 = (int)fVar28;
      if (iVar6 < 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = iVar3 + -2;
        if (iVar6 < iVar3 + -2) {
          iVar11 = iVar6;
        }
      }
      iVar6 = (int)((float)iVar18 * param_5);
      if (iVar6 < 0) {
        iVar17 = 0;
      }
      else {
        iVar17 = iVar18;
        if (iVar6 < iVar18) {
          iVar17 = iVar6;
        }
      }
      iVar6 = iVar18;
      if (iVar3 < 0x100) {
        if (iVar11 < (int)(uint)*(byte *)((longlong)iVar17 + uVar10)) {
          iVar17 = iVar17 + -1;
          lVar13 = (longlong)iVar17;
          iVar6 = iVar8;
          if (0 < iVar17) {
            do {
              iVar6 = iVar17;
              if ((int)(uint)*(byte *)(lVar13 + uVar10) <= iVar11) break;
              iVar17 = iVar17 + -1;
              lVar13 = lVar13 + -1;
              iVar6 = iVar8;
            } while (0 < lVar13);
          }
        }
        else {
          iVar17 = iVar17 + 1;
          for (lVar13 = (longlong)iVar17; lVar13 <= (longlong)((ulonglong)uVar19 - 1);
              lVar13 = lVar13 + 1) {
            if (iVar11 < (int)(uint)*(byte *)(lVar13 + uVar10)) {
              iVar6 = iVar17 + -1;
              break;
            }
            iVar17 = iVar17 + 1;
          }
        }
        uVar19 = (uint)*(byte *)((longlong)iVar6 + uVar10);
        if (iVar6 + 1 <= iVar18) {
          iVar18 = iVar6 + 1;
        }
        uVar15 = (uint)*(byte *)((longlong)iVar18 + uVar10);
      }
      else {
        if (iVar11 < (int)(uint)*(ushort *)(uVar10 + (longlong)iVar17 * 2)) {
          iVar17 = iVar17 + -1;
          lVar13 = (longlong)iVar17;
          iVar6 = iVar8;
          if (0 < iVar17) {
            do {
              iVar6 = iVar17;
              if ((int)(uint)*(ushort *)(uVar10 + lVar13 * 2) <= iVar11) break;
              iVar17 = iVar17 + -1;
              lVar13 = lVar13 + -1;
              iVar6 = iVar8;
            } while (0 < lVar13);
          }
        }
        else {
          iVar17 = iVar17 + 1;
          for (lVar13 = (longlong)iVar17; lVar13 <= (longlong)((ulonglong)uVar19 - 1);
              lVar13 = lVar13 + 1) {
            if (iVar11 < (int)(uint)*(ushort *)(uVar10 + lVar13 * 2)) {
              iVar6 = iVar17 + -1;
              break;
            }
            iVar17 = iVar17 + 1;
          }
        }
        uVar19 = (uint)*(ushort *)(uVar10 + (longlong)iVar6 * 2);
        if (iVar6 + 1 <= iVar18) {
          iVar18 = iVar6 + 1;
        }
        uVar15 = (uint)*(ushort *)(uVar10 + (longlong)iVar18 * 2);
      }
      if (*(char *)(param_2 + 0x198) == '\x01') {
        local_f8 = 0.0;
      }
      else {
        iVar8 = 1;
        if (0 < (int)(uVar15 - uVar19)) {
          iVar8 = uVar15 - uVar19;
        }
        local_f8 = (fVar28 - (float)uVar19) / (float)iVar8;
      }
    }
  }
  pfVar9 = (float *)((longlong)(iVar6 * iVar16) + uVar20 + (longlong)pfVar12);
  if (uVar14 == 2) {
    if ((uVar22 & 1) == 0) {
      fVar28 = 32767.0;
    }
    else {
      uVar2 = *(ushort *)pfVar9;
      pfVar9 = (float *)((longlong)pfVar9 + 2);
      fVar28 = (float)uVar2;
    }
    if ((uVar22 & 2) == 0) {
      fVar24 = 32767.0;
    }
    else {
      uVar2 = *(ushort *)pfVar9;
      pfVar9 = (float *)((longlong)pfVar9 + 2);
      fVar24 = (float)uVar2;
    }
    if ((uVar22 & 4) == 0) {
      fVar23 = 32767.0;
    }
    else {
      fVar23 = (float)*(ushort *)pfVar9;
    }
    fVar28 = fVar28 - 32767.0;
    fVar24 = fVar24 - 32767.0;
    fVar23 = fVar23 - 32767.0;
    fVar32 = ((1.0 - fVar28 * fVar28 * 9.313794e-10) - fVar24 * fVar24 * 9.313794e-10) -
             fVar23 * fVar23 * 9.313794e-10;
    if (fVar32 < 0.0) {
      fVar32 = 0.0;
    }
    else {
      fVar32 = SQRT(fVar32);
    }
    local_e8 = CONCAT44(fVar24 * 3.051851e-05,fVar28 * 3.051851e-05);
    uStack_e0 = CONCAT44(fVar32,fVar23 * 3.051851e-05);
  }
  else {
    if (uVar14 == 1) {
      fVar28 = *pfVar9;
      fVar24 = pfVar9[2];
      fVar23 = pfVar9[1];
      fVar32 = fVar28 * fVar28;
      fVar37 = fVar24 * fVar24;
    }
    else {
      if (uVar14 != 3) {
        if (uVar14 == 5) {
          FQuatFloat32NoW::ToQuat(pfVar9,&local_e8);
        }
        else if (uVar14 == 4) {
          FQuatFixed32NoW::ToQuat(pfVar9,&local_e8);
        }
        else if (uVar14 == 6) {
          local_e8 = _DAT_1464aa810;
          uStack_e0 = _DAT_1464aa818;
        }
        else {
          LowLevelFatalErrorHandler
                    ("Unknown",0x396,L"%i: unknown or unsupported animation compression format",
                     uVar21);
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x396,
                     L"%i: unknown or unsupported animation compression format",uVar14);
          local_e8 = _DAT_1464aa810;
          uStack_e0 = _DAT_1464aa818;
        }
        goto LAB_14226331a;
      }
      fVar28 = 0.0;
      fVar23 = 0.0;
      fVar24 = 0.0;
      fVar32 = 0.0;
      fVar37 = 0.0;
      fVar29 = 0.0;
      pfVar7 = pfVar12;
      if ((uVar22 & 1) != 0) {
        fVar32 = pfVar12[1];
        fVar28 = *pfVar12;
        pfVar7 = pfVar12 + 2;
      }
      if ((uVar22 & 2) != 0) {
        fVar23 = *pfVar7;
        fVar37 = pfVar7[1];
        pfVar7 = pfVar7 + 2;
      }
      if ((uVar22 & 4) != 0) {
        fVar24 = *pfVar7;
        fVar29 = pfVar7[1];
      }
      fVar30 = *pfVar9;
      fVar28 = (float)(int)(((uint)fVar30 >> 0x15) - 0x3ff) * 0.0009775171 * fVar32 + fVar28;
      fVar32 = fVar28 * fVar28;
      fVar23 = (float)(int)(((uint)fVar30 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * fVar37 + fVar23;
      fVar24 = (float)(int)(((uint)fVar30 & 0x3ff) - 0x1ff) * 0.0019569471 * fVar29 + fVar24;
      fVar37 = fVar24 * fVar24;
    }
    local_e8 = CONCAT44(fVar23,fVar28);
    fVar37 = ((1.0 - fVar32) - fVar23 * fVar23) - fVar37;
    if (fVar37 <= 0.0) {
      uStack_e0 = (ulonglong)(uint)fVar24;
    }
    else {
      uStack_e0 = CONCAT44(SQRT(fVar37),fVar24);
    }
  }
LAB_14226331a:
  fVar32 = fRam0000000146aeef3c;
  fVar23 = fRam0000000146aeef38;
  fVar24 = fRam0000000146aeef34;
  fVar28 = _DAT_146aeef30;
  if (iVar6 == iVar18) {
    *param_1 = (float)local_e8;
    param_1[1] = local_e8._4_4_;
    param_1[2] = (float)uStack_e0;
    param_1[3] = uStack_e0._4_4_;
    auVar27._0_4_ = (float)local_e8 * (float)local_e8 + (float)uStack_e0 * (float)uStack_e0;
    auVar27._4_4_ = local_e8._4_4_ * local_e8._4_4_ + uStack_e0._4_4_ * uStack_e0._4_4_;
    auVar27._8_4_ = (float)uStack_e0 * (float)uStack_e0 + (float)local_e8 * (float)local_e8;
    auVar27._12_4_ = uStack_e0._4_4_ * uStack_e0._4_4_ + local_e8._4_4_ * local_e8._4_4_;
    fVar33 = auVar27._4_4_ + auVar27._0_4_;
    fVar34 = auVar27._8_4_ + auVar27._4_4_;
    fVar35 = auVar27._12_4_ + auVar27._8_4_;
    fVar36 = auVar27._0_4_ + auVar27._12_4_;
    auVar5._4_4_ = fVar34;
    auVar5._0_4_ = fVar33;
    auVar5._8_4_ = fVar35;
    auVar5._12_4_ = fVar36;
    auVar26 = rsqrtps(auVar27,auVar5);
    fVar37 = auVar26._0_4_;
    fVar29 = auVar26._4_4_;
    fVar30 = auVar26._8_4_;
    fVar31 = auVar26._12_4_;
    fVar37 = (fVar28 - fVar37 * fVar37 * fVar33 * fVar28) * fVar37 + fVar37;
    fVar29 = (fVar24 - fVar29 * fVar29 * fVar34 * fVar24) * fVar29 + fVar29;
    fVar30 = (fVar23 - fVar30 * fVar30 * fVar35 * fVar23) * fVar30 + fVar30;
    fVar31 = (fVar32 - fVar31 * fVar31 * fVar36 * fVar32) * fVar31 + fVar31;
    local_e8._0_4_ =
         ((fVar28 - fVar37 * fVar37 * fVar33 * fVar28) * fVar37 + fVar37) * (float)local_e8;
    local_e8._4_4_ =
         ((fVar24 - fVar29 * fVar29 * fVar34 * fVar24) * fVar29 + fVar29) * local_e8._4_4_;
    uStack_e0._0_4_ =
         ((fVar23 - fVar30 * fVar30 * fVar35 * fVar23) * fVar30 + fVar30) * (float)uStack_e0;
    uStack_e0._4_4_ =
         ((fVar32 - fVar31 * fVar31 * fVar36 * fVar32) * fVar31 + fVar31) * uStack_e0._4_4_;
    goto LAB_1422636fd;
  }
  pfVar9 = (float *)((longlong)(iVar18 * iVar16) + uVar20 + (longlong)pfVar12);
  if (uVar14 == 2) {
    if ((uVar22 & 1) == 0) {
      fVar28 = 32767.0;
    }
    else {
      uVar2 = *(ushort *)pfVar9;
      pfVar9 = (float *)((longlong)pfVar9 + 2);
      fVar28 = (float)uVar2;
    }
    if ((uVar22 & 2) == 0) {
      fVar24 = 32767.0;
    }
    else {
      uVar2 = *(ushort *)pfVar9;
      pfVar9 = (float *)((longlong)pfVar9 + 2);
      fVar24 = (float)uVar2;
    }
    if ((uVar22 & 4) == 0) {
      fVar23 = 32767.0;
    }
    else {
      fVar23 = (float)*(ushort *)pfVar9;
    }
    fVar28 = fVar28 - 32767.0;
    fVar24 = fVar24 - 32767.0;
    fVar23 = fVar23 - 32767.0;
    fVar32 = ((1.0 - fVar28 * fVar28 * 9.313794e-10) - fVar24 * fVar24 * 9.313794e-10) -
             fVar23 * fVar23 * 9.313794e-10;
    if (fVar32 < 0.0) {
      fVar32 = 0.0;
    }
    else {
      fVar32 = SQRT(fVar32);
    }
    local_d8 = CONCAT44(fVar24 * 3.051851e-05,fVar28 * 3.051851e-05);
    uStack_d0 = CONCAT44(fVar32,fVar23 * 3.051851e-05);
  }
  else {
    if (uVar14 == 1) {
      fVar28 = *pfVar9;
      fVar24 = pfVar9[2];
      fVar23 = pfVar9[1];
      fVar32 = fVar28 * fVar28;
      fVar37 = fVar24 * fVar24;
    }
    else {
      if (uVar14 != 3) {
        if (uVar14 == 5) {
          FQuatFloat32NoW::ToQuat(pfVar9,&local_d8);
        }
        else if (uVar14 == 4) {
          FQuatFixed32NoW::ToQuat(pfVar9,&local_d8);
        }
        else {
          if (uVar14 != 6) {
            LowLevelFatalErrorHandler
                      ("Unknown",0x396,L"%i: unknown or unsupported animation compression format",
                       uVar21);
            FDebug::AssertFailed
                      (&DAT_143f3f584,"Unknown",0x396,
                       L"%i: unknown or unsupported animation compression format",uVar14);
          }
          local_d8 = _DAT_1464aa810;
          uStack_d0 = _DAT_1464aa818;
        }
        goto LAB_1422635c9;
      }
      fVar28 = 0.0;
      fVar23 = 0.0;
      fVar24 = 0.0;
      fVar32 = 0.0;
      fVar37 = 0.0;
      fVar29 = 0.0;
      if ((uVar22 & 1) != 0) {
        fVar28 = *pfVar12;
        fVar32 = pfVar12[1];
        pfVar12 = pfVar12 + 2;
      }
      if ((uVar22 & 2) != 0) {
        fVar23 = *pfVar12;
        fVar37 = pfVar12[1];
        pfVar12 = pfVar12 + 2;
      }
      if ((uVar22 & 4) != 0) {
        fVar24 = *pfVar12;
        fVar29 = pfVar12[1];
      }
      fVar30 = *pfVar9;
      fVar28 = (float)(int)(((uint)fVar30 >> 0x15) - 0x3ff) * 0.0009775171 * fVar32 + fVar28;
      fVar23 = (float)(int)(((uint)fVar30 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * fVar37 + fVar23;
      fVar24 = (float)(int)(((uint)fVar30 & 0x3ff) - 0x1ff) * 0.0019569471 * fVar29 + fVar24;
      fVar32 = fVar28 * fVar28;
      fVar37 = fVar24 * fVar24;
    }
    local_d8 = CONCAT44(fVar23,fVar28);
    fVar37 = ((1.0 - fVar32) - fVar23 * fVar23) - fVar37;
    if (fVar37 <= 0.0) {
      uStack_d0 = (ulonglong)(uint)fVar24;
    }
    else {
      uStack_d0 = CONCAT44(SQRT(fVar37),fVar24);
    }
  }
LAB_1422635c9:
  fVar32 = fRam0000000146aeef3c;
  fVar23 = fRam0000000146aeef38;
  fVar24 = fRam0000000146aeef34;
  fVar28 = _DAT_146aeef30;
  if (local_d8._4_4_ * local_e8._4_4_ + (float)local_d8 * (float)local_e8 +
      (float)uStack_d0 * (float)uStack_e0 + uStack_d0._4_4_ * uStack_e0._4_4_ < 0.0) {
    fVar37 = -1.0;
  }
  else {
    fVar37 = 1.0;
  }
  fVar37 = (1.0 - local_f8) * fVar37;
  uStack_e0._4_4_ = uStack_d0._4_4_ * local_f8 + uStack_e0._4_4_ * fVar37;
  local_e8._0_4_ = (float)local_d8 * local_f8 + (float)local_e8 * fVar37;
  local_e8._4_4_ = local_d8._4_4_ * local_f8 + local_e8._4_4_ * fVar37;
  uStack_e0._0_4_ = (float)uStack_d0 * local_f8 + (float)uStack_e0 * fVar37;
  *param_1 = (float)local_e8;
  param_1[1] = local_e8._4_4_;
  param_1[2] = (float)uStack_e0;
  param_1[3] = uStack_e0._4_4_;
  auVar25._0_4_ = (float)local_e8 * (float)local_e8 + (float)uStack_e0 * (float)uStack_e0;
  auVar25._4_4_ = local_e8._4_4_ * local_e8._4_4_ + uStack_e0._4_4_ * uStack_e0._4_4_;
  auVar25._8_4_ = (float)uStack_e0 * (float)uStack_e0 + (float)local_e8 * (float)local_e8;
  auVar25._12_4_ = uStack_e0._4_4_ * uStack_e0._4_4_ + local_e8._4_4_ * local_e8._4_4_;
  fVar33 = auVar25._4_4_ + auVar25._0_4_;
  fVar34 = auVar25._8_4_ + auVar25._4_4_;
  fVar35 = auVar25._12_4_ + auVar25._8_4_;
  fVar36 = auVar25._0_4_ + auVar25._12_4_;
  auVar4._4_4_ = fVar34;
  auVar4._0_4_ = fVar33;
  auVar4._8_4_ = fVar35;
  auVar4._12_4_ = fVar36;
  auVar26 = rsqrtps(auVar25,auVar4);
  fVar37 = auVar26._0_4_;
  fVar29 = auVar26._4_4_;
  fVar30 = auVar26._8_4_;
  fVar31 = auVar26._12_4_;
  fVar37 = (fVar28 - fVar37 * fVar37 * fVar33 * fVar28) * fVar37 + fVar37;
  fVar29 = (fVar24 - fVar29 * fVar29 * fVar34 * fVar24) * fVar29 + fVar29;
  fVar30 = (fVar23 - fVar30 * fVar30 * fVar35 * fVar23) * fVar30 + fVar30;
  fVar31 = (fVar32 - fVar31 * fVar31 * fVar36 * fVar32) * fVar31 + fVar31;
  local_e8._0_4_ =
       ((fVar28 - fVar37 * fVar37 * fVar33 * fVar28) * fVar37 + fVar37) * (float)local_e8;
  local_e8._4_4_ = ((fVar24 - fVar29 * fVar29 * fVar34 * fVar24) * fVar29 + fVar29) * local_e8._4_4_
  ;
  uStack_e0._0_4_ =
       ((fVar23 - fVar30 * fVar30 * fVar35 * fVar23) * fVar30 + fVar30) * (float)uStack_e0;
  uStack_e0._4_4_ =
       ((fVar32 - fVar31 * fVar31 * fVar36 * fVar32) * fVar31 + fVar31) * uStack_e0._4_4_;
LAB_1422636fd:
  fVar28 = (float)(((uint)local_e8._4_4_ ^ uRam0000000146aeef24) &
                   -(uint)(fRam0000000146aeef64 <= fVar34) ^ uRam0000000146aeef24);
  fVar24 = (float)(((uint)(float)uStack_e0 ^ uRam0000000146aeef28) &
                   -(uint)(fRam0000000146aeef68 <= fVar35) ^ uRam0000000146aeef28);
  fVar23 = (float)(((uint)uStack_e0._4_4_ ^ uRam0000000146aeef2c) &
                   -(uint)(fRam0000000146aeef6c <= fVar36) ^ uRam0000000146aeef2c);
  *param_1 = (float)(((uint)(float)local_e8 ^ _DAT_146aeef20) & -(uint)(_DAT_146aeef60 <= fVar33) ^
                    _DAT_146aeef20);
  param_1[1] = fVar28;
  param_1[2] = fVar24;
  param_1[3] = fVar23;
  return;
}



// FUNCTION 142263810 FUN_142263810 body=386 status=ok
// SIG undefined FUN_142263810(void)

void FUN_142263810(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
                  ,undefined8 param_6,float param_7)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined4 in_EAX;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fStack_34;
  
  if ((param_5 < 2) || (param_7 <= 0.0)) {
    param_5 = 0;
  }
  else {
    param_5 = param_5 + -1;
    if (param_7 < 1.0) {
      param_7 = (float)param_5 * param_7;
      iVar6 = (int)param_7;
      fVar9 = param_7;
      if ((iVar6 != -0x80000000) && ((float)iVar6 != param_7)) {
        auVar10._4_4_ = param_7;
        auVar10._0_4_ = param_7;
        auVar10._8_8_ = 0;
        uVar5 = movmskps(in_EAX,auVar10);
        fVar9 = (float)(int)(iVar6 - (uVar5 & 1));
      }
      iVar6 = param_5;
      if ((int)fVar9 <= param_5) {
        iVar6 = (int)fVar9;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        param_7 = 0.0;
      }
      else {
        param_7 = param_7 - fVar9;
      }
      iVar4 = param_5;
      if (iVar6 + 1 <= param_5) {
        iVar4 = iVar6 + 1;
      }
      param_5 = iVar6;
      if (iVar6 != iVar4) {
        lVar7 = (longlong)(iVar4 * 0xc);
        uVar1 = *(undefined8 *)(iVar6 * 0xc + param_4);
        fVar9 = *(float *)((longlong)(iVar6 * 0xc) + 8 + param_4);
        fVar8 = (float)uVar1;
        fStack_34 = (float)((ulonglong)uVar1 >> 0x20);
        auVar3._4_4_ = ((float)((ulonglong)*(undefined8 *)(lVar7 + param_4) >> 0x20) - fStack_34) *
                       param_7 + fStack_34;
        auVar3._0_4_ = ((float)*(undefined8 *)(lVar7 + param_4) - fVar8) * param_7 + fVar8;
        auVar3._8_4_ = (*(float *)(lVar7 + 8 + param_4) - fVar9) * param_7 + fVar9;
        auVar3._12_4_ = 0;
        *(undefined1 (*) [16])(param_2 + 0x20) = auVar3;
        return;
      }
    }
  }
  lVar7 = (longlong)(param_5 * 0xc);
  auVar2._4_4_ = *(undefined4 *)(lVar7 + 4 + param_4);
  auVar2._0_4_ = (int)*(undefined8 *)(lVar7 + param_4);
  auVar2._8_4_ = *(undefined4 *)(lVar7 + 8 + param_4);
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar2;
  return;
}



// FUNCTION 1422639a0 FUN_1422639a0 body=477 status=ok
// SIG undefined FUN_1422639a0(void)

void FUN_1422639a0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
                  ,undefined8 param_6,float param_7)

{
  int iVar1;
  undefined4 in_EAX;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  
  if ((param_5 < 2) || (param_7 <= 0.0)) {
    param_5 = 0;
  }
  else {
    param_5 = param_5 + -1;
    if (param_7 < 1.0) {
      param_7 = (float)param_5 * param_7;
      iVar3 = (int)param_7;
      fVar9 = param_7;
      if ((iVar3 != -0x80000000) && ((float)iVar3 != param_7)) {
        auVar8._4_4_ = param_7;
        auVar8._0_4_ = param_7;
        auVar8._8_8_ = 0;
        uVar2 = movmskps(in_EAX,auVar8);
        fVar9 = (float)(int)(iVar3 - (uVar2 & 1));
      }
      iVar3 = param_5;
      if ((int)fVar9 <= param_5) {
        iVar3 = (int)fVar9;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        param_7 = 0.0;
      }
      else {
        param_7 = param_7 - fVar9;
      }
      iVar1 = param_5;
      if (iVar3 + 1 <= param_5) {
        iVar1 = iVar3 + 1;
      }
      param_5 = iVar3;
      if (iVar3 != iVar1) {
        lVar4 = (longlong)(iVar3 * 0xc);
        lVar5 = (longlong)(iVar1 * 0xc);
        fVar9 = (float)(int)(*(ushort *)(lVar4 + param_4) - 0x7fff) * 0.003906369;
        fVar7 = (float)(int)(*(ushort *)(lVar4 + 2 + param_4) - 0x7fff) * 0.003906369;
        fVar6 = (float)(int)(*(ushort *)(lVar4 + 4 + param_4) - 0x7fff) * 0.003906369;
        fVar9 = ((float)(int)(*(ushort *)(lVar5 + param_4) - 0x7fff) * 0.003906369 - fVar9) *
                param_7 + fVar9;
        fVar7 = ((float)(int)(*(ushort *)(lVar5 + 2 + param_4) - 0x7fff) * 0.003906369 - fVar7) *
                param_7 + fVar7;
        fVar6 = ((float)(int)(*(ushort *)(lVar5 + 4 + param_4) - 0x7fff) * 0.003906369 - fVar6) *
                param_7 + fVar6;
        goto LAB_142263a10;
      }
    }
  }
  lVar4 = (longlong)(param_5 * 0xc);
  fVar9 = (float)(int)(*(ushort *)(lVar4 + param_4) - 0x7fff) * 0.003906369;
  fVar7 = (float)(int)(*(ushort *)(lVar4 + 2 + param_4) - 0x7fff) * 0.003906369;
  fVar6 = (float)(int)(*(ushort *)(lVar4 + 4 + param_4) - 0x7fff) * 0.003906369;
LAB_142263a10:
  auVar10._4_4_ = fVar7;
  auVar10._0_4_ = fVar9;
  auVar10._8_4_ = fVar6;
  auVar10._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar10;
  return;
}



// FUNCTION 142263b80 FUN_142263b80 body=724 status=ok
// SIG undefined FUN_142263b80(void)

void FUN_142263b80(undefined8 param_1,longlong param_2,longlong param_3,float *param_4,int param_5,
                  undefined8 param_6,float param_7)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  
  if (param_5 < 2) {
    param_7 = 0.0;
    iVar7 = 0;
    iVar4 = 0;
  }
  else if (0.0 < param_7) {
    iVar4 = param_5 + -1;
    iVar7 = iVar4;
    if (param_7 < 1.0) {
      param_7 = (float)iVar4 * param_7;
      iVar5 = (int)param_7;
      fVar12 = param_7;
      if ((iVar5 != -0x80000000) && ((float)iVar5 != param_7)) {
        auVar10._4_4_ = param_7;
        auVar10._0_4_ = param_7;
        auVar10._8_8_ = 0;
        uVar3 = movmskps(in_EAX,auVar10);
        fVar12 = (float)(int)(iVar5 - (uVar3 & 1));
      }
      if ((int)fVar12 <= iVar4) {
        iVar7 = (int)fVar12;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        param_7 = 0.0;
      }
      else {
        param_7 = param_7 - fVar12;
      }
      if (iVar7 + 1 <= iVar4) {
        iVar4 = iVar7 + 1;
      }
    }
    else {
      param_7 = 0.0;
    }
  }
  else {
    param_7 = 0.0;
    iVar7 = 0;
    iVar4 = 0;
  }
  lVar6 = 0x18;
  if (param_5 < 2) {
    lVar6 = 0;
  }
  lVar8 = iVar7 * 4 + lVar6;
  if (iVar7 == iVar4) {
    uVar3 = *(uint *)(lVar8 + (longlong)param_4);
    fVar9 = (float)(int)((uVar3 & 0x3ff) - 0x1ff) * 0.0019569471 * param_4[3] + *param_4;
    fVar11 = (float)(int)((uVar3 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * param_4[4] + param_4[1];
    fVar12 = (float)(int)((uVar3 >> 0x15) - 0x3ff) * 0.0009775171 * param_4[5] + param_4[2];
  }
  else {
    uVar3 = *(uint *)(lVar8 + (longlong)param_4);
    uVar1 = *(uint *)(iVar4 * 4 + lVar6 + (longlong)param_4);
    fVar9 = (float)(int)((uVar3 & 0x3ff) - 0x1ff) * 0.0019569471 * param_4[3] + *param_4;
    fVar12 = (float)(int)((uVar3 >> 0x15) - 0x3ff) * 0.0009775171 * param_4[5] + param_4[2];
    fVar11 = (float)(int)((uVar3 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * param_4[4] + param_4[1];
    fVar9 = (((float)(int)((uVar1 & 0x3ff) - 0x1ff) * 0.0019569471 * param_4[3] + *param_4) - fVar9)
            * param_7 + fVar9;
    fVar12 = (((float)(int)((uVar1 >> 0x15) - 0x3ff) * 0.0009775171 * param_4[5] + param_4[2]) -
             fVar12) * param_7 + fVar12;
    fVar11 = (((float)(int)((uVar1 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * param_4[4] + param_4[1])
             - fVar11) * param_7 + fVar11;
  }
  auVar2._4_4_ = fVar11;
  auVar2._0_4_ = fVar9;
  auVar2._8_4_ = fVar12;
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar2;
  return;
}



// FUNCTION 142263e60 FUN_142263e60 body=557 status=ok
// SIG undefined FUN_142263e60(void)

void FUN_142263e60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,float param_7)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  if (param_5 < 2) {
    param_7 = 0.0;
    param_5 = 0;
    iVar4 = 0;
  }
  else if (0.0 < param_7) {
    param_5 = param_5 + -1;
    iVar4 = param_5;
    if (param_7 < 1.0) {
      param_7 = (float)param_5 * param_7;
      iVar3 = (int)param_7;
      fVar6 = param_7;
      if ((iVar3 != -0x80000000) && ((float)iVar3 != param_7)) {
        auVar8._4_4_ = param_7;
        auVar8._0_4_ = param_7;
        auVar8._8_8_ = 0;
        uVar2 = movmskps((int)&stack0x00000000,auVar8);
        fVar6 = (float)(int)(iVar3 - (uVar2 & 1));
      }
      if ((int)fVar6 <= param_5) {
        iVar4 = (int)fVar6;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        param_7 = 0.0;
      }
      else {
        param_7 = param_7 - fVar6;
      }
      if (iVar4 + 1 <= param_5) {
        param_5 = iVar4 + 1;
      }
    }
    else {
      param_7 = 0.0;
    }
  }
  else {
    param_7 = 0.0;
    param_5 = 0;
    iVar4 = 0;
  }
  LowLevelFatalErrorHandler
            ("Unknown",0x248,L"%i: unknown or unsupported animation compression format",4);
  FDebug::AssertFailed
            (&DAT_143f3f584,"Unknown",0x248,
             L"%i: unknown or unsupported animation compression format",4);
  fVar5 = DAT_1468b5d98;
  fVar7 = DAT_1468b5d94;
  fVar6 = DAT_1468b5d90;
  if (iVar4 != param_5) {
    LowLevelFatalErrorHandler
              ("Unknown",0x248,L"%i: unknown or unsupported animation compression format",4);
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x248,
               L"%i: unknown or unsupported animation compression format",4);
    fVar6 = (DAT_1468b5d90 - fVar6) * param_7 + fVar6;
    fVar5 = (DAT_1468b5d98 - fVar5) * param_7 + fVar5;
    fVar7 = (DAT_1468b5d94 - fVar7) * param_7 + fVar7;
  }
  auVar1._4_4_ = fVar7;
  auVar1._0_4_ = fVar6;
  auVar1._8_4_ = fVar5;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar1;
  return;
}



// FUNCTION 142264090 FUN_142264090 body=557 status=ok
// SIG undefined FUN_142264090(void)

void FUN_142264090(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,float param_7)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  if (param_5 < 2) {
    param_7 = 0.0;
    param_5 = 0;
    iVar4 = 0;
  }
  else if (0.0 < param_7) {
    param_5 = param_5 + -1;
    iVar4 = param_5;
    if (param_7 < 1.0) {
      param_7 = (float)param_5 * param_7;
      iVar3 = (int)param_7;
      fVar6 = param_7;
      if ((iVar3 != -0x80000000) && ((float)iVar3 != param_7)) {
        auVar8._4_4_ = param_7;
        auVar8._0_4_ = param_7;
        auVar8._8_8_ = 0;
        uVar2 = movmskps((int)&stack0x00000000,auVar8);
        fVar6 = (float)(int)(iVar3 - (uVar2 & 1));
      }
      if ((int)fVar6 <= param_5) {
        iVar4 = (int)fVar6;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        param_7 = 0.0;
      }
      else {
        param_7 = param_7 - fVar6;
      }
      if (iVar4 + 1 <= param_5) {
        param_5 = iVar4 + 1;
      }
    }
    else {
      param_7 = 0.0;
    }
  }
  else {
    param_7 = 0.0;
    param_5 = 0;
    iVar4 = 0;
  }
  LowLevelFatalErrorHandler
            ("Unknown",0x248,L"%i: unknown or unsupported animation compression format",5);
  FDebug::AssertFailed
            (&DAT_143f3f584,"Unknown",0x248,
             L"%i: unknown or unsupported animation compression format",5);
  fVar5 = DAT_1468b5d98;
  fVar7 = DAT_1468b5d94;
  fVar6 = DAT_1468b5d90;
  if (iVar4 != param_5) {
    LowLevelFatalErrorHandler
              ("Unknown",0x248,L"%i: unknown or unsupported animation compression format",5);
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x248,
               L"%i: unknown or unsupported animation compression format",5);
    fVar6 = (DAT_1468b5d90 - fVar6) * param_7 + fVar6;
    fVar5 = (DAT_1468b5d98 - fVar5) * param_7 + fVar5;
    fVar7 = (DAT_1468b5d94 - fVar7) * param_7 + fVar7;
  }
  auVar1._4_4_ = fVar7;
  auVar1._0_4_ = fVar6;
  auVar1._8_4_ = fVar5;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar1;
  return;
}



// FUNCTION 142264360 FUN_142264360 body=710 status=ok
// SIG undefined FUN_142264360(void)

void FUN_142264360(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
                  ,undefined8 param_6,float param_7)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_34;
  
  iVar4 = *(int *)(param_3 + 0xb8);
  iVar10 = param_5 + -1;
  uVar5 = (longlong)(param_5 * 0xc) + 3 + param_4 & 0xfffffffffffffffc;
  if ((param_5 < 2) || (param_7 <= 0.0)) {
    iVar10 = 0;
  }
  else if (param_7 < 1.0) {
    fVar14 = (float)(iVar4 + -1) * param_7;
    iVar3 = (int)fVar14;
    if (iVar3 < 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = iVar4 + -2;
      if (iVar3 < iVar4 + -2) {
        iVar7 = iVar3;
      }
    }
    iVar3 = (int)((float)iVar10 * param_7);
    if (iVar3 < 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = iVar10;
      if (iVar3 < iVar10) {
        iVar11 = iVar3;
      }
    }
    iVar3 = iVar10;
    if (iVar4 < 0x100) {
      if (iVar7 < (int)(uint)*(byte *)((longlong)iVar11 + uVar5)) {
        iVar11 = iVar11 + -1;
        lVar6 = (longlong)iVar11;
        iVar4 = 0;
        if (0 < iVar11) {
          do {
            iVar4 = iVar11;
            if ((int)(uint)*(byte *)(lVar6 + uVar5) <= iVar7) break;
            iVar11 = iVar11 + -1;
            lVar6 = lVar6 + -1;
            iVar4 = 0;
          } while (0 < lVar6);
        }
      }
      else {
        iVar11 = iVar11 + 1;
        for (lVar6 = (longlong)iVar11; iVar4 = iVar10, lVar6 <= (longlong)param_5 + -1;
            lVar6 = lVar6 + 1) {
          if (iVar7 < (int)(uint)*(byte *)(lVar6 + uVar5)) {
            iVar4 = iVar11 + -1;
            break;
          }
          iVar11 = iVar11 + 1;
        }
      }
      uVar9 = (uint)*(byte *)((longlong)iVar4 + uVar5);
      if (iVar4 + 1 <= iVar10) {
        iVar3 = iVar4 + 1;
      }
      uVar8 = (uint)*(byte *)((longlong)iVar3 + uVar5);
      iVar10 = iVar4;
    }
    else {
      if (iVar7 < (int)(uint)*(ushort *)(uVar5 + (longlong)iVar11 * 2)) {
        iVar11 = iVar11 + -1;
        lVar6 = (longlong)iVar11;
        iVar4 = 0;
        if (0 < iVar11) {
          do {
            iVar4 = iVar11;
            if ((int)(uint)*(ushort *)(uVar5 + lVar6 * 2) <= iVar7) break;
            iVar11 = iVar11 + -1;
            lVar6 = lVar6 + -1;
            iVar4 = 0;
          } while (0 < lVar6);
        }
      }
      else {
        iVar11 = iVar11 + 1;
        for (lVar6 = (longlong)iVar11; iVar4 = iVar10, lVar6 <= iVar10; lVar6 = lVar6 + 1) {
          if (iVar7 < (int)(uint)*(ushort *)(uVar5 + lVar6 * 2)) {
            iVar4 = iVar11 + -1;
            break;
          }
          iVar11 = iVar11 + 1;
        }
      }
      uVar9 = (uint)*(ushort *)(uVar5 + (longlong)iVar4 * 2);
      if (iVar4 + 1 <= iVar10) {
        iVar3 = iVar4 + 1;
      }
      uVar8 = (uint)*(ushort *)(uVar5 + (longlong)iVar3 * 2);
      iVar10 = iVar4;
    }
    if (*(char *)(param_3 + 0x198) == '\x01') {
      fVar14 = 0.0;
    }
    else {
      iVar4 = 1;
      if (0 < (int)(uVar8 - uVar9)) {
        iVar4 = uVar8 - uVar9;
      }
      fVar14 = (fVar14 - (float)uVar9) / (float)iVar4;
    }
    if (iVar10 != iVar3) {
      lVar6 = (longlong)(iVar3 * 0xc);
      uVar1 = *(undefined8 *)(iVar10 * 0xc + param_4);
      fVar12 = *(float *)((longlong)(iVar10 * 0xc) + 8 + param_4);
      fVar13 = (float)uVar1;
      fStack_34 = (float)((ulonglong)uVar1 >> 0x20);
      fVar13 = ((float)*(undefined8 *)(lVar6 + param_4) - fVar13) * fVar14 + fVar13;
      fStack_34 = ((float)((ulonglong)*(undefined8 *)(lVar6 + param_4) >> 0x20) - fStack_34) *
                  fVar14 + fStack_34;
      fVar12 = (*(float *)(lVar6 + 8 + param_4) - fVar12) * fVar14 + fVar12;
      goto LAB_142264602;
    }
  }
  lVar6 = (longlong)(iVar10 * 0xc);
  fVar12 = *(float *)(lVar6 + 8 + param_4);
  fStack_34 = *(float *)(lVar6 + 4 + param_4);
  fVar13 = (float)*(undefined8 *)(lVar6 + param_4);
LAB_142264602:
  auVar2._4_4_ = fStack_34;
  auVar2._0_4_ = fVar13;
  auVar2._8_4_ = fVar12;
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar2;
  return;
}



// FUNCTION 142264630 FUN_142264630 body=845 status=ok
// SIG undefined FUN_142264630(void)

void FUN_142264630(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
                  ,undefined8 param_6,float param_7)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  
  iVar2 = *(int *)(param_3 + 0xb8);
  iVar9 = param_5 + -1;
  uVar3 = (longlong)(param_5 * 0xc) + 3 + param_4 & 0xfffffffffffffffc;
  if ((param_5 < 2) || (param_7 <= 0.0)) {
    iVar9 = 0;
  }
  else if (param_7 < 1.0) {
    fVar15 = (float)(iVar2 + -1) * param_7;
    iVar1 = (int)fVar15;
    if (iVar1 < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar2 + -2;
      if (iVar1 < iVar2 + -2) {
        iVar5 = iVar1;
      }
    }
    iVar1 = (int)((float)iVar9 * param_7);
    if (iVar1 < 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = iVar9;
      if (iVar1 < iVar9) {
        iVar10 = iVar1;
      }
    }
    iVar1 = iVar9;
    if (iVar2 < 0x100) {
      if (iVar5 < (int)(uint)*(byte *)((longlong)iVar10 + uVar3)) {
        iVar10 = iVar10 + -1;
        lVar4 = (longlong)iVar10;
        iVar2 = 0;
        if (0 < iVar10) {
          do {
            iVar2 = iVar10;
            if ((int)(uint)*(byte *)(lVar4 + uVar3) <= iVar5) break;
            iVar10 = iVar10 + -1;
            lVar4 = lVar4 + -1;
            iVar2 = 0;
          } while (0 < lVar4);
        }
      }
      else {
        iVar10 = iVar10 + 1;
        for (lVar4 = (longlong)iVar10; iVar2 = iVar9, lVar4 <= (longlong)param_5 + -1;
            lVar4 = lVar4 + 1) {
          if (iVar5 < (int)(uint)*(byte *)(lVar4 + uVar3)) {
            iVar2 = iVar10 + -1;
            break;
          }
          iVar10 = iVar10 + 1;
        }
      }
      uVar8 = (uint)*(byte *)((longlong)iVar2 + uVar3);
      if (iVar2 + 1 <= iVar9) {
        iVar1 = iVar2 + 1;
      }
      uVar6 = (uint)*(byte *)((longlong)iVar1 + uVar3);
      iVar9 = iVar2;
    }
    else {
      if (iVar5 < (int)(uint)*(ushort *)(uVar3 + (longlong)iVar10 * 2)) {
        iVar10 = iVar10 + -1;
        lVar4 = (longlong)iVar10;
        iVar2 = 0;
        if (0 < iVar10) {
          do {
            iVar2 = iVar10;
            if ((int)(uint)*(ushort *)(uVar3 + lVar4 * 2) <= iVar5) break;
            iVar10 = iVar10 + -1;
            lVar4 = lVar4 + -1;
            iVar2 = 0;
          } while (0 < lVar4);
        }
      }
      else {
        iVar10 = iVar10 + 1;
        for (lVar4 = (longlong)iVar10; iVar2 = iVar9, lVar4 <= iVar9; lVar4 = lVar4 + 1) {
          if (iVar5 < (int)(uint)*(ushort *)(uVar3 + lVar4 * 2)) {
            iVar2 = iVar10 + -1;
            break;
          }
          iVar10 = iVar10 + 1;
        }
      }
      uVar8 = (uint)*(ushort *)(uVar3 + (longlong)iVar2 * 2);
      if (iVar2 + 1 <= iVar9) {
        iVar1 = iVar2 + 1;
      }
      uVar6 = (uint)*(ushort *)(uVar3 + (longlong)iVar1 * 2);
      iVar9 = iVar2;
    }
    if (*(char *)(param_3 + 0x198) == '\x01') {
      fVar15 = 0.0;
    }
    else {
      iVar2 = 1;
      if (0 < (int)(uVar6 - uVar8)) {
        iVar2 = uVar6 - uVar8;
      }
      fVar15 = (fVar15 - (float)uVar8) / (float)iVar2;
    }
    if (iVar9 != iVar1) {
      lVar4 = (longlong)(iVar9 * 0xc);
      lVar7 = (longlong)(iVar1 * 0xc);
      fVar13 = (float)(int)(*(ushort *)(lVar4 + param_4) - 0x7fff) * 0.003906369;
      fVar12 = (float)(int)(*(ushort *)(lVar4 + 2 + param_4) - 0x7fff) * 0.003906369;
      fVar11 = (float)(int)(*(ushort *)(lVar4 + 4 + param_4) - 0x7fff) * 0.003906369;
      fVar13 = ((float)(int)(*(ushort *)(lVar7 + param_4) - 0x7fff) * 0.003906369 - fVar13) * fVar15
               + fVar13;
      fVar12 = ((float)(int)(*(ushort *)(lVar7 + 2 + param_4) - 0x7fff) * 0.003906369 - fVar12) *
               fVar15 + fVar12;
      fVar11 = ((float)(int)(*(ushort *)(lVar7 + 4 + param_4) - 0x7fff) * 0.003906369 - fVar11) *
               fVar15 + fVar11;
      goto LAB_142264952;
    }
  }
  lVar4 = (longlong)(iVar9 * 0xc);
  fVar13 = (float)(int)(*(ushort *)(lVar4 + param_4) - 0x7fff) * 0.003906369;
  fVar12 = (float)(int)(*(ushort *)(lVar4 + 2 + param_4) - 0x7fff) * 0.003906369;
  fVar11 = (float)(int)(*(ushort *)(lVar4 + 4 + param_4) - 0x7fff) * 0.003906369;
LAB_142264952:
  auVar14._4_4_ = fVar12;
  auVar14._0_4_ = fVar13;
  auVar14._8_4_ = fVar11;
  auVar14._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar14;
  return;
}



// FUNCTION 142264980 FUN_142264980 body=1054 status=ok
// SIG undefined FUN_142264980(void)

void FUN_142264980(undefined8 param_1,longlong param_2,longlong param_3,float *param_4,int param_5,
                  undefined8 param_6,float param_7)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar3 = *(int *)(param_3 + 0xb8);
  iVar9 = param_5 + -1;
  uVar4 = (longlong)(param_5 * 4) + 3 + (longlong)param_4 & 0xfffffffffffffffc;
  iVar11 = 0;
  iVar10 = 0;
  if (((param_5 < 2) || (param_7 <= 0.0)) || (iVar10 = iVar9, 1.0 <= param_7)) {
    fVar15 = 0.0;
    iVar2 = iVar10;
  }
  else {
    fVar15 = (float)(iVar3 + -1) * param_7;
    iVar2 = (int)fVar15;
    iVar5 = iVar11;
    if ((-1 < iVar2) && (iVar5 = iVar3 + -2, iVar2 < iVar3 + -2)) {
      iVar5 = iVar2;
    }
    iVar2 = (int)((float)iVar9 * param_7);
    if ((-1 < iVar2) && (iVar11 = iVar9, iVar2 < iVar9)) {
      iVar11 = iVar2;
    }
    iVar2 = iVar9;
    if (iVar3 < 0x100) {
      if (iVar5 < (int)(uint)*(byte *)((longlong)iVar11 + uVar4)) {
        iVar11 = iVar11 + -1;
        lVar8 = (longlong)iVar11;
        iVar2 = 0;
        if (0 < iVar11) {
          do {
            iVar2 = iVar11;
            if ((int)(uint)*(byte *)(lVar8 + uVar4) <= iVar5) break;
            iVar11 = iVar11 + -1;
            lVar8 = lVar8 + -1;
            iVar2 = 0;
          } while (0 < lVar8);
        }
      }
      else {
        iVar11 = iVar11 + 1;
        for (lVar8 = (longlong)iVar11; lVar8 <= (longlong)param_5 + -1; lVar8 = lVar8 + 1) {
          if (iVar5 < (int)(uint)*(byte *)(lVar8 + uVar4)) {
            iVar2 = iVar11 + -1;
            break;
          }
          iVar11 = iVar11 + 1;
        }
      }
      uVar7 = (uint)*(byte *)((longlong)iVar2 + uVar4);
      if (iVar2 + 1 <= iVar9) {
        iVar10 = iVar2 + 1;
      }
      uVar6 = (uint)*(byte *)((longlong)iVar10 + uVar4);
    }
    else {
      if (iVar5 < (int)(uint)*(ushort *)(uVar4 + (longlong)iVar11 * 2)) {
        iVar11 = iVar11 + -1;
        lVar8 = (longlong)iVar11;
        iVar2 = 0;
        if (0 < iVar11) {
          do {
            iVar2 = iVar11;
            if ((int)(uint)*(ushort *)(uVar4 + lVar8 * 2) <= iVar5) break;
            iVar11 = iVar11 + -1;
            lVar8 = lVar8 + -1;
            iVar2 = 0;
          } while (0 < lVar8);
        }
      }
      else {
        iVar11 = iVar11 + 1;
        for (lVar8 = (longlong)iVar11; lVar8 <= iVar9; lVar8 = lVar8 + 1) {
          if (iVar5 < (int)(uint)*(ushort *)(uVar4 + lVar8 * 2)) {
            iVar2 = iVar11 + -1;
            break;
          }
          iVar11 = iVar11 + 1;
        }
      }
      uVar7 = (uint)*(ushort *)(uVar4 + (longlong)iVar2 * 2);
      if (iVar2 + 1 <= iVar9) {
        iVar10 = iVar2 + 1;
      }
      uVar6 = (uint)*(ushort *)(uVar4 + (longlong)iVar10 * 2);
    }
    if (*(char *)(param_3 + 0x198) == '\x01') {
      fVar15 = 0.0;
    }
    else {
      iVar3 = 1;
      if (0 < (int)(uVar6 - uVar7)) {
        iVar3 = uVar6 - uVar7;
      }
      fVar15 = (fVar15 - (float)uVar7) / (float)iVar3;
    }
  }
  lVar8 = 0x18;
  if (param_5 < 2) {
    lVar8 = 0;
  }
  uVar7 = *(uint *)((longlong)param_4 + lVar8 + iVar2 * 4);
  if (iVar2 == iVar10) {
    fVar12 = (float)(int)((uVar7 & 0x3ff) - 0x1ff) * 0.0019569471 * param_4[3] + *param_4;
    fVar13 = (float)(int)((uVar7 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * param_4[4] + param_4[1];
    fVar14 = (float)(int)((uVar7 >> 0x15) - 0x3ff) * 0.0009775171 * param_4[5] + param_4[2];
  }
  else {
    uVar6 = *(uint *)(iVar10 * 4 + lVar8 + (longlong)param_4);
    fVar12 = (float)(int)((uVar7 & 0x3ff) - 0x1ff) * 0.0019569471 * param_4[3] + *param_4;
    fVar14 = (float)(int)((uVar7 >> 0x15) - 0x3ff) * 0.0009775171 * param_4[5] + param_4[2];
    fVar13 = (float)(int)((uVar7 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * param_4[4] + param_4[1];
    fVar12 = (((float)(int)((uVar6 & 0x3ff) - 0x1ff) * 0.0019569471 * param_4[3] + *param_4) -
             fVar12) * fVar15 + fVar12;
    fVar14 = (((float)(int)((uVar6 >> 0x15) - 0x3ff) * 0.0009775171 * param_4[5] + param_4[2]) -
             fVar14) * fVar15 + fVar14;
    fVar13 = (((float)(int)((uVar6 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * param_4[4] + param_4[1])
             - fVar13) * fVar15 + fVar13;
  }
  auVar1._4_4_ = fVar13;
  auVar1._0_4_ = fVar12;
  auVar1._8_4_ = fVar14;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar1;
  return;
}



// FUNCTION 142264da0 FUN_142264da0 body=875 status=ok
// SIG undefined FUN_142264da0(void)

void FUN_142264da0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
                  ,undefined8 param_6,float param_7)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar3 = *(int *)(param_3 + 0xb8);
  iVar7 = param_5 + -1;
  uVar4 = (longlong)(param_5 * 0xc) + 3 + param_4 & 0xfffffffffffffffc;
  if ((param_5 < 2) || (param_7 <= 0.0)) {
    iVar7 = 0;
  }
  else if (param_7 < 1.0) {
    fVar14 = (float)(iVar3 + -1) * param_7;
    iVar2 = (int)fVar14;
    if (iVar2 < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar3 + -2;
      if (iVar2 < iVar3 + -2) {
        iVar5 = iVar2;
      }
    }
    iVar2 = (int)((float)iVar7 * param_7);
    if (iVar2 < 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = iVar7;
      if (iVar2 < iVar7) {
        iVar10 = iVar2;
      }
    }
    iVar2 = iVar7;
    if (iVar3 < 0x100) {
      if (iVar5 < (int)(uint)*(byte *)((longlong)iVar10 + uVar4)) {
        iVar10 = iVar10 + -1;
        lVar9 = (longlong)iVar10;
        iVar2 = 0;
        if (0 < iVar10) {
          do {
            iVar2 = iVar10;
            if ((int)(uint)*(byte *)(lVar9 + uVar4) <= iVar5) break;
            iVar10 = iVar10 + -1;
            lVar9 = lVar9 + -1;
            iVar2 = 0;
          } while (0 < lVar9);
        }
      }
      else {
        iVar10 = iVar10 + 1;
        for (lVar9 = (longlong)iVar10; lVar9 <= (longlong)param_5 + -1; lVar9 = lVar9 + 1) {
          if (iVar5 < (int)(uint)*(byte *)(lVar9 + uVar4)) {
            iVar2 = iVar10 + -1;
            break;
          }
          iVar10 = iVar10 + 1;
        }
      }
      uVar8 = (uint)*(byte *)((longlong)iVar2 + uVar4);
      if (iVar2 + 1 <= iVar7) {
        iVar7 = iVar2 + 1;
      }
      uVar6 = (uint)*(byte *)((longlong)iVar7 + uVar4);
    }
    else {
      if (iVar5 < (int)(uint)*(ushort *)(uVar4 + (longlong)iVar10 * 2)) {
        iVar10 = iVar10 + -1;
        lVar9 = (longlong)iVar10;
        iVar2 = 0;
        if (0 < iVar10) {
          do {
            iVar2 = iVar10;
            if ((int)(uint)*(ushort *)(uVar4 + lVar9 * 2) <= iVar5) break;
            iVar10 = iVar10 + -1;
            lVar9 = lVar9 + -1;
            iVar2 = 0;
          } while (0 < lVar9);
        }
      }
      else {
        iVar10 = iVar10 + 1;
        for (lVar9 = (longlong)iVar10; lVar9 <= iVar7; lVar9 = lVar9 + 1) {
          if (iVar5 < (int)(uint)*(ushort *)(uVar4 + lVar9 * 2)) {
            iVar2 = iVar10 + -1;
            break;
          }
          iVar10 = iVar10 + 1;
        }
      }
      uVar8 = (uint)*(ushort *)(uVar4 + (longlong)iVar2 * 2);
      if (iVar2 + 1 <= iVar7) {
        iVar7 = iVar2 + 1;
      }
      uVar6 = (uint)*(ushort *)(uVar4 + (longlong)iVar7 * 2);
    }
    if (*(char *)(param_3 + 0x198) == '\x01') {
      fVar14 = 0.0;
    }
    else {
      iVar3 = 1;
      if (0 < (int)(uVar6 - uVar8)) {
        iVar3 = uVar6 - uVar8;
      }
      fVar14 = (fVar14 - (float)uVar8) / (float)iVar3;
    }
    goto LAB_142264fb0;
  }
  fVar14 = 0.0;
  iVar2 = iVar7;
LAB_142264fb0:
  LowLevelFatalErrorHandler
            ("Unknown",0x248,L"%i: unknown or unsupported animation compression format",4);
  FDebug::AssertFailed
            (&DAT_143f3f584,"Unknown",0x248,
             L"%i: unknown or unsupported animation compression format",4);
  fVar11 = DAT_1468b5d98;
  fVar12 = DAT_1468b5d94;
  fVar13 = DAT_1468b5d90;
  if (iVar2 != iVar7) {
    LowLevelFatalErrorHandler
              ("Unknown",0x248,L"%i: unknown or unsupported animation compression format",4);
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x248,
               L"%i: unknown or unsupported animation compression format",4);
    fVar13 = (DAT_1468b5d90 - fVar13) * fVar14 + fVar13;
    fVar11 = (DAT_1468b5d98 - fVar11) * fVar14 + fVar11;
    fVar12 = (DAT_1468b5d94 - fVar12) * fVar14 + fVar12;
  }
  auVar1._4_4_ = fVar12;
  auVar1._0_4_ = fVar13;
  auVar1._8_4_ = fVar11;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar1;
  return;
}



// FUNCTION 142265110 FUN_142265110 body=875 status=ok
// SIG undefined FUN_142265110(void)

void FUN_142265110(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
                  ,undefined8 param_6,float param_7)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar3 = *(int *)(param_3 + 0xb8);
  iVar7 = param_5 + -1;
  uVar4 = (longlong)(param_5 * 0xc) + 3 + param_4 & 0xfffffffffffffffc;
  if ((param_5 < 2) || (param_7 <= 0.0)) {
    iVar7 = 0;
  }
  else if (param_7 < 1.0) {
    fVar14 = (float)(iVar3 + -1) * param_7;
    iVar2 = (int)fVar14;
    if (iVar2 < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar3 + -2;
      if (iVar2 < iVar3 + -2) {
        iVar5 = iVar2;
      }
    }
    iVar2 = (int)((float)iVar7 * param_7);
    if (iVar2 < 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = iVar7;
      if (iVar2 < iVar7) {
        iVar10 = iVar2;
      }
    }
    iVar2 = iVar7;
    if (iVar3 < 0x100) {
      if (iVar5 < (int)(uint)*(byte *)((longlong)iVar10 + uVar4)) {
        iVar10 = iVar10 + -1;
        lVar9 = (longlong)iVar10;
        iVar2 = 0;
        if (0 < iVar10) {
          do {
            iVar2 = iVar10;
            if ((int)(uint)*(byte *)(lVar9 + uVar4) <= iVar5) break;
            iVar10 = iVar10 + -1;
            lVar9 = lVar9 + -1;
            iVar2 = 0;
          } while (0 < lVar9);
        }
      }
      else {
        iVar10 = iVar10 + 1;
        for (lVar9 = (longlong)iVar10; lVar9 <= (longlong)param_5 + -1; lVar9 = lVar9 + 1) {
          if (iVar5 < (int)(uint)*(byte *)(lVar9 + uVar4)) {
            iVar2 = iVar10 + -1;
            break;
          }
          iVar10 = iVar10 + 1;
        }
      }
      uVar8 = (uint)*(byte *)((longlong)iVar2 + uVar4);
      if (iVar2 + 1 <= iVar7) {
        iVar7 = iVar2 + 1;
      }
      uVar6 = (uint)*(byte *)((longlong)iVar7 + uVar4);
    }
    else {
      if (iVar5 < (int)(uint)*(ushort *)(uVar4 + (longlong)iVar10 * 2)) {
        iVar10 = iVar10 + -1;
        lVar9 = (longlong)iVar10;
        iVar2 = 0;
        if (0 < iVar10) {
          do {
            iVar2 = iVar10;
            if ((int)(uint)*(ushort *)(uVar4 + lVar9 * 2) <= iVar5) break;
            iVar10 = iVar10 + -1;
            lVar9 = lVar9 + -1;
            iVar2 = 0;
          } while (0 < lVar9);
        }
      }
      else {
        iVar10 = iVar10 + 1;
        for (lVar9 = (longlong)iVar10; lVar9 <= iVar7; lVar9 = lVar9 + 1) {
          if (iVar5 < (int)(uint)*(ushort *)(uVar4 + lVar9 * 2)) {
            iVar2 = iVar10 + -1;
            break;
          }
          iVar10 = iVar10 + 1;
        }
      }
      uVar8 = (uint)*(ushort *)(uVar4 + (longlong)iVar2 * 2);
      if (iVar2 + 1 <= iVar7) {
        iVar7 = iVar2 + 1;
      }
      uVar6 = (uint)*(ushort *)(uVar4 + (longlong)iVar7 * 2);
    }
    if (*(char *)(param_3 + 0x198) == '\x01') {
      fVar14 = 0.0;
    }
    else {
      iVar3 = 1;
      if (0 < (int)(uVar6 - uVar8)) {
        iVar3 = uVar6 - uVar8;
      }
      fVar14 = (fVar14 - (float)uVar8) / (float)iVar3;
    }
    goto LAB_142265320;
  }
  fVar14 = 0.0;
  iVar2 = iVar7;
LAB_142265320:
  LowLevelFatalErrorHandler
            ("Unknown",0x248,L"%i: unknown or unsupported animation compression format",5);
  FDebug::AssertFailed
            (&DAT_143f3f584,"Unknown",0x248,
             L"%i: unknown or unsupported animation compression format",5);
  fVar11 = DAT_1468b5d98;
  fVar12 = DAT_1468b5d94;
  fVar13 = DAT_1468b5d90;
  if (iVar2 != iVar7) {
    LowLevelFatalErrorHandler
              ("Unknown",0x248,L"%i: unknown or unsupported animation compression format",5);
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x248,
               L"%i: unknown or unsupported animation compression format",5);
    fVar13 = (DAT_1468b5d90 - fVar13) * fVar14 + fVar13;
    fVar11 = (DAT_1468b5d98 - fVar11) * fVar14 + fVar11;
    fVar12 = (DAT_1468b5d94 - fVar12) * fVar14 + fVar12;
  }
  auVar1._4_4_ = fVar12;
  auVar1._0_4_ = fVar13;
  auVar1._8_4_ = fVar11;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar1;
  return;
}



// FUNCTION 142265480 FUN_142265480 body=407 status=ok
// SIG undefined FUN_142265480(void)

void FUN_142265480(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
                  ,undefined8 param_6,float param_7)

{
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_3 + 0xb8);
  uVar6 = param_4 + 3U & 0xfffffffffffffffc;
  iVar8 = param_5 + -1;
  if (((1 < param_5) && (0.0 < param_7)) && (param_7 < 1.0)) {
    iVar3 = (int)((float)(iVar1 + -1) * param_7);
    iVar7 = 0;
    iVar5 = iVar7;
    if ((-1 < iVar3) && (iVar5 = iVar1 + -2, iVar3 < iVar1 + -2)) {
      iVar5 = iVar3;
    }
    iVar3 = (int)((float)iVar8 * param_7);
    if ((-1 < iVar3) && (iVar7 = iVar8, iVar3 < iVar8)) {
      iVar7 = iVar3;
    }
    if (iVar1 < 0x100) {
      if (iVar5 < (int)(uint)*(byte *)((longlong)iVar7 + uVar6)) {
        lVar4 = (longlong)(iVar7 + -1);
        if (0 < iVar7 + -1) {
          do {
            if ((int)(uint)*(byte *)(lVar4 + uVar6) <= iVar5) break;
            lVar4 = lVar4 + -1;
          } while (0 < lVar4);
        }
      }
      else {
        for (lVar4 = (longlong)(iVar7 + 1);
            (lVar4 <= (longlong)param_5 + -1 && ((int)(uint)*(byte *)(lVar4 + uVar6) <= iVar5));
            lVar4 = lVar4 + 1) {
        }
      }
    }
    else if (iVar5 < (int)(uint)*(ushort *)(uVar6 + (longlong)iVar7 * 2)) {
      lVar4 = (longlong)(iVar7 + -1);
      if (0 < iVar7 + -1) {
        do {
          if ((int)(uint)*(ushort *)(uVar6 + lVar4 * 2) <= iVar5) break;
          lVar4 = lVar4 + -1;
        } while (0 < lVar4);
      }
    }
    else {
      lVar4 = (longlong)(iVar7 + 1);
      while ((lVar4 <= iVar8 && ((int)(uint)*(ushort *)(uVar6 + lVar4 * 2) <= iVar5))) {
        lVar4 = lVar4 + 1;
      }
    }
  }
  auVar2._4_4_ = DAT_1468b5d94;
  auVar2._0_4_ = DAT_1468b5d90;
  auVar2._8_4_ = DAT_1468b5d98;
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar2;
  return;
}



// FUNCTION 142265620 FUN_142265620 body=2268 status=ok
// SIG undefined FUN_142265620(void)

void FUN_142265620(longlong param_1,longlong param_2,int param_3,undefined8 param_4,float param_5)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  ulonglong uVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_res18;
  undefined8 local_c0;
  float local_b8;
  float local_b0;
  
  if (param_3 == -1) {
    auVar27._4_4_ = DAT_1468b5d94;
    auVar27._0_4_ = DAT_1468b5d90;
    auVar27._8_4_ = DAT_1468b5d98;
    auVar27._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar27;
    return;
  }
  uVar14 = *(uint *)(*(longlong *)(param_2 + 0x120) + (longlong)param_3);
  pfVar21 = (float *)((longlong)param_3 + 4 + *(longlong *)(param_2 + 0x120));
  uVar20 = uVar14 & 0xffffff;
  uVar17 = (int)uVar14 >> 0x1c & 0xf;
  uVar14 = (int)uVar14 >> 0x18;
  bVar1 = (&DAT_145018db0)[uVar17 * 8 | uVar14 & 7];
  uVar18 = 1;
  if (uVar17 != 3) {
    uVar18 = (uint)bVar1;
  }
  iVar10 = uVar18 * *(int *)(&DAT_145018d30 + (ulonglong)uVar17 * 4);
  iVar7 = 0;
  local_res18 = 0.0;
  uVar18 = 0;
  if (uVar17 == 3) {
    uVar18 = (uint)bVar1;
  }
  uVar18 = uVar18 << 2;
  iVar13 = 0;
  iVar15 = iVar7;
  if (1 < uVar20) {
    if ((uVar14 & 8) == 0) {
      if (uVar20 < 2) {
        local_res18 = 0.0;
      }
      else if (0.0 < param_5) {
        iVar13 = uVar20 - 1;
        iVar15 = iVar13;
        if (param_5 < 1.0) {
          param_5 = (float)iVar13 * param_5;
          iVar7 = (int)param_5;
          local_res18 = param_5;
          if ((iVar7 != -0x80000000) && ((float)iVar7 != param_5)) {
            auVar25._4_4_ = param_5;
            auVar25._0_4_ = param_5;
            auVar25._8_8_ = 0;
            uVar20 = movmskps((uint)bVar1,auVar25);
            local_res18 = (float)(int)(iVar7 - (uVar20 & 1));
          }
          if ((int)local_res18 <= iVar13) {
            iVar15 = (int)local_res18;
          }
          if (*(char *)(param_2 + 0x198) == '\x01') {
            local_res18 = 0.0;
            if (iVar15 + 1 <= iVar13) {
              iVar13 = iVar15 + 1;
            }
          }
          else {
            local_res18 = param_5 - local_res18;
            if (iVar15 + 1 <= iVar13) {
              iVar13 = iVar15 + 1;
            }
          }
        }
        else {
          local_res18 = 0.0;
        }
      }
      else {
        local_res18 = 0.0;
        iVar13 = 0;
      }
    }
    else {
      iVar3 = *(int *)(param_2 + 0xb8);
      iVar13 = uVar20 - 1;
      uVar8 = (longlong)pfVar21 + (ulonglong)uVar18 + (longlong)(int)(uVar20 * iVar10) + 3 &
              0xfffffffffffffffc;
      if (((uVar20 < 2) || (param_5 <= 0.0)) || (iVar15 = iVar13, 1.0 <= param_5)) {
        local_res18 = 0.0;
        iVar13 = iVar15;
      }
      else {
        fVar24 = (float)(iVar3 + -1) * param_5;
        iVar5 = (int)fVar24;
        if (iVar5 < 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = iVar3 + -2;
          if (iVar5 < iVar3 + -2) {
            iVar11 = iVar5;
          }
        }
        iVar5 = (int)((float)iVar13 * param_5);
        if (iVar5 < 0) {
          iVar19 = 0;
        }
        else {
          iVar19 = iVar13;
          if (iVar5 < iVar13) {
            iVar19 = iVar5;
          }
        }
        if (iVar3 < 0x100) {
          if (iVar11 < (int)(uint)*(byte *)((longlong)iVar19 + uVar8)) {
            iVar19 = iVar19 + -1;
            lVar16 = (longlong)iVar19;
            iVar15 = iVar7;
            if (0 < iVar19) {
              do {
                iVar15 = iVar19;
                if ((int)(uint)*(byte *)(lVar16 + uVar8) <= iVar11) break;
                iVar19 = iVar19 + -1;
                lVar16 = lVar16 + -1;
                iVar15 = iVar7;
              } while (0 < lVar16);
            }
          }
          else {
            iVar19 = iVar19 + 1;
            for (lVar16 = (longlong)iVar19; lVar16 <= (longlong)((ulonglong)uVar20 - 1);
                lVar16 = lVar16 + 1) {
              if (iVar11 < (int)(uint)*(byte *)(lVar16 + uVar8)) {
                iVar15 = iVar19 + -1;
                break;
              }
              iVar19 = iVar19 + 1;
            }
          }
          uVar20 = (uint)*(byte *)((longlong)iVar15 + uVar8);
          if (iVar15 + 1 <= iVar13) {
            iVar13 = iVar15 + 1;
          }
          uVar12 = (uint)*(byte *)((longlong)iVar13 + uVar8);
        }
        else {
          if (iVar11 < (int)(uint)*(ushort *)(uVar8 + (longlong)iVar19 * 2)) {
            iVar19 = iVar19 + -1;
            lVar16 = (longlong)iVar19;
            iVar15 = iVar7;
            if (0 < iVar19) {
              do {
                iVar15 = iVar19;
                if ((int)(uint)*(ushort *)(uVar8 + lVar16 * 2) <= iVar11) break;
                iVar19 = iVar19 + -1;
                lVar16 = lVar16 + -1;
                iVar15 = iVar7;
              } while (0 < lVar16);
            }
          }
          else {
            iVar19 = iVar19 + 1;
            for (lVar16 = (longlong)iVar19; lVar16 <= (longlong)((ulonglong)uVar20 - 1);
                lVar16 = lVar16 + 1) {
              if (iVar11 < (int)(uint)*(ushort *)(uVar8 + lVar16 * 2)) {
                iVar15 = iVar19 + -1;
                break;
              }
              iVar19 = iVar19 + 1;
            }
          }
          uVar20 = (uint)*(ushort *)(uVar8 + (longlong)iVar15 * 2);
          if (iVar15 + 1 <= iVar13) {
            iVar13 = iVar15 + 1;
          }
          uVar12 = (uint)*(ushort *)(uVar8 + (longlong)iVar13 * 2);
        }
        if (*(char *)(param_2 + 0x198) == '\x01') {
          local_res18 = 0.0;
        }
        else {
          iVar7 = 1;
          if (0 < (int)(uVar12 - uVar20)) {
            iVar7 = uVar12 - uVar20;
          }
          local_res18 = (fVar24 - (float)uVar20) / (float)iVar7;
        }
      }
    }
  }
  pfVar9 = (float *)((longlong)(iVar15 * iVar10) + (ulonglong)uVar18 + (longlong)pfVar21);
  if (uVar17 == 1) {
    if ((uVar14 & 7) == 0) {
      local_c0 = *(ulonglong *)pfVar9;
      local_b8 = pfVar9[2];
      fVar23 = (float)(local_c0 >> 0x20);
      fVar24 = (float)local_c0;
    }
    else {
      if ((uVar14 & 1) == 0) {
        fVar24 = 0.0;
      }
      else {
        fVar24 = *pfVar9;
        pfVar9 = pfVar9 + 1;
      }
      if ((uVar14 & 2) == 0) {
        local_c0 = (ulonglong)(uint)fVar24;
        fVar23 = 0.0;
      }
      else {
        fVar23 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        local_c0 = CONCAT44(fVar23,fVar24);
      }
      if ((uVar14 & 4) == 0) {
LAB_142265b89:
        local_b8 = 0.0;
      }
      else {
        local_b8 = *pfVar9;
      }
    }
  }
  else {
    if (uVar17 == 3) {
      fVar31 = 0.0;
      fVar23 = 0.0;
      fVar22 = 0.0;
      fVar24 = 0.0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      pfVar6 = pfVar21;
      if ((uVar14 & 1) != 0) {
        fVar24 = pfVar21[1];
        fVar31 = *pfVar21;
        pfVar6 = pfVar21 + 2;
      }
      if ((uVar14 & 2) != 0) {
        fVar23 = *pfVar6;
        fVar28 = pfVar6[1];
        pfVar6 = pfVar6 + 2;
      }
      if ((uVar14 & 4) != 0) {
        fVar22 = *pfVar6;
        fVar29 = pfVar6[1];
      }
      fVar30 = *pfVar9;
      fVar23 = (float)(int)(((uint)fVar30 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * fVar28 + fVar23;
      local_b8 = (float)(int)(((uint)fVar30 >> 0x15) - 0x3ff) * 0.0009775171 * fVar29 + fVar22;
      fVar24 = (float)(int)(((uint)fVar30 & 0x3ff) - 0x1ff) * 0.0019569471 * fVar24 + fVar31;
    }
    else {
      if (uVar17 == 2) {
        if ((uVar14 & 1) == 0) {
          fVar24 = 0.0;
        }
        else {
          uVar2 = *(ushort *)pfVar9;
          pfVar9 = (float *)((longlong)pfVar9 + 2);
          fVar24 = (float)(int)(uVar2 - 0xff);
        }
        if ((uVar14 & 2) == 0) {
          local_c0 = (ulonglong)(uint)fVar24;
          fVar23 = 0.0;
        }
        else {
          uVar2 = *(ushort *)pfVar9;
          pfVar9 = (float *)((longlong)pfVar9 + 2);
          fVar23 = (float)(int)(uVar2 - 0xff);
          local_c0 = CONCAT44(fVar23,fVar24);
        }
        if ((uVar14 & 4) == 0) goto LAB_142265b89;
        local_b8 = (float)(int)(*(ushort *)pfVar9 - 0xff);
        goto LAB_142265c08;
      }
      fVar23 = DAT_1468b5d94;
      local_b8 = DAT_1468b5d98;
      fVar24 = DAT_1468b5d90;
      if (uVar17 != 6) {
        LowLevelFatalErrorHandler
                  ("Unknown",0x404,L"%i: unknown or unsupported animation compression format",uVar17
                  );
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0x404,
                   L"%i: unknown or unsupported animation compression format",uVar17);
        fVar23 = DAT_1468b5d94;
        local_b8 = DAT_1468b5d98;
        fVar24 = DAT_1468b5d90;
      }
    }
    local_c0 = CONCAT44(fVar23,fVar24);
  }
LAB_142265c08:
  if (iVar15 == iVar13) goto LAB_142265e53;
  pfVar9 = (float *)((longlong)(iVar13 * iVar10) + (ulonglong)uVar18 + (longlong)pfVar21);
  if (uVar17 == 1) {
    if ((uVar14 & 7) == 0) {
      local_b0 = (float)*(undefined8 *)pfVar9;
      fVar31 = (float)((ulonglong)*(undefined8 *)pfVar9 >> 0x20);
      fVar28 = pfVar9[2];
    }
    else {
      if ((uVar14 & 1) == 0) {
        local_b0 = 0.0;
      }
      else {
        local_b0 = *pfVar9;
        pfVar9 = pfVar9 + 1;
      }
      if ((uVar14 & 2) == 0) {
        fVar31 = 0.0;
      }
      else {
        fVar31 = *pfVar9;
        pfVar9 = pfVar9 + 1;
      }
      if ((uVar14 & 4) == 0) {
LAB_142265db9:
        fVar28 = 0.0;
      }
      else {
        fVar28 = *pfVar9;
      }
    }
  }
  else if (uVar17 == 3) {
    fVar31 = 0.0;
    local_b0 = 0.0;
    fVar28 = 0.0;
    fVar29 = 0.0;
    fVar22 = 0.0;
    fVar30 = 0.0;
    if ((uVar14 & 1) != 0) {
      local_b0 = *pfVar21;
      fVar31 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
    }
    if ((uVar14 & 2) != 0) {
      fVar28 = *pfVar21;
      fVar22 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
    }
    if ((uVar14 & 4) != 0) {
      fVar29 = *pfVar21;
      fVar30 = pfVar21[1];
    }
    fVar4 = *pfVar9;
    local_b0 = (float)(int)(((uint)fVar4 & 0x3ff) - 0x1ff) * 0.0019569471 * fVar31 + local_b0;
    fVar31 = (float)(int)(((uint)fVar4 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * fVar22 + fVar28;
    fVar28 = (float)(int)(((uint)fVar4 >> 0x15) - 0x3ff) * 0.0009775171 * fVar30 + fVar29;
  }
  else if (uVar17 == 2) {
    if ((uVar14 & 1) == 0) {
      local_b0 = 0.0;
    }
    else {
      uVar2 = *(ushort *)pfVar9;
      pfVar9 = (float *)((longlong)pfVar9 + 2);
      local_b0 = (float)(int)(uVar2 - 0xff);
    }
    if ((uVar14 & 2) == 0) {
      fVar31 = 0.0;
    }
    else {
      uVar2 = *(ushort *)pfVar9;
      pfVar9 = (float *)((longlong)pfVar9 + 2);
      fVar31 = (float)(int)(uVar2 - 0xff);
    }
    if ((uVar14 & 4) == 0) goto LAB_142265db9;
    fVar28 = (float)(int)(*(ushort *)pfVar9 - 0xff);
  }
  else {
    fVar31 = DAT_1468b5d94;
    local_b0 = DAT_1468b5d90;
    fVar28 = DAT_1468b5d98;
    if (uVar17 != 6) {
      LowLevelFatalErrorHandler
                ("Unknown",0x404,L"%i: unknown or unsupported animation compression format",uVar17);
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x404,
                 L"%i: unknown or unsupported animation compression format",uVar17);
      fVar31 = DAT_1468b5d94;
      local_b0 = DAT_1468b5d90;
      fVar28 = DAT_1468b5d98;
    }
  }
  fVar24 = local_res18 * (local_b0 - fVar24) + (float)local_c0;
  local_b8 = local_res18 * (fVar28 - local_b8) + local_b8;
  fVar23 = local_res18 * (fVar31 - fVar23) + local_c0._4_4_;
LAB_142265e53:
  auVar26._4_4_ = fVar23;
  auVar26._0_4_ = fVar24;
  auVar26._8_4_ = local_b8;
  auVar26._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar26;
  return;
}



// FUNCTION 142265f00 FUN_142265f00 body=386 status=ok
// SIG undefined FUN_142265f00(void)

void FUN_142265f00(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
                  ,undefined8 param_6,float param_7)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined4 in_EAX;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fStack_34;
  
  if ((param_5 < 2) || (param_7 <= 0.0)) {
    param_5 = 0;
  }
  else {
    param_5 = param_5 + -1;
    if (param_7 < 1.0) {
      param_7 = (float)param_5 * param_7;
      iVar6 = (int)param_7;
      fVar9 = param_7;
      if ((iVar6 != -0x80000000) && ((float)iVar6 != param_7)) {
        auVar10._4_4_ = param_7;
        auVar10._0_4_ = param_7;
        auVar10._8_8_ = 0;
        uVar5 = movmskps(in_EAX,auVar10);
        fVar9 = (float)(int)(iVar6 - (uVar5 & 1));
      }
      iVar6 = param_5;
      if ((int)fVar9 <= param_5) {
        iVar6 = (int)fVar9;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        param_7 = 0.0;
      }
      else {
        param_7 = param_7 - fVar9;
      }
      iVar4 = param_5;
      if (iVar6 + 1 <= param_5) {
        iVar4 = iVar6 + 1;
      }
      param_5 = iVar6;
      if (iVar6 != iVar4) {
        lVar7 = (longlong)(iVar4 * 0xc);
        uVar1 = *(undefined8 *)(iVar6 * 0xc + param_4);
        fVar9 = *(float *)((longlong)(iVar6 * 0xc) + 8 + param_4);
        fVar8 = (float)uVar1;
        fStack_34 = (float)((ulonglong)uVar1 >> 0x20);
        auVar3._4_4_ = ((float)((ulonglong)*(undefined8 *)(lVar7 + param_4) >> 0x20) - fStack_34) *
                       param_7 + fStack_34;
        auVar3._0_4_ = ((float)*(undefined8 *)(lVar7 + param_4) - fVar8) * param_7 + fVar8;
        auVar3._8_4_ = (*(float *)(lVar7 + 8 + param_4) - fVar9) * param_7 + fVar9;
        auVar3._12_4_ = 0;
        *(undefined1 (*) [16])(param_2 + 0x10) = auVar3;
        return;
      }
    }
  }
  lVar7 = (longlong)(param_5 * 0xc);
  auVar2._4_4_ = *(undefined4 *)(lVar7 + 4 + param_4);
  auVar2._0_4_ = (int)*(undefined8 *)(lVar7 + param_4);
  auVar2._8_4_ = *(undefined4 *)(lVar7 + 8 + param_4);
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x10) = auVar2;
  return;
}



// FUNCTION 142266090 FUN_142266090 body=477 status=ok
// SIG undefined FUN_142266090(void)

void FUN_142266090(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
                  ,undefined8 param_6,float param_7)

{
  int iVar1;
  undefined4 in_EAX;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  
  if ((param_5 < 2) || (param_7 <= 0.0)) {
    param_5 = 0;
  }
  else {
    param_5 = param_5 + -1;
    if (param_7 < 1.0) {
      param_7 = (float)param_5 * param_7;
      iVar3 = (int)param_7;
      fVar9 = param_7;
      if ((iVar3 != -0x80000000) && ((float)iVar3 != param_7)) {
        auVar8._4_4_ = param_7;
        auVar8._0_4_ = param_7;
        auVar8._8_8_ = 0;
        uVar2 = movmskps(in_EAX,auVar8);
        fVar9 = (float)(int)(iVar3 - (uVar2 & 1));
      }
      iVar3 = param_5;
      if ((int)fVar9 <= param_5) {
        iVar3 = (int)fVar9;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        param_7 = 0.0;
      }
      else {
        param_7 = param_7 - fVar9;
      }
      iVar1 = param_5;
      if (iVar3 + 1 <= param_5) {
        iVar1 = iVar3 + 1;
      }
      param_5 = iVar3;
      if (iVar3 != iVar1) {
        lVar4 = (longlong)(iVar3 * 0xc);
        lVar5 = (longlong)(iVar1 * 0xc);
        fVar9 = (float)(int)(*(ushort *)(lVar4 + param_4) - 0x7fff) * 0.003906369;
        fVar7 = (float)(int)(*(ushort *)(lVar4 + 2 + param_4) - 0x7fff) * 0.003906369;
        fVar6 = (float)(int)(*(ushort *)(lVar4 + 4 + param_4) - 0x7fff) * 0.003906369;
        fVar9 = ((float)(int)(*(ushort *)(lVar5 + param_4) - 0x7fff) * 0.003906369 - fVar9) *
                param_7 + fVar9;
        fVar7 = ((float)(int)(*(ushort *)(lVar5 + 2 + param_4) - 0x7fff) * 0.003906369 - fVar7) *
                param_7 + fVar7;
        fVar6 = ((float)(int)(*(ushort *)(lVar5 + 4 + param_4) - 0x7fff) * 0.003906369 - fVar6) *
                param_7 + fVar6;
        goto LAB_142266100;
      }
    }
  }
  lVar4 = (longlong)(param_5 * 0xc);
  fVar9 = (float)(int)(*(ushort *)(lVar4 + param_4) - 0x7fff) * 0.003906369;
  fVar7 = (float)(int)(*(ushort *)(lVar4 + 2 + param_4) - 0x7fff) * 0.003906369;
  fVar6 = (float)(int)(*(ushort *)(lVar4 + 4 + param_4) - 0x7fff) * 0.003906369;
LAB_142266100:
  auVar10._4_4_ = fVar7;
  auVar10._0_4_ = fVar9;
  auVar10._8_4_ = fVar6;
  auVar10._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x10) = auVar10;
  return;
}



// FUNCTION 142266270 FUN_142266270 body=724 status=ok
// SIG undefined FUN_142266270(void)

void FUN_142266270(undefined8 param_1,longlong param_2,longlong param_3,float *param_4,int param_5,
                  undefined8 param_6,float param_7)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  
  if (param_5 < 2) {
    param_7 = 0.0;
    iVar7 = 0;
    iVar4 = 0;
  }
  else if (0.0 < param_7) {
    iVar4 = param_5 + -1;
    iVar7 = iVar4;
    if (param_7 < 1.0) {
      param_7 = (float)iVar4 * param_7;
      iVar5 = (int)param_7;
      fVar12 = param_7;
      if ((iVar5 != -0x80000000) && ((float)iVar5 != param_7)) {
        auVar10._4_4_ = param_7;
        auVar10._0_4_ = param_7;
        auVar10._8_8_ = 0;
        uVar3 = movmskps(in_EAX,auVar10);
        fVar12 = (float)(int)(iVar5 - (uVar3 & 1));
      }
      if ((int)fVar12 <= iVar4) {
        iVar7 = (int)fVar12;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        param_7 = 0.0;
      }
      else {
        param_7 = param_7 - fVar12;
      }
      if (iVar7 + 1 <= iVar4) {
        iVar4 = iVar7 + 1;
      }
    }
    else {
      param_7 = 0.0;
    }
  }
  else {
    param_7 = 0.0;
    iVar7 = 0;
    iVar4 = 0;
  }
  lVar6 = 0x18;
  if (param_5 < 2) {
    lVar6 = 0;
  }
  lVar8 = iVar7 * 4 + lVar6;
  if (iVar7 == iVar4) {
    uVar3 = *(uint *)(lVar8 + (longlong)param_4);
    fVar9 = (float)(int)((uVar3 & 0x3ff) - 0x1ff) * 0.0019569471 * param_4[3] + *param_4;
    fVar11 = (float)(int)((uVar3 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * param_4[4] + param_4[1];
    fVar12 = (float)(int)((uVar3 >> 0x15) - 0x3ff) * 0.0009775171 * param_4[5] + param_4[2];
  }
  else {
    uVar3 = *(uint *)(lVar8 + (longlong)param_4);
    uVar1 = *(uint *)(iVar4 * 4 + lVar6 + (longlong)param_4);
    fVar9 = (float)(int)((uVar3 & 0x3ff) - 0x1ff) * 0.0019569471 * param_4[3] + *param_4;
    fVar12 = (float)(int)((uVar3 >> 0x15) - 0x3ff) * 0.0009775171 * param_4[5] + param_4[2];
    fVar11 = (float)(int)((uVar3 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * param_4[4] + param_4[1];
    fVar9 = (((float)(int)((uVar1 & 0x3ff) - 0x1ff) * 0.0019569471 * param_4[3] + *param_4) - fVar9)
            * param_7 + fVar9;
    fVar12 = (((float)(int)((uVar1 >> 0x15) - 0x3ff) * 0.0009775171 * param_4[5] + param_4[2]) -
             fVar12) * param_7 + fVar12;
    fVar11 = (((float)(int)((uVar1 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * param_4[4] + param_4[1])
             - fVar11) * param_7 + fVar11;
  }
  auVar2._4_4_ = fVar11;
  auVar2._0_4_ = fVar9;
  auVar2._8_4_ = fVar12;
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x10) = auVar2;
  return;
}



// FUNCTION 142266550 FUN_142266550 body=557 status=ok
// SIG undefined FUN_142266550(void)

void FUN_142266550(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,float param_7)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  if (param_5 < 2) {
    param_7 = 0.0;
    param_5 = 0;
    iVar4 = 0;
  }
  else if (0.0 < param_7) {
    param_5 = param_5 + -1;
    iVar4 = param_5;
    if (param_7 < 1.0) {
      param_7 = (float)param_5 * param_7;
      iVar3 = (int)param_7;
      fVar6 = param_7;
      if ((iVar3 != -0x80000000) && ((float)iVar3 != param_7)) {
        auVar8._4_4_ = param_7;
        auVar8._0_4_ = param_7;
        auVar8._8_8_ = 0;
        uVar2 = movmskps((int)&stack0x00000000,auVar8);
        fVar6 = (float)(int)(iVar3 - (uVar2 & 1));
      }
      if ((int)fVar6 <= param_5) {
        iVar4 = (int)fVar6;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        param_7 = 0.0;
      }
      else {
        param_7 = param_7 - fVar6;
      }
      if (iVar4 + 1 <= param_5) {
        param_5 = iVar4 + 1;
      }
    }
    else {
      param_7 = 0.0;
    }
  }
  else {
    param_7 = 0.0;
    param_5 = 0;
    iVar4 = 0;
  }
  LowLevelFatalErrorHandler
            ("Unknown",0x223,L"%i: unknown or unsupported animation compression format",4);
  FDebug::AssertFailed
            (&DAT_143f3f584,"Unknown",0x223,
             L"%i: unknown or unsupported animation compression format",4);
  fVar5 = DAT_1468b5d98;
  fVar7 = DAT_1468b5d94;
  fVar6 = DAT_1468b5d90;
  if (iVar4 != param_5) {
    LowLevelFatalErrorHandler
              ("Unknown",0x223,L"%i: unknown or unsupported animation compression format",4);
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x223,
               L"%i: unknown or unsupported animation compression format",4);
    fVar6 = (DAT_1468b5d90 - fVar6) * param_7 + fVar6;
    fVar5 = (DAT_1468b5d98 - fVar5) * param_7 + fVar5;
    fVar7 = (DAT_1468b5d94 - fVar7) * param_7 + fVar7;
  }
  auVar1._4_4_ = fVar7;
  auVar1._0_4_ = fVar6;
  auVar1._8_4_ = fVar5;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x10) = auVar1;
  return;
}



// FUNCTION 142266780 FUN_142266780 body=557 status=ok
// SIG undefined FUN_142266780(void)

void FUN_142266780(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,float param_7)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  if (param_5 < 2) {
    param_7 = 0.0;
    param_5 = 0;
    iVar4 = 0;
  }
  else if (0.0 < param_7) {
    param_5 = param_5 + -1;
    iVar4 = param_5;
    if (param_7 < 1.0) {
      param_7 = (float)param_5 * param_7;
      iVar3 = (int)param_7;
      fVar6 = param_7;
      if ((iVar3 != -0x80000000) && ((float)iVar3 != param_7)) {
        auVar8._4_4_ = param_7;
        auVar8._0_4_ = param_7;
        auVar8._8_8_ = 0;
        uVar2 = movmskps((int)&stack0x00000000,auVar8);
        fVar6 = (float)(int)(iVar3 - (uVar2 & 1));
      }
      if ((int)fVar6 <= param_5) {
        iVar4 = (int)fVar6;
      }
      if (*(char *)(param_3 + 0x198) == '\x01') {
        param_7 = 0.0;
      }
      else {
        param_7 = param_7 - fVar6;
      }
      if (iVar4 + 1 <= param_5) {
        param_5 = iVar4 + 1;
      }
    }
    else {
      param_7 = 0.0;
    }
  }
  else {
    param_7 = 0.0;
    param_5 = 0;
    iVar4 = 0;
  }
  LowLevelFatalErrorHandler
            ("Unknown",0x223,L"%i: unknown or unsupported animation compression format",5);
  FDebug::AssertFailed
            (&DAT_143f3f584,"Unknown",0x223,
             L"%i: unknown or unsupported animation compression format",5);
  fVar5 = DAT_1468b5d98;
  fVar7 = DAT_1468b5d94;
  fVar6 = DAT_1468b5d90;
  if (iVar4 != param_5) {
    LowLevelFatalErrorHandler
              ("Unknown",0x223,L"%i: unknown or unsupported animation compression format",5);
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x223,
               L"%i: unknown or unsupported animation compression format",5);
    fVar6 = (DAT_1468b5d90 - fVar6) * param_7 + fVar6;
    fVar5 = (DAT_1468b5d98 - fVar5) * param_7 + fVar5;
    fVar7 = (DAT_1468b5d94 - fVar7) * param_7 + fVar7;
  }
  auVar1._4_4_ = fVar7;
  auVar1._0_4_ = fVar6;
  auVar1._8_4_ = fVar5;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x10) = auVar1;
  return;
}



// FUNCTION 142266a50 FUN_142266a50 body=710 status=ok
// SIG undefined FUN_142266a50(void)

void FUN_142266a50(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
                  ,undefined8 param_6,float param_7)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_34;
  
  iVar4 = *(int *)(param_3 + 0xb8);
  iVar10 = param_5 + -1;
  uVar5 = (longlong)(param_5 * 0xc) + 3 + param_4 & 0xfffffffffffffffc;
  if ((param_5 < 2) || (param_7 <= 0.0)) {
    iVar10 = 0;
  }
  else if (param_7 < 1.0) {
    fVar14 = (float)(iVar4 + -1) * param_7;
    iVar3 = (int)fVar14;
    if (iVar3 < 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = iVar4 + -2;
      if (iVar3 < iVar4 + -2) {
        iVar7 = iVar3;
      }
    }
    iVar3 = (int)((float)iVar10 * param_7);
    if (iVar3 < 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = iVar10;
      if (iVar3 < iVar10) {
        iVar11 = iVar3;
      }
    }
    iVar3 = iVar10;
    if (iVar4 < 0x100) {
      if (iVar7 < (int)(uint)*(byte *)((longlong)iVar11 + uVar5)) {
        iVar11 = iVar11 + -1;
        lVar6 = (longlong)iVar11;
        iVar4 = 0;
        if (0 < iVar11) {
          do {
            iVar4 = iVar11;
            if ((int)(uint)*(byte *)(lVar6 + uVar5) <= iVar7) break;
            iVar11 = iVar11 + -1;
            lVar6 = lVar6 + -1;
            iVar4 = 0;
          } while (0 < lVar6);
        }
      }
      else {
        iVar11 = iVar11 + 1;
        for (lVar6 = (longlong)iVar11; iVar4 = iVar10, lVar6 <= (longlong)param_5 + -1;
            lVar6 = lVar6 + 1) {
          if (iVar7 < (int)(uint)*(byte *)(lVar6 + uVar5)) {
            iVar4 = iVar11 + -1;
            break;
          }
          iVar11 = iVar11 + 1;
        }
      }
      uVar9 = (uint)*(byte *)((longlong)iVar4 + uVar5);
      if (iVar4 + 1 <= iVar10) {
        iVar3 = iVar4 + 1;
      }
      uVar8 = (uint)*(byte *)((longlong)iVar3 + uVar5);
      iVar10 = iVar4;
    }
    else {
      if (iVar7 < (int)(uint)*(ushort *)(uVar5 + (longlong)iVar11 * 2)) {
        iVar11 = iVar11 + -1;
        lVar6 = (longlong)iVar11;
        iVar4 = 0;
        if (0 < iVar11) {
          do {
            iVar4 = iVar11;
            if ((int)(uint)*(ushort *)(uVar5 + lVar6 * 2) <= iVar7) break;
            iVar11 = iVar11 + -1;
            lVar6 = lVar6 + -1;
            iVar4 = 0;
          } while (0 < lVar6);
        }
      }
      else {
        iVar11 = iVar11 + 1;
        for (lVar6 = (longlong)iVar11; iVar4 = iVar10, lVar6 <= iVar10; lVar6 = lVar6 + 1) {
          if (iVar7 < (int)(uint)*(ushort *)(uVar5 + lVar6 * 2)) {
            iVar4 = iVar11 + -1;
            break;
          }
          iVar11 = iVar11 + 1;
        }
      }
      uVar9 = (uint)*(ushort *)(uVar5 + (longlong)iVar4 * 2);
      if (iVar4 + 1 <= iVar10) {
        iVar3 = iVar4 + 1;
      }
      uVar8 = (uint)*(ushort *)(uVar5 + (longlong)iVar3 * 2);
      iVar10 = iVar4;
    }
    if (*(char *)(param_3 + 0x198) == '\x01') {
      fVar14 = 0.0;
    }
    else {
      iVar4 = 1;
      if (0 < (int)(uVar8 - uVar9)) {
        iVar4 = uVar8 - uVar9;
      }
      fVar14 = (fVar14 - (float)uVar9) / (float)iVar4;
    }
    if (iVar10 != iVar3) {
      lVar6 = (longlong)(iVar3 * 0xc);
      uVar1 = *(undefined8 *)(iVar10 * 0xc + param_4);
      fVar12 = *(float *)((longlong)(iVar10 * 0xc) + 8 + param_4);
      fVar13 = (float)uVar1;
      fStack_34 = (float)((ulonglong)uVar1 >> 0x20);
      fVar13 = ((float)*(undefined8 *)(lVar6 + param_4) - fVar13) * fVar14 + fVar13;
      fStack_34 = ((float)((ulonglong)*(undefined8 *)(lVar6 + param_4) >> 0x20) - fStack_34) *
                  fVar14 + fStack_34;
      fVar12 = (*(float *)(lVar6 + 8 + param_4) - fVar12) * fVar14 + fVar12;
      goto LAB_142266cf2;
    }
  }
  lVar6 = (longlong)(iVar10 * 0xc);
  fVar12 = *(float *)(lVar6 + 8 + param_4);
  fStack_34 = *(float *)(lVar6 + 4 + param_4);
  fVar13 = (float)*(undefined8 *)(lVar6 + param_4);
LAB_142266cf2:
  auVar2._4_4_ = fStack_34;
  auVar2._0_4_ = fVar13;
  auVar2._8_4_ = fVar12;
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x10) = auVar2;
  return;
}



// FUNCTION 142266d20 FUN_142266d20 body=845 status=ok
// SIG undefined FUN_142266d20(void)

void FUN_142266d20(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
                  ,undefined8 param_6,float param_7)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  
  iVar2 = *(int *)(param_3 + 0xb8);
  iVar9 = param_5 + -1;
  uVar3 = (longlong)(param_5 * 0xc) + 3 + param_4 & 0xfffffffffffffffc;
  if ((param_5 < 2) || (param_7 <= 0.0)) {
    iVar9 = 0;
  }
  else if (param_7 < 1.0) {
    fVar15 = (float)(iVar2 + -1) * param_7;
    iVar1 = (int)fVar15;
    if (iVar1 < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar2 + -2;
      if (iVar1 < iVar2 + -2) {
        iVar5 = iVar1;
      }
    }
    iVar1 = (int)((float)iVar9 * param_7);
    if (iVar1 < 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = iVar9;
      if (iVar1 < iVar9) {
        iVar10 = iVar1;
      }
    }
    iVar1 = iVar9;
    if (iVar2 < 0x100) {
      if (iVar5 < (int)(uint)*(byte *)((longlong)iVar10 + uVar3)) {
        iVar10 = iVar10 + -1;
        lVar4 = (longlong)iVar10;
        iVar2 = 0;
        if (0 < iVar10) {
          do {
            iVar2 = iVar10;
            if ((int)(uint)*(byte *)(lVar4 + uVar3) <= iVar5) break;
            iVar10 = iVar10 + -1;
            lVar4 = lVar4 + -1;
            iVar2 = 0;
          } while (0 < lVar4);
        }
      }
      else {
        iVar10 = iVar10 + 1;
        for (lVar4 = (longlong)iVar10; iVar2 = iVar9, lVar4 <= (longlong)param_5 + -1;
            lVar4 = lVar4 + 1) {
          if (iVar5 < (int)(uint)*(byte *)(lVar4 + uVar3)) {
            iVar2 = iVar10 + -1;
            break;
          }
          iVar10 = iVar10 + 1;
        }
      }
      uVar8 = (uint)*(byte *)((longlong)iVar2 + uVar3);
      if (iVar2 + 1 <= iVar9) {
        iVar1 = iVar2 + 1;
      }
      uVar6 = (uint)*(byte *)((longlong)iVar1 + uVar3);
      iVar9 = iVar2;
    }
    else {
      if (iVar5 < (int)(uint)*(ushort *)(uVar3 + (longlong)iVar10 * 2)) {
        iVar10 = iVar10 + -1;
        lVar4 = (longlong)iVar10;
        iVar2 = 0;
        if (0 < iVar10) {
          do {
            iVar2 = iVar10;
            if ((int)(uint)*(ushort *)(uVar3 + lVar4 * 2) <= iVar5) break;
            iVar10 = iVar10 + -1;
            lVar4 = lVar4 + -1;
            iVar2 = 0;
          } while (0 < lVar4);
        }
      }
      else {
        iVar10 = iVar10 + 1;
        for (lVar4 = (longlong)iVar10; iVar2 = iVar9, lVar4 <= iVar9; lVar4 = lVar4 + 1) {
          if (iVar5 < (int)(uint)*(ushort *)(uVar3 + lVar4 * 2)) {
            iVar2 = iVar10 + -1;
            break;
          }
          iVar10 = iVar10 + 1;
        }
      }
      uVar8 = (uint)*(ushort *)(uVar3 + (longlong)iVar2 * 2);
      if (iVar2 + 1 <= iVar9) {
        iVar1 = iVar2 + 1;
      }
      uVar6 = (uint)*(ushort *)(uVar3 + (longlong)iVar1 * 2);
      iVar9 = iVar2;
    }
    if (*(char *)(param_3 + 0x198) == '\x01') {
      fVar15 = 0.0;
    }
    else {
      iVar2 = 1;
      if (0 < (int)(uVar6 - uVar8)) {
        iVar2 = uVar6 - uVar8;
      }
      fVar15 = (fVar15 - (float)uVar8) / (float)iVar2;
    }
    if (iVar9 != iVar1) {
      lVar4 = (longlong)(iVar9 * 0xc);
      lVar7 = (longlong)(iVar1 * 0xc);
      fVar13 = (float)(int)(*(ushort *)(lVar4 + param_4) - 0x7fff) * 0.003906369;
      fVar12 = (float)(int)(*(ushort *)(lVar4 + 2 + param_4) - 0x7fff) * 0.003906369;
      fVar11 = (float)(int)(*(ushort *)(lVar4 + 4 + param_4) - 0x7fff) * 0.003906369;
      fVar13 = ((float)(int)(*(ushort *)(lVar7 + param_4) - 0x7fff) * 0.003906369 - fVar13) * fVar15
               + fVar13;
      fVar12 = ((float)(int)(*(ushort *)(lVar7 + 2 + param_4) - 0x7fff) * 0.003906369 - fVar12) *
               fVar15 + fVar12;
      fVar11 = ((float)(int)(*(ushort *)(lVar7 + 4 + param_4) - 0x7fff) * 0.003906369 - fVar11) *
               fVar15 + fVar11;
      goto LAB_142267042;
    }
  }
  lVar4 = (longlong)(iVar9 * 0xc);
  fVar13 = (float)(int)(*(ushort *)(lVar4 + param_4) - 0x7fff) * 0.003906369;
  fVar12 = (float)(int)(*(ushort *)(lVar4 + 2 + param_4) - 0x7fff) * 0.003906369;
  fVar11 = (float)(int)(*(ushort *)(lVar4 + 4 + param_4) - 0x7fff) * 0.003906369;
LAB_142267042:
  auVar14._4_4_ = fVar12;
  auVar14._0_4_ = fVar13;
  auVar14._8_4_ = fVar11;
  auVar14._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x10) = auVar14;
  return;
}



// FUNCTION 142267070 FUN_142267070 body=1054 status=ok
// SIG undefined FUN_142267070(void)

void FUN_142267070(undefined8 param_1,longlong param_2,longlong param_3,float *param_4,int param_5,
                  undefined8 param_6,float param_7)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar3 = *(int *)(param_3 + 0xb8);
  iVar9 = param_5 + -1;
  uVar4 = (longlong)(param_5 * 4) + 3 + (longlong)param_4 & 0xfffffffffffffffc;
  iVar11 = 0;
  iVar10 = 0;
  if (((param_5 < 2) || (param_7 <= 0.0)) || (iVar10 = iVar9, 1.0 <= param_7)) {
    fVar15 = 0.0;
    iVar2 = iVar10;
  }
  else {
    fVar15 = (float)(iVar3 + -1) * param_7;
    iVar2 = (int)fVar15;
    iVar5 = iVar11;
    if ((-1 < iVar2) && (iVar5 = iVar3 + -2, iVar2 < iVar3 + -2)) {
      iVar5 = iVar2;
    }
    iVar2 = (int)((float)iVar9 * param_7);
    if ((-1 < iVar2) && (iVar11 = iVar9, iVar2 < iVar9)) {
      iVar11 = iVar2;
    }
    iVar2 = iVar9;
    if (iVar3 < 0x100) {
      if (iVar5 < (int)(uint)*(byte *)((longlong)iVar11 + uVar4)) {
        iVar11 = iVar11 + -1;
        lVar8 = (longlong)iVar11;
        iVar2 = 0;
        if (0 < iVar11) {
          do {
            iVar2 = iVar11;
            if ((int)(uint)*(byte *)(lVar8 + uVar4) <= iVar5) break;
            iVar11 = iVar11 + -1;
            lVar8 = lVar8 + -1;
            iVar2 = 0;
          } while (0 < lVar8);
        }
      }
      else {
        iVar11 = iVar11 + 1;
        for (lVar8 = (longlong)iVar11; lVar8 <= (longlong)param_5 + -1; lVar8 = lVar8 + 1) {
          if (iVar5 < (int)(uint)*(byte *)(lVar8 + uVar4)) {
            iVar2 = iVar11 + -1;
            break;
          }
          iVar11 = iVar11 + 1;
        }
      }
      uVar7 = (uint)*(byte *)((longlong)iVar2 + uVar4);
      if (iVar2 + 1 <= iVar9) {
        iVar10 = iVar2 + 1;
      }
      uVar6 = (uint)*(byte *)((longlong)iVar10 + uVar4);
    }
    else {
      if (iVar5 < (int)(uint)*(ushort *)(uVar4 + (longlong)iVar11 * 2)) {
        iVar11 = iVar11 + -1;
        lVar8 = (longlong)iVar11;
        iVar2 = 0;
        if (0 < iVar11) {
          do {
            iVar2 = iVar11;
            if ((int)(uint)*(ushort *)(uVar4 + lVar8 * 2) <= iVar5) break;
            iVar11 = iVar11 + -1;
            lVar8 = lVar8 + -1;
            iVar2 = 0;
          } while (0 < lVar8);
        }
      }
      else {
        iVar11 = iVar11 + 1;
        for (lVar8 = (longlong)iVar11; lVar8 <= iVar9; lVar8 = lVar8 + 1) {
          if (iVar5 < (int)(uint)*(ushort *)(uVar4 + lVar8 * 2)) {
            iVar2 = iVar11 + -1;
            break;
          }
          iVar11 = iVar11 + 1;
        }
      }
      uVar7 = (uint)*(ushort *)(uVar4 + (longlong)iVar2 * 2);
      if (iVar2 + 1 <= iVar9) {
        iVar10 = iVar2 + 1;
      }
      uVar6 = (uint)*(ushort *)(uVar4 + (longlong)iVar10 * 2);
    }
    if (*(char *)(param_3 + 0x198) == '\x01') {
      fVar15 = 0.0;
    }
    else {
      iVar3 = 1;
      if (0 < (int)(uVar6 - uVar7)) {
        iVar3 = uVar6 - uVar7;
      }
      fVar15 = (fVar15 - (float)uVar7) / (float)iVar3;
    }
  }
  lVar8 = 0x18;
  if (param_5 < 2) {
    lVar8 = 0;
  }
  uVar7 = *(uint *)((longlong)param_4 + lVar8 + iVar2 * 4);
  if (iVar2 == iVar10) {
    fVar12 = (float)(int)((uVar7 & 0x3ff) - 0x1ff) * 0.0019569471 * param_4[3] + *param_4;
    fVar13 = (float)(int)((uVar7 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * param_4[4] + param_4[1];
    fVar14 = (float)(int)((uVar7 >> 0x15) - 0x3ff) * 0.0009775171 * param_4[5] + param_4[2];
  }
  else {
    uVar6 = *(uint *)(iVar10 * 4 + lVar8 + (longlong)param_4);
    fVar12 = (float)(int)((uVar7 & 0x3ff) - 0x1ff) * 0.0019569471 * param_4[3] + *param_4;
    fVar14 = (float)(int)((uVar7 >> 0x15) - 0x3ff) * 0.0009775171 * param_4[5] + param_4[2];
    fVar13 = (float)(int)((uVar7 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * param_4[4] + param_4[1];
    fVar12 = (((float)(int)((uVar6 & 0x3ff) - 0x1ff) * 0.0019569471 * param_4[3] + *param_4) -
             fVar12) * fVar15 + fVar12;
    fVar14 = (((float)(int)((uVar6 >> 0x15) - 0x3ff) * 0.0009775171 * param_4[5] + param_4[2]) -
             fVar14) * fVar15 + fVar14;
    fVar13 = (((float)(int)((uVar6 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * param_4[4] + param_4[1])
             - fVar13) * fVar15 + fVar13;
  }
  auVar1._4_4_ = fVar13;
  auVar1._0_4_ = fVar12;
  auVar1._8_4_ = fVar14;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x10) = auVar1;
  return;
}



// FUNCTION 142267490 FUN_142267490 body=875 status=ok
// SIG undefined FUN_142267490(void)

void FUN_142267490(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
                  ,undefined8 param_6,float param_7)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar3 = *(int *)(param_3 + 0xb8);
  iVar7 = param_5 + -1;
  uVar4 = (longlong)(param_5 * 0xc) + 3 + param_4 & 0xfffffffffffffffc;
  if ((param_5 < 2) || (param_7 <= 0.0)) {
    iVar7 = 0;
  }
  else if (param_7 < 1.0) {
    fVar14 = (float)(iVar3 + -1) * param_7;
    iVar2 = (int)fVar14;
    if (iVar2 < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar3 + -2;
      if (iVar2 < iVar3 + -2) {
        iVar5 = iVar2;
      }
    }
    iVar2 = (int)((float)iVar7 * param_7);
    if (iVar2 < 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = iVar7;
      if (iVar2 < iVar7) {
        iVar10 = iVar2;
      }
    }
    iVar2 = iVar7;
    if (iVar3 < 0x100) {
      if (iVar5 < (int)(uint)*(byte *)((longlong)iVar10 + uVar4)) {
        iVar10 = iVar10 + -1;
        lVar9 = (longlong)iVar10;
        iVar2 = 0;
        if (0 < iVar10) {
          do {
            iVar2 = iVar10;
            if ((int)(uint)*(byte *)(lVar9 + uVar4) <= iVar5) break;
            iVar10 = iVar10 + -1;
            lVar9 = lVar9 + -1;
            iVar2 = 0;
          } while (0 < lVar9);
        }
      }
      else {
        iVar10 = iVar10 + 1;
        for (lVar9 = (longlong)iVar10; lVar9 <= (longlong)param_5 + -1; lVar9 = lVar9 + 1) {
          if (iVar5 < (int)(uint)*(byte *)(lVar9 + uVar4)) {
            iVar2 = iVar10 + -1;
            break;
          }
          iVar10 = iVar10 + 1;
        }
      }
      uVar8 = (uint)*(byte *)((longlong)iVar2 + uVar4);
      if (iVar2 + 1 <= iVar7) {
        iVar7 = iVar2 + 1;
      }
      uVar6 = (uint)*(byte *)((longlong)iVar7 + uVar4);
    }
    else {
      if (iVar5 < (int)(uint)*(ushort *)(uVar4 + (longlong)iVar10 * 2)) {
        iVar10 = iVar10 + -1;
        lVar9 = (longlong)iVar10;
        iVar2 = 0;
        if (0 < iVar10) {
          do {
            iVar2 = iVar10;
            if ((int)(uint)*(ushort *)(uVar4 + lVar9 * 2) <= iVar5) break;
            iVar10 = iVar10 + -1;
            lVar9 = lVar9 + -1;
            iVar2 = 0;
          } while (0 < lVar9);
        }
      }
      else {
        iVar10 = iVar10 + 1;
        for (lVar9 = (longlong)iVar10; lVar9 <= iVar7; lVar9 = lVar9 + 1) {
          if (iVar5 < (int)(uint)*(ushort *)(uVar4 + lVar9 * 2)) {
            iVar2 = iVar10 + -1;
            break;
          }
          iVar10 = iVar10 + 1;
        }
      }
      uVar8 = (uint)*(ushort *)(uVar4 + (longlong)iVar2 * 2);
      if (iVar2 + 1 <= iVar7) {
        iVar7 = iVar2 + 1;
      }
      uVar6 = (uint)*(ushort *)(uVar4 + (longlong)iVar7 * 2);
    }
    if (*(char *)(param_3 + 0x198) == '\x01') {
      fVar14 = 0.0;
    }
    else {
      iVar3 = 1;
      if (0 < (int)(uVar6 - uVar8)) {
        iVar3 = uVar6 - uVar8;
      }
      fVar14 = (fVar14 - (float)uVar8) / (float)iVar3;
    }
    goto LAB_1422676a0;
  }
  fVar14 = 0.0;
  iVar2 = iVar7;
LAB_1422676a0:
  LowLevelFatalErrorHandler
            ("Unknown",0x223,L"%i: unknown or unsupported animation compression format",4);
  FDebug::AssertFailed
            (&DAT_143f3f584,"Unknown",0x223,
             L"%i: unknown or unsupported animation compression format",4);
  fVar11 = DAT_1468b5d98;
  fVar12 = DAT_1468b5d94;
  fVar13 = DAT_1468b5d90;
  if (iVar2 != iVar7) {
    LowLevelFatalErrorHandler
              ("Unknown",0x223,L"%i: unknown or unsupported animation compression format",4);
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x223,
               L"%i: unknown or unsupported animation compression format",4);
    fVar13 = (DAT_1468b5d90 - fVar13) * fVar14 + fVar13;
    fVar11 = (DAT_1468b5d98 - fVar11) * fVar14 + fVar11;
    fVar12 = (DAT_1468b5d94 - fVar12) * fVar14 + fVar12;
  }
  auVar1._4_4_ = fVar12;
  auVar1._0_4_ = fVar13;
  auVar1._8_4_ = fVar11;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x10) = auVar1;
  return;
}



// FUNCTION 142267800 FUN_142267800 body=875 status=ok
// SIG undefined FUN_142267800(void)

void FUN_142267800(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
                  ,undefined8 param_6,float param_7)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar3 = *(int *)(param_3 + 0xb8);
  iVar7 = param_5 + -1;
  uVar4 = (longlong)(param_5 * 0xc) + 3 + param_4 & 0xfffffffffffffffc;
  if ((param_5 < 2) || (param_7 <= 0.0)) {
    iVar7 = 0;
  }
  else if (param_7 < 1.0) {
    fVar14 = (float)(iVar3 + -1) * param_7;
    iVar2 = (int)fVar14;
    if (iVar2 < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar3 + -2;
      if (iVar2 < iVar3 + -2) {
        iVar5 = iVar2;
      }
    }
    iVar2 = (int)((float)iVar7 * param_7);
    if (iVar2 < 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = iVar7;
      if (iVar2 < iVar7) {
        iVar10 = iVar2;
      }
    }
    iVar2 = iVar7;
    if (iVar3 < 0x100) {
      if (iVar5 < (int)(uint)*(byte *)((longlong)iVar10 + uVar4)) {
        iVar10 = iVar10 + -1;
        lVar9 = (longlong)iVar10;
        iVar2 = 0;
        if (0 < iVar10) {
          do {
            iVar2 = iVar10;
            if ((int)(uint)*(byte *)(lVar9 + uVar4) <= iVar5) break;
            iVar10 = iVar10 + -1;
            lVar9 = lVar9 + -1;
            iVar2 = 0;
          } while (0 < lVar9);
        }
      }
      else {
        iVar10 = iVar10 + 1;
        for (lVar9 = (longlong)iVar10; lVar9 <= (longlong)param_5 + -1; lVar9 = lVar9 + 1) {
          if (iVar5 < (int)(uint)*(byte *)(lVar9 + uVar4)) {
            iVar2 = iVar10 + -1;
            break;
          }
          iVar10 = iVar10 + 1;
        }
      }
      uVar8 = (uint)*(byte *)((longlong)iVar2 + uVar4);
      if (iVar2 + 1 <= iVar7) {
        iVar7 = iVar2 + 1;
      }
      uVar6 = (uint)*(byte *)((longlong)iVar7 + uVar4);
    }
    else {
      if (iVar5 < (int)(uint)*(ushort *)(uVar4 + (longlong)iVar10 * 2)) {
        iVar10 = iVar10 + -1;
        lVar9 = (longlong)iVar10;
        iVar2 = 0;
        if (0 < iVar10) {
          do {
            iVar2 = iVar10;
            if ((int)(uint)*(ushort *)(uVar4 + lVar9 * 2) <= iVar5) break;
            iVar10 = iVar10 + -1;
            lVar9 = lVar9 + -1;
            iVar2 = 0;
          } while (0 < lVar9);
        }
      }
      else {
        iVar10 = iVar10 + 1;
        for (lVar9 = (longlong)iVar10; lVar9 <= iVar7; lVar9 = lVar9 + 1) {
          if (iVar5 < (int)(uint)*(ushort *)(uVar4 + lVar9 * 2)) {
            iVar2 = iVar10 + -1;
            break;
          }
          iVar10 = iVar10 + 1;
        }
      }
      uVar8 = (uint)*(ushort *)(uVar4 + (longlong)iVar2 * 2);
      if (iVar2 + 1 <= iVar7) {
        iVar7 = iVar2 + 1;
      }
      uVar6 = (uint)*(ushort *)(uVar4 + (longlong)iVar7 * 2);
    }
    if (*(char *)(param_3 + 0x198) == '\x01') {
      fVar14 = 0.0;
    }
    else {
      iVar3 = 1;
      if (0 < (int)(uVar6 - uVar8)) {
        iVar3 = uVar6 - uVar8;
      }
      fVar14 = (fVar14 - (float)uVar8) / (float)iVar3;
    }
    goto LAB_142267a10;
  }
  fVar14 = 0.0;
  iVar2 = iVar7;
LAB_142267a10:
  LowLevelFatalErrorHandler
            ("Unknown",0x223,L"%i: unknown or unsupported animation compression format",5);
  FDebug::AssertFailed
            (&DAT_143f3f584,"Unknown",0x223,
             L"%i: unknown or unsupported animation compression format",5);
  fVar11 = DAT_1468b5d98;
  fVar12 = DAT_1468b5d94;
  fVar13 = DAT_1468b5d90;
  if (iVar2 != iVar7) {
    LowLevelFatalErrorHandler
              ("Unknown",0x223,L"%i: unknown or unsupported animation compression format",5);
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x223,
               L"%i: unknown or unsupported animation compression format",5);
    fVar13 = (DAT_1468b5d90 - fVar13) * fVar14 + fVar13;
    fVar11 = (DAT_1468b5d98 - fVar11) * fVar14 + fVar11;
    fVar12 = (DAT_1468b5d94 - fVar12) * fVar14 + fVar12;
  }
  auVar1._4_4_ = fVar12;
  auVar1._0_4_ = fVar13;
  auVar1._8_4_ = fVar11;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x10) = auVar1;
  return;
}



// FUNCTION 142267b70 FUN_142267b70 body=407 status=ok
// SIG undefined FUN_142267b70(void)

void FUN_142267b70(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
                  ,undefined8 param_6,float param_7)

{
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_3 + 0xb8);
  uVar6 = param_4 + 3U & 0xfffffffffffffffc;
  iVar8 = param_5 + -1;
  if (((1 < param_5) && (0.0 < param_7)) && (param_7 < 1.0)) {
    iVar3 = (int)((float)(iVar1 + -1) * param_7);
    iVar7 = 0;
    iVar5 = iVar7;
    if ((-1 < iVar3) && (iVar5 = iVar1 + -2, iVar3 < iVar1 + -2)) {
      iVar5 = iVar3;
    }
    iVar3 = (int)((float)iVar8 * param_7);
    if ((-1 < iVar3) && (iVar7 = iVar8, iVar3 < iVar8)) {
      iVar7 = iVar3;
    }
    if (iVar1 < 0x100) {
      if (iVar5 < (int)(uint)*(byte *)((longlong)iVar7 + uVar6)) {
        lVar4 = (longlong)(iVar7 + -1);
        if (0 < iVar7 + -1) {
          do {
            if ((int)(uint)*(byte *)(lVar4 + uVar6) <= iVar5) break;
            lVar4 = lVar4 + -1;
          } while (0 < lVar4);
        }
      }
      else {
        for (lVar4 = (longlong)(iVar7 + 1);
            (lVar4 <= (longlong)param_5 + -1 && ((int)(uint)*(byte *)(lVar4 + uVar6) <= iVar5));
            lVar4 = lVar4 + 1) {
        }
      }
    }
    else if (iVar5 < (int)(uint)*(ushort *)(uVar6 + (longlong)iVar7 * 2)) {
      lVar4 = (longlong)(iVar7 + -1);
      if (0 < iVar7 + -1) {
        do {
          if ((int)(uint)*(ushort *)(uVar6 + lVar4 * 2) <= iVar5) break;
          lVar4 = lVar4 + -1;
        } while (0 < lVar4);
      }
    }
    else {
      lVar4 = (longlong)(iVar7 + 1);
      while ((lVar4 <= iVar8 && ((int)(uint)*(ushort *)(uVar6 + lVar4 * 2) <= iVar5))) {
        lVar4 = lVar4 + 1;
      }
    }
  }
  auVar2._4_4_ = DAT_1468b5d94;
  auVar2._0_4_ = DAT_1468b5d90;
  auVar2._8_4_ = DAT_1468b5d98;
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x10) = auVar2;
  return;
}



// FUNCTION 142267d10 FUN_142267d10 body=2268 status=ok
// SIG undefined FUN_142267d10(void)

void FUN_142267d10(longlong param_1,longlong param_2,int param_3,undefined8 param_4,float param_5)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  ulonglong uVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_res18;
  undefined8 local_c0;
  float local_b8;
  float local_b0;
  
  if (param_3 == -1) {
    auVar27._4_4_ = DAT_1468b5d94;
    auVar27._0_4_ = DAT_1468b5d90;
    auVar27._8_4_ = DAT_1468b5d98;
    auVar27._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar27;
    return;
  }
  uVar14 = *(uint *)(*(longlong *)(param_2 + 0x120) + (longlong)param_3);
  pfVar21 = (float *)((longlong)param_3 + 4 + *(longlong *)(param_2 + 0x120));
  uVar20 = uVar14 & 0xffffff;
  uVar17 = (int)uVar14 >> 0x1c & 0xf;
  uVar14 = (int)uVar14 >> 0x18;
  bVar1 = (&DAT_145018db0)[uVar17 * 8 | uVar14 & 7];
  uVar18 = 1;
  if (uVar17 != 3) {
    uVar18 = (uint)bVar1;
  }
  iVar10 = uVar18 * *(int *)(&DAT_145018d30 + (ulonglong)uVar17 * 4);
  iVar7 = 0;
  local_res18 = 0.0;
  uVar18 = 0;
  if (uVar17 == 3) {
    uVar18 = (uint)bVar1;
  }
  uVar18 = uVar18 << 2;
  iVar13 = 0;
  iVar15 = iVar7;
  if (1 < uVar20) {
    if ((uVar14 & 8) == 0) {
      if (uVar20 < 2) {
        local_res18 = 0.0;
      }
      else if (0.0 < param_5) {
        iVar13 = uVar20 - 1;
        iVar15 = iVar13;
        if (param_5 < 1.0) {
          param_5 = (float)iVar13 * param_5;
          iVar7 = (int)param_5;
          local_res18 = param_5;
          if ((iVar7 != -0x80000000) && ((float)iVar7 != param_5)) {
            auVar25._4_4_ = param_5;
            auVar25._0_4_ = param_5;
            auVar25._8_8_ = 0;
            uVar20 = movmskps((uint)bVar1,auVar25);
            local_res18 = (float)(int)(iVar7 - (uVar20 & 1));
          }
          if ((int)local_res18 <= iVar13) {
            iVar15 = (int)local_res18;
          }
          if (*(char *)(param_2 + 0x198) == '\x01') {
            local_res18 = 0.0;
            if (iVar15 + 1 <= iVar13) {
              iVar13 = iVar15 + 1;
            }
          }
          else {
            local_res18 = param_5 - local_res18;
            if (iVar15 + 1 <= iVar13) {
              iVar13 = iVar15 + 1;
            }
          }
        }
        else {
          local_res18 = 0.0;
        }
      }
      else {
        local_res18 = 0.0;
        iVar13 = 0;
      }
    }
    else {
      iVar3 = *(int *)(param_2 + 0xb8);
      iVar13 = uVar20 - 1;
      uVar8 = (longlong)pfVar21 + (ulonglong)uVar18 + (longlong)(int)(uVar20 * iVar10) + 3 &
              0xfffffffffffffffc;
      if (((uVar20 < 2) || (param_5 <= 0.0)) || (iVar15 = iVar13, 1.0 <= param_5)) {
        local_res18 = 0.0;
        iVar13 = iVar15;
      }
      else {
        fVar24 = (float)(iVar3 + -1) * param_5;
        iVar5 = (int)fVar24;
        if (iVar5 < 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = iVar3 + -2;
          if (iVar5 < iVar3 + -2) {
            iVar11 = iVar5;
          }
        }
        iVar5 = (int)((float)iVar13 * param_5);
        if (iVar5 < 0) {
          iVar19 = 0;
        }
        else {
          iVar19 = iVar13;
          if (iVar5 < iVar13) {
            iVar19 = iVar5;
          }
        }
        if (iVar3 < 0x100) {
          if (iVar11 < (int)(uint)*(byte *)((longlong)iVar19 + uVar8)) {
            iVar19 = iVar19 + -1;
            lVar16 = (longlong)iVar19;
            iVar15 = iVar7;
            if (0 < iVar19) {
              do {
                iVar15 = iVar19;
                if ((int)(uint)*(byte *)(lVar16 + uVar8) <= iVar11) break;
                iVar19 = iVar19 + -1;
                lVar16 = lVar16 + -1;
                iVar15 = iVar7;
              } while (0 < lVar16);
            }
          }
          else {
            iVar19 = iVar19 + 1;
            for (lVar16 = (longlong)iVar19; lVar16 <= (longlong)((ulonglong)uVar20 - 1);
                lVar16 = lVar16 + 1) {
              if (iVar11 < (int)(uint)*(byte *)(lVar16 + uVar8)) {
                iVar15 = iVar19 + -1;
                break;
              }
              iVar19 = iVar19 + 1;
            }
          }
          uVar20 = (uint)*(byte *)((longlong)iVar15 + uVar8);
          if (iVar15 + 1 <= iVar13) {
            iVar13 = iVar15 + 1;
          }
          uVar12 = (uint)*(byte *)((longlong)iVar13 + uVar8);
        }
        else {
          if (iVar11 < (int)(uint)*(ushort *)(uVar8 + (longlong)iVar19 * 2)) {
            iVar19 = iVar19 + -1;
            lVar16 = (longlong)iVar19;
            iVar15 = iVar7;
            if (0 < iVar19) {
              do {
                iVar15 = iVar19;
                if ((int)(uint)*(ushort *)(uVar8 + lVar16 * 2) <= iVar11) break;
                iVar19 = iVar19 + -1;
                lVar16 = lVar16 + -1;
                iVar15 = iVar7;
              } while (0 < lVar16);
            }
          }
          else {
            iVar19 = iVar19 + 1;
            for (lVar16 = (longlong)iVar19; lVar16 <= (longlong)((ulonglong)uVar20 - 1);
                lVar16 = lVar16 + 1) {
              if (iVar11 < (int)(uint)*(ushort *)(uVar8 + lVar16 * 2)) {
                iVar15 = iVar19 + -1;
                break;
              }
              iVar19 = iVar19 + 1;
            }
          }
          uVar20 = (uint)*(ushort *)(uVar8 + (longlong)iVar15 * 2);
          if (iVar15 + 1 <= iVar13) {
            iVar13 = iVar15 + 1;
          }
          uVar12 = (uint)*(ushort *)(uVar8 + (longlong)iVar13 * 2);
        }
        if (*(char *)(param_2 + 0x198) == '\x01') {
          local_res18 = 0.0;
        }
        else {
          iVar7 = 1;
          if (0 < (int)(uVar12 - uVar20)) {
            iVar7 = uVar12 - uVar20;
          }
          local_res18 = (fVar24 - (float)uVar20) / (float)iVar7;
        }
      }
    }
  }
  pfVar9 = (float *)((longlong)(iVar15 * iVar10) + (ulonglong)uVar18 + (longlong)pfVar21);
  if (uVar17 == 1) {
    if ((uVar14 & 7) == 0) {
      local_c0 = *(ulonglong *)pfVar9;
      local_b8 = pfVar9[2];
      fVar23 = (float)(local_c0 >> 0x20);
      fVar24 = (float)local_c0;
    }
    else {
      if ((uVar14 & 1) == 0) {
        fVar24 = 0.0;
      }
      else {
        fVar24 = *pfVar9;
        pfVar9 = pfVar9 + 1;
      }
      if ((uVar14 & 2) == 0) {
        local_c0 = (ulonglong)(uint)fVar24;
        fVar23 = 0.0;
      }
      else {
        fVar23 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        local_c0 = CONCAT44(fVar23,fVar24);
      }
      if ((uVar14 & 4) == 0) {
LAB_142268279:
        local_b8 = 0.0;
      }
      else {
        local_b8 = *pfVar9;
      }
    }
  }
  else {
    if (uVar17 == 3) {
      fVar31 = 0.0;
      fVar23 = 0.0;
      fVar22 = 0.0;
      fVar24 = 0.0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      pfVar6 = pfVar21;
      if ((uVar14 & 1) != 0) {
        fVar24 = pfVar21[1];
        fVar31 = *pfVar21;
        pfVar6 = pfVar21 + 2;
      }
      if ((uVar14 & 2) != 0) {
        fVar23 = *pfVar6;
        fVar28 = pfVar6[1];
        pfVar6 = pfVar6 + 2;
      }
      if ((uVar14 & 4) != 0) {
        fVar22 = *pfVar6;
        fVar29 = pfVar6[1];
      }
      fVar30 = *pfVar9;
      fVar23 = (float)(int)(((uint)fVar30 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * fVar28 + fVar23;
      local_b8 = (float)(int)(((uint)fVar30 >> 0x15) - 0x3ff) * 0.0009775171 * fVar29 + fVar22;
      fVar24 = (float)(int)(((uint)fVar30 & 0x3ff) - 0x1ff) * 0.0019569471 * fVar24 + fVar31;
    }
    else {
      if (uVar17 == 2) {
        if ((uVar14 & 1) == 0) {
          fVar24 = 0.0;
        }
        else {
          uVar2 = *(ushort *)pfVar9;
          pfVar9 = (float *)((longlong)pfVar9 + 2);
          fVar24 = (float)(int)(uVar2 - 0xff);
        }
        if ((uVar14 & 2) == 0) {
          local_c0 = (ulonglong)(uint)fVar24;
          fVar23 = 0.0;
        }
        else {
          uVar2 = *(ushort *)pfVar9;
          pfVar9 = (float *)((longlong)pfVar9 + 2);
          fVar23 = (float)(int)(uVar2 - 0xff);
          local_c0 = CONCAT44(fVar23,fVar24);
        }
        if ((uVar14 & 4) == 0) goto LAB_142268279;
        local_b8 = (float)(int)(*(ushort *)pfVar9 - 0xff);
        goto LAB_1422682f8;
      }
      fVar23 = DAT_1468b5d94;
      local_b8 = DAT_1468b5d98;
      fVar24 = DAT_1468b5d90;
      if (uVar17 != 6) {
        LowLevelFatalErrorHandler
                  ("Unknown",0x34d,L"%i: unknown or unsupported animation compression format",uVar17
                  );
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0x34d,
                   L"%i: unknown or unsupported animation compression format",uVar17);
        fVar23 = DAT_1468b5d94;
        local_b8 = DAT_1468b5d98;
        fVar24 = DAT_1468b5d90;
      }
    }
    local_c0 = CONCAT44(fVar23,fVar24);
  }
LAB_1422682f8:
  if (iVar15 == iVar13) goto LAB_142268543;
  pfVar9 = (float *)((longlong)(iVar13 * iVar10) + (ulonglong)uVar18 + (longlong)pfVar21);
  if (uVar17 == 1) {
    if ((uVar14 & 7) == 0) {
      local_b0 = (float)*(undefined8 *)pfVar9;
      fVar31 = (float)((ulonglong)*(undefined8 *)pfVar9 >> 0x20);
      fVar28 = pfVar9[2];
    }
    else {
      if ((uVar14 & 1) == 0) {
        local_b0 = 0.0;
      }
      else {
        local_b0 = *pfVar9;
        pfVar9 = pfVar9 + 1;
      }
      if ((uVar14 & 2) == 0) {
        fVar31 = 0.0;
      }
      else {
        fVar31 = *pfVar9;
        pfVar9 = pfVar9 + 1;
      }
      if ((uVar14 & 4) == 0) {
LAB_1422684a9:
        fVar28 = 0.0;
      }
      else {
        fVar28 = *pfVar9;
      }
    }
  }
  else if (uVar17 == 3) {
    fVar31 = 0.0;
    local_b0 = 0.0;
    fVar28 = 0.0;
    fVar29 = 0.0;
    fVar22 = 0.0;
    fVar30 = 0.0;
    if ((uVar14 & 1) != 0) {
      local_b0 = *pfVar21;
      fVar31 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
    }
    if ((uVar14 & 2) != 0) {
      fVar28 = *pfVar21;
      fVar22 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
    }
    if ((uVar14 & 4) != 0) {
      fVar29 = *pfVar21;
      fVar30 = pfVar21[1];
    }
    fVar4 = *pfVar9;
    local_b0 = (float)(int)(((uint)fVar4 & 0x3ff) - 0x1ff) * 0.0019569471 * fVar31 + local_b0;
    fVar31 = (float)(int)(((uint)fVar4 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * fVar22 + fVar28;
    fVar28 = (float)(int)(((uint)fVar4 >> 0x15) - 0x3ff) * 0.0009775171 * fVar30 + fVar29;
  }
  else if (uVar17 == 2) {
    if ((uVar14 & 1) == 0) {
      local_b0 = 0.0;
    }
    else {
      uVar2 = *(ushort *)pfVar9;
      pfVar9 = (float *)((longlong)pfVar9 + 2);
      local_b0 = (float)(int)(uVar2 - 0xff);
    }
    if ((uVar14 & 2) == 0) {
      fVar31 = 0.0;
    }
    else {
      uVar2 = *(ushort *)pfVar9;
      pfVar9 = (float *)((longlong)pfVar9 + 2);
      fVar31 = (float)(int)(uVar2 - 0xff);
    }
    if ((uVar14 & 4) == 0) goto LAB_1422684a9;
    fVar28 = (float)(int)(*(ushort *)pfVar9 - 0xff);
  }
  else {
    fVar31 = DAT_1468b5d94;
    local_b0 = DAT_1468b5d90;
    fVar28 = DAT_1468b5d98;
    if (uVar17 != 6) {
      LowLevelFatalErrorHandler
                ("Unknown",0x34d,L"%i: unknown or unsupported animation compression format",uVar17);
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x34d,
                 L"%i: unknown or unsupported animation compression format",uVar17);
      fVar31 = DAT_1468b5d94;
      local_b0 = DAT_1468b5d90;
      fVar28 = DAT_1468b5d98;
    }
  }
  fVar24 = local_res18 * (local_b0 - fVar24) + (float)local_c0;
  local_b8 = local_res18 * (fVar28 - local_b8) + local_b8;
  fVar23 = local_res18 * (fVar31 - fVar23) + local_c0._4_4_;
LAB_142268543:
  auVar26._4_4_ = fVar23;
  auVar26._0_4_ = fVar24;
  auVar26._8_4_ = local_b8;
  auVar26._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar26;
  return;
}



// FUNCTION 1422685f0 GetCurrentActiveMontage body=79 status=ok
// SIG undefined GetCurrentActiveMontage(void)

longlong UAnimInstance::GetCurrentActiveMontage(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar4 = (longlong)*(int *)(param_1 + 0x80) + -1;
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x78) + lVar4 * 8);
    do {
      plVar1 = (longlong *)*plVar3;
      if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x2b) != 0.0)) {
        return *plVar1;
      }
      plVar3 = plVar3 + -1;
      bVar2 = 0 < lVar4;
      lVar4 = lVar4 + -1;
    } while (bVar2);
  }
  return 0;
}



// FUNCTION 142268640 FUN_142268640 body=108 status=ok
// SIG undefined FUN_142268640(void)

undefined8 * FUN_142268640(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 local_res8 [8];
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    iVar2 = FUN_14225e640(lVar1,(int)param_1[0x25],local_res8);
    if ((-1 < iVar2) && (iVar2 < *(int *)(lVar1 + 0x170))) {
      *param_2 = *(undefined8 *)((longlong)iVar2 * 0x58 + 0x30 + *(longlong *)(lVar1 + 0x168));
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1422686b0 GetCurrentStateName body=130 status=ok
// SIG undefined GetCurrentStateName(void)

undefined8 * UAnimInstance::GetCurrentStateName(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_142268ae0(*(undefined8 *)(param_1 + 0x10));
  if (plVar1 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    if ((-1 < param_3) && (param_3 < (int)plVar1[1])) {
      FUN_142295280(*(int *)(*(longlong *)(*plVar1 + -8 + (longlong)((int)plVar1[1] - param_3) * 8)
                            + 0x44) + param_1,param_2);
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142268740 GetCurveTypeFlag body=7 status=ok
// SIG undefined GetCurveTypeFlag(void)

bool FAnimCurveBase::GetCurveTypeFlag(longlong param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x18) & param_2) != 0;
}



// FUNCTION 142268750 FUN_142268750 body=156 status=ok
// SIG undefined FUN_142268750(void)

undefined4 FUN_142268750(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x1e0) != *(int *)(param_1 + 0x20c)) {
    lVar2 = *(longlong *)(param_1 + 0x218);
    if (*(longlong *)(param_1 + 0x218) == 0) {
      lVar2 = param_1 + 0x210;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x220) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar1 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar1 * 0x18) == param_2) {
          if (iVar1 != -1) goto LAB_1422687d3;
          break;
        }
        iVar1 = puVar4[4];
      } while (iVar1 != -1);
    }
  }
  puVar4 = (undefined4 *)0x0;
LAB_1422687d3:
  puVar3 = puVar4 + 2;
  if (puVar4 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  return *puVar3;
}



// FUNCTION 1422687f0 FUN_1422687f0 body=175 status=ok
// SIG undefined FUN_1422687f0(void)

undefined8 FUN_1422687f0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 0x1e0) != *(int *)(param_1 + 0x20c)) {
    lVar3 = *(longlong *)(param_1 + 0x218);
    if (*(longlong *)(param_1 + 0x218) == 0) {
      lVar3 = param_1 + 0x210;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x220) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        puVar5 = (undefined4 *)(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar2 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar2 * 0x18) == param_2) {
          if (iVar2 != -1) goto LAB_142268873;
          break;
        }
        iVar2 = puVar5[4];
      } while (iVar2 != -1);
    }
  }
  puVar5 = (undefined4 *)0x0;
LAB_142268873:
  puVar4 = puVar5 + 2;
  if (puVar5 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  uVar1 = *puVar4;
  *param_3 = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 1422688a0 GetFilteredData body=575 status=ok
// SIG undefined GetFilteredData(void)

ulonglong FFIRFilterTimeBased::GetFilteredData(float *param_1,ulonglong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  
  param_1[10] = param_3 + param_1[10];
  if (param_1[8] <= 0.0) {
    *param_1 = (float)param_2;
    return param_2;
  }
  fVar11 = param_1[4];
  param_1[9] = 0.0;
  iVar7 = 0;
  lVar6 = *(longlong *)(param_1 + 2);
  if (0 < (int)fVar11) {
    lVar3 = 0;
    do {
      fVar11 = param_1[10] - *(float *)(lVar3 + 4 + lVar6);
      if (param_1[8] <= fVar11 && fVar11 != param_1[8]) {
        *(undefined4 *)(lVar3 + 4 + lVar6) = 0;
      }
      lVar6 = *(longlong *)(param_1 + 2);
      if (0.0 < *(float *)(lVar3 + 4 + lVar6)) {
        param_1[9] = (float)((int)param_1[9] + 1);
      }
      fVar11 = param_1[4];
      iVar7 = iVar7 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar7 < (int)fVar11);
  }
  fVar2 = param_1[7];
  lVar3 = (longlong)(int)fVar2;
  fVar12 = fVar2;
  if (0.0 < *(float *)(lVar6 + 4 + lVar3 * 8)) {
    if (0 < (int)fVar11) {
      lVar10 = (longlong)(int)fVar11;
      fVar8 = fVar2;
      do {
        fVar12 = (float)((int)fVar8 - (int)fVar11);
        if (lVar3 < lVar10) {
          fVar12 = fVar8;
        }
        lVar4 = lVar3 - lVar10;
        if (lVar3 < lVar10) {
          lVar4 = lVar3;
        }
        if (*(float *)(lVar6 + 4 + lVar4 * 8) <= 0.0) goto LAB_1422689c8;
        fVar8 = (float)((int)fVar8 + 1);
        lVar3 = lVar3 + 1;
      } while ((int)fVar8 - (int)fVar2 < (int)fVar11);
    }
    lVar6 = (longlong)(int)param_1[4];
    fVar2 = (float)((int)param_1[4] + 5);
    param_1[4] = fVar2;
    if ((int)param_1[5] < (int)fVar2) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2);
    }
    lVar3 = *(longlong *)(param_1 + 2);
    *(undefined8 *)(lVar3 + lVar6 * 8) = 0;
    *(undefined8 *)(lVar3 + 8 + lVar6 * 8) = 0;
    *(undefined8 *)(lVar3 + 0x10 + lVar6 * 8) = 0;
    *(undefined8 *)(lVar3 + 0x18 + lVar6 * 8) = 0;
    *(undefined8 *)(lVar3 + 0x20 + lVar6 * 8) = 0;
    fVar12 = fVar11;
  }
LAB_1422689c8:
  lVar6 = *(longlong *)(param_1 + 2);
  fVar8 = 0.0;
  fVar11 = param_1[10];
  fVar2 = 0.0;
  param_1[7] = fVar12;
  *(float *)(lVar6 + (longlong)(int)fVar12 * 8) = (float)param_2;
  *(float *)(lVar6 + 4 + (longlong)(int)fVar12 * 8) = fVar11;
  fVar11 = param_1[4];
  if (0 < (int)fVar11) {
    pfVar5 = *(float **)(param_1 + 2);
    uVar9 = (ulonglong)(uint)fVar11;
    do {
      if (0.0 < pfVar5[1]) {
        fVar12 = param_1[10] - pfVar5[1];
        if (fVar12 <= param_1[8]) {
          fVar1 = param_1[6];
          if (fVar1 == 0.0) {
            fVar12 = 1.0;
          }
          else {
            if (fVar1 != 1.4013e-45) {
              if (fVar1 != 2.8026e-45) goto LAB_142268a7f;
              fVar12 = fVar12 * fVar12 * fVar12;
            }
            fVar12 = 1.0 - fVar12 / param_1[8];
            if (fVar12 <= 0.0) goto LAB_142268a7f;
          }
          fVar8 = fVar8 + fVar12;
          fVar2 = fVar2 + fVar12 * *pfVar5;
        }
      }
LAB_142268a7f:
      pfVar5 = pfVar5 + 2;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    if (0.0 < fVar8) {
      fVar2 = fVar2 / fVar8;
      goto LAB_142268a97;
    }
  }
  fVar2 = 0.0;
LAB_142268a97:
  param_1[7] = (float)((int)param_1[7] + 1);
  *param_1 = fVar2;
  if ((int)((int)fVar11 - 1U) < (int)param_1[7]) {
    param_1[7] = 0.0;
  }
  return (ulonglong)(uint)fVar2;
}



// FUNCTION 142268ae0 FUN_142268ae0 body=156 status=ok
// SIG undefined FUN_142268ae0(void)

longlong FUN_142268ae0(longlong *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar2 = UAnimClassInterface::GetPrivateStaticClass();
    lVar3 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = UDynamicClass::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (param_1[0x1f] == 0) {
        (**(code **)(*param_1 + 0x368))(param_1);
      }
      lVar3 = param_1[0x4c];
      if (lVar3 != 0) {
        uVar2 = UAnimClassInterface::GetPrivateStaticClass();
        lVar3 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar2);
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 142268b80 FUN_142268b80 body=242 status=ok
// SIG undefined FUN_142268b80(void)

undefined8 FUN_142268b80(longlong *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_142268c15;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_142268c15;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142268bff;
  }
  else {
LAB_142268bff:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142268c15:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  plVar6 = (longlong *)
           FAnimInstanceProxy::GetNodeFromIndex<FAnimNode_AssetPlayerBase>(lVar5,param_2);
  if (plVar6 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142268c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*plVar6 + 0x118))(plVar6);
    return uVar7;
  }
  return 0;
}



// FUNCTION 142268c80 FUN_142268c80 body=242 status=ok
// SIG undefined FUN_142268c80(void)

undefined8 FUN_142268c80(longlong *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_142268d15;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_142268d15;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142268cff;
  }
  else {
LAB_142268cff:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142268d15:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  plVar6 = (longlong *)
           FAnimInstanceProxy::GetNodeFromIndex<FAnimNode_AssetPlayerBase>(lVar5,param_2);
  if (plVar6 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142268d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*plVar6 + 0x128))(plVar6);
    return uVar7;
  }
  return 0;
}



// FUNCTION 142268d80 FUN_142268d80 body=293 status=ok
// SIG undefined FUN_142268d80(void)

float FUN_142268d80(longlong *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_142268e1b;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_142268e1b;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142268e05;
  }
  else {
LAB_142268e05:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142268e1b:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  plVar6 = (longlong *)
           FAnimInstanceProxy::GetNodeFromIndex<FAnimNode_AssetPlayerBase>(lVar5,param_2);
  if (plVar6 != (longlong *)0x0) {
    fVar7 = (float)(**(code **)(*plVar6 + 0x118))(plVar6);
    if (0.0 < fVar7) {
      fVar8 = (float)(**(code **)(*plVar6 + 0x128))(plVar6);
      return fVar8 / fVar7;
    }
  }
  return 0.0;
}



// FUNCTION 142268eb0 FUN_142268eb0 body=273 status=ok
// SIG undefined FUN_142268eb0(void)

float FUN_142268eb0(longlong *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_142268f46;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_142268f46;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142268f30;
  }
  else {
LAB_142268f30:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142268f46:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  plVar6 = (longlong *)
           FAnimInstanceProxy::GetNodeFromIndex<FAnimNode_AssetPlayerBase>(lVar5,param_2);
  if (plVar6 != (longlong *)0x0) {
    fVar7 = (float)(**(code **)(*plVar6 + 0x118))(plVar6);
    fVar8 = (float)(**(code **)(*plVar6 + 0x128))(plVar6);
    return fVar7 - fVar8;
  }
  return 3.4028235e+38;
}



// FUNCTION 142268fd0 FUN_142268fd0 body=293 status=ok
// SIG undefined FUN_142268fd0(void)

float FUN_142268fd0(longlong *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_142269066;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_142269066;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142269050;
  }
  else {
LAB_142269050:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142269066:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  plVar6 = (longlong *)
           FAnimInstanceProxy::GetNodeFromIndex<FAnimNode_AssetPlayerBase>(lVar5,param_2);
  if (plVar6 != (longlong *)0x0) {
    fVar7 = (float)(**(code **)(*plVar6 + 0x118))(plVar6);
    if (0.0 < fVar7) {
      fVar8 = (float)(**(code **)(*plVar6 + 0x128))(plVar6);
      return (fVar7 - fVar8) / fVar7;
    }
  }
  return 1.0;
}



// FUNCTION 142269100 FUN_142269100 body=277 status=ok
// SIG undefined FUN_142269100(void)

undefined4 FUN_142269100(longlong *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_142269194;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_142269194;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_14226917e;
  }
  else {
LAB_14226917e:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142269194:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  if (*(longlong **)(lVar5 + 0xa8) != (longlong *)0x0) {
    plVar6 = (longlong *)(**(code **)(**(longlong **)(lVar5 + 0xa8) + 0x20))();
    if (((-1 < param_2) && (param_2 < (int)plVar6[1])) &&
       (lVar5 = (longlong)
                *(int *)(*(longlong *)(*plVar6 + -8 + (longlong)((int)plVar6[1] - param_2) * 8) +
                        0x44) + *(longlong *)(lVar5 + 0xa0), lVar5 != 0)) {
      return *(undefined4 *)(lVar5 + 0x4c);
    }
  }
  return 0;
}



// FUNCTION 142269220 FUN_142269220 body=305 status=ok
// SIG undefined FUN_142269220(void)

undefined4 FUN_142269220(longlong *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_1422692b4;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_1422692b4;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_14226929e;
  }
  else {
LAB_14226929e:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_1422692b4:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  if (*(longlong **)(lVar5 + 0xa8) != (longlong *)0x0) {
    plVar6 = (longlong *)(**(code **)(**(longlong **)(lVar5 + 0xa8) + 0x20))();
    if (((-1 < param_2) && (param_2 < (int)plVar6[1])) &&
       (lVar4 = (longlong)
                *(int *)(*(longlong *)(*plVar6 + -8 + (longlong)((int)plVar6[1] - param_2) * 8) +
                        0x44) + *(longlong *)(lVar5 + 0xa0), lVar4 != 0)) {
      return *(undefined4 *)
              (*(longlong *)(lVar5 + 0x138 + (longlong)(1 - *(int *)(lVar5 + 0x1c8)) * 0x10) +
              (longlong)*(int *)(lVar4 + 0x30) * 4);
    }
  }
  return 0;
}



// FUNCTION 142269360 FUN_142269360 body=447 status=ok
// SIG undefined FUN_142269360(void)

undefined4 FUN_142269360(longlong *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  DWORD DVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  
  lVar8 = param_1[4];
  if (lVar8 == 0) goto LAB_1422693fc;
  lVar7 = FUN_142a07000();
  lVar8 = *(longlong *)(lVar8 + 0x10);
  if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) goto LAB_1422693fc;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    bVar3 = false;
    if (DVar5 == DAT_1468c21c0) goto LAB_1422693e6;
  }
  else {
LAB_1422693e6:
    bVar3 = true;
  }
  if (bVar3) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_1422693fc:
  lVar8 = param_1[0x72];
  if (lVar8 == 0) {
    lVar8 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar8;
  }
  if ((((*(longlong **)(lVar8 + 0xa8) != (longlong *)0x0) &&
       (plVar9 = (longlong *)(**(code **)(**(longlong **)(lVar8 + 0xa8) + 0x20))(), -1 < param_2))
      && (param_2 < (int)plVar9[1])) &&
     (lVar7 = (longlong)
              *(int *)(*(longlong *)(*plVar9 + -8 + (longlong)((int)plVar9[1] - param_2) * 8) + 0x44
                      ) + *(longlong *)(lVar8 + 0xa0), lVar7 != 0)) {
    iVar2 = *(int *)(lVar7 + 0x30);
    if (*(int *)(lVar8 + 0x180) != *(int *)(lVar8 + 0x1ac)) {
      lVar7 = *(longlong *)(lVar8 + 0x1b8);
      if (*(longlong *)(lVar8 + 0x1b8) == 0) {
        lVar7 = lVar8 + 0x1b0;
      }
      iVar6 = *(int *)(lVar7 + ((longlong)*(int *)(lVar8 + 0x1c0) - 1U & (longlong)iVar2) * 4);
      if (iVar6 != -1) {
        lVar7 = *(longlong *)(lVar8 + 0x178);
        do {
          lVar10 = (longlong)iVar6;
          if (*(int *)(lVar7 + lVar10 * 0x10) == iVar2) {
            if (iVar6 == -1) {
              return 0;
            }
            lVar7 = lVar10 * 0x10 + lVar7;
            if (lVar7 == 0) {
              return 0;
            }
            piVar1 = (int *)(lVar7 + 4);
            if (piVar1 == (int *)0x0) {
              return 0;
            }
            return *(undefined4 *)
                    (*(longlong *)(lVar8 + 0x158 + (longlong)(1 - *(int *)(lVar8 + 0x1c8)) * 0x10) +
                    (longlong)(*piVar1 + param_3) * 4);
          }
          iVar6 = *(int *)(lVar7 + 8 + lVar10 * 0x10);
        } while (iVar6 != -1);
      }
    }
  }
  return 0;
}



// FUNCTION 142269520 FUN_142269520 body=300 status=ok
// SIG undefined FUN_142269520(void)

undefined4 FUN_142269520(longlong *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_1422695bc;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_1422695bc;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_1422695a6;
  }
  else {
LAB_1422695a6:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_1422695bc:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  if ((((*(longlong **)(lVar5 + 0xa8) != (longlong *)0x0) &&
       (plVar6 = (longlong *)(**(code **)(**(longlong **)(lVar5 + 0xa8) + 0x20))(), -1 < param_2))
      && (param_2 < (int)plVar6[1])) &&
     ((lVar5 = (longlong)
               *(int *)(*(longlong *)(*plVar6 + -8 + (longlong)((int)plVar6[1] - param_2) * 8) +
                       0x44) + *(longlong *)(lVar5 + 0xa0), lVar5 != 0 &&
      (cVar2 = FAnimNode_StateMachine::IsValidTransitionIndex(lVar5,param_3), cVar2 != '\0')))) {
    lVar5 = FAnimNode_StateMachine::GetTransitionInfo(lVar5,param_3);
    return *(undefined4 *)(lVar5 + 0x10);
  }
  return 0;
}



// FUNCTION 142269650 FUN_142269650 body=405 status=ok
// SIG undefined FUN_142269650(void)

float FUN_142269650(longlong *param_1,int param_2,float param_3)

{
  float *pfVar1;
  bool bVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  
  lVar6 = param_1[4];
  if (lVar6 == 0) goto LAB_1422696ec;
  lVar5 = FUN_142a07000();
  lVar6 = *(longlong *)(lVar6 + 0x10);
  if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_1422696ec;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    bVar2 = false;
    if (DVar4 == DAT_1468c21c0) goto LAB_1422696d6;
  }
  else {
LAB_1422696d6:
    bVar2 = true;
  }
  if (bVar2) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_1422696ec:
  lVar6 = param_1[0x72];
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar6;
  }
  if ((((*(longlong **)(lVar6 + 0xa8) != (longlong *)0x0) &&
       (plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar6 + 0xa8) + 0x20))(), -1 < param_2))
      && (param_2 < (int)plVar7[1])) &&
     ((lVar6 = (longlong)
               *(int *)(*(longlong *)(*plVar7 + -8 + (longlong)((int)plVar7[1] - param_2) * 8) +
                       0x44) + *(longlong *)(lVar6 + 0xa0), lVar6 != 0 &&
      (cVar3 = FAnimNode_StateMachine::IsValidTransitionIndex(lVar6), cVar3 != '\0')))) {
    pfVar9 = *(float **)(lVar6 + 0x58);
    pfVar11 = pfVar9 + (longlong)*(int *)(lVar6 + 0x60) * 0x36;
    if (pfVar9 != pfVar11) {
      pfVar10 = pfVar9 + 0x22;
      do {
        pfVar8 = *(float **)(pfVar10 + -2);
        if (*(float **)(pfVar10 + -2) == (float *)0x0) {
          pfVar8 = pfVar10 + -6;
        }
        pfVar1 = pfVar8 + (int)*pfVar10;
        for (; pfVar8 != pfVar1; pfVar8 = pfVar8 + 1) {
          if (*pfVar8 == param_3) {
            return *pfVar9 / pfVar9[2];
          }
        }
        pfVar9 = pfVar9 + 0x36;
        pfVar10 = pfVar10 + 0x36;
      } while (pfVar9 != pfVar11);
    }
  }
  return 0.0;
}



// FUNCTION 142269800 FUN_142269800 body=146 status=ok
// SIG undefined FUN_142269800(void)

undefined4 FUN_142269800(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 local_38 [32];
  
  iVar4 = 0;
  plVar5 = (longlong *)(param_1 + 0x20);
  iVar3 = 0;
  iVar7 = -1;
  plVar6 = plVar5;
  do {
    iVar1 = (**(code **)(*plVar6 + 8))(plVar5);
    if (iVar4 < iVar1) {
      iVar4 = iVar1;
      iVar7 = iVar3;
    }
    iVar3 = iVar3 + 1;
    plVar5 = plVar5 + 0xe;
    plVar6 = plVar6 + 0xe;
  } while (iVar3 < 3);
  if (iVar7 == -1) {
    uVar8 = 0;
  }
  else {
    lVar2 = FRichCurve::GetLastKey((longlong)iVar7 * 0x70 + 0x20 + param_1,local_38);
    uVar8 = *(undefined4 *)(lVar2 + 4);
  }
  return uVar8;
}



// FUNCTION 1422698a0 FUN_1422698a0 body=302 status=ok
// SIG undefined FUN_1422698a0(void)

undefined8 FUN_1422698a0(longlong *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  lVar5 = param_1[4];
  if (lVar5 != 0) {
    lVar4 = FUN_142a07000();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar3 = GetCurrentThreadId();
        bVar1 = false;
        if (DVar3 == DAT_1468c21c0) goto LAB_142269923;
      }
      else {
LAB_142269923:
        bVar1 = true;
      }
      if (bVar1) {
        FUN_1423b2d70(param_1[4],1);
      }
    }
  }
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  if (*(longlong **)(lVar5 + 0xa8) != (longlong *)0x0) {
    plVar6 = (longlong *)(**(code **)(**(longlong **)(lVar5 + 0xa8) + 0x20))();
    if ((-1 < param_2) && (param_2 < (int)plVar6[1])) {
      lVar5 = (longlong)
              *(int *)(*(longlong *)(*plVar6 + -8 + (longlong)((int)plVar6[1] - param_2) * 8) + 0x44
                      ) + *(longlong *)(lVar5 + 0xa0);
      goto LAB_142269994;
    }
  }
  lVar5 = 0;
LAB_142269994:
  lVar4 = FUN_142268ae0(param_1[2]);
  if ((lVar5 == 0) || (lVar4 == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1422699d0(param_1,lVar4,lVar5);
  }
  return uVar7;
}



// FUNCTION 1422699d0 FUN_1422699d0 body=204 status=ok
// SIG undefined FUN_1422699d0(void)

longlong FUN_1422699d0(longlong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    lVar3 = FUN_142a07000();
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  if (param_1[0x72] == 0) {
    lVar4 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar4;
  }
  plVar5 = (longlong *)(**(code **)(*param_2 + 0x10))();
  iVar1 = *(int *)(param_3 + 0x30);
  if ((iVar1 < 0) || ((int)plVar5[1] <= iVar1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar4 = (longlong)iVar1 * 0x38 + *plVar5;
  }
  else {
    lVar4 = 0;
  }
  return lVar4;
}



// FUNCTION 142269aa0 FUN_142269aa0 body=411 status=ok
// SIG undefined FUN_142269aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * FUN_142269aa0(longlong param_1,void *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  void *local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78 = param_3;
  local_68 = param_2;
  plVar5 = (longlong *)FUN_142268ae0(*(undefined8 *)(param_1 + 0x10));
  uVar10 = 0;
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)((longlong)param_2 + 0x10) = 0;
    *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  }
  else {
    local_50 = (undefined1 *)0x0;
    local_48 = 0;
    local_70 = plVar5;
    plVar6 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
    plVar2 = local_78;
    uVar12 = uVar10;
    if (0 < (int)plVar6[1]) {
      do {
        lVar1 = *(longlong *)(uVar12 + *plVar6);
        if ((((lVar1 != 0) && (lVar7 = FUN_1428f58f0(), *(longlong *)(lVar1 + 0x70) == lVar7)) &&
            (*(int *)(lVar1 + 0x44) + param_1 != 0)) &&
           ((plVar8 = (longlong *)FUN_1422699d0(param_1,plVar5), uVar3 = local_48,
            plVar8 != (longlong *)0x0 && (*plVar8 == *plVar2)))) {
          lVar7 = (longlong)(int)local_48;
          lVar1 = plVar6[1];
          iVar4 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar4);
          if (local_48._4_4_ < iVar4) {
            TArray<int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (local_60,uVar3 & 0xffffffff);
          }
          puVar9 = local_60;
          if (local_50 != (undefined1 *)0x0) {
            puVar9 = local_50;
          }
          *(int *)(puVar9 + lVar7 * 4) = ((int)lVar1 - (int)uVar10) + -1;
          plVar5 = local_70;
        }
        uVar11 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar11;
        param_2 = local_68;
        uVar12 = uVar12 + 8;
      } while ((int)uVar11 < (int)plVar6[1]);
    }
    puVar9 = local_50;
    *(undefined8 *)((longlong)param_2 + 0x10) = 0;
    if (local_50 == (undefined1 *)0x0) {
      _guard_xfg_dispatch_icall_nop(param_2,local_60,0x10);
    }
    if (*(longlong *)((longlong)param_2 + 0x10) != 0) {
      FMemory::Free();
      puVar9 = local_50;
    }
    *(undefined1 **)((longlong)param_2 + 0x10) = puVar9;
    *(int *)((longlong)param_2 + 0x18) = (int)local_48;
    *(int *)((longlong)param_2 + 0x1c) = local_48._4_4_;
  }
  return param_2;
}



// FUNCTION 142269c40 FUN_142269c40 body=58 status=ok
// SIG undefined FUN_142269c40(void)

void FUN_142269c40(longlong param_1)

{
  FMarkerSyncData::GetMarkerIndicesForTime(param_1 + 0x148);
  return;
}



// FUNCTION 142269c80 FUN_142269c80 body=59 status=ok
// SIG undefined FUN_142269c80(void)

undefined8 FUN_142269c80(longlong param_1,undefined8 param_2)

{
  FMarkerSyncData::GetMarkerSyncPositionfromMarkerIndicies(param_1 + 0x148);
  return param_2;
}



// FUNCTION 142269cc0 FUN_142269cc0 body=212 status=ok
// SIG undefined FUN_142269cc0(void)

int FUN_142269cc0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar4 = 0;
  plVar5 = (longlong *)(param_1 + 0x40);
  lVar7 = 3;
  iVar3 = 0;
  lVar8 = 3;
  plVar6 = plVar5;
  do {
    iVar1 = (**(code **)(*plVar6 + 8))(plVar5);
    plVar6 = plVar6 + 0xe;
    if (iVar1 <= iVar3) {
      iVar1 = iVar3;
    }
    iVar3 = iVar1;
    plVar5 = plVar5 + 0xe;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  plVar5 = (longlong *)(param_1 + 0x1b0);
  iVar1 = 0;
  if (iVar3 < 1) {
    iVar3 = iVar4;
  }
  lVar8 = 3;
  plVar6 = plVar5;
  do {
    iVar2 = (**(code **)(*plVar6 + 8))(plVar5);
    plVar6 = plVar6 + 0xe;
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    iVar1 = iVar2;
    plVar5 = plVar5 + 0xe;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if (iVar1 <= iVar3) {
    iVar1 = iVar3;
  }
  plVar6 = (longlong *)(param_1 + 800);
  plVar5 = plVar6;
  do {
    iVar3 = (**(code **)(*plVar5 + 8))(plVar6);
    plVar5 = plVar5 + 0xe;
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    iVar4 = iVar3;
    plVar6 = plVar6 + 0xe;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  if (iVar4 <= iVar1) {
    iVar4 = iVar1;
  }
  return iVar4;
}



// FUNCTION 142269da0 GetMontageInstanceForID body=49 status=ok
// SIG undefined GetMontageInstanceForID(void)

longlong UAnimInstance::GetMontageInstanceForID(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x78);
  plVar1 = plVar3 + *(int *)(param_1 + 0x80);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    lVar2 = *plVar3;
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x110) == param_2)) break;
    plVar3 = plVar3 + 1;
  }
  return lVar2;
}



// FUNCTION 142269de0 FUN_142269de0 body=108 status=ok
// SIG undefined FUN_142269de0(void)

undefined8 * FUN_142269de0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 local_res8 [8];
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    iVar2 = FUN_14225e640(lVar1,(int)param_1[0x25],local_res8);
    if ((-1 < iVar2) && (iVar2 < *(int *)(lVar1 + 0x170))) {
      *param_2 = *(undefined8 *)((longlong)iVar2 * 0x58 + 0x40 + *(longlong *)(lVar1 + 0x168));
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142269e50 GetNextSectionID body=35 status=ok
// SIG undefined GetNextSectionID(void)

undefined4 FAnimMontageInstance::GetNextSectionID(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0xf0))) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar1 * 4);
  }
  return 0xffffffff;
}



// FUNCTION 142269e80 GetNodeFromIndexUntyped body=145 status=ok
// SIG undefined GetNodeFromIndexUntyped(void)

longlong FAnimInstanceProxy::GetNodeFromIndexUntyped(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(longlong **)(param_1 + 0xa8) != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xa8) + 0x20))();
    param_2 = (int)plVar3[1] - param_2;
    if ((0 < param_2) && (param_2 + -1 < (int)plVar3[1])) {
      lVar1 = *(longlong *)(*plVar3 + -8 + (longlong)param_2 * 8);
      for (lVar2 = *(longlong *)(lVar1 + 0x70); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == param_3) {
          return (longlong)*(int *)(lVar1 + 0x44) + *(longlong *)(param_1 + 0xa0);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142269f20 FUN_142269f20 body=19 status=ok
// SIG undefined FUN_142269f20(void)

undefined4 FUN_142269f20(longlong *param_1,int param_2,int param_3)

{
  return *(undefined4 *)(*param_1 + (longlong)((int)param_1[2] * param_2 + param_3) * 4);
}



// FUNCTION 142269f40 FUN_142269f40 body=12 status=ok
// SIG undefined FUN_142269f40(void)

undefined8 FUN_142269f40(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x118);
}



// FUNCTION 142269f50 FUN_142269f50 body=1159 status=ok
// SIG undefined FUN_142269f50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142269f50(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  float *pfVar10;
  uint *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fStack_bc;
  
  lVar4 = param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar4) {
    lVar12 = 0;
    do {
      lVar7 = (longlong)(*(int *)(*param_3 + 4 + lVar12 * 8) << 2);
      lVar8 = *(longlong *)(param_4 + 0xf8);
      puVar11 = (uint *)((longlong)*(int *)(*param_3 + lVar12 * 8) * 0x30 + *param_2);
      pfVar10 = (float *)((longlong)*(int *)(lVar8 + 8 + lVar7 * 4) + *(longlong *)(param_4 + 0x120)
                         );
      iVar9 = *(int *)(lVar8 + 0xc + lVar7 * 4);
      if (iVar9 == 1) {
        uVar13 = *(undefined8 *)pfVar10;
        fVar26 = pfVar10[2];
        fVar25 = ((1.0 - *pfVar10 * *pfVar10) - pfVar10[1] * pfVar10[1]) - fVar26 * fVar26;
        if (fVar25 <= 0.0) {
          uVar14 = (ulonglong)(uint)fVar26;
        }
        else {
          uVar14 = CONCAT44(SQRT(fVar25),fVar26);
          uVar13 = *(undefined8 *)pfVar10;
        }
LAB_14226a369:
        *(undefined8 *)puVar11 = uVar13;
        *(ulonglong *)(puVar11 + 2) = uVar14;
      }
      else {
        if ((iVar9 < 2) || (param_5 <= 0.0)) {
          iVar9 = 0;
LAB_14226a2f4:
          lVar8 = (longlong)(iVar9 * 0xc);
          fVar26 = *(float *)(lVar8 + (longlong)pfVar10);
          fVar25 = *(float *)(lVar8 + 4 + (longlong)pfVar10);
          fVar19 = *(float *)(lVar8 + 8 + (longlong)pfVar10);
          fStack_bc = ((1.0 - fVar26 * fVar26) - fVar25 * fVar25) - fVar19 * fVar19;
          if (fStack_bc <= 0.0) {
            fStack_bc = 0.0;
          }
          else {
            fStack_bc = SQRT(fStack_bc);
          }
          uVar13 = CONCAT44(fVar25,fVar26);
          uVar14 = CONCAT44(fStack_bc,fVar19);
          goto LAB_14226a369;
        }
        iVar9 = iVar9 + -1;
        if (1.0 <= param_5) goto LAB_14226a2f4;
        fVar26 = (float)iVar9 * param_5;
        iVar6 = (int)fVar26;
        fVar25 = fVar26;
        if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar26)) {
          auVar16._4_4_ = fVar26;
          auVar16._0_4_ = fVar26;
          auVar16._8_8_ = 0;
          uVar5 = movmskps((int)lVar8,auVar16);
          fVar25 = (float)(int)(iVar6 - (uVar5 & 1));
        }
        iVar6 = iVar9;
        if ((int)fVar25 <= iVar9) {
          iVar6 = (int)fVar25;
        }
        if (*(char *)(param_4 + 0x198) == '\x01') {
          fVar26 = 0.0;
        }
        else {
          fVar26 = fVar26 - fVar25;
        }
        iVar3 = iVar9;
        if (iVar6 + 1 <= iVar9) {
          iVar3 = iVar6 + 1;
        }
        iVar9 = iVar6;
        if (iVar6 == iVar3) goto LAB_14226a2f4;
        lVar8 = (longlong)(iVar6 * 0xc);
        lVar7 = (longlong)(iVar3 * 0xc);
        fVar25 = *(float *)(lVar8 + (longlong)pfVar10);
        fVar19 = *(float *)(lVar8 + 4 + (longlong)pfVar10);
        fVar20 = *(float *)(lVar8 + 8 + (longlong)pfVar10);
        fVar17 = ((1.0 - fVar25 * fVar25) - fVar19 * fVar19) - fVar20 * fVar20;
        if (fVar17 <= 0.0) {
          fVar17 = 0.0;
        }
        else {
          fVar17 = SQRT(fVar17);
        }
        fVar22 = *(float *)(lVar7 + (longlong)pfVar10);
        fVar1 = *(float *)(lVar7 + 4 + (longlong)pfVar10);
        fVar2 = *(float *)(lVar7 + 8 + (longlong)pfVar10);
        fVar18 = ((1.0 - fVar22 * fVar22) - fVar1 * fVar1) - fVar2 * fVar2;
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        else {
          fVar18 = SQRT(fVar18);
        }
        if (fVar1 * fVar19 + fVar22 * fVar25 + fVar2 * fVar20 + fVar17 * fVar18 < 0.0) {
          fVar21 = -1.0;
        }
        else {
          fVar21 = 1.0;
        }
        fVar21 = (1.0 - fVar26) * fVar21;
        fVar18 = fVar26 * fVar18 + fVar21 * fVar17;
        fVar28 = fVar21 * fVar25 + fVar26 * fVar22;
        fVar25 = fVar21 * fVar19 + fVar26 * fVar1;
        fVar22 = fVar21 * fVar20 + fVar26 * fVar2;
        auVar15._0_4_ = fVar28 * fVar28 + fVar22 * fVar22;
        auVar15._4_4_ = fVar25 * fVar25 + fVar18 * fVar18;
        auVar15._8_4_ = fVar22 * fVar22 + fVar28 * fVar28;
        auVar15._12_4_ = fVar18 * fVar18 + fVar25 * fVar25;
        auVar27._0_4_ = auVar15._4_4_ + auVar15._0_4_;
        auVar27._4_4_ = auVar15._8_4_ + auVar15._4_4_;
        auVar27._8_4_ = auVar15._12_4_ + auVar15._8_4_;
        auVar27._12_4_ = auVar15._0_4_ + auVar15._12_4_;
        auVar16 = rsqrtps(auVar15,auVar27);
        fVar26 = auVar16._0_4_;
        fVar19 = auVar16._4_4_;
        fVar20 = auVar16._8_4_;
        fVar17 = auVar16._12_4_;
        fVar26 = (_DAT_146aeef30 - fVar26 * fVar26 * auVar27._0_4_ * _DAT_146aeef30) * fVar26 +
                 fVar26;
        fVar19 = (fRam0000000146aeef34 - fVar19 * fVar19 * auVar27._4_4_ * fRam0000000146aeef34) *
                 fVar19 + fVar19;
        fVar20 = (fRam0000000146aeef38 - fVar20 * fVar20 * auVar27._8_4_ * fRam0000000146aeef38) *
                 fVar20 + fVar20;
        fVar17 = (fRam0000000146aeef3c - fVar17 * fVar17 * auVar27._12_4_ * fRam0000000146aeef3c) *
                 fVar17 + fVar17;
        uVar5 = ((uint)(((fRam0000000146aeef34 -
                         fVar19 * fVar19 * auVar27._4_4_ * fRam0000000146aeef34) * fVar19 + fVar19)
                       * fVar25) ^ uRam0000000146aeef24) & -(uint)(1e-08 <= auVar27._4_4_) ^
                uRam0000000146aeef24;
        uVar23 = ((uint)(((fRam0000000146aeef38 -
                          fVar20 * fVar20 * auVar27._8_4_ * fRam0000000146aeef38) * fVar20 + fVar20)
                        * fVar22) ^ uRam0000000146aeef28) & -(uint)(1e-08 <= auVar27._8_4_) ^
                 uRam0000000146aeef28;
        uVar24 = ((uint)(((fRam0000000146aeef3c -
                          fVar17 * fVar17 * auVar27._12_4_ * fRam0000000146aeef3c) * fVar17 + fVar17
                         ) * fVar18) ^ uRam0000000146aeef2c) & -(uint)(1e-08 <= auVar27._12_4_) ^
                 uRam0000000146aeef2c;
        *puVar11 = ((uint)(((_DAT_146aeef30 - fVar26 * fVar26 * auVar27._0_4_ * _DAT_146aeef30) *
                            fVar26 + fVar26) * fVar28) ^ _DAT_146aeef20) &
                   -(uint)(1e-08 <= auVar27._0_4_) ^ _DAT_146aeef20;
        puVar11[1] = uVar5;
        puVar11[2] = uVar23;
        puVar11[3] = uVar24;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)lVar4);
  }
  return;
}



// FUNCTION 14226a3e0 FUN_14226a3e0 body=1044 status=ok
// SIG undefined FUN_14226a3e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14226a3e0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  float *pfVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined8 local_d8;
  ulonglong uStack_d0;
  
  lVar4 = param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar4) {
    lVar11 = 0;
    do {
      lVar7 = (longlong)(*(int *)(*param_3 + 4 + lVar11 * 8) << 2);
      lVar1 = *(longlong *)(param_4 + 0xf8);
      puVar9 = (uint *)((longlong)*(int *)(*param_3 + lVar11 * 8) * 0x30 + *param_2);
      pfVar10 = (float *)((longlong)*(int *)(lVar1 + 8 + lVar7 * 4) + *(longlong *)(param_4 + 0x120)
                         );
      iVar8 = *(int *)(lVar1 + 0xc + lVar7 * 4);
      if (iVar8 == 1) {
        fVar16 = pfVar10[2];
        fVar23 = ((1.0 - *pfVar10 * *pfVar10) - pfVar10[1] * pfVar10[1]) - fVar16 * fVar16;
        if (fVar23 <= 0.0) {
          uVar12 = *(undefined8 *)pfVar10;
          uVar13 = (ulonglong)(uint)fVar16;
        }
        else {
          uVar12 = *(undefined8 *)pfVar10;
          uVar13 = CONCAT44(SQRT(fVar23),fVar16);
        }
LAB_14226a761:
        *(undefined8 *)puVar9 = uVar12;
        *(ulonglong *)(puVar9 + 2) = uVar13;
      }
      else {
        if ((iVar8 < 2) || (param_5 <= 0.0)) {
          iVar8 = 0;
LAB_14226a743:
          FQuatFixed48NoW::ToQuat((longlong)(iVar8 * 6) + (longlong)pfVar10,&local_d8);
          uVar12 = local_d8;
          uVar13 = uStack_d0;
          goto LAB_14226a761;
        }
        iVar8 = iVar8 + -1;
        if (1.0 <= param_5) goto LAB_14226a743;
        fVar23 = (float)iVar8 * param_5;
        iVar6 = (int)fVar23;
        fVar16 = fVar23;
        if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar23)) {
          auVar15._4_4_ = fVar23;
          auVar15._0_4_ = fVar23;
          auVar15._8_8_ = 0;
          uVar5 = movmskps((int)lVar1,auVar15);
          fVar16 = (float)(int)(iVar6 - (uVar5 & 1));
        }
        iVar6 = iVar8;
        if ((int)fVar16 <= iVar8) {
          iVar6 = (int)fVar16;
        }
        if (*(char *)(param_4 + 0x198) == '\x01') {
          fVar23 = 0.0;
        }
        else {
          fVar23 = fVar23 - fVar16;
        }
        iVar3 = iVar8;
        if (iVar6 + 1 <= iVar8) {
          iVar3 = iVar6 + 1;
        }
        iVar8 = iVar6;
        if (iVar6 == iVar3) goto LAB_14226a743;
        FQuatFixed48NoW::ToQuat((longlong)(iVar6 * 6) + (longlong)pfVar10,&local_f8);
        FQuatFixed48NoW::ToQuat((longlong)(iVar3 * 6) + (longlong)pfVar10,&local_108);
        if (local_104 * local_f4 + local_108 * local_f8 + local_100 * local_f0 + local_fc * local_ec
            < 0.0) {
          fVar16 = -1.0;
        }
        else {
          fVar16 = 1.0;
        }
        fVar16 = (1.0 - fVar23) * fVar16;
        fVar20 = local_f0 * fVar16 + local_100 * fVar23;
        fVar29 = local_f8 * fVar16 + local_108 * fVar23;
        fVar24 = local_ec * fVar16 + local_fc * fVar23;
        fVar19 = local_f4 * fVar16 + local_104 * fVar23;
        auVar14._0_4_ = fVar29 * fVar29 + fVar20 * fVar20;
        auVar14._4_4_ = fVar19 * fVar19 + fVar24 * fVar24;
        auVar14._8_4_ = fVar20 * fVar20 + fVar29 * fVar29;
        auVar14._12_4_ = fVar24 * fVar24 + fVar19 * fVar19;
        fVar25 = auVar14._4_4_ + auVar14._0_4_;
        fVar26 = auVar14._8_4_ + auVar14._4_4_;
        fVar27 = auVar14._12_4_ + auVar14._8_4_;
        fVar28 = auVar14._0_4_ + auVar14._12_4_;
        auVar2._4_4_ = fVar26;
        auVar2._0_4_ = fVar25;
        auVar2._8_4_ = fVar27;
        auVar2._12_4_ = fVar28;
        auVar15 = rsqrtps(auVar14,auVar2);
        fVar16 = auVar15._0_4_;
        fVar23 = auVar15._4_4_;
        fVar17 = auVar15._8_4_;
        fVar18 = auVar15._12_4_;
        fVar16 = (_DAT_146aeef30 - fVar16 * fVar16 * fVar25 * _DAT_146aeef30) * fVar16 + fVar16;
        fVar23 = (fRam0000000146aeef34 - fVar23 * fVar23 * fVar26 * fRam0000000146aeef34) * fVar23 +
                 fVar23;
        fVar17 = (fRam0000000146aeef38 - fVar17 * fVar17 * fVar27 * fRam0000000146aeef38) * fVar17 +
                 fVar17;
        fVar18 = (fRam0000000146aeef3c - fVar18 * fVar18 * fVar28 * fRam0000000146aeef3c) * fVar18 +
                 fVar18;
        uVar5 = ((uint)(((fRam0000000146aeef34 - fVar23 * fVar23 * fVar26 * fRam0000000146aeef34) *
                         fVar23 + fVar23) * fVar19) ^ uRam0000000146aeef24) &
                -(uint)(1e-08 <= fVar26) ^ uRam0000000146aeef24;
        uVar21 = ((uint)(((fRam0000000146aeef38 - fVar17 * fVar17 * fVar27 * fRam0000000146aeef38) *
                          fVar17 + fVar17) * fVar20) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar27) ^ uRam0000000146aeef28;
        uVar22 = ((uint)(((fRam0000000146aeef3c - fVar18 * fVar18 * fVar28 * fRam0000000146aeef3c) *
                          fVar18 + fVar18) * fVar24) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar28) ^ uRam0000000146aeef2c;
        *puVar9 = ((uint)(((_DAT_146aeef30 - fVar16 * fVar16 * fVar25 * _DAT_146aeef30) * fVar16 +
                          fVar16) * fVar29) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar25) ^
                  _DAT_146aeef20;
        puVar9[1] = uVar5;
        puVar9[2] = uVar21;
        puVar9[3] = uVar22;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)lVar4);
  }
  return;
}



// FUNCTION 14226a800 FUN_14226a800 body=1115 status=ok
// SIG undefined FUN_14226a800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14226a800(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined8 local_e8;
  ulonglong uStack_e0;
  
  lVar4 = param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar4) {
    lVar11 = 0;
    do {
      lVar7 = (longlong)(*(int *)(*param_3 + 4 + lVar11 * 8) << 2);
      lVar1 = *(longlong *)(param_4 + 0xf8);
      puVar10 = (uint *)((longlong)*(int *)(*param_3 + lVar11 * 8) * 0x30 + *param_2);
      pfVar8 = (float *)((longlong)*(int *)(lVar1 + 8 + lVar7 * 4) + *(longlong *)(param_4 + 0x120))
      ;
      iVar9 = *(int *)(lVar1 + 0xc + lVar7 * 4);
      if (iVar9 == 1) {
        fVar16 = pfVar8[2];
        fVar23 = ((1.0 - *pfVar8 * *pfVar8) - pfVar8[1] * pfVar8[1]) - fVar16 * fVar16;
        if (fVar23 <= 0.0) {
          uVar12 = *(undefined8 *)pfVar8;
          uVar13 = (ulonglong)(uint)fVar16;
        }
        else {
          uVar12 = *(undefined8 *)pfVar8;
          uVar13 = CONCAT44(SQRT(fVar23),fVar16);
        }
LAB_14226abbd:
        *(undefined8 *)puVar10 = uVar12;
        *(ulonglong *)(puVar10 + 2) = uVar13;
      }
      else {
        if ((iVar9 < 2) || (param_5 <= 0.0)) {
          iVar9 = 0;
LAB_14226ab93:
          FQuatIntervalFixed32NoW::ToQuat
                    ((longlong)(iVar9 * 4) + 0x18 + (longlong)pfVar8,&local_e8,pfVar8,pfVar8 + 3);
          uVar12 = local_e8;
          uVar13 = uStack_e0;
          goto LAB_14226abbd;
        }
        iVar9 = iVar9 + -1;
        if (1.0 <= param_5) goto LAB_14226ab93;
        fVar23 = (float)iVar9 * param_5;
        iVar6 = (int)fVar23;
        fVar16 = fVar23;
        if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar23)) {
          auVar15._4_4_ = fVar23;
          auVar15._0_4_ = fVar23;
          auVar15._8_8_ = 0;
          uVar5 = movmskps((int)lVar1,auVar15);
          fVar16 = (float)(int)(iVar6 - (uVar5 & 1));
        }
        iVar6 = iVar9;
        if ((int)fVar16 <= iVar9) {
          iVar6 = (int)fVar16;
        }
        if (*(char *)(param_4 + 0x198) == '\x01') {
          fVar23 = 0.0;
        }
        else {
          fVar23 = fVar23 - fVar16;
        }
        iVar3 = iVar9;
        if (iVar6 + 1 <= iVar9) {
          iVar3 = iVar6 + 1;
        }
        iVar9 = iVar6;
        if (iVar6 == iVar3) goto LAB_14226ab93;
        FQuatIntervalFixed32NoW::ToQuat
                  ((longlong)(iVar6 * 4) + 0x18 + (longlong)pfVar8,&local_108,pfVar8,pfVar8 + 3);
        FQuatIntervalFixed32NoW::ToQuat
                  ((longlong)(iVar3 * 4) + 0x18 + (longlong)pfVar8,&local_118,pfVar8,pfVar8 + 3);
        if (local_114 * local_104 + local_118 * local_108 + local_110 * local_100 +
            local_10c * local_fc < 0.0) {
          fVar16 = -1.0;
        }
        else {
          fVar16 = 1.0;
        }
        fVar16 = (1.0 - fVar23) * fVar16;
        fVar20 = local_100 * fVar16 + local_110 * fVar23;
        fVar29 = local_108 * fVar16 + local_118 * fVar23;
        fVar24 = local_fc * fVar16 + local_10c * fVar23;
        fVar19 = local_104 * fVar16 + local_114 * fVar23;
        auVar14._0_4_ = fVar29 * fVar29 + fVar20 * fVar20;
        auVar14._4_4_ = fVar19 * fVar19 + fVar24 * fVar24;
        auVar14._8_4_ = fVar20 * fVar20 + fVar29 * fVar29;
        auVar14._12_4_ = fVar24 * fVar24 + fVar19 * fVar19;
        fVar25 = auVar14._4_4_ + auVar14._0_4_;
        fVar26 = auVar14._8_4_ + auVar14._4_4_;
        fVar27 = auVar14._12_4_ + auVar14._8_4_;
        fVar28 = auVar14._0_4_ + auVar14._12_4_;
        auVar2._4_4_ = fVar26;
        auVar2._0_4_ = fVar25;
        auVar2._8_4_ = fVar27;
        auVar2._12_4_ = fVar28;
        auVar15 = rsqrtps(auVar14,auVar2);
        fVar16 = auVar15._0_4_;
        fVar23 = auVar15._4_4_;
        fVar17 = auVar15._8_4_;
        fVar18 = auVar15._12_4_;
        fVar16 = (_DAT_146aeef30 - fVar16 * fVar16 * fVar25 * _DAT_146aeef30) * fVar16 + fVar16;
        fVar23 = (fRam0000000146aeef34 - fVar23 * fVar23 * fVar26 * fRam0000000146aeef34) * fVar23 +
                 fVar23;
        fVar17 = (fRam0000000146aeef38 - fVar17 * fVar17 * fVar27 * fRam0000000146aeef38) * fVar17 +
                 fVar17;
        fVar18 = (fRam0000000146aeef3c - fVar18 * fVar18 * fVar28 * fRam0000000146aeef3c) * fVar18 +
                 fVar18;
        uVar5 = ((uint)(((fRam0000000146aeef34 - fVar23 * fVar23 * fVar26 * fRam0000000146aeef34) *
                         fVar23 + fVar23) * fVar19) ^ uRam0000000146aeef24) &
                -(uint)(1e-08 <= fVar26) ^ uRam0000000146aeef24;
        uVar21 = ((uint)(((fRam0000000146aeef38 - fVar17 * fVar17 * fVar27 * fRam0000000146aeef38) *
                          fVar17 + fVar17) * fVar20) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar27) ^ uRam0000000146aeef28;
        uVar22 = ((uint)(((fRam0000000146aeef3c - fVar18 * fVar18 * fVar28 * fRam0000000146aeef3c) *
                          fVar18 + fVar18) * fVar24) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar28) ^ uRam0000000146aeef2c;
        *puVar10 = ((uint)(((_DAT_146aeef30 - fVar16 * fVar16 * fVar25 * _DAT_146aeef30) * fVar16 +
                           fVar16) * fVar29) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar25) ^
                   _DAT_146aeef20;
        puVar10[1] = uVar5;
        puVar10[2] = uVar21;
        puVar10[3] = uVar22;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)lVar4);
  }
  return;
}



// FUNCTION 14226ac60 FUN_14226ac60 body=1448 status=ok
// SIG undefined FUN_14226ac60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14226ac60(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  uint *puVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fStack_bc;
  
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  lVar3 = param_3[1];
  if (0 < (longlong)(int)lVar3) {
    lVar11 = 0;
    do {
      lVar6 = (longlong)(*(int *)(*param_3 + 4 + lVar11 * 8) << 2);
      lVar1 = *(longlong *)(param_4 + 0xf8);
      puVar10 = (uint *)((longlong)*(int *)(*param_3 + lVar11 * 8) * 0x30 + *param_2);
      pfVar9 = (float *)((longlong)*(int *)(lVar1 + 8 + lVar6 * 4) + *(longlong *)(param_4 + 0x120))
      ;
      iVar8 = *(int *)(lVar1 + 0xc + lVar6 * 4);
      if (iVar8 == 1) {
        uVar14 = *(undefined8 *)pfVar9;
        fVar21 = pfVar9[2];
        fVar27 = ((1.0 - *pfVar9 * *pfVar9) - pfVar9[1] * pfVar9[1]) - fVar21 * fVar21;
        if (fVar27 <= 0.0) {
          uVar15 = (ulonglong)(uint)fVar21;
        }
        else {
          uVar15 = CONCAT44(SQRT(fVar27),fVar21);
          uVar14 = *(undefined8 *)pfVar9;
        }
LAB_14226b18d:
        *(undefined8 *)puVar10 = uVar14;
        *(ulonglong *)(puVar10 + 2) = uVar15;
      }
      else {
        if ((iVar8 < 2) || (param_5 <= 0.0)) {
          iVar8 = 0;
LAB_14226b0d0:
          uVar4 = *(uint *)((longlong)(iVar8 * 4) + (longlong)pfVar9);
          fVar24 = (float)(int)((uVar4 >> 0x15) - 0x3ff);
          fVar27 = (float)(int)((uVar4 >> 10 & 0x7ff) - 0x3ff);
          fVar21 = (float)(int)((uVar4 & 0x3ff) - 0x1ff);
          fStack_bc = ((1.0 - fVar24 * fVar24 * 9.555397e-07) - fVar27 * fVar27 * 9.555397e-07) -
                      fVar21 * fVar21 * 3.829642e-06;
          if (fStack_bc <= 0.0) {
            fStack_bc = 0.0;
          }
          else {
            fStack_bc = SQRT(fStack_bc);
          }
          uVar14 = CONCAT44(fVar27 * 0.0009775171,fVar24 * 0.0009775171);
          uVar15 = CONCAT44(fStack_bc,fVar21 * 0.0019569471);
          goto LAB_14226b18d;
        }
        iVar8 = iVar8 + -1;
        if (1.0 <= param_5) goto LAB_14226b0d0;
        fVar21 = (float)iVar8 * param_5;
        iVar7 = (int)fVar21;
        fVar27 = fVar21;
        if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar21)) {
          auVar18._4_4_ = fVar21;
          auVar18._0_4_ = fVar21;
          auVar18._8_8_ = 0;
          uVar4 = movmskps((int)lVar1,auVar18);
          fVar27 = (float)(int)(iVar7 - (uVar4 & 1));
        }
        iVar7 = iVar8;
        if ((int)fVar27 <= iVar8) {
          iVar7 = (int)fVar27;
        }
        if (*(char *)(param_4 + 0x198) == '\x01') {
          fVar21 = 0.0;
        }
        else {
          fVar21 = fVar21 - fVar27;
        }
        iVar5 = iVar8;
        if (iVar7 + 1 <= iVar8) {
          iVar5 = iVar7 + 1;
        }
        iVar8 = iVar7;
        if (iVar7 == iVar5) goto LAB_14226b0d0;
        uVar4 = *(uint *)((longlong)(iVar7 * 4) + (longlong)pfVar9);
        fVar19 = (float)(int)((uVar4 >> 0x15) - 0x3ff);
        fVar24 = (float)(int)((uVar4 >> 10 & 0x7ff) - 0x3ff);
        fVar27 = (float)(int)((uVar4 & 0x3ff) - 0x1ff);
        fVar22 = ((1.0 - fVar19 * fVar19 * 9.555397e-07) - fVar24 * fVar24 * 9.555397e-07) -
                 fVar27 * fVar27 * 3.829642e-06;
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        else {
          fVar22 = SQRT(fVar22);
        }
        uVar4 = *(uint *)((longlong)(iVar5 * 4) + (longlong)pfVar9);
        fVar20 = (float)(int)((uVar4 >> 0x15) - 0x3ff);
        fVar16 = (float)(int)((uVar4 >> 10 & 0x7ff) - 0x3ff);
        fVar12 = (float)(int)((uVar4 & 0x3ff) - 0x1ff);
        fVar23 = ((1.0 - fVar20 * fVar20 * 9.555397e-07) - fVar16 * fVar16 * 9.555397e-07) -
                 fVar12 * fVar12 * 3.829642e-06;
        if (fVar23 <= 0.0) {
          fVar23 = 0.0;
        }
        else {
          fVar23 = SQRT(fVar23);
        }
        if (fVar16 * 0.0009775171 * fVar24 * 0.0009775171 +
            fVar20 * 0.0009775171 * fVar19 * 0.0009775171 +
            fVar12 * 0.0019569471 * fVar27 * 0.0019569471 + fVar23 * fVar22 < 0.0) {
          fVar13 = -1.0;
        }
        else {
          fVar13 = 1.0;
        }
        fVar13 = (1.0 - fVar21) * fVar13;
        fVar28 = fVar20 * 0.0009775171 * fVar21 + fVar19 * 0.0009775171 * fVar13;
        fVar16 = fVar16 * 0.0009775171 * fVar21 + fVar24 * 0.0009775171 * fVar13;
        fVar29 = fVar12 * 0.0019569471 * fVar21 + fVar27 * 0.0019569471 * fVar13;
        fVar22 = fVar23 * fVar21 + fVar22 * fVar13;
        auVar17._0_4_ = fVar28 * fVar28 + fVar29 * fVar29;
        auVar17._4_4_ = fVar16 * fVar16 + fVar22 * fVar22;
        auVar17._8_4_ = fVar29 * fVar29 + fVar28 * fVar28;
        auVar17._12_4_ = fVar22 * fVar22 + fVar16 * fVar16;
        fVar23 = auVar17._4_4_ + auVar17._0_4_;
        fVar12 = auVar17._8_4_ + auVar17._4_4_;
        fVar20 = auVar17._12_4_ + auVar17._8_4_;
        fVar13 = auVar17._0_4_ + auVar17._12_4_;
        auVar2._4_4_ = fVar12;
        auVar2._0_4_ = fVar23;
        auVar2._8_4_ = fVar20;
        auVar2._12_4_ = fVar13;
        auVar18 = rsqrtps(auVar17,auVar2);
        fVar21 = auVar18._0_4_;
        fVar27 = auVar18._4_4_;
        fVar24 = auVar18._8_4_;
        fVar19 = auVar18._12_4_;
        fVar21 = (_DAT_146aeef30 - fVar21 * fVar21 * fVar23 * _DAT_146aeef30) * fVar21 + fVar21;
        fVar27 = (fRam0000000146aeef34 - fVar27 * fVar27 * fVar12 * fRam0000000146aeef34) * fVar27 +
                 fVar27;
        fVar24 = (fRam0000000146aeef38 - fVar24 * fVar24 * fVar20 * fRam0000000146aeef38) * fVar24 +
                 fVar24;
        fVar19 = (fRam0000000146aeef3c - fVar19 * fVar19 * fVar13 * fRam0000000146aeef3c) * fVar19 +
                 fVar19;
        uVar4 = ((uint)(((fRam0000000146aeef34 - fVar27 * fVar27 * fVar12 * fRam0000000146aeef34) *
                         fVar27 + fVar27) * fVar16) ^ uRam0000000146aeef24) &
                -(uint)(1e-08 <= fVar12) ^ uRam0000000146aeef24;
        uVar25 = ((uint)(((fRam0000000146aeef38 - fVar24 * fVar24 * fVar20 * fRam0000000146aeef38) *
                          fVar24 + fVar24) * fVar29) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar20) ^ uRam0000000146aeef28;
        uVar26 = ((uint)(((fRam0000000146aeef3c - fVar19 * fVar19 * fVar13 * fRam0000000146aeef3c) *
                          fVar19 + fVar19) * fVar22) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar13) ^ uRam0000000146aeef2c;
        *puVar10 = ((uint)(((_DAT_146aeef30 - fVar21 * fVar21 * fVar23 * _DAT_146aeef30) * fVar21 +
                           fVar21) * fVar28) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar23) ^
                   _DAT_146aeef20;
        puVar10[1] = uVar4;
        puVar10[2] = uVar25;
        puVar10[3] = uVar26;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)lVar3);
  }
  return;
}



// FUNCTION 14226b210 FUN_14226b210 body=1050 status=ok
// SIG undefined FUN_14226b210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14226b210(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  float *pfVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined8 local_d8;
  ulonglong uStack_d0;
  
  lVar4 = param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar4) {
    lVar11 = 0;
    do {
      lVar7 = (longlong)(*(int *)(*param_3 + 4 + lVar11 * 8) << 2);
      lVar1 = *(longlong *)(param_4 + 0xf8);
      puVar9 = (uint *)((longlong)*(int *)(*param_3 + lVar11 * 8) * 0x30 + *param_2);
      pfVar10 = (float *)((longlong)*(int *)(lVar1 + 8 + lVar7 * 4) + *(longlong *)(param_4 + 0x120)
                         );
      iVar8 = *(int *)(lVar1 + 0xc + lVar7 * 4);
      if (iVar8 == 1) {
        fVar16 = pfVar10[2];
        fVar23 = ((1.0 - *pfVar10 * *pfVar10) - pfVar10[1] * pfVar10[1]) - fVar16 * fVar16;
        if (fVar23 <= 0.0) {
          uVar12 = *(undefined8 *)pfVar10;
          uVar13 = (ulonglong)(uint)fVar16;
        }
        else {
          uVar12 = *(undefined8 *)pfVar10;
          uVar13 = CONCAT44(SQRT(fVar23),fVar16);
        }
LAB_14226b597:
        *(undefined8 *)puVar9 = uVar12;
        *(ulonglong *)(puVar9 + 2) = uVar13;
      }
      else {
        if ((iVar8 < 2) || (param_5 <= 0.0)) {
          iVar8 = 0;
LAB_14226b577:
          FQuatFloat32NoW::ToQuat((longlong)(iVar8 * 4) + (longlong)pfVar10,&local_d8);
          uVar12 = local_d8;
          uVar13 = uStack_d0;
          goto LAB_14226b597;
        }
        iVar8 = iVar8 + -1;
        if (1.0 <= param_5) goto LAB_14226b577;
        fVar23 = (float)iVar8 * param_5;
        iVar6 = (int)fVar23;
        fVar16 = fVar23;
        if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar23)) {
          auVar15._4_4_ = fVar23;
          auVar15._0_4_ = fVar23;
          auVar15._8_8_ = 0;
          uVar5 = movmskps((int)lVar1,auVar15);
          fVar16 = (float)(int)(iVar6 - (uVar5 & 1));
        }
        iVar6 = iVar8;
        if ((int)fVar16 <= iVar8) {
          iVar6 = (int)fVar16;
        }
        if (*(char *)(param_4 + 0x198) == '\x01') {
          fVar23 = 0.0;
        }
        else {
          fVar23 = fVar23 - fVar16;
        }
        iVar3 = iVar8;
        if (iVar6 + 1 <= iVar8) {
          iVar3 = iVar6 + 1;
        }
        iVar8 = iVar6;
        if (iVar6 == iVar3) goto LAB_14226b577;
        FQuatFloat32NoW::ToQuat((longlong)(iVar6 * 4) + (longlong)pfVar10,&local_f8);
        FQuatFloat32NoW::ToQuat((longlong)(iVar3 * 4) + (longlong)pfVar10,&local_108);
        if (local_104 * local_f4 + local_108 * local_f8 + local_100 * local_f0 + local_fc * local_ec
            < 0.0) {
          fVar16 = -1.0;
        }
        else {
          fVar16 = 1.0;
        }
        fVar16 = (1.0 - fVar23) * fVar16;
        fVar20 = local_f0 * fVar16 + local_100 * fVar23;
        fVar29 = local_f8 * fVar16 + local_108 * fVar23;
        fVar24 = local_ec * fVar16 + local_fc * fVar23;
        fVar19 = local_f4 * fVar16 + local_104 * fVar23;
        auVar14._0_4_ = fVar29 * fVar29 + fVar20 * fVar20;
        auVar14._4_4_ = fVar19 * fVar19 + fVar24 * fVar24;
        auVar14._8_4_ = fVar20 * fVar20 + fVar29 * fVar29;
        auVar14._12_4_ = fVar24 * fVar24 + fVar19 * fVar19;
        fVar25 = auVar14._4_4_ + auVar14._0_4_;
        fVar26 = auVar14._8_4_ + auVar14._4_4_;
        fVar27 = auVar14._12_4_ + auVar14._8_4_;
        fVar28 = auVar14._0_4_ + auVar14._12_4_;
        auVar2._4_4_ = fVar26;
        auVar2._0_4_ = fVar25;
        auVar2._8_4_ = fVar27;
        auVar2._12_4_ = fVar28;
        auVar15 = rsqrtps(auVar14,auVar2);
        fVar16 = auVar15._0_4_;
        fVar23 = auVar15._4_4_;
        fVar17 = auVar15._8_4_;
        fVar18 = auVar15._12_4_;
        fVar16 = (_DAT_146aeef30 - fVar16 * fVar16 * fVar25 * _DAT_146aeef30) * fVar16 + fVar16;
        fVar23 = (fRam0000000146aeef34 - fVar23 * fVar23 * fVar26 * fRam0000000146aeef34) * fVar23 +
                 fVar23;
        fVar17 = (fRam0000000146aeef38 - fVar17 * fVar17 * fVar27 * fRam0000000146aeef38) * fVar17 +
                 fVar17;
        fVar18 = (fRam0000000146aeef3c - fVar18 * fVar18 * fVar28 * fRam0000000146aeef3c) * fVar18 +
                 fVar18;
        uVar5 = ((uint)(((fRam0000000146aeef34 - fVar23 * fVar23 * fVar26 * fRam0000000146aeef34) *
                         fVar23 + fVar23) * fVar19) ^ uRam0000000146aeef24) &
                -(uint)(1e-08 <= fVar26) ^ uRam0000000146aeef24;
        uVar21 = ((uint)(((fRam0000000146aeef38 - fVar17 * fVar17 * fVar27 * fRam0000000146aeef38) *
                          fVar17 + fVar17) * fVar20) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar27) ^ uRam0000000146aeef28;
        uVar22 = ((uint)(((fRam0000000146aeef3c - fVar18 * fVar18 * fVar28 * fRam0000000146aeef3c) *
                          fVar18 + fVar18) * fVar24) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar28) ^ uRam0000000146aeef2c;
        *puVar9 = ((uint)(((_DAT_146aeef30 - fVar16 * fVar16 * fVar25 * _DAT_146aeef30) * fVar16 +
                          fVar16) * fVar29) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar25) ^
                  _DAT_146aeef20;
        puVar9[1] = uVar5;
        puVar9[2] = uVar21;
        puVar9[3] = uVar22;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)lVar4);
  }
  return;
}



// FUNCTION 14226b630 FUN_14226b630 body=848 status=ok
// SIG undefined FUN_14226b630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14226b630(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar7 = fRam0000000146aeef3c;
  fVar6 = fRam0000000146aeef38;
  fVar5 = fRam0000000146aeef34;
  fVar4 = _DAT_146aeef30;
  lVar3 = param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar3) {
    lVar14 = 0;
    do {
      lVar13 = (longlong)(*(int *)(*param_3 + 4 + lVar14 * 8) << 2);
      lVar1 = *(longlong *)(param_4 + 0xf8);
      puVar11 = (uint *)((longlong)*(int *)(*param_3 + lVar14 * 8) * 0x30 + *param_2);
      iVar10 = *(int *)(lVar1 + 0xc + lVar13 * 4);
      if (iVar10 == 1) {
        pfVar9 = (float *)((longlong)*(int *)(lVar1 + 8 + lVar13 * 4) +
                          *(longlong *)(param_4 + 0x120));
        uVar16 = *(undefined8 *)pfVar9;
        fVar23 = pfVar9[2];
        fVar27 = ((1.0 - *pfVar9 * *pfVar9) - pfVar9[1] * pfVar9[1]) - fVar23 * fVar23;
        if (fVar27 <= 0.0) {
          uVar17 = (ulonglong)(uint)fVar23;
        }
        else {
          uVar17 = CONCAT44(SQRT(fVar27),fVar23);
          uVar16 = *(undefined8 *)pfVar9;
        }
LAB_14226b92d:
        *(undefined8 *)puVar11 = uVar16;
        *(ulonglong *)(puVar11 + 2) = uVar17;
      }
      else {
        if (((iVar10 < 2) || (param_5 <= 0.0)) || (iVar10 = iVar10 + -1, 1.0 <= param_5)) {
LAB_14226b921:
          uVar16 = CONCAT44(DAT_1464aa814,DAT_1464aa810);
          uVar17 = CONCAT44(DAT_1464aa81c,DAT_1464aa818);
          goto LAB_14226b92d;
        }
        fVar23 = (float)iVar10 * param_5;
        iVar12 = (int)fVar23;
        fVar27 = fVar23;
        if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar23)) {
          auVar19._4_4_ = fVar23;
          auVar19._0_4_ = fVar23;
          auVar19._8_8_ = 0;
          uVar8 = movmskps((int)lVar1,auVar19);
          fVar27 = (float)(int)(iVar12 - (uVar8 & 1));
        }
        iVar12 = iVar10;
        if ((int)fVar27 <= iVar10) {
          iVar12 = (int)fVar27;
        }
        if (*(char *)(param_4 + 0x198) == '\x01') {
          fVar23 = 0.0;
        }
        else {
          fVar23 = fVar23 - fVar27;
        }
        if (iVar12 + 1 <= iVar10) {
          iVar10 = iVar12 + 1;
        }
        if (iVar12 == iVar10) goto LAB_14226b921;
        if (DAT_1464aa810 * DAT_1464aa810 + DAT_1464aa814 * DAT_1464aa814 +
            DAT_1464aa818 * DAT_1464aa818 + DAT_1464aa81c * DAT_1464aa81c < 0.0) {
          fVar27 = -1.0;
        }
        else {
          fVar27 = 1.0;
        }
        fVar27 = (1.0 - fVar23) * fVar27;
        fVar15 = (fVar23 + fVar27) * DAT_1464aa814;
        fVar32 = (fVar23 + fVar27) * DAT_1464aa810;
        fVar20 = (fVar23 + fVar27) * DAT_1464aa818;
        fVar24 = (fVar23 + fVar27) * DAT_1464aa81c;
        auVar18._0_4_ = fVar32 * fVar32 + fVar20 * fVar20;
        auVar18._4_4_ = fVar15 * fVar15 + fVar24 * fVar24;
        auVar18._8_4_ = fVar20 * fVar20 + fVar32 * fVar32;
        auVar18._12_4_ = fVar24 * fVar24 + fVar15 * fVar15;
        fVar28 = auVar18._4_4_ + auVar18._0_4_;
        fVar29 = auVar18._8_4_ + auVar18._4_4_;
        fVar30 = auVar18._12_4_ + auVar18._8_4_;
        fVar31 = auVar18._0_4_ + auVar18._12_4_;
        auVar2._4_4_ = fVar29;
        auVar2._0_4_ = fVar28;
        auVar2._8_4_ = fVar30;
        auVar2._12_4_ = fVar31;
        auVar19 = rsqrtps(auVar18,auVar2);
        fVar23 = auVar19._0_4_;
        fVar27 = auVar19._4_4_;
        fVar21 = auVar19._8_4_;
        fVar22 = auVar19._12_4_;
        fVar23 = (fVar4 - fVar23 * fVar23 * fVar28 * fVar4) * fVar23 + fVar23;
        fVar27 = (fVar5 - fVar27 * fVar27 * fVar29 * fVar5) * fVar27 + fVar27;
        fVar21 = (fVar6 - fVar21 * fVar21 * fVar30 * fVar6) * fVar21 + fVar21;
        fVar22 = (fVar7 - fVar22 * fVar22 * fVar31 * fVar7) * fVar22 + fVar22;
        uVar8 = ((uint)(((fVar5 - fVar27 * fVar27 * fVar29 * fVar5) * fVar27 + fVar27) * fVar15) ^
                uRam0000000146aeef24) & -(uint)(1e-08 <= fVar29) ^ uRam0000000146aeef24;
        uVar25 = ((uint)(((fVar6 - fVar21 * fVar21 * fVar30 * fVar6) * fVar21 + fVar21) * fVar20) ^
                 uRam0000000146aeef28) & -(uint)(1e-08 <= fVar30) ^ uRam0000000146aeef28;
        uVar26 = ((uint)(((fVar7 - fVar22 * fVar22 * fVar31 * fVar7) * fVar22 + fVar22) * fVar24) ^
                 uRam0000000146aeef2c) & -(uint)(1e-08 <= fVar31) ^ uRam0000000146aeef2c;
        *puVar11 = ((uint)(((fVar4 - fVar23 * fVar23 * fVar28 * fVar4) * fVar23 + fVar23) * fVar32)
                   ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar28) ^ _DAT_146aeef20;
        puVar11[1] = uVar8;
        puVar11[2] = uVar25;
        puVar11[3] = uVar26;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)lVar3);
  }
  return;
}



// FUNCTION 14226b980 FUN_14226b980 body=936 status=ok
// SIG undefined FUN_14226b980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14226b980(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  uint *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  lVar4 = param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar4) {
    lVar13 = 0;
    do {
      lVar8 = (longlong)(*(int *)(*param_3 + 4 + lVar13 * 8) << 2);
      lVar2 = *(longlong *)(param_4 + 0xf8);
      puVar12 = (uint *)((longlong)*(int *)(*param_3 + lVar13 * 8) * 0x30 + *param_2);
      pfVar11 = (float *)((longlong)*(int *)(lVar2 + 8 + lVar8 * 4) + *(longlong *)(param_4 + 0x120)
                         );
      iVar9 = *(int *)(lVar2 + 0xc + lVar8 * 4);
      if (iVar9 == 1) {
        uVar14 = *(undefined8 *)pfVar11;
        fVar23 = pfVar11[2];
        fVar26 = ((1.0 - *pfVar11 * *pfVar11) - pfVar11[1] * pfVar11[1]) - fVar23 * fVar23;
        if (fVar26 <= 0.0) {
          uVar15 = (ulonglong)(uint)fVar23;
        }
        else {
          uVar15 = CONCAT44(SQRT(fVar26),fVar23);
          uVar14 = *(undefined8 *)pfVar11;
        }
LAB_14226bcbe:
        *(undefined8 *)puVar12 = uVar14;
        *(ulonglong *)(puVar12 + 2) = uVar15;
      }
      else {
        if ((iVar9 < 2) || (param_5 <= 0.0)) {
          iVar9 = 0;
LAB_14226bcae:
          puVar1 = (undefined8 *)((longlong)(iVar9 << 4) + (longlong)pfVar11);
          uVar14 = *puVar1;
          uVar15 = puVar1[1];
          goto LAB_14226bcbe;
        }
        iVar9 = iVar9 + -1;
        if (1.0 <= param_5) goto LAB_14226bcae;
        fVar23 = (float)iVar9 * param_5;
        iVar7 = (int)fVar23;
        fVar26 = fVar23;
        if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar23)) {
          auVar17._4_4_ = fVar23;
          auVar17._0_4_ = fVar23;
          auVar17._8_8_ = 0;
          uVar5 = movmskps((int)lVar2,auVar17);
          fVar26 = (float)(int)(iVar7 - (uVar5 & 1));
        }
        iVar7 = iVar9;
        if ((int)fVar26 <= iVar9) {
          iVar7 = (int)fVar26;
        }
        if (*(char *)(param_4 + 0x198) == '\x01') {
          fVar23 = 0.0;
        }
        else {
          fVar23 = fVar23 - fVar26;
        }
        iVar10 = iVar9;
        if (iVar7 + 1 <= iVar9) {
          iVar10 = iVar7 + 1;
        }
        iVar9 = iVar7;
        if (iVar7 == iVar10) goto LAB_14226bcae;
        pfVar6 = (float *)((longlong)(iVar7 << 4) + (longlong)pfVar11);
        pfVar11 = (float *)((longlong)(iVar10 << 4) + (longlong)pfVar11);
        if (pfVar11[1] * pfVar6[1] + *pfVar11 * *pfVar6 + pfVar11[2] * pfVar6[2] +
            pfVar11[3] * pfVar6[3] < 0.0) {
          fVar26 = -1.0;
        }
        else {
          fVar26 = 1.0;
        }
        fVar26 = (1.0 - fVar23) * fVar26;
        fVar31 = fVar26 * *pfVar6 + fVar23 * *pfVar11;
        fVar18 = fVar26 * pfVar6[1] + fVar23 * pfVar11[1];
        fVar22 = fVar26 * pfVar6[3] + fVar23 * pfVar11[3];
        fVar23 = fVar26 * pfVar6[2] + fVar23 * pfVar11[2];
        auVar16._0_4_ = fVar31 * fVar31 + fVar23 * fVar23;
        auVar16._4_4_ = fVar18 * fVar18 + fVar22 * fVar22;
        auVar16._8_4_ = fVar23 * fVar23 + fVar31 * fVar31;
        auVar16._12_4_ = fVar22 * fVar22 + fVar18 * fVar18;
        fVar27 = auVar16._4_4_ + auVar16._0_4_;
        fVar28 = auVar16._8_4_ + auVar16._4_4_;
        fVar29 = auVar16._12_4_ + auVar16._8_4_;
        fVar30 = auVar16._0_4_ + auVar16._12_4_;
        auVar3._4_4_ = fVar28;
        auVar3._0_4_ = fVar27;
        auVar3._8_4_ = fVar29;
        auVar3._12_4_ = fVar30;
        auVar17 = rsqrtps(auVar16,auVar3);
        fVar26 = auVar17._0_4_;
        fVar19 = auVar17._4_4_;
        fVar20 = auVar17._8_4_;
        fVar21 = auVar17._12_4_;
        fVar26 = (_DAT_146aeef30 - fVar26 * fVar26 * fVar27 * _DAT_146aeef30) * fVar26 + fVar26;
        fVar19 = (fRam0000000146aeef34 - fVar19 * fVar19 * fVar28 * fRam0000000146aeef34) * fVar19 +
                 fVar19;
        fVar20 = (fRam0000000146aeef38 - fVar20 * fVar20 * fVar29 * fRam0000000146aeef38) * fVar20 +
                 fVar20;
        fVar21 = (fRam0000000146aeef3c - fVar21 * fVar21 * fVar30 * fRam0000000146aeef3c) * fVar21 +
                 fVar21;
        uVar5 = ((uint)(((fRam0000000146aeef34 - fVar19 * fVar19 * fVar28 * fRam0000000146aeef34) *
                         fVar19 + fVar19) * fVar18) ^ uRam0000000146aeef24) &
                -(uint)(1e-08 <= fVar28) ^ uRam0000000146aeef24;
        uVar24 = ((uint)(((fRam0000000146aeef38 - fVar20 * fVar20 * fVar29 * fRam0000000146aeef38) *
                          fVar20 + fVar20) * fVar23) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar29) ^ uRam0000000146aeef28;
        uVar25 = ((uint)(((fRam0000000146aeef3c - fVar21 * fVar21 * fVar30 * fRam0000000146aeef3c) *
                          fVar21 + fVar21) * fVar22) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar30) ^ uRam0000000146aeef2c;
        *puVar12 = ((uint)(((_DAT_146aeef30 - fVar26 * fVar26 * fVar27 * _DAT_146aeef30) * fVar26 +
                           fVar26) * fVar31) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar27) ^
                   _DAT_146aeef20;
        puVar12[1] = uVar5;
        puVar12[2] = uVar24;
        puVar12[3] = uVar25;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)lVar4);
  }
  return;
}



// FUNCTION 14226bd30 FUN_14226bd30 body=1515 status=ok
// SIG undefined FUN_14226bd30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14226bd30(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fStack_dc;
  
  lVar2 = param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar2) {
    lVar9 = 0;
    do {
      lVar5 = (longlong)(*(int *)(*param_3 + 4 + lVar9 * 8) << 2);
      puVar10 = (uint *)((longlong)*(int *)(*param_3 + lVar9 * 8) * 0x30 + *param_2);
      pfVar8 = (float *)((longlong)*(int *)(*(longlong *)(param_4 + 0xf8) + 8 + lVar5 * 4) +
                        *(longlong *)(param_4 + 0x120));
      iVar4 = *(int *)(*(longlong *)(param_4 + 0xf8) + 0xc + lVar5 * 4);
      if (iVar4 == 1) {
        uVar15 = *(undefined8 *)pfVar8;
        fVar20 = pfVar8[2];
        fVar27 = ((1.0 - *pfVar8 * *pfVar8) - pfVar8[1] * pfVar8[1]) - fVar20 * fVar20;
        if (fVar27 <= 0.0) {
          uVar6 = (ulonglong)(uint)fVar20;
        }
        else {
          uVar6 = CONCAT44(SQRT(fVar27),fVar20);
          uVar15 = *(undefined8 *)pfVar8;
        }
LAB_14226c293:
        *(undefined8 *)puVar10 = uVar15;
        *(ulonglong *)(puVar10 + 2) = uVar6;
      }
      else {
        iVar1 = *(int *)(param_4 + 0xb8);
        iVar11 = iVar4 + -1;
        uVar6 = (longlong)pfVar8 + (longlong)(iVar4 * 0xc) + 3 & 0xfffffffffffffffc;
        if ((iVar4 < 2) || (param_5 <= 0.0)) {
          iVar11 = 0;
          iVar12 = 0;
LAB_14226c049:
          fVar20 = 0.0;
        }
        else {
          iVar12 = iVar11;
          if (1.0 <= param_5) goto LAB_14226c049;
          fVar20 = (float)(iVar1 + -1) * param_5;
          iVar3 = (int)fVar20;
          if (iVar3 < 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = iVar1 + -2;
            if (iVar3 < iVar1 + -2) {
              iVar7 = iVar3;
            }
          }
          iVar3 = (int)((float)iVar11 * param_5);
          if (iVar3 < 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = iVar11;
            if (iVar3 < iVar11) {
              iVar13 = iVar3;
            }
          }
          if (iVar1 < 0x100) {
            if (iVar7 < (int)(uint)*(byte *)((longlong)iVar13 + uVar6)) {
              iVar13 = iVar13 + -1;
              lVar5 = (longlong)iVar13;
              iVar12 = 0;
              if (0 < iVar13) {
                do {
                  iVar12 = iVar13;
                  if ((int)(uint)*(byte *)(lVar5 + uVar6) <= iVar7) break;
                  iVar13 = iVar13 + -1;
                  lVar5 = lVar5 + -1;
                  iVar12 = 0;
                } while (0 < lVar5);
              }
            }
            else {
              iVar13 = iVar13 + 1;
              for (lVar5 = (longlong)iVar13; lVar5 <= (longlong)iVar4 + -1; lVar5 = lVar5 + 1) {
                if (iVar7 < (int)(uint)*(byte *)(lVar5 + uVar6)) {
                  iVar12 = iVar13 + -1;
                  break;
                }
                iVar13 = iVar13 + 1;
              }
            }
            uVar24 = (uint)*(byte *)((longlong)iVar12 + uVar6);
            if (iVar12 + 1 <= iVar11) {
              iVar11 = iVar12 + 1;
            }
            uVar25 = (uint)*(byte *)((longlong)iVar11 + uVar6);
          }
          else {
            if (iVar7 < (int)(uint)*(ushort *)(uVar6 + (longlong)iVar13 * 2)) {
              iVar13 = iVar13 + -1;
              lVar5 = (longlong)iVar13;
              iVar12 = 0;
              if (0 < iVar13) {
                do {
                  iVar12 = iVar13;
                  if ((int)(uint)*(ushort *)(uVar6 + lVar5 * 2) <= iVar7) break;
                  iVar13 = iVar13 + -1;
                  lVar5 = lVar5 + -1;
                  iVar12 = 0;
                } while (0 < lVar5);
              }
            }
            else {
              iVar13 = iVar13 + 1;
              for (lVar5 = (longlong)iVar13; lVar5 <= iVar11; lVar5 = lVar5 + 1) {
                if (iVar7 < (int)(uint)*(ushort *)(uVar6 + lVar5 * 2)) {
                  iVar12 = iVar13 + -1;
                  break;
                }
                iVar13 = iVar13 + 1;
              }
            }
            uVar24 = (uint)*(ushort *)(uVar6 + (longlong)iVar12 * 2);
            if (iVar12 + 1 <= iVar11) {
              iVar11 = iVar12 + 1;
            }
            uVar25 = (uint)*(ushort *)(uVar6 + (longlong)iVar11 * 2);
          }
          if (*(char *)(param_4 + 0x198) == '\x01') goto LAB_14226c049;
          iVar4 = 1;
          if (0 < (int)(uVar25 - uVar24)) {
            iVar4 = uVar25 - uVar24;
          }
          fVar20 = (fVar20 - (float)uVar24) / (float)iVar4;
        }
        lVar5 = (longlong)(iVar12 * 0xc);
        if (iVar12 == iVar11) {
          fVar20 = *(float *)(lVar5 + (longlong)pfVar8);
          fVar27 = *(float *)(lVar5 + 4 + (longlong)pfVar8);
          fVar21 = *(float *)(lVar5 + 8 + (longlong)pfVar8);
          fStack_dc = ((1.0 - fVar20 * fVar20) - fVar27 * fVar27) - fVar21 * fVar21;
          if (fStack_dc <= 0.0) {
            fStack_dc = 0.0;
          }
          else {
            fStack_dc = SQRT(fStack_dc);
          }
          uVar15 = CONCAT44(fVar27,fVar20);
          uVar6 = CONCAT44(fStack_dc,fVar21);
          goto LAB_14226c293;
        }
        fVar27 = *(float *)(lVar5 + (longlong)pfVar8);
        fVar21 = *(float *)(lVar5 + 4 + (longlong)pfVar8);
        fVar22 = *(float *)(lVar5 + 8 + (longlong)pfVar8);
        lVar5 = (longlong)(iVar11 * 0xc);
        fVar18 = ((1.0 - fVar27 * fVar27) - fVar21 * fVar21) - fVar22 * fVar22;
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        else {
          fVar18 = SQRT(fVar18);
        }
        fVar23 = *(float *)(lVar5 + (longlong)pfVar8);
        fVar28 = *(float *)(lVar5 + 4 + (longlong)pfVar8);
        fVar29 = *(float *)(lVar5 + 8 + (longlong)pfVar8);
        fVar19 = ((1.0 - fVar23 * fVar23) - fVar28 * fVar28) - fVar29 * fVar29;
        if (fVar19 <= 0.0) {
          fVar19 = 0.0;
        }
        else {
          fVar19 = SQRT(fVar19);
        }
        if (fVar28 * fVar21 + fVar23 * fVar27 + fVar29 * fVar22 + fVar19 * fVar18 < 0.0) {
          fVar14 = -1.0;
        }
        else {
          fVar14 = 1.0;
        }
        fVar14 = (1.0 - fVar20) * fVar14;
        fVar30 = fVar23 * fVar20 + fVar27 * fVar14;
        fVar23 = fVar28 * fVar20 + fVar21 * fVar14;
        fVar28 = fVar29 * fVar20 + fVar22 * fVar14;
        fVar31 = fVar18 * fVar14 + fVar19 * fVar20;
        auVar16._0_4_ = fVar30 * fVar30 + fVar28 * fVar28;
        auVar16._4_4_ = fVar23 * fVar23 + fVar31 * fVar31;
        auVar16._8_4_ = fVar28 * fVar28 + fVar30 * fVar30;
        auVar16._12_4_ = fVar31 * fVar31 + fVar23 * fVar23;
        fVar18 = auVar16._4_4_ + auVar16._0_4_;
        fVar29 = auVar16._8_4_ + auVar16._4_4_;
        fVar19 = auVar16._12_4_ + auVar16._8_4_;
        fVar14 = auVar16._0_4_ + auVar16._12_4_;
        auVar17._4_4_ = fVar29;
        auVar17._0_4_ = fVar18;
        auVar17._8_4_ = fVar19;
        auVar17._12_4_ = fVar14;
        auVar17 = rsqrtps(auVar16,auVar17);
        fVar20 = auVar17._0_4_;
        fVar27 = auVar17._4_4_;
        fVar21 = auVar17._8_4_;
        fVar22 = auVar17._12_4_;
        fVar20 = (_DAT_146aeef30 - fVar20 * fVar20 * fVar18 * _DAT_146aeef30) * fVar20 + fVar20;
        fVar27 = (fRam0000000146aeef34 - fVar27 * fVar27 * fVar29 * fRam0000000146aeef34) * fVar27 +
                 fVar27;
        fVar21 = (fRam0000000146aeef38 - fVar21 * fVar21 * fVar19 * fRam0000000146aeef38) * fVar21 +
                 fVar21;
        fVar22 = (fRam0000000146aeef3c - fVar22 * fVar22 * fVar14 * fRam0000000146aeef3c) * fVar22 +
                 fVar22;
        uVar24 = ((uint)(((fRam0000000146aeef34 - fVar27 * fVar27 * fVar29 * fRam0000000146aeef34) *
                          fVar27 + fVar27) * fVar23) ^ uRam0000000146aeef24) &
                 -(uint)(1e-08 <= fVar29) ^ uRam0000000146aeef24;
        uVar25 = ((uint)(((fRam0000000146aeef38 - fVar21 * fVar21 * fVar19 * fRam0000000146aeef38) *
                          fVar21 + fVar21) * fVar28) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar19) ^ uRam0000000146aeef28;
        uVar26 = ((uint)(((fRam0000000146aeef3c - fVar22 * fVar22 * fVar14 * fRam0000000146aeef3c) *
                          fVar22 + fVar22) * fVar31) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar14) ^ uRam0000000146aeef2c;
        *puVar10 = ((uint)(((_DAT_146aeef30 - fVar20 * fVar20 * fVar18 * _DAT_146aeef30) * fVar20 +
                           fVar20) * fVar30) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar18) ^
                   _DAT_146aeef20;
        puVar10[1] = uVar24;
        puVar10[2] = uVar25;
        puVar10[3] = uVar26;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)lVar2);
  }
  return;
}



// FUNCTION 14226c320 FUN_14226c320 body=1350 status=ok
// SIG undefined FUN_14226c320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14226c320(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
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
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined8 local_d8;
  ulonglong uStack_d0;
  
  lVar2 = param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar2) {
    lVar13 = 0;
    do {
      lVar5 = (longlong)(*(int *)(*param_3 + 4 + lVar13 * 8) << 2);
      puVar9 = (uint *)((longlong)*(int *)(*param_3 + lVar13 * 8) * 0x30 + *param_2);
      pfVar10 = (float *)((longlong)*(int *)(*(longlong *)(param_4 + 0xf8) + 8 + lVar5 * 4) +
                         *(longlong *)(param_4 + 0x120));
      iVar4 = *(int *)(*(longlong *)(param_4 + 0xf8) + 0xc + lVar5 * 4);
      if (iVar4 == 1) {
        fVar17 = pfVar10[2];
        fVar25 = ((1.0 - *pfVar10 * *pfVar10) - pfVar10[1] * pfVar10[1]) - fVar17 * fVar17;
        if (fVar25 <= 0.0) {
          uVar14 = *(undefined8 *)pfVar10;
          uVar6 = (ulonglong)(uint)fVar17;
        }
        else {
          uVar14 = *(undefined8 *)pfVar10;
          uVar6 = CONCAT44(SQRT(fVar25),fVar17);
        }
LAB_14226c7d3:
        *(undefined8 *)puVar9 = uVar14;
        *(ulonglong *)(puVar9 + 2) = uVar6;
      }
      else {
        iVar1 = *(int *)(param_4 + 0xb8);
        iVar8 = iVar4 + -1;
        uVar6 = (longlong)pfVar10 + (longlong)(iVar4 * 6) + 3 & 0xfffffffffffffffc;
        if ((iVar4 < 2) || (param_5 <= 0.0)) {
          iVar8 = 0;
          iVar11 = 0;
LAB_14226c636:
          fVar17 = 0.0;
        }
        else {
          iVar11 = iVar8;
          if (1.0 <= param_5) goto LAB_14226c636;
          fVar17 = (float)(iVar1 + -1) * param_5;
          iVar3 = (int)fVar17;
          if (iVar3 < 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = iVar1 + -2;
            if (iVar3 < iVar1 + -2) {
              iVar7 = iVar3;
            }
          }
          iVar3 = (int)((float)iVar8 * param_5);
          if (iVar3 < 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = iVar8;
            if (iVar3 < iVar8) {
              iVar12 = iVar3;
            }
          }
          if (iVar1 < 0x100) {
            if (iVar7 < (int)(uint)*(byte *)((longlong)iVar12 + uVar6)) {
              iVar12 = iVar12 + -1;
              lVar5 = (longlong)iVar12;
              iVar11 = 0;
              if (0 < iVar12) {
                do {
                  iVar11 = iVar12;
                  if ((int)(uint)*(byte *)(lVar5 + uVar6) <= iVar7) break;
                  iVar12 = iVar12 + -1;
                  lVar5 = lVar5 + -1;
                  iVar11 = 0;
                } while (0 < lVar5);
              }
            }
            else {
              iVar12 = iVar12 + 1;
              for (lVar5 = (longlong)iVar12; lVar5 <= (longlong)iVar4 + -1; lVar5 = lVar5 + 1) {
                if (iVar7 < (int)(uint)*(byte *)(lVar5 + uVar6)) {
                  iVar11 = iVar12 + -1;
                  break;
                }
                iVar12 = iVar12 + 1;
              }
            }
            uVar22 = (uint)*(byte *)((longlong)iVar11 + uVar6);
            if (iVar11 + 1 <= iVar8) {
              iVar8 = iVar11 + 1;
            }
            uVar23 = (uint)*(byte *)((longlong)iVar8 + uVar6);
          }
          else {
            if (iVar7 < (int)(uint)*(ushort *)(uVar6 + (longlong)iVar12 * 2)) {
              iVar12 = iVar12 + -1;
              lVar5 = (longlong)iVar12;
              iVar11 = 0;
              if (0 < iVar12) {
                do {
                  iVar11 = iVar12;
                  if ((int)(uint)*(ushort *)(uVar6 + lVar5 * 2) <= iVar7) break;
                  iVar12 = iVar12 + -1;
                  lVar5 = lVar5 + -1;
                  iVar11 = 0;
                } while (0 < lVar5);
              }
            }
            else {
              iVar12 = iVar12 + 1;
              for (lVar5 = (longlong)iVar12; lVar5 <= iVar8; lVar5 = lVar5 + 1) {
                if (iVar7 < (int)(uint)*(ushort *)(uVar6 + lVar5 * 2)) {
                  iVar11 = iVar12 + -1;
                  break;
                }
                iVar12 = iVar12 + 1;
              }
            }
            uVar22 = (uint)*(ushort *)(uVar6 + (longlong)iVar11 * 2);
            if (iVar11 + 1 <= iVar8) {
              iVar8 = iVar11 + 1;
            }
            uVar23 = (uint)*(ushort *)(uVar6 + (longlong)iVar8 * 2);
          }
          if (*(char *)(param_4 + 0x198) == '\x01') goto LAB_14226c636;
          iVar4 = 1;
          if (0 < (int)(uVar23 - uVar22)) {
            iVar4 = uVar23 - uVar22;
          }
          fVar17 = (fVar17 - (float)uVar22) / (float)iVar4;
        }
        lVar5 = (longlong)(iVar11 * 6) + (longlong)pfVar10;
        if (iVar11 == iVar8) {
          FQuatFixed48NoW::ToQuat(lVar5,&local_d8);
          uVar14 = local_d8;
          uVar6 = uStack_d0;
          goto LAB_14226c7d3;
        }
        FQuatFixed48NoW::ToQuat(lVar5,&local_f8);
        FQuatFixed48NoW::ToQuat((longlong)(iVar8 * 6) + (longlong)pfVar10,&local_108);
        if (local_104 * local_f4 + local_108 * local_f8 + local_100 * local_f0 + local_fc * local_ec
            < 0.0) {
          fVar25 = -1.0;
        }
        else {
          fVar25 = 1.0;
        }
        fVar25 = (1.0 - fVar17) * fVar25;
        fVar31 = local_108 * fVar17 + local_f8 * fVar25;
        fVar20 = local_104 * fVar17 + local_f4 * fVar25;
        fVar21 = local_100 * fVar17 + local_f0 * fVar25;
        fVar26 = local_fc * fVar17 + local_ec * fVar25;
        auVar15._0_4_ = fVar31 * fVar31 + fVar21 * fVar21;
        auVar15._4_4_ = fVar20 * fVar20 + fVar26 * fVar26;
        auVar15._8_4_ = fVar21 * fVar21 + fVar31 * fVar31;
        auVar15._12_4_ = fVar26 * fVar26 + fVar20 * fVar20;
        fVar27 = auVar15._4_4_ + auVar15._0_4_;
        fVar28 = auVar15._8_4_ + auVar15._4_4_;
        fVar29 = auVar15._12_4_ + auVar15._8_4_;
        fVar30 = auVar15._0_4_ + auVar15._12_4_;
        auVar16._4_4_ = fVar28;
        auVar16._0_4_ = fVar27;
        auVar16._8_4_ = fVar29;
        auVar16._12_4_ = fVar30;
        auVar16 = rsqrtps(auVar15,auVar16);
        fVar17 = auVar16._0_4_;
        fVar25 = auVar16._4_4_;
        fVar18 = auVar16._8_4_;
        fVar19 = auVar16._12_4_;
        fVar17 = (_DAT_146aeef30 - fVar17 * fVar17 * fVar27 * _DAT_146aeef30) * fVar17 + fVar17;
        fVar25 = (fRam0000000146aeef34 - fVar25 * fVar25 * fVar28 * fRam0000000146aeef34) * fVar25 +
                 fVar25;
        fVar18 = (fRam0000000146aeef38 - fVar18 * fVar18 * fVar29 * fRam0000000146aeef38) * fVar18 +
                 fVar18;
        fVar19 = (fRam0000000146aeef3c - fVar19 * fVar19 * fVar30 * fRam0000000146aeef3c) * fVar19 +
                 fVar19;
        uVar22 = ((uint)(((fRam0000000146aeef34 - fVar25 * fVar25 * fVar28 * fRam0000000146aeef34) *
                          fVar25 + fVar25) * fVar20) ^ uRam0000000146aeef24) &
                 -(uint)(1e-08 <= fVar28) ^ uRam0000000146aeef24;
        uVar23 = ((uint)(((fRam0000000146aeef38 - fVar18 * fVar18 * fVar29 * fRam0000000146aeef38) *
                          fVar18 + fVar18) * fVar21) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar29) ^ uRam0000000146aeef28;
        uVar24 = ((uint)(((fRam0000000146aeef3c - fVar19 * fVar19 * fVar30 * fRam0000000146aeef3c) *
                          fVar19 + fVar19) * fVar26) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar30) ^ uRam0000000146aeef2c;
        *puVar9 = ((uint)(((_DAT_146aeef30 - fVar17 * fVar17 * fVar27 * _DAT_146aeef30) * fVar17 +
                          fVar17) * fVar31) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar27) ^
                  _DAT_146aeef20;
        puVar9[1] = uVar22;
        puVar9[2] = uVar23;
        puVar9[3] = uVar24;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)lVar2);
  }
  return;
}



// FUNCTION 14226c870 FUN_14226c870 body=1402 status=ok
// SIG undefined FUN_14226c870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14226c870(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint *puVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
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
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined8 local_e8;
  ulonglong uStack_e0;
  
  lVar2 = param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar2) {
    lVar13 = 0;
    do {
      lVar6 = (longlong)(*(int *)(*param_3 + 4 + lVar13 * 8) << 2);
      puVar9 = (uint *)((longlong)*(int *)(*param_3 + lVar13 * 8) * 0x30 + *param_2);
      pfVar10 = (float *)((longlong)*(int *)(*(longlong *)(param_4 + 0xf8) + 8 + lVar6 * 4) +
                         *(longlong *)(param_4 + 0x120));
      iVar4 = *(int *)(*(longlong *)(param_4 + 0xf8) + 0xc + lVar6 * 4);
      if (iVar4 == 1) {
        fVar17 = pfVar10[2];
        fVar25 = ((1.0 - *pfVar10 * *pfVar10) - pfVar10[1] * pfVar10[1]) - fVar17 * fVar17;
        if (fVar25 <= 0.0) {
          uVar14 = *(undefined8 *)pfVar10;
          uVar7 = (ulonglong)(uint)fVar17;
        }
        else {
          uVar14 = *(undefined8 *)pfVar10;
          uVar7 = CONCAT44(SQRT(fVar25),fVar17);
        }
LAB_14226cd4d:
        *(undefined8 *)puVar9 = uVar14;
        *(ulonglong *)(puVar9 + 2) = uVar7;
      }
      else {
        iVar1 = *(int *)(param_4 + 0xb8);
        iVar8 = iVar4 + -1;
        uVar7 = (longlong)pfVar10 + (longlong)(iVar4 * 4) + 0x1b & 0xfffffffffffffffc;
        if ((iVar4 < 2) || (param_5 <= 0.0)) {
          iVar8 = 0;
          iVar11 = 0;
LAB_14226cb96:
          fVar17 = 0.0;
        }
        else {
          iVar11 = iVar8;
          if (1.0 <= param_5) goto LAB_14226cb96;
          fVar17 = (float)(iVar1 + -1) * param_5;
          iVar3 = (int)fVar17;
          if (iVar3 < 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar1 + -2;
            if (iVar3 < iVar1 + -2) {
              iVar5 = iVar3;
            }
          }
          iVar3 = (int)((float)iVar8 * param_5);
          if (iVar3 < 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = iVar8;
            if (iVar3 < iVar8) {
              iVar12 = iVar3;
            }
          }
          if (iVar1 < 0x100) {
            if (iVar5 < (int)(uint)*(byte *)((longlong)iVar12 + uVar7)) {
              iVar12 = iVar12 + -1;
              lVar6 = (longlong)iVar12;
              iVar11 = 0;
              if (0 < iVar12) {
                do {
                  iVar11 = iVar12;
                  if ((int)(uint)*(byte *)(lVar6 + uVar7) <= iVar5) break;
                  iVar12 = iVar12 + -1;
                  lVar6 = lVar6 + -1;
                  iVar11 = 0;
                } while (0 < lVar6);
              }
            }
            else {
              iVar12 = iVar12 + 1;
              for (lVar6 = (longlong)iVar12; lVar6 <= (longlong)iVar4 + -1; lVar6 = lVar6 + 1) {
                if (iVar5 < (int)(uint)*(byte *)(lVar6 + uVar7)) {
                  iVar11 = iVar12 + -1;
                  break;
                }
                iVar12 = iVar12 + 1;
              }
            }
            uVar22 = (uint)*(byte *)((longlong)iVar11 + uVar7);
            if (iVar11 + 1 <= iVar8) {
              iVar8 = iVar11 + 1;
            }
            uVar23 = (uint)*(byte *)((longlong)iVar8 + uVar7);
          }
          else {
            if (iVar5 < (int)(uint)*(ushort *)(uVar7 + (longlong)iVar12 * 2)) {
              iVar12 = iVar12 + -1;
              lVar6 = (longlong)iVar12;
              iVar11 = 0;
              if (0 < iVar12) {
                do {
                  iVar11 = iVar12;
                  if ((int)(uint)*(ushort *)(uVar7 + lVar6 * 2) <= iVar5) break;
                  iVar12 = iVar12 + -1;
                  lVar6 = lVar6 + -1;
                  iVar11 = 0;
                } while (0 < lVar6);
              }
            }
            else {
              iVar12 = iVar12 + 1;
              for (lVar6 = (longlong)iVar12; lVar6 <= iVar8; lVar6 = lVar6 + 1) {
                if (iVar5 < (int)(uint)*(ushort *)(uVar7 + lVar6 * 2)) {
                  iVar11 = iVar12 + -1;
                  break;
                }
                iVar12 = iVar12 + 1;
              }
            }
            uVar22 = (uint)*(ushort *)(uVar7 + (longlong)iVar11 * 2);
            if (iVar11 + 1 <= iVar8) {
              iVar8 = iVar11 + 1;
            }
            uVar23 = (uint)*(ushort *)(uVar7 + (longlong)iVar8 * 2);
          }
          if (*(char *)(param_4 + 0x198) == '\x01') goto LAB_14226cb96;
          iVar4 = 1;
          if (0 < (int)(uVar23 - uVar22)) {
            iVar4 = uVar23 - uVar22;
          }
          fVar17 = (fVar17 - (float)uVar22) / (float)iVar4;
        }
        lVar6 = (longlong)(iVar11 * 4) + 0x18 + (longlong)pfVar10;
        if (iVar11 == iVar8) {
          FQuatIntervalFixed32NoW::ToQuat(lVar6,&local_e8,pfVar10);
          uVar14 = local_e8;
          uVar7 = uStack_e0;
          goto LAB_14226cd4d;
        }
        FQuatIntervalFixed32NoW::ToQuat(lVar6,&local_108,pfVar10);
        FQuatIntervalFixed32NoW::ToQuat
                  ((longlong)(iVar8 * 4) + 0x18 + (longlong)pfVar10,&local_118,pfVar10);
        if (local_114 * local_104 + local_118 * local_108 + local_110 * local_100 +
            local_10c * local_fc < 0.0) {
          fVar25 = -1.0;
        }
        else {
          fVar25 = 1.0;
        }
        fVar25 = (1.0 - fVar17) * fVar25;
        fVar31 = local_118 * fVar17 + local_108 * fVar25;
        fVar20 = local_114 * fVar17 + local_104 * fVar25;
        fVar21 = local_110 * fVar17 + local_100 * fVar25;
        fVar26 = local_10c * fVar17 + local_fc * fVar25;
        auVar15._0_4_ = fVar31 * fVar31 + fVar21 * fVar21;
        auVar15._4_4_ = fVar20 * fVar20 + fVar26 * fVar26;
        auVar15._8_4_ = fVar21 * fVar21 + fVar31 * fVar31;
        auVar15._12_4_ = fVar26 * fVar26 + fVar20 * fVar20;
        fVar27 = auVar15._4_4_ + auVar15._0_4_;
        fVar28 = auVar15._8_4_ + auVar15._4_4_;
        fVar29 = auVar15._12_4_ + auVar15._8_4_;
        fVar30 = auVar15._0_4_ + auVar15._12_4_;
        auVar16._4_4_ = fVar28;
        auVar16._0_4_ = fVar27;
        auVar16._8_4_ = fVar29;
        auVar16._12_4_ = fVar30;
        auVar16 = rsqrtps(auVar15,auVar16);
        fVar17 = auVar16._0_4_;
        fVar25 = auVar16._4_4_;
        fVar18 = auVar16._8_4_;
        fVar19 = auVar16._12_4_;
        fVar17 = (_DAT_146aeef30 - fVar17 * fVar17 * fVar27 * _DAT_146aeef30) * fVar17 + fVar17;
        fVar25 = (fRam0000000146aeef34 - fVar25 * fVar25 * fVar28 * fRam0000000146aeef34) * fVar25 +
                 fVar25;
        fVar18 = (fRam0000000146aeef38 - fVar18 * fVar18 * fVar29 * fRam0000000146aeef38) * fVar18 +
                 fVar18;
        fVar19 = (fRam0000000146aeef3c - fVar19 * fVar19 * fVar30 * fRam0000000146aeef3c) * fVar19 +
                 fVar19;
        uVar22 = ((uint)(((fRam0000000146aeef34 - fVar25 * fVar25 * fVar28 * fRam0000000146aeef34) *
                          fVar25 + fVar25) * fVar20) ^ uRam0000000146aeef24) &
                 -(uint)(1e-08 <= fVar28) ^ uRam0000000146aeef24;
        uVar23 = ((uint)(((fRam0000000146aeef38 - fVar18 * fVar18 * fVar29 * fRam0000000146aeef38) *
                          fVar18 + fVar18) * fVar21) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar29) ^ uRam0000000146aeef28;
        uVar24 = ((uint)(((fRam0000000146aeef3c - fVar19 * fVar19 * fVar30 * fRam0000000146aeef3c) *
                          fVar19 + fVar19) * fVar26) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar30) ^ uRam0000000146aeef2c;
        *puVar9 = ((uint)(((_DAT_146aeef30 - fVar17 * fVar17 * fVar27 * _DAT_146aeef30) * fVar17 +
                          fVar17) * fVar31) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar27) ^
                  _DAT_146aeef20;
        puVar9[1] = uVar22;
        puVar9[2] = uVar23;
        puVar9[3] = uVar24;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)lVar2);
  }
  return;
}



// FUNCTION 14226cdf0 FUN_14226cdf0 body=1821 status=ok
// SIG undefined FUN_14226cdf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14226cdf0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *puVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fStack_dc;
  
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  lVar2 = param_3[1];
  if (0 < (longlong)(int)lVar2) {
    lVar8 = 0;
    do {
      lVar6 = (longlong)(*(int *)(*param_3 + 4 + lVar8 * 8) << 2);
      puVar9 = (uint *)((longlong)*(int *)(*param_3 + lVar8 * 8) * 0x30 + *param_2);
      pfVar10 = (float *)((longlong)*(int *)(*(longlong *)(param_4 + 0xf8) + 8 + lVar6 * 4) +
                         *(longlong *)(param_4 + 0x120));
      iVar4 = *(int *)(*(longlong *)(param_4 + 0xf8) + 0xc + lVar6 * 4);
      if (iVar4 == 1) {
        uVar16 = *(undefined8 *)pfVar10;
        fVar23 = pfVar10[2];
        fVar29 = ((1.0 - *pfVar10 * *pfVar10) - pfVar10[1] * pfVar10[1]) - fVar23 * fVar23;
        if (fVar29 <= 0.0) {
          uVar7 = (ulonglong)(uint)fVar23;
        }
        else {
          uVar7 = CONCAT44(SQRT(fVar29),fVar23);
          uVar16 = *(undefined8 *)pfVar10;
        }
LAB_14226d47c:
        *(undefined8 *)puVar9 = uVar16;
        *(ulonglong *)(puVar9 + 2) = uVar7;
      }
      else {
        iVar1 = *(int *)(param_4 + 0xb8);
        iVar11 = iVar4 + -1;
        uVar7 = (longlong)pfVar10 + (longlong)(iVar4 * 4) + 3 & 0xfffffffffffffffc;
        if ((iVar4 < 2) || (param_5 <= 0.0)) {
          iVar11 = 0;
          iVar12 = 0;
LAB_14226d129:
          fVar23 = 0.0;
        }
        else {
          iVar12 = iVar11;
          if (1.0 <= param_5) goto LAB_14226d129;
          fVar23 = (float)(iVar1 + -1) * param_5;
          iVar3 = (int)fVar23;
          if (iVar3 < 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar1 + -2;
            if (iVar3 < iVar1 + -2) {
              iVar5 = iVar3;
            }
          }
          iVar3 = (int)((float)iVar11 * param_5);
          if (iVar3 < 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = iVar11;
            if (iVar3 < iVar11) {
              iVar13 = iVar3;
            }
          }
          if (iVar1 < 0x100) {
            if (iVar5 < (int)(uint)*(byte *)((longlong)iVar13 + uVar7)) {
              iVar13 = iVar13 + -1;
              lVar6 = (longlong)iVar13;
              iVar12 = 0;
              if (0 < iVar13) {
                do {
                  iVar12 = iVar13;
                  if ((int)(uint)*(byte *)(lVar6 + uVar7) <= iVar5) break;
                  iVar13 = iVar13 + -1;
                  lVar6 = lVar6 + -1;
                  iVar12 = 0;
                } while (0 < lVar6);
              }
            }
            else {
              iVar13 = iVar13 + 1;
              for (lVar6 = (longlong)iVar13; lVar6 <= (longlong)iVar4 + -1; lVar6 = lVar6 + 1) {
                if (iVar5 < (int)(uint)*(byte *)(lVar6 + uVar7)) {
                  iVar12 = iVar13 + -1;
                  break;
                }
                iVar13 = iVar13 + 1;
              }
            }
            uVar26 = (uint)*(byte *)((longlong)iVar12 + uVar7);
            if (iVar12 + 1 <= iVar11) {
              iVar11 = iVar12 + 1;
            }
            uVar27 = (uint)*(byte *)((longlong)iVar11 + uVar7);
          }
          else {
            if (iVar5 < (int)(uint)*(ushort *)(uVar7 + (longlong)iVar13 * 2)) {
              iVar13 = iVar13 + -1;
              lVar6 = (longlong)iVar13;
              iVar12 = 0;
              if (0 < iVar13) {
                do {
                  iVar12 = iVar13;
                  if ((int)(uint)*(ushort *)(uVar7 + lVar6 * 2) <= iVar5) break;
                  iVar13 = iVar13 + -1;
                  lVar6 = lVar6 + -1;
                  iVar12 = 0;
                } while (0 < lVar6);
              }
            }
            else {
              iVar13 = iVar13 + 1;
              for (lVar6 = (longlong)iVar13; lVar6 <= iVar11; lVar6 = lVar6 + 1) {
                if (iVar5 < (int)(uint)*(ushort *)(uVar7 + lVar6 * 2)) {
                  iVar12 = iVar13 + -1;
                  break;
                }
                iVar13 = iVar13 + 1;
              }
            }
            uVar26 = (uint)*(ushort *)(uVar7 + (longlong)iVar12 * 2);
            if (iVar12 + 1 <= iVar11) {
              iVar11 = iVar12 + 1;
            }
            uVar27 = (uint)*(ushort *)(uVar7 + (longlong)iVar11 * 2);
          }
          if (*(char *)(param_4 + 0x198) == '\x01') goto LAB_14226d129;
          iVar4 = 1;
          if (0 < (int)(uVar27 - uVar26)) {
            iVar4 = uVar27 - uVar26;
          }
          fVar23 = (fVar23 - (float)uVar26) / (float)iVar4;
        }
        uVar26 = *(uint *)((longlong)(iVar12 * 4) + (longlong)pfVar10);
        if (iVar12 == iVar11) {
          fVar17 = (float)(int)((uVar26 >> 0x15) - 0x3ff);
          fVar29 = (float)(int)((uVar26 >> 10 & 0x7ff) - 0x3ff);
          fVar23 = (float)(int)((uVar26 & 0x3ff) - 0x1ff);
          fStack_dc = ((1.0 - fVar17 * fVar17 * 9.555397e-07) - fVar29 * fVar29 * 9.555397e-07) -
                      fVar23 * fVar23 * 3.829642e-06;
          if (fStack_dc <= 0.0) {
            fStack_dc = 0.0;
          }
          else {
            fStack_dc = SQRT(fStack_dc);
          }
          uVar16 = CONCAT44(fVar29 * 0.0009775171,fVar17 * 0.0009775171);
          uVar7 = CONCAT44(fStack_dc,fVar23 * 0.0019569471);
          goto LAB_14226d47c;
        }
        fVar21 = (float)(int)((uVar26 >> 0x15) - 0x3ff);
        fVar17 = (float)(int)((uVar26 >> 10 & 0x7ff) - 0x3ff);
        fVar29 = (float)(int)((uVar26 & 0x3ff) - 0x1ff);
        fVar24 = ((1.0 - fVar21 * fVar21 * 9.555397e-07) - fVar17 * fVar17 * 9.555397e-07) -
                 fVar29 * fVar29 * 3.829642e-06;
        if (fVar24 <= 0.0) {
          fVar24 = 0.0;
        }
        else {
          fVar24 = SQRT(fVar24);
        }
        uVar26 = *(uint *)((longlong)(iVar11 * 4) + (longlong)pfVar10);
        fVar22 = (float)(int)((uVar26 >> 0x15) - 0x3ff);
        fVar18 = (float)(int)((uVar26 >> 10 & 0x7ff) - 0x3ff);
        fVar14 = (float)(int)((uVar26 & 0x3ff) - 0x1ff);
        fVar25 = ((1.0 - fVar22 * fVar22 * 9.555397e-07) - fVar18 * fVar18 * 9.555397e-07) -
                 fVar14 * fVar14 * 3.829642e-06;
        if (fVar25 <= 0.0) {
          fVar25 = 0.0;
        }
        else {
          fVar25 = SQRT(fVar25);
        }
        if (fVar18 * 0.0009775171 * fVar17 * 0.0009775171 +
            fVar22 * 0.0009775171 * fVar21 * 0.0009775171 +
            fVar14 * 0.0019569471 * fVar29 * 0.0019569471 + fVar25 * fVar24 < 0.0) {
          fVar15 = -1.0;
        }
        else {
          fVar15 = 1.0;
        }
        fVar15 = (1.0 - fVar23) * fVar15;
        fVar31 = fVar24 * fVar15 + fVar25 * fVar23;
        fVar30 = fVar22 * 0.0009775171 * fVar23 + fVar15 * fVar21 * 0.0009775171;
        fVar24 = fVar18 * 0.0009775171 * fVar23 + fVar15 * fVar17 * 0.0009775171;
        fVar15 = fVar14 * 0.0019569471 * fVar23 + fVar15 * fVar29 * 0.0019569471;
        auVar19._0_4_ = fVar30 * fVar30 + fVar15 * fVar15;
        auVar19._4_4_ = fVar24 * fVar24 + fVar31 * fVar31;
        auVar19._8_4_ = fVar15 * fVar15 + fVar30 * fVar30;
        auVar19._12_4_ = fVar31 * fVar31 + fVar24 * fVar24;
        fVar14 = auVar19._4_4_ + auVar19._0_4_;
        fVar18 = auVar19._8_4_ + auVar19._4_4_;
        fVar22 = auVar19._12_4_ + auVar19._8_4_;
        fVar25 = auVar19._0_4_ + auVar19._12_4_;
        auVar20._4_4_ = fVar18;
        auVar20._0_4_ = fVar14;
        auVar20._8_4_ = fVar22;
        auVar20._12_4_ = fVar25;
        auVar20 = rsqrtps(auVar19,auVar20);
        fVar23 = auVar20._0_4_;
        fVar29 = auVar20._4_4_;
        fVar17 = auVar20._8_4_;
        fVar21 = auVar20._12_4_;
        fVar23 = (_DAT_146aeef30 - fVar23 * fVar23 * fVar14 * _DAT_146aeef30) * fVar23 + fVar23;
        fVar29 = (fRam0000000146aeef34 - fVar29 * fVar29 * fVar18 * fRam0000000146aeef34) * fVar29 +
                 fVar29;
        fVar17 = (fRam0000000146aeef38 - fVar17 * fVar17 * fVar22 * fRam0000000146aeef38) * fVar17 +
                 fVar17;
        fVar21 = (fRam0000000146aeef3c - fVar21 * fVar21 * fVar25 * fRam0000000146aeef3c) * fVar21 +
                 fVar21;
        uVar26 = ((uint)(((fRam0000000146aeef34 - fVar29 * fVar29 * fVar18 * fRam0000000146aeef34) *
                          fVar29 + fVar29) * fVar24) ^ uRam0000000146aeef24) &
                 -(uint)(1e-08 <= fVar18) ^ uRam0000000146aeef24;
        uVar27 = ((uint)(((fRam0000000146aeef38 - fVar17 * fVar17 * fVar22 * fRam0000000146aeef38) *
                          fVar17 + fVar17) * fVar15) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar22) ^ uRam0000000146aeef28;
        uVar28 = ((uint)(((fRam0000000146aeef3c - fVar21 * fVar21 * fVar25 * fRam0000000146aeef3c) *
                          fVar21 + fVar21) * fVar31) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar25) ^ uRam0000000146aeef2c;
        *puVar9 = ((uint)(((_DAT_146aeef30 - fVar23 * fVar23 * fVar14 * _DAT_146aeef30) * fVar23 +
                          fVar23) * fVar30) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar14) ^
                  _DAT_146aeef20;
        puVar9[1] = uVar26;
        puVar9[2] = uVar27;
        puVar9[3] = uVar28;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)lVar2);
  }
  return;
}



// FUNCTION 14226d510 FUN_14226d510 body=1354 status=ok
// SIG undefined FUN_14226d510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14226d510(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint *puVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
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
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined8 local_d8;
  ulonglong uStack_d0;
  
  lVar2 = param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar2) {
    lVar13 = 0;
    do {
      lVar6 = (longlong)(*(int *)(*param_3 + 4 + lVar13 * 8) << 2);
      puVar9 = (uint *)((longlong)*(int *)(*param_3 + lVar13 * 8) * 0x30 + *param_2);
      pfVar10 = (float *)((longlong)*(int *)(*(longlong *)(param_4 + 0xf8) + 8 + lVar6 * 4) +
                         *(longlong *)(param_4 + 0x120));
      iVar4 = *(int *)(*(longlong *)(param_4 + 0xf8) + 0xc + lVar6 * 4);
      if (iVar4 == 1) {
        fVar17 = pfVar10[2];
        fVar25 = ((1.0 - *pfVar10 * *pfVar10) - pfVar10[1] * pfVar10[1]) - fVar17 * fVar17;
        if (fVar25 <= 0.0) {
          uVar14 = *(undefined8 *)pfVar10;
          uVar7 = (ulonglong)(uint)fVar17;
        }
        else {
          uVar14 = *(undefined8 *)pfVar10;
          uVar7 = CONCAT44(SQRT(fVar25),fVar17);
        }
LAB_14226d9c7:
        *(undefined8 *)puVar9 = uVar14;
        *(ulonglong *)(puVar9 + 2) = uVar7;
      }
      else {
        iVar1 = *(int *)(param_4 + 0xb8);
        iVar8 = iVar4 + -1;
        uVar7 = (longlong)pfVar10 + (longlong)(iVar4 * 4) + 3 & 0xfffffffffffffffc;
        if ((iVar4 < 2) || (param_5 <= 0.0)) {
          iVar8 = 0;
          iVar11 = 0;
LAB_14226d826:
          fVar17 = 0.0;
        }
        else {
          iVar11 = iVar8;
          if (1.0 <= param_5) goto LAB_14226d826;
          fVar17 = (float)(iVar1 + -1) * param_5;
          iVar3 = (int)fVar17;
          if (iVar3 < 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar1 + -2;
            if (iVar3 < iVar1 + -2) {
              iVar5 = iVar3;
            }
          }
          iVar3 = (int)((float)iVar8 * param_5);
          if (iVar3 < 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = iVar8;
            if (iVar3 < iVar8) {
              iVar12 = iVar3;
            }
          }
          if (iVar1 < 0x100) {
            if (iVar5 < (int)(uint)*(byte *)((longlong)iVar12 + uVar7)) {
              iVar12 = iVar12 + -1;
              lVar6 = (longlong)iVar12;
              iVar11 = 0;
              if (0 < iVar12) {
                do {
                  iVar11 = iVar12;
                  if ((int)(uint)*(byte *)(lVar6 + uVar7) <= iVar5) break;
                  iVar12 = iVar12 + -1;
                  lVar6 = lVar6 + -1;
                  iVar11 = 0;
                } while (0 < lVar6);
              }
            }
            else {
              iVar12 = iVar12 + 1;
              for (lVar6 = (longlong)iVar12; lVar6 <= (longlong)iVar4 + -1; lVar6 = lVar6 + 1) {
                if (iVar5 < (int)(uint)*(byte *)(lVar6 + uVar7)) {
                  iVar11 = iVar12 + -1;
                  break;
                }
                iVar12 = iVar12 + 1;
              }
            }
            uVar22 = (uint)*(byte *)((longlong)iVar11 + uVar7);
            if (iVar11 + 1 <= iVar8) {
              iVar8 = iVar11 + 1;
            }
            uVar23 = (uint)*(byte *)((longlong)iVar8 + uVar7);
          }
          else {
            if (iVar5 < (int)(uint)*(ushort *)(uVar7 + (longlong)iVar12 * 2)) {
              iVar12 = iVar12 + -1;
              lVar6 = (longlong)iVar12;
              iVar11 = 0;
              if (0 < iVar12) {
                do {
                  iVar11 = iVar12;
                  if ((int)(uint)*(ushort *)(uVar7 + lVar6 * 2) <= iVar5) break;
                  iVar12 = iVar12 + -1;
                  lVar6 = lVar6 + -1;
                  iVar11 = 0;
                } while (0 < lVar6);
              }
            }
            else {
              iVar12 = iVar12 + 1;
              for (lVar6 = (longlong)iVar12; lVar6 <= iVar8; lVar6 = lVar6 + 1) {
                if (iVar5 < (int)(uint)*(ushort *)(uVar7 + lVar6 * 2)) {
                  iVar11 = iVar12 + -1;
                  break;
                }
                iVar12 = iVar12 + 1;
              }
            }
            uVar22 = (uint)*(ushort *)(uVar7 + (longlong)iVar11 * 2);
            if (iVar11 + 1 <= iVar8) {
              iVar8 = iVar11 + 1;
            }
            uVar23 = (uint)*(ushort *)(uVar7 + (longlong)iVar8 * 2);
          }
          if (*(char *)(param_4 + 0x198) == '\x01') goto LAB_14226d826;
          iVar4 = 1;
          if (0 < (int)(uVar23 - uVar22)) {
            iVar4 = uVar23 - uVar22;
          }
          fVar17 = (fVar17 - (float)uVar22) / (float)iVar4;
        }
        lVar6 = (longlong)(iVar11 * 4) + (longlong)pfVar10;
        if (iVar11 == iVar8) {
          FQuatFloat32NoW::ToQuat(lVar6,&local_d8);
          uVar14 = local_d8;
          uVar7 = uStack_d0;
          goto LAB_14226d9c7;
        }
        FQuatFloat32NoW::ToQuat(lVar6,&local_f8);
        FQuatFloat32NoW::ToQuat((longlong)(iVar8 * 4) + (longlong)pfVar10,&local_108);
        if (local_104 * local_f4 + local_108 * local_f8 + local_100 * local_f0 + local_fc * local_ec
            < 0.0) {
          fVar25 = -1.0;
        }
        else {
          fVar25 = 1.0;
        }
        fVar25 = (1.0 - fVar17) * fVar25;
        fVar31 = local_108 * fVar17 + local_f8 * fVar25;
        fVar20 = local_104 * fVar17 + local_f4 * fVar25;
        fVar21 = local_100 * fVar17 + local_f0 * fVar25;
        fVar26 = local_fc * fVar17 + local_ec * fVar25;
        auVar15._0_4_ = fVar31 * fVar31 + fVar21 * fVar21;
        auVar15._4_4_ = fVar20 * fVar20 + fVar26 * fVar26;
        auVar15._8_4_ = fVar21 * fVar21 + fVar31 * fVar31;
        auVar15._12_4_ = fVar26 * fVar26 + fVar20 * fVar20;
        fVar27 = auVar15._4_4_ + auVar15._0_4_;
        fVar28 = auVar15._8_4_ + auVar15._4_4_;
        fVar29 = auVar15._12_4_ + auVar15._8_4_;
        fVar30 = auVar15._0_4_ + auVar15._12_4_;
        auVar16._4_4_ = fVar28;
        auVar16._0_4_ = fVar27;
        auVar16._8_4_ = fVar29;
        auVar16._12_4_ = fVar30;
        auVar16 = rsqrtps(auVar15,auVar16);
        fVar17 = auVar16._0_4_;
        fVar25 = auVar16._4_4_;
        fVar18 = auVar16._8_4_;
        fVar19 = auVar16._12_4_;
        fVar17 = (_DAT_146aeef30 - fVar17 * fVar17 * fVar27 * _DAT_146aeef30) * fVar17 + fVar17;
        fVar25 = (fRam0000000146aeef34 - fVar25 * fVar25 * fVar28 * fRam0000000146aeef34) * fVar25 +
                 fVar25;
        fVar18 = (fRam0000000146aeef38 - fVar18 * fVar18 * fVar29 * fRam0000000146aeef38) * fVar18 +
                 fVar18;
        fVar19 = (fRam0000000146aeef3c - fVar19 * fVar19 * fVar30 * fRam0000000146aeef3c) * fVar19 +
                 fVar19;
        uVar22 = ((uint)(((fRam0000000146aeef34 - fVar25 * fVar25 * fVar28 * fRam0000000146aeef34) *
                          fVar25 + fVar25) * fVar20) ^ uRam0000000146aeef24) &
                 -(uint)(1e-08 <= fVar28) ^ uRam0000000146aeef24;
        uVar23 = ((uint)(((fRam0000000146aeef38 - fVar18 * fVar18 * fVar29 * fRam0000000146aeef38) *
                          fVar18 + fVar18) * fVar21) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar29) ^ uRam0000000146aeef28;
        uVar24 = ((uint)(((fRam0000000146aeef3c - fVar19 * fVar19 * fVar30 * fRam0000000146aeef3c) *
                          fVar19 + fVar19) * fVar26) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar30) ^ uRam0000000146aeef2c;
        *puVar9 = ((uint)(((_DAT_146aeef30 - fVar17 * fVar17 * fVar27 * _DAT_146aeef30) * fVar17 +
                          fVar17) * fVar31) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar27) ^
                  _DAT_146aeef20;
        puVar9[1] = uVar22;
        puVar9[2] = uVar23;
        puVar9[3] = uVar24;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)lVar2);
  }
  return;
}



// FUNCTION 14226da60 FUN_14226da60 body=1201 status=ok
// SIG undefined FUN_14226da60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14226da60(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  fVar6 = fRam0000000146aeef3c;
  fVar5 = fRam0000000146aeef38;
  fVar4 = fRam0000000146aeef34;
  fVar3 = _DAT_146aeef30;
  lVar2 = param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar2) {
    lVar13 = 0;
    do {
      lVar9 = (longlong)(*(int *)(*param_3 + 4 + lVar13 * 8) << 2);
      puVar14 = (uint *)((longlong)*(int *)(*param_3 + lVar13 * 8) * 0x30 + *param_2);
      iVar8 = *(int *)(*(longlong *)(param_4 + 0xf8) + 0xc + lVar9 * 4);
      lVar12 = (longlong)*(int *)(*(longlong *)(param_4 + 0xf8) + 8 + lVar9 * 4);
      lVar9 = *(longlong *)(param_4 + 0x120);
      if (iVar8 == 1) {
        fVar25 = *(float *)(lVar12 + lVar9);
        fVar21 = *(float *)(lVar12 + 4 + lVar9);
        fVar17 = *(float *)(lVar12 + 8 + lVar9);
        fVar29 = ((1.0 - fVar25 * fVar25) - fVar21 * fVar21) - fVar17 * fVar17;
        if (fVar29 <= 0.0) {
          uVar18 = CONCAT44(fVar21,fVar25);
          uVar10 = (ulonglong)(uint)fVar17;
        }
        else {
          uVar18 = CONCAT44(fVar21,fVar25);
          uVar10 = CONCAT44(SQRT(fVar29),fVar17);
        }
LAB_14226de9d:
        *(undefined8 *)puVar14 = uVar18;
        *(ulonglong *)(puVar14 + 2) = uVar10;
      }
      else {
        iVar1 = *(int *)(param_4 + 0xb8);
        iVar15 = iVar8 + -1;
        uVar10 = lVar9 + 3 + lVar12 & 0xfffffffffffffffc;
        if (((iVar8 < 2) || (param_5 <= 0.0)) || (1.0 <= param_5)) {
LAB_14226de91:
          uVar18 = CONCAT44(DAT_1464aa814,DAT_1464aa810);
          uVar10 = CONCAT44(DAT_1464aa81c,DAT_1464aa818);
          goto LAB_14226de9d;
        }
        fVar25 = (float)(iVar1 + -1) * param_5;
        iVar7 = (int)fVar25;
        if (iVar7 < 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = iVar1 + -2;
          if (iVar7 < iVar1 + -2) {
            iVar11 = iVar7;
          }
        }
        iVar7 = (int)((float)iVar15 * param_5);
        if (iVar7 < 0) {
          iVar16 = 0;
        }
        else {
          iVar16 = iVar15;
          if (iVar7 < iVar15) {
            iVar16 = iVar7;
          }
        }
        iVar7 = iVar15;
        if (iVar1 < 0x100) {
          if (iVar11 < (int)(uint)*(byte *)((longlong)iVar16 + uVar10)) {
            iVar16 = iVar16 + -1;
            lVar9 = (longlong)iVar16;
            iVar7 = 0;
            if (0 < iVar16) {
              do {
                iVar7 = iVar16;
                if ((int)(uint)*(byte *)(lVar9 + uVar10) <= iVar11) break;
                iVar16 = iVar16 + -1;
                lVar9 = lVar9 + -1;
                iVar7 = 0;
              } while (0 < lVar9);
            }
          }
          else {
            iVar16 = iVar16 + 1;
            for (lVar9 = (longlong)iVar16; lVar9 <= (longlong)iVar8 + -1; lVar9 = lVar9 + 1) {
              if (iVar11 < (int)(uint)*(byte *)(lVar9 + uVar10)) {
                iVar7 = iVar16 + -1;
                break;
              }
              iVar16 = iVar16 + 1;
            }
          }
          uVar26 = (uint)*(byte *)((longlong)iVar7 + uVar10);
          if (iVar7 + 1 <= iVar15) {
            iVar15 = iVar7 + 1;
          }
          uVar27 = (uint)*(byte *)((longlong)iVar15 + uVar10);
        }
        else {
          if (iVar11 < (int)(uint)*(ushort *)(uVar10 + (longlong)iVar16 * 2)) {
            iVar16 = iVar16 + -1;
            lVar9 = (longlong)iVar16;
            iVar7 = 0;
            if (0 < iVar16) {
              do {
                iVar7 = iVar16;
                if ((int)(uint)*(ushort *)(uVar10 + lVar9 * 2) <= iVar11) break;
                iVar16 = iVar16 + -1;
                lVar9 = lVar9 + -1;
                iVar7 = 0;
              } while (0 < lVar9);
            }
          }
          else {
            iVar16 = iVar16 + 1;
            for (lVar9 = (longlong)iVar16; lVar9 <= iVar15; lVar9 = lVar9 + 1) {
              if (iVar11 < (int)(uint)*(ushort *)(uVar10 + lVar9 * 2)) {
                iVar7 = iVar16 + -1;
                break;
              }
              iVar16 = iVar16 + 1;
            }
          }
          uVar26 = (uint)*(ushort *)(uVar10 + (longlong)iVar7 * 2);
          if (iVar7 + 1 <= iVar15) {
            iVar15 = iVar7 + 1;
          }
          uVar27 = (uint)*(ushort *)(uVar10 + (longlong)iVar15 * 2);
        }
        if (*(char *)(param_4 + 0x198) == '\x01') {
          fVar25 = 0.0;
        }
        else {
          iVar8 = 1;
          if (0 < (int)(uVar27 - uVar26)) {
            iVar8 = uVar27 - uVar26;
          }
          fVar25 = (fVar25 - (float)uVar26) / (float)iVar8;
        }
        if (iVar7 == iVar15) goto LAB_14226de91;
        if (DAT_1464aa814 * DAT_1464aa814 + DAT_1464aa810 * DAT_1464aa810 +
            DAT_1464aa818 * DAT_1464aa818 + DAT_1464aa81c * DAT_1464aa81c < 0.0) {
          fVar21 = -1.0;
        }
        else {
          fVar21 = 1.0;
        }
        fVar21 = (1.0 - fVar25) * fVar21;
        fVar17 = (fVar21 + fVar25) * DAT_1464aa814;
        fVar34 = (fVar21 + fVar25) * DAT_1464aa810;
        fVar29 = (fVar21 + fVar25) * DAT_1464aa818;
        fVar22 = (fVar21 + fVar25) * DAT_1464aa81c;
        auVar19._0_4_ = fVar34 * fVar34 + fVar29 * fVar29;
        auVar19._4_4_ = fVar17 * fVar17 + fVar22 * fVar22;
        auVar19._8_4_ = fVar29 * fVar29 + fVar34 * fVar34;
        auVar19._12_4_ = fVar22 * fVar22 + fVar17 * fVar17;
        fVar30 = auVar19._4_4_ + auVar19._0_4_;
        fVar31 = auVar19._8_4_ + auVar19._4_4_;
        fVar32 = auVar19._12_4_ + auVar19._8_4_;
        fVar33 = auVar19._0_4_ + auVar19._12_4_;
        auVar20._4_4_ = fVar31;
        auVar20._0_4_ = fVar30;
        auVar20._8_4_ = fVar32;
        auVar20._12_4_ = fVar33;
        auVar20 = rsqrtps(auVar19,auVar20);
        fVar25 = auVar20._0_4_;
        fVar21 = auVar20._4_4_;
        fVar23 = auVar20._8_4_;
        fVar24 = auVar20._12_4_;
        fVar25 = (fVar3 - fVar25 * fVar25 * fVar30 * fVar3) * fVar25 + fVar25;
        fVar21 = (fVar4 - fVar21 * fVar21 * fVar31 * fVar4) * fVar21 + fVar21;
        fVar23 = (fVar5 - fVar23 * fVar23 * fVar32 * fVar5) * fVar23 + fVar23;
        fVar24 = (fVar6 - fVar24 * fVar24 * fVar33 * fVar6) * fVar24 + fVar24;
        uVar26 = ((uint)(((fVar4 - fVar21 * fVar21 * fVar31 * fVar4) * fVar21 + fVar21) * fVar17) ^
                 uRam0000000146aeef24) & -(uint)(1e-08 <= fVar31) ^ uRam0000000146aeef24;
        uVar27 = ((uint)(((fVar5 - fVar23 * fVar23 * fVar32 * fVar5) * fVar23 + fVar23) * fVar29) ^
                 uRam0000000146aeef28) & -(uint)(1e-08 <= fVar32) ^ uRam0000000146aeef28;
        uVar28 = ((uint)(((fVar6 - fVar24 * fVar24 * fVar33 * fVar6) * fVar24 + fVar24) * fVar22) ^
                 uRam0000000146aeef2c) & -(uint)(1e-08 <= fVar33) ^ uRam0000000146aeef2c;
        *puVar14 = ((uint)(((fVar3 - fVar25 * fVar25 * fVar30 * fVar3) * fVar25 + fVar25) * fVar34)
                   ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar30) ^ _DAT_146aeef20;
        puVar14[1] = uVar26;
        puVar14[2] = uVar27;
        puVar14[3] = uVar28;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)lVar2);
  }
  return;
}



// FUNCTION 14226df20 FUN_14226df20 body=1294 status=ok
// SIG undefined FUN_14226df20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14226df20(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  undefined8 uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  lVar2 = param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar2) {
    lVar10 = 0;
    do {
      lVar6 = (longlong)(*(int *)(*param_3 + 4 + lVar10 * 8) << 2);
      puVar11 = (uint *)((longlong)*(int *)(*param_3 + lVar10 * 8) * 0x30 + *param_2);
      pfVar14 = (float *)((longlong)*(int *)(*(longlong *)(param_4 + 0xf8) + 8 + lVar6 * 4) +
                         *(longlong *)(param_4 + 0x120));
      iVar4 = *(int *)(*(longlong *)(param_4 + 0xf8) + 0xc + lVar6 * 4);
      if (iVar4 == 1) {
        uVar15 = *(undefined8 *)pfVar14;
        fVar19 = pfVar14[2];
        fVar26 = ((1.0 - *pfVar14 * *pfVar14) - pfVar14[1] * pfVar14[1]) - fVar19 * fVar19;
        if (fVar26 <= 0.0) {
          uVar7 = (ulonglong)(uint)fVar19;
        }
        else {
          uVar7 = CONCAT44(SQRT(fVar26),fVar19);
          uVar15 = *(undefined8 *)pfVar14;
        }
LAB_14226e3a6:
        *(undefined8 *)puVar11 = uVar15;
        *(ulonglong *)(puVar11 + 2) = uVar7;
      }
      else {
        iVar1 = *(int *)(param_4 + 0xb8);
        iVar12 = iVar4 + -1;
        uVar7 = (longlong)pfVar14 + (longlong)(iVar4 << 4) + 3 & 0xfffffffffffffffc;
        if ((iVar4 < 2) || (param_5 <= 0.0)) {
          iVar12 = 0;
          iVar13 = 0;
LAB_14226e228:
          fVar19 = 0.0;
        }
        else {
          iVar13 = iVar12;
          if (1.0 <= param_5) goto LAB_14226e228;
          fVar19 = (float)(iVar1 + -1) * param_5;
          iVar3 = (int)fVar19;
          if (iVar3 < 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = iVar1 + -2;
            if (iVar3 < iVar1 + -2) {
              iVar8 = iVar3;
            }
          }
          iVar3 = (int)((float)iVar12 * param_5);
          if (iVar3 < 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = iVar12;
            if (iVar3 < iVar12) {
              iVar9 = iVar3;
            }
          }
          if (iVar1 < 0x100) {
            if (iVar8 < (int)(uint)*(byte *)((longlong)iVar9 + uVar7)) {
              iVar9 = iVar9 + -1;
              lVar6 = (longlong)iVar9;
              iVar13 = 0;
              if (0 < iVar9) {
                do {
                  iVar13 = iVar9;
                  if ((int)(uint)*(byte *)(lVar6 + uVar7) <= iVar8) break;
                  iVar9 = iVar9 + -1;
                  lVar6 = lVar6 + -1;
                  iVar13 = 0;
                } while (0 < lVar6);
              }
            }
            else {
              iVar9 = iVar9 + 1;
              for (lVar6 = (longlong)iVar9; lVar6 <= (longlong)iVar4 + -1; lVar6 = lVar6 + 1) {
                if (iVar8 < (int)(uint)*(byte *)(lVar6 + uVar7)) {
                  iVar13 = iVar9 + -1;
                  break;
                }
                iVar9 = iVar9 + 1;
              }
            }
            uVar23 = (uint)*(byte *)((longlong)iVar13 + uVar7);
            if (iVar13 + 1 <= iVar12) {
              iVar12 = iVar13 + 1;
            }
            uVar24 = (uint)*(byte *)((longlong)iVar12 + uVar7);
          }
          else {
            if (iVar8 < (int)(uint)*(ushort *)(uVar7 + (longlong)iVar9 * 2)) {
              iVar9 = iVar9 + -1;
              lVar6 = (longlong)iVar9;
              iVar13 = 0;
              if (0 < iVar9) {
                do {
                  iVar13 = iVar9;
                  if ((int)(uint)*(ushort *)(uVar7 + lVar6 * 2) <= iVar8) break;
                  iVar9 = iVar9 + -1;
                  lVar6 = lVar6 + -1;
                  iVar13 = 0;
                } while (0 < lVar6);
              }
            }
            else {
              iVar9 = iVar9 + 1;
              for (lVar6 = (longlong)iVar9; lVar6 <= iVar12; lVar6 = lVar6 + 1) {
                if (iVar8 < (int)(uint)*(ushort *)(uVar7 + lVar6 * 2)) {
                  iVar13 = iVar9 + -1;
                  break;
                }
                iVar9 = iVar9 + 1;
              }
            }
            uVar23 = (uint)*(ushort *)(uVar7 + (longlong)iVar13 * 2);
            if (iVar13 + 1 <= iVar12) {
              iVar12 = iVar13 + 1;
            }
            uVar24 = (uint)*(ushort *)(uVar7 + (longlong)iVar12 * 2);
          }
          if (*(char *)(param_4 + 0x198) == '\x01') goto LAB_14226e228;
          iVar4 = 1;
          if (0 < (int)(uVar24 - uVar23)) {
            iVar4 = uVar24 - uVar23;
          }
          fVar19 = (fVar19 - (float)uVar23) / (float)iVar4;
        }
        lVar6 = (longlong)(iVar13 << 4);
        if (iVar13 == iVar12) {
          uVar15 = *(undefined8 *)(lVar6 + (longlong)pfVar14);
          uVar7 = ((undefined8 *)(lVar6 + (longlong)pfVar14))[1];
          goto LAB_14226e3a6;
        }
        fVar26 = *(float *)(lVar6 + 4 + (longlong)pfVar14);
        fVar20 = *(float *)(lVar6 + 8 + (longlong)pfVar14);
        fVar21 = *(float *)(lVar6 + 0xc + (longlong)pfVar14);
        pfVar5 = (float *)((longlong)(iVar12 << 4) + (longlong)pfVar14);
        if (pfVar5[1] * fVar26 + *pfVar5 * *(float *)(lVar6 + (longlong)pfVar14) +
            pfVar5[2] * fVar20 + pfVar5[3] * fVar21 < 0.0) {
          fVar16 = -1.0;
        }
        else {
          fVar16 = 1.0;
        }
        fVar16 = (1.0 - fVar19) * fVar16;
        fVar22 = pfVar5[1] * fVar19 + fVar26 * fVar16;
        fVar31 = *pfVar5 * fVar19 + fVar16 * *(float *)(lVar6 + (longlong)pfVar14);
        fVar27 = pfVar5[2] * fVar19 + fVar20 * fVar16;
        fVar32 = pfVar5[3] * fVar19 + fVar21 * fVar16;
        auVar17._0_4_ = fVar31 * fVar31 + fVar27 * fVar27;
        auVar17._4_4_ = fVar22 * fVar22 + fVar32 * fVar32;
        auVar17._8_4_ = fVar27 * fVar27 + fVar31 * fVar31;
        auVar17._12_4_ = fVar32 * fVar32 + fVar22 * fVar22;
        fVar16 = auVar17._4_4_ + auVar17._0_4_;
        fVar28 = auVar17._8_4_ + auVar17._4_4_;
        fVar29 = auVar17._12_4_ + auVar17._8_4_;
        fVar30 = auVar17._0_4_ + auVar17._12_4_;
        auVar18._4_4_ = fVar28;
        auVar18._0_4_ = fVar16;
        auVar18._8_4_ = fVar29;
        auVar18._12_4_ = fVar30;
        auVar18 = rsqrtps(auVar17,auVar18);
        fVar19 = auVar18._0_4_;
        fVar26 = auVar18._4_4_;
        fVar20 = auVar18._8_4_;
        fVar21 = auVar18._12_4_;
        fVar19 = (_DAT_146aeef30 - fVar19 * fVar19 * fVar16 * _DAT_146aeef30) * fVar19 + fVar19;
        fVar26 = (fRam0000000146aeef34 - fVar26 * fVar26 * fVar28 * fRam0000000146aeef34) * fVar26 +
                 fVar26;
        fVar20 = (fRam0000000146aeef38 - fVar20 * fVar20 * fVar29 * fRam0000000146aeef38) * fVar20 +
                 fVar20;
        fVar21 = (fRam0000000146aeef3c - fVar21 * fVar21 * fVar30 * fRam0000000146aeef3c) * fVar21 +
                 fVar21;
        uVar23 = ((uint)(((fRam0000000146aeef34 - fVar26 * fVar26 * fVar28 * fRam0000000146aeef34) *
                          fVar26 + fVar26) * fVar22) ^ uRam0000000146aeef24) &
                 -(uint)(1e-08 <= fVar28) ^ uRam0000000146aeef24;
        uVar24 = ((uint)(((fRam0000000146aeef38 - fVar20 * fVar20 * fVar29 * fRam0000000146aeef38) *
                          fVar20 + fVar20) * fVar27) ^ uRam0000000146aeef28) &
                 -(uint)(1e-08 <= fVar29) ^ uRam0000000146aeef28;
        uVar25 = ((uint)(((fRam0000000146aeef3c - fVar21 * fVar21 * fVar30 * fRam0000000146aeef3c) *
                          fVar21 + fVar21) * fVar32) ^ uRam0000000146aeef2c) &
                 -(uint)(1e-08 <= fVar30) ^ uRam0000000146aeef2c;
        *puVar11 = ((uint)(((_DAT_146aeef30 - fVar19 * fVar19 * fVar16 * _DAT_146aeef30) * fVar19 +
                           fVar19) * fVar31) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar16) ^
                   _DAT_146aeef20;
        puVar11[1] = uVar23;
        puVar11[2] = uVar24;
        puVar11[3] = uVar25;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)lVar2);
  }
  return;
}



// FUNCTION 14226e430 FUN_14226e430 body=181 status=ok
// SIG undefined FUN_14226e430(void)

void FUN_14226e430(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_3[1];
  fVar1 = *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar2) {
    lVar3 = 0;
    do {
      FUN_142262cb0((longlong)*(int *)(*param_3 + lVar3 * 8) * 0x30 + *param_2,param_4,
                    *(undefined4 *)
                     (*(longlong *)(param_4 + 0xf8) + 4 +
                     (longlong)(*(int *)(*param_3 + 4 + lVar3 * 8) * 2) * 4),param_5,param_5 / fVar1
                   );
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)lVar2);
  }
  return;
}



// FUNCTION 14226e4f0 FUN_14226e4f0 body=632 status=ok
// SIG undefined FUN_14226e4f0(void)

void FUN_14226e4f0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fStack_64;
  
  if (0 < *(int *)(param_4 + 0x110)) {
    iVar2 = (int)param_3[1];
    param_5 = param_5 / *(float *)(param_4 + 0x90);
    lVar9 = (longlong)iVar2;
    if (0 < iVar2) {
      do {
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      lVar9 = 0;
      do {
        lVar1 = lVar9 * 8;
        lVar7 = (longlong)(*(int *)(param_4 + 0x118) * *(int *)(*param_3 + 4 + lVar9 * 8));
        lVar11 = *(longlong *)(param_4 + 0x108);
        lVar10 = (longlong)*(int *)(lVar11 + lVar7 * 4) + *(longlong *)(param_4 + 0x120);
        iVar8 = *(int *)(lVar11 + 4 + lVar7 * 4);
        if (iVar8 < 2) {
          fVar15 = 0.0;
          iVar8 = 0;
          iVar6 = 0;
        }
        else if (0.0 < param_5) {
          iVar8 = iVar8 + -1;
          iVar6 = iVar8;
          if (param_5 < 1.0) {
            fVar15 = (float)iVar8 * param_5;
            iVar5 = (int)fVar15;
            fVar12 = fVar15;
            if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar15)) {
              auVar13._4_4_ = fVar15;
              auVar13._0_4_ = fVar15;
              auVar13._8_8_ = 0;
              uVar4 = movmskps((int)lVar11,auVar13);
              fVar12 = (float)(int)(iVar5 - (uVar4 & 1));
            }
            if ((int)fVar12 <= iVar8) {
              iVar6 = (int)fVar12;
            }
            if (*(char *)(param_4 + 0x198) == '\x01') {
              fVar15 = 0.0;
            }
            else {
              fVar15 = fVar15 - fVar12;
            }
            if (iVar6 + 1 <= iVar8) {
              iVar8 = iVar6 + 1;
            }
          }
          else {
            fVar15 = 0.0;
          }
        }
        else {
          fVar15 = 0.0;
          iVar8 = 0;
          iVar6 = 0;
        }
        lVar11 = (longlong)(iVar6 * 0xc);
        fVar12 = *(float *)(lVar11 + 8 + lVar10);
        if (iVar6 == iVar8) {
          fVar14 = (float)*(undefined8 *)(lVar11 + lVar10);
          fStack_64 = (float)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20);
        }
        else {
          lVar7 = (longlong)(iVar8 * 0xc);
          fVar14 = (float)*(undefined8 *)(lVar11 + lVar10);
          fStack_64 = (float)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20);
          fVar14 = ((float)*(undefined8 *)(lVar7 + lVar10) - fVar14) * fVar15 + fVar14;
          fStack_64 = ((float)((ulonglong)*(undefined8 *)(lVar7 + lVar10) >> 0x20) - fStack_64) *
                      fVar15 + fStack_64;
          fVar12 = (*(float *)(lVar7 + 8 + lVar10) - fVar12) * fVar15 + fVar12;
        }
        lVar9 = lVar9 + 1;
        auVar3._4_4_ = fStack_64;
        auVar3._0_4_ = fVar14;
        auVar3._8_4_ = fVar12;
        auVar3._12_4_ = 0;
        *(undefined1 (*) [16])((longlong)*(int *)(*param_3 + lVar1) * 0x30 + *param_2 + 0x20) =
             auVar3;
      } while (lVar9 < iVar2);
    }
  }
  return;
}



// FUNCTION 14226e770 FUN_14226e770 body=753 status=ok
// SIG undefined FUN_14226e770(void)

void FUN_14226e770(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  
  if (0 < *(int *)(param_4 + 0x110)) {
    iVar2 = (int)param_3[1];
    param_5 = param_5 / *(float *)(param_4 + 0x90);
    lVar9 = (longlong)iVar2;
    if (0 < iVar2) {
      do {
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      lVar9 = 0;
      do {
        lVar1 = lVar9 * 8;
        lVar7 = (longlong)(*(int *)(param_4 + 0x118) * *(int *)(*param_3 + 4 + lVar9 * 8));
        lVar11 = *(longlong *)(param_4 + 0x108);
        lVar10 = (longlong)*(int *)(lVar11 + lVar7 * 4) + *(longlong *)(param_4 + 0x120);
        iVar8 = *(int *)(lVar11 + 4 + lVar7 * 4);
        if (iVar8 < 2) {
          fVar16 = 0.0;
          iVar8 = 0;
          iVar6 = 0;
        }
        else if (0.0 < param_5) {
          iVar8 = iVar8 + -1;
          iVar6 = iVar8;
          if (param_5 < 1.0) {
            fVar16 = (float)iVar8 * param_5;
            iVar5 = (int)fVar16;
            fVar12 = fVar16;
            if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar16)) {
              auVar14._4_4_ = fVar16;
              auVar14._0_4_ = fVar16;
              auVar14._8_8_ = 0;
              uVar4 = movmskps((int)lVar11,auVar14);
              fVar12 = (float)(int)(iVar5 - (uVar4 & 1));
            }
            if ((int)fVar12 <= iVar8) {
              iVar6 = (int)fVar12;
            }
            if (*(char *)(param_4 + 0x198) == '\x01') {
              fVar16 = 0.0;
            }
            else {
              fVar16 = fVar16 - fVar12;
            }
            if (iVar6 + 1 <= iVar8) {
              iVar8 = iVar6 + 1;
            }
          }
          else {
            fVar16 = 0.0;
          }
        }
        else {
          fVar16 = 0.0;
          iVar8 = 0;
          iVar6 = 0;
        }
        lVar11 = (longlong)(iVar6 * 0xc);
        if (iVar6 == iVar8) {
          fVar12 = (float)(int)(*(ushort *)(lVar11 + lVar10) - 0x7fff) * 0.003906369;
          fVar13 = (float)(int)(*(ushort *)(lVar11 + 2 + lVar10) - 0x7fff) * 0.003906369;
          fVar15 = (float)(int)(*(ushort *)(lVar11 + 4 + lVar10) - 0x7fff) * 0.003906369;
        }
        else {
          lVar7 = (longlong)(iVar8 * 0xc);
          fVar12 = (float)(int)(*(ushort *)(lVar11 + lVar10) - 0x7fff) * 0.003906369;
          fVar13 = (float)(int)(*(ushort *)(lVar11 + 2 + lVar10) - 0x7fff) * 0.003906369;
          fVar15 = (float)(int)(*(ushort *)(lVar11 + 4 + lVar10) - 0x7fff) * 0.003906369;
          fVar12 = ((float)(int)(*(ushort *)(lVar7 + lVar10) - 0x7fff) * 0.003906369 - fVar12) *
                   fVar16 + fVar12;
          fVar13 = ((float)(int)(*(ushort *)(lVar7 + 2 + lVar10) - 0x7fff) * 0.003906369 - fVar13) *
                   fVar16 + fVar13;
          fVar15 = ((float)(int)(*(ushort *)(lVar7 + 4 + lVar10) - 0x7fff) * 0.003906369 - fVar15) *
                   fVar16 + fVar15;
        }
        lVar9 = lVar9 + 1;
        auVar3._4_4_ = fVar13;
        auVar3._0_4_ = fVar12;
        auVar3._8_4_ = fVar15;
        auVar3._12_4_ = 0;
        *(undefined1 (*) [16])((longlong)*(int *)(*param_3 + lVar1) * 0x30 + *param_2 + 0x20) =
             auVar3;
      } while (lVar9 < iVar2);
    }
  }
  return;
}



// FUNCTION 14226ea70 FUN_14226ea70 body=1078 status=ok
// SIG undefined FUN_14226ea70(void)

void FUN_14226ea70(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  float *pfVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (0 < *(int *)(param_4 + 0x110)) {
    iVar2 = (int)param_3[1];
    param_5 = param_5 / *(float *)(param_4 + 0x90);
    lVar10 = (longlong)iVar2;
    if (0 < iVar2) {
      do {
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      lVar10 = 0;
      do {
        lVar1 = lVar10 * 8;
        lVar8 = (longlong)(*(int *)(param_4 + 0x118) * *(int *)(*param_3 + 4 + lVar10 * 8));
        lVar11 = *(longlong *)(param_4 + 0x108);
        pfVar13 = (float *)((longlong)*(int *)(lVar11 + lVar8 * 4) + *(longlong *)(param_4 + 0x120))
        ;
        iVar6 = *(int *)(lVar11 + 4 + lVar8 * 4);
        if (iVar6 < 2) {
          fVar18 = 0.0;
          iVar12 = 0;
          iVar9 = 0;
        }
        else if (0.0 < param_5) {
          iVar9 = iVar6 + -1;
          iVar12 = iVar9;
          if (param_5 < 1.0) {
            fVar18 = (float)iVar9 * param_5;
            iVar7 = (int)fVar18;
            fVar17 = fVar18;
            if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar18)) {
              auVar15._4_4_ = fVar18;
              auVar15._0_4_ = fVar18;
              auVar15._8_8_ = 0;
              uVar5 = movmskps((int)lVar11,auVar15);
              fVar17 = (float)(int)(iVar7 - (uVar5 & 1));
            }
            if ((int)fVar17 <= iVar9) {
              iVar12 = (int)fVar17;
            }
            if (*(char *)(param_4 + 0x198) == '\x01') {
              fVar18 = 0.0;
            }
            else {
              fVar18 = fVar18 - fVar17;
            }
            if (iVar12 + 1 <= iVar9) {
              iVar9 = iVar12 + 1;
            }
          }
          else {
            fVar18 = 0.0;
          }
        }
        else {
          fVar18 = 0.0;
          iVar12 = 0;
          iVar9 = 0;
        }
        lVar11 = 0x18;
        if (iVar6 < 2) {
          lVar11 = 0;
        }
        uVar5 = *(uint *)(iVar12 * 4 + lVar11 + (longlong)pfVar13);
        iVar6 = (uVar5 & 0x3ff) - 0x1ff;
        if (iVar12 == iVar9) {
          fVar14 = (float)iVar6 * 0.0019569471 * pfVar13[3] + *pfVar13;
          fVar17 = (float)(int)((uVar5 >> 0x15) - 0x3ff) * 0.0009775171 * pfVar13[5] + pfVar13[2];
          fVar16 = (float)(int)((uVar5 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * pfVar13[4] +
                   pfVar13[1];
        }
        else {
          uVar3 = *(uint *)(iVar9 * 4 + lVar11 + (longlong)pfVar13);
          fVar14 = (float)iVar6 * 0.0019569471 * pfVar13[3] + *pfVar13;
          fVar16 = (float)(int)((uVar5 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * pfVar13[4] +
                   pfVar13[1];
          fVar17 = (float)(int)((uVar5 >> 0x15) - 0x3ff) * 0.0009775171 * pfVar13[5] + pfVar13[2];
          fVar14 = (((float)(int)((uVar3 & 0x3ff) - 0x1ff) * 0.0019569471 * pfVar13[3] + *pfVar13) -
                   fVar14) * fVar18 + fVar14;
          fVar17 = (((float)(int)((uVar3 >> 0x15) - 0x3ff) * 0.0009775171 * pfVar13[5] + pfVar13[2])
                   - fVar17) * fVar18 + fVar17;
          fVar16 = (((float)(int)((uVar3 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * pfVar13[4] +
                    pfVar13[1]) - fVar16) * fVar18 + fVar16;
        }
        lVar10 = lVar10 + 1;
        auVar4._4_4_ = fVar16;
        auVar4._0_4_ = fVar14;
        auVar4._8_4_ = fVar17;
        auVar4._12_4_ = 0;
        *(undefined1 (*) [16])((longlong)*(int *)(*param_3 + lVar1) * 0x30 + *param_2 + 0x20) =
             auVar4;
      } while (lVar10 < iVar2);
    }
  }
  return;
}



// FUNCTION 14226eeb0 FUN_14226eeb0 body=890 status=ok
// SIG undefined FUN_14226eeb0(void)

void FUN_14226eeb0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  
  if (0 < *(int *)(param_4 + 0x110)) {
    iVar1 = (int)param_3[1];
    param_5 = param_5 / *(float *)(param_4 + 0x90);
    lVar7 = (longlong)iVar1;
    if (0 < iVar1) {
      do {
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      lVar7 = 0;
      do {
        lVar3 = *param_2;
        iVar2 = *(int *)(*param_3 + lVar7 * 8);
        iVar8 = *(int *)(*(longlong *)(param_4 + 0x108) + 4 +
                        (longlong)(*(int *)(*param_3 + 4 + lVar7 * 8) * *(int *)(param_4 + 0x118)) *
                        4);
        if (iVar8 < 2) {
          fVar14 = 0.0;
          iVar8 = 0;
          iVar9 = 0;
        }
        else if (0.0 < param_5) {
          iVar8 = iVar8 + -1;
          iVar9 = iVar8;
          if (param_5 < 1.0) {
            fVar14 = (float)iVar8 * param_5;
            iVar6 = (int)fVar14;
            fVar11 = fVar14;
            if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar14)) {
              auVar13._4_4_ = fVar14;
              auVar13._0_4_ = fVar14;
              auVar13._8_8_ = 0;
              uVar5 = movmskps((int)*(longlong *)(param_4 + 0x108),auVar13);
              fVar11 = (float)(int)(iVar6 - (uVar5 & 1));
            }
            if ((int)fVar11 <= iVar8) {
              iVar9 = (int)fVar11;
            }
            if (*(char *)(param_4 + 0x198) == '\x01') {
              fVar14 = 0.0;
            }
            else {
              fVar14 = fVar14 - fVar11;
            }
            if (iVar9 + 1 <= iVar8) {
              iVar8 = iVar9 + 1;
            }
          }
          else {
            fVar14 = 0.0;
          }
        }
        else {
          fVar14 = 0.0;
          iVar8 = 0;
          iVar9 = 0;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x248,L"%i: unknown or unsupported animation compression format",4);
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0x248,
                   L"%i: unknown or unsupported animation compression format",4);
        fVar10 = DAT_1468b5d98;
        fVar12 = DAT_1468b5d94;
        fVar11 = DAT_1468b5d90;
        if (iVar9 != iVar8) {
          LowLevelFatalErrorHandler
                    ("Unknown",0x248,L"%i: unknown or unsupported animation compression format",4);
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x248,
                     L"%i: unknown or unsupported animation compression format",4);
          fVar11 = (DAT_1468b5d90 - fVar11) * fVar14 + fVar11;
          fVar10 = (DAT_1468b5d98 - fVar10) * fVar14 + fVar10;
          fVar12 = (DAT_1468b5d94 - fVar12) * fVar14 + fVar12;
        }
        lVar7 = lVar7 + 1;
        auVar4._4_4_ = fVar12;
        auVar4._0_4_ = fVar11;
        auVar4._8_4_ = fVar10;
        auVar4._12_4_ = 0;
        *(undefined1 (*) [16])((longlong)iVar2 * 0x30 + lVar3 + 0x20) = auVar4;
      } while (lVar7 < iVar1);
    }
  }
  return;
}



// FUNCTION 14226f230 FUN_14226f230 body=890 status=ok
// SIG undefined FUN_14226f230(void)

void FUN_14226f230(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  
  if (0 < *(int *)(param_4 + 0x110)) {
    iVar1 = (int)param_3[1];
    param_5 = param_5 / *(float *)(param_4 + 0x90);
    lVar7 = (longlong)iVar1;
    if (0 < iVar1) {
      do {
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      lVar7 = 0;
      do {
        lVar3 = *param_2;
        iVar2 = *(int *)(*param_3 + lVar7 * 8);
        iVar8 = *(int *)(*(longlong *)(param_4 + 0x108) + 4 +
                        (longlong)(*(int *)(*param_3 + 4 + lVar7 * 8) * *(int *)(param_4 + 0x118)) *
                        4);
        if (iVar8 < 2) {
          fVar14 = 0.0;
          iVar8 = 0;
          iVar9 = 0;
        }
        else if (0.0 < param_5) {
          iVar8 = iVar8 + -1;
          iVar9 = iVar8;
          if (param_5 < 1.0) {
            fVar14 = (float)iVar8 * param_5;
            iVar6 = (int)fVar14;
            fVar11 = fVar14;
            if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar14)) {
              auVar13._4_4_ = fVar14;
              auVar13._0_4_ = fVar14;
              auVar13._8_8_ = 0;
              uVar5 = movmskps((int)*(longlong *)(param_4 + 0x108),auVar13);
              fVar11 = (float)(int)(iVar6 - (uVar5 & 1));
            }
            if ((int)fVar11 <= iVar8) {
              iVar9 = (int)fVar11;
            }
            if (*(char *)(param_4 + 0x198) == '\x01') {
              fVar14 = 0.0;
            }
            else {
              fVar14 = fVar14 - fVar11;
            }
            if (iVar9 + 1 <= iVar8) {
              iVar8 = iVar9 + 1;
            }
          }
          else {
            fVar14 = 0.0;
          }
        }
        else {
          fVar14 = 0.0;
          iVar8 = 0;
          iVar9 = 0;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x248,L"%i: unknown or unsupported animation compression format",5);
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0x248,
                   L"%i: unknown or unsupported animation compression format",5);
        fVar10 = DAT_1468b5d98;
        fVar12 = DAT_1468b5d94;
        fVar11 = DAT_1468b5d90;
        if (iVar9 != iVar8) {
          LowLevelFatalErrorHandler
                    ("Unknown",0x248,L"%i: unknown or unsupported animation compression format",5);
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x248,
                     L"%i: unknown or unsupported animation compression format",5);
          fVar11 = (DAT_1468b5d90 - fVar11) * fVar14 + fVar11;
          fVar10 = (DAT_1468b5d98 - fVar10) * fVar14 + fVar10;
          fVar12 = (DAT_1468b5d94 - fVar12) * fVar14 + fVar12;
        }
        lVar7 = lVar7 + 1;
        auVar4._4_4_ = fVar12;
        auVar4._0_4_ = fVar11;
        auVar4._8_4_ = fVar10;
        auVar4._12_4_ = 0;
        *(undefined1 (*) [16])((longlong)iVar2 * 0x30 + lVar3 + 0x20) = auVar4;
      } while (lVar7 < iVar1);
    }
  }
  return;
}



// FUNCTION 14226f5b0 FUN_14226f5b0 body=400 status=ok
// SIG undefined FUN_14226f5b0(void)

void FUN_14226f5b0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined1 auVar6 [16];
  
  if (0 < *(int *)(param_4 + 0x110)) {
    param_5 = param_5 / *(float *)(param_4 + 0x90);
    iVar2 = (int)param_3[1];
    lVar5 = (longlong)iVar2;
    if (0 < iVar2) {
      do {
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      lVar5 = 0;
      do {
        lVar1 = lVar5 * 8;
        iVar3 = *(int *)(*(longlong *)(param_4 + 0x108) + 4 +
                        (longlong)(*(int *)(*param_3 + 4 + lVar5 * 8) * *(int *)(param_4 + 0x118)) *
                        4);
        if (((1 < iVar3) && (0.0 < param_5)) && (param_5 < 1.0)) {
          auVar6._0_4_ = (float)(iVar3 + -1) * param_5;
          if (((int)auVar6._0_4_ != -0x80000000) && ((float)(int)auVar6._0_4_ != auVar6._0_4_)) {
            auVar6._4_4_ = auVar6._0_4_;
            auVar6._8_8_ = 0;
            movmskps((int)*(longlong *)(param_4 + 0x108),auVar6);
          }
        }
        lVar5 = lVar5 + 1;
        auVar4._4_4_ = DAT_1468b5d94;
        auVar4._0_4_ = DAT_1468b5d90;
        auVar4._8_4_ = DAT_1468b5d98;
        auVar4._12_4_ = 0;
        *(undefined1 (*) [16])((longlong)*(int *)(*param_3 + lVar1) * 0x30 + *param_2 + 0x20) =
             auVar4;
      } while (lVar5 < iVar2);
    }
  }
  return;
}



// FUNCTION 14226f740 FUN_14226f740 body=877 status=ok
// SIG undefined FUN_14226f740(void)

void FUN_14226f740(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack_84;
  
  if (0 < *(int *)(param_4 + 0x110)) {
    lVar4 = param_3[1];
    param_5 = param_5 / *(float *)(param_4 + 0x90);
    if (0 < (longlong)(int)lVar4) {
      lVar13 = 0;
      do {
        iVar6 = *(int *)(param_4 + 0xb8);
        lVar1 = lVar13 * 8;
        lVar9 = (longlong)(*(int *)(param_4 + 0x118) * *(int *)(*param_3 + 4 + lVar13 * 8));
        iVar2 = *(int *)(*(longlong *)(param_4 + 0x108) + 4 + lVar9 * 4);
        lVar9 = (longlong)*(int *)(*(longlong *)(param_4 + 0x108) + lVar9 * 4) +
                *(longlong *)(param_4 + 0x120);
        iVar16 = iVar2 + -1;
        uVar12 = lVar9 + 3 + (longlong)(iVar2 * 0xc) & 0xfffffffffffffffc;
        if ((iVar2 < 2) || (param_5 <= 0.0)) {
          iVar16 = 0;
          iVar15 = 0;
LAB_14226f9b8:
          fVar20 = 0.0;
        }
        else {
          iVar15 = iVar16;
          if (1.0 <= param_5) goto LAB_14226f9b8;
          fVar20 = (float)(iVar6 + -1) * param_5;
          iVar5 = (int)fVar20;
          if (iVar5 < 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = iVar6 + -2;
            if (iVar5 < iVar6 + -2) {
              iVar7 = iVar5;
            }
          }
          iVar5 = (int)((float)iVar16 * param_5);
          if (iVar5 < 0) {
            iVar17 = 0;
          }
          else {
            iVar17 = iVar16;
            if (iVar5 < iVar16) {
              iVar17 = iVar5;
            }
          }
          if (iVar6 < 0x100) {
            if (iVar7 < (int)(uint)*(byte *)((longlong)iVar17 + uVar12)) {
              iVar17 = iVar17 + -1;
              lVar10 = (longlong)iVar17;
              iVar15 = 0;
              if (0 < iVar17) {
                do {
                  iVar15 = iVar17;
                  if ((int)(uint)*(byte *)(lVar10 + uVar12) <= iVar7) break;
                  iVar17 = iVar17 + -1;
                  lVar10 = lVar10 + -1;
                  iVar15 = 0;
                } while (0 < lVar10);
              }
            }
            else {
              iVar17 = iVar17 + 1;
              for (lVar10 = (longlong)iVar17; lVar10 <= (longlong)iVar2 + -1; lVar10 = lVar10 + 1) {
                if (iVar7 < (int)(uint)*(byte *)(lVar10 + uVar12)) {
                  iVar15 = iVar17 + -1;
                  break;
                }
                iVar17 = iVar17 + 1;
              }
            }
            uVar14 = (uint)*(byte *)((longlong)iVar15 + uVar12);
            if (iVar15 + 1 <= iVar16) {
              iVar16 = iVar15 + 1;
            }
            uVar8 = (uint)*(byte *)((longlong)iVar16 + uVar12);
          }
          else {
            if (iVar7 < (int)(uint)*(ushort *)(uVar12 + (longlong)iVar17 * 2)) {
              iVar17 = iVar17 + -1;
              lVar10 = (longlong)iVar17;
              iVar15 = 0;
              if (0 < iVar17) {
                do {
                  iVar15 = iVar17;
                  if ((int)(uint)*(ushort *)(uVar12 + lVar10 * 2) <= iVar7) break;
                  iVar17 = iVar17 + -1;
                  lVar10 = lVar10 + -1;
                  iVar15 = 0;
                } while (0 < lVar10);
              }
            }
            else {
              iVar17 = iVar17 + 1;
              for (lVar10 = (longlong)iVar17; lVar10 <= iVar16; lVar10 = lVar10 + 1) {
                if (iVar7 < (int)(uint)*(ushort *)(uVar12 + lVar10 * 2)) {
                  iVar15 = iVar17 + -1;
                  break;
                }
                iVar17 = iVar17 + 1;
              }
            }
            uVar14 = (uint)*(ushort *)(uVar12 + (longlong)iVar15 * 2);
            if (iVar15 + 1 <= iVar16) {
              iVar16 = iVar15 + 1;
            }
            uVar8 = (uint)*(ushort *)(uVar12 + (longlong)iVar16 * 2);
          }
          if (*(char *)(param_4 + 0x198) == '\x01') goto LAB_14226f9b8;
          iVar6 = 1;
          if (0 < (int)(uVar8 - uVar14)) {
            iVar6 = uVar8 - uVar14;
          }
          fVar20 = (fVar20 - (float)uVar14) / (float)iVar6;
        }
        lVar10 = (longlong)(iVar15 * 0xc);
        fVar18 = *(float *)(lVar10 + 8 + lVar9);
        if (iVar15 == iVar16) {
          fVar19 = (float)*(undefined8 *)(lVar10 + lVar9);
          fStack_84 = (float)((ulonglong)*(undefined8 *)(lVar10 + lVar9) >> 0x20);
        }
        else {
          lVar11 = (longlong)(iVar16 * 0xc);
          fVar19 = (float)*(undefined8 *)(lVar10 + lVar9);
          fStack_84 = (float)((ulonglong)*(undefined8 *)(lVar10 + lVar9) >> 0x20);
          fVar19 = ((float)*(undefined8 *)(lVar11 + lVar9) - fVar19) * fVar20 + fVar19;
          fStack_84 = ((float)((ulonglong)*(undefined8 *)(lVar11 + lVar9) >> 0x20) - fStack_84) *
                      fVar20 + fStack_84;
          fVar18 = (*(float *)(lVar11 + 8 + lVar9) - fVar18) * fVar20 + fVar18;
        }
        lVar13 = lVar13 + 1;
        auVar3._4_4_ = fStack_84;
        auVar3._0_4_ = fVar19;
        auVar3._8_4_ = fVar18;
        auVar3._12_4_ = 0;
        *(undefined1 (*) [16])((longlong)*(int *)(*param_3 + lVar1) * 0x30 + *param_2 + 0x20) =
             auVar3;
      } while (lVar13 < (int)lVar4);
    }
  }
  return;
}



// FUNCTION 14226fab0 FUN_14226fab0 body=976 status=ok
// SIG undefined FUN_14226fab0(void)

void FUN_14226fab0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (0 < *(int *)(param_4 + 0x110)) {
    lVar4 = param_3[1];
    param_5 = param_5 / *(float *)(param_4 + 0x90);
    if (0 < (longlong)(int)lVar4) {
      lVar13 = 0;
      do {
        iVar6 = *(int *)(param_4 + 0xb8);
        lVar1 = lVar13 * 8;
        lVar9 = (longlong)(*(int *)(param_4 + 0x118) * *(int *)(*param_3 + 4 + lVar13 * 8));
        iVar2 = *(int *)(*(longlong *)(param_4 + 0x108) + 4 + lVar9 * 4);
        lVar9 = (longlong)*(int *)(*(longlong *)(param_4 + 0x108) + lVar9 * 4) +
                *(longlong *)(param_4 + 0x120);
        iVar16 = iVar2 + -1;
        uVar11 = lVar9 + 3 + (longlong)(iVar2 * 0xc) & 0xfffffffffffffffc;
        if ((iVar2 < 2) || (param_5 <= 0.0)) {
          iVar16 = 0;
          iVar15 = 0;
LAB_14226fd28:
          fVar21 = 0.0;
        }
        else {
          iVar15 = iVar16;
          if (1.0 <= param_5) goto LAB_14226fd28;
          fVar21 = (float)(iVar6 + -1) * param_5;
          iVar5 = (int)fVar21;
          if (iVar5 < 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = iVar6 + -2;
            if (iVar5 < iVar6 + -2) {
              iVar7 = iVar5;
            }
          }
          iVar5 = (int)((float)iVar16 * param_5);
          if (iVar5 < 0) {
            iVar17 = 0;
          }
          else {
            iVar17 = iVar16;
            if (iVar5 < iVar16) {
              iVar17 = iVar5;
            }
          }
          if (iVar6 < 0x100) {
            if (iVar7 < (int)(uint)*(byte *)((longlong)iVar17 + uVar11)) {
              iVar17 = iVar17 + -1;
              lVar12 = (longlong)iVar17;
              iVar15 = 0;
              if (0 < iVar17) {
                do {
                  iVar15 = iVar17;
                  if ((int)(uint)*(byte *)(lVar12 + uVar11) <= iVar7) break;
                  iVar17 = iVar17 + -1;
                  lVar12 = lVar12 + -1;
                  iVar15 = 0;
                } while (0 < lVar12);
              }
            }
            else {
              iVar17 = iVar17 + 1;
              for (lVar12 = (longlong)iVar17; lVar12 <= (longlong)iVar2 + -1; lVar12 = lVar12 + 1) {
                if (iVar7 < (int)(uint)*(byte *)(lVar12 + uVar11)) {
                  iVar15 = iVar17 + -1;
                  break;
                }
                iVar17 = iVar17 + 1;
              }
            }
            uVar14 = (uint)*(byte *)((longlong)iVar15 + uVar11);
            if (iVar15 + 1 <= iVar16) {
              iVar16 = iVar15 + 1;
            }
            uVar8 = (uint)*(byte *)((longlong)iVar16 + uVar11);
          }
          else {
            if (iVar7 < (int)(uint)*(ushort *)(uVar11 + (longlong)iVar17 * 2)) {
              iVar17 = iVar17 + -1;
              lVar12 = (longlong)iVar17;
              iVar15 = 0;
              if (0 < iVar17) {
                do {
                  iVar15 = iVar17;
                  if ((int)(uint)*(ushort *)(uVar11 + lVar12 * 2) <= iVar7) break;
                  iVar17 = iVar17 + -1;
                  lVar12 = lVar12 + -1;
                  iVar15 = 0;
                } while (0 < lVar12);
              }
            }
            else {
              iVar17 = iVar17 + 1;
              for (lVar12 = (longlong)iVar17; lVar12 <= iVar16; lVar12 = lVar12 + 1) {
                if (iVar7 < (int)(uint)*(ushort *)(uVar11 + lVar12 * 2)) {
                  iVar15 = iVar17 + -1;
                  break;
                }
                iVar17 = iVar17 + 1;
              }
            }
            uVar14 = (uint)*(ushort *)(uVar11 + (longlong)iVar15 * 2);
            if (iVar15 + 1 <= iVar16) {
              iVar16 = iVar15 + 1;
            }
            uVar8 = (uint)*(ushort *)(uVar11 + (longlong)iVar16 * 2);
          }
          if (*(char *)(param_4 + 0x198) == '\x01') goto LAB_14226fd28;
          iVar6 = 1;
          if (0 < (int)(uVar8 - uVar14)) {
            iVar6 = uVar8 - uVar14;
          }
          fVar21 = (fVar21 - (float)uVar14) / (float)iVar6;
        }
        lVar12 = (longlong)(iVar15 * 0xc);
        if (iVar15 == iVar16) {
          fVar18 = (float)(int)(*(ushort *)(lVar12 + lVar9) - 0x7fff) * 0.003906369;
          fVar19 = (float)(int)(*(ushort *)(lVar12 + 2 + lVar9) - 0x7fff) * 0.003906369;
          fVar20 = (float)(int)(*(ushort *)(lVar12 + 4 + lVar9) - 0x7fff) * 0.003906369;
        }
        else {
          lVar10 = (longlong)(iVar16 * 0xc);
          fVar18 = (float)(int)(*(ushort *)(lVar12 + lVar9) - 0x7fff) * 0.003906369;
          fVar19 = (float)(int)(*(ushort *)(lVar12 + 2 + lVar9) - 0x7fff) * 0.003906369;
          fVar20 = (float)(int)(*(ushort *)(lVar12 + 4 + lVar9) - 0x7fff) * 0.003906369;
          fVar18 = ((float)(int)(*(ushort *)(lVar10 + lVar9) - 0x7fff) * 0.003906369 - fVar18) *
                   fVar21 + fVar18;
          fVar19 = ((float)(int)(*(ushort *)(lVar10 + 2 + lVar9) - 0x7fff) * 0.003906369 - fVar19) *
                   fVar21 + fVar19;
          fVar20 = ((float)(int)(*(ushort *)(lVar10 + 4 + lVar9) - 0x7fff) * 0.003906369 - fVar20) *
                   fVar21 + fVar20;
        }
        lVar13 = lVar13 + 1;
        auVar3._4_4_ = fVar19;
        auVar3._0_4_ = fVar18;
        auVar3._8_4_ = fVar20;
        auVar3._12_4_ = 0;
        *(undefined1 (*) [16])((longlong)*(int *)(*param_3 + lVar1) * 0x30 + *param_2 + 0x20) =
             auVar3;
      } while (lVar13 < (int)lVar4);
    }
  }
  return;
}



// FUNCTION 14226fe80 FUN_14226fe80 body=1261 status=ok
// SIG undefined FUN_14226fe80(void)

void FUN_14226fe80(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (0 < *(int *)(param_4 + 0x110)) {
    lVar4 = param_3[1];
    param_5 = param_5 / *(float *)(param_4 + 0x90);
    if (0 < (longlong)(int)lVar4) {
      lVar11 = 0;
      do {
        iVar10 = 0;
        iVar6 = *(int *)(param_4 + 0xb8);
        lVar1 = lVar11 * 8;
        lVar8 = (longlong)(*(int *)(param_4 + 0x118) * *(int *)(*param_3 + 4 + lVar11 * 8));
        iVar2 = *(int *)(*(longlong *)(param_4 + 0x108) + 4 + lVar8 * 4);
        pfVar12 = (float *)((longlong)*(int *)(*(longlong *)(param_4 + 0x108) + lVar8 * 4) +
                           *(longlong *)(param_4 + 0x120));
        iVar14 = iVar2 + -1;
        uVar9 = (longlong)pfVar12 + (longlong)(iVar2 * 4) + 3 & 0xfffffffffffffffc;
        iVar17 = 0;
        iVar15 = iVar17;
        iVar16 = iVar10;
        if (((iVar2 < 2) || (param_5 <= 0.0)) || (iVar15 = iVar14, iVar16 = iVar14, 1.0 <= param_5))
        {
LAB_142270147:
          fVar21 = 0.0;
        }
        else {
          fVar21 = (float)(iVar6 + -1) * param_5;
          iVar5 = (int)fVar21;
          if ((-1 < iVar5) && (iVar10 = iVar6 + -2, iVar5 < iVar6 + -2)) {
            iVar10 = iVar5;
          }
          iVar5 = (int)((float)iVar14 * param_5);
          if ((-1 < iVar5) && (iVar17 = iVar14, iVar5 < iVar14)) {
            iVar17 = iVar5;
          }
          if (iVar6 < 0x100) {
            if (iVar10 < (int)(uint)*(byte *)((longlong)iVar17 + uVar9)) {
              iVar17 = iVar17 + -1;
              lVar8 = (longlong)iVar17;
              iVar16 = 0;
              if (0 < iVar17) {
                do {
                  iVar16 = iVar17;
                  if ((int)(uint)*(byte *)(lVar8 + uVar9) <= iVar10) break;
                  iVar17 = iVar17 + -1;
                  lVar8 = lVar8 + -1;
                  iVar16 = 0;
                } while (0 < lVar8);
              }
            }
            else {
              iVar17 = iVar17 + 1;
              for (lVar8 = (longlong)iVar17; lVar8 <= (longlong)iVar2 + -1; lVar8 = lVar8 + 1) {
                if (iVar10 < (int)(uint)*(byte *)(lVar8 + uVar9)) {
                  iVar16 = iVar17 + -1;
                  break;
                }
                iVar17 = iVar17 + 1;
              }
            }
            uVar13 = (uint)*(byte *)((longlong)iVar16 + uVar9);
            if (iVar16 + 1 <= iVar14) {
              iVar15 = iVar16 + 1;
            }
            uVar7 = (uint)*(byte *)((longlong)iVar15 + uVar9);
          }
          else {
            if (iVar10 < (int)(uint)*(ushort *)(uVar9 + (longlong)iVar17 * 2)) {
              iVar17 = iVar17 + -1;
              lVar8 = (longlong)iVar17;
              iVar16 = 0;
              if (0 < iVar17) {
                do {
                  iVar16 = iVar17;
                  if ((int)(uint)*(ushort *)(uVar9 + lVar8 * 2) <= iVar10) break;
                  iVar17 = iVar17 + -1;
                  lVar8 = lVar8 + -1;
                  iVar16 = 0;
                } while (0 < lVar8);
              }
            }
            else {
              iVar17 = iVar17 + 1;
              for (lVar8 = (longlong)iVar17; lVar8 <= iVar14; lVar8 = lVar8 + 1) {
                if (iVar10 < (int)(uint)*(ushort *)(uVar9 + lVar8 * 2)) {
                  iVar16 = iVar17 + -1;
                  break;
                }
                iVar17 = iVar17 + 1;
              }
            }
            uVar13 = (uint)*(ushort *)(uVar9 + (longlong)iVar16 * 2);
            if (iVar16 + 1 <= iVar14) {
              iVar15 = iVar16 + 1;
            }
            uVar7 = (uint)*(ushort *)(uVar9 + (longlong)iVar15 * 2);
          }
          if (*(char *)(param_4 + 0x198) == '\x01') goto LAB_142270147;
          iVar6 = 1;
          if (0 < (int)(uVar7 - uVar13)) {
            iVar6 = uVar7 - uVar13;
          }
          fVar21 = (fVar21 - (float)uVar13) / (float)iVar6;
        }
        lVar8 = 0x18;
        if (iVar2 < 2) {
          lVar8 = 0;
        }
        uVar13 = *(uint *)(iVar16 * 4 + lVar8 + (longlong)pfVar12);
        iVar6 = (uVar13 & 0x3ff) - 0x1ff;
        if (iVar16 == iVar15) {
          fVar18 = (float)iVar6 * 0.0019569471 * pfVar12[3] + *pfVar12;
          fVar20 = (float)(int)((uVar13 >> 0x15) - 0x3ff) * 0.0009775171 * pfVar12[5] + pfVar12[2];
          fVar19 = (float)(int)((uVar13 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * pfVar12[4] +
                   pfVar12[1];
        }
        else {
          uVar7 = *(uint *)(iVar15 * 4 + lVar8 + (longlong)pfVar12);
          fVar18 = (float)iVar6 * 0.0019569471 * pfVar12[3] + *pfVar12;
          fVar19 = (float)(int)((uVar13 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * pfVar12[4] +
                   pfVar12[1];
          fVar20 = (float)(int)((uVar13 >> 0x15) - 0x3ff) * 0.0009775171 * pfVar12[5] + pfVar12[2];
          fVar18 = (((float)(int)((uVar7 & 0x3ff) - 0x1ff) * 0.0019569471 * pfVar12[3] + *pfVar12) -
                   fVar18) * fVar21 + fVar18;
          fVar20 = (((float)(int)((uVar7 >> 0x15) - 0x3ff) * 0.0009775171 * pfVar12[5] + pfVar12[2])
                   - fVar20) * fVar21 + fVar20;
          fVar19 = (((float)(int)((uVar7 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * pfVar12[4] +
                    pfVar12[1]) - fVar19) * fVar21 + fVar19;
        }
        lVar11 = lVar11 + 1;
        auVar3._4_4_ = fVar19;
        auVar3._0_4_ = fVar18;
        auVar3._8_4_ = fVar20;
        auVar3._12_4_ = 0;
        *(undefined1 (*) [16])((longlong)*(int *)(*param_3 + lVar1) * 0x30 + *param_2 + 0x20) =
             auVar3;
      } while (lVar11 < (int)lVar4);
    }
  }
  return;
}



// FUNCTION 142270370 FUN_142270370 body=1054 status=ok
// SIG undefined FUN_142270370(void)

void FUN_142270370(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (0 < *(int *)(param_4 + 0x110)) {
    lVar5 = param_3[1];
    param_5 = param_5 / *(float *)(param_4 + 0x90);
    if (0 < (longlong)(int)lVar5) {
      lVar13 = 0;
      do {
        iVar7 = *(int *)(param_4 + 0xb8);
        iVar1 = *(int *)(*param_3 + lVar13 * 8);
        lVar3 = *param_2;
        lVar10 = (longlong)(*(int *)(param_4 + 0x118) * *(int *)(*param_3 + 4 + lVar13 * 8));
        iVar2 = *(int *)(*(longlong *)(param_4 + 0x108) + 4 + lVar10 * 4);
        iVar12 = iVar2 + -1;
        uVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0x108) + lVar10 * 4) + 3 +
                 *(longlong *)(param_4 + 0x120) + (longlong)(iVar2 * 0xc) & 0xfffffffffffffffc;
        if ((iVar2 < 2) || (param_5 <= 0.0)) {
          iVar12 = 0;
          iVar14 = 0;
LAB_142270604:
          fVar20 = 0.0;
        }
        else {
          iVar14 = iVar12;
          if (1.0 <= param_5) goto LAB_142270604;
          fVar20 = (float)(iVar7 + -1) * param_5;
          iVar6 = (int)fVar20;
          if (iVar6 < 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = iVar7 + -2;
            if (iVar6 < iVar7 + -2) {
              iVar8 = iVar6;
            }
          }
          iVar6 = (int)((float)iVar12 * param_5);
          if (iVar6 < 0) {
            iVar16 = 0;
          }
          else {
            iVar16 = iVar12;
            if (iVar6 < iVar12) {
              iVar16 = iVar6;
            }
          }
          if (iVar7 < 0x100) {
            if (iVar8 < (int)(uint)*(byte *)((longlong)iVar16 + uVar15)) {
              iVar16 = iVar16 + -1;
              lVar10 = (longlong)iVar16;
              iVar14 = 0;
              if (0 < iVar16) {
                do {
                  iVar14 = iVar16;
                  if ((int)(uint)*(byte *)(lVar10 + uVar15) <= iVar8) break;
                  iVar16 = iVar16 + -1;
                  lVar10 = lVar10 + -1;
                  iVar14 = 0;
                } while (0 < lVar10);
              }
            }
            else {
              iVar16 = iVar16 + 1;
              for (lVar10 = (longlong)iVar16; lVar10 <= (longlong)iVar2 + -1; lVar10 = lVar10 + 1) {
                if (iVar8 < (int)(uint)*(byte *)(lVar10 + uVar15)) {
                  iVar14 = iVar16 + -1;
                  break;
                }
                iVar16 = iVar16 + 1;
              }
            }
            uVar11 = (uint)*(byte *)((longlong)iVar14 + uVar15);
            if (iVar14 + 1 <= iVar12) {
              iVar12 = iVar14 + 1;
            }
            uVar9 = (uint)*(byte *)((longlong)iVar12 + uVar15);
          }
          else {
            if (iVar8 < (int)(uint)*(ushort *)(uVar15 + (longlong)iVar16 * 2)) {
              iVar16 = iVar16 + -1;
              lVar10 = (longlong)iVar16;
              iVar14 = 0;
              if (0 < iVar16) {
                do {
                  iVar14 = iVar16;
                  if ((int)(uint)*(ushort *)(uVar15 + lVar10 * 2) <= iVar8) break;
                  iVar16 = iVar16 + -1;
                  lVar10 = lVar10 + -1;
                  iVar14 = 0;
                } while (0 < lVar10);
              }
            }
            else {
              iVar16 = iVar16 + 1;
              for (lVar10 = (longlong)iVar16; lVar10 <= iVar12; lVar10 = lVar10 + 1) {
                if (iVar8 < (int)(uint)*(ushort *)(uVar15 + lVar10 * 2)) {
                  iVar14 = iVar16 + -1;
                  break;
                }
                iVar16 = iVar16 + 1;
              }
            }
            uVar11 = (uint)*(ushort *)(uVar15 + (longlong)iVar14 * 2);
            if (iVar14 + 1 <= iVar12) {
              iVar12 = iVar14 + 1;
            }
            uVar9 = (uint)*(ushort *)(uVar15 + (longlong)iVar12 * 2);
          }
          if (*(char *)(param_4 + 0x198) == '\x01') goto LAB_142270604;
          iVar7 = 1;
          if (0 < (int)(uVar9 - uVar11)) {
            iVar7 = uVar9 - uVar11;
          }
          fVar20 = (fVar20 - (float)uVar11) / (float)iVar7;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x248,L"%i: unknown or unsupported animation compression format",4);
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0x248,
                   L"%i: unknown or unsupported animation compression format",4);
        fVar17 = DAT_1468b5d98;
        fVar18 = DAT_1468b5d94;
        fVar19 = DAT_1468b5d90;
        if (iVar14 != iVar12) {
          LowLevelFatalErrorHandler
                    ("Unknown",0x248,L"%i: unknown or unsupported animation compression format",4);
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x248,
                     L"%i: unknown or unsupported animation compression format",4);
          fVar19 = (DAT_1468b5d90 - fVar19) * fVar20 + fVar19;
          fVar17 = (DAT_1468b5d98 - fVar17) * fVar20 + fVar17;
          fVar18 = (DAT_1468b5d94 - fVar18) * fVar20 + fVar18;
        }
        lVar13 = lVar13 + 1;
        auVar4._4_4_ = fVar18;
        auVar4._0_4_ = fVar19;
        auVar4._8_4_ = fVar17;
        auVar4._12_4_ = 0;
        *(undefined1 (*) [16])((longlong)iVar1 * 0x30 + lVar3 + 0x20) = auVar4;
      } while (lVar13 < (int)lVar5);
    }
  }
  return;
}



// FUNCTION 142270790 FUN_142270790 body=1054 status=ok
// SIG undefined FUN_142270790(void)

void FUN_142270790(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (0 < *(int *)(param_4 + 0x110)) {
    lVar5 = param_3[1];
    param_5 = param_5 / *(float *)(param_4 + 0x90);
    if (0 < (longlong)(int)lVar5) {
      lVar13 = 0;
      do {
        iVar7 = *(int *)(param_4 + 0xb8);
        iVar1 = *(int *)(*param_3 + lVar13 * 8);
        lVar3 = *param_2;
        lVar10 = (longlong)(*(int *)(param_4 + 0x118) * *(int *)(*param_3 + 4 + lVar13 * 8));
        iVar2 = *(int *)(*(longlong *)(param_4 + 0x108) + 4 + lVar10 * 4);
        iVar12 = iVar2 + -1;
        uVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0x108) + lVar10 * 4) + 3 +
                 *(longlong *)(param_4 + 0x120) + (longlong)(iVar2 * 0xc) & 0xfffffffffffffffc;
        if ((iVar2 < 2) || (param_5 <= 0.0)) {
          iVar12 = 0;
          iVar14 = 0;
LAB_142270a24:
          fVar20 = 0.0;
        }
        else {
          iVar14 = iVar12;
          if (1.0 <= param_5) goto LAB_142270a24;
          fVar20 = (float)(iVar7 + -1) * param_5;
          iVar6 = (int)fVar20;
          if (iVar6 < 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = iVar7 + -2;
            if (iVar6 < iVar7 + -2) {
              iVar8 = iVar6;
            }
          }
          iVar6 = (int)((float)iVar12 * param_5);
          if (iVar6 < 0) {
            iVar16 = 0;
          }
          else {
            iVar16 = iVar12;
            if (iVar6 < iVar12) {
              iVar16 = iVar6;
            }
          }
          if (iVar7 < 0x100) {
            if (iVar8 < (int)(uint)*(byte *)((longlong)iVar16 + uVar15)) {
              iVar16 = iVar16 + -1;
              lVar10 = (longlong)iVar16;
              iVar14 = 0;
              if (0 < iVar16) {
                do {
                  iVar14 = iVar16;
                  if ((int)(uint)*(byte *)(lVar10 + uVar15) <= iVar8) break;
                  iVar16 = iVar16 + -1;
                  lVar10 = lVar10 + -1;
                  iVar14 = 0;
                } while (0 < lVar10);
              }
            }
            else {
              iVar16 = iVar16 + 1;
              for (lVar10 = (longlong)iVar16; lVar10 <= (longlong)iVar2 + -1; lVar10 = lVar10 + 1) {
                if (iVar8 < (int)(uint)*(byte *)(lVar10 + uVar15)) {
                  iVar14 = iVar16 + -1;
                  break;
                }
                iVar16 = iVar16 + 1;
              }
            }
            uVar11 = (uint)*(byte *)((longlong)iVar14 + uVar15);
            if (iVar14 + 1 <= iVar12) {
              iVar12 = iVar14 + 1;
            }
            uVar9 = (uint)*(byte *)((longlong)iVar12 + uVar15);
          }
          else {
            if (iVar8 < (int)(uint)*(ushort *)(uVar15 + (longlong)iVar16 * 2)) {
              iVar16 = iVar16 + -1;
              lVar10 = (longlong)iVar16;
              iVar14 = 0;
              if (0 < iVar16) {
                do {
                  iVar14 = iVar16;
                  if ((int)(uint)*(ushort *)(uVar15 + lVar10 * 2) <= iVar8) break;
                  iVar16 = iVar16 + -1;
                  lVar10 = lVar10 + -1;
                  iVar14 = 0;
                } while (0 < lVar10);
              }
            }
            else {
              iVar16 = iVar16 + 1;
              for (lVar10 = (longlong)iVar16; lVar10 <= iVar12; lVar10 = lVar10 + 1) {
                if (iVar8 < (int)(uint)*(ushort *)(uVar15 + lVar10 * 2)) {
                  iVar14 = iVar16 + -1;
                  break;
                }
                iVar16 = iVar16 + 1;
              }
            }
            uVar11 = (uint)*(ushort *)(uVar15 + (longlong)iVar14 * 2);
            if (iVar14 + 1 <= iVar12) {
              iVar12 = iVar14 + 1;
            }
            uVar9 = (uint)*(ushort *)(uVar15 + (longlong)iVar12 * 2);
          }
          if (*(char *)(param_4 + 0x198) == '\x01') goto LAB_142270a24;
          iVar7 = 1;
          if (0 < (int)(uVar9 - uVar11)) {
            iVar7 = uVar9 - uVar11;
          }
          fVar20 = (fVar20 - (float)uVar11) / (float)iVar7;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x248,L"%i: unknown or unsupported animation compression format",5);
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0x248,
                   L"%i: unknown or unsupported animation compression format",5);
        fVar17 = DAT_1468b5d98;
        fVar18 = DAT_1468b5d94;
        fVar19 = DAT_1468b5d90;
        if (iVar14 != iVar12) {
          LowLevelFatalErrorHandler
                    ("Unknown",0x248,L"%i: unknown or unsupported animation compression format",5);
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x248,
                     L"%i: unknown or unsupported animation compression format",5);
          fVar19 = (DAT_1468b5d90 - fVar19) * fVar20 + fVar19;
          fVar17 = (DAT_1468b5d98 - fVar17) * fVar20 + fVar17;
          fVar18 = (DAT_1468b5d94 - fVar18) * fVar20 + fVar18;
        }
        lVar13 = lVar13 + 1;
        auVar4._4_4_ = fVar18;
        auVar4._0_4_ = fVar19;
        auVar4._8_4_ = fVar17;
        auVar4._12_4_ = 0;
        *(undefined1 (*) [16])((longlong)iVar1 * 0x30 + lVar3 + 0x20) = auVar4;
      } while (lVar13 < (int)lVar5);
    }
  }
  return;
}



// FUNCTION 142270bb0 FUN_142270bb0 body=566 status=ok
// SIG undefined FUN_142270bb0(void)

void FUN_142270bb0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  
  if (0 < *(int *)(param_4 + 0x110)) {
    param_5 = param_5 / *(float *)(param_4 + 0x90);
    lVar5 = param_3[1];
    if (0 < (longlong)(int)lVar5) {
      lVar10 = 0;
      do {
        lVar1 = lVar10 * 8;
        lVar7 = (longlong)(*(int *)(param_4 + 0x118) * *(int *)(*param_3 + 4 + lVar10 * 8));
        iVar2 = *(int *)(*(longlong *)(param_4 + 0x108) + 4 + lVar7 * 4);
        iVar3 = *(int *)(param_4 + 0xb8);
        uVar11 = *(longlong *)(param_4 + 0x120) + 3 +
                 (longlong)*(int *)(*(longlong *)(param_4 + 0x108) + lVar7 * 4) & 0xfffffffffffffffc
        ;
        iVar9 = iVar2 + -1;
        if (((1 < iVar2) && (0.0 < param_5)) && (param_5 < 1.0)) {
          iVar6 = (int)((float)(iVar3 + -1) * param_5);
          if (iVar6 < 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = iVar3 + -2;
            if (iVar6 < iVar3 + -2) {
              iVar8 = iVar6;
            }
          }
          iVar6 = (int)((float)iVar9 * param_5);
          if (iVar6 < 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = iVar9;
            if (iVar6 < iVar9) {
              iVar12 = iVar6;
            }
          }
          if (iVar3 < 0x100) {
            if (iVar8 < (int)(uint)*(byte *)((longlong)iVar12 + uVar11)) {
              lVar7 = (longlong)(iVar12 + -1);
              if (0 < iVar12 + -1) {
                do {
                  if ((int)(uint)*(byte *)(lVar7 + uVar11) <= iVar8) break;
                  lVar7 = lVar7 + -1;
                } while (0 < lVar7);
              }
            }
            else {
              for (lVar7 = (longlong)(iVar12 + 1);
                  (lVar7 <= (longlong)iVar2 + -1 && ((int)(uint)*(byte *)(lVar7 + uVar11) <= iVar8))
                  ; lVar7 = lVar7 + 1) {
              }
            }
          }
          else if (iVar8 < (int)(uint)*(ushort *)(uVar11 + (longlong)iVar12 * 2)) {
            lVar7 = (longlong)(iVar12 + -1);
            if (0 < iVar12 + -1) {
              do {
                if ((int)(uint)*(ushort *)(uVar11 + lVar7 * 2) <= iVar8) break;
                lVar7 = lVar7 + -1;
              } while (0 < lVar7);
            }
          }
          else {
            lVar7 = (longlong)(iVar12 + 1);
            while ((lVar7 <= iVar9 && ((int)(uint)*(ushort *)(uVar11 + lVar7 * 2) <= iVar8))) {
              lVar7 = lVar7 + 1;
            }
          }
        }
        lVar10 = lVar10 + 1;
        auVar4._4_4_ = DAT_1468b5d94;
        auVar4._0_4_ = DAT_1468b5d90;
        auVar4._8_4_ = DAT_1468b5d98;
        auVar4._12_4_ = 0;
        *(undefined1 (*) [16])((longlong)*(int *)(*param_3 + lVar1) * 0x30 + *param_2 + 0x20) =
             auVar4;
      } while (lVar10 < (int)lVar5);
    }
  }
  return;
}



// FUNCTION 142270df0 FUN_142270df0 body=201 status=ok
// SIG undefined FUN_142270df0(void)

void FUN_142270df0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_4 + 0x110)) {
    lVar2 = param_3[1];
    fVar1 = *(float *)(param_4 + 0x90);
    if (0 < (longlong)(int)lVar2) {
      lVar3 = 0;
      do {
        FUN_142265620((longlong)*(int *)(*param_3 + lVar3 * 8) * 0x30 + *param_2,param_4,
                      *(undefined4 *)
                       (*(longlong *)(param_4 + 0x108) +
                       (longlong)(*(int *)(*param_3 + 4 + lVar3 * 8) * *(int *)(param_4 + 0x118)) *
                       4),param_5,param_5 / fVar1);
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)lVar2);
    }
  }
  return;
}



// FUNCTION 142270ec0 FUN_142270ec0 body=50 status=ok
// SIG undefined FUN_142270ec0(void)

longlong FUN_142270ec0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x5a8);
  lVar2 = (longlong)*(int *)(param_1 + 0x5b0) * 0x38 + lVar1;
  while( true ) {
    if (lVar1 == lVar2) {
      return 0;
    }
    if (*(longlong *)(lVar1 + 0x28) == param_2) break;
    lVar1 = lVar1 + 0x38;
  }
  return lVar1;
}



// FUNCTION 142270f00 FUN_142270f00 body=611 status=ok
// SIG undefined FUN_142270f00(void)

void FUN_142270f00(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fStack_64;
  
  iVar2 = (int)param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  lVar9 = (longlong)iVar2;
  if (0 < iVar2) {
    do {
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar9 = 0;
    do {
      lVar1 = lVar9 * 8;
      lVar7 = (longlong)(*(int *)(*param_3 + 4 + lVar9 * 8) << 2);
      lVar11 = *(longlong *)(param_4 + 0xf8);
      lVar10 = (longlong)*(int *)(lVar11 + lVar7 * 4) + *(longlong *)(param_4 + 0x120);
      iVar8 = *(int *)(lVar11 + 4 + lVar7 * 4);
      if (iVar8 < 2) {
        fVar15 = 0.0;
        iVar8 = 0;
        iVar6 = 0;
      }
      else if (0.0 < param_5) {
        iVar8 = iVar8 + -1;
        iVar6 = iVar8;
        if (param_5 < 1.0) {
          fVar15 = (float)iVar8 * param_5;
          iVar5 = (int)fVar15;
          fVar12 = fVar15;
          if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar15)) {
            auVar13._4_4_ = fVar15;
            auVar13._0_4_ = fVar15;
            auVar13._8_8_ = 0;
            uVar4 = movmskps((int)lVar11,auVar13);
            fVar12 = (float)(int)(iVar5 - (uVar4 & 1));
          }
          if ((int)fVar12 <= iVar8) {
            iVar6 = (int)fVar12;
          }
          if (*(char *)(param_4 + 0x198) == '\x01') {
            fVar15 = 0.0;
          }
          else {
            fVar15 = fVar15 - fVar12;
          }
          if (iVar6 + 1 <= iVar8) {
            iVar8 = iVar6 + 1;
          }
        }
        else {
          fVar15 = 0.0;
        }
      }
      else {
        fVar15 = 0.0;
        iVar8 = 0;
        iVar6 = 0;
      }
      lVar11 = (longlong)(iVar6 * 0xc);
      fVar12 = *(float *)(lVar11 + 8 + lVar10);
      if (iVar6 == iVar8) {
        fVar14 = (float)*(undefined8 *)(lVar11 + lVar10);
        fStack_64 = (float)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20);
      }
      else {
        lVar7 = (longlong)(iVar8 * 0xc);
        fVar14 = (float)*(undefined8 *)(lVar11 + lVar10);
        fStack_64 = (float)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20);
        fVar14 = ((float)*(undefined8 *)(lVar7 + lVar10) - fVar14) * fVar15 + fVar14;
        fStack_64 = ((float)((ulonglong)*(undefined8 *)(lVar7 + lVar10) >> 0x20) - fStack_64) *
                    fVar15 + fStack_64;
        fVar12 = (*(float *)(lVar7 + 8 + lVar10) - fVar12) * fVar15 + fVar12;
      }
      lVar9 = lVar9 + 1;
      auVar3._4_4_ = fStack_64;
      auVar3._0_4_ = fVar14;
      auVar3._8_4_ = fVar12;
      auVar3._12_4_ = 0;
      *(undefined1 (*) [16])((longlong)*(int *)(*param_3 + lVar1) * 0x30 + *param_2 + 0x10) = auVar3
      ;
    } while (lVar9 < iVar2);
  }
  return;
}



// FUNCTION 142271170 FUN_142271170 body=733 status=ok
// SIG undefined FUN_142271170(void)

void FUN_142271170(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  
  iVar2 = (int)param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  lVar9 = (longlong)iVar2;
  if (0 < iVar2) {
    do {
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar9 = 0;
    do {
      lVar1 = lVar9 * 8;
      lVar7 = (longlong)(*(int *)(*param_3 + 4 + lVar9 * 8) << 2);
      lVar11 = *(longlong *)(param_4 + 0xf8);
      lVar10 = (longlong)*(int *)(lVar11 + lVar7 * 4) + *(longlong *)(param_4 + 0x120);
      iVar8 = *(int *)(lVar11 + 4 + lVar7 * 4);
      if (iVar8 < 2) {
        fVar16 = 0.0;
        iVar8 = 0;
        iVar6 = 0;
      }
      else if (0.0 < param_5) {
        iVar8 = iVar8 + -1;
        iVar6 = iVar8;
        if (param_5 < 1.0) {
          fVar16 = (float)iVar8 * param_5;
          iVar5 = (int)fVar16;
          fVar12 = fVar16;
          if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar16)) {
            auVar14._4_4_ = fVar16;
            auVar14._0_4_ = fVar16;
            auVar14._8_8_ = 0;
            uVar4 = movmskps((int)lVar11,auVar14);
            fVar12 = (float)(int)(iVar5 - (uVar4 & 1));
          }
          if ((int)fVar12 <= iVar8) {
            iVar6 = (int)fVar12;
          }
          if (*(char *)(param_4 + 0x198) == '\x01') {
            fVar16 = 0.0;
          }
          else {
            fVar16 = fVar16 - fVar12;
          }
          if (iVar6 + 1 <= iVar8) {
            iVar8 = iVar6 + 1;
          }
        }
        else {
          fVar16 = 0.0;
        }
      }
      else {
        fVar16 = 0.0;
        iVar8 = 0;
        iVar6 = 0;
      }
      lVar11 = (longlong)(iVar6 * 0xc);
      if (iVar6 == iVar8) {
        fVar12 = (float)(int)(*(ushort *)(lVar11 + lVar10) - 0x7fff) * 0.003906369;
        fVar13 = (float)(int)(*(ushort *)(lVar11 + 2 + lVar10) - 0x7fff) * 0.003906369;
        fVar15 = (float)(int)(*(ushort *)(lVar11 + 4 + lVar10) - 0x7fff) * 0.003906369;
      }
      else {
        lVar7 = (longlong)(iVar8 * 0xc);
        fVar12 = (float)(int)(*(ushort *)(lVar11 + lVar10) - 0x7fff) * 0.003906369;
        fVar13 = (float)(int)(*(ushort *)(lVar11 + 2 + lVar10) - 0x7fff) * 0.003906369;
        fVar15 = (float)(int)(*(ushort *)(lVar11 + 4 + lVar10) - 0x7fff) * 0.003906369;
        fVar12 = ((float)(int)(*(ushort *)(lVar7 + lVar10) - 0x7fff) * 0.003906369 - fVar12) *
                 fVar16 + fVar12;
        fVar13 = ((float)(int)(*(ushort *)(lVar7 + 2 + lVar10) - 0x7fff) * 0.003906369 - fVar13) *
                 fVar16 + fVar13;
        fVar15 = ((float)(int)(*(ushort *)(lVar7 + 4 + lVar10) - 0x7fff) * 0.003906369 - fVar15) *
                 fVar16 + fVar15;
      }
      lVar9 = lVar9 + 1;
      auVar3._4_4_ = fVar13;
      auVar3._0_4_ = fVar12;
      auVar3._8_4_ = fVar15;
      auVar3._12_4_ = 0;
      *(undefined1 (*) [16])((longlong)*(int *)(*param_3 + lVar1) * 0x30 + *param_2 + 0x10) = auVar3
      ;
    } while (lVar9 < iVar2);
  }
  return;
}



// FUNCTION 142271450 FUN_142271450 body=1051 status=ok
// SIG undefined FUN_142271450(void)

void FUN_142271450(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  float *pfVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar2 = (int)param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  lVar10 = (longlong)iVar2;
  if (0 < iVar2) {
    do {
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    lVar10 = 0;
    do {
      lVar1 = lVar10 * 8;
      lVar8 = (longlong)(*(int *)(*param_3 + 4 + lVar10 * 8) << 2);
      lVar11 = *(longlong *)(param_4 + 0xf8);
      pfVar13 = (float *)((longlong)*(int *)(lVar11 + lVar8 * 4) + *(longlong *)(param_4 + 0x120));
      iVar6 = *(int *)(lVar11 + 4 + lVar8 * 4);
      if (iVar6 < 2) {
        fVar18 = 0.0;
        iVar12 = 0;
        iVar9 = 0;
      }
      else if (0.0 < param_5) {
        iVar9 = iVar6 + -1;
        iVar12 = iVar9;
        if (param_5 < 1.0) {
          fVar18 = (float)iVar9 * param_5;
          iVar7 = (int)fVar18;
          fVar17 = fVar18;
          if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar18)) {
            auVar15._4_4_ = fVar18;
            auVar15._0_4_ = fVar18;
            auVar15._8_8_ = 0;
            uVar5 = movmskps((int)lVar11,auVar15);
            fVar17 = (float)(int)(iVar7 - (uVar5 & 1));
          }
          if ((int)fVar17 <= iVar9) {
            iVar12 = (int)fVar17;
          }
          if (*(char *)(param_4 + 0x198) == '\x01') {
            fVar18 = 0.0;
          }
          else {
            fVar18 = fVar18 - fVar17;
          }
          if (iVar12 + 1 <= iVar9) {
            iVar9 = iVar12 + 1;
          }
        }
        else {
          fVar18 = 0.0;
        }
      }
      else {
        fVar18 = 0.0;
        iVar12 = 0;
        iVar9 = 0;
      }
      lVar11 = 0x18;
      if (iVar6 < 2) {
        lVar11 = 0;
      }
      uVar5 = *(uint *)(iVar12 * 4 + lVar11 + (longlong)pfVar13);
      iVar6 = (uVar5 & 0x3ff) - 0x1ff;
      if (iVar12 == iVar9) {
        fVar14 = (float)iVar6 * 0.0019569471 * pfVar13[3] + *pfVar13;
        fVar17 = (float)(int)((uVar5 >> 0x15) - 0x3ff) * 0.0009775171 * pfVar13[5] + pfVar13[2];
        fVar16 = (float)(int)((uVar5 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * pfVar13[4] +
                 pfVar13[1];
      }
      else {
        uVar3 = *(uint *)(iVar9 * 4 + lVar11 + (longlong)pfVar13);
        fVar14 = (float)iVar6 * 0.0019569471 * pfVar13[3] + *pfVar13;
        fVar16 = (float)(int)((uVar5 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * pfVar13[4] +
                 pfVar13[1];
        fVar17 = (float)(int)((uVar5 >> 0x15) - 0x3ff) * 0.0009775171 * pfVar13[5] + pfVar13[2];
        fVar14 = (((float)(int)((uVar3 & 0x3ff) - 0x1ff) * 0.0019569471 * pfVar13[3] + *pfVar13) -
                 fVar14) * fVar18 + fVar14;
        fVar17 = (((float)(int)((uVar3 >> 0x15) - 0x3ff) * 0.0009775171 * pfVar13[5] + pfVar13[2]) -
                 fVar17) * fVar18 + fVar17;
        fVar16 = (((float)(int)((uVar3 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * pfVar13[4] +
                  pfVar13[1]) - fVar16) * fVar18 + fVar16;
      }
      lVar10 = lVar10 + 1;
      auVar4._4_4_ = fVar16;
      auVar4._0_4_ = fVar14;
      auVar4._8_4_ = fVar17;
      auVar4._12_4_ = 0;
      *(undefined1 (*) [16])((longlong)*(int *)(*param_3 + lVar1) * 0x30 + *param_2 + 0x10) = auVar4
      ;
    } while (lVar10 < iVar2);
  }
  return;
}



// FUNCTION 142271870 FUN_142271870 body=846 status=ok
// SIG undefined FUN_142271870(void)

void FUN_142271870(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  
  iVar1 = (int)param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  lVar7 = (longlong)iVar1;
  if (0 < iVar1) {
    do {
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar7 = 0;
    do {
      lVar3 = *param_2;
      iVar2 = *(int *)(*param_3 + lVar7 * 8);
      iVar8 = *(int *)(*(longlong *)(param_4 + 0xf8) + 4 +
                      (longlong)(*(int *)(*param_3 + 4 + lVar7 * 8) << 2) * 4);
      if (iVar8 < 2) {
        fVar14 = 0.0;
        iVar8 = 0;
        iVar9 = 0;
      }
      else if (0.0 < param_5) {
        iVar8 = iVar8 + -1;
        iVar9 = iVar8;
        if (param_5 < 1.0) {
          fVar14 = (float)iVar8 * param_5;
          iVar6 = (int)fVar14;
          fVar11 = fVar14;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar14)) {
            auVar13._4_4_ = fVar14;
            auVar13._0_4_ = fVar14;
            auVar13._8_8_ = 0;
            uVar5 = movmskps((int)*(longlong *)(param_4 + 0xf8),auVar13);
            fVar11 = (float)(int)(iVar6 - (uVar5 & 1));
          }
          if ((int)fVar11 <= iVar8) {
            iVar9 = (int)fVar11;
          }
          if (*(char *)(param_4 + 0x198) == '\x01') {
            fVar14 = 0.0;
          }
          else {
            fVar14 = fVar14 - fVar11;
          }
          if (iVar9 + 1 <= iVar8) {
            iVar8 = iVar9 + 1;
          }
        }
        else {
          fVar14 = 0.0;
        }
      }
      else {
        fVar14 = 0.0;
        iVar8 = 0;
        iVar9 = 0;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x223,L"%i: unknown or unsupported animation compression format",4);
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x223,
                 L"%i: unknown or unsupported animation compression format",4);
      fVar10 = DAT_1468b5d98;
      fVar12 = DAT_1468b5d94;
      fVar11 = DAT_1468b5d90;
      if (iVar9 != iVar8) {
        LowLevelFatalErrorHandler
                  ("Unknown",0x223,L"%i: unknown or unsupported animation compression format",4);
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0x223,
                   L"%i: unknown or unsupported animation compression format",4);
        fVar11 = (DAT_1468b5d90 - fVar11) * fVar14 + fVar11;
        fVar10 = (DAT_1468b5d98 - fVar10) * fVar14 + fVar10;
        fVar12 = (DAT_1468b5d94 - fVar12) * fVar14 + fVar12;
      }
      lVar7 = lVar7 + 1;
      auVar4._4_4_ = fVar12;
      auVar4._0_4_ = fVar11;
      auVar4._8_4_ = fVar10;
      auVar4._12_4_ = 0;
      *(undefined1 (*) [16])((longlong)iVar2 * 0x30 + lVar3 + 0x10) = auVar4;
    } while (lVar7 < iVar1);
  }
  return;
}



// FUNCTION 142271bc0 FUN_142271bc0 body=846 status=ok
// SIG undefined FUN_142271bc0(void)

void FUN_142271bc0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  
  iVar1 = (int)param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  lVar7 = (longlong)iVar1;
  if (0 < iVar1) {
    do {
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar7 = 0;
    do {
      lVar3 = *param_2;
      iVar2 = *(int *)(*param_3 + lVar7 * 8);
      iVar8 = *(int *)(*(longlong *)(param_4 + 0xf8) + 4 +
                      (longlong)(*(int *)(*param_3 + 4 + lVar7 * 8) << 2) * 4);
      if (iVar8 < 2) {
        fVar14 = 0.0;
        iVar8 = 0;
        iVar9 = 0;
      }
      else if (0.0 < param_5) {
        iVar8 = iVar8 + -1;
        iVar9 = iVar8;
        if (param_5 < 1.0) {
          fVar14 = (float)iVar8 * param_5;
          iVar6 = (int)fVar14;
          fVar11 = fVar14;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar14)) {
            auVar13._4_4_ = fVar14;
            auVar13._0_4_ = fVar14;
            auVar13._8_8_ = 0;
            uVar5 = movmskps((int)*(longlong *)(param_4 + 0xf8),auVar13);
            fVar11 = (float)(int)(iVar6 - (uVar5 & 1));
          }
          if ((int)fVar11 <= iVar8) {
            iVar9 = (int)fVar11;
          }
          if (*(char *)(param_4 + 0x198) == '\x01') {
            fVar14 = 0.0;
          }
          else {
            fVar14 = fVar14 - fVar11;
          }
          if (iVar9 + 1 <= iVar8) {
            iVar8 = iVar9 + 1;
          }
        }
        else {
          fVar14 = 0.0;
        }
      }
      else {
        fVar14 = 0.0;
        iVar8 = 0;
        iVar9 = 0;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x223,L"%i: unknown or unsupported animation compression format",5);
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x223,
                 L"%i: unknown or unsupported animation compression format",5);
      fVar10 = DAT_1468b5d98;
      fVar12 = DAT_1468b5d94;
      fVar11 = DAT_1468b5d90;
      if (iVar9 != iVar8) {
        LowLevelFatalErrorHandler
                  ("Unknown",0x223,L"%i: unknown or unsupported animation compression format",5);
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0x223,
                   L"%i: unknown or unsupported animation compression format",5);
        fVar11 = (DAT_1468b5d90 - fVar11) * fVar14 + fVar11;
        fVar10 = (DAT_1468b5d98 - fVar10) * fVar14 + fVar10;
        fVar12 = (DAT_1468b5d94 - fVar12) * fVar14 + fVar12;
      }
      lVar7 = lVar7 + 1;
      auVar4._4_4_ = fVar12;
      auVar4._0_4_ = fVar11;
      auVar4._8_4_ = fVar10;
      auVar4._12_4_ = 0;
      *(undefined1 (*) [16])((longlong)iVar2 * 0x30 + lVar3 + 0x10) = auVar4;
    } while (lVar7 < iVar1);
  }
  return;
}



// FUNCTION 142271f10 FUN_142271f10 body=379 status=ok
// SIG undefined FUN_142271f10(void)

void FUN_142271f10(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined1 auVar6 [16];
  
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  iVar2 = (int)param_3[1];
  lVar5 = (longlong)iVar2;
  if (0 < iVar2) {
    do {
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lVar5 = 0;
    do {
      lVar1 = lVar5 * 8;
      iVar3 = *(int *)(*(longlong *)(param_4 + 0xf8) + 4 +
                      (longlong)(*(int *)(*param_3 + 4 + lVar5 * 8) << 2) * 4);
      if (((1 < iVar3) && (0.0 < param_5)) && (param_5 < 1.0)) {
        auVar6._0_4_ = (float)(iVar3 + -1) * param_5;
        if (((int)auVar6._0_4_ != -0x80000000) && ((float)(int)auVar6._0_4_ != auVar6._0_4_)) {
          auVar6._4_4_ = auVar6._0_4_;
          auVar6._8_8_ = 0;
          movmskps((int)*(longlong *)(param_4 + 0xf8),auVar6);
        }
      }
      lVar5 = lVar5 + 1;
      auVar4._4_4_ = DAT_1468b5d94;
      auVar4._0_4_ = DAT_1468b5d90;
      auVar4._8_4_ = DAT_1468b5d98;
      auVar4._12_4_ = 0;
      *(undefined1 (*) [16])((longlong)*(int *)(*param_3 + lVar1) * 0x30 + *param_2 + 0x10) = auVar4
      ;
    } while (lVar5 < iVar2);
  }
  return;
}



// FUNCTION 142272090 FUN_142272090 body=870 status=ok
// SIG undefined FUN_142272090(void)

void FUN_142272090(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fStack_84;
  
  lVar5 = param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar5) {
    lVar13 = 0;
    do {
      iVar7 = *(int *)(param_4 + 0xb8);
      lVar1 = lVar13 * 8;
      lVar10 = (longlong)(*(int *)(*param_3 + 4 + lVar13 * 8) << 2);
      iVar3 = *(int *)(*(longlong *)(param_4 + 0xf8) + 4 + lVar10 * 4);
      lVar10 = (longlong)*(int *)(*(longlong *)(param_4 + 0xf8) + lVar10 * 4) +
               *(longlong *)(param_4 + 0x120);
      iVar16 = iVar3 + -1;
      uVar12 = lVar10 + 3 + (longlong)(iVar3 * 0xc) & 0xfffffffffffffffc;
      if ((iVar3 < 2) || (param_5 <= 0.0)) {
        iVar16 = 0;
LAB_14227237a:
        lVar11 = (longlong)(iVar16 * 0xc);
        fVar17 = *(float *)(lVar11 + 8 + lVar10);
        fVar18 = (float)*(undefined8 *)(lVar11 + lVar10);
        fStack_84 = (float)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20);
      }
      else {
        if (1.0 <= param_5) goto LAB_14227237a;
        fVar19 = (float)(iVar7 + -1) * param_5;
        iVar6 = (int)fVar19;
        if (iVar6 < 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = iVar7 + -2;
          if (iVar6 < iVar7 + -2) {
            iVar8 = iVar6;
          }
        }
        iVar6 = (int)((float)iVar16 * param_5);
        if (iVar6 < 0) {
          iVar15 = 0;
        }
        else {
          iVar15 = iVar16;
          if (iVar6 < iVar16) {
            iVar15 = iVar6;
          }
        }
        iVar6 = iVar16;
        if (iVar7 < 0x100) {
          if (iVar8 < (int)(uint)*(byte *)((longlong)iVar15 + uVar12)) {
            iVar15 = iVar15 + -1;
            lVar11 = (longlong)iVar15;
            iVar7 = 0;
            if (0 < iVar15) {
              do {
                iVar7 = iVar15;
                if ((int)(uint)*(byte *)(lVar11 + uVar12) <= iVar8) break;
                iVar15 = iVar15 + -1;
                lVar11 = lVar11 + -1;
                iVar7 = 0;
              } while (0 < lVar11);
            }
          }
          else {
            iVar15 = iVar15 + 1;
            for (lVar11 = (longlong)iVar15; iVar7 = iVar16, lVar11 <= (longlong)iVar3 + -1;
                lVar11 = lVar11 + 1) {
              if (iVar8 < (int)(uint)*(byte *)(lVar11 + uVar12)) {
                iVar7 = iVar15 + -1;
                break;
              }
              iVar15 = iVar15 + 1;
            }
          }
          uVar14 = (uint)*(byte *)((longlong)iVar7 + uVar12);
          if (iVar7 + 1 <= iVar16) {
            iVar6 = iVar7 + 1;
          }
          uVar9 = (uint)*(byte *)((longlong)iVar6 + uVar12);
          iVar16 = iVar7;
        }
        else {
          if (iVar8 < (int)(uint)*(ushort *)(uVar12 + (longlong)iVar15 * 2)) {
            iVar15 = iVar15 + -1;
            lVar11 = (longlong)iVar15;
            iVar7 = 0;
            if (0 < iVar15) {
              do {
                iVar7 = iVar15;
                if ((int)(uint)*(ushort *)(uVar12 + lVar11 * 2) <= iVar8) break;
                iVar15 = iVar15 + -1;
                lVar11 = lVar11 + -1;
                iVar7 = 0;
              } while (0 < lVar11);
            }
          }
          else {
            iVar15 = iVar15 + 1;
            for (lVar11 = (longlong)iVar15; iVar7 = iVar16, lVar11 <= iVar16; lVar11 = lVar11 + 1) {
              if (iVar8 < (int)(uint)*(ushort *)(uVar12 + lVar11 * 2)) {
                iVar7 = iVar15 + -1;
                break;
              }
              iVar15 = iVar15 + 1;
            }
          }
          uVar14 = (uint)*(ushort *)(uVar12 + (longlong)iVar7 * 2);
          if (iVar7 + 1 <= iVar16) {
            iVar6 = iVar7 + 1;
          }
          uVar9 = (uint)*(ushort *)(uVar12 + (longlong)iVar6 * 2);
          iVar16 = iVar7;
        }
        if (*(char *)(param_4 + 0x198) == '\x01') {
          fVar19 = 0.0;
        }
        else {
          iVar7 = 1;
          if (0 < (int)(uVar9 - uVar14)) {
            iVar7 = uVar9 - uVar14;
          }
          fVar19 = (fVar19 - (float)uVar14) / (float)iVar7;
        }
        if (iVar16 == iVar6) goto LAB_14227237a;
        uVar2 = *(undefined8 *)(iVar16 * 0xc + lVar10);
        fVar17 = *(float *)((longlong)(iVar16 * 0xc) + 8 + lVar10);
        lVar11 = (longlong)(iVar6 * 0xc);
        fVar18 = (float)uVar2;
        fStack_84 = (float)((ulonglong)uVar2 >> 0x20);
        fVar18 = ((float)*(undefined8 *)(lVar11 + lVar10) - fVar18) * fVar19 + fVar18;
        fStack_84 = ((float)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) - fStack_84) *
                    fVar19 + fStack_84;
        fVar17 = (*(float *)(lVar11 + 8 + lVar10) - fVar17) * fVar19 + fVar17;
      }
      lVar13 = lVar13 + 1;
      auVar4._4_4_ = fStack_84;
      auVar4._0_4_ = fVar18;
      auVar4._8_4_ = fVar17;
      auVar4._12_4_ = 0;
      *(undefined1 (*) [16])((longlong)*(int *)(*param_3 + lVar1) * 0x30 + *param_2 + 0x10) = auVar4
      ;
    } while (lVar13 < (int)lVar5);
  }
  return;
}



// FUNCTION 142272400 FUN_142272400 body=974 status=ok
// SIG undefined FUN_142272400(void)

void FUN_142272400(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  
  lVar3 = param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar3) {
    lVar12 = 0;
    do {
      iVar5 = *(int *)(param_4 + 0xb8);
      lVar1 = lVar12 * 8;
      lVar8 = (longlong)(*(int *)(*param_3 + 4 + lVar12 * 8) << 2);
      iVar2 = *(int *)(*(longlong *)(param_4 + 0xf8) + 4 + lVar8 * 4);
      lVar8 = (longlong)*(int *)(*(longlong *)(param_4 + 0xf8) + lVar8 * 4) +
              *(longlong *)(param_4 + 0x120);
      iVar14 = iVar2 + -1;
      uVar10 = lVar8 + 3 + (longlong)(iVar2 * 0xc) & 0xfffffffffffffffc;
      if ((iVar2 < 2) || (param_5 <= 0.0)) {
        iVar14 = 0;
LAB_142272731:
        lVar9 = (longlong)(iVar14 * 0xc);
        fVar18 = (float)(int)(*(ushort *)(lVar9 + lVar8) - 0x7fff) * 0.003906369;
        fVar17 = (float)(int)(*(ushort *)(lVar9 + 2 + lVar8) - 0x7fff) * 0.003906369;
        fVar16 = (float)(int)(*(ushort *)(lVar9 + 4 + lVar8) - 0x7fff) * 0.003906369;
      }
      else {
        if (1.0 <= param_5) goto LAB_142272731;
        fVar20 = (float)(iVar5 + -1) * param_5;
        iVar4 = (int)fVar20;
        if (iVar4 < 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = iVar5 + -2;
          if (iVar4 < iVar5 + -2) {
            iVar6 = iVar4;
          }
        }
        iVar4 = (int)((float)iVar14 * param_5);
        if (iVar4 < 0) {
          iVar15 = 0;
        }
        else {
          iVar15 = iVar14;
          if (iVar4 < iVar14) {
            iVar15 = iVar4;
          }
        }
        iVar4 = iVar14;
        if (iVar5 < 0x100) {
          if (iVar6 < (int)(uint)*(byte *)((longlong)iVar15 + uVar10)) {
            iVar15 = iVar15 + -1;
            lVar9 = (longlong)iVar15;
            iVar5 = 0;
            if (0 < iVar15) {
              do {
                iVar5 = iVar15;
                if ((int)(uint)*(byte *)(lVar9 + uVar10) <= iVar6) break;
                iVar15 = iVar15 + -1;
                lVar9 = lVar9 + -1;
                iVar5 = 0;
              } while (0 < lVar9);
            }
          }
          else {
            iVar15 = iVar15 + 1;
            for (lVar9 = (longlong)iVar15; iVar5 = iVar14, lVar9 <= (longlong)iVar2 + -1;
                lVar9 = lVar9 + 1) {
              if (iVar6 < (int)(uint)*(byte *)(lVar9 + uVar10)) {
                iVar5 = iVar15 + -1;
                break;
              }
              iVar15 = iVar15 + 1;
            }
          }
          uVar13 = (uint)*(byte *)((longlong)iVar5 + uVar10);
          if (iVar5 + 1 <= iVar14) {
            iVar4 = iVar5 + 1;
          }
          uVar7 = (uint)*(byte *)((longlong)iVar4 + uVar10);
          iVar14 = iVar5;
        }
        else {
          if (iVar6 < (int)(uint)*(ushort *)(uVar10 + (longlong)iVar15 * 2)) {
            iVar15 = iVar15 + -1;
            lVar9 = (longlong)iVar15;
            iVar5 = 0;
            if (0 < iVar15) {
              do {
                iVar5 = iVar15;
                if ((int)(uint)*(ushort *)(uVar10 + lVar9 * 2) <= iVar6) break;
                iVar15 = iVar15 + -1;
                lVar9 = lVar9 + -1;
                iVar5 = 0;
              } while (0 < lVar9);
            }
          }
          else {
            iVar15 = iVar15 + 1;
            for (lVar9 = (longlong)iVar15; iVar5 = iVar14, lVar9 <= iVar14; lVar9 = lVar9 + 1) {
              if (iVar6 < (int)(uint)*(ushort *)(uVar10 + lVar9 * 2)) {
                iVar5 = iVar15 + -1;
                break;
              }
              iVar15 = iVar15 + 1;
            }
          }
          uVar13 = (uint)*(ushort *)(uVar10 + (longlong)iVar5 * 2);
          if (iVar5 + 1 <= iVar14) {
            iVar4 = iVar5 + 1;
          }
          uVar7 = (uint)*(ushort *)(uVar10 + (longlong)iVar4 * 2);
          iVar14 = iVar5;
        }
        if (*(char *)(param_4 + 0x198) == '\x01') {
          fVar20 = 0.0;
        }
        else {
          iVar5 = 1;
          if (0 < (int)(uVar7 - uVar13)) {
            iVar5 = uVar7 - uVar13;
          }
          fVar20 = (fVar20 - (float)uVar13) / (float)iVar5;
        }
        if (iVar14 == iVar4) goto LAB_142272731;
        lVar9 = (longlong)(iVar14 * 0xc);
        lVar11 = (longlong)(iVar4 * 0xc);
        fVar18 = (float)(int)(*(ushort *)(lVar9 + lVar8) - 0x7fff) * 0.003906369;
        fVar17 = (float)(int)(*(ushort *)(lVar9 + 2 + lVar8) - 0x7fff) * 0.003906369;
        fVar16 = (float)(int)(*(ushort *)(lVar9 + 4 + lVar8) - 0x7fff) * 0.003906369;
        fVar18 = ((float)(int)(*(ushort *)(lVar11 + lVar8) - 0x7fff) * 0.003906369 - fVar18) *
                 fVar20 + fVar18;
        fVar17 = ((float)(int)(*(ushort *)(lVar11 + 2 + lVar8) - 0x7fff) * 0.003906369 - fVar17) *
                 fVar20 + fVar17;
        fVar16 = ((float)(int)(*(ushort *)(lVar11 + 4 + lVar8) - 0x7fff) * 0.003906369 - fVar16) *
                 fVar20 + fVar16;
      }
      lVar12 = lVar12 + 1;
      auVar19._4_4_ = fVar17;
      auVar19._0_4_ = fVar18;
      auVar19._8_4_ = fVar16;
      auVar19._12_4_ = 0;
      *(undefined1 (*) [16])((longlong)*(int *)(*param_3 + lVar1) * 0x30 + *param_2 + 0x10) =
           auVar19;
    } while (lVar12 < (int)lVar3);
  }
  return;
}



// FUNCTION 1422727d0 FUN_1422727d0 body=1239 status=ok
// SIG undefined FUN_1422727d0(void)

void FUN_1422727d0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  lVar4 = param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar4) {
    lVar11 = 0;
    do {
      iVar10 = 0;
      iVar6 = *(int *)(param_4 + 0xb8);
      lVar1 = lVar11 * 8;
      lVar8 = (longlong)(*(int *)(*param_3 + 4 + lVar11 * 8) << 2);
      iVar2 = *(int *)(*(longlong *)(param_4 + 0xf8) + 4 + lVar8 * 4);
      pfVar12 = (float *)((longlong)*(int *)(*(longlong *)(param_4 + 0xf8) + lVar8 * 4) +
                         *(longlong *)(param_4 + 0x120));
      iVar14 = iVar2 + -1;
      uVar9 = (longlong)pfVar12 + (longlong)(iVar2 * 4) + 3 & 0xfffffffffffffffc;
      iVar17 = 0;
      iVar15 = iVar17;
      iVar16 = iVar10;
      if (((iVar2 < 2) || (param_5 <= 0.0)) || (iVar15 = iVar14, iVar16 = iVar14, 1.0 <= param_5)) {
LAB_142272a87:
        fVar21 = 0.0;
      }
      else {
        fVar21 = (float)(iVar6 + -1) * param_5;
        iVar5 = (int)fVar21;
        if ((-1 < iVar5) && (iVar10 = iVar6 + -2, iVar5 < iVar6 + -2)) {
          iVar10 = iVar5;
        }
        iVar5 = (int)((float)iVar14 * param_5);
        if ((-1 < iVar5) && (iVar17 = iVar14, iVar5 < iVar14)) {
          iVar17 = iVar5;
        }
        if (iVar6 < 0x100) {
          if (iVar10 < (int)(uint)*(byte *)((longlong)iVar17 + uVar9)) {
            iVar17 = iVar17 + -1;
            lVar8 = (longlong)iVar17;
            iVar16 = 0;
            if (0 < iVar17) {
              do {
                iVar16 = iVar17;
                if ((int)(uint)*(byte *)(lVar8 + uVar9) <= iVar10) break;
                iVar17 = iVar17 + -1;
                lVar8 = lVar8 + -1;
                iVar16 = 0;
              } while (0 < lVar8);
            }
          }
          else {
            iVar17 = iVar17 + 1;
            for (lVar8 = (longlong)iVar17; lVar8 <= (longlong)iVar2 + -1; lVar8 = lVar8 + 1) {
              if (iVar10 < (int)(uint)*(byte *)(lVar8 + uVar9)) {
                iVar16 = iVar17 + -1;
                break;
              }
              iVar17 = iVar17 + 1;
            }
          }
          uVar13 = (uint)*(byte *)((longlong)iVar16 + uVar9);
          if (iVar16 + 1 <= iVar14) {
            iVar15 = iVar16 + 1;
          }
          uVar7 = (uint)*(byte *)((longlong)iVar15 + uVar9);
        }
        else {
          if (iVar10 < (int)(uint)*(ushort *)(uVar9 + (longlong)iVar17 * 2)) {
            iVar17 = iVar17 + -1;
            lVar8 = (longlong)iVar17;
            iVar16 = 0;
            if (0 < iVar17) {
              do {
                iVar16 = iVar17;
                if ((int)(uint)*(ushort *)(uVar9 + lVar8 * 2) <= iVar10) break;
                iVar17 = iVar17 + -1;
                lVar8 = lVar8 + -1;
                iVar16 = 0;
              } while (0 < lVar8);
            }
          }
          else {
            iVar17 = iVar17 + 1;
            for (lVar8 = (longlong)iVar17; lVar8 <= iVar14; lVar8 = lVar8 + 1) {
              if (iVar10 < (int)(uint)*(ushort *)(uVar9 + lVar8 * 2)) {
                iVar16 = iVar17 + -1;
                break;
              }
              iVar17 = iVar17 + 1;
            }
          }
          uVar13 = (uint)*(ushort *)(uVar9 + (longlong)iVar16 * 2);
          if (iVar16 + 1 <= iVar14) {
            iVar15 = iVar16 + 1;
          }
          uVar7 = (uint)*(ushort *)(uVar9 + (longlong)iVar15 * 2);
        }
        if (*(char *)(param_4 + 0x198) == '\x01') goto LAB_142272a87;
        iVar6 = 1;
        if (0 < (int)(uVar7 - uVar13)) {
          iVar6 = uVar7 - uVar13;
        }
        fVar21 = (fVar21 - (float)uVar13) / (float)iVar6;
      }
      lVar8 = 0x18;
      if (iVar2 < 2) {
        lVar8 = 0;
      }
      uVar13 = *(uint *)(iVar16 * 4 + lVar8 + (longlong)pfVar12);
      iVar6 = (uVar13 & 0x3ff) - 0x1ff;
      if (iVar16 == iVar15) {
        fVar18 = (float)iVar6 * 0.0019569471 * pfVar12[3] + *pfVar12;
        fVar20 = (float)(int)((uVar13 >> 0x15) - 0x3ff) * 0.0009775171 * pfVar12[5] + pfVar12[2];
        fVar19 = (float)(int)((uVar13 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * pfVar12[4] +
                 pfVar12[1];
      }
      else {
        uVar7 = *(uint *)(iVar15 * 4 + lVar8 + (longlong)pfVar12);
        fVar18 = (float)iVar6 * 0.0019569471 * pfVar12[3] + *pfVar12;
        fVar19 = (float)(int)((uVar13 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * pfVar12[4] +
                 pfVar12[1];
        fVar20 = (float)(int)((uVar13 >> 0x15) - 0x3ff) * 0.0009775171 * pfVar12[5] + pfVar12[2];
        fVar18 = (((float)(int)((uVar7 & 0x3ff) - 0x1ff) * 0.0019569471 * pfVar12[3] + *pfVar12) -
                 fVar18) * fVar21 + fVar18;
        fVar20 = (((float)(int)((uVar7 >> 0x15) - 0x3ff) * 0.0009775171 * pfVar12[5] + pfVar12[2]) -
                 fVar20) * fVar21 + fVar20;
        fVar19 = (((float)(int)((uVar7 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * pfVar12[4] +
                  pfVar12[1]) - fVar19) * fVar21 + fVar19;
      }
      lVar11 = lVar11 + 1;
      auVar3._4_4_ = fVar19;
      auVar3._0_4_ = fVar18;
      auVar3._8_4_ = fVar20;
      auVar3._12_4_ = 0;
      *(undefined1 (*) [16])((longlong)*(int *)(*param_3 + lVar1) * 0x30 + *param_2 + 0x10) = auVar3
      ;
    } while (lVar11 < (int)lVar4);
  }
  return;
}



// FUNCTION 142272cb0 FUN_142272cb0 body=1033 status=ok
// SIG undefined FUN_142272cb0(void)

void FUN_142272cb0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar5 = param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar5) {
    lVar13 = 0;
    do {
      iVar7 = *(int *)(param_4 + 0xb8);
      iVar1 = *(int *)(*param_3 + lVar13 * 8);
      lVar10 = (longlong)(*(int *)(*param_3 + 4 + lVar13 * 8) << 2);
      lVar3 = *param_2;
      iVar2 = *(int *)(*(longlong *)(param_4 + 0xf8) + 4 + lVar10 * 4);
      iVar12 = iVar2 + -1;
      uVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xf8) + lVar10 * 4) + 3 +
               *(longlong *)(param_4 + 0x120) + (longlong)(iVar2 * 0xc) & 0xfffffffffffffffc;
      if ((iVar2 < 2) || (param_5 <= 0.0)) {
        iVar12 = 0;
        iVar14 = 0;
LAB_142272f35:
        fVar20 = 0.0;
      }
      else {
        iVar14 = iVar12;
        if (1.0 <= param_5) goto LAB_142272f35;
        fVar20 = (float)(iVar7 + -1) * param_5;
        iVar6 = (int)fVar20;
        if (iVar6 < 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = iVar7 + -2;
          if (iVar6 < iVar7 + -2) {
            iVar8 = iVar6;
          }
        }
        iVar6 = (int)((float)iVar12 * param_5);
        if (iVar6 < 0) {
          iVar16 = 0;
        }
        else {
          iVar16 = iVar12;
          if (iVar6 < iVar12) {
            iVar16 = iVar6;
          }
        }
        if (iVar7 < 0x100) {
          if (iVar8 < (int)(uint)*(byte *)((longlong)iVar16 + uVar15)) {
            iVar16 = iVar16 + -1;
            lVar10 = (longlong)iVar16;
            iVar14 = 0;
            if (0 < iVar16) {
              do {
                iVar14 = iVar16;
                if ((int)(uint)*(byte *)(lVar10 + uVar15) <= iVar8) break;
                iVar16 = iVar16 + -1;
                lVar10 = lVar10 + -1;
                iVar14 = 0;
              } while (0 < lVar10);
            }
          }
          else {
            iVar16 = iVar16 + 1;
            for (lVar10 = (longlong)iVar16; lVar10 <= (longlong)iVar2 + -1; lVar10 = lVar10 + 1) {
              if (iVar8 < (int)(uint)*(byte *)(lVar10 + uVar15)) {
                iVar14 = iVar16 + -1;
                break;
              }
              iVar16 = iVar16 + 1;
            }
          }
          uVar11 = (uint)*(byte *)((longlong)iVar14 + uVar15);
          if (iVar14 + 1 <= iVar12) {
            iVar12 = iVar14 + 1;
          }
          uVar9 = (uint)*(byte *)((longlong)iVar12 + uVar15);
        }
        else {
          if (iVar8 < (int)(uint)*(ushort *)(uVar15 + (longlong)iVar16 * 2)) {
            iVar16 = iVar16 + -1;
            lVar10 = (longlong)iVar16;
            iVar14 = 0;
            if (0 < iVar16) {
              do {
                iVar14 = iVar16;
                if ((int)(uint)*(ushort *)(uVar15 + lVar10 * 2) <= iVar8) break;
                iVar16 = iVar16 + -1;
                lVar10 = lVar10 + -1;
                iVar14 = 0;
              } while (0 < lVar10);
            }
          }
          else {
            iVar16 = iVar16 + 1;
            for (lVar10 = (longlong)iVar16; lVar10 <= iVar12; lVar10 = lVar10 + 1) {
              if (iVar8 < (int)(uint)*(ushort *)(uVar15 + lVar10 * 2)) {
                iVar14 = iVar16 + -1;
                break;
              }
              iVar16 = iVar16 + 1;
            }
          }
          uVar11 = (uint)*(ushort *)(uVar15 + (longlong)iVar14 * 2);
          if (iVar14 + 1 <= iVar12) {
            iVar12 = iVar14 + 1;
          }
          uVar9 = (uint)*(ushort *)(uVar15 + (longlong)iVar12 * 2);
        }
        if (*(char *)(param_4 + 0x198) == '\x01') goto LAB_142272f35;
        iVar7 = 1;
        if (0 < (int)(uVar9 - uVar11)) {
          iVar7 = uVar9 - uVar11;
        }
        fVar20 = (fVar20 - (float)uVar11) / (float)iVar7;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x223,L"%i: unknown or unsupported animation compression format",4);
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x223,
                 L"%i: unknown or unsupported animation compression format",4);
      fVar17 = DAT_1468b5d98;
      fVar18 = DAT_1468b5d94;
      fVar19 = DAT_1468b5d90;
      if (iVar14 != iVar12) {
        LowLevelFatalErrorHandler
                  ("Unknown",0x223,L"%i: unknown or unsupported animation compression format",4);
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0x223,
                   L"%i: unknown or unsupported animation compression format",4);
        fVar19 = (DAT_1468b5d90 - fVar19) * fVar20 + fVar19;
        fVar17 = (DAT_1468b5d98 - fVar17) * fVar20 + fVar17;
        fVar18 = (DAT_1468b5d94 - fVar18) * fVar20 + fVar18;
      }
      lVar13 = lVar13 + 1;
      auVar4._4_4_ = fVar18;
      auVar4._0_4_ = fVar19;
      auVar4._8_4_ = fVar17;
      auVar4._12_4_ = 0;
      *(undefined1 (*) [16])((longlong)iVar1 * 0x30 + lVar3 + 0x10) = auVar4;
    } while (lVar13 < (int)lVar5);
  }
  return;
}



// FUNCTION 1422730c0 FUN_1422730c0 body=1033 status=ok
// SIG undefined FUN_1422730c0(void)

void FUN_1422730c0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar5 = param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar5) {
    lVar13 = 0;
    do {
      iVar7 = *(int *)(param_4 + 0xb8);
      iVar1 = *(int *)(*param_3 + lVar13 * 8);
      lVar10 = (longlong)(*(int *)(*param_3 + 4 + lVar13 * 8) << 2);
      lVar3 = *param_2;
      iVar2 = *(int *)(*(longlong *)(param_4 + 0xf8) + 4 + lVar10 * 4);
      iVar12 = iVar2 + -1;
      uVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xf8) + lVar10 * 4) + 3 +
               *(longlong *)(param_4 + 0x120) + (longlong)(iVar2 * 0xc) & 0xfffffffffffffffc;
      if ((iVar2 < 2) || (param_5 <= 0.0)) {
        iVar12 = 0;
        iVar14 = 0;
LAB_142273345:
        fVar20 = 0.0;
      }
      else {
        iVar14 = iVar12;
        if (1.0 <= param_5) goto LAB_142273345;
        fVar20 = (float)(iVar7 + -1) * param_5;
        iVar6 = (int)fVar20;
        if (iVar6 < 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = iVar7 + -2;
          if (iVar6 < iVar7 + -2) {
            iVar8 = iVar6;
          }
        }
        iVar6 = (int)((float)iVar12 * param_5);
        if (iVar6 < 0) {
          iVar16 = 0;
        }
        else {
          iVar16 = iVar12;
          if (iVar6 < iVar12) {
            iVar16 = iVar6;
          }
        }
        if (iVar7 < 0x100) {
          if (iVar8 < (int)(uint)*(byte *)((longlong)iVar16 + uVar15)) {
            iVar16 = iVar16 + -1;
            lVar10 = (longlong)iVar16;
            iVar14 = 0;
            if (0 < iVar16) {
              do {
                iVar14 = iVar16;
                if ((int)(uint)*(byte *)(lVar10 + uVar15) <= iVar8) break;
                iVar16 = iVar16 + -1;
                lVar10 = lVar10 + -1;
                iVar14 = 0;
              } while (0 < lVar10);
            }
          }
          else {
            iVar16 = iVar16 + 1;
            for (lVar10 = (longlong)iVar16; lVar10 <= (longlong)iVar2 + -1; lVar10 = lVar10 + 1) {
              if (iVar8 < (int)(uint)*(byte *)(lVar10 + uVar15)) {
                iVar14 = iVar16 + -1;
                break;
              }
              iVar16 = iVar16 + 1;
            }
          }
          uVar11 = (uint)*(byte *)((longlong)iVar14 + uVar15);
          if (iVar14 + 1 <= iVar12) {
            iVar12 = iVar14 + 1;
          }
          uVar9 = (uint)*(byte *)((longlong)iVar12 + uVar15);
        }
        else {
          if (iVar8 < (int)(uint)*(ushort *)(uVar15 + (longlong)iVar16 * 2)) {
            iVar16 = iVar16 + -1;
            lVar10 = (longlong)iVar16;
            iVar14 = 0;
            if (0 < iVar16) {
              do {
                iVar14 = iVar16;
                if ((int)(uint)*(ushort *)(uVar15 + lVar10 * 2) <= iVar8) break;
                iVar16 = iVar16 + -1;
                lVar10 = lVar10 + -1;
                iVar14 = 0;
              } while (0 < lVar10);
            }
          }
          else {
            iVar16 = iVar16 + 1;
            for (lVar10 = (longlong)iVar16; lVar10 <= iVar12; lVar10 = lVar10 + 1) {
              if (iVar8 < (int)(uint)*(ushort *)(uVar15 + lVar10 * 2)) {
                iVar14 = iVar16 + -1;
                break;
              }
              iVar16 = iVar16 + 1;
            }
          }
          uVar11 = (uint)*(ushort *)(uVar15 + (longlong)iVar14 * 2);
          if (iVar14 + 1 <= iVar12) {
            iVar12 = iVar14 + 1;
          }
          uVar9 = (uint)*(ushort *)(uVar15 + (longlong)iVar12 * 2);
        }
        if (*(char *)(param_4 + 0x198) == '\x01') goto LAB_142273345;
        iVar7 = 1;
        if (0 < (int)(uVar9 - uVar11)) {
          iVar7 = uVar9 - uVar11;
        }
        fVar20 = (fVar20 - (float)uVar11) / (float)iVar7;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x223,L"%i: unknown or unsupported animation compression format",5);
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x223,
                 L"%i: unknown or unsupported animation compression format",5);
      fVar17 = DAT_1468b5d98;
      fVar18 = DAT_1468b5d94;
      fVar19 = DAT_1468b5d90;
      if (iVar14 != iVar12) {
        LowLevelFatalErrorHandler
                  ("Unknown",0x223,L"%i: unknown or unsupported animation compression format",5);
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0x223,
                   L"%i: unknown or unsupported animation compression format",5);
        fVar19 = (DAT_1468b5d90 - fVar19) * fVar20 + fVar19;
        fVar17 = (DAT_1468b5d98 - fVar17) * fVar20 + fVar17;
        fVar18 = (DAT_1468b5d94 - fVar18) * fVar20 + fVar18;
      }
      lVar13 = lVar13 + 1;
      auVar4._4_4_ = fVar18;
      auVar4._0_4_ = fVar19;
      auVar4._8_4_ = fVar17;
      auVar4._12_4_ = 0;
      *(undefined1 (*) [16])((longlong)iVar1 * 0x30 + lVar3 + 0x10) = auVar4;
    } while (lVar13 < (int)lVar5);
  }
  return;
}



// FUNCTION 1422734d0 FUN_1422734d0 body=568 status=ok
// SIG undefined FUN_1422734d0(void)

void FUN_1422734d0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  
  lVar5 = param_3[1];
  param_5 = param_5 / *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar5) {
    lVar9 = 0;
    do {
      lVar1 = lVar9 * 8;
      lVar7 = (longlong)(*(int *)(*param_3 + 4 + lVar9 * 8) << 2);
      iVar2 = *(int *)(*(longlong *)(param_4 + 0xf8) + 4 + lVar7 * 4);
      iVar3 = *(int *)(param_4 + 0xb8);
      uVar10 = *(longlong *)(param_4 + 0x120) + 3 +
               (longlong)*(int *)(*(longlong *)(param_4 + 0xf8) + lVar7 * 4) & 0xfffffffffffffffc;
      iVar12 = iVar2 + -1;
      if (((1 < iVar2) && (0.0 < param_5)) && (param_5 < 1.0)) {
        iVar6 = (int)((float)(iVar3 + -1) * param_5);
        if (iVar6 < 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = iVar3 + -2;
          if (iVar6 < iVar3 + -2) {
            iVar8 = iVar6;
          }
        }
        iVar6 = (int)((float)iVar12 * param_5);
        if (iVar6 < 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = iVar12;
          if (iVar6 < iVar12) {
            iVar11 = iVar6;
          }
        }
        if (iVar3 < 0x100) {
          if (iVar8 < (int)(uint)*(byte *)((longlong)iVar11 + uVar10)) {
            lVar7 = (longlong)(iVar11 + -1);
            if (0 < iVar11 + -1) {
              do {
                if ((int)(uint)*(byte *)(lVar7 + uVar10) <= iVar8) break;
                lVar7 = lVar7 + -1;
              } while (0 < lVar7);
            }
          }
          else {
            for (lVar7 = (longlong)(iVar11 + 1);
                (lVar7 <= (longlong)iVar2 + -1 && ((int)(uint)*(byte *)(lVar7 + uVar10) <= iVar8));
                lVar7 = lVar7 + 1) {
            }
          }
        }
        else if (iVar8 < (int)(uint)*(ushort *)(uVar10 + (longlong)iVar11 * 2)) {
          lVar7 = (longlong)(iVar11 + -1);
          if (0 < iVar11 + -1) {
            do {
              if ((int)(uint)*(ushort *)(uVar10 + lVar7 * 2) <= iVar8) break;
              lVar7 = lVar7 + -1;
            } while (0 < lVar7);
          }
        }
        else {
          lVar7 = (longlong)(iVar11 + 1);
          while ((lVar7 <= iVar12 && ((int)(uint)*(ushort *)(uVar10 + lVar7 * 2) <= iVar8))) {
            lVar7 = lVar7 + 1;
          }
        }
      }
      lVar9 = lVar9 + 1;
      auVar4._4_4_ = DAT_1468b5d94;
      auVar4._0_4_ = DAT_1468b5d90;
      auVar4._8_4_ = DAT_1468b5d98;
      auVar4._12_4_ = 0;
      *(undefined1 (*) [16])((longlong)*(int *)(*param_3 + lVar1) * 0x30 + *param_2 + 0x10) = auVar4
      ;
    } while (lVar9 < (int)lVar5);
  }
  return;
}



// FUNCTION 142273710 FUN_142273710 body=180 status=ok
// SIG undefined FUN_142273710(void)

void FUN_142273710(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_3[1];
  fVar1 = *(float *)(param_4 + 0x90);
  if (0 < (longlong)(int)lVar2) {
    lVar3 = 0;
    do {
      FUN_142267d10((longlong)*(int *)(*param_3 + lVar3 * 8) * 0x30 + *param_2,param_4,
                    *(undefined4 *)
                     (*(longlong *)(param_4 + 0xf8) +
                     (longlong)(*(int *)(*param_3 + 4 + lVar3 * 8) * 2) * 4),param_5,param_5 / fVar1
                   );
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)lVar2);
  }
  return;
}



// FUNCTION 1422737d0 FUN_1422737d0 body=264 status=ok
// SIG undefined FUN_1422737d0(void)

undefined8 FUN_1422737d0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_14227386d;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_14227386d;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142273857;
  }
  else {
LAB_142273857:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_14227386d:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  plVar6 = (longlong *)FUN_142273fd0(lVar5,param_2,param_3);
  if ((plVar6 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar6 + 0x108))(plVar6), lVar5 != 0)) {
    uVar7 = (**(code **)(*plVar6 + 0x118))(plVar6);
    return uVar7;
  }
  return 0;
}



// FUNCTION 1422738e0 FUN_1422738e0 body=533 status=ok
// SIG undefined FUN_1422738e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1422738e0(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined1 auStack_88 [32];
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar8 = param_1[4];
  if (lVar8 != 0) {
    lVar7 = FUN_142a07000();
    lVar8 = *(longlong *)(lVar8 + 0x10);
    if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar5 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar6 = GetCurrentThreadId();
        bVar2 = false;
        if (DVar6 == DAT_1468c21c0) goto LAB_142273970;
      }
      else {
LAB_142273970:
        bVar2 = true;
      }
      if (bVar2) {
        FUN_1423b2d70(param_1[4],1);
      }
    }
  }
  lVar8 = param_1[0x72];
  if (lVar8 == 0) {
    lVar8 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar8;
  }
  uVar1 = uRam00000001468b5b78;
  *param_2 = _DAT_1468b5b70;
  param_2[1] = uVar1;
  uVar4 = uRam00000001468b5b8c;
  uVar3 = uRam00000001468b5b88;
  uVar11 = uRam00000001468b5b84;
  *(undefined4 *)(param_2 + 2) = _DAT_1468b5b80;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar11;
  *(undefined4 *)(param_2 + 3) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar4;
  uVar4 = uRam00000001468b5b9c;
  uVar3 = uRam00000001468b5b98;
  uVar11 = uRam00000001468b5b94;
  *(undefined4 *)(param_2 + 4) = _DAT_1468b5b90;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar11;
  *(undefined4 *)(param_2 + 5) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar4;
  plVar9 = (longlong *)FUN_142273fd0(lVar8,param_3,param_4);
  if (plVar9 == (longlong *)0x0) {
    return param_2;
  }
  (**(code **)(*plVar9 + 0x108))(plVar9);
  lVar8 = (**(code **)(*plVar9 + 0x108))(plVar9);
  if (lVar8 != 0) {
    lVar7 = UAnimMontage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar11 = (**(code **)(*plVar9 + 0x120))(plVar9);
      puVar10 = (undefined8 *)FUN_142291ab0(lVar8,local_68,uVar11,*(undefined4 *)(lVar8 + 0x90));
      goto LAB_142273ac4;
    }
  }
  lVar8 = (**(code **)(*plVar9 + 0x108))(plVar9);
  if (lVar8 == 0) {
    return param_2;
  }
  lVar7 = UMaterialInstanceConstant::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return param_2;
  }
  uVar11 = (**(code **)(*plVar9 + 0x120))(plVar9);
  puVar10 = (undefined8 *)FUN_14225d950(lVar8,local_68,uVar11,0x7f7fffff);
LAB_142273ac4:
  uVar1 = puVar10[1];
  *param_2 = *puVar10;
  param_2[1] = uVar1;
  uVar1 = puVar10[3];
  param_2[2] = puVar10[2];
  param_2[3] = uVar1;
  uVar1 = puVar10[5];
  param_2[4] = puVar10[4];
  param_2[5] = uVar1;
  return param_2;
}



// FUNCTION 142273b00 FUN_142273b00 body=244 status=ok
// SIG undefined FUN_142273b00(void)

undefined8 FUN_142273b00(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_142273b9d;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_142273b9d;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142273b87;
  }
  else {
LAB_142273b87:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142273b9d:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  plVar6 = (longlong *)FUN_142273fd0(lVar5,param_2,param_3);
  if (plVar6 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)(*plVar6 + 0x128))(plVar6);
  }
  return uVar7;
}



// FUNCTION 142273c00 FUN_142273c00 body=309 status=ok
// SIG undefined FUN_142273c00(void)

float FUN_142273c00(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_142273ca3;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_142273ca3;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142273c8d;
  }
  else {
LAB_142273c8d:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142273ca3:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  plVar6 = (longlong *)FUN_142273fd0(lVar5,param_2,param_3);
  if (plVar6 != (longlong *)0x0) {
    fVar7 = (float)(**(code **)(*plVar6 + 0x118))(plVar6);
    if (0.0 < fVar7) {
      fVar8 = (float)(**(code **)(*plVar6 + 0x128))(plVar6);
      return fVar8 / fVar7;
    }
  }
  return 0.0;
}



// FUNCTION 142273d40 FUN_142273d40 body=306 status=ok
// SIG undefined FUN_142273d40(void)

float FUN_142273d40(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_142273dde;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_142273dde;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142273dc8;
  }
  else {
LAB_142273dc8:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142273dde:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  plVar6 = (longlong *)FUN_142273fd0(lVar5,param_2,param_3);
  if (plVar6 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar6 + 0x108))(plVar6);
    if (lVar5 != 0) {
      fVar7 = (float)(**(code **)(*plVar6 + 0x118))(plVar6);
      fVar8 = (float)(**(code **)(*plVar6 + 0x128))(plVar6);
      return fVar7 - fVar8;
    }
  }
  return 3.4028235e+38;
}



// FUNCTION 142273e80 FUN_142273e80 body=326 status=ok
// SIG undefined FUN_142273e80(void)

float FUN_142273e80(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_142273f1e;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_142273f1e;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142273f08;
  }
  else {
LAB_142273f08:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142273f1e:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  plVar6 = (longlong *)FUN_142273fd0(lVar5,param_2,param_3);
  if (plVar6 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar6 + 0x108))(plVar6);
    if (lVar5 != 0) {
      fVar7 = (float)(**(code **)(*plVar6 + 0x118))(plVar6);
      if (0.0 < fVar7) {
        fVar8 = (float)(**(code **)(*plVar6 + 0x128))(plVar6);
        return (fVar7 - fVar8) / fVar7;
      }
    }
  }
  return 1.0;
}



// FUNCTION 142273fd0 FUN_142273fd0 body=417 status=ok
// SIG undefined FUN_142273fd0(void)

longlong * FUN_142273fd0(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  
  plVar6 = (longlong *)0x0;
  if ((((*(longlong **)(param_1 + 0xa8) == (longlong *)0x0) ||
       (plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xa8) + 0x20))(), param_2 < 0))
      || ((int)plVar4[1] <= param_2)) ||
     ((lVar8 = (longlong)
               *(int *)(*(longlong *)(*plVar4 + -8 + (longlong)((int)plVar4[1] - param_2) * 8) +
                       0x44) + *(longlong *)(param_1 + 0xa0), lVar8 == 0 ||
      (cVar3 = FUN_142297850(lVar8,param_3), cVar3 == '\0')))) {
    return (longlong *)0x0;
  }
  fVar12 = -1.0;
  lVar8 = FUN_142296090(lVar8,param_3);
  piVar10 = *(int **)(lVar8 + 0x30);
  plVar4 = (longlong *)((longlong)*(int *)(lVar8 + 0x38) & 0x3fffffffffffffff);
  if (piVar10 + *(int *)(lVar8 + 0x38) < piVar10) {
    plVar4 = plVar6;
  }
  plVar9 = plVar6;
  if (plVar4 != (longlong *)0x0) {
    do {
      iVar7 = *piVar10;
      lVar8 = FUN_1428f56b0();
      if (*(longlong **)(param_1 + 0xa8) != (longlong *)0x0) {
        plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xa8) + 0x20))();
        iVar7 = (int)plVar5[1] - iVar7;
        if ((0 < iVar7) && (iVar7 + -1 < (int)plVar5[1])) {
          lVar1 = *(longlong *)(*plVar5 + -8 + (longlong)iVar7 * 8);
          for (lVar2 = *(longlong *)(lVar1 + 0x70); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30))
          {
            if (lVar2 == lVar8) {
              plVar5 = (longlong *)
                       ((longlong)*(int *)(lVar1 + 0x44) + *(longlong *)(param_1 + 0xa0));
              if (((plVar5 != (longlong *)0x0) && ((char)plVar5[6] == '\0')) &&
                 (fVar11 = (float)(**(code **)(*plVar5 + 0xf0))(plVar5), fVar12 < fVar11)) {
                fVar12 = (float)(**(code **)(*plVar5 + 0xf0))(plVar5);
                plVar6 = plVar5;
              }
              break;
            }
          }
        }
      }
      piVar10 = piVar10 + 1;
      plVar9 = (longlong *)((longlong)plVar9 + 1);
    } while (plVar9 != plVar4);
  }
  return plVar6;
}



// FUNCTION 142274180 FUN_142274180 body=172 status=ok
// SIG undefined FUN_142274180(void)

void FUN_142274180(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_142a07000();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar3 = param_1[0x72];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar3;
  }
  FUN_142273fd0(lVar3,param_2,param_3);
  return;
}



// FUNCTION 142274230 FUN_142274230 body=378 status=ok
// SIG undefined FUN_142274230(void)

int FUN_142274230(longlong param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  
  iVar8 = -1;
  if ((((*(longlong **)(param_1 + 0xa8) == (longlong *)0x0) ||
       (plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xa8) + 0x20))(), param_2 < 0))
      || ((int)plVar5[1] <= param_2)) ||
     ((lVar7 = (longlong)
               *(int *)(*(longlong *)(*plVar5 + -8 + (longlong)((int)plVar5[1] - param_2) * 8) +
                       0x44) + *(longlong *)(param_1 + 0xa0), lVar7 == 0 ||
      (cVar4 = FUN_142297850(lVar7,param_3), cVar4 == '\0')))) {
    return -1;
  }
  fVar11 = -1.0;
  lVar7 = FUN_142296090(lVar7,param_3);
  piVar9 = *(int **)(lVar7 + 0x30);
  piVar1 = piVar9 + *(int *)(lVar7 + 0x38);
  if (piVar9 == piVar1) {
    iVar8 = -1;
  }
  else {
    do {
      iVar6 = *piVar9;
      lVar7 = FUN_1428f56b0();
      if (*(longlong **)(param_1 + 0xa8) != (longlong *)0x0) {
        plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xa8) + 0x20))();
        iVar6 = (int)plVar5[1] - iVar6;
        if ((0 < iVar6) && (iVar6 + -1 < (int)plVar5[1])) {
          lVar2 = *(longlong *)(*plVar5 + -8 + (longlong)iVar6 * 8);
          for (lVar3 = *(longlong *)(lVar2 + 0x70); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30))
          {
            if (lVar3 == lVar7) {
              plVar5 = (longlong *)
                       ((longlong)*(int *)(lVar2 + 0x44) + *(longlong *)(param_1 + 0xa0));
              if (((plVar5 != (longlong *)0x0) && ((char)plVar5[6] == '\0')) &&
                 (fVar10 = (float)(**(code **)(*plVar5 + 0xf0))(plVar5), fVar11 < fVar10)) {
                fVar11 = (float)(**(code **)(*plVar5 + 0xf0))(plVar5);
                iVar8 = *piVar9;
              }
              break;
            }
          }
        }
      }
      piVar9 = piVar9 + 1;
    } while (piVar9 != piVar1);
  }
  return iVar8;
}



// FUNCTION 1422743b0 FUN_1422743b0 body=140 status=ok
// SIG undefined FUN_1422743b0(void)

longlong FUN_1422743b0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_142a07000();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar3 = param_1[0x72];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar3;
  }
  return lVar3 + 0x3a0;
}



// FUNCTION 142274440 FUN_142274440 body=189 status=ok
// SIG undefined FUN_142274440(void)

longlong FUN_142274440(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_1422744cd;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_1422744cd;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_1422744b7;
  }
  else {
LAB_1422744b7:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_1422744cd:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  return lVar5 + 0x3a0;
}



// FUNCTION 142274500 FUN_142274500 body=8 status=ok
// SIG undefined FUN_142274500(void)

undefined8 FUN_142274500(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x338);
}



// FUNCTION 142274510 FUN_142274510 body=403 status=ok
// SIG undefined FUN_142274510(void)

undefined8 *
FUN_142274510(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong local_18;
  undefined8 local_10;
  
  plVar2 = (longlong *)
           FAnimInstanceProxy::GetNodeFromIndex<FAnimNode_AssetPlayerBase>(param_1,param_3);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (lVar3 != 0) {
      lVar4 = UAnimMontage::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_142295fa0(lVar3,param_2);
        return param_2;
      }
    }
    lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (lVar3 != 0) {
      lVar4 = UBlendSpaceBase::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_18 = 0;
        local_10 = 0;
        FUN_1422acfa0(lVar3,param_4,&local_18);
        FUN_14225ebc0(param_1,param_2,&local_18,lVar3);
        if ((int)local_10 != 0) {
          plVar2 = (longlong *)(local_18 + 0x30);
          iVar5 = (int)local_10;
          do {
            if (*plVar2 != 0) {
              FMemory::Free();
            }
            plVar2 = plVar2 + 8;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (local_18 == 0) {
          return param_2;
        }
        FMemory::Free();
        return param_2;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined2 *)(param_2 + 2) = 0xffff;
  *(undefined4 *)(param_2 + 3) = 0;
  FVectorCurve::FVectorCurve(param_2 + 4);
  FVectorCurve::FVectorCurve(param_2 + 0x32);
  FVectorCurve::FVectorCurve(param_2 + 0x60);
  return param_2;
}



// FUNCTION 1422746b0 FUN_1422746b0 body=62 status=ok
// SIG undefined FUN_1422746b0(void)

ulonglong FUN_1422746b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x170)) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x168) + 0x30);
    uVar3 = uVar2;
    do {
      if (*plVar1 == param_2) {
        return uVar3;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 0xb;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x170));
  }
  return 0xffffffff;
}



// FUNCTION 1422746f0 FUN_1422746f0 body=305 status=ok
// SIG undefined FUN_1422746f0(void)

ulonglong FUN_1422746f0(longlong param_1,float param_2)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x170)) {
    fVar1 = *(float *)(param_1 + 0x90);
    uVar6 = uVar4;
    uVar7 = uVar4;
    do {
      iVar5 = (int)uVar6;
      if (((longlong)uVar7 < 0) || (*(int *)(param_1 + 0x170) <= iVar5)) {
        fVar9 = 0.0;
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x168);
        cVar2 = *(char *)(uVar4 + 0x19 + lVar3);
        if (cVar2 == '\0') {
LAB_142274779:
          fVar9 = *(float *)(uVar4 + 0x24 + lVar3);
        }
        else if (cVar2 == '\x01') {
          fVar9 = *(float *)(uVar4 + 0x24 + lVar3) + *(float *)(uVar4 + 0x1c + lVar3);
        }
        else {
          if (cVar2 != '\x02') goto LAB_142274779;
          fVar9 = *(float *)(uVar4 + 0x24 + lVar3) * *(float *)(uVar4 + 0x20 + lVar3) +
                  *(float *)(uVar4 + 0x1c + lVar3);
        }
      }
      uVar7 = uVar7 + 1;
      fVar8 = fVar1;
      if ((-1 < (longlong)uVar7) && (iVar5 + 1 < *(int *)(param_1 + 0x170))) {
        lVar3 = *(longlong *)(param_1 + 0x168);
        cVar2 = *(char *)(uVar4 + 0x71 + lVar3);
        if (cVar2 == '\0') {
LAB_1422747dd:
          fVar8 = *(float *)(uVar4 + 0x7c + lVar3);
        }
        else if (cVar2 == '\x01') {
          fVar8 = *(float *)(uVar4 + 0x7c + lVar3) + *(float *)(uVar4 + 0x74 + lVar3);
        }
        else {
          if (cVar2 != '\x02') goto LAB_1422747dd;
          fVar8 = *(float *)(uVar4 + 0x7c + lVar3) * *(float *)(uVar4 + 0x78 + lVar3) +
                  *(float *)(uVar4 + 0x74 + lVar3);
        }
      }
      if (fVar9 <= param_2) {
        if (param_2 < fVar1) {
          if (param_2 < fVar8) {
            return uVar6;
          }
        }
        else if (param_2 <= fVar8) {
          return uVar6;
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar4 = uVar4 + 0x58;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x170));
  }
  return 0xffffffff;
}



// FUNCTION 142274830 FUN_142274830 body=209 status=ok
// SIG undefined FUN_142274830(void)

float FUN_142274830(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_1 + 0x90);
  fVar4 = 0.0;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x170) <= param_2)) goto LAB_14227489e;
  lVar2 = (longlong)param_2 * 0x58 + *(longlong *)(param_1 + 0x168);
  cVar1 = *(char *)(lVar2 + 0x19);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      fVar4 = *(float *)(lVar2 + 0x24) + *(float *)(lVar2 + 0x1c);
      goto LAB_14227489e;
    }
    if (cVar1 == '\x02') {
      fVar4 = *(float *)(lVar2 + 0x24) * *(float *)(lVar2 + 0x20) + *(float *)(lVar2 + 0x1c);
      goto LAB_14227489e;
    }
  }
  fVar4 = *(float *)(lVar2 + 0x24);
LAB_14227489e:
  if ((-1 < param_2 + 1) && (param_2 + 1 < *(int *)(param_1 + 0x170))) {
    lVar2 = ((longlong)param_2 + 1) * 0x58 + *(longlong *)(param_1 + 0x168);
    cVar1 = *(char *)(lVar2 + 0x19);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        return (*(float *)(lVar2 + 0x24) + *(float *)(lVar2 + 0x1c)) - fVar4;
      }
      if (cVar1 == '\x02') {
        return (*(float *)(lVar2 + 0x24) * *(float *)(lVar2 + 0x20) + *(float *)(lVar2 + 0x1c)) -
               fVar4;
      }
    }
    fVar3 = *(float *)(lVar2 + 0x24);
  }
  return fVar3 - fVar4;
}



// FUNCTION 142274910 FUN_142274910 body=52 status=ok
// SIG undefined FUN_142274910(void)

undefined8 * FUN_142274910(longlong param_1,undefined8 *param_2,int param_3)

{
  if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x170))) {
    *param_2 = *(undefined8 *)((longlong)param_3 * 0x58 + 0x30 + *(longlong *)(param_1 + 0x168));
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142274950 FUN_142274950 body=225 status=ok
// SIG undefined FUN_142274950(void)

float FUN_142274950(longlong param_1,int param_2,float *param_3,float *param_4)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = -1.0;
  *param_3 = 0.0;
  *param_4 = *(float *)(param_1 + 0x90);
  if ((param_2 < 0) || (*(int *)(param_1 + 0x170) <= param_2)) goto LAB_1422749cb;
  lVar2 = (longlong)param_2 * 0x58 + *(longlong *)(param_1 + 0x168);
  cVar1 = *(char *)(lVar2 + 0x19);
  if (cVar1 == '\0') {
LAB_1422749c0:
    fVar4 = *(float *)(lVar2 + 0x24);
  }
  else if (cVar1 == '\x01') {
    fVar4 = *(float *)(lVar2 + 0x24) + *(float *)(lVar2 + 0x1c);
  }
  else {
    if (cVar1 != '\x02') goto LAB_1422749c0;
    fVar4 = *(float *)(lVar2 + 0x24) * *(float *)(lVar2 + 0x20) + *(float *)(lVar2 + 0x1c);
  }
  *param_3 = fVar4;
LAB_1422749cb:
  if ((-1 < param_2 + 1) && (param_2 + 1 < *(int *)(param_1 + 0x170))) {
    lVar2 = ((longlong)param_2 + 1) * 0x58 + *(longlong *)(param_1 + 0x168);
    cVar1 = *(char *)(lVar2 + 0x19);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        fVar3 = *(float *)(lVar2 + 0x24) + *(float *)(lVar2 + 0x1c);
        *param_4 = fVar3;
        return fVar3;
      }
      if (cVar1 == '\x02') {
        fVar3 = *(float *)(lVar2 + 0x24) * *(float *)(lVar2 + 0x20) + *(float *)(lVar2 + 0x1c);
        *param_4 = fVar3;
        return fVar3;
      }
    }
    fVar3 = *(float *)(lVar2 + 0x24);
    *param_4 = fVar3;
  }
  return fVar3;
}



// FUNCTION 142274a40 FUN_142274a40 body=230 status=ok
// SIG undefined FUN_142274a40(void)

float FUN_142274a40(longlong param_1,float param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x170);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar5 = iVar4 + 1;
      cVar2 = FUN_1422773e0(param_1,iVar4,iVar5,param_2);
      if (cVar2 != '\0') {
        if (iVar4 == -1) {
          return -1.0;
        }
        if ((iVar4 + 1 < 0) || (iVar1 <= iVar4 + 1)) {
          return *(float *)(param_1 + 0x90) - param_2;
        }
        lVar3 = ((longlong)iVar4 + 1) * 0x58 + *(longlong *)(param_1 + 0x168);
        cVar2 = *(char *)(lVar3 + 0x19);
        if (cVar2 != '\0') {
          if (cVar2 == '\x01') {
            return (*(float *)(lVar3 + 0x24) + *(float *)(lVar3 + 0x1c)) - param_2;
          }
          if (cVar2 == '\x02') {
            return (*(float *)(lVar3 + 0x24) * *(float *)(lVar3 + 0x20) + *(float *)(lVar3 + 0x1c))
                   - param_2;
          }
        }
        return *(float *)(lVar3 + 0x24) - param_2;
      }
      iVar4 = iVar5;
    } while (iVar5 < iVar1);
  }
  return -1.0;
}



// FUNCTION 142274b30 FUN_142274b30 body=8 status=ok
// SIG undefined FUN_142274b30(void)

longlong FUN_142274b30(longlong param_1)

{
  return param_1 + 0x178;
}



// FUNCTION 142274b40 FUN_142274b40 body=190 status=ok
// SIG undefined FUN_142274b40(void)

undefined4 FUN_142274b40(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  
  lVar1 = *param_2;
  if (*(int *)(param_1 + 0x2a0) != *(int *)(param_1 + 0x2cc)) {
    lVar3 = *(longlong *)(param_1 + 0x2d8);
    if (*(longlong *)(param_1 + 0x2d8) == 0) {
      lVar3 = param_1 + 0x2d0;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(param_1 + 0x2e0) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        piVar4 = (int *)(*(longlong *)(param_1 + 0x298) + (longlong)iVar2 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x298) + (longlong)iVar2 * 0x18) == lVar1) {
          if (iVar2 != -1) goto LAB_142274bc3;
          break;
        }
        iVar2 = piVar4[4];
      } while (iVar2 != -1);
    }
  }
  piVar4 = (int *)0x0;
LAB_142274bc3:
  piVar5 = piVar4 + 2;
  if (piVar4 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  return *(undefined4 *)
          (*(longlong *)(param_1 + 0x2e8 + (longlong)(1 - *(int *)(param_1 + 0x1c8)) * 0x10) +
          (longlong)*piVar5 * 0xc);
}



// FUNCTION 142274c00 FUN_142274c00 body=49 status=ok
// SIG undefined FUN_142274c00(void)

longlong * FUN_142274c00(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x5c0);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x5c8) * 2;
  if (plVar1 != plVar2) {
    do {
      if (*plVar1 == *param_2) {
        return plVar1;
      }
      plVar1 = plVar1 + 2;
    } while (plVar1 != plVar2);
  }
  return (longlong *)0x0;
}



// FUNCTION 142274c40 FUN_142274c40 body=413 status=ok
// SIG undefined FUN_142274c40(void)

void FUN_142274c40(longlong param_1,longlong *param_2,float *param_3,float *param_4,float *param_5)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  lVar8 = *(longlong *)(param_1 + 0x538);
  fVar11 = 0.0;
  fVar10 = 0.0;
  lVar1 = lVar8 + (longlong)*(int *)(param_1 + 0x540) * 0x18;
joined_r0x000142274c8d:
  if (lVar8 == lVar1) {
    plVar6 = *(longlong **)(param_1 + 0x5d0);
    plVar3 = plVar6 + (longlong)*(int *)(param_1 + 0x5d8) * 5;
    for (; plVar6 != plVar3; plVar6 = plVar6 + 5) {
      if (*plVar6 == *param_2) {
        fVar11 = fVar11 + *(float *)(plVar6 + 2);
        cVar4 = (**(code **)(*(longlong *)plVar6[1] + 0x290))();
        if (cVar4 == '\0') {
          fVar10 = fVar10 + *(float *)(plVar6 + 2);
        }
      }
    }
    *param_5 = fVar11;
    if (1.0 < fVar11) {
      fVar10 = fVar10 / fVar11;
      fVar11 = 1.0;
    }
    *param_3 = fVar11;
    *param_4 = 1.0 - fVar10;
    return;
  }
  cVar4 = FWeakObjectPtr::IsValid(lVar8);
  if (cVar4 != '\0') {
    lVar5 = FWeakObjectPtr::Get(lVar8);
    lVar7 = 0;
    iVar2 = *(int *)(lVar5 + 0x180);
    if (0 < iVar2) {
      plVar3 = *(longlong **)(lVar5 + 0x178);
      plVar6 = plVar3;
      do {
        if (*plVar6 == *param_2) {
          if (0 < (int)plVar3[lVar7 * 3 + 2]) {
            fVar11 = fVar11 + *(float *)(lVar8 + 8);
            if (iVar2 < 1) goto LAB_142274d32;
            iVar9 = 0;
            lVar5 = 0;
            plVar6 = plVar3;
            goto LAB_142274d01;
          }
          break;
        }
        lVar7 = lVar7 + 1;
        plVar6 = plVar6 + 3;
      } while (lVar7 < iVar2);
    }
  }
  goto LAB_142274d37;
  while( true ) {
    iVar9 = iVar9 + 1;
    lVar5 = lVar5 + 1;
    plVar6 = plVar6 + 3;
    if (iVar2 <= lVar5) break;
LAB_142274d01:
    if (*plVar6 == *param_2) {
      cVar4 = FAnimTrack::IsAdditive(plVar3 + (longlong)iVar9 * 3 + 1);
      if (cVar4 != '\0') goto LAB_142274d37;
      break;
    }
  }
LAB_142274d32:
  fVar10 = fVar10 + *(float *)(lVar8 + 8);
LAB_142274d37:
  lVar8 = lVar8 + 0x18;
  goto joined_r0x000142274c8d;
}



// FUNCTION 142274de0 FUN_142274de0 body=54 status=ok
// SIG undefined FUN_142274de0(void)

void FUN_142274de0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0xc0))(param_1);
    TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
    ::GetBoundProgramCounterForTimerManager(uVar2);
    return;
  }
  return;
}



// FUNCTION 142274e20 FUN_142274e20 body=441 status=ok
// SIG undefined FUN_142274e20(void)

void FUN_142274e20(longlong *param_1,longlong param_2,int *param_3,undefined8 *param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  
  lVar6 = param_1[4];
  if (lVar6 == 0) goto LAB_142274ec4;
  lVar5 = FUN_142a07000();
  lVar6 = *(longlong *)(lVar6 + 0x10);
  if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_142274ec4;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    bVar2 = false;
    if (DVar4 == DAT_1468c21c0) goto LAB_142274eae;
  }
  else {
LAB_142274eae:
    bVar2 = true;
  }
  if (bVar2) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142274ec4:
  lVar6 = param_1[0x72];
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar6;
  }
  if (*(longlong **)(lVar6 + 0xa8) != (longlong *)0x0) {
    plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar6 + 0xa8) + 0x20))();
    iVar11 = 0;
    iVar10 = (int)plVar7[1];
    if (0 < iVar10) {
      do {
        lVar5 = *(longlong *)(*plVar7 + -8 + (longlong)(iVar10 - iVar11) * 8);
        if (lVar5 != 0) {
          lVar8 = FUN_1428f58f0();
          for (lVar1 = *(longlong *)(lVar5 + 0x70); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30))
          {
            if (lVar1 == lVar8) {
              lVar5 = (longlong)*(int *)(lVar5 + 0x44) + *(longlong *)(lVar6 + 0xa0);
              if (lVar5 != 0) {
                plVar9 = (longlong *)(**(code **)(**(longlong **)(lVar6 + 0xa8) + 0x10))();
                iVar10 = *(int *)(lVar5 + 0x30);
                if ((iVar10 < 0) || ((int)plVar9[1] <= iVar10)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (((bVar2) &&
                    (plVar9 = (longlong *)((longlong)iVar10 * 0x38 + *plVar9),
                    plVar9 != (longlong *)0x0)) && (*plVar9 == param_2)) {
                  *param_3 = iVar11;
                  if (param_4 == (undefined8 *)0x0) {
                    return;
                  }
                  *param_4 = plVar9;
                  return;
                }
              }
              break;
            }
          }
        }
        iVar10 = (int)plVar7[1];
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar10);
    }
  }
  *param_3 = -1;
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  return;
}



// FUNCTION 142274fe0 FUN_142274fe0 body=190 status=ok
// SIG undefined FUN_142274fe0(void)

undefined8 FUN_142274fe0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_14227506d;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_14227506d;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142275057;
  }
  else {
LAB_142275057:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_14227506d:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  return *(undefined8 *)(lVar5 + 0xe0);
}



// FUNCTION 1422750a0 FUN_1422750a0 body=182 status=ok
// SIG undefined FUN_1422750a0(void)

undefined8 * FUN_1422750a0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 == (longlong *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,param_3);
  }
  lVar4 = (longlong)(1 - *(int *)(param_1 + 0x1c8));
  if ((((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x120 + lVar4 * 0x10))) &&
      (lVar4 = (longlong)iVar3 * 0x78 + *(longlong *)(param_1 + 0x118 + lVar4 * 0x10),
      *(char *)(lVar4 + 0x28) != '\0')) &&
     ((*(longlong *)(lVar4 + 0x58) != 0 && (*(longlong *)(lVar4 + 0x60) != 0)))) {
    uVar2 = *(undefined8 *)(lVar4 + 0x60);
    *param_2 = *(undefined8 *)(lVar4 + 0x58);
    param_2[1] = uVar2;
    param_2[2] = *(undefined8 *)(lVar4 + 0x68);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 142275160 FUN_142275160 body=226 status=ok
// SIG undefined FUN_142275160(void)

undefined8 FUN_142275160(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_1422751fd;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_1422751fd;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_1422751e7;
  }
  else {
LAB_1422751e7:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_1422751fd:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  FUN_1422750a0(lVar5,param_2,param_3);
  return param_2;
}



// FUNCTION 142275250 GetTime body=150 status=ok
// SIG undefined GetTime(void)

float FAnimLinkableElement::GetTime(longlong param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x19);
  if (param_2 != bVar1) {
    if (bVar1 == 0) {
      if (param_2 == 1) {
        return *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x1c);
      }
      if (param_2 == 2) {
        return (*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x1c)) /
               *(float *)(param_1 + 0x20);
      }
    }
    else if (bVar1 == 1) {
      if (param_2 == 0) {
        return *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x1c);
      }
      if (param_2 == 2) {
        return *(float *)(param_1 + 0x24) / *(float *)(param_1 + 0x20);
      }
    }
    else {
      if (bVar1 != 2) goto LAB_1422752e0;
      if (param_2 == 0) {
        return *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x1c);
      }
      if (param_2 == 1) {
        return *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x20);
      }
    }
    return -1.0;
  }
LAB_1422752e0:
  return *(float *)(param_1 + 0x24);
}



// FUNCTION 1422752f0 FUN_1422752f0 body=171 status=ok
// SIG undefined FUN_1422752f0(void)

undefined8 FUN_1422752f0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float fVar5;
  float local_res8 [2];
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    local_res8[0] = 0.0;
    iVar2 = FUN_14225e640(lVar1,(int)param_1[0x25],local_res8);
    if ((-1 < iVar2) && (iVar2 < *(int *)(lVar1 + 0x170))) {
      fVar5 = *(float *)(lVar1 + 0x94) * *(float *)((longlong)param_1 + 300);
      if (fVar5 <= 0.0) {
        uVar4 = 0;
      }
      else {
        uVar3 = FUN_142274830(lVar1,iVar2);
        uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
        local_res8[0] = (float)uVar3 - local_res8[0];
      }
      return CONCAT44(uVar4,local_res8[0] / ABS(fVar5));
    }
  }
  return 0;
}



// FUNCTION 1422753a0 FUN_1422753a0 body=395 status=ok
// SIG undefined FUN_1422753a0(void)

ulonglong FUN_1422753a0(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint7 uVar9;
  ulonglong uVar8;
  longlong *plVar10;
  
  lVar7 = param_1[4];
  if (lVar7 == 0) goto LAB_142275446;
  lVar6 = FUN_142a07000();
  lVar7 = *(longlong *)(lVar7 + 0x10);
  if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_142275446;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142275430;
  }
  else {
LAB_142275430:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142275446:
  lVar7 = param_1[0x72];
  if (lVar7 == 0) {
    lVar7 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar7;
  }
  plVar10 = *(longlong **)(lVar7 + 0xa8);
  if (plVar10 == (longlong *)0x0) {
    iVar4 = -1;
  }
  else {
    iVar4 = (**(code **)(*plVar10 + 0x50))(plVar10,param_2);
  }
  iVar5 = 1 - *(int *)(lVar7 + 0x1c8);
  lVar6 = (longlong)iVar5 * 0x10;
  uVar9 = (uint7)(uint3)((uint)iVar5 >> 8);
  if ((iVar4 < 0) || (*(int *)(lVar6 + 0x120 + lVar7) <= iVar4)) {
    uVar8 = (ulonglong)uVar9 << 8;
  }
  else {
    uVar8 = CONCAT71(uVar9,1);
  }
  if ((char)uVar8 != '\0') {
    uVar8 = (ulonglong)iVar4;
    plVar10 = (longlong *)(uVar8 * 0x78 + *(longlong *)(lVar6 + 0x118 + lVar7));
    if ((char)plVar10[5] != '\0') {
      iVar4 = (int)plVar10[2];
      uVar8 = (ulonglong)iVar4;
      if ((iVar4 < 0) || ((int)plVar10[1] <= iVar4)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar8 = uVar8 * 0x50 + *plVar10;
        if (plVar10[0xb] == param_3) {
          lVar7 = *(longlong *)(uVar8 + 0x40);
          *param_4 = *(undefined4 *)(lVar7 + 4);
          return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
        }
        if (plVar10[0xc] == param_3) {
          lVar7 = *(longlong *)(uVar8 + 0x40);
          *param_4 = *(undefined4 *)(lVar7 + 0xc);
          return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
        }
      }
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 142275530 FUN_142275530 body=140 status=ok
// SIG undefined FUN_142275530(void)

longlong FUN_142275530(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_142a07000();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar3 = param_1[0x72];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar3;
  }
  return lVar3 + 0x328;
}



// FUNCTION 1422755f0 FUN_1422755f0 body=775 status=ok
// SIG undefined FUN_1422755f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422755f0(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  undefined4 local_d8 [2];
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0 [2];
  undefined1 local_b8 [8];
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [8];
  undefined1 *local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if ((char)param_1[0x2d] == '\0') {
    local_d8[0] = param_3;
    local_c0[0] = param_2;
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x21);
    if (cVar1 != '\0') {
      local_78 = 0xffffffff;
      local_d0 = 0;
      local_c8 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_88 = 0;
      local_80 = 0;
      local_74 = 0;
      local_68 = (undefined1 *)0x0;
      local_60 = 0;
      (**(code **)(*(longlong *)*param_1 + 0x2a8))((longlong *)*param_1,local_c0,local_d8,&local_d0)
      ;
      iVar7 = (int)local_c8 + -1;
      if (-1 < iVar7) {
        lVar5 = (longlong)iVar7 << 4;
        lVar6 = (longlong)(int)local_c8 << 4;
        lVar8 = lVar5;
        do {
          if (((*(longlong *)(local_d0 + 8 + lVar5) != 0) && (*(longlong *)(local_d0 + lVar5) != 0))
             && (cVar1 = FAnimNotifyEvent::IsBranchingPoint(), cVar1 != '\0')) {
            iVar2 = ((int)local_c8 - iVar7) + -1;
            if (iVar2 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(local_d0 + lVar8),(void *)(local_d0 + lVar6),(longlong)iVar2 << 4)
              ;
            }
            local_c8 = CONCAT44(local_c8._4_4_,(int)local_c8 + -1);
            TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&local_d0);
          }
          lVar6 = lVar6 + -0x10;
          lVar8 = lVar8 + -0x10;
          lVar5 = lVar5 + -0x10;
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
      lVar8 = *param_1;
      for (iVar7 = 0; (-1 < iVar7 && (iVar7 < *(int *)(lVar8 + 0x180))); iVar7 = iVar7 + 1) {
        lVar6 = (longlong)iVar7;
        lVar5 = *(longlong *)(*(longlong *)(lVar8 + 0x178) + lVar6 * 0x18);
        if ((int)local_a0 != local_74) {
          puVar3 = local_70;
          if (local_68 != (undefined1 *)0x0) {
            puVar3 = local_68;
          }
          iVar2 = *(int *)(puVar3 + (longlong)
                                    (int)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5 &
                                         local_60 - 1U) * 4);
          while (iVar2 != -1) {
            lVar4 = (longlong)iVar2 * 0x20;
            if (*(longlong *)(lVar4 + local_a8) == lVar5) {
              if ((iVar2 != -1) && (lVar4 + local_a8 != 0)) goto LAB_1422757fb;
              break;
            }
            iVar2 = *(int *)(lVar4 + 0x18 + local_a8);
          }
        }
        local_b0 = *(longlong *)(lVar8 + 0x178) + lVar6 * 0x18;
        FUN_140d1c9b0(&local_a8,local_b8,&local_b0,0);
LAB_1422757fb:
        FAnimTrack::GetAnimNotifiesFromTrackPositions
                  (*(longlong *)(lVar8 + 0x178) + 8 + lVar6 * 0x18,local_c0,local_d8);
      }
      lVar8 = FWeakObjectPtr::Get(param_1 + 0x21);
      FAnimNotifyQueue::AddAnimNotifies(lVar8 + 0xf8,1,&local_d0,(int)param_1[0x2e]);
      lVar8 = FWeakObjectPtr::Get(param_1 + 0x21);
      FAnimNotifyQueue::AddAnimNotifies(lVar8 + 0xf8,1,&local_a8,(int)param_1[0x2e]);
      local_60 = 0;
      if (local_68 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_a8);
      if (local_d0 != 0) {
        FMemory::Free();
      }
    }
    FUN_142284120(param_1,local_d8[0]);
    if (param_4 != 0) {
      FUN_1422587d0(param_1,param_4);
    }
  }
  return;
}



// FUNCTION 142275900 FUN_142275900 body=368 status=ok
// SIG undefined FUN_142275900(void)

ulonglong FUN_142275900(longlong *param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint7 uVar10;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar11;
  
  lVar7 = param_1[4];
  if (lVar7 == 0) goto LAB_14227599e;
  lVar6 = FUN_142a07000();
  lVar7 = *(longlong *)(lVar7 + 0x10);
  if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_14227599e;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142275988;
  }
  else {
LAB_142275988:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_14227599e:
  lVar7 = param_1[0x72];
  if (lVar7 == 0) {
    lVar7 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar7;
  }
  plVar9 = *(longlong **)(lVar7 + 0xa8);
  if (plVar9 == (longlong *)0x0) {
    iVar4 = -1;
  }
  else {
    iVar4 = (**(code **)(*plVar9 + 0x50))(plVar9,param_2);
  }
  iVar5 = 1 - *(int *)(lVar7 + 0x1c8);
  uVar10 = (uint7)(uint3)((uint)iVar5 >> 8);
  if ((iVar4 < 0) || (*(int *)(lVar7 + 0x120 + (longlong)iVar5 * 0x10) <= iVar4)) {
    uVar8 = (ulonglong)uVar10 << 8;
  }
  else {
    uVar8 = CONCAT71(uVar10,1);
  }
  if ((char)uVar8 != '\0') {
    uVar8 = (ulonglong)iVar4;
    lVar7 = uVar8 * 0x78 + *(longlong *)(lVar7 + 0x118 + (longlong)iVar5 * 0x10);
    if (*(char *)(lVar7 + 0x28) != '\0') {
      plVar9 = *(longlong **)(lVar7 + 0x30);
      plVar11 = plVar9 + (longlong)*(int *)(lVar7 + 0x38) * 2;
      for (; plVar9 != plVar11; plVar9 = plVar9 + 2) {
        if (*plVar9 == param_3) goto LAB_142275a50;
      }
      plVar9 = (longlong *)0x0;
LAB_142275a50:
      return CONCAT71((int7)((ulonglong)plVar9 >> 8),plVar9 != (longlong *)0x0);
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 142275a70 IsAnyAnimationPlaying body=18 status=ok
// SIG undefined IsAnyAnimationPlaying(void)

undefined4 UUserWidget::IsAnyAnimationPlaying(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280) - *(int *)(param_1 + 0x2ac);
  return CONCAT31((int3)((uint)iVar1 >> 8),0 < iVar1);
}



// FUNCTION 142275a90 FUN_142275a90 body=85 status=ok
// SIG undefined FUN_142275a90(void)

undefined8 FUN_142275a90(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x178);
  lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x180) * 0x18;
  while( true ) {
    if (lVar3 == lVar1) {
      return 0;
    }
    cVar2 = FAnimTrack::HasRootMotion(lVar3 + 8);
    if (cVar2 != '\0') break;
    lVar3 = lVar3 + 0x18;
  }
  return 1;
}



// FUNCTION 142275af0 FUN_142275af0 body=220 status=ok
// SIG undefined FUN_142275af0(void)

undefined8 FUN_142275af0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  char cVar7;
  undefined2 *puVar8;
  undefined8 local_res8;
  undefined2 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar8 = (undefined2 *)0x0;
  local_30 = 0;
  cVar7 = '\0';
  local_28 = 0;
  iVar2 = 0;
  local_38 = (undefined2 *)0x0;
  puVar5 = local_38;
  if (0 < *(int *)(param_1 + 0x180)) {
    puVar1 = *(undefined8 **)(param_1 + 0x178);
    cVar7 = (char)*(int *)(param_1 + 0x180);
    plVar3 = (longlong *)FAnimTrack::GetSegmentAtTime(puVar1 + 1,param_3);
    puVar5 = local_38;
    if (plVar3 != (longlong *)0x0) {
      puVar5 = (undefined2 *)*puVar1;
      local_res8 = *(undefined8 *)(*plVar3 + 0x18);
      FName::ToString(&local_res8,&local_38);
      puVar8 = local_38;
      iVar2 = (int)local_30;
    }
  }
  if (puVar5 == (undefined2 *)*param_2) {
    if (*(int *)(param_2 + 2) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)param_2[1];
    }
    puVar4 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar4 = puVar8;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
    if ((iVar2 == 0) && (cVar7 == *(char *)(param_2 + 3))) {
      uVar6 = 1;
      goto LAB_142275ba9;
    }
  }
  uVar6 = 0;
LAB_142275ba9:
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  return uVar6;
}



// FUNCTION 142275bd0 Initialize body=67 status=ok
// SIG undefined Initialize(void)

void FAnimCurveParam::Initialize(longlong *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = USkeleton::GetUIDByName(param_2,&DAT_146aef308,param_1);
    *(undefined2 *)(param_1 + 1) = uVar1;
    return;
  }
  *(undefined2 *)(param_1 + 1) = 0xffff;
  return;
}



// FUNCTION 142275c20 FUN_142275c20 body=1568 status=ok
// SIG undefined FUN_142275c20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142275c20(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  short *_Src;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_94;
  longlong *local_90;
  int *local_88;
  int *local_80;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  param_1[0x14] = param_2;
  lVar3 = FUN_142268ae0(*(undefined8 *)(param_2 + 0x10));
  param_1[0x15] = lVar3;
  (**(code **)(*param_1 + 0x68))(param_1,param_2);
  plVar6 = (longlong *)param_1[0x15];
  uVar10 = 0;
  if (plVar6 == (longlong *)0x0) {
    if (param_1[0x1b] == 0) {
      lVar3 = (**(code **)(*param_1 + 0x38))(param_1);
      param_1[0x1b] = lVar3;
    }
  }
  else {
    if (*(char *)(param_2 + 0x428) != '\0') {
      FUN_142258a70(param_1,param_2);
      *(undefined1 *)(param_2 + 0x428) = 0;
      plVar6 = (longlong *)param_1[0x15];
    }
    lVar3 = (**(code **)(*plVar6 + 0x48))();
    uVar4 = uVar10;
    if (lVar3 != 0) {
      uVar4 = *(int *)(lVar3 + 0x44) + param_2;
    }
    param_1[0x1b] = uVar4;
    puVar5 = (undefined8 *)(**(code **)(*(longlong *)param_1[0x15] + 0x30))();
    local_90 = (longlong *)(**(code **)(*(longlong *)param_1[0x15] + 0x20))();
    iVar11 = *(int *)(puVar5 + 1);
    plVar6 = param_1 + 0x1d;
    *(undefined4 *)(param_1 + 0x1e) = 0;
    if (*(int *)((longlong)param_1 + 0xf4) != iVar11) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar6);
    }
    piVar8 = (int *)*puVar5;
    uVar4 = (longlong)*(int *)(puVar5 + 1) & 0x3fffffffffffffff;
    if (piVar8 + *(int *)(puVar5 + 1) < piVar8) {
      uVar4 = uVar10;
    }
    plVar9 = local_90;
    if (uVar4 != 0) {
      do {
        lVar3 = param_1[0x1e];
        iVar1 = (int)lVar3 + 1;
        iVar11 = *(int *)(*(longlong *)(*plVar9 + -8 + (longlong)((int)plVar9[1] - *piVar8) * 8) +
                         0x44);
        *(int *)(param_1 + 0x1e) = iVar1;
        if (*(int *)((longlong)param_1 + 0xf4) < iVar1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6);
          plVar9 = local_90;
        }
        piVar8 = piVar8 + 1;
        uVar10 = uVar10 + 1;
        *(longlong *)(*plVar6 + (longlong)(int)lVar3 * 8) = iVar11 + param_2;
      } while (uVar10 != uVar4);
    }
    if (param_1[0x16] == 0) {
      lVar3 = (**(code **)(*(longlong *)param_1[0x15] + 0x38))();
      param_1[0x16] = lVar3;
    }
    local_98 = 0;
    if ((longlong *)param_1[0x15] != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*(longlong *)param_1[0x15] + 0x10))();
      local_94 = 0;
      iVar11 = (int)plVar6[1];
      if (0 < iVar11) {
        local_88 = &local_94;
        local_80 = &local_98;
        do {
          lVar7 = (longlong)local_94;
          lVar3 = *plVar6;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_&&>_>(param_1 + 0x2f,&local_90,&local_88,0);
          local_94 = local_94 + 1;
          local_98 = local_98 + *(int *)(lVar7 * 0x38 + lVar3 + 0x18);
        } while (local_94 < iVar11);
      }
      plVar6 = param_1 + 0x2b;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      if (*(int *)((longlong)param_1 + 0x164) < local_98) {
        TArray<float,FDefaultAllocator>::ResizeTo(plVar6);
      }
      iVar1 = local_98;
      lVar3 = param_1[0x2c];
      iVar2 = local_98 + (int)lVar3;
      *(int *)(param_1 + 0x2c) = iVar2;
      if (*(int *)((longlong)param_1 + 0x164) < iVar2) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar6);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar6 + (longlong)(int)lVar3 * 4),0,(longlong)iVar1 << 2);
      plVar6 = param_1 + 0x2d;
      *(undefined4 *)(param_1 + 0x2e) = 0;
      if (*(int *)((longlong)param_1 + 0x174) < local_98) {
        TArray<float,FDefaultAllocator>::ResizeTo(plVar6);
      }
      iVar1 = local_98;
      lVar3 = param_1[0x2e];
      iVar2 = local_98 + (int)lVar3;
      *(int *)(param_1 + 0x2e) = iVar2;
      if (*(int *)((longlong)param_1 + 0x174) < iVar2) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar6);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar6 + (longlong)(int)lVar3 * 4),0,(longlong)iVar1 << 2);
      plVar6 = param_1 + 0x27;
      *(undefined4 *)(param_1 + 0x28) = 0;
      if (*(int *)((longlong)param_1 + 0x144) < iVar11) {
        TArray<float,FDefaultAllocator>::ResizeTo(plVar6);
      }
      lVar3 = param_1[0x28];
      iVar1 = (int)lVar3 + iVar11;
      *(int *)(param_1 + 0x28) = iVar1;
      if (*(int *)((longlong)param_1 + 0x144) < iVar1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar6);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar6 + (longlong)(int)lVar3 * 4),0,(longlong)iVar11 << 2);
      plVar6 = param_1 + 0x29;
      *(undefined4 *)(param_1 + 0x2a) = 0;
      if (*(int *)((longlong)param_1 + 0x154) < iVar11) {
        TArray<float,FDefaultAllocator>::ResizeTo(plVar6);
      }
      lVar3 = param_1[0x2a];
      iVar1 = (int)lVar3 + iVar11;
      *(int *)(param_1 + 0x2a) = iVar1;
      if (*(int *)((longlong)param_1 + 0x154) < iVar1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar6);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar6 + (longlong)(int)lVar3 * 4),0,(longlong)iVar11 << 2);
    }
  }
  iVar11 = 0;
  puVar5 = (undefined8 *)UObjectBaseUtility::GetFullName(param_2,&local_88,0);
  if (*(int *)(puVar5 + 1) == 0) {
    _Src = &DAT_143f3eda8;
  }
  else {
    _Src = (short *)*puVar5;
  }
  plVar6 = param_1 + 0x19;
  if ((short *)*plVar6 != _Src) {
    iVar1 = iVar11;
    if ((_Src != (short *)0x0) && (*_Src != 0)) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (_Src[lVar3] != 0);
      iVar1 = (int)lVar3 + 1;
    }
    *(undefined4 *)(param_1 + 0x1a) = 0;
    if (*(int *)((longlong)param_1 + 0xd4) != iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar6,iVar1);
      iVar11 = (int)param_1[0x1a];
    }
    *(int *)(param_1 + 0x1a) = iVar1 + iVar11;
    if (*(int *)((longlong)param_1 + 0xd4) < iVar1 + iVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar6);
    }
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*plVar6,_Src,(longlong)iVar1 * 2);
    }
  }
  if (local_88 != (int *)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x66) = 0xffff;
  param_1[0x65] = -1;
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x53);
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if ((*(int *)((longlong)param_1 + 0x2f4) < 0) && (*(int *)((longlong)param_1 + 0x2f4) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x5d,0);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((*(int *)((longlong)param_1 + 0x304) < 0) && (*(int *)((longlong)param_1 + 0x304) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x5f,0);
  }
  *(short *)(param_1 + 0x6a) = (short)param_1[0x6a] + 1;
  param_1[0x69] = DAT_1468c21b0;
  if ((short)param_1[0x6a] == -1) {
    *(undefined2 *)(param_1 + 0x6a) = 0;
  }
  lVar3 = *(longlong *)(param_2 + 0x20);
  if (lVar3 == 0) {
    lVar3 = CONCAT44(uRam00000001468b5b7c,uRam00000001468b5b78);
    param_1[2] = CONCAT44(uRam00000001468b5b74,_DAT_1468b5b70);
    param_1[3] = lVar3;
    lVar3 = CONCAT44(uRam00000001468b5b8c,uRam00000001468b5b88);
    param_1[4] = CONCAT44(uRam00000001468b5b84,_DAT_1468b5b80);
    param_1[5] = lVar3;
    lVar3 = CONCAT44(uRam00000001468b5b9c,uRam00000001468b5b98);
    param_1[6] = CONCAT44(uRam00000001468b5b94,_DAT_1468b5b90);
    param_1[7] = lVar3;
    lVar3 = CONCAT44(uRam00000001468b5b7c,uRam00000001468b5b78);
    param_1[8] = CONCAT44(uRam00000001468b5b74,_DAT_1468b5b70);
    param_1[9] = lVar3;
    lVar3 = CONCAT44(uRam00000001468b5b8c,uRam00000001468b5b88);
    param_1[10] = CONCAT44(uRam00000001468b5b84,_DAT_1468b5b80);
    param_1[0xb] = lVar3;
    lVar3 = CONCAT44(uRam00000001468b5b9c,uRam00000001468b5b98);
    param_1[0xc] = CONCAT44(uRam00000001468b5b94,_DAT_1468b5b90);
    param_1[0xd] = lVar3;
    lVar3 = CONCAT44(uRam00000001468b5b7c,uRam00000001468b5b78);
    param_1[0xe] = CONCAT44(uRam00000001468b5b74,_DAT_1468b5b70);
    param_1[0xf] = lVar3;
    lVar3 = CONCAT44(uRam00000001468b5b8c,uRam00000001468b5b88);
    param_1[0x10] = CONCAT44(uRam00000001468b5b84,_DAT_1468b5b80);
    param_1[0x11] = lVar3;
    lVar3 = CONCAT44(uRam00000001468b5b9c,uRam00000001468b5b98);
    param_1[0x12] = CONCAT44(uRam00000001468b5b94,_DAT_1468b5b90);
    param_1[0x13] = lVar3;
  }
  else {
    lVar7 = *(longlong *)(lVar3 + 0x218);
    param_1[2] = *(longlong *)(lVar3 + 0x210);
    param_1[3] = lVar7;
    uVar16 = *(undefined4 *)(lVar3 + 0x224);
    uVar17 = *(undefined4 *)(lVar3 + 0x228);
    uVar18 = *(undefined4 *)(lVar3 + 0x22c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar3 + 0x220);
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar16;
    *(undefined4 *)(param_1 + 5) = uVar17;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar18;
    uVar16 = *(undefined4 *)(lVar3 + 0x234);
    uVar17 = *(undefined4 *)(lVar3 + 0x238);
    uVar18 = *(undefined4 *)(lVar3 + 0x23c);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar3 + 0x230);
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar16;
    *(undefined4 *)(param_1 + 7) = uVar17;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar18;
    plVar6 = (longlong *)FUN_14238d0c0(param_1[0x17],local_78);
    lVar3 = plVar6[1];
    param_1[8] = *plVar6;
    param_1[9] = lVar3;
    lVar3 = plVar6[3];
    param_1[10] = plVar6[2];
    param_1[0xb] = lVar3;
    lVar3 = plVar6[5];
    param_1[0xc] = plVar6[4];
    param_1[0xd] = lVar3;
    uVar12 = _DAT_1468b5b90;
    uVar13 = uRam00000001468b5b94;
    uVar14 = uRam00000001468b5b98;
    uVar15 = uRam00000001468b5b9c;
    uVar16 = _DAT_1468b5b70;
    uVar17 = uRam00000001468b5b74;
    uVar18 = uRam00000001468b5b78;
    uVar19 = uRam00000001468b5b7c;
    uVar20 = _DAT_1468b5b80;
    uVar21 = uRam00000001468b5b84;
    uVar22 = uRam00000001468b5b88;
    uVar23 = uRam00000001468b5b8c;
    if (*(longlong *)(param_1[0x17] + 0x118) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1[0x17] + 0x118) + 0x168);
      if (lVar3 == 0) {
        uVar12 = _DAT_146aeef40 & _DAT_146aeef50;
        uVar13 = uRam0000000146aeef44 & uRam0000000146aeef54;
        uVar14 = uRam0000000146aeef48 & uRam0000000146aeef58;
        uVar15 = uRam0000000146aeef4c & uRam0000000146aeef5c;
        uVar16 = 0;
        uVar17 = 0;
        uVar18 = 0;
        uVar19 = uRam0000000146aeef4c;
        uVar20 = 0;
        uVar21 = 0;
        uVar22 = 0;
        uVar23 = 0;
      }
      else {
        uVar12 = *(uint *)(lVar3 + 0x230);
        uVar13 = *(uint *)(lVar3 + 0x234);
        uVar14 = *(uint *)(lVar3 + 0x238);
        uVar15 = *(uint *)(lVar3 + 0x23c);
        uVar16 = *(undefined4 *)(lVar3 + 0x210);
        uVar17 = *(undefined4 *)(lVar3 + 0x214);
        uVar18 = *(undefined4 *)(lVar3 + 0x218);
        uVar19 = *(uint *)(lVar3 + 0x21c);
        uVar20 = *(undefined4 *)(lVar3 + 0x220);
        uVar21 = *(undefined4 *)(lVar3 + 0x224);
        uVar22 = *(undefined4 *)(lVar3 + 0x228);
        uVar23 = *(undefined4 *)(lVar3 + 0x22c);
      }
    }
    *(undefined4 *)(param_1 + 0xe) = uVar16;
    *(undefined4 *)((longlong)param_1 + 0x74) = uVar17;
    *(undefined4 *)(param_1 + 0xf) = uVar18;
    *(uint *)((longlong)param_1 + 0x7c) = uVar19;
    *(undefined4 *)(param_1 + 0x10) = uVar20;
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar21;
    *(undefined4 *)(param_1 + 0x11) = uVar22;
    *(undefined4 *)((longlong)param_1 + 0x8c) = uVar23;
    *(uint *)(param_1 + 0x12) = uVar12;
    *(uint *)((longlong)param_1 + 0x94) = uVar13;
    *(uint *)(param_1 + 0x13) = uVar14;
    *(uint *)((longlong)param_1 + 0x9c) = uVar15;
  }
  return;
}



// FUNCTION 142276240 FUN_142276240 body=1060 status=ok
// SIG undefined FUN_142276240(void)

void FUN_142276240(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  longlong lVar14;
  
  FUN_142283dd0();
  lVar10 = param_1[4];
  lVar8 = 0;
  if (*(longlong *)(lVar10 + 0x718) != 0) {
    lVar8 = *(longlong *)(*(longlong *)(lVar10 + 0x718) + 0x48);
  }
  param_1[5] = lVar8;
  if (*(int *)(lVar10 + 0xec0) != 0) {
    puVar13 = *(undefined4 **)(lVar10 + 0xeb8);
    puVar12 = puVar13 + (longlong)*(int *)(lVar10 + 0xec0) * 4;
    if (puVar13 != puVar12) {
      plVar9 = param_1 + 0x81;
      do {
        puVar11 = (undefined1 *)*plVar9;
        iVar3 = (int)param_1[0x82];
        puVar1 = puVar11 + (longlong)iVar3 * 0x10;
        if (puVar11 != puVar1) {
          do {
            if (*(longlong *)(puVar13 + 2) == *(longlong *)(puVar11 + 8)) {
              *puVar11 = *(undefined1 *)puVar13;
              goto LAB_142276305;
            }
            puVar11 = puVar11 + 0x10;
          } while (puVar11 != puVar1);
        }
        *(int *)(param_1 + 0x82) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0x414) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar3);
        }
        uVar4 = puVar13[1];
        uVar5 = puVar13[2];
        uVar6 = puVar13[3];
        puVar2 = (undefined4 *)(*plVar9 + (longlong)iVar3 * 0x10);
        *puVar2 = *puVar13;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
LAB_142276305:
        puVar13 = puVar13 + 4;
      } while (puVar13 != puVar12);
    }
    *(undefined1 *)(param_1 + 0x85) = 1;
  }
  FUN_142268ae0(param_1[2]);
  lVar10 = param_1[4];
  if ((*(longlong *)(lVar10 + 0x718) == 0) ||
     (*(longlong *)(*(longlong *)(lVar10 + 0x718) + 0x48) == 0)) {
    if (param_1[5] == 0) goto LAB_142276445;
    if (lVar10 != 0) {
      lVar8 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        FUN_1423b2d70(param_1[4],1);
      }
    }
    lVar8 = param_1[0x72];
    if (lVar8 == 0) {
      lVar8 = (**(code **)(*param_1 + 0x308))(param_1);
      param_1[0x72] = lVar8;
    }
    lVar14 = param_1[5];
  }
  else {
    if (lVar10 != 0) {
      lVar8 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        FUN_1423b2d70(param_1[4],1);
      }
    }
    lVar8 = param_1[0x72];
    if (lVar8 == 0) {
      lVar8 = (**(code **)(*param_1 + 0x308))(param_1);
      param_1[0x72] = lVar8;
    }
    lVar14 = *(longlong *)(lVar10 + 0x718);
  }
  FUN_14227c480(lVar8,lVar10,lVar14);
LAB_142276445:
  lVar10 = param_1[4];
  if (lVar10 != 0) {
    lVar8 = FUN_142a07000();
    lVar10 = *(longlong *)(lVar10 + 0x10);
    if ((*(int *)(lVar10 + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar10 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  plVar9 = (longlong *)param_1[0x72];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)(**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = (longlong)plVar9;
  }
  (**(code **)(*plVar9 + 8))(plVar9,param_1);
  if (param_1[4] != 0) {
    ACorePlayerController::ClientOnPawnUnPossessed_Implementation();
  }
  (**(code **)(*param_1 + 0x2c0))(param_1);
  FUN_1428ec010(param_1);
  lVar10 = param_1[4];
  if (lVar10 != 0) {
    lVar8 = FUN_142a07000();
    lVar10 = *(longlong *)(lVar10 + 0x10);
    if ((*(int *)(lVar10 + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar10 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar10 = param_1[0x72];
  if (lVar10 == 0) {
    lVar10 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar10;
  }
  FUN_142276bc0(lVar10);
  lVar10 = param_1[4];
  if (lVar10 != 0) {
    lVar8 = FUN_142a07000();
    lVar10 = *(longlong *)(lVar10 + 0x10);
    if ((*(int *)(lVar10 + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar10 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar10 = param_1[0x72];
  if (lVar10 == 0) {
    lVar10 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar10;
  }
  FUN_142257fe0(lVar10);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aef0b8) && (_Init_thread_header(&DAT_146aef0b8), DAT_146aef0b8 == -1))
  {
    FName::FName(&DAT_146aef0b0,L"BlueprintUpdateAnimation",1);
    _Init_thread_footer(&DAT_146aef0b8);
  }
  lVar10 = UObject::FindFunction(param_1,DAT_146aef0b0);
  param_1[0x7b] = lVar10;
  if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x30) == 0)) {
    param_1[0x7b] = 0;
  }
  return;
}



// FUNCTION 142276670 FUN_142276670 body=373 status=ok
// SIG undefined FUN_142276670(void)

void FUN_142276670(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*param_2 + 0xb8))(param_2,param_1,param_1[0x14]);
  *(undefined1 *)(param_2 + 5) = 0;
  FUN_142296370(param_2 + 1,param_2,param_1[0x14]);
  cVar3 = (**(code **)(*param_2 + 0x48))(param_2);
  if (cVar3 != '\0') {
    iVar1 = (int)param_1[0xaa];
    *(int *)(param_1 + 0xaa) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x554) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xa9,iVar1);
    }
    *(longlong **)(param_1[0xa9] + (longlong)iVar1 * 8) = param_2;
  }
  cVar3 = (**(code **)(*param_2 + 0x58))(param_2);
  if (cVar3 != '\0') {
    iVar1 = (int)param_1[0xae];
    *(int *)(param_1 + 0xae) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x574) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xad,iVar1);
    }
    *(longlong **)(param_1[0xad] + (longlong)iVar1 * 8) = param_2;
  }
  SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_res10,param_1);
  lVar6 = param_1[0x14];
  if (lVar6 != 0) {
    lVar4 = FUN_1428eccf0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142276793;
  }
  lVar6 = 0;
LAB_142276793:
  (**(code **)(*param_1 + 0x68))(param_1,lVar6);
  puVar5 = local_res10;
  if (param_3 != (undefined1 *)0x0) {
    puVar5 = param_3;
  }
  (**(code **)*param_2)(param_2,puVar5);
  SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_res20,param_1);
  (**(code **)(*param_2 + 8))(param_2,local_res20);
  (**(code **)(*param_1 + 0x70))(param_1);
  return;
}



// FUNCTION 1422767f0 FUN_1422767f0 body=781 status=ok
// SIG undefined FUN_1422767f0(void)

longlong FUN_1422767f0(undefined8 param_1,undefined8 param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  float fVar11;
  int local_res18 [2];
  
  if (param_3 != 0) {
    lVar5 = UMaterialInstanceConstant::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    lVar5 = param_3;
    if (bVar3) goto LAB_142276850;
  }
  lVar5 = 0;
LAB_142276850:
  plVar6 = (longlong *)FUN_1423b0890(param_2);
  if (plVar6 == (longlong *)0x0) {
    lVar7 = FUN_1423ac7e0(param_2);
    if (lVar7 == 0) {
      lVar5 = 0;
    }
    else if (lVar5 == 0) {
      plVar10 = *(longlong **)(lVar7 + 0x78);
      plVar6 = plVar10 + *(int *)(lVar7 + 0x80);
      for (; plVar10 != plVar6; plVar10 = plVar10 + 1) {
        plVar2 = (longlong *)*plVar10;
        if (plVar2 != (longlong *)0x0) {
          lVar5 = *plVar2;
          if ((lVar5 == 0) || (*(float *)(plVar2 + 0x2b) == 0.0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((((bVar3) && (lVar5 != 0)) &&
              (lVar1 = *(longlong *)(lVar5 + 0x20), lVar8 = GetTransientPackage(), lVar1 == lVar8))
             && (puVar9 = (undefined8 *)FUN_14225e840(lVar5,param_1), puVar9 != (undefined8 *)0x0))
          {
            if ((*(int *)(puVar9 + 1) == 1) && (*(longlong *)*puVar9 == param_3)) {
              return lVar5;
            }
            FAlphaBlend::SetDesiredValue(plVar2 + 0x26,0);
            FAlphaBlend::SetAlpha(plVar2 + 0x26,0x3f800000);
          }
        }
      }
      if (param_3 != 0) {
        if ((*(longlong *)(param_3 + 0x38) == 0) ||
           (*(longlong *)(lVar7 + 0x28) != *(longlong *)(param_3 + 0x38))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (lVar5 = FUN_14225c2a0(param_3,param_1,0,0,0,1,0xbf800000,0), lVar5 != 0)) {
          fVar11 = (float)FUN_142278740(lVar7,lVar5,0,0,0,1,0xbf800000,0xbf800000);
          if (fVar11 <= 0.0) {
            return 0;
          }
          return lVar5;
        }
      }
      lVar5 = 0;
    }
    else {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(lVar7 + 0x88,local_res18,lVar5);
      if (((((local_res18[0] == -1) ||
            (lVar1 = *(longlong *)(lVar7 + 0x88) + (longlong)local_res18[0] * 0x18, lVar1 == 0)) ||
           (plVar6 = (longlong *)(lVar1 + 8), plVar6 == (longlong *)0x0)) ||
          ((plVar6 = (longlong *)*plVar6, plVar6 == (longlong *)0x0 || (*plVar6 == 0)))) ||
         ((char)plVar6[5] == '\0')) {
        FUN_142278740(lVar7,lVar5,0,0,0,1,0xbf800000,0xbf800000);
      }
    }
  }
  else {
    lVar7 = FUN_1422a84f0(plVar6);
    if (lVar7 != param_3) {
      (**(code **)(*plVar6 + 0x340))(plVar6,param_3,param_4,0x3f800000);
      FUN_1422b40f0(plVar6,0,1);
    }
    cVar4 = FUN_1422af6b0(plVar6);
    if (cVar4 != param_4) {
      FUN_1422b3d30(plVar6,param_4);
    }
  }
  return lVar5;
}



// FUNCTION 142276b00 FUN_142276b00 body=180 status=ok
// SIG undefined FUN_142276b00(void)

void FUN_142276b00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char *pcVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  *(longlong *)(param_1 + 0xb8) = lVar1;
  uVar5 = 0;
  lVar1 = *(longlong *)(lVar1 + 0x718);
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x48);
  }
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  pcVar2 = *(char **)(*(longlong *)(param_1 + 0xb8) + 0x8f0);
  *(undefined4 *)(param_1 + 0x530) = 0;
  if (pcVar2 != (char *)0x0) {
    cVar4 = FUN_1423bdc20();
    if ((cVar4 == '\0') || ((*pcVar2 != '\x01' && (*(int *)(pcVar2 + 8) < 2)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (cVar4 != '\0') {
      *(short *)(param_1 + 0x530) = *(short *)(pcVar2 + 4) + -1;
    }
    if (bVar3) {
      *(short *)(param_1 + 0x532) = *(short *)(pcVar2 + 8) + -1;
    }
  }
  *(undefined2 *)(param_1 + 0x332) = *(undefined2 *)(param_1 + 0x530);
  *(undefined2 *)(param_1 + 0x342) = *(undefined2 *)(param_1 + 0x532);
  return;
}



// FUNCTION 142276bc0 FUN_142276bc0 body=677 status=ok
// SIG undefined FUN_142276bc0(void)

void FUN_142276bc0(longlong *param_1)

{
  bool bVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *local_res8;
  undefined1 local_res10 [8];
  longlong *local_38;
  undefined8 local_30;
  
  if (param_1[0x1b] != 0) {
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x564)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xab,0);
    }
    *(undefined4 *)(param_1 + 0xaa) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x554)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xa9,0);
    }
    *(undefined4 *)(param_1 + 0xae) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x574)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xad,0);
    }
    local_res8 = param_1;
    if ((longlong *)param_1[0x15] == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      local_30 = 0;
      (**(code **)(*param_1 + 0x40))(param_1,&local_38);
      uVar7 = (ulonglong)((longlong)(local_38 + (int)local_30) + (7 - (longlong)local_38)) >> 3;
      if (local_38 + (int)local_30 < local_38) {
        uVar7 = uVar6;
      }
      plVar9 = local_38;
      if (uVar7 != 0) {
        do {
          if (*plVar9 != 0) {
            FUN_142255d70(&local_res8);
          }
          plVar9 = plVar9 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar7);
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
    }
    else {
      puVar2 = (ulonglong *)(**(code **)(*(longlong *)param_1[0x15] + 0x20))();
      plVar9 = (longlong *)*puVar2;
      uVar7 = (longlong)(int)puVar2[1] & 0x1fffffffffffffff;
      if (plVar9 + (int)puVar2[1] < plVar9) {
        uVar7 = uVar6;
      }
      if (uVar7 != 0) {
LAB_142276c81:
        lVar5 = *plVar9;
        lVar3 = FAnimNode_Base::StaticStruct();
        for (lVar8 = *(longlong *)(lVar5 + 0x70); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
          if (lVar8 == lVar3) {
            lVar8 = (longlong)*(int *)(lVar5 + 0x44) + param_1[0x14];
            if (lVar8 != 0) {
              FUN_142255d70(&local_res8,lVar8);
              lVar4 = FUN_1428f58f0();
              lVar3 = *(longlong *)(lVar5 + 0x70);
              goto joined_r0x000142276ccc;
            }
            break;
          }
        }
        goto LAB_142276d17;
      }
    }
LAB_142276da0:
    *(short *)(param_1 + 0x62) = (short)param_1[0x62] + 1;
    param_1[0x61] = DAT_1468c21b0;
    if ((short)param_1[0x62] == -1) {
      *(undefined2 *)(param_1 + 0x62) = 0;
    }
    SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_res10,param_1);
    (*(code *)**(undefined8 **)param_1[0x1b])((undefined8 *)param_1[0x1b],local_res10);
  }
  plVar9 = (longlong *)param_1[0x14];
  if (plVar9 != (longlong *)0x0) {
    lVar5 = FUN_1428eccf0();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(&local_res8,param_1);
      (**(code **)(*plVar9 + 0x318))(plVar9,&local_res8);
    }
  }
  return;
joined_r0x000142276ccc:
  if (lVar3 == 0) goto LAB_142276cef;
  if (lVar3 == lVar4) {
    FUN_14228ba60(lVar8,param_1[0x15]);
    goto LAB_142276cef;
  }
  lVar3 = *(longlong *)(lVar3 + 0x30);
  goto joined_r0x000142276ccc;
LAB_142276cef:
  lVar3 = FAnimNode_SubInput::StaticStruct();
  for (lVar5 = *(longlong *)(lVar5 + 0x70); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
    if (lVar5 == lVar3) {
      param_1[0x1c] = lVar8;
      break;
    }
  }
LAB_142276d17:
  plVar9 = plVar9 + 1;
  uVar6 = uVar6 + 1;
  if (uVar6 == uVar7) goto LAB_142276da0;
  goto LAB_142276c81;
}



// FUNCTION 142276e70 FUN_142276e70 body=85 status=ok
// SIG undefined FUN_142276e70(void)

void FUN_142276e70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x178);
  lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x180) * 0x18;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FUN_142250d70(lVar2 + 8,param_1);
  }
  return;
}



// FUNCTION 142276ed0 FUN_142276ed0 body=11 status=ok
// SIG undefined FUN_142276ed0(void)

bool FUN_142276ed0(longlong param_1)

{
  return 0 < *(int *)(param_1 + 1000);
}



// FUNCTION 142276ee0 FUN_142276ee0 body=24 status=ok
// SIG undefined FUN_142276ee0(void)

undefined1 FUN_142276ee0(longlong param_1)

{
  if ((*(int *)(param_1 + 0x80) < 1) && (*(int *)(param_1 + 1000) < 1)) {
    return 0;
  }
  return 1;
}



// FUNCTION 142276f00 FUN_142276f00 body=310 status=ok
// SIG undefined FUN_142276f00(void)

bool FUN_142276f00(longlong *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  
  lVar5 = param_1[4];
  if (lVar5 != 0) {
    lVar4 = FUN_142a07000();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar3 = GetCurrentThreadId();
        bVar1 = false;
        if (DVar3 == DAT_1468c21c0) goto LAB_142276f83;
      }
      else {
LAB_142276f83:
        bVar1 = true;
      }
      if (bVar1) {
        FUN_1423b2d70(param_1[4],1);
      }
    }
  }
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  if (*(longlong **)(lVar5 + 0xa8) != (longlong *)0x0) {
    plVar6 = (longlong *)(**(code **)(**(longlong **)(lVar5 + 0xa8) + 0x20))();
    if ((-1 < param_2) && (param_2 < (int)plVar6[1])) {
      lVar4 = (longlong)
              *(int *)(*(longlong *)(*plVar6 + -8 + (longlong)((int)plVar6[1] - param_2) * 8) + 0x44
                      ) + *(longlong *)(lVar5 + 0xa0);
      if (lVar4 != 0) {
        fVar7 = *(float *)(*(longlong *)
                            (lVar5 + 0x138 + (longlong)(1 - *(int *)(lVar5 + 0x1c8)) * 0x10) +
                          (longlong)*(int *)(lVar4 + 0x30) * 4);
        goto LAB_14227701b;
      }
    }
  }
  fVar7 = 0.0;
LAB_14227701b:
  return 0.0 < fVar7;
}



// FUNCTION 142277040 IsPlayingSlotAnimation body=200 status=ok
// SIG undefined IsPlayingSlotAnimation(void)

ulonglong UAnimInstance::IsPlayingSlotAnimation
                    (longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *in_RAX;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar5 = 0;
    do {
      in_RAX = *(undefined8 **)(param_1 + 0x78);
      plVar1 = *(longlong **)(lVar5 + (longlong)in_RAX);
      if ((((plVar1 != (longlong *)0x0) && (lVar2 = *plVar1, lVar2 != 0)) &&
          (*(float *)(plVar1 + 0x2b) != 0.0)) &&
         ((((char)plVar1[5] != '\0' &&
           (puVar3 = *(undefined8 **)(lVar2 + 0x20), in_RAX = (undefined8 *)GetTransientPackage(),
           puVar3 == in_RAX)) &&
          ((in_RAX = (undefined8 *)FUN_14225e840(lVar2,param_3), in_RAX != (undefined8 *)0x0 &&
           (*(int *)(in_RAX + 1) == 1)))))) {
        return CONCAT71((int7)((ulonglong)*in_RAX >> 8),*(longlong *)*in_RAX == param_2);
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x80));
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142277110 FUN_142277110 body=200 status=ok
// SIG undefined FUN_142277110(void)

ulonglong FUN_142277110(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  ulonglong uVar4;
  
  lVar1 = *param_2;
  uVar2 = *(int *)(param_1 + 0x2a0) - *(int *)(param_1 + 0x2cc);
  uVar4 = (ulonglong)uVar2;
  if (uVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x2d8);
    if (*(longlong *)(param_1 + 0x2d8) == 0) {
      lVar5 = param_1 + 0x2d0;
    }
    uVar2 = *(uint *)(lVar5 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                              (longlong)*(int *)(param_1 + 0x2e0) - 1U) * 4);
    uVar4 = (ulonglong)uVar2;
    if (uVar2 != 0xffffffff) {
      do {
        iVar3 = (int)uVar4;
        piVar6 = (int *)(*(longlong *)(param_1 + 0x298) + (longlong)iVar3 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x298) + (longlong)iVar3 * 0x18) == lVar1) {
          if (iVar3 != -1) goto LAB_142277193;
          break;
        }
        uVar4 = (ulonglong)(uint)piVar6[4];
      } while (piVar6[4] != 0xffffffff);
    }
  }
  piVar6 = (int *)0x0;
LAB_142277193:
  piVar7 = piVar6 + 2;
  if (piVar6 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  if (piVar7 != (int *)0x0) {
    uVar4 = *(ulonglong *)(param_1 + 0x2e8 + (longlong)(1 - *(int *)(param_1 + 0x1c8)) * 0x10);
    if ((*(char *)(uVar4 + 8 + (longlong)*piVar7 * 0xc) != '\0') ||
       (*(char *)(uVar4 + 9 + (longlong)*piVar7 * 0xc) != '\0')) {
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1422771e0 IsStopped body=18 status=ok
// SIG undefined IsStopped(void)

undefined1 FAnimMontageInstance::IsStopped(longlong param_1)

{
  if (*(float *)(param_1 + 0x158) == 0.0) {
    return 1;
  }
  return 0;
}



// FUNCTION 142277200 FUN_142277200 body=283 status=ok
// SIG undefined FUN_142277200(void)

undefined8
FUN_142277200(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,char param_5)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_28;
  longlong local_20;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_1422772a6;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_1422772a6;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142277290;
  }
  else {
LAB_142277290:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_1422772a6:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  FUN_1422750a0(lVar5,&local_28,param_2);
  if (((local_28 == param_3) && (local_20 == param_4)) ||
     ((param_5 == '\0' && ((local_28 == param_4 && (local_20 == param_3)))))) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 142277320 FUN_142277320 body=102 status=ok
// SIG undefined FUN_142277320(void)

undefined8 FUN_142277320(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  if (0 < *(int *)(param_1 + 0x180)) {
    iVar2 = 0;
    while( true ) {
      cVar1 = FAnimTrack::IsAdditive(*(longlong *)(param_1 + 0x178) + ((longlong)iVar2 * 3 + 1) * 8)
      ;
      if (cVar1 == '\0') break;
      iVar2 = iVar2 + 1;
      if (*(int *)(param_1 + 0x180) <= iVar2) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142277390 FUN_142277390 body=72 status=ok
// SIG undefined FUN_142277390(void)

ulonglong FUN_142277390(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_1 + 0x180);
  uVar3 = 0;
  plVar2 = (longlong *)(longlong)iVar1;
  if (0 < iVar1) {
    plVar2 = *(longlong **)(param_1 + 0x178);
    uVar4 = uVar3;
    do {
      if (*plVar2 == param_2) {
        return CONCAT71((int7)(int3)(uVar4 >> 8),
                        0 < (int)(*(longlong **)(param_1 + 0x178))[(longlong)(int)uVar4 * 3 + 2]);
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 3;
    } while ((longlong)uVar3 < (longlong)iVar1);
  }
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}



// FUNCTION 1422773e0 FUN_1422773e0 body=252 status=ok
// SIG undefined FUN_1422773e0(void)

undefined8 FUN_1422773e0(longlong param_1,int param_2,int param_3,float param_4)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x170) <= param_2)) {
    fVar4 = 0.0;
  }
  else {
    lVar2 = (longlong)param_2 * 0x58 + *(longlong *)(param_1 + 0x168);
    cVar1 = *(char *)(lVar2 + 0x19);
    if (cVar1 == '\0') {
LAB_142277437:
      fVar4 = *(float *)(lVar2 + 0x24);
    }
    else if (cVar1 == '\x01') {
      fVar4 = *(float *)(lVar2 + 0x24) + *(float *)(lVar2 + 0x1c);
    }
    else {
      if (cVar1 != '\x02') goto LAB_142277437;
      fVar4 = *(float *)(lVar2 + 0x24) * *(float *)(lVar2 + 0x20) + *(float *)(lVar2 + 0x1c);
    }
  }
  if ((param_3 < 0) || (*(int *)(param_1 + 0x170) <= param_3)) {
    fVar3 = *(float *)(param_1 + 0x90);
    fVar5 = fVar3;
    goto LAB_1422774bd;
  }
  lVar2 = (longlong)param_3 * 0x58 + *(longlong *)(param_1 + 0x168);
  cVar1 = *(char *)(lVar2 + 0x19);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      fVar3 = *(float *)(lVar2 + 0x24) + *(float *)(lVar2 + 0x1c);
      fVar5 = *(float *)(param_1 + 0x90);
      goto LAB_1422774bd;
    }
    if (cVar1 == '\x02') {
      fVar3 = *(float *)(lVar2 + 0x24) * *(float *)(lVar2 + 0x20) + *(float *)(lVar2 + 0x1c);
      fVar5 = *(float *)(param_1 + 0x90);
      goto LAB_1422774bd;
    }
  }
  fVar3 = *(float *)(lVar2 + 0x24);
  fVar5 = *(float *)(param_1 + 0x90);
LAB_1422774bd:
  if (param_4 < fVar5) {
    if ((fVar4 <= param_4) && (param_4 < fVar3)) {
      return 1;
    }
  }
  else if ((fVar4 <= param_4) && (param_4 <= fVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1422774e0 FUN_1422774e0 body=294 status=ok
// SIG undefined FUN_1422774e0(void)

undefined8 FUN_1422774e0(longlong *param_1,longlong *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  
  lVar3 = *param_1;
  uVar6 = 0;
  iVar2 = *(int *)(lVar3 + 0x170);
  if (0 < iVar2) {
    plVar4 = (longlong *)(*(longlong *)(lVar3 + 0x168) + 0x30);
    uVar8 = uVar6;
    do {
      iVar5 = (int)uVar6;
      if (*plVar4 == *param_2) {
        if (iVar5 < 0) {
          return 0;
        }
        if (iVar2 <= iVar5) {
          return 0;
        }
        lVar7 = (longlong)iVar5 * 0x58 + *(longlong *)(lVar3 + 0x168);
        if (param_3 == '\0') {
          fVar9 = 0.0;
        }
        else {
          fVar9 = (float)FUN_142274830(lVar3);
          fVar9 = fVar9 - 0.0001;
        }
        cVar1 = *(char *)(lVar7 + 0x19);
        if (cVar1 != '\0') {
          if (cVar1 == '\x01') {
            fVar10 = *(float *)(lVar7 + 0x24) + *(float *)(lVar7 + 0x1c);
            goto LAB_1422775b1;
          }
          if (cVar1 == '\x02') {
            fVar10 = *(float *)(lVar7 + 0x24) * *(float *)(lVar7 + 0x20) + *(float *)(lVar7 + 0x1c);
            goto LAB_1422775b1;
          }
        }
        fVar10 = *(float *)(lVar7 + 0x24);
LAB_1422775b1:
        *(float *)(param_1 + 0x25) = fVar9 + fVar10;
        *(undefined4 *)(param_1 + 6) = 0xfffffffe;
        *(undefined4 *)(param_1 + 7) = 0xfffffffe;
        if (((char)param_1[5] != '\0') && (*(float *)(param_1 + 0x2b) == 0.0)) {
          FUN_142279d70(param_1,*(undefined4 *)((longlong)param_1 + 300));
        }
        return 1;
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 + 1;
      plVar4 = plVar4 + 0xb;
    } while ((longlong)uVar8 < (longlong)iVar2);
  }
  return 0;
}



// FUNCTION 142277610 FUN_142277610 body=242 status=ok
// SIG undefined FUN_142277610(void)

void FUN_142277610(longlong param_1,longlong param_2,float param_3,int param_4)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  float fVar6;
  
  if ((param_2 != 0) && (0 < *(int *)(param_2 + 0x180))) {
    *(longlong *)(param_1 + 8) = param_2;
    *(int *)(param_1 + 0x10) = param_4;
    lVar1 = *(longlong *)(param_2 + 0x178) + (longlong)param_4 * 0x18;
    iVar4 = FAnimTrack::GetSegmentIndexAtTime(lVar1 + 8,param_3);
    *(int *)(param_1 + 0x14) = iVar4;
    if (iVar4 == -1) {
      *(float *)(param_1 + 0x24) = param_3;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0xbf800000;
      *(undefined4 *)(param_1 + 0x20) = 0xbf800000;
      *(undefined2 *)(param_1 + 0x18) = 0;
      return;
    }
    puVar5 = (undefined8 *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar1 + 8));
    *(undefined8 *)(param_1 + 0x28) = *puVar5;
    fVar2 = *(float *)(puVar5 + 1);
    *(float *)(param_1 + 0x1c) = fVar2;
    fVar6 = (float)FAnimSegment::GetLength();
    cVar3 = *(char *)(param_1 + 0x19);
    *(float *)(param_1 + 0x20) = fVar6;
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        param_3 = param_3 - fVar2;
      }
      else {
        if (cVar3 != '\x02') {
          return;
        }
        param_3 = (param_3 - fVar2) / fVar6;
      }
    }
    *(float *)(param_1 + 0x24) = param_3;
  }
  return;
}



// FUNCTION 142277710 LinkSequence body=56 status=ok
// SIG undefined LinkSequence(void)

void FAnimLinkableElement::LinkSequence(longlong *param_1,longlong param_2,undefined4 param_3)

{
  if ((param_2 != 0) && (0.0 < *(float *)(param_2 + 0x90))) {
    param_1[5] = param_2;
    param_1[1] = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x000142277743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(0,param_3,0);
    return;
  }
  return;
}



// FUNCTION 142277750 FUN_142277750 body=83 status=ok
// SIG undefined FUN_142277750(void)

void FUN_142277750(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8,
                  undefined4 param_9,undefined8 param_10,undefined8 param_11)

{
  *param_2 = param_3;
  *(undefined4 *)(param_2 + 5) = *param_4;
  *(undefined4 *)((longlong)param_2 + 0x2c) = param_4[1];
  param_2[7] = param_5;
  param_2[6] = param_6;
  param_2[1] = param_10;
  param_2[8] = param_11;
  *(undefined1 *)((longlong)param_2 + 0x1c) = param_7;
  *(undefined4 *)(param_2 + 2) = param_8;
  *(undefined4 *)((longlong)param_2 + 0x14) = param_9;
  return;
}



// FUNCTION 1422777b0 MakePoseAssetTickRecord body=9 status=ok
// SIG undefined MakePoseAssetTickRecord(void)

void FAnimInstanceProxy::MakePoseAssetTickRecord
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined4 *)((longlong)param_2 + 0x14) = param_4;
  *param_2 = param_3;
  return;
}



// FUNCTION 1422777c0 FUN_1422777c0 body=48 status=ok
// SIG undefined FUN_1422777c0(void)

void FUN_1422777c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  param_2[1] = param_7;
  param_2[8] = param_8;
  *(undefined4 *)(param_2 + 2) = param_5;
  *(undefined4 *)((longlong)param_2 + 0x14) = param_6;
  *param_2 = param_3;
  *(undefined1 *)((longlong)param_2 + 0x1c) = param_4;
  return;
}



// FUNCTION 1422777f0 MakeUpToFullWeight body=226 status=ok
// SIG undefined MakeUpToFullWeight(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FRootMotionMovementParams::MakeUpToFullWeight(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
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
  float fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  fVar6 = 1.0 - *(float *)(param_1 + 4);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (0.0001 < fVar6) {
    AccumulateWithBlend(0,0);
  }
  fVar6 = *(float *)(param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x14);
  fVar2 = *(float *)(param_1 + 0x18);
  fVar3 = *(float *)(param_1 + 0x1c);
  auVar4._0_4_ = fVar6 * fVar6 + fVar2 * fVar2;
  auVar4._4_4_ = fVar1 * fVar1 + fVar3 * fVar3;
  auVar4._8_4_ = fVar2 * fVar2 + fVar6 * fVar6;
  auVar4._12_4_ = fVar3 * fVar3 + fVar1 * fVar1;
  fVar11 = auVar4._4_4_ + auVar4._0_4_;
  fVar12 = auVar4._8_4_ + auVar4._4_4_;
  fVar13 = auVar4._12_4_ + auVar4._8_4_;
  fVar14 = auVar4._0_4_ + auVar4._12_4_;
  auVar5._4_4_ = fVar12;
  auVar5._0_4_ = fVar11;
  auVar5._8_4_ = fVar13;
  auVar5._12_4_ = fVar14;
  auVar5 = rsqrtps(auVar4,auVar5);
  fVar7 = auVar5._0_4_;
  fVar8 = auVar5._4_4_;
  fVar9 = auVar5._8_4_;
  fVar10 = auVar5._12_4_;
  fVar7 = (_DAT_146aeef30 - fVar7 * fVar7 * _DAT_146aeef30 * fVar11) * fVar7 + fVar7;
  fVar8 = (fRam0000000146aeef34 - fVar8 * fVar8 * fRam0000000146aeef34 * fVar12) * fVar8 + fVar8;
  fVar9 = (fRam0000000146aeef38 - fVar9 * fVar9 * fRam0000000146aeef38 * fVar13) * fVar9 + fVar9;
  fVar10 = (fRam0000000146aeef3c - fVar10 * fVar10 * fRam0000000146aeef3c * fVar14) * fVar10 +
           fVar10;
  uVar15 = ((uint)(((fRam0000000146aeef34 - fVar8 * fVar8 * fRam0000000146aeef34 * fVar12) * fVar8 +
                   fVar8) * fVar1) ^ uRam0000000146aeef24) & -(uint)(fRam0000000146aeef64 <= fVar12)
           ^ uRam0000000146aeef24;
  uVar16 = ((uint)(((fRam0000000146aeef38 - fVar9 * fVar9 * fRam0000000146aeef38 * fVar13) * fVar9 +
                   fVar9) * fVar2) ^ uRam0000000146aeef28) & -(uint)(fRam0000000146aeef68 <= fVar13)
           ^ uRam0000000146aeef28;
  uVar17 = ((uint)(((fRam0000000146aeef3c - fVar10 * fVar10 * fRam0000000146aeef3c * fVar14) *
                    fVar10 + fVar10) * fVar3) ^ uRam0000000146aeef2c) &
           -(uint)(fRam0000000146aeef6c <= fVar14) ^ uRam0000000146aeef2c;
  *(uint *)(param_1 + 0x10) =
       ((uint)(((_DAT_146aeef30 - fVar7 * fVar7 * _DAT_146aeef30 * fVar11) * fVar7 + fVar7) * fVar6)
       ^ _DAT_146aeef20) & -(uint)(_DAT_146aeef60 <= fVar11) ^ _DAT_146aeef20;
  *(uint *)(param_1 + 0x14) = uVar15;
  *(uint *)(param_1 + 0x18) = uVar16;
  *(uint *)(param_1 + 0x1c) = uVar17;
  return;
}



// FUNCTION 1422778e0 FUN_1422778e0 body=48 status=ok
// SIG undefined FUN_1422778e0(void)

void FUN_1422778e0(longlong *param_1)

{
  (**(code **)(*param_1 + 800))();
  if ((longlong *)param_1[4] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142277903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[4] + 0xa90))();
    return;
  }
  return;
}



// FUNCTION 142277910 FUN_142277910 body=428 status=ok
// SIG undefined FUN_142277910(void)

void FUN_142277910(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined8 local_res8;
  longlong local_res10;
  
  plVar1 = (longlong *)param_1[0x34];
  if (plVar1 != (longlong *)0x0) {
    if (*(char *)((longlong)plVar1 + 0x184) == '\0') {
      fVar7 = *(float *)(plVar1 + 0x25);
    }
    else {
      fVar7 = *(float *)(plVar1 + 0x30);
    }
    if (*(char *)((longlong)param_1 + 0x184) == '\0') {
      fVar6 = *(float *)(param_1 + 0x25);
    }
    else {
      fVar6 = *(float *)(param_1 + 0x30);
    }
    if (0.0001 < ABS(fVar6 - fVar7)) {
      *(float *)(param_1 + 0x25) = fVar7;
      *(undefined4 *)(param_1 + 6) = 0xfffffffe;
      *(undefined4 *)(param_1 + 7) = 0xfffffffe;
    }
    lVar5 = 0;
    *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)((longlong)plVar1 + 300);
    lVar2 = *plVar1;
    if (((lVar2 == 0) || (iVar4 = FUN_14225e640(lVar2,(int)plVar1[0x25],&local_res8), iVar4 < 0)) ||
       (*(int *)(lVar2 + 0x170) <= iVar4)) {
      local_res10 = 0;
    }
    else {
      local_res10 = *(longlong *)((longlong)iVar4 * 0x58 + 0x30 + *(longlong *)(lVar2 + 0x168));
    }
    lVar2 = local_res10;
    local_res8 = 0;
    if (local_res10 != 0) {
      lVar3 = *param_1;
      if (((lVar3 == 0) || (iVar4 = FUN_14225e640(lVar3,(int)param_1[0x25],&local_res8), iVar4 < 0))
         || (*(int *)(lVar3 + 0x170) <= iVar4)) {
        local_res8 = 0;
      }
      else {
        lVar5 = *(longlong *)((longlong)iVar4 * 0x58 + 0x30 + *(longlong *)(lVar3 + 0x168));
      }
      if (lVar5 == lVar2) {
        lVar2 = *plVar1;
        if (((lVar2 == 0) || (iVar4 = FUN_14225e640(lVar2,(int)plVar1[0x25],&local_res8), iVar4 < 0)
            ) || (*(int *)(lVar2 + 0x170) <= iVar4)) {
          local_res8 = 0;
        }
        else {
          local_res8 = *(undefined8 *)((longlong)iVar4 * 0x58 + 0x40 + *(longlong *)(lVar2 + 0x168))
          ;
        }
        FUN_1422801c0(param_1,&local_res10,&local_res8);
      }
    }
  }
  return;
}



// FUNCTION 142277ac0 MontageSync_StopFollowing body=175 status=ok
// SIG undefined MontageSync_StopFollowing(void)

void FAnimMontageInstance::MontageSync_StopFollowing(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 400);
    iVar6 = *(int *)(lVar1 + 0x198);
    for (plVar4 = plVar2; plVar4 != plVar2 + iVar6; plVar4 = plVar4 + 1) {
      if (*plVar4 == param_1) {
        iVar3 = (int)((longlong)plVar4 - (longlong)plVar2 >> 3);
        if (iVar3 != -1) {
          iVar5 = (iVar6 - iVar3) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      (plVar2 + iVar3,plVar2 + (iVar6 - iVar5),(longlong)iVar5 << 3);
            iVar6 = *(int *)(lVar1 + 0x198);
          }
          *(int *)(lVar1 + 0x198) = iVar6 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(lVar1 + 400));
        }
        break;
      }
    }
    *(undefined8 *)(param_1 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 142277b70 FUN_142277b70 body=453 status=ok
// SIG undefined FUN_142277b70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142277b70(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) | 8;
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar9 = 0;
    do {
      plVar2 = *(longlong **)(lVar9 + *(longlong *)(param_1 + 0x78));
      if ((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) {
        cVar1 = *(char *)(param_1 + 0x30);
        if (((int)plVar2[0x31] < 1) &&
           ((cVar1 == '\x02' || ((cVar1 != '\0' && (plVar2 == *(longlong **)(param_1 + 0x338)))))))
        {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        local_88[0] = 0;
        local_58 = _DAT_146aeef40 & _DAT_146aeef50;
        uStack_54 = uRam0000000146aeef44 & uRam0000000146aeef54;
        uStack_50 = uRam0000000146aeef48 & uRam0000000146aeef58;
        uStack_4c = uRam0000000146aeef4c & uRam0000000146aeef5c;
        puVar8 = (undefined1 *)0x0;
        local_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = uRam0000000146aeef4c;
        local_84 = 0;
        local_68 = 0;
        uStack_60 = 0;
        if ((bVar6) && (puVar8 = (undefined1 *)(param_1 + 0x350), cVar1 == '\x01')) {
          puVar8 = local_88;
        }
        if ((plVar2[0x34] != 0) &&
           (auVar3._8_8_ = 0, auVar3._0_8_ = DAT_1468c21b0,
           *(int *)(plVar2[0x34] + 0x1a8) !=
           SUB164(auVar3 / ZEXT816(0xffffffff),0) + (int)DAT_1468c21b0)) {
          FUN_142277910(plVar2);
        }
        FUN_142256e90(plVar2,param_2,puVar8,cVar1 == '\x02');
        auVar4._8_8_ = 0;
        auVar4._0_8_ = DAT_1468c21b0;
        *(int *)(plVar2 + 0x35) = SUB164(auVar4 / ZEXT816(0xffffffff),0) + (int)DAT_1468c21b0;
        if ((plVar2[0x34] != 0) &&
           (auVar5._8_8_ = 0, auVar5._0_8_ = DAT_1468c21b0,
           *(int *)(plVar2[0x34] + 0x1a8) ==
           SUB164(auVar5 / ZEXT816(0xffffffff),0) + (int)DAT_1468c21b0)) {
          FUN_142277910();
        }
      }
      iVar7 = iVar7 + 1;
      lVar9 = lVar9 + 8;
    } while (iVar7 < *(int *)(param_1 + 0x80));
  }
  return;
}



// FUNCTION 142277d40 Montage_GetBlendTime body=210 status=ok
// SIG undefined Montage_GetBlendTime(void)

undefined4 UAnimInstance::Montage_GetBlendTime(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int local_res10 [6];
  
  if (param_2 == 0) {
    if (0 < *(int *)(param_1 + 0x80)) {
      plVar2 = *(longlong **)(param_1 + 0x78);
      lVar3 = 0;
      do {
        plVar1 = (longlong *)*plVar2;
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x2b) != 0.0)) {
          return (int)plVar1[0x28];
        }
        lVar3 = lVar3 + 1;
        plVar2 = plVar2 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x80));
    }
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_1 + 0x88),local_res10);
    plVar2 = (longlong *)0x0;
    if (local_res10[0] != -1) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res10[0] * 0x18);
    }
    plVar1 = plVar2 + 1;
    if (plVar2 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
      return *(undefined4 *)(*plVar1 + 0x140);
    }
  }
  return 0;
}



// FUNCTION 142277e20 Montage_GetCurrentSection body=197 status=ok
// SIG undefined Montage_GetCurrentSection(void)

undefined8 *
UAnimInstance::Montage_GetCurrentSection(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int local_res18 [4];
  
  plVar2 = (longlong *)0x0;
  if (param_3 == 0) {
    if (0 < *(int *)(param_1 + 0x80)) {
      plVar3 = *(longlong **)(param_1 + 0x78);
      do {
        plVar1 = (longlong *)*plVar3;
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x2b) != 0.0))
        goto LAB_142277e84;
        plVar2 = (longlong *)((longlong)plVar2 + 1);
        plVar3 = plVar3 + 1;
      } while ((longlong)plVar2 < (longlong)*(int *)(param_1 + 0x80));
    }
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_1 + 0x88),local_res18);
    plVar3 = plVar2;
    if (local_res18[0] != -1) {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res18[0] * 0x18);
    }
    plVar1 = plVar3 + 1;
    if (plVar3 == (longlong *)0x0) {
      plVar1 = plVar2;
    }
    if ((plVar1 != (longlong *)0x0) && (plVar1 = (longlong *)*plVar1, plVar1 != (longlong *)0x0)) {
LAB_142277e84:
      FUN_142268640(plVar1,param_2);
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142277ef0 Montage_GetIsStopped body=108 status=ok
// SIG undefined Montage_GetIsStopped(void)

bool UAnimInstance::Montage_GetIsStopped(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int local_res10 [6];
  
  if (param_2 == 0) {
    return true;
  }
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x88),local_res10);
  puVar3 = (undefined8 *)0x0;
  puVar2 = puVar3;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res10[0] * 0x18);
  }
  puVar1 = puVar2 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = puVar3;
  }
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar1;
  }
  return puVar3 == (undefined8 *)0x0;
}



// FUNCTION 142277f60 FUN_142277f60 body=237 status=ok
// SIG undefined FUN_142277f60(void)

undefined4 FUN_142277f60(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int local_res10 [6];
  
  if (param_2 == 0) {
    if (0 < *(int *)(param_1 + 0x80)) {
      plVar3 = *(longlong **)(param_1 + 0x78);
      lVar4 = 0;
      do {
        plVar2 = (longlong *)*plVar3;
        if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x2b) != 0.0)) {
          iVar1 = *param_3;
          if (iVar1 < 0) {
            return 0xffffffff;
          }
          if ((int)plVar2[0x1e] <= iVar1) {
            return 0xffffffff;
          }
          return *(undefined4 *)(plVar2[0x1d] + (longlong)iVar1 * 4);
        }
        lVar4 = lVar4 + 1;
        plVar3 = plVar3 + 1;
      } while (lVar4 < *(int *)(param_1 + 0x80));
    }
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_1 + 0x88),local_res10,param_2);
    plVar3 = (longlong *)0x0;
    if (local_res10[0] != -1) {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res10[0] * 0x18);
    }
    plVar2 = plVar3 + 1;
    if (plVar3 == (longlong *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    if ((plVar2 != (longlong *)0x0) && (lVar4 = *plVar2, lVar4 != 0)) {
      iVar1 = *param_3;
      if ((-1 < iVar1) && (iVar1 < *(int *)(lVar4 + 0xf0))) {
        return *(undefined4 *)(*(longlong *)(lVar4 + 0xe8) + (longlong)iVar1 * 4);
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 142278050 Montage_GetPlayRate body=210 status=ok
// SIG undefined Montage_GetPlayRate(void)

undefined4 UAnimInstance::Montage_GetPlayRate(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int local_res10 [6];
  
  if (param_2 == 0) {
    if (0 < *(int *)(param_1 + 0x80)) {
      plVar2 = *(longlong **)(param_1 + 0x78);
      lVar3 = 0;
      do {
        plVar1 = (longlong *)*plVar2;
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x2b) != 0.0)) {
          return *(undefined4 *)((longlong)plVar1 + 300);
        }
        lVar3 = lVar3 + 1;
        plVar2 = plVar2 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x80));
    }
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_1 + 0x88),local_res10);
    plVar2 = (longlong *)0x0;
    if (local_res10[0] != -1) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res10[0] * 0x18);
    }
    plVar1 = plVar2 + 1;
    if (plVar2 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
      return *(undefined4 *)(*plVar1 + 300);
    }
  }
  return 0;
}



// FUNCTION 142278130 FUN_142278130 body=318 status=ok
// SIG undefined FUN_142278130(void)

undefined4 FUN_142278130(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int local_res10 [2];
  
  if (param_2 == 0) {
    if (0 < *(int *)(param_1 + 0x80)) {
      puVar3 = *(undefined8 **)(param_1 + 0x78);
      lVar5 = 0;
      do {
        plVar1 = (longlong *)*puVar3;
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x2b) != 0.0))
        goto LAB_14227820b;
        lVar5 = lVar5 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar5 < *(int *)(param_1 + 0x80));
    }
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x88,local_res10,param_2);
    plVar4 = (longlong *)0x0;
    plVar2 = plVar4;
    if (local_res10[0] != -1) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res10[0] * 0x18);
    }
    plVar1 = plVar2 + 1;
    if (plVar2 == (longlong *)0x0) {
      plVar1 = plVar4;
    }
    if ((plVar1 != (longlong *)0x0) && (plVar1 = (longlong *)*plVar1, plVar1 != (longlong *)0x0)) {
      if (*(char *)((longlong)plVar1 + 0x184) != '\0') {
        return (int)plVar1[0x30];
      }
      goto LAB_1422781c7;
    }
    if ((param_3 != '\0') && (0 < *(int *)(param_1 + 0x80))) {
      plVar2 = *(longlong **)(param_1 + 0x78);
      do {
        plVar1 = (longlong *)*plVar2;
        if ((plVar1 != (longlong *)0x0) && (*plVar1 == param_2)) goto LAB_14227820b;
        plVar4 = (longlong *)((longlong)plVar4 + 1);
        plVar2 = plVar2 + 1;
      } while ((longlong)plVar4 < (longlong)*(int *)(param_1 + 0x80));
    }
  }
  return 0;
LAB_14227820b:
  if (*(char *)((longlong)plVar1 + 0x184) != '\0') {
    return (int)plVar1[0x30];
  }
LAB_1422781c7:
  return (int)plVar1[0x25];
}



// FUNCTION 142278270 Montage_IsActive body=170 status=ok
// SIG undefined Montage_IsActive(void)

ulonglong UAnimInstance::Montage_IsActive(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int local_res10 [6];
  
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x80);
    plVar2 = (longlong *)(longlong)iVar1;
    if (0 < iVar1) {
      puVar4 = *(undefined8 **)(param_1 + 0x78);
      lVar5 = 0;
      do {
        plVar2 = (longlong *)*puVar4;
        if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x2b) != 0.0))
        goto LAB_1422782cc;
        lVar5 = lVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar5 < iVar1);
    }
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_1 + 0x88),local_res10);
    plVar3 = (longlong *)0x0;
    if (local_res10[0] != -1) {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res10[0] * 0x18);
    }
    plVar2 = plVar3 + 1;
    if (plVar3 == (longlong *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    if ((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) {
LAB_1422782cc:
      return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
    }
  }
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}



// FUNCTION 142278320 FUN_142278320 body=320 status=ok
// SIG undefined FUN_142278320(void)

ulonglong FUN_142278320(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int local_res10 [2];
  
  if (param_2 == 0) {
    plVar3 = (longlong *)(longlong)*(int *)(param_1 + 0x80);
    if (0 < *(int *)(param_1 + 0x80)) {
      puVar4 = *(undefined8 **)(param_1 + 0x78);
      lVar6 = 0;
      while ((((plVar2 = (longlong *)*puVar4, plVar2 == (longlong *)0x0 || (*plVar2 == 0)) ||
              (*(float *)(plVar2 + 0x2b) == 0.0)) || ((char)plVar2[5] == '\0'))) {
        lVar6 = lVar6 + 1;
        puVar4 = puVar4 + 1;
        if ((longlong)plVar3 <= lVar6) {
          return (ulonglong)plVar2 & 0xffffffffffffff00;
        }
      }
LAB_1422783a4:
      return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
    }
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x88,local_res10,param_2);
    plVar5 = (longlong *)0x0;
    plVar3 = plVar5;
    if (local_res10[0] != -1) {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res10[0] * 0x18);
    }
    plVar2 = plVar3 + 1;
    if (plVar3 == (longlong *)0x0) {
      plVar2 = plVar5;
    }
    plVar3 = (longlong *)0x0;
    if ((plVar2 == (longlong *)0x0) || (plVar3 = (longlong *)*plVar2, plVar3 == (longlong *)0x0)) {
      if ((param_3 != '\0') &&
         (iVar1 = *(int *)(param_1 + 0x80), plVar3 = (longlong *)(longlong)iVar1, 0 < iVar1)) {
        puVar4 = *(undefined8 **)(param_1 + 0x78);
        do {
          plVar3 = (longlong *)*puVar4;
          if (((plVar3 != (longlong *)0x0) && (*plVar3 == param_2)) &&
             ((*plVar3 != 0 && (plVar2 = plVar3, (char)plVar3[5] != '\0')))) goto LAB_1422783a4;
          plVar5 = (longlong *)((longlong)plVar5 + 1);
          puVar4 = puVar4 + 1;
        } while ((longlong)plVar5 < (longlong)iVar1);
      }
    }
    else if ((*plVar3 != 0) && (plVar2 = plVar3, (char)plVar3[5] != '\0')) goto LAB_1422783a4;
  }
  return (ulonglong)plVar3 & 0xffffffffffffff00;
}



// FUNCTION 142278460 Montage_JumpToSection body=260 status=ok
// SIG undefined Montage_JumpToSection(void)

void UAnimInstance::Montage_JumpToSection(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_res10;
  int local_res18 [2];
  
  local_res10 = param_2;
  if (param_3 == 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x80)) {
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x78));
        if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x2b) != 0.0)) {
          FUN_1422774e0(plVar2,&local_res10,
                        *(float *)((longlong)plVar2 + 300) <= 0.0 &&
                        *(float *)((longlong)plVar2 + 300) != 0.0);
        }
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar3 < *(int *)(param_1 + 0x80));
    }
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x88,local_res18);
    plVar2 = (longlong *)0x0;
    if (local_res18[0] != -1) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res18[0] * 0x18);
    }
    plVar1 = plVar2 + 1;
    if (plVar2 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    if ((plVar1 != (longlong *)0x0) && (lVar4 = *plVar1, lVar4 != 0)) {
      FUN_1422774e0(lVar4,&local_res10,
                    *(float *)(lVar4 + 300) <= 0.0 && *(float *)(lVar4 + 300) != 0.0);
      return;
    }
  }
  return;
}



// FUNCTION 142278570 Montage_JumpToSectionsEnd body=260 status=ok
// SIG undefined Montage_JumpToSectionsEnd(void)

void UAnimInstance::Montage_JumpToSectionsEnd(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_res10;
  int local_res18 [2];
  
  local_res10 = param_2;
  if (param_3 == 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x80)) {
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x78));
        if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x2b) != 0.0)) {
          FUN_1422774e0(plVar2,&local_res10,
                        0.0 < *(float *)((longlong)plVar2 + 300) ||
                        *(float *)((longlong)plVar2 + 300) == 0.0);
        }
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar3 < *(int *)(param_1 + 0x80));
    }
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x88,local_res18);
    plVar2 = (longlong *)0x0;
    if (local_res18[0] != -1) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res18[0] * 0x18);
    }
    plVar1 = plVar2 + 1;
    if (plVar2 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    if ((plVar1 != (longlong *)0x0) && (lVar4 = *plVar1, lVar4 != 0)) {
      FUN_1422774e0(lVar4,&local_res10,
                    0.0 < *(float *)(lVar4 + 300) || *(float *)(lVar4 + 300) == 0.0);
      return;
    }
  }
  return;
}



// FUNCTION 142278680 Montage_Pause body=181 status=ok
// SIG undefined Montage_Pause(void)

void UAnimInstance::Montage_Pause(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int local_res10 [6];
  
  if (param_2 == 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x80)) {
      lVar3 = 0;
      do {
        plVar2 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x78));
        if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x2b) != 0.0)) {
          *(undefined1 *)(plVar2 + 5) = 0;
        }
        iVar4 = iVar4 + 1;
        lVar3 = lVar3 + 8;
      } while (iVar4 < *(int *)(param_1 + 0x80));
    }
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_1 + 0x88),local_res10);
    plVar2 = (longlong *)0x0;
    if (local_res10[0] != -1) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res10[0] * 0x18);
    }
    plVar1 = plVar2 + 1;
    if (plVar2 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
      *(undefined1 *)(*plVar1 + 0x28) = 0;
      return;
    }
  }
  return;
}



// FUNCTION 142278740 FUN_142278740 body=1423 status=ok
// SIG undefined FUN_142278740(void)

float FUN_142278740(longlong param_1,longlong *param_2,float param_3,char param_4,float param_5,
                   char param_6,float param_7,float param_8)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong **pplVar9;
  int iVar10;
  int iVar11;
  longlong **pplVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  longlong *local_res10 [2];
  char local_res20;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong **local_80;
  undefined8 local_78;
  
  if ((param_2 != (longlong *)0x0) && (0.0 < *(float *)(param_2 + 0x12))) {
    iVar10 = (int)param_2[0x30];
    plVar14 = (longlong *)(longlong)iVar10;
    local_res10[0] = param_2;
    local_res20 = param_4;
    if ((1 < iVar10) && (local_98 = param_2[7], local_98 != 0)) {
      if (iVar10 < 1) {
        local_a8 = DAT_146aef318;
      }
      else {
        FUN_1422ad450(local_98,&local_a8,param_2[0x2f]);
      }
      plVar8 = (longlong *)param_2[0x2f];
      local_80 = (longlong **)0x0;
      local_78 = (longlong **)0x1;
      lVar16 = 1;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_80);
      *local_80 = (longlong *)*plVar8;
      pplVar12 = local_80;
      local_88 = plVar14;
      if (1 < (longlong)plVar14) {
        lVar13 = 0x18;
        iVar10 = (int)local_78;
        do {
          local_a0 = *(longlong **)(lVar13 + param_2[0x2f]);
          for (pplVar9 = pplVar12; pplVar9 != pplVar12 + iVar10; pplVar9 = pplVar9 + 1) {
            if (*pplVar9 == local_a0) goto LAB_1422788e9;
          }
          lVar15 = (longlong)iVar10;
          iVar11 = iVar10 + 1;
          local_78 = (longlong **)CONCAT44(local_78._4_4_,iVar11);
          if (local_78._4_4_ < iVar11) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_80,iVar10);
            pplVar12 = local_80;
            iVar11 = (int)local_78;
          }
          iVar10 = iVar11;
          pplVar12[lVar15] = local_a0;
          FUN_1422ad450(local_98,&local_90,&local_a0);
          if (local_90 != local_a8) {
LAB_1422788e9:
            if (pplVar12 == (longlong **)0x0) {
              return 0.0;
            }
            FMemory::Free(pplVar12);
            return 0.0;
          }
          lVar16 = lVar16 + 1;
          lVar13 = lVar13 + 0x18;
        } while (lVar16 < (longlong)local_88);
      }
      if (pplVar12 != (longlong **)0x0) {
        FMemory::Free(pplVar12);
      }
    }
    cVar5 = local_res20;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar16 = local_res10[0][7];
      if ((lVar16 == 0) || (*(longlong *)(param_1 + 0x28) != lVar16)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if (param_6 != '\0') {
          if ((lVar16 == 0) || ((int)local_res10[0][0x30] < 1)) {
            local_a8 = DAT_146aef318;
          }
          else {
            FUN_1422ad450(lVar16,&local_a8,local_res10[0][0x2f]);
          }
          FUN_142281be0(param_1,local_a8,local_res10[0] + 0x17);
          FUN_142281ca0(param_1,local_a8,(int)local_res10[0][0x19]);
        }
        plVar14 = *(longlong **)(param_1 + 0x20);
        cVar6 = UActorComponent::IsComponentTickEnabled(plVar14);
        if (cVar6 == '\0') {
          (**(code **)(*plVar14 + 0x358))(plVar14,1);
        }
        if ((((char)local_res10[0][0x33] != '\0') ||
            (*(char *)((longlong)local_res10[0] + 0x199) != '\0')) &&
           (*(longlong *)(param_1 + 0x338) != 0)) {
          FUN_142281740(*(longlong *)(param_1 + 0x338),local_res10[0] + 0x17,1);
        }
        lVar16 = operator_new(0x230);
        if (lVar16 == 0) {
          plVar14 = (longlong *)0x0;
        }
        else {
          plVar14 = (longlong *)FUN_142254970(lVar16,param_1);
        }
        fVar1 = *(float *)(local_res10[0] + 0x12);
        *(int *)(plVar14 + 0x22) = DAT_146aef0c0;
        DAT_146aef0c0 = DAT_146aef0c0 + 1;
        local_a0 = plVar14;
        if (local_res10[0] != (longlong *)0x0) {
          *plVar14 = (longlong)local_res10[0];
          lVar16 = local_res10[0][0x18];
          plVar14[0x38] = local_res10[0][0x17];
          plVar14[0x39] = lVar16;
          lVar16 = local_res10[0][0x1a];
          plVar14[0x3a] = local_res10[0][0x19];
          plVar14[0x3b] = lVar16;
          lVar16 = local_res10[0][0x1c];
          plVar14[0x3c] = local_res10[0][0x1b];
          plVar14[0x3d] = lVar16;
          plVar14[0x3e] = local_res10[0][0x1d];
          lVar16 = local_res10[0][0x20];
          plVar14[0x3f] = local_res10[0][0x1f];
          plVar14[0x40] = lVar16;
          lVar16 = local_res10[0][0x22];
          plVar14[0x41] = local_res10[0][0x21];
          plVar14[0x42] = lVar16;
          uVar7 = *(undefined4 *)((longlong)local_res10[0] + 0x11c);
          lVar16 = local_res10[0][0x24];
          uVar3 = *(undefined4 *)((longlong)local_res10[0] + 0x124);
          *(int *)(plVar14 + 0x43) = (int)local_res10[0][0x23];
          *(undefined4 *)((longlong)plVar14 + 0x21c) = uVar7;
          *(int *)(plVar14 + 0x44) = (int)lVar16;
          *(undefined4 *)((longlong)plVar14 + 0x224) = uVar3;
          plVar14[0x45] = local_res10[0][0x25];
          *(undefined4 *)(plVar14 + 0x25) = 0;
          *(undefined4 *)(plVar14 + 6) = 0xfffffffe;
          *(undefined4 *)(plVar14 + 7) = 0xfffffffe;
          FAlphaBlend::SetValueRange(plVar14 + 0x26,0,0x3f800000);
          FUN_14227cb60(plVar14);
          cVar6 = FWeakObjectPtr::IsValid(plVar14 + 0x21);
          if ((cVar6 != '\0') && (0 < *(int *)(*plVar14 + 0x150))) {
            plVar8 = (longlong *)FWeakObjectPtr::Get(plVar14 + 0x21);
            lVar16 = plVar8[4];
            uVar2 = *(undefined8 *)(*plVar14 + 0x138);
            if (lVar16 != 0) {
              lVar13 = FUN_142a07000();
              lVar16 = *(longlong *)(lVar16 + 0x10);
              if ((*(int *)(lVar16 + 0x90) < *(int *)(lVar13 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(lVar16 + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
                  lVar13 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                FUN_1423b2d70(plVar8[4],1);
              }
            }
            lVar16 = plVar8[0x72];
            if (lVar16 == 0) {
              lVar16 = (**(code **)(*plVar8 + 0x308))(plVar8);
              plVar8[0x72] = lVar16;
            }
            plVar8 = *(longlong **)(lVar16 + 0xa8);
            if (plVar8 == (longlong *)0x0) {
              uVar7 = 0xffffffff;
            }
            else {
              uVar7 = (**(code **)(*plVar8 + 0x50))(plVar8,uVar2);
            }
            *(undefined4 *)((longlong)plVar14 + 0x17c) = uVar7;
          }
          plVar14[0xb] = (longlong)plVar14;
          plVar14[0xc] = *plVar14;
        }
        if (0.0 <= param_7) {
          FAlphaBlend::SetBlendTime(local_a0 + 0x38);
        }
        if (0.0 <= param_8) {
          FAlphaBlend::SetBlendTime(local_a0 + 0x3f);
        }
        FUN_142279d70(local_a0,param_3);
        fVar17 = 0.0;
        if ((0.0 <= param_5) && (fVar17 = fVar1, param_5 <= fVar1)) {
          fVar17 = param_5;
        }
        *(float *)(local_a0 + 0x25) = fVar17;
        *(undefined4 *)(local_a0 + 6) = 0xfffffffe;
        *(undefined4 *)(local_a0 + 7) = 0xfffffffe;
        iVar10 = *(int *)(param_1 + 0x80);
        *(int *)(param_1 + 0x80) = iVar10 + 1;
        if (*(int *)(param_1 + 0x84) < iVar10 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x78,iVar10);
        }
        *(longlong **)(*(longlong *)(param_1 + 0x78) + (longlong)iVar10 * 8) = local_a0;
        local_80 = local_res10;
        local_78 = &local_a0;
        FUN_140a9d130(param_1 + 0x88,&local_a8,&local_80,0);
        cVar6 = (**(code **)(*local_res10[0] + 0x2e8))();
        if (cVar6 != '\0') {
          *(longlong **)(param_1 + 0x338) = local_a0;
        }
        local_88 = local_res10[0];
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x48,&local_88);
        if (cVar5 != '\0') {
          return fVar1 / (param_3 * *(float *)((longlong)local_res10[0] + 0x94));
        }
        return fVar1;
      }
    }
  }
  return 0.0;
}



// FUNCTION 142278cd0 Montage_Resume body=203 status=ok
// SIG undefined Montage_Resume(void)

void UAnimInstance::Montage_Resume(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int local_res10 [6];
  
  if (param_2 == 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x80)) {
      lVar3 = 0;
      do {
        plVar2 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x78));
        if ((((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x2b) != 0.0))
           && ((char)plVar2[5] == '\0')) {
          *(undefined1 *)(plVar2 + 5) = 1;
        }
        iVar4 = iVar4 + 1;
        lVar3 = lVar3 + 8;
      } while (iVar4 < *(int *)(param_1 + 0x80));
    }
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_1 + 0x88),local_res10);
    plVar2 = (longlong *)0x0;
    if (local_res10[0] != -1) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res10[0] * 0x18);
    }
    plVar1 = plVar2 + 1;
    if (plVar2 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    if (((plVar1 != (longlong *)0x0) && (plVar1 = (longlong *)*plVar1, plVar1 != (longlong *)0x0))
       && ((*plVar1 == 0 || ((char)plVar1[5] == '\0')))) {
      *(undefined1 *)(plVar1 + 5) = 1;
      return;
    }
  }
  return;
}



// FUNCTION 142278da0 Montage_SetBlendingOutDelegate body=240 status=ok
// SIG undefined Montage_SetBlendingOutDelegate(void)

void UAnimInstance::Montage_SetBlendingOutDelegate
               (longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int local_res18 [2];
  
  if (param_3 == 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x80)) {
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x78));
        if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x2b) != 0.0)) {
          FUN_1405bae40(plVar2 + 3,param_2);
        }
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar3 < *(int *)(param_1 + 0x80));
    }
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x88,local_res18);
    plVar2 = (longlong *)0x0;
    if (local_res18[0] != -1) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res18[0] * 0x18);
    }
    plVar1 = plVar2 + 1;
    if (plVar2 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
      FUN_1405bae40(*plVar1 + 0x18,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 142278e90 Montage_SetEndDelegate body=240 status=ok
// SIG undefined Montage_SetEndDelegate(void)

void UAnimInstance::Montage_SetEndDelegate(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int local_res18 [2];
  
  if (param_3 == 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x80)) {
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x78));
        if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x2b) != 0.0)) {
          FUN_1405bae40(plVar2 + 1,param_2);
        }
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar3 < *(int *)(param_1 + 0x80));
    }
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x88,local_res18);
    plVar2 = (longlong *)0x0;
    if (local_res18[0] != -1) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res18[0] * 0x18);
    }
    plVar1 = plVar2 + 1;
    if (plVar2 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
      FUN_1405bae40(*plVar1 + 8,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 142278f80 Montage_SetNextSection body=221 status=ok
// SIG undefined Montage_SetNextSection(void)

void UAnimInstance::Montage_SetNextSection
               (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  int local_res20 [2];
  
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_4 == 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x80)) {
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x78));
        if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x2b) != 0.0)) {
          FUN_1422801c0(plVar2,&local_res10,&local_res18);
        }
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar3 < *(int *)(param_1 + 0x80));
    }
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x88,local_res20,param_4);
    plVar2 = (longlong *)0x0;
    if (local_res20[0] != -1) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res20[0] * 0x18);
    }
    plVar1 = plVar2 + 1;
    if (plVar2 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
      FUN_1422801c0(*plVar1,&local_res10,&local_res18);
      return;
    }
  }
  return;
}



// FUNCTION 142279060 Montage_SetPlayRate body=206 status=ok
// SIG undefined Montage_SetPlayRate(void)

void UAnimInstance::Montage_SetPlayRate(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int local_res10 [6];
  
  if (param_2 == 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x80)) {
      lVar3 = 0;
      do {
        plVar2 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x78));
        if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x2b) != 0.0)) {
          *(undefined4 *)((longlong)plVar2 + 300) = param_3;
        }
        iVar4 = iVar4 + 1;
        lVar3 = lVar3 + 8;
      } while (iVar4 < *(int *)(param_1 + 0x80));
    }
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_1 + 0x88),local_res10);
    plVar2 = (longlong *)0x0;
    if (local_res10[0] != -1) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res10[0] * 0x18);
    }
    plVar1 = plVar2 + 1;
    if (plVar2 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
      *(undefined4 *)(*plVar1 + 300) = param_3;
      return;
    }
  }
  return;
}



// FUNCTION 142279130 Montage_SetPosition body=236 status=ok
// SIG undefined Montage_SetPosition(void)

void UAnimInstance::Montage_SetPosition(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int local_res10 [6];
  
  if (param_2 == 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x80)) {
      lVar3 = 0;
      do {
        plVar2 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x78));
        if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x2b) != 0.0)) {
          *(undefined4 *)(plVar2 + 0x25) = param_3;
          *(undefined4 *)(plVar2 + 6) = 0xfffffffe;
          *(undefined4 *)(plVar2 + 7) = 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        lVar3 = lVar3 + 8;
      } while (iVar4 < *(int *)(param_1 + 0x80));
    }
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_1 + 0x88),local_res10);
    plVar2 = (longlong *)0x0;
    if (local_res10[0] != -1) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res10[0] * 0x18);
    }
    plVar1 = plVar2 + 1;
    if (plVar2 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    if ((plVar1 != (longlong *)0x0) && (lVar3 = *plVar1, lVar3 != 0)) {
      *(undefined4 *)(lVar3 + 0x128) = param_3;
      *(undefined4 *)(lVar3 + 0x30) = 0xfffffffe;
      *(undefined4 *)(lVar3 + 0x38) = 0xfffffffe;
      return;
    }
  }
  return;
}



// FUNCTION 142279220 FUN_142279220 body=245 status=ok
// SIG undefined FUN_142279220(void)

void FUN_142279220(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int local_res18 [2];
  
  if (param_3 == 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x80)) {
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x78));
        if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x2b) != 0.0)) {
          TBaseDelegate<FSlateBrush_const_*>::operator=(plVar2 + 0x36,param_2);
        }
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar3 < *(int *)(param_1 + 0x80));
    }
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x88,local_res18);
    plVar2 = (longlong *)0x0;
    if (local_res18[0] != -1) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res18[0] * 0x18);
    }
    plVar1 = plVar2 + 1;
    if (plVar2 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
      TBaseDelegate<FSlateBrush_const_*>::operator=(*plVar1 + 0x1b0,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 142279320 FUN_142279320 body=319 status=ok
// SIG undefined FUN_142279320(void)

void FUN_142279320(longlong param_1,undefined4 param_2,longlong param_3)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int local_res18 [2];
  undefined1 local_68 [96];
  
  if (param_3 == 0) {
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x80)) {
      lVar6 = 0;
      do {
        plVar4 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x78));
        if (plVar4 != (longlong *)0x0) {
          if ((*plVar4 == 0) || (*(float *)(plVar4 + 0x2b) == 0.0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            uVar3 = FAlphaBlend::FAlphaBlend(local_68,*plVar4 + 0xf8,param_2);
            FUN_142281740(plVar4,uVar3,1);
          }
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 8;
      } while (iVar5 < *(int *)(param_1 + 0x80));
    }
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x88,local_res18);
    plVar4 = (longlong *)0x0;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)local_res18[0] * 0x18);
    }
    plVar2 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    if ((plVar2 != (longlong *)0x0) && (lVar6 = *plVar2, lVar6 != 0)) {
      uVar3 = FAlphaBlend::FAlphaBlend(local_68,param_3 + 0xf8,param_2);
      FUN_142281740(lVar6,uVar3,1);
    }
  }
  return;
}



// FUNCTION 142279460 Montage_UpdateWeight body=158 status=ok
// SIG undefined Montage_UpdateWeight(void)

void UAnimInstance::Montage_UpdateWeight(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + *(longlong *)(param_1 + 0x78));
      if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
        *(int *)((longlong)plVar1 + 0x16c) = (int)plVar1[0x2a];
        FAlphaBlend::Update(plVar1 + 0x26,param_2);
        fVar4 = *(float *)(plVar1 + 0x2a);
        if (*(float *)(plVar1 + 0x2a) <= *(float *)((longlong)plVar1 + 0x16c)) {
          fVar4 = *(float *)((longlong)plVar1 + 0x16c);
        }
        *(float *)(plVar1 + 0x2e) = fVar4;
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x80));
  }
  return;
}



// FUNCTION 142279500 FUN_142279500 body=197 status=ok
// SIG undefined FUN_142279500(void)

void FUN_142279500(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  plVar3 = (longlong *)FUN_142268ae0(*(undefined8 *)(param_1 + 0x10));
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
    iVar5 = 0;
    if (0 < (int)plVar3[1]) {
      lVar6 = 0;
      do {
        lVar2 = *(longlong *)(lVar6 + *plVar3);
        if ((lVar2 != 0) && (lVar4 = FUN_1428f58f0(), *(longlong *)(lVar2 + 0x70) == lVar4)) {
          iVar1 = *(int *)(param_1 + 0x438);
          *(int *)(param_1 + 0x438) = iVar1 + 1;
          if (*(int *)(param_1 + 0x43c) < iVar1 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x430,iVar1);
          }
          *(int *)(*(longlong *)(param_1 + 0x430) + (longlong)iVar1 * 4) = iVar5;
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 8;
      } while (iVar5 < (int)plVar3[1]);
    }
  }
  return;
}



// FUNCTION 1422795d0 NeedsUpdate body=10 status=ok
// SIG undefined NeedsUpdate(void)

byte UAnimInstance::NeedsUpdate(longlong param_1)

{
  return *(byte *)(param_1 + 0x31) >> 2 & 1;
}



// FUNCTION 1422795e0 thunk_FUN_14225b550 body=5 status=ok
// SIG undefined thunk_FUN_14225b550(void)

void thunk_FUN_14225b550(void)

{
  FUN_14225b550();
  return;
}



// FUNCTION 1422795f0 FUN_1422795f0 body=479 status=ok
// SIG undefined FUN_1422795f0(void)

void FUN_1422795f0(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar6 = 0;
  if (param_2 < param_3) {
    if (0 < *(int *)(param_1 + 0x550)) {
      uVar9 = uVar6;
      iVar8 = 0;
      do {
        iVar7 = iVar8 + 1;
        iVar5 = (int)uVar6;
        lVar1 = *(longlong *)(uVar9 + *(longlong *)(param_1 + 0x548));
        if ((lVar1 != 0) && (cVar2 = FUN_142297770(lVar1,param_1), cVar2 == '\0')) {
          iVar4 = *(int *)(param_1 + 0x560);
          *(int *)(param_1 + 0x560) = iVar4 + 1;
          if (*(int *)(param_1 + 0x564) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x558,iVar4)
            ;
          }
          *(longlong *)(*(longlong *)(param_1 + 0x558) + (longlong)iVar4 * 8) = lVar1;
          iVar4 = *(int *)(param_1 + 0x550);
          iVar3 = (iVar4 - iVar5) + -1;
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x548) + (longlong)iVar5 * 8),
                       (void *)(*(longlong *)(param_1 + 0x548) + (longlong)iVar7 * 8),
                       (longlong)iVar3 << 3);
            iVar4 = *(int *)(param_1 + 0x550);
          }
          iVar5 = iVar5 + -1;
          *(int *)(param_1 + 0x550) = iVar4 + -1;
          uVar9 = uVar9 - 8;
          iVar7 = iVar8;
        }
        uVar6 = (ulonglong)(iVar5 + 1U);
        uVar9 = uVar9 + 8;
        iVar8 = iVar7;
      } while ((int)(iVar5 + 1U) < *(int *)(param_1 + 0x550));
    }
  }
  else if (0 < *(int *)(param_1 + 0x560)) {
    iVar8 = 1;
    uVar9 = uVar6;
    do {
      iVar7 = (int)uVar6;
      lVar1 = *(longlong *)(uVar9 + *(longlong *)(param_1 + 0x558));
      if ((lVar1 != 0) && (cVar2 = FUN_142297770(lVar1,param_1), cVar2 != '\0')) {
        iVar5 = *(int *)(param_1 + 0x550);
        *(int *)(param_1 + 0x550) = iVar5 + 1;
        if (*(int *)(param_1 + 0x554) < iVar5 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x548,iVar5);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x548) + (longlong)iVar5 * 8) = lVar1;
        iVar5 = *(int *)(param_1 + 0x560);
        iVar4 = (iVar5 - iVar7) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x558) + (longlong)iVar7 * 8),
                     (void *)(*(longlong *)(param_1 + 0x558) + (longlong)iVar8 * 8),
                     (longlong)iVar4 << 3);
          iVar5 = *(int *)(param_1 + 0x560);
        }
        iVar7 = iVar7 + -1;
        iVar8 = iVar8 + -1;
        *(int *)(param_1 + 0x560) = iVar5 + -1;
        uVar9 = uVar9 - 8;
      }
      uVar6 = (ulonglong)(iVar7 + 1U);
      iVar8 = iVar8 + 1;
      uVar9 = uVar9 + 8;
    } while ((int)(iVar7 + 1U) < *(int *)(param_1 + 0x560));
  }
  return;
}



// FUNCTION 1422797d0 FUN_1422797d0 body=55 status=ok
// SIG undefined FUN_1422797d0(void)

void FUN_1422797d0(undefined8 param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)*param_2;
  lVar2 = (longlong)((param_3 + -1 + iVar1 & -param_3) - iVar1);
  FMemoryReader::Serialize(param_1,*param_2,lVar2);
  *param_2 = *param_2 + lVar2;
  return;
}



// FUNCTION 142279810 FUN_142279810 body=124 status=ok
// SIG undefined FUN_142279810(void)

void FUN_142279810(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 local_res18 [8];
  
  local_res18[0] = 0x55;
  lVar1 = *param_2;
  uVar3 = (param_3 + -1 + (int)lVar1 & -param_3) - (int)lVar1;
  if (0 < (int)uVar3) {
    uVar2 = (ulonglong)uVar3;
    do {
      (**(code **)(*param_1 + 0x50))(param_1,local_res18,1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    lVar1 = *param_2;
  }
  *param_2 = (int)uVar3 + lVar1;
  return;
}



// FUNCTION 142279890 FUN_142279890 body=272 status=ok
// SIG undefined FUN_142279890(void)

undefined8 FUN_142279890(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_142279926;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_142279926;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142279910;
  }
  else {
LAB_142279910:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142279926:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  cVar2 = FWeakObjectPtr::IsValid(lVar5 + 0x3d0);
  if (((cVar2 != '\0') && (*(longlong *)(lVar5 + 1000) != 0)) && (0 < *(int *)(lVar5 + 0x3a8))) {
    lVar5 = FWeakObjectPtr::Get(lVar5 + 0x3d0);
    if (lVar5 == param_2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1422799a0 FUN_1422799a0 body=784 status=ok
// SIG undefined FUN_1422799a0(void)

void FUN_1422799a0(longlong *param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,undefined8 *param_6)

{
  short sVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  short *psVar10;
  int iVar11;
  undefined1 local_res10 [8];
  undefined8 *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  char local_a0;
  undefined8 local_98;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined2 local_50;
  char local_4e;
  char local_48;
  undefined *local_38;
  undefined1 *puStack_30;
  
  lVar9 = param_1[4];
  if (lVar9 == 0) goto LAB_142279a4d;
  lVar8 = FUN_142a07000();
  lVar9 = *(longlong *)(lVar9 + 0x10);
  if ((*(int *)(lVar9 + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar9 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) goto LAB_142279a4d;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    bVar3 = false;
    if (DVar5 == DAT_1468c21c0) goto LAB_142279a37;
  }
  else {
LAB_142279a37:
    bVar3 = true;
  }
  if (bVar3) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142279a4d:
  lVar9 = param_1[0x72];
  if (lVar9 == 0) {
    lVar9 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar9;
  }
  iVar7 = 0;
  param_6[2] = lVar9 + 0x3a0;
  iVar11 = *(int *)(lVar9 + 0x3a8);
  iVar6 = iVar7;
  if ((*(int *)((longlong)param_6 + 0xc) < iVar11) &&
     (*(undefined4 *)(param_6 + 1) = 0, iVar6 = 0, *(int *)((longlong)param_6 + 0xc) != iVar11)) {
    FUN_140848c80(param_6,iVar11);
    iVar6 = *(int *)(param_6 + 1);
  }
  *(int *)(param_6 + 1) = iVar6 + iVar11;
  if (*(int *)((longlong)param_6 + 0xc) < iVar6 + iVar11) {
    TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(param_6);
  }
  FUN_1408488d0(param_6,param_6[2]);
  puStack_30 = local_res10;
  local_res10[0] = 0;
  local_38 = &DAT_14060d670;
  lVar8 = FUN_1415d8310(&local_38,&DAT_146216a38);
  local_b8 = (undefined8 *)(lVar8 + 0x18);
  local_b0 = *local_b8;
  local_a8 = *(longlong *)(lVar8 + 0x28);
  local_a0 = '\0';
  local_98 = *(undefined8 *)(lVar8 + 0x30);
  *(undefined8 ***)(lVar8 + 0x30) = &local_b8;
  *(int *)(lVar8 + 0x38) = *(int *)(lVar8 + 0x38) + 1;
  if (param_2 == '\0') {
    SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_88,lVar9);
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_4e = param_2;
    local_48 = param_2;
    FUN_142296770(local_88,lVar9);
    if (local_48 == '\0') {
      FUN_1408488d0(&local_80,local_70);
    }
    else {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity();
    }
    FUN_14225d1a0(lVar9,local_88);
    param_5[2] = local_58;
    *(undefined4 *)(param_5 + 1) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_5 + 0xc)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_5,0);
    }
    iVar11 = (int)local_60;
    lVar9 = (longlong)(int)local_60;
    if ((int)local_60 != 0) {
      iVar6 = (int)param_5[1];
      if (*(int *)((longlong)param_5 + 0xc) < (int)local_60 + iVar6) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_5);
        iVar6 = (int)param_5[1];
      }
      _guard_xfg_dispatch_icall_nop((void *)(*param_5 + (longlong)iVar6 * 8),local_68,lVar9 << 3);
      *(int *)(param_5 + 1) = (int)param_5[1] + iVar11;
    }
    puVar2 = (undefined8 *)param_5[2];
    if ((puVar2 != (undefined8 *)0x0) && (lVar9 = (longlong)*(int *)(puVar2 + 1), 0 < lVar9)) {
      psVar10 = (short *)*puVar2;
      iVar11 = iVar7;
      do {
        sVar1 = *psVar10;
        psVar10 = psVar10 + 1;
        iVar7 = iVar11 + 1;
        if (sVar1 == -1) {
          iVar7 = iVar11;
        }
        lVar9 = lVar9 + -1;
        iVar11 = iVar7;
      } while (lVar9 != 0);
    }
    *(short *)(param_5 + 3) = (short)iVar7;
    *(undefined1 *)((longlong)param_5 + 0x1a) = 1;
    if (param_6 != &local_80) {
      TArray<FTransform,TMemStackAllocator<0>_>::operator=(param_6,&local_80);
      param_6[2] = local_70;
    }
  }
  else {
    FUN_1408488d0(param_6,param_6[2]);
  }
  if (local_a0 == '\0') {
    local_a0 = 1;
    *(int *)(local_b8 + 4) = *(int *)(local_b8 + 4) + -1;
    if (local_a8 != local_b8[2]) {
      FMemStackBase::FreeChunks();
    }
    *local_b8 = local_b0;
    local_b8[3] = local_98;
  }
  return;
}



// FUNCTION 142279cb0 FUN_142279cb0 body=190 status=ok
// SIG undefined FUN_142279cb0(void)

void FUN_142279cb0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_142279d3d;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_142279d3d;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142279d27;
  }
  else {
LAB_142279d27:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142279d3d:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  FUN_142284410(lVar5);
  return;
}



// FUNCTION 142279d70 FUN_142279d70 body=173 status=ok
// SIG undefined FUN_142279d70(void)

void FUN_142279d70(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  *(undefined4 *)((longlong)param_1 + 300) = param_2;
  *(undefined1 *)(param_1 + 5) = 1;
  lVar1 = param_1[0x2a];
  FAlphaBlend::SetBlendOption(param_1 + 0x26,(char)param_1[0x38]);
  FAlphaBlend::SetCustomCurve(param_1 + 0x26,param_1[0x39]);
  FAlphaBlend::SetBlendTime(param_1 + 0x26,(int)param_1[0x3a]);
  FAlphaBlend::SetBlendTime
            (param_1 + 0x26,*(float *)(param_1 + 0x3a) * *(float *)((longlong)param_1 + 0x2c));
  FAlphaBlend::SetValueRange(param_1 + 0x26,(int)lVar1,0x3f800000);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)(*param_1 + 0x19a);
  return;
}



// FUNCTION 142279e20 FUN_142279e20 body=700 status=ok
// SIG undefined FUN_142279e20(void)

void FUN_142279e20(longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,float param_7)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  float fVar11;
  undefined8 local_res10;
  float fStack_ac;
  undefined **local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined2 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  
  if (param_2 != (longlong *)0x0) {
    lVar8 = UMaterialInstanceConstant::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((!bVar6) && (local_res10 = 0, param_3 != 0)) {
      lVar8 = param_2[7];
      if ((lVar8 == 0) || (*(longlong *)(param_1 + 0x28) != lVar8)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) && (cVar7 = (**(code **)(*param_2 + 0x338))(param_2), cVar7 != '\0')) {
        uVar9 = GetTransientPackage();
        lVar10 = FUN_142254910(uVar9);
        UAnimationAsset::SetSkeleton(lVar10,lVar8);
        plVar5 = *(longlong **)(lVar10 + 0x178);
        *plVar5 = param_3;
        fVar3 = *(float *)(param_2 + 0x12);
        fStack_ac = (float)CONCAT31(fStack_ac._1_3_,1);
        fVar11 = 1.0;
        if (1e-08 < ABS(*(float *)((longlong)param_2 + 0x94))) {
          fVar11 = *(float *)((longlong)param_2 + 0x94);
        }
        *(float *)(lVar10 + 0x90) = ((float)(int)param_7 * fVar3) / ABS(fVar11);
        iVar4 = (int)plVar5[2];
        *(int *)(plVar5 + 2) = iVar4 + 1;
        if (*(int *)((longlong)plVar5 + 0x14) < iVar4 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(plVar5 + 1,iVar4);
        }
        lVar8 = plVar5[1];
        local_a0 = 0;
        local_98 = 0;
        local_94 = 0xffffffff;
        puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar8);
        *puVar1 = param_2;
        puVar1[1] = 0;
        local_90 = 0;
        pfVar2 = (float *)((longlong)iVar4 * 0x20 + 0x10 + lVar8);
        *pfVar2 = fVar3;
        pfVar2[1] = 1.0;
        pfVar2[2] = param_7;
        pfVar2[3] = fStack_ac;
        local_8c = 0;
        local_a8 = &PTR_FUN_14501bd70;
        local_80 = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        FName::FName(&local_res10,L"Default",1);
        iVar4 = *(int *)(lVar10 + 0x170);
        local_78 = local_res10;
        local_84 = 0;
        *(int *)(lVar10 + 0x170) = iVar4 + 1;
        if (*(int *)(lVar10 + 0x174) < iVar4 + 1) {
          TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(lVar10 + 0x168,iVar4);
        }
        FCompositeSection::FCompositeSection
                  ((longlong)iVar4 * 0x58 + *(longlong *)(lVar10 + 0x168),&local_a8);
        FAlphaBlend::SetBlendTime(lVar10 + 0xb8,param_4);
        FAlphaBlend::SetBlendTime(lVar10 + 0xf8,param_5);
        FUN_142278740(param_1,lVar10,param_6,0,0,1,0xbf800000,0xbf800000);
        if (local_60 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 14227a0e0 FUN_14227a0e0 body=230 status=ok
// SIG undefined FUN_14227a0e0(void)

longlong FUN_14227a0e0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                      undefined4 param_9)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  if ((((param_2 == 0) || (*(longlong *)(param_2 + 0x38) == 0)) ||
      (*(longlong *)(param_1 + 0x28) != *(longlong *)(param_2 + 0x38))) ||
     (lVar1 = FUN_14225c2a0(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9),
     lVar1 == 0)) {
    lVar2 = 0;
  }
  else {
    fVar3 = (float)FUN_142278740(param_1,lVar1,param_6,0,param_9,1,0xbf800000,0xbf800000);
    lVar2 = 0;
    if (0.0 < fVar3) {
      lVar2 = lVar1;
    }
  }
  return lVar2;
}



// FUNCTION 14227a1d0 FUN_14227a1d0 body=421 status=ok
// SIG undefined FUN_14227a1d0(void)

void FUN_14227a1d0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *local_res8;
  
  lVar5 = param_1[4];
  if (lVar5 != 0) {
    lVar4 = FUN_142a07000();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  plVar1 = *(longlong **)(lVar5 + 0xd8);
  if ((plVar1 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar1 + 0xd8))(plVar1), cVar3 == '\0'))
  {
    plVar1 = *(longlong **)(lVar5 + 0xd8);
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    local_res8 = plVar1;
    lVar4 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if (lVar4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      uVar6 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
              ::GetBoundProgramCounterForTimerManager(uVar6);
    }
    *(undefined8 *)(lVar5 + 0xd8) = uVar6;
  }
  else {
    lVar4 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if (lVar4 == 0) {
      return;
    }
    uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    plVar7 = (longlong *)
             TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
             ::GetBoundProgramCounterForTimerManager(uVar6);
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    local_res8 = plVar7;
    lVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if (lVar4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      uVar6 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
              ::GetBoundProgramCounterForTimerManager(uVar6);
    }
    lVar4 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if (lVar4 == 0) {
      return;
    }
    FUN_140488ed0(lVar4,uVar6);
  }
  TArray<FName,FDefaultAllocator>::Remove(lVar5 + 0x5e0,&local_res8);
  if (local_res8 != (longlong *)0x0) {
    (**(code **)(*local_res8 + 0x78))(local_res8,1);
  }
  return;
}



// FUNCTION 14227a380 FUN_14227a380 body=163 status=ok
// SIG undefined FUN_14227a380(void)

void FUN_14227a380(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  
  (**(code **)(*param_1 + 0x2d8))();
  FUN_1428ec050(param_1);
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    lVar3 = FUN_142a07000();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  plVar4 = (longlong *)param_1[0x72];
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = (longlong)plVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00014227a41f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x60))(plVar4,param_1);
  return;
}



// FUNCTION 14227a430 FUN_14227a430 body=49 status=ok
// SIG undefined FUN_14227a430(void)

void FUN_14227a430(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1417931d0();
  if (param_1[0x72] == 0) {
    lVar1 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar1;
  }
  return;
}



// FUNCTION 14227a470 FUN_14227a470 body=1128 status=ok
// SIG undefined FUN_14227a470(void)

void FUN_14227a470(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 local_res8;
  
  FUN_142251fc0();
  uVar7 = 0;
  uVar5 = uVar7;
  while ((iVar9 = (int)uVar5, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 0x180)))) {
    FAnimTrack::ValidateSegmentTimes(*(longlong *)(param_1 + 0x178) + ((longlong)iVar9 * 3 + 1) * 8)
    ;
    uVar5 = uVar7;
    fVar15 = 0.0;
    while ((iVar4 = (int)uVar5, -1 < iVar4 && (iVar4 < *(int *)(param_1 + 0x180)))) {
      fVar13 = fVar15;
      if ((0 < *(int *)(*(longlong *)(param_1 + 0x178) + 0x10 + (longlong)iVar4 * 0x18)) &&
         (fVar13 = (float)FAnimTrack::GetLength
                                    (*(longlong *)(param_1 + 0x178) + 8 + (longlong)iVar4 * 0x18),
         fVar13 <= fVar15)) {
        fVar13 = fVar15;
      }
      fVar15 = fVar13;
      uVar5 = (ulonglong)(iVar4 + 1);
    }
    if (fVar15 != *(float *)(param_1 + 0x90)) {
      *(float *)(param_1 + 0x90) = fVar15;
    }
    uVar5 = (ulonglong)(iVar9 + 1);
  }
  lVar6 = *(longlong *)(param_1 + 0x168);
  lVar8 = (longlong)*(int *)(param_1 + 0x170) * 0x58 + lVar6;
  for (; lVar6 != lVar8; lVar6 = lVar6 + 0x58) {
    if (*(float *)(lVar6 + 0x38) == 0.0) {
      lVar2 = *(longlong *)(lVar6 + 8);
      if (lVar2 != 0) {
        iVar9 = *(int *)(lVar6 + 0x14);
        if (iVar9 != -1) {
          iVar4 = *(int *)(lVar6 + 0x10);
          if ((((iVar4 != -1) && (-1 < iVar4)) && (iVar4 < *(int *)(lVar2 + 0x180))) &&
             (((-1 < iVar9 &&
               (iVar9 < *(int *)(*(longlong *)(lVar2 + 0x178) + 0x10 + (longlong)iVar4 * 0x18))) &&
              (plVar11 = (longlong *)
                         ((longlong)iVar9 * 0x20 +
                         *(longlong *)(*(longlong *)(lVar2 + 0x178) + 8 + (longlong)iVar4 * 0x18)),
              *plVar11 == *(longlong *)(lVar6 + 0x28))))) {
            if (*(char *)(lVar6 + 0x19) == '\x01') {
              fVar15 = *(float *)(lVar6 + 0x24);
              if (0.0 <= fVar15) {
                fVar13 = (float)FAnimSegment::GetLength(plVar11);
                if (fVar15 <= fVar13) {
                  fVar13 = fVar15;
                }
              }
              else {
                fVar13 = 0.0;
              }
              *(float *)(lVar6 + 0x24) = fVar13;
            }
            *(int *)(lVar6 + 0x1c) = (int)plVar11[1];
            uVar14 = FAnimSegment::GetLength(plVar11);
            *(undefined4 *)(lVar6 + 0x20) = uVar14;
          }
        }
      }
      cVar1 = *(char *)(lVar6 + 0x19);
      if (cVar1 == '\0') {
LAB_14227a647:
        fVar15 = *(float *)(lVar6 + 0x24);
      }
      else if (cVar1 == '\x01') {
        fVar15 = *(float *)(lVar6 + 0x24) + *(float *)(lVar6 + 0x1c);
      }
      else {
        if (cVar1 != '\x02') goto LAB_14227a647;
        fVar15 = *(float *)(lVar6 + 0x24) * *(float *)(lVar6 + 0x20) + *(float *)(lVar6 + 0x1c);
      }
    }
    else {
      FUN_14225af80(lVar6,0);
      fVar15 = *(float *)(lVar6 + 0x38);
      *(undefined8 *)(lVar6 + 0x28) = 0;
      *(undefined4 *)(lVar6 + 0x1c) = 0xbf800000;
      *(undefined4 *)(lVar6 + 0x20) = 0xbf800000;
      *(undefined4 *)(lVar6 + 0x14) = 0xffffffff;
    }
    FUN_142277610(lVar6,param_1,fVar15,0);
  }
  if ((*(char *)(param_1 + 0x198) != '\0') || (*(char *)(param_1 + 0x199) != '\0')) {
    lVar8 = *(longlong *)(param_1 + 0x178);
    lVar6 = lVar8 + (longlong)*(int *)(param_1 + 0x180) * 0x18;
    for (; lVar8 != lVar6; lVar8 = lVar8 + 0x18) {
      plVar11 = *(longlong **)(lVar8 + 8);
      plVar12 = plVar11 + (longlong)*(int *)(lVar8 + 0x10) * 4;
      for (; plVar11 != plVar12; plVar11 = plVar11 + 4) {
        plVar3 = (longlong *)*plVar11;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x340))(plVar3,1,*(undefined1 *)(param_1 + 0x19b));
        }
      }
    }
  }
  if (((DAT_1468c2187 == '\0') && (lVar6 = *(longlong *)(param_1 + 0x38), lVar6 != 0)) &&
     (uVar5 = uVar7, 0 < *(int *)(param_1 + 0x180))) {
    do {
      local_res8 = *(undefined8 *)(uVar7 + *(longlong *)(param_1 + 0x178));
      USkeleton::RegisterSlotNode(lVar6,&local_res8);
      uVar10 = (int)uVar5 + 1;
      uVar7 = uVar7 + 0x18;
      uVar5 = (ulonglong)uVar10;
    } while ((int)uVar10 < *(int *)(param_1 + 0x180));
  }
  lVar6 = *(longlong *)(param_1 + 0x80);
  lVar8 = (longlong)*(int *)(param_1 + 0x88) * 0xa8 + lVar6;
  do {
    if (lVar6 == lVar8) {
      lVar6 = FUN_1417a53c0(param_1);
      if ((lVar6 != 0) && (lVar6 = FUN_1417a53c0(param_1), *(int *)(lVar6 + 0x240) < 0x1a2)) {
        FUN_14225bec0(param_1);
      }
      if (*(float *)(param_1 + 0xf0) != -1.0) {
        FAlphaBlend::SetBlendTime(param_1 + 0xb8);
        *(undefined4 *)(param_1 + 0xf0) = 0xbf800000;
      }
      if (*(float *)(param_1 + 0x130) != -1.0) {
        FAlphaBlend::SetBlendTime(param_1 + 0xf8);
        *(undefined4 *)(param_1 + 0x130) = 0xbf800000;
      }
      FUN_14225b7c0(param_1);
      return;
    }
    if (*(float *)(lVar6 + 0x30) == 0.0) {
      cVar1 = *(char *)(lVar6 + 0x19);
      if (cVar1 == '\0') {
LAB_14227a7c7:
        fVar15 = *(float *)(lVar6 + 0x24);
      }
      else if (cVar1 == '\x01') {
        fVar15 = *(float *)(lVar6 + 0x24) + *(float *)(lVar6 + 0x1c);
      }
      else {
        if (cVar1 != '\x02') goto LAB_14227a7c7;
        fVar15 = *(float *)(lVar6 + 0x24) * *(float *)(lVar6 + 0x20) + *(float *)(lVar6 + 0x1c);
      }
    }
    else {
      FUN_14225af80(lVar6,0);
      fVar15 = *(float *)(lVar6 + 0x30);
      *(undefined8 *)(lVar6 + 0x28) = 0;
      *(undefined4 *)(lVar6 + 0x1c) = 0xbf800000;
      *(undefined4 *)(lVar6 + 0x20) = 0xbf800000;
      *(undefined4 *)(lVar6 + 0x14) = 0xffffffff;
    }
    FUN_142277610(lVar6,param_1,fVar15,0);
    if (*(float *)(lVar6 + 0x58) != 0.0) {
      cVar1 = *(char *)(lVar6 + 0x19);
      if (cVar1 == '\0') {
LAB_14227a817:
        fVar15 = *(float *)(lVar6 + 0x24);
      }
      else if (cVar1 == '\x01') {
        fVar15 = *(float *)(lVar6 + 0x24) + *(float *)(lVar6 + 0x1c);
      }
      else {
        if (cVar1 != '\x02') goto LAB_14227a817;
        fVar15 = *(float *)(lVar6 + 0x24) * *(float *)(lVar6 + 0x20) + *(float *)(lVar6 + 0x1c);
      }
      FUN_142277610(lVar6 + 0x60,param_1,*(float *)(lVar6 + 0x58) + fVar15,0);
    }
    lVar6 = lVar6 + 0xa8;
  } while( true );
}



// FUNCTION 14227a8e0 FUN_14227a8e0 body=179 status=ok
// SIG undefined FUN_14227a8e0(void)

void FUN_14227a8e0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined2 local_res10 [12];
  
  local_res10[0] = 0xffff;
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar2 = FArchive::CustomVer(param_2,&DAT_1464b0088);
    if (iVar2 < 7) {
      if (0x183 < (int)param_2[8]) {
        plVar1 = (longlong *)param_2[1];
        if ((undefined2 *)plVar1[1] < (undefined2 *)*plVar1 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,local_res10,2);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,local_res10,2);
          }
        }
        else {
          local_res10[0] = *(undefined2 *)*plVar1;
          *plVar1 = *plVar1 + 2;
        }
        *(undefined2 *)(param_1 + 2) = local_res10[0];
      }
      param_1[1] = *param_1;
    }
  }
  return;
}



// FUNCTION 14227a9a0 FUN_14227a9a0 body=157 status=ok
// SIG undefined FUN_14227a9a0(void)

void FUN_14227a9a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)(int)param_1[1] * 0x90 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x90) {
    FUN_14227a8e0(lVar1,param_2);
  }
  if (0xf < *(int *)(param_2 + 0x44)) {
    lVar1 = param_1[2];
    lVar2 = (longlong)(int)param_1[3] * 0x470 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x470) {
      FUN_14227a8e0(lVar1,param_2);
    }
  }
  return;
}



// FUNCTION 14227aa40 FUN_14227aa40 body=143 status=ok
// SIG undefined FUN_14227aa40(void)

void FUN_14227aa40(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_14228a080(param_2 + 0xf8,param_1 + 0x1d0);
  FAnimNotifyQueue::ApplyMontageNotifies(param_2 + 0xf8,param_1);
  iVar1 = *(int *)(param_1 + 0x658);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_2 + 0x1c0);
    if (*(int *)(param_2 + 0x1c4) < iVar2 + iVar1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo((longlong *)(param_2 + 0x1b8));
      iVar2 = *(int *)(param_2 + 0x1c0);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_2 + 0x1b8) + (longlong)iVar2 * 8),
               *(void **)(param_1 + 0x650),(longlong)iVar1 << 3);
    *(int *)(param_2 + 0x1c0) = *(int *)(param_2 + 0x1c0) + iVar1;
  }
  return;
}



// FUNCTION 14227aad0 FUN_14227aad0 body=1065 status=ok
// SIG undefined FUN_14227aad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14227aad0(longlong *param_1)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  float fVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  float *pfVar17;
  float fVar18;
  undefined1 auVar19 [16];
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
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  longlong lStack_40;
  undefined1 local_38 [16];
  
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) & 0xfb;
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    lVar11 = FUN_142a07000();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
        lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  plVar12 = (longlong *)param_1[0x72];
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)(**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = (longlong)plVar12;
  }
  *(int *)(plVar12 + 0x39) = 1 - (int)plVar12[0x39];
  (**(code **)(*plVar12 + 0x58))(plVar12,param_1);
  if ((char)plVar12[0x6c] != '\0') {
    fVar27 = *(float *)(plVar12 + 0x6e);
    fVar28 = *(float *)((longlong)plVar12 + 0x374);
    fVar29 = *(float *)(plVar12 + 0x6f);
    fVar30 = *(float *)((longlong)plVar12 + 0x37c);
    local_48 = plVar12[0x70];
    lStack_40 = plVar12[0x71];
    local_38 = *(undefined1 (*) [16])(plVar12 + 0x72);
    fVar20 = fVar27 * fVar27 + fVar29 * fVar29;
    fVar21 = fVar28 * fVar28 + fVar30 * fVar30;
    fVar23 = fVar29 * fVar29 + fVar27 * fVar27;
    fVar25 = fVar30 * fVar30 + fVar28 * fVar28;
    fVar18 = fVar21 + fVar20;
    fVar21 = fVar23 + fVar21;
    fVar23 = fVar25 + fVar23;
    fVar20 = fVar20 + fVar25;
    auVar19._4_4_ = fVar21;
    auVar19._0_4_ = fVar18;
    auVar19._8_4_ = fVar23;
    auVar19._12_4_ = fVar20;
    auVar19 = rsqrtps(local_38,auVar19);
    fVar25 = auVar19._0_4_;
    fVar22 = auVar19._4_4_;
    fVar24 = auVar19._8_4_;
    fVar26 = auVar19._12_4_;
    fVar25 = (_DAT_146aeef30 - fVar25 * fVar25 * _DAT_146aeef30 * fVar18) * fVar25 + fVar25;
    fVar22 = (fRam0000000146aeef34 - fVar22 * fVar22 * fRam0000000146aeef34 * fVar21) * fVar22 +
             fVar22;
    fVar24 = (fRam0000000146aeef38 - fVar24 * fVar24 * fRam0000000146aeef38 * fVar23) * fVar24 +
             fVar24;
    fVar26 = (fRam0000000146aeef3c - fVar26 * fVar26 * fRam0000000146aeef3c * fVar20) * fVar26 +
             fVar26;
    local_58 = ((uint)(fVar27 * ((_DAT_146aeef30 - fVar25 * fVar25 * _DAT_146aeef30 * fVar18) *
                                 fVar25 + fVar25)) ^ _DAT_146aeef20) &
               -(uint)(_DAT_146aeef60 <= fVar18) ^ _DAT_146aeef20;
    uStack_54 = ((uint)(fVar28 * ((fRam0000000146aeef34 -
                                  fVar22 * fVar22 * fRam0000000146aeef34 * fVar21) * fVar22 + fVar22
                                 )) ^ uRam0000000146aeef24) &
                -(uint)(fRam0000000146aeef64 <= fVar21) ^ uRam0000000146aeef24;
    uStack_50 = ((uint)(fVar29 * ((fRam0000000146aeef38 -
                                  fVar24 * fVar24 * fRam0000000146aeef38 * fVar23) * fVar24 + fVar24
                                 )) ^ uRam0000000146aeef28) &
                -(uint)(fRam0000000146aeef68 <= fVar23) ^ uRam0000000146aeef28;
    uStack_4c = ((uint)(fVar30 * ((fRam0000000146aeef3c -
                                  fVar26 * fVar26 * fRam0000000146aeef3c * fVar20) * fVar26 + fVar26
                                 )) ^ uRam0000000146aeef2c) &
                -(uint)(fRam0000000146aeef6c <= fVar20) ^ uRam0000000146aeef2c;
    FUN_142245a70(param_1 + 0x6a,&local_58);
    *(undefined1 *)(plVar12 + 0x6c) = 0;
    *(undefined4 *)((longlong)plVar12 + 0x364) = 0;
  }
  pfVar3 = (float *)param_1[0x68];
  lVar2 = param_1[0x69];
  if (pfVar3 != pfVar3 + (longlong)(int)lVar2 * 0x10) {
    pfVar17 = pfVar3 + 4;
    do {
      lVar11 = param_1[4];
      if (lVar11 != 0) {
        lVar13 = FUN_142a07000();
        lVar11 = *(longlong *)(lVar11 + 0x10);
        if ((*(int *)(lVar11 + 0x90) < *(int *)(lVar13 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar11 + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
            lVar13 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          FUN_1423b2d70(param_1[4],1);
        }
      }
      lVar11 = param_1[0x72];
      if (lVar11 == 0) {
        lVar11 = (**(code **)(*param_1 + 0x308))(param_1);
        param_1[0x72] = lVar11;
      }
      lVar13 = *(longlong *)(pfVar17 + 8);
      if (*(int *)(lVar11 + 0x2a0) != *(int *)(lVar11 + 0x2cc)) {
        lVar14 = *(longlong *)(lVar11 + 0x2d8);
        if (*(longlong *)(lVar11 + 0x2d8) == 0) {
          lVar14 = lVar11 + 0x2d0;
        }
        iVar10 = *(int *)(lVar14 + ((longlong)((int)((ulonglong)lVar13 >> 0x20) + (int)lVar13) &
                                   (longlong)*(int *)(lVar11 + 0x2e0) - 1U) * 4);
        if (iVar10 != -1) {
          lVar14 = *(longlong *)(lVar11 + 0x298);
          do {
            lVar16 = (longlong)iVar10;
            if (*(longlong *)(lVar14 + lVar16 * 0x18) == lVar13) {
              if (((iVar10 != -1) && (lVar14 = lVar14 + lVar16 * 0x18, lVar14 != 0)) &&
                 (piVar15 = (int *)(lVar14 + 8), piVar15 != (int *)0x0)) {
                fVar27 = *(float *)(*(longlong *)
                                     (lVar11 + 0x2e8 +
                                     (longlong)(1 - *(int *)(lVar11 + 0x1c8)) * 0x10) + 4 +
                                   (longlong)*piVar15 * 0xc);
                goto LAB_14227ad52;
              }
              break;
            }
            iVar10 = *(int *)(lVar14 + 0x10 + lVar16 * 0x18);
          } while (iVar10 != -1);
        }
      }
      fVar27 = 0.0;
LAB_14227ad52:
      fVar27 = fVar27 * pfVar17[10];
      fVar28 = pfVar17[-4] * fVar27;
      fVar29 = pfVar17[-3] * fVar27;
      fVar30 = pfVar17[-2] * fVar27;
      fVar18 = pfVar17[-1] * fVar27;
      if ((char)param_1[0x6a] == '\0') {
        fVar21 = pfVar17[4];
        fVar23 = pfVar17[5];
        fVar20 = pfVar17[6];
        fVar25 = pfVar17[7];
        fVar22 = *pfVar17;
        fVar24 = pfVar17[1];
        fVar26 = pfVar17[2];
        fVar5 = pfVar17[3];
        *(undefined1 *)(param_1 + 0x6a) = 1;
        *(float *)(param_1 + 0x6c) = fVar28;
        *(float *)((longlong)param_1 + 0x364) = fVar29;
        *(float *)(param_1 + 0x6d) = fVar30;
        *(float *)((longlong)param_1 + 0x36c) = fVar18;
        *(float *)(param_1 + 0x6e) = fVar27 * fVar22;
        *(float *)((longlong)param_1 + 0x374) = fVar27 * fVar24;
        *(float *)(param_1 + 0x6f) = fVar27 * fVar26;
        *(float *)((longlong)param_1 + 0x37c) = fVar27 * fVar5;
        *(float *)(param_1 + 0x70) = fVar21 * fVar27;
        *(float *)((longlong)param_1 + 900) = fVar23 * fVar27;
        *(float *)(param_1 + 0x71) = fVar20 * fVar27;
        *(float *)((longlong)param_1 + 0x38c) = fVar25 * fVar27;
      }
      else {
        fVar21 = fVar28 * *(float *)(param_1 + 0x6c);
        fVar20 = fVar29 * *(float *)((longlong)param_1 + 0x364);
        fVar22 = fVar30 * *(float *)(param_1 + 0x6d);
        fVar24 = fVar18 * *(float *)((longlong)param_1 + 0x36c);
        fVar23 = fVar21 + fVar22;
        fVar25 = fVar20 + fVar24;
        fVar22 = fVar22 + fVar21;
        fVar24 = fVar24 + fVar20;
        *(float *)(param_1 + 0x6c) =
             (float)(-(uint)(0.0 <= fVar25 + fVar23) & ((uint)(0.0 - fVar28) ^ (uint)fVar28) ^
                    (uint)(0.0 - fVar28)) + *(float *)(param_1 + 0x6c);
        *(float *)((longlong)param_1 + 0x364) =
             (float)(-(uint)(0.0 <= fVar22 + fVar25) & ((uint)(0.0 - fVar29) ^ (uint)fVar29) ^
                    (uint)(0.0 - fVar29)) + *(float *)((longlong)param_1 + 0x364);
        *(float *)(param_1 + 0x6d) =
             (float)(-(uint)(0.0 <= fVar24 + fVar22) & ((uint)(0.0 - fVar30) ^ (uint)fVar30) ^
                    (uint)(0.0 - fVar30)) + *(float *)(param_1 + 0x6d);
        *(float *)((longlong)param_1 + 0x36c) =
             (float)(-(uint)(0.0 <= fVar23 + fVar24) & ((uint)(0.0 - fVar18) ^ (uint)fVar18) ^
                    (uint)(0.0 - fVar18)) + *(float *)((longlong)param_1 + 0x36c);
        fVar28 = pfVar17[1];
        fVar29 = pfVar17[2];
        fVar30 = pfVar17[3];
        *(float *)(param_1 + 0x6e) = fVar27 * *pfVar17 + *(float *)(param_1 + 0x6e);
        *(float *)((longlong)param_1 + 0x374) =
             fVar27 * fVar28 + *(float *)((longlong)param_1 + 0x374);
        *(float *)(param_1 + 0x6f) = fVar27 * fVar29 + *(float *)(param_1 + 0x6f);
        *(float *)((longlong)param_1 + 0x37c) =
             fVar27 * fVar30 + *(float *)((longlong)param_1 + 0x37c);
        fVar28 = pfVar17[5];
        fVar29 = pfVar17[6];
        fVar30 = pfVar17[7];
        *(float *)(param_1 + 0x70) = pfVar17[4] * fVar27 + *(float *)(param_1 + 0x70);
        *(float *)((longlong)param_1 + 900) = fVar28 * fVar27 + *(float *)((longlong)param_1 + 900);
        *(float *)(param_1 + 0x71) = fVar29 * fVar27 + *(float *)(param_1 + 0x71);
        *(float *)((longlong)param_1 + 0x38c) =
             fVar30 * fVar27 + *(float *)((longlong)param_1 + 0x38c);
        fVar27 = fVar27 + *(float *)((longlong)param_1 + 0x354);
      }
      uVar9 = DAT_146531a98;
      uVar8 = DAT_146531a94;
      uVar7 = DAT_146531a90;
      pfVar1 = pfVar17 + 0xc;
      *(float *)((longlong)param_1 + 0x354) = fVar27;
      auVar4._4_4_ = uVar8;
      auVar4._0_4_ = uVar7;
      auVar4._8_4_ = uVar9;
      auVar4._12_4_ = 0;
      *(undefined1 (*) [16])(param_1 + 0x70) = auVar4;
      pfVar17 = pfVar17 + 0x10;
    } while (pfVar1 != pfVar3 + (longlong)(int)lVar2 * 0x10);
  }
  if ((char)param_1[0x6a] == '\0') {
    return;
  }
  FRootMotionMovementParams::MakeUpToFullWeight();
  return;
}



// FUNCTION 14227af00 FUN_14227af00 body=146 status=ok
// SIG undefined FUN_14227af00(void)

void FUN_14227af00(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    lVar3 = FUN_142a07000();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  plVar4 = (longlong *)param_1[0x72];
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = (longlong)plVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00014227af8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x30))(plVar4,param_1);
  return;
}



// FUNCTION 14227afa0 PreInitializeRootNode body=188 status=ok
// SIG undefined PreInitializeRootNode(void)

void UAnimInstance::PreInitializeRootNode(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  plVar2 = (longlong *)FUN_142268ae0(*(undefined8 *)(param_1 + 0x10));
  if (plVar2 != (longlong *)0x0) {
    puVar3 = (ulonglong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    uVar6 = 0;
    plVar2 = (longlong *)*puVar3;
    uVar7 = (longlong)(int)puVar3[1] & 0x1fffffffffffffff;
    if (plVar2 + (int)puVar3[1] < plVar2) {
      uVar7 = uVar6;
    }
    if (uVar7 != 0) {
      do {
        lVar5 = *plVar2;
        lVar4 = FAnimNode_Base::StaticStruct();
        for (lVar1 = *(longlong *)(lVar5 + 0x70); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          if (lVar1 == lVar4) {
            lVar5 = *(int *)(lVar5 + 0x44) + param_1;
            if (lVar5 != 0) {
              FUN_142296370(lVar5 + 8,lVar5,param_1);
            }
            break;
          }
        }
        plVar2 = plVar2 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar7);
    }
  }
  return;
}



// FUNCTION 14227b060 FUN_14227b060 body=204 status=ok
// SIG undefined FUN_14227b060(void)

void FUN_14227b060(longlong *param_1)

{
  short sVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FTimeStretchCurve::Reset(param_1 + 0x38);
  if (((param_1[7] != 0) &&
      (lVar2 = USkeleton::GetSmartNameContainer(param_1[7],&DAT_146aef308), lVar2 != 0)) &&
     (sVar1 = FSmartNameMapping::FindUID(lVar2,param_1 + 0x3d), sVar1 != 0)) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b8))(param_1);
    lVar2 = *plVar3;
    lVar4 = (longlong)(int)plVar3[1] * 0x90 + lVar2;
    for (; lVar2 != lVar4; lVar2 = lVar2 + 0x90) {
      if (*(short *)(lVar2 + 0x10) == sVar1) {
        if (lVar2 != 0) {
          FTimeStretchCurve::BakeFromFloatCurve(param_1 + 0x38,lVar2,(int)param_1[0x12]);
        }
        break;
      }
    }
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 14227b130 FUN_14227b130 body=1253 status=ok
// SIG undefined FUN_14227b130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14227b130(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_d8 [40];
  uint local_b0;
  longlong local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar8 = param_2[4];
  uVar9 = 0;
  uVar5 = uVar9;
  if ((lVar8 != 0) && (uVar5 = *(ulonglong *)(lVar8 + 0x120), *(ulonglong *)(lVar8 + 0x120) == 0)) {
    uVar5 = FUN_1423407b0(lVar8);
  }
  *(undefined4 *)(param_1 + 0x18) = param_3;
  if (uVar5 == 0) {
    fVar14 = 1.0;
  }
  else {
    lVar6 = UWorld::GetWorldSettings(uVar5,0,1);
    fVar14 = *(float *)(lVar6 + 0x5e4) * *(float *)(lVar6 + 0x5e0) * *(float *)(lVar6 + 0x5e8);
  }
  *(float *)((longlong)param_1 + 0xc4) = fVar14;
  *(uint *)(param_1 + 0x52) = (uint)*(byte *)(param_2 + 6);
  uVar5 = 2;
  if (1 < (byte)((char)param_2[6] - 1U)) {
    uVar5 = uVar9;
  }
  *(byte *)(param_1 + 0xb7) = *(byte *)(param_1 + 0xb7) & 0xfd;
  *(byte *)(param_1 + 0xb7) = *(byte *)(param_1 + 0xb7) | (byte)uVar5;
  (**(code **)(*param_1 + 0x68))(param_1,param_2);
  if (lVar8 != 0) {
    lVar6 = param_1[0x99];
    iVar4 = (**(code **)(*param_2 + 0x2f8))(param_2);
    *(int *)(param_1 + 0x99) = iVar4;
    *(undefined4 *)((longlong)param_1 + 0x6b4) = *(undefined4 *)(param_2[4] + 0x84c);
    if (iVar4 != (int)lVar6) {
      FUN_1422795f0(param_1,(int)lVar6,iVar4);
    }
    lVar6 = *(longlong *)(lVar8 + 0x218);
    param_1[0x9a] = *(longlong *)(lVar8 + 0x210);
    param_1[0x9b] = lVar6;
    lVar6 = *(longlong *)(lVar8 + 0x228);
    param_1[0x9c] = *(longlong *)(lVar8 + 0x220);
    param_1[0x9d] = lVar6;
    uVar18 = *(undefined4 *)(lVar8 + 0x234);
    uVar19 = *(undefined4 *)(lVar8 + 0x238);
    uVar20 = *(undefined4 *)(lVar8 + 0x23c);
    *(undefined4 *)(param_1 + 0x9e) = *(undefined4 *)(lVar8 + 0x230);
    *(undefined4 *)((longlong)param_1 + 0x4f4) = uVar18;
    *(undefined4 *)(param_1 + 0x9f) = uVar19;
    *(undefined4 *)((longlong)param_1 + 0x4fc) = uVar20;
    if (*(longlong *)(lVar8 + 0x118) != 0) {
      lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x118) + 0x168);
      if (lVar8 == 0) {
        puVar7 = (undefined4 *)&DAT_1468b5b70;
      }
      else {
        puVar7 = (undefined4 *)(lVar8 + 0x210);
      }
      uVar18 = puVar7[1];
      uVar19 = puVar7[2];
      uVar20 = puVar7[3];
      lVar8 = *(longlong *)(puVar7 + 4);
      lVar6 = *(longlong *)(puVar7 + 6);
      lVar2 = *(longlong *)(puVar7 + 8);
      lVar3 = *(longlong *)(puVar7 + 10);
      *(undefined4 *)(param_1 + 0xa0) = *puVar7;
      *(undefined4 *)((longlong)param_1 + 0x504) = uVar18;
      *(undefined4 *)(param_1 + 0xa1) = uVar19;
      *(undefined4 *)((longlong)param_1 + 0x50c) = uVar20;
      param_1[0xa2] = lVar8;
      param_1[0xa3] = lVar6;
      param_1[0xa4] = lVar2;
      param_1[0xa5] = lVar3;
    }
  }
  FUN_14229abf0(param_1 + 0x3a);
  *(undefined4 *)(param_1 + 0xcb) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x65c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo();
  }
  iVar4 = (int)param_1[0x39];
  lVar8 = (longlong)iVar4;
  uVar5 = uVar9;
  uVar13 = uVar9;
  if (0 < (int)param_1[lVar8 * 2 + 0x5e]) {
    do {
      lVar6 = param_1[lVar8 * 2 + 0x5d];
      local_b0 = local_b0 & 0xffff0000;
      uVar12 = (int)uVar13 + 1;
      *(undefined8 *)(uVar5 + lVar6) = 0;
      *(uint *)(uVar5 + 8 + lVar6) = local_b0;
      *(undefined1 *)(uVar5 + 9 + param_1[lVar8 * 2 + 0x5d]) =
           *(undefined1 *)(param_1[(longlong)(1 - iVar4) * 2 + 0x5d] + -4 + uVar5 + 0xc);
      uVar5 = uVar5 + 0xc;
      uVar13 = (ulonglong)uVar12;
    } while ((int)uVar12 < (int)param_1[lVar8 * 2 + 0x5e]);
    iVar4 = (int)param_1[0x39];
  }
  iVar1 = *(int *)((longlong)param_1 + (longlong)iVar4 * 0x10 + 0x104);
  *(undefined4 *)(param_1 + (longlong)iVar4 * 2 + 0x20) = 0;
  if ((iVar1 < 0) && (iVar1 != 0)) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo();
  }
  iVar4 = (int)param_1[0x39];
  lVar8 = (longlong)iVar4;
  uVar5 = uVar9;
  uVar13 = uVar9;
  if (0 < (int)param_1[lVar8 * 2 + 0x24]) {
    do {
      lVar6 = param_1[lVar8 * 2 + 0x23] + uVar13;
      *(undefined4 *)(lVar6 + 0x10) = 0xffffffff;
      *(undefined4 *)(lVar6 + 8) = 0;
      if ((*(int *)(lVar6 + 0xc) < 0) && (*(int *)(lVar6 + 0xc) != 0)) {
        TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(lVar6);
      }
      *(undefined1 *)(lVar6 + 0x28) = 0;
      *(undefined4 *)(lVar6 + 0x2c) = 0;
      plVar10 = (longlong *)(lVar6 + 0x30);
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      if (plVar10 != local_a8) {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        *plVar10 = 0;
        *(undefined8 *)(lVar6 + 0x38) = 0;
      }
      uVar12 = (int)uVar5 + 1;
      *(undefined8 *)(lVar6 + 0x40) = local_98;
      *(undefined8 *)(lVar6 + 0x48) = uStack_90;
      *(undefined8 **)(lVar6 + 0x70) = &DAT_146aef328;
      *(ulonglong *)(lVar6 + 0x50) = CONCAT44(uStack_84,local_88);
      *(undefined4 *)(lVar6 + 0x58) = (undefined4)local_80;
      *(undefined4 *)(lVar6 + 0x5c) = local_80._4_4_;
      *(undefined4 *)(lVar6 + 0x60) = (undefined4)uStack_78;
      *(undefined4 *)(lVar6 + 100) = uStack_78._4_4_;
      *(ulonglong *)(lVar6 + 0x68) = CONCAT44(uStack_6c,local_70);
      uVar5 = (ulonglong)uVar12;
      uVar13 = uVar13 + 0x78;
    } while ((int)uVar12 < (int)param_1[lVar8 * 2 + 0x24]);
    iVar4 = (int)param_1[0x39];
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)param_1[(longlong)iVar4 * 2 + 0x2b],0,
             (longlong)(int)param_1[(longlong)iVar4 * 2 + 0x2c] << 2);
  _guard_xfg_dispatch_icall_nop
            ((void *)param_1[(longlong)(int)param_1[0x39] * 2 + 0x27],0,
             (longlong)(int)param_1[(longlong)(int)param_1[0x39] * 2 + 0x28] << 2);
  lVar8 = param_1[0x17];
  lVar6 = *(longlong *)(lVar8 + 0x218);
  param_1[2] = *(longlong *)(lVar8 + 0x210);
  param_1[3] = lVar6;
  uVar18 = *(undefined4 *)(lVar8 + 0x224);
  uVar19 = *(undefined4 *)(lVar8 + 0x228);
  uVar20 = *(undefined4 *)(lVar8 + 0x22c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar8 + 0x220);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar18;
  *(undefined4 *)(param_1 + 5) = uVar19;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar20;
  uVar18 = *(undefined4 *)(lVar8 + 0x234);
  uVar19 = *(undefined4 *)(lVar8 + 0x238);
  uVar20 = *(undefined4 *)(lVar8 + 0x23c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar8 + 0x230);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar18;
  *(undefined4 *)(param_1 + 7) = uVar19;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar20;
  plVar10 = (longlong *)FUN_14238d0c0(param_1[0x17],local_a8);
  lVar8 = plVar10[1];
  param_1[8] = *plVar10;
  param_1[9] = lVar8;
  lVar8 = plVar10[3];
  param_1[10] = plVar10[2];
  param_1[0xb] = lVar8;
  uVar18 = *(undefined4 *)((longlong)plVar10 + 0x24);
  lVar8 = plVar10[5];
  uVar19 = *(undefined4 *)((longlong)plVar10 + 0x2c);
  *(int *)(param_1 + 0xc) = (int)plVar10[4];
  *(undefined4 *)((longlong)param_1 + 100) = uVar18;
  *(int *)(param_1 + 0xd) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar19;
  uVar12 = _DAT_1468b5b90;
  uVar15 = uRam00000001468b5b94;
  uVar16 = uRam00000001468b5b98;
  uVar17 = uRam00000001468b5b9c;
  uVar18 = _DAT_1468b5b70;
  uVar19 = uRam00000001468b5b74;
  uVar20 = uRam00000001468b5b78;
  uVar21 = uRam00000001468b5b7c;
  uVar22 = _DAT_1468b5b80;
  uVar23 = uRam00000001468b5b84;
  uVar24 = uRam00000001468b5b88;
  uVar25 = uRam00000001468b5b8c;
  if (*(longlong *)(param_1[0x17] + 0x118) != 0) {
    lVar8 = *(longlong *)(*(longlong *)(param_1[0x17] + 0x118) + 0x168);
    if (lVar8 == 0) {
      uVar12 = _DAT_146aeef40 & _DAT_146aeef50;
      uVar15 = uRam0000000146aeef44 & uRam0000000146aeef54;
      uVar16 = uRam0000000146aeef48 & uRam0000000146aeef58;
      uVar17 = uRam0000000146aeef4c & uRam0000000146aeef5c;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = uRam0000000146aeef4c;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      uVar25 = 0;
    }
    else {
      uVar12 = *(uint *)(lVar8 + 0x230);
      uVar15 = *(uint *)(lVar8 + 0x234);
      uVar16 = *(uint *)(lVar8 + 0x238);
      uVar17 = *(uint *)(lVar8 + 0x23c);
      uVar18 = *(undefined4 *)(lVar8 + 0x210);
      uVar19 = *(undefined4 *)(lVar8 + 0x214);
      uVar20 = *(undefined4 *)(lVar8 + 0x218);
      uVar21 = *(uint *)(lVar8 + 0x21c);
      uVar22 = *(undefined4 *)(lVar8 + 0x220);
      uVar23 = *(undefined4 *)(lVar8 + 0x224);
      uVar24 = *(undefined4 *)(lVar8 + 0x228);
      uVar25 = *(undefined4 *)(lVar8 + 0x22c);
    }
  }
  *(undefined4 *)(param_1 + 0xe) = uVar18;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar19;
  *(undefined4 *)(param_1 + 0xf) = uVar20;
  *(uint *)((longlong)param_1 + 0x7c) = uVar21;
  *(undefined4 *)(param_1 + 0x10) = uVar22;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar23;
  *(undefined4 *)(param_1 + 0x11) = uVar24;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar25;
  *(uint *)(param_1 + 0x12) = uVar12;
  *(uint *)((longlong)param_1 + 0x94) = uVar15;
  *(uint *)(param_1 + 0x13) = uVar16;
  *(uint *)((longlong)param_1 + 0x9c) = uVar17;
  puVar11 = (undefined8 *)param_1[0xa9];
  uVar5 = (longlong)(int)param_1[0xaa] & 0x1fffffffffffffff;
  if (puVar11 + (int)param_1[0xaa] < puVar11) {
    uVar5 = uVar9;
  }
  if (uVar5 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar11 + 0x50))((longlong *)*puVar11,param_2);
      uVar9 = uVar9 + 1;
      puVar11 = puVar11 + 1;
    } while (uVar9 != uVar5);
  }
  return;
}



// FUNCTION 14227b620 FUN_14227b620 body=230 status=ok
// SIG undefined FUN_14227b620(void)

void FUN_14227b620(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | 4;
  FUN_14229abf0(param_1 + 0x1f,param_1[4]);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x1c4)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x37,0);
  }
  *(undefined4 *)(param_1 + 0x69) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x34c)) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1 + 0x68,0);
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    lVar3 = FUN_142a07000();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  plVar4 = (longlong *)param_1[0x72];
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = (longlong)plVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00014227b702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,param_1,param_2);
  return;
}


