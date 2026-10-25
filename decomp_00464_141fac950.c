// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141fac950 OrientLegTowardsIK body=745 status=ok
// SIG undefined OrientLegTowardsIK(void)

undefined8 FAnimNode_LegIK::OrientLegTowardsIK(undefined8 param_1,longlong param_2)

{
  float *pfVar1;
  longlong lVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  lVar2 = *(longlong *)(param_2 + 0x60);
  pfVar1 = (float *)(lVar2 + -0x20 + (longlong)*(int *)(param_2 + 0x68) * 0x30);
  local_88 = pfVar1[1];
  local_78 = pfVar1[2];
  fVar9 = *(float *)(lVar2 + 0x10) - *pfVar1;
  fVar8 = *(float *)(lVar2 + 0x14) - local_88;
  fVar7 = *(float *)(lVar2 + 0x18) - local_78;
  fVar4 = fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7;
  local_90 = fVar7;
  local_94 = fVar8;
  local_98 = fVar9;
  if ((fVar4 != 1.0) &&
     (local_90 = DAT_1468b5d98, local_94 = DAT_1468b5d94, local_98 = DAT_1468b5d90, 1e-08 <= fVar4))
  {
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    local_90 = fVar7 * fVar5;
    local_94 = fVar8 * fVar5;
    local_98 = fVar9 * fVar5;
  }
  local_a8 = (float)*(undefined8 *)(param_2 + 0x20);
  fStack_a4 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
  local_a8 = local_a8 - *pfVar1;
  fStack_a4 = fStack_a4 - local_88;
  fStack_a0 = (float)*(undefined8 *)(param_2 + 0x28);
  fStack_a0 = fStack_a0 - local_78;
  fVar9 = fStack_a4 * fStack_a4 + local_a8 * local_a8 + fStack_a0 * fStack_a0;
  fVar4 = fStack_a0;
  fVar7 = fStack_a4;
  fVar8 = local_a8;
  if ((fVar9 != 1.0) &&
     (fVar4 = DAT_1468b5d98, fVar7 = DAT_1468b5d94, fVar8 = DAT_1468b5d90, 1e-08 <= fVar9)) {
    auVar6 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar8 = auVar6._0_4_;
    fVar8 = fVar8 + fVar8 * (0.5 - fVar9 * 0.5 * fVar8 * fVar8);
    fVar8 = fVar8 + fVar8 * (0.5 - fVar9 * 0.5 * fVar8 * fVar8);
    fVar4 = fStack_a0 * fVar8;
    fVar7 = fStack_a4 * fVar8;
    fVar8 = local_a8 * fVar8;
  }
  _local_a8 = CONCAT44(fVar7,fVar8);
  _fStack_a0 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_2 + 0x28) >> 0x20),fVar4);
  if ((((local_98 != 0.0) || (local_94 != 0.0)) || (local_90 != 0.0)) &&
     (((0.0001 < ABS(local_98 - fVar8) || (0.0001 < ABS(local_94 - fVar7))) ||
      (0.0001 < ABS(local_90 - fVar4))))) {
    fStack_84 = local_88;
    fStack_80 = local_88;
    fStack_7c = local_88;
    fStack_74 = local_78;
    fStack_70 = local_78;
    fStack_6c = local_78;
    FQuat::FindBetweenNormals(&local_78,&local_98,&local_a8);
    cVar3 = FUN_141faec80(&local_78,param_2);
    if (cVar3 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141facc40 FUN_141facc40 body=93 status=ok
// SIG undefined FUN_141facc40(void)

void FUN_141facc40(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = UBlendSpaceBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(longlong *)(param_1 + 0x80) = param_2;
    }
  }
  return;
}



// FUNCTION 141facca0 FUN_141facca0 body=90 status=ok
// SIG undefined FUN_141facca0(void)

void FUN_141facca0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = UPoseAsset::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(longlong *)(param_1 + 0x68) = param_2;
    }
  }
  return;
}



// FUNCTION 141facd00 FUN_141facd00 body=90 status=ok
// SIG undefined FUN_141facd00(void)

void FUN_141facd00(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = UTextureRenderTarget::StaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(longlong *)(param_1 + 0x68) = param_2;
    }
  }
  return;
}



// FUNCTION 141facd60 FUN_141facd60 body=555 status=ok
// SIG undefined FUN_141facd60(void)

void FUN_141facd60(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,longlong param_6)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  float fVar6;
  undefined8 local_res10;
  
  if (((param_2 == 0) || (lVar3 = FUN_1423ac7e0(param_2), lVar3 == 0)) ||
     (fVar6 = (float)FUN_142278740(lVar3,param_3,param_4,0,param_5,1,0xbf800000,0xbf800000),
     fVar6 <= 0.0)) {
    local_res10 = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x48,&local_res10);
  }
  else {
    FWeakObjectPtr::operator=(param_1 + 0x78,lVar3);
    lVar4 = UAnimInstance::GetActiveInstanceForMontage(lVar3,param_3);
    if (lVar4 != 0) {
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar4 + 0x110);
    }
    local_res10 = 0;
    if (param_6 != 0) {
      UAnimInstance::Montage_JumpToSection(lVar3,param_6,param_3);
    }
    FUN_141f7f830(param_1 + 0x88,param_1,UPlayMontageCallbackProxy::OnMontageBlendingOut);
    UAnimInstance::Montage_SetBlendingOutDelegate(lVar3,param_1 + 0x88,param_3);
    FUN_141f7f830(param_1 + 0x98,param_1,UPlayMontageCallbackProxy::OnMontageEnded);
    UAnimInstance::Montage_SetEndDelegate(lVar3,param_1 + 0x98,param_3);
    pwVar5 = _guard_xfg_dispatch_icall_nop
                       (L"&UPlayMontageCallbackProxy::OnNotifyBeginReceived",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res10,pwVar2 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void,UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,int,bool,FHitResult_const_&>
    ::__Internal_AddDynamic<ANuker1BasicLMProjectile>
              (lVar3 + 0x398,param_1,UPlayMontageCallbackProxy::OnNotifyBeginReceived,local_res10);
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UPlayMontageCallbackProxy::OnNotifyEndReceived",L"::")
    ;
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res10,pwVar2 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void,UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,int,bool,FHitResult_const_&>
    ::__Internal_AddDynamic<ANuker1BasicLMProjectile>
              (lVar3 + 0x3a8,param_1,UPlayMontageCallbackProxy::OnNotifyEndReceived,local_res10);
  }
  return;
}



// FUNCTION 141facf90 FUN_141facf90 body=1040 status=ok
// SIG undefined FUN_141facf90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141facf90(longlong param_1,longlong param_2)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  float local_78;
  float local_74;
  float local_70;
  float local_64;
  
  lVar2 = DAT_146acaf38;
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  uVar13 = 0;
  if (((cVar6 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar7 = GetCurrentThreadId(), uVar10 = 4, DVar7 == DAT_1468c21c0)) {
    uVar10 = 0;
  }
  if (((*(int *)(uVar10 + lVar2) != 0) && (param_2 != 0)) &&
     ((lVar2 = *(longlong *)(param_2 + 0x20), lVar2 != 0 &&
      ((*(longlong *)(lVar2 + 0x120) != 0 || (lVar11 = FUN_1423407b0(lVar2), lVar11 != 0)))))) {
    lVar11 = *(longlong *)(lVar2 + 0x120);
    if (lVar11 == 0) {
      lVar11 = FUN_1423407b0(lVar2);
    }
    lVar5 = DAT_146acaf80;
    cVar6 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar6 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar7 = GetCurrentThreadId(), uVar10 = 4, DVar7 == DAT_1468c21c0)) {
      uVar10 = uVar13;
    }
    if ((*(int *)(uVar10 + lVar5) == 1) && (*(char *)(param_1 + 0x1c0) != '\0')) {
      puVar14 = *(undefined8 **)(param_1 + 0x2c8);
      uVar10 = (longlong)*(int *)(param_1 + 0x2d0) & 0x1fffffffffffffff;
      if (puVar14 + *(int *)(param_1 + 0x2d0) < puVar14) {
        uVar10 = uVar13;
      }
      if (uVar10 != 0) {
        do {
          cVar6 = *(char *)(param_1 + 0x1c0);
          pfVar3 = (float *)*puVar14;
          *(char *)(pfVar3 + 0x48) = cVar6;
          if ((cVar6 != '\0') &&
             (plVar12 = *(longlong **)(lVar11 + 0x1b8), plVar12 != (longlong *)0x0)) {
            *(undefined1 *)(pfVar3 + 0x48) = 1;
            fVar17 = *(float *)(lVar2 + 0x210);
            fVar21 = *(float *)(lVar2 + 0x214);
            fVar23 = *(float *)(lVar2 + 0x218);
            fVar16 = *(float *)(lVar2 + 0x21c);
            pfVar1 = pfVar3 + 0x4b;
            fVar24 = *pfVar3 * *(float *)(lVar2 + 0x230);
            fVar25 = pfVar3[1] * *(float *)(lVar2 + 0x234);
            fVar26 = pfVar3[2] * *(float *)(lVar2 + 0x238);
            fVar27 = *(float *)(lVar2 + 0x23c) * 0.0;
            fVar15 = fVar26 * fVar21 - fVar25 * fVar23;
            fVar20 = fVar24 * fVar23 - fVar26 * fVar17;
            fVar22 = fVar25 * fVar17 - fVar24 * fVar21;
            fVar27 = fVar27 * fVar16 - fVar27 * fVar16;
            auVar18._0_4_ = fVar15 + fVar15;
            auVar18._4_4_ = fVar20 + fVar20;
            auVar18._8_4_ = fVar22 + fVar22;
            auVar18._12_4_ = fVar27 + fVar27;
            local_78 = (auVar18._8_4_ * fVar21 - auVar18._4_4_ * fVar23) +
                       fVar16 * auVar18._0_4_ + fVar24 + *(float *)(lVar2 + 0x220);
            local_74 = (auVar18._0_4_ * fVar23 - auVar18._8_4_ * fVar17) +
                       fVar16 * auVar18._4_4_ + fVar25 + *(float *)(lVar2 + 0x224);
            local_70 = (auVar18._4_4_ * fVar17 - auVar18._0_4_ * fVar21) +
                       fVar16 * auVar18._8_4_ + fVar26 + *(float *)(lVar2 + 0x228);
            uVar8 = (**(code **)(*plVar12 + 0x1c0))
                              (plVar12,&local_78,pfVar1,pfVar3 + 0x4a,local_res20,local_res18);
            auVar19 = *(undefined1 (*) [16])(lVar2 + 0x230);
            fVar17 = auVar19._0_4_;
            fVar21 = auVar19._4_4_;
            fVar23 = auVar19._8_4_;
            auVar4._4_4_ = -(uint)(fRam0000000146acaef4 <
                                  (float)((uint)fVar21 & uRam0000000146acaf04));
            auVar4._0_4_ = -(uint)(_DAT_146acaef0 < (float)((uint)fVar17 & _DAT_146acaf00));
            auVar4._8_4_ = -(uint)(fRam0000000146acaef8 <
                                  (float)((uint)fVar23 & uRam0000000146acaf08));
            auVar4._12_4_ =
                 -(uint)(fRam0000000146acaefc < (float)(auVar19._12_4_ & uRam0000000146acaf0c));
            iVar9 = movmskps(uVar8,auVar4);
            fVar16 = _DAT_1468b5b90;
            fVar15 = fRam00000001468b5b94;
            fVar20 = fRam00000001468b5b98;
            fVar22 = _DAT_1468b5b70;
            fVar27 = fRam00000001468b5b74;
            fVar24 = fRam00000001468b5b78;
            fVar25 = fRam00000001468b5b7c;
            if (iVar9 != 0) {
              auVar19 = rcpps(auVar18,auVar19);
              fVar16 = auVar19._0_4_;
              fVar15 = auVar19._4_4_;
              fVar20 = auVar19._8_4_;
              fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar17;
              fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar21;
              fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar23;
              fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar17;
              fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar21;
              fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar23;
              fVar16 = (float)((-(uint)((float)((uint)fVar17 & _DAT_146acaf00) <= _DAT_146acaef0) &
                                (uint)fVar16 ^ (uint)fVar16) & _DAT_146acae00);
              fVar15 = (float)((-(uint)((float)((uint)fVar21 & uRam0000000146acaf04) <=
                                       fRam0000000146acaef4) & (uint)fVar15 ^ (uint)fVar15) &
                              uRam0000000146acae04);
              fVar20 = (float)((-(uint)((float)((uint)fVar23 & uRam0000000146acaf08) <=
                                       fRam0000000146acaef8) & (uint)fVar20 ^ (uint)fVar20) &
                              uRam0000000146acae08);
              fVar22 = *(float *)(lVar2 + 0x210) * _DAT_146acaed0;
              fVar27 = *(float *)(lVar2 + 0x214) * fRam0000000146acaed4;
              fVar24 = *(float *)(lVar2 + 0x218) * fRam0000000146acaed8;
              fVar25 = *(float *)(lVar2 + 0x21c) * fRam0000000146acaedc;
            }
            fVar16 = *pfVar1 * fVar16;
            fVar15 = pfVar3[0x4c] * fVar15;
            fVar20 = pfVar3[0x4d] * fVar20;
            fVar17 = fVar20 * fVar27 - fVar15 * fVar24;
            fVar21 = fVar16 * fVar24 - fVar20 * fVar22;
            fVar23 = fVar15 * fVar22 - fVar16 * fVar27;
            fVar17 = fVar17 + fVar17;
            fVar21 = fVar21 + fVar21;
            fVar23 = fVar23 + fVar23;
            local_64 = (fVar21 * fVar22 - fVar17 * fVar27) + fVar25 * fVar23 + fVar20;
            *(ulonglong *)pfVar1 =
                 CONCAT44((fVar17 * fVar24 - fVar23 * fVar22) + fVar25 * fVar21 + fVar15,
                          (fVar23 * fVar27 - fVar21 * fVar24) + fVar25 * fVar17 + fVar16);
            pfVar3[0x4d] = local_64;
            iVar9 = rand();
            pfVar3[0x4e] = (float)iVar9 * 3.051851e-05 + (float)iVar9 * 3.051851e-05;
            pfVar3[0x49] = *(float *)(param_1 + 0x1c4);
          }
          puVar14 = puVar14 + 1;
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar10);
      }
    }
    else if (*(char *)(param_1 + 0x1c1) != '\0') {
      *(undefined1 *)(param_1 + 0x1c1) = 0;
      plVar12 = *(longlong **)(param_1 + 0x2c8);
      uVar10 = (longlong)*(int *)(param_1 + 0x2d0) & 0x1fffffffffffffff;
      if (plVar12 + *(int *)(param_1 + 0x2d0) < plVar12) {
        uVar10 = uVar13;
      }
      if (uVar10 != 0) {
        do {
          lVar2 = *plVar12;
          plVar12 = plVar12 + 1;
          uVar13 = uVar13 + 1;
          *(undefined1 *)(lVar2 + 0x120) = 0;
        } while (uVar13 != uVar10);
      }
    }
  }
  return;
}



// FUNCTION 141fad3a0 FUN_141fad3a0 body=987 status=ok
// SIG undefined FUN_141fad3a0(void)

void FUN_141fad3a0(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  int local_98;
  uint uStack_94;
  longlong *plStack_90;
  undefined2 uStack_84;
  undefined1 uStack_82;
  undefined1 uStack_81;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar13 = *(longlong *)(param_1 + 0x58);
  if (lVar13 != 0) {
    uVar11 = UCurveSourceInterface::GetPrivateStaticClass();
    UObjectBaseUtility::GetInterfaceAddress(lVar13,uVar11);
    plVar12 = (longlong *)FUN_142920a00(local_res8,*(undefined8 *)(param_1 + 0x58));
    if (*plVar12 == *(longlong *)(param_1 + 0x48)) {
      return;
    }
  }
  lVar13 = FUN_142269f40(param_2);
  if (lVar13 != 0) {
    uVar11 = UCurveSourceInterface::GetPrivateStaticClass();
    lVar14 = UObjectBaseUtility::GetInterfaceAddress(lVar13,uVar11);
    if ((lVar14 == 0) ||
       (plVar12 = (longlong *)FUN_142920a00(local_res8,lVar13),
       *plVar12 != *(longlong *)(param_1 + 0x48))) {
      if (*(longlong *)(lVar13 + 0x10) == 0) {
        plStack_90 = (longlong *)0x0;
      }
      else {
        plStack_90 = *(longlong **)(*(longlong *)(lVar13 + 0x10) + 0x38);
      }
      FUN_140cbbe70();
      while (plStack_90 != (longlong *)0x0) {
        lVar14 = (**(code **)(*plStack_90 + 0x378))
                           (plStack_90,*(int *)((longlong)plStack_90 + 0x44) + lVar13);
        if (lVar14 == 0) {
LAB_141fad4f2:
          lVar14 = 0;
          lVar15 = 0;
        }
        else {
          lVar15 = FUN_1428e7a40();
          if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_141fad4f2;
          uVar11 = UCurveSourceInterface::GetPrivateStaticClass();
          lVar15 = UObjectBaseUtility::GetInterfaceAddress(lVar14,uVar11);
        }
        if ((lVar15 != 0) &&
           (plVar12 = (longlong *)FUN_142920a00(local_res8,lVar14),
           *plVar12 == *(longlong *)(param_1 + 0x48))) {
          *(longlong *)(param_1 + 0x58) = lVar14;
          *(longlong *)(param_1 + 0x60) = lVar15;
          return;
        }
        plStack_90 = (longlong *)plStack_90[5];
        FUN_140cbbe70();
      }
      uVar2 = *(uint *)(lVar13 + 0x2d8);
      puVar1 = (uint *)(lVar13 + 0x2c0);
      local_98 = 0;
      uStack_94 = 1;
      uStack_84 = 0;
      uVar5 = uStack_84;
      uStack_82 = 0;
      uVar7 = uStack_82;
      uStack_81 = 0;
      uVar9 = uStack_81;
      iStack_80 = 0;
      uStack_82 = (undefined1)(uVar2 >> 0x10);
      uVar8 = uStack_82;
      uStack_81 = (undefined1)(uVar2 >> 0x18);
      uVar10 = uStack_81;
      uStack_84 = (undefined2)uVar2;
      uVar6 = uStack_84;
      uStack_84 = uVar5;
      uStack_82 = uVar7;
      uStack_81 = uVar9;
      if (uVar2 != 0) {
        puVar19 = *(uint **)(lVar13 + 0x2d0);
        if (*(uint **)(lVar13 + 0x2d0) == (uint *)0x0) {
          puVar19 = puVar1;
        }
        uVar3 = *puVar19;
        iStack_80 = 0;
        local_98 = 0;
        while (uVar3 == 0) {
          lVar14 = (longlong)local_98;
          iStack_80 = iStack_80 + 0x20;
          iVar16 = local_98 + 1;
          bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
          local_98 = iVar16;
          if (bVar4) goto LAB_141fad5f9;
          uVar3 = puVar19[lVar14 + 1];
        }
        uStack_94 = -uVar3 & uVar3;
        iVar16 = 0x1f;
        if (uStack_94 != 0) {
          for (; uStack_94 >> iVar16 == 0; iVar16 = iVar16 + -1) {
          }
        }
        if (uStack_94 == 0) {
          iVar16 = 0x20;
        }
        else {
          iVar16 = 0x1f - iVar16;
        }
        iVar16 = (iStack_80 - iVar16) + 0x1f;
        uStack_84 = (undefined2)iVar16;
        uStack_82 = (undefined1)((uint)iVar16 >> 0x10);
        uStack_81 = (undefined1)((uint)iVar16 >> 0x18);
        if ((int)uVar2 < iVar16) {
LAB_141fad5f9:
          uStack_84 = uVar6;
          uStack_82 = uVar8;
          uStack_81 = uVar10;
        }
      }
      uVar3 = *(uint *)(lVar13 + 0x2d8);
      uStack_60 = CONCAT17(uStack_81,CONCAT16(uStack_82,CONCAT24(uStack_84,0xffffffff)));
      local_58 = CONCAT44(uStack_7c,iStack_80);
      uStack_84 = (undefined2)uVar3;
      uStack_82 = (undefined1)(uVar3 >> 0x10);
      uStack_81 = (undefined1)(uVar3 >> 0x18);
      iStack_48 = local_98;
      uStack_44 = uStack_94;
      uVar18 = uVar3 & 0xffffffe0;
      iStack_70 = local_98;
      uStack_6c = uStack_94;
      if (uVar3 != uVar2) {
        puVar19 = *(uint **)(lVar13 + 0x2d0);
        if (*(uint **)(lVar13 + 0x2d0) == (uint *)0x0) {
          puVar19 = puVar1;
        }
        uVar17 = puVar19[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
        iVar16 = (int)uVar3 >> 5;
        while (uVar17 == 0) {
          uVar18 = uVar18 + 0x20;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar16)
          goto LAB_141fad6c4;
          uVar17 = puVar19[(longlong)iVar16 + 1];
          iVar16 = iVar16 + 1;
        }
        uVar17 = -uVar17 & uVar17;
        iVar16 = 0x1f;
        if (uVar17 != 0) {
          for (; uVar17 >> iVar16 == 0; iVar16 = iVar16 + -1) {
          }
        }
        if (uVar17 == 0) {
          iVar16 = 0x20;
        }
        else {
          iVar16 = 0x1f - iVar16;
        }
        iVar16 = (uVar18 - iVar16) + 0x1f;
        uStack_84 = (undefined2)iVar16;
        uStack_82 = (undefined1)((uint)iVar16 >> 0x10);
        uStack_81 = (undefined1)((uint)iVar16 >> 0x18);
        if ((int)uVar2 < iVar16) {
LAB_141fad6c4:
          uStack_84 = uVar6;
          uStack_82 = uVar8;
          uStack_81 = uVar10;
        }
      }
      local_68 = puVar1;
      local_50 = (longlong *)(lVar13 + 0x2b0);
      puStack_40 = puVar1;
      uStack_38 = uStack_60;
      uStack_30 = local_58;
      while( true ) {
        if ((uStack_60._4_4_ == CONCAT13(uStack_81,CONCAT12(uStack_82,uStack_84))) &&
           (local_68 == puVar1)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          return;
        }
        lVar14 = *(longlong *)(*(longlong *)(lVar13 + 0x2b0) + (longlong)uStack_60._4_4_ * 0x10);
        if (lVar14 == 0) {
          lVar15 = 0;
        }
        else {
          uVar11 = UCurveSourceInterface::GetPrivateStaticClass();
          lVar15 = UObjectBaseUtility::GetInterfaceAddress(lVar14,uVar11);
        }
        if ((lVar15 != 0) &&
           (plVar12 = (longlong *)FUN_142920a00(local_res8,lVar14),
           *plVar12 == *(longlong *)(param_1 + 0x48))) break;
        uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      }
      *(longlong *)(param_1 + 0x58) = lVar14;
      *(longlong *)(param_1 + 0x60) = lVar15;
    }
    else {
      *(longlong *)(param_1 + 0x58) = lVar13;
      *(longlong *)(param_1 + 0x60) = lVar14;
    }
  }
  return;
}



// FUNCTION 141fad780 FUN_141fad780 body=283 status=ok
// SIG undefined FUN_141fad780(void)

void FUN_141fad780(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  lVar4 = *(longlong *)(param_2 + 0x20);
  uVar6 = 0;
  uVar9 = uVar6;
  if ((lVar4 != 0) && (uVar9 = 0, (*(byte *)(lVar4 + 0xb8) & 1) != 0)) {
    uVar9 = *(ulonglong *)(lVar4 + 0x718);
  }
  if (uVar9 == 0) {
    *(undefined8 *)(param_1 + 0xa8) = 0x3a;
    return;
  }
  if (*(longlong *)(param_1 + 0xa8) != *(longlong *)(uVar9 + 0x18)) {
    plVar1 = (longlong *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x90) = 0;
    if ((*(int *)(param_1 + 0x94) < 0) && (*(int *)(param_1 + 0x94) != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
    }
    iVar2 = *(int *)(uVar9 + 0x160);
    iVar3 = *(int *)(param_1 + 0x90);
    iVar5 = iVar3 + iVar2;
    *(int *)(param_1 + 0x90) = iVar5;
    if (*(int *)(param_1 + 0x94) < iVar5) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar3 * 8),0,(longlong)iVar2 << 3);
    uVar8 = uVar6;
    uVar10 = uVar6;
    if (0 < *(int *)(uVar9 + 0x160)) {
      do {
        uVar7 = (int)uVar8 + 1;
        *(undefined8 *)(uVar6 + *plVar1) = *(undefined8 *)(uVar10 + *(longlong *)(uVar9 + 0x158));
        uVar6 = uVar6 + 8;
        uVar8 = (ulonglong)uVar7;
        uVar10 = uVar10 + 0x10;
      } while ((int)uVar7 < *(int *)(uVar9 + 0x160));
    }
  }
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(uVar9 + 0x18);
  return;
}



// FUNCTION 141fad8a0 FUN_141fad8a0 body=196 status=ok
// SIG undefined FUN_141fad8a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141fad8a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_18 [16];
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  lVar3 = *(longlong *)(lVar1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(lVar1);
  }
  lVar3 = UWorld::GetWorldSettings(lVar3,0,1);
  *(float *)(param_1 + 0x17c) =
       *(float *)(lVar3 + 0x5e4) * *(float *)(lVar3 + 0x5e0) * *(float *)(lVar3 + 0x5e8);
  if ((*(longlong *)(lVar1 + 400) != 0) && (*(longlong *)(lVar1 + 0x118) == 0)) {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 400) + 0x118);
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x308))(plVar2,local_18);
    *(undefined8 *)(param_1 + 0x19c) = *puVar4;
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(puVar4 + 1);
    return;
  }
  *(undefined8 *)(param_1 + 0x19c) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x1a4) = DAT_1468b5d98;
  return;
}



// FUNCTION 141fad970 FUN_141fad970 body=503 status=ok
// SIG undefined FUN_141fad970(void)

void FUN_141fad970(longlong *param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined8 local_48;
  float local_40;
  
  lVar1 = DAT_146acaff8;
  if ((char)param_1[4] == '\0') {
    return;
  }
  lVar4 = (longlong)(int)param_1[1] * 0x40;
  local_48 = *(undefined8 *)(lVar4 + -0x40 + *param_1);
  local_40 = *(float *)(lVar4 + -0x38 + *param_1);
  if (2 < (int)param_1[5]) {
    if ((int)param_1[5] == 3) {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
        lVar4 = 4;
      }
      else {
        lVar4 = 0;
      }
      if (*(int *)(lVar4 + lVar1) == 1) {
        FUN_141fafe20(param_1,param_2);
        return;
      }
    }
    FUN_141faf4c0(param_1,param_2,param_3,param_4);
    return;
  }
  fVar9 = *param_2 - (float)local_48;
  local_48._4_4_ = (float)((ulonglong)local_48 >> 0x20);
  local_48._4_4_ = param_2[1] - local_48._4_4_;
  local_40 = param_2[2] - local_40;
  uVar5 = (ulonglong)(uint)(fVar9 * fVar9);
  fVar6 = local_48._4_4_ * local_48._4_4_ + fVar9 * fVar9 + local_40 * local_40;
  if (fVar6 != 1.0) {
    if (fVar6 < 1e-08) {
      uVar5 = (ulonglong)(uint)DAT_1468b5d98;
      local_40 = DAT_1468b5d98;
      local_48 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      goto LAB_141fadacb;
    }
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
    fVar6 = fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
    uVar5 = CONCAT44(auVar8._4_4_,fVar6);
    fVar7 = fVar7 + fVar6;
    fVar9 = fVar9 * fVar7;
    local_48._4_4_ = local_48._4_4_ * fVar7;
    local_40 = local_40 * fVar7;
  }
  local_48 = CONCAT44(local_48._4_4_,fVar9);
LAB_141fadacb:
  FIKChain::OrientAllLinksToDirection(uVar5,&local_48);
  return;
}



// FUNCTION 141fadb70 FUN_141fadb70 body=128 status=ok
// SIG undefined FUN_141fadb70(void)

void FUN_141fadb70(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x148);
  plVar1 = (longlong *)(param_1 + 0x150);
  iVar3 = *(int *)(param_1 + 0x158);
  if (iVar3 < iVar2) {
    *(int *)(param_1 + 0x158) = iVar2;
    if (*(int *)(param_1 + 0x15c) < iVar2) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar1 + (longlong)iVar3 * 0xc),0,(longlong)(iVar2 - iVar3) * 0xc);
    return;
  }
  if ((iVar2 < iVar3) && (iVar2 != iVar3)) {
    *(int *)(param_1 + 0x158) = iVar2;
    TArray<FVector,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  return;
}



// FUNCTION 141fadbf0 FUN_141fadbf0 body=302 status=ok
// SIG undefined FUN_141fadbf0(void)

void FUN_141fadbf0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x30);
  if (cVar2 == '\0') {
    if (((*(char *)(param_1 + 0x38) != '\0') && (*(longlong *)(param_2 + 0xb8) != 0)) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 400), lVar3 != 0)) {
      lVar4 = FUN_142a07000();
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
        cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x3c);
        if (((cVar2 == '\0') || (lVar4 = FWeakObjectPtr::Get(param_1 + 0x3c), lVar4 == lVar3)) &&
           (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x3c), cVar2 != '\0')) {
          return;
        }
        FUN_141fae450(param_1,lVar3,param_2);
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    return;
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x30);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x3c);
  if ((cVar2 == '\0') || (lVar4 = FWeakObjectPtr::Get(param_1 + 0x3c), lVar4 == lVar3)) {
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x3c);
    if (cVar2 != '\0') {
      return;
    }
    if (lVar3 == 0) {
      return;
    }
  }
  FUN_141fae450(param_1,lVar3,param_2);
  return;
}



// FUNCTION 141fadd20 FUN_141fadd20 body=216 status=ok
// SIG undefined FUN_141fadd20(void)

void FUN_141fadd20(longlong param_1,char param_2)

{
  float fVar1;
  longlong *plVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = *(int *)(param_1 + 0x128);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x120) + 0x30);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(int *)(param_1 + 300) != 0) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1 + 0x120,0);
  }
  if (param_2 != '\0') {
    fVar1 = *(float *)(param_1 + 0x7c);
    if (0.0 <= fVar1) {
      fVar4 = fVar1;
      if (1.0 <= fVar1) {
        fVar4 = 1.0;
      }
    }
    else {
      fVar4 = 0.0;
    }
    *(float *)(param_1 + 0x40) = fVar4;
    if ((fVar1 == 0.0) && (*(float *)(param_1 + 0x74) <= 0.0 && *(float *)(param_1 + 0x74) != 0.0))
    {
      *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    UBlendSpaceBase::InitializeFilter(*(longlong *)(param_1 + 0x80),param_1 + 0x90);
  }
  return;
}



// FUNCTION 141fade00 FUN_141fade00 body=712 status=ok
// SIG undefined FUN_141fade00(void)

void FUN_141fade00(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  short sVar3;
  ushort uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  short *psVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  int iVar20;
  
  cVar10 = FUN_141faaef0();
  if (((cVar10 != '\0') && (param_3 != 0)) && ((~(byte)(*(uint *)(param_3 + 8) >> 0xc) & 1) != 0)) {
    FAnimationRuntime::CreateMaskWeights(param_1 + 0x80);
    uVar9 = *(undefined8 *)(param_3 + 0x168);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_3 + 0x160);
    *(undefined8 *)(param_1 + 0x98) = uVar9;
    uVar6 = *(undefined4 *)(param_3 + 0x174);
    uVar7 = *(undefined4 *)(param_3 + 0x178);
    uVar8 = *(undefined4 *)(param_3 + 0x17c);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_3 + 0x170);
    *(undefined4 *)(param_1 + 0xa4) = uVar6;
    *(undefined4 *)(param_1 + 0xa8) = uVar7;
    *(undefined4 *)(param_1 + 0xac) = uVar8;
  }
  iVar16 = *(int *)(param_2 + 8);
  plVar1 = (longlong *)(param_1 + 0xb0);
  iVar20 = *(int *)(param_1 + 0xb8);
  if (iVar20 < iVar16) {
    *(int *)(param_1 + 0xb8) = iVar16;
    if (*(int *)(param_1 + 0xbc) < iVar16) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar1 + (longlong)iVar20 * 8),0,(longlong)(iVar16 - iVar20) << 3);
  }
  else if ((iVar16 < iVar20) && (iVar16 != iVar20)) {
    *(int *)(param_1 + 0xb8) = iVar16;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  if (0 < iVar16) {
    lVar19 = 0;
    do {
      *(undefined8 *)(*plVar1 + lVar19 * 8) =
           *(undefined8 *)
            (*(longlong *)(param_1 + 0x80) +
            (longlong)*(int *)(*(longlong *)(param_2 + 0x70) + lVar19 * 4) * 8);
      lVar19 = lVar19 + 1;
    } while (lVar19 < iVar16);
  }
  plVar2 = (longlong *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) < *(int *)(param_1 + 0xb8)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2);
  }
  iVar16 = *(int *)(param_1 + 0xb8);
  iVar20 = *(int *)(param_1 + 200);
  iVar11 = iVar20 + iVar16;
  *(int *)(param_1 + 200) = iVar11;
  if (*(int *)(param_1 + 0xcc) < iVar11) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar2 + (longlong)iVar20 * 8),0,(longlong)iVar16 << 3);
  FAnimationRuntime::UpdateDesiredBoneWeight(plVar1,plVar2,param_1 + 0x110);
  plVar2 = (longlong *)(param_2 + 0xc0);
  uVar14 = 0;
  uVar15 = uVar14;
  if ((plVar2 != (longlong *)0x0) &&
     (lVar19 = (longlong)*(int *)(param_2 + 200), uVar15 = 0, 0 < lVar19)) {
    psVar12 = (short *)*plVar2;
    do {
      sVar3 = *psVar12;
      psVar12 = psVar12 + 1;
      uVar15 = uVar14 + 1;
      if (sVar3 == -1) {
        uVar15 = uVar14;
      }
      uVar14 = uVar15;
      lVar19 = lVar19 + -1;
      uVar15 = uVar14;
    } while (lVar19 != 0);
  }
  plVar18 = (longlong *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) < (int)uVar15) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar18,uVar15);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(uint *)(param_1 + 0xdc) != uVar15) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar18,uVar15);
  }
  if (0 < (int)uVar15) {
    uVar17 = (ulonglong)uVar15;
    do {
      iVar16 = *(int *)(param_1 + 0xd8);
      *(int *)(param_1 + 0xd8) = iVar16 + 1;
      if (*(int *)(param_1 + 0xdc) < iVar16 + 1) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar18,iVar16);
      }
      if ((undefined1 *)((longlong)iVar16 + *plVar18) != (undefined1 *)0x0) {
        *(undefined1 *)((longlong)iVar16 + *plVar18) = 0xff;
      }
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  iVar16 = 0;
  if (0 < *(int *)(param_2 + 200)) {
    do {
      uVar4 = *(ushort *)(*plVar2 + (longlong)iVar16 * 2);
      if (((uVar4 != 0xffff) && (lVar19 = USkeleton::GetCurveMetaData(param_3), lVar19 != 0)) &&
         (0 < *(int *)(lVar19 + 0x10))) {
        iVar20 = 0;
        lVar13 = 0;
        do {
          lVar5 = *(longlong *)(lVar19 + 8);
          if (*(char *)(lVar13 + 0xc + lVar5) == '\0') {
            iVar11 = *(int *)(lVar13 + 0x10 + lVar5);
LAB_141fae075:
            if (iVar11 != -1) {
              if (0.0 < *(float *)(*plVar1 + 4 + (longlong)iVar11 * 8)) {
                *(undefined1 *)((ulonglong)uVar4 + *plVar18) =
                     *(undefined1 *)(*plVar1 + (longlong)iVar11 * 8);
              }
            }
          }
          else {
            iVar11 = *(int *)(lVar13 + 8 + lVar5);
            if (iVar11 != -1) {
              iVar11 = *(int *)(*(longlong *)(param_2 + 0x80) + (longlong)iVar11 * 4);
              goto LAB_141fae075;
            }
          }
          iVar20 = iVar20 + 1;
          lVar13 = lVar13 + 0x18;
        } while (iVar20 < *(int *)(lVar19 + 0x10));
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(param_2 + 200));
  }
  return;
}



// FUNCTION 141fae0d0 FUN_141fae0d0 body=892 status=ok
// SIG undefined FUN_141fae0d0(void)

void FUN_141fae0d0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  short *psVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  cVar11 = FUN_141faafb0();
  if (((cVar11 != '\0') && (param_3 != 0)) && ((~(byte)(*(uint *)(param_3 + 8) >> 0xc) & 1) != 0)) {
    FUN_141f89880(param_1,param_3);
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (*(int *)(param_1 + 0x74) != *(int *)(param_1 + 0x60)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x68);
    }
    plVar23 = *(longlong **)(param_1 + 0x58);
    plVar1 = plVar23 + *(int *)(param_1 + 0x60);
    for (; plVar23 != plVar1; plVar23 = plVar23 + 1) {
      lVar17 = *plVar23;
      if (lVar17 == 0) {
        local_58 = 0;
        puVar27 = &local_58;
        local_50 = 0;
      }
      else {
        puVar27 = (undefined8 *)&local_48;
        local_48 = *(undefined4 *)(lVar17 + 0x30);
        uStack_44 = *(undefined4 *)(lVar17 + 0x34);
        uStack_40 = *(undefined4 *)(lVar17 + 0x38);
        uStack_3c = *(undefined4 *)(lVar17 + 0x3c);
      }
      iVar14 = *(int *)(param_1 + 0x70);
      iVar12 = iVar14 + 1;
      *(int *)(param_1 + 0x70) = iVar12;
      if (*(int *)(param_1 + 0x74) < iVar12) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x68);
      }
      uVar7 = *(undefined4 *)((longlong)puVar27 + 4);
      uVar8 = *(undefined4 *)(puVar27 + 1);
      uVar9 = *(undefined4 *)((longlong)puVar27 + 0xc);
      puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar14 * 0x10);
      *puVar3 = *(undefined4 *)puVar27;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
    }
    uVar10 = *(undefined8 *)(param_3 + 0x168);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_3 + 0x160);
    *(undefined8 *)(param_1 + 0xa8) = uVar10;
    uVar7 = *(undefined4 *)(param_3 + 0x174);
    uVar8 = *(undefined4 *)(param_3 + 0x178);
    uVar9 = *(undefined4 *)(param_3 + 0x17c);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_3 + 0x170);
    *(undefined4 *)(param_1 + 0xb4) = uVar7;
    *(undefined4 *)(param_1 + 0xb8) = uVar8;
    *(undefined4 *)(param_1 + 0xbc) = uVar9;
  }
  iVar14 = *(int *)(param_2 + 8);
  plVar1 = (longlong *)(param_1 + 0xc0);
  iVar12 = *(int *)(param_1 + 200);
  if (iVar12 < iVar14) {
    *(int *)(param_1 + 200) = iVar14;
    if (*(int *)(param_1 + 0xcc) < iVar14) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar1 + (longlong)iVar12 * 0xc),0,(longlong)(iVar14 - iVar12) * 0xc);
  }
  else if ((iVar14 < iVar12) && (iVar14 != iVar12)) {
    *(int *)(param_1 + 200) = iVar14;
    TArray<FVector,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  if (0 < iVar14) {
    lVar25 = 0;
    lVar17 = 0;
    do {
      lVar17 = lVar17 + 0xc;
      lVar15 = (longlong)*(int *)(*(longlong *)(param_2 + 0x70) + lVar25 * 4);
      lVar25 = lVar25 + 1;
      lVar5 = *(longlong *)(param_1 + 0x90);
      lVar6 = *plVar1;
      *(undefined8 *)(lVar6 + -0xc + lVar17) = *(undefined8 *)(lVar5 + lVar15 * 0xc);
      *(undefined4 *)(lVar6 + -4 + lVar17) = *(undefined4 *)(lVar5 + 8 + lVar15 * 0xc);
    } while (lVar25 < iVar14);
  }
  plVar23 = (longlong *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) < *(int *)(param_1 + 200)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (plVar23);
  }
  iVar14 = *(int *)(param_1 + 200);
  iVar12 = *(int *)(param_1 + 0xd8);
  iVar13 = iVar12 + iVar14;
  *(int *)(param_1 + 0xd8) = iVar13;
  if (*(int *)(param_1 + 0xdc) < iVar13) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar23);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*plVar23 + (longlong)iVar12 * 0xc),0,(longlong)iVar14 * 0xc);
  FUN_141fb2940(plVar1,plVar23,param_1 + 0x130,param_1 + 0x120);
  plVar23 = (longlong *)(param_2 + 0xc0);
  uVar19 = 0;
  uVar24 = uVar19;
  if ((plVar23 != (longlong *)0x0) &&
     (lVar17 = (longlong)*(int *)(param_2 + 200), uVar24 = 0, 0 < lVar17)) {
    psVar16 = (short *)*plVar23;
    do {
      sVar4 = *psVar16;
      psVar16 = psVar16 + 1;
      uVar24 = uVar19 + 1;
      if (sVar4 == -1) {
        uVar24 = uVar19;
      }
      uVar19 = uVar24;
      lVar17 = lVar17 + -1;
      uVar24 = uVar19;
    } while (lVar17 != 0);
  }
  plVar2 = (longlong *)(param_1 + 0xe0);
  uVar20 = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0xec) < (int)uVar24) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar2,uVar24);
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(uint *)(param_1 + 0xec) != uVar24) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar2,uVar24);
  }
  if (0 < (int)uVar24) {
    uVar21 = (ulonglong)uVar24;
    do {
      iVar14 = *(int *)(param_1 + 0xe8);
      *(int *)(param_1 + 0xe8) = iVar14 + 1;
      if (*(int *)(param_1 + 0xec) < iVar14 + 1) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar2,iVar14);
      }
      if ((undefined1 *)((longlong)iVar14 + *plVar2) != (undefined1 *)0x0) {
        *(undefined1 *)((longlong)iVar14 + *plVar2) = 0xff;
      }
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  uVar21 = uVar20;
  uVar22 = uVar20;
  if (0 < *(int *)(param_2 + 200)) {
    do {
      lVar17 = USkeleton::GetCurveMetaData(param_3,*(undefined2 *)(*plVar23 + uVar21 * 2));
      if ((lVar17 != 0) && (uVar18 = uVar20, uVar26 = uVar20, 0 < *(int *)(lVar17 + 0x10))) {
        do {
          lVar25 = *(longlong *)(lVar17 + 8);
          if (*(char *)(uVar18 + 0xc + lVar25) == '\0') {
            iVar14 = *(int *)(uVar18 + 0x10 + lVar25);
LAB_141fae3eb:
            if (iVar14 != -1) {
              if (0.0 < *(float *)(*plVar1 + 4 + (longlong)iVar14 * 0xc)) {
                *(undefined1 *)(uVar21 + *plVar2) =
                     *(undefined1 *)(*plVar1 + (longlong)iVar14 * 0xc);
              }
            }
          }
          else {
            iVar14 = *(int *)(uVar18 + 8 + lVar25);
            if (iVar14 != -1) {
              iVar14 = *(int *)(*(longlong *)(param_2 + 0x80) + (longlong)iVar14 * 4);
              goto LAB_141fae3eb;
            }
          }
          uVar24 = (int)uVar26 + 1;
          uVar18 = uVar18 + 0x18;
          uVar26 = (ulonglong)uVar24;
        } while ((int)uVar24 < *(int *)(lVar17 + 0x10));
      }
      uVar24 = (int)uVar22 + 1;
      uVar21 = uVar21 + 1;
      uVar22 = (ulonglong)uVar24;
    } while ((int)uVar24 < *(int *)(param_2 + 200));
  }
  return;
}



// FUNCTION 141fae450 FUN_141fae450 body=617 status=ok
// SIG undefined FUN_141fae450(void)

void FUN_141fae450(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint local_res8 [2];
  uint *local_res10;
  undefined1 local_res20 [8];
  uint *local_58;
  uint *local_50;
  uint *local_48;
  undefined4 **local_40;
  
  FWeakObjectPtr::operator=(param_1 + 0x3c);
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
            (param_1 + 0x48);
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x98);
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x718), lVar1 != 0)) {
    iVar10 = *(int *)(param_2 + 0xc);
    uVar11 = 0;
    uVar6 = uVar11;
    if (iVar10 < (int)DAT_1469e91c4) {
      uVar9 = iVar10 >> 0x1f & 0xffff;
      uVar4 = iVar10 + uVar9;
      uVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    if (((*(uint *)(uVar6 + 8) >> 0x1d & 1) == 0) && (*(longlong *)(param_3 + 0xb8) != 0)) {
      lVar2 = *(longlong *)(*(longlong *)(param_3 + 0xb8) + 0x718);
      if (lVar1 == lVar2) {
        local_res8[0] = 0;
        if (0 < *(int *)(lVar1 + 0x160)) {
          local_58 = local_res8;
          local_50 = local_res8;
          do {
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_&&>_>(param_1 + 0x48,&local_res10,&local_58,0);
            local_res8[0] = local_res8[0] + 1;
          } while ((int)local_res8[0] < *(int *)(lVar1 + 0x160));
        }
      }
      else {
        local_res8[0] = 0;
        if (0 < *(int *)(lVar2 + 0x160)) {
          local_48 = local_res8;
          local_40 = &local_res10;
          uVar6 = uVar11;
          do {
            local_58 = *(uint **)(*(longlong *)(lVar2 + 0x158) + (longlong)(int)uVar6 * 0x10);
            uVar5 = FReferenceSkeleton::FindBoneIndex(lVar1 + 0x138,&local_58);
            local_res10 = (uint *)CONCAT44(local_res10._4_4_,uVar5);
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_&&>_>(param_1 + 0x48,local_res20,&local_48,0);
            local_res8[0] = local_res8[0] + 1;
            uVar6 = (ulonglong)local_res8[0];
          } while ((int)local_res8[0] < *(int *)(lVar2 + 0x160));
        }
      }
      if (*(char *)(param_1 + 0x39) != '\0') {
        uVar8 = *(undefined8 *)(lVar2 + 0x48);
        uVar7 = USkeleton::GetSmartNameContainer(*(undefined8 *)(lVar1 + 0x48),&DAT_146aef308);
        uVar8 = USkeleton::GetSmartNameContainer(uVar8,&DAT_146aef308);
        local_58 = (uint *)0x0;
        local_50 = (uint *)0x0;
        UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar7,&local_58);
        if (0 < (int)local_50) {
          do {
            iVar10 = (int)uVar11;
            sVar3 = FSmartNameMapping::FindUID(uVar8,local_58 + (longlong)iVar10 * 2);
            if (sVar3 != -1) {
              local_res10 = local_58 + (longlong)iVar10 * 2;
              FUN_141f7fa60(param_1 + 0x98,local_res8,&local_res10,0);
              *(short *)(*(longlong *)(param_1 + 0x98) + 8 + (longlong)(int)local_res8[0] * 0x18) =
                   sVar3;
            }
            uVar11 = (ulonglong)(iVar10 + 1U);
          } while ((int)(iVar10 + 1U) < (int)local_50);
        }
        if (local_58 != (uint *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 141fae6e0 FUN_141fae6e0 body=64 status=ok
// SIG undefined FUN_141fae6e0(void)

void FUN_141fae6e0(longlong param_1)

{
  _guard_xfg_dispatch_icall_nop
            (*(void **)(param_1 + 0x810),0,(ulonglong)(uint)(*(int *)(param_1 + 0x81c) << 2));
  _guard_xfg_dispatch_icall_nop
            (*(void **)(param_1 + 0x890),0,(ulonglong)(uint)(*(int *)(param_1 + 0x89c) << 2));
  return;
}



// FUNCTION 141fae720 FUN_141fae720 body=143 status=ok
// SIG undefined FUN_141fae720(void)

void FUN_141fae720(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141fae7ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x78))();
  return;
}



// FUNCTION 141fae7b0 FUN_141fae7b0 body=104 status=ok
// SIG undefined FUN_141fae7b0(void)

void FUN_141fae7b0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x3c)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x30,0);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((*(int *)(param_1 + 0x4c) < 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x40,0);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if ((*(int *)(param_1 + 0x7c) < 0) && (*(int *)(param_1 + 0x7c) != 0)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x70,0);
    return;
  }
  return;
}



// FUNCTION 141fae820 ResetToAdditiveIdentity body=121 status=ok
// SIG undefined ResetToAdditiveIdentity(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar5 = uRam0000000146acae0c;
  uVar4 = uRam0000000146acae08;
  uVar3 = uRam0000000146acae04;
  uVar2 = _DAT_146acae00;
  puVar7 = (undefined4 *)*param_1;
  puVar6 = puVar7 + (longlong)*(int *)(param_1 + 1) * 0xc;
  uVar8 = uRam0000000146acadfc;
  for (; puVar7 != puVar6; puVar7 = puVar7 + 0xc) {
    uRam0000000146acadfc = uVar8;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 6) = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = uVar8;
    uVar8 = uRam0000000146acadf4 & uVar3;
    uVar9 = uRam0000000146acadf8 & uVar4;
    uVar10 = uRam0000000146acadfc & uVar5;
    puVar7[8] = _DAT_146acadf0 & uVar2;
    puVar7[9] = uVar8;
    puVar7[10] = uVar9;
    puVar7[0xb] = uVar10;
    auVar1._4_4_ = DAT_1468b5d94;
    auVar1._0_4_ = DAT_1468b5d90;
    auVar1._8_4_ = DAT_1468b5d98;
    auVar1._12_4_ = 0;
    *(undefined1 (*) [16])(puVar7 + 8) = auVar1;
    uVar8 = uRam0000000146acadfc;
  }
  uRam0000000146acadfc = uVar8;
  return;
}



// FUNCTION 141fae8a0 ResizeGrow body=151 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FAnimPhysLinkedBody,FDefaultAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x1f0,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x842108421084211) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 8);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x1f0,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 141fae940 ResizeGrow body=65 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  uVar1 = *(uint *)(param_1 + 8);
  if ((*(int *)(param_1 + 0xc) != 0) || (4 < uVar1)) {
    iVar2 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
  }
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  FUN_141b6c650(param_1,param_2,iVar2,0x30);
  return;
}



// FUNCTION 141fae990 FUN_141fae990 body=130 status=ok
// SIG undefined FUN_141fae990(void)

void FUN_141fae990(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x1f0,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x842108421084211) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 8);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x1f0,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 141faea20 FUN_141faea20 body=603 status=ok
// SIG undefined FUN_141faea20(void)

void FUN_141faea20(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  float fVar17;
  
  uVar10 = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  bVar5 = false;
  plVar3 = *(longlong **)(param_1 + 0x38);
  bVar4 = false;
  iVar2 = *(int *)(param_1 + 0x40);
  fVar17 = 0.0;
  if (plVar3 != plVar3 + (longlong)iVar2 * 0xf) {
    plVar13 = plVar3 + 0xb;
    do {
      if (*(char *)((longlong)plVar13 + 0x1c) == '\0') {
        lVar9 = *plVar13;
        if (plVar13[1] != lVar9) {
          plVar13[-0xb] = 0;
          lVar8 = *param_2;
          if ((lVar8 != 0) && (*(int *)(lVar8 + 0x608) != *(int *)(lVar8 + 0x634))) {
            lVar11 = *(longlong *)(lVar8 + 0x640);
            if (*(longlong *)(lVar8 + 0x640) == 0) {
              lVar11 = lVar8 + 0x638;
            }
            iVar6 = *(int *)(lVar11 + ((longlong)((int)((ulonglong)lVar9 >> 0x20) + (int)lVar9) &
                                      (longlong)*(int *)(lVar8 + 0x648) - 1U) * 4);
            if (iVar6 != -1) {
              lVar8 = *(longlong *)(lVar8 + 0x600);
              do {
                lVar11 = (longlong)iVar6;
                if (*(longlong *)(lVar8 + lVar11 * 0x18) == lVar9) {
                  if ((((iVar6 != -1) && (lVar8 = lVar8 + lVar11 * 0x18, lVar8 != 0)) &&
                      (puVar16 = (ulonglong *)(lVar8 + 8), puVar16 != (ulonglong *)0x0)) &&
                     ((*puVar16 != 0 &&
                      (lVar9 = *(longlong *)(*puVar16 + 0x10),
                      lVar8 = UAnimMontage::GetPrivateStaticClass(), lVar9 == lVar8)))) {
                    uVar12 = *puVar16;
                    if (uVar12 == 0) {
LAB_141faeb85:
                      uVar12 = uVar10;
                    }
                    else {
                      lVar9 = UAnimMontage::GetPrivateStaticClass();
                      if ((*(int *)(*(longlong *)(uVar12 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(uVar12 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                        bVar4 = false;
                      }
                      else {
                        bVar4 = true;
                      }
                      if (!bVar4) goto LAB_141faeb85;
                    }
                    plVar13[-0xb] = uVar12;
                  }
                  break;
                }
                iVar6 = *(int *)(lVar8 + 0x10 + lVar11 * 0x18);
              } while (iVar6 != -1);
            }
          }
          bVar4 = true;
          plVar13[1] = *plVar13;
          bVar5 = true;
        }
        if (plVar13[-0xb] != 0) {
          fVar17 = fVar17 + *(float *)(plVar13 + -10);
          *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
        }
      }
      plVar1 = plVar13 + 4;
      plVar13 = plVar13 + 0xf;
    } while (plVar1 != plVar3 + (longlong)iVar2 * 0xf);
    if ((bVar4) && (param_3 == '\0')) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      if (*(int *)(param_1 + 0x6c) < *(int *)(param_1 + 0x40)) {
        TArray<float,FDefaultAllocator>::ResizeTo();
      }
      uVar12 = uVar10;
      uVar15 = uVar10;
      if (0 < *(int *)(param_1 + 0x40)) {
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x38) + uVar12) == 0) {
            *(undefined4 *)(uVar10 + *(longlong *)(param_1 + 0x48)) = 0;
          }
          else {
            *(float *)(uVar10 + *(longlong *)(param_1 + 0x48)) =
                 *(float *)(*(longlong *)(param_1 + 0x38) + 8 + uVar12) / fVar17;
          }
          uVar14 = (int)uVar15 + 1;
          uVar10 = uVar10 + 4;
          uVar12 = uVar12 + 0x78;
          uVar15 = (ulonglong)uVar14;
        } while ((int)uVar14 < *(int *)(param_1 + 0x40));
      }
      if ((bVar5) && (0.0 < fVar17)) {
        uVar7 = FUN_141fa5340(param_1);
        *(undefined4 *)(param_1 + 0x58) = uVar7;
        uVar7 = FUN_141fa5340(param_1);
        *(undefined4 *)(param_1 + 0x5c) = uVar7;
      }
    }
  }
  return;
}



// FUNCTION 141faec80 FUN_141faec80 body=1001 status=ok
// SIG undefined FUN_141faec80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_141faec80(float *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  int iVar7;
  ulonglong in_RAX;
  float *pfVar8;
  float *pfVar9;
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
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  
  auVar3._4_4_ = -(uint)(1e-08 < (float)((uint)(param_1[1] - DAT_1464aa814) & uRam0000000146acaf04))
  ;
  auVar3._0_4_ = -(uint)(1e-08 < (float)((uint)(*param_1 - DAT_1464aa810) & _DAT_146acaf00));
  auVar3._8_4_ = -(uint)(1e-08 < (float)((uint)(param_1[2] - DAT_1464aa818) & uRam0000000146acaf08))
  ;
  auVar3._12_4_ =
       -(uint)(1e-08 < (float)((uint)(param_1[3] - DAT_1464aa81c) & uRam0000000146acaf0c));
  iVar7 = movmskps((int)in_RAX,auVar3);
  if ((iVar7 != 0) &&
     (auVar4._4_4_ = -(uint)(1e-08 < (float)((uint)(DAT_1464aa814 + param_1[1]) &
                                            uRam0000000146acaf04)),
     auVar4._0_4_ = -(uint)(1e-08 < (float)((uint)(DAT_1464aa810 + *param_1) & _DAT_146acaf00)),
     auVar4._8_4_ = -(uint)(1e-08 < (float)((uint)(DAT_1464aa818 + param_1[2]) &
                                           uRam0000000146acaf08)),
     auVar4._12_4_ =
          -(uint)(1e-08 < (float)((uint)(DAT_1464aa81c + param_1[3]) & uRam0000000146acaf0c)),
     iVar7 = movmskps(iVar7,auVar4), iVar7 != 0)) {
    fVar2 = *(float *)(param_2 + 0xc0);
    fVar1 = param_1[3];
    fVar10 = (float)((ulonglong)*(undefined8 *)(param_2 + 0xb8) >> 0x20);
    fVar24 = -param_1[1];
    fVar25 = -param_1[2];
    fVar27 = -*param_1;
    local_b8 = (float)*(undefined8 *)(param_2 + 0xb8);
    fVar22 = fVar24 * fVar2 - fVar25 * fVar10;
    fVar22 = fVar22 + fVar22;
    fVar21 = fVar25 * local_b8 - fVar27 * fVar2;
    fVar19 = fVar27 * fVar10 - fVar24 * local_b8;
    fVar21 = fVar21 + fVar21;
    fVar19 = fVar19 + fVar19;
    *(ulonglong *)(param_2 + 0xb8) =
         CONCAT44((fVar25 * fVar22 - fVar27 * fVar19) + fVar10 + fVar1 * fVar21,
                  (fVar24 * fVar19 - fVar25 * fVar21) + fVar1 * fVar22 + local_b8);
    *(float *)(param_2 + 0xc0) = (fVar27 * fVar21 - fVar24 * fVar22) + fVar2 + fVar1 * fVar19;
    pfVar9 = *(float **)(param_2 + 0x60);
    uVar6 = *(undefined8 *)(pfVar9 + (longlong)*(int *)(param_2 + 0x68) * 0xc + -8);
    pfVar8 = pfVar9 + (longlong)*(int *)(param_2 + 0x68) * 0xc;
    if (pfVar9 != pfVar8) {
      fStack_b0 = (float)*(undefined8 *)(pfVar9 + (longlong)*(int *)(param_2 + 0x68) * 0xc + -8 + 2)
      ;
      fStack_b4 = (float)((ulonglong)uVar6 >> 0x20);
      local_b8 = (float)uVar6;
      do {
        fVar1 = *param_1;
        fVar2 = param_1[1];
        fVar10 = param_1[2];
        fVar19 = param_1[3];
        fVar21 = *pfVar9;
        fVar22 = pfVar9[1];
        fVar24 = pfVar9[2];
        fVar25 = pfVar9[3];
        fVar20 = pfVar9[4] - local_b8;
        fVar23 = pfVar9[5] - fStack_b4;
        fVar16 = fVar24 * fVar1 * fRam0000000146acae34;
        fVar17 = fVar22 * fVar1 * fRam0000000146acae38;
        fVar18 = fVar21 * fVar1 * fRam0000000146acae3c;
        fVar26 = pfVar9[6] - fStack_b0;
        fVar27 = fVar25 * fVar2 * fRam0000000146acae24;
        fVar11 = fVar21 * fVar2 * fRam0000000146acae28;
        fVar12 = fVar22 * fVar2 * fRam0000000146acae2c;
        fVar13 = fVar21 * fVar10 * fRam0000000146acae14;
        fVar14 = fVar25 * fVar10 * fRam0000000146acae18;
        fVar15 = fVar24 * fVar10 * fRam0000000146acae1c;
        *pfVar9 = fVar25 * fVar1 * _DAT_146acae30 + fVar19 * fVar21 +
                  fVar24 * fVar2 * _DAT_146acae20 + fVar22 * fVar10 * _DAT_146acae10;
        pfVar9[1] = fVar16 + fVar19 * fVar22 + fVar27 + fVar13;
        pfVar9[2] = fVar17 + fVar19 * fVar24 + fVar11 + fVar14;
        pfVar9[3] = fVar18 + fVar19 * fVar25 + fVar12 + fVar15;
        fVar1 = param_1[1];
        fVar2 = param_1[2];
        fVar10 = *param_1;
        fVar19 = param_1[3];
        fVar24 = fVar1 * fVar26 - fVar2 * fVar23;
        fVar24 = fVar24 + fVar24;
        fVar22 = fVar2 * fVar20 - fVar10 * fVar26;
        fVar21 = fVar10 * fVar23 - fVar1 * fVar20;
        fVar22 = fVar22 + fVar22;
        fVar21 = fVar21 + fVar21;
        auVar5._4_4_ = (fVar2 * fVar24 - fVar10 * fVar21) + fVar19 * fVar22 + fVar23 + fStack_b4;
        auVar5._0_4_ = (fVar1 * fVar21 - fVar2 * fVar22) + fVar19 * fVar24 + fVar20 + local_b8;
        auVar5._8_4_ = (fVar10 * fVar22 - fVar1 * fVar24) + fVar19 * fVar21 + fVar26 + fStack_b0;
        auVar5._12_4_ = 0;
        *(undefined1 (*) [16])(pfVar9 + 4) = auVar5;
        pfVar9 = pfVar9 + 0xc;
      } while (pfVar9 != pfVar8);
    }
    return CONCAT71((int7)((ulonglong)pfVar8 >> 8),1);
  }
  return in_RAX & 0xffffffff00000000;
}



// FUNCTION 141faf080 SetBoneContainer body=70 status=ok
// SIG undefined SetBoneContainer(void)

void FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  *(longlong *)(param_1 + 0x10) = param_2;
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < iVar1) {
    FUN_140848c80(param_1,iVar1);
    iVar2 = *(int *)(param_1 + 8);
  }
  *(int *)(param_1 + 8) = iVar2 + iVar1;
  if (*(int *)(param_1 + 0xc) < iVar2 + iVar1) {
    TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(param_1);
  }
  return;
}



// FUNCTION 141faf0d0 SetNum body=169 status=ok
// SIG undefined SetNum(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TArray<FTransform,FDefaultAllocator>::SetNum
               (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  iVar1 = (int)param_1[1];
  iVar7 = (int)param_2;
  if (iVar1 < iVar7) {
    iVar8 = iVar7 - iVar1;
    *(int *)(param_1 + 1) = iVar7;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
      ResizeGrow(param_1,iVar1);
    }
    uVar6 = uRam0000000146acae0c;
    uVar5 = uRam0000000146acae08;
    uVar4 = uRam0000000146acae04;
    uVar3 = _DAT_146acae00;
    puVar2 = (undefined4 *)((longlong)iVar1 * 0x30 + *param_1);
    uVar9 = uRam0000000146acadfc;
    for (; uRam0000000146acadfc = uVar9, iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = uVar9;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      uVar9 = uRam0000000146acadf4 & uVar4;
      uVar10 = uRam0000000146acadf8 & uVar5;
      uVar11 = uRam0000000146acadfc & uVar6;
      puVar2[8] = _DAT_146acadf0 & uVar3;
      puVar2[9] = uVar9;
      puVar2[10] = uVar10;
      puVar2[0xb] = uVar11;
      puVar2 = puVar2 + 0xc;
      uVar9 = uRam0000000146acadfc;
    }
  }
  else if (iVar7 < iVar1) {
    TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TAlignedHeapAllocator<0>_>::
    RemoveAtImpl(param_1,param_2,iVar1 - iVar7,param_3);
    return;
  }
  return;
}



// FUNCTION 141faf180 FUN_141faf180 body=173 status=ok
// SIG undefined FUN_141faf180(void)

undefined8 FUN_141faf180(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x718);
  lVar5 = FUN_1423ac7e0();
  if ((lVar5 != 0) && (iVar4 = FUN_14062c730(param_1), iVar4 == 0)) {
    lVar2 = *(longlong *)(lVar5 + 0x10);
    if (*(longlong *)(param_1 + 0xa40) != 0) {
      lVar6 = FUN_1428eccf0();
      lVar7 = *(longlong *)(param_1 + 0xa40);
      for (lVar3 = lVar7; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar6) goto LAB_141faf1f0;
      }
    }
    lVar7 = 0;
LAB_141faf1f0:
    if (((lVar2 == lVar7) && (*(longlong *)(lVar5 + 0x28) != 0)) &&
       (*(longlong *)(lVar1 + 0x48) == *(longlong *)(lVar5 + 0x28))) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141faf230 FUN_141faf230 body=649 status=ok
// SIG undefined FUN_141faf230(void)

void FUN_141faf230(int *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_res18;
  float *local_98;
  int local_90;
  undefined4 local_8c;
  
  if (*param_1 == *(int *)(param_3 + 8)) {
    local_90 = (int)param_2[1];
    lVar3 = (longlong)local_90;
    uVar8 = 0;
    local_98 = (float *)0x0;
    local_8c = 0;
    if (0 < local_90) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_98);
    }
    pfVar4 = local_98;
    _guard_xfg_dispatch_icall_nop(local_98,0,lVar3 << 2);
    iVar2 = (int)param_2[1];
    fVar14 = 0.0;
    fVar13 = 1.0;
    pfVar5 = pfVar4;
    uVar7 = uVar8;
    uVar9 = uVar8;
    if (0 < iVar2) {
      do {
        lVar3 = uVar9 + *param_2;
        fVar10 = (float)FRBFSolver::FindDistanceBetweenEntries(lVar3,param_3,param_1);
        cVar1 = (char)param_1[2];
        fVar12 = 0.0;
        fVar11 = *(float *)(lVar3 + 0x10) * (float)param_1[1];
        if (fVar11 <= 0.0001) {
          fVar11 = 0.0001;
        }
        fVar10 = fVar10 / fVar11;
        if (cVar1 == '\0') {
          fVar12 = _guard_xfg_dispatch_icall_nop(-(fVar10 * fVar10));
        }
        else if (cVar1 == '\x01') {
          fVar12 = _guard_xfg_dispatch_icall_nop(fVar10);
          fVar12 = 1.0 / fVar12;
        }
        else {
          if (cVar1 != '\x02') {
            fVar11 = fVar10;
            if (cVar1 != '\x03') {
              if (cVar1 != '\x04') goto LAB_141faf3ac;
              fVar11 = fVar10 * fVar10 * fVar10;
            }
            fVar10 = fVar11 * fVar10 * fVar10;
          }
          fVar12 = 1.0 - fVar10;
          if (fVar12 <= 0.0) {
            fVar12 = 0.0;
          }
        }
LAB_141faf3ac:
        if (*(char *)(lVar3 + 0x14) != '\0') {
          fVar12 = (float)FRichCurve::Eval(lVar3 + 0x18,fVar12,fVar12);
        }
        *pfVar4 = fVar12;
        fVar14 = fVar14 + fVar12;
        iVar2 = (int)param_2[1];
        pfVar4 = pfVar4 + 1;
        uVar6 = (int)uVar7 + 1;
        pfVar5 = local_98;
        uVar7 = (ulonglong)uVar6;
        uVar9 = uVar9 + 0x88;
      } while ((int)uVar6 < iVar2);
    }
    if (0.0001 < fVar14) {
      if (1.0 < fVar14) {
        fVar13 = 1.0 / fVar14;
      }
      pfVar4 = pfVar5;
      if (0 < iVar2) {
        do {
          fVar14 = fVar13 * *pfVar4;
          if ((float)param_1[3] <= fVar14 && fVar14 != (float)param_1[3]) {
            iVar2 = (int)param_4[1];
            local_res18 = CONCAT44(fVar14,(int)uVar8);
            *(int *)(param_4 + 1) = iVar2 + 1;
            if (*(int *)((longlong)param_4 + 0xc) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_4,iVar2);
            }
            *(undefined8 *)(*param_4 + (longlong)iVar2 * 8) = local_res18;
          }
          uVar6 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar6;
          pfVar4 = pfVar4 + 1;
        } while ((int)uVar6 < (int)param_2[1]);
      }
    }
    if (pfVar5 != (float *)0x0) {
      FMemory::Free(pfVar5);
    }
  }
  return;
}



// FUNCTION 141faf4c0 FUN_141faf4c0 body=2393 status=ok
// SIG undefined FUN_141faf4c0(void)

void FUN_141faf4c0(longlong *param_1,float *param_2,float param_3,int param_4)

{
  void *pvVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  DWORD DVar6;
  float *pfVar7;
  longlong lVar8;
  void *pvVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_res8;
  float local_1b8;
  float fStack_1b4;
  float local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  float local_194 [2];
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  void *local_178;
  int local_170;
  undefined4 local_16c;
  longlong local_168;
  longlong lStack_160;
  undefined1 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 local_14c;
  longlong local_148;
  longlong local_140;
  undefined4 local_138;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118;
  longlong lStack_110;
  undefined1 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  
  lVar8 = DAT_146acafe0;
  if (param_3 <= 0.0001) {
    param_3 = 0.0001;
  }
  lVar11 = (longlong)(int)param_1[1] * 0x40;
  local_1a8 = *(undefined8 *)(lVar11 + -0x40 + *param_1);
  local_1a0 = *(float *)(lVar11 + -0x38 + *param_1);
  cVar5 = FUN_1415ad720();
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar11 = 4;
  }
  else {
    lVar11 = 0;
  }
  local_res8 = *(float *)(lVar11 + lVar8);
  if (0.0 <= local_res8) {
    if (1.0 <= local_res8) {
      local_res8 = 1.0;
    }
  }
  else {
    local_res8 = 0.0;
  }
  pfVar7 = (float *)*param_1;
  fVar14 = *param_2;
  fVar16 = param_2[1];
  fVar18 = param_2[2];
  fVar26 = SQRT((fVar16 - pfVar7[1]) * (fVar16 - pfVar7[1]) +
                (fVar14 - *pfVar7) * (fVar14 - *pfVar7) +
                (fVar18 - pfVar7[2]) * (fVar18 - pfVar7[2]));
  if (param_3 < fVar26) {
    iVar13 = 1;
    if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
      FindPlaneNormal(&local_1b8,param_1,&local_1a8,param_2);
      iVar10 = 1;
      if (1 < (int)param_1[5] + -1) {
        lVar8 = 0x40;
        do {
          lVar11 = *param_1;
          fVar22 = *(float *)(lVar8 + -0x3c + lVar11) - *(float *)(lVar8 + 4 + lVar11);
          fVar23 = *(float *)(lVar8 + -0x38 + lVar11) - *(float *)(lVar8 + 8 + lVar11);
          fVar20 = *(float *)(lVar8 + -0x40 + lVar11) - *(float *)(lVar8 + lVar11);
          fVar17 = fVar22 * fVar22 + fVar20 * fVar20 + fVar23 * fVar23;
          fVar14 = fVar20;
          fVar16 = fVar22;
          fVar18 = fVar23;
          if ((fVar17 != 1.0) &&
             (fVar14 = DAT_1468b5d90, fVar16 = DAT_1468b5d94, fVar18 = DAT_1468b5d98,
             1e-08 <= fVar17)) {
            auVar19 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
            fVar18 = auVar19._0_4_;
            fVar18 = fVar18 + fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18);
            fVar18 = fVar18 + fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18);
            fVar14 = fVar18 * fVar20;
            fVar16 = fVar18 * fVar22;
            fVar18 = fVar18 * fVar23;
          }
          fVar21 = *(float *)(lVar8 + 0x44 + lVar11) - *(float *)(lVar8 + 4 + lVar11);
          fVar24 = *(float *)(lVar8 + 0x40 + lVar11) - *(float *)(lVar8 + lVar11);
          fVar25 = *(float *)(lVar8 + 0x48 + lVar11) - *(float *)(lVar8 + 8 + lVar11);
          fVar23 = fVar21 * fVar21 + fVar24 * fVar24 + fVar25 * fVar25;
          fVar17 = fVar21;
          fVar20 = fVar24;
          fVar22 = fVar25;
          if ((fVar23 != 1.0) &&
             (fVar17 = DAT_1468b5d94, fVar20 = DAT_1468b5d90, fVar22 = DAT_1468b5d98,
             1e-08 <= fVar23)) {
            auVar19 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
            fVar22 = auVar19._0_4_;
            fVar22 = fVar22 + fVar22 * (0.5 - fVar23 * 0.5 * fVar22 * fVar22);
            fVar22 = fVar22 + fVar22 * (0.5 - fVar23 * 0.5 * fVar22 * fVar22);
            fVar17 = fVar22 * fVar21;
            fVar20 = fVar22 * fVar24;
            fVar22 = fVar22 * fVar25;
          }
          if (fVar17 * (fVar14 * local_1b0 - fVar18 * local_1b8) +
              fVar20 * (fVar18 * fStack_1b4 - fVar16 * local_1b0) +
              fVar22 * (fVar16 * local_1b8 - fVar14 * fStack_1b4) <= 0.0) {
            pfVar7 = &local_188;
            local_188 = -local_1b8;
            local_184 = -fStack_1b4;
            local_180 = -local_1b0;
          }
          else {
            pfVar7 = local_194;
            local_18c = local_1b0;
          }
          iVar10 = iVar10 + 1;
          fVar14 = pfVar7[2];
          *(undefined8 *)(lVar8 + 0x10 + lVar11) = *(undefined8 *)pfVar7;
          *(float *)(lVar8 + 0x18 + lVar11) = fVar14;
          lVar8 = lVar8 + 0x40;
        } while (iVar10 < (int)param_1[5] + -1);
        fVar14 = *param_2;
        fVar16 = param_2[1];
        fVar18 = param_2[2];
        pfVar7 = (float *)*param_1;
      }
    }
    fVar4 = local_1a0;
    fVar17 = pfVar7[1];
    fVar20 = pfVar7[2];
    lVar8 = (longlong)(int)param_1[1];
    fVar15 = 1.0 - local_res8;
    fVar3 = local_1a8._4_4_;
    iVar10 = 0;
    fVar25 = (float)local_1a8;
    fVar22 = *pfVar7;
    fVar23 = pfVar7[lVar8 * 0x10 + -0xf];
    fVar21 = pfVar7[lVar8 * 0x10 + -0x10];
    fVar24 = pfVar7[lVar8 * 0x10 + -0xe];
    if (0 < (int)param_1[5]) {
      lVar8 = 0;
      do {
        lVar11 = *param_1;
        iVar10 = iVar10 + 1;
        *(float *)(lVar8 + lVar11) =
             ((float)local_1a8 - fVar21) * fVar15 + (fVar14 - fVar22) * local_res8 +
             *(float *)(lVar8 + lVar11);
        *(float *)(lVar8 + 4 + lVar11) =
             (fVar16 - fVar17) * local_res8 + (local_1a8._4_4_ - fVar23) * fVar15 +
             *(float *)(lVar8 + 4 + lVar11);
        *(float *)(lVar8 + 8 + lVar11) =
             (fVar18 - fVar20) * local_res8 + (local_1a0 - fVar24) * fVar15 +
             *(float *)(lVar8 + 8 + lVar11);
        lVar8 = lVar8 + 0x40;
      } while (iVar10 < (int)param_1[5]);
    }
    iVar10 = 1;
    if (0 < param_4) {
      iVar10 = param_4;
    }
    do {
      lVar8 = DAT_146acb010;
      if ((int)param_1[5] < 4) {
LAB_141fafc7e:
        FUN_141f9a670(param_2,param_1);
        FUN_141f9a230(&local_1a8,param_1);
      }
      else {
        cVar5 = FUN_1415ad720(&DAT_1468e2448);
        if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
           (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
          lVar11 = 4;
        }
        else {
          lVar11 = 0;
        }
        if ((*(int *)(lVar11 + lVar8) != 1) || (fVar26 <= 1.0)) goto LAB_141fafc7e;
        local_120 = (int)param_1[1];
        lVar8 = (longlong)local_120;
        pvVar9 = (void *)0x0;
        pvVar1 = (void *)*param_1;
        local_128 = (void *)0x0;
        if (local_120 == 0) {
          local_11c = 0;
        }
        else {
          TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(&local_128,local_120,0);
          pvVar9 = local_128;
          _guard_xfg_dispatch_icall_nop(local_128,pvVar1,lVar8 << 6);
        }
        local_108 = (undefined1)param_1[4];
        local_118 = param_1[2];
        lStack_110 = param_1[3];
        local_100 = (undefined4)param_1[5];
        local_fc = *(undefined1 *)((longlong)param_1 + 0x2c);
        local_104 = *(undefined4 *)((longlong)param_1 + 0x24);
        local_f8 = param_1[6];
        local_f0 = param_1[7];
        local_e8 = (undefined4)param_1[8];
        FUN_141f9a670(param_2,&local_128);
        local_170 = (int)param_1[1];
        lVar8 = (longlong)local_170;
        pvVar1 = (void *)*param_1;
        local_178 = (void *)0x0;
        if (local_170 == 0) {
          local_16c = 0;
        }
        else {
          TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(&local_178,local_170,0);
          _guard_xfg_dispatch_icall_nop(local_178,pvVar1,lVar8 << 6);
        }
        local_158 = (undefined1)param_1[4];
        local_168 = param_1[2];
        lStack_160 = param_1[3];
        local_150 = (undefined4)param_1[5];
        local_14c = *(undefined1 *)((longlong)param_1 + 0x2c);
        local_154 = *(undefined4 *)((longlong)param_1 + 0x24);
        local_148 = param_1[6];
        local_140 = param_1[7];
        local_138 = (undefined4)param_1[8];
        FUN_141f9a230(&local_1a8,&local_178);
        iVar12 = 0;
        if (0 < (int)param_1[5]) {
          lVar8 = (longlong)pvVar9 - (longlong)local_178;
          pfVar7 = (float *)((longlong)local_178 + 4);
          do {
            iVar12 = iVar12 + 1;
            lVar11 = *param_1;
            local_18c = (*(float *)(lVar8 + 4 + (longlong)pfVar7) + pfVar7[1]) * 0.5;
            *(ulonglong *)((longlong)pfVar7 + lVar11 + -(longlong)local_178 + -4) =
                 CONCAT44((*(float *)(lVar8 + (longlong)pfVar7) + *pfVar7) * 0.5,
                          (*(float *)(lVar8 + -4 + (longlong)pfVar7) + pfVar7[-1]) * 0.5);
            *(float *)((longlong)pfVar7 + lVar11 + -(longlong)local_178 + 4) = local_18c;
            pfVar7 = pfVar7 + 0x10;
          } while (iVar12 < (int)param_1[5]);
        }
        if (local_178 != (void *)0x0) {
          FMemory::Free();
        }
        if (pvVar9 != (void *)0x0) {
          FMemory::Free(pvVar9);
        }
      }
      pfVar7 = (float *)*param_1;
      lVar8 = (longlong)(int)param_1[1];
      fVar16 = fVar25 - pfVar7[lVar8 * 0x10 + -0x10];
      fVar18 = fVar3 - pfVar7[lVar8 * 0x10 + -0xf];
      fVar14 = fVar4 - pfVar7[lVar8 * 0x10 + -0xe];
      fVar14 = SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar14 * fVar14) +
               SQRT((param_2[1] - pfVar7[1]) * (param_2[1] - pfVar7[1]) +
                    (*param_2 - *pfVar7) * (*param_2 - *pfVar7) +
                    (param_2[2] - pfVar7[2]) * (param_2[2] - pfVar7[2]));
    } while (((fVar14 <= fVar26) && (param_3 < fVar14)) &&
            (iVar13 = iVar13 + 1, fVar26 = fVar14, iVar13 < iVar10));
    if (((0.0001 < ABS(pfVar7[lVar8 * 0x10 + -0x10] - fVar25)) ||
        (0.0001 < ABS(pfVar7[lVar8 * 0x10 + -0xf] - fVar3))) ||
       (0.0001 < ABS(pfVar7[lVar8 * 0x10 + -0xe] - fVar4))) {
      FUN_141f9a230(&local_1a8,param_1);
    }
    if (fVar14 <= param_3) {
      puVar2 = (undefined8 *)*param_1;
      *puVar2 = *(undefined8 *)param_2;
      *(float *)(puVar2 + 1) = param_2[2];
    }
  }
  return;
}



// FUNCTION 141fafe20 FUN_141fafe20 body=2150 status=ok
// SIG undefined FUN_141fafe20(void)

void FUN_141fafe20(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_f8;
  float local_f0;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  
  pfVar2 = (float *)*param_1;
  *(undefined8 *)pfVar2 = *param_2;
  pfVar2[2] = *(float *)(param_2 + 1);
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    fVar7 = *pfVar2 - pfVar2[0x20];
    fVar9 = pfVar2[1] - pfVar2[0x21];
    fVar11 = pfVar2[2] - pfVar2[0x22];
    fVar5 = fVar9 * fVar9 + fVar7 * fVar7 + fVar11 * fVar11;
    if (1e-08 < ABS(fVar5)) {
      fVar4 = *(float *)(*param_1 + 0xc);
      fVar14 = *(float *)(*param_1 + 0x4c);
      fVar15 = fVar14 * fVar14 + fVar4 * fVar4;
      fVar14 = (fVar4 + fVar4) * fVar14;
      fVar4 = fVar15 - fVar14 * *(float *)(param_1 + 3);
      if ((fVar5 < fVar4) ||
         (fVar4 = fVar15 - fVar14 * *(float *)((longlong)param_1 + 0x1c), fVar4 < fVar5)) {
        fVar4 = SQRT(fVar4);
        fVar5 = 1.0 / SQRT(fVar5);
        local_e0 = fVar11 * fVar5 * fVar4 + pfVar2[0x22];
        *(ulonglong *)pfVar2 =
             CONCAT44(fVar9 * fVar5 * fVar4 + pfVar2[0x21],fVar7 * fVar5 * fVar4 + pfVar2[0x20]);
        pfVar2[2] = local_e0;
      }
    }
  }
  fVar4 = *pfVar2 - pfVar2[0x20];
  fVar14 = pfVar2[1] - pfVar2[0x21];
  fVar15 = pfVar2[2] - pfVar2[0x22];
  lVar3 = *param_1;
  fVar5 = *(float *)(lVar3 + 0x4c);
  fVar11 = fVar14 * fVar14 + fVar4 * fVar4 + fVar15 * fVar15;
  fVar9 = SQRT(fVar11);
  fVar7 = (fVar5 + fVar5) * fVar9;
  if (ABS(fVar7) <= 1e-08) {
    fVar7 = 0.0;
  }
  else {
    fVar6 = -1.0;
    fVar7 = ((fVar5 * fVar5 + fVar11) - *(float *)(lVar3 + 0xc) * *(float *)(lVar3 + 0xc)) / fVar7;
    if (fVar7 < -1.0) goto LAB_141fb0067;
  }
  fVar6 = fVar7;
  if (1.0 <= fVar7) {
    fVar6 = 1.0;
  }
LAB_141fb0067:
  fVar11 = _guard_xfg_dispatch_icall_nop(fVar6);
  if (fVar9 <= 1e-08) {
    local_e8 = DAT_1468b5d90;
    fStack_e4 = DAT_1468b5d94;
    local_e0 = DAT_1468b5d98;
  }
  else {
    fVar9 = 1.0 / fVar9;
    local_e8 = fVar4 * fVar9;
    fStack_e4 = fVar14 * fVar9;
    local_e0 = fVar15 * fVar9;
  }
  fVar9 = fStack_e4;
  fVar8 = pfVar2[0x11] - pfVar2[0x21];
  fVar15 = pfVar2[0x10] - pfVar2[0x20];
  fVar10 = pfVar2[0x12] - pfVar2[0x22];
  fVar6 = fStack_e4 * fVar8 + local_e8 * fVar15 + local_e0 * fVar10;
  fVar14 = pfVar2[0x10] - (local_e8 * fVar6 + pfVar2[0x20]);
  fVar4 = pfVar2[0x11] - (fStack_e4 * fVar6 + pfVar2[0x21]);
  local_f0 = pfVar2[0x12] - (local_e0 * fVar6 + pfVar2[0x22]);
  fVar6 = fVar4 * fVar4 + fVar14 * fVar14 + local_f0 * local_f0;
  if (fVar6 != 1.0) {
    if (fVar6 < 0.0001) {
      local_f0 = DAT_1468b5d98;
      fVar4 = DAT_1468b5d94;
      fVar14 = DAT_1468b5d90;
    }
    else {
      auVar13 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar12 = auVar13._0_4_;
      fVar12 = fVar12 + fVar12 * (0.5 - fVar6 * 0.5 * fVar12 * fVar12);
      fVar12 = fVar12 + fVar12 * (0.5 - fVar6 * 0.5 * fVar12 * fVar12);
      local_f0 = fVar12 * local_f0;
      fVar14 = fVar12 * fVar14;
      fVar4 = fVar12 * fVar4;
    }
  }
  fVar6 = *(float *)(param_1 + 7);
  fVar12 = local_e0;
  fVar17 = local_f0;
  if ((((fVar6 != DAT_1468b5d90) || (DAT_1468b5d94 != *(float *)((longlong)param_1 + 0x3c))) ||
      (DAT_1468b5d98 != *(float *)(param_1 + 8))) &&
     ((((local_e8 != DAT_1468b5d90 || (fStack_e4 != DAT_1468b5d94)) || (local_e0 != DAT_1468b5d98))
      && (1e-08 < ABS(fVar5))))) {
    puVar1 = (undefined8 *)(lVar3 + 0x68);
    fVar16 = 1.0 / fVar5;
    if ((((fVar14 == DAT_1468b5d90) && (fVar4 == DAT_1468b5d94)) && (local_f0 == DAT_1468b5d98)) ||
       (0.99 <= fVar16 * fVar15 * local_e8 + fVar8 * fVar16 * fStack_e4 + fVar10 * fVar16 * local_e0
       )) {
      if (((DAT_1468b5d90 == *(float *)(lVar3 + 0x5c)) &&
          (DAT_1468b5d94 == *(float *)(lVar3 + 0x60))) && (DAT_1468b5d98 == *(float *)(lVar3 + 100))
         ) {
        fVar14 = *(float *)(param_1 + 8) * fStack_e4 -
                 *(float *)((longlong)param_1 + 0x3c) * local_e0;
        fVar4 = fVar6 * local_e0 - *(float *)(param_1 + 8) * local_e8;
        fVar17 = *(float *)((longlong)param_1 + 0x3c) * local_e8 - fVar6 * fStack_e4;
        *(ulonglong *)(lVar3 + 0x5c) = CONCAT44(fVar4,fVar14);
        *(float *)(lVar3 + 100) = fVar17;
        fVar15 = *(float *)(param_1 + 7) * fStack_e4 -
                 *(float *)((longlong)param_1 + 0x3c) * local_e8;
        *puVar1 = CONCAT44(*(float *)(param_1 + 8) * local_e8 - *(float *)(param_1 + 7) * local_e0,
                           *(float *)((longlong)param_1 + 0x3c) * local_e0 -
                           *(float *)(param_1 + 8) * fStack_e4);
        *(float *)(lVar3 + 0x70) = fVar15;
        local_f0 = fVar17;
        local_e0 = fVar15;
      }
      else {
        local_f0 = fVar6 * fStack_e4 - *(float *)((longlong)param_1 + 0x3c) * local_e8;
        local_f8 = CONCAT44(*(float *)(param_1 + 8) * local_e8 - fVar6 * local_e0,
                            *(float *)((longlong)param_1 + 0x3c) * local_e0 -
                            *(float *)(param_1 + 8) * fStack_e4);
        FQuat::FindBetweenNormals(&local_d8,puVar1,&local_f8);
        local_f8 = *(undefined8 *)(lVar3 + 0x5c);
        fVar4 = (float)((ulonglong)local_f8 >> 0x20);
        local_f0 = *(float *)(lVar3 + 100);
        fVar8 = local_f0 * local_d4 - fVar4 * local_d0;
        fVar6 = (float)local_f8 * local_d0 - local_f0 * local_d8;
        fVar8 = fVar8 + fVar8;
        fVar15 = fVar4 * local_d8 - (float)local_f8 * local_d4;
        fVar6 = fVar6 + fVar6;
        fVar15 = fVar15 + fVar15;
        fVar14 = (local_d4 * fVar15 - local_d0 * fVar6) + (float)local_f8 + local_cc * fVar8;
        fVar17 = (local_d8 * fVar6 - local_d4 * fVar8) + local_f0 + local_cc * fVar15;
        fVar4 = (local_d0 * fVar8 - local_d8 * fVar15) + fVar4 + local_cc * fVar6;
        fVar12 = local_e0;
      }
    }
    else {
      *(ulonglong *)(lVar3 + 0x5c) = CONCAT44(fVar4,fVar14);
      *(float *)(lVar3 + 100) = local_f0;
      fVar15 = fStack_e4 * *(float *)(param_1 + 7) - local_e8 * *(float *)((longlong)param_1 + 0x3c)
      ;
      *puVar1 = CONCAT44(local_e8 * *(float *)(param_1 + 8) - local_e0 * *(float *)(param_1 + 7),
                         local_e0 * *(float *)((longlong)param_1 + 0x3c) -
                         fStack_e4 * *(float *)(param_1 + 8));
      *(float *)(lVar3 + 0x70) = fVar15;
      local_e0 = fVar15;
    }
  }
  fVar15 = local_e8;
  fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
  *(ulonglong *)(pfVar2 + 0x10) =
       CONCAT44((fVar11 * fVar4 + fVar9 * fVar7) * fVar5 + pfVar2[0x21],
                (fVar11 * fVar14 + fVar15 * fVar7) * fVar5 + pfVar2[0x20]);
  pfVar2[0x12] = (fVar11 * fVar17 + fVar12 * fVar7) * fVar5 + pfVar2[0x22];
  return;
}



// FUNCTION 141fb0690 FUN_141fb0690 body=539 status=ok
// SIG undefined FUN_141fb0690(void)

void FUN_141fb0690(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  
  FAlphaBlend::Reset(*(longlong *)(param_1 + 0x38) + 0x20 +
                     (longlong)*(int *)(param_1 + 0x5c) * 0x78);
  cVar2 = *(char *)(param_1 + 0xf0);
  *(bool *)(param_1 + 0xf0) = cVar2 == '\0';
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
  if ((cVar2 == '\0') || (iVar4 = *(int *)(param_1 + 0xec), iVar4 == -1)) {
    iVar4 = FUN_141fa5340(param_1);
  }
  *(int *)(param_1 + 0x5c) = iVar4;
  uVar9 = *(int *)(param_1 + 0x70) + 1U & 0x80000001;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
  }
  lVar3 = *(longlong *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x70) = uVar9;
  uVar10 = uVar9 + 1 & 0x80000001;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
  }
  *(undefined4 *)(lVar3 + (longlong)(int)uVar9 * 0x28 + 0xc) = 0x3f800000;
  puVar1 = (undefined8 *)(lVar3 + (longlong)(int)uVar10 * 0x28);
  iVar11 = 0;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  FUN_141fb55c0(param_1,(longlong)*(int *)(param_1 + 0x58) * 0x78 + *(longlong *)(param_1 + 0x38));
  FUN_141fb55c0(param_1,(longlong)*(int *)(param_1 + 0x5c) * 0x78 + *(longlong *)(param_1 + 0x38),
                puVar1);
  lVar3 = *(longlong *)(param_1 + 0x38);
  lVar12 = (longlong)*(int *)(param_1 + 0x5c) * 0x78;
  iVar8 = *(int *)(lVar12 + 0x10 + lVar3);
  iVar4 = *(int *)(lVar12 + 0xc + lVar3);
  iVar6 = (iVar8 - iVar4) + 1;
  iVar7 = iVar11;
  if (0 < iVar6) {
    uVar9 = *(int *)(param_1 + 0x8c) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_1 + 0x8c) = uVar9;
    fVar5 = (float)(uVar9 & 0x7fffff | 0x3f800000);
    iVar8 = *(int *)(lVar12 + 0x10 + lVar3);
    iVar7 = (int)((fVar5 - (float)(int)fVar5) * ((float)iVar6 - 1e-05));
  }
  iVar7 = iVar7 + iVar4;
  iVar4 = iVar11;
  if ((-1 < iVar7) && (iVar4 = iVar8, iVar7 < iVar8)) {
    iVar4 = iVar7;
  }
  *(int *)(puVar1 + 2) = iVar4;
  *(undefined4 *)((longlong)puVar1 + 0x14) = 0xfffffffe;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xfffffffe;
  if (*(char *)((longlong)*(int *)(param_1 + 0x5c) * 0x78 + 0x74 + *(longlong *)(param_1 + 0x38)) !=
      '\0') {
    iVar8 = ((int)*(float *)(param_1 + 0xe4) - (int)*(float *)(param_1 + 0xe0)) + 1;
    iVar4 = iVar11;
    if (0 < iVar8) {
      uVar9 = *(int *)(param_1 + 0x8c) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_1 + 0x8c) = uVar9;
      fVar5 = (float)(uVar9 & 0x7fffff | 0x3f800000);
      iVar4 = (int)((fVar5 - (float)(int)fVar5) * ((float)iVar8 - 1e-05));
    }
    iVar4 = iVar4 + (int)*(float *)(param_1 + 0xe0);
    if ((-1 < iVar4) && (iVar11 = 0x7fffffff, iVar4 < 0x7fffffff)) {
      iVar11 = iVar4;
    }
    *(float *)((longlong)puVar1 + 0x24) = (float)iVar11;
  }
  return;
}



// FUNCTION 141fb08b0 FUN_141fb08b0 body=372 status=ok
// SIG undefined FUN_141fb08b0(void)

void FUN_141fb08b0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x2b4);
  lVar3 = *(longlong *)(param_1 + 0x2a8);
  iVar2 = *(int *)(param_1 + 0x2b0);
  if (iVar1 < 0) {
    if (iVar2 != 0) {
      lVar3 = lVar3 + 0x1a8;
      do {
        TArray<FAnimPhysShape,FDefaultAllocator>::~TArray<FAnimPhysShape,FDefaultAllocator>(lVar3);
        lVar3 = lVar3 + 0x1f0;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar1 = *(int *)(param_1 + 0x2b4);
    }
    *(undefined4 *)(param_1 + 0x2b0) = 0;
    if (iVar1 != 0) {
      FUN_141fae990((longlong *)(param_1 + 0x2a8),0);
    }
  }
  else {
    if (iVar2 != 0) {
      lVar3 = lVar3 + 0x1a8;
      do {
        TArray<FAnimPhysShape,FDefaultAllocator>::~TArray<FAnimPhysShape,FDefaultAllocator>(lVar3);
        lVar3 = lVar3 + 0x1f0;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 0x2b0) = 0;
  }
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  if ((*(int *)(param_1 + 0x2e4) < 0) && (*(int *)(param_1 + 0x2e4) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x2d8,0);
  }
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  if ((*(int *)(param_1 + 0x2f4) < 0) && (*(int *)(param_1 + 0x2f4) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x2e8,0);
  }
  *(undefined4 *)(param_1 + 0x300) = 0;
  if ((*(int *)(param_1 + 0x304) < 0) && (*(int *)(param_1 + 0x304) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x2f8,0);
  }
  *(undefined4 *)(param_1 + 0x330) = 0;
  if ((*(int *)(param_1 + 0x334) < 0) && (*(int *)(param_1 + 0x334) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x328,0);
  }
  *(undefined4 *)(param_1 + 800) = 0;
  if ((*(int *)(param_1 + 0x324) < 0) && (*(int *)(param_1 + 0x324) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x318,0);
  }
  *(undefined4 *)(param_1 + 0x310) = 0;
  if ((*(int *)(param_1 + 0x314) < 0) && (*(int *)(param_1 + 0x314) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x308,0);
  }
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  if ((*(int *)(param_1 + 0x2c4) < 0) && (*(int *)(param_1 + 0x2c4) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x2b8,0);
  }
  return;
}



// FUNCTION 141fb0a30 FUN_141fb0a30 body=1232 status=ok
// SIG undefined FUN_141fb0a30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141fb0a30(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
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
  longlong local_res10;
  longlong local_res18;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_94;
  ulonglong uVar20;
  
  plVar1 = (longlong *)(param_1 + 0x1d8);
  uVar17 = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if (*(int *)(param_1 + 0x1e4) != 0) {
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  plVar2 = (longlong *)(param_1 + 0x1f0);
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (*(int *)(param_1 + 0x1fc) != 0) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(plVar2,0);
  }
  plVar3 = (longlong *)(param_1 + 0x208);
  *(undefined4 *)(param_1 + 0x210) = 0;
  if (*(int *)(param_1 + 0x214) != 0) {
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(plVar3,0);
  }
  if (0 < *(int *)(param_1 + 0x250)) {
    local_res10 = 0;
    local_res18 = 0;
    uVar18 = uVar17;
    uVar20 = uVar17;
    do {
      fVar27 = (float)(_DAT_146acadf0 & _DAT_146acae00);
      fVar28 = (float)(uRam0000000146acadf4 & uRam0000000146acae04);
      fVar29 = (float)(uRam0000000146acadf8 & uRam0000000146acae08);
      fVar30 = 0.0;
      fVar32 = 0.0;
      fVar21 = 0.0;
      fVar23 = 0.0;
      fVar22 = 0.0;
      fVar24 = 0.0;
      fVar35 = fRam0000000146acadfc;
      if ((-1 < local_res10) && (fVar24 = 0.0, (int)uVar20 < *(int *)(param_1 + 0x180))) {
        lVar10 = *(longlong *)(param_1 + 0x178);
        pfVar4 = (float *)(local_res18 + lVar10);
        fVar30 = *pfVar4;
        fVar32 = pfVar4[1];
        fVar24 = pfVar4[2];
        fVar35 = pfVar4[3];
        pfVar4 = (float *)(local_res18 + 0x10 + lVar10);
        fVar21 = *pfVar4;
        fVar23 = pfVar4[1];
        fVar22 = pfVar4[2];
        pfVar4 = (float *)(local_res18 + 0x20 + lVar10);
        fVar27 = *pfVar4;
        fVar28 = pfVar4[1];
        fVar29 = pfVar4[2];
      }
      lVar10 = *(longlong *)(param_1 + 0x248);
      iVar9 = *(int *)(param_1 + 0x1e0);
      fVar5 = *(float *)(lVar10 + 8 + uVar17);
      fVar6 = *(float *)(lVar10 + 4 + uVar17);
      fVar22 = fVar22 + *(float *)(lVar10 + 0xc + uVar17);
      auVar8 = *(undefined1 (*) [16])(uVar18 + 0x10 + *(longlong *)(param_1 + 0x260));
      fVar12 = auVar8._0_4_;
      fVar13 = auVar8._4_4_;
      fVar14 = auVar8._8_4_;
      fVar15 = auVar8._12_4_;
      lVar11 = *(longlong *)(param_1 + 0x278);
      fVar7 = *(float *)(uVar17 + 4 + lVar11);
      fVar37 = fVar30 * fVar15 * _DAT_146acae30;
      fVar38 = fVar30 * fVar14 * fRam0000000146acae34;
      fVar39 = fVar30 * fVar13 * fRam0000000146acae38;
      fVar40 = fVar30 * fVar12 * fRam0000000146acae3c;
      fVar30 = *(float *)(uVar17 + 8 + lVar11);
      fVar31 = fVar24 * fVar13 * _DAT_146acae10;
      fVar33 = fVar24 * fVar12 * fRam0000000146acae14;
      fVar34 = fVar24 * fVar15 * fRam0000000146acae18;
      fVar36 = fVar24 * fVar14 * fRam0000000146acae1c;
      fVar29 = fVar29 * *(float *)(uVar17 + 0xc + lVar11);
      *(int *)(param_1 + 0x1e0) = iVar9 + 1;
      fVar24 = fVar32 * fVar14 * _DAT_146acae20;
      fVar25 = fVar32 * fVar15 * fRam0000000146acae24;
      fVar26 = fVar32 * fVar12 * fRam0000000146acae28;
      fVar32 = fVar32 * fVar13 * fRam0000000146acae2c;
      if (*(int *)(param_1 + 0x1e4) < iVar9 + 1) {
        TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(plVar1,iVar9);
      }
      puVar16 = (undefined4 *)((longlong)iVar9 * 0x2c + *plVar1);
      *puVar16 = *(undefined4 *)(lVar10 + uVar17);
      *(undefined8 *)(puVar16 + 1) = *(undefined8 *)(lVar10 + 4 + uVar17);
      puVar16[3] = *(undefined4 *)(lVar10 + 0xc + uVar17);
      *(undefined8 *)(puVar16 + 4) = *(undefined8 *)(lVar10 + 0x10 + uVar17);
      puVar16[6] = *(undefined4 *)(lVar10 + 0x18 + uVar17);
      *(undefined8 *)(puVar16 + 7) = *(undefined8 *)(lVar10 + 0x1c + uVar17);
      puVar16[9] = *(undefined4 *)(lVar10 + 0x24 + uVar17);
      *(undefined1 *)(puVar16 + 10) = *(undefined1 *)(lVar10 + 0x28 + uVar17);
      iVar9 = *(int *)(param_1 + 0x1f8);
      lVar10 = *(longlong *)(param_1 + 0x260);
      *(int *)(param_1 + 0x1f8) = iVar9 + 1;
      if (*(int *)(param_1 + 0x1fc) < iVar9 + 1) {
        TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar2,iVar9);
      }
      puVar16 = (undefined4 *)((longlong)iVar9 * 0x50 + *plVar2);
      *puVar16 = *(undefined4 *)(uVar18 + lVar10);
      puVar16[4] = *(undefined4 *)(uVar18 + 0x10 + lVar10);
      puVar16[5] = *(undefined4 *)(uVar18 + 0x14 + lVar10);
      puVar16[6] = *(undefined4 *)(uVar18 + 0x18 + lVar10);
      puVar16[7] = *(undefined4 *)(uVar18 + 0x1c + lVar10);
      puVar16[8] = *(undefined4 *)(uVar18 + 0x20 + lVar10);
      puVar16[9] = *(undefined4 *)(uVar18 + 0x24 + lVar10);
      puVar16[10] = *(undefined4 *)(uVar18 + 0x28 + lVar10);
      puVar16[0xb] = *(undefined4 *)(uVar18 + 0x2c + lVar10);
      puVar16[0xc] = *(undefined4 *)(uVar18 + 0x30 + lVar10);
      puVar16[0xd] = *(undefined4 *)(uVar18 + 0x34 + lVar10);
      puVar16[0xe] = *(undefined4 *)(uVar18 + 0x38 + lVar10);
      puVar16[0xf] = *(undefined4 *)(uVar18 + 0x3c + lVar10);
      *(undefined1 *)(puVar16 + 0x10) = *(undefined1 *)(uVar18 + 0x40 + lVar10);
      iVar9 = *(int *)(param_1 + 0x210);
      lVar10 = *(longlong *)(param_1 + 0x278);
      *(int *)(param_1 + 0x210) = iVar9 + 1;
      if (*(int *)(param_1 + 0x214) < iVar9 + 1) {
        TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(plVar3,iVar9);
      }
      uVar19 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
      puVar16 = (undefined4 *)((longlong)iVar9 * 0x2c + *plVar3);
      *puVar16 = *(undefined4 *)(uVar17 + lVar10);
      *(undefined8 *)(puVar16 + 1) = *(undefined8 *)(uVar17 + 4 + lVar10);
      puVar16[3] = *(undefined4 *)(uVar17 + 0xc + lVar10);
      *(undefined8 *)(puVar16 + 4) = *(undefined8 *)(uVar17 + 0x10 + lVar10);
      puVar16[6] = *(undefined4 *)(uVar17 + 0x18 + lVar10);
      *(undefined8 *)(puVar16 + 7) = *(undefined8 *)(uVar17 + 0x1c + lVar10);
      puVar16[9] = *(undefined4 *)(uVar17 + 0x24 + lVar10);
      *(undefined1 *)(puVar16 + 10) = *(undefined1 *)(uVar17 + 0x28 + lVar10);
      lVar10 = *plVar1;
      *(ulonglong *)(uVar17 + 4 + lVar10) = CONCAT44(fVar23 + fVar5,fVar21 + fVar6);
      *(float *)(uVar17 + 0xc + lVar10) = fVar22;
      pfVar4 = (float *)(*plVar2 + 0x10 + uVar18);
      *pfVar4 = fVar37 + fVar35 * fVar12 + fVar24 + fVar31;
      pfVar4[1] = fVar38 + fVar35 * fVar13 + fVar25 + fVar33;
      pfVar4[2] = fVar39 + fVar35 * fVar14 + fVar26 + fVar34;
      pfVar4[3] = fVar40 + fVar35 * fVar15 + fVar32 + fVar36;
      lVar10 = *plVar3;
      uVar18 = uVar18 + 0x50;
      *(ulonglong *)(lVar10 + 4 + uVar17) = CONCAT44(fVar28 * fVar30,fVar27 * fVar7);
      *(float *)(lVar10 + 0xc + uVar17) = fVar29;
      uVar17 = uVar17 + 0x2c;
      local_res10 = local_res10 + 1;
      local_res18 = local_res18 + 0x30;
      local_a0 = fVar22;
      local_94 = fVar29;
    } while ((int)uVar19 < *(int *)(param_1 + 0x250));
  }
  local_a8 = 0x3f800000;
  local_a4 = 0x3f800000;
  local_a0 = 1.0;
  FSplineCurves::UpdateSpline(plVar1,0,0,10,0,0,&local_a8);
  FSplinePositionLinearApproximation::Build(plVar1,param_1 + 0x238,0x3f000000);
  return;
}



// FUNCTION 141fb0f00 FUN_141fb0f00 body=2950 status=ok
// SIG undefined FUN_141fb0f00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_141fb0f00(longlong param_1,float *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  int iVar11;
  float *pfVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
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
  float fVar49;
  float fVar50;
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
  
  fVar48 = *(float *)(param_4 + 1);
  *(undefined8 *)param_2 = *param_4;
  param_2[2] = fVar48;
  cVar10 = *(char *)(param_1 + 0x140);
  if (cVar10 == '\0') {
    lVar1 = *param_3;
    fVar48 = *(float *)(lVar1 + 0x10);
    fVar49 = *(float *)(lVar1 + 0x14);
    fVar50 = *(float *)(lVar1 + 0x18);
    fVar26 = *(float *)(lVar1 + 0x1c);
  }
  else {
    if (cVar10 != '\x01') {
      if (cVar10 == '\x03') {
        if (*(char *)param_3[4] == '\0') {
          FUN_14060c680(param_3 + 1,0);
        }
        fVar9 = fRam0000000146acaec8;
        fVar8 = fRam0000000146acaec4;
        fVar7 = _DAT_146acaec0;
        fVar6 = fRam0000000146acadf8;
        fVar5 = fRam0000000146acadf4;
        fVar4 = _DAT_146acadf0;
        pfVar12 = (float *)param_3[1];
        lVar1 = *param_3;
        auVar19 = *(undefined1 (*) [16])(pfVar12 + 8);
        fVar48 = auVar19._0_4_;
        fVar50 = auVar19._4_4_;
        fVar31 = auVar19._8_4_;
        fVar35 = *pfVar12;
        fVar36 = pfVar12[1];
        fVar25 = pfVar12[2];
        fVar17 = pfVar12[3];
        auVar20 = *(undefined1 (*) [16])(lVar1 + 0x30);
        fVar49 = auVar20._0_4_;
        fVar26 = auVar20._4_4_;
        fVar33 = auVar20._8_4_;
        fVar41 = pfVar12[4];
        fVar2 = pfVar12[5];
        fVar3 = pfVar12[6];
        auVar14 = minps(auVar20,auVar19);
        auVar16._4_4_ = -(uint)(auVar14._4_4_ < fRam0000000146acaec4);
        auVar16._0_4_ = -(uint)(auVar14._0_4_ < _DAT_146acaec0);
        auVar16._8_4_ = -(uint)(auVar14._8_4_ < fRam0000000146acaec8);
        auVar16._12_4_ = -(uint)(auVar14._12_4_ < fRam0000000146acaecc);
        iVar11 = movmskps((int)pfVar12,auVar16);
        if (iVar11 == 0) {
          fVar48 = *(float *)(lVar1 + 0x10);
          fVar49 = *(float *)(lVar1 + 0x14);
          fVar50 = *(float *)(lVar1 + 0x18);
          fVar26 = *(float *)(lVar1 + 0x1c);
          fVar31 = fVar35 * fVar26 * _DAT_146acae30 + fVar17 * fVar48 +
                   fVar36 * fVar50 * _DAT_146acae20 + fVar25 * fVar49 * _DAT_146acae10;
          fVar33 = fVar35 * fVar50 * fRam0000000146acae34 + fVar17 * fVar49 +
                   fVar36 * fVar26 * fRam0000000146acae24 + fVar25 * fVar48 * fRam0000000146acae14;
          fVar41 = fVar35 * fVar49 * fRam0000000146acae38 + fVar17 * fVar50 +
                   fVar36 * fVar48 * fRam0000000146acae28 + fVar25 * fVar26 * fRam0000000146acae18;
          fVar48 = fVar35 * fVar48 * fRam0000000146acae3c + fVar17 * fVar26 +
                   fVar36 * fVar49 * fRam0000000146acae2c + fVar25 * fVar50 * fRam0000000146acae1c;
        }
        else {
          fVar21 = fVar36 + fVar36;
          fVar22 = fVar25 + fVar25;
          fVar27 = (fVar35 + fVar35) * fVar35;
          fVar38 = fVar17 * (fVar35 + fVar35);
          fVar45 = (fVar17 * fVar22 + fVar35 * fVar21) * fVar48;
          fVar46 = (fVar38 + fVar36 * fVar22) * fVar50;
          fVar47 = (fVar17 * fVar21 + fVar35 * fVar22) * fVar31;
          fVar29 = fVar50 * (fVar35 * fVar21 - fVar17 * fVar22);
          fVar32 = fVar31 * (fVar36 * fVar22 - fVar38);
          fVar34 = fVar48 * (fVar35 * fVar22 - fVar17 * fVar21);
          fVar38 = (float)((uint)((_DAT_146acadf0 - (fVar22 * fVar25 + fVar21 * fVar36)) * fVar48) &
                          _DAT_146acae00);
          fVar22 = (float)((uint)((fRam0000000146acadf4 - (fVar22 * fVar25 + fVar27)) * fVar50) &
                          uRam0000000146acae04);
          fVar23 = (float)((uint)((fRam0000000146acadf8 - (fVar21 * fVar36 + fVar27)) * fVar31) &
                          uRam0000000146acae08);
          fVar24 = (float)((uint)((fRam0000000146acadfc - (fVar27 + fVar27)) * auVar19._12_4_) &
                          uRam0000000146acae0c);
          fVar35 = *(float *)(lVar1 + 0x10);
          fVar36 = *(float *)(lVar1 + 0x14);
          fVar25 = *(float *)(lVar1 + 0x18);
          fVar17 = *(float *)(lVar1 + 0x1c);
          fVar27 = fVar36 + fVar36;
          fVar28 = fVar25 + fVar25;
          fVar30 = (fVar35 + fVar35) * fVar35;
          fVar21 = (fVar35 + fVar35) * fVar17;
          fVar42 = (fVar28 * fVar17 + fVar27 * fVar35) * fVar49;
          fVar43 = (fVar21 + fVar28 * fVar36) * fVar26;
          fVar44 = (fVar27 * fVar17 + fVar28 * fVar35) * fVar33;
          fVar37 = fVar26 * (fVar27 * fVar35 - fVar28 * fVar17);
          fVar39 = fVar33 * (fVar28 * fVar36 - fVar21);
          fVar40 = fVar49 * (fVar28 * fVar35 - fVar27 * fVar17);
          fVar17 = (float)((uint)((_DAT_146acadf0 - (fVar28 * fVar25 + fVar27 * fVar36)) * fVar49) &
                          _DAT_146acae00);
          fVar21 = (float)((uint)((fRam0000000146acadf4 - (fVar28 * fVar25 + fVar30)) * fVar26) &
                          uRam0000000146acae04);
          fVar27 = (float)((uint)((fRam0000000146acadf8 - (fVar27 * fVar36 + fVar30)) * fVar33) &
                          uRam0000000146acae08);
          fVar28 = (float)((uint)((fRam0000000146acadfc - (fVar30 + fVar30)) * auVar20._12_4_) &
                          uRam0000000146acae0c);
          fVar35 = *(float *)(lVar1 + 0x20);
          fVar36 = *(float *)(lVar1 + 0x24);
          fVar25 = *(float *)(lVar1 + 0x28);
          local_f8 = fVar42 * fVar29 + fVar17 * fVar38 + fVar40 * fVar47 + fVar28 * fVar41;
          fStack_f4 = fVar42 * fVar22 + fVar17 * fVar45 + fVar40 * fVar32 + fVar28 * fVar2;
          fStack_f0 = fVar42 * fVar46 + fVar17 * fVar34 + fVar40 * fVar23 + fVar28 * fVar3;
          fStack_ec = fVar42 * fVar24 + fVar17 * fVar24 + fVar40 * fVar24 +
                      fVar28 * fRam0000000146acadfc;
          local_e8 = fVar21 * fVar29 + fVar37 * fVar38 + fVar43 * fVar47 + fVar28 * fVar41;
          fStack_e4 = fVar21 * fVar22 + fVar37 * fVar45 + fVar43 * fVar32 + fVar28 * fVar2;
          fStack_e0 = fVar21 * fVar46 + fVar37 * fVar34 + fVar43 * fVar23 + fVar28 * fVar3;
          fStack_dc = fVar21 * fVar24 + fVar37 * fVar24 + fVar43 * fVar24 +
                      fVar28 * fRam0000000146acadfc;
          local_d8 = fVar39 * fVar29 + fVar44 * fVar38 + fVar27 * fVar47 + fVar28 * fVar41;
          fStack_d4 = fVar39 * fVar22 + fVar44 * fVar45 + fVar27 * fVar32 + fVar28 * fVar2;
          fStack_d0 = fVar39 * fVar46 + fVar44 * fVar34 + fVar27 * fVar23 + fVar28 * fVar3;
          fStack_cc = fVar39 * fVar24 + fVar44 * fVar24 + fVar27 * fVar24 +
                      fVar28 * fRam0000000146acadfc;
          local_c8 = fVar36 * fVar29 + fVar35 * fVar38 + fVar25 * fVar47 +
                     fRam0000000146acadfc * fVar41;
          fStack_c4 = fVar36 * fVar22 + fVar35 * fVar45 + fVar25 * fVar32 +
                      fRam0000000146acadfc * fVar2;
          fStack_c0 = fVar36 * fVar46 + fVar35 * fVar34 + fVar25 * fVar23 +
                      fRam0000000146acadfc * fVar3;
          fStack_bc = fVar36 * fVar24 + fVar35 * fVar24 + fVar25 * fVar24 +
                      fRam0000000146acadfc * fRam0000000146acadfc;
          FMatrix::RemoveScaling(&local_f8);
          fVar48 = (float)(-(uint)(fVar7 <= fVar49 * fVar48) & (_DAT_146acaeb0 ^ (uint)fVar4) ^
                          _DAT_146acaeb0);
          fVar49 = (float)(-(uint)(fVar8 <= fVar26 * fVar50) & (uRam0000000146acaeb4 ^ (uint)fVar5)
                          ^ uRam0000000146acaeb4);
          fVar50 = (float)(-(uint)(fVar9 <= fVar33 * fVar31) & (uRam0000000146acaeb8 ^ (uint)fVar6)
                          ^ uRam0000000146acaeb8);
          local_f8 = local_f8 * fVar48;
          fStack_f4 = fStack_f4 * fVar48;
          fStack_f0 = fStack_f0 * fVar48;
          fStack_e4 = fStack_e4 * fVar49;
          fStack_e0 = fStack_e0 * fVar49;
          local_e8 = local_e8 * fVar49;
          fStack_d4 = fStack_d4 * fVar50;
          fStack_d0 = fStack_d0 * fVar50;
          local_d8 = local_d8 * fVar50;
          FQuat::FQuat(&local_108,&local_f8);
          auVar20._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
          auVar20._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
          auVar20._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
          auVar20._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
          fVar31 = auVar20._4_4_ + auVar20._0_4_;
          fVar33 = auVar20._8_4_ + auVar20._4_4_;
          fVar35 = auVar20._12_4_ + auVar20._8_4_;
          fVar36 = auVar20._0_4_ + auVar20._12_4_;
          auVar19._4_4_ = fVar33;
          auVar19._0_4_ = fVar31;
          auVar19._8_4_ = fVar35;
          auVar19._12_4_ = fVar36;
          auVar19 = rsqrtps(auVar20,auVar19);
          fVar48 = auVar19._0_4_;
          fVar49 = auVar19._4_4_;
          fVar50 = auVar19._8_4_;
          fVar26 = auVar19._12_4_;
          fVar48 = (_DAT_146acaea0 - fVar48 * fVar48 * fVar31 * _DAT_146acaea0) * fVar48 + fVar48;
          fVar49 = (fRam0000000146acaea4 - fVar49 * fVar49 * fVar33 * fRam0000000146acaea4) * fVar49
                   + fVar49;
          fVar50 = (fRam0000000146acaea8 - fVar50 * fVar50 * fVar35 * fRam0000000146acaea8) * fVar50
                   + fVar50;
          fVar26 = (fRam0000000146acaeac - fVar26 * fVar26 * fVar36 * fRam0000000146acaeac) * fVar26
                   + fVar26;
          fVar31 = (float)(((uint)(((_DAT_146acaea0 - fVar48 * fVar48 * fVar31 * _DAT_146acaea0) *
                                    fVar48 + fVar48) * local_108) ^ _DAT_146acae90) &
                           -(uint)(1e-08 <= fVar31) ^ _DAT_146acae90);
          fVar33 = (float)(((uint)(((fRam0000000146acaea4 -
                                    fVar49 * fVar49 * fVar33 * fRam0000000146acaea4) * fVar49 +
                                   fVar49) * fStack_104) ^ uRam0000000146acae94) &
                           -(uint)(1e-08 <= fVar33) ^ uRam0000000146acae94);
          fVar41 = (float)(((uint)(((fRam0000000146acaea8 -
                                    fVar50 * fVar50 * fVar35 * fRam0000000146acaea8) * fVar50 +
                                   fVar50) * fStack_100) ^ uRam0000000146acae98) &
                           -(uint)(1e-08 <= fVar35) ^ uRam0000000146acae98);
          fVar48 = (float)(((uint)(((fRam0000000146acaeac -
                                    fVar26 * fVar26 * fVar36 * fRam0000000146acaeac) * fVar26 +
                                   fVar26) * fStack_fc) ^ uRam0000000146acae9c) &
                           -(uint)(1e-08 <= fVar36) ^ uRam0000000146acae9c);
        }
        fVar31 = fVar31 * _DAT_146acaed0;
        fVar33 = fVar33 * fRam0000000146acaed4;
        fVar41 = fVar41 * fRam0000000146acaed8;
        fVar48 = fVar48 * fRam0000000146acaedc;
        fVar49 = param_2[2];
        fVar50 = *param_2;
        fVar26 = fVar49 * fVar33 - (float)((ulonglong)*(undefined8 *)param_2 >> 0x20) * fVar41;
        fVar35 = fVar50 * fVar41 - fVar49 * fVar31;
        fVar36 = param_2[1] * fVar31 - fVar50 * fVar33;
        fVar26 = fVar26 + fVar26;
        fVar35 = fVar35 + fVar35;
        fVar36 = fVar36 + fVar36;
        *(ulonglong *)param_2 =
             CONCAT44((fVar26 * fVar41 - fVar36 * fVar31) + fVar48 * fVar35 + param_2[1],
                      (fVar36 * fVar33 - fVar35 * fVar41) + fVar48 * fVar26 + fVar50);
        param_2[2] = (fVar35 * fVar31 - fVar26 * fVar33) + fVar48 * fVar36 + fVar49;
        return param_2;
      }
      if (cVar10 != '\x04') {
        return param_2;
      }
      lVar1 = param_3[3];
      cVar10 = FBoneReference::IsValidToEvaluate(param_1 + 0x148,lVar1);
      if (cVar10 == '\0') {
        return param_2;
      }
      if (*(char *)(param_1 + 0x154) == '\0') {
        uVar13 = *(undefined4 *)(param_1 + 0x158);
      }
      else if (*(int *)(param_1 + 0x150) == -1) {
        uVar13 = 0xffffffff;
      }
      else {
        uVar13 = *(undefined4 *)
                  (*(longlong *)(lVar1 + 0x80) + (longlong)*(int *)(param_1 + 0x150) * 4);
      }
      pfVar12 = (float *)FUN_140611730(param_3 + 1,uVar13);
      fVar9 = fRam0000000146acaec8;
      fVar8 = fRam0000000146acaec4;
      fVar7 = _DAT_146acaec0;
      fVar6 = fRam0000000146acadf8;
      fVar5 = fRam0000000146acadf4;
      fVar4 = _DAT_146acadf0;
      lVar1 = *param_3;
      auVar19 = *(undefined1 (*) [16])(pfVar12 + 8);
      fVar48 = auVar19._0_4_;
      fVar50 = auVar19._4_4_;
      fVar31 = auVar19._8_4_;
      auVar20 = *(undefined1 (*) [16])(lVar1 + 0x30);
      fVar49 = auVar20._0_4_;
      fVar26 = auVar20._4_4_;
      fVar33 = auVar20._8_4_;
      fVar35 = *pfVar12;
      fVar36 = pfVar12[1];
      fVar25 = pfVar12[2];
      fVar17 = pfVar12[3];
      fVar41 = pfVar12[4];
      fVar2 = pfVar12[5];
      fVar3 = pfVar12[6];
      auVar14 = minps(auVar20,auVar19);
      auVar15._4_4_ = -(uint)(auVar14._4_4_ < fRam0000000146acaec4);
      auVar15._0_4_ = -(uint)(auVar14._0_4_ < _DAT_146acaec0);
      auVar15._8_4_ = -(uint)(auVar14._8_4_ < fRam0000000146acaec8);
      auVar15._12_4_ = -(uint)(auVar14._12_4_ < fRam0000000146acaecc);
      iVar11 = movmskps((int)pfVar12,auVar15);
      if (iVar11 == 0) {
        fVar48 = *(float *)(lVar1 + 0x10);
        fVar49 = *(float *)(lVar1 + 0x14);
        fVar50 = *(float *)(lVar1 + 0x18);
        fVar26 = *(float *)(lVar1 + 0x1c);
        fVar31 = fVar26 * fVar35 * _DAT_146acae30 + fVar17 * fVar48 +
                 fVar50 * fVar36 * _DAT_146acae20 + fVar49 * fVar25 * _DAT_146acae10;
        fVar33 = fVar50 * fVar35 * fRam0000000146acae34 + fVar17 * fVar49 +
                 fVar26 * fVar36 * fRam0000000146acae24 + fVar48 * fVar25 * fRam0000000146acae14;
        fVar41 = fVar49 * fVar35 * fRam0000000146acae38 + fVar17 * fVar50 +
                 fVar48 * fVar36 * fRam0000000146acae28 + fVar26 * fVar25 * fRam0000000146acae18;
        fVar48 = fVar48 * fVar35 * fRam0000000146acae3c + fVar17 * fVar26 +
                 fVar49 * fVar36 * fRam0000000146acae2c + fVar50 * fVar25 * fRam0000000146acae1c;
      }
      else {
        fVar21 = fVar36 + fVar36;
        fVar22 = fVar25 + fVar25;
        fVar27 = fVar35 * (fVar35 + fVar35);
        fVar38 = fVar17 * (fVar35 + fVar35);
        fVar45 = (fVar17 * fVar22 + fVar35 * fVar21) * fVar48;
        fVar46 = (fVar38 + fVar36 * fVar22) * fVar50;
        fVar47 = (fVar17 * fVar21 + fVar35 * fVar22) * fVar31;
        fVar29 = fVar50 * (fVar35 * fVar21 - fVar17 * fVar22);
        fVar32 = fVar31 * (fVar36 * fVar22 - fVar38);
        fVar34 = fVar48 * (fVar35 * fVar22 - fVar17 * fVar21);
        fVar38 = (float)((uint)((_DAT_146acadf0 - (fVar25 * fVar22 + fVar36 * fVar21)) * fVar48) &
                        _DAT_146acae00);
        fVar22 = (float)((uint)((fRam0000000146acadf4 - (fVar25 * fVar22 + fVar27)) * fVar50) &
                        uRam0000000146acae04);
        fVar23 = (float)((uint)((fRam0000000146acadf8 - (fVar36 * fVar21 + fVar27)) * fVar31) &
                        uRam0000000146acae08);
        fVar24 = (float)((uint)((fRam0000000146acadfc - (fVar27 + fVar27)) * auVar19._12_4_) &
                        uRam0000000146acae0c);
        fVar35 = *(float *)(lVar1 + 0x10);
        fVar36 = *(float *)(lVar1 + 0x14);
        fVar25 = *(float *)(lVar1 + 0x18);
        fVar17 = *(float *)(lVar1 + 0x1c);
        fVar27 = fVar36 + fVar36;
        fVar28 = fVar25 + fVar25;
        fVar30 = (fVar35 + fVar35) * fVar35;
        fVar21 = (fVar35 + fVar35) * fVar17;
        fVar42 = (fVar28 * fVar17 + fVar27 * fVar35) * fVar49;
        fVar43 = (fVar21 + fVar28 * fVar36) * fVar26;
        fVar44 = (fVar27 * fVar17 + fVar28 * fVar35) * fVar33;
        fVar37 = fVar26 * (fVar27 * fVar35 - fVar28 * fVar17);
        fVar39 = fVar33 * (fVar28 * fVar36 - fVar21);
        fVar40 = fVar49 * (fVar28 * fVar35 - fVar27 * fVar17);
        fVar17 = (float)((uint)((_DAT_146acadf0 - (fVar28 * fVar25 + fVar27 * fVar36)) * fVar49) &
                        _DAT_146acae00);
        fVar21 = (float)((uint)((fRam0000000146acadf4 - (fVar28 * fVar25 + fVar30)) * fVar26) &
                        uRam0000000146acae04);
        fVar27 = (float)((uint)((fRam0000000146acadf8 - (fVar27 * fVar36 + fVar30)) * fVar33) &
                        uRam0000000146acae08);
        fVar28 = (float)((uint)((fRam0000000146acadfc - (fVar30 + fVar30)) * auVar20._12_4_) &
                        uRam0000000146acae0c);
        fVar35 = *(float *)(lVar1 + 0x20);
        fVar36 = *(float *)(lVar1 + 0x24);
        fVar25 = *(float *)(lVar1 + 0x28);
        local_f8 = fVar42 * fVar29 + fVar17 * fVar38 + fVar40 * fVar47 + fVar28 * fVar41;
        fStack_f4 = fVar42 * fVar22 + fVar17 * fVar45 + fVar40 * fVar32 + fVar28 * fVar2;
        fStack_f0 = fVar42 * fVar46 + fVar17 * fVar34 + fVar40 * fVar23 + fVar28 * fVar3;
        fStack_ec = fVar42 * fVar24 + fVar17 * fVar24 + fVar40 * fVar24 +
                    fVar28 * fRam0000000146acadfc;
        local_e8 = fVar21 * fVar29 + fVar37 * fVar38 + fVar43 * fVar47 + fVar28 * fVar41;
        fStack_e4 = fVar21 * fVar22 + fVar37 * fVar45 + fVar43 * fVar32 + fVar28 * fVar2;
        fStack_e0 = fVar21 * fVar46 + fVar37 * fVar34 + fVar43 * fVar23 + fVar28 * fVar3;
        fStack_dc = fVar21 * fVar24 + fVar37 * fVar24 + fVar43 * fVar24 +
                    fVar28 * fRam0000000146acadfc;
        local_d8 = fVar39 * fVar29 + fVar44 * fVar38 + fVar27 * fVar47 + fVar28 * fVar41;
        fStack_d4 = fVar39 * fVar22 + fVar44 * fVar45 + fVar27 * fVar32 + fVar28 * fVar2;
        fStack_d0 = fVar39 * fVar46 + fVar44 * fVar34 + fVar27 * fVar23 + fVar28 * fVar3;
        fStack_cc = fVar39 * fVar24 + fVar44 * fVar24 + fVar27 * fVar24 +
                    fVar28 * fRam0000000146acadfc;
        local_c8 = fVar36 * fVar29 + fVar35 * fVar38 + fVar25 * fVar47 +
                   fRam0000000146acadfc * fVar41;
        fStack_c4 = fVar36 * fVar22 + fVar35 * fVar45 + fVar25 * fVar32 +
                    fRam0000000146acadfc * fVar2;
        fStack_c0 = fVar36 * fVar46 + fVar35 * fVar34 + fVar25 * fVar23 +
                    fRam0000000146acadfc * fVar3;
        fStack_bc = fVar36 * fVar24 + fVar35 * fVar24 + fVar25 * fVar24 +
                    fRam0000000146acadfc * fRam0000000146acadfc;
        FMatrix::RemoveScaling(&local_f8);
        fVar48 = (float)(-(uint)(fVar7 <= fVar48 * fVar49) & (_DAT_146acaeb0 ^ (uint)fVar4) ^
                        _DAT_146acaeb0);
        fVar49 = (float)(-(uint)(fVar8 <= fVar50 * fVar26) & (uRam0000000146acaeb4 ^ (uint)fVar5) ^
                        uRam0000000146acaeb4);
        fVar50 = (float)(-(uint)(fVar9 <= fVar31 * fVar33) & (uRam0000000146acaeb8 ^ (uint)fVar6) ^
                        uRam0000000146acaeb8);
        local_f8 = local_f8 * fVar48;
        fStack_f4 = fStack_f4 * fVar48;
        fStack_f0 = fStack_f0 * fVar48;
        fStack_e4 = fStack_e4 * fVar49;
        fStack_e0 = fStack_e0 * fVar49;
        local_e8 = local_e8 * fVar49;
        fStack_d4 = fStack_d4 * fVar50;
        fStack_d0 = fStack_d0 * fVar50;
        local_d8 = local_d8 * fVar50;
        FQuat::FQuat(&local_108,&local_f8);
        auVar18._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
        auVar18._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
        auVar18._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
        auVar18._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
        fVar31 = auVar18._4_4_ + auVar18._0_4_;
        fVar33 = auVar18._8_4_ + auVar18._4_4_;
        fVar35 = auVar18._12_4_ + auVar18._8_4_;
        fVar36 = auVar18._0_4_ + auVar18._12_4_;
        auVar14._4_4_ = fVar33;
        auVar14._0_4_ = fVar31;
        auVar14._8_4_ = fVar35;
        auVar14._12_4_ = fVar36;
        auVar19 = rsqrtps(auVar18,auVar14);
        fVar48 = auVar19._0_4_;
        fVar49 = auVar19._4_4_;
        fVar50 = auVar19._8_4_;
        fVar26 = auVar19._12_4_;
        fVar48 = (_DAT_146acaea0 - fVar48 * fVar48 * fVar31 * _DAT_146acaea0) * fVar48 + fVar48;
        fVar49 = (fRam0000000146acaea4 - fVar49 * fVar49 * fVar33 * fRam0000000146acaea4) * fVar49 +
                 fVar49;
        fVar50 = (fRam0000000146acaea8 - fVar50 * fVar50 * fVar35 * fRam0000000146acaea8) * fVar50 +
                 fVar50;
        fVar26 = (fRam0000000146acaeac - fVar26 * fVar26 * fVar36 * fRam0000000146acaeac) * fVar26 +
                 fVar26;
        fVar31 = (float)(((uint)(((_DAT_146acaea0 - fVar48 * fVar48 * fVar31 * _DAT_146acaea0) *
                                  fVar48 + fVar48) * local_108) ^ _DAT_146acae90) &
                         -(uint)(1e-08 <= fVar31) ^ _DAT_146acae90);
        fVar33 = (float)(((uint)(((fRam0000000146acaea4 -
                                  fVar49 * fVar49 * fVar33 * fRam0000000146acaea4) * fVar49 + fVar49
                                 ) * fStack_104) ^ uRam0000000146acae94) & -(uint)(1e-08 <= fVar33)
                        ^ uRam0000000146acae94);
        fVar41 = (float)(((uint)(((fRam0000000146acaea8 -
                                  fVar50 * fVar50 * fVar35 * fRam0000000146acaea8) * fVar50 + fVar50
                                 ) * fStack_100) ^ uRam0000000146acae98) & -(uint)(1e-08 <= fVar35)
                        ^ uRam0000000146acae98);
        fVar48 = (float)(((uint)(((fRam0000000146acaeac -
                                  fVar26 * fVar26 * fVar36 * fRam0000000146acaeac) * fVar26 + fVar26
                                 ) * fStack_fc) ^ uRam0000000146acae9c) & -(uint)(1e-08 <= fVar36) ^
                        uRam0000000146acae9c);
      }
      fVar31 = fVar31 * _DAT_146acaed0;
      fVar33 = fVar33 * fRam0000000146acaed4;
      fVar41 = fVar41 * fRam0000000146acaed8;
      fVar48 = fVar48 * fRam0000000146acaedc;
      fVar49 = param_2[2];
      fVar50 = *param_2;
      fVar26 = fVar49 * fVar33 - (float)((ulonglong)*(undefined8 *)param_2 >> 0x20) * fVar41;
      fVar35 = fVar50 * fVar41 - fVar49 * fVar31;
      fVar36 = param_2[1] * fVar31 - fVar50 * fVar33;
      fVar26 = fVar26 + fVar26;
      fVar35 = fVar35 + fVar35;
      fVar36 = fVar36 + fVar36;
      *(ulonglong *)param_2 =
           CONCAT44((fVar26 * fVar41 - fVar36 * fVar31) + fVar48 * fVar35 + param_2[1],
                    (fVar36 * fVar33 - fVar35 * fVar41) + fVar48 * fVar26 + fVar50);
      param_2[2] = (fVar35 * fVar31 - fVar26 * fVar33) + fVar48 * fVar36 + fVar49;
      return param_2;
    }
    lVar1 = *param_3;
    fVar48 = *(float *)(lVar1 + 0x70);
    fVar49 = *(float *)(lVar1 + 0x74);
    fVar50 = *(float *)(lVar1 + 0x78);
    fVar26 = *(float *)(lVar1 + 0x7c);
  }
  fVar48 = fVar48 * _DAT_146acaed0;
  fVar49 = fVar49 * fRam0000000146acaed4;
  fVar50 = fVar50 * fRam0000000146acaed8;
  fVar26 = fVar26 * fRam0000000146acaedc;
  fVar31 = param_2[2];
  fVar33 = *param_2;
  fVar35 = fVar31 * fVar49 - (float)((ulonglong)*(undefined8 *)param_2 >> 0x20) * fVar50;
  fVar36 = fVar33 * fVar50 - fVar31 * fVar48;
  fVar25 = param_2[1] * fVar48 - fVar33 * fVar49;
  fVar35 = fVar35 + fVar35;
  fVar36 = fVar36 + fVar36;
  fVar25 = fVar25 + fVar25;
  *(ulonglong *)param_2 =
       CONCAT44((fVar35 * fVar50 - fVar25 * fVar48) + fVar26 * fVar36 + param_2[1],
                (fVar25 * fVar49 - fVar36 * fVar50) + fVar26 * fVar35 + fVar33);
  param_2[2] = (fVar36 * fVar48 - fVar35 * fVar49) + fVar26 * fVar25 + fVar31;
  return param_2;
}



// FUNCTION 141fb1a90 FUN_141fb1a90 body=279 status=ok
// SIG undefined FUN_141fb1a90(void)

void FUN_141fb1a90(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined8 local_res8;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x78);
  if (lVar3 != 0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop
                       (L"&UPlayMontageCallbackProxy::OnNotifyBeginReceived",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    FUN_140a4d850(lVar3 + 0x398,param_1,UPlayMontageCallbackProxy::OnNotifyBeginReceived,local_res8)
    ;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UPlayMontageCallbackProxy::OnNotifyEndReceived",L"::")
    ;
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    FUN_140a4d850(lVar3 + 0x3a8,param_1,UPlayMontageCallbackProxy::OnNotifyEndReceived,local_res8);
  }
  return;
}



// FUNCTION 141fb1bb0 FUN_141fb1bb0 body=556 status=ok
// SIG undefined FUN_141fb1bb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141fb1bb0(longlong *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong local_28;
  longlong lStack_20;
  undefined1 local_18 [16];
  
  iVar7 = FUN_14062c730();
  if (iVar7 == 2) {
    lVar8 = FUN_1423ac7e0();
    if (lVar8 != 0) {
      lVar9 = FUN_141fb7410();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        param_1[0x149] = 0;
      }
    }
  }
  else {
    iVar7 = FUN_14062c730(param_1);
    if (iVar7 == 0) {
      lVar8 = FUN_1423ac7e0(param_1);
      if (lVar8 != 0) {
        FUN_142279320(lVar8,0,0);
        FUN_142284510(lVar8,0,0);
      }
      (**(code **)(*param_1 + 0x960))(param_1,0);
      FUN_1423b8300(param_1);
      pfVar1 = (float *)(param_1 + 0x50);
      if (((*(float *)(param_1 + 0x3f) == *pfVar1) &&
          (*(float *)((longlong)param_1 + 0x1fc) == *(float *)((longlong)param_1 + 0x284))) &&
         (*(float *)(param_1 + 0x40) == *(float *)(param_1 + 0x51))) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        local_28 = *(longlong *)*(undefined1 (*) [12])(param_1 + 0x3f);
        auVar11._12_4_ = 0;
        auVar11._0_12_ = *(undefined1 (*) [12])(param_1 + 0x3f);
        fVar2 = (float)DAT_146acade0;
        fVar3 = DAT_146acade0._4_4_;
        fVar4 = DAT_146acade0._8_4_;
        auVar11 = divps(auVar11,_DAT_146acade0);
        fVar13 = (float)local_28 - (float)(int)auVar11._0_4_ * fVar2;
        fVar14 = (float)((ulonglong)local_28 >> 0x20) - (float)(int)auVar11._4_4_ * fVar3;
        fVar15 = *(float *)(param_1 + 0x40) - (float)(int)auVar11._8_4_ * fVar4;
        fVar13 = (float)(((uint)(fVar13 + fVar2) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                        (uint)(fVar13 + fVar2));
        fVar14 = (float)(((uint)(fVar14 + fVar3) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                        (uint)(fVar14 + fVar3));
        fVar15 = (float)(((uint)(fVar15 + fVar4) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                        (uint)(fVar15 + fVar4));
        uVar12 = ((uint)(fVar15 - fVar4) ^ (uint)fVar15) & -(uint)(fRam0000000146acadd8 < fVar15) ^
                 (uint)fVar15;
        lStack_20 = CONCAT44(lStack_20._4_4_,uVar12);
        *(ulonglong *)pfVar1 =
             CONCAT44(((uint)(fVar14 - fVar3) ^ (uint)fVar14) &
                      -(uint)(fRam0000000146acadd4 < fVar14) ^ (uint)fVar14,
                      ((uint)(fVar13 - fVar2) ^ (uint)fVar13) & -(uint)(_DAT_146acadd0 < fVar13) ^
                      (uint)fVar13);
        *(uint *)(param_1 + 0x51) = uVar12;
        plVar10 = (longlong *)FRotator::Quaternion(pfVar1,local_18);
        lVar8 = plVar10[1];
        param_1[0x4e] = *plVar10;
        param_1[0x4f] = lVar8;
      }
      local_28 = param_1[0x4e];
      lStack_20 = param_1[0x4f];
      FUN_14239b520(param_1,param_1[0x32],param_1[0x33],0,&local_28,0);
    }
  }
  lVar8 = param_1[0x24];
  if (lVar8 == 0) {
    lVar8 = FUN_1423407b0(param_1);
  }
  cVar6 = UWorld::IsGameWorld(lVar8);
  if (cVar6 == '\0') {
    FUN_1423a6850(param_1);
    return;
  }
  return;
}



// FUNCTION 141fb1de0 FUN_141fb1de0 body=316 status=ok
// SIG undefined FUN_141fb1de0(void)

void FUN_141fb1de0(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,byte param_6)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
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
  lVar2 = FUN_141f7fd30(lVar3,param_3);
  if (lVar2 == 0) {
    FUN_141fa68c0(lVar3,param_2,param_3);
  }
  else if (*(longlong *)(lVar2 + 0x78) != param_2) {
    (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x30))((longlong *)(lVar2 + 0x10),param_2);
  }
  lVar2 = FUN_141f7fd30(lVar3,param_3);
  *(undefined4 *)(lVar2 + 0x80) = param_4;
  *(byte *)(lVar2 + 0x85) = param_6 ^ 1;
  plVar4 = (longlong *)(lVar3 + 0x890);
  if (*(char *)(lVar2 + 0xc) == '\0') {
    plVar4 = (longlong *)(lVar3 + 0x810);
  }
  *(undefined4 *)(*plVar4 + (longlong)*(int *)(lVar2 + 8) * 4) = param_5;
  return;
}



// FUNCTION 141fb1f20 FUN_141fb1f20 body=261 status=ok
// SIG undefined FUN_141fb1f20(void)

void FUN_141fb1f20(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  
  FUN_142290d80(param_1 + 8);
  FUN_141f81810(param_1,param_1 + 0x80,param_2);
  cVar2 = FUN_142297770(param_1,*param_2);
  *(char *)(param_1 + 0x17c) = cVar2;
  lVar1 = DAT_146acae58;
  if (((*(char *)(param_1 + 0x250) == '\0') || (cVar2 == '\0')) ||
     (*(float *)(param_1 + 0x1ac) <= 1e-05)) goto LAB_141fb2001;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 == DAT_1468c21c0) goto LAB_141fb1fcb;
    lVar4 = 4;
  }
  else {
LAB_141fb1fcb:
    lVar4 = 0;
  }
  if (*(int *)(lVar4 + lVar1) == 1) {
    FUN_142290d80(param_1 + 8,param_2);
    FUN_141f81810(param_1,param_1 + 0x80,param_2);
    FUN_141fb3b80(param_1,param_2);
  }
LAB_141fb2001:
  FPoseLinkBase::Update(param_1 + 0x160,param_2);
  return;
}



// FUNCTION 141fb2030 FUN_141fb2030 body=195 status=ok
// SIG undefined FUN_141fb2030(void)

void FUN_141fb2030(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FUN_142290d80(param_1 + 8);
  FUN_141f81810(param_1,param_1 + 0x80,param_2);
  fVar2 = *(float *)(param_1 + 0x160);
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  fVar1 = fVar2 - *(float *)(param_1 + 0x40);
  if ((*(char *)(param_1 + 0x78) != '\0') && (0.5 < ABS(fVar1))) {
    if (fVar1 <= 0.0) {
      fVar1 = fVar1 + 1.0;
    }
    else {
      fVar1 = fVar1 + -1.0;
    }
  }
  if (fVar1 == 0.0) {
    *(float *)(param_1 + 0x40) = fVar2;
  }
  if (1e-08 < ABS(*(float *)(param_2 + 0x10))) {
    fVar3 = fVar1 / *(float *)(param_2 + 0x10);
  }
  *(float *)(param_1 + 0x74) = fVar3;
  FUN_141fb3b80(param_1,param_2);
  return;
}



// FUNCTION 141fb2100 FUN_141fb2100 body=64 status=ok
// SIG undefined FUN_141fb2100(void)

void FUN_141fb2100(longlong param_1,undefined8 param_2)

{
  FUN_142290d80(param_1 + 8);
  FUN_141f81810(param_1,param_1 + 0x80,param_2);
  FUN_141fb3b80(param_1,param_2);
  return;
}



// FUNCTION 141fb2140 FUN_141fb2140 body=46 status=ok
// SIG undefined FUN_141fb2140(void)

void FUN_141fb2140(longlong param_1,undefined8 param_2)

{
  FUN_141fb21e0();
  FPoseLinkBase::Update(param_1 + 0xb0,param_2);
  return;
}



// FUNCTION 141fb2170 FUN_141fb2170 body=103 status=ok
// SIG undefined FUN_141fb2170(void)

void FUN_141fb2170(longlong param_1,longlong *param_2)

{
  undefined2 uVar1;
  
  FUN_141fb21e0();
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    uVar1 = USkeleton::GetUIDByName(*(undefined8 *)(*param_2 + 0xb0),&DAT_146aef308);
    *(undefined2 *)(param_1 + 0xbc) = uVar1;
    return;
  }
  *(undefined2 *)(param_1 + 0xbc) = 0xffff;
  return;
}



// FUNCTION 141fb21e0 FUN_141fb21e0 body=340 status=ok
// SIG undefined FUN_141fb21e0(void)

void FUN_141fb21e0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  FUN_142290d80(param_1 + 8);
  lVar5 = *(longlong *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x60) != lVar5) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    lVar4 = *param_2;
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x608) != *(int *)(lVar4 + 0x634))) {
      lVar7 = *(longlong *)(lVar4 + 0x640);
      if (*(longlong *)(lVar4 + 0x640) == 0) {
        lVar7 = lVar4 + 0x638;
      }
      iVar3 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                               (longlong)*(int *)(lVar4 + 0x648) - 1U) * 4);
      if (iVar3 != -1) {
        lVar4 = *(longlong *)(lVar4 + 0x600);
        do {
          lVar7 = (longlong)iVar3;
          if (*(longlong *)(lVar4 + lVar7 * 0x18) == lVar5) {
            if (((iVar3 != -1) && (lVar4 = lVar4 + lVar7 * 0x18, lVar4 != 0)) &&
               (plVar6 = (longlong *)(lVar4 + 8), plVar6 != (longlong *)0x0)) {
              lVar5 = *plVar6;
              if (lVar5 == 0) {
LAB_141fb22ef:
                lVar5 = 0;
              }
              else {
                lVar4 = UPoseAsset::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (!bVar1) goto LAB_141fb22ef;
              }
              *(longlong *)(param_1 + 0x68) = lVar5;
            }
            break;
          }
          iVar3 = *(int *)(lVar4 + 0x10 + lVar7 * 0x18);
        } while (iVar3 != -1);
      }
    }
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x70);
  if ((cVar2 == '\0') ||
     (lVar5 = FWeakObjectPtr::Get(param_1 + 0x70), lVar5 != *(longlong *)(param_1 + 0x68))) {
    FUN_141fb5720(param_1,*param_2);
  }
  return;
}



// FUNCTION 141fb2340 FUN_141fb2340 body=398 status=ok
// SIG undefined FUN_141fb2340(void)

void FUN_141fb2340(longlong param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined4 uVar6;
  float fVar7;
  
  *(undefined4 *)(param_1 + 0x18c) = 0;
  cVar4 = FUN_142297770(param_1,*param_2);
  *(char *)(param_1 + 0x17c) = cVar4;
  if (cVar4 == '\0') goto LAB_141fb24b5;
  FUN_142290d80(param_1 + 8,param_2);
  FUN_141f81810(param_1,param_1 + 0x80,param_2);
  cVar4 = *(char *)(param_1 + 0x17d);
  if (cVar4 == '\0') {
    uVar6 = FInputScaleBiasClamp::ApplyTo
                      (param_1 + 0x1f8,*(undefined4 *)(param_1 + 0x180),(int)param_2[2]);
    uVar6 = FInputScaleBias::ApplyTo(param_1 + 0x184,uVar6);
LAB_141fb2471:
    *(undefined4 *)(param_1 + 0x18c) = uVar6;
  }
  else {
    if (cVar4 == '\x01') {
      uVar6 = FInputAlphaBoolBlend::ApplyTo
                        (param_1 + 0x198,*(undefined1 *)(param_1 + 400),(int)param_2[2]);
      goto LAB_141fb2471;
    }
    if ((cVar4 == '\x02') && (lVar2 = *(longlong *)(*param_2 + 0xa0), lVar2 != 0)) {
      lVar5 = FUN_1428eccf0();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar5 = param_2[2];
        uVar6 = FUN_142268750(lVar2,*(undefined8 *)(param_1 + 0x1f0));
        uVar6 = FInputScaleBiasClamp::ApplyTo(param_1 + 0x1f8,uVar6,(int)lVar5);
        goto LAB_141fb2471;
      }
    }
  }
  fVar1 = *(float *)(param_1 + 0x18c);
  fVar7 = 0.0;
  if ((0.0 <= fVar1) && (fVar7 = fVar1, 1.0 <= fVar1)) {
    fVar7 = 1.0;
  }
  *(float *)(param_1 + 0x18c) = fVar7;
  if (1e-05 < fVar7) {
    FUN_141fb3b80(param_1,param_2);
  }
LAB_141fb24b5:
  FPoseLinkBase::Update(param_1 + 0x160,param_2);
  return;
}



// FUNCTION 141fb24d0 FUN_141fb24d0 body=633 status=ok
// SIG undefined FUN_141fb24d0(void)

void FUN_141fb24d0(longlong param_1,longlong *param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  FUN_142290d80(param_1 + 8);
  lVar7 = *(longlong *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x60) != lVar7) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    lVar4 = *param_2;
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x608) != *(int *)(lVar4 + 0x634))) {
      lVar5 = *(longlong *)(lVar4 + 0x640);
      if (*(longlong *)(lVar4 + 0x640) == 0) {
        lVar5 = lVar4 + 0x638;
      }
      iVar3 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar7 >> 0x20) + (int)lVar7) &
                               (longlong)*(int *)(lVar4 + 0x648) - 1U) * 4);
      if (iVar3 != -1) {
        lVar4 = *(longlong *)(lVar4 + 0x600);
        do {
          lVar5 = (longlong)iVar3;
          if (*(longlong *)(lVar4 + lVar5 * 0x18) == lVar7) {
            if (((iVar3 != -1) && (lVar4 = lVar4 + lVar5 * 0x18, lVar4 != 0)) &&
               (plVar6 = (longlong *)(lVar4 + 8), plVar6 != (longlong *)0x0)) {
              lVar7 = *plVar6;
              if (lVar7 == 0) {
LAB_141fb25e4:
                lVar7 = 0;
              }
              else {
                lVar4 = UTextureRenderTarget::StaticClass();
                if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (!bVar2) goto LAB_141fb25e4;
              }
              *(longlong *)(param_1 + 0x68) = lVar7;
            }
            break;
          }
          iVar3 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
        } while (iVar3 != -1);
      }
    }
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
  }
  lVar7 = *(longlong *)(param_1 + 0x68);
  if (lVar7 != 0) {
    fVar8 = *(float *)(param_1 + 0x70);
    fVar9 = 0.0;
    if (0.0 <= fVar8) {
      fVar10 = *(float *)(lVar7 + 0x90);
      if (fVar8 <= *(float *)(lVar7 + 0x90)) {
        fVar10 = fVar8;
      }
    }
    else {
      fVar10 = 0.0;
    }
    *(float *)(param_1 + 0x70) = fVar10;
    if ((*(char *)(param_1 + 0x75) == '\0') || (*(int *)(param_1 + 0x34) != -1)) {
      if ((*(longlong *)(*param_2 + 0xb0) == 0) ||
         (*(longlong *)(lVar7 + 0x38) != *(longlong *)(*param_2 + 0xb0))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if (*(char *)(param_1 + 0x7d) == '\0') {
          fVar8 = *(float *)(param_1 + 0x40);
        }
        else {
          if (*(char *)(param_1 + 0x7c) == '\x01') {
            *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x78);
          }
          else if (*(char *)(param_1 + 0x7c) == '\x02') {
            *(float *)(param_1 + 0x40) = fVar10;
          }
          fVar1 = *(float *)(param_1 + 0x40);
          if (0.0 <= fVar1) {
            fVar8 = *(float *)(lVar7 + 0x90);
            if (fVar1 <= *(float *)(lVar7 + 0x90)) {
              fVar8 = fVar1;
            }
            *(float *)(param_1 + 0x40) = fVar8;
          }
          else {
            fVar8 = 0.0;
            *(undefined4 *)(param_1 + 0x40) = 0;
          }
        }
        fVar8 = fVar10 - fVar8;
        if ((*(char *)(param_1 + 0x74) != '\0') &&
           (fVar1 = *(float *)(lVar7 + 0x90), fVar1 * 0.5 < ABS(fVar8))) {
          if (fVar8 <= 0.0) {
            fVar8 = fVar8 + fVar1;
          }
          else {
            fVar8 = fVar8 - fVar1;
          }
        }
        if (fVar8 == 0.0) {
          *(float *)(param_1 + 0x40) = fVar10;
        }
        if (1e-08 < ABS(*(float *)(param_2 + 2))) {
          fVar9 = fVar8 / *(float *)(param_2 + 2);
        }
        FAnimNode_AssetPlayerBase::CreateTickRecordForNode
                  (param_1,param_2,lVar7,*(char *)(param_1 + 0x74),fVar9);
        *(undefined1 *)(param_1 + 0x7d) = 0;
        return;
      }
    }
    *(float *)(param_1 + 0x40) = fVar10;
  }
  *(undefined1 *)(param_1 + 0x7d) = 0;
  return;
}



// FUNCTION 141fb2750 FUN_141fb2750 body=478 status=ok
// SIG undefined FUN_141fb2750(void)

void FUN_141fb2750(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  fVar7 = (float)FUN_141fa6590();
  uVar4 = *(uint *)(param_1 + 0x48);
  uVar6 = (ulonglong)uVar4;
  uVar5 = 0;
  if ((int)uVar4 < 1) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    if ((*(int *)(param_1 + 0x6c) < 0) && (*(int *)(param_1 + 0x6c) != 0)) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x60,0);
    }
  }
  else if (uVar4 == *(uint *)(param_1 + 0x68)) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x60),0,(ulonglong)(uint)(*(int *)(param_1 + 0x6c) << 2));
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(uint *)(param_1 + 0x6c) != uVar4) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x60,uVar4);
    }
    if (0 < (int)uVar4) {
      do {
        iVar2 = *(int *)(param_1 + 0x68);
        *(int *)(param_1 + 0x68) = iVar2 + 1;
        if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x60,iVar2);
        }
        puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  fVar8 = (float)FInputScaleBias::ApplyTo(param_1 + 0x54,fVar7);
  if (1e-05 < fVar8) {
    if (*(char *)(param_1 + 0x51) == '\0') {
      uVar6 = uVar5;
      if (0 < *(int *)(param_1 + 0x48)) {
        do {
          if ((((longlong)uVar6 < 0) || (*(int *)(param_1 + 0x78) <= (int)uVar5)) ||
             (*(char *)(uVar6 + *(longlong *)(param_1 + 0x70)) == '\0')) {
            fVar7 = *(float *)(*(longlong *)(param_1 + 0x40) + uVar6 * 4);
          }
          else {
            fVar7 = 1.0 - *(float *)(*(longlong *)(param_1 + 0x40) + uVar6 * 4);
          }
          lVar3 = *(longlong *)(param_1 + 0x60);
          uVar9 = FInputScaleBias::ApplyTo(param_1 + 0x54,fVar7);
          *(undefined4 *)(lVar3 + uVar6 * 4) = uVar9;
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          uVar6 = uVar6 + 1;
        } while ((int)uVar4 < *(int *)(param_1 + 0x48));
      }
    }
    else if (0 < *(int *)(param_1 + 0x48)) {
      uVar6 = uVar5;
      do {
        if ((((longlong)uVar6 < 0) || (*(int *)(param_1 + 0x78) <= (int)uVar5)) ||
           (*(char *)(uVar6 + *(longlong *)(param_1 + 0x70)) == '\0')) {
          fVar8 = *(float *)(*(longlong *)(param_1 + 0x40) + uVar6 * 4);
        }
        else {
          fVar8 = 1.0 - *(float *)(*(longlong *)(param_1 + 0x40) + uVar6 * 4);
        }
        lVar3 = *(longlong *)(param_1 + 0x60);
        uVar9 = FInputScaleBias::ApplyTo(param_1 + 0x54,(1.0 / fVar7) * fVar8);
        *(undefined4 *)(lVar3 + uVar6 * 4) = uVar9;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar6 = uVar6 + 1;
      } while ((int)uVar4 < *(int *)(param_1 + 0x48));
    }
  }
  return;
}



// FUNCTION 141fb2930 SetRTPC body=9 status=ok
// SIG undefined SetRTPC(void)

void CAkParameterNodeBase::SetRTPC(longlong param_1)

{
  FPoseLinkBase::Update(param_1 + 0x30);
  return;
}



// FUNCTION 141fb2940 FUN_141fb2940 body=294 status=ok
// SIG undefined FUN_141fb2940(void)

void FUN_141fb2940(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  
  uVar4 = 0;
  lVar2 = param_4[1];
  iVar3 = *(int *)((longlong)param_3 + 0xc);
  iVar5 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  if (iVar3 < (int)lVar2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_3);
    iVar3 = *(int *)((longlong)param_3 + 0xc);
    iVar5 = (int)param_3[1];
  }
  lVar2 = param_4[1];
  iVar1 = iVar5 + (int)lVar2;
  *(int *)(param_3 + 1) = iVar1;
  if (iVar3 < iVar1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_3);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar5 + *param_3),0,(longlong)(int)lVar2);
  _guard_xfg_dispatch_icall_nop((void *)*param_2,0,(longlong)(int)param_2[1] * 0xc);
  uVar7 = uVar4;
  if (0 < (int)param_1[1]) {
    do {
      iVar3 = *(int *)(uVar4 + *param_1);
      fVar8 = *(float *)(*param_4 + (longlong)iVar3 * 4) * *(float *)(uVar4 + 4 + *param_1);
      if (1e-05 < fVar8) {
        *(int *)(uVar4 + *param_2) = iVar3;
        *(float *)(uVar4 + 4 + *param_2) = fVar8;
        *(undefined1 *)(uVar4 + 8 + *param_2) = *(undefined1 *)(uVar4 + 8 + *param_1);
        lVar2 = *param_1;
        if (*(char *)(uVar4 + 8 + lVar2) != '\0') {
          *(undefined1 *)((longlong)iVar3 + *param_3) = 1;
          lVar2 = *param_1;
        }
        *(undefined1 *)(uVar4 + 9 + *param_2) = *(undefined1 *)(uVar4 + 9 + lVar2);
      }
      uVar6 = (int)uVar7 + 1;
      uVar4 = uVar4 + 0xc;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 141fb2a70 FUN_141fb2a70 body=4350 status=ok
// SIG undefined FUN_141fb2a70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141fb2a70(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar13 [16];
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
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar40;
  float fVar42;
  float fVar43;
  undefined1 auVar41 [12];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
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
  float local_188;
  float local_184;
  float local_180;
  float local_178;
  float local_174;
  undefined4 local_170;
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  float local_158;
  float local_154;
  float local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118 [30];
  
  local_178 = *(float *)(param_1 + 0x68);
  local_174 = *(float *)(param_1 + 0x6c);
  lVar1 = param_2[3];
  local_170 = *(undefined4 *)(param_1 + 0x70);
  if ((*(longlong *)(param_1 + 0x80) != 0) &&
     (cVar2 = FBoneReference::IsValidToEvaluate(param_1 + 0x1b0,lVar1), cVar2 != '\0')) {
    local_118[0] = 0;
    local_118[1] = 0;
    local_118[2] = 0;
    local_118[3] = 0;
    local_118[4] = 0;
    local_118[5] = 0;
    local_118[6] = 0;
    local_118[7] = 0;
    local_118[8] = 0;
    FCSPose<FCompactPose>::InitPose(local_118,param_2 + 1);
    iVar4 = -1;
    if (*(char *)(param_1 + 0x1bc) == '\0') {
      iVar3 = *(int *)(param_1 + 0x1c0);
    }
    else if (*(int *)(param_1 + 0x1b8) == -1) {
      iVar3 = -1;
    }
    else {
      iVar3 = *(int *)(*(longlong *)(lVar1 + 0x80) + (longlong)*(int *)(param_1 + 0x1b8) * 4);
    }
    lVar5 = local_118[3];
    if (*(char *)(iVar3 + local_118[3]) == '\0') {
      lVar5 = FUN_14060c680(local_118);
    }
    fVar48 = fRam0000000146acaec8;
    fVar33 = fRam0000000146acaec4;
    fVar27 = _DAT_146acaec0;
    fVar24 = fRam0000000146acadf8;
    fVar16 = fRam0000000146acadf4;
    fVar25 = _DAT_146acadf0;
    auVar13 = *(undefined1 (*) [16])(param_1 + 0x1f0);
    fVar28 = auVar13._0_4_;
    fVar31 = auVar13._4_4_;
    fVar39 = auVar13._8_4_;
    pfVar6 = (float *)((longlong)iVar3 * 0x30 + local_118[0]);
    auVar7 = *(undefined1 (*) [16])(pfVar6 + 8);
    fVar30 = auVar7._0_4_;
    fVar37 = auVar7._4_4_;
    fVar45 = auVar7._8_4_;
    fVar20 = auVar7._12_4_;
    fVar14 = *pfVar6;
    fVar17 = pfVar6[1];
    fVar29 = pfVar6[2];
    fVar11 = pfVar6[3];
    auVar7 = minps(auVar13,auVar7);
    auVar8._4_4_ = -(uint)(auVar7._4_4_ < fRam0000000146acaec4);
    auVar8._0_4_ = -(uint)(auVar7._0_4_ < _DAT_146acaec0);
    auVar8._8_4_ = -(uint)(auVar7._8_4_ < fRam0000000146acaec8);
    auVar8._12_4_ = -(uint)(auVar7._12_4_ < fRam0000000146acaecc);
    iVar3 = movmskps((int)lVar5,auVar8);
    if (iVar3 == 0) {
      fVar25 = *(float *)(param_1 + 0x1d0);
      fVar16 = *(float *)(param_1 + 0x1d4);
      fVar24 = *(float *)(param_1 + 0x1d8);
      fVar27 = *(float *)(param_1 + 0x1dc);
      fVar48 = *(float *)(param_1 + 0x1e0) * fVar30;
      fVar12 = *(float *)(param_1 + 0x1e4) * fVar37;
      fVar18 = *(float *)(param_1 + 0x1e8) * fVar45;
      fVar15 = *(float *)(param_1 + 0x1ec) * fVar20;
      fVar19 = fVar27 * fVar14 * _DAT_146acae30 + fVar25 * fVar11 + fVar24 * fVar17 * _DAT_146acae20
               + fVar16 * fVar29 * _DAT_146acae10;
      fVar22 = fVar24 * fVar14 * fRam0000000146acae34 + fVar16 * fVar11 +
               fVar27 * fVar17 * fRam0000000146acae24 + fVar25 * fVar29 * fRam0000000146acae14;
      fVar21 = fVar16 * fVar14 * fRam0000000146acae38 + fVar24 * fVar11 +
               fVar25 * fVar17 * fRam0000000146acae28 + fVar27 * fVar29 * fRam0000000146acae18;
      fVar23 = fVar25 * fVar14 * fRam0000000146acae3c + fVar27 * fVar11 +
               fVar16 * fVar17 * fRam0000000146acae2c + fVar24 * fVar29 * fRam0000000146acae1c;
      fVar16 = fVar18 * fVar17 - fVar12 * fVar29;
      fVar24 = fVar48 * fVar29 - fVar18 * fVar14;
      fVar27 = fVar12 * fVar14 - fVar48 * fVar17;
      fVar33 = fVar15 * fVar11 - fVar15 * fVar11;
      fVar16 = fVar16 + fVar16;
      fVar24 = fVar24 + fVar24;
      fVar27 = fVar27 + fVar27;
      fVar33 = fVar33 + fVar33;
      fVar25 = (fVar27 * fVar17 - fVar24 * fVar29) + fVar16 * fVar11 + fVar48 + pfVar6[4];
      fVar29 = (fVar16 * fVar29 - fVar27 * fVar14) + fVar24 * fVar11 + fVar12 + pfVar6[5];
      fVar14 = (fVar24 * fVar14 - fVar16 * fVar17) + fVar27 * fVar11 + fVar18 + pfVar6[6];
      fVar17 = (fVar33 * fVar11 - fVar33 * fVar11) + fVar33 * fVar11 + fVar15 + pfVar6[7];
    }
    else {
      fVar21 = fVar17 + fVar17;
      fVar23 = fVar29 + fVar29;
      fVar26 = (fVar14 + fVar14) * fVar14;
      fVar22 = (fVar14 + fVar14) * fVar11;
      fVar12 = *(float *)(param_1 + 0x1d0);
      fVar18 = *(float *)(param_1 + 0x1d4);
      fVar15 = *(float *)(param_1 + 0x1d8);
      fVar19 = *(float *)(param_1 + 0x1dc);
      fVar49 = (fVar23 * fVar11 + fVar21 * fVar14) * fVar30;
      fVar50 = (fVar22 + fVar23 * fVar17) * fVar37;
      fVar51 = (fVar21 * fVar11 + fVar23 * fVar14) * fVar45;
      fVar32 = fVar37 * (fVar21 * fVar14 - fVar23 * fVar11);
      fVar36 = fVar45 * (fVar23 * fVar17 - fVar22);
      fVar38 = fVar30 * (fVar23 * fVar14 - fVar21 * fVar11);
      fVar11 = (float)((uint)((_DAT_146acadf0 - (fVar23 * fVar29 + fVar21 * fVar17)) * fVar30) &
                      _DAT_146acae00);
      fVar22 = (float)((uint)((fRam0000000146acadf4 - (fVar23 * fVar29 + fVar26)) * fVar37) &
                      uRam0000000146acae04);
      fVar21 = (float)((uint)((fRam0000000146acadf8 - (fVar21 * fVar17 + fVar26)) * fVar45) &
                      uRam0000000146acae08);
      fVar23 = (float)((uint)((fRam0000000146acadfc - (fVar26 + fVar26)) * fVar20) &
                      uRam0000000146acae0c);
      _local_168 = *(undefined1 (*) [12])(pfVar6 + 4);
      fStack_15c = fRam0000000146acadfc;
      auVar7 = _local_168;
      fVar14 = fVar18 + fVar18;
      fVar17 = fVar15 + fVar15;
      fVar26 = fVar12 * (fVar12 + fVar12);
      fVar29 = fVar19 * (fVar12 + fVar12);
      fVar44 = (fVar19 * fVar17 + fVar14 * fVar12) * fVar28;
      fVar46 = (fVar29 + fVar17 * fVar18) * fVar31;
      fVar47 = (fVar19 * fVar14 + fVar17 * fVar12) * fVar39;
      fVar40 = fVar31 * (fVar14 * fVar12 - fVar19 * fVar17);
      fVar42 = fVar39 * (fVar17 * fVar18 - fVar29);
      fVar43 = fVar28 * (fVar17 * fVar12 - fVar19 * fVar14);
      fVar12 = (float)((uint)((_DAT_146acadf0 - (fVar15 * fVar17 + fVar18 * fVar14)) * fVar28) &
                      _DAT_146acae00);
      fVar15 = (float)((uint)((fRam0000000146acadf4 - (fVar15 * fVar17 + fVar26)) * fVar31) &
                      uRam0000000146acae04);
      fVar18 = (float)((uint)((fRam0000000146acadf8 - (fVar18 * fVar14 + fVar26)) * fVar39) &
                      uRam0000000146acae08);
      fVar19 = (float)((uint)((fRam0000000146acadfc - (fVar26 + fVar26)) * auVar13._12_4_) &
                      uRam0000000146acae0c);
      fVar14 = *(float *)(param_1 + 0x1e0);
      fVar17 = *(float *)(param_1 + 0x1e4);
      fVar29 = *(float *)(param_1 + 0x1e8);
      local_1c8 = fVar44 * fVar32 + fVar12 * fVar11 + fVar43 * fVar51 +
                  fVar19 * (float)local_168._0_4_;
      fStack_1c4 = fVar44 * fVar22 + fVar12 * fVar49 + fVar43 * fVar36 +
                   fVar19 * (float)local_168._4_4_;
      fStack_1c0 = fVar44 * fVar50 + fVar12 * fVar38 + fVar43 * fVar21 + fVar19 * fStack_160;
      fStack_1bc = fVar44 * fVar23 + fVar12 * fVar23 + fVar43 * fVar23 +
                   fVar19 * fRam0000000146acadfc;
      local_1b8 = fVar15 * fVar32 + fVar40 * fVar11 + fVar46 * fVar51 +
                  fVar19 * (float)local_168._0_4_;
      fStack_1b4 = fVar15 * fVar22 + fVar40 * fVar49 + fVar46 * fVar36 +
                   fVar19 * (float)local_168._4_4_;
      fStack_1b0 = fVar15 * fVar50 + fVar40 * fVar38 + fVar46 * fVar21 + fVar19 * fStack_160;
      fStack_1ac = fVar15 * fVar23 + fVar40 * fVar23 + fVar46 * fVar23 +
                   fVar19 * fRam0000000146acadfc;
      local_1a8 = fVar42 * fVar32 + fVar47 * fVar11 + fVar18 * fVar51 +
                  fVar19 * (float)local_168._0_4_;
      fStack_1a4 = fVar42 * fVar22 + fVar47 * fVar49 + fVar18 * fVar36 +
                   fVar19 * (float)local_168._4_4_;
      fStack_1a0 = fVar42 * fVar50 + fVar47 * fVar38 + fVar18 * fVar21 + fVar19 * fStack_160;
      fStack_19c = fVar42 * fVar23 + fVar47 * fVar23 + fVar18 * fVar23 +
                   fVar19 * fRam0000000146acadfc;
      local_198 = fVar17 * fVar32 + fVar14 * fVar11 + fVar29 * fVar51 +
                  fRam0000000146acadfc * (float)local_168._0_4_;
      fStack_194 = fVar17 * fVar22 + fVar14 * fVar49 + fVar29 * fVar36 +
                   fRam0000000146acadfc * (float)local_168._4_4_;
      fStack_190 = fVar17 * fVar50 + fVar14 * fVar38 + fVar29 * fVar21 +
                   fRam0000000146acadfc * fStack_160;
      fStack_18c = fVar17 * fVar23 + fVar14 * fVar23 + fVar29 * fVar23 +
                   fRam0000000146acadfc * fRam0000000146acadfc;
      _local_168 = auVar7;
      FMatrix::RemoveScaling(&local_1c8);
      fVar14 = (float)(-(uint)(fVar27 <= fVar28 * fVar30) & (_DAT_146acaeb0 ^ (uint)fVar25) ^
                      _DAT_146acaeb0);
      fVar17 = (float)(-(uint)(fVar33 <= fVar31 * fVar37) & (uRam0000000146acaeb4 ^ (uint)fVar16) ^
                      uRam0000000146acaeb4);
      fVar29 = (float)(-(uint)(fVar48 <= fVar39 * fVar45) & (uRam0000000146acaeb8 ^ (uint)fVar24) ^
                      uRam0000000146acaeb8);
      local_1c8 = local_1c8 * fVar14;
      fStack_1c0 = fStack_1c0 * fVar14;
      fStack_1c4 = fStack_1c4 * fVar14;
      fStack_1b0 = fStack_1b0 * fVar17;
      fStack_1b4 = fStack_1b4 * fVar17;
      local_1b8 = local_1b8 * fVar17;
      fStack_1a0 = fStack_1a0 * fVar29;
      local_1a8 = local_1a8 * fVar29;
      fStack_1a4 = fStack_1a4 * fVar29;
      FQuat::FQuat(local_168,&local_1c8);
      auVar7._0_4_ = (float)local_168._0_4_ * (float)local_168._0_4_ + fStack_160 * fStack_160;
      auVar7._4_4_ = (float)local_168._4_4_ * (float)local_168._4_4_ + fStack_15c * fStack_15c;
      auVar7._8_4_ = fStack_160 * fStack_160 + (float)local_168._0_4_ * (float)local_168._0_4_;
      auVar7._12_4_ = fStack_15c * fStack_15c + (float)local_168._4_4_ * (float)local_168._4_4_;
      auVar34._0_4_ = auVar7._4_4_ + auVar7._0_4_;
      auVar34._4_4_ = auVar7._8_4_ + auVar7._4_4_;
      auVar34._8_4_ = auVar7._12_4_ + auVar7._8_4_;
      auVar34._12_4_ = auVar7._0_4_ + auVar7._12_4_;
      auVar7 = rsqrtps(auVar7,auVar34);
      fVar14 = auVar7._0_4_;
      fVar29 = auVar7._4_4_;
      fVar11 = auVar7._8_4_;
      fVar25 = auVar7._12_4_;
      fVar14 = (_DAT_146acaea0 - fVar14 * fVar14 * auVar34._0_4_ * _DAT_146acaea0) * fVar14 + fVar14
      ;
      fVar29 = (fRam0000000146acaea4 - fVar29 * fVar29 * auVar34._4_4_ * fRam0000000146acaea4) *
               fVar29 + fVar29;
      fVar11 = (fRam0000000146acaea8 - fVar11 * fVar11 * auVar34._8_4_ * fRam0000000146acaea8) *
               fVar11 + fVar11;
      fVar25 = (fRam0000000146acaeac - fVar25 * fVar25 * auVar34._12_4_ * fRam0000000146acaeac) *
               fVar25 + fVar25;
      fVar17 = 0.0;
      fVar19 = (float)(((uint)(((_DAT_146acaea0 - fVar14 * fVar14 * auVar34._0_4_ * _DAT_146acaea0)
                                * fVar14 + fVar14) * (float)local_168._0_4_) ^ _DAT_146acae90) &
                       -(uint)(1e-08 <= auVar34._0_4_) ^ _DAT_146acae90);
      fVar22 = (float)(((uint)(((fRam0000000146acaea4 -
                                fVar29 * fVar29 * auVar34._4_4_ * fRam0000000146acaea4) * fVar29 +
                               fVar29) * (float)local_168._4_4_) ^ uRam0000000146acae94) &
                       -(uint)(1e-08 <= auVar34._4_4_) ^ uRam0000000146acae94);
      fVar21 = (float)(((uint)(((fRam0000000146acaea8 -
                                fVar11 * fVar11 * auVar34._8_4_ * fRam0000000146acaea8) * fVar11 +
                               fVar11) * fStack_160) ^ uRam0000000146acae98) &
                       -(uint)(1e-08 <= auVar34._8_4_) ^ uRam0000000146acae98);
      fVar23 = (float)(((uint)(((fRam0000000146acaeac -
                                fVar25 * fVar25 * auVar34._12_4_ * fRam0000000146acaeac) * fVar25 +
                               fVar25) * fStack_15c) ^ uRam0000000146acae9c) &
                       -(uint)(1e-08 <= auVar34._12_4_) ^ uRam0000000146acae9c);
      fVar25 = local_198;
      fVar29 = fStack_194;
      fVar14 = fStack_190;
    }
    fVar20 = auVar13._12_4_ * fVar20;
    fVar39 = fVar39 * fVar45;
    fVar31 = fVar31 * fVar37;
    fVar28 = fVar28 * fVar30;
    local_168._4_4_ = fVar29;
    local_168._0_4_ = fVar25;
    fStack_160 = fVar14;
    fStack_15c = fVar17;
    lVar5 = FBoneReference::IsValidToEvaluate(param_1 + 0x200,lVar1);
    if ((char)lVar5 != '\0') {
      if (*(char *)(param_1 + 0x20c) == '\0') {
        iVar4 = *(int *)(param_1 + 0x210);
      }
      else if (*(int *)(param_1 + 0x208) != -1) {
        iVar4 = *(int *)(*(longlong *)(lVar1 + 0x80) + (longlong)*(int *)(param_1 + 0x208) * 4);
      }
      if (*(char *)(local_118[3] + iVar4) == '\0') {
        FUN_14060c680(local_118,iVar4);
      }
      auVar13 = *(undefined1 (*) [16])(local_118[0] + 0x10 + (longlong)iVar4 * 0x30);
      fVar25 = auVar13._0_4_;
      fVar29 = auVar13._4_4_;
      fVar14 = auVar13._8_4_;
      fStack_15c = 0.0;
      _local_168 = auVar13._0_12_;
      lVar5 = local_118[0];
    }
    fVar48 = fRam0000000146acadf8;
    fVar33 = fRam0000000146acadf4;
    fVar27 = _DAT_146acadf0;
    lVar1 = *param_2;
    auVar9._4_4_ = fVar31;
    auVar9._0_4_ = fVar28;
    auVar9._8_4_ = fVar39;
    auVar9._12_4_ = fVar20;
    fVar17 = *(float *)(lVar1 + 0x4d0);
    fVar11 = *(float *)(lVar1 + 0x4d4);
    fVar16 = *(float *)(lVar1 + 0x4d8);
    fVar24 = *(float *)(lVar1 + 0x4dc);
    auVar13 = *(undefined1 (*) [16])(lVar1 + 0x4f0);
    fVar30 = auVar13._0_4_;
    fVar37 = auVar13._4_4_;
    fVar45 = auVar13._8_4_;
    auVar7 = minps(auVar9,auVar13);
    auVar10._4_4_ = -(uint)(auVar7._4_4_ < fRam0000000146acaec4);
    auVar10._0_4_ = -(uint)(auVar7._0_4_ < _DAT_146acaec0);
    auVar10._8_4_ = -(uint)(auVar7._8_4_ < fRam0000000146acaec8);
    auVar10._12_4_ = -(uint)(auVar7._12_4_ < fRam0000000146acaecc);
    iVar4 = movmskps((int)lVar5,auVar10);
    if (iVar4 == 0) {
      fVar25 = fVar25 * fVar30;
      fVar29 = fVar29 * fVar37;
      fVar14 = fVar14 * fVar45;
      fVar20 = fVar14 * fVar11 - fVar29 * fVar16;
      fVar27 = fVar25 * fVar16 - fVar14 * fVar17;
      fVar33 = fVar29 * fVar17 - fVar25 * fVar11;
      fVar20 = fVar20 + fVar20;
      fVar27 = fVar27 + fVar27;
      fVar33 = fVar33 + fVar33;
      auVar41._0_4_ =
           (fVar33 * fVar11 - fVar27 * fVar16) + fVar20 * fVar24 + fVar25 +
           *(float *)(lVar1 + 0x4e0);
      auVar41._4_4_ =
           (fVar20 * fVar16 - fVar33 * fVar17) + fVar27 * fVar24 + fVar29 +
           *(float *)(lVar1 + 0x4e4);
      auVar41._8_4_ =
           (fVar27 * fVar17 - fVar20 * fVar11) + fVar33 * fVar24 + fVar14 +
           *(float *)(lVar1 + 0x4e8);
      fVar20 = fVar23 * fVar17 * _DAT_146acae30 + fVar19 * fVar24 + fVar21 * fVar11 * _DAT_146acae20
               + fVar22 * fVar16 * _DAT_146acae10;
      fVar14 = fVar21 * fVar17 * fRam0000000146acae34 + fVar22 * fVar24 +
               fVar23 * fVar11 * fRam0000000146acae24 + fVar19 * fVar16 * fRam0000000146acae14;
      fVar29 = fVar22 * fVar17 * fRam0000000146acae38 + fVar21 * fVar24 +
               fVar19 * fVar11 * fRam0000000146acae28 + fVar23 * fVar16 * fRam0000000146acae18;
      fVar17 = fVar19 * fVar17 * fRam0000000146acae3c + fVar23 * fVar24 +
               fVar22 * fVar11 * fRam0000000146acae2c + fVar21 * fVar16 * fRam0000000146acae1c;
    }
    else {
      fVar12 = fVar11 + fVar11;
      fVar18 = fVar16 + fVar16;
      fVar14 = *(float *)(lVar1 + 0x4e0);
      fVar29 = *(float *)(lVar1 + 0x4e4);
      fVar25 = *(float *)(lVar1 + 0x4e8);
      fVar15 = fVar17 * (fVar17 + fVar17);
      fVar26 = fVar24 * (fVar17 + fVar17);
      fVar49 = (fVar24 * fVar18 + fVar17 * fVar12) * fVar30;
      fVar50 = (fVar26 + fVar11 * fVar18) * fVar37;
      fVar51 = (fVar24 * fVar12 + fVar17 * fVar18) * fVar45;
      fVar36 = fVar37 * (fVar17 * fVar12 - fVar24 * fVar18);
      fVar40 = fVar45 * (fVar11 * fVar18 - fVar26);
      fVar43 = fVar30 * (fVar17 * fVar18 - fVar24 * fVar12);
      fVar26 = fVar22 + fVar22;
      fVar24 = fVar21 + fVar21;
      fVar17 = (float)((uint)((_DAT_146acadf0 - (fVar16 * fVar18 + fVar11 * fVar12)) * fVar30) &
                      _DAT_146acae00);
      fVar16 = (float)((uint)((fRam0000000146acadf4 - (fVar16 * fVar18 + fVar15)) * fVar37) &
                      uRam0000000146acae04);
      fVar12 = (float)((uint)((fRam0000000146acadf8 - (fVar11 * fVar12 + fVar15)) * fVar45) &
                      uRam0000000146acae08);
      fVar15 = (float)((uint)((fRam0000000146acadfc - (fVar15 + fVar15)) * auVar13._12_4_) &
                      uRam0000000146acae0c);
      fVar32 = (fVar19 + fVar19) * fVar19;
      fVar11 = (fVar19 + fVar19) * fVar23;
      fVar44 = (fVar24 * fVar23 + fVar26 * fVar19) * fVar28;
      fVar46 = (fVar11 + fVar24 * fVar22) * fVar31;
      fVar47 = (fVar26 * fVar23 + fVar24 * fVar19) * fVar39;
      fVar38 = fVar31 * (fVar26 * fVar19 - fVar24 * fVar23);
      fVar42 = fVar39 * (fVar24 * fVar22 - fVar11);
      fVar19 = fVar28 * (fVar24 * fVar19 - fVar26 * fVar23);
      fVar11 = (float)((uint)((_DAT_146acadf0 - (fVar24 * fVar21 + fVar26 * fVar22)) * fVar28) &
                      _DAT_146acae00);
      fVar24 = (float)((uint)((fRam0000000146acadf4 - (fVar24 * fVar21 + fVar32)) * fVar31) &
                      uRam0000000146acae04);
      fVar18 = (float)((uint)((fRam0000000146acadf8 - (fVar26 * fVar22 + fVar32)) * fVar39) &
                      uRam0000000146acae08);
      fVar20 = (float)((uint)((fRam0000000146acadfc - (fVar32 + fVar32)) * fVar20) &
                      uRam0000000146acae0c);
      local_1c8 = fVar44 * fVar36 + fVar11 * fVar17 + fVar19 * fVar51 + fVar20 * fVar14;
      fStack_1c4 = fVar44 * fVar16 + fVar11 * fVar49 + fVar19 * fVar40 + fVar20 * fVar29;
      fStack_1c0 = fVar44 * fVar50 + fVar11 * fVar43 + fVar19 * fVar12 + fVar20 * fVar25;
      fStack_1bc = fVar44 * fVar15 + fVar11 * fVar15 + fVar19 * fVar15 +
                   fVar20 * fRam0000000146acadfc;
      local_1b8 = fVar24 * fVar36 + fVar38 * fVar17 + fVar46 * fVar51 + fVar20 * fVar14;
      fStack_1b4 = fVar24 * fVar16 + fVar38 * fVar49 + fVar46 * fVar40 + fVar20 * fVar29;
      fStack_1b0 = fVar24 * fVar50 + fVar38 * fVar43 + fVar46 * fVar12 + fVar20 * fVar25;
      fStack_1ac = fVar24 * fVar15 + fVar38 * fVar15 + fVar46 * fVar15 +
                   fVar20 * fRam0000000146acadfc;
      local_1a8 = fVar42 * fVar36 + fVar47 * fVar17 + fVar18 * fVar51 + fVar20 * fVar14;
      fStack_1a4 = fVar42 * fVar16 + fVar47 * fVar49 + fVar18 * fVar40 + fVar20 * fVar29;
      fStack_1a0 = fVar42 * fVar50 + fVar47 * fVar43 + fVar18 * fVar12 + fVar20 * fVar25;
      fStack_19c = fVar42 * fVar15 + fVar47 * fVar15 + fVar18 * fVar15 +
                   fVar20 * fRam0000000146acadfc;
      local_198 = (float)local_168._4_4_ * fVar36 + (float)local_168._0_4_ * fVar17 +
                  fStack_160 * fVar51 + fRam0000000146acadfc * fVar14;
      fStack_194 = (float)local_168._4_4_ * fVar16 + (float)local_168._0_4_ * fVar49 +
                   fStack_160 * fVar40 + fRam0000000146acadfc * fVar29;
      fStack_190 = (float)local_168._4_4_ * fVar50 + (float)local_168._0_4_ * fVar43 +
                   fStack_160 * fVar12 + fRam0000000146acadfc * fVar25;
      fStack_18c = (float)local_168._4_4_ * fVar15 + (float)local_168._0_4_ * fVar15 +
                   fStack_160 * fVar15 + fRam0000000146acadfc * fRam0000000146acadfc;
      FMatrix::RemoveScaling(&local_1c8);
      fVar20 = (float)(-(uint)(_DAT_146acaec0 <= fVar30 * fVar28) & (_DAT_146acaeb0 ^ (uint)fVar27)
                      ^ _DAT_146acaeb0);
      fVar14 = (float)(-(uint)(fRam0000000146acaec4 <= fVar37 * fVar31) &
                       (uRam0000000146acaeb4 ^ (uint)fVar33) ^ uRam0000000146acaeb4);
      fVar17 = (float)(-(uint)(fRam0000000146acaec8 <= fVar45 * fVar39) &
                       (uRam0000000146acaeb8 ^ (uint)fVar48) ^ uRam0000000146acaeb8);
      local_1c8 = local_1c8 * fVar20;
      fStack_1c4 = fStack_1c4 * fVar20;
      fStack_1c0 = fStack_1c0 * fVar20;
      fStack_1b0 = fStack_1b0 * fVar14;
      fStack_1b4 = fStack_1b4 * fVar14;
      local_1b8 = local_1b8 * fVar14;
      fStack_1a0 = fStack_1a0 * fVar17;
      local_1a8 = local_1a8 * fVar17;
      fStack_1a4 = fStack_1a4 * fVar17;
      FQuat::FQuat(local_168,&local_1c8);
      auVar13._0_4_ = (float)local_168._0_4_ * (float)local_168._0_4_ + fStack_160 * fStack_160;
      auVar13._4_4_ = (float)local_168._4_4_ * (float)local_168._4_4_ + fStack_15c * fStack_15c;
      auVar13._8_4_ = fStack_160 * fStack_160 + (float)local_168._0_4_ * (float)local_168._0_4_;
      auVar13._12_4_ = fStack_15c * fStack_15c + (float)local_168._4_4_ * (float)local_168._4_4_;
      auVar35._0_4_ = auVar13._4_4_ + auVar13._0_4_;
      auVar35._4_4_ = auVar13._8_4_ + auVar13._4_4_;
      auVar35._8_4_ = auVar13._12_4_ + auVar13._8_4_;
      auVar35._12_4_ = auVar13._0_4_ + auVar13._12_4_;
      auVar13 = rsqrtps(auVar13,auVar35);
      fVar20 = auVar13._0_4_;
      fVar14 = auVar13._4_4_;
      fVar17 = auVar13._8_4_;
      fVar11 = auVar13._12_4_;
      fVar20 = (_DAT_146acaea0 - fVar20 * fVar20 * auVar35._0_4_ * _DAT_146acaea0) * fVar20 + fVar20
      ;
      fVar14 = (fRam0000000146acaea4 - fVar14 * fVar14 * auVar35._4_4_ * fRam0000000146acaea4) *
               fVar14 + fVar14;
      fVar17 = (fRam0000000146acaea8 - fVar17 * fVar17 * auVar35._8_4_ * fRam0000000146acaea8) *
               fVar17 + fVar17;
      fVar11 = (fRam0000000146acaeac - fVar11 * fVar11 * auVar35._12_4_ * fRam0000000146acaeac) *
               fVar11 + fVar11;
      auVar41._4_4_ = fStack_194;
      auVar41._0_4_ = local_198;
      auVar41._8_4_ = fStack_190;
      fVar20 = (float)(((uint)(((_DAT_146acaea0 - fVar20 * fVar20 * auVar35._0_4_ * _DAT_146acaea0)
                                * fVar20 + fVar20) * (float)local_168._0_4_) ^ _DAT_146acae90) &
                       -(uint)(1e-08 <= auVar35._0_4_) ^ _DAT_146acae90);
      fVar14 = (float)(((uint)(((fRam0000000146acaea4 -
                                fVar14 * fVar14 * auVar35._4_4_ * fRam0000000146acaea4) * fVar14 +
                               fVar14) * (float)local_168._4_4_) ^ uRam0000000146acae94) &
                       -(uint)(1e-08 <= auVar35._4_4_) ^ uRam0000000146acae94);
      fVar29 = (float)(((uint)(((fRam0000000146acaea8 -
                                fVar17 * fVar17 * auVar35._8_4_ * fRam0000000146acaea8) * fVar17 +
                               fVar17) * fStack_160) ^ uRam0000000146acae98) &
                       -(uint)(1e-08 <= auVar35._8_4_) ^ uRam0000000146acae98);
      fVar17 = (float)(((uint)(((fRam0000000146acaeac -
                                fVar11 * fVar11 * auVar35._12_4_ * fRam0000000146acaeac) * fVar11 +
                               fVar11) * fStack_15c) ^ uRam0000000146acae9c) &
                       -(uint)(1e-08 <= auVar35._12_4_) ^ uRam0000000146acae9c);
    }
    fVar48 = *(float *)(lVar1 + 0x500) * _DAT_146acaed0;
    fVar12 = *(float *)(lVar1 + 0x504) * fRam0000000146acaed4;
    fVar18 = *(float *)(lVar1 + 0x508) * fRam0000000146acaed8;
    fVar15 = *(float *)(lVar1 + 0x50c) * fRam0000000146acaedc;
    fVar27 = *(float *)(param_1 + 0x180) - auVar41._0_4_;
    fVar24 = *(float *)(param_1 + 0x184) - auVar41._4_4_;
    fVar33 = *(float *)(param_1 + 0x188) - auVar41._8_4_;
    fVar11 = fVar33 * fVar12 - fVar24 * fVar18;
    fVar25 = fVar27 * fVar18 - fVar33 * fVar48;
    fVar16 = fVar24 * fVar48 - fVar27 * fVar12;
    fVar11 = fVar11 + fVar11;
    fVar25 = fVar25 + fVar25;
    fVar16 = fVar16 + fVar16;
    local_188 = (fVar16 * fVar12 - fVar25 * fVar18) + fVar11 * fVar15 + fVar27;
    local_184 = (fVar11 * fVar18 - fVar16 * fVar48) + fVar25 * fVar15 + fVar24;
    local_180 = (fVar25 * fVar48 - fVar11 * fVar12) + fVar16 * fVar15 + fVar33;
    fVar11 = local_184 * local_184 + local_188 * local_188 + local_180 * local_180;
    if (fVar11 != 1.0) {
      if (1e-08 <= fVar11) {
        auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
        fVar25 = auVar13._0_4_;
        fVar25 = fVar25 + fVar25 * (0.5 - fVar11 * 0.5 * fVar25 * fVar25);
        fVar25 = fVar25 + fVar25 * (0.5 - fVar11 * 0.5 * fVar25 * fVar25);
        local_188 = fVar25 * local_188;
        local_184 = fVar25 * local_184;
        local_180 = fVar25 * local_180;
      }
      else {
        local_188 = DAT_1468b5d90;
        local_184 = DAT_1468b5d94;
        local_180 = DAT_1468b5d98;
      }
    }
    fVar11 = *(float *)(param_1 + 0x1a0) * fVar30 * fVar28;
    fVar37 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x1a0) >> 0x20) * fVar37 * fVar31;
    fVar39 = *(float *)(param_1 + 0x1a8) * fVar45 * fVar39;
    fVar28 = fVar39 * fVar14 - fVar37 * fVar29;
    fVar30 = fVar11 * fVar29 - fVar39 * fVar20;
    fVar31 = fVar37 * fVar20 - fVar11 * fVar14;
    fVar28 = fVar28 + fVar28;
    fVar30 = fVar30 + fVar30;
    fVar31 = fVar31 + fVar31;
    fVar45 = (fVar31 * fVar14 - fVar30 * fVar29) + fVar17 * fVar28 + fVar11;
    fVar29 = (fVar28 * fVar29 - fVar31 * fVar20) + fVar17 * fVar30 + fVar37;
    fVar39 = (fVar30 * fVar20 - fVar28 * fVar14) + fVar17 * fVar31 + fVar39;
    fVar37 = fVar29 * fVar29 + fVar45 * fVar45 + fVar39 * fVar39;
    fVar28 = fVar29;
    fVar30 = fVar45;
    fVar31 = fVar39;
    if ((fVar37 != 1.0) &&
       (fVar28 = DAT_1468b5d94, fVar30 = DAT_1468b5d90, fVar31 = DAT_1468b5d98, 1e-08 <= fVar37)) {
      auVar13 = rsqrtss(ZEXT416((uint)fVar37),ZEXT416((uint)fVar37));
      fVar31 = auVar13._0_4_;
      fVar31 = fVar31 + fVar31 * (0.5 - fVar37 * 0.5 * fVar31 * fVar31);
      fVar31 = fVar31 + fVar31 * (0.5 - fVar37 * 0.5 * fVar31 * fVar31);
      fVar28 = fVar29 * fVar31;
      fVar30 = fVar45 * fVar31;
      fVar31 = fVar39 * fVar31;
    }
    local_120 = DAT_1464aa7b0;
    local_130 = DAT_1464aa7c0;
    local_140 = DAT_1464aa7a0;
    fVar37 = fVar31 * fVar12 - fVar28 * fVar18;
    fVar39 = fVar30 * fVar18 - fVar31 * fVar48;
    fVar45 = fVar28 * fVar48 - fVar30 * fVar12;
    fVar37 = fVar37 + fVar37;
    fVar39 = fVar39 + fVar39;
    fVar45 = fVar45 + fVar45;
    local_158 = (fVar45 * fVar12 - fVar39 * fVar18) + fVar15 * fVar37 + fVar30;
    local_154 = (fVar37 * fVar18 - fVar45 * fVar48) + fVar15 * fVar39 + fVar28;
    local_150 = (fVar39 * fVar48 - fVar37 * fVar12) + fVar15 * fVar45 + fVar31;
    local_128 = DAT_1464aa7a8;
    local_138 = DAT_1464aa7b8;
    local_148 = DAT_1464aa798;
    FMath::GetAzimuthAndElevation(&local_res18,&local_158,&local_128,&local_138,&local_148);
    FMath::GetAzimuthAndElevation(&local_res10,&local_188,&local_128,&local_138,&local_148);
    local_178 = (local_res10 - local_res18) * 57.295776;
    fVar28 = (float)(int)(local_178 * 0.0027777778) * 360.0;
    if (ABS(local_178) < ABS(fVar28)) {
      fVar28 = local_178;
    }
    local_178 = local_178 - fVar28;
    if (local_178 < 0.0) {
      local_178 = local_178 + 360.0;
    }
    if (180.0 < local_178) {
      local_178 = local_178 - 360.0;
    }
    local_174 = (local_res14 - local_res1c) * 57.295776;
    fVar28 = (float)(int)(local_174 * 0.0027777778) * 360.0;
    if (ABS(local_174) < ABS(fVar28)) {
      fVar28 = local_174;
    }
    local_174 = local_174 - fVar28;
    if (local_174 < 0.0) {
      local_174 = local_174 + 360.0;
    }
    if (180.0 < local_174) {
      local_174 = local_174 - 360.0;
    }
    if (local_118[7] != 0) {
      FMemory::Free();
    }
    if (local_118[5] != 0) {
      FMemory::Free();
    }
    if (local_118[3] != 0) {
      FMemory::Free();
    }
  }
  *(float *)(param_1 + 0x68) = local_178;
  *(float *)(param_1 + 0x6c) = local_174;
  if ((*(longlong *)(param_1 + 0x80) != 0) && (*(char *)(param_1 + 0x250) == '\0')) {
    FUN_1422acfa0(*(longlong *)(param_1 + 0x80),&local_178,param_1 + 0x120);
  }
  return;
}



// FUNCTION 141fb3b80 FUN_141fb3b80 body=731 status=ok
// SIG undefined FUN_141fb3b80(void)

void FUN_141fb3b80(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  float fVar6;
  float local_res8 [2];
  longlong local_res18 [2];
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar7;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  if (param_1[0x10] != 0) {
    lVar3 = *(longlong *)(*param_2 + 0xb0);
    if ((lVar3 != 0) && (*(longlong *)(param_1[0x10] + 0x38) == lVar3)) {
      lVar3 = FUN_14225c6d0(*param_2,*(undefined4 *)((longlong)param_1 + 0x34),local_res18);
      local_48 = *(float *)(param_1 + 0xd);
      local_44 = *(float *)((longlong)param_1 + 0x6c);
      local_40 = (undefined4)param_1[0xe];
      if (param_1[0x26] != param_1[0x10]) {
        FUN_141fadd20(param_1,(char)param_1[0x11]);
      }
      *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)((longlong)param_2 + 0xc);
      bVar1 = false;
      bVar2 = *(byte *)(param_1 + 0x2b);
      fVar6 = local_48;
      if ((bVar2 == 1) || (fVar6 = local_44, bVar2 == 2)) {
        lVar4 = UBlendSpaceBase::GetBlendParameter(param_1[0x10],bVar2 - 1);
        if ((fVar6 < *(float *)(lVar4 + 0x10)) ||
           (lVar4 = UBlendSpaceBase::GetBlendParameter(param_1[0x10],*(byte *)(param_1 + 0x2b) - 1),
           *(float *)(lVar4 + 0x14) <= fVar6 && fVar6 != *(float *)(lVar4 + 0x14))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      local_res8[0] = *(float *)((longlong)param_1 + 0x74);
      *(byte *)(lVar3 + 0x1d) = *(byte *)(lVar3 + 0x1d) & 0xfe;
      if (((((char)param_1[0x27] == '\0') && ((char)param_1[0x28] == '\0')) ||
          (*(float *)((longlong)param_1 + 0x13c) <= 0.0)) || (bVar1)) {
        *(undefined4 *)((longlong)param_1 + 0x144) = 0x7f7fffff;
        *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
      }
      else {
        fVar6 = (float)FUN_1422acd00(param_1[0x10],param_1 + 0x24);
        if (0.0 < fVar6) {
          local_res8[0] = *(float *)((longlong)param_1 + 0x13c) / fVar6;
          FUN_1422b4a10(param_1 + 0x28,local_res8,(char)param_1[0x27],
                        *(undefined4 *)(*param_2 + 0x660),CONCAT44(uVar7,(int)param_2[2]));
          if (((*param_2 == 0) || ((char)param_1[0x28] == '\0')) ||
             (ABS(*(float *)(param_1 + 0x29) - 1.0) <= 1e-08)) {
            local_38 = 0x3f800000;
            puVar5 = &local_38;
            local_30 = 0;
          }
          else {
            puVar5 = (undefined8 *)(*param_2 + 0x698);
          }
          FUN_1422b3cf0(param_1 + 0x28,puVar5);
          *(byte *)(lVar3 + 0x1d) = *(byte *)(lVar3 + 0x1d) | 1;
        }
      }
      bVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      *(byte *)(lVar3 + 0x1d) = *(byte *)(lVar3 + 0x1d) & 0xfd;
      *(byte *)(lVar3 + 0x1d) = *(byte *)(lVar3 + 0x1d) | (bVar2 & 1) * '\x02';
      FUN_142277750(*param_2,lVar3,param_1[0x10],&local_48,param_1 + 0x24,param_1 + 0x12,
                    (char)param_1[0xf],local_res8[0],(int)param_2[1],param_1 + 8,
                    (longlong)param_1 + 0x44);
      if (local_res18[0] != 0) {
        FUN_1422b4c10(local_res18[0],(char)param_1[7]);
      }
      param_1[0x26] = param_1[0x10];
    }
  }
  return;
}



// FUNCTION 141fb3ee0 FUN_141fb3ee0 body=5852 status=ok
// SIG undefined FUN_141fb3ee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141fb3ee0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char cVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 *puVar20;
  longlong lVar21;
  undefined8 *puVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar31;
  float fVar32;
  uint uVar33;
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
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auStack_338 [32];
  float *local_318;
  undefined8 *local_310;
  float *local_308;
  longlong local_300;
  undefined4 local_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined8 local_2a8;
  uint local_2a0;
  undefined8 local_298;
  float local_290;
  undefined8 local_288;
  float fStack_280;
  float fStack_27c;
  longlong local_278;
  longlong local_270;
  undefined8 local_268;
  float fStack_260;
  float fStack_25c;
  int *local_258;
  uint local_250;
  uint local_24c;
  uint local_248;
  float local_244;
  float local_240;
  float local_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  float local_22c;
  float local_228;
  float local_224;
  uint local_220;
  uint local_21c;
  uint local_218;
  float local_214;
  float local_210;
  float local_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  longlong local_1e0;
  int *local_1d8;
  undefined8 local_1c8;
  float local_1c0;
  undefined8 local_1b8;
  uint local_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  uint local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [8];
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
  undefined1 local_138 [8];
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  iVar15 = *(int *)(param_1 + 0x2e0);
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  local_270 = param_2;
  if (*(int *)(param_1 + 0x2e4) != iVar15) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x2d8);
  }
  iVar15 = *(int *)(param_1 + 0x2f0);
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  if (*(int *)(param_1 + 0x2f4) != iVar15) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x2e8);
  }
  iVar15 = *(int *)(param_1 + 0x300);
  *(undefined4 *)(param_1 + 0x300) = 0;
  if (*(int *)(param_1 + 0x304) != iVar15) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x2f8);
  }
  local_258 = *(int **)(param_1 + 0x328);
  lVar21 = *(longlong *)(param_2 + 0x18);
  local_1d8 = local_258 + *(int *)(param_1 + 0x330);
  local_278 = lVar21;
  if (local_258 != local_1d8) {
    do {
      lVar19 = (longlong)*local_258;
      local_288 = *(longlong *)(param_1 + 0x318) + lVar19 * 0x18;
      local_268 = lVar19;
      cVar13 = FBoneReference::IsValidToEvaluate(local_288,lVar21);
      if (cVar13 != '\0') {
        puVar22 = (undefined8 *)(lVar19 * 0x1f0 + *(longlong *)(param_1 + 0x2a8));
        lVar19 = 0;
        if (puVar22[0x3c] != 0) {
          lVar19 = puVar22[0x3c];
        }
        if (*(char *)(local_288 + 0xc) == '\0') {
          iVar15 = *(int *)(local_288 + 0x10);
        }
        else if (*(int *)(local_288 + 8) == -1) {
          iVar15 = -1;
        }
        else {
          iVar15 = *(int *)(*(longlong *)(lVar21 + 0x80) + (longlong)*(int *)(local_288 + 8) * 4);
        }
        plVar1 = (longlong *)(param_2 + 8);
        local_288 = (longlong)iVar15;
        local_1e0 = lVar19;
        if (*(char *)(local_288 + *(longlong *)(param_2 + 0x20)) == '\0') {
          FUN_14060c680(plVar1);
        }
        puVar16 = (undefined8 *)(local_288 * 0x30 + *plVar1);
        _local_138 = *(undefined1 (*) [16])(puVar16 + 2);
        local_148 = (float)*puVar16;
        fStack_144 = (float)((ulonglong)*puVar16 >> 0x20);
        fStack_140 = (float)puVar16[1];
        fStack_13c = (float)((ulonglong)puVar16[1] >> 0x20);
        local_128 = puVar16[4];
        uStack_120 = puVar16[5];
        local_318 = &local_148;
        FUN_141fa58e0(param_1,&local_118,*(undefined1 *)(param_1 + 0x140),param_2);
        local_2a0 = *(uint *)(param_1 + 0x1ac);
        uVar33 = local_108;
        uVar31 = uStack_104;
        uVar23 = uStack_100;
        fVar61 = local_118;
        fVar62 = fStack_114;
        fVar63 = fStack_110;
        fVar64 = fStack_10c;
        local_2a8 = *(undefined8 *)(param_1 + 0x1a4);
        if (lVar19 != 0) {
          uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x308) + local_268 * 0xc);
          local_2a8._0_4_ = (uint)uVar3;
          local_2a8._4_4_ = (uint)((ulonglong)uVar3 >> 0x20);
          uVar33 = (uint)local_2a8 ^ 0x80000000;
          local_2a0 = *(uint *)(*(longlong *)(param_1 + 0x308) + 8 + local_268 * 0xc);
          uVar31 = local_2a8._4_4_ ^ 0x80000000;
          uVar23 = local_2a0 ^ 0x80000000;
          fVar61 = DAT_1464aa810;
          fVar62 = DAT_1464aa814;
          fVar63 = DAT_1464aa818;
          fVar64 = DAT_1464aa81c;
          local_2a8 = uVar3;
        }
        local_318 = (float *)puVar22;
        if (*(char *)(param_1 + 0x244) == '\0') {
          if (*(char *)(param_1 + 0x1ec) != '\0') {
            local_308 = &local_244;
            local_2f0 = 0x7f7fffff;
            local_2f8 = 0xff7fffff;
            fVar38 = fVar63 + fVar63;
            fVar44 = -fVar62 + -fVar62;
            local_244 = (fVar44 * fVar62 - fVar38 * fVar63) + 1.0;
            local_23c = fVar44 * fVar64 + fVar38 * fVar61;
            local_240 = fVar38 * fVar64 - fVar44 * fVar61;
            local_300 = CONCAT44(*(undefined4 *)(param_1 + 0x1fc),*(undefined4 *)(param_1 + 0x1f0));
            local_310 = &local_2a8;
            local_238 = uVar33;
            local_234 = uVar31;
            local_230 = uVar23;
            FAnimPhys::ConstrainAlongDirection();
          }
          if (*(char *)(param_1 + 0x1ed) != '\0') {
            local_308 = &local_22c;
            local_2f0 = 0x7f7fffff;
            fVar38 = fVar61 + fVar61;
            local_2f8 = 0xff7fffff;
            fVar44 = -fVar63 + -fVar63;
            local_22c = fVar44 * fVar64 + fVar38 * fVar62;
            local_224 = fVar38 * fVar64 - fVar44 * fVar62;
            local_300 = CONCAT44(*(undefined4 *)(param_1 + 0x200),*(undefined4 *)(param_1 + 500));
            local_228 = (fVar44 * fVar63 - fVar38 * fVar61) + 1.0;
            local_310 = &local_2a8;
            local_318 = (float *)puVar22;
            local_220 = uVar33;
            local_21c = uVar31;
            local_218 = uVar23;
            FAnimPhys::ConstrainAlongDirection();
          }
          if (*(char *)(param_1 + 0x1ee) != '\0') {
            local_308 = &local_214;
            local_2f0 = 0x7f7fffff;
            local_2f8 = 0xff7fffff;
            fVar44 = -fVar61 + -fVar61;
            fVar38 = fVar62 + fVar62;
            local_214 = fVar38 * fVar64 - fVar44 * fVar63;
            local_210 = fVar44 * fVar64 + fVar38 * fVar63;
            local_300 = CONCAT44(*(undefined4 *)(param_1 + 0x204),*(undefined4 *)(param_1 + 0x1f8));
            local_20c = (fVar44 * fVar61 - fVar38 * fVar62) + 1.0;
            local_310 = &local_2a8;
            local_318 = (float *)puVar22;
            local_208 = uVar33;
            local_204 = uVar31;
            local_200 = uVar23;
            FAnimPhys::ConstrainAlongDirection();
          }
        }
        else {
          local_310 = &local_2a8;
          local_250 = uVar33;
          local_24c = uVar31;
          local_248 = uVar23;
          FAnimPhys::ConstrainPositionNailed();
        }
        if (*(char *)(param_1 + 0x208) == '\0') {
          if (*(char *)(param_1 + 0x1d8) == '\0') {
            local_2f8 = 0x3e99999a;
          }
          else {
            local_2f8 = *(undefined4 *)(param_1 + 0x1dc);
          }
          local_300 = param_1 + 0x228;
          local_308 = (float *)(param_1 + 0x21c);
          local_310 = (undefined8 *)CONCAT71(local_310._1_7_,*(undefined1 *)(param_1 + 0x209));
          local_318 = (float *)&local_268;
          local_268 = CONCAT44(fVar62,fVar61);
          fStack_260 = fVar63;
          fStack_25c = fVar64;
          FAnimPhys::ConstrainAngularRange(local_308,param_1 + 0x2e8,lVar19,puVar22);
        }
        else {
          if (*(char *)(param_1 + 0x1d8) == '\0') {
            uVar14 = 0x3e99999a;
          }
          else {
            uVar14 = *(undefined4 *)(param_1 + 0x1dc);
          }
          local_310 = &local_1fc;
          local_300 = CONCAT44(local_300._4_4_,uVar14);
          local_1fc = 0x3f800000;
          local_1f4 = 0;
          fVar44 = -fStack_114 + -fStack_114;
          fVar38 = fStack_110 + fStack_110;
          local_1f0 = (fVar44 * fStack_114 - fVar38 * fStack_110) + 1.0;
          local_1e8 = fVar44 * fStack_10c + fVar38 * local_118;
          local_1ec = fVar38 * fStack_10c - fVar44 * local_118;
          local_308 = (float *)CONCAT44(local_308._4_4_,*(undefined4 *)(param_1 + 0x20c));
          local_318 = (float *)puVar22;
          FAnimPhys::ConstrainConeAngle();
        }
        if ((0 < *(int *)(param_1 + 600)) && (*(char *)(param_1 + 0x248) != '\0')) {
          lVar19 = *(longlong *)(param_1 + 0x250);
          local_268 = (longlong)*(int *)(param_1 + 600) * 0x50 + lVar19;
          if (lVar19 != local_268) {
            puVar16 = (undefined8 *)(lVar19 + 0x40);
            do {
              local_178 = puVar16[-4];
              uStack_170 = puVar16[-3];
              _local_168 = *(undefined1 (*) [16])(puVar16 + -2);
              local_158 = (float)*puVar16;
              fStack_154 = (float)((ulonglong)*puVar16 >> 0x20);
              fStack_150 = (float)puVar16[1];
              fStack_14c = (float)((ulonglong)puVar16[1] >> 0x20);
              cVar13 = FBoneReference::IsValidToEvaluate(lVar19,lVar21);
              if (cVar13 != '\0') {
                if (*(char *)((longlong)puVar16 + -0x34) == '\0') {
                  iVar15 = *(int *)(puVar16 + -6);
                }
                else if (*(int *)(puVar16 + -7) == -1) {
                  iVar15 = -1;
                }
                else {
                  iVar15 = *(int *)(*(longlong *)(lVar21 + 0x80) +
                                   (longlong)*(int *)(puVar16 + -7) * 4);
                }
                if (*(char *)((longlong)iVar15 + *(longlong *)(param_2 + 0x20)) == '\0') {
                  FUN_14060c680(plVar1);
                }
                puVar17 = (undefined8 *)((longlong)iVar15 * 0x30 + *plVar1);
                local_2e8 = *puVar17;
                uStack_2e0 = puVar17[1];
                local_2d8 = puVar17[2];
                uStack_2d0 = puVar17[3];
                local_2c8 = puVar17[4];
                uStack_2c0 = puVar17[5];
                local_318 = (float *)&local_2e8;
                uVar14 = FUN_141fa58e0(param_1,&local_148,*(undefined1 *)(param_1 + 0x140),local_270
                                      );
                fVar12 = fStack_14c;
                fVar11 = fStack_150;
                fVar10 = fStack_154;
                fVar9 = local_158;
                fVar43 = fRam0000000146acadf8;
                fVar42 = fRam0000000146acadf4;
                fVar41 = _DAT_146acadf0;
                auVar24._4_4_ = fStack_154;
                auVar24._0_4_ = local_158;
                auVar24._8_4_ = fStack_150;
                auVar24._12_4_ = fStack_14c;
                auVar7._8_8_ = uStack_120;
                auVar7._0_8_ = local_128;
                fVar38 = (float)local_128;
                fVar44 = (float)((ulonglong)local_128 >> 0x20);
                fVar54 = (float)uStack_120;
                fVar32 = (float)((ulonglong)uStack_120 >> 0x20);
                auVar24 = minps(auVar24,auVar7);
                local_288 = CONCAT44(fRam0000000146acaec4,_DAT_146acaec0);
                fStack_280 = fRam0000000146acaec8;
                fStack_27c = fRam0000000146acaecc;
                auVar25._4_4_ = -(uint)(auVar24._4_4_ < fRam0000000146acaec4);
                auVar25._0_4_ = -(uint)(auVar24._0_4_ < _DAT_146acaec0);
                auVar25._8_4_ = -(uint)(auVar24._8_4_ < fRam0000000146acaec8);
                auVar25._12_4_ = -(uint)(auVar24._12_4_ < fRam0000000146acaecc);
                iVar15 = movmskps(uVar14,auVar25);
                if (iVar15 == 0) {
                  local_168._0_4_ = fVar38 * (float)local_168._0_4_;
                  local_168._4_4_ = fVar44 * (float)local_168._4_4_;
                  fStack_160 = fVar54 * fStack_160;
                  fStack_15c = fVar32 * fStack_15c;
                  fVar43 = local_148 * local_178._4_4_;
                  fVar35 = local_148 * (float)local_178;
                  fVar41 = fStack_144 * (float)local_178;
                  fVar42 = fStack_144 * local_178._4_4_;
                  local_178 = CONCAT44(local_148 * (float)uStack_170 * fRam0000000146acae34 +
                                       local_178._4_4_ * fStack_13c +
                                       fStack_144 * uStack_170._4_4_ * fRam0000000146acae24 +
                                       fStack_140 * (float)local_178 * fRam0000000146acae14,
                                       local_148 * uStack_170._4_4_ * _DAT_146acae30 +
                                       (float)local_178 * fStack_13c +
                                       fStack_144 * (float)uStack_170 * _DAT_146acae20 +
                                       fStack_140 * local_178._4_4_ * _DAT_146acae10);
                  uStack_170 = CONCAT44(fVar35 * fRam0000000146acae3c +
                                        uStack_170._4_4_ * fStack_13c +
                                        fVar42 * fRam0000000146acae2c +
                                        fStack_140 * (float)uStack_170 * fRam0000000146acae1c,
                                        fVar43 * fRam0000000146acae38 +
                                        (float)uStack_170 * fStack_13c +
                                        fVar41 * fRam0000000146acae28 +
                                        fStack_140 * uStack_170._4_4_ * fRam0000000146acae18);
                  fVar41 = fStack_160 * fStack_144 - (float)local_168._4_4_ * fStack_140;
                  fVar42 = (float)local_168._0_4_ * fStack_140 - fStack_160 * local_148;
                  fVar43 = (float)local_168._4_4_ * local_148 - (float)local_168._0_4_ * fStack_144;
                  fVar35 = fStack_15c * fStack_13c - fStack_15c * fStack_13c;
                  fVar41 = fVar41 + fVar41;
                  fVar42 = fVar42 + fVar42;
                  fVar43 = fVar43 + fVar43;
                  fVar35 = fVar35 + fVar35;
                  local_168._0_4_ =
                       (fVar43 * fStack_144 - fVar42 * fStack_140) +
                       fVar41 * fStack_13c + (float)local_168._0_4_ + (float)local_138._0_4_;
                  local_168._4_4_ =
                       (fVar41 * fStack_140 - fVar43 * local_148) +
                       fVar42 * fStack_13c + (float)local_168._4_4_ + (float)local_138._4_4_;
                  fStack_160 = (fVar42 * local_148 - fVar41 * fStack_144) +
                               fVar43 * fStack_13c + fStack_160 + fStack_130;
                  fStack_15c = (fVar35 * fStack_13c - fVar35 * fStack_13c) +
                               fVar35 * fStack_13c + fStack_15c + fStack_12c;
                }
                else {
                  fVar34 = fStack_144 + fStack_144;
                  fVar37 = fStack_140 + fStack_140;
                  fVar58 = fVar38 * local_158;
                  fVar59 = fVar44 * fStack_154;
                  fVar60 = fVar54 * fStack_150;
                  fVar39 = (local_148 + local_148) * local_148;
                  fVar35 = (local_148 + local_148) * fStack_13c;
                  fVar55 = (fVar37 * fStack_13c + fVar34 * local_148) * fVar38;
                  fVar56 = (fVar35 + fVar37 * fStack_144) * fVar44;
                  fVar57 = (fVar34 * fStack_13c + fVar37 * local_148) * fVar54;
                  fVar45 = fVar44 * (fVar34 * local_148 - fVar37 * fStack_13c);
                  fVar47 = fVar54 * (fVar37 * fStack_144 - fVar35);
                  fVar49 = fVar38 * (fVar37 * local_148 - fVar34 * fStack_13c);
                  fVar35 = (float)((uint)((_DAT_146acadf0 -
                                          (fVar37 * fStack_140 + fVar34 * fStack_144)) * fVar38) &
                                  _DAT_146acae00);
                  fVar37 = (float)((uint)((fRam0000000146acadf4 - (fVar37 * fStack_140 + fVar39)) *
                                         fVar44) & uRam0000000146acae04);
                  fVar29 = (float)((uint)((fRam0000000146acadf8 - (fVar34 * fStack_144 + fVar39)) *
                                         fVar54) & uRam0000000146acae08);
                  fVar30 = (float)((uint)((fRam0000000146acadfc - (fVar39 + fVar39)) * fVar32) &
                                  uRam0000000146acae0c);
                  fVar36 = local_178._4_4_ + local_178._4_4_;
                  fVar39 = (float)uStack_170 + (float)uStack_170;
                  fVar40 = ((float)local_178 + (float)local_178) * (float)local_178;
                  fVar34 = ((float)local_178 + (float)local_178) * uStack_170._4_4_;
                  fVar51 = (fVar39 * uStack_170._4_4_ + fVar36 * (float)local_178) * local_158;
                  fVar52 = (fVar34 + fVar39 * local_178._4_4_) * fStack_154;
                  fVar53 = (fVar36 * uStack_170._4_4_ + fVar39 * (float)local_178) * fStack_150;
                  fVar46 = fStack_154 * (fVar36 * (float)local_178 - fVar39 * uStack_170._4_4_);
                  fVar48 = fStack_150 * (fVar39 * local_178._4_4_ - fVar34);
                  fVar50 = local_158 * (fVar39 * (float)local_178 - fVar36 * uStack_170._4_4_);
                  fVar34 = (float)((uint)((_DAT_146acadf0 -
                                          (fVar39 * (float)uStack_170 + fVar36 * local_178._4_4_)) *
                                         local_158) & _DAT_146acae00);
                  fVar39 = (float)((uint)((fRam0000000146acadf4 -
                                          (fVar39 * (float)uStack_170 + fVar40)) * fStack_154) &
                                  uRam0000000146acae04);
                  fVar36 = (float)((uint)((fRam0000000146acadf8 -
                                          (fVar36 * local_178._4_4_ + fVar40)) * fStack_150) &
                                  uRam0000000146acae08);
                  fVar40 = (float)((uint)((fRam0000000146acadfc - (fVar40 + fVar40)) * fStack_14c) &
                                  uRam0000000146acae0c);
                  local_2e8._0_4_ =
                       fVar51 * fVar45 + fVar34 * fVar35 + fVar50 * fVar57 +
                       fVar40 * (float)local_138._0_4_;
                  local_2e8._4_4_ =
                       fVar51 * fVar37 + fVar34 * fVar55 + fVar50 * fVar47 +
                       fVar40 * (float)local_138._4_4_;
                  uStack_2e0._0_4_ =
                       fVar51 * fVar56 + fVar34 * fVar49 + fVar50 * fVar29 + fVar40 * fStack_130;
                  uStack_2e0._4_4_ =
                       fVar51 * fVar30 + fVar34 * fVar30 + fVar50 * fVar30 +
                       fVar40 * fRam0000000146acadfc;
                  local_2d8._0_4_ =
                       fVar39 * fVar45 + fVar46 * fVar35 + fVar52 * fVar57 +
                       fVar40 * (float)local_138._0_4_;
                  local_2d8._4_4_ =
                       fVar39 * fVar37 + fVar46 * fVar55 + fVar52 * fVar47 +
                       fVar40 * (float)local_138._4_4_;
                  uStack_2d0._0_4_ =
                       fVar39 * fVar56 + fVar46 * fVar49 + fVar52 * fVar29 + fVar40 * fStack_130;
                  uStack_2d0._4_4_ =
                       fVar39 * fVar30 + fVar46 * fVar30 + fVar52 * fVar30 +
                       fVar40 * fRam0000000146acadfc;
                  local_2c8._0_4_ =
                       fVar48 * fVar45 + fVar53 * fVar35 + fVar36 * fVar57 +
                       fVar40 * (float)local_138._0_4_;
                  local_2c8._4_4_ =
                       fVar48 * fVar37 + fVar53 * fVar55 + fVar36 * fVar47 +
                       fVar40 * (float)local_138._4_4_;
                  uStack_2c0._0_4_ =
                       fVar48 * fVar56 + fVar53 * fVar49 + fVar36 * fVar29 + fVar40 * fStack_130;
                  uStack_2c0._4_4_ =
                       fVar48 * fVar30 + fVar53 * fVar30 + fVar36 * fVar30 +
                       fVar40 * fRam0000000146acadfc;
                  local_2b8 = (float)local_168._4_4_ * fVar45 + (float)local_168._0_4_ * fVar35 +
                              fStack_160 * fVar57 + fRam0000000146acadfc * (float)local_138._0_4_;
                  fStack_2b4 = (float)local_168._4_4_ * fVar37 + (float)local_168._0_4_ * fVar55 +
                               fStack_160 * fVar47 + fRam0000000146acadfc * (float)local_138._4_4_;
                  fStack_2b0 = (float)local_168._4_4_ * fVar56 + (float)local_168._0_4_ * fVar49 +
                               fStack_160 * fVar29 + fRam0000000146acadfc * fStack_130;
                  fStack_2ac = (float)local_168._4_4_ * fVar30 + (float)local_168._0_4_ * fVar30 +
                               fStack_160 * fVar30 + fRam0000000146acadfc * fRam0000000146acadfc;
                  FMatrix::RemoveScaling(&local_2e8);
                  fVar41 = (float)(-(uint)((float)local_288 <= fVar58) &
                                   (_DAT_146acaeb0 ^ (uint)fVar41) ^ _DAT_146acaeb0);
                  fVar42 = (float)(-(uint)(local_288._4_4_ <= fVar59) &
                                   (uRam0000000146acaeb4 ^ (uint)fVar42) ^ uRam0000000146acaeb4);
                  fVar43 = (float)(-(uint)(fStack_280 <= fVar60) &
                                   (uRam0000000146acaeb8 ^ (uint)fVar43) ^ uRam0000000146acaeb8);
                  local_2e8 = CONCAT44(local_2e8._4_4_ * fVar41,(float)local_2e8 * fVar41);
                  uStack_2e0 = CONCAT44(uStack_2e0._4_4_,(float)uStack_2e0 * fVar41);
                  uStack_2d0 = CONCAT44(uStack_2d0._4_4_,(float)uStack_2d0 * fVar42);
                  uStack_2c0 = CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0 * fVar43);
                  local_2d8 = CONCAT44(local_2d8._4_4_ * fVar42,(float)local_2d8 * fVar42);
                  local_2c8 = CONCAT44(local_2c8._4_4_ * fVar43,(float)local_2c8 * fVar43);
                  FQuat::FQuat(&local_1a8,&local_2e8);
                  local_288 = CONCAT44(local_288._4_4_,0x322bcc77);
                  auVar27._0_4_ = local_1a8 * local_1a8 + fStack_1a0 * fStack_1a0;
                  auVar27._4_4_ = fStack_1a4 * fStack_1a4 + fStack_19c * fStack_19c;
                  auVar27._8_4_ = fStack_1a0 * fStack_1a0 + local_1a8 * local_1a8;
                  auVar27._12_4_ = fStack_19c * fStack_19c + fStack_1a4 * fStack_1a4;
                  fVar34 = auVar27._4_4_ + auVar27._0_4_;
                  fVar37 = auVar27._8_4_ + auVar27._4_4_;
                  fVar39 = auVar27._12_4_ + auVar27._8_4_;
                  fVar29 = auVar27._0_4_ + auVar27._12_4_;
                  auVar4._4_4_ = fVar37;
                  auVar4._0_4_ = fVar34;
                  auVar4._8_4_ = fVar39;
                  auVar4._12_4_ = fVar29;
                  auVar24 = rsqrtps(auVar27,auVar4);
                  fVar41 = auVar24._0_4_;
                  fVar42 = auVar24._4_4_;
                  fVar43 = auVar24._8_4_;
                  fVar35 = auVar24._12_4_;
                  fVar41 = (_DAT_146acaea0 - fVar41 * fVar41 * fVar34 * _DAT_146acaea0) * fVar41 +
                           fVar41;
                  fVar42 = (fRam0000000146acaea4 - fVar42 * fVar42 * fVar37 * fRam0000000146acaea4)
                           * fVar42 + fVar42;
                  fVar43 = (fRam0000000146acaea8 - fVar43 * fVar43 * fVar39 * fRam0000000146acaea8)
                           * fVar43 + fVar43;
                  fVar35 = (fRam0000000146acaeac - fVar35 * fVar35 * fVar29 * fRam0000000146acaeac)
                           * fVar35 + fVar35;
                  local_168._4_4_ = fStack_2b4;
                  local_168._0_4_ = local_2b8;
                  fStack_160 = fStack_2b0;
                  local_1a8 = (float)(((uint)(((_DAT_146acaea0 -
                                               fVar41 * fVar41 * fVar34 * _DAT_146acaea0) * fVar41 +
                                              fVar41) * local_1a8) ^ _DAT_146acae90) &
                                      -(uint)(1e-08 <= fVar34) ^ _DAT_146acae90);
                  fStack_1a4 = (float)(((uint)(((fRam0000000146acaea4 -
                                                fVar42 * fVar42 * fVar37 * fRam0000000146acaea4) *
                                                fVar42 + fVar42) * fStack_1a4) ^
                                       uRam0000000146acae94) & -(uint)(1e-08 <= fVar37) ^
                                      uRam0000000146acae94);
                  fStack_1a0 = (float)(((uint)(((fRam0000000146acaea8 -
                                                fVar43 * fVar43 * fVar39 * fRam0000000146acaea8) *
                                                fVar43 + fVar43) * fStack_1a0) ^
                                       uRam0000000146acae98) & -(uint)(1e-08 <= fVar39) ^
                                      uRam0000000146acae98);
                  fStack_19c = (float)(((uint)(((fRam0000000146acaeac -
                                                fVar35 * fVar35 * fVar29 * fRam0000000146acaeac) *
                                                fVar35 + fVar35) * fStack_19c) ^
                                       uRam0000000146acae9c) & -(uint)(1e-08 <= fVar29) ^
                                      uRam0000000146acae9c);
                  fStack_15c = 0.0;
                  local_178 = CONCAT44(fStack_1a4,local_1a8);
                  uStack_170 = CONCAT44(fStack_19c,fStack_1a0);
                }
                fStack_14c = fVar32 * fVar12;
                fStack_150 = fVar54 * fVar11;
                fStack_154 = fVar44 * fVar10;
                local_158 = fVar38 * fVar9;
                lVar21 = local_278;
              }
              FUN_14228de90();
              lVar19 = lVar19 + 0x50;
              puVar16 = puVar16 + 10;
            } while (lVar19 != local_268);
          }
        }
        if ((0 < *(int *)(param_1 + 0x270)) && (*(char *)(param_1 + 0x260) != '\0')) {
          lVar19 = *(longlong *)(param_1 + 0x268);
          local_268 = (longlong)*(int *)(param_1 + 0x270) * 0x30 + lVar19;
          if (lVar19 != local_268) {
            puVar20 = (undefined4 *)(lVar19 + 0x20);
            do {
              local_158 = (float)_DAT_1468b5b90;
              fStack_154 = (float)((ulonglong)_DAT_1468b5b90 >> 0x20);
              fStack_150 = (float)uRam00000001468b5b98;
              fStack_14c = (float)((ulonglong)uRam00000001468b5b98 >> 0x20);
              local_178 = _DAT_1468b5b70;
              uStack_170 = uRam00000001468b5b78;
              fStack_160 = (float)*puVar20;
              local_168 = *(undefined8 *)(puVar20 + -2);
              fStack_15c = 0.0;
              cVar13 = FBoneReference::IsValidToEvaluate(lVar19,lVar21);
              if (cVar13 != '\0') {
                if (*(char *)(puVar20 + -5) == '\0') {
                  iVar15 = puVar20[-4];
                }
                else if (puVar20[-6] == -1) {
                  iVar15 = -1;
                }
                else {
                  iVar15 = *(int *)(*(longlong *)(lVar21 + 0x80) + (longlong)(int)puVar20[-6] * 4);
                }
                if (*(char *)((longlong)iVar15 + *(longlong *)(param_2 + 0x20)) == '\0') {
                  FUN_14060c680(plVar1);
                }
                puVar16 = (undefined8 *)((longlong)iVar15 * 0x30 + *plVar1);
                local_2e8 = *puVar16;
                uStack_2e0 = puVar16[1];
                local_2d8 = puVar16[2];
                uStack_2d0 = puVar16[3];
                local_2c8 = puVar16[4];
                uStack_2c0 = puVar16[5];
                local_318 = (float *)&local_2e8;
                uVar14 = FUN_141fa58e0(param_1,&local_148,*(undefined1 *)(param_1 + 0x140),local_270
                                      );
                fVar12 = fStack_14c;
                fVar11 = fStack_150;
                fVar10 = fStack_154;
                fVar9 = local_158;
                fVar43 = fRam0000000146acadf8;
                fVar42 = fRam0000000146acadf4;
                fVar41 = _DAT_146acadf0;
                auVar6._4_4_ = fStack_154;
                auVar6._0_4_ = local_158;
                auVar6._8_4_ = fStack_150;
                auVar6._12_4_ = fStack_14c;
                auVar8._8_8_ = uStack_120;
                auVar8._0_8_ = local_128;
                fVar38 = (float)local_128;
                fVar44 = (float)((ulonglong)local_128 >> 0x20);
                fVar54 = (float)uStack_120;
                fVar32 = (float)((ulonglong)uStack_120 >> 0x20);
                auVar24 = minps(auVar6,auVar8);
                local_288 = CONCAT44(fRam0000000146acaec4,_DAT_146acaec0);
                fStack_280 = fRam0000000146acaec8;
                fStack_27c = fRam0000000146acaecc;
                auVar26._4_4_ = -(uint)(auVar24._4_4_ < fRam0000000146acaec4);
                auVar26._0_4_ = -(uint)(auVar24._0_4_ < _DAT_146acaec0);
                auVar26._8_4_ = -(uint)(auVar24._8_4_ < fRam0000000146acaec8);
                auVar26._12_4_ = -(uint)(auVar24._12_4_ < fRam0000000146acaecc);
                iVar15 = movmskps(uVar14,auVar26);
                if (iVar15 == 0) {
                  local_168._0_4_ = fVar38 * (float)local_168._0_4_;
                  local_168._4_4_ = fVar44 * (float)local_168._4_4_;
                  fStack_160 = fVar54 * fStack_160;
                  fStack_15c = fVar32 * fStack_15c;
                  fVar43 = local_148 * local_178._4_4_;
                  fVar35 = local_148 * (float)local_178;
                  fVar41 = fStack_144 * (float)local_178;
                  fVar42 = fStack_144 * local_178._4_4_;
                  local_178 = CONCAT44(local_148 * (float)uStack_170 * fRam0000000146acae34 +
                                       fStack_13c * local_178._4_4_ +
                                       fStack_144 * uStack_170._4_4_ * fRam0000000146acae24 +
                                       fStack_140 * (float)local_178 * fRam0000000146acae14,
                                       local_148 * uStack_170._4_4_ * _DAT_146acae30 +
                                       fStack_13c * (float)local_178 +
                                       fStack_144 * (float)uStack_170 * _DAT_146acae20 +
                                       fStack_140 * local_178._4_4_ * _DAT_146acae10);
                  uStack_170 = CONCAT44(fVar35 * fRam0000000146acae3c +
                                        fStack_13c * uStack_170._4_4_ +
                                        fVar42 * fRam0000000146acae2c +
                                        fStack_140 * (float)uStack_170 * fRam0000000146acae1c,
                                        fVar43 * fRam0000000146acae38 +
                                        fStack_13c * (float)uStack_170 +
                                        fVar41 * fRam0000000146acae28 +
                                        fStack_140 * uStack_170._4_4_ * fRam0000000146acae18);
                  fVar41 = fStack_160 * fStack_144 - (float)local_168._4_4_ * fStack_140;
                  fVar42 = (float)local_168._0_4_ * fStack_140 - fStack_160 * local_148;
                  fVar43 = (float)local_168._4_4_ * local_148 - (float)local_168._0_4_ * fStack_144;
                  fVar35 = fStack_15c * fStack_13c - fStack_15c * fStack_13c;
                  fVar41 = fVar41 + fVar41;
                  fVar42 = fVar42 + fVar42;
                  fVar43 = fVar43 + fVar43;
                  fVar35 = fVar35 + fVar35;
                  local_168._0_4_ =
                       (fVar43 * fStack_144 - fVar42 * fStack_140) +
                       fStack_13c * fVar41 + (float)local_168._0_4_ + (float)local_138._0_4_;
                  local_168._4_4_ =
                       (fVar41 * fStack_140 - fVar43 * local_148) +
                       fStack_13c * fVar42 + (float)local_168._4_4_ + (float)local_138._4_4_;
                  fStack_160 = (fVar42 * local_148 - fVar41 * fStack_144) +
                               fStack_13c * fVar43 + fStack_160 + fStack_130;
                  fStack_15c = (fVar35 * fStack_13c - fVar35 * fStack_13c) +
                               fStack_13c * fVar35 + fStack_15c + fStack_12c;
                }
                else {
                  fVar34 = fStack_144 + fStack_144;
                  fVar37 = fStack_140 + fStack_140;
                  fVar58 = fVar38 * local_158;
                  fVar59 = fVar44 * fStack_154;
                  fVar60 = fVar54 * fStack_150;
                  fVar39 = (local_148 + local_148) * local_148;
                  fVar35 = (local_148 + local_148) * fStack_13c;
                  fVar55 = (fVar37 * fStack_13c + fVar34 * local_148) * fVar38;
                  fVar56 = (fVar35 + fVar37 * fStack_144) * fVar44;
                  fVar57 = (fVar34 * fStack_13c + fVar37 * local_148) * fVar54;
                  fVar45 = fVar44 * (fVar34 * local_148 - fVar37 * fStack_13c);
                  fVar47 = fVar54 * (fVar37 * fStack_144 - fVar35);
                  fVar49 = fVar38 * (fVar37 * local_148 - fVar34 * fStack_13c);
                  fVar35 = (float)((uint)((_DAT_146acadf0 -
                                          (fVar37 * fStack_140 + fVar34 * fStack_144)) * fVar38) &
                                  _DAT_146acae00);
                  fVar37 = (float)((uint)((fRam0000000146acadf4 - (fVar37 * fStack_140 + fVar39)) *
                                         fVar44) & uRam0000000146acae04);
                  fVar29 = (float)((uint)((fRam0000000146acadf8 - (fVar34 * fStack_144 + fVar39)) *
                                         fVar54) & uRam0000000146acae08);
                  fVar30 = (float)((uint)((fRam0000000146acadfc - (fVar39 + fVar39)) * fVar32) &
                                  uRam0000000146acae0c);
                  fVar36 = local_178._4_4_ + local_178._4_4_;
                  fVar39 = (float)uStack_170 + (float)uStack_170;
                  fVar40 = ((float)local_178 + (float)local_178) * (float)local_178;
                  fVar34 = ((float)local_178 + (float)local_178) * uStack_170._4_4_;
                  fVar51 = (fVar39 * uStack_170._4_4_ + fVar36 * (float)local_178) * local_158;
                  fVar52 = (fVar34 + fVar39 * local_178._4_4_) * fStack_154;
                  fVar53 = (fVar36 * uStack_170._4_4_ + fVar39 * (float)local_178) * fStack_150;
                  fVar46 = fStack_154 * (fVar36 * (float)local_178 - fVar39 * uStack_170._4_4_);
                  fVar48 = fStack_150 * (fVar39 * local_178._4_4_ - fVar34);
                  fVar50 = local_158 * (fVar39 * (float)local_178 - fVar36 * uStack_170._4_4_);
                  fVar34 = (float)((uint)((_DAT_146acadf0 -
                                          (fVar39 * (float)uStack_170 + fVar36 * local_178._4_4_)) *
                                         local_158) & _DAT_146acae00);
                  fVar39 = (float)((uint)((fRam0000000146acadf4 -
                                          (fVar39 * (float)uStack_170 + fVar40)) * fStack_154) &
                                  uRam0000000146acae04);
                  fVar36 = (float)((uint)((fRam0000000146acadf8 -
                                          (fVar36 * local_178._4_4_ + fVar40)) * fStack_150) &
                                  uRam0000000146acae08);
                  fVar40 = (float)((uint)((fRam0000000146acadfc - (fVar40 + fVar40)) * fStack_14c) &
                                  uRam0000000146acae0c);
                  local_2e8._0_4_ =
                       fVar51 * fVar45 + fVar34 * fVar35 + fVar50 * fVar57 +
                       fVar40 * (float)local_138._0_4_;
                  local_2e8._4_4_ =
                       fVar51 * fVar37 + fVar34 * fVar55 + fVar50 * fVar47 +
                       fVar40 * (float)local_138._4_4_;
                  uStack_2e0._0_4_ =
                       fVar51 * fVar56 + fVar34 * fVar49 + fVar50 * fVar29 + fVar40 * fStack_130;
                  uStack_2e0._4_4_ =
                       fVar51 * fVar30 + fVar34 * fVar30 + fVar50 * fVar30 +
                       fVar40 * fRam0000000146acadfc;
                  local_2d8._0_4_ =
                       fVar39 * fVar45 + fVar46 * fVar35 + fVar52 * fVar57 +
                       fVar40 * (float)local_138._0_4_;
                  local_2d8._4_4_ =
                       fVar39 * fVar37 + fVar46 * fVar55 + fVar52 * fVar47 +
                       fVar40 * (float)local_138._4_4_;
                  uStack_2d0._0_4_ =
                       fVar39 * fVar56 + fVar46 * fVar49 + fVar52 * fVar29 + fVar40 * fStack_130;
                  uStack_2d0._4_4_ =
                       fVar39 * fVar30 + fVar46 * fVar30 + fVar52 * fVar30 +
                       fVar40 * fRam0000000146acadfc;
                  local_2c8._0_4_ =
                       fVar48 * fVar45 + fVar53 * fVar35 + fVar36 * fVar57 +
                       fVar40 * (float)local_138._0_4_;
                  local_2c8._4_4_ =
                       fVar48 * fVar37 + fVar53 * fVar55 + fVar36 * fVar47 +
                       fVar40 * (float)local_138._4_4_;
                  uStack_2c0._0_4_ =
                       fVar48 * fVar56 + fVar53 * fVar49 + fVar36 * fVar29 + fVar40 * fStack_130;
                  uStack_2c0._4_4_ =
                       fVar48 * fVar30 + fVar53 * fVar30 + fVar36 * fVar30 +
                       fVar40 * fRam0000000146acadfc;
                  local_2b8 = (float)local_168._4_4_ * fVar45 + (float)local_168._0_4_ * fVar35 +
                              fStack_160 * fVar57 + fRam0000000146acadfc * (float)local_138._0_4_;
                  fStack_2b4 = (float)local_168._4_4_ * fVar37 + (float)local_168._0_4_ * fVar55 +
                               fStack_160 * fVar47 + fRam0000000146acadfc * (float)local_138._4_4_;
                  fStack_2b0 = (float)local_168._4_4_ * fVar56 + (float)local_168._0_4_ * fVar49 +
                               fStack_160 * fVar29 + fRam0000000146acadfc * fStack_130;
                  fStack_2ac = (float)local_168._4_4_ * fVar30 + (float)local_168._0_4_ * fVar30 +
                               fStack_160 * fVar30 + fRam0000000146acadfc * fRam0000000146acadfc;
                  FMatrix::RemoveScaling(&local_2e8);
                  fVar41 = (float)(-(uint)((float)local_288 <= fVar58) &
                                   (_DAT_146acaeb0 ^ (uint)fVar41) ^ _DAT_146acaeb0);
                  fVar42 = (float)(-(uint)(local_288._4_4_ <= fVar59) &
                                   (uRam0000000146acaeb4 ^ (uint)fVar42) ^ uRam0000000146acaeb4);
                  fVar43 = (float)(-(uint)(fStack_280 <= fVar60) &
                                   (uRam0000000146acaeb8 ^ (uint)fVar43) ^ uRam0000000146acaeb8);
                  local_2e8 = CONCAT44(local_2e8._4_4_ * fVar41,(float)local_2e8 * fVar41);
                  uStack_2e0 = CONCAT44(uStack_2e0._4_4_,(float)uStack_2e0 * fVar41);
                  uStack_2d0 = CONCAT44(uStack_2d0._4_4_,(float)uStack_2d0 * fVar42);
                  uStack_2c0 = CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0 * fVar43);
                  local_2d8 = CONCAT44(local_2d8._4_4_ * fVar42,(float)local_2d8 * fVar42);
                  local_2c8 = CONCAT44(local_2c8._4_4_ * fVar43,(float)local_2c8 * fVar43);
                  FQuat::FQuat(&local_198,&local_2e8);
                  local_288 = CONCAT44(local_288._4_4_,0x322bcc77);
                  auVar28._0_4_ = local_198 * local_198 + fStack_190 * fStack_190;
                  auVar28._4_4_ = fStack_194 * fStack_194 + fStack_18c * fStack_18c;
                  auVar28._8_4_ = fStack_190 * fStack_190 + local_198 * local_198;
                  auVar28._12_4_ = fStack_18c * fStack_18c + fStack_194 * fStack_194;
                  fVar34 = auVar28._4_4_ + auVar28._0_4_;
                  fVar37 = auVar28._8_4_ + auVar28._4_4_;
                  fVar39 = auVar28._12_4_ + auVar28._8_4_;
                  fVar29 = auVar28._0_4_ + auVar28._12_4_;
                  auVar5._4_4_ = fVar37;
                  auVar5._0_4_ = fVar34;
                  auVar5._8_4_ = fVar39;
                  auVar5._12_4_ = fVar29;
                  auVar24 = rsqrtps(auVar28,auVar5);
                  fVar41 = auVar24._0_4_;
                  fVar42 = auVar24._4_4_;
                  fVar43 = auVar24._8_4_;
                  fVar35 = auVar24._12_4_;
                  fVar41 = (_DAT_146acaea0 - fVar41 * fVar41 * fVar34 * _DAT_146acaea0) * fVar41 +
                           fVar41;
                  fVar42 = (fRam0000000146acaea4 - fVar42 * fVar42 * fVar37 * fRam0000000146acaea4)
                           * fVar42 + fVar42;
                  fVar43 = (fRam0000000146acaea8 - fVar43 * fVar43 * fVar39 * fRam0000000146acaea8)
                           * fVar43 + fVar43;
                  fVar35 = (fRam0000000146acaeac - fVar35 * fVar35 * fVar29 * fRam0000000146acaeac)
                           * fVar35 + fVar35;
                  local_168._4_4_ = fStack_2b4;
                  local_168._0_4_ = local_2b8;
                  fStack_160 = fStack_2b0;
                  local_198 = (float)(((uint)(((_DAT_146acaea0 -
                                               fVar41 * fVar41 * fVar34 * _DAT_146acaea0) * fVar41 +
                                              fVar41) * local_198) ^ _DAT_146acae90) &
                                      -(uint)(1e-08 <= fVar34) ^ _DAT_146acae90);
                  fStack_194 = (float)(((uint)(((fRam0000000146acaea4 -
                                                fVar42 * fVar42 * fVar37 * fRam0000000146acaea4) *
                                                fVar42 + fVar42) * fStack_194) ^
                                       uRam0000000146acae94) & -(uint)(1e-08 <= fVar37) ^
                                      uRam0000000146acae94);
                  fStack_190 = (float)(((uint)(((fRam0000000146acaea8 -
                                                fVar43 * fVar43 * fVar39 * fRam0000000146acaea8) *
                                                fVar43 + fVar43) * fStack_190) ^
                                       uRam0000000146acae98) & -(uint)(1e-08 <= fVar39) ^
                                      uRam0000000146acae98);
                  fStack_18c = (float)(((uint)(((fRam0000000146acaeac -
                                                fVar35 * fVar35 * fVar29 * fRam0000000146acaeac) *
                                                fVar35 + fVar35) * fStack_18c) ^
                                       uRam0000000146acae9c) & -(uint)(1e-08 <= fVar29) ^
                                      uRam0000000146acae9c);
                  fStack_15c = 0.0;
                  local_178 = CONCAT44(fStack_194,local_198);
                  uStack_170 = CONCAT44(fStack_18c,fStack_190);
                }
                fStack_14c = fVar32 * fVar12;
                fStack_150 = fVar54 * fVar11;
                fStack_154 = fVar44 * fVar10;
                local_158 = fVar38 * fVar9;
                lVar21 = local_278;
              }
              if (*(char *)(puVar20 + 2) == '\0') {
                local_318 = (float *)CONCAT44(local_318._4_4_,puVar20[1]);
                FUN_14228e540(0,param_1 + 0x2d8,puVar22,&local_178);
              }
              else if (*(char *)(puVar20 + 2) == '\x01') {
                local_318 = (float *)CONCAT44(local_318._4_4_,puVar20[1]);
                FUN_14228e7e0(1,param_1 + 0x2d8,puVar22,&local_178);
              }
              lVar19 = lVar19 + 0x30;
              puVar20 = puVar20 + 0xc;
            } while (lVar19 != local_268);
          }
        }
        if ((*(char *)(param_1 + 0x1b5) != '\0') ||
           (param_2 = local_270, *(char *)(param_1 + 0x1b4) != '\0')) {
          local_1c8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          local_1c0 = DAT_1468b5d98;
          local_318 = (float *)&local_1c8;
          local_1b8 = CONCAT44(uVar31,uVar33);
          local_1b0 = uVar23;
          local_180 = uVar23;
          FAnimPhys::CreateSpring(param_1 + 0x2f8,local_1e0,&local_1b8,puVar22);
          lVar19 = *(longlong *)(param_1 + 0x2f8);
          lVar18 = (longlong)*(int *)(param_1 + 0x300) * 0x60;
          *(undefined4 *)(lVar18 + -0x18 + lVar19) = *(undefined4 *)(param_1 + 0x1b8);
          *(undefined4 *)(lVar18 + -0x14 + lVar19) = *(undefined4 *)(param_1 + 0x1bc);
          fVar38 = *(float *)(param_1 + 0x23c);
          fVar44 = *(float *)(param_1 + 0x238);
          fVar54 = *(float *)(param_1 + 0x240);
          fVar32 = fVar44 * fVar44 + fVar38 * fVar38 + fVar54 * fVar54;
          if (fVar32 == 1.0) {
            local_298 = *(undefined8 *)(param_1 + 0x238);
            fVar54 = *(float *)(param_1 + 0x240);
          }
          else if (1e-08 <= fVar32) {
            auVar24 = rsqrtss(ZEXT416((uint)fVar32),ZEXT416((uint)fVar32));
            fVar41 = auVar24._0_4_;
            fVar41 = fVar41 + fVar41 * (0.5 - fVar32 * 0.5 * fVar41 * fVar41);
            fVar41 = fVar41 + fVar41 * (0.5 - fVar32 * 0.5 * fVar41 * fVar41);
            fVar54 = fVar54 * fVar41;
            local_298 = CONCAT44(fVar38 * fVar41,fVar44 * fVar41);
            local_290 = fVar54;
          }
          else {
            local_290 = DAT_1468b5d98;
            local_298 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
            fVar54 = DAT_1468b5d98;
          }
          *(undefined8 *)(lVar18 + -0x40 + lVar19) = local_298;
          *(float *)(lVar18 + -0x38 + lVar19) = fVar54;
          *(undefined1 *)(lVar18 + -0x34 + lVar19) = *(undefined1 *)(param_1 + 0x234);
          pfVar2 = (float *)(lVar18 + -0x50 + lVar19);
          *pfVar2 = fVar61;
          pfVar2[1] = fVar62;
          pfVar2[2] = fVar63;
          pfVar2[3] = fVar64;
          *(undefined1 *)(lVar18 + -0xf + lVar19) = *(undefined1 *)(param_1 + 0x1b5);
          *(undefined1 *)(lVar18 + -0x10 + lVar19) = *(undefined1 *)(param_1 + 0x1b4);
          param_2 = local_270;
        }
      }
      local_258 = local_258 + 1;
    } while (local_258 != local_1d8);
  }
  return;
}



// FUNCTION 141fb55c0 FUN_141fb55c0 body=347 status=ok
// SIG undefined FUN_141fb55c0(void)

void FUN_141fb55c0(longlong param_1,longlong *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  if ((longlong *)*param_2 != (longlong *)0x0) {
    lVar3 = param_2[0xd];
    fVar1 = *(float *)((longlong)param_2 + 0x6c);
    fVar2 = *(float *)(param_2 + 0xe);
    if (*(float *)(param_3 + 8) <= 0.0) {
      fVar6 = -1.0;
    }
    else {
      fVar6 = 1.0;
    }
    fVar5 = (float)(**(code **)(*(longlong *)*param_2 + 0x350))();
    if ((((char)lVar3 == '\0') || (fVar1 == 0.0)) || (fVar5 == 0.0)) {
      if (fVar2 == 0.0) {
        fVar1 = *(float *)((longlong)param_2 + 0x14);
        fVar2 = *(float *)(param_2 + 3);
        uVar4 = *(int *)(param_1 + 0x8c) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_1 + 0x8c) = uVar4;
        fVar6 = (float)(uVar4 & 0x7fffff | 0x3f800000);
        *(float *)(param_3 + 8) = (fVar6 - (float)(int)fVar6) * (fVar2 - fVar1) + fVar1;
      }
      else {
        *(float *)(param_3 + 8) = (*(float *)(*param_2 + 0x90) / fVar2) * fVar6;
      }
    }
    else {
      *(float *)(param_3 + 8) = (fVar1 / fVar5) * fVar6;
    }
  }
  return;
}



// FUNCTION 141fb5720 FUN_141fb5720 body=489 status=ok
// SIG undefined FUN_141fb5720(void)

void FUN_141fb5720(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  longlong local_28;
  int local_20;
  
  FWeakObjectPtr::operator=(param_1 + 0xe,param_1[0xd]);
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xe);
  if (cVar3 == '\0') {
    *(undefined4 *)(param_1 + 0x15) = 0;
    if ((*(int *)((longlong)param_1 + 0xac) < 0) && (*(int *)((longlong)param_1 + 0xac) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x14,0);
    }
    *(undefined4 *)(param_1 + 0x11) = 0;
    if ((*(int *)((longlong)param_1 + 0x8c) < 0) && (*(int *)((longlong)param_1 + 0x8c) != 0)) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
    }
    *(undefined4 *)(param_1 + 0x13) = 0;
    if ((*(int *)((longlong)param_1 + 0x9c) < 0) && (*(int *)((longlong)param_1 + 0x9c) != 0)) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x12,0);
    }
  }
  else {
    uVar4 = FWeakObjectPtr::Get(param_1 + 0xe);
    UPoseAsset::GetPoseNames(uVar4,&local_28);
    iVar2 = local_20;
    if (local_20 < 1) {
      *(undefined4 *)(param_1 + 0x15) = 0;
      if ((*(int *)((longlong)param_1 + 0xac) < 0) && (*(int *)((longlong)param_1 + 0xac) != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x14,0);
      }
      *(undefined4 *)(param_1 + 0x11) = 0;
      if ((*(int *)((longlong)param_1 + 0x8c) < 0) && (*(int *)((longlong)param_1 + 0x8c) != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if ((*(int *)((longlong)param_1 + 0x9c) < 0) && (*(int *)((longlong)param_1 + 0x9c) != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x12,0);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x11) = 0;
      if (*(int *)((longlong)param_1 + 0x8c) < local_20) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x10,local_20);
      }
      plVar1 = param_1 + 0x14;
      *(undefined4 *)(param_1 + 0x15) = 0;
      if (*(int *)((longlong)param_1 + 0xac) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,iVar2);
      }
      TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(param_1 + 0x10,iVar2);
      lVar6 = (longlong)local_20 * 0x10 + local_28;
      for (lVar5 = local_28; lVar5 != lVar6; lVar5 = lVar5 + 0x10) {
        iVar2 = (int)param_1[0x15];
        *(int *)(param_1 + 0x15) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0xac) < iVar2 + 1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
        }
        *(undefined2 *)(*plVar1 + (longlong)iVar2 * 2) = *(undefined2 *)(lVar5 + 8);
      }
      SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_res8,param_2);
      (**(code **)(*param_1 + 8))(param_1,local_res8);
    }
    if (local_28 != 0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 141fb5910 FUN_141fb5910 body=407 status=ok
// SIG undefined FUN_141fb5910(void)

void FUN_141fb5910(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 local_48 [8];
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  FPoseLinkBase::Update(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x70) = 0;
  cVar3 = FUN_142297770(param_1,*param_2);
  if (cVar3 == '\0') {
    return;
  }
  FUN_142290d80(param_1 + 8,param_2);
  cVar3 = *(char *)(param_1 + 0x74);
  if (cVar3 == '\0') {
    uVar5 = FInputScaleBiasClamp::ApplyTo
                      (param_1 + 0xd8,*(undefined4 *)(param_1 + 0x60),(int)param_2[2]);
    uVar5 = FInputScaleBias::ApplyTo(param_1 + 100,uVar5);
  }
  else if (cVar3 == '\x01') {
    uVar5 = FInputAlphaBoolBlend::ApplyTo
                      (param_1 + 0x78,*(undefined1 *)(param_1 + 0x75),(int)param_2[2]);
  }
  else {
    if ((cVar3 != '\x02') || (lVar1 = *(longlong *)(*param_2 + 0xa0), lVar1 == 0))
    goto LAB_141fb5a24;
    lVar4 = FUN_1428eccf0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_141fb5a24;
    lVar4 = param_2[2];
    uVar5 = FUN_142268750(lVar1,*(undefined8 *)(param_1 + 0xd0));
    uVar5 = FInputScaleBiasClamp::ApplyTo(param_1 + 0xd8,uVar5,(int)lVar4);
  }
  *(undefined4 *)(param_1 + 0x70) = uVar5;
LAB_141fb5a24:
  fVar6 = *(float *)(param_1 + 0x70);
  if (*(char *)(param_1 + 0x115) != '\0') {
    fVar6 = 1.0 - fVar6;
    *(float *)(param_1 + 0x70) = fVar6;
  }
  if (1e-05 < fVar6) {
    lVar1 = param_2[2];
    SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_48,*param_2);
    local_40 = fVar6 * *(float *)(param_2 + 1);
    local_3c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_38 = (int)lVar1;
    FPoseLinkBase::Update(param_1 + 0x48,local_48);
  }
  return;
}



// FUNCTION 141fb5ab0 FUN_141fb5ab0 body=231 status=ok
// SIG undefined FUN_141fb5ab0(void)

void FUN_141fb5ab0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  float fVar3;
  undefined1 local_48 [8];
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  FUN_142290d80(param_1 + 8);
  fVar3 = (float)FInputScaleBias::ApplyTo(param_1 + 100,*(undefined4 *)(param_1 + 0x60));
  *(float *)(param_1 + 0x84) = fVar3;
  if (*(char *)(param_1 + 0xa0) != '\0') {
    fVar3 = 1.0 - fVar3;
    *(float *)(param_1 + 0x84) = fVar3;
  }
  if ((fVar3 <= 1e-05) || (*(int *)(param_1 + 0x98) < 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x88) = uVar2;
  FPoseLinkBase::Update(param_1 + 0x30,param_2);
  if (*(char *)(param_1 + 0x88) != '\0') {
    uVar1 = *(undefined4 *)(param_2 + 2);
    fVar3 = *(float *)(param_1 + 0x84);
    SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_48,*param_2);
    local_40 = fVar3 * *(float *)(param_2 + 1);
    local_3c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_38 = uVar1;
    FPoseLinkBase::Update(param_1 + 0x48,local_48);
  }
  return;
}



// FUNCTION 141fb5ba0 FUN_141fb5ba0 body=1123 status=ok
// SIG undefined FUN_141fb5ba0(void)

void FUN_141fb5ba0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  int local_res8 [2];
  undefined1 local_a8 [8];
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  
  FUN_142290d80(param_1 + 1);
  lVar10 = param_1[7];
  plVar1 = param_1 + 0x16;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (*(int *)((longlong)param_1 + 0xbc) != (int)lVar10) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
  }
  if (0 < (int)lVar10) {
    iVar4 = (**(code **)(*param_1 + 0xf0))(param_1);
    iVar9 = (int)param_1[0x13];
    fVar13 = 0.0;
    lVar10 = (longlong)iVar4;
    if (iVar4 != iVar9) {
      fVar12 = ABS(1.0 - *(float *)(param_1[0xf] + lVar10 * 4));
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
      if (iVar9 == -1) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = fVar12 * *(float *)(param_1[8] + lVar10 * 4);
      }
      iVar5 = 0;
      if (0 < (int)param_1[0x12]) {
        lVar6 = 0;
        do {
          iVar5 = iVar5 + 1;
          *(float *)(lVar6 + param_1[0x11]) = fVar12;
          lVar6 = lVar6 + 4;
        } while (iVar5 < (int)param_1[0x12]);
      }
      if ((fVar12 == 0.0) && (iVar9 != -1)) {
        uVar11 = *(undefined4 *)(param_2 + 2);
        SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_a8,*param_2);
        local_9c = *(undefined4 *)((longlong)param_2 + 0xc);
        local_a0 = 0.0;
        local_98 = uVar11;
        FPoseLinkBase::Update(param_1[6] + (longlong)(int)param_1[0x13] * 0x18);
      }
      iVar9 = 0;
      if (0 < (int)param_1[0xe]) {
        lVar6 = 0;
        do {
          lVar7 = (longlong)iVar9 * 0x38 + param_1[0xd];
          FAlphaBlend::SetBlendTime(lVar7,fVar12);
          if (lVar6 == lVar10) {
            uVar11 = 0x3f800000;
          }
          else {
            uVar11 = 0;
          }
          FAlphaBlend::SetValueRange(lVar7,*(undefined4 *)(param_1[0xf] + lVar6 * 4),uVar11);
          iVar9 = iVar9 + 1;
          lVar6 = lVar6 + 1;
        } while (iVar9 < (int)param_1[0xe]);
      }
      if ((char)param_1[0x18] != '\0') {
        SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_res8,*param_2);
        FPoseLinkBase::Initialize(param_1[6] + lVar10 * 0x18);
      }
      *(int *)(param_1 + 0x13) = iVar4;
    }
    iVar9 = 0;
    if (0 < (int)param_1[0xe]) {
      lVar7 = 0;
      lVar6 = 0;
      do {
        lVar2 = param_1[0xd];
        lVar8 = param_1[0xf];
        FAlphaBlend::Update(lVar2 + lVar7,*(undefined4 *)(param_2 + 2));
        fVar12 = *(float *)(lVar2 + lVar7 + 0x20);
        iVar9 = iVar9 + 1;
        *(float *)(lVar6 + lVar8) = fVar12;
        fVar13 = fVar13 + fVar12;
        lVar6 = lVar6 + 4;
        lVar7 = lVar7 + 0x38;
      } while (iVar9 < (int)param_1[0xe]);
      if ((1e-05 < fVar13) && (1e-05 < ABS(fVar13 - 1.0))) {
        iVar9 = 0;
        if (0 < (int)param_1[0x10]) {
          lVar6 = 0;
          do {
            lVar6 = lVar6 + 4;
            iVar9 = iVar9 + 1;
            *(float *)(param_1[0xf] + -4 + lVar6) =
                 (1.0 / fVar13) * *(float *)(param_1[0xf] + -4 + lVar6);
          } while (iVar9 < (int)param_1[0x10]);
        }
      }
    }
    iVar9 = (int)param_1[7];
    iVar4 = 0;
    if (0 < iVar9) {
      lVar6 = 0;
      do {
        fVar13 = *(float *)(lVar6 + param_1[0xf]);
        if (1e-05 < fVar13) {
          uVar11 = *(undefined4 *)(param_2 + 2);
          SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_a8,*param_2);
          local_a0 = fVar13 * *(float *)(param_2 + 1);
          local_9c = *(undefined4 *)((longlong)param_2 + 0xc);
          local_98 = uVar11;
          FPoseLinkBase::Update(param_1[6] + (longlong)iVar4 * 0x18,local_a8);
          iVar9 = (int)param_1[0x17];
          *(int *)(param_1 + 0x17) = iVar9 + 1;
          if (*(int *)((longlong)param_1 + 0xbc) < iVar9 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar9);
          }
          *(int *)(*plVar1 + (longlong)iVar9 * 4) = iVar4;
        }
        iVar9 = (int)param_1[7];
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 4;
      } while (iVar4 < iVar9);
    }
    if (param_1[0xc] != 0) {
      local_res8[0] = 0;
      if (0 < iVar9) {
        lVar7 = 0;
        lVar6 = 0;
        do {
          iVar9 = 0;
          lVar2 = param_1[0x14];
          fVar13 = *(float *)(param_1[0xf] + lVar7 * 4);
          *(float *)(lVar6 + 0x10 + lVar2) = fVar13;
          if (0 < *(int *)(lVar6 + 0x38 + lVar2)) {
            lVar8 = 0;
            do {
              lVar3 = *(longlong *)(lVar6 + 0x30 + lVar2);
              fVar12 = (float)UBlendProfile::GetEntryBlendScale(param_1[0xc],iVar9);
              if (lVar10 != lVar7) {
                fVar12 = 1.0 / fVar12;
              }
              iVar9 = iVar9 + 1;
              *(float *)(lVar3 + lVar8) = fVar12 * fVar13;
              lVar8 = lVar8 + 4;
            } while (iVar9 < *(int *)(lVar6 + 0x38 + lVar2));
          }
          local_res8[0] = local_res8[0] + 1;
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x40;
        } while (local_res8[0] < (int)param_1[7]);
      }
      FBlendSampleData::NormalizeDataWeight(param_1 + 0x14);
    }
  }
  return;
}



// FUNCTION 141fb6010 Update_AnyThread body=46 status=ok
// SIG undefined Update_AnyThread(void)

void FAnimNode_CopyPoseFromMesh::Update_AnyThread(longlong param_1,undefined8 *param_2)

{
  FUN_142290d80(param_1 + 8);
  FUN_141fadbf0(param_1,*param_2);
  return;
}



// FUNCTION 141fb6050 FUN_141fb6050 body=771 status=ok
// SIG undefined FUN_141fb6050(void)

void FUN_141fb6050(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong local_b8;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  
  iVar9 = -1;
  fVar12 = 0.0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  if (*(char *)(param_1 + 0x7a) == '\0') {
    fVar13 = 1.0;
  }
  else {
    fVar13 = 0.0;
  }
  cVar6 = FUN_142297770(param_1,*param_2);
  if (cVar6 == '\0') {
    uVar3 = *(uint *)(param_1 + 0x70);
    uVar10 = (ulonglong)uVar3;
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (*(uint *)(param_1 + 0x74) != uVar3) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x68,uVar3);
    }
    if (0 < (int)uVar3) {
      do {
        iVar9 = *(int *)(param_1 + 0x70);
        *(int *)(param_1 + 0x70) = iVar9 + 1;
        if (*(int *)(param_1 + 0x74) < iVar9 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x68,iVar9);
        }
        puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar9 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
        }
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    FUN_141fac320(param_1);
  }
  else {
    FUN_142290d80(param_1 + 8,param_2);
    FUN_141fac320(param_1);
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x50)) {
      lVar8 = 0;
      do {
        fVar2 = *(float *)(lVar8 + *(longlong *)(param_1 + 0x110));
        if (1e-05 < fVar2) {
          if (*(char *)(param_1 + 0x7b) == '\0') {
            lVar4 = *param_2;
            uVar5 = *(undefined8 *)(lVar4 + 0xb0);
            cVar6 = FUN_141faaef0(param_1,uVar5);
            if (cVar6 == '\0') {
              FAnimationRuntime::UpdateDesiredBoneWeight
                        (param_1 + 0xb0,param_1 + 0xc0,param_1 + 0x110);
            }
            else {
              FUN_141fade00(param_1,lVar4 + 0x3a0,uVar5);
              cVar6 = FUN_141faaef0(param_1,*(undefined8 *)(*param_2 + 0xb0));
              if (cVar6 != '\0') break;
            }
            *(undefined1 *)(param_1 + 0x7b) = 1;
            if (*(char *)(param_1 + 0x7a) != '\0') {
              fVar11 = (float)(*(int **)(param_1 + 0xc0))[1];
              if (1e-05 < fVar11) {
                iVar9 = **(int **)(param_1 + 0xc0);
                fVar12 = fVar11;
              }
            }
          }
          fVar11 = fVar13;
          if (iVar7 == iVar9) {
            fVar11 = fVar12;
          }
          lVar4 = param_2[2];
          SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(&local_b8,*param_2);
          local_b0 = fVar2 * *(float *)(param_2 + 1);
          local_ac = fVar11 * *(float *)((longlong)param_2 + 0xc);
          local_a8 = (int)lVar4;
          FPoseLinkBase::Update(*(longlong *)(param_1 + 0x48) + (longlong)iVar7 * 0x18,&local_b8);
        }
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 4;
      } while (iVar7 < *(int *)(param_1 + 0x50));
    }
  }
  if (1.0 - fVar12 < 1e-05) {
    lVar8 = param_2[2];
    SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(&local_b8,*param_2);
    local_ac = (1.0 - fVar12) * *(float *)((longlong)param_2 + 0xc);
    local_b0 = *(float *)(param_2 + 1);
    param_2 = &local_b8;
    local_a8 = (int)lVar8;
  }
  FPoseLinkBase::Update(param_1 + 0x30,param_2);
  return;
}



// FUNCTION 141fb6360 FUN_141fb6360 body=866 status=ok
// SIG undefined FUN_141fb6360(void)

void FUN_141fb6360(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong local_b8;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  
  FUN_142290d80(param_1 + 8);
  plVar1 = (longlong *)(param_1 + 0x120);
  uVar8 = 0;
  iVar9 = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(int *)(param_1 + 300) != *(int *)(param_1 + 0x80)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
    iVar9 = *(int *)(param_1 + 0x128);
  }
  iVar10 = *(int *)(param_1 + 0x80);
  iVar6 = iVar9 + iVar10;
  *(int *)(param_1 + 0x128) = iVar6;
  if (*(int *)(param_1 + 300) < iVar6) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar9 * 4),0,(longlong)iVar10 << 2);
  fVar14 = 0.0;
  uVar7 = uVar8;
  uVar12 = uVar8;
  if (0 < *(int *)(param_1 + 0x80)) {
    do {
      if (*(char *)(uVar7 + *(longlong *)(param_1 + 0x100)) == '\0') {
        *(undefined4 *)(*plVar1 + uVar7 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x78) + uVar7 * 4);
      }
      else if (*(char *)(uVar7 + *(longlong *)(param_1 + 0xf0)) == '\0') {
        *(undefined4 *)(*plVar1 + uVar7 * 4) = 0;
      }
      else {
        *(undefined4 *)(*plVar1 + uVar7 * 4) = 0x3f800000;
      }
      if (*(char *)(uVar7 + *(longlong *)(param_1 + 0x110)) != '\0') {
        *(float *)(*plVar1 + uVar7 * 4) = 1.0 - *(float *)(*plVar1 + uVar7 * 4);
      }
      uVar11 = (int)uVar12 + 1;
      uVar7 = uVar7 + 1;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < *(int *)(param_1 + 0x80));
  }
  iVar9 = -1;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  if (*(char *)(param_1 + 0x89) == '\0') {
    fVar15 = 1.0;
  }
  else {
    fVar15 = 0.0;
  }
  uVar7 = uVar8;
  if (0 < *(int *)(param_1 + 0x50)) {
    do {
      fVar2 = *(float *)(*plVar1 + uVar8);
      iVar10 = (int)uVar7;
      if (1e-05 < fVar2) {
        if (*(char *)(param_1 + 0x8a) == '\0') {
          lVar3 = *param_2;
          uVar4 = *(undefined8 *)(lVar3 + 0xb0);
          cVar5 = FUN_141faafb0(param_1,uVar4);
          if (cVar5 == '\0') {
            FUN_141fb2940(param_1 + 0xc0,param_1 + 0xd0,param_1 + 0x130,plVar1);
          }
          else {
            FUN_141fae0d0(param_1,lVar3 + 0x3a0,uVar4);
            cVar5 = FUN_141faafb0(param_1,*(undefined8 *)(*param_2 + 0xb0));
            if (cVar5 != '\0') break;
          }
          *(undefined1 *)(param_1 + 0x8a) = 1;
          if (*(char *)(param_1 + 0x89) != '\0') {
            fVar13 = (float)(*(int **)(param_1 + 0xd0))[1];
            if (1e-05 < fVar13) {
              iVar9 = **(int **)(param_1 + 0xd0);
              fVar14 = fVar13;
            }
          }
        }
        fVar13 = fVar15;
        if (iVar10 == iVar9) {
          fVar13 = fVar14;
        }
        lVar3 = param_2[2];
        SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(&local_b8,*param_2);
        local_b0 = fVar2 * *(float *)(param_2 + 1);
        local_ac = fVar13 * *(float *)((longlong)param_2 + 0xc);
        local_a8 = (int)lVar3;
        FPoseLinkBase::Update(*(longlong *)(param_1 + 0x48) + (longlong)iVar10 * 0x18,&local_b8);
      }
      uVar8 = uVar8 + 4;
      uVar7 = (ulonglong)(iVar10 + 1U);
    } while ((int)(iVar10 + 1U) < *(int *)(param_1 + 0x50));
  }
  if (1.0 - fVar14 < 1e-05) {
    lVar3 = param_2[2];
    SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(&local_b8,*param_2);
    local_ac = (1.0 - fVar14) * *(float *)((longlong)param_2 + 0xc);
    local_b0 = *(float *)(param_2 + 1);
    param_2 = &local_b8;
    local_a8 = (int)lVar3;
  }
  FPoseLinkBase::Update(param_1 + 0x30,param_2);
  return;
}



// FUNCTION 141fb66d0 Update_AnyThread body=157 status=ok
// SIG undefined Update_AnyThread(void)

void FAnimNode_MakeDynamicAdditive::Update_AnyThread(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar1 = *(undefined4 *)(param_2 + 2);
  SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_38,*param_2);
  local_30 = *(undefined4 *)(param_2 + 1);
  local_2c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_28 = uVar1;
  FPoseLinkBase::Update(param_1 + 0x30,local_38);
  uVar1 = *(undefined4 *)(param_2 + 2);
  SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_38,*param_2);
  local_30 = *(undefined4 *)(param_2 + 1);
  local_2c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_28 = uVar1;
  FPoseLinkBase::Update(param_1 + 0x48,local_38);
  return;
}



// FUNCTION 141fb6770 FUN_141fb6770 body=239 status=ok
// SIG undefined FUN_141fb6770(void)

void FUN_141fb6770(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_58 [8];
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  FUN_142290d80(param_1 + 8);
  FUN_141fb2750(param_1);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar4 = 0;
    do {
      fVar1 = *(float *)(lVar4 + *(longlong *)(param_1 + 0x60));
      if (1e-05 < fVar1) {
        uVar2 = *(undefined4 *)(param_2 + 2);
        SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_58,*param_2);
        local_50 = fVar1 * *(float *)(param_2 + 1);
        local_4c = *(undefined4 *)((longlong)param_2 + 0xc);
        local_48 = uVar2;
        FPoseLinkBase::Update(*(longlong *)(param_1 + 0x30) + (longlong)iVar3 * 0x18,local_58);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 141fb6860 FUN_141fb6860 body=969 status=ok
// SIG undefined FUN_141fb6860(void)

void FUN_141fb6860(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  float *pfVar8;
  uint uVar9;
  undefined4 *puVar10;
  float fVar11;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  FUN_142290d80(param_1 + 8);
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
  pfVar8 = (float *)(*(longlong *)(param_1 + 0x78) + (longlong)*(int *)(param_1 + 0x70) * 0x28);
  uVar9 = *(int *)(param_1 + 0x70) + 1U & 0x80000001;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
  }
  puVar10 = (undefined4 *)(*(longlong *)(param_1 + 0x78) + (longlong)(int)uVar9 * 0x28);
  FUN_141faea20(param_1,param_2,0);
  plVar6 = (longlong *)((longlong)*(int *)(param_1 + 0x58) * 0x78 + *(longlong *)(param_1 + 0x38));
  cVar3 = *(char *)((longlong)plVar6 + 0x74);
  lVar7 = *plVar6;
  if (cVar3 == '\0') {
    if (lVar7 == 0) {
      FPoseLinkBase::Update(param_1 + 0x90,param_2);
      FUN_141fb0690(param_1,param_2);
      return;
    }
    FUN_141fb55c0(param_1,plVar6,pfVar8);
    fVar2 = pfVar8[1];
    fVar11 = *(float *)(lVar7 + 0x90) / pfVar8[2] - fVar2;
    if ((fVar2 < *pfVar8) && (pfVar8[4] = (float)((int)pfVar8[4] + -1), (int)pfVar8[4] < 1)) {
      if (*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x5c)) {
        puVar10[1] = fVar2;
      }
      FUN_141fb0690(param_1,param_2);
      pfVar8 = (float *)(*(longlong *)(param_1 + 0x78) + (longlong)*(int *)(param_1 + 0x70) * 0x28);
      uVar9 = *(int *)(param_1 + 0x70) + 1U & 0x80000001;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
      }
      puVar10 = (undefined4 *)(*(longlong *)(param_1 + 0x78) + (longlong)(int)uVar9 * 0x28);
    }
  }
  else {
    fVar11 = pfVar8[9] - pfVar8[1];
  }
  *pfVar8 = pfVar8[1];
  *puVar10 = puVar10[1];
  lVar7 = (longlong)*(int *)(param_1 + 0x5c) * 0x78;
  pfVar1 = (float *)(lVar7 + 0x30 + *(longlong *)(param_1 + 0x38));
  if (((fVar11 < *pfVar1 || fVar11 == *pfVar1) && ((int)pfVar8[4] < 1)) &&
     (*(int *)(param_1 + 0x5c) != *(int *)(param_1 + 0x58))) {
    FAlphaBlend::Update(*(longlong *)(param_1 + 0x38) + 0x20 + lVar7,(int)param_2[2]);
    fVar11 = *(float *)((longlong)*(int *)(param_1 + 0x5c) * 0x78 + 0x40 +
                       *(longlong *)(param_1 + 0x38));
    if (fVar11 < 1.0) {
      puVar10[3] = fVar11;
      pfVar8[3] = 1.0 - fVar11;
    }
  }
  if (cVar3 == '\0') {
    if (*(int *)(param_1 + 0x5c) != *(int *)(param_1 + 0xec)) goto LAB_141fb6a72;
    fVar11 = (float)puVar10[3];
  }
  else {
    fVar11 = pfVar8[3];
  }
  lVar7 = param_2[2];
  SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_58,*param_2);
  local_50 = fVar11 * *(float *)(param_2 + 1);
  local_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_48 = (int)lVar7;
  FPoseLinkBase::Update(param_1 + 0x90,local_58);
LAB_141fb6a72:
  cVar3 = FAlphaBlend::IsComplete
                    ((longlong)*(int *)(param_1 + 0x5c) * 0x78 + 0x20 +
                     *(longlong *)(param_1 + 0x38));
  if (cVar3 != '\0') {
    FUN_141fb0690(param_1,param_2);
    pfVar8 = (float *)(*(longlong *)(param_1 + 0x78) + (longlong)*(int *)(param_1 + 0x70) * 0x28);
    uVar9 = *(int *)(param_1 + 0x70) + 1U & 0x80000001;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
    }
    puVar10 = (undefined4 *)(*(longlong *)(param_1 + 0x78) + (longlong)(int)uVar9 * 0x28);
  }
  lVar7 = *param_2;
  if (lVar7 != 0) {
    lVar5 = (longlong)*(int *)(param_1 + 0x58) * 0x78;
    if ((*(char *)(lVar5 + 0x74 + *(longlong *)(param_1 + 0x38)) == '\0') &&
       (*(longlong *)(lVar5 + *(longlong *)(param_1 + 0x38)) != 0)) {
      uVar4 = FUN_14225c6d0(lVar7,0xffffffff,local_res8);
      FUN_1422777c0(lVar7,uVar4,
                    *(undefined8 *)
                     ((longlong)*(int *)(param_1 + 0x58) * 0x78 + *(longlong *)(param_1 + 0x38)),
                    CONCAT71((int7)((ulonglong)(pfVar8 + 1) >> 8),1),pfVar8[2],pfVar8[3],pfVar8 + 1,
                    pfVar8 + 5);
    }
    else {
      pfVar8[1] = *(float *)(param_2 + 2) + pfVar8[1];
    }
    if (0.0 < (float)puVar10[3]) {
      plVar6 = (longlong *)
               ((longlong)*(int *)(param_1 + 0x5c) * 0x78 + *(longlong *)(param_1 + 0x38));
      if ((*(char *)((longlong)plVar6 + 0x74) == '\0') && (*plVar6 != 0)) {
        FUN_141fb55c0(param_1,plVar6,puVar10);
        uVar4 = FUN_14225c6d0(lVar7,0xffffffff,local_res8);
        FUN_1422777c0(lVar7,uVar4,
                      *(undefined8 *)
                       ((longlong)*(int *)(param_1 + 0x5c) * 0x78 + *(longlong *)(param_1 + 0x38)),
                      CONCAT71((int7)((ulonglong)(puVar10 + 5) >> 8),1),puVar10[2],puVar10[3],
                      puVar10 + 1,puVar10 + 5);
      }
      else {
        puVar10[1] = *(float *)(param_2 + 2) + (float)puVar10[1];
      }
    }
  }
  return;
}



// FUNCTION 141fb6c30 FUN_141fb6c30 body=47 status=ok
// SIG undefined FUN_141fb6c30(void)

void FUN_141fb6c30(longlong param_1,undefined8 param_2)

{
  FUN_142290d80(param_1 + 8);
  FPoseLinkBase::Update(param_1 + 0x30,param_2);
  return;
}



// FUNCTION 141fb6c60 Update_AnyThread body=105 status=ok
// SIG undefined Update_AnyThread(void)

void FAnimNode_RotateRootBone::Update_AnyThread(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  FUN_142290d80(param_1 + 8);
  FPoseLinkBase::Update(param_1 + 0x30,param_2);
  uVar1 = FInputScaleBiasClamp::ApplyTo
                    (param_1 + 0x50,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_2 + 0x10))
  ;
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  uVar1 = FInputScaleBiasClamp::ApplyTo
                    (param_1 + 0x8c,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_2 + 0x10))
  ;
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  return;
}



// FUNCTION 141fb6cd0 Update_AnyThread body=76 status=ok
// SIG undefined Update_AnyThread(void)

void FAnimNode_ScaleChainLength::Update_AnyThread(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  FUN_142290d80(param_1 + 8);
  FPoseLinkBase::Update(param_1 + 0x30,param_2);
  uVar1 = FInputScaleBias::ApplyTo(param_1 + 0x98,*(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  return;
}



// FUNCTION 141fb6d20 FUN_141fb6d20 body=553 status=ok
// SIG undefined FUN_141fb6d20(void)

void FUN_141fb6d20(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  (**(code **)(*param_1 + 0xf8))();
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  cVar3 = FUN_142297770(param_1,*param_2);
  if ((cVar3 == '\0') && (*(float *)((longlong)param_1 + 0x11c) <= 0.0)) {
    return;
  }
  FUN_142290d80(param_1 + 1,param_2);
  cVar3 = (char)param_1[10];
  if (cVar3 == '\0') {
    uVar5 = FInputScaleBiasClamp::ApplyTo
                      (param_1 + 0x19,*(undefined4 *)((longlong)param_1 + 0x54),(int)param_2[2]);
    uVar5 = FInputScaleBias::ApplyTo(param_1 + 0xb,uVar5);
  }
  else if (cVar3 == '\x01') {
    uVar5 = FInputAlphaBoolBlend::ApplyTo(param_1 + 0xd,(char)param_1[0xc],(int)param_2[2]);
  }
  else {
    if ((cVar3 != '\x02') || (lVar1 = *(longlong *)(*param_2 + 0xa0), lVar1 == 0))
    goto LAB_141fb6e45;
    lVar4 = FUN_1428eccf0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_141fb6e45;
    lVar4 = param_2[2];
    uVar5 = FUN_142268750(lVar1,param_1[0x18]);
    uVar5 = FInputScaleBiasClamp::ApplyTo(param_1 + 0x19,uVar5,(int)lVar4);
  }
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
LAB_141fb6e45:
  fVar6 = *(float *)((longlong)param_1 + 0x4c);
  fVar7 = 1.0;
  if (0.0 <= fVar6) {
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
  }
  else {
    fVar6 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x4c) = fVar6;
  (**(code **)(*param_1 + 0x130))(param_1,(longlong)param_1 + 0x4c);
  if (*(char *)((longlong)param_1 + 0x119) != '\0') {
    *(float *)((longlong)param_1 + 0x4c) = 1.0 - *(float *)((longlong)param_1 + 0x4c);
  }
  if (*(float *)((longlong)param_1 + 0x104) <= 0.0) {
    fVar6 = *(float *)((longlong)param_1 + 0x4c);
  }
  else {
    cVar3 = FUN_142297770(param_1,*param_2);
    if (cVar3 == '\0') {
      fVar7 = 0.0;
    }
    fVar6 = *(float *)((longlong)param_1 + 0x11c);
    if (*(float *)((longlong)param_1 + 0x11c) == -1.0) {
      *(float *)((longlong)param_1 + 0x11c) = fVar7;
      fVar6 = fVar7;
    }
    fVar6 = (float)FMath::FInterpTo(fVar6,fVar7,(int)param_2[2],
                                    *(undefined4 *)((longlong)param_1 + 0x104));
    *(float *)((longlong)param_1 + 0x11c) = fVar6;
    fVar6 = fVar6 * *(float *)((longlong)param_1 + 0x4c);
    *(float *)((longlong)param_1 + 0x4c) = fVar6;
  }
  if ((1e-05 < fVar6) &&
     (cVar3 = (**(code **)(*param_1 + 0x120))
                        (param_1,*(undefined8 *)(*param_2 + 0xb0),*param_2 + 0x3a0), cVar3 != '\0'))
  {
    (**(code **)(*param_1 + 0xf0))(param_1,param_2);
  }
  return;
}



// FUNCTION 141fb6f50 FUN_141fb6f50 body=304 status=ok
// SIG undefined FUN_141fb6f50(void)

void FUN_141fb6f50(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 local_48 [8];
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  FUN_142274c40(*param_2,param_1 + 0x48,param_1 + 0x58,param_1 + 0x54,param_1 + 0x5c);
  FUN_142285ab0(*param_2,param_1 + 0x48,*(undefined4 *)(param_1 + 0x58),(int)param_2[1]);
  local_40 = *(float *)(param_1 + 0x54);
  if (local_40 <= 1e-05) {
    if (*(char *)(param_1 + 0x50) == '\0') {
      if (*(char *)(param_1 + 0x70) == '\0') {
        if (*param_2 == 0) {
          return;
        }
        lVar1 = FUN_142274c00(*param_2,param_1 + 0x48);
        if (lVar1 == 0) {
          return;
        }
        if (*(float *)(lVar1 + 8) <= 1e-05) {
          return;
        }
      }
      uVar2 = (undefined4)param_2[2];
      SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_48,*param_2);
      local_3c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_40 = 0.0;
      goto LAB_141fb6ff5;
    }
    local_40 = 2e-05;
  }
  uVar2 = (undefined4)param_2[2];
  SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_48,*param_2);
  local_40 = local_40 * *(float *)(param_2 + 1);
  local_3c = *(undefined4 *)((longlong)param_2 + 0xc);
LAB_141fb6ff5:
  local_38 = uVar2;
  FPoseLinkBase::Update(param_1 + 0x30,local_48);
  return;
}



// FUNCTION 141fb7080 FUN_141fb7080 body=651 status=ok
// SIG undefined FUN_141fb7080(void)

void FUN_141fb7080(longlong param_1,longlong *param_2)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 local_res8 [8];
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  FUN_142290d80(param_1 + 8);
  cVar2 = *(char *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x114) = 0;
  if (cVar2 == '\0') {
    FInputScaleBiasClamp::ApplyTo(param_1 + 0xd8,*(undefined4 *)(param_1 + 100),(int)param_2[2]);
    uVar7 = FInputScaleBias::ApplyTo(param_1 + 0x68);
  }
  else if (cVar2 == '\x01') {
    uVar7 = FInputAlphaBoolBlend::ApplyTo
                      (param_1 + 0x78,*(undefined1 *)(param_1 + 0x70),(int)param_2[2]);
  }
  else {
    if ((cVar2 != '\x02') || (lVar3 = *(longlong *)(*param_2 + 0xa0), lVar3 == 0))
    goto LAB_141fb7180;
    lVar6 = FUN_1428eccf0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_141fb7180;
    lVar6 = param_2[2];
    uVar7 = FUN_142268750(lVar3,*(undefined8 *)(param_1 + 0xd0));
    uVar7 = FInputScaleBiasClamp::ApplyTo(param_1 + 0xd8,uVar7,(int)lVar6);
  }
  *(undefined4 *)(param_1 + 0x114) = uVar7;
LAB_141fb7180:
  fVar1 = *(float *)(param_1 + 0x114);
  fVar8 = 0.0;
  if ((0.0 <= fVar1) && (fVar8 = fVar1, 1.0 <= fVar1)) {
    fVar8 = 1.0;
  }
  *(float *)(param_1 + 0x114) = fVar8;
  if (*(char *)(param_1 + 0x11b) != '\0') {
    fVar8 = 1.0 - fVar8;
    *(float *)(param_1 + 0x114) = fVar8;
  }
  bVar4 = fVar8 < 0.99999;
  bVar5 = 1e-05 < fVar8;
  if (*(char *)(param_1 + 0x11a) != '\0') {
    if ((bVar4) && (*(char *)(param_1 + 0x118) == '\0')) {
      SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_res8,*param_2);
      FPoseLinkBase::Initialize(param_1 + 0x30,local_res8);
    }
    if ((bVar5) && (*(char *)(param_1 + 0x119) == '\0')) {
      SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_res8,*param_2);
      FPoseLinkBase::Initialize(param_1 + 0x48,local_res8);
    }
  }
  *(bool *)(param_1 + 0x119) = bVar5;
  *(bool *)(param_1 + 0x118) = bVar4;
  if (bVar5) {
    if (bVar4) {
      fVar1 = *(float *)(param_1 + 0x114);
      lVar3 = param_2[2];
      SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(&local_48,*param_2);
      local_40 = (1.0 - fVar1) * *(float *)(param_2 + 1);
      local_3c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_38 = (int)lVar3;
      FPoseLinkBase::Update(param_1 + 0x30,&local_48);
      fVar1 = *(float *)(param_1 + 0x114);
      lVar3 = param_2[2];
      SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(&local_48,*param_2);
      local_40 = fVar1 * *(float *)(param_2 + 1);
      param_1 = param_1 + 0x48;
      local_3c = *(undefined4 *)((longlong)param_2 + 0xc);
      param_2 = &local_48;
      local_38 = (int)lVar3;
    }
    else {
      param_1 = param_1 + 0x48;
    }
  }
  else {
    param_1 = param_1 + 0x30;
  }
  FPoseLinkBase::Update(param_1,param_2);
  return;
}



// FUNCTION 141fb7310 FUN_141fb7310 body=53 status=ok
// SIG undefined FUN_141fb7310(void)

void FUN_141fb7310(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144f36cb0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fb7350 FUN_141fb7350 body=53 status=ok
// SIG undefined FUN_141fb7350(void)

void FUN_141fb7350(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe8;
    *puVar1 = &PTR_FUN_144f38190;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fb7390 FUN_141fb7390 body=53 status=ok
// SIG undefined FUN_141fb7390(void)

void FUN_141fb7390(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &PTR_FUN_144f36eb8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fb73d0 FUN_141fb73d0 body=53 status=ok
// SIG undefined FUN_141fb73d0(void)

void FUN_141fb73d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144f36fd0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fb7410 FUN_141fb7410 body=162 status=ok
// SIG undefined FUN_141fb7410(void)

longlong FUN_141fb7410(void)

{
  if (DAT_146acb110 == 0) {
    FUN_14171ccd0(L"/Script/AnimGraphRuntime",L"AnimCustomInstance",&DAT_146acb110,FUN_140447710,
                  0x440,0x10000008,0,L"Engine",&LAB_141fb7c80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,thunk_FUN_1428eccf0,
                  &LAB_14084f730,0);
  }
  return DAT_146acb110;
}



// FUNCTION 141fb74c0 Z_Construct_UPackage__Script_Engine body=47 status=ok
// SIG undefined Z_Construct_UPackage__Script_Engine(void)

longlong Z_Construct_UPackage__Script_Engine(void)

{
  if (DAT_146acb118 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
  }
  return DAT_146acb118;
}



// FUNCTION 141fb74f0 FUN_141fb74f0 body=47 status=ok
// SIG undefined FUN_141fb74f0(void)

longlong FUN_141fb74f0(void)

{
  if (DAT_146acb1e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb1e8,&PTR_Z_Construct_UPackage__Script_Engine_1464df140);
  }
  return DAT_146acb1e8;
}



// FUNCTION 141fb7540 FUN_141fb7540 body=53 status=ok
// SIG undefined FUN_141fb7540(void)

void FUN_141fb7540(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 200;
    *puVar1 = &PTR_FUN_144f371e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fb7580 FUN_141fb7580 body=53 status=ok
// SIG undefined FUN_141fb7580(void)

void FUN_141fb7580(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd0;
    *puVar1 = &PTR_FUN_144f37400;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fb75c0 FUN_141fb75c0 body=53 status=ok
// SIG undefined FUN_141fb75c0(void)

void FUN_141fb75c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &PTR_FUN_144f37618;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fb7600 FUN_141fb7600 body=53 status=ok
// SIG undefined FUN_141fb7600(void)

void FUN_141fb7600(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd0;
    *puVar1 = &PTR_FUN_144f37830;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fb7640 FUN_141fb7640 body=53 status=ok
// SIG undefined FUN_141fb7640(void)

void FUN_141fb7640(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x168;
    *puVar1 = &PTR_FUN_144f37948;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fb7680 FUN_141fb7680 body=53 status=ok
// SIG undefined FUN_141fb7680(void)

void FUN_141fb7680(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x160;
    *puVar1 = &PTR_FUN_144f37a60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fb76c0 FUN_141fb76c0 body=53 status=ok
// SIG undefined FUN_141fb76c0(void)

void FUN_141fb76c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1b8;
    *puVar1 = &PTR_FUN_144f37bd8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fb7700 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FSpinBoxStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x3b0;
    *puVar1 = &PTR_FUN_144f36620;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 141fb7740 FUN_141fb7740 body=53 status=ok
// SIG undefined FUN_141fb7740(void)

void FUN_141fb7740(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144f36738;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fb7780 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x188;
    *puVar1 = &PTR_FUN_144f37d10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fb77c0 FUN_141fb77c0 body=53 status=ok
// SIG undefined FUN_141fb77c0(void)

void FUN_141fb77c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_144f36850;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 141fb7800 FUN_141fb7800 body=53 status=ok
// SIG undefined FUN_141fb7800(void)

void FUN_141fb7800(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144f37e28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fb7840 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x5c;
    *puVar1 = &PTR_FUN_144f36968;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141fb7880 FUN_141fb7880 body=53 status=ok
// SIG undefined FUN_141fb7880(void)

void FUN_141fb7880(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x178;
    *puVar1 = &PTR_FUN_144f37f40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fb78c0 FUN_141fb78c0 body=53 status=ok
// SIG undefined FUN_141fb78c0(void)

void FUN_141fb78c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x118;
    *puVar1 = &PTR_FUN_144f36a80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fb7900 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x180;
    *puVar1 = &PTR_FUN_144f38078;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fb7940 FUN_141fb7940 body=47 status=ok
// SIG undefined FUN_141fb7940(void)

longlong FUN_141fb7940(void)

{
  if (DAT_146acb238 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb238,&PTR_Z_Construct_UPackage__Script_Engine_1464df800);
  }
  return DAT_146acb238;
}



// FUNCTION 141fb7970 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x260;
    *puVar1 = &PTR_FUN_144f36450;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 141fb79b0 FUN_141fb79b0 body=53 status=ok
// SIG undefined FUN_141fb79b0(void)

void FUN_141fb79b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x160;
    *puVar1 = &PTR_FUN_144f36b98;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fb79f0 FUN_141fb79f0 body=641 status=ok
// SIG undefined FUN_141fb79f0(void)

int * FUN_141fb79f0(longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  bool bVar18;
  
  iVar17 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar15 = *(int *)(*param_1 + 4 + (longlong)iVar13 * 0x18);
    *(int *)(param_1 + 6) = iVar15;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar15 * 0x18) = 0xffffffff;
    }
  }
  plVar16 = (longlong *)param_1[4];
  *param_2 = iVar13;
  lVar9 = (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar16 == (longlong *)0x0) {
    plVar16 = param_1 + 2;
  }
  puVar14 = (uint *)((longlong)plVar16 + lVar9);
  *puVar14 = *puVar14 | 1 << ((byte)iVar13 & 0x1f);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  bVar18 = false;
  lVar1 = (longlong)iVar13 * 0x18;
  plVar16 = (longlong *)(*param_1 + lVar1);
  *(undefined4 *)plVar16 = *param_3;
  *(undefined4 *)((longlong)plVar16 + 4) = uVar4;
  *(undefined4 *)(plVar16 + 1) = uVar5;
  *(undefined4 *)((longlong)plVar16 + 0xc) = uVar6;
  *(undefined4 *)(plVar16 + 2) = 0xffffffff;
  iVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar15 != 1) {
    lVar2 = *plVar16;
    iVar8 = iVar17;
    if (iVar15 != 0) {
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar10 +
                       ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar12 != -1) {
        do {
          iVar8 = iVar12;
          if (*(longlong *)(*param_1 + (longlong)iVar12 * 0x18) == lVar2) break;
          iVar12 = *(int *)(*param_1 + 0x10 + (longlong)iVar12 * 0x18);
          iVar8 = iVar17;
        } while (iVar12 != -1);
      }
    }
    bVar18 = iVar8 != -1;
    if (bVar18) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar8 * 0x18),plVar16,0x10);
      bVar3 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar13;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar17 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar16 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar16 == (longlong *)0x0) {
        plVar16 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar16 + lVar9);
      *puVar14 = *puVar14 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141fb7c47;
    }
  }
  cVar7 = FUN_141fb8ee0(param_1,iVar15,0);
  if (cVar7 == '\0') {
    uVar11 = (int)((ulonglong)*plVar16 >> 0x20) + (int)*plVar16 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar16 + 0x14) = uVar11;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(plVar16 + 2) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_141fb7c47:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar18;
  }
  return param_2;
}



// FUNCTION 141fb7ca0 FAnimNode_BlendListBase body=213 status=ok
// SIG undefined FAnimNode_BlendListBase(void)

undefined8 * FAnimNode_BlendListBase::FAnimNode_BlendListBase(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144f370e8;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0xf,0);
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (*(int *)((longlong)param_1 + 0x94) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x11,0);
  }
  return param_1;
}



// FUNCTION 141fb7d80 ~FAnimNode_BlendListBase body=146 status=ok
// SIG undefined ~FAnimNode_BlendListBase(void)

void FAnimNode_BlendListBase::~FAnimNode_BlendListBase(undefined8 *param_1)

{
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  FUN_14084c260(param_1 + 0x14);
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141fb7e20 operator= body=110 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FBlendBoneByChannelEntry,FDefaultAllocator>::operator=
          (undefined8 *param_1,undefined8 *param_2)

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
    TArray<FDragonData_FootData,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x38);
  }
  return param_1;
}



// FUNCTION 141fb7e90 operator= body=122 status=ok
// SIG undefined operator=(void)

longlong *
TArray<FGAttributeProgressbarStyleWithTreshold,TSizedDefaultAllocator<32>_>::operator=
          (longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = (int)param_1[1];
    if (iVar2 != 0) {
      plVar1 = (longlong *)(*param_1 + 0x30);
      do {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        plVar1 = plVar1 + 8;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    TArray<FBlendSampleData,TSizedDefaultAllocator<32>_>::CopyToEmpty<FBlendSampleData,int>
              (param_1,*param_2,(int)param_2[1],*(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  return param_1;
}



// FUNCTION 141fb7f10 operator= body=506 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::operator=
          (longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = FUN_141fb8ee0(param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141fb806b;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_141fb806b:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        FUN_141fb79f0(param_1,local_res8,*param_2 + (longlong)iStack_4c * 0x18,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 141fb8110 FUN_141fb8110 body=1899 status=ok
// SIG undefined FUN_141fb8110(void)

longlong FUN_141fb8110(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  FUN_1412e72e0();
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
  uVar6 = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x150) = uVar6;
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  *(undefined1 *)(param_1 + 0x160) = *(undefined1 *)(param_2 + 0x160);
  uVar6 = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x170) = uVar6;
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  uVar6 = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x188) = uVar6;
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a4) = *(undefined8 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined1 *)(param_1 + 0x1b4) = *(undefined1 *)(param_2 + 0x1b4);
  *(undefined1 *)(param_1 + 0x1b5) = *(undefined1 *)(param_2 + 0x1b5);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined1 *)(param_1 + 0x1c0) = *(undefined1 *)(param_2 + 0x1c0);
  *(undefined1 *)(param_1 + 0x1c1) = *(undefined1 *)(param_2 + 0x1c1);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined1 *)(param_1 + 0x1c8) = *(undefined1 *)(param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined1 *)(param_1 + 0x1d8) = *(undefined1 *)(param_2 + 0x1d8);
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined1 *)(param_1 + 0x1e0) = *(undefined1 *)(param_2 + 0x1e0);
  *(undefined1 *)(param_1 + 0x1e1) = *(undefined1 *)(param_2 + 0x1e1);
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
  uVar6 = *(undefined8 *)(param_2 + 500);
  *(undefined8 *)(param_1 + 0x1ec) = *(undefined8 *)(param_2 + 0x1ec);
  *(undefined8 *)(param_1 + 500) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x204);
  *(undefined8 *)(param_1 + 0x1fc) = *(undefined8 *)(param_2 + 0x1fc);
  *(undefined8 *)(param_1 + 0x204) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x214);
  *(undefined8 *)(param_1 + 0x20c) = *(undefined8 *)(param_2 + 0x20c);
  *(undefined8 *)(param_1 + 0x214) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x224);
  *(undefined8 *)(param_1 + 0x21c) = *(undefined8 *)(param_2 + 0x21c);
  *(undefined8 *)(param_1 + 0x224) = uVar6;
  uVar3 = *(undefined4 *)(param_2 + 0x230);
  uVar4 = *(undefined4 *)(param_2 + 0x234);
  uVar5 = *(undefined4 *)(param_2 + 0x238);
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x230) = uVar3;
  *(undefined4 *)(param_1 + 0x234) = uVar4;
  *(undefined4 *)(param_1 + 0x238) = uVar5;
  *(undefined8 *)(param_1 + 0x23c) = *(undefined8 *)(param_2 + 0x23c);
  *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_2 + 0x244);
  *(undefined1 *)(param_1 + 0x248) = *(undefined1 *)(param_2 + 0x248);
  plVar1 = (longlong *)(param_1 + 0x250);
  if (plVar1 != (longlong *)(param_2 + 0x250)) {
    iVar10 = *(int *)(param_2 + 600);
    lVar12 = *(longlong *)(param_2 + 0x250);
    *(int *)(param_1 + 600) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x25c) == 0)) {
      *(undefined4 *)(param_1 + 0x25c) = 0;
    }
    else {
      TArray<FDungeonMarkerInfo,FDefaultAllocator>::ResizeForCopy(plVar1,iVar10);
      if (iVar10 != 0) {
        puVar7 = (undefined4 *)(lVar12 + 0x40);
        puVar8 = (undefined8 *)*plVar1 + 8;
        puVar9 = (undefined8 *)*plVar1;
        do {
          uVar6 = *(undefined8 *)(puVar7 + -0xe);
          *puVar9 = *(undefined8 *)(puVar7 + -0x10);
          puVar9[1] = uVar6;
          puVar9[2] = *(undefined8 *)(puVar7 + -0xc);
          uVar6 = *(undefined8 *)(puVar7 + -6);
          puVar8[-4] = *(undefined8 *)(puVar7 + -8);
          puVar8[-3] = uVar6;
          uVar6 = *(undefined8 *)(puVar7 + -2);
          puVar8[-2] = *(undefined8 *)(puVar7 + -4);
          puVar8[-1] = uVar6;
          uVar3 = puVar7[1];
          uVar4 = puVar7[2];
          uVar5 = puVar7[3];
          *(undefined4 *)puVar8 = *puVar7;
          *(undefined4 *)((longlong)puVar8 + 4) = uVar3;
          *(undefined4 *)(puVar8 + 1) = uVar4;
          *(undefined4 *)((longlong)puVar8 + 0xc) = uVar5;
          iVar10 = iVar10 + -1;
          puVar7 = puVar7 + 0x14;
          puVar8 = puVar8 + 10;
          puVar9 = puVar9 + 10;
        } while (iVar10 != 0);
      }
    }
  }
  puVar8 = (undefined8 *)(param_1 + 0x268);
  *(undefined1 *)(param_1 + 0x260) = *(undefined1 *)(param_2 + 0x260);
  if (puVar8 != (undefined8 *)(param_2 + 0x268)) {
    iVar10 = *(int *)(param_2 + 0x270);
    pvVar2 = *(void **)(param_2 + 0x268);
    *(int *)(param_1 + 0x270) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x274) == 0)) {
      *(undefined4 *)(param_1 + 0x274) = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(puVar8,iVar10);
      _guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar2,(longlong)iVar10 * 0x30);
    }
  }
  *(undefined1 *)(param_1 + 0x278) = *(undefined1 *)(param_2 + 0x278);
  plVar1 = (longlong *)(param_1 + 0x2a8);
  *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_2 + 0x27c);
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_2 + 0x280);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  *(undefined1 *)(param_1 + 0x28c) = *(undefined1 *)(param_2 + 0x28c);
  *(undefined1 *)(param_1 + 0x28d) = *(undefined1 *)(param_2 + 0x28d);
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_2 + 0x290);
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_2 + 0x294);
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_2 + 0x298);
  *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(param_2 + 0x29c);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_2 + 0x2a0);
  *(undefined1 *)(param_1 + 0x2a4) = *(undefined1 *)(param_2 + 0x2a4);
  if (plVar1 != (longlong *)(param_2 + 0x2a8)) {
    iVar10 = *(int *)(param_1 + 0x2b0);
    if (iVar10 != 0) {
      lVar12 = *plVar1 + 0x1a8;
      do {
        TArray<FAnimPhysShape,FDefaultAllocator>::~TArray<FAnimPhysShape,FDefaultAllocator>(lVar12);
        lVar12 = lVar12 + 0x1f0;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(param_2 + 0x2b0);
    lVar12 = *(longlong *)(param_2 + 0x2a8);
    *(int *)(param_1 + 0x2b0) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x2b4) == 0)) {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
    }
    else {
      TArray<FAnimPhysLinkedBody,FDefaultAllocator>::ResizeForCopy(plVar1,iVar10);
      lVar11 = *plVar1;
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        FAnimPhysLinkedBody::FAnimPhysLinkedBody(lVar11,lVar12);
        lVar11 = lVar11 + 0x1f0;
        lVar12 = lVar12 + 0x1f0;
      }
    }
  }
  puVar8 = (undefined8 *)(param_1 + 0x2b8);
  if (puVar8 != (undefined8 *)(param_2 + 0x2b8)) {
    iVar10 = *(int *)(param_2 + 0x2c0);
    pvVar2 = *(void **)(param_2 + 0x2b8);
    *(int *)(param_1 + 0x2c0) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x2c4) == 0)) {
      *(undefined4 *)(param_1 + 0x2c4) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar8,iVar10);
      _guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar2,(longlong)iVar10 << 3);
    }
  }
  puVar8 = (undefined8 *)(param_1 + 0x2c8);
  if (puVar8 != (undefined8 *)(param_2 + 0x2c8)) {
    iVar10 = *(int *)(param_2 + 0x2d0);
    pvVar2 = *(void **)(param_2 + 0x2c8);
    *(int *)(param_1 + 0x2d0) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x2d4) == 0)) {
      *(undefined4 *)(param_1 + 0x2d4) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar8,iVar10);
      _guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar2,(longlong)iVar10 << 3);
    }
  }
  puVar8 = (undefined8 *)(param_1 + 0x2d8);
  if (puVar8 != (undefined8 *)(param_2 + 0x2d8)) {
    iVar10 = *(int *)(param_2 + 0x2e0);
    pvVar2 = *(void **)(param_2 + 0x2d8);
    *(int *)(param_1 + 0x2e0) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x2e4) == 0)) {
      *(undefined4 *)(param_1 + 0x2e4) = 0;
    }
    else {
      TArray<FExposedValueCopyRecord,FDefaultAllocator>::ResizeForCopy(puVar8,iVar10);
      _guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar2,(longlong)iVar10 * 0x68);
    }
  }
  puVar8 = (undefined8 *)(param_1 + 0x2e8);
  if (puVar8 != (undefined8 *)(param_2 + 0x2e8)) {
    iVar10 = *(int *)(param_2 + 0x2f0);
    pvVar2 = *(void **)(param_2 + 0x2e8);
    *(int *)(param_1 + 0x2f0) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x2f4) == 0)) {
      *(undefined4 *)(param_1 + 0x2f4) = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(puVar8,iVar10);
      _guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar2,(longlong)iVar10 * 0x30);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x2f8);
  if (plVar1 != (longlong *)(param_2 + 0x2f8)) {
    iVar10 = *(int *)(param_2 + 0x300);
    lVar12 = *(longlong *)(param_2 + 0x2f8);
    *(int *)(param_1 + 0x300) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x304) == 0)) {
      *(undefined4 *)(param_1 + 0x304) = 0;
    }
    else {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeForCopy(plVar1,iVar10);
      puVar8 = (undefined8 *)*plVar1;
      if (iVar10 != 0) {
        puVar7 = (undefined4 *)(lVar12 + 0x18);
        puVar9 = puVar8 + 3;
        do {
          *puVar8 = *(undefined8 *)(puVar7 + -6);
          puVar8 = puVar8 + 0xc;
          puVar9[-2] = *(undefined8 *)(puVar7 + -4);
          *(undefined4 *)(puVar9 + -1) = puVar7[-2];
          *(undefined4 *)((longlong)puVar9 + -4) = puVar7[-1];
          *(undefined4 *)puVar9 = *puVar7;
          *(undefined4 *)((longlong)puVar9 + 4) = puVar7[1];
          puVar9[1] = *(undefined8 *)(puVar7 + 2);
          *(undefined4 *)(puVar9 + 2) = puVar7[4];
          *(undefined1 *)((longlong)puVar9 + 0x14) = *(undefined1 *)(puVar7 + 5);
          puVar9[3] = *(undefined8 *)(puVar7 + 6);
          *(undefined4 *)(puVar9 + 4) = puVar7[8];
          *(undefined8 *)((longlong)puVar9 + 0x24) = *(undefined8 *)(puVar7 + 9);
          *(undefined4 *)((longlong)puVar9 + 0x2c) = puVar7[0xb];
          *(undefined4 *)(puVar9 + 6) = puVar7[0xc];
          *(undefined4 *)((longlong)puVar9 + 0x34) = puVar7[0xd];
          *(undefined1 *)(puVar9 + 7) = *(undefined1 *)(puVar7 + 0xe);
          *(undefined1 *)((longlong)puVar9 + 0x39) = *(undefined1 *)((longlong)puVar7 + 0x39);
          iVar10 = iVar10 + -1;
          puVar7 = puVar7 + 0x18;
          puVar9 = puVar9 + 0xc;
        } while (iVar10 != 0);
      }
    }
  }
  TArray<FVector,FDefaultAllocator>::operator=(param_1 + 0x308,param_2 + 0x308);
  puVar8 = (undefined8 *)(param_1 + 0x318);
  if (puVar8 != (undefined8 *)(param_2 + 0x318)) {
    iVar10 = *(int *)(param_2 + 800);
    pvVar2 = *(void **)(param_2 + 0x318);
    *(int *)(param_1 + 800) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x324) == 0)) {
      *(undefined4 *)(param_1 + 0x324) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar8,iVar10);
      _guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar2,(longlong)iVar10 * 0x18);
    }
  }
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x328,param_2 + 0x328);
  *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_2 + 0x338);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
  uVar6 = *(undefined8 *)(param_2 + 0x358);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_2 + 0x350);
  *(undefined8 *)(param_1 + 0x358) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x368);
  *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_2 + 0x360);
  *(undefined8 *)(param_1 + 0x368) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x378);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_2 + 0x370);
  *(undefined8 *)(param_1 + 0x378) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x388);
  *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(param_2 + 0x380);
  *(undefined8 *)(param_1 + 0x388) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x398);
  *(undefined8 *)(param_1 + 0x390) = *(undefined8 *)(param_2 + 0x390);
  *(undefined8 *)(param_1 + 0x398) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x3a8);
  *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(param_2 + 0x3a0);
  *(undefined8 *)(param_1 + 0x3a8) = uVar6;
  return param_1;
}



// FUNCTION 141fb8880 operator= body=149 status=ok
// SIG undefined operator=(void)

longlong FAnimNode_Base::operator=(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  if (puVar1 != (undefined8 *)(param_2 + 0x10)) {
    iVar2 = *(int *)(param_2 + 0x18);
    _Src = *(void **)(param_2 + 0x10);
    *(int *)(param_1 + 0x18) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    else {
      TArray<FExposedValueCopyRecord,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x68);
    }
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  return param_1;
}



// FUNCTION 141fb8920 FUN_141fb8920 body=341 status=ok
// SIG undefined FUN_141fb8920(void)

longlong FUN_141fb8920(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  
  FAnimNode_Base::operator=();
  puVar1 = (undefined8 *)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)(param_2 + 0x30)) {
    iVar2 = *(int *)(param_2 + 0x38);
    pvVar3 = *(void **)(param_2 + 0x30);
    *(int *)(param_1 + 0x38) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x3c) == 0)) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 * 0x18);
    }
  }
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x40,param_2 + 0x40);
  puVar1 = (undefined8 *)(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  if (puVar1 != (undefined8 *)(param_2 + 0x68)) {
    iVar2 = *(int *)(param_2 + 0x70);
    pvVar3 = *(void **)(param_2 + 0x68);
    *(int *)(param_1 + 0x70) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x74) == 0)) {
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    else {
      TArray<FDragonData_FootData,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 * 0x38);
    }
  }
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x78,param_2 + 0x78);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x88,param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  TArray<FGAttributeProgressbarStyleWithTreshold,TSizedDefaultAllocator<32>_>::operator=
            (param_1 + 0xa0,param_2 + 0xa0);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  return param_1;
}



// FUNCTION 141fb8a80 FUN_141fb8a80 body=501 status=ok
// SIG undefined FUN_141fb8a80(void)

longlong FUN_141fb8a80(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  FAnimNode_Base::operator=();
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  puVar3 = (undefined8 *)(param_2 + 0x98);
  lVar4 = (param_1 + 0x90) - param_2;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  lVar5 = 3;
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x4c) = uVar2;
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  do {
    puVar6 = (undefined8 *)(lVar4 + -0x90 + (longlong)puVar3);
    *(undefined4 *)(lVar4 + -0x98 + (longlong)puVar3) = *(undefined4 *)(puVar3 + -1);
    if (puVar6 != puVar3) {
      iVar1 = *(int *)(puVar3 + 1);
      _Src = (void *)*puVar3;
      *(int *)(lVar4 + -0x88 + (longlong)puVar3) = iVar1;
      if ((iVar1 == 0) && (*(int *)(lVar4 + -0x84 + (longlong)puVar3) == 0)) {
        *(undefined4 *)(lVar4 + -0x84 + (longlong)puVar3) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar6,iVar1);
        _guard_xfg_dispatch_icall_nop((void *)*puVar6,_Src,(longlong)iVar1 << 3);
      }
    }
    *(undefined4 *)(lVar4 + -0x80 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 2);
    *(undefined4 *)(lVar4 + -0x7c + (longlong)puVar3) = *(undefined4 *)((longlong)puVar3 + 0x14);
    *(undefined4 *)(lVar4 + -0x78 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 3);
    *(undefined4 *)(lVar4 + -0x74 + (longlong)puVar3) = *(undefined4 *)((longlong)puVar3 + 0x1c);
    *(undefined4 *)(lVar4 + -0x70 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 4);
    puVar3 = puVar3 + 6;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  TArray<FGAttributeProgressbarStyleWithTreshold,TSizedDefaultAllocator<32>_>::operator=
            (param_1 + 0x120,param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  uVar2 = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = uVar2;
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x158) = *(undefined1 *)(param_2 + 0x158);
  *(undefined1 *)(param_1 + 0x159) = *(undefined1 *)(param_2 + 0x159);
  return param_1;
}



// FUNCTION 141fb8c80 FUN_141fb8c80 body=103 status=ok
// SIG undefined FUN_141fb8c80(void)

undefined8 * FUN_141fb8c80(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 141fb8cf0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FAnimNode_BlendListBase::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FAnimNode_BlendListBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141fb8d30 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FAnimNode_BlendListByBool::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FAnimNode_BlendListBase::~FAnimNode_BlendListBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 141fb8d70 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FAnimNode_BlendListByEnum::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  FAnimNode_BlendListBase::~FAnimNode_BlendListBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 141fb8dc0 AnimPhysAngularConstraintType_StaticEnum body=85 status=ok
// SIG undefined AnimPhysAngularConstraintType_StaticEnum(void)

void AnimPhysAngularConstraintType_StaticEnum(void)

{
  if (DAT_146acb060 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    DAT_146acb060 = GetStaticEnum(FUN_141fbb530,DAT_146acb118,L"AnimPhysAngularConstraintType");
  }
  return;
}



// FUNCTION 141fb8e20 AnimPhysLinearConstraintType_StaticEnum body=85 status=ok
// SIG undefined AnimPhysLinearConstraintType_StaticEnum(void)

void AnimPhysLinearConstraintType_StaticEnum(void)

{
  if (DAT_146acb058 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    DAT_146acb058 = GetStaticEnum(FUN_141fbb560,DAT_146acb118,L"AnimPhysLinearConstraintType");
  }
  return;
}



// FUNCTION 141fb8e80 AnimPhysSimSpaceType_StaticEnum body=85 status=ok
// SIG undefined AnimPhysSimSpaceType_StaticEnum(void)

void AnimPhysSimSpaceType_StaticEnum(void)

{
  if (DAT_146acb050 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    DAT_146acb050 = GetStaticEnum(FUN_141fbb590,DAT_146acb118,L"AnimPhysSimSpaceType");
  }
  return;
}



// FUNCTION 141fb8ee0 FUN_141fb8ee0 body=161 status=ok
// SIG undefined FUN_141fb8ee0(void)

undefined8 FUN_141fb8ee0(longlong param_1,uint param_2,char param_3)

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
      FUN_1404b4e10(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141fb90b0 Construct body=40 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FAnimNode_BlendListByBool>::Construct
               (undefined8 param_1,undefined8 *param_2)

{
  FAnimNode_BlendListBase::FAnimNode_BlendListBase(param_2);
  *(undefined1 *)(param_2 + 0x19) = 0;
  *param_2 = &PTR_FUN_144f37300;
  return;
}



// FUNCTION 141fb90e0 Construct body=55 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FAnimNode_BlendListByEnum>::Construct
               (undefined8 param_1,undefined8 *param_2)

{
  FAnimNode_BlendListBase::FAnimNode_BlendListBase(param_2);
  *param_2 = &PTR_FUN_144f37518;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  *(undefined1 *)(param_2 + 0x1b) = 0;
  return;
}



// FUNCTION 141fb9120 Construct body=43 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FAnimNode_BlendListByInt>::Construct
               (undefined8 param_1,undefined8 *param_2)

{
  FAnimNode_BlendListBase::FAnimNode_BlendListBase(param_2);
  *(undefined4 *)(param_2 + 0x19) = 0;
  *param_2 = &PTR_FUN_144f37730;
  return;
}



// FUNCTION 141fb91e0 Construct body=89 status=ok
// SIG undefined Construct(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UScriptStruct::TCppStructOps<FAnimPhysPlanarLimit>::Construct(undefined8 param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x50);
  *(undefined4 *)((longlong)param_2 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x10) = 0xffffffff;
  uVar1 = uRam0000000146acb09c;
  *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(uint *)((longlong)param_2 + 0x2c) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  uVar1 = uRam0000000146acb094 & uRam0000000146acb0a4;
  uVar2 = uRam0000000146acb098 & uRam0000000146acb0a8;
  uVar3 = uRam0000000146acb09c & uRam0000000146acb0ac;
  *(uint *)((longlong)param_2 + 0x40) = _DAT_146acb090 & _DAT_146acb0a0;
  *(uint *)((longlong)param_2 + 0x44) = uVar1;
  *(uint *)((longlong)param_2 + 0x48) = uVar2;
  *(uint *)((longlong)param_2 + 0x4c) = uVar3;
  return;
}



// FUNCTION 141fb92f0 FUN_141fb92f0 body=306 status=ok
// SIG undefined FUN_141fb92f0(void)

undefined8 FUN_141fb92f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar7 = (undefined8 *)(param_2 + 0x1f0);
    do {
      FUN_141fb8a80(puVar7 + -0x3e,param_3 + -0x1f0 + (longlong)puVar7);
      puVar2 = (undefined8 *)((longlong)puVar7 + param_3 + -0x90);
      uVar6 = puVar2[1];
      puVar7[-0x12] = *puVar2;
      puVar7[-0x11] = uVar6;
      puVar7[-0x10] = *(undefined8 *)((longlong)puVar7 + param_3 + -0x80);
      *(undefined4 *)(puVar7 + -0xf) = *(undefined4 *)((longlong)puVar7 + param_3 + -0x78);
      *(undefined1 *)((longlong)puVar7 + -0x74) =
           *(undefined1 *)((longlong)puVar7 + param_3 + -0x74);
      puVar7[-0xe] = *(undefined8 *)((longlong)puVar7 + param_3 + -0x70);
      *(undefined4 *)(puVar7 + -0xd) = *(undefined4 *)((longlong)puVar7 + param_3 + -0x68);
      puVar7[-0xc] = *(undefined8 *)((longlong)puVar7 + param_3 + -0x60);
      puVar7[-0xb] = *(undefined8 *)((longlong)puVar7 + param_3 + -0x58);
      puVar7[-10] = *(undefined8 *)((longlong)puVar7 + param_3 + -0x50);
      *(undefined4 *)(puVar7 + -9) = *(undefined4 *)((longlong)puVar7 + param_3 + -0x48);
      *(undefined4 *)((longlong)puVar7 + -0x44) =
           *(undefined4 *)((longlong)puVar7 + param_3 + -0x44);
      puVar2 = (undefined8 *)((longlong)puVar7 + param_3 + -0x40);
      uVar6 = puVar2[1];
      puVar7[-8] = *puVar2;
      puVar7[-7] = uVar6;
      puVar7[-6] = *(undefined8 *)((longlong)puVar7 + param_3 + -0x30);
      puVar2 = (undefined8 *)((longlong)puVar7 + param_3 + -0x20);
      uVar6 = puVar2[1];
      puVar7[-4] = *puVar2;
      puVar7[-3] = uVar6;
      puVar2 = (undefined8 *)(param_3 + -0x10 + (longlong)puVar7);
      uVar6 = puVar2[1];
      puVar7[-2] = *puVar2;
      puVar7[-1] = uVar6;
      uVar6 = ((undefined8 *)(param_3 + (longlong)puVar7))[1];
      *puVar7 = *(undefined8 *)(param_3 + (longlong)puVar7);
      puVar7[1] = uVar6;
      puVar2 = (undefined8 *)((longlong)puVar7 + param_3 + 0x10);
      uVar6 = puVar2[1];
      puVar7[2] = *puVar2;
      puVar7[3] = uVar6;
      puVar7[4] = *(undefined8 *)((longlong)puVar7 + param_3 + 0x20);
      puVar2 = (undefined8 *)((longlong)puVar7 + param_3 + 0x30);
      uVar6 = puVar2[1];
      puVar7[6] = *puVar2;
      puVar7[7] = uVar6;
      puVar1 = (undefined4 *)(param_3 + 0x40 + (longlong)puVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(puVar7 + 8) = *puVar1;
      *(undefined4 *)((longlong)puVar7 + 0x44) = uVar3;
      *(undefined4 *)(puVar7 + 9) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0x4c) = uVar5;
      puVar1 = (undefined4 *)(param_3 + 0x50 + (longlong)puVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(puVar7 + 10) = *puVar1;
      *(undefined4 *)((longlong)puVar7 + 0x54) = uVar3;
      *(undefined4 *)(puVar7 + 0xb) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0x5c) = uVar5;
      *(undefined1 *)(puVar7 + 0xc) = *(undefined1 *)((longlong)puVar7 + param_3 + 0x60);
      puVar7 = puVar7 + 0x4c;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141fb9430 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FAnimInstanceProxy>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_141fb8110(param_2 + param_3,param_3);
      param_3 = param_3 + 0x3b0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141fb9480 FUN_141fb9480 body=364 status=ok
// SIG undefined FUN_141fb9480(void)

undefined8 FUN_141fb9480(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar7 = (undefined8 *)(param_2 + 0x48);
    do {
      FAnimNode_Base::operator=(puVar7 + -9,param_3 + -0x48 + (longlong)puVar7);
      puVar1 = (undefined8 *)(param_3 + -0x18 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[-3] = *puVar1;
      puVar7[-2] = uVar6;
      puVar7[-1] = *(undefined8 *)(param_3 + -8 + (longlong)puVar7);
      uVar6 = ((undefined8 *)(param_3 + (longlong)puVar7))[1];
      *puVar7 = *(undefined8 *)(param_3 + (longlong)puVar7);
      puVar7[1] = uVar6;
      puVar7[2] = *(undefined8 *)(param_3 + 0x10 + (longlong)puVar7);
      *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(param_3 + 0x18 + (longlong)puVar7);
      *(undefined8 *)((longlong)puVar7 + 0x1c) = *(undefined8 *)(param_3 + 0x1c + (longlong)puVar7);
      *(undefined4 *)((longlong)puVar7 + 0x24) = *(undefined4 *)(param_3 + 0x24 + (longlong)puVar7);
      *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(param_3 + 0x28 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + 0x2c) = *(undefined1 *)(param_3 + 0x2c + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + 0x2d) = *(undefined1 *)(param_3 + 0x2d + (longlong)puVar7);
      puVar1 = (undefined8 *)(param_3 + 0x30 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[6] = *puVar1;
      puVar7[7] = uVar6;
      puVar1 = (undefined8 *)(param_3 + 0x40 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[8] = *puVar1;
      puVar7[9] = uVar6;
      puVar1 = (undefined8 *)(param_3 + 0x50 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[10] = *puVar1;
      puVar7[0xb] = uVar6;
      puVar1 = (undefined8 *)(param_3 + 0x60 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[0xc] = *puVar1;
      puVar7[0xd] = uVar6;
      puVar1 = (undefined8 *)(param_3 + 0x70 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[0xe] = *puVar1;
      puVar7[0xf] = uVar6;
      puVar7[0x10] = *(undefined8 *)(param_3 + 0x80 + (longlong)puVar7);
      puVar7[0x11] = *(undefined8 *)(param_3 + 0x88 + (longlong)puVar7);
      puVar1 = (undefined8 *)(param_3 + 0x90 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[0x12] = *puVar1;
      puVar7[0x13] = uVar6;
      puVar1 = (undefined8 *)(param_3 + 0xa0 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[0x14] = *puVar1;
      puVar7[0x15] = uVar6;
      puVar2 = (undefined4 *)(param_3 + 0xb0 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(puVar7 + 0x16) = *puVar2;
      *(undefined4 *)((longlong)puVar7 + 0xb4) = uVar3;
      *(undefined4 *)(puVar7 + 0x17) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0xbc) = uVar5;
      puVar7[0x18] = *(undefined8 *)(param_3 + 0xc0 + (longlong)puVar7);
      *(undefined4 *)(puVar7 + 0x19) = *(undefined4 *)(param_3 + 200 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + 0xcc) = *(undefined1 *)(param_3 + 0xcc + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + 0xcd) = *(undefined1 *)(param_3 + 0xcd + (longlong)puVar7);
      puVar7 = puVar7 + 0x23;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141fb95f0 FUN_141fb95f0 body=243 status=ok
// SIG undefined FUN_141fb95f0(void)

undefined8 FUN_141fb95f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 0x140);
    do {
      FUN_1412e72e0(param_2,puVar3 + -0x28);
      puVar1 = (undefined8 *)(param_2 + 0x140);
      if (puVar1 != puVar3) {
        iVar2 = *(int *)(puVar3 + 1);
        _Src = (void *)*puVar3;
        *(int *)(param_2 + 0x148) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x14c) == 0)) {
          *(undefined4 *)(param_2 + 0x14c) = 0;
        }
        else {
          TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x30);
        }
      }
      TArray<FVector,FDefaultAllocator>::operator=(param_2 + 0x150,puVar3 + 2);
      puVar3 = puVar3 + 0x2c;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x160;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141fb96f0 FUN_141fb96f0 body=217 status=ok
// SIG undefined FUN_141fb96f0(void)

undefined8 FUN_141fb96f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar3 = (undefined8 *)(param_2 + 0x48);
    do {
      FAnimNode_Base::operator=(puVar3 + -9,param_3 + -0x48 + (longlong)puVar3);
      puVar1 = (undefined8 *)(param_3 + -0x18 + (longlong)puVar3);
      uVar2 = puVar1[1];
      puVar3[-3] = *puVar1;
      puVar3[-2] = uVar2;
      puVar3[-1] = *(undefined8 *)(param_3 + -8 + (longlong)puVar3);
      uVar2 = ((undefined8 *)(param_3 + (longlong)puVar3))[1];
      *puVar3 = *(undefined8 *)(param_3 + (longlong)puVar3);
      puVar3[1] = uVar2;
      puVar3[2] = *(undefined8 *)(param_3 + 0x10 + (longlong)puVar3);
      *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_3 + 0x18 + (longlong)puVar3);
      *(undefined8 *)((longlong)puVar3 + 0x1c) = *(undefined8 *)(param_3 + 0x1c + (longlong)puVar3);
      TArray<FBlendBoneByChannelEntry,FDefaultAllocator>::operator=
                (puVar3 + 5,param_3 + 0x28 + (longlong)puVar3);
      *(undefined1 *)(puVar3 + 7) = *(undefined1 *)(param_3 + 0x38 + (longlong)puVar3);
      *(undefined4 *)((longlong)puVar3 + 0x3c) = *(undefined4 *)(param_3 + 0x3c + (longlong)puVar3);
      *(undefined1 *)(puVar3 + 8) = *(undefined1 *)(param_3 + 0x40 + (longlong)puVar3);
      TArray<FBlendBoneByChannelEntry,FDefaultAllocator>::operator=
                (puVar3 + 9,param_3 + 0x48 + (longlong)puVar3);
      *(undefined1 *)(puVar3 + 0xb) = *(undefined1 *)(param_3 + 0x58 + (longlong)puVar3);
      puVar3 = puVar3 + 0x15;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141fb97d0 FUN_141fb97d0 body=407 status=ok
// SIG undefined FUN_141fb97d0(void)

undefined8 FUN_141fb97d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined8 *)(param_3 + 0x30);
    do {
      FAnimNode_Base::operator=(param_2,puVar4 + -6);
      puVar1 = (undefined8 *)(param_2 + 0x30);
      if (puVar1 != puVar4) {
        iVar2 = *(int *)(puVar4 + 1);
        pvVar3 = (void *)*puVar4;
        *(int *)(param_2 + 0x38) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x3c) == 0)) {
          *(undefined4 *)(param_2 + 0x3c) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 * 0x18);
        }
      }
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 0x40,puVar4 + 2);
      puVar1 = (undefined8 *)(param_2 + 0x68);
      *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(puVar4 + 4);
      *(undefined8 *)(param_2 + 0x58) = puVar4[5];
      *(undefined8 *)(param_2 + 0x60) = puVar4[6];
      if (puVar1 != puVar4 + 7) {
        iVar2 = *(int *)(puVar4 + 8);
        pvVar3 = (void *)puVar4[7];
        *(int *)(param_2 + 0x70) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x74) == 0)) {
          *(undefined4 *)(param_2 + 0x74) = 0;
        }
        else {
          TArray<FDragonData_FootData,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 * 0x38);
        }
      }
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 0x78,puVar4 + 9);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 0x88,puVar4 + 0xb);
      *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(puVar4 + 0xd);
      TArray<FGAttributeProgressbarStyleWithTreshold,TSizedDefaultAllocator<32>_>::operator=
                (param_2 + 0xa0,puVar4 + 0xe);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 0xb0,puVar4 + 0x10);
      puVar1 = puVar4 + 0x12;
      puVar4 = puVar4 + 0x19;
      *(undefined1 *)(param_2 + 0xc0) = *(undefined1 *)puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 200;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141fb9970 Copy body=88 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAnimNode_BlendListByBool>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FUN_141fb8920(param_2,param_3 + param_2);
      *(undefined1 *)(param_2 + 200) = *(undefined1 *)(param_3 + 200 + param_2);
      param_2 = param_2 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141fb99d0 Copy body=110 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAnimNode_BlendListByEnum>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0xd8);
    do {
      FUN_141fb8920(puVar1 + -0xd8,puVar1 + param_3 + -0xd8);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=
                (puVar1 + -0x10,puVar1 + param_3 + -0x10);
      *puVar1 = puVar1[param_3];
      puVar1 = puVar1 + 0xe0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141fb9a40 Copy body=87 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAnimNode_BlendListByInt>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FUN_141fb8920(param_2,param_3 + param_2);
      *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_3 + 200 + param_2);
      param_2 = param_2 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141fb9aa0 FUN_141fb9aa0 body=87 status=ok
// SIG undefined FUN_141fb9aa0(void)

undefined8 FUN_141fb9aa0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FUN_141fb8a80(param_2,param_3 + param_2);
      *(undefined4 *)(param_2 + 0x160) = *(undefined4 *)(param_3 + 0x160 + param_2);
      param_2 = param_2 + 0x168;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141fb9b00 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FGPUSpriteResourceData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_141fb8a80(param_2 + param_3,param_3);
      param_3 = param_3 + 0x160;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141fb9b50 FUN_141fb9b50 body=367 status=ok
// SIG undefined FUN_141fb9b50(void)

undefined8 FUN_141fb9b50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar7 = (undefined1 *)(param_2 + 0x158);
    do {
      FUN_1412e72e0(puVar7 + -0x158,puVar7 + param_3 + -0x158);
      uVar5 = *(undefined8 *)((longlong)(puVar7 + param_3 + -0x18) + 8);
      *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + param_3 + -0x18);
      *(undefined8 *)(puVar7 + -0x10) = uVar5;
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + param_3 + -8);
      *puVar7 = puVar7[param_3];
      *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(puVar7 + param_3 + 8);
      *(undefined4 *)(puVar7 + 0x10) = *(undefined4 *)(puVar7 + param_3 + 0x10);
      puVar7[0x14] = puVar7[param_3 + 0x14];
      *(undefined4 *)(puVar7 + 0x18) = *(undefined4 *)(puVar7 + param_3 + 0x18);
      *(undefined4 *)(puVar7 + 0x1c) = *(undefined4 *)(puVar7 + param_3 + 0x1c);
      *(undefined4 *)(puVar7 + 0x20) = *(undefined4 *)(puVar7 + param_3 + 0x20);
      *(undefined4 *)(puVar7 + 0x24) = *(undefined4 *)(puVar7 + param_3 + 0x24);
      puVar7[0x28] = puVar7[param_3 + 0x28];
      *(undefined8 *)(puVar7 + 0x30) = *(undefined8 *)(puVar7 + param_3 + 0x30);
      puVar1 = (undefined4 *)(puVar7 + param_3 + 0x38);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar7 + 0x38) = *puVar1;
      *(undefined4 *)(puVar7 + 0x3c) = uVar2;
      *(undefined4 *)(puVar7 + 0x40) = uVar3;
      *(undefined4 *)(puVar7 + 0x44) = uVar4;
      *(undefined8 *)(puVar7 + 0x48) = *(undefined8 *)(puVar7 + param_3 + 0x48);
      puVar7[0x50] = puVar7[param_3 + 0x50];
      *(uint *)(puVar7 + 0x54) =
           *(uint *)(puVar7 + 0x54) ^
           (*(uint *)(puVar7 + 0x54) ^ *(uint *)(puVar7 + param_3 + 0x54)) & 1;
      uVar6 = (*(uint *)(puVar7 + 0x54) ^ *(uint *)(puVar7 + param_3 + 0x54)) & 2 ^
              *(uint *)(puVar7 + 0x54);
      *(uint *)(puVar7 + 0x54) = uVar6;
      uVar6 = (uVar6 ^ *(uint *)(puVar7 + param_3 + 0x54)) & 4 ^ uVar6;
      *(uint *)(puVar7 + 0x54) = uVar6;
      uVar6 = (uVar6 ^ *(uint *)(puVar7 + param_3 + 0x54)) & 8 ^ uVar6;
      *(uint *)(puVar7 + 0x54) = uVar6;
      uVar6 = (uVar6 ^ *(uint *)(puVar7 + param_3 + 0x54)) & 0x10 ^ uVar6;
      *(uint *)(puVar7 + 0x54) = uVar6;
      uVar6 = (uVar6 ^ *(uint *)(puVar7 + param_3 + 0x54)) & 0x20 ^ uVar6;
      *(uint *)(puVar7 + 0x54) = uVar6;
      uVar6 = (uVar6 ^ *(uint *)(puVar7 + param_3 + 0x54)) & 0x40 ^ uVar6;
      *(uint *)(puVar7 + 0x54) = uVar6;
      uVar6 = (uVar6 ^ *(uint *)(puVar7 + param_3 + 0x54)) & 0x80 ^ uVar6;
      *(uint *)(puVar7 + 0x54) = uVar6;
      *(uint *)(puVar7 + 0x54) = (uVar6 ^ *(uint *)(puVar7 + param_3 + 0x54)) & 0x100 ^ uVar6;
      puVar7[0x58] = puVar7[param_3 + 0x58];
      puVar7 = puVar7 + 0x1b8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141fb9cc0 FUN_141fb9cc0 body=537 status=ok
// SIG undefined FUN_141fb9cc0(void)

undefined8 FUN_141fb9cc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  void *_Src;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  int *piVar16;
  
  if (param_4 != 0) {
    piVar16 = (int *)(param_3 + 0x160);
    do {
      FUN_1412e72e0(param_2,piVar16 + -0x58);
      iVar14 = piVar16[-7];
      iVar4 = piVar16[-6];
      iVar5 = piVar16[-5];
      piVar2 = (int *)(param_2 + 0x158);
      *(int *)(param_2 + 0x140) = piVar16[-8];
      *(int *)(param_2 + 0x144) = iVar14;
      *(int *)(param_2 + 0x148) = iVar4;
      *(int *)(param_2 + 0x14c) = iVar5;
      *(undefined8 *)(param_2 + 0x150) = *(undefined8 *)(piVar16 + -4);
      if (piVar2 != piVar16 + -2) {
        iVar14 = *piVar16;
        _Src = *(void **)(piVar16 + -2);
        *(int *)(param_2 + 0x160) = iVar14;
        if ((iVar14 == 0) && (*(int *)(param_2 + 0x164) == 0)) {
          *(undefined4 *)(param_2 + 0x164) = 0;
        }
        else {
          TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(piVar2,iVar14);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar2,_Src,(longlong)iVar14 * 0x28);
        }
      }
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 0x168,piVar16 + 2);
      plVar12 = (longlong *)(param_2 + 0x178);
      if (plVar12 != (longlong *)(piVar16 + 6)) {
        iVar14 = *(int *)(param_2 + 0x180);
        if (iVar14 != 0) {
          plVar10 = (longlong *)(*plVar12 + 8);
          do {
            puVar15 = (undefined8 *)*plVar10;
            if (puVar15 != (undefined8 *)0x0) {
              (**(code **)*puVar15)(puVar15,1);
              *plVar10 = 0;
            }
            plVar10 = plVar10 + 0x10;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        iVar14 = piVar16[8];
        lVar3 = *(longlong *)(piVar16 + 6);
        *(int *)(param_2 + 0x180) = iVar14;
        if ((iVar14 == 0) && (*(int *)(param_2 + 0x184) == 0)) {
          *(undefined4 *)(param_2 + 0x184) = 0;
        }
        else {
          TArray<FModuleDescriptor,FDefaultAllocator>::ResizeForCopy(plVar12,iVar14);
          puVar13 = (undefined1 *)*plVar12;
          if (iVar14 != 0) {
            puVar11 = (undefined8 *)(lVar3 + 0x40);
            puVar15 = (undefined8 *)(puVar13 + 0x40);
            do {
              puVar15[-7] = 0;
              *puVar13 = *(undefined1 *)(puVar11 + -8);
              if (puVar11[-7] != 0) {
                if (*(char *)(puVar11 + -8) == '\0') {
                  FConstraintDescriptor::Set(puVar13);
                }
                else if (*(char *)(puVar11 + -8) == '\x01') {
                  FConstraintDescriptor::Set(puVar13);
                }
              }
              puVar13 = puVar13 + 0x80;
              *(undefined4 *)(puVar15 + -6) = *(undefined4 *)(puVar11 + -6);
              *(undefined1 *)((longlong)puVar15 + -0x2c) =
                   *(undefined1 *)((longlong)puVar11 + -0x2c);
              uVar9 = puVar11[-3];
              puVar15[-4] = puVar11[-4];
              puVar15[-3] = uVar9;
              uVar9 = puVar11[-1];
              puVar15[-2] = puVar11[-2];
              puVar15[-1] = uVar9;
              uVar9 = puVar11[1];
              *puVar15 = *puVar11;
              puVar15[1] = uVar9;
              uVar9 = puVar11[3];
              puVar15[2] = puVar11[2];
              puVar15[3] = uVar9;
              uVar6 = *(undefined4 *)((longlong)puVar11 + 0x24);
              uVar7 = *(undefined4 *)(puVar11 + 5);
              uVar8 = *(undefined4 *)((longlong)puVar11 + 0x2c);
              *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(puVar11 + 4);
              *(undefined4 *)((longlong)puVar15 + 0x24) = uVar6;
              *(undefined4 *)(puVar15 + 5) = uVar7;
              *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar8;
              puVar1 = puVar11 + 6;
              uVar9 = puVar11[7];
              puVar11 = puVar11 + 0x10;
              puVar15[6] = *puVar1;
              puVar15[7] = uVar9;
              puVar15 = puVar15 + 0x10;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
        }
      }
      piVar16 = piVar16 + 0x62;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x188;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141fb9ee0 FUN_141fb9ee0 body=158 status=ok
// SIG undefined FUN_141fb9ee0(void)

undefined8 FUN_141fb9ee0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar7 = (undefined4 *)(param_2 + 0x158);
    do {
      FUN_1412e72e0(puVar7 + -0x56,param_3 + -0x158 + (longlong)puVar7);
      puVar2 = (undefined8 *)(param_3 + -0x18 + (longlong)puVar7);
      uVar6 = puVar2[1];
      *(undefined8 *)(puVar7 + -6) = *puVar2;
      *(undefined8 *)(puVar7 + -4) = uVar6;
      *(undefined8 *)(puVar7 + -2) = *(undefined8 *)(param_3 + -8 + (longlong)puVar7);
      puVar1 = (undefined4 *)(param_3 + (longlong)puVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar3;
      puVar7[2] = uVar4;
      puVar7[3] = uVar5;
      *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(param_3 + 0x10 + (longlong)puVar7);
      *(undefined1 *)(puVar7 + 6) = *(undefined1 *)(param_3 + 0x18 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + 0x19) = *(undefined1 *)(param_3 + 0x19 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + 0x1a) = *(undefined1 *)(param_3 + 0x1a + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + 0x1b) = *(undefined1 *)(param_3 + 0x1b + (longlong)puVar7);
      puVar7 = puVar7 + 0x5e;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141fb9f80 FUN_141fb9f80 body=191 status=ok
// SIG undefined FUN_141fb9f80(void)

undefined8 FUN_141fb9f80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar7 = (undefined4 *)(param_2 + 0x158);
    do {
      FUN_1412e72e0(puVar7 + -0x56,param_3 + -0x158 + (longlong)puVar7);
      puVar2 = (undefined8 *)(param_3 + -0x18 + (longlong)puVar7);
      uVar6 = puVar2[1];
      *(undefined8 *)(puVar7 + -6) = *puVar2;
      *(undefined8 *)(puVar7 + -4) = uVar6;
      *(undefined8 *)(puVar7 + -2) = *(undefined8 *)(param_3 + -8 + (longlong)puVar7);
      puVar1 = (undefined4 *)(param_3 + (longlong)puVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar3;
      puVar7[2] = uVar4;
      puVar7[3] = uVar5;
      *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(param_3 + 0x10 + (longlong)puVar7);
      *(undefined1 *)(puVar7 + 6) = *(undefined1 *)(param_3 + 0x18 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + 0x19) = *(undefined1 *)(param_3 + 0x19 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + 0x1a) = *(undefined1 *)(param_3 + 0x1a + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + 0x1b) = *(undefined1 *)(param_3 + 0x1b + (longlong)puVar7);
      puVar7[7] = *(undefined4 *)(param_3 + 0x1c + (longlong)puVar7);
      puVar7[8] = *(undefined4 *)(param_3 + 0x20 + (longlong)puVar7);
      puVar7[9] = *(undefined4 *)(param_3 + 0x24 + (longlong)puVar7);
      puVar7 = puVar7 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141fba040 Copy body=168 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAnimNode_CopyPoseFromMesh>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x40);
    do {
      FAnimNode_Base::operator=(puVar1 + -0x10,param_3 + -0x40 + (longlong)puVar1);
      puVar1[-4] = *(undefined4 *)(param_3 + -0x10 + (longlong)puVar1);
      puVar1[-3] = *(undefined4 *)(param_3 + -0xc + (longlong)puVar1);
      *(undefined1 *)(puVar1 + -2) = *(undefined1 *)(param_3 + -8 + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + -7) = *(undefined1 *)(param_3 + -7 + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::operator=
                (puVar1 + 2,param_3 + 8 + (longlong)puVar1);
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      operator=(puVar1 + 0x16,param_3 + 0x58 + (longlong)puVar1);
      puVar1 = puVar1 + 0x3a;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141fba1b0 CopyBoneDeltaMode_StaticEnum body=85 status=ok
// SIG undefined CopyBoneDeltaMode_StaticEnum(void)

void CopyBoneDeltaMode_StaticEnum(void)

{
  if (DAT_146acb070 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    DAT_146acb070 = GetStaticEnum(FUN_141fbb5c0,DAT_146acb118,L"CopyBoneDeltaMode");
  }
  return;
}



// FUNCTION 141fba210 EConstraintOffsetOption_StaticEnum body=85 status=ok
// SIG undefined EConstraintOffsetOption_StaticEnum(void)

void EConstraintOffsetOption_StaticEnum(void)

{
  if (DAT_146acb068 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    DAT_146acb068 = GetStaticEnum(FUN_141fbb5f0,DAT_146acb118,L"EConstraintOffsetOption");
  }
  return;
}



// FUNCTION 141fba270 EDrivenBoneModificationMode_StaticEnum body=85 status=ok
// SIG undefined EDrivenBoneModificationMode_StaticEnum(void)

void EDrivenBoneModificationMode_StaticEnum(void)

{
  if (DAT_146acb040 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    DAT_146acb040 = GetStaticEnum(FUN_141fbb620,DAT_146acb118,L"EDrivenBoneModificationMode");
  }
  return;
}



// FUNCTION 141fba2d0 EDrivenDestinationMode_StaticEnum body=85 status=ok
// SIG undefined EDrivenDestinationMode_StaticEnum(void)

void EDrivenDestinationMode_StaticEnum(void)

{
  if (DAT_146acb038 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    DAT_146acb038 = GetStaticEnum(FUN_141fbb650,DAT_146acb118,L"EDrivenDestinationMode");
  }
  return;
}



// FUNCTION 141fba330 ESphericalLimitType_StaticEnum body=85 status=ok
// SIG undefined ESphericalLimitType_StaticEnum(void)

void ESphericalLimitType_StaticEnum(void)

{
  if (DAT_146acb048 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    DAT_146acb048 = GetStaticEnum(FUN_141fbb680,DAT_146acb118,L"ESphericalLimitType");
  }
  return;
}



// FUNCTION 141fba390 GetNodeName body=194 status=ok
// SIG undefined GetNodeName(void)

undefined8
FAnimNode_BlendListBase::GetNodeName(undefined8 param_1,undefined8 param_2,float *param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 local_res10;
  undefined2 *local_28;
  int local_20;
  
  if (param_3[8] == 0.0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = *(undefined2 **)(param_3 + 6);
  }
  lVar1 = StaticStruct();
  local_res10 = *(undefined8 *)(lVar1 + 0x18);
  FName::ToString(&local_res10,&local_28);
  puVar3 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar3 = local_28;
  }
  FString::PrintfImpl(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(*param_3 * 100.0),puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  param_3[8] = 0.0;
  if (param_3[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3 + 6,0);
  }
  return param_2;
}



// FUNCTION 141fba460 GetNodeName body=194 status=ok
// SIG undefined GetNodeName(void)

undefined8
FAnimNode_BlendListByBool::GetNodeName(undefined8 param_1,undefined8 param_2,float *param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 local_res10;
  undefined2 *local_28;
  int local_20;
  
  if (param_3[8] == 0.0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = *(undefined2 **)(param_3 + 6);
  }
  lVar1 = StaticStruct();
  local_res10 = *(undefined8 *)(lVar1 + 0x18);
  FName::ToString(&local_res10,&local_28);
  puVar3 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar3 = local_28;
  }
  FString::PrintfImpl(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(*param_3 * 100.0),puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  param_3[8] = 0.0;
  if (param_3[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3 + 6,0);
  }
  return param_2;
}



// FUNCTION 141fba530 GetNodeName body=194 status=ok
// SIG undefined GetNodeName(void)

undefined8
FAnimNode_BlendListByEnum::GetNodeName(undefined8 param_1,undefined8 param_2,float *param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 local_res10;
  undefined2 *local_28;
  int local_20;
  
  if (param_3[8] == 0.0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = *(undefined2 **)(param_3 + 6);
  }
  lVar1 = StaticStruct();
  local_res10 = *(undefined8 *)(lVar1 + 0x18);
  FName::ToString(&local_res10,&local_28);
  puVar3 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar3 = local_28;
  }
  FString::PrintfImpl(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(*param_3 * 100.0),puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  param_3[8] = 0.0;
  if (param_3[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3 + 6,0);
  }
  return param_2;
}



// FUNCTION 141fba600 GetNodeName body=194 status=ok
// SIG undefined GetNodeName(void)

undefined8
FAnimNode_BlendListByInt::GetNodeName(undefined8 param_1,undefined8 param_2,float *param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 local_res10;
  undefined2 *local_28;
  int local_20;
  
  if (param_3[8] == 0.0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = *(undefined2 **)(param_3 + 6);
  }
  lVar1 = StaticStruct();
  local_res10 = *(undefined8 *)(lVar1 + 0x18);
  FName::ToString(&local_res10,&local_28);
  puVar3 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar3 = local_28;
  }
  FString::PrintfImpl(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(*param_3 * 100.0),puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  param_3[8] = 0.0;
  if (param_3[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3 + 6,0);
  }
  return param_2;
}



// FUNCTION 141fba6d0 Get_Z_Construct_UScriptStruct_FAngularRangeLimit_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAngularRangeLimit_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAngularRangeLimit_CRC(void)

{
  return 0xcd43c3e7;
}



// FUNCTION 141fba6e0 FUN_141fba6e0 body=6 status=ok
// SIG undefined FUN_141fba6e0(void)

undefined8 FUN_141fba6e0(void)

{
  return 0x8b3232ec;
}



// FUNCTION 141fba6f0 FUN_141fba6f0 body=6 status=ok
// SIG undefined FUN_141fba6f0(void)

undefined8 FUN_141fba6f0(void)

{
  return 0x7cd83f66;
}



// FUNCTION 141fba700 FUN_141fba700 body=6 status=ok
// SIG undefined FUN_141fba700(void)

undefined8 FUN_141fba700(void)

{
  return 0x43cbba65;
}



// FUNCTION 141fba710 Get_Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_CRC(void)

{
  return 0x4117238e;
}



// FUNCTION 141fba720 FUN_141fba720 body=6 status=ok
// SIG undefined FUN_141fba720(void)

undefined8 FUN_141fba720(void)

{
  return 0x18b3d8af;
}



// FUNCTION 141fba730 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListBase_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimNode_BlendListBase_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListBase_CRC(void)

{
  return 0x8d116f6f;
}



// FUNCTION 141fba740 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_CRC(void)

{
  return 0x9bfe5d06;
}



// FUNCTION 141fba750 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_CRC(void)

{
  return 0xd191fbcf;
}



// FUNCTION 141fba760 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_CRC(void)

{
  return 0x78475ae4;
}



// FUNCTION 141fba770 Get_Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_CRC(void)

{
  return 0xd48b4902;
}



// FUNCTION 141fba780 FUN_141fba780 body=6 status=ok
// SIG undefined FUN_141fba780(void)

undefined8 FUN_141fba780(void)

{
  return 0x7cdb4aea;
}



// FUNCTION 141fba790 FUN_141fba790 body=6 status=ok
// SIG undefined FUN_141fba790(void)

undefined8 FUN_141fba790(void)

{
  return 0x27e773b9;
}



// FUNCTION 141fba7a0 Get_Z_Construct_UScriptStruct_FAnimNode_Constraint_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimNode_Constraint_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimNode_Constraint_CRC(void)

{
  return 0xd5c47f00;
}



// FUNCTION 141fba7b0 Get_Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_CRC(void)

{
  return 0xf4c81eff;
}



// FUNCTION 141fba7c0 Get_Z_Construct_UScriptStruct_FAnimNode_CopyBone_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimNode_CopyBone_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimNode_CopyBone_CRC(void)

{
  return 0x3ca09626;
}



// FUNCTION 141fba7d0 Get_Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_CRC(void)

{
  return 0x1176e42e;
}



// FUNCTION 141fba7e0 Get_Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_CRC(void)

{
  return 0x6660fbe0;
}



// FUNCTION 141fba7f0 Get_Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_CRC(void)

{
  return 0xf87e189f;
}



// FUNCTION 141fba800 Get_Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_CRC(void)

{
  return 0x6774b9b4;
}



// FUNCTION 141fba810 Get_Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_CRC(void)

{
  return 0x26e86562;
}



// FUNCTION 141fba820 Get_Z_Construct_UScriptStruct_FConstraint_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FConstraint_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FConstraint_CRC(void)

{
  return 0xdef1d8a3;
}



// FUNCTION 141fba900 ResizeForCopy body=142 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FAnimPhysLinkedBody,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x1f0,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x842108421084211) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 8);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if ((iVar4 != param_3) && ((*param_1 != 0 || (iVar4 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x1f0,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 141fba990 ResizeForCopy body=111 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FModuleDescriptor,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 << 7,0);
    iVar1 = (int)(uVar2 >> 7);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if ((iVar1 != param_3) && ((*param_1 != 0 || (iVar1 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 7,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  return;
}



// FUNCTION 141fbaa00 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAngularRangeLimit::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb1b0 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = Get_Z_Construct_UScriptStruct_FAngularRangeLimit_CRC();
    DAT_146acb1b0 = GetStaticStruct(FUN_141fbb6b0,lVar1,L"AngularRangeLimit",0x30,uVar2);
  }
  return;
}



// FUNCTION 141fbaa80 FUN_141fbaa80 body=113 status=ok
// SIG undefined FUN_141fbaa80(void)

void FUN_141fbaa80(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb120 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = FUN_141fba6e0();
    DAT_146acb120 = GetStaticStruct(FUN_141fbb6e0,lVar1,L"AnimNode_AimOffsetLookAt",0x260,uVar2);
  }
  return;
}



// FUNCTION 141fbab00 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FSpinBoxStyle::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb150 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = FUN_141fba6f0();
    DAT_146acb150 = GetStaticStruct(FUN_141fbb710,lVar1,L"AnimNode_AnimDynamics",0x3b0,uVar2);
  }
  return;
}



// FUNCTION 141fbab80 FUN_141fbab80 body=113 status=ok
// SIG undefined FUN_141fbab80(void)

void FUN_141fbab80(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb190 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = FUN_141fba700();
    DAT_146acb190 = GetStaticStruct(FUN_141fbb740,lVar1,L"AnimNode_ApplyAdditive",0x118,uVar2);
  }
  return;
}



// FUNCTION 141fbac00 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FCachedSubjectFrame::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb1a0 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = Get_Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_CRC();
    DAT_146acb1a0 = GetStaticStruct(FUN_141fbb770,lVar1,L"AnimNode_ApplyLimits",0x160,uVar2);
  }
  return;
}



// FUNCTION 141fbac80 FUN_141fbac80 body=113 status=ok
// SIG undefined FUN_141fbac80(void)

void FUN_141fbac80(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb1c0 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = FUN_141fba720();
    DAT_146acb1c0 = GetStaticStruct(FUN_141fbb7a0,lVar1,L"AnimNode_BlendBoneByChannel",0xa8,uVar2);
  }
  return;
}



// FUNCTION 141fbad00 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_BlendListBase::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb1e0 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = Get_Z_Construct_UScriptStruct_FAnimNode_BlendListBase_CRC();
    DAT_146acb1e0 = GetStaticStruct(FUN_141fb74f0,lVar1,L"AnimNode_BlendListBase",200,uVar2);
  }
  return;
}



// FUNCTION 141fbad80 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_BlendListByBool::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb1f0 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_CRC();
    DAT_146acb1f0 = GetStaticStruct(FUN_141fbb7d0,lVar1,L"AnimNode_BlendListByBool",0xd0,uVar2);
  }
  return;
}



// FUNCTION 141fbae00 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_BlendListByEnum::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb200 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_CRC();
    DAT_146acb200 = GetStaticStruct(FUN_141fbb800,lVar1,L"AnimNode_BlendListByEnum",0xe0,uVar2);
  }
  return;
}



// FUNCTION 141fbae80 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_BlendListByInt::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb210 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_CRC();
    DAT_146acb210 = GetStaticStruct(FUN_141fbb830,lVar1,L"AnimNode_BlendListByInt",0xd0,uVar2);
  }
  return;
}



// FUNCTION 141fbaf00 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_BoneDrivenController::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb220 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = Get_Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_CRC();
    DAT_146acb220 = GetStaticStruct(FUN_141fbb860,lVar1,L"AnimNode_BlendSpaceEvaluator",0x168,uVar2)
    ;
  }
  return;
}



// FUNCTION 141fbaf80 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FCachedSubjectFrame::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb230 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = FUN_141fba780();
    DAT_146acb230 = GetStaticStruct(FUN_141fb7940,lVar1,L"AnimNode_BlendSpacePlayer",0x160,uVar2);
  }
  return;
}



// FUNCTION 141fbb000 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FProgressBarStyle::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb250 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = FUN_141fba790();
    DAT_146acb250 =
         GetStaticStruct(FUN_141fbb890,lVar1,L"AnimNode_BoneDrivenController",0x1b8,uVar2);
  }
  return;
}



// FUNCTION 141fbb080 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FPhoAnimNode_BlendspaceBlender::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb268 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = Get_Z_Construct_UScriptStruct_FAnimNode_Constraint_CRC();
    DAT_146acb268 = GetStaticStruct(FUN_141fbb8c0,lVar1,L"AnimNode_Constraint",0x188,uVar2);
  }
  return;
}



// FUNCTION 141fbb100 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_ControlRig_ExternalSource::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb288 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = Get_Z_Construct_UScriptStruct_FAnimNode_CopyBone_CRC();
    DAT_146acb288 = GetStaticStruct(FUN_141fbb8f0,lVar1,L"AnimNode_CopyBone",0x178,uVar2);
  }
  return;
}



// FUNCTION 141fbb180 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_CCDIK::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb2a0 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = Get_Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_CRC();
    DAT_146acb2a0 = GetStaticStruct(FUN_141fbb920,lVar1,L"AnimNode_CopyBoneDelta",0x180,uVar2);
  }
  return;
}



// FUNCTION 141fbb200 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FARFilter::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb2b0 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = Get_Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_CRC();
    DAT_146acb2b0 = GetStaticStruct(FUN_141fbb950,lVar1,L"AnimNode_CopyPoseFromMesh",0xe8,uVar2);
  }
  return;
}



// FUNCTION 141fbb280 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAnimPhysConstraintSetup::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb180 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = Get_Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_CRC();
    DAT_146acb180 = GetStaticStruct(FUN_141fbb980,lVar1,L"AnimPhysConstraintSetup",0x5c,uVar2);
  }
  return;
}



// FUNCTION 141fbb300 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAnimPhysPlanarLimit::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb170 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = Get_Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_CRC();
    DAT_146acb170 = GetStaticStruct(FUN_141fbb9b0,lVar1,L"AnimPhysPlanarLimit",0x50,uVar2);
  }
  return;
}



// FUNCTION 141fbb380 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAnimPhysSphericalLimit::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb160 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = Get_Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_CRC();
    DAT_146acb160 = GetStaticStruct(FUN_141fbb9e0,lVar1,L"AnimPhysSphericalLimit",0x30,uVar2);
  }
  return;
}



// FUNCTION 141fbb400 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FBlendBoneByChannelEntry::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb1d0 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = Get_Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_CRC();
    DAT_146acb1d0 = GetStaticStruct(FUN_141fbba10,lVar1,L"BlendBoneByChannelEntry",0x38,uVar2);
  }
  return;
}



// FUNCTION 141fbb480 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FConstraint::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acb278 == 0) {
    if (DAT_146acb118 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acb118,&PTR_s__Script_AnimGraphRuntime_144f36428);
    }
    lVar1 = DAT_146acb118;
    uVar2 = Get_Z_Construct_UScriptStruct_FConstraint_CRC();
    DAT_146acb278 = GetStaticStruct(FUN_141fbba40,lVar1,L"Constraint",0x28,uVar2);
  }
  return;
}



// FUNCTION 141fbb500 FUN_141fbb500 body=47 status=ok
// SIG undefined FUN_141fbb500(void)

longlong FUN_141fbb500(void)

{
  if (DAT_146acb108 == 0) {
    FUN_141786440(&DAT_146acb108,&PTR_FUN_144f334a0);
  }
  return DAT_146acb108;
}



// FUNCTION 141fbb530 FUN_141fbb530 body=47 status=ok
// SIG undefined FUN_141fbb530(void)

longlong FUN_141fbb530(void)

{
  if (DAT_146acb148 == 0) {
    FUN_1417866a0(&DAT_146acb148,&PTR_Z_Construct_UPackage__Script_Engine_1464e0940);
  }
  return DAT_146acb148;
}



// FUNCTION 141fbb560 FUN_141fbb560 body=47 status=ok
// SIG undefined FUN_141fbb560(void)

longlong FUN_141fbb560(void)

{
  if (DAT_146acb140 == 0) {
    FUN_1417866a0(&DAT_146acb140,&PTR_Z_Construct_UPackage__Script_Engine_1464e08f0);
  }
  return DAT_146acb140;
}



// FUNCTION 141fbb590 FUN_141fbb590 body=47 status=ok
// SIG undefined FUN_141fbb590(void)

longlong FUN_141fbb590(void)

{
  if (DAT_146acb138 == 0) {
    FUN_1417866a0(&DAT_146acb138,&PTR_Z_Construct_UPackage__Script_Engine_1464e08a0);
  }
  return DAT_146acb138;
}



// FUNCTION 141fbb5c0 FUN_141fbb5c0 body=47 status=ok
// SIG undefined FUN_141fbb5c0(void)

longlong FUN_141fbb5c0(void)

{
  if (DAT_146acb298 == 0) {
    FUN_1417866a0(&DAT_146acb298,&PTR_Z_Construct_UPackage__Script_Engine_1464e0a80);
  }
  return DAT_146acb298;
}



// FUNCTION 141fbb5f0 FUN_141fbb5f0 body=47 status=ok
// SIG undefined FUN_141fbb5f0(void)

longlong FUN_141fbb5f0(void)

{
  if (DAT_146acb260 == 0) {
    FUN_1417866a0(&DAT_146acb260,&PTR_Z_Construct_UPackage__Script_Engine_1464e0a30);
  }
  return DAT_146acb260;
}



// FUNCTION 141fbb620 FUN_141fbb620 body=47 status=ok
// SIG undefined FUN_141fbb620(void)

longlong FUN_141fbb620(void)

{
  if (DAT_146acb248 == 0) {
    FUN_1417866a0(&DAT_146acb248,&PTR_Z_Construct_UPackage__Script_Engine_1464e09e0);
  }
  return DAT_146acb248;
}



// FUNCTION 141fbb650 FUN_141fbb650 body=47 status=ok
// SIG undefined FUN_141fbb650(void)

longlong FUN_141fbb650(void)

{
  if (DAT_146acb240 == 0) {
    FUN_1417866a0(&DAT_146acb240,&PTR_Z_Construct_UPackage__Script_Engine_1464e0990);
  }
  return DAT_146acb240;
}



// FUNCTION 141fbb680 FUN_141fbb680 body=47 status=ok
// SIG undefined FUN_141fbb680(void)

longlong FUN_141fbb680(void)

{
  if (DAT_146acb130 == 0) {
    FUN_1417866a0(&DAT_146acb130,&PTR_Z_Construct_UPackage__Script_Engine_1464e0850);
  }
  return DAT_146acb130;
}



// FUNCTION 141fbb6b0 FUN_141fbb6b0 body=47 status=ok
// SIG undefined FUN_141fbb6b0(void)

longlong FUN_141fbb6b0(void)

{
  if (DAT_146acb1b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb1b8,&PTR_Z_Construct_UPackage__Script_Engine_1464de820);
  }
  return DAT_146acb1b8;
}



// FUNCTION 141fbb6e0 FUN_141fbb6e0 body=47 status=ok
// SIG undefined FUN_141fbb6e0(void)

longlong FUN_141fbb6e0(void)

{
  if (DAT_146acb128 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb128,&PTR_Z_Construct_UPackage__Script_Engine_1464dd020);
  }
  return DAT_146acb128;
}



// FUNCTION 141fbb710 FUN_141fbb710 body=47 status=ok
// SIG undefined FUN_141fbb710(void)

longlong FUN_141fbb710(void)

{
  if (DAT_146acb158 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb158,&PTR_Z_Construct_UPackage__Script_Engine_1464dda60);
  }
  return DAT_146acb158;
}



// FUNCTION 141fbb740 FUN_141fbb740 body=47 status=ok
// SIG undefined FUN_141fbb740(void)

longlong FUN_141fbb740(void)

{
  if (DAT_146acb198 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb198,&PTR_Z_Construct_UPackage__Script_Engine_1464de5e0);
  }
  return DAT_146acb198;
}



// FUNCTION 141fbb770 FUN_141fbb770 body=47 status=ok
// SIG undefined FUN_141fbb770(void)

longlong FUN_141fbb770(void)

{
  if (DAT_146acb1a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb1a8,&PTR_Z_Construct_UPackage__Script_Engine_1464de6e0);
  }
  return DAT_146acb1a8;
}



// FUNCTION 141fbb7a0 FUN_141fbb7a0 body=47 status=ok
// SIG undefined FUN_141fbb7a0(void)

longlong FUN_141fbb7a0(void)

{
  if (DAT_146acb1c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb1c8,&PTR_Z_Construct_UPackage__Script_Engine_1464deb20);
  }
  return DAT_146acb1c8;
}



// FUNCTION 141fbb7d0 FUN_141fbb7d0 body=47 status=ok
// SIG undefined FUN_141fbb7d0(void)

longlong FUN_141fbb7d0(void)

{
  if (DAT_146acb1f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb1f8,&PTR_Z_Construct_UPackage__Script_Engine_1464df240);
  }
  return DAT_146acb1f8;
}



// FUNCTION 141fbb800 FUN_141fbb800 body=47 status=ok
// SIG undefined FUN_141fbb800(void)

longlong FUN_141fbb800(void)

{
  if (DAT_146acb208 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb208,&PTR_Z_Construct_UPackage__Script_Engine_1464df300);
  }
  return DAT_146acb208;
}



// FUNCTION 141fbb830 FUN_141fbb830 body=47 status=ok
// SIG undefined FUN_141fbb830(void)

longlong FUN_141fbb830(void)

{
  if (DAT_146acb218 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb218,&PTR_Z_Construct_UPackage__Script_Engine_1464df380);
  }
  return DAT_146acb218;
}



// FUNCTION 141fbb860 FUN_141fbb860 body=47 status=ok
// SIG undefined FUN_141fbb860(void)

longlong FUN_141fbb860(void)

{
  if (DAT_146acb228 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb228,&PTR_Z_Construct_UPackage__Script_Engine_1464df400);
  }
  return DAT_146acb228;
}



// FUNCTION 141fbb890 FUN_141fbb890 body=47 status=ok
// SIG undefined FUN_141fbb890(void)

longlong FUN_141fbb890(void)

{
  if (DAT_146acb258 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb258,&PTR_Z_Construct_UPackage__Script_Engine_1464dffc0);
  }
  return DAT_146acb258;
}



// FUNCTION 141fbb8c0 FUN_141fbb8c0 body=47 status=ok
// SIG undefined FUN_141fbb8c0(void)

longlong FUN_141fbb8c0(void)

{
  if (DAT_146acb270 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb270,&PTR_Z_Construct_UPackage__Script_Engine_1464e00c0);
  }
  return DAT_146acb270;
}



// FUNCTION 141fbb8f0 FUN_141fbb8f0 body=47 status=ok
// SIG undefined FUN_141fbb8f0(void)

longlong FUN_141fbb8f0(void)

{
  if (DAT_146acb290 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb290,&PTR_Z_Construct_UPackage__Script_Engine_1464e0490);
  }
  return DAT_146acb290;
}



// FUNCTION 141fbb920 FUN_141fbb920 body=47 status=ok
// SIG undefined FUN_141fbb920(void)

longlong FUN_141fbb920(void)

{
  if (DAT_146acb2a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb2a8,&PTR_Z_Construct_UPackage__Script_Engine_1464e06d0);
  }
  return DAT_146acb2a8;
}



// FUNCTION 141fbb950 FUN_141fbb950 body=47 status=ok
// SIG undefined FUN_141fbb950(void)

longlong FUN_141fbb950(void)

{
  if (DAT_146acb2b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb2b8,&PTR_Z_Construct_UPackage__Script_Engine_1464e0800);
  }
  return DAT_146acb2b8;
}



// FUNCTION 141fbb980 FUN_141fbb980 body=47 status=ok
// SIG undefined FUN_141fbb980(void)

longlong FUN_141fbb980(void)

{
  if (DAT_146acb188 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb188,&PTR_Z_Construct_UPackage__Script_Engine_1464de220);
  }
  return DAT_146acb188;
}



// FUNCTION 141fbb9b0 FUN_141fbb9b0 body=47 status=ok
// SIG undefined FUN_141fbb9b0(void)

longlong FUN_141fbb9b0(void)

{
  if (DAT_146acb178 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb178,&PTR_Z_Construct_UPackage__Script_Engine_1464ddce0);
  }
  return DAT_146acb178;
}



// FUNCTION 141fbb9e0 FUN_141fbb9e0 body=47 status=ok
// SIG undefined FUN_141fbb9e0(void)

longlong FUN_141fbb9e0(void)

{
  if (DAT_146acb168 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb168,&PTR_Z_Construct_UPackage__Script_Engine_1464ddbe0);
  }
  return DAT_146acb168;
}



// FUNCTION 141fbba10 FUN_141fbba10 body=47 status=ok
// SIG undefined FUN_141fbba10(void)

longlong FUN_141fbba10(void)

{
  if (DAT_146acb1d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb1d8,&PTR_Z_Construct_UPackage__Script_Engine_1464deda0);
  }
  return DAT_146acb1d8;
}



// FUNCTION 141fbba40 FUN_141fbba40 body=47 status=ok
// SIG undefined FUN_141fbba40(void)

longlong FUN_141fbba40(void)

{
  if (DAT_146acb280 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb280,&PTR_Z_Construct_UPackage__Script_Engine_1464e0290);
  }
  return DAT_146acb280;
}



// FUNCTION 141fbba70 FUN_141fbba70 body=53 status=ok
// SIG undefined FUN_141fbba70(void)

void FUN_141fbba70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &PTR_FUN_144f3d828;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbbab0 FUN_141fbbab0 body=53 status=ok
// SIG undefined FUN_141fbbab0(void)

void FUN_141fbbab0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144f3d940;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbbaf0 FUN_141fbbaf0 body=53 status=ok
// SIG undefined FUN_141fbbaf0(void)

void FUN_141fbbaf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144f3dc58;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbbb30 FUN_141fbbb30 body=53 status=ok
// SIG undefined FUN_141fbbb30(void)

void FUN_141fbbb30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144f3dd70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbbb70 FUN_141fbbb70 body=53 status=ok
// SIG undefined FUN_141fbbb70(void)

void FUN_141fbbb70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_144f3de88;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbbbb0 FUN_141fbbbb0 body=53 status=ok
// SIG undefined FUN_141fbbbb0(void)

void FUN_141fbbbb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &PTR_FUN_144f3dfa0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbbbf0 FUN_141fbbbf0 body=53 status=ok
// SIG undefined FUN_141fbbbf0(void)

void FUN_141fbbbf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x170;
    *puVar1 = &PTR_FUN_144f3c070;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbbc30 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &PTR_FUN_144f3c188;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 141fbbc70 FUN_141fbbc70 body=53 status=ok
// SIG undefined FUN_141fbbc70(void)

void FUN_141fbbc70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_144f3c2a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbbcb0 FUN_141fbbcb0 body=53 status=ok
// SIG undefined FUN_141fbbcb0(void)

void FUN_141fbbcb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_144f3c3b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbbcf0 FUN_141fbbcf0 body=53 status=ok
// SIG undefined FUN_141fbbcf0(void)

void FUN_141fbbcf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144f3c4d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbbd30 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x290;
    *puVar1 = &PTR_FUN_144f3c670;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 141fbbd70 FUN_141fbbd70 body=53 status=ok
// SIG undefined FUN_141fbbd70(void)

void FUN_141fbbd70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_144f3b918;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbbdb0 FUN_141fbbdb0 body=53 status=ok
// SIG undefined FUN_141fbbdb0(void)

void FUN_141fbbdb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_144f3c788;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbbdf0 FUN_141fbbdf0 body=47 status=ok
// SIG undefined FUN_141fbbdf0(void)

longlong FUN_141fbbdf0(void)

{
  if (DAT_146acb4f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acb4f0,&PTR_Z_Construct_UPackage__Script_Engine_1464e3bb0);
  }
  return DAT_146acb4f0;
}



// FUNCTION 141fbbe20 FUN_141fbbe20 body=53 status=ok
// SIG undefined FUN_141fbbe20(void)

void FUN_141fbbe20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x198;
    *puVar1 = &PTR_FUN_144f3c8d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbbe60 FUN_141fbbe60 body=53 status=ok
// SIG undefined FUN_141fbbe60(void)

void FUN_141fbbe60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd8;
    *puVar1 = &PTR_FUN_144f3cd88;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbbea0 FUN_141fbbea0 body=53 status=ok
// SIG undefined FUN_141fbbea0(void)

void FUN_141fbbea0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &PTR_FUN_144f3cff0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbbee0 FUN_141fbbee0 body=53 status=ok
// SIG undefined FUN_141fbbee0(void)

void FUN_141fbbee0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &PTR_FUN_144f3ca40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbbf20 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x240;
    *puVar1 = &PTR_FUN_144f3ba30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 141fbbf60 FUN_141fbbf60 body=53 status=ok
// SIG undefined FUN_141fbbf60(void)

void FUN_141fbbf60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &PTR_FUN_144f3cb58;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbbfa0 FUN_141fbbfa0 body=53 status=ok
// SIG undefined FUN_141fbbfa0(void)

void FUN_141fbbfa0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1b8;
    *puVar1 = &PTR_FUN_144f3bb48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbbfe0 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x180;
    *puVar1 = &PTR_FUN_144f3cc70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbc020 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x188;
    *puVar1 = &PTR_FUN_144f3d178;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbc060 FUN_141fbc060 body=53 status=ok
// SIG undefined FUN_141fbc060(void)

void FUN_141fbc060(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &PTR_FUN_144f3d290;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbc0a0 FUN_141fbc0a0 body=53 status=ok
// SIG undefined FUN_141fbc0a0(void)

void FUN_141fbc0a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144f3d3a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141fbc0e0 FUN_141fbc0e0 body=53 status=ok
// SIG undefined FUN_141fbc0e0(void)

void FUN_141fbc0e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &PTR_FUN_144f3d4c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbc120 FUN_141fbc120 body=53 status=ok
// SIG undefined FUN_141fbc120(void)

void FUN_141fbc120(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x120;
    *puVar1 = &PTR_FUN_144f3bd50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbc160 FUN_141fbc160 body=53 status=ok
// SIG undefined FUN_141fbc160(void)

void FUN_141fbc160(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &PTR_FUN_144f3d5f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbc1a0 FUN_141fbc1a0 body=53 status=ok
// SIG undefined FUN_141fbc1a0(void)

void FUN_141fbc1a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x140;
    *puVar1 = &PTR_FUN_144f3bf58;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbc1e0 FUN_141fbc1e0 body=53 status=ok
// SIG undefined FUN_141fbc1e0(void)

void FUN_141fbc1e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf8;
    *puVar1 = &PTR_FUN_144f3d710;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141fbc4c0 operator= body=114 status=ok
// SIG undefined operator=(void)

undefined8 * TArray<FVector,FDefaultAllocator>::operator=(undefined8 *param_1,undefined8 *param_2)

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
    TArray<FRotator,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
  }
  return param_1;
}



// FUNCTION 141fbc540 FUN_141fbc540 body=516 status=ok
// SIG undefined FUN_141fbc540(void)

longlong * FUN_141fbc540(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  
  if (param_1 != param_2) {
    plVar4 = (longlong *)*param_1;
    for (iVar6 = (int)param_1[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
      FRichCurve::~FRichCurve(plVar4 + 5);
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 0x15;
    }
    iVar6 = (int)param_2[1];
    lVar5 = *param_2;
    *(int *)(param_1 + 1) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FInAppPurchaseProductInfo,FDefaultAllocator>::ResizeForCopy(param_1,iVar6);
      puVar8 = (undefined8 *)*param_1;
      if (iVar6 != 0) {
        piVar7 = (int *)(lVar5 + 8);
        lVar5 = (longlong)puVar8 + 0x5c;
        do {
          *puVar8 = 0;
          iVar2 = *piVar7;
          pvVar3 = *(void **)(piVar7 + -2);
          *(int *)(lVar5 + -0x54) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(lVar5 + -0x50) = 0;
          }
          else {
            TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar8,iVar2,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar3,(longlong)iVar2 * 0x18);
          }
          *(undefined8 *)(lVar5 + -0x4c) = *(undefined8 *)(piVar7 + 2);
          *(int *)(lVar5 + -0x44) = piVar7[4];
          *(int *)(lVar5 + -0x40) = piVar7[5];
          *(char *)(lVar5 + -0x3c) = (char)piVar7[6];
          *(undefined8 *)(lVar5 + -0x2c) = 0;
          *(undefined8 *)(lVar5 + -0x24) = 0;
          *(undefined8 *)(lVar5 + -0xc) = 0;
          *(undefined8 *)(lVar5 + -4) = 0;
          *(undefined4 *)(lVar5 + 4) = 0xffffffff;
          *(undefined4 *)(lVar5 + 8) = 0;
          *(undefined8 *)(lVar5 + 0x14) = 0;
          *(undefined4 *)(lVar5 + 0x1c) = 0;
          *(undefined ***)(lVar5 + -0x34) = &PTR_FUN_14413ebc8;
          *(char *)(lVar5 + 0x24) = (char)piVar7[0x1e];
          *(undefined1 *)(lVar5 + 0x25) = *(undefined1 *)((longlong)piVar7 + 0x79);
          *(int *)(lVar5 + 0x28) = piVar7[0x1f];
          *(undefined8 *)(lVar5 + 0x2c) = 0;
          iVar2 = piVar7[0x22];
          pvVar3 = *(void **)(piVar7 + 0x20);
          *(int *)(lVar5 + 0x34) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(lVar5 + 0x38) = 0;
          }
          else {
            TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(lVar5 + 0x2c,iVar2,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(lVar5 + 0x2c),pvVar3,(longlong)iVar2 * 0x1c);
          }
          puVar8 = puVar8 + 0x15;
          *(undefined8 *)(lVar5 + 0x3c) = *(undefined8 *)(piVar7 + 0x24);
          piVar1 = piVar7 + 0x26;
          piVar7 = piVar7 + 0x2a;
          *(int *)(lVar5 + 0x44) = *piVar1;
          lVar5 = lVar5 + 0xa8;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    return param_1;
  }
  return param_1;
}


