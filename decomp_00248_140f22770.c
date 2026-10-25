// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140f22770 FUN_140f22770 body=272 status=ok
// SIG undefined FUN_140f22770(void)

void FUN_140f22770(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [8];
  
  FWeakObjectPtr::operator=(local_28,0);
  FWeakObjectPtr::operator=(&local_20,0);
  FWeakObjectPtr::operator=(&local_18,0);
  FWeakObjectPtr::operator=(local_10,0);
  uVar2 = *(undefined8 *)(*param_1 + 0xf20);
  if (*(int *)(*param_1 + 0x618) == 7) {
    FWeakObjectPtr::operator=(&local_18,uVar2);
    FWeakObjectPtr::operator=(local_10,*(undefined8 *)(*param_1 + 0xf38));
  }
  else {
    FWeakObjectPtr::operator=(local_28,uVar2);
    FWeakObjectPtr::operator=(&local_res8,0);
    local_18 = local_res8;
    local_14 = local_resc;
    FWeakObjectPtr::operator=(local_10,*(undefined8 *)(*param_1 + 0xf38));
    FWeakObjectPtr::operator=(&local_res8,0);
    local_20 = local_res8;
    local_1c = local_resc;
  }
  lVar3 = *param_1;
  lVar1 = *(longlong *)(lVar3 + 0xf28);
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    lVar3 = *param_1;
  }
  FUN_142ecfd10(lVar3,&local_38,local_28);
  return;
}



// FUNCTION 140f22880 FUN_140f22880 body=3852 status=ok
// SIG undefined FUN_140f22880(void)

void FUN_140f22880(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  wchar_t *pwVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined8 uVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  wchar_t *pwVar17;
  undefined8 local_res8;
  longlong local_res10;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined8 local_res20;
  int local_158;
  int local_154;
  longlong local_150;
  int local_148;
  int local_144;
  longlong local_140;
  int local_138;
  int local_134;
  longlong local_130;
  int local_128;
  int local_124;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined1 local_a0 [8];
  longlong *local_98;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  
  local_res18 = (undefined4)param_1[1];
  local_res1c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar6 = FWeakObjectPtr::IsValid(&local_res18);
  pwVar17 = (wchar_t *)0x0;
  if (cVar6 == '\0') {
LAB_140f22922:
    bVar4 = false;
  }
  else {
    lVar8 = FWeakObjectPtr::Get(&local_res18);
    iVar3 = *(int *)(lVar8 + 0xc);
    pwVar12 = pwVar17;
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar14 = iVar3 >> 0x1f & 0xffff;
      uVar7 = iVar3 + uVar14;
      pwVar12 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                (longlong)(int)((uVar7 & 0xffff) - uVar14) * 0x18);
    }
    if ((*(uint *)(pwVar12 + 4) & 0x30000000) != 0) goto LAB_140f22922;
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 3);
  if ((cVar6 == '\0') ||
     (plVar9 = (longlong *)FWeakObjectPtr::Get(param_1 + 3), plVar9 == (longlong *)0x0)) {
LAB_140f22a06:
    plVar9 = (longlong *)0x0;
  }
  else {
    lVar8 = FUN_1413f82e0();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140f22a06;
    lVar8 = (**(code **)(*plVar9 + 0x670))(plVar9);
    if (lVar8 != 0) {
      lVar10 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        FUN_1407665e0(lVar8 + 0xaf8,*param_1);
        FUN_1407665e0(lVar8 + 0xb08,*param_1);
      }
    }
  }
  lVar8 = FUN_1416f8720((int)param_1[4]);
  if (lVar8 != 0) {
    lVar8 = FUN_1416f8720((int)param_1[4]);
    FUN_1407665e0(lVar8 + 0x318,*param_1);
    *(undefined8 *)(*param_1 + 0x6c0) = 0;
  }
  lVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x24));
  if (lVar8 != 0) {
    lVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x24));
    FUN_1407665e0(lVar8 + 0x1a8,*param_1);
    *(undefined8 *)(*param_1 + 0x668) = 0;
  }
  if (*(longlong *)(*param_1 + 0x670) != 0) {
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnUsedPrimary",L"::");
    pwVar12 = pwVar17;
    while (pwVar5 = pwVar11, pwVar5 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar12 = pwVar5;
    }
    FName::FName(&local_res20,pwVar12 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x670) + 0x328,*param_1,local_res20);
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnUsedPrimaryHold",L"::");
    pwVar12 = pwVar17;
    while (pwVar5 = pwVar11, pwVar5 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar12 = pwVar5;
    }
    FName::FName(&local_118,pwVar12 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x670) + 0x338,*param_1,local_118);
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnUsedSecondary",L"::");
    pwVar12 = pwVar17;
    while (pwVar5 = pwVar11, pwVar5 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar12 = pwVar5;
    }
    FName::FName(&local_110,pwVar12 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x670) + 0x348,*param_1,local_110);
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnUsedSecondaryHold",L"::");
    pwVar12 = pwVar17;
    while (pwVar5 = pwVar11, pwVar5 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar12 = pwVar5;
    }
    FName::FName(&local_108,pwVar12 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x670) + 0x358,*param_1,local_108);
    *(undefined8 *)(*param_1 + 0x670) = 0;
  }
  if (plVar9 != (longlong *)0x0) {
    local_68 = FUN_141312e30();
    lVar8 = AGameStateBase::OnRep_GameModeClass(plVar9,local_68);
    if (lVar8 != 0) {
      lVar10 = FUN_141312e30();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnRevivingStart",L"::");
        pwVar12 = pwVar17;
        while (pwVar5 = pwVar11, pwVar5 != (wchar_t *)0x0) {
          pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
          pwVar12 = pwVar5;
        }
        FName::FName(&local_100,pwVar12 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar8 + 0x1250,*param_1,local_100);
        pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnRevivingStop",L"::");
        pwVar12 = pwVar17;
        while (pwVar5 = pwVar11, pwVar5 != (wchar_t *)0x0) {
          pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
          pwVar12 = pwVar5;
        }
        FName::FName(&local_f8,pwVar12 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar8 + 0x1270,*param_1,local_f8);
      }
    }
  }
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 2);
  if (cVar6 == '\0') {
    return;
  }
  plVar9 = (longlong *)FWeakObjectPtr::Get(param_1 + 2);
  if (plVar9 == (longlong *)0x0) {
    return;
  }
  local_d0 = plVar9;
  lVar8 = FUN_1429d7ab0();
  if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x670))(plVar9);
  if (plVar9 == (longlong *)0x0) goto LAB_140f2353b;
  lVar8 = FUN_14145f370();
  if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_140f2353b;
  pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnCurrentUsableChanged",L"::");
  while (pwVar11 = pwVar12, pwVar11 != (wchar_t *)0x0) {
    pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
    pwVar17 = pwVar11;
  }
  FName::FName(&local_f0,pwVar17 + 2,1);
  lVar8 = *param_1;
  plVar1 = plVar9 + 0x15f;
  FWeakObjectPtr::operator=(&local_158,0);
  local_150 = 0;
  FWeakObjectPtr::operator=(&local_158,lVar8);
  local_150 = local_f0;
  local_res10 = 0;
  if ((local_f0 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_158), lVar8 != 0)) {
    UObject::FindFunction(lVar8,local_150);
  }
  piVar15 = (int *)*plVar1;
  lVar8 = plVar9[0x160];
  for (piVar16 = piVar15; piVar16 != piVar15 + (longlong)(int)lVar8 * 4; piVar16 = piVar16 + 4) {
    if (((*piVar16 == local_158) && (piVar16[1] == local_154)) ||
       ((cVar6 = FWeakObjectPtr::IsValid(piVar16), cVar6 == '\0' &&
        (cVar6 = FWeakObjectPtr::IsValid(&local_158), cVar6 == '\0')))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((bVar4) && (*(longlong *)(piVar16 + 2) == local_150)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      if ((int)((longlong)piVar16 - (longlong)piVar15 >> 4) != -1) goto LAB_140f22f60;
      break;
    }
  }
  iVar3 = (int)plVar9[0x160];
  lVar8 = (longlong)iVar3;
  *(int *)(plVar9 + 0x160) = iVar3 + 1;
  if (*(int *)((longlong)plVar9 + 0xb04) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
  }
  lVar10 = *plVar1;
  *(int *)(lVar10 + lVar8 * 0x10) = local_158;
  *(int *)(lVar10 + 4 + lVar8 * 0x10) = local_154;
  *(longlong *)(lVar10 + 8 + lVar8 * 0x10) = local_150;
LAB_140f22f60:
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  local_b0 = (undefined4)plVar9[0x1a2];
  local_b8 = plVar9[0x1a1];
  uVar2 = *(undefined4 *)((longlong)plVar9 + 0xd14);
  local_a8 = (undefined1)plVar9[0x199];
  local_a7 = *(undefined1 *)((longlong)plVar9 + 0xcc9);
  local_a6 = *(undefined1 *)((longlong)plVar9 + 0xcca);
  local_a5 = *(undefined1 *)((longlong)plVar9 + 0xccb);
  local_a4 = *(undefined1 *)((longlong)plVar9 + 0xccc);
  local_a3 = *(undefined1 *)((longlong)plVar9 + 0xccd);
  local_a2 = *(undefined1 *)((longlong)plVar9 + 0xcce);
  FText::FText(local_a0,plVar9 + 0x19a);
  local_88 = plVar9[0x19d];
  local_80 = plVar9[0x19e];
  local_78 = plVar9[0x19f];
  local_70 = plVar9[0x1a0];
  FUN_140f33cb0(*param_1,plVar9[0x198],&local_a8,&local_b8,uVar2);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_98 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar15 = (int *)((longlong)local_98 + 0xc);
      iVar3 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnUsabilityChanged",L"::");
  pwVar17 = (wchar_t *)0x0;
  while (pwVar11 = pwVar12, pwVar11 != (wchar_t *)0x0) {
    pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
    pwVar17 = pwVar11;
  }
  FName::FName(&local_e8,pwVar17 + 2,1);
  lVar8 = *param_1;
  plVar1 = plVar9 + 0x161;
  FWeakObjectPtr::operator=(&local_148,0);
  local_140 = 0;
  FWeakObjectPtr::operator=(&local_148,lVar8);
  local_140 = local_e8;
  local_res8 = 0;
  if ((local_e8 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_148), lVar8 != 0)) {
    UObject::FindFunction(lVar8,local_140);
  }
  piVar15 = (int *)*plVar1;
  lVar8 = plVar9[0x162];
  for (piVar16 = piVar15; piVar16 != piVar15 + (longlong)(int)lVar8 * 4; piVar16 = piVar16 + 4) {
    if (((*piVar16 == local_148) && (piVar16[1] == local_144)) ||
       ((cVar6 = FWeakObjectPtr::IsValid(piVar16), cVar6 == '\0' &&
        (cVar6 = FWeakObjectPtr::IsValid(&local_148), cVar6 == '\0')))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((bVar4) && (*(longlong *)(piVar16 + 2) == local_140)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      if ((int)((longlong)piVar16 - (longlong)piVar15 >> 4) != -1) goto LAB_140f231e0;
      break;
    }
  }
  iVar3 = (int)plVar9[0x162];
  lVar8 = (longlong)iVar3;
  *(int *)(plVar9 + 0x162) = iVar3 + 1;
  if (*(int *)((longlong)plVar9 + 0xb14) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
  }
  lVar10 = *plVar1;
  *(int *)(lVar10 + lVar8 * 0x10) = local_148;
  *(int *)(lVar10 + 4 + lVar8 * 0x10) = local_144;
  *(longlong *)(lVar10 + 8 + lVar8 * 0x10) = local_140;
LAB_140f231e0:
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  uVar13 = UNukerSkills001Widget::GetPrivateStaticClass();
  lVar8 = (**(code **)(*plVar9 + 0x628))(plVar9,uVar13);
  if (lVar8 != 0) {
    *(longlong *)(*param_1 + 0x668) = lVar8;
    pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnHoldUseStopped",L"::");
    pwVar17 = (wchar_t *)0x0;
    while (pwVar11 = pwVar12, pwVar11 != (wchar_t *)0x0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
      pwVar17 = pwVar11;
    }
    FName::FName(&local_e0,pwVar17 + 2,1);
    FUN_14074ba20(*(longlong *)(*param_1 + 0x668) + 0x1a8,*param_1,FUN_140f374d0,local_e0);
  }
  local_res10 = param_1[2];
  cVar6 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar6 == '\0') goto LAB_140f2353b;
  lVar8 = FWeakObjectPtr::Get(&local_res10);
  if (lVar8 == 0) {
LAB_140f232ec:
    plVar9 = (longlong *)FWeakObjectPtr::Get(&local_res10);
    if (plVar9 == (longlong *)0x0) goto LAB_140f2353b;
    lVar8 = FUN_14148cad0();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((!bVar4) || (lVar8 = (**(code **)(*plVar9 + 0x678))(plVar9), lVar8 == 0))
    goto LAB_140f2353b;
    lVar10 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140f2353b;
  }
  else {
    lVar10 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140f232ec;
  }
  if (lVar8 != 0) {
    uVar13 = (**(code **)(*(longlong *)(lVar8 + 0xd80) + 0x18))();
    *(undefined8 *)(*param_1 + 0x6c0) = uVar13;
    if (*(longlong *)(*param_1 + 0x6c0) != 0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop
                          (L"&UGFxInteractionPrompt::OnCurrencyQuantityChanged",L"::");
      pwVar17 = (wchar_t *)0x0;
      while (pwVar11 = pwVar12, pwVar11 != (wchar_t *)0x0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
        pwVar17 = pwVar11;
      }
      FName::FName(&local_d8,pwVar17 + 2,1);
      lVar8 = *param_1;
      lVar10 = *(longlong *)(lVar8 + 0x6c0);
      plVar9 = (longlong *)(lVar10 + 0x318);
      FWeakObjectPtr::operator=(&local_138,0);
      local_130 = 0;
      FWeakObjectPtr::operator=(&local_138,lVar8);
      local_res8 = 0;
      local_130 = local_d8;
      if ((local_d8 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_138), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_130);
      }
      piVar15 = (int *)*plVar9;
      iVar3 = *(int *)(lVar10 + 800);
      for (piVar16 = piVar15; piVar16 != piVar15 + (longlong)iVar3 * 4; piVar16 = piVar16 + 4) {
        if (((*piVar16 == local_138) && (piVar16[1] == local_134)) ||
           ((cVar6 = FWeakObjectPtr::IsValid(piVar16), cVar6 == '\0' &&
            (cVar6 = FWeakObjectPtr::IsValid(&local_138), cVar6 == '\0')))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((bVar4) && (*(longlong *)(piVar16 + 2) == local_130)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          if ((int)((longlong)piVar16 - (longlong)piVar15 >> 4) != -1) goto LAB_140f23530;
          break;
        }
      }
      iVar3 = *(int *)(lVar10 + 800);
      lVar8 = (longlong)iVar3;
      *(int *)(lVar10 + 800) = iVar3 + 1;
      if (*(int *)(lVar10 + 0x324) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar3);
      }
      lVar10 = *plVar9;
      *(int *)(lVar10 + lVar8 * 0x10) = local_138;
      *(int *)(lVar10 + 4 + lVar8 * 0x10) = local_134;
      *(longlong *)(lVar10 + 8 + lVar8 * 0x10) = local_130;
LAB_140f23530:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
    }
  }
LAB_140f2353b:
  uVar13 = FUN_141312e30();
  lVar8 = AGameStateBase::OnRep_GameModeClass(local_d0,uVar13);
  if (lVar8 != 0) {
    lVar10 = FUN_141312e30();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnRevivingStart",L"::");
      pwVar17 = (wchar_t *)0x0;
      while (pwVar11 = pwVar12, pwVar11 != (wchar_t *)0x0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
        pwVar17 = pwVar11;
      }
      FName::FName(&local_c8,pwVar17 + 2,1);
      FUN_14074ba20(lVar8 + 0x1250,*param_1,&LAB_140f3e980,local_c8);
      pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnRevivingStop",L"::");
      pwVar17 = (wchar_t *)0x0;
      while (pwVar11 = pwVar12, pwVar11 != (wchar_t *)0x0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
        pwVar17 = pwVar11;
      }
      FName::FName(&local_c0,pwVar17 + 2,1);
      lVar10 = *param_1;
      plVar9 = (longlong *)(lVar8 + 0x1270);
      FWeakObjectPtr::operator=(&local_128,0);
      local_120 = 0;
      FWeakObjectPtr::operator=(&local_128,lVar10);
      local_res8 = 0;
      local_120 = local_c0;
      if ((local_c0 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_128), lVar10 != 0)) {
        UObject::FindFunction(lVar10,local_120);
      }
      piVar15 = (int *)*plVar9;
      iVar3 = *(int *)(lVar8 + 0x1278);
      for (piVar16 = piVar15; piVar16 != piVar15 + (longlong)iVar3 * 4; piVar16 = piVar16 + 4) {
        if (((*piVar16 == local_128) && (piVar16[1] == local_124)) ||
           ((cVar6 = FWeakObjectPtr::IsValid(piVar16), cVar6 == '\0' &&
            (cVar6 = FWeakObjectPtr::IsValid(&local_128), cVar6 == '\0')))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((bVar4) && (*(longlong *)(piVar16 + 2) == local_120)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          if ((int)((longlong)piVar16 - (longlong)piVar15 >> 4) != -1) goto LAB_140f23750;
          break;
        }
      }
      iVar3 = *(int *)(lVar8 + 0x1278);
      *(int *)(lVar8 + 0x1278) = iVar3 + 1;
      if (*(int *)(lVar8 + 0x127c) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar3);
      }
      piVar15 = (int *)((longlong)iVar3 * 0x10 + *plVar9);
      *piVar15 = local_128;
      piVar15[1] = local_124;
      *(longlong *)(piVar15 + 2) = local_120;
LAB_140f23750:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
    }
  }
  return;
}



// FUNCTION 140f23790 FUN_140f23790 body=614 status=ok
// SIG undefined FUN_140f23790(void)

undefined8 FUN_140f23790(longlong *param_1,int param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  cVar6 = FWeakObjectPtr::IsValid(*param_1 + 0xdb0);
  if (cVar6 == '\0') {
    return 0;
  }
  lVar4 = *param_1;
  if (param_2 < *(int *)(lVar4 + 0xdc0)) {
    lVar5 = *(longlong *)(lVar4 + 0xdb8);
    uVar9 = FWeakObjectPtr::Get(lVar4 + 0xdb0);
    iVar7 = FUN_140e50540(uVar9,*(undefined8 *)(lVar5 + (longlong)param_2 * 8));
    if (iVar7 < 1) {
      iVar7 = 0;
    }
    if ((*(longlong *)(param_3 + 8) != 0) && (*(longlong *)(param_3 + 0x10) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_3 + 0x10) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (0 < iVar8) {
        local_78 = 0;
        plStack_70 = (longlong *)0x0;
        uVar9 = FText::AsNumber(local_58,iVar7,0,&local_78);
        UMistDebugEntityScreen::InspectEntity(param_3,uVar9,1,0);
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_50 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)local_50 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
        plVar2 = plStack_70;
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_70 + 1;
          lVar4 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_70)(plStack_70);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
      }
    }
    if ((*(longlong *)(param_4 + 8) != 0) && (*(longlong *)(param_4 + 0x10) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_4 + 0x10) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (0 < iVar8) {
        local_68 = 0;
        plStack_60 = (longlong *)0x0;
        uVar9 = FText::AsNumber(local_40,iVar7,0,&local_68);
        UMistDebugEntityScreen::InspectEntity(param_4,uVar9,1,0);
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_38 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar1 = (int *)((longlong)local_38 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_38 + 8))(local_38,1);
            }
          }
        }
        plVar2 = plStack_60;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_60 + 1;
          lVar4 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_60)(plStack_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
      }
    }
  }
  lVar4 = *(longlong *)(*param_1 + 0xdb8);
  uVar9 = FWeakObjectPtr::Get(*param_1 + 0xdb0);
  uVar9 = FUN_140e512e0(uVar9,*(undefined8 *)(lVar4 + (longlong)param_2 * 8));
  return uVar9;
}



// FUNCTION 140f23a00 FUN_140f23a00 body=496 status=ok
// SIG undefined FUN_140f23a00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f23a00(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_88;
  longlong *local_80;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar8 = UPackageMapClient::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      plVar5 = *(longlong **)(lVar4 + 0x310);
      lVar8 = param_1[1];
      uVar6 = *(undefined8 *)(lVar4 + 0x308);
      puVar9 = (undefined8 *)(lVar8 + 0x6b8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_98 = uVar6;
      plStack_90 = plVar5;
      if (&local_98 != puVar9) {
        local_98 = *puVar9;
        plStack_90 = *(longlong **)(lVar8 + 0x6c0);
        *puVar9 = uVar6;
        *(longlong **)(lVar8 + 0x6c0) = plVar5;
        local_28 = uVar6;
        plStack_20 = plVar5;
      }
      plVar5 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_90 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_90 + 8))(plStack_90,1);
          }
        }
      }
      lVar4 = param_1[1];
      local_48 = 0;
      local_38 = 0;
      puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_68);
      if (puVar9 != (undefined8 *)0x0) {
        puVar9[1] = lVar4;
        *puVar9 = &PTR_FUN_143f77b70;
      }
      local_78[0] = &LAB_140f26e20;
      FUN_14204c280(local_78);
      lVar4 = param_1[1];
      puVar9 = (undefined8 *)(lVar4 + 0x6b8);
      local_80 = (longlong *)0x0;
      if (puVar9 != &local_88) {
        *puVar9 = 0;
        local_88 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar4 + 0x6c0,&local_80);
        plVar5 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140f23bf0 FUN_140f23bf0 body=564 status=ok
// SIG undefined FUN_140f23bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f23bf0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  void *_Src;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  void *local_100;
  ulonglong local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar5 = *param_2;
  lVar6 = (longlong)(int)param_2[1] * 0x110 + lVar5;
  for (; lVar5 != lVar6; lVar5 = lVar5 + 0x110) {
    cVar3 = FUN_140f27950(*param_1,lVar5);
    *(uint *)(lVar5 + 0x108) = 2 - (uint)(cVar3 != '\0');
  }
  local_100 = (void *)0x0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_108[0] = *(undefined1 *)(param_1[1] + 0x18);
  lVar5 = *param_1;
  if (&local_100 != (void **)(lVar5 + 0x720)) {
    uVar1 = *(uint *)(lVar5 + 0x728);
    _Src = *(void **)(lVar5 + 0x720);
    local_f8 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_100,uVar1,0);
      _guard_xfg_dispatch_icall_nop(local_100,_Src,(longlong)(int)uVar1 * 0x18);
      lVar5 = *param_1;
    }
  }
  local_58 = (longlong *)0x0;
  local_88[0] = FRollingHash::GetWindowSize;
  local_48 = 0;
  if (*(char *)(lVar5 + 0x9c0) != '\x01') goto LAB_140f23dab;
  lVar5 = FWeakObjectPtr::Get(lVar5 + 0x594);
  if (lVar5 == 0) {
LAB_140f23d2e:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140f23d2e;
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = lVar5;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_d8[0] = &LAB_140f26d40;
  FGenericPlatformMemory::MemswapGreaterThan8(local_d8,local_88,0x50);
  if (local_98 != 0) {
    plVar7 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar7 = local_a8;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_140f23dab:
  FUN_1411fc8c0(param_2,local_108,0,local_88);
  if (local_48 != 0) {
    plVar7 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar7 = local_58;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_100 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f23e30 FUN_140f23e30 body=385 status=ok
// SIG undefined FUN_140f23e30(void)

void FUN_140f23e30(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 local_res8;
  
  lVar6 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
  if (lVar6 != 0) {
    lVar7 = FUN_14142a560();
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
      FUN_140f3adb0(*param_1);
      pwVar8 = _guard_xfg_dispatch_icall_nop
                         (L"&UGFxFightForYourLifeWidget::OnInputDeviceChanged",L"::");
      pwVar5 = (wchar_t *)0x0;
      while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar5 = pwVar4;
      }
      FName::FName(&local_res8,pwVar5 + 2,1);
      FUN_14074ba20(lVar6 + 0x5f8,*param_1,FUN_140f3adb0,local_res8);
      lVar7 = *param_1;
      plVar1 = (longlong *)(lVar6 + 0x7c8);
      plVar9 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar9 + 1,lVar7);
        plVar9[2] = (longlong)FUN_140f3adb0;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar9[4] = lVar7;
        *plVar9 = (longlong)&PTR_FUN_143f4d1b8;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_res8);
        iVar2 = *(int *)(lVar6 + 2000);
        *(int *)(lVar6 + 2000) = iVar2 + 1;
        if (*(int *)(lVar6 + 0x7d4) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar10 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar10 = plVar9;
        *(undefined4 *)(puVar10 + 1) = 3;
      }
    }
  }
  return;
}



// FUNCTION 140f23fc0 FUN_140f23fc0 body=73 status=ok
// SIG undefined FUN_140f23fc0(void)

undefined8 * FUN_140f23fc0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x1c));
  FUN_1416f8340(*(undefined4 *)(param_1 + 3));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140f24010 FUN_140f24010 body=66 status=ok
// SIG undefined FUN_140f24010(void)

undefined8 * FUN_140f24010(undefined8 *param_1,ulonglong param_2)

{
  FUN_140ddef50(param_1 + 3);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140f24060 FUN_140f24060 body=81 status=ok
// SIG undefined FUN_140f24060(void)

undefined8 * FUN_140f24060(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)(param_1 + 4));
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x1c));
  FUN_1416f8340(*(undefined4 *)(param_1 + 3));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140f240c0 FUN_140f240c0 body=88 status=ok
// SIG undefined FUN_140f240c0(void)

undefined8 * FUN_140f240c0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x124));
  FUN_1416f8340(*(undefined4 *)(param_1 + 0x24));
  FUN_140e9c360(param_1 + 2);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 140f24120 FUN_140f24120 body=81 status=ok
// SIG undefined FUN_140f24120(void)

undefined8 * FUN_140f24120(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x1c));
  FUN_1416f8340(*(undefined4 *)(param_1 + 3));
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x14));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140f24180 FUN_140f24180 body=66 status=ok
// SIG undefined FUN_140f24180(void)

undefined8 * FUN_140f24180(undefined8 *param_1,ulonglong param_2)

{
  FUN_140e9c360(param_1 + 2);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 140f241d0 FUN_140f241d0 body=82 status=ok
// SIG undefined FUN_140f241d0(void)

undefined8 * FUN_140f241d0(undefined8 *param_1,ulonglong param_2)

{
  FUN_140e9c360(param_1 + 3);
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x14));
  FUN_1416f8340(*(undefined4 *)(param_1 + 2));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 140f24230 FUN_140f24230 body=134 status=ok
// SIG undefined FUN_140f24230(void)

undefined8 * FUN_140f24230(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[2];
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
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140f242c0 FUN_140f242c0 body=73 status=ok
// SIG undefined FUN_140f242c0(void)

undefined8 * FUN_140f242c0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)(param_1 + 3));
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x14));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140f24310 FUN_140f24310 body=142 status=ok
// SIG undefined FUN_140f24310(void)

undefined8 * FUN_140f24310(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_1416f8340(*(undefined4 *)(param_1 + 0xb));
  plVar4 = (longlong *)param_1[5];
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
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 140f243a0 FUN_140f243a0 body=73 status=ok
// SIG undefined FUN_140f243a0(void)

undefined8 * FUN_140f243a0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0xc));
  FUN_1416f8340(*(undefined4 *)(param_1 + 1));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140f243f0 FUN_140f243f0 body=81 status=ok
// SIG undefined FUN_140f243f0(void)

undefined8 * FUN_140f243f0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)(param_1 + 4));
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x1c));
  FUN_1416f8340(*(undefined4 *)(param_1 + 3));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140f24450 FUN_140f24450 body=73 status=ok
// SIG undefined FUN_140f24450(void)

undefined8 * FUN_140f24450(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x2c));
  FUN_1416f8340(*(undefined4 *)(param_1 + 5));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140f244a0 FUN_140f244a0 body=723 status=ok
// SIG undefined FUN_140f244a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f244a0(longlong param_1,longlong param_2)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong **local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_68;
  longlong local_60 [4];
  undefined8 local_40;
  longlong local_38 [2];
  
  local_38[1] = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_68 = local_68 & 0xffffffff00000000;
  uVar9 = 3;
  uVar8 = 0;
  if (param_2 != 0) {
    local_78 = 0;
    local_70 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"perkTreeMC",0x16);
    local_90 = &local_88;
    local_88 = (longlong *)0x0;
    local_80 = 0;
    local_68 = 0;
    local_98 = 6;
    cVar4 = FUN_140ecf270(param_1,param_1 + 0xa80,&local_78,0);
    uVar8 = uVar9;
    if (cVar4 != '\0') {
      bVar2 = true;
      goto LAB_140f24549;
    }
  }
  bVar2 = false;
LAB_140f24549:
  if ((uVar8 & 2) != 0) {
    uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffd);
    plVar7 = local_88;
    for (iVar10 = (int)local_80; iVar10 != 0; iVar10 = iVar10 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
  }
  if (((uVar8 & 1) != 0) && (local_78 != 0)) {
    FMemory::Free();
  }
  if ((((bVar2) &&
       (cVar4 = FUN_14208d2d0(*(undefined8 *)(param_1 + 0xa80),param_1 + 0xae8,L"enforcerIconAnim"),
       cVar4 != '\0')) &&
      (cVar4 = FUN_14208d2d0(*(undefined8 *)(param_1 + 0xa80),param_1 + 0xaf8,L"survivorIconAnim"),
      cVar4 != '\0')) &&
     (cVar4 = FUN_14208d2d0(*(undefined8 *)(param_1 + 0xa80),param_1 + 0xb08,L"hunterIconAnim"),
     cVar4 != '\0')) {
    local_60[0] = *(longlong *)(param_1 + 0xae8);
    local_60[1] = *(longlong *)(param_1 + 0xaf0);
    if (local_60[1] != 0) {
      LOCK();
      *(int *)(local_60[1] + 8) = *(int *)(local_60[1] + 8) + 1;
      UNLOCK();
    }
    local_60[2] = *(undefined8 *)(param_1 + 0xaf8);
    local_60[3] = *(longlong *)(param_1 + 0xb00);
    if (local_60[3] != 0) {
      LOCK();
      *(int *)(local_60[3] + 8) = *(int *)(local_60[3] + 8) + 1;
      UNLOCK();
    }
    local_40 = *(undefined8 *)(param_1 + 0xb08);
    local_38[0] = *(longlong *)(param_1 + 0xb10);
    if (local_38[0] != 0) {
      LOCK();
      *(int *)(local_38[0] + 8) = *(int *)(local_38[0] + 8) + 1;
      UNLOCK();
    }
    plVar7 = *(longlong **)(param_1 + 0xdb8);
    for (plVar6 = plVar7; plVar6 != plVar7 + *(int *)(param_1 + 0xdc0); plVar6 = plVar6 + 1) {
      if (*plVar6 == param_2) {
        uVar5 = (uint)((longlong)plVar6 - (longlong)plVar7 >> 3);
        goto LAB_140f246bb;
      }
    }
    uVar5 = 0xffffffff;
LAB_140f246bb:
    if (((uVar5 != 0xffffffff) && (uVar5 < 3)) && (local_60[(longlong)(int)uVar5 * 2] != 0)) {
      FUN_14203e030(local_60[(longlong)(int)uVar5 * 2],&DAT_144611eb4);
    }
    puVar11 = &stack0xffffffffffffffd8;
    do {
      plVar7 = *(longlong **)(puVar11 + -0x10);
      puVar11 = puVar11 + -0x10;
      uVar9 = uVar9 - 1;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    } while (uVar9 != 0);
  }
  return;
}



// FUNCTION 140f24780 FUN_140f24780 body=3251 status=ok
// SIG undefined FUN_140f24780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f24780(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  ulonglong *puVar13;
  undefined2 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong *puVar18;
  bool bVar19;
  undefined1 auStack_2d8 [32];
  uint local_2b8;
  ulonglong *local_2a8;
  ulonglong *puStack_2a0;
  longlong local_298;
  longlong *local_290;
  longlong local_288;
  ulonglong local_280;
  ulonglong *local_278;
  int local_270;
  ulonglong *local_268;
  int local_260;
  longlong local_258;
  longlong *plStack_250;
  ulonglong *local_248;
  int local_240;
  undefined8 local_238;
  longlong local_230;
  undefined8 local_228;
  longlong *plStack_220;
  undefined8 local_218;
  longlong local_210;
  undefined8 local_208;
  longlong *plStack_200;
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  puVar18 = (ulonglong *)0x0;
  puVar9 = (undefined8 *)(param_1 + 0x1d8);
  local_2b8 = 0;
  if (*(char *)(param_1 + 0x1f8) != '\0') {
    if (*(int *)(param_1 + 0x1e0) == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = (undefined2 *)*puVar9;
    }
    if (*(int *)(param_1 + 0x1f0) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = *(undefined2 **)(param_1 + 0x1e8);
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar14);
    if (iVar7 != 0) {
      if (*(char *)(param_1 + 0x1f8) != '\0') {
        if (*(int *)(param_1 + 0x1e0) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar9;
        }
        if (*(int *)(param_1 + 0x1f0) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = *(undefined2 **)(param_1 + 0x1e8);
        }
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar14);
        if (iVar7 != 0) {
          puVar15 = (undefined8 *)(param_1 + 0x1e8);
          if (*(char *)(param_1 + 0x1f8) == '\0') {
            puVar15 = puVar9;
          }
          FString::operator=(puVar9,puVar15);
        }
        if ((*(char *)(param_1 + 0x1f8) != '\0') &&
           (*(undefined1 *)(param_1 + 0x1f8) = 0, *(longlong *)(param_1 + 0x1e8) != 0)) {
          FMemory::Free();
        }
      }
      cVar6 = FUN_14208d2d0(param_1,param_1 + 0x1a0,L"AmmoIconWeaponMC");
      if (cVar6 != '\0') {
        local_270 = *(int *)(param_1 + 0x1e0);
        lVar17 = (longlong)local_270;
        pvVar3 = (void *)*puVar9;
        local_278 = (ulonglong *)0x0;
        puVar10 = puVar18;
        if (local_270 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_278,local_270,0);
          puVar10 = local_278;
          _guard_xfg_dispatch_icall_nop(local_278,pvVar3,lVar17 * 2);
        }
        puVar13 = (ulonglong *)&DAT_143f3eda8;
        if (local_270 != 0) {
          puVar13 = puVar10;
        }
        FUN_14203e4e0(*(undefined8 *)(param_1 + 0x1a0),puVar13);
        if (puVar10 != (ulonglong *)0x0) {
          FMemory::Free(puVar10);
        }
      }
    }
  }
  if (((*(char *)(param_1 + 0x1c8) != '\0') &&
      (*(int *)(param_1 + 0x1c4) != *(int *)(param_1 + 0x1c0))) ||
     ((local_1c8 = (ulonglong *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8),
      uStack_1c0 = (ulonglong *)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0),
      local_198 = (ulonglong *)CONCAT44(local_198._4_4_,(undefined4)local_198),
      uStack_190 = (ulonglong *)CONCAT44(uStack_190._4_4_,(undefined4)uStack_190),
      *(char *)(param_1 + 0x1d4) != '\0' &&
      (local_1c8 = (ulonglong *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8),
      uStack_1c0 = (ulonglong *)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0),
      local_198 = (ulonglong *)CONCAT44(local_198._4_4_,(undefined4)local_198),
      uStack_190 = (ulonglong *)CONCAT44(uStack_190._4_4_,(undefined4)uStack_190),
      *(int *)(param_1 + 0x1d0) != *(int *)(param_1 + 0x1cc))))) {
    if ((*(char *)(param_1 + 0x1c8) != '\0') &&
       (*(int *)(param_1 + 0x1c4) != *(int *)(param_1 + 0x1c0))) {
      lVar17 = 0x1c4;
      if (*(char *)(param_1 + 0x1c8) == '\0') {
        lVar17 = 0x1c0;
      }
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(lVar17 + param_1);
    }
    if (*(char *)(param_1 + 0x1c8) != '\0') {
      *(undefined1 *)(param_1 + 0x1c8) = 0;
    }
    if (*(char *)(param_1 + 0x1d4) != '\0') {
      if (*(int *)(param_1 + 0x1d0) != *(int *)(param_1 + 0x1cc)) {
        *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1d0);
      }
      if (*(char *)(param_1 + 0x1d4) != '\0') {
        *(undefined1 *)(param_1 + 0x1d4) = 0;
      }
    }
    FNumberFormattingOptions::FNumberFormattingOptions(&local_1f8);
    local_1f7 = 0;
    if ((*(longlong *)(param_1 + 0x178) == 0) || (*(longlong *)(param_1 + 0x180) == 0)) {
LAB_140f249b8:
      uVar8 = FUN_142085870(param_1,local_1e0,L"ammoCurrentText");
      FUN_142ede260(param_1 + 0x170,uVar8);
      if (local_1d8 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_1d8 + 1;
        lVar17 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_1d8)(local_1d8);
          LOCK();
          piVar1 = (int *)((longlong)local_1d8 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_1d8 + 8))(local_1d8,1);
          }
        }
      }
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x180) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (iVar7 < 1) goto LAB_140f249b8;
    }
    local_1c8 = (ulonglong *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
    uStack_1c0 = (ulonglong *)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0);
    if ((*(longlong *)(param_1 + 0x178) != 0) &&
       (local_1c8 = (ulonglong *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8),
       uStack_1c0 = (ulonglong *)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0),
       *(longlong *)(param_1 + 0x180) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x180) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      local_1c8 = (ulonglong *)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8);
      uStack_1c0 = (ulonglong *)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0);
      if (0 < iVar7) {
        local_228 = 0;
        plStack_220 = (longlong *)0x0;
        lVar17 = FText::AsNumber(local_c8,*(undefined4 *)(param_1 + 0x1cc),&local_1f8,&local_228);
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_130,&DAT_144613be8,L"GFxInventoryMenu",L"AmmoCountFormat");
        puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_e8,uVar8);
        local_98[0] = 4;
        FText::FText(local_88,lVar17);
        local_238 = *puVar9;
        local_2a8 = (ulonglong *)local_98;
        puStack_2a0 = (ulonglong *)local_68;
        local_230 = puVar9[1];
        local_70 = '\x01';
        if (local_230 != 0) {
          LOCK();
          *(int *)(local_230 + 8) = *(int *)(local_230 + 8) + 1;
          UNLOCK();
        }
        local_1c8 = local_2a8;
        uStack_1c0 = puStack_2a0;
        uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_1b8,&local_1c8);
        uVar8 = FText::Format(local_148,&local_238,uVar8);
        FText::FText(local_178,uVar8);
        if (local_140 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_140 + 1;
          lVar5 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_140)(local_140);
            LOCK();
            piVar1 = (int *)((longlong)local_140 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_140 + 8))(local_140,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1b8);
        if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
          LOCK();
          plVar11 = local_80 + 1;
          lVar5 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)local_80 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
            }
          }
        }
        plVar11 = (longlong *)puVar9[1];
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar11 + 1;
          lVar5 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        plVar11 = *(longlong **)(lVar17 + 8);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar11 + 1;
          lVar17 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x170,local_178,1,0);
        if (local_170 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_170 + 1;
          lVar17 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*local_170)(local_170);
            LOCK();
            piVar1 = (int *)((longlong)local_170 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_170 + 8))(local_170,1);
            }
          }
        }
        if (local_128 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_128 + 1;
          lVar17 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*local_128)(local_128);
            LOCK();
            piVar1 = (int *)((longlong)local_128 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_128 + 8))(local_128,1);
            }
          }
        }
        plVar11 = plStack_220;
        if (plStack_220 != (longlong *)0x0) {
          LOCK();
          plVar4 = plStack_220 + 1;
          lVar17 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*plStack_220)(plStack_220);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
      }
    }
    if ((*(longlong *)(param_1 + 400) == 0) || (*(longlong *)(param_1 + 0x198) == 0)) {
LAB_140f24cf7:
      uVar8 = FUN_142085870(param_1,local_1a8,L"ammoMaxText");
      FUN_142ede260(param_1 + 0x188,uVar8);
      if (local_1a0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_1a0 + 1;
        lVar17 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_1a0)(local_1a0);
          LOCK();
          piVar1 = (int *)((longlong)local_1a0 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_1a0 + 8))(local_1a0,1);
          }
        }
      }
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x198) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (iVar7 < 1) goto LAB_140f24cf7;
    }
    local_198 = (ulonglong *)CONCAT44(local_198._4_4_,(undefined4)local_198);
    uStack_190 = (ulonglong *)CONCAT44(uStack_190._4_4_,(undefined4)uStack_190);
    if ((*(longlong *)(param_1 + 400) != 0) &&
       (local_198 = (ulonglong *)CONCAT44(local_198._4_4_,(undefined4)local_198),
       uStack_190 = (ulonglong *)CONCAT44(uStack_190._4_4_,(undefined4)uStack_190),
       *(longlong *)(param_1 + 0x198) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x198) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      local_198 = (ulonglong *)CONCAT44(local_198._4_4_,(undefined4)local_198);
      uStack_190 = (ulonglong *)CONCAT44(uStack_190._4_4_,(undefined4)uStack_190);
      if (0 < iVar7) {
        local_208 = 0;
        plStack_200 = (longlong *)0x0;
        lVar17 = FText::AsNumber(local_b0,*(undefined4 *)(param_1 + 0x1c0),&local_1f8,&local_208);
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_100,&DAT_144613c58,L"GFxInventoryMenu",L"AmmoBagSizeFormat");
        puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_d8,uVar8);
        local_68[0] = 4;
        FText::FText(local_58,lVar17);
        local_218 = *puVar9;
        local_2a8 = (ulonglong *)local_68;
        puStack_2a0 = local_38;
        local_210 = puVar9[1];
        local_40 = '\x01';
        if (local_210 != 0) {
          LOCK();
          *(int *)(local_210 + 8) = *(int *)(local_210 + 8) + 1;
          UNLOCK();
        }
        local_198 = local_2a8;
        uStack_190 = puStack_2a0;
        uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_188,&local_198);
        uVar8 = FText::Format(local_118,&local_218,uVar8);
        FText::FText(local_160,uVar8);
        if (local_110 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_110 + 1;
          lVar5 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_110)(local_110);
            LOCK();
            piVar1 = (int *)((longlong)local_110 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_110 + 8))(local_110,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_188);
        if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
          LOCK();
          plVar11 = local_50 + 1;
          lVar5 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)local_50 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
        plVar11 = (longlong *)puVar9[1];
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar11 + 1;
          lVar5 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        plVar11 = *(longlong **)(lVar17 + 8);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar11 + 1;
          lVar17 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x188,local_160,1,0);
        if (local_158 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_158 + 1;
          lVar17 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*local_158)(local_158);
            LOCK();
            piVar1 = (int *)((longlong)local_158 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_158 + 8))(local_158,1);
            }
          }
        }
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_f8 + 1;
          lVar17 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar1 = (int *)((longlong)local_f8 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_f8 + 8))(local_f8,1);
            }
          }
        }
        plVar11 = plStack_200;
        if (plStack_200 != (longlong *)0x0) {
          LOCK();
          plVar4 = plStack_200 + 1;
          lVar17 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*plStack_200)(plStack_200);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
      }
    }
  }
  puVar9 = (undefined8 *)(param_1 + 0x200);
  if (*(char *)(param_1 + 0x220) != '\0') {
    if (*(int *)(param_1 + 0x208) == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = (undefined2 *)*puVar9;
    }
    if (*(int *)(param_1 + 0x218) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = *(undefined2 **)(param_1 + 0x210);
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar14);
    if (iVar7 != 0) {
      if (*(char *)(param_1 + 0x220) != '\0') {
        if (*(int *)(param_1 + 0x208) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar9;
        }
        if (*(int *)(param_1 + 0x218) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = *(undefined2 **)(param_1 + 0x210);
        }
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar14);
        if (iVar7 != 0) {
          puVar15 = (undefined8 *)(param_1 + 0x210);
          if (*(char *)(param_1 + 0x220) == '\0') {
            puVar15 = puVar9;
          }
          FString::operator=(puVar9,puVar15);
        }
        if ((*(char *)(param_1 + 0x220) != '\0') &&
           (*(undefined1 *)(param_1 + 0x220) = 0, *(longlong *)(param_1 + 0x210) != 0)) {
          FMemory::Free();
        }
      }
      local_260 = *(int *)(param_1 + 0x208);
      lVar17 = (longlong)local_260;
      pvVar3 = (void *)*puVar9;
      local_268 = (ulonglong *)0x0;
      if (local_260 == 0) {
        local_2a8 = (ulonglong *)0x0;
        puVar10 = puVar18;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_268,local_260,0);
        puVar10 = local_268;
        local_2a8 = local_268;
        _guard_xfg_dispatch_icall_nop(local_268,pvVar3,lVar17 * 2);
      }
      local_280 = 0;
      puVar13 = (ulonglong *)&DAT_143f3eda8;
      if (local_260 != 0) {
        puVar13 = puVar10;
      }
      local_288 = 0;
      if ((puVar13 != (ulonglong *)0x0) && ((short)*puVar13 != 0)) {
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (*(short *)((longlong)puVar13 + lVar17 * 2) != 0);
        uVar16 = (int)lVar17 + 1;
        local_280 = (ulonglong)uVar16;
        if (0 < (int)uVar16) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
        }
        FGenericPlatformString::Memcpy(local_288,puVar13,(longlong)(int)uVar16 * 2);
        puVar10 = local_2a8;
      }
      FUN_142088910(param_1,&local_288);
      if (local_288 != 0) {
        FMemory::Free();
      }
      if (puVar10 != (ulonglong *)0x0) {
        FMemory::Free(puVar10);
      }
    }
  }
  puVar9 = (undefined8 *)(param_1 + 0x228);
  if (*(char *)(param_1 + 0x248) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x230) == 0) {
    puVar14 = &DAT_143f3eda8;
  }
  else {
    puVar14 = (undefined2 *)*puVar9;
  }
  if (*(int *)(param_1 + 0x240) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = *(undefined2 **)(param_1 + 0x238);
  }
  iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar14);
  if (iVar7 == 0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x1b0) != 0) && (*(longlong *)(param_1 + 0x1b8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1b8) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      local_290 = *(longlong **)(param_1 + 0x1b8);
      local_298 = 0;
      if (local_290 != (longlong *)0x0) {
        LOCK();
        uVar16 = *(uint *)(local_290 + 1);
        bVar19 = uVar16 == 0;
        if (bVar19) {
          *(uint *)(local_290 + 1) = 0;
          puVar10 = puVar18;
        }
        else {
          puVar10 = (ulonglong *)(ulonglong)uVar16;
        }
        UNLOCK();
        while (!bVar19) {
          iVar7 = (int)puVar10;
          LOCK();
          bVar19 = iVar7 == (int)local_290[1];
          if (bVar19) {
            *(int *)(local_290 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar19) {
            local_2a8 = *(ulonglong **)(param_1 + 0x1b0);
            uVar16 = 1;
            plVar11 = &local_298;
            local_298 = (longlong)local_2a8;
            goto LAB_140f25272;
          }
          puVar10 = (ulonglong *)0x0;
          LOCK();
          uVar16 = *(uint *)(local_290 + 1);
          bVar19 = uVar16 == 0;
          if (bVar19) {
            *(uint *)(local_290 + 1) = 0;
          }
          else {
            puVar10 = (ulonglong *)(ulonglong)uVar16;
          }
          UNLOCK();
        }
        local_290 = (longlong *)0x0;
      }
      local_2a8 = (ulonglong *)0x0;
      plVar11 = &local_298;
      uVar16 = 1;
      goto LAB_140f25272;
    }
  }
  local_2a8 = (ulonglong *)0x0;
  local_258 = 0;
  plStack_250 = (longlong *)0x0;
  plVar11 = &local_258;
  uVar16 = 2;
LAB_140f25272:
  plVar4 = (longlong *)plVar11[1];
  plVar11[1] = 0;
  plVar2 = plStack_250;
  *plVar11 = 0;
  if (((uVar16 & 2) != 0) &&
     (local_2b8 = uVar16 & 0xfffffffd, uVar16 = local_2b8, plStack_250 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plStack_250 + 1;
    lVar17 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plStack_250)(plStack_250);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      uVar16 = local_2b8;
      if (iVar7 == 1) {
        (**(code **)(*plStack_250 + 8))(plStack_250,1);
        uVar16 = local_2b8;
      }
    }
  }
  plVar11 = local_290;
  if (((uVar16 & 1) != 0) && (local_290 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_290 + 1;
    lVar17 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_290)(local_290);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_290 + 8))(local_290,1);
      }
    }
  }
  puVar10 = local_2a8;
  if (local_2a8 != (ulonglong *)0x0) {
    if (*(char *)(param_1 + 0x248) != '\0') {
      if (*(int *)(param_1 + 0x230) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*puVar9;
      }
      if (*(int *)(param_1 + 0x240) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = *(undefined2 **)(param_1 + 0x238);
      }
      iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar14);
      if (iVar7 != 0) {
        puVar15 = (undefined8 *)(param_1 + 0x238);
        if (*(char *)(param_1 + 0x248) == '\0') {
          puVar15 = puVar9;
        }
        FString::operator=(puVar9,puVar15);
      }
      if ((*(char *)(param_1 + 0x248) != '\0') &&
         (*(undefined1 *)(param_1 + 0x248) = 0, *(longlong *)(param_1 + 0x238) != 0)) {
        FMemory::Free();
      }
    }
    local_240 = *(int *)(param_1 + 0x230);
    lVar17 = (longlong)local_240;
    pvVar3 = (void *)*puVar9;
    local_248 = (ulonglong *)0x0;
    bVar19 = local_240 == 0;
    if (!bVar19) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_248,local_240,0);
      puVar18 = local_248;
      _guard_xfg_dispatch_icall_nop(local_248,pvVar3,lVar17 * 2);
      bVar19 = local_240 == 0;
    }
    puVar13 = (ulonglong *)&DAT_143f3eda8;
    if (!bVar19) {
      puVar13 = puVar18;
    }
    FUN_14203e030(puVar10,puVar13);
    if (puVar18 != (ulonglong *)0x0) {
      FMemory::Free(puVar18);
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar4 + 1;
    lVar17 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 140f25440 FUN_140f25440 body=1198 status=ok
// SIG undefined FUN_140f25440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f25440(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  longlong *local_298;
  longlong *local_290;
  undefined8 local_288;
  undefined8 local_280;
  LARGE_INTEGER local_278 [2];
  undefined1 *local_268 [2];
  undefined1 local_258 [32];
  undefined8 local_238;
  undefined4 local_228;
  undefined1 *local_218 [2];
  longlong local_208 [4];
  longlong *local_1e8;
  int local_1d8;
  undefined1 *local_1c8 [2];
  longlong local_1b8 [4];
  longlong *local_198;
  int local_188;
  longlong *local_178;
  longlong *local_170;
  undefined1 local_168 [16];
  longlong local_158 [4];
  longlong *local_138;
  int local_128;
  LARGE_INTEGER local_118 [24];
  longlong local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  plVar9 = (longlong *)0x0;
  local_238 = 0;
  local_228 = 0;
  local_2a8 = param_1;
  uStack_2a0._0_4_ = param_2;
  puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_258);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar5 + 1) = (undefined4)local_2a8;
    *(undefined4 *)((longlong)puVar5 + 0xc) = local_2a8._4_4_;
    *(undefined4 *)(puVar5 + 2) = (undefined4)uStack_2a0;
    *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_2a0._4_4_;
  }
  local_288 = 0;
  local_268[0] = &LAB_140f26bd0;
  local_280 = 0x26;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
  FGenericPlatformString::Memcpy(local_288,L"UGFxHDRCalibrationMenu::ApplyValues()",0x4c);
  FUN_140cdf730(local_118,&local_288,local_268);
  QueryPerformanceCounter(local_278);
  local_118[0] = local_278[0];
  lVar6 = operator_new(0x18);
  plVar7 = plVar9;
  if (lVar6 != 0) {
    plVar7 = (longlong *)FUN_140cdf810(lVar6);
  }
  plVar8 = (longlong *)operator_new(0x18);
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *plVar8 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    plVar8[2] = (longlong)plVar7;
    plVar9 = plVar8;
  }
  local_298 = plVar7;
  local_290 = plVar9;
  SharedPointerInternals::EnableSharedFromThis(&local_298,plVar7,plVar7);
  *(undefined1 *)(local_298 + 2) = 1;
  uStack_2a0 = (longlong *)local_298[1];
  local_58 = *local_298;
  if (uStack_2a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_2a0 + 1) = (int)uStack_2a0[1] + 1;
    UNLOCK();
  }
  local_2a8 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_50,&uStack_2a0);
  plVar9 = uStack_2a0;
  if (uStack_2a0 != (longlong *)0x0) {
    LOCK();
    plVar7 = uStack_2a0 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*uStack_2a0)(uStack_2a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*uStack_2a0 + 8))(uStack_2a0,1);
      }
    }
  }
  local_1e8 = (longlong *)0x0;
  local_1d8 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_208);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1444f8620;
    puVar5[1] = local_118;
  }
  local_218[0] = &LAB_140cee980;
  local_178 = local_298;
  local_170 = local_290;
  if (local_290 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_290 + 1) = (int)local_290[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_168,local_218);
  local_198 = (longlong *)0x0;
  local_188 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x70,local_1b8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_CopyToEmptyStorage_1444f8578;
    puVar5[2] = local_178;
    puVar5[3] = local_170;
    if (local_170 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_170 + 1) = (int)local_170[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar5 + 4,local_168);
  }
  local_1c8[0] = &LAB_140cee8d0;
  if (local_128 != 0) {
    plVar9 = local_158;
    if (local_138 != (longlong *)0x0) {
      plVar9 = local_138;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_138 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar9 = local_170;
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_170 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if (local_1d8 != 0) {
    plVar9 = local_208;
    if (local_1e8 != (longlong *)0x0) {
      plVar9 = local_1e8;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_1e8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar9 = local_290;
  if (local_290 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_290 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_290)(local_290);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  FUN_142084370(param_1,local_1c8);
  if (local_188 != 0) {
    plVar9 = local_1b8;
    if (local_198 != (longlong *)0x0) {
      plVar9 = local_198;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_198 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    while ((local_58 != 0 && (*(char *)(local_58 + 0x58) == '\0'))) {
      cVar3 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar3 == '\0') &&
         ((DAT_1468c21ae != '\0' && (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)))) {
        lVar6 = FUN_14203ca70();
        if (lVar6 != 0) {
          FUN_1420714f0(lVar6);
        }
      }
      else {
        FUN_142036de0();
      }
      if (local_58 == 0) break;
      if (*(char *)(local_58 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(local_58 + 0x50) + 0x20))(*(longlong **)(local_58 + 0x50),5,0);
      }
    }
  }
  FUN_140ce1dc0(local_118);
  return;
}



// FUNCTION 140f258f0 FUN_140f258f0 body=188 status=ok
// SIG undefined FUN_140f258f0(void)

undefined8 FUN_140f258f0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = FUN_140e97230();
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = (**(code **)(*param_2 + 0x340))(param_2);
  lVar4 = FWeakObjectPtr::Get(lVar4 + 0xdc);
  if (lVar4 != 0) {
    lVar4 = (**(code **)(*param_2 + 0x340))(param_2);
    uVar5 = FWeakObjectPtr::Get(lVar4 + 0xdc);
    cVar2 = FUN_140c39630(lVar3,uVar5);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_140f25968;
    }
  }
  bVar1 = false;
LAB_140f25968:
  uVar5 = (**(code **)(*param_2 + 0x340))(param_2);
  cVar2 = FUN_140f27950(param_1,uVar5);
  if ((bVar1) && (cVar2 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140f259b0 FUN_140f259b0 body=346 status=ok
// SIG undefined FUN_140f259b0(void)

void FUN_140f259b0(longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_38 [4];
  undefined1 local_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  
  lVar2 = FUN_140f2b2d0();
  if (lVar2 != 0) {
    lVar3 = FUN_142eb65a0(param_1);
    plVar4 = *(longlong **)(param_1 + 0xa00);
    plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
    for (; plVar4 != plVar5; plVar4 = plVar4 + 0x1b) {
      if ((lVar3 != 0) && (lVar3 == *plVar4)) {
        FUN_140f16950(local_38,CONCAT71((int7)(int3)((uint)*(int *)(param_1 + 0xa08) >> 8),1),lVar2)
        ;
        goto LAB_140f25ad9;
      }
    }
    cVar1 = FUN_140f31c30(param_1);
    if (cVar1 != '\0') {
      FUN_140f16950(local_38,2,lVar2);
      goto LAB_140f25ad9;
    }
  }
  local_38[0] = 0;
  FWeakObjectPtr::operator=(local_34,0);
  FWeakObjectPtr::operator=(&local_2c,0);
  cVar1 = FWeakObjectPtr::IsValid(local_34);
  if (cVar1 != '\0') {
    plVar4 = (longlong *)FWeakObjectPtr::Get(local_34);
    lVar2 = (**(code **)(*plVar4 + 0x340))(plVar4);
    cVar1 = FWeakObjectPtr::IsValid(lVar2 + 0xdc);
    if (cVar1 == '\0') {
      cVar1 = FWeakObjectPtr::IsValid(lVar2 + 0x5c);
      if (cVar1 != '\0') {
        local_2c = *(undefined4 *)(lVar2 + 0x5c);
        local_28 = *(undefined4 *)(lVar2 + 0x60);
      }
    }
    else {
      local_2c = *(undefined4 *)(lVar2 + 0xdc);
      local_28 = *(undefined4 *)(lVar2 + 0xe0);
    }
  }
LAB_140f25ad9:
  FUN_140f25b10(param_1,local_38,param_2,param_3,param_4);
  return;
}



// FUNCTION 140f25b10 FUN_140f25b10 body=456 status=ok
// SIG undefined FUN_140f25b10(void)

undefined4
FUN_140f25b10(longlong param_1,char *param_2,char param_3,undefined8 param_4,char param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  BOOL BVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  
  *(char *)(param_1 + 0x9c0) = *param_2;
  *(undefined4 *)(param_1 + 0x9c4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x9c8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x9cc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x9d0) = *(undefined4 *)(param_2 + 0x10);
  plVar6 = (longlong *)FWeakObjectPtr::Get();
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x338))(plVar6,1,param_3);
  }
  FUN_140f4e0f0(param_1,1);
  if (*param_2 != '\x01') {
    if (*param_2 == '\x02') {
      if (param_5 == '\0') {
        if (param_3 == '\0') {
          plVar6 = *(longlong **)(param_1 + 0xa00);
          plVar10 = plVar6 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
          for (; plVar6 != plVar10; plVar6 = plVar6 + 0x1b) {
            if ((*plVar6 != 0) &&
               (cVar4 = (**(code **)(*(longlong *)(*plVar6 + 0x170) + 0x40))(), cVar4 != '\0')) {
              FWeakObjectPtr::operator=(param_1 + 0x9d4,*plVar6);
              break;
            }
          }
        }
      }
      else {
        FUN_140f4c640(param_1);
      }
    }
    goto LAB_140f25cbd;
  }
  FUN_140f47890(param_1,0);
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
  }
  if (param_5 != '\0') {
    lVar9 = 0xc18;
    cVar4 = FUN_140ee10a0();
    if (cVar4 != '\0') {
      LOCK();
      iVar1 = *(int *)(param_1 + 0xf98);
      *(int *)(param_1 + 0xf98) = 0;
      UNLOCK();
      LOCK();
      iVar2 = *(int *)(param_1 + 0xf9c);
      *(int *)(param_1 + 0xf9c) = 0;
      UNLOCK();
      if (iVar1 == 0) {
        if (iVar2 != 0) {
          uVar8 = 1;
          goto LAB_140f25c04;
        }
      }
      else {
        uVar8 = 0;
LAB_140f25c04:
        FUN_140f47890(param_1,uVar8);
      }
      lVar7 = 0xc18;
      if (*(char *)(param_1 + 0xe31) != '\x01') {
        lVar7 = 0xa80;
      }
      FUN_140f089d0(lVar7 + param_1);
      if (*(char *)(param_1 + 0xe31) != '\x01') {
        lVar9 = 0xa80;
      }
      FUN_140f080d0(param_1 + lVar9,1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
LAB_140f25cbd:
  LOCK();
  uVar3 = *(undefined4 *)(param_1 + 0xfb8);
  *(undefined4 *)(param_1 + 0xfb8) = 1;
  UNLOCK();
  return uVar3;
}



// FUNCTION 140f25ce0 FUN_140f25ce0 body=1508 status=ok
// SIG undefined FUN_140f25ce0(void)

void FUN_140f25ce0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  undefined2 *puVar14;
  uint uVar15;
  uint uVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  bool bVar19;
  longlong local_res20;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined8 local_68;
  longlong local_60;
  wchar_t *local_58;
  
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xdb0);
  if (cVar4 != '\0') {
    FUN_140f529f0(param_1,5);
    if (*(longlong *)(param_1 + 0xab0) != 0) {
      FUN_142ecffe0();
      uVar6 = FWeakObjectPtr::Get(param_1 + 0xdb0);
      local_80 = (longlong *)FUN_140e4c820(uVar6);
      pwVar11 = (wchar_t *)0x0;
      pwVar17 = pwVar11;
      pwVar18 = pwVar11;
      if (0 < (int)local_80[1]) {
        do {
          lVar10 = *(longlong *)(*local_80 + (longlong)pwVar18);
          if (lVar10 != 0) {
            local_70 = (wchar_t *)0x0;
            local_68 = 0;
            uVar15 = (uint)pwVar17 & 1;
            cVar4 = FUN_142ebdd70(param_1);
            uVar16 = local_68._4_4_;
            if (cVar4 == '\0') {
              if (((ulonglong)pwVar17 & 1) == 0) {
                if (local_70 != L"RewardsPanelStatMC") {
                  local_68 = (ulonglong)local_68._4_4_ << 0x20;
                  pwVar13 = pwVar11;
                  if (uVar16 != 0x13) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_70,uVar15 + 0x13);
                    pwVar13 = (wchar_t *)(local_68 & 0xffffffff);
                    uVar16 = local_68._4_4_;
                  }
                  iVar5 = (int)pwVar13 + 0x13;
                  local_68 = CONCAT44(local_68._4_4_,iVar5);
                  if ((int)uVar16 < iVar5) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70);
                  }
                  builtin_wcsncpy(local_70,L"RewardsPanelStatMC",0x13);
                }
              }
              else if (local_70 != L"RewardsPanelStat2MC") {
                local_68 = (ulonglong)local_68._4_4_ << 0x20;
                pwVar13 = pwVar11;
                if (uVar16 != 0x14) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_70,0x14);
                  pwVar13 = (wchar_t *)(local_68 & 0xffffffff);
                  uVar16 = local_68._4_4_;
                }
                iVar5 = (int)pwVar13 + 0x14;
                local_68 = CONCAT44(local_68._4_4_,iVar5);
                if ((int)uVar16 < iVar5) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70);
                }
                builtin_wcsncpy(local_70,L"RewardsPanelStat2MC",0x14);
              }
            }
            else if (((ulonglong)pwVar17 & 1) == 0) {
              if (local_70 != L"RewardsPanelStatMCSplit") {
                local_68 = (ulonglong)local_68._4_4_ << 0x20;
                pwVar13 = pwVar11;
                if (uVar16 != 0x18) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_70,uVar15 + 0x18);
                  pwVar13 = (wchar_t *)(local_68 & 0xffffffff);
                  uVar16 = local_68._4_4_;
                }
                iVar5 = (int)pwVar13 + 0x18;
                local_68 = CONCAT44(local_68._4_4_,iVar5);
                if ((int)uVar16 < iVar5) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70);
                }
                builtin_wcsncpy(local_70,L"RewardsPanelStatMCSplit",0x18);
              }
            }
            else if (local_70 != L"RewardsPanelStat2MCSplit") {
              local_68 = (ulonglong)local_68._4_4_ << 0x20;
              pwVar13 = pwVar11;
              if (uVar16 != 0x19) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_70,0x19);
                pwVar13 = (wchar_t *)(local_68 & 0xffffffff);
                uVar16 = local_68._4_4_;
              }
              iVar5 = (int)pwVar13 + 0x19;
              local_68 = CONCAT44(local_68._4_4_,iVar5);
              if ((int)uVar16 < iVar5) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70);
              }
              builtin_wcsncpy(local_70,L"RewardsPanelStat2MCSplit",0x19);
            }
            uVar6 = *(undefined8 *)(param_1 + 0xab0);
            local_78 = AReplicationGraphDebugActor::GetPrivateStaticClass();
            lVar7 = FUN_142ebcee0(uVar6,&local_70,local_78,1);
            if (lVar7 != 0) {
              lVar8 = AReplicationGraphDebugActor::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                bVar19 = false;
              }
              else {
                bVar19 = true;
              }
              if (bVar19) {
                *(longlong *)(lVar7 + 0x330) = lVar10;
                if ((*(longlong *)(lVar7 + 0x310) != 0) && (*(longlong *)(lVar7 + 0x318) != 0)) {
                  piVar1 = (int *)(*(longlong *)(lVar7 + 0x318) + 8);
                  LOCK();
                  iVar5 = *piVar1;
                  if (iVar5 == 0) {
                    *piVar1 = 0;
                    iVar5 = 0;
                  }
                  UNLOCK();
                  if (0 < iVar5) {
                    UMistDebugEntityScreen::InspectEntity
                              (lVar7 + 0x308,*(longlong *)(lVar7 + 0x330) + 0x48,1,0);
                  }
                }
                if ((*(longlong *)(*(longlong *)(lVar7 + 0x330) + 0x30) != 0) &&
                   (plVar12 = *(longlong **)(lVar7 + 0x328), plVar12 != (longlong *)0x0)) {
                  LOCK();
                  iVar5 = (int)plVar12[1];
                  bVar19 = iVar5 == 0;
                  if (bVar19) {
                    *(int *)(plVar12 + 1) = 0;
                    iVar5 = 0;
                  }
                  UNLOCK();
                  while (!bVar19) {
                    LOCK();
                    bVar19 = iVar5 == (int)plVar12[1];
                    if (bVar19) {
                      *(int *)(plVar12 + 1) = iVar5 + 1;
                    }
                    UNLOCK();
                    if (bVar19) {
                      if (*(longlong *)(lVar7 + 800) != 0) {
                        lVar10 = *(longlong *)(*(longlong *)(lVar7 + 0x330) + 0x30);
                        if (*(int *)(lVar10 + 0x68) == 0) {
                          puVar14 = &DAT_143f3eda8;
                        }
                        else {
                          puVar14 = *(undefined2 **)(lVar10 + 0x60);
                        }
                        FUN_14203e4e0(*(longlong *)(lVar7 + 800),puVar14);
                      }
                      LOCK();
                      plVar2 = plVar12 + 1;
                      lVar10 = *plVar2;
                      *(int *)plVar2 = (int)*plVar2 + -1;
                      UNLOCK();
                      if ((int)lVar10 == 1) {
                        (**(code **)*plVar12)(plVar12);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar12 + 0xc);
                        iVar5 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar5 == 1) {
                          (**(code **)(*plVar12 + 8))(plVar12,1);
                        }
                      }
                      break;
                    }
                    LOCK();
                    iVar5 = (int)plVar12[1];
                    bVar19 = iVar5 == 0;
                    if (bVar19) {
                      *(int *)(plVar12 + 1) = 0;
                      iVar5 = 0;
                    }
                    UNLOCK();
                  }
                }
                pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnRewardCellFocused",L"::");
                pwVar13 = pwVar11;
                while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
                  pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
                  pwVar13 = pwVar3;
                }
                FName::FName(&local_res20,pwVar13 + 2,1);
                lVar10 = local_res20;
                FWeakObjectPtr::operator=(lVar7 + 0x1d0,param_1);
                *(longlong *)(lVar7 + 0x1d8) = lVar10;
                if ((lVar10 != 0) && (lVar10 = FWeakObjectPtr::Get(lVar7 + 0x1d0), lVar10 != 0)) {
                  UObject::FindFunction(lVar10,*(undefined8 *)(lVar7 + 0x1d8));
                }
                pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnRewardCellClicked",L"::");
                pwVar13 = pwVar11;
                while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
                  pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
                  pwVar13 = pwVar3;
                }
                FName::FName(&local_88,pwVar13 + 2,1);
                lVar10 = local_88;
                FWeakObjectPtr::operator=(lVar7 + 0x1b0,param_1);
                *(longlong *)(lVar7 + 0x1b8) = lVar10;
                if ((lVar10 != 0) && (lVar10 = FWeakObjectPtr::Get(lVar7 + 0x1b0), lVar10 != 0)) {
                  UObject::FindFunction(lVar10,*(undefined8 *)(lVar7 + 0x1b8));
                }
              }
            }
            if (local_70 != (wchar_t *)0x0) {
              FMemory::Free();
            }
          }
          uVar16 = (uint)pwVar17 + 1;
          pwVar17 = (wchar_t *)(ulonglong)uVar16;
          pwVar18 = pwVar18 + 4;
        } while ((int)uVar16 < (int)local_80[1]);
      }
      (**(code **)(**(longlong **)(param_1 + 0xab0) + 0x300))();
      (**(code **)(**(longlong **)(param_1 + 0xab0) + 0x2c8))(*(longlong **)(param_1 + 0xab0),1,0);
      lVar10 = *(longlong *)(param_1 + 0xab0);
      local_60 = lVar10;
      if (lVar10 != 0) {
        uVar6 = UBlendableInterface::GetPrivateStaticClass();
        pwVar11 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar10,uVar6);
      }
      local_58 = pwVar11;
      FUN_142ed36d0(param_1,&local_60,0);
    }
    if (*(longlong *)(param_1 + 0xae0) != 0) {
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0xae0) + 0x170);
      (**(code **)(*plVar12 + 0x38))(plVar12,0);
    }
    if (*(longlong *)(param_1 + 0xac0) != 0) {
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0xac0) + 0x170);
      (**(code **)(*plVar12 + 0x38))(plVar12,0);
    }
  }
  return;
}



// FUNCTION 140f262d0 FUN_140f262d0 body=320 status=ok
// SIG undefined FUN_140f262d0(void)

void FUN_140f262d0(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 local_res8;
  undefined1 *local_18;
  undefined8 uStack_10;
  
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x594);
  if (lVar4 != 0) {
    lVar5 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (lVar4 = FUN_140c46a10(lVar4,0), lVar4 != 0)) &&
       (lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x460) + 0x10))
                          ((longlong *)(lVar4 + 0x460),*(undefined1 *)(lVar4 + 0x690)), lVar4 != 0))
    {
      FUN_14170c210(param_1 + 0xf68,lVar4);
      uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
      local_18 = &LAB_140f348f0;
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCurrentWeaponAmmoCountChanged",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      lVar4 = FUN_1416f8720(*(undefined4 *)(param_1 + 0xf68));
      FUN_1407260e0(lVar4 + 400,param_1,&local_18,local_res8);
    }
  }
  return;
}



// FUNCTION 140f26410 FUN_140f26410 body=351 status=ok
// SIG undefined FUN_140f26410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f26410(undefined8 param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar3 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = param_1;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = FUN_140f26a30;
  cVar1 = FUN_142ebdc00(param_1);
  if ((cVar1 == '\0') || (cVar1 = FUN_142eba870(param_1), cVar1 != '\0')) {
    if (local_78 != 0) {
      plVar4 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar4 = local_88;
      }
      if (plVar4 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 8))();
      }
    }
    (*local_b8[0])(uVar3);
  }
  else {
    uVar3 = FUN_1420849a0(param_1,local_68,local_b8);
    FUN_14208d480(param_1,uVar3);
    if (local_28 != 0) {
      plVar4 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar4 = local_38;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_142eb05b0(param_1);
  }
  if (local_78 != 0) {
    plVar4 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar4 = local_88;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f26570 FUN_140f26570 body=385 status=ok
// SIG undefined FUN_140f26570(void)

void FUN_140f26570(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  BOOL BVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
  }
  if ((*(char *)(param_1 + 0xe90) == '\0') || (*(char *)(param_1 + 0x9c0) != '\0'))
  goto LAB_140f266d9;
  lVar7 = FUN_142eb65a0(param_1);
  if (lVar7 == 0) {
LAB_140f26607:
    lVar7 = 0;
  }
  else {
    lVar8 = UXGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140f26607;
  }
  *(longlong *)(param_1 + 0xa10) = lVar7;
  if (lVar7 == 0) goto LAB_140f266d9;
  *(undefined1 *)(lVar7 + 0x328) = 1;
  FUN_142ecf920(lVar7,0);
  lVar8 = 0xc18;
  lVar7 = 0xc18;
  if (*(char *)(param_1 + 0xe31) != '\x01') {
    lVar7 = 0xa80;
  }
  cVar5 = FUN_140ee10a0(lVar7 + param_1);
  if (cVar5 == '\0') goto LAB_140f266d9;
  uVar3 = 0xc18;
  if (*(char *)(param_1 + 0xe31) != '\x01') {
    uVar3 = 0xa80;
  }
  FUN_140f08820((ulonglong)uVar3 + param_1,1);
  LOCK();
  iVar1 = *(int *)(param_1 + 0xf98);
  *(int *)(param_1 + 0xf98) = 0;
  UNLOCK();
  LOCK();
  iVar2 = *(int *)(param_1 + 0xf9c);
  *(int *)(param_1 + 0xf9c) = 0;
  UNLOCK();
  if (iVar1 == 0) {
    if (iVar2 != 0) {
      uVar9 = 1;
      goto LAB_140f26687;
    }
  }
  else {
    uVar9 = 0;
LAB_140f26687:
    FUN_140f47890(param_1,uVar9);
  }
  lVar7 = 0xc18;
  if (*(char *)(param_1 + 0xe31) != '\x01') {
    lVar7 = 0xa80;
  }
  FUN_140f089d0(lVar7 + param_1);
  if (*(char *)(param_1 + 0xe31) != '\x01') {
    lVar8 = 0xa80;
  }
  FUN_140f080d0(param_1 + lVar8,1);
  FUN_140f4e0f0(param_1,1);
LAB_140f266d9:
                    /* WARNING: Could not recover jumptable at 0x000140f266ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
  return;
}



// FUNCTION 140f26700 FUN_140f26700 body=584 status=ok
// SIG undefined FUN_140f26700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f26700(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  if (param_2 != 0) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
    param_1[0xc6] = param_2;
    FWeakObjectPtr::operator=(&local_d8);
    local_98 = (longlong *)0x0;
    local_88 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_1444f8920;
      puVar2[1] = param_1;
      *(undefined4 *)(puVar2 + 2) = local_d8;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_d4;
    }
    local_c8[0] = &LAB_140f26b10;
    uVar3 = FUN_1420849a0(param_1,local_78,local_c8);
    FUN_14208c260(param_1,uVar3);
    if (local_38 != 0) {
      plVar5 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar5 = local_48;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      plVar5 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar5 = local_98;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
    lVar4 = param_1[0xc6];
    *(undefined1 *)((longlong)param_1 + 0x639) = *(undefined1 *)(lVar4 + 0x10e5);
    if ((*(char *)(lVar4 + 0x10e5) == '\0') && (*(char *)(lVar4 + 0x10e6) == '\0')) {
      cVar1 = FUN_142ebe180(param_1);
      if ((cVar1 != '\0') && (lVar4 = FUN_140eccbe0(param_1), lVar4 != 0)) {
        uVar3 = FUN_140e10600(param_1);
        FUN_142f00490(uVar3,param_1[0xd0]);
      }
      (**(code **)(*param_1 + 0x580))(param_1,1);
    }
    else {
      lVar4 = FUN_140eccbe0(param_1);
      if (lVar4 != 0) {
        uVar3 = FUN_140e10600(param_1);
        FUN_142f02570(uVar3,param_1[0xd0],0);
      }
      cVar1 = *(char *)(param_1[0xc6] + 0x10e5);
      if (cVar1 == '\x01') {
        if (*(char *)((longlong)param_1 + 0x639) == '\x01') {
          if (param_1[0xc6] == 0) {
            return;
          }
          if ((char)param_1[0xc1] != '\0') {
            return;
          }
          *(undefined1 *)((longlong)param_1 + 0x639) = 1;
          FUN_140f51970(param_1);
          return;
        }
      }
      else if (cVar1 == '\x03') {
        return;
      }
      FUN_140f32040(param_1,0);
      if (*(char *)(param_1[0xc6] + 0x1338) == '\0') {
        (**(code **)(*param_1 + 0x578))(param_1,0);
      }
    }
  }
  return;
}



// FUNCTION 140f26970 thunk_FUN_140f18c90 body=5 status=ok
// SIG undefined thunk_FUN_140f18c90(void)

void thunk_FUN_140f18c90(void)

{
  FUN_140f18c90();
  return;
}



// FUNCTION 140f269c0 thunk_FUN_140f19370 body=5 status=ok
// SIG undefined thunk_FUN_140f19370(void)

void thunk_FUN_140f19370(void)

{
  FUN_140f19370();
  return;
}



// FUNCTION 140f269e0 thunk_FUN_140f196e0 body=5 status=ok
// SIG undefined thunk_FUN_140f196e0(void)

void thunk_FUN_140f196e0(void)

{
  FUN_140f196e0();
  return;
}



// FUNCTION 140f26a30 FUN_140f26a30 body=47 status=ok
// SIG undefined FUN_140f26a30(void)

void FUN_140f26a30(undefined8 *param_1)

{
  char cVar1;
  
  cVar1 = FUN_142ebd920(*param_1);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140f26a52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x578))((longlong *)*param_1,1);
    return;
  }
  return;
}



// FUNCTION 140f26aa0 thunk_FUN_140f1aa50 body=5 status=ok
// SIG undefined thunk_FUN_140f1aa50(void)

void thunk_FUN_140f1aa50(void)

{
  FUN_140f1aa50();
  return;
}



// FUNCTION 140f26b20 thunk_FUN_140f1b8e0 body=5 status=ok
// SIG undefined thunk_FUN_140f1b8e0(void)

void thunk_FUN_140f1b8e0(void)

{
  FUN_140f1b8e0();
  return;
}



// FUNCTION 140f26b50 thunk_FUN_140f1bc10 body=5 status=ok
// SIG undefined thunk_FUN_140f1bc10(void)

void thunk_FUN_140f1bc10(void)

{
  FUN_140f1bc10();
  return;
}



// FUNCTION 140f26b80 FUN_140f26b80 body=57 status=ok
// SIG undefined FUN_140f26b80(void)

void FUN_140f26b80(undefined8 *param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x1c) != -1) {
    lVar1 = FUN_140f2b5e0(*param_1);
    if (lVar1 != 0) {
      FUN_14300bce0(lVar1,param_1 + 0x14);
      return;
    }
  }
  return;
}



// FUNCTION 140f26bf0 FUN_140f26bf0 body=38 status=ok
// SIG undefined FUN_140f26bf0(void)

void FUN_140f26bf0(undefined8 *param_1)

{
  FUN_140f53310(*param_1);
  FUN_140f32750(*param_1);
  FUN_140f3cf70(*param_1);
  return;
}



// FUNCTION 140f26c50 thunk_FUN_140f1ca60 body=5 status=ok
// SIG undefined thunk_FUN_140f1ca60(void)

void thunk_FUN_140f1ca60(void)

{
  FUN_140f1ca60();
  return;
}



// FUNCTION 140f26cc0 thunk_FUN_140f1d0a0 body=5 status=ok
// SIG undefined thunk_FUN_140f1d0a0(void)

void thunk_FUN_140f1d0a0(void)

{
  FUN_140f1d0a0();
  return;
}



// FUNCTION 140f26d10 thunk_FUN_140f1dbe0 body=5 status=ok
// SIG undefined thunk_FUN_140f1dbe0(void)

void thunk_FUN_140f1dbe0(void)

{
  FUN_140f1dbe0();
  return;
}



// FUNCTION 140f26d70 thunk_FUN_140f1e490 body=5 status=ok
// SIG undefined thunk_FUN_140f1e490(void)

void thunk_FUN_140f1e490(void)

{
  FUN_140f1e490();
  return;
}



// FUNCTION 140f26d80 FUN_140f26d80 body=30 status=ok
// SIG undefined FUN_140f26d80(void)

void FUN_140f26d80(undefined8 *param_1)

{
  FUN_142ecd4d0(*param_1);
  FUN_140f316c0(*param_1);
  return;
}



// FUNCTION 140f26db0 FUN_140f26db0 body=96 status=ok
// SIG undefined FUN_140f26db0(void)

void FUN_140f26db0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    lVar3 = FUN_1413565b0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(lVar1 + 0x650) != 0)) {
      FUN_142ecfa40();
      return;
    }
  }
  return;
}



// FUNCTION 140f26e30 thunk_FUN_140f1ef70 body=5 status=ok
// SIG undefined thunk_FUN_140f1ef70(void)

void thunk_FUN_140f1ef70(void)

{
  FUN_140f1ef70();
  return;
}



// FUNCTION 140f26ec0 FUN_140f26ec0 body=29 status=ok
// SIG undefined FUN_140f26ec0(void)

undefined4 FUN_140f26ec0(longlong *param_1)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *(undefined4 *)(*param_1 + 0xfb8);
  *(undefined4 *)(*param_1 + 0xfb8) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(*param_1 + 0xfa4) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140f26f10 thunk_FUN_140f20ba0 body=5 status=ok
// SIG undefined thunk_FUN_140f20ba0(void)

void thunk_FUN_140f20ba0(void)

{
  FUN_140f20ba0();
  return;
}



// FUNCTION 140f26f80 FUN_140f26f80 body=96 status=ok
// SIG undefined FUN_140f26f80(void)

void FUN_140f26f80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (*(longlong **)(lVar2 + 0xa58) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(lVar2 + 0xa58) + 0x2b0))();
    FUN_1407665e0(lVar1 + 8,lVar2);
    lVar2 = *param_1;
  }
  if (*(longlong **)(lVar2 + 0xa50) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(lVar2 + 0xa50) + 0x2b0))();
    FUN_1407665e0(lVar1 + 8,lVar2);
  }
  return;
}



// FUNCTION 140f26ff0 FUN_140f26ff0 body=8 status=ok
// SIG undefined FUN_140f26ff0(void)

void FUN_140f26ff0(undefined8 *param_1)

{
  FUN_140f26570(*param_1);
  return;
}



// FUNCTION 140f270c0 FUN_140f270c0 body=30 status=ok
// SIG undefined FUN_140f270c0(void)

void FUN_140f270c0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_1 + 0xc;
  if (*(char *)((longlong)param_1 + 10) == '\0') {
    lVar1 = 0;
  }
  FUN_140f48980(*param_1,*(undefined1 *)(param_1 + 1),*(undefined1 *)((longlong)param_1 + 9),lVar1);
  return;
}



// FUNCTION 140f27100 FUN_140f27100 body=86 status=ok
// SIG undefined FUN_140f27100(void)

void FUN_140f27100(longlong *param_1)

{
  char cVar1;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(longlong *)(*param_1 + 0x9e0) != 0) {
    cVar1 = FUN_140f279e0();
    if (cVar1 != '\0') {
      local_28[0] = (undefined1)param_1[1];
      local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
      local_20 = (undefined4)param_1[2];
      local_1c = *(undefined4 *)((longlong)param_1 + 0x14);
      local_18 = (undefined4)param_1[3];
      FUN_140f51bc0(*param_1,local_28);
    }
  }
  return;
}



// FUNCTION 140f27170 FUN_140f27170 body=475 status=ok
// SIG undefined FUN_140f27170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f27170(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined4 *param_4)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uStack_bc = 0xffffffff;
  if (param_4 != (undefined4 *)0x0) {
    uStack_bc = *param_4;
  }
  uStack_c0 = CONCAT22(CONCAT11(uStack_c0._3_1_,param_4 != (undefined4 *)0x0),
                       CONCAT11(param_3,param_2));
  lVar6 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_c8 = param_1;
  puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(puVar4 + 2) = uStack_c0;
    *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_bc;
  }
  local_b8[0] = FUN_140f270c0;
  FUN_1420849a0(param_1,local_68,local_b8);
  if (local_78 != 0) {
    plVar7 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar7 = local_88;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar1 = DAT_146872910;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar5 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_140f27273;
  }
  lVar5 = lVar6;
LAB_140f27273:
  if (*(int *)(lVar5 + lVar1) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_68);
    if (local_78 != 0) {
      plVar7 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar7 = local_88;
      }
      if (plVar7 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar7 + 8))();
      }
    }
    (*local_b8[0])(lVar6);
    if (local_78 != 0) {
      plVar7 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar7 = local_88;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8);
    FUN_14208c4f0(param_1,local_b8);
  }
  if (local_28 != 0) {
    plVar7 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar7 = local_38;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f27350 FUN_140f27350 body=758 status=ok
// SIG undefined FUN_140f27350(void)

ulonglong FUN_140f27350(longlong param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 local_68 [4];
  undefined1 local_64 [8];
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [72];
  
  plVar4 = (longlong *)FUN_140f2b5e0();
  uVar9 = 0;
  if (plVar4 == (longlong *)0x0) goto LAB_140f2762b;
  lVar5 = FUN_140f2b2d0(param_1);
  if (lVar5 == 0) {
LAB_140f273fb:
    local_68[0] = 0;
    FWeakObjectPtr::operator=(local_64,0);
    FWeakObjectPtr::operator=(&local_5c,0);
    cVar3 = FWeakObjectPtr::IsValid(local_64);
    if (cVar3 != '\0') {
      plVar7 = (longlong *)FWeakObjectPtr::Get(local_64);
      lVar5 = (**(code **)(*plVar7 + 0x340))(plVar7);
      cVar3 = FWeakObjectPtr::IsValid(lVar5 + 0xdc);
      if (cVar3 == '\0') {
        cVar3 = FWeakObjectPtr::IsValid(lVar5 + 0x5c);
        if (cVar3 != '\0') {
          local_5c = *(undefined4 *)(lVar5 + 0x5c);
          local_58 = *(undefined4 *)(lVar5 + 0x60);
        }
      }
      else {
        local_5c = *(undefined4 *)(lVar5 + 0xdc);
        local_58 = *(undefined4 *)(lVar5 + 0xe0);
      }
    }
  }
  else {
    lVar6 = FUN_142eb65a0(param_1);
    plVar7 = *(longlong **)(param_1 + 0xa00);
    plVar10 = plVar7 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
    for (; plVar7 != plVar10; plVar7 = plVar7 + 0x1b) {
      if ((lVar6 != 0) && (lVar6 == *plVar7)) {
        FUN_140f16950(local_68,CONCAT71((int7)((ulonglong)plVar7 >> 8),1),lVar5);
        goto LAB_140f27484;
      }
    }
    cVar3 = FUN_140f31c30(param_1);
    if (cVar3 == '\0') goto LAB_140f273fb;
    FUN_140f16950(local_68,2,lVar5);
  }
LAB_140f27484:
  lVar5 = FWeakObjectPtr::Get(&local_5c);
  uVar9 = 0;
  if (lVar5 == 0) {
LAB_140f2762b:
    return uVar9 & 0xffffffffffffff00;
  }
  lVar6 = FUN_1428dfc70();
  iVar1 = *(int *)(lVar6 + 0x90);
  uVar9 = (longlong)iVar1;
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar1) ||
     (uVar9 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0x88),
     *(longlong *)(uVar9 + (longlong)iVar1 * 8) != lVar6 + 0x88)) {
    uVar9 = uVar9 & 0xffffffffffffff00;
    bVar2 = false;
  }
  else {
    uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
    bVar2 = true;
  }
  if (!bVar2) goto LAB_140f2762b;
  lVar5 = FUN_140f2b2d0(param_1);
  if (lVar5 == 0) {
LAB_140f2754d:
    local_68[0] = 0;
    FWeakObjectPtr::operator=(local_64,0);
    FWeakObjectPtr::operator=(&local_5c,0);
    cVar3 = FWeakObjectPtr::IsValid(local_64);
    if (cVar3 != '\0') {
      plVar7 = (longlong *)FWeakObjectPtr::Get(local_64);
      lVar5 = (**(code **)(*plVar7 + 0x340))(plVar7);
      cVar3 = FWeakObjectPtr::IsValid(lVar5 + 0xdc);
      if (cVar3 == '\0') {
        cVar3 = FWeakObjectPtr::IsValid(lVar5 + 0x5c);
        if (cVar3 != '\0') {
          local_5c = *(undefined4 *)(lVar5 + 0x5c);
          local_58 = *(undefined4 *)(lVar5 + 0x60);
        }
      }
      else {
        local_5c = *(undefined4 *)(lVar5 + 0xdc);
        local_58 = *(undefined4 *)(lVar5 + 0xe0);
      }
    }
  }
  else {
    lVar6 = FUN_142eb65a0(param_1);
    plVar7 = *(longlong **)(param_1 + 0xa00);
    plVar10 = plVar7 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
    for (; plVar7 != plVar10; plVar7 = plVar7 + 0x1b) {
      if ((lVar6 != 0) && (lVar6 == *plVar7)) {
        FUN_140f16950(local_68,CONCAT71((int7)((ulonglong)plVar7 >> 8),1),lVar5);
        goto LAB_140f275c6;
      }
    }
    cVar3 = FUN_140f31c30(param_1);
    if (cVar3 == '\0') goto LAB_140f2754d;
    FUN_140f16950(local_68,2,lVar5);
  }
LAB_140f275c6:
  lVar5 = FWeakObjectPtr::Get(&local_5c);
  if (lVar5 != 0) {
    lVar6 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140f2760b;
  }
  lVar5 = 0;
LAB_140f2760b:
  lVar6 = *plVar4;
  uVar8 = FUN_142ffbee0(plVar4,local_50,lVar5);
  uVar9 = (**(code **)(lVar6 + 0x478))(plVar4,uVar8);
  return uVar9;
}



// FUNCTION 140f27650 FUN_140f27650 body=765 status=ok
// SIG undefined FUN_140f27650(void)

ulonglong FUN_140f27650(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_28 [4];
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  
  lVar3 = FUN_142eb65a0();
  plVar7 = *(longlong **)(param_1 + 0xa00);
  plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
  for (; plVar7 != plVar8; plVar7 = plVar7 + 0x1b) {
    if ((lVar3 != 0) && (lVar3 == *plVar7)) goto LAB_140f276b5;
  }
  uVar4 = FUN_140f31c30(param_1);
  if (((char)uVar4 == '\0') || (*(char *)(param_1 + 0xe90) != '\0')) {
    return uVar4 & 0xffffffffffffff00;
  }
LAB_140f276b5:
  lVar3 = FUN_140f2b2d0(param_1);
  if (lVar3 == 0) {
LAB_140f27738:
    local_28[0] = 0;
    FWeakObjectPtr::operator=(local_24,0);
    FWeakObjectPtr::operator=(&local_1c,0);
    cVar2 = FWeakObjectPtr::IsValid(local_24);
    if (cVar2 != '\0') {
      plVar7 = (longlong *)FWeakObjectPtr::Get(local_24);
      lVar3 = (**(code **)(*plVar7 + 0x340))(plVar7);
      cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0xdc);
      if (cVar2 == '\0') {
        cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0x5c);
        if (cVar2 != '\0') {
          local_1c = *(undefined4 *)(lVar3 + 0x5c);
          local_18 = *(undefined4 *)(lVar3 + 0x60);
        }
      }
      else {
        local_1c = *(undefined4 *)(lVar3 + 0xdc);
        local_18 = *(undefined4 *)(lVar3 + 0xe0);
      }
    }
  }
  else {
    lVar5 = FUN_142eb65a0(param_1);
    plVar7 = *(longlong **)(param_1 + 0xa00);
    plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
    for (; plVar7 != plVar8; plVar7 = plVar7 + 0x1b) {
      if ((lVar5 != 0) && (lVar5 == *plVar7)) {
        FUN_140f16950(local_28,CONCAT71((int7)((ulonglong)plVar7 >> 8),1),lVar3);
        goto LAB_140f277bb;
      }
    }
    cVar2 = FUN_140f31c30(param_1);
    if (cVar2 == '\0') goto LAB_140f27738;
    FUN_140f16950(local_28,2,lVar3);
  }
LAB_140f277bb:
  uVar6 = FUN_140f2b5e0(param_1);
  uVar4 = FUN_140f2b510(local_28,uVar6);
  if ((uVar4 == 0) || (*(char *)(uVar4 + 0x58) == '\0')) goto LAB_140f2792e;
  lVar3 = FUN_140f2b2d0(param_1);
  if (lVar3 == 0) {
LAB_140f2785c:
    local_28[0] = 0;
    FWeakObjectPtr::operator=(local_24,0);
    FWeakObjectPtr::operator=(&local_1c,0);
    cVar2 = FWeakObjectPtr::IsValid(local_24);
    if (cVar2 != '\0') {
      plVar7 = (longlong *)FWeakObjectPtr::Get(local_24);
      lVar3 = (**(code **)(*plVar7 + 0x340))(plVar7);
      cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0xdc);
      if (cVar2 == '\0') {
        cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0x5c);
        if (cVar2 != '\0') {
          local_1c = *(undefined4 *)(lVar3 + 0x5c);
          local_18 = *(undefined4 *)(lVar3 + 0x60);
        }
      }
      else {
        local_1c = *(undefined4 *)(lVar3 + 0xdc);
        local_18 = *(undefined4 *)(lVar3 + 0xe0);
      }
    }
  }
  else {
    lVar5 = FUN_142eb65a0(param_1);
    plVar7 = *(longlong **)(param_1 + 0xa00);
    plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
    for (; plVar7 != plVar8; plVar7 = plVar7 + 0x1b) {
      if ((lVar5 != 0) && (lVar5 == *plVar7)) {
        FUN_140f16950(local_28,CONCAT71((int7)((ulonglong)plVar7 >> 8),1),lVar3);
        goto LAB_140f278d5;
      }
    }
    cVar2 = FUN_140f31c30(param_1);
    if (cVar2 == '\0') goto LAB_140f2785c;
    FUN_140f16950(local_28,2,lVar3);
  }
LAB_140f278d5:
  lVar3 = FWeakObjectPtr::Get(&local_1c);
  uVar4 = 0;
  if (lVar3 != 0) {
    lVar5 = FUN_1428dfc70();
    iVar1 = *(int *)(lVar5 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(lVar3 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar5 + 0x88)) {
      uVar4 = uVar4 & 0xffffffffffffff00;
    }
    else {
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)uVar4 != '\0') {
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
LAB_140f2792e:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140f27950 FUN_140f27950 body=136 status=ok
// SIG undefined FUN_140f27950(void)

undefined8 FUN_140f27950(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xa00);
  plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
  while( true ) {
    if (plVar2 == plVar3) {
      return 0;
    }
    if (((((longlong *)*plVar2 != (longlong *)0x0) &&
         (lVar1 = (**(code **)(*(longlong *)*plVar2 + 0x370))(), lVar1 != 0)) &&
        (*(longlong *)(param_2 + 0xa8) != 0)) &&
       (*(longlong *)(param_2 + 0xa8) == *(longlong *)(lVar1 + 0x70))) break;
    plVar2 = plVar2 + 0x1b;
  }
  return 1;
}



// FUNCTION 140f279e0 FUN_140f279e0 body=363 status=ok
// SIG undefined FUN_140f279e0(void)

undefined8 FUN_140f279e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  char local_28 [4];
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  
  lVar2 = FUN_140f2b2d0();
  if (lVar2 != 0) {
    lVar3 = FUN_142eb65a0(param_1);
    plVar4 = *(longlong **)(param_1 + 0xa00);
    plVar6 = plVar4 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
    for (; plVar4 != plVar6; plVar4 = plVar4 + 0x1b) {
      if ((lVar3 != 0) && (lVar3 == *plVar4)) {
        FUN_140f16950(local_28,CONCAT71((int7)(int3)((uint)*(int *)(param_1 + 0xa08) >> 8),1),lVar2)
        ;
        goto LAB_140f27af5;
      }
    }
    cVar1 = FUN_140f31c30(param_1);
    if (cVar1 != '\0') {
      FUN_140f16950(local_28,2,lVar2);
      goto LAB_140f27af5;
    }
  }
  local_28[0] = '\0';
  FWeakObjectPtr::operator=(local_24,0);
  FWeakObjectPtr::operator=(&local_1c,0);
  cVar1 = FWeakObjectPtr::IsValid(local_24);
  if (cVar1 != '\0') {
    plVar4 = (longlong *)FWeakObjectPtr::Get(local_24);
    lVar2 = (**(code **)(*plVar4 + 0x340))(plVar4);
    cVar1 = FWeakObjectPtr::IsValid(lVar2 + 0xdc);
    if (cVar1 == '\0') {
      cVar1 = FWeakObjectPtr::IsValid(lVar2 + 0x5c);
      if (cVar1 != '\0') {
        local_1c = *(undefined4 *)(lVar2 + 0x5c);
        local_18 = *(undefined4 *)(lVar2 + 0x60);
      }
    }
    else {
      local_1c = *(undefined4 *)(lVar2 + 0xdc);
      local_18 = *(undefined4 *)(lVar2 + 0xe0);
    }
  }
LAB_140f27af5:
  if (local_28[0] == '\x01') {
    return 1;
  }
  if ((local_28[0] == '\x02') && (lVar2 = FWeakObjectPtr::Get(local_24), lVar2 != 0)) {
    plVar4 = (longlong *)FWeakObjectPtr::Get(local_24);
    uVar5 = (**(code **)(*plVar4 + 0x340))(plVar4);
    cVar1 = FUN_140f27950(param_1,uVar5);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140f27b50 FUN_140f27b50 body=117 status=ok
// SIG undefined FUN_140f27b50(void)

undefined8 FUN_140f27b50(undefined8 param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*param_2 == '\x01') {
    return 1;
  }
  if (*param_2 == '\x02') {
    lVar2 = FWeakObjectPtr::Get(param_2 + 4);
    if (lVar2 != 0) {
      plVar3 = (longlong *)FWeakObjectPtr::Get(param_2 + 4);
      uVar4 = (**(code **)(*plVar3 + 0x340))(plVar3);
      cVar1 = FUN_140f27950(param_1,uVar4);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}



// FUNCTION 140f27bd0 FUN_140f27bd0 body=457 status=ok
// SIG undefined FUN_140f27bd0(void)

ulonglong FUN_140f27bd0(longlong param_1)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  undefined1 local_28 [4];
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar3 = FUN_142eb65a0();
  puVar7 = *(ulonglong **)(param_1 + 0xa00);
  puVar9 = puVar7 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
  for (; puVar7 != puVar9; puVar7 = puVar7 + 0x1b) {
    if ((uVar3 != 0) && (uVar3 == *puVar7)) {
      lVar4 = FUN_140f2b5e0(param_1);
      uVar3 = 0;
      if ((lVar4 != 0) && (uVar3 = FUN_143003580(lVar4), (char)uVar3 == '\0')) {
        lVar4 = FUN_140f2b2d0(param_1);
        if (lVar4 == 0) goto LAB_140f27cbb;
        lVar5 = FUN_142eb65a0(param_1);
        plVar6 = *(longlong **)(param_1 + 0xa00);
        plVar8 = plVar6 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
        goto joined_r0x000140f27c6f;
      }
      break;
    }
  }
  goto LAB_140f27c16;
joined_r0x000140f27c6f:
  if (plVar6 == plVar8) goto LAB_140f27c87;
  if ((lVar5 != 0) && (lVar5 == *plVar6)) {
    FUN_140f16950(local_28,CONCAT71((int7)((ulonglong)plVar6 >> 8),1),lVar4);
    goto LAB_140f27d3c;
  }
  plVar6 = plVar6 + 0x1b;
  goto joined_r0x000140f27c6f;
LAB_140f27c87:
  cVar2 = FUN_140f31c30(param_1);
  if (cVar2 == '\0') {
LAB_140f27cbb:
    local_28[0] = 0;
    FWeakObjectPtr::operator=(local_24,0);
    FWeakObjectPtr::operator=(&local_1c,0);
    cVar2 = FWeakObjectPtr::IsValid(local_24);
    if (cVar2 != '\0') {
      plVar6 = (longlong *)FWeakObjectPtr::Get(local_24);
      lVar4 = (**(code **)(*plVar6 + 0x340))(plVar6);
      cVar2 = FWeakObjectPtr::IsValid(lVar4 + 0xdc);
      if (cVar2 == '\0') {
        cVar2 = FWeakObjectPtr::IsValid(lVar4 + 0x5c);
        if (cVar2 != '\0') {
          local_1c = *(undefined4 *)(lVar4 + 0x5c);
          local_18 = *(undefined4 *)(lVar4 + 0x60);
        }
      }
      else {
        local_1c = *(undefined4 *)(lVar4 + 0xdc);
        local_18 = *(undefined4 *)(lVar4 + 0xe0);
      }
    }
  }
  else {
    FUN_140f16950(local_28,2,lVar4);
  }
LAB_140f27d3c:
  lVar4 = FWeakObjectPtr::Get(&local_1c);
  uVar3 = 0;
  if (lVar4 != 0) {
    lVar5 = FUN_1428dfc70();
    iVar1 = *(int *)(lVar5 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(lVar4 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar5 + 0x88)) {
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)uVar3 != '\0') {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
LAB_140f27c16:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140f27da0 FUN_140f27da0 body=616 status=ok
// SIG undefined FUN_140f27da0(void)

ulonglong FUN_140f27da0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 local_28 [4];
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  
  lVar2 = FUN_140f2b2d0();
  if (lVar2 == 0) {
LAB_140f27e35:
    local_28[0] = 0;
    FWeakObjectPtr::operator=(local_24,0);
    FWeakObjectPtr::operator=(&local_1c,0);
    cVar1 = FWeakObjectPtr::IsValid(local_24);
    if (cVar1 != '\0') {
      plVar4 = (longlong *)FWeakObjectPtr::Get(local_24);
      lVar2 = (**(code **)(*plVar4 + 0x340))(plVar4);
      cVar1 = FWeakObjectPtr::IsValid(lVar2 + 0xdc);
      if (cVar1 == '\0') {
        cVar1 = FWeakObjectPtr::IsValid(lVar2 + 0x5c);
        if (cVar1 != '\0') {
          local_1c = *(undefined4 *)(lVar2 + 0x5c);
          local_18 = *(undefined4 *)(lVar2 + 0x60);
        }
      }
      else {
        local_1c = *(undefined4 *)(lVar2 + 0xdc);
        local_18 = *(undefined4 *)(lVar2 + 0xe0);
      }
    }
  }
  else {
    lVar3 = FUN_142eb65a0(param_1);
    plVar4 = *(longlong **)(param_1 + 0xa00);
    plVar6 = plVar4 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
    for (; plVar4 != plVar6; plVar4 = plVar4 + 0x1b) {
      if ((lVar3 != 0) && (lVar3 == *plVar4)) {
        FUN_140f16950(local_28,CONCAT71((int7)((ulonglong)plVar4 >> 8),1),lVar2);
        goto LAB_140f27eae;
      }
    }
    cVar1 = FUN_140f31c30(param_1);
    if (cVar1 == '\0') goto LAB_140f27e35;
    FUN_140f16950(local_28,2,lVar2);
  }
LAB_140f27eae:
  lVar2 = FWeakObjectPtr::Get(local_24);
  uVar5 = 0;
  if (lVar2 == 0) goto LAB_140f27ff1;
  lVar2 = FUN_140f2b2d0(param_1);
  if (lVar2 == 0) {
LAB_140f27f3a:
    local_28[0] = 0;
    FWeakObjectPtr::operator=(local_24,0);
    FWeakObjectPtr::operator=(&local_1c,0);
    cVar1 = FWeakObjectPtr::IsValid(local_24);
    if (cVar1 != '\0') {
      plVar4 = (longlong *)FWeakObjectPtr::Get(local_24);
      lVar2 = (**(code **)(*plVar4 + 0x340))(plVar4);
      cVar1 = FWeakObjectPtr::IsValid(lVar2 + 0xdc);
      if (cVar1 == '\0') {
        cVar1 = FWeakObjectPtr::IsValid(lVar2 + 0x5c);
        if (cVar1 != '\0') {
          local_1c = *(undefined4 *)(lVar2 + 0x5c);
          local_18 = *(undefined4 *)(lVar2 + 0x60);
        }
      }
      else {
        local_1c = *(undefined4 *)(lVar2 + 0xdc);
        local_18 = *(undefined4 *)(lVar2 + 0xe0);
      }
    }
  }
  else {
    lVar3 = FUN_142eb65a0(param_1);
    plVar4 = *(longlong **)(param_1 + 0xa00);
    plVar6 = plVar4 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
    for (; plVar4 != plVar6; plVar4 = plVar4 + 0x1b) {
      if ((lVar3 != 0) && (lVar3 == *plVar4)) {
        FUN_140f16950(local_28,CONCAT71((int7)((ulonglong)plVar4 >> 8),1),lVar2);
        goto LAB_140f27fb3;
      }
    }
    cVar1 = FUN_140f31c30(param_1);
    if (cVar1 == '\0') goto LAB_140f27f3a;
    FUN_140f16950(local_28,2,lVar2);
  }
LAB_140f27fb3:
  plVar4 = (longlong *)FWeakObjectPtr::Get(local_24);
  uVar5 = FUN_140f2b5e0(param_1);
  if ((uVar5 != 0) && (plVar4 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*plVar4 + 0x340))(plVar4);
    uVar5 = FUN_14142f600(uVar5,lVar2 + 0xd8);
    return uVar5;
  }
LAB_140f27ff1:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 140f28010 FUN_140f28010 body=360 status=ok
// SIG undefined FUN_140f28010(void)

ulonglong FUN_140f28010(longlong *param_1,int param_2)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  iVar7 = (int)param_1[0x147];
  if (iVar7 != 0) {
    lVar4 = param_1[0x143];
    lVar3 = (longlong)((int)lVar4 + iVar7 + param_2);
    uVar6 = lVar3 / (longlong)iVar7 & 0xffffffff;
    uVar2 = lVar3 % (longlong)iVar7;
    iVar7 = (int)uVar2;
    *(int *)(param_1 + 0x143) = iVar7;
    if ((int)lVar4 != iVar7) {
      lVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
      bVar1 = true;
      if (lVar3 != 0) {
        lVar4 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        if ((bVar1) && (lVar3 = FUN_140cff230(lVar3), lVar3 != 0)) {
          puVar5 = (undefined8 *)FName::FName(local_res8,"Backpack",1);
          FUN_140d4cd90(lVar3,*puVar5,uVar2 & 0xffffffff);
        }
      }
      FUN_140f27170(param_1,1,2,0);
      LOCK();
      *(undefined4 *)((longlong)param_1 + 0xfa4) = 1;
      UNLOCK();
      local_18 = 0;
      local_10 = 0;
      uVar6 = (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872888,&local_18);
    }
    return uVar6;
  }
  *(undefined4 *)(param_1 + 0x143) = 0xffffffff;
  FUN_140f27170(param_1,0,2,0);
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0xfa4) = 1;
  UNLOCK();
  local_28 = 0;
  local_20 = 0;
  uVar2 = (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872888,&local_28);
  return uVar2;
}



// FUNCTION 140f28180 FUN_140f28180 body=95 status=ok
// SIG undefined FUN_140f28180(void)

void FUN_140f28180(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    local_68 = (undefined4)param_1;
    uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
    uStack_60 = (undefined4)param_2;
    uStack_5c = (undefined4)((ulonglong)param_2 >> 0x20);
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = local_68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_64;
    *(undefined4 *)(puVar1 + 2) = uStack_60;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_5c;
  }
  local_58[0] = &LAB_140f27080;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 140f281e0 FUN_140f281e0 body=271 status=ok
// SIG undefined FUN_140f281e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f281e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140f26b60;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f282f0 FUN_140f282f0 body=271 status=ok
// SIG undefined FUN_140f282f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f282f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140f26ad0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f28400 FUN_140f28400 body=102 status=ok
// SIG undefined FUN_140f28400(void)

void FUN_140f28400(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x35c) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x35c) = 0;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x3e4);
  if (cVar1 == '\0') {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x364);
    if (cVar1 == '\0') goto LAB_140f28451;
  }
  if (*(char *)(param_1 + 0x35c) != '\0') {
    FUN_142ed3eb0(param_1,1);
    return;
  }
LAB_140f28451:
  FUN_142ed3eb0(param_1,0);
  return;
}



// FUNCTION 140f28470 FUN_140f28470 body=90 status=ok
// SIG undefined FUN_140f28470(void)

undefined8 * FUN_140f28470(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b7a0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
    *(undefined1 *)((longlong)puVar1 + 0x19) = *(undefined1 *)(param_1 + 0x19);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f284d0 FUN_140f284d0 body=150 status=ok
// SIG undefined FUN_140f284d0(void)

undefined8 * FUN_140f284d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b550;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    FUN_14170c210(puVar1 + 3,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x1c));
    FUN_14170c210((longlong)puVar1 + 0x1c,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f28570 FUN_140f28570 body=106 status=ok
// SIG undefined FUN_140f28570(void)

undefined8 * FUN_140f28570(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b7d0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    FUN_140f16ab0(puVar1 + 3,param_1 + 0x18);
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(param_1 + 0x40);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f285e0 FUN_140f285e0 body=93 status=ok
// SIG undefined FUN_140f285e0(void)

undefined8 * FUN_140f285e0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14461b8c0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_1 + 0x20);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f28640 FUN_140f28640 body=125 status=ok
// SIG undefined FUN_140f28640(void)

undefined8 * FUN_140f28640(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b800;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
    *(undefined1 *)((longlong)puVar1 + 0x11) = *(undefined1 *)(param_1 + 0x11);
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x14));
    FUN_14170c210((longlong)puVar1 + 0x14,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f286c0 FUN_140f286c0 body=193 status=ok
// SIG undefined FUN_140f286c0(void)

undefined8 * FUN_140f286c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b860;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    FUN_14170c210(puVar1 + 3,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x1c));
    FUN_14170c210((longlong)puVar1 + 0x1c,uVar2);
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x20));
    FUN_14170c210(puVar1 + 4,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f28790 FUN_140f28790 body=169 status=ok
// SIG undefined FUN_140f28790(void)

undefined8 * FUN_140f28790(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b8a8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FUN_140e9a4f0(puVar1 + 2,param_1 + 0x10);
    *(undefined4 *)(puVar1 + 0x24) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x120));
    FUN_14170c210(puVar1 + 0x24,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0x124) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x124));
    FUN_14170c210((longlong)puVar1 + 0x124,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f28840 FUN_140f28840 body=175 status=ok
// SIG undefined FUN_140f28840(void)

undefined8 * FUN_140f28840(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b7e8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x14));
    FUN_14170c210((longlong)puVar1 + 0x14,uVar2);
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    FUN_14170c210(puVar1 + 3,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x1c));
    FUN_14170c210((longlong)puVar1 + 0x1c,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f288f0 FUN_140f288f0 body=87 status=ok
// SIG undefined FUN_140f288f0(void)

undefined8 * FUN_140f288f0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x120);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b878;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FUN_140e9a4f0(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f28950 FUN_140f28950 body=151 status=ok
// SIG undefined FUN_140f28950(void)

undefined8 * FUN_140f28950(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b848;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
    FUN_14170c210(puVar1 + 2,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x14));
    FUN_14170c210((longlong)puVar1 + 0x14,uVar2);
    FUN_140e9a4f0(puVar1 + 3,param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f289f0 FUN_140f289f0 body=71 status=ok
// SIG undefined FUN_140f289f0(void)

void FUN_140f289f0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14461b758;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return;
    }
  }
  return;
}



// FUNCTION 140f28a40 FUN_140f28a40 body=144 status=ok
// SIG undefined FUN_140f28a40(void)

undefined8 * FUN_140f28a40(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b830;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x14));
    FUN_14170c210((longlong)puVar1 + 0x14,uVar2);
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    FUN_14170c210(puVar1 + 3,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f28ad0 FUN_140f28ad0 body=136 status=ok
// SIG undefined FUN_140f28ad0(void)

undefined8 * FUN_140f28ad0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b7b8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    FUN_140f18420(puVar1 + 3,param_1 + 0x18);
    *(undefined4 *)(puVar1 + 0xb) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x58));
    FUN_14170c210(puVar1 + 0xb,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f28b60 FUN_140f28b60 body=102 status=ok
// SIG undefined FUN_140f28b60(void)

undefined8 * FUN_140f28b60(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b538;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f28bd0 FUN_140f28bd0 body=130 status=ok
// SIG undefined FUN_140f28bd0(void)

undefined8 * FUN_140f28bd0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b890;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_14170c210(puVar1 + 1,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0xc));
    FUN_14170c210((longlong)puVar1 + 0xc,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f28c60 FUN_140f28c60 body=181 status=ok
// SIG undefined FUN_140f28c60(void)

undefined8 * FUN_140f28c60(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b788;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    FUN_14170c210(puVar1 + 3,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x1c));
    FUN_14170c210((longlong)puVar1 + 0x1c,uVar2);
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x20));
    FUN_14170c210(puVar1 + 4,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f28d20 FUN_140f28d20 body=178 status=ok
// SIG undefined FUN_140f28d20(void)

undefined8 * FUN_140f28d20(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b770;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x28));
    FUN_14170c210(puVar1 + 5,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x2c));
    FUN_14170c210((longlong)puVar1 + 0x2c,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f28de0 FUN_140f28de0 body=96 status=ok
// SIG undefined FUN_140f28de0(void)

undefined8 * FUN_140f28de0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b818;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f28e40 FUN_140f28e40 body=91 status=ok
// SIG undefined FUN_140f28e40(void)

void FUN_140f28e40(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_LAB_14461b6c8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar1 = &PTR_LAB_14461b710;
  }
  return;
}



// FUNCTION 140f28ea0 FUN_140f28ea0 body=78 status=ok
// SIG undefined FUN_140f28ea0(void)

void FUN_140f28ea0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b568;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_14461b5b0;
  }
  return;
}



// FUNCTION 140f28ef0 FUN_140f28ef0 body=78 status=ok
// SIG undefined FUN_140f28ef0(void)

void FUN_140f28ef0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b5f8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_14461b640;
  }
  return;
}



// FUNCTION 140f28f40 FUN_140f28f40 body=74 status=ok
// SIG undefined FUN_140f28f40(void)

void FUN_140f28f40(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14461b688;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 140f28f90 FUN_140f28f90 body=110 status=ok
// SIG undefined FUN_140f28f90(void)

bool FUN_140f28f90(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0xb30) != 0) {
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xdb0);
    if (cVar2 != '\0') {
      uVar1 = FWeakObjectPtr::Get(param_1 + 0xdb0);
      iVar3 = FUN_140e50540(uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0xb30) + 0x30));
      return *(int *)(*(longlong *)(param_1 + 0xb30) + 0xa0) <= iVar3;
    }
  }
  return false;
}



// FUNCTION 140f29000 FUN_140f29000 body=298 status=ok
// SIG undefined FUN_140f29000(void)

undefined8 * FUN_140f29000(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  char cVar2;
  wchar_t *pwVar3;
  
  if (*(char *)(param_1 + 0x328) != '\0') {
    *param_2 = 0;
    param_2[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"focused",0x10);
    return param_2;
  }
  cVar2 = ULowEntryExtendedStandardLibrary::ByteToBoolean(param_3);
  if (cVar2 != '\0') {
    cVar2 = AGameSession::RequiresPushToTalk(param_1);
    if (cVar2 == '\x01') {
      *param_2 = 0;
      param_2[1] = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      FGenericPlatformString::Memcpy(*param_2,L"lockedUp",0x12);
      return param_2;
    }
  }
  cVar2 = FUN_14208d2d0(param_1,param_1 + 0x318,L"lockedSlot");
  if (cVar2 != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x318);
    cVar2 = AGameSession::RequiresPushToTalk(param_1);
    pwVar3 = L"off";
    if (cVar2 == '\x01') {
      pwVar3 = L"default";
    }
    FUN_14203e030(uVar1,pwVar3);
  }
  FUN_142eb2df0(param_1,param_2,param_3);
  return param_2;
}



// FUNCTION 140f29130 FUN_140f29130 body=564 status=ok
// SIG undefined FUN_140f29130(void)

void FUN_140f29130(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_50 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xb70) != &local_58) {
    *(undefined8 *)(param_1 + 0xb70) = 0;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb78,&local_50);
    plVar5 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  local_40 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xb80) != &local_48) {
    *(undefined8 *)(param_1 + 0xb80) = 0;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb88,&local_40);
    plVar5 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  local_30 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xae8) != &local_38) {
    *(undefined8 *)(param_1 + 0xae8) = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xaf0,&local_30);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xaf8) != &local_28) {
    *(undefined8 *)(param_1 + 0xaf8) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb00,&local_20);
    plVar5 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xb08) != &local_18) {
    *(undefined8 *)(param_1 + 0xb08) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb10,&local_10);
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  FUN_142eb3890(param_1);
  return;
}



// FUNCTION 140f29370 FUN_140f29370 body=366 status=ok
// SIG undefined FUN_140f29370(void)

void FUN_140f29370(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_30 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x668) != &local_38) {
    *(undefined8 *)(param_1 + 0x668) = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x670,&local_30);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x678) != &local_28) {
    *(undefined8 *)(param_1 + 0x678) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x680,&local_20);
    plVar5 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x688) != &local_18) {
    *(undefined8 *)(param_1 + 0x688) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x690,&local_10);
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  FUN_142084500(param_1);
  return;
}



// FUNCTION 140f294e0 FUN_140f294e0 body=43 status=ok
// SIG undefined FUN_140f294e0(void)

void FUN_140f294e0(longlong param_1)

{
  FUN_142eb3890();
  FUN_140ee38f0(param_1 + 0xa80);
  FUN_140ee38f0(param_1 + 0xc18);
  return;
}



// FUNCTION 140f29510 FUN_140f29510 body=63 status=ok
// SIG undefined FUN_140f29510(void)

void FUN_140f29510(longlong param_1)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  FUN_142eb3990();
  if (*(char *)(param_1 + 0x868) != '\0') {
    local_10 = *(undefined8 *)(param_1 + 0x680);
    local_18[0] = 9;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x550,local_18);
  }
  return;
}



// FUNCTION 140f29550 FUN_140f29550 body=550 status=ok
// SIG undefined FUN_140f29550(void)

undefined1 FUN_140f29550(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 local_198;
  undefined8 local_190;
  code *local_188 [2];
  undefined1 local_178 [32];
  undefined8 local_158;
  undefined4 local_148;
  longlong *local_138;
  undefined1 local_130 [280];
  
  uVar7 = 0;
  if (((char)param_1[0x138] != '\0') &&
     (plVar2 = (longlong *)FWeakObjectPtr::Get((longlong)param_1 + 0x9c4), plVar2 == param_2)) {
    FUN_140f29a60(param_1,1);
  }
  if ((param_2 != (longlong *)0x0) && (lVar3 = FUN_140e97230(param_1), lVar3 != 0)) {
    lVar4 = (**(code **)(*param_2 + 0x340))(param_2);
    if ((*(int *)(lVar4 + 0xd8) != -1) &&
       (plVar2 = (longlong *)FUN_140f2b5e0(param_1), plVar2 != (longlong *)0x0)) {
      cVar1 = (**(code **)(*plVar2 + 0x478))(plVar2,lVar4 + 0x98);
      if (cVar1 == '\0') {
        plVar2 = (longlong *)FWeakObjectPtr::Get(lVar4 + 0xdc);
        uVar6 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
        lVar3 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar6);
        if (lVar3 != 0) {
          uVar6 = FUN_140e971d0(param_1);
          FUN_140ab72e0(uVar6,3);
        }
      }
      else if (*(char *)(lVar4 + 0xc0) == '\0') {
        local_138 = param_1;
        FUN_140e9a4f0(local_130,lVar4);
        local_158 = 0;
        local_148 = 0;
        puVar5 = (undefined8 *)FUN_140438ef0(0x120,local_178);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &PTR_FUN_14461b878;
          puVar5[1] = local_138;
          FUN_140e9a4f0(puVar5 + 2,local_130);
        }
        local_188[0] = FUN_140f26b80;
        FUN_14204c280(local_188);
        FUN_140e9c360(local_130);
        FUN_14109ed60(param_1);
        FUN_140c3dc20(lVar3,(int *)(lVar4 + 0xd8));
        uVar7 = 1;
        local_198 = 0;
        local_190 = 0;
        (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872880,&local_198);
        lVar3 = (**(code **)(*param_2 + 0x370))(param_2);
        if (lVar3 == 0) {
          if (param_1[0x14f] != 0) {
            FUN_140f43640();
          }
        }
        else if (param_1[0x14e] != 0) {
          FUN_140f43640();
        }
      }
      else {
        FUN_140f50850(param_1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 140f29780 FUN_140f29780 body=323 status=ok
// SIG undefined FUN_140f29780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f29780(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FWeakObjectPtr::operator=(&local_c8,*(undefined8 *)(param_1 + 0x630));
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_c8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_c4;
  }
  local_b8[0] = &LAB_140f26d60;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f298d0 FUN_140f298d0 body=388 status=ok
// SIG undefined FUN_140f298d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f298d0(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [80];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  plVar6 = (longlong *)param_2[1];
  param_1 = param_1 + -0x6a8;
  uVar5 = *param_2;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x28,local_78);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_14461b8c0;
    puVar4[1] = param_1;
    puVar4[2] = uVar5;
    puVar4[3] = plVar6;
    *(undefined1 *)(puVar4 + 4) = param_3;
    plVar6 = (longlong *)0x0;
  }
  local_88[0] = &LAB_140f26a90;
  uVar5 = FUN_1420849a0(param_1,local_d8,local_88);
  FUN_14208c4f0(param_1,uVar5);
  if (local_48 != 0) {
    plVar7 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar7 = local_58;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  plVar6 = (longlong *)param_2[1];
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



// FUNCTION 140f29a60 FUN_140f29a60 body=998 status=ok
// SIG undefined FUN_140f29a60(void)

void FUN_140f29a60(longlong param_1,char param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  BOOL BVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  pcVar1 = (char *)(param_1 + 0x9c0);
  LOCK();
  *(undefined4 *)(param_1 + 0xfb8) = 1;
  UNLOCK();
  cVar5 = *pcVar1;
  if (param_2 == '\0') goto LAB_140f29c2d;
  if (cVar5 == '\x01') {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x9c4);
    local_50 = 0;
    local_58 = lVar7;
    if (lVar7 != 0) {
      uVar8 = UBlendableInterface::GetPrivateStaticClass();
      local_50 = UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar8);
    }
    FUN_142ed36d0(param_1,&local_58,0);
    BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
    if (BVar6 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
    }
    lVar7 = 0xc18;
    if (*(char *)(param_1 + 0xe31) != '\x01') {
      lVar7 = 0xa80;
    }
    FUN_140f0b090(lVar7 + param_1,0xffffffff,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
    goto LAB_140f29c2d;
  }
  if (cVar5 != '\x02') goto LAB_140f29c2d;
  lVar12 = 0xc18;
  lVar7 = 0xc18;
  if (*(char *)(param_1 + 0xe31) != '\x01') {
    lVar7 = 0xa80;
  }
  cVar4 = FUN_140ee10a0(lVar7 + param_1);
  if (cVar4 == '\0') goto LAB_140f29c2d;
  LOCK();
  iVar3 = *(int *)(param_1 + 0xf98);
  *(int *)(param_1 + 0xf98) = 0;
  UNLOCK();
  if (iVar3 == 0) {
    LOCK();
    iVar3 = *(int *)(param_1 + 0xf9c);
    *(int *)(param_1 + 0xf9c) = 0;
    UNLOCK();
    if (iVar3 != 0) {
      uVar8 = 1;
      goto LAB_140f29b99;
    }
  }
  else {
    LOCK();
    *(undefined4 *)(param_1 + 0xf9c) = 0;
    UNLOCK();
    uVar8 = 0;
LAB_140f29b99:
    FUN_140f47890(param_1,uVar8);
  }
  lVar7 = 0xc18;
  if (*(char *)(param_1 + 0xe31) != '\x01') {
    lVar7 = 0xa80;
  }
  FUN_140f089d0(lVar7 + param_1);
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
  }
  plVar9 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x9c4);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x338))(plVar9,0,0);
  }
  uVar8 = FWeakObjectPtr::Get(param_1 + 0x9c4);
  if (*(char *)(param_1 + 0xe31) != '\x01') {
    lVar12 = 0xa80;
  }
  FUN_140f0b0b0(param_1 + lVar12,uVar8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
LAB_140f29c2d:
  if (*(longlong *)(param_1 + 0xdb0) != 0) {
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0xdb0) + 0x170);
    (**(code **)(*plVar9 + 0x38))(plVar9,1);
  }
  uVar8 = FUN_140f2b5e0(param_1);
  FUN_140f2b510(pcVar1,uVar8);
  plVar9 = *(longlong **)(param_1 + 0xa00);
  plVar11 = plVar9 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
  do {
    if (plVar9 == plVar11) {
      plVar9 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x9c4);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x338))(plVar9,0,0);
      }
      *pcVar1 = '\0';
      *(undefined4 *)(param_1 + 0x9c4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x9c8) = 0;
      *(undefined4 *)(param_1 + 0x9cc) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x9d0) = 0;
      if (cVar5 == '\x01') {
        FUN_140f47890(param_1,0);
      }
      LOCK();
      *(undefined4 *)(param_1 + 0xfb4) = 1;
      UNLOCK();
      LOCK();
      *(undefined4 *)(param_1 + 0x9f0) = 1;
      UNLOCK();
      LOCK();
      *(undefined4 *)(param_1 + 0x588) = 1;
      UNLOCK();
      LOCK();
      *(undefined4 *)(param_1 + 0x9ec) = 1;
      UNLOCK();
      local_48 = 0;
      FWeakObjectPtr::operator=(&local_44,0);
      FWeakObjectPtr::operator=(&local_3c,0);
      cVar5 = FWeakObjectPtr::IsValid(&local_44);
      if (cVar5 != '\0') {
        plVar9 = (longlong *)FWeakObjectPtr::Get(&local_44);
        lVar7 = (**(code **)(*plVar9 + 0x340))(plVar9);
        cVar5 = FWeakObjectPtr::IsValid(lVar7 + 0xdc);
        if (cVar5 == '\0') {
          cVar5 = FWeakObjectPtr::IsValid(lVar7 + 0x5c);
          if (cVar5 != '\0') {
            local_3c = *(undefined4 *)(lVar7 + 0x5c);
            local_38 = *(undefined4 *)(lVar7 + 0x60);
          }
        }
        else {
          local_3c = *(undefined4 *)(lVar7 + 0xdc);
          local_38 = *(undefined4 *)(lVar7 + 0xe0);
        }
      }
      *(undefined1 *)(param_1 + 0xea4) = local_48;
      *(undefined4 *)(param_1 + 0xea8) = local_44;
      *(undefined4 *)(param_1 + 0xeac) = local_40;
      *(undefined4 *)(param_1 + 0xeb0) = local_3c;
      *(undefined4 *)(param_1 + 0xeb4) = local_38;
      return;
    }
    if ((longlong *)*plVar9 == (longlong *)0x0) {
LAB_140f29ca4:
      if (plVar9[1] != 0) {
        plVar10 = (longlong *)(plVar9[1] + 0x170);
        (**(code **)(*plVar10 + 0x38))(plVar10,1);
        puVar2 = (undefined8 *)(plVar9[1] + 0x2d8);
        cVar4 = FUN_14208d2d0(plVar9[1],puVar2,L"invalidSlot");
        if (cVar4 != '\0') {
          FUN_14203e4e0(*puVar2);
        }
      }
    }
    else {
      cVar4 = (**(code **)(*(longlong *)*plVar9 + 0x388))();
      if (cVar4 != '\x01') {
        (**(code **)(*(longlong *)*plVar9 + 0x360))((longlong *)*plVar9,0);
        goto LAB_140f29ca4;
      }
    }
    plVar9 = plVar9 + 0x1b;
  } while( true );
}



// FUNCTION 140f29e50 FUN_140f29e50 body=924 status=ok
// SIG undefined FUN_140f29e50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f29e50(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  ulonglong *puStack_f0;
  longlong local_e8 [3];
  longlong local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [16];
  undefined4 local_60 [2];
  longlong local_58;
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0xae0) != 0) {
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0xae0) + 0x170);
    (**(code **)(*plVar8 + 0x38))(plVar8,1);
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xdb0);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0xdb0);
    iVar4 = *(int *)(lVar5 + 0x17c);
    if (*(longlong *)(param_1 + 0xac0) != 0) {
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0xac0) + 0x170);
      (**(code **)(*plVar8 + 0x38))(plVar8,0 < iVar4);
    }
    puVar6 = (undefined8 *)FTextFormat::FTextFormat(local_70,param_1 + 0xca0);
    local_60[0] = 0;
    local_f8 = local_60;
    local_38 = '\0';
    puStack_f0 = &local_30;
    local_e8[2] = *puVar6;
    local_d0 = puVar6[1];
    if (local_d0 != 0) {
      LOCK();
      *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
      UNLOCK();
    }
    local_58 = (longlong)iVar4;
    local_a8 = local_f8;
    uStack_a0 = puStack_f0;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_98,&local_a8);
    uVar7 = FText::Format(local_88,local_e8 + 2,uVar7);
    FText::FText(local_c8,uVar7);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_80 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_98);
    if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_48 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    plVar8 = (longlong *)puVar6[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x758) != 0) && (*(longlong *)(param_1 + 0x760) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x760) + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x750,local_c8,1,0);
      }
    }
    if ((*(longlong *)(param_1 + 0x770) != 0) && (*(longlong *)(param_1 + 0x778) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x778) + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x768,local_c8,1,0);
      }
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_c0 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0xb90) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xb90) + 0x338);
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x30), lVar5 != 0)) {
      FUN_140f4e560(param_1,lVar5,0);
    }
    local_e8[0] = 0;
    local_e8[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
    FGenericPlatformString::Memcpy(local_e8[0],L"default",0x10);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0xb90),local_e8);
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0xb90) = 0;
  }
  if (*(char *)(param_1 + 0xdc8) == '\x06') {
    if (*(longlong *)(param_1 + 0xa88) != 0) {
      local_f8 = (undefined4 *)0x0;
      puStack_f0 = (ulonglong *)0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
      FGenericPlatformString::Memcpy(local_f8,L"acceptAnim",0x16);
      FUN_142088910(*(undefined8 *)(param_1 + 0xa88),&local_f8);
      if (local_f8 != (undefined4 *)0x0) {
        FMemory::Free();
      }
    }
  }
  else {
    LOCK();
    *(undefined4 *)(param_1 + 0xde4) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140f2a1f0 FUN_140f2a1f0 body=169 status=ok
// SIG undefined FUN_140f2a1f0(void)

void FUN_140f2a1f0(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined8 local_res8;
  
  lVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 0xf68));
  if (lVar3 != 0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCurrentWeaponAmmoCountChanged",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    lVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 0xf68));
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar3 + 400,param_1,local_res8);
    FUN_14170c210(param_1 + 0xf68,0);
  }
  return;
}



// FUNCTION 140f2a2a0 FUN_140f2a2a0 body=163 status=ok
// SIG undefined FUN_140f2a2a0(void)

void FUN_140f2a2a0(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  plVar3 = (longlong *)param_1[0xca];
  uVar4 = (longlong)(int)param_1[0xcb] & 0x1fffffffffffffff;
  if (plVar3 + (int)param_1[0xcb] < plVar3) {
    uVar4 = uVar2;
  }
  if (uVar4 != 0) {
    do {
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        FWeakObjectPtr::operator=(lVar1 + 0x1f0,0);
        FUN_140f54bc0(lVar1);
      }
      plVar3 = plVar3 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000140f2a33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x580))(param_1,1);
  return;
}



// FUNCTION 140f2a350 FUN_140f2a350 body=460 status=ok
// SIG undefined FUN_140f2a350(void)

void FUN_140f2a350(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong local_18;
  undefined8 uStack_10;
  
  if (*(longlong *)(param_1 + 0xa10) != 0) {
    if (*(longlong *)(param_1 + 0xdb0) != 0) {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0xdb0) + 0x170);
      (**(code **)(*plVar4 + 0x38))(plVar4,1);
    }
    uVar3 = FUN_140f2b5e0(param_1);
    FUN_140f2b510(param_1 + 0x9c0,uVar3);
    plVar4 = *(longlong **)(param_1 + 0xa00);
    plVar7 = plVar4 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
    for (; plVar4 != plVar7; plVar4 = plVar4 + 0x1b) {
      if ((longlong *)*plVar4 == (longlong *)0x0) {
LAB_140f2a3e8:
        if (plVar4[1] != 0) {
          plVar5 = (longlong *)(plVar4[1] + 0x170);
          (**(code **)(*plVar5 + 0x38))(plVar5,1);
          puVar1 = (undefined8 *)(plVar4[1] + 0x2d8);
          cVar2 = FUN_14208d2d0(plVar4[1],puVar1,L"invalidSlot");
          if (cVar2 != '\0') {
            FUN_14203e4e0(*puVar1);
          }
        }
      }
      else {
        cVar2 = (**(code **)(*(longlong *)*plVar4 + 0x388))();
        if (cVar2 != '\x01') {
          (**(code **)(*(longlong *)*plVar4 + 0x360))((longlong *)*plVar4,0);
          goto LAB_140f2a3e8;
        }
      }
    }
    if (*(char *)(param_1 + 0xe91) == '\0') {
      lVar6 = *(longlong *)(param_1 + 0xa10);
      local_18 = lVar6;
      if (lVar6 == 0) {
        uStack_10 = 0;
      }
      else {
        uVar3 = UBlendableInterface::GetPrivateStaticClass();
        uStack_10 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar3);
      }
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0xdb0);
      if (lVar6 == 0) {
        uStack_10 = 0;
        local_18 = lVar6;
      }
      else {
        local_18 = lVar6;
        uVar3 = UBlendableInterface::GetPrivateStaticClass();
        uStack_10 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar3);
      }
      FUN_142ed36d0(param_1,&local_18,0);
      local_18 = 0;
      uStack_10 = 0;
    }
    FUN_142ed36d0(param_1,&local_18,0);
    lVar6 = 0xc18;
    if (*(char *)(param_1 + 0xe31) != '\x01') {
      lVar6 = 0xa80;
    }
    FUN_140f0b090(lVar6 + param_1,0xffffffff,0);
    lVar6 = *(longlong *)(param_1 + 0xa10);
    *(undefined1 *)(lVar6 + 0x328) = 0;
    FUN_142ecf920(lVar6,0);
    *(undefined8 *)(param_1 + 0xa10) = 0;
  }
  return;
}



// FUNCTION 140f2a520 FUN_140f2a520 body=543 status=ok
// SIG undefined FUN_140f2a520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f2a520(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined1 local_1f0 [280];
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  if (((param_2 != (longlong *)0x0) &&
      (local_38 = DAT_1468387a8 ^ (ulonglong)auStack_228, param_3 != (longlong *)0x0)) &&
     (lVar1 = (**(code **)(*param_3 + 0x370))(param_3), lVar1 != 0)) {
    uVar2 = (**(code **)(*param_2 + 0x340))(param_2);
    local_204 = 0xffffffff;
    FUN_14170c210(&local_204,lVar1);
    local_208 = 0xffffffff;
    FUN_14170c210(&local_208,param_3);
    local_1f8 = local_208;
    local_1f4 = local_204;
    local_208 = 0xffffffff;
    local_204 = 0xffffffff;
    local_200 = param_1;
    FUN_140e9a4f0(local_1f0,uVar2);
    local_a8 = (longlong *)0x0;
    local_98 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x128,local_c8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_14461b848;
      puVar3[1] = local_200;
      *(undefined4 *)(puVar3 + 2) = local_1f8;
      local_1f8 = 0xffffffff;
      *(undefined4 *)((longlong)puVar3 + 0x14) = local_1f4;
      local_1f4 = 0xffffffff;
      FUN_140e9a4f0(puVar3 + 3,local_1f0);
    }
    local_d8[0] = &LAB_140f26c20;
    uVar2 = FUN_1420849a0(param_1,local_88,local_d8);
    FUN_14208c260(param_1,uVar2);
    if (local_48 != 0) {
      plVar4 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar4 = local_58;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      plVar4 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar4 = local_a8;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_140e9c360(local_1f0);
    FUN_1416f8340(local_1f4);
    FUN_1416f8340(local_1f8);
    FUN_1416f8340(local_208);
    FUN_1416f8340(local_204);
  }
  return;
}



// FUNCTION 140f2a740 FUN_140f2a740 body=84 status=ok
// SIG undefined FUN_140f2a740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f2a740(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_20 = 1;
  local_28 = param_2;
  plVar1 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x208))(plVar1,*(undefined8 *)(param_1 + 8),&local_28);
  return;
}



// FUNCTION 140f2a7a0 Execute body=64 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,AOCDroneManager,TTypeWrapper<void>___cdecl(AOCBuildingTile_const_&___ptr64,float)>
     ::Execute(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140f2a7dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3);
  return;
}



// FUNCTION 140f2a7e0 FUN_140f2a7e0 body=80 status=ok
// SIG undefined FUN_140f2a7e0(void)

void FUN_140f2a7e0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140f2a82d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140f2a830 FUN_140f2a830 body=157 status=ok
// SIG undefined FUN_140f2a830(void)

undefined8 *
FUN_140f2a830(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong local_18 [2];
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  puVar2 = (undefined8 *)
           (**(code **)(param_1 + 0x10))
                     ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,local_18,param_3,param_4);
  *param_2 = 0;
  *param_2 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140f2a8d0 FUN_140f2a8d0 body=125 status=ok
// SIG undefined FUN_140f2a8d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_140f2a8d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar1 != '\0') {
    local_20 = 1;
    local_28 = param_2;
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x18);
    (**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(param_1 + 8),&local_28);
  }
  return cVar1 != '\0';
}



// FUNCTION 140f2a950 ExecuteIfSafe body=91 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,AOCDroneManager,void___cdecl(AOCBuildingTile_const_&___ptr64,float)>
::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140f2a9b0 FUN_140f2a9b0 body=107 status=ok
// SIG undefined FUN_140f2a9b0(void)

undefined1 FUN_140f2a9b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140f2aa70 FUN_140f2aa70 body=677 status=ok
// SIG undefined FUN_140f2aa70(void)

undefined8 FUN_140f2aa70(longlong param_1,longlong param_2,undefined8 param_3)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  undefined1 local_158 [32];
  undefined1 local_138 [168];
  longlong local_90;
  undefined1 local_5c [68];
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
  cVar5 = FUN_142d52a00(param_3);
  if (cVar5 == '\0') {
    return 0;
  }
  bVar4 = false;
  lVar6 = FUN_140e97230(param_1);
  if (lVar6 == 0) goto LAB_140f2ac59;
  FUN_140ed0240(local_138);
  plVar7 = (longlong *)FUN_140f2b2d0(param_1);
  if (plVar7 != (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 0x340))(plVar7);
    FUN_140e9cc60(local_138,uVar8);
  }
  cVar5 = FWeakObjectPtr::IsValid(local_5c);
  if (cVar5 != '\0') {
    lVar6 = FWeakObjectPtr::Get(local_5c);
    if (lVar6 != 0) {
      lVar9 = FUN_1430b3b80();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar6 = FWeakObjectPtr::Get(local_5c);
        if (lVar6 == 0) {
LAB_140f2abb8:
          lVar6 = 0;
        }
        else {
          lVar9 = FUN_1430b3b80();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_140f2abb8;
        }
        plVar7 = (longlong *)
                 (**(code **)(*(longlong *)(lVar6 + 0x460) + 0x10))((longlong *)(lVar6 + 0x460),0);
        if (plVar7 != (longlong *)0x0) {
          uVar8 = (**(code **)(*plVar7 + 0x458))(plVar7,local_158);
          cVar5 = FUN_142d529c0(uVar8,param_3);
          if (cVar5 != '\0') {
            bVar4 = true;
          }
        }
        goto LAB_140f2ac23;
      }
    }
    if ((*(longlong *)(param_1 + 0x6b8) != 0) && (*(longlong *)(param_1 + 0x6b8) == local_90)) {
      bVar4 = false;
      if (param_2 == *(longlong *)(param_1 + 0x798)) {
        bVar4 = true;
      }
    }
  }
LAB_140f2ac23:
  FUN_140e9c360(local_138);
  if (bVar4) {
    uVar8 = FUN_142d52a20(param_3);
    uVar8 = FArchive::operator<<(uVar8);
    FUN_142d5fed0(uVar8);
    if (extraout_XMM0_Da == 0.0) {
      return 2;
    }
    return 1;
  }
LAB_140f2ac59:
  uVar8 = FUN_142d52a20(param_3);
  lVar6 = FArchive::operator<<(uVar8);
  fVar1 = *(float *)(lVar6 + 0x20);
  uVar8 = FUN_142d52a20(param_3);
  uVar8 = FArchive::operator<<(uVar8);
  FUN_142d5fed0(uVar8);
  if (extraout_XMM0_Da_00 < fVar1) {
    uVar8 = FUN_142d52a20(param_3);
    uVar8 = FArchive::operator<<(uVar8);
    FUN_142d5fed0(uVar8);
    if (extraout_XMM0_Da_01 == 0.0) {
      uVar8 = 4;
    }
    else {
      if (lVar2 != 0) {
        fVar1 = *(float *)(lVar2 + 0x238);
        uVar8 = FUN_142d52a20(param_3);
        uVar8 = FArchive::operator<<(uVar8);
        FUN_142d5fea0(uVar8);
        if (extraout_XMM0_Da_02 < fVar1) {
          return 3;
        }
      }
      uVar8 = 0;
    }
  }
  else {
    uVar8 = 5;
  }
  return uVar8;
}



// FUNCTION 140f2ad20 FUN_140f2ad20 body=90 status=ok
// SIG undefined FUN_140f2ad20(void)

longlong FUN_140f2ad20(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xc);
  if (lVar2 != 0) {
    lVar3 = FUN_1428dfc70();
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
  return 0;
}



// FUNCTION 140f2ad80 FUN_140f2ad80 body=90 status=ok
// SIG undefined FUN_140f2ad80(void)

longlong FUN_140f2ad80(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xc);
  if (lVar2 != 0) {
    lVar3 = FUN_1414ecd30();
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
  return 0;
}



// FUNCTION 140f2ade0 FUN_140f2ade0 body=362 status=ok
// SIG undefined FUN_140f2ade0(void)

longlong * FUN_140f2ade0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((*(longlong *)(param_1 + 0x338) != 0) && (*(longlong *)(param_1 + 0x340) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x340) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) goto LAB_140f2aebe;
  }
  puVar5 = (undefined8 *)FUN_142085870(param_1,local_28,L"bgColor");
  *(undefined8 *)(param_1 + 0x338) = *puVar5;
  plVar2 = (longlong *)puVar5[1];
  plVar6 = *(longlong **)(param_1 + 0x340);
  if (plVar2 != plVar6) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x340);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    *(longlong **)(param_1 + 0x340) = plVar2;
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
LAB_140f2aebe:
  plVar2 = *(longlong **)(param_1 + 0x340);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        if (plVar2 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x338) != 0) {
            *param_2 = *(longlong *)(param_1 + 0x338);
            param_2[1] = (longlong)plVar2;
            return param_2;
          }
          LOCK();
          plVar6 = plVar2 + 1;
          lVar3 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
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
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140f2af50 FUN_140f2af50 body=72 status=ok
// SIG undefined FUN_140f2af50(void)

undefined8 FUN_140f2af50(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  FUN_140f53570(param_1,param_4);
  (**(code **)(*param_1 + 0x308))(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 140f2afa0 FUN_140f2afa0 body=773 status=ok
// SIG undefined FUN_140f2afa0(void)

undefined8 *
FUN_140f2afa0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  
  cVar2 = FUN_142eb5ad0();
  if ((cVar2 == '\x01') &&
     (cVar2 = ULowEntryExtendedStandardLibrary::ByteToBoolean(param_4), cVar2 != '\0')) {
    *param_2 = 0;
    param_2[1] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"checkedUp",0x14);
    return param_2;
  }
  if ((((*(char *)((longlong)param_1 + 0x6b2) == '\0') ||
       (*(char *)((longlong)param_1 + 0x35e) == '\0')) ||
      (cVar2 = FUN_142eb5ad0(param_1), cVar2 == '\x01')) ||
     (cVar2 = AGameSession::RequiresPushToTalk(param_1), cVar2 == '\x01')) {
LAB_140f2b1ba:
    cVar2 = ULowEntryExtendedStandardLibrary::ByteToBoolean(param_4);
    if ((cVar2 == '\0') || ((char)param_1[0xcb] != '\x01')) {
      cVar2 = ULowEntryExtendedStandardLibrary::ByteToBoolean(param_4);
      if ((cVar2 == '\0') && (*(char *)((longlong)param_1 + 0x6b1) == '\0')) {
        (**(code **)(*param_1 + 0x308))(param_1,param_2,param_4);
        return param_2;
      }
      if ((*(char *)((longlong)param_1 + 0x659) == '\0') &&
         (cVar2 = UNF_CustomizationStatics::IsWeaponType(param_4), cVar2 == '\0')) {
        *param_2 = 0;
        param_2[1] = 9;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
        lVar7 = 0x12;
        pwVar8 = L"disabled";
      }
      else {
        *param_2 = 0;
        param_2[1] = 0x10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
        lVar7 = 0x20;
        pwVar8 = L"focusedDisabled";
      }
    }
    else {
      *param_2 = 0;
      param_2[1] = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      lVar7 = 0x12;
      pwVar8 = L"lockedUp";
    }
  }
  else {
    cVar2 = FUN_142ebdd00(param_4);
    cVar3 = FUN_142ebdcf0(param_4);
    cVar4 = FUN_142ebdcd0(param_4);
    cVar5 = ULowEntryExtendedStandardLibrary::ByteToBoolean(param_4);
    if ((cVar5 == '\0') && (*(char *)((longlong)param_1 + 0x6b1) == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    cVar5 = UNF_CustomizationStatics::IsWeaponType(param_4);
    if (cVar2 == '\0') {
      if (cVar3 == '\0') {
        if (cVar4 == '\0') {
          if (!bVar1) goto LAB_140f2b1ba;
          pwVar8 = L"trashDisabled";
          if (cVar5 != '\0') {
            pwVar8 = L"trashFocusedDisabled";
          }
          *param_2 = 0;
          param_2[1] = 0;
          if (*pwVar8 == L'\0') {
            return param_2;
          }
          lVar7 = -1;
          do {
            lVar7 = lVar7 + 1;
          } while (pwVar8[lVar7] != L'\0');
        }
        else {
          pwVar8 = L"trashDown";
          if (cVar5 != '\0') {
            pwVar8 = L"trashFocusedDown";
          }
          *param_2 = 0;
          param_2[1] = 0;
          if (*pwVar8 == L'\0') {
            return param_2;
          }
          lVar7 = -1;
          do {
            lVar7 = lVar7 + 1;
          } while (pwVar8[lVar7] != L'\0');
        }
      }
      else {
        pwVar8 = L"trashOver";
        if (cVar5 != '\0') {
          pwVar8 = L"trashFocusedOver";
        }
        *param_2 = 0;
        param_2[1] = 0;
        if (*pwVar8 == L'\0') {
          return param_2;
        }
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (pwVar8[lVar7] != L'\0');
      }
    }
    else {
      pwVar8 = L"trashUp";
      if (cVar5 != '\0') {
        pwVar8 = L"trashFocusedUp";
      }
      *param_2 = 0;
      param_2[1] = 0;
      if (*pwVar8 == L'\0') {
        return param_2;
      }
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (pwVar8[lVar7] != L'\0');
    }
    iVar6 = (int)lVar7 + 1;
    *(int *)(param_2 + 1) = iVar6;
    if (0 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    lVar7 = (longlong)iVar6 * 2;
  }
  FGenericPlatformString::Memcpy(*param_2,pwVar8,lVar7);
  return param_2;
}



// FUNCTION 140f2b2b0 FUN_140f2b2b0 body=24 status=ok
// SIG undefined FUN_140f2b2b0(void)

longlong FUN_140f2b2b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0xc18;
  if (*(char *)(param_1 + 0xe31) != '\x01') {
    lVar1 = param_1 + 0xa80;
  }
  return lVar1;
}



// FUNCTION 140f2b2d0 FUN_140f2b2d0 body=315 status=ok
// SIG undefined FUN_140f2b2d0(void)

longlong FUN_140f2b2d0(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  cVar2 = FUN_140f31c30();
  if (cVar2 == '\0') {
    lVar5 = FUN_142eb65a0(param_1);
    plVar6 = *(longlong **)(param_1 + 0xa00);
    plVar7 = plVar6 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
    while( true ) {
      if (plVar6 == plVar7) {
        return 0;
      }
      if ((lVar5 != 0) && (lVar5 == *plVar6)) break;
      plVar6 = plVar6 + 0x1b;
    }
    lVar5 = FUN_142eb65a0(param_1);
    if (lVar5 != 0) {
      lVar4 = FUN_1413565b0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return lVar5;
      }
    }
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xf18);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  lVar5 = 0xc18;
  if (*(char *)(param_1 + 0xe31) != '\x01') {
    lVar5 = 0xa80;
  }
  lVar5 = FUN_140ee71c0(lVar5 + param_1);
  if (lVar5 != 0) {
    lVar4 = FUN_1413565b0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140f2b364;
  }
  lVar5 = 0;
LAB_140f2b364:
  LeaveCriticalSection(lpCriticalSection);
  return lVar5;
}



// FUNCTION 140f2b410 FUN_140f2b410 body=151 status=ok
// SIG undefined FUN_140f2b410(void)

undefined8 FUN_140f2b410(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar2 = FUN_140f2b2d0();
  if (lVar2 != 0) {
    lVar3 = FUN_142eb65a0(param_1);
    plVar6 = *(longlong **)(param_1 + 0xa00);
    plVar4 = plVar6 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
    for (; plVar6 != plVar4; plVar6 = plVar6 + 0x1b) {
      if ((lVar3 != 0) && (lVar3 == *plVar6)) {
        uVar5 = 1;
        goto LAB_140f2b48c;
      }
    }
    cVar1 = FUN_140f31c30(param_1);
    if (cVar1 != '\0') {
      uVar5 = 2;
      goto LAB_140f2b48c;
    }
  }
  lVar2 = 0;
  uVar5 = 0;
LAB_140f2b48c:
  FUN_140f16950(param_2,uVar5,lVar2);
  return param_2;
}



// FUNCTION 140f2b4b0 FUN_140f2b4b0 body=85 status=ok
// SIG undefined FUN_140f2b4b0(void)

longlong FUN_140f2b4b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa00);
  lVar3 = (longlong)*(int *)(param_1 + 0xa08) * 0xd8 + lVar1;
  if (lVar1 != lVar3) {
    do {
      lVar2 = *(longlong *)(lVar1 + 8) + 0x170;
      if (*(longlong *)(lVar1 + 8) == 0) {
        lVar2 = 0;
      }
      if (param_2 == lVar2) {
        return lVar1;
      }
      lVar1 = lVar1 + 0xd8;
    } while (lVar1 != lVar3);
  }
  return 0;
}



// FUNCTION 140f2b510 FUN_140f2b510 body=200 status=ok
// SIG undefined FUN_140f2b510(void)

undefined8 FUN_140f2b510(char *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_88 [64];
  undefined1 local_48 [64];
  
  if (*param_1 == '\x01') {
    param_1 = param_1 + 4;
    cVar1 = FWeakObjectPtr::IsValid(param_1);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
      lVar3 = (**(code **)(*plVar2 + 0x370))(plVar2);
      if (lVar3 != 0) {
        plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
        lVar3 = (**(code **)(*plVar2 + 0x370))(plVar2);
        return *(undefined8 *)(lVar3 + 0x70);
      }
    }
  }
  else if (*param_1 == '\x02') {
    lVar3 = FUN_140f2ad20();
    if ((lVar3 != 0) && (param_2 != 0)) {
      lVar3 = FUN_142ffbee0(param_2,local_88,lVar3);
      return *(undefined8 *)(lVar3 + 0x10);
    }
    lVar3 = FUN_142fde440(local_48,0,0,1,0,0);
    return *(undefined8 *)(lVar3 + 0x10);
  }
  return 0;
}



// FUNCTION 140f2b5e0 FUN_140f2b5e0 body=170 status=ok
// SIG undefined FUN_140f2b5e0(void)

longlong FUN_140f2b5e0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x594);
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = FUN_1413f82e0();
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
    lVar2 = (**(code **)(*(longlong *)(lVar2 + 0xd80) + 0x18))();
    if (lVar2 != 0) {
      lVar3 = ANavLinkProxy::GetPrivateStaticClass();
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



// FUNCTION 140f2b6a0 FUN_140f2b6a0 body=479 status=ok
// SIG undefined FUN_140f2b6a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_140f2b6a0(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_728 [40];
  undefined4 local_700;
  undefined4 local_6fc;
  longlong *local_6f0;
  longlong local_6e0;
  undefined4 local_6d8;
  undefined4 local_6d4;
  longlong *local_6c8;
  longlong local_6b8;
  undefined1 local_6a8 [72];
  longlong local_660;
  longlong local_60;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_728;
  FUN_140f2bbd0(param_1,local_6a8,param_4);
  if ((param_3 == 0) || (*(longlong *)(param_1 + 0xa40) == 0)) {
    puVar7 = (undefined4 *)FUN_1411c87b0(&local_700);
    bVar5 = false;
    bVar4 = true;
  }
  else {
    puVar7 = (undefined4 *)
             FUN_1411e2a40(*(longlong *)(param_1 + 0xa40),&local_6d8,param_3,local_6a8);
    bVar4 = false;
    bVar5 = true;
  }
  *param_2 = *puVar7;
  *puVar7 = 0xffffffff;
  param_2[1] = puVar7[1];
  puVar7[1] = 0xffffffff;
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(puVar7 + 2);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar7 + 4);
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  param_2[6] = puVar7[6];
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(puVar7 + 8);
  *(undefined8 *)(puVar7 + 8) = 0;
  if (bVar4) {
    if (local_6e0 != 0) {
      LOCK();
      piVar1 = (int *)(local_6e0 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    if (local_6f0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_6f0 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_6f0)(local_6f0);
        LOCK();
        piVar1 = (int *)((longlong)local_6f0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_6f0 + 8))(local_6f0,1);
        }
      }
    }
    FUN_1416f8340(local_6fc);
    FUN_1416f8340(local_700);
  }
  if (bVar5) {
    if (local_6b8 != 0) {
      LOCK();
      piVar1 = (int *)(local_6b8 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    if (local_6c8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_6c8 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_6c8)(local_6c8);
        LOCK();
        piVar1 = (int *)((longlong)local_6c8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_6c8 + 8))(local_6c8,1);
        }
      }
    }
    FUN_1416f8340(local_6d4);
    FUN_1416f8340(local_6d8);
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_660 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140f2b890 FUN_140f2b890 body=362 status=ok
// SIG undefined FUN_140f2b890(void)

longlong * FUN_140f2b890(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((*(longlong *)(param_1 + 0x308) != 0) && (*(longlong *)(param_1 + 0x310) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x310) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) goto LAB_140f2b96e;
  }
  puVar5 = (undefined8 *)FUN_142085870(param_1,local_28,L"perkIconContainer");
  *(undefined8 *)(param_1 + 0x308) = *puVar5;
  plVar2 = (longlong *)puVar5[1];
  plVar6 = *(longlong **)(param_1 + 0x310);
  if (plVar2 != plVar6) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x310);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    *(longlong **)(param_1 + 0x310) = plVar2;
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
LAB_140f2b96e:
  plVar2 = *(longlong **)(param_1 + 0x310);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        if (plVar2 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x308) != 0) {
            *param_2 = *(longlong *)(param_1 + 0x308);
            param_2[1] = (longlong)plVar2;
            return param_2;
          }
          LOCK();
          plVar6 = plVar2 + 1;
          lVar3 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
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
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140f2ba00 FUN_140f2ba00 body=454 status=ok
// SIG undefined FUN_140f2ba00(void)

longlong * FUN_140f2ba00(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  bool bVar7;
  longlong local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((*(longlong *)(param_1 + 0x318) != 0) && (*(longlong *)(param_1 + 800) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 800) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) goto LAB_140f2bb35;
  }
  FUN_140f2b890(param_1,&local_38);
  if (local_38 != 0) {
    puVar5 = (undefined8 *)FUN_1420392d0(local_38,local_28,L"iconArt");
    *(undefined8 *)(param_1 + 0x318) = *puVar5;
    plVar2 = (longlong *)puVar5[1];
    plVar6 = *(longlong **)(param_1 + 800);
    if (plVar2 != plVar6) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(param_1 + 800);
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *(longlong **)(param_1 + 800) = plVar2;
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_20 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  plVar2 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
LAB_140f2bb35:
  plVar2 = *(longlong **)(param_1 + 800);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        if (plVar2 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x318) != 0) {
            *param_2 = *(longlong *)(param_1 + 0x318);
            param_2[1] = (longlong)plVar2;
            return param_2;
          }
          LOCK();
          plVar6 = plVar2 + 1;
          lVar3 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
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
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140f2bbd0 FUN_140f2bbd0 body=741 status=ok
// SIG undefined FUN_140f2bbd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140f2bbd0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_d58 [32];
  undefined4 local_d38;
  undefined8 local_d28;
  undefined8 uStack_d20;
  undefined8 local_d18;
  undefined8 uStack_d10;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined4 local_cf8;
  undefined4 uStack_cf4;
  undefined4 uStack_cf0;
  undefined4 uStack_cec;
  undefined4 local_ce8;
  undefined4 local_ce4;
  longlong local_ce0;
  undefined8 local_cd8;
  undefined8 local_cd0;
  undefined4 local_cc8;
  undefined4 local_cc4;
  undefined1 local_cc0 [8];
  undefined1 local_cb8 [1496];
  longlong local_6e0;
  longlong local_6d0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 local_678;
  void *local_670;
  int local_668;
  undefined4 uStack_664;
  undefined4 local_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined1 local_648 [1496];
  longlong local_70;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d58;
  local_d38 = 0;
  lVar10 = FWeakObjectPtr::Get(param_1 + 0x5d4);
  if (lVar10 != 0) {
    lVar11 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      bVar9 = true;
      bVar8 = false;
      puVar12 = (undefined8 *)FUN_1411e6870(lVar10,param_3);
      local_670 = (void *)0x0;
      local_6a8 = puVar12[2];
      uStack_6a0 = puVar12[3];
      local_6b8 = *puVar12;
      uStack_6b0 = puVar12[1];
      local_668 = *(int *)(puVar12 + 10);
      lVar10 = (longlong)local_668;
      _Src = (void *)puVar12[9];
      local_698 = *(undefined4 *)(puVar12 + 4);
      uStack_694 = *(undefined4 *)((longlong)puVar12 + 0x24);
      uStack_690 = *(undefined4 *)(puVar12 + 5);
      uStack_68c = *(undefined4 *)((longlong)puVar12 + 0x2c);
      local_688 = *(undefined4 *)(puVar12 + 6);
      uStack_684 = *(undefined4 *)((longlong)puVar12 + 0x34);
      uStack_680 = *(undefined4 *)(puVar12 + 7);
      uStack_67c = *(undefined4 *)((longlong)puVar12 + 0x3c);
      local_678 = *(undefined4 *)(puVar12 + 8);
      if (local_668 == 0) {
        uStack_664 = 0;
      }
      else {
        FUN_1409b7fb0(&local_670,local_668,0);
        _guard_xfg_dispatch_icall_nop(local_670,_Src,lVar10 * 0x14);
      }
      local_660 = *(undefined4 *)(puVar12 + 0xb);
      uStack_65c = *(undefined4 *)((longlong)puVar12 + 0x5c);
      uStack_658 = *(undefined4 *)(puVar12 + 0xc);
      uStack_654 = *(undefined4 *)((longlong)puVar12 + 100);
      FUN_140a25aa0(local_648,puVar12 + 0xe);
      puVar12 = &local_6b8;
      goto LAB_140f2bdb1;
    }
  }
  local_ce4 = 0;
  _guard_xfg_dispatch_icall_nop(local_cc0,0,0x608);
  bVar9 = false;
  bVar8 = true;
  local_d28 = _DAT_1468b5b70;
  uStack_d20 = uRam00000001468b5b78;
  local_d08 = _DAT_1468b5b90;
  uStack_d00 = uRam00000001468b5b98;
  local_d18 = _DAT_1468b5b80;
  uStack_d10 = uRam00000001468b5b88;
  local_cc4 = 0x42b40000;
  local_cf8 = 0;
  uStack_cf4 = 0x42b40000;
  uStack_cf0 = 0;
  uStack_cec = 0x40490fdb;
  local_ce8 = DAT_1464aa730;
  local_ce0 = 0;
  local_cd8 = 0;
  local_cd0 = 0;
  local_cc8 = 0;
  FUN_142741540(local_cb8);
  puVar12 = &local_d28;
LAB_140f2bdb1:
  uVar6 = puVar12[1];
  uVar1 = *(undefined4 *)(puVar12 + 8);
  uVar2 = *(undefined4 *)(puVar12 + 2);
  uVar3 = *(undefined4 *)((longlong)puVar12 + 0x14);
  uVar4 = *(undefined4 *)(puVar12 + 3);
  uVar5 = *(undefined4 *)((longlong)puVar12 + 0x1c);
  *param_2 = *puVar12;
  param_2[1] = uVar6;
  uVar6 = puVar12[5];
  param_2[4] = puVar12[4];
  param_2[5] = uVar6;
  uVar6 = puVar12[6];
  uVar7 = puVar12[7];
  *(undefined4 *)(param_2 + 2) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
  *(undefined4 *)(param_2 + 3) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar5;
  param_2[6] = uVar6;
  param_2[7] = uVar7;
  *(undefined4 *)(param_2 + 8) = uVar1;
  param_2[9] = puVar12[9];
  puVar12[9] = 0;
  *(undefined4 *)(param_2 + 10) = *(undefined4 *)(puVar12 + 10);
  puVar12[10] = 0;
  uVar1 = *(undefined4 *)(puVar12 + 0xb);
  uVar2 = *(undefined4 *)((longlong)puVar12 + 0x5c);
  uVar3 = *(undefined4 *)(puVar12 + 0xc);
  uVar4 = *(undefined4 *)((longlong)puVar12 + 100);
  *(undefined4 *)((longlong)param_2 + 0x54) = *(undefined4 *)((longlong)puVar12 + 0x54);
  *(undefined4 *)(param_2 + 0xb) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0x5c) = uVar2;
  *(undefined4 *)(param_2 + 0xc) = uVar3;
  *(undefined4 *)((longlong)param_2 + 100) = uVar4;
  FUN_140f16b40(param_2 + 0xe,puVar12 + 0xe);
  if (bVar8) {
    if (local_6d0 != 0) {
      FMemory::Free();
    }
    if (local_6e0 != 0) {
      FMemory::Free();
    }
    if (local_ce0 != 0) {
      FMemory::Free();
    }
  }
  if (bVar9) {
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_70 != 0) {
      FMemory::Free();
    }
    if (local_670 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 140f2bec0 FUN_140f2bec0 body=200 status=ok
// SIG undefined FUN_140f2bec0(void)

void FUN_140f2bec0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  plVar1 = (longlong *)(param_1 + 0xdb8);
  *(undefined4 *)(param_1 + 0xdc0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xdc4)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xdb0);
  if (cVar3 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0xdb0);
    puVar6 = *(undefined8 **)(lVar4 + 0x1f0);
    puVar5 = puVar6 + (longlong)*(int *)(lVar4 + 0x1f8) * 2;
    for (; puVar6 != puVar5; puVar6 = puVar6 + 2) {
      iVar2 = *(int *)(param_1 + 0xdc0);
      *(int *)(param_1 + 0xdc0) = iVar2 + 1;
      if (*(int *)(param_1 + 0xdc4) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = *puVar6;
    }
  }
  FUN_140f144d0(*plVar1,(longlong)*(int *)(param_1 + 0xdc0),local_res8[0],local_res8);
  return;
}



// FUNCTION 140f2bf90 FUN_140f2bf90 body=408 status=ok
// SIG undefined FUN_140f2bf90(void)

undefined8 * FUN_140f2bf90(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852c60) {
    _Init_thread_header(&DAT_146852c60);
    if (DAT_146852c60 == -1) {
      FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
      _Init_thread_footer(&DAT_146852c60);
    }
  }
  uVar8 = DAT_146852c58;
  uVar5 = FUN_14168dc80();
  plVar6 = (longlong *)FModuleManager::GetModule(uVar5,uVar8);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))(plVar6,param_2);
  bVar9 = plVar6 != (longlong *)0x0;
  if (bVar9) {
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0xa0))(plVar6,local_18);
    uVar8 = *puVar7;
  }
  else {
    puVar7 = &local_28;
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    uVar8 = 0;
  }
  *param_1 = uVar8;
  param_1[1] = puVar7[1];
  puVar7[1] = 0;
  *puVar7 = 0;
  if (bVar9) {
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_10 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)local_10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  plVar6 = plStack_20;
  if ((!bVar9) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140f2c130 FUN_140f2c130 body=33 status=ok
// SIG undefined FUN_140f2c130(void)

undefined8 FUN_140f2c130(undefined8 param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"ExtTexRender_%02d_nopack");
  return param_2;
}



// FUNCTION 140f2c160 FUN_140f2c160 body=484 status=ok
// SIG undefined FUN_140f2c160(void)

undefined8 FUN_140f2c160(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x948);
  lVar1 = *(longlong *)(param_3 + 0xa8);
  lVar6 = (longlong)*(int *)(param_1 + 0x950) * 0x40 + lVar5;
  if (lVar5 != lVar6) {
    do {
      if (lVar1 != 0) {
        lVar3 = FWeakObjectPtr::Get(lVar5);
        if (lVar3 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(lVar5 + 8)) && (*(longlong *)(lVar5 + 0x10) != 0)) {
            lVar3 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar5,lVar3);
            if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar5 + 8) = DAT_1464b56f4;
            }
            lVar3 = FWeakObjectPtr::Get(lVar5);
            if (lVar3 != 0) goto LAB_140f2c223;
          }
        }
        else {
LAB_140f2c223:
          lVar4 = FUN_1430228e0();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            lVar3 = FWeakObjectPtr::Get(lVar5);
            if (lVar3 == 0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 != *(int *)(lVar5 + 8)) && (*(longlong *)(lVar5 + 0x10) != 0)) {
                lVar3 = FUN_141796df0();
                FWeakObjectPtr::operator=(lVar5,lVar3);
                if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  *(int *)(lVar5 + 8) = DAT_1464b56f4;
                }
                lVar3 = FWeakObjectPtr::Get(lVar5);
                if (lVar3 != 0) goto LAB_140f2c2cf;
              }
LAB_140f2c305:
              lVar3 = 0;
            }
            else {
LAB_140f2c2cf:
              lVar4 = FUN_1430228e0();
              if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) goto LAB_140f2c305;
            }
            if (lVar1 == lVar3) {
              lVar5 = lVar5 + 0x28;
              goto LAB_140f2c322;
            }
          }
        }
      }
      lVar5 = lVar5 + 0x40;
    } while (lVar5 != lVar6);
  }
  lVar5 = FUN_1404b03b0();
LAB_140f2c322:
  FText::FText(param_2,lVar5);
  return param_2;
}



// FUNCTION 140f2c350 FUN_140f2c350 body=362 status=ok
// SIG undefined FUN_140f2c350(void)

longlong * FUN_140f2c350(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((*(longlong *)(param_1 + 0x328) != 0) && (*(longlong *)(param_1 + 0x330) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x330) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) goto LAB_140f2c42e;
  }
  puVar5 = (undefined8 *)FUN_142085870(param_1,local_28,L"unlockPulseMC");
  *(undefined8 *)(param_1 + 0x328) = *puVar5;
  plVar2 = (longlong *)puVar5[1];
  plVar6 = *(longlong **)(param_1 + 0x330);
  if (plVar2 != plVar6) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x330);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    *(longlong **)(param_1 + 0x330) = plVar2;
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
LAB_140f2c42e:
  plVar2 = *(longlong **)(param_1 + 0x330);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        if (plVar2 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x328) != 0) {
            *param_2 = *(longlong *)(param_1 + 0x328);
            param_2[1] = (longlong)plVar2;
            return param_2;
          }
          LOCK();
          plVar6 = plVar2 + 1;
          lVar3 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
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
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140f2c4c0 FUN_140f2c4c0 body=271 status=ok
// SIG undefined FUN_140f2c4c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f2c4c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140f26f00;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f2c5f0 FUN_140f2c5f0 body=404 status=ok
// SIG undefined FUN_140f2c5f0(void)

void FUN_140f2c5f0(longlong param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  longlong local_28 [2];
  
  cVar2 = FUN_142ebe120();
  if (cVar2 != '\0') {
    plVar4 = *(longlong **)(param_1 + 0xa00);
    plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
    for (; plVar4 != plVar5; plVar4 = plVar4 + 0x1b) {
      bVar6 = (int)plVar4[0x1a] == param_2;
      if (bVar6) {
        if ((*(char *)((longlong)plVar4 + 0xcc) != '\0') && (*(char *)(param_1 + 0xe33) == '\0')) {
          bVar6 = false;
        }
        if ((*(char *)((longlong)plVar4 + 0xcd) != '\0') && (*(char *)(param_1 + 0xe34) == '\0')) {
          bVar6 = false;
        }
      }
      plVar1 = (longlong *)plVar4[2];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x278))(plVar1,bVar6);
      }
      plVar1 = (longlong *)*plVar4;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x278))(plVar1,bVar6);
      }
      plVar1 = (longlong *)plVar4[1];
      if (plVar1 != (longlong *)0x0) {
        if ((bVar6 == false) || ((char)plVar4[6] == '\0')) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        (**(code **)(*plVar1 + 0x278))(plVar1,uVar3);
      }
    }
    if (*(longlong *)(param_1 + 0xe18) != 0) {
      FString::PrintfImpl(local_28,L"Page%d",param_2 + 1);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0xe18),local_28);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
    plVar4 = *(longlong **)(param_1 + 0xe10);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x278))(plVar4,param_2 == 0);
    }
    plVar4 = *(longlong **)(param_1 + 0xe08);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x278))(plVar4,param_2 == 1);
    }
    plVar4 = *(longlong **)(param_1 + 0xdb0);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x278))(plVar4,param_2 == 0);
    }
  }
  return;
}



// FUNCTION 140f2c790 FUN_140f2c790 body=709 status=ok
// SIG undefined FUN_140f2c790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f2c790(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  short *psVar9;
  undefined1 auStack_118 [32];
  longlong local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  longlong lStack_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined4 *local_b8;
  ulonglong *puStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [16];
  undefined4 local_58 [2];
  longlong local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (*(int *)(param_1 + 0x598) == 0) {
    psVar9 = &DAT_143f3eda8;
  }
  else {
    psVar9 = *(short **)(param_1 + 0x590);
  }
  local_f8 = 0;
  local_f0 = 0;
  lVar8 = -1;
  if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
    do {
      lVar8 = lVar8 + 1;
    } while (psVar9[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_f0 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    }
    FGenericPlatformString::Memcpy(local_f8,psVar9,(longlong)(int)uVar7 * 2);
  }
  uVar5 = FText::FromString(local_80,&local_f8);
  puVar6 = (undefined8 *)FTextFormat::FTextFormat(local_68,uVar5);
  local_58[0] = 0;
  local_b8 = local_58;
  local_30 = '\0';
  puStack_b0 = local_28;
  local_e8 = *puVar6;
  lStack_e0 = puVar6[1];
  if (lStack_e0 != 0) {
    LOCK();
    *(int *)(lStack_e0 + 8) = *(int *)(lStack_e0 + 8) + 1;
    UNLOCK();
  }
  local_50 = (longlong)param_2;
  uVar5 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_a8,&local_b8);
  uVar5 = FText::Format(local_98,&local_e8,uVar5);
  FText::FText(local_d8,uVar5);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_90 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_a8);
  if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_40 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  plVar4 = (longlong *)puVar6[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_78 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x5c0);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,local_d8,1,0);
  }
  plVar4 = *(longlong **)(param_1 + 0x5c8);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,local_d8,1,0);
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_d0 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  return;
}



// FUNCTION 140f2ca60 FUN_140f2ca60 body=88 status=ok
// SIG undefined FUN_140f2ca60(void)

bool FUN_140f2ca60(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146872910;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 140f2cac0 FUN_140f2cac0 body=284 status=ok
// SIG undefined FUN_140f2cac0(void)

void FUN_140f2cac0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xdb0);
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0xab8) != 0)) {
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xdb0);
    uVar3 = (**(code **)(*plVar4 + 0x468))(plVar4);
    *(undefined4 *)(param_1 + 0xddc) = uVar3;
    uVar1 = FWeakObjectPtr::Get(param_1 + 0xdb0);
    FUN_140e476d0(uVar1,*(int *)(param_1 + 0xddc) + -1);
    uVar1 = FWeakObjectPtr::Get(param_1 + 0xdb0);
    FUN_140e476d0(uVar1,*(undefined4 *)(param_1 + 0xddc));
    uVar1 = FWeakObjectPtr::Get(param_1 + 0xdb0);
    FUN_140e4de20(uVar1);
    FUN_142f0ead0(*(undefined8 *)(param_1 + 0xab8));
  }
  return;
}



// FUNCTION 140f2cbe0 FUN_140f2cbe0 body=75 status=ok
// SIG undefined FUN_140f2cbe0(void)

void FUN_140f2cbe0(longlong param_1)

{
  FUN_140f2bec0();
  FUN_140f4be90(param_1);
  FUN_140f46a90(param_1,0);
  FUN_140f54370(param_1,1);
  if (*(char *)(param_1 + 0xdc8) == '\x06') {
    FUN_140f29e50(param_1);
    return;
  }
  return;
}



// FUNCTION 140f2cc30 FUN_140f2cc30 body=567 status=ok
// SIG undefined FUN_140f2cc30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f2cc30(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  ulonglong *puStack_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [16];
  undefined4 local_58 [2];
  longlong local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xdb0);
  if (((cVar4 != '\0') && (*(longlong *)(param_1 + 0x740) != 0)) &&
     (*(longlong *)(param_1 + 0x748) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x748) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xdb0);
      iVar5 = (**(code **)(*plVar6 + 0x468))(plVar6);
      *(int *)(param_1 + 0xddc) = iVar5;
      puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_68,param_1 + 0xc70);
      local_58[0] = 0;
      local_c8 = local_58;
      local_30 = '\0';
      puStack_c0 = local_28;
      local_b8 = *puVar7;
      local_b0 = puVar7[1];
      if (local_b0 != 0) {
        LOCK();
        *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
        UNLOCK();
      }
      local_50 = (longlong)iVar5;
      uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_a8,&local_c8);
      uVar8 = FText::Format(local_80,&local_b8,uVar8);
      FText::FText(local_98,uVar8);
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_78 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)local_78 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_78 + 8))(local_78,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_a8);
      if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
        LOCK();
        plVar6 = local_40 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      plVar6 = (longlong *)puVar7[1];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
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
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x738,local_98,1,0);
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_90 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140f2ce70 FUN_140f2ce70 body=12 status=ok
// SIG undefined FUN_140f2ce70(void)

undefined4 FUN_140f2ce70(longlong param_1)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140f2ce80 FUN_140f2ce80 body=706 status=ok
// SIG undefined FUN_140f2ce80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140f2ce80(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong lStack_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined4 *local_a8;
  ulonglong *puStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [16];
  undefined4 local_60 [2];
  longlong local_58;
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar7 = FWeakObjectPtr::IsValid(param_1 + 0xdb0);
  if ((char)uVar7 != '\0') {
    lVar8 = FWeakObjectPtr::Get(param_1 + 0xdb0);
    iVar5 = *(int *)(lVar8 + 0x17c);
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_70,param_1 + 0xca0);
    local_a8 = local_60;
    puStack_a0 = &local_30;
    lStack_d0 = puVar9[1];
    local_d8 = *puVar9;
    local_60[0] = 0;
    local_38 = '\0';
    if (lStack_d0 != 0) {
      LOCK();
      *(int *)(lStack_d0 + 8) = *(int *)(lStack_d0 + 8) + 1;
      UNLOCK();
    }
    local_58 = (longlong)iVar5;
    uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_98,&local_a8);
    uVar10 = FText::Format(local_88,&local_d8,uVar10);
    FText::FText(local_c8,uVar10);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_80 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_98);
    if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
      LOCK();
      puVar2 = (uint *)(local_48 + 1);
      uVar4 = *puVar2;
      uVar7 = (ulonglong)uVar4;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar4 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        puVar2 = (uint *)((longlong)local_48 + 0xc);
        uVar4 = *puVar2;
        uVar7 = (ulonglong)uVar4;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if (uVar4 == 1) {
          uVar7 = (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    plVar6 = (longlong *)puVar9[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      puVar2 = (uint *)(plVar6 + 1);
      uVar4 = *puVar2;
      uVar7 = (ulonglong)uVar4;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar4 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        puVar2 = (uint *)((longlong)plVar6 + 0xc);
        uVar4 = *puVar2;
        uVar7 = (ulonglong)uVar4;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if (uVar4 == 1) {
          uVar7 = (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x758) != 0) && (*(longlong *)(param_1 + 0x760) != 0)) {
      uVar7 = 0;
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x760) + 8);
      LOCK();
      uVar4 = *puVar2;
      if (uVar4 == 0) {
        *puVar2 = 0;
      }
      else {
        uVar7 = (ulonglong)uVar4;
      }
      UNLOCK();
      if (0 < (int)uVar7) {
        uVar7 = UMistDebugEntityScreen::InspectEntity(param_1 + 0x750,local_c8,1,0);
      }
    }
    if ((*(longlong *)(param_1 + 0x770) != 0) && (*(longlong *)(param_1 + 0x778) != 0)) {
      uVar7 = 0;
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x778) + 8);
      LOCK();
      uVar4 = *puVar2;
      if (uVar4 == 0) {
        *puVar2 = 0;
      }
      else {
        uVar7 = (ulonglong)uVar4;
      }
      UNLOCK();
      if (0 < (int)uVar7) {
        uVar7 = UMistDebugEntityScreen::InspectEntity(param_1 + 0x768,local_c8,1,0);
      }
    }
    if (*(longlong *)(param_1 + 0xac0) != 0) {
      lVar11 = FUN_142eb65a0(param_1);
      lVar8 = *(longlong *)(param_1 + 0xac0);
      plVar6 = (longlong *)(lVar8 + 0x170);
      uVar7 = (**(code **)(*plVar6 + 0x38))(plVar6,0 < iVar5);
      if (lVar11 == lVar8) {
        LOCK();
        uVar4 = *(uint *)(param_1 + 0xde4);
        *(uint *)(param_1 + 0xde4) = 1;
        uVar7 = (ulonglong)uVar4;
        UNLOCK();
      }
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      puVar2 = (uint *)(local_c0 + 1);
      uVar4 = *puVar2;
      uVar7 = (ulonglong)uVar4;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar4 == 1) {
        uVar7 = (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          uVar7 = (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
  }
  return uVar7;
}



// FUNCTION 140f2d150 FUN_140f2d150 body=3473 status=ok
// SIG undefined FUN_140f2d150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f2d150(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_688 [32];
  longlong **local_668;
  undefined4 local_658;
  undefined4 local_654;
  longlong *local_650;
  undefined8 local_648;
  longlong local_640;
  undefined8 local_638;
  longlong *local_630;
  undefined8 local_628;
  longlong local_620;
  undefined8 local_618;
  longlong *local_610;
  undefined8 local_608;
  longlong local_600;
  undefined8 local_5f8;
  longlong *local_5f0;
  undefined8 local_5e8;
  longlong local_5e0;
  undefined8 local_5d8;
  longlong *local_5d0;
  undefined8 local_5c8;
  longlong local_5c0;
  undefined8 local_5b8;
  longlong *local_5b0;
  undefined8 local_5a8;
  longlong local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined1 local_560 [8];
  longlong *local_558;
  undefined1 local_548 [8];
  longlong *local_540;
  undefined1 *local_528 [2];
  longlong local_518 [4];
  longlong *local_4f8;
  int local_4e8;
  undefined1 *local_4d8 [2];
  longlong local_4c8 [4];
  longlong *local_4a8;
  int local_498;
  undefined1 *local_488 [2];
  longlong local_478 [4];
  longlong *local_458;
  int local_448;
  undefined1 *local_438 [2];
  longlong local_428 [4];
  longlong *local_408;
  int local_3f8;
  undefined1 *local_3e8 [2];
  longlong local_3d8 [4];
  longlong *local_3b8;
  int local_3a8;
  undefined1 *local_398 [2];
  longlong local_388 [4];
  longlong *local_368;
  int local_358;
  undefined1 *local_348 [2];
  longlong local_338 [4];
  longlong *local_318;
  int local_308;
  undefined1 *local_2f8 [2];
  longlong local_2e8 [4];
  longlong *local_2c8;
  int local_2b8;
  undefined1 local_2a8 [16];
  longlong local_298 [4];
  longlong *local_278;
  int local_268;
  undefined1 local_258 [16];
  longlong local_248 [4];
  longlong *local_228;
  int local_218;
  undefined1 local_208 [16];
  longlong local_1f8 [4];
  longlong *local_1d8;
  int local_1c8;
  undefined1 local_1b8 [16];
  longlong local_1a8 [4];
  longlong *local_188;
  int local_178;
  undefined1 local_168 [16];
  longlong local_158 [4];
  longlong *local_138;
  int local_128;
  undefined1 local_118 [16];
  longlong local_108 [4];
  longlong *local_e8;
  int local_d8;
  undefined1 local_c8 [16];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_688;
  local_5d8 = 0xe;
  local_5e0 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5e0,0);
  FGenericPlatformString::Memcpy(local_5e0,L"leftHardPoint",0x1c);
  local_668 = &local_5f0;
  local_5f0 = (longlong *)0x0;
  local_5e8 = 0;
  local_590 = 0;
  uVar3 = FUN_140ecaa30(param_1,&local_5e0,0,6);
  *(undefined8 *)(param_1 + 0xf20) = uVar3;
  plVar5 = local_5f0;
  for (iVar7 = (int)local_5e8; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_5f0 != (longlong *)0x0) {
    FMemory::Free(local_5f0);
  }
  if (local_5e0 != 0) {
    FMemory::Free();
  }
  local_5c0 = 0;
  local_5b8 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5c0,0);
  FGenericPlatformString::Memcpy(local_5c0,L"leftHardPointMod",0x22);
  local_668 = &local_5d0;
  local_5d0 = (longlong *)0x0;
  local_5c8 = 0;
  local_588 = 0;
  uVar3 = FUN_140ecaa30(param_1,&local_5c0,0,6);
  *(undefined8 *)(param_1 + 0xf28) = uVar3;
  plVar5 = local_5d0;
  for (iVar7 = (int)local_5c8; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_5d0 != (longlong *)0x0) {
    FMemory::Free(local_5d0);
  }
  if (local_5c0 != 0) {
    FMemory::Free();
  }
  local_5a0 = 0;
  local_598 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5a0,0);
  FGenericPlatformString::Memcpy(local_5a0,L"rightHardPoint",0x1e);
  local_668 = &local_5b0;
  local_5b0 = (longlong *)0x0;
  local_5a8 = 0;
  local_580 = 0;
  uVar3 = FUN_140ecaa30(param_1,&local_5a0,0,6);
  *(undefined8 *)(param_1 + 0xf30) = uVar3;
  plVar5 = local_5b0;
  for (iVar7 = (int)local_5a8; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_5b0 != (longlong *)0x0) {
    FMemory::Free(local_5b0);
  }
  if (local_5a0 != 0) {
    FMemory::Free();
  }
  local_640 = 0;
  local_638 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_640,0);
  FGenericPlatformString::Memcpy(local_640,L"rightHardPointMod",0x24);
  local_668 = &local_650;
  local_650 = (longlong *)0x0;
  local_648 = 0;
  local_578 = 0;
  uVar3 = FUN_140ecaa30(param_1,&local_640,0,6);
  *(undefined8 *)(param_1 + 0xf38) = uVar3;
  plVar5 = local_650;
  for (iVar7 = (int)local_648; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_650 != (longlong *)0x0) {
    FMemory::Free(local_650);
  }
  if (local_640 != 0) {
    FMemory::Free();
  }
  local_620 = 0;
  local_618 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_620,0);
  FGenericPlatformString::Memcpy(local_620,L"hardPointsLabel",0x20);
  local_668 = &local_630;
  local_630 = (longlong *)0x0;
  local_628 = 0;
  local_570 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_620,0,6);
  *(undefined8 *)(param_1 + 0xf10) = uVar3;
  plVar5 = local_630;
  for (iVar7 = (int)local_628; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_630 != (longlong *)0x0) {
    FMemory::Free(local_630);
  }
  if (local_620 != 0) {
    FMemory::Free();
  }
  if (*(longlong **)(param_1 + 0xf10) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0xf10);
    uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_560,L"Hardpoints",L"GFxGunnerSkillScreenTree",L"HardPointsLabel");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0xf10),uVar3,1,0);
    if (local_558 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_558 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_558)(local_558);
        LOCK();
        piVar1 = (int *)((longlong)local_558 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_558 + 8))(local_558,1);
        }
      }
    }
  }
  local_600 = 0;
  local_5f8 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_600,0);
  FGenericPlatformString::Memcpy(local_600,L"modsLabel",0x14);
  local_668 = &local_610;
  local_610 = (longlong *)0x0;
  local_608 = 0;
  local_568 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_600,0,6);
  *(undefined8 *)(param_1 + 0xf18) = uVar3;
  plVar5 = local_610;
  for (iVar7 = (int)local_608; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_610 != (longlong *)0x0) {
    FMemory::Free(local_610);
  }
  if (local_600 != 0) {
    FMemory::Free();
  }
  if (*(longlong **)(param_1 + 0xf18) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0xf18);
    uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_548,L"Hardpoint Mods",L"GFxGunnerSkillScreenTree",L"ModsLabel");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0xf18),uVar3,1,0);
    if (local_540 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_540 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_540)(local_540);
        LOCK();
        piVar1 = (int *)((longlong)local_540 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_540 + 8))(local_540,1);
        }
      }
    }
  }
  plVar5 = (longlong *)(param_1 + 0xc30);
  *(undefined4 *)(param_1 + 0xc38) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc3c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar5,0);
  }
  if (*(longlong *)(param_1 + 0xf20) != 0) {
    local_4f8 = (longlong *)0x0;
    local_4e8 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_518);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_528[0] = &LAB_140f26bc0;
    uVar3 = FUN_1420849a0(param_1,local_2a8,local_528);
    FUN_14208c260(param_1,uVar3);
    if (local_268 != 0) {
      plVar6 = local_298;
      if (local_278 != (longlong *)0x0) {
        plVar6 = local_278;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_278 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_4e8 != 0) {
      plVar6 = local_518;
      if (local_4f8 != (longlong *)0x0) {
        plVar6 = local_4f8;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_4f8 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_658 = 0xffffffff;
    uVar8 = 0xffffffff;
    if (*(longlong *)(param_1 + 0xf20) != 0) {
      FUN_14170c210(&local_658);
      uVar8 = local_658;
    }
    local_658 = 0xffffffff;
    local_4a8 = (longlong *)0x0;
    local_498 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_4c8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_144266c70;
      puVar4[1] = param_1;
      *(undefined4 *)(puVar4 + 2) = uVar8;
      uVar8 = 0xffffffff;
    }
    local_4d8[0] = &LAB_140f26be0;
    uVar3 = FUN_1420849a0(param_1,local_258,local_4d8);
    FUN_14208c940(param_1,uVar3);
    if (local_218 != 0) {
      plVar6 = local_248;
      if (local_228 != (longlong *)0x0) {
        plVar6 = local_228;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_228 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_498 != 0) {
      plVar6 = local_4c8;
      if (local_4a8 != (longlong *)0x0) {
        plVar6 = local_4a8;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_4a8 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar8);
    FUN_1416f8340(local_658);
    iVar7 = *(int *)(param_1 + 0xc38);
    *(int *)(param_1 + 0xc38) = iVar7 + 1;
    if (*(int *)(param_1 + 0xc3c) < iVar7 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar7);
    }
    *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8) = *(undefined8 *)(param_1 + 0xf20);
  }
  if (*(longlong *)(param_1 + 0xf30) != 0) {
    local_458 = (longlong *)0x0;
    local_448 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_478);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_488[0] = &LAB_140f26eb0;
    uVar3 = FUN_1420849a0(param_1,local_208,local_488);
    FUN_14208c260(param_1,uVar3);
    if (local_1c8 != 0) {
      plVar6 = local_1f8;
      if (local_1d8 != (longlong *)0x0) {
        plVar6 = local_1d8;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_1d8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_448 != 0) {
      plVar6 = local_478;
      if (local_458 != (longlong *)0x0) {
        plVar6 = local_458;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_458 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_654 = 0xffffffff;
    uVar8 = 0xffffffff;
    if (*(longlong *)(param_1 + 0xf30) != 0) {
      FUN_14170c210(&local_654);
      uVar8 = local_654;
    }
    local_654 = 0xffffffff;
    local_408 = (longlong *)0x0;
    local_3f8 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_428);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_144266c70;
      puVar4[1] = param_1;
      *(undefined4 *)(puVar4 + 2) = uVar8;
      uVar8 = 0xffffffff;
    }
    local_438[0] = &LAB_140f27040;
    uVar3 = FUN_1420849a0(param_1,local_1b8,local_438);
    FUN_14208c940(param_1,uVar3);
    if (local_178 != 0) {
      plVar6 = local_1a8;
      if (local_188 != (longlong *)0x0) {
        plVar6 = local_188;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_3f8 != 0) {
      plVar6 = local_428;
      if (local_408 != (longlong *)0x0) {
        plVar6 = local_408;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_408 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar8);
    FUN_1416f8340(local_654);
    iVar7 = *(int *)(param_1 + 0xc38);
    *(int *)(param_1 + 0xc38) = iVar7 + 1;
    if (*(int *)(param_1 + 0xc3c) < iVar7 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar7);
    }
    *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8) = *(undefined8 *)(param_1 + 0xf30);
  }
  if (*(longlong *)(param_1 + 0xf28) != 0) {
    local_3b8 = (longlong *)0x0;
    local_3a8 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_3d8);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_3e8[0] = &LAB_140f27090;
    uVar3 = FUN_1420849a0(param_1,local_168,local_3e8);
    FUN_14208c260(param_1,uVar3);
    if (local_128 != 0) {
      plVar6 = local_158;
      if (local_138 != (longlong *)0x0) {
        plVar6 = local_138;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_3a8 != 0) {
      plVar6 = local_3d8;
      if (local_3b8 != (longlong *)0x0) {
        plVar6 = local_3b8;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_3b8 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_368 = (longlong *)0x0;
    local_358 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_388);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_398[0] = &LAB_140f26b30;
    uVar3 = FUN_1420849a0(param_1,local_118,local_398);
    FUN_14208c940(param_1,uVar3);
    if (local_d8 != 0) {
      plVar6 = local_108;
      if (local_e8 != (longlong *)0x0) {
        plVar6 = local_e8;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_358 != 0) {
      plVar6 = local_388;
      if (local_368 != (longlong *)0x0) {
        plVar6 = local_368;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_368 != (longlong *)0x0) {
      FMemory::Free();
    }
    iVar7 = *(int *)(param_1 + 0xc38);
    *(int *)(param_1 + 0xc38) = iVar7 + 1;
    if (*(int *)(param_1 + 0xc3c) < iVar7 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar7);
    }
    *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8) = *(undefined8 *)(param_1 + 0xf28);
  }
  if (*(longlong *)(param_1 + 0xf38) != 0) {
    local_318 = (longlong *)0x0;
    local_308 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_338);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_348[0] = &LAB_140f26e50;
    uVar3 = FUN_1420849a0(param_1,local_c8,local_348);
    FUN_14208c260(param_1,uVar3);
    if (local_88 != 0) {
      plVar6 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar6 = local_98;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_308 != 0) {
      plVar6 = local_338;
      if (local_318 != (longlong *)0x0) {
        plVar6 = local_318;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_318 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_2c8 = (longlong *)0x0;
    local_2b8 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_2e8);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_2f8[0] = &LAB_140f26af0;
    uVar3 = FUN_1420849a0(param_1,local_78,local_2f8);
    FUN_14208c940(param_1,uVar3);
    if (local_38 != 0) {
      plVar6 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar6 = local_48;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_2b8 != 0) {
      plVar6 = local_2e8;
      if (local_2c8 != (longlong *)0x0) {
        plVar6 = local_2c8;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_2c8 != (longlong *)0x0) {
      FMemory::Free();
    }
    iVar7 = *(int *)(param_1 + 0xc38);
    *(int *)(param_1 + 0xc38) = iVar7 + 1;
    if (*(int *)(param_1 + 0xc3c) < iVar7 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar7);
    }
    *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8) = *(undefined8 *)(param_1 + 0xf38);
  }
  FUN_14103b390(param_1);
  return;
}



// FUNCTION 140f2def0 FUN_140f2def0 body=168 status=ok
// SIG undefined FUN_140f2def0(void)

undefined8 FUN_140f2def0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_1[0x142] == 0) {
    if ((char)param_1[0x138] == '\0') {
      lVar2 = FUN_142eb65a0();
      if ((lVar2 != param_1[0x1b6]) && (param_1[0x86] != 0)) {
        cVar1 = FUN_142dd3d20();
        if (cVar1 != '\0') {
          uVar3 = TScriptInterface<IBlendableInterface>::
                  TScriptInterface<IBlendableInterface><UMaterialInterface>
                            (&local_18,param_1[0x1b6]);
          FUN_142ed36d0(param_1,uVar3,0);
          return 1;
        }
      }
      return 0;
    }
    FUN_140f29a60(param_1,1);
  }
  else {
    FUN_140f2a350();
  }
  local_18 = 0;
  local_10 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872878,&local_18);
  return 1;
}



// FUNCTION 140f2dfa0 FUN_140f2dfa0 body=613 status=ok
// SIG undefined FUN_140f2dfa0(void)

undefined8 FUN_140f2dfa0(longlong *param_1)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [4];
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  
  lVar3 = FUN_140f2b2d0();
  if (lVar3 != 0) {
    lVar4 = FUN_142eb65a0(param_1);
    plVar5 = (longlong *)param_1[0x140];
    plVar8 = plVar5 + (longlong)(int)param_1[0x141] * 0x1b;
    for (; plVar5 != plVar8; plVar5 = plVar5 + 0x1b) {
      if ((lVar4 != 0) && (lVar4 == *plVar5)) {
        FUN_140f16950(local_28,CONCAT71((int7)((ulonglong)plVar5 >> 8),1),lVar3);
        goto LAB_140f2e0af;
      }
    }
    cVar1 = FUN_140f31c30(param_1);
    if (cVar1 != '\0') {
      FUN_140f16950(local_28,2,lVar3);
      goto LAB_140f2e0af;
    }
  }
  local_28[0] = 0;
  FWeakObjectPtr::operator=(local_24,0);
  FWeakObjectPtr::operator=(&local_1c,0);
  cVar1 = FWeakObjectPtr::IsValid(local_24);
  if (cVar1 != '\0') {
    plVar5 = (longlong *)FWeakObjectPtr::Get(local_24);
    lVar3 = (**(code **)(*plVar5 + 0x340))(plVar5);
    cVar1 = FWeakObjectPtr::IsValid(lVar3 + 0xdc);
    if (cVar1 == '\0') {
      cVar1 = FWeakObjectPtr::IsValid(lVar3 + 0x5c);
      if (cVar1 != '\0') {
        local_1c = *(undefined4 *)(lVar3 + 0x5c);
        local_18 = *(undefined4 *)(lVar3 + 0x60);
      }
    }
    else {
      local_1c = *(undefined4 *)(lVar3 + 0xdc);
      local_18 = *(undefined4 *)(lVar3 + 0xe0);
    }
  }
LAB_140f2e0af:
  plVar5 = (longlong *)FWeakObjectPtr::Get(local_24);
  if (plVar5 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar5 + 0x340))(plVar5);
    cVar1 = FWeakObjectPtr::IsValid(lVar3 + 0xdc);
    if ((((cVar1 != '\0') && (param_1[0xf4] != 0)) &&
        (lVar3 = (**(code **)(*plVar5 + 0x340))(plVar5), *(longlong *)(lVar3 + 0xa8) != 0)) &&
       (lVar3 = (**(code **)(*plVar5 + 0x340))(plVar5),
       *(char *)(*(longlong *)(lVar3 + 0xa8) + 0x58) != '\0')) {
      *(undefined1 *)((longlong)param_1 + 0xe32) = 1;
      lVar3 = FUN_142ebe540(param_1,param_1[0xf4]);
      if (lVar3 != 0) {
        lVar4 = FUN_141358f70();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_38 = 0;
          local_30 = 0;
          (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872898,&local_38);
          lVar4 = (**(code **)(*plVar5 + 0x340))(plVar5);
          uVar6 = FUN_140f2b5e0(param_1);
          lVar7 = (**(code **)(*plVar5 + 0x340))(plVar5);
          FUN_140f8dde0(lVar3,*(undefined4 *)(lVar7 + 0xd8),uVar6,*(undefined8 *)(lVar4 + 0xa8));
          return 1;
        }
      }
      *(undefined1 *)((longlong)param_1 + 0xe32) = 0;
    }
  }
  return 1;
}



// FUNCTION 140f2e210 FUN_140f2e210 body=598 status=ok
// SIG undefined FUN_140f2e210(void)

ulonglong FUN_140f2e210(longlong *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint7 uVar8;
  undefined8 uVar7;
  ulonglong *puVar9;
  longlong lVar10;
  ulonglong *puVar11;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [32];
  
  lVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x594);
  if (lVar3 == 0) {
LAB_140f2e267:
    lVar3 = 0;
  }
  else {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140f2e267;
  }
  lVar5 = FUN_142eb65a0(param_1);
  lVar4 = param_1[0x140];
  lVar10 = (longlong)(int)param_1[0x141] * 0xd8 + lVar4;
  for (; lVar4 != lVar10; lVar4 = lVar4 + 0xd8) {
    if ((lVar5 != 0) && (lVar5 == *(longlong *)(lVar4 + 8))) {
      lVar4 = FUN_142eb65a0(param_1);
      uVar6 = 0;
      if (lVar4 == 0) goto LAB_140f2e376;
      lVar5 = UXGameInstance::GetPrivateStaticClass();
      uVar8 = (uint7)((ulonglong)(lVar5 + 0x88) >> 8);
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        uVar6 = (ulonglong)uVar8 << 8;
      }
      else {
        uVar6 = CONCAT71(uVar8,1);
      }
      if ((char)uVar6 == '\0') goto LAB_140f2e376;
      lVar5 = param_1[0x140];
      uVar6 = (ulonglong)(int)param_1[0x141];
      lVar10 = uVar6 * 0xd8 + lVar5;
      goto joined_r0x000140f2e359;
    }
  }
  uVar6 = FUN_142eb65a0(param_1);
  puVar9 = (ulonglong *)param_1[0x140];
  puVar11 = puVar9 + (longlong)(int)param_1[0x141] * 0x1b;
  for (; puVar9 != puVar11; puVar9 = puVar9 + 0x1b) {
    if ((uVar6 != 0) && (uVar6 == *puVar9)) {
      lVar3 = FUN_140f2b410(param_1,local_28);
      uVar7 = FWeakObjectPtr::Get(lVar3 + 4);
      uVar6 = FUN_140f52f20(param_1,uVar7);
      return uVar6;
    }
  }
LAB_140f2e2ea:
  return uVar6 & 0xffffffffffffff00;
joined_r0x000140f2e359:
  if (lVar5 == lVar10) goto LAB_140f2e376;
  if (*(longlong *)(lVar5 + 8) == lVar4) {
    lVar4 = *(longlong *)(lVar5 + 0x58);
    goto LAB_140f2e378;
  }
  lVar5 = lVar5 + 0xd8;
  goto joined_r0x000140f2e359;
LAB_140f2e376:
  lVar4 = 0;
LAB_140f2e378:
  if ((lVar3 != 0) && (lVar4 != 0)) {
    lVar5 = FUN_140c469b0(lVar3,lVar4);
    uVar6 = 0;
    if (lVar5 != 0) {
      FUN_1413f8a40(lVar3,lVar4,0);
      if (DAT_14686b371 == '\0') {
        FUN_140bfbc60(&DAT_14686b370);
        DAT_14686b371 = '\x01';
      }
      FUN_140c05c10(&DAT_14686b370,param_1,lVar4,0);
      FUN_14109ed60(param_1);
      local_38 = 0;
      local_30 = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,DAT_1468728d8,&local_38);
      LOCK();
      uVar1 = *(undefined4 *)((longlong)param_1 + 0xfac);
      *(undefined4 *)((longlong)param_1 + 0xfac) = 1;
      UNLOCK();
      return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
    }
  }
  goto LAB_140f2e2ea;
}



// FUNCTION 140f2e470 FUN_140f2e470 body=1023 status=ok
// SIG undefined FUN_140f2e470(void)

undefined8 FUN_140f2e470(longlong *param_1,longlong *param_2)

{
  char cVar1;
  DWORD DVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [16];
  
  LOCK();
  bVar9 = *(int *)((longlong)param_1 + 0x664) == 0;
  if (bVar9) {
    *(int *)((longlong)param_1 + 0x664) = 0;
  }
  lVar6 = DAT_1468728f8;
  UNLOCK();
  if (((bVar9) && (*(char *)((longlong)param_2 + 0xc) == '\x02')) &&
     ((DAT_1468725f0 == *param_2 || (DAT_1468725f8 == *param_2)))) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    lVar4 = 4;
    if (DVar2 == DAT_1468c21c0) goto LAB_140f2e4fa;
  }
  else {
LAB_140f2e4fa:
    lVar4 = 0;
  }
  if (((*(int *)(lVar4 + lVar6) != 0) && (param_1[0x1c4] != 0)) &&
     (cVar1 = FUN_140fb2f70(param_1[0x1c4],param_2), cVar1 != '\0')) {
    return 1;
  }
  cVar1 = *(char *)((longlong)param_2 + 0xc);
  if (cVar1 == '\0') {
    if (DAT_1468725e0 == *param_2) {
      if ((char)param_1[0x138] == '\0') {
        if ((char)param_1[0x1d2] != '\0') {
          return 1;
        }
      }
      else if ((char)param_1[0x138] != '\x01') {
        return 1;
      }
      FUN_140f28010(param_1,1);
      return 1;
    }
    if (DAT_1468725e8 == *param_2) {
      if ((char)param_1[0x138] == '\0') {
        if ((char)param_1[0x1d2] != '\0') {
          return 1;
        }
      }
      else if ((char)param_1[0x138] != '\x01') {
        return 1;
      }
      FUN_140f28010(param_1,0xffffffff);
      return 1;
    }
    if (param_1[0xed] == *param_2) {
      uVar5 = FUN_140f2dfa0(param_1,param_2);
      return uVar5;
    }
    if (param_1[0xea] == *param_2) goto LAB_140f2e676;
  }
  if ((cVar1 != '\x01') || (param_1[0xeb] != *param_2)) {
    if (cVar1 == '\0') {
      if (param_1[0xee] == *param_2) {
        uVar5 = FUN_140f2e210(param_1,param_2);
        return uVar5;
      }
      if (param_1[0xec] == *param_2) {
        BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e3));
        if (BVar3 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e3));
        }
        plVar7 = (longlong *)FUN_140f2b2d0(param_1);
        if (plVar7 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar7 + 0x340))(plVar7);
          cVar1 = FWeakObjectPtr::IsValid(lVar6 + 0xdc);
          if (cVar1 != '\0') {
            cVar1 = *(char *)((longlong)param_1 + 0xe31);
            *(undefined1 *)((longlong)param_1 + 0x9bc) = 1;
            uVar5 = FUN_140f2b5e0(param_1);
            lVar6 = 0xc18;
            if (cVar1 != '\x01') {
              lVar6 = 0xa80;
            }
            FUN_140f0dd70(lVar6 + (longlong)param_1,plVar7,uVar5);
            FUN_14109ed60(param_1);
            local_48 = 0;
            local_40 = 0;
            (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872870,&local_48);
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e3));
        return 1;
      }
      if (DAT_146b3e2b8 == *param_2) {
        uVar5 = FUN_140f2def0(param_1,param_2);
        return uVar5;
      }
    }
    if (!bVar9) {
      return 0;
    }
    if ((param_1[0x142] == 0) && ((char)param_1[0x138] == '\0')) {
      return 0;
    }
    cVar1 = FUN_140f2def0(param_1,param_2);
    if (cVar1 == '\0') {
      return 0;
    }
    uVar5 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>(local_28,param_1[0x1b6]);
    FUN_142ed36d0(param_1,uVar5,0);
    local_38 = 0;
    uStack_30 = 0;
    FUN_142ed36d0(param_1,&local_38,0);
    return 0;
  }
  lVar6 = FUN_142eb65a0(param_1);
  plVar7 = (longlong *)param_1[0x140];
  plVar8 = plVar7 + (longlong)(int)param_1[0x141] * 0x1b;
  for (; plVar7 != plVar8; plVar7 = plVar7 + 0x1b) {
    if ((lVar6 != 0) && (lVar6 == *plVar7)) goto LAB_140f2e693;
  }
LAB_140f2e676:
  cVar1 = FUN_140f31c30(param_1);
  if ((cVar1 == '\0') || ((char)param_1[0x1d2] != '\0')) {
    return 0;
  }
LAB_140f2e693:
  uVar5 = FUN_140f2b2d0(param_1);
  FUN_140f29550(param_1,uVar5);
  return 1;
}



// FUNCTION 140f2e870 FUN_140f2e870 body=603 status=ok
// SIG undefined FUN_140f2e870(void)

undefined8 FUN_140f2e870(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  BOOL BVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18 [16];
  
  if (*(char *)((longlong)param_2 + 0xc) != '\0') {
    return 0;
  }
  if (DAT_146872558 == *param_2) {
    cVar3 = FUN_140f31c30(param_1);
    if (cVar3 == '\0') {
      cVar3 = FUN_140f31c30(param_1);
      if (cVar3 != '\0') {
        return 0;
      }
      cVar3 = FUN_140f31cb0(param_1);
      if (cVar3 != '\0') {
        return 0;
      }
    }
    else {
      if ((char)param_1[0x1d2] != '\0') {
        FUN_140f2a350();
        local_28 = 0;
        local_20 = 0;
        (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872878,&local_28);
        return 1;
      }
      cVar3 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x9d4);
      if (cVar3 != '\0') {
        uVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x9d4);
        uVar5 = TScriptInterface<IBlendableInterface>::
                TScriptInterface<IBlendableInterface><UMaterialInterface>(local_18,uVar5);
        FUN_142ed36d0(param_1,uVar5,0);
        return 1;
      }
    }
    FUN_140f4c640(param_1);
    return 1;
  }
  if (DAT_146872560 != *param_2) {
    return 0;
  }
  lVar6 = FUN_142eb65a0(param_1);
  plVar7 = (longlong *)param_1[0x140];
  plVar8 = plVar7 + (longlong)(int)param_1[0x141] * 0x1b;
  for (; plVar7 != plVar8; plVar7 = plVar7 + 0x1b) {
    if ((lVar6 != 0) && (lVar6 == *plVar7)) goto LAB_140f2e9fc;
  }
  lVar6 = FUN_142eb65a0(param_1);
  if (((lVar6 == 0) || (lVar6 != param_1[0x1b6])) &&
     ((cVar3 = FUN_140f31c30(param_1), cVar3 != '\0' ||
      (cVar3 = FUN_140f31cb0(param_1), cVar3 != '\0')))) {
    return 0;
  }
LAB_140f2e9fc:
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e3));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e3));
  }
  lVar6 = 0xc18;
  cVar3 = FUN_140ee10a0();
  if (cVar3 == '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e3));
    return 0;
  }
  LOCK();
  lVar2 = param_1[499];
  *(int *)(param_1 + 499) = 0;
  UNLOCK();
  LOCK();
  iVar1 = *(int *)((longlong)param_1 + 0xf9c);
  *(int *)((longlong)param_1 + 0xf9c) = 0;
  UNLOCK();
  if ((int)lVar2 == 0) {
    if (iVar1 == 0) goto LAB_140f2ea62;
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  FUN_140f47890(param_1,uVar5);
LAB_140f2ea62:
  if (*(char *)((longlong)param_1 + 0xe31) != '\x01') {
    lVar6 = 0xa80;
  }
  FUN_140f089d0((longlong)param_1 + lVar6);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e3));
  return 1;
}



// FUNCTION 140f2ead0 FUN_140f2ead0 body=542 status=ok
// SIG undefined FUN_140f2ead0(void)

void FUN_140f2ead0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined4 *puVar9;
  int *piVar10;
  bool bVar11;
  longlong local_res10;
  undefined8 local_28;
  longlong local_20;
  
  if ((*(char *)(param_1 + 0x6e8) != '\0') && (*(longlong *)(param_1 + 0x6b8) != 0)) {
    if (*(longlong *)(param_1 + 0x2b8) != 0) {
      local_28 = 0;
      local_20 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      FGenericPlatformString::Memcpy(local_28,L"show",10);
      FUN_142088910(*(undefined8 *)(param_1 + 0x2b8),&local_28);
      if (local_28 != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x6b0) != 0) {
      FUN_142ecd360(*(longlong *)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x6b8));
      FUN_142ed3c40(*(undefined8 *)(param_1 + 0x6b0),0);
      FUN_142ecd3d0(*(undefined8 *)(param_1 + 0x6b0));
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMoviePlaybackComplete",L"::");
      pwVar5 = (wchar_t *)0x0;
      while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar5 = pwVar4;
      }
      FName::FName(&local_res10,pwVar5 + 2,1);
      lVar2 = *(longlong *)(param_1 + 0x6b0);
      FWeakObjectPtr::operator=(&local_28,0);
      local_20 = 0;
      FWeakObjectPtr::operator=(&local_28,param_1);
      local_20 = local_res10;
      if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_28), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_20);
      }
      piVar3 = *(int **)(lVar2 + 0x38);
      iVar1 = *(int *)(lVar2 + 0x40);
      for (piVar10 = piVar3; piVar10 != piVar3 + (longlong)iVar1 * 4; piVar10 = piVar10 + 4) {
        if ((((*piVar10 == (int)local_28) &&
             (local_28._4_4_ = (int)((ulonglong)local_28 >> 0x20),
             bVar11 = piVar10[1] == local_28._4_4_, bVar11)) ||
            ((cVar6 = FWeakObjectPtr::IsValid(piVar10), cVar6 == '\0' &&
             (cVar6 = FWeakObjectPtr::IsValid(&local_28), cVar6 == '\0')))) &&
           (*(longlong *)(piVar10 + 2) == local_20)) {
          if ((int)((longlong)piVar10 - (longlong)piVar3 >> 4) != -1) goto LAB_140f2ecd0;
          break;
        }
      }
      iVar1 = *(int *)(lVar2 + 0x40);
      *(int *)(lVar2 + 0x40) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x44) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x38,iVar1);
      }
      puVar9 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x38));
      *puVar9 = (int)local_28;
      puVar9[1] = local_28._4_4_;
      *(longlong *)(puVar9 + 2) = local_20;
LAB_140f2ecd0:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar2 + 0x38);
    }
  }
  return;
}



// FUNCTION 140f2ecf0 FUN_140f2ecf0 body=55 status=ok
// SIG undefined FUN_140f2ecf0(void)

undefined1 FUN_140f2ecf0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x3e4);
  if (cVar1 == '\0') {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x364);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140f2ed30 FUN_140f2ed30 body=720 status=ok
// SIG undefined FUN_140f2ed30(void)

undefined8 FUN_140f2ed30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [24];
  undefined1 local_48 [32];
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar6 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140f2ed96;
  }
  lVar6 = 0;
LAB_140f2ed96:
  if (((param_2 == 0) || (lVar6 == 0)) || (*(char *)(param_2 + 0x39) != '\0')) {
LAB_140f2efd0:
    uVar8 = 1;
  }
  else {
    plVar1 = (longlong *)(lVar6 + 0x1960);
    lVar9 = *plVar1;
    lVar7 = lVar9 + (longlong)*(int *)(lVar6 + 0x1968) * 0x28;
    for (; lVar9 != lVar7; lVar9 = lVar9 + 0x28) {
      local_88 = 0;
      local_80 = 0;
      local_a0 = 0xffffffff;
      local_9c = 0;
      local_90 = 0;
      uVar8 = FSoftObjectPath::FSoftObjectPath(local_60,param_2);
      FSoftObjectPath::operator=(&local_90,uVar8);
      FWeakObjectPtr::operator=(&local_a0,param_2);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_9c = CONCAT44(DAT_1464b56f4,(undefined4)local_9c);
      cVar5 = FSoftObjectPath::operator==(lVar9 + 0x10,&local_90);
      if (local_88 != 0) {
        FMemory::Free();
      }
      if (cVar5 != '\0') goto LAB_140f2efd0;
    }
    local_b0 = 0;
    local_b8 = 0;
    local_a8 = 0;
    local_c8 = 0xffffffff;
    local_c4 = 0;
    uVar8 = FSoftObjectPath::FSoftObjectPath(local_48,param_2);
    FSoftObjectPath::operator=(&local_b8,uVar8);
    FWeakObjectPtr::operator=(&local_c8,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    lVar7 = *plVar1;
    local_c4 = CONCAT44(DAT_1464b56f4,(undefined4)local_c4);
    iVar3 = *(int *)(lVar6 + 0x1968);
    for (lVar9 = lVar7; lVar9 != lVar7 + (longlong)iVar3 * 0x28; lVar9 = lVar9 + 0x28) {
      cVar5 = FSoftObjectPath::operator==(lVar9 + 0x10,&local_b8);
      if (cVar5 != '\0') {
        if ((int)((lVar9 - lVar7) / 0x28) != -1) goto LAB_140f2efbe;
        break;
      }
    }
    iVar3 = *(int *)(lVar6 + 0x1968);
    *(int *)(lVar6 + 0x1968) = iVar3 + 1;
    if (*(int *)(lVar6 + 0x196c) < iVar3 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
    }
    puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar3 * 0x28);
    *(undefined8 *)(puVar2 + 6) = 0;
    puVar2[9] = 0;
    *puVar2 = 0xffffffff;
    puVar2[1] = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    puVar2[8] = 0;
    if (0x7fffffff < (uint)puVar2[9]) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2 + 6,0);
    }
    if (*(undefined2 **)(puVar2 + 6) != (undefined2 *)0x0) {
      **(undefined2 **)(puVar2 + 6) = 0;
    }
    puVar2[2] = 0;
    *puVar2 = local_c8;
    puVar2[1] = (undefined4)local_c4;
    puVar2[2] = local_c4._4_4_;
    local_78 = local_b8;
    FString::FString(local_70,&local_b0);
    FSoftObjectPath::operator=(puVar2 + 4,&local_78);
LAB_140f2efbe:
    if (local_b0 != 0) {
      FMemory::Free();
    }
    uVar8 = 0;
  }
  return uVar8;
}



// FUNCTION 140f2f000 FUN_140f2f000 body=2029 status=ok
// SIG undefined FUN_140f2f000(void)

void FUN_140f2f000(longlong *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong *plVar9;
  code *pcVar10;
  wchar_t *pwVar11;
  longlong *local_res8;
  longlong local_res10;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  code *local_48;
  undefined8 uStack_40;
  
  (**(code **)(*param_1 + 0x4c0))(param_1,&local_res8);
  pwVar11 = (wchar_t *)0x0;
  plVar9 = param_1 + 0xf9;
  if ((wchar_t *)*plVar9 != L"backpackGrid") {
    *(undefined4 *)(param_1 + 0xfa) = 0;
    pwVar7 = pwVar11;
    if (*(int *)((longlong)param_1 + 0x7d4) != 0xd) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar9,0xd);
      pwVar7 = (wchar_t *)(ulonglong)*(uint *)(param_1 + 0xfa);
    }
    iVar4 = (int)pwVar7 + 0xd;
    *(int *)(param_1 + 0xfa) = iVar4;
    if (*(int *)((longlong)param_1 + 0x7d4) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar9);
    }
    builtin_wcsncpy((wchar_t *)*plVar9,L"backpackGrid",0xd);
  }
  *(int *)((longlong)param_1 + 0x874) = (int)param_1[0x127];
  *(undefined4 *)(param_1 + 0x10f) = 0x28;
  FUN_140eeb880(param_1 + 0x150,plVar9,0);
  lVar1 = param_1[0x17e];
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x242) = 1;
    *(longlong *)(lVar1 + 0x244) = param_1[299];
    *(int *)(lVar1 + 0x1ec) = (int)param_1[300];
    *(undefined4 *)(lVar1 + 0x1e8) = *(undefined4 *)((longlong)param_1 + 0x964);
    *(undefined1 *)(lVar1 + 0x20a) = 2;
    *(undefined1 *)(lVar1 + 0x240) = 2;
  }
  FUN_140f08820(param_1 + 0x150,0);
  uStack_40 = (wchar_t *)((ulonglong)uStack_40._4_4_ << 0x20);
  local_48 = FUN_140f33310;
  pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBackpackSelectionChanged",L"::");
  pwVar7 = pwVar11;
  while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar7 = pwVar2;
  }
  FName::FName(&local_res8,pwVar7 + 2,1);
  FUN_1407260e0(param_1 + 0x150,param_1,&local_48,local_res8);
  uStack_40 = (wchar_t *)((ulonglong)uStack_40 & 0xffffffff00000000);
  local_48 = FUN_140f32b00;
  pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBackpackItemClicked",L"::");
  pwVar7 = pwVar11;
  while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar7 = pwVar2;
  }
  FName::FName(&local_res8,pwVar7 + 2,1);
  FUN_1407260e0(param_1 + 0x152,param_1,&local_48,local_res8);
  uStack_40 = (wchar_t *)((ulonglong)uStack_40 & 0xffffffff00000000);
  local_48 = FUN_140f33130;
  pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBackpackItemPressed",L"::");
  pwVar7 = pwVar11;
  while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar7 = pwVar2;
  }
  FName::FName(&local_res8,pwVar7 + 2,1);
  FUN_1407260e0(param_1 + 0x154,param_1,&local_48,local_res8);
  if ((wchar_t *)*plVar9 != L"backpackGridSmall") {
    *(undefined4 *)(param_1 + 0xfa) = 0;
    pwVar7 = pwVar11;
    if (*(int *)((longlong)param_1 + 0x7d4) != 0x12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar9,0x12);
      pwVar7 = (wchar_t *)(ulonglong)*(uint *)(param_1 + 0xfa);
    }
    iVar4 = (int)pwVar7 + 0x12;
    *(int *)(param_1 + 0xfa) = iVar4;
    if (*(int *)((longlong)param_1 + 0x7d4) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar9);
    }
    builtin_wcsncpy((wchar_t *)*plVar9,L"backpackGridSmall",0x12);
  }
  *(undefined4 *)((longlong)param_1 + 0x874) = *(undefined4 *)((longlong)param_1 + 0x93c);
  FUN_140eeb880(param_1 + 0x183,plVar9,0);
  lVar1 = param_1[0x1b1];
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x242) = 1;
    *(longlong *)(lVar1 + 0x244) = param_1[0x12d];
    *(int *)(lVar1 + 0x1ec) = (int)param_1[0x12e];
    *(undefined4 *)(lVar1 + 0x1e8) = *(undefined4 *)((longlong)param_1 + 0x974);
    *(undefined1 *)(lVar1 + 0x20a) = 2;
    *(undefined1 *)(lVar1 + 0x240) = 2;
  }
  FUN_140f08820(param_1 + 0x183,0);
  uStack_40 = (wchar_t *)((ulonglong)uStack_40 & 0xffffffff00000000);
  local_48 = FUN_140f33310;
  pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBackpackSelectionChanged",L"::");
  pwVar7 = pwVar11;
  while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar7 = pwVar2;
  }
  FName::FName(&local_res8,pwVar7 + 2,1);
  FUN_1407260e0(param_1 + 0x183,param_1,&local_48,local_res8);
  uStack_40 = (wchar_t *)((ulonglong)uStack_40 & 0xffffffff00000000);
  local_48 = FUN_140f32b00;
  pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBackpackItemClicked",L"::");
  pwVar7 = pwVar11;
  while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar7 = pwVar2;
  }
  FName::FName(&local_res8,pwVar7 + 2,1);
  FUN_1407260e0(param_1 + 0x185,param_1,&local_48,local_res8);
  local_48 = (code *)0x0;
  uStack_40 = (wchar_t *)0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"equippedSlots",0x1c);
  local_68 = (longlong *)0x0;
  local_60 = 0;
  cVar3 = FUN_140ecf270(param_1,param_1 + 0x1c0,&local_48,0,6,&local_68);
  plVar9 = local_68;
  for (iVar4 = (int)local_60; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_48 != (code *)0x0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    local_68 = (longlong *)0x0;
    local_60 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,L"equippedSlot0",0x1c);
    local_48 = (code *)0x0;
    uStack_40 = (wchar_t *)0x0;
    cVar3 = FUN_140f15b10(param_1[0x1c0],param_1 + 0x1b6,&local_68,0,6,&local_48);
    pcVar10 = local_48;
    for (iVar4 = (int)uStack_40; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*(longlong *)pcVar10 != 0) {
        FMemory::Free();
      }
      pcVar10 = pcVar10 + 0x10;
    }
    if (local_48 != (code *)0x0) {
      FMemory::Free(local_48);
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (cVar3 != '\0') {
      local_68 = (longlong *)0x0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      FWeakObjectPtr::operator=(&local_68,0);
      FWeakObjectPtr::operator=(&local_60,0);
      FWeakObjectPtr::operator=(&local_58,0);
      FWeakObjectPtr::operator=(&local_50,0);
      pcVar10 = (code *)param_1[0x1b6];
      pwVar7 = pwVar11;
      local_48 = pcVar10;
      if (pcVar10 != (code *)0x0) {
        uVar6 = UBlendableInterface::GetPrivateStaticClass();
        pwVar7 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(pcVar10,uVar6);
      }
      uStack_40 = pwVar7;
      FUN_142ecfd10(param_1,&local_48,&local_68);
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBrowseBackpackButtonClicked",L"::");
      while (pwVar5 = pwVar7, pwVar5 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar11 = pwVar5;
      }
      FName::FName(&local_res10,pwVar11 + 2,1);
      lVar1 = param_1[0x1b6];
      FWeakObjectPtr::operator=(lVar1 + 0x1b0,param_1);
      *(longlong *)(lVar1 + 0x1b8) = local_res10;
      local_res8 = (longlong *)0x0;
      if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(lVar1 + 0x1b0), lVar8 != 0)) {
        UObject::FindFunction(lVar8,*(undefined8 *)(lVar1 + 0x1b8));
      }
    }
    local_48 = (code *)0x0;
    uStack_40 = (wchar_t *)0xd;
    local_res8 = param_1;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"pageUpButton",0x1a);
    FUN_140f1a260(&local_res8,param_1 + 0x1c1,&local_48);
    if (local_48 != (code *)0x0) {
      FMemory::Free();
    }
    local_48 = (code *)0x0;
    uStack_40 = (wchar_t *)0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"pageDownButton",0x1e);
    FUN_140f1a260(&local_res8,param_1 + 0x1c2,&local_48);
    if (local_48 != (code *)0x0) {
      FMemory::Free();
    }
    local_68 = (longlong *)0x0;
    local_60 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,L"pageBackground",0x1e);
    local_48 = (code *)0x0;
    uStack_40 = (wchar_t *)0x0;
    FUN_140e98b90(param_1[0x1c0],param_1 + 0x1c3,&local_68,0,6,&local_48);
    pcVar10 = local_48;
    for (iVar4 = (int)uStack_40; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*(longlong *)pcVar10 != 0) {
        FMemory::Free();
      }
      pcVar10 = pcVar10 + 0x10;
    }
    if (local_48 != (code *)0x0) {
      FMemory::Free(local_48);
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f2f7f0 FUN_140f2f7f0 body=271 status=ok
// SIG undefined FUN_140f2f7f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f2f7f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140f26e60;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f2f900 FUN_140f2f900 body=497 status=ok
// SIG undefined FUN_140f2f900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f2f900(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_b8 [80];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140f2f97c;
  }
  lVar2 = 0;
LAB_140f2f97c:
  FWeakObjectPtr::operator=(param_1 + 0x8c4,lVar2);
  FWeakObjectPtr::operator=(param_1 + 0x8cc,param_1);
  FWeakObjectPtr::operator=(&local_c8,0);
  *(undefined4 *)(param_1 + 0x8d4) = local_c8;
  *(undefined4 *)(param_1 + 0x8d8) = local_c4;
  uVar4 = FUN_1413565b0();
  *(undefined8 *)(param_1 + 0x8a0) = uVar4;
  *(undefined1 *)(param_1 + 0x8c0) = 1;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_140f26ab0;
  FUN_1420849a0(param_1,local_b8,local_68);
  if (local_28 != 0) {
    plVar6 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar6 = local_38;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_14208c4f0(param_1,local_b8);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_140f26da0;
  FUN_1420849a0(param_1,local_b8,local_68);
  if (local_28 != 0) {
    plVar6 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar6 = local_38;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_14208c4f0(param_1,local_b8);
  return;
}



// FUNCTION 140f2fb00 FUN_140f2fb00 body=5302 status=ok
// SIG undefined FUN_140f2fb00(void)

void FUN_140f2fb00(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  bool bVar25;
  longlong local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong **pplVar26;
  ulonglong local_458;
  longlong *local_450;
  undefined8 local_448;
  wchar_t *local_440;
  undefined8 local_438;
  undefined8 local_430;
  longlong *local_428;
  undefined8 local_420;
  longlong local_418;
  undefined8 local_410;
  longlong *local_408;
  undefined8 local_400;
  longlong local_3f8;
  undefined8 local_3f0;
  longlong local_3e8;
  undefined8 local_3e0;
  longlong *local_3d8;
  undefined8 local_3d0;
  longlong local_3c8;
  undefined8 local_3c0;
  longlong *local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  undefined8 local_390;
  longlong local_388;
  undefined8 local_380;
  longlong local_378;
  undefined8 local_370;
  longlong local_368;
  undefined8 local_360;
  longlong *local_358;
  undefined8 local_350;
  longlong local_348;
  undefined8 local_340;
  longlong *local_338;
  undefined8 local_330;
  longlong local_328;
  undefined8 local_320;
  longlong *local_318;
  undefined8 local_310;
  longlong local_308;
  undefined8 local_300;
  longlong *local_2f8;
  undefined8 local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  undefined8 local_2c0;
  longlong *local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  ulonglong local_2a0;
  longlong *local_298;
  undefined8 local_290;
  ulonglong local_288;
  longlong *plStack_280;
  ulonglong local_278;
  longlong *plStack_270;
  undefined2 *local_268;
  int local_260;
  undefined2 local_258 [2];
  undefined8 local_254;
  longlong local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined2 local_220 [2];
  undefined8 local_21c;
  longlong local_210;
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined2 local_1e8 [2];
  undefined8 local_1e4;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined2 local_1b0 [2];
  undefined8 local_1ac;
  longlong local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined2 local_178 [2];
  undefined8 local_174;
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined2 local_140 [2];
  undefined8 local_13c;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8 [2];
  undefined8 local_d8;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [32];
  
  uVar20 = 0;
  (**(code **)(*param_1 + 0x4c0))(param_1,local_res20);
  local_368 = 0;
  local_360 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,0);
  FGenericPlatformString::Memcpy(local_368,L"backpack",0x12);
  local_428 = (longlong *)0x0;
  plVar16 = param_1 + 0x1b7;
  local_420 = 0;
  local_b8 = 0;
  cVar2 = FUN_140ecf270(param_1,plVar16,&local_368,0,6,&local_428);
  plVar10 = local_428;
  for (iVar12 = (int)local_420; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_428 != (longlong *)0x0) {
    FMemory::Free(local_428);
  }
  if (local_368 != 0) {
    FMemory::Free();
  }
  if (cVar2 != '\0') {
    uVar4 = FUN_142085870(*plVar16,local_a0,L"backpackHeader.filterText");
    FUN_142ede260(param_1 + 0x1b8,uVar4);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_98 + 1;
      lVar15 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar14 = (int *)((longlong)local_98 + 0xc);
        iVar12 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    uVar4 = FUN_142085870(*plVar16,local_90,L"backpackHeader.sortText");
    FUN_142ede260(param_1 + 0x1bb,uVar4);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_88 + 1;
      lVar15 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar14 = (int *)((longlong)local_88 + 0xc);
        iVar12 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    local_348 = 0;
    local_340 = 0x25;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_348,0);
    FGenericPlatformString::Memcpy(local_348,L"backpackHeader.backpackPrevHint.hint",0x4a);
    local_358 = (longlong *)0x0;
    local_350 = 0;
    local_c0 = 0;
    cVar2 = FUN_140e98630(*plVar16,param_1 + 0x1be,&local_348,0,6,&local_358);
    plVar10 = local_358;
    for (iVar12 = (int)local_350; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_358 != (longlong *)0x0) {
      FMemory::Free(local_358);
    }
    if (local_348 != 0) {
      FMemory::Free();
    }
    if (cVar2 != '\0') {
      lVar15 = param_1[0x1be];
      local_100 = uVar20;
      local_108 = lVar15;
      if (lVar15 != 0) {
        uVar4 = UBlendableInterface::GetPrivateStaticClass();
        local_100 = UObjectBaseUtility::GetInterfaceAddress(lVar15,uVar4);
      }
      FUN_142ecff00(param_1,&local_108,DAT_1468725e8);
    }
    local_328 = 0;
    local_320 = 0x25;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_328,0);
    FGenericPlatformString::Memcpy(local_328,L"backpackHeader.backpackNextHint.hint",0x4a);
    local_338 = (longlong *)0x0;
    local_330 = 0;
    local_b0 = 0;
    cVar2 = FUN_140e98630(*plVar16,param_1 + 0x1bf,&local_328,0,6,&local_338);
    plVar16 = local_338;
    for (iVar12 = (int)local_330; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar16 != 0) {
        FMemory::Free();
      }
      plVar16 = plVar16 + 2;
    }
    if (local_338 != (longlong *)0x0) {
      FMemory::Free(local_338);
    }
    if (local_328 != 0) {
      FMemory::Free();
    }
    if (cVar2 != '\0') {
      lVar15 = param_1[0x1bf];
      local_f0 = uVar20;
      local_f8 = lVar15;
      if (lVar15 != 0) {
        uVar4 = UBlendableInterface::GetPrivateStaticClass();
        local_f0 = UObjectBaseUtility::GetInterfaceAddress(lVar15,uVar4);
      }
      FUN_142ecff00(param_1,&local_f8,DAT_1468725e0);
    }
  }
  lVar15 = param_1[0xc0];
  local_2b0 = lVar15;
  if (lVar15 != 0) {
    cVar2 = FUN_140f51910();
    if (cVar2 == '\0') {
LAB_140f2ff4d:
      bVar25 = false;
    }
    else {
      local_308 = 0;
      local_300 = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_308,0);
      FGenericPlatformString::Memcpy(local_308,L"tutorialWrapper",0x20);
      local_318 = (longlong *)0x0;
      local_310 = 0;
      local_c8 = 0;
      uVar20 = 3;
      cVar2 = FUN_140f157a0(lVar15,param_1 + 0x1c4,&local_308,0,6,&local_318);
      if (cVar2 == '\0') goto LAB_140f2ff4d;
      bVar25 = true;
    }
    if ((uVar20 & 2) != 0) {
      uVar20 = (ulonglong)((uint)uVar20 & 0xfffffffd);
      plVar16 = local_318;
      for (iVar12 = (int)local_310; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (*plVar16 != 0) {
          FMemory::Free();
        }
        plVar16 = plVar16 + 2;
      }
      if (local_318 != (longlong *)0x0) {
        FMemory::Free(local_318);
      }
    }
    if (((uVar20 & 1) != 0) && (uVar20 = (ulonglong)((uint)uVar20 & 0xfffffffe), local_308 != 0)) {
      FMemory::Free();
    }
    if (bVar25) {
      local_440 = (wchar_t *)0x0;
      local_438 = 0;
      local_430 = 0;
      puVar5 = (undefined8 *)FName::FName(local_d0,"MouseBlocker",1);
      local_448 = *puVar5;
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_440,0x15);
      iVar12 = (int)local_438 + 0x15;
      local_438 = CONCAT44(local_438._4_4_,iVar12);
      if (local_438._4_4_ < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_440);
      }
      plVar16 = param_1 + 0x123;
      builtin_wcsncpy(local_440,L"TutorialMouseBlocker",0x15);
      iVar12 = (int)param_1[0x124];
      *(int *)(param_1 + 0x124) = iVar12 + 1;
      local_2b8 = plVar16;
      if (*(int *)((longlong)param_1 + 0x924) < iVar12 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(plVar16,iVar12);
      }
      puVar5 = (undefined8 *)((longlong)iVar12 * 0x20 + *plVar16);
      *puVar5 = local_448;
      FString::FString(puVar5 + 1,&local_440);
      uVar4 = local_448;
      puVar5[3] = local_430;
      lVar11 = param_1[0x121];
      lVar15 = lVar11 + (longlong)(int)param_1[0x122] * 0x18;
      for (; lVar11 != lVar15; lVar11 = lVar11 + 0x18) {
        lVar24 = *(longlong *)(lVar11 + 8);
        lVar21 = (longlong)*(int *)(lVar11 + 0x10) * 0xd0 + lVar24;
        if (lVar24 != lVar21) {
          piVar14 = (int *)(lVar24 + 0x70);
          do {
            iVar12 = *piVar14;
            *piVar14 = iVar12 + 1;
            if (piVar14[1] < iVar12 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(piVar14 + -2,iVar12)
              ;
            }
            plVar16 = (longlong *)(piVar14 + -2);
            lVar24 = lVar24 + 0xd0;
            piVar14 = piVar14 + 0x34;
            *(undefined8 *)(*plVar16 + (longlong)iVar12 * 8) = uVar4;
          } while (lVar24 != lVar21);
        }
        plVar16 = local_2b8;
      }
      FUN_140fda020(param_1[0x1c4],local_2b0,plVar16);
      if (local_440 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
  }
  uVar23 = 0;
  uVar18 = (uint)uVar20;
  local_2e8 = 0;
  local_2e0 = 0x23;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e8,0);
  FGenericPlatformString::Memcpy(local_2e8,L"equippedSlots.equippedSlotFeedback",0x46);
  local_2f8 = (longlong *)0x0;
  local_2f0 = 0;
  local_2b0 = 0;
  cVar2 = FUN_140f14ae0(param_1,param_1 + 0x14e,&local_2e8,0,6,&local_2f8);
  plVar16 = local_2f8;
  for (iVar12 = (int)local_2f0; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar16 != 0) {
      FMemory::Free();
    }
    plVar16 = plVar16 + 2;
  }
  if (local_2f8 != (longlong *)0x0) {
    FMemory::Free(local_2f8);
  }
  if (local_2e8 != 0) {
    FMemory::Free();
  }
  if (cVar2 != '\0') {
    local_21c = 0;
    local_210 = 0;
    local_208 = 0;
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_220[0] = 2;
    local_2d8 = 0;
    local_2d0 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d8,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_2d8,8,"enabled",8,0x3f);
    FUN_14208f550(param_1[0x14e],&local_2d8,local_220);
    if (local_2d8 != 0) {
      FMemory::Free();
    }
    if (local_200 != 0) {
      FMemory::Free();
    }
    if (local_210 != 0) {
      FMemory::Free();
    }
    local_1e4 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1e8[0] = 2;
    local_2c8 = 0;
    local_2c0 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c8,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_2c8,0xd,"mouseEnabled",0xd,0x3f);
    FUN_14208f550(param_1[0x14e],&local_2c8,local_1e8);
    if (local_2c8 != 0) {
      FMemory::Free();
    }
    if (local_1c8 != 0) {
      FMemory::Free();
    }
    if (local_1d8 != 0) {
      FMemory::Free();
    }
    local_1ac = 0;
    local_1a0 = 0;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0;
    local_180 = 0;
    local_1b0[0] = 2;
    local_418 = 0;
    local_410 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_418,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_418,0xe,"mouseChildren",0xe,0x3f);
    FUN_14208f550(param_1[0x14e],&local_418,local_1b0);
    if (local_418 != 0) {
      FMemory::Free();
    }
    if (local_190 != 0) {
      FMemory::Free();
    }
    if (local_1a0 != 0) {
      FMemory::Free();
    }
  }
  local_3f8 = 0;
  local_3f0 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3f8,0);
  FGenericPlatformString::Memcpy(local_3f8,L"backpack.backpackFeedback",0x34);
  local_408 = (longlong *)0x0;
  local_400 = 0;
  local_2b8 = (longlong *)0x0;
  cVar2 = FUN_140f14ae0(param_1,param_1 + 0x14f,&local_3f8,0,6,&local_408);
  plVar16 = local_408;
  for (iVar12 = (int)local_400; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar16 != 0) {
      FMemory::Free();
    }
    plVar16 = plVar16 + 2;
  }
  if (local_408 != (longlong *)0x0) {
    FMemory::Free(local_408);
  }
  if (local_3f8 != 0) {
    FMemory::Free();
  }
  if (cVar2 != '\0') {
    local_174 = 0;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0;
    local_150 = 0;
    local_148 = 0;
    local_178[0] = 2;
    local_3c8 = 0;
    local_3c0 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3c8,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_3c8,8,"enabled",8,0x3f);
    FUN_14208f550(param_1[0x14f],&local_3c8,local_178);
    if (local_3c8 != 0) {
      FMemory::Free();
    }
    if (local_158 != 0) {
      FMemory::Free();
    }
    if (local_168 != 0) {
      FMemory::Free();
    }
    local_13c = 0;
    local_130 = 0;
    local_128 = 0;
    local_120 = 0;
    local_118 = 0;
    local_110 = 0;
    local_140[0] = 2;
    local_378 = 0;
    local_370 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_378,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_378,0xd,"mouseEnabled",0xd,0x3f);
    FUN_14208f550(param_1[0x14f],&local_378,local_140);
    if (local_378 != 0) {
      FMemory::Free();
    }
    if (local_120 != 0) {
      FMemory::Free();
    }
    if (local_130 != 0) {
      FMemory::Free();
    }
    local_254 = 0;
    local_248 = 0;
    local_240 = 0;
    local_238 = 0;
    local_230 = 0;
    local_228 = 0;
    local_258[0] = 2;
    local_388 = 0;
    local_380 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_388,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_388,0xe,"mouseChildren",0xe,0x3f);
    FUN_14208f550(param_1[0x14f],&local_388,local_258);
    if (local_388 != 0) {
      FMemory::Free();
    }
    if (local_238 != 0) {
      FMemory::Free();
    }
    if (local_248 != 0) {
      FMemory::Free();
    }
  }
  local_3a8 = 0;
  local_3a0 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3a8,0);
  FGenericPlatformString::Memcpy(local_3a8,L"backpackAmmo",0x1a);
  local_398 = (longlong *)0x0;
  local_390 = 0;
  local_290 = 0;
  FUN_140e96f30(param_1,&local_3a8,0,6,&local_398);
  FWeakObjectPtr::operator=((longlong)param_1 + 0xf44);
  plVar16 = local_398;
  for (iVar12 = (int)local_390; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar16 != 0) {
      FMemory::Free();
    }
    plVar16 = plVar16 + 2;
  }
  if (local_398 != (longlong *)0x0) {
    FMemory::Free(local_398);
  }
  if (local_3a8 != 0) {
    FMemory::Free();
  }
  cVar2 = FWeakObjectPtr::IsValid((longlong)param_1 + 0xf44);
  iVar12 = 0;
  if (cVar2 != '\0') {
    if ((param_1[0x1eb] == 0) || (param_1[0x1ec] == 0)) {
LAB_140f3086a:
      uVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0xf44);
      FUN_142085870(uVar4,local_80,L"ammoLabel");
      FUN_142ede260(param_1 + 0x1ea);
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_78 + 1;
        lVar15 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar14 = (int *)((longlong)local_78 + 0xc);
          iVar13 = *piVar14;
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_78 + 8))(local_78);
          }
        }
      }
    }
    else {
      piVar14 = (int *)(param_1[0x1ec] + 8);
      LOCK();
      iVar13 = *piVar14;
      if (iVar13 == 0) {
        *piVar14 = 0;
        iVar13 = 0;
      }
      UNLOCK();
      if (iVar13 < 1) goto LAB_140f3086a;
    }
    if ((param_1[0x1eb] != 0) && (param_1[0x1ec] != 0)) {
      piVar14 = (int *)(param_1[0x1ec] + 8);
      LOCK();
      iVar13 = *piVar14;
      if (iVar13 == 0) {
        *piVar14 = 0;
        iVar13 = 0;
      }
      UNLOCK();
      if (0 < iVar13) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x1ea,param_1 + 0x12f,1,0);
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x1f0));
    LOCK();
    *(undefined4 *)(param_1 + 0x1f1) = 1;
    UNLOCK();
    iVar13 = (int)param_1[0xf2];
    lVar15 = (longlong)iVar13;
    if (0 < iVar13) {
      plVar16 = param_1 + 0x1ee;
      *(undefined4 *)(param_1 + 0x1ef) = 0;
      if (*(int *)((longlong)param_1 + 0xf7c) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar16);
        iVar12 = (int)param_1[0x1ef];
      }
      *(int *)(param_1 + 0x1ef) = iVar12 + iVar13;
      if (*(int *)((longlong)param_1 + 0xf7c) < iVar12 + iVar13) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16);
      }
      _guard_xfg_dispatch_icall_nop((void *)(*plVar16 + (longlong)iVar12 * 8),0,lVar15 * 8);
      if (lVar15 != 0) {
        local_res8 = 0;
        uVar22 = uVar23;
        do {
          iVar12 = (int)uVar22;
          uVar6 = uVar23;
          if ((-1 < iVar12) && (iVar12 < (int)param_1[0x1ef])) {
            local_3b8 = (longlong *)0x0;
            local_3b0 = 0;
            local_d8 = 0;
            uVar20 = (ulonglong)((uint)uVar20 | 0xc);
            FString::PrintfImpl(local_e8,L"ammoCount%u",uVar22);
            uVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0xf44);
            uVar6 = FUN_140f133b0(uVar4,local_e8,0,6,&local_3b8);
          }
          if (((uVar20 & 8) != 0) &&
             (uVar20 = (ulonglong)((uint)uVar20 & 0xfffffff7), local_e8[0] != 0)) {
            FMemory::Free();
          }
          if ((uVar20 & 4) != 0) {
            uVar20 = (ulonglong)((uint)uVar20 & 0xfffffffb);
            plVar16 = local_3b8;
            for (iVar13 = (int)local_3b0; iVar13 != 0; iVar13 = iVar13 + -1) {
              if (*plVar16 != 0) {
                FMemory::Free();
              }
              plVar16 = plVar16 + 2;
            }
            if (local_3b8 != (longlong *)0x0) {
              FMemory::Free();
            }
          }
          uVar18 = (uint)uVar20;
          if (uVar6 != 0) {
            FString::PrintfImpl(&local_268,L"ammoBG%u",uVar22);
            puVar17 = &DAT_143f3eda8;
            if (local_260 != 0) {
              puVar17 = local_268;
            }
            uVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0xf44);
            puVar5 = (undefined8 *)FUN_142085870(uVar4,local_70,puVar17);
            *(undefined8 *)(uVar6 + 0x1b0) = *puVar5;
            plVar16 = (longlong *)puVar5[1];
            plVar10 = *(longlong **)(uVar6 + 0x1b8);
            if (plVar16 != plVar10) {
              if (plVar16 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
                UNLOCK();
                plVar10 = *(longlong **)(uVar6 + 0x1b8);
              }
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                piVar14 = (int *)((longlong)plVar10 + 0xc);
                iVar13 = *piVar14;
                *piVar14 = *piVar14 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar10 + 8))(plVar10,1);
                }
              }
              *(longlong **)(uVar6 + 0x1b8) = plVar16;
            }
            plVar16 = (longlong *)puVar5[1];
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              plVar10 = plVar16 + 1;
              lVar11 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar16)(plVar16);
                LOCK();
                piVar14 = (int *)((longlong)plVar16 + 0xc);
                iVar13 = *piVar14;
                *piVar14 = *piVar14 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar16 + 8))(plVar16,1);
                }
              }
            }
            if (local_268 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            *(ulonglong *)(param_1[0x1ee] + local_res8 * 8) = uVar6;
          }
          local_res8 = local_res8 + 1;
          uVar22 = (ulonglong)(iVar12 + 1);
        } while (local_res8 != lVar15);
      }
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x1e8) = 1;
    UNLOCK();
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x1f0));
    LOCK();
    *(undefined4 *)(param_1 + 0x1f1) = 0;
    UNLOCK();
  }
  local_3e8 = 0;
  local_3e0 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3e8,0);
  FGenericPlatformString::Memcpy(local_3e8,L"dragInventoryItem",0x24);
  pplVar26 = &local_3d8;
  local_3d8 = (longlong *)0x0;
  local_3d0 = 0;
  local_a8 = 0;
  lVar15 = FUN_140f13750(param_1,&local_3e8,0,6,pplVar26);
  param_1[0x1c5] = lVar15;
  plVar16 = local_3d8;
  for (iVar12 = (int)local_3d0; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar16 != 0) {
      FMemory::Free();
    }
    plVar16 = plVar16 + 2;
  }
  if (local_3d8 != (longlong *)0x0) {
    FMemory::Free(local_3d8);
  }
  if (local_3e8 != 0) {
    FMemory::Free();
  }
  lVar15 = param_1[0x1c5];
  if (lVar15 == 0) {
    puVar7 = &local_278;
    local_278 = 0;
    plStack_270 = (longlong *)0x0;
    uVar19 = 0x20;
    goto LAB_140f30df0;
  }
  if ((*(longlong *)(lVar15 + 0x28) == 0) || (*(longlong *)(lVar15 + 0x30) == 0)) {
LAB_140f30cfd:
    puVar7 = &local_288;
    local_288 = 0;
    plStack_280 = (longlong *)0x0;
    uVar23 = 0;
    uVar3 = 0x80;
  }
  else {
    piVar14 = (int *)(*(longlong *)(lVar15 + 0x30) + 8);
    LOCK();
    iVar12 = *piVar14;
    if (iVar12 == 0) {
      *piVar14 = 0;
      iVar12 = 0;
    }
    UNLOCK();
    if (iVar12 < 1) goto LAB_140f30cfd;
    local_450 = *(longlong **)(lVar15 + 0x30);
    local_458 = 0;
    if (local_450 == (longlong *)0x0) {
LAB_140f30cec:
      puVar7 = &local_458;
      uVar3 = 0x40;
      uVar23 = local_458;
    }
    else {
      LOCK();
      iVar12 = (int)local_450[1];
      bVar25 = iVar12 == 0;
      if (bVar25) {
        *(int *)(local_450 + 1) = 0;
        iVar12 = 0;
      }
      UNLOCK();
      while (!bVar25) {
        LOCK();
        bVar25 = iVar12 == (int)local_450[1];
        if (bVar25) {
          *(int *)(local_450 + 1) = iVar12 + 1;
        }
        UNLOCK();
        if (bVar25) {
          if (local_450 != (longlong *)0x0) {
            local_458 = *(ulonglong *)(lVar15 + 0x28);
          }
          goto LAB_140f30cec;
        }
        LOCK();
        iVar12 = (int)local_450[1];
        bVar25 = iVar12 == 0;
        if (bVar25) {
          *(int *)(local_450 + 1) = 0;
          iVar12 = 0;
        }
        UNLOCK();
      }
      puVar7 = &local_458;
      local_450 = (longlong *)0x0;
      uVar3 = 0x40;
      uVar23 = 0;
    }
  }
  uVar19 = uVar18 | 0x10 | uVar3;
  local_2a0 = uVar23;
  plVar16 = (longlong *)puVar7[1];
  puVar7[1] = 0;
  plVar10 = plStack_280;
  local_298 = plVar16;
  *puVar7 = 0;
  if (((char)uVar19 < '\0') &&
     (uVar19 = uVar18 | 0x10 | uVar3 & 0xffffff7f, plStack_280 != (longlong *)0x0)) {
    LOCK();
    plVar16 = plStack_280 + 1;
    lVar15 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plStack_280)(plStack_280);
      LOCK();
      piVar14 = (int *)((longlong)plVar10 + 0xc);
      iVar12 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_280 + 8))(plStack_280,1);
      }
    }
  }
  plVar16 = local_450;
  if (((uVar19 & 0x40) != 0) && (uVar19 = uVar19 & 0xffffffbf, local_450 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_450 + 1;
    lVar15 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_450)(local_450);
      LOCK();
      piVar14 = (int *)((longlong)plVar16 + 0xc);
      iVar12 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_450 + 8))(local_450,1);
      }
    }
  }
  puVar7 = &local_2a0;
LAB_140f30df0:
  plVar16 = (longlong *)puVar7[1];
  puVar7[1] = 0;
  plVar10 = plStack_270;
  *puVar7 = 0;
  if (((uVar19 & 0x20) != 0) && (uVar19 = uVar19 & 0xffffffdf, plStack_270 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_270 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plStack_270)(plStack_270);
      LOCK();
      piVar14 = (int *)((longlong)plVar10 + 0xc);
      iVar12 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_270 + 8))(plStack_270,1);
      }
    }
  }
  plVar10 = local_298;
  if (((uVar19 & 0x10) != 0) && (local_298 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_298 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_298)(local_298);
      LOCK();
      piVar14 = (int *)((longlong)plVar10 + 0xc);
      iVar12 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_298 + 8))(local_298,1);
      }
    }
  }
  if (uVar23 != 0) {
    FUN_142051fa0(uVar23,1);
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar16 + 1;
    lVar15 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar14 = (int *)((longlong)plVar16 + 0xc);
      iVar12 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  if (param_1[0x13c] == 0) {
    FUN_14172a070(local_res18,0);
    uVar4 = GetTransientPackage();
    FUN_1417846f0(uVar4,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_2a8 = 0;
    uVar8 = FUN_142f1c920();
    lVar15 = FUN_1417985e0(uVar8,uVar4,local_2a8,0,(ulonglong)pplVar26 & 0xffffffff00000000,0,0,0,0)
    ;
    param_1[0x13c] = lVar15;
    FUN_14172a400(local_res18);
  }
  puVar9 = (undefined1 *)FUN_140f16950(local_60,0,0);
  *(undefined1 *)((longlong)param_1 + 0xea4) = *puVar9;
  *(undefined4 *)(param_1 + 0x1d5) = *(undefined4 *)(puVar9 + 4);
  *(undefined4 *)((longlong)param_1 + 0xeac) = *(undefined4 *)(puVar9 + 8);
  *(undefined4 *)(param_1 + 0x1d6) = *(undefined4 *)(puVar9 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0xeb4) = *(undefined4 *)(puVar9 + 0x10);
  return;
}



// FUNCTION 140f30fc0 FUN_140f30fc0 body=1113 status=ok
// SIG undefined FUN_140f30fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f30fc0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  longlong **local_140;
  longlong *local_138;
  undefined8 local_130;
  undefined8 local_128;
  int iStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  int iStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  int iStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined1 local_f0 [24];
  undefined1 local_d8 [80];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  iStack_120 = 0xe;
  uStack_11c = 0;
  uVar8 = 0;
  local_128 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
  FGenericPlatformString::Memcpy(local_128,L"equippedSlots",0x1c);
  local_140 = &local_138;
  local_138 = (longlong *)0x0;
  local_148 = 6;
  local_130 = 0;
  cVar1 = FUN_140ecf270(param_1,param_1 + 0xe00,&local_128,0);
  plVar6 = local_138;
  for (iVar9 = (int)local_130; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_138 != (longlong *)0x0) {
    FMemory::Free(local_138);
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  if (cVar1 != '\0') {
    iVar9 = *(int *)(param_1 + 0xa08);
    lVar7 = (longlong)*(int *)(param_1 + 0x780);
    iVar4 = *(int *)(param_1 + 0x780) - *(int *)(param_1 + 0xa08);
    iVar2 = iVar9 + iVar4;
    *(int *)(param_1 + 0xa08) = iVar2;
    if (*(int *)(param_1 + 0xa0c) < iVar2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<216,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0xa00);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar9 * 0xd8 + *(longlong *)(param_1 + 0xa00)),0,
               (longlong)iVar4 * 0xd8);
    if (lVar7 != 0) {
      local_138 = (longlong *)0x0;
      uVar11 = uVar8;
      do {
        lVar5 = *(longlong *)(param_1 + 0xa00) + uVar8;
        lVar10 = *(longlong *)(param_1 + 0x778) + (longlong)local_138;
        FString::operator=(lVar5 + 0x38,lVar10);
        FString::operator=(lVar5 + 0x48,lVar10 + 0x10);
        *(undefined8 *)(lVar5 + 0x58) = *(undefined8 *)(lVar10 + 0x20);
        *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)(lVar10 + 0x28);
        FString::operator=(lVar5 + 0x68,lVar10 + 0x30);
        FString::operator=(lVar5 + 0x78,lVar10 + 0x40);
        *(undefined4 *)(lVar5 + 0x88) = *(undefined4 *)(lVar10 + 0x50);
        *(undefined4 *)(lVar5 + 0x8c) = *(undefined4 *)(lVar10 + 0x54);
        *(undefined4 *)(lVar5 + 0x90) = *(undefined4 *)(lVar10 + 0x58);
        local_f8 = *(undefined8 *)(lVar10 + 0x60);
        FString::FString(local_f0,lVar10 + 0x68);
        FSoftObjectPath::operator=(lVar5 + 0x98,&local_f8);
        FString::operator=(lVar5 + 0xb0,lVar10 + 0x78);
        *(undefined8 *)(lVar5 + 0xc0) = *(undefined8 *)(lVar10 + 0x88);
        *(undefined4 *)(lVar5 + 200) = *(undefined4 *)(lVar10 + 0x90);
        *(undefined1 *)(lVar5 + 0xcc) = *(undefined1 *)(lVar10 + 0x94);
        *(undefined1 *)(lVar5 + 0xcd) = *(undefined1 *)(lVar10 + 0x95);
        *(undefined4 *)(lVar5 + 0xd0) = *(undefined4 *)(lVar10 + 0x98);
        iVar9 = (int)uVar11;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_128 = param_1;
        iStack_120 = iVar9;
        puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_78);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &PTR_FUN_143f77c18;
          *(undefined4 *)(puVar3 + 1) = (undefined4)local_128;
          *(undefined4 *)((longlong)puVar3 + 0xc) = local_128._4_4_;
          *(int *)(puVar3 + 2) = iStack_120;
          *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_11c;
        }
        local_88[0] = &LAB_140f26e80;
        FUN_1420849a0(param_1,local_d8,local_88);
        if (local_48 != 0) {
          plVar6 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar6 = local_58;
          }
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        FUN_14208c4f0(param_1,local_d8);
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_118 = param_1;
        iStack_110 = iVar9;
        puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_78);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &PTR_FUN_143f77c18;
          *(undefined4 *)(puVar3 + 1) = (undefined4)local_118;
          *(undefined4 *)((longlong)puVar3 + 0xc) = local_118._4_4_;
          *(int *)(puVar3 + 2) = iStack_110;
          *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_10c;
        }
        local_88[0] = &LAB_140f27060;
        FUN_1420849a0(param_1,local_d8,local_88);
        if (local_48 != 0) {
          plVar6 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar6 = local_58;
          }
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        FUN_14208c4f0(param_1,local_d8);
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_108 = param_1;
        iStack_100 = iVar9;
        puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_78);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &PTR_FUN_143f77c18;
          *(undefined4 *)(puVar3 + 1) = (undefined4)local_108;
          *(undefined4 *)((longlong)puVar3 + 0xc) = local_108._4_4_;
          *(int *)(puVar3 + 2) = iStack_100;
          *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_fc;
        }
        local_88[0] = &LAB_140f26e70;
        FUN_1420849a0(param_1,local_d8,local_88);
        if (local_48 != 0) {
          plVar6 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar6 = local_58;
          }
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        FUN_14208c4f0(param_1,local_d8);
        uVar11 = (ulonglong)(iVar9 + 1);
        local_138 = local_138 + 0x14;
        uVar8 = uVar8 + 0xd8;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  return;
}



// FUNCTION 140f31440 FUN_140f31440 body=271 status=ok
// SIG undefined FUN_140f31440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f31440(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140f27010;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f31550 FUN_140f31550 body=356 status=ok
// SIG undefined FUN_140f31550(void)

void FUN_140f31550(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  
  plVar3 = (longlong *)(param_1 + 0x6c0);
  if (plVar3 != param_2) {
    iVar9 = *(int *)(param_1 + 0x6c8);
    if (iVar9 != 0) {
      plVar10 = (longlong *)(*plVar3 + 0x10);
      do {
        plVar5 = (longlong *)*plVar10;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
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
        plVar10 = plVar10 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar9 = (int)param_2[1];
    puVar6 = (undefined8 *)*param_2;
    *(int *)(param_1 + 0x6c8) = iVar9;
    if ((iVar9 == 0) && (*(int *)(param_1 + 0x6cc) == 0)) {
      *(undefined4 *)(param_1 + 0x6cc) = 0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(plVar3,iVar9);
      puVar7 = (undefined8 *)*plVar3;
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar7 = *puVar6;
        FText::FText(puVar7 + 1,puVar6 + 1);
        puVar7 = puVar7 + 4;
        puVar6 = puVar6 + 4;
      }
    }
  }
  FText::operator=(param_1 + 0x6d0,param_3);
  *(undefined8 *)(param_1 + 0x698) = param_4;
  FUN_140f54060(param_1);
  FUN_14099a700(param_2);
  plVar3 = *(longlong **)(param_3 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return;
}



// FUNCTION 140f316c0 FUN_140f316c0 body=1386 status=ok
// SIG undefined FUN_140f316c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f316c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  ulonglong *puStack_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  undefined4 *local_118;
  ulonglong *puStack_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined4 local_90 [2];
  longlong local_88;
  longlong *local_78;
  char local_68;
  undefined4 local_60 [2];
  longlong local_58;
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar3 = param_1 + 0xdb0;
  cVar4 = FWeakObjectPtr::IsValid(lVar3);
  if (cVar4 != '\0') {
    plVar8 = (longlong *)FWeakObjectPtr::Get(lVar3);
    uVar5 = (**(code **)(*plVar8 + 0x468))(plVar8);
    *(undefined4 *)(param_1 + 0xddc) = uVar5;
    local_138 = (undefined4 *)CONCAT44(local_138._4_4_,(undefined4)local_138);
    uStack_130 = (undefined4 *)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
    if ((*(longlong *)(param_1 + 0x740) != 0) &&
       (local_138 = (undefined4 *)CONCAT44(local_138._4_4_,(undefined4)local_138),
       uStack_130 = (undefined4 *)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130),
       *(longlong *)(param_1 + 0x748) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x748) + 8);
      LOCK();
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        *piVar1 = 0;
        iVar6 = 0;
      }
      UNLOCK();
      local_138 = (undefined4 *)CONCAT44(local_138._4_4_,(undefined4)local_138);
      uStack_130 = (undefined4 *)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
      if (0 < iVar6) {
        iVar6 = *(int *)(param_1 + 0xddc);
        puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_b0,param_1 + 0xc70);
        local_90[0] = 0;
        local_188 = local_90;
        local_68 = '\0';
        puStack_180 = (ulonglong *)local_60;
        local_178 = *puVar9;
        local_170 = puVar9[1];
        if (local_170 != 0) {
          LOCK();
          *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
          UNLOCK();
        }
        local_88 = (longlong)iVar6;
        local_138 = local_188;
        uStack_130 = (undefined4 *)puStack_180;
        uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_128,&local_138);
        uVar10 = FText::Format(local_e0,&local_178,uVar10);
        FText::FText(local_f8,uVar10);
        if (local_d8 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_d8 + 1;
          lVar11 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_d8)(local_d8);
            LOCK();
            piVar1 = (int *)((longlong)local_d8 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_d8 + 8))(local_d8,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_128);
        if ((local_68 != '\0') && (local_68 = '\0', local_78 != (longlong *)0x0)) {
          LOCK();
          plVar8 = local_78 + 1;
          lVar11 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar1 = (int *)((longlong)local_78 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_78 + 8))(local_78,1);
            }
          }
        }
        plVar8 = (longlong *)puVar9[1];
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar8 + 1;
          lVar11 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x738,local_f8,1,0);
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_f0 + 1;
          lVar11 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_f0)(local_f0);
            LOCK();
            piVar1 = (int *)((longlong)local_f0 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_f0 + 8))(local_f0,1);
            }
          }
        }
      }
    }
    lVar11 = FWeakObjectPtr::Get(lVar3);
    iVar6 = *(int *)(lVar11 + 0x17c);
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_a0,param_1 + 0xca0);
    local_60[0] = 0;
    local_188 = local_60;
    local_38 = '\0';
    puStack_180 = &local_30;
    local_168 = *puVar9;
    local_160 = puVar9[1];
    if (local_160 != 0) {
      LOCK();
      *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
      UNLOCK();
    }
    local_58 = (longlong)iVar6;
    local_118 = local_188;
    puStack_110 = puStack_180;
    uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_108,&local_118);
    uVar10 = FText::Format(local_c8,&local_168,uVar10);
    FText::FText(local_158,uVar10);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_c0 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_108);
    if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_48 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    plVar8 = (longlong *)puVar9[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x758) != 0) && (*(longlong *)(param_1 + 0x760) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x760) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (0 < iVar7) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x750,local_158,1,0);
      }
    }
    if ((*(longlong *)(param_1 + 0x770) != 0) && (*(longlong *)(param_1 + 0x778) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x778) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (0 < iVar7) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x768,local_158,1,0);
      }
    }
    if (*(longlong *)(param_1 + 0xac0) != 0) {
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0xac0) + 0x170);
      (**(code **)(*plVar8 + 0x38))(plVar8,0 < iVar6);
    }
    if (*(longlong *)(param_1 + 0xab8) != 0) {
      uVar10 = FWeakObjectPtr::Get(lVar3);
      FUN_140e476d0(uVar10,*(int *)(param_1 + 0xddc) + -1);
      uVar10 = FWeakObjectPtr::Get(lVar3);
      FUN_140e476d0(uVar10,*(undefined4 *)(param_1 + 0xddc));
      uVar10 = FWeakObjectPtr::Get(lVar3);
      FUN_140e4de20(uVar10);
      FUN_142f0ead0(*(undefined8 *)(param_1 + 0xab8));
    }
    FUN_140f2bec0(param_1);
    FUN_140f4be90(param_1);
    FUN_140f46a90(param_1,1);
    FUN_140f54370(param_1,1,0);
    FUN_140f438e0(param_1);
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_150 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)local_150 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f31c30 FUN_140f31c30 body=113 status=ok
// SIG undefined FUN_140f31c30(void)

undefined8 FUN_140f31c30(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xf18);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  lVar2 = FUN_142eb65a0(param_1);
  if (lVar2 != 0) {
    lVar3 = 0xd88;
    if (*(char *)(param_1 + 0xe31) != '\x01') {
      lVar3 = 0xbf0;
    }
    if (lVar2 == *(longlong *)(lVar3 + param_1)) {
      uVar4 = 1;
      goto LAB_140f31c89;
    }
  }
  uVar4 = 0;
LAB_140f31c89:
  LeaveCriticalSection(lpCriticalSection);
  return uVar4;
}



// FUNCTION 140f31cb0 FUN_140f31cb0 body=86 status=ok
// SIG undefined FUN_140f31cb0(void)

undefined1 FUN_140f31cb0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = FUN_142eb65a0();
  plVar2 = *(longlong **)(param_1 + 0xa00);
  plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
  while( true ) {
    if (plVar2 == plVar3) {
      return 0;
    }
    if ((lVar1 != 0) && (lVar1 == *plVar2)) break;
    plVar2 = plVar2 + 0x1b;
  }
  return 1;
}



// FUNCTION 140f31d10 FUN_140f31d10 body=312 status=ok
// SIG undefined FUN_140f31d10(void)

undefined1 FUN_140f31d10(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    if (((*(longlong *)(param_1 + 0xbc8) != 0) && (cVar2 = FUN_140cb6290(), cVar2 != '\0')) &&
       (cVar2 = FUN_140fb3d70(*(undefined8 *)(param_1 + 0xbc8),param_1 + 0x9c8), cVar2 != '\0')) {
      if (param_2 == *(longlong *)(param_1 + 0xf20)) {
        iVar4 = FUN_1406ab3e0(*(undefined8 *)(param_1 + 0xbc8));
        return iVar4 == *(int *)(param_1 + 0x9b8);
      }
      if (param_2 == *(longlong *)(param_1 + 0xf30)) {
        iVar4 = FUN_1406ab3e0(*(undefined8 *)(param_1 + 0xbc8));
        return iVar4 == *(int *)(param_1 + 0x9c0);
      }
    }
    if (param_3 != 0) {
      lVar5 = FUN_14144ee20();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (param_2 == *(longlong *)(param_1 + 0xf28)) {
          uVar3 = FUN_141062e40(*(undefined8 *)(param_1 + 0xf20),*(undefined8 *)(param_3 + 0x88));
          return uVar3;
        }
        if (param_2 == *(longlong *)(param_1 + 0xf38)) {
          uVar3 = FUN_141062e40(*(undefined8 *)(param_1 + 0xf30),*(undefined8 *)(param_3 + 0x88));
          return uVar3;
        }
      }
    }
  }
  uVar3 = FUN_14103ee60(param_1,param_2,param_3,param_4);
  return uVar3;
}



// FUNCTION 140f31e50 FUN_140f31e50 body=87 status=ok
// SIG undefined FUN_140f31e50(void)

undefined1 FUN_140f31e50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_142eb65a0();
  lVar2 = *(longlong *)(param_1 + 0xa00);
  lVar3 = (longlong)*(int *)(param_1 + 0xa08) * 0xd8 + lVar2;
  while( true ) {
    if (lVar2 == lVar3) {
      return 0;
    }
    if ((lVar1 != 0) && (lVar1 == *(longlong *)(lVar2 + 8))) break;
    lVar2 = lVar2 + 0xd8;
  }
  return 1;
}



// FUNCTION 140f31eb0 FUN_140f31eb0 body=82 status=ok
// SIG undefined FUN_140f31eb0(void)

undefined1 FUN_140f31eb0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_140f2b5e0();
  if ((lVar3 != 0) && (param_2 != (longlong *)0x0)) {
    lVar1 = (**(code **)(*param_2 + 0x340))(param_2);
    uVar2 = FUN_14142f600(lVar3,lVar1 + 0xd8);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140f31f10 FUN_140f31f10 body=299 status=ok
// SIG undefined FUN_140f31f10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f31f10(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [4];
  undefined1 local_b8 [80];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c8[0] = 0xffffffff;
  uVar3 = 0xffffffff;
  if (param_2 != 0) {
    FUN_14170c210(local_c8);
    uVar3 = local_c8[0];
  }
  local_c8[0] = 0xffffffff;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144266c70;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = uVar3;
    uVar3 = 0xffffffff;
  }
  local_68[0] = &LAB_140f26960;
  uVar2 = FUN_1420849a0(param_1,local_b8,local_68);
  FUN_14208c4f0(param_1,uVar2);
  if (local_28 != 0) {
    plVar4 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar4 = local_38;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar3);
  FUN_1416f8340(local_c8[0]);
  return;
}



// FUNCTION 140f32040 FUN_140f32040 body=330 status=ok
// SIG undefined FUN_140f32040(void)

void FUN_140f32040(longlong param_1)

{
  bool bVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong *local_18;
  int local_10;
  undefined4 local_c;
  
  plVar3 = (longlong *)FUN_140eccca0();
  if (plVar3 != (longlong *)0x0) {
    uVar4 = AGFireballProjectile::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    if (lVar5 != 0) {
      plVar3 = (longlong *)0x0;
      local_18 = (longlong *)0x0;
      local_c = 0;
      iVar7 = 0;
      if (&local_18 != (longlong **)(lVar5 + 0x550)) {
        local_10 = *(int *)(lVar5 + 0x558);
        lVar8 = (longlong)local_10;
        plVar6 = *(longlong **)(lVar5 + 0x550);
        iVar7 = local_10;
        if (local_10 != 0) {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&local_18,local_10,0);
          plVar3 = local_18;
          _guard_xfg_dispatch_icall_nop(local_18,plVar6,lVar8 << 3);
          iVar7 = local_10;
        }
      }
      for (plVar6 = plVar3; plVar6 != plVar3 + iVar7; plVar6 = plVar6 + 1) {
        lVar5 = *plVar6;
        if (lVar5 != 0) {
          lVar8 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && ((*(byte *)(lVar5 + 0x3b0) & 8) != 0)) {
            *(undefined1 *)(param_1 + 0x691) = 1;
            uVar2 = FUN_1409a7fb0(lVar5);
            *(undefined1 *)(param_1 + 0x692) = uVar2;
            FUN_140f4b910(param_1);
            break;
          }
        }
      }
      if (plVar3 != (longlong *)0x0) {
        FMemory::Free(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 140f32190 FUN_140f32190 body=100 status=ok
// SIG undefined FUN_140f32190(void)

void FUN_140f32190(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
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
      *(undefined1 *)(param_1 + 0x690) = 1;
    }
  }
  FUN_140f4b910(param_1);
  return;
}



// FUNCTION 140f32200 FUN_140f32200 body=100 status=ok
// SIG undefined FUN_140f32200(void)

void FUN_140f32200(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
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
      *(undefined1 *)(param_1 + 0x690) = 0;
    }
  }
  FUN_140f4b910(param_1);
  return;
}



// FUNCTION 140f32270 FUN_140f32270 body=34 status=ok
// SIG undefined FUN_140f32270(void)

void FUN_140f32270(longlong *param_1)

{
  FUN_142ebee70();
                    /* WARNING: Could not recover jumptable at 0x000140f3228b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x578))(param_1,0);
  return;
}



// FUNCTION 140f322a0 FUN_140f322a0 body=41 status=ok
// SIG undefined FUN_140f322a0(void)

void FUN_140f322a0(longlong *param_1)

{
  FUN_142ebee70();
  (**(code **)(*param_1 + 0x580))(param_1,1);
  FUN_140f4c530(param_1);
  return;
}



// FUNCTION 140f322d0 FUN_140f322d0 body=216 status=ok
// SIG undefined FUN_140f322d0(void)

void FUN_140f322d0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142ebee70();
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xbb);
  if (lVar3 != 0) {
    lVar4 = FUN_14145f370();
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
      *(undefined1 *)(param_1 + 0xee) = *(undefined1 *)(lVar3 + 0x1954);
    }
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xb9);
  if (lVar3 != 0) {
    lVar4 = FUN_14142a560();
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
      cVar2 = FUN_140cbba20(lVar3);
      if ((cVar2 == '\0') && ((char)param_1[0xee] != '\0')) {
        (**(code **)(*param_1 + 0x578))(param_1,0);
      }
    }
  }
  return;
}



// FUNCTION 140f323b0 FUN_140f323b0 body=454 status=ok
// SIG undefined FUN_140f323b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f323b0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  longlong *local_e8;
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FUN_142ebee70();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xd7));
  if (((*(char *)((longlong)param_1 + 0x6ca) == '\0') &&
      (*(char *)((longlong)param_1 + 0x679) != '\0')) &&
     ((param_1[0xd3] != 0 || (param_1[0xd5] != 0)))) {
    (**(code **)(*param_1 + 0x578))(param_1,1);
  }
  else {
    (**(code **)(*param_1 + 0x580))(param_1,1);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xd7));
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140f27000;
  uVar5 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar5);
  if (local_28 != 0) {
    plVar6 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar6 = local_38;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar6 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar6 = local_88;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142de2fd0(local_f8);
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_e8 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)local_e8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_e8 + 8))(local_e8,1);
      }
    }
  }
  return;
}



// FUNCTION 140f32580 FUN_140f32580 body=89 status=ok
// SIG undefined FUN_140f32580(void)

undefined1 FUN_140f32580(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (((*(longlong *)(param_2 + 8) == DAT_146872630) && (*(longlong *)(param_1 + 0x1c8) != 0)) &&
     (cVar1 = FUN_142f0b080(), cVar1 != '\0')) {
    return 1;
  }
  cVar1 = FOutputDevice::CanBeUsedOnAnyThread(param_1,param_2);
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}



// FUNCTION 140f325e0 FUN_140f325e0 body=368 status=ok
// SIG undefined FUN_140f325e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f325e0(longlong param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  BOOL BVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xf18);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  *(int *)(param_1 + 0xe8c) = *(int *)(param_1 + 0xe8c) + 1;
  lVar6 = 0xc18;
  if (*(char *)(param_1 + 0xe31) != '\x01') {
    lVar6 = 0xa80;
  }
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_88 = param_1;
  uStack_80 = param_2;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_88._4_4_;
    *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_80._4_4_;
  }
  local_78[0] = &LAB_140f26ac0;
  FUN_140ee5c20(lVar6 + param_1,local_78);
  param_1 = param_1 + 0xa68;
  cVar1 = FWeakObjectPtr::IsValid(param_1);
  if (cVar1 != '\0') {
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_1);
    lVar6 = (**(code **)(*plVar4 + 0x340))(plVar4);
    cVar1 = FWeakObjectPtr::IsValid(lVar6 + 0xdc);
    if (cVar1 != '\0') {
      uVar5 = FWeakObjectPtr::Get(param_1);
      FUN_140f49990(uVar5,param_2);
    }
  }
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 140f32750 FUN_140f32750 body=936 status=ok
// SIG undefined FUN_140f32750(void)

void FUN_140f32750(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  longlong *plVar7;
  int iVar8;
  code *pcVar9;
  longlong lVar10;
  code *pcVar11;
  code **ppcVar12;
  code *pcVar13;
  bool bVar14;
  undefined8 local_res10;
  code *local_88;
  longlong *local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  longlong *plStack_50;
  code *local_48;
  longlong *plStack_40;
  code *local_38;
  longlong *plStack_30;
  
  pcVar11 = (code *)0x0;
  if (*(longlong *)(param_1 + 0xa58) == 0) goto LAB_140f32ab2;
  plStack_40 = (longlong *)((ulonglong)plStack_40 & 0xffffffff00000000);
  local_48 = FUN_140f325e0;
  local_38 = FUN_140f325e0;
  plStack_30 = plStack_40;
  pcVar9 = (code *)_guard_xfg_dispatch_icall_nop
                             (L"&ThisClass::OnBackpackItemCardElementalUpdated",L"::");
  pcVar13 = pcVar11;
  while (pcVar6 = pcVar9, pcVar6 != (code *)0x0) {
    pcVar9 = (code *)_guard_xfg_dispatch_icall_nop((wchar_t *)(pcVar6 + 2),L"::");
    pcVar13 = pcVar6;
  }
  FName::FName(&local_res10,pcVar13 + 4,1);
  lVar10 = (**(code **)(**(longlong **)(param_1 + 0xa58) + 0x2b0))();
  FUN_1407260e0(lVar10 + 8,param_1,&local_38,local_res10);
  pcVar13 = *(code **)(param_1 + 0x430);
  bVar4 = true;
  if (pcVar13 == (code *)0x0) {
LAB_140f32852:
    pcVar13 = pcVar11;
  }
  else {
    lVar10 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(pcVar13 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pcVar13 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar4 = false;
    }
    if (!bVar4) goto LAB_140f32852;
  }
  lVar10 = (**(code **)(**(longlong **)(param_1 + 0xa58) + 0x2b0))();
  FWeakObjectPtr::operator=(lVar10 + 0x18,pcVar13);
  lVar10 = *(longlong *)(param_1 + 0xa58);
  if (lVar10 == 0) {
    ppcVar12 = &local_48;
    local_48 = (code *)0x0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    if ((*(longlong *)(lVar10 + 0x28) == 0) || (*(longlong *)(lVar10 + 0x30) == 0)) {
LAB_140f328f0:
      ppcVar12 = &local_58;
      local_58 = (code *)0x0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar4 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(lVar10 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_140f328f0;
      local_80 = *(longlong **)(lVar10 + 0x30);
      bVar5 = true;
      bVar4 = false;
      local_88 = (code *)0x0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          pcVar11 = (code *)(ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar8 = (int)pcVar11;
          LOCK();
          bVar14 = iVar8 == (int)local_80[1];
          if (bVar14) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar14) {
            pcVar11 = *(code **)(lVar10 + 0x28);
            ppcVar12 = &local_88;
            local_88 = pcVar11;
            goto LAB_140f32904;
          }
          pcVar11 = (code *)0x0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            pcVar11 = (code *)(ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      pcVar11 = (code *)0x0;
      ppcVar12 = &local_88;
    }
LAB_140f32904:
    local_78 = pcVar11;
    pcVar11 = ppcVar12[1];
    ppcVar12[1] = (code *)0x0;
    plVar7 = plStack_50;
    local_70 = pcVar11;
    *ppcVar12 = (code *)0x0;
    if ((bVar4) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar2 = plStack_50 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar7 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar4 = false;
    ppcVar12 = &local_78;
    pcVar11 = local_78;
  }
  local_68 = pcVar11;
  pcVar11 = ppcVar12[1];
  ppcVar12[1] = (code *)0x0;
  plVar7 = plStack_40;
  local_60 = pcVar11;
  *ppcVar12 = (code *)0x0;
  if ((bVar4) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_40 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  pcVar11 = local_70;
  if ((bVar5) && (local_70 != (code *)0x0)) {
    LOCK();
    pcVar13 = local_70 + 8;
    iVar8 = *(int *)pcVar13;
    *(int *)pcVar13 = *(int *)pcVar13 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (*(code *)**(undefined8 **)local_70)(local_70);
      LOCK();
      pcVar11 = pcVar11 + 0xc;
      iVar8 = *(int *)pcVar11;
      *(int *)pcVar11 = *(int *)pcVar11 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*(longlong *)local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 != (code *)0x0) {
    FUN_142051fa0(local_68,1);
  }
  pcVar11 = local_60;
  if (local_60 != (code *)0x0) {
    LOCK();
    pcVar13 = local_60 + 8;
    iVar8 = *(int *)pcVar13;
    *(int *)pcVar13 = *(int *)pcVar13 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (*(code *)**(undefined8 **)local_60)(local_60);
      LOCK();
      pcVar11 = pcVar11 + 0xc;
      iVar8 = *(int *)pcVar11;
      *(int *)pcVar11 = *(int *)pcVar11 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*(longlong *)local_60 + 8))(local_60,1);
      }
    }
  }
LAB_140f32ab2:
  if ((((*(longlong *)(param_1 + 0xa58) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0xa58) + 0x1a8) != '\0')) &&
      (*(longlong *)(param_1 + 0xa50) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0xa50) + 0x1a8) != '\0')) {
    LOCK();
    *(undefined4 *)(param_1 + 0x9f0) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140f32b00 FUN_140f32b00 body=1574 status=ok
// SIG undefined FUN_140f32b00(void)

ulonglong FUN_140f32b00(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  char local_48 [4];
  undefined1 local_44 [8];
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_30 [8];
  longlong *local_28;
  
  uVar7 = FUN_1410875b0();
  if ((char)uVar7 == '\0') {
    return uVar7;
  }
  lVar13 = 0;
  if (param_3 == 0) {
LAB_140f32b79:
    param_3 = lVar13;
  }
  else {
    lVar8 = FUN_1413565b0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
         ) != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140f32b79;
  }
  local_48[0] = '\x02';
  FWeakObjectPtr::operator=(local_44,param_3);
  FWeakObjectPtr::operator=(&local_3c,0);
  cVar5 = FWeakObjectPtr::IsValid(local_44);
  if (cVar5 != '\0') {
    plVar9 = (longlong *)FWeakObjectPtr::Get(local_44);
    lVar8 = (**(code **)(*plVar9 + 0x340))(plVar9);
    puVar14 = (undefined4 *)(lVar8 + 0xdc);
    cVar5 = FWeakObjectPtr::IsValid(puVar14);
    if (cVar5 == '\0') {
      puVar14 = (undefined4 *)(lVar8 + 0x5c);
      cVar5 = FWeakObjectPtr::IsValid(puVar14);
      if (cVar5 == '\0') goto LAB_140f32bfa;
    }
    local_3c = *puVar14;
    local_38 = puVar14[1];
  }
LAB_140f32bfa:
  lVar8 = *param_4;
  if ((((((lVar8 == DAT_1468725f0) || (lVar8 == DAT_1468725f8)) || (lVar8 == DAT_146872600)) ||
       ((lVar8 == DAT_146872608 || (lVar8 == DAT_146872610)))) || (lVar8 == DAT_1468726e8)) ||
     (lVar8 == DAT_1468726f0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  if ((*(int *)(param_2 + 0x108) == 2) ||
     ((cVar5 = FWeakObjectPtr::IsValid(param_2 + 0xdc), cVar5 != '\0' &&
      (*(int *)(param_2 + 0x108) == 0)))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((char)param_1[0x1d2] != '\0') {
    lVar8 = FWeakObjectPtr::Get(&local_3c);
    if (lVar8 != 0) {
      lVar10 = FUN_1414ecd30();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_140f32cbf;
    }
    lVar8 = lVar13;
LAB_140f32cbf:
    if (param_1[0x142] != 0) {
      lVar13 = param_1[0x140];
      lVar10 = (longlong)(int)param_1[0x141] * 0xd8 + lVar13;
      if (lVar13 != lVar10) {
        while (*(longlong *)(lVar13 + 8) != param_1[0x142]) {
          lVar13 = lVar13 + 0xd8;
          if (lVar13 == lVar10) {
            uVar7 = FUN_140f2a350(param_1);
            return uVar7;
          }
        }
        lVar13 = *(longlong *)(lVar13 + 0x58);
        if ((lVar13 != 0) && (lVar10 = FUN_140e97230(param_1), lVar10 != 0)) {
          FUN_1413f8a40(lVar10,lVar13,lVar8);
          if (DAT_14686b371 == '\0') {
            FUN_140bfbc60(&DAT_14686b370);
            DAT_14686b371 = '\x01';
          }
          FUN_140c05c10(&DAT_14686b370,param_1,lVar13,lVar8);
          FUN_14109ed60(param_1);
          local_88 = 0;
          uVar11 = DAT_1468728d8;
          if (lVar8 != 0) {
            uVar11 = DAT_1468728d0;
          }
          local_80 = 0;
          (**(code **)(*param_1 + 0x4e8))(param_1,uVar11,&local_88);
          LOCK();
          *(undefined4 *)((longlong)param_1 + 0xfac) = 1;
          UNLOCK();
        }
      }
    }
    uVar7 = FUN_140f2a350(param_1);
    return uVar7;
  }
  if (bVar4) {
    lVar8 = FUN_140f2b5e0(param_1);
    if (lVar8 == 0) {
      return 0;
    }
    cVar5 = FUN_14142f600(lVar8,param_2 + 0xd8);
    if (cVar5 != '\0') {
      FUN_141430350(lVar8,param_2 + 0xd8);
      FUN_14300bd40(lVar8,param_2 + 0x98);
      local_78 = 0;
      local_70 = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872870,&local_78);
      if (param_1[0x14f] != 0) {
        FUN_140f2c160(param_1,local_30,param_2);
        cVar5 = FText::IsEmpty(local_30);
        if (cVar5 != '\0') {
          FText::operator=(local_30,param_2);
        }
        FUN_140f43ac0(param_1[0x14f],local_30);
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*param_1 + 0x4e8))(param_1,DAT_1468728b0,&local_68);
        if (local_28 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_28 + 1;
          lVar13 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_28)(local_28);
            LOCK();
            piVar1 = (int *)((longlong)local_28 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_28 + 8))(local_28,1);
            }
          }
        }
      }
      LOCK();
      *(undefined4 *)((longlong)param_1 + 0xfb4) = 1;
      UNLOCK();
      LOCK();
      *(undefined4 *)(param_1 + 0x13e) = 1;
      UNLOCK();
      LOCK();
      uVar3 = *(uint *)(param_1 + 0xb1);
      *(uint *)(param_1 + 0xb1) = 1;
      UNLOCK();
      LOCK();
      *(undefined4 *)((longlong)param_1 + 0x9ec) = 1;
      UNLOCK();
      return (ulonglong)uVar3;
    }
    local_58 = 0;
    local_50 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872890,&local_58);
    FUN_14109ee70(param_1);
    lVar8 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
    if (lVar8 != 0) {
      lVar10 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_140f32f57;
    }
    lVar8 = lVar13;
LAB_140f32f57:
    uVar7 = FUN_140ab72e0(lVar8,2);
    return uVar7;
  }
  plVar9 = param_1 + 0x138;
  if ((char)*plVar9 == '\0') {
    uVar11 = FWeakObjectPtr::Get(local_44);
    cVar5 = FUN_140f258f0(param_1,uVar11);
    if (cVar5 != '\0') {
      lVar13 = *param_4;
      if ((((lVar13 == DAT_1468725f0) || (lVar13 == DAT_1468725f8)) ||
          ((lVar13 == DAT_146872600 ||
           (((lVar13 == DAT_146872608 || (lVar13 == DAT_146872610)) || (lVar13 == DAT_1468726e8)))))
          ) || (lVar13 == DAT_1468726f0)) {
        uVar11 = 1;
      }
      else {
        uVar11 = 0;
      }
      uVar6 = FKey::IsGamepadKey(param_4 + 2);
      uVar7 = FUN_140f259b0(param_1,uVar11,0,uVar6);
      return uVar7;
    }
    goto LAB_140f33101;
  }
  if ((((char)*plVar9 == local_48[0]) &&
      (cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                         ((longlong)param_1 + 0x9c4,local_44), cVar5 != '\0')) &&
     (cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                        ((longlong)param_1 + 0x9cc,&local_3c), cVar5 != '\0')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    FUN_140f29a60(param_1,uVar11);
    uVar7 = FUN_14109ed60(param_1);
    return uVar7;
  }
  if ((char)*plVar9 != '\x01') goto LAB_140f33101;
  lVar13 = FWeakObjectPtr::Get(&local_3c);
  if (lVar13 == 0) {
LAB_140f330a2:
    lVar13 = FUN_140f2ad20(plVar9);
    if (lVar13 != 0) {
      uVar12 = FWeakObjectPtr::Get((longlong)param_1 + 0x9c4);
      FUN_140f52f20(param_1,uVar12);
      uVar7 = FUN_140f29a60(param_1,uVar11);
      return uVar7;
    }
  }
  else {
    lVar8 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140f330a2;
  }
  uVar12 = FWeakObjectPtr::Get(local_44);
  cVar5 = FUN_140f258f0(param_1,uVar12);
  if (cVar5 != '\0') {
    uVar7 = FUN_140f52560(param_1,local_48,uVar11);
    return uVar7;
  }
LAB_140f33101:
  uVar7 = FUN_140f50970(param_1);
  return uVar7;
}



// FUNCTION 140f33130 FUN_140f33130 body=479 status=ok
// SIG undefined FUN_140f33130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f33130(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined1 auStack_f8 [32];
  undefined4 local_d8 [4];
  code *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d8[0] = 0xffffffff;
  uVar8 = 0xffffffff;
  if (param_3 != 0) {
    FUN_14170c210(local_d8,param_3);
    uVar8 = local_d8[0];
  }
  lVar6 = 0;
  local_d8[0] = 0xffffffff;
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_144266c70;
    puVar4[1] = param_1;
    *(undefined4 *)(puVar4 + 2) = uVar8;
    uVar8 = 0xffffffff;
  }
  local_c8[0] = thunk_FUN_140f196e0;
  FUN_1420849a0(param_1,local_78,local_c8);
  if (local_88 != 0) {
    plVar7 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar7 = local_98;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar8);
  FUN_1416f8340(local_d8[0]);
  lVar1 = DAT_146872910;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar5 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_140f3323d;
  }
  lVar5 = lVar6;
LAB_140f3323d:
  if (*(int *)(lVar5 + lVar1) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,local_78);
    if (local_88 != 0) {
      plVar7 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar7 = local_98;
      }
      if (plVar7 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar7 + 8))();
      }
    }
    (*local_c8[0])(lVar6);
    if (local_88 != 0) {
      plVar7 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar7 = local_98;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8);
    FUN_14208c4f0(param_1,local_c8);
  }
  if (local_38 != 0) {
    plVar7 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar7 = local_48;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f33310 FUN_140f33310 body=437 status=ok
// SIG undefined FUN_140f33310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f33310(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar6 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = thunk_FUN_140f1b8e0;
  FUN_1420849a0(param_1,local_68,local_b8);
  if (local_78 != 0) {
    plVar7 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar7 = local_88;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar1 = DAT_146872910;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar5 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_140f333ed;
  }
  lVar5 = lVar6;
LAB_140f333ed:
  if (*(int *)(lVar5 + lVar1) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_68);
    if (local_78 != 0) {
      plVar7 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar7 = local_88;
      }
      if (plVar7 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar7 + 8))();
      }
    }
    (*local_b8[0])(lVar6);
    if (local_78 != 0) {
      plVar7 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar7 = local_88;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8);
    FUN_14208c4f0(param_1,local_b8);
  }
  if (local_28 != 0) {
    plVar7 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar7 = local_38;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f334e0 FUN_140f334e0 body=354 status=ok
// SIG undefined FUN_140f334e0(void)

void FUN_140f334e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_48 [4];
  undefined1 local_28 [8];
  longlong *local_20;
  
  *(undefined1 *)(param_1 + 0x638) = 0;
  if (*(longlong *)(param_1 + 0x640) != 0) {
    local_48[0] = 0;
    local_48[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"dying",0xc);
    FUN_142088910(*(undefined8 *)(param_1 + 0x640),local_48);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x648) != 0) {
    local_48[2] = 0;
    local_48[3] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 2,0);
    FGenericPlatformString::Memcpy(local_48[2],L"dying",0xc);
    FUN_142088910(*(undefined8 *)(param_1 + 0x648),local_48 + 2);
    if (local_48[2] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong **)(param_1 + 0x650) != (longlong *)0x0) {
    lVar4 = **(longlong **)(param_1 + 0x650);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"FIGHT FOR YOUR LIFE!",L"GFxFightForYourLifeWidget",
                       L"FightForYourLife");
    (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x650),uVar5,1,0);
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
  }
  FUN_140f4ccf0(param_1,0);
  return;
}



// FUNCTION 140f33650 FUN_140f33650 body=291 status=ok
// SIG undefined FUN_140f33650(void)

void FUN_140f33650(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined2 *local_18;
  int local_10;
  
  if (DAT_146b17150 != 0) {
    FUN_142874ac0();
  }
  if (param_2 != 0) {
    uVar3 = FUN_1427fe4c0(param_2);
    *(undefined4 *)(param_1 + 0x860) = uVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146872958) {
    _Init_thread_header(&DAT_146872958);
    if (DAT_146872958 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146872950 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.OverrideToe");
      _Init_thread_footer(&DAT_146872958);
    }
  }
  plVar1 = DAT_146872950;
  FString::PrintfImpl(&local_18,&DAT_144050d74,(double)(*(float *)(param_1 + 0x860) * -0.01));
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f33780 FUN_140f33780 body=289 status=ok
// SIG undefined FUN_140f33780(void)

void FUN_140f33780(longlong param_1)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *local_18;
  int local_10;
  
  plVar1 = *(longlong **)(param_1 + 0x828);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x830) != 0)) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1 + 0x760,1,0);
    (**(code **)(**(longlong **)(param_1 + 0x830) + 0x2b0))
              (*(longlong **)(param_1 + 0x830),param_1 + 0x778,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146872978) {
    _Init_thread_header(&DAT_146872978);
    if (DAT_146872978 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146872970 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.BrightnessCalibration.Enable");
      _Init_thread_footer(&DAT_146872978);
    }
  }
  plVar1 = DAT_146872970;
  FString::PrintfImpl(&local_18,&DAT_143f3edc0,3);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f338b0 FUN_140f338b0 body=121 status=ok
// SIG undefined FUN_140f338b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f338b0(longlong param_1,longlong param_2)

{
  float fVar1;
  
  if (DAT_146b17150 != 0) {
    FUN_142874ac0();
  }
  if (param_2 != 0) {
    fVar1 = (float)FUN_1427fe4c0(param_2);
    *(float *)(param_1 + 0x85c) = fVar1;
    if (DAT_146b17150 != 0) {
      *(float *)(DAT_146b17150 + 0x8fc) =
           (fVar1 / *(float *)(param_2 + 0x358)) * (DAT_14629dc3c - _DAT_14629dc38) + _DAT_14629dc38
      ;
    }
  }
  return;
}



// FUNCTION 140f33930 FUN_140f33930 body=289 status=ok
// SIG undefined FUN_140f33930(void)

void FUN_140f33930(longlong param_1)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *local_18;
  int local_10;
  
  plVar1 = *(longlong **)(param_1 + 0x828);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x830) != 0)) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1 + 0x728,1,0);
    (**(code **)(**(longlong **)(param_1 + 0x830) + 0x2b0))
              (*(longlong **)(param_1 + 0x830),param_1 + 0x740,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146872968) {
    _Init_thread_header(&DAT_146872968);
    if (DAT_146872968 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146872960 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.BrightnessCalibration.Enable");
      _Init_thread_footer(&DAT_146872968);
    }
  }
  plVar1 = DAT_146872960;
  FString::PrintfImpl(&local_18,&DAT_143f3edc0,1);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f33a60 FUN_140f33a60 body=393 status=ok
// SIG undefined FUN_140f33a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f33a60(undefined8 param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_1410875b0();
  if (cVar1 != '\0') {
    uVar3 = 0;
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = param_1;
      *puVar2 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = thunk_FUN_140f20ba0;
    FUN_1420849a0(param_1,local_68,local_b8);
    if (local_78 != 0) {
      plVar4 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar4 = local_88;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
    cVar1 = FUN_140f2ca60();
    if (cVar1 == '\0') {
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_68);
      if (local_78 != 0) {
        plVar4 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar4 = local_88;
        }
        if (plVar4 != (longlong *)0x0) {
          uVar3 = (**(code **)(*plVar4 + 8))();
        }
      }
      (*local_b8[0])(uVar3);
      if (local_78 != 0) {
        plVar4 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar4 = local_88;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    else {
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8);
      FUN_14208c4f0(param_1,local_b8);
    }
    if (local_28 != 0) {
      plVar4 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar4 = local_38;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f33bf0 FUN_140f33bf0 body=31 status=ok
// SIG undefined FUN_140f33bf0(void)

void FUN_140f33bf0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x148))();
  FUN_140eef780(param_1);
  return;
}



// FUNCTION 140f33c10 FUN_140f33c10 body=33 status=ok
// SIG undefined FUN_140f33c10(void)

void FUN_140f33c10(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_142eb7a60(param_2);
    *(undefined1 *)(param_1 + 0x866) = uVar1;
  }
  return;
}



// FUNCTION 140f33c40 FUN_140f33c40 body=94 status=ok
// SIG undefined FUN_140f33c40(void)

void FUN_140f33c40(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x828);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x830) != 0)) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1 + 0x7f8,1,0);
                    /* WARNING: Could not recover jumptable at 0x000140f33c91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x830) + 0x2b0))
              (*(longlong **)(param_1 + 0x830),param_1 + 0x810,1,0);
    return;
  }
  return;
}



// FUNCTION 140f33ca0 thunk_FUN_140f549e0 body=5 status=ok
// SIG undefined thunk_FUN_140f549e0(void)

void thunk_FUN_140f549e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 auStackX_10 [2];
  undefined4 auStackX_18 [2];
  undefined4 auStackX_20 [2];
  longlong lStack_c0;
  longlong *plStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 *apuStack_88 [2];
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  undefined4 uStack_48;
  
  FUN_140ad4c90(param_1,&lStack_c0);
  uVar8 = 0xffffffff;
  if (lStack_c0 != 0) {
    cVar6 = FTcpMessageTransportConnection::Init(lStack_c0);
    if (cVar6 != '\0') {
      auStackX_20[0] = 0xffffffff;
      if (*(longlong *)(param_1 + 0x6c0) != 0) {
        FUN_14170c210(auStackX_20);
      }
      auStackX_18[0] = 0xffffffff;
      if (*(longlong *)(param_1 + 0x650) != 0) {
        FUN_14170c210(auStackX_18);
      }
      auStackX_10[0] = 0xffffffff;
      if (*(longlong *)(param_1 + 0x638) != 0) {
        FUN_14170c210(auStackX_10);
      }
      FWeakObjectPtr::operator=(&uStack_b0,param_1);
      uVar9 = auStackX_20[0];
      uVar11 = auStackX_18[0];
      uVar10 = auStackX_10[0];
      uStack_9c = uStack_ac;
      uStack_a0 = uStack_b0;
      auStackX_10[0] = 0xffffffff;
      uStack_98 = CONCAT44(auStackX_18[0],uVar10);
      auStackX_18[0] = 0xffffffff;
      uStack_90 = auStackX_20[0];
      auStackX_20[0] = 0xffffffff;
      uStack_58 = 0;
      uStack_48 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x28,auStack_78);
      if (puVar7 != (undefined8 *)0x0) {
        uStack_98 = 0xffffffffffffffff;
        *puVar7 = &PTR_FUN_14461b788;
        puVar7[1] = param_1;
        *(undefined4 *)(puVar7 + 2) = uStack_b0;
        *(undefined4 *)((longlong)puVar7 + 0x14) = uStack_ac;
        *(undefined4 *)(puVar7 + 3) = uVar10;
        *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar11;
        *(undefined4 *)(puVar7 + 4) = uVar9;
        uStack_90 = 0xffffffff;
        uVar10 = uVar8;
        uVar11 = uVar8;
        uVar9 = uVar8;
      }
      apuStack_88[0] = &LAB_140f26e90;
      FUN_14204c370(lStack_c0,apuStack_88);
      FUN_1416f8340(uVar9);
      FUN_1416f8340(uVar11);
      FUN_1416f8340(uVar10);
      FUN_1416f8340(auStackX_10[0]);
      FUN_1416f8340(auStackX_18[0]);
      FUN_1416f8340(auStackX_20[0]);
    }
  }
  plVar5 = plStack_b8;
  if (plStack_b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_b8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_b8)(plStack_b8);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_b8 + 8))(plStack_b8,1);
      }
    }
  }
  return;
}



// FUNCTION 140f33cb0 FUN_140f33cb0 body=3136 status=ok
// SIG undefined FUN_140f33cb0(void)

void FUN_140f33cb0(longlong *param_1,longlong param_2,char *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong *plVar15;
  bool bVar16;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_218 [2];
  longlong local_208 [2];
  longlong local_1f8 [2];
  longlong local_1e8 [2];
  longlong *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined1 local_1c8 [16];
  longlong *local_1b8;
  undefined4 local_188;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  local_res8[0] = 0xffffffff;
  if (param_2 != 0) {
    FUN_14170c210(local_res8);
  }
  FWeakObjectPtr::operator=(&local_res10,param_1);
  local_1d0 = local_res10;
  local_1cc = local_res14;
  local_1d8 = param_1;
  FUN_140f18420(local_1c8,param_3);
  local_188 = local_res8[0];
  local_res8[0] = 0xffffffff;
  FUN_1416f8340(0xffffffff);
  local_58 = 0;
  local_48 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x60,local_78);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_14461b7b8;
    puVar6[1] = local_1d8;
    *(undefined4 *)(puVar6 + 2) = local_1d0;
    *(undefined4 *)((longlong)puVar6 + 0x14) = local_1cc;
    FUN_140f18420(puVar6 + 3,local_1c8);
    *(undefined4 *)(puVar6 + 0xb) = local_188;
    local_188 = 0xffffffff;
  }
  local_88[0] = &LAB_140f26cd0;
  FUN_14204c280(local_88);
  lVar7 = FWeakObjectPtr::Get(param_1 + 0xbb);
  if (lVar7 == 0) {
LAB_140f33e0b:
    lVar7 = 0;
  }
  else {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if (!bVar16) goto LAB_140f33e0b;
  }
  *(undefined1 *)(param_1 + 0xd9) = 0;
  if ((lVar7 == 0) || (lVar8 = *(longlong *)(lVar7 + 0x848), lVar8 == 0)) {
LAB_140f33e6c:
    bVar16 = false;
  }
  else {
    lVar9 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if ((!bVar16) || (cVar3 = FUN_140c48e10(lVar8), cVar3 == '\0')) goto LAB_140f33e6c;
    bVar16 = true;
  }
  if (((((param_2 == 0) || (param_3[1] == '\0')) || (lVar7 == 0)) ||
      ((param_1[199] == 0 || (param_1[0xca] == 0)))) || (bVar16)) {
    cVar3 = FUN_142ebe180(param_1);
    (**(code **)(*param_1 + 0x580))(param_1,cVar3 == '\0');
    lVar7 = FWeakObjectPtr::Get(param_1 + 0xb9);
    if (lVar7 != 0) {
      lVar8 = FUN_14142a560();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      if (bVar16) {
        FUN_140c700e0(lVar7,0);
      }
    }
    goto LAB_140f3488b;
  }
  if (*param_3 == '\0') {
    cVar3 = FText::IsEmpty(param_3 + 8);
    bVar16 = cVar3 == '\0';
    if (bVar16) {
      uVar10 = FText::FText(local_b8,param_3 + 8);
    }
    else {
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_a0,L"Can\'t Use",L"InteractionPrompt",L"CantUseText");
    }
    (**(code **)(*(longlong *)param_1[199] + 0x2b0))((longlong *)param_1[199],uVar10,1,0);
    if ((bVar16) && (local_b0 != (longlong *)0x0)) {
      LOCK();
      plVar15 = local_b0 + 1;
      lVar7 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    if ((!bVar16) && (local_98 != (longlong *)0x0)) {
      LOCK();
      plVar15 = local_98 + 1;
      lVar7 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    FUN_140f4d1d0(param_1,2,1);
LAB_140f347dd:
    (**(code **)(*(longlong *)param_1[0xca] + 0x278))((longlong *)param_1[0xca],0);
    FUN_140f4d1d0(param_1,0,0);
  }
  else {
    if (param_3[2] == '\0') {
      if ((param_3[3] == '\0') || (cVar3 = FText::IsEmpty(param_3 + 8), cVar3 == '\0')) {
        cVar3 = FText::IsEmpty(param_3 + 8);
        bVar16 = cVar3 == '\0';
        if (bVar16) {
          uVar10 = FText::FText(local_160,param_3 + 8);
        }
        else {
          uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_148,L"Can\'t Use",L"InteractionPrompt",L"CantUseText");
        }
        (**(code **)(*(longlong *)param_1[199] + 0x2b0))((longlong *)param_1[199],uVar10,1,0);
        if ((bVar16) && (local_158 != (longlong *)0x0)) {
          LOCK();
          plVar15 = local_158 + 1;
          lVar7 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_158)(local_158);
            LOCK();
            piVar1 = (int *)((longlong)local_158 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_158 + 8))(local_158,1);
            }
          }
        }
        if ((!bVar16) && (local_140 != (longlong *)0x0)) {
          LOCK();
          plVar15 = local_140 + 1;
          lVar7 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_140)(local_140);
            LOCK();
            piVar1 = (int *)((longlong)local_140 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_140 + 8))(local_140,1);
            }
          }
        }
        FUN_140f4d1d0(param_1,2,1);
        *(undefined1 *)(param_1 + 0xd9) = 1;
      }
    }
    else {
      lVar7 = *(longlong *)(param_3 + 0x20);
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0x51) == '\0')) {
        uVar4 = 1;
        if (*(char *)(lVar7 + 0x50) != '\0') {
          uVar4 = 3;
        }
        FUN_140f4d1d0(param_1,uVar4,1);
        lVar7 = *(longlong *)(param_3 + 0x20);
        if (*(char *)(lVar7 + 0x52) == '\0') {
          (**(code **)(*(longlong *)param_1[199] + 0x2b0))
                    ((longlong *)param_1[199],lVar7 + 0x30,1,0);
        }
        else {
          if (param_1[0xcd] == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(undefined4 *)(param_1[0xcd] + 0x388);
          }
          puVar6 = (undefined8 *)FText::ToString(lVar7 + 0x30);
          if (*(int *)(puVar6 + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*puVar6;
          }
          FString::PrintfImpl(local_218,puVar11,uVar13);
          lVar7 = *(longlong *)param_1[199];
          uVar10 = FText::FromString(local_178,local_218);
          (**(code **)(lVar7 + 0x2b0))(param_1[199],uVar10,1,0);
          if (local_170 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_170 + 1;
            lVar7 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_170)(local_170);
              LOCK();
              piVar1 = (int *)((longlong)local_170 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_170 + 8))(local_170,1);
              }
            }
          }
          if (local_218[0] != 0) {
            FMemory::Free();
          }
          lVar7 = FUN_140eccbe0(param_1);
          if (lVar7 != 0) {
            FUN_140c700e0(lVar7,*(undefined8 *)(*(longlong *)(param_3 + 0x20) + 0x58));
            *(undefined1 *)(param_1 + 0xd9) = 1;
            goto LAB_140f3411f;
          }
        }
        *(undefined1 *)(param_1 + 0xd9) = 1;
      }
    }
LAB_140f3411f:
    uVar13 = 0;
    if (param_3[3] == '\0') {
      if ((char)param_1[0xd9] != '\x01') {
        cVar3 = FText::IsEmpty(param_3 + 8);
        bVar16 = cVar3 == '\0';
        if (bVar16) {
          uVar10 = FText::FText(local_118,param_3 + 8);
        }
        else {
          uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_100,L"Can\'t Use",L"InteractionPrompt",L"CantUseText");
        }
        (**(code **)(*(longlong *)param_1[199] + 0x2b0))((longlong *)param_1[199],uVar10,1,0);
        if ((bVar16) && (local_110 != (longlong *)0x0)) {
          LOCK();
          plVar15 = local_110 + 1;
          lVar7 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_110)(local_110);
            LOCK();
            piVar1 = (int *)((longlong)local_110 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_110 + 8))(local_110,1);
            }
          }
        }
        if ((!bVar16) && (local_f8 != (longlong *)0x0)) {
          LOCK();
          plVar15 = local_f8 + 1;
          lVar7 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar1 = (int *)((longlong)local_f8 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_f8 + 8))(local_f8,1);
            }
          }
        }
        FUN_140f4d1d0(param_1,2,1);
        *(undefined1 *)(param_1 + 0xd9) = 1;
      }
      bVar5 = 1;
    }
    else {
      lVar7 = *(longlong *)(param_3 + 0x28);
      if ((lVar7 == 0) || (*(char *)(lVar7 + 0x51) != '\0')) {
        bVar5 = *(byte *)(param_1 + 0xd9);
      }
      else {
        uVar4 = 1;
        if (*(char *)(lVar7 + 0x50) != '\0') {
          uVar4 = 3;
        }
        FUN_140f4d1d0(param_1,uVar4,(char)param_1[0xd9] != '\x01');
        if ((char)param_1[0xd9] == '\x01') {
          plVar15 = (longlong *)param_1[0xca];
          (**(code **)(*plVar15 + 0x278))(plVar15,1);
        }
        else {
          plVar15 = (longlong *)param_1[199];
        }
        lVar7 = *(longlong *)(param_3 + 0x28);
        if (*(char *)(lVar7 + 0x52) == '\0') {
          (**(code **)(*plVar15 + 0x2b0))(plVar15,lVar7 + 0x30,1,0);
        }
        else {
          if (param_1[0xcd] == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(undefined4 *)(param_1[0xcd] + 0x390);
          }
          puVar6 = (undefined8 *)FText::ToString(lVar7 + 0x30);
          if (*(int *)(puVar6 + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*puVar6;
          }
          FString::PrintfImpl(local_208,puVar11,uVar14);
          lVar7 = *plVar15;
          uVar10 = FText::FromString(local_130,local_208);
          (**(code **)(lVar7 + 0x2b0))(plVar15,uVar10,1,0);
          if (local_128 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_128 + 1;
            lVar7 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_128)(local_128);
              LOCK();
              piVar1 = (int *)((longlong)local_128 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_128 + 8))(local_128,1);
              }
            }
          }
          if (local_208[0] != 0) {
            FMemory::Free();
          }
          lVar7 = FUN_140eccbe0(param_1);
          if (lVar7 != 0) {
            FUN_140c700e0(lVar7,*(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0x58));
          }
        }
        bVar5 = ((char)param_1[0xd9] == '\x01') + 2;
        *(byte *)(param_1 + 0xd9) = bVar5;
      }
    }
    puVar11 = &DAT_143f3eda8;
    if (bVar5 < 3) {
      if (((param_3[4] != '\0') && (lVar7 = *(longlong *)(param_3 + 0x30), lVar7 != 0)) &&
         (*(char *)(lVar7 + 0x51) == '\0')) {
        uVar4 = 1;
        if (*(char *)(lVar7 + 0x50) != '\0') {
          uVar4 = 3;
        }
        FUN_140f4d1d0(param_1,uVar4,0);
        if (*(char *)(*(longlong *)(param_3 + 0x30) + 0x52) == '\0') {
          (**(code **)(*(longlong *)param_1[0xca] + 0x278))((longlong *)param_1[0xca],1);
          (**(code **)(*(longlong *)param_1[0xca] + 0x2b0))
                    ((longlong *)param_1[0xca],*(longlong *)(param_3 + 0x30) + 0x30,1,0);
        }
        else {
          if (param_1[0xcd] == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(undefined4 *)(param_1[0xcd] + 0x38c);
          }
          (**(code **)(*(longlong *)param_1[0xca] + 0x278))((longlong *)param_1[0xca],1);
          puVar6 = (undefined8 *)FText::ToString(*(longlong *)(param_3 + 0x30) + 0x30);
          if (*(int *)(puVar6 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*puVar6;
          }
          FString::PrintfImpl(local_1f8,puVar12,uVar14);
          lVar7 = *(longlong *)param_1[0xca];
          uVar10 = FText::FromString(local_e8,local_1f8);
          (**(code **)(lVar7 + 0x2b0))(param_1[0xca],uVar10,1,0);
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_e0 + 1;
            lVar7 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_e0)(local_e0);
              LOCK();
              piVar1 = (int *)((longlong)local_e0 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_e0 + 8))(local_e0,1);
              }
            }
          }
          if (local_1f8[0] != 0) {
            FMemory::Free();
          }
          lVar7 = FUN_140eccbe0(param_1);
          if (lVar7 != 0) {
            FUN_140c700e0(lVar7,*(undefined8 *)(*(longlong *)(param_3 + 0x30) + 0x58));
          }
        }
        bVar5 = 6;
        if ((char)param_1[0xd9] == '\x01') {
          bVar5 = 4;
        }
        *(byte *)(param_1 + 0xd9) = bVar5;
      }
      if (((param_3[5] != '\0') && (lVar7 = *(longlong *)(param_3 + 0x38), lVar7 != 0)) &&
         ((*(char *)(lVar7 + 0x51) == '\0' && ((bVar5 != 4 && (bVar5 != 6)))))) {
        uVar4 = 1;
        if (*(char *)(lVar7 + 0x50) != '\0') {
          uVar4 = 3;
        }
        FUN_140f4d1d0(param_1,uVar4,0);
        if (*(char *)(*(longlong *)(param_3 + 0x38) + 0x52) == '\0') {
          (**(code **)(*(longlong *)param_1[0xca] + 0x278))((longlong *)param_1[0xca],1);
          (**(code **)(*(longlong *)param_1[0xca] + 0x2b0))
                    ((longlong *)param_1[0xca],*(longlong *)(param_3 + 0x38) + 0x30,1,0);
        }
        else {
          if (param_1[0xcd] != 0) {
            uVar13 = *(undefined4 *)(param_1[0xcd] + 0x394);
          }
          (**(code **)(*(longlong *)param_1[0xca] + 0x278))((longlong *)param_1[0xca],1);
          puVar6 = (undefined8 *)FText::ToString(*(longlong *)(param_3 + 0x38) + 0x30);
          if (*(int *)(puVar6 + 1) != 0) {
            puVar11 = (undefined2 *)*puVar6;
          }
          FString::PrintfImpl(local_1e8,puVar11,uVar13);
          lVar7 = *(longlong *)param_1[0xca];
          uVar10 = FText::FromString(local_d0,local_1e8);
          (**(code **)(lVar7 + 0x2b0))(param_1[0xca],uVar10,1,0);
          if (local_c8 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_c8 + 1;
            lVar7 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_c8)(local_c8);
              LOCK();
              piVar1 = (int *)((longlong)local_c8 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_c8 + 8))(local_c8,1);
              }
            }
          }
          if (local_1e8[0] != 0) {
            FMemory::Free();
          }
          lVar7 = FUN_140eccbe0(param_1);
          if (lVar7 != 0) {
            FUN_140c700e0(lVar7,*(undefined8 *)(*(longlong *)(param_3 + 0x38) + 0x58));
          }
        }
        bVar5 = 7;
        if ((char)param_1[0xd9] == '\x01') {
          bVar5 = 5;
        }
        *(byte *)(param_1 + 0xd9) = bVar5;
      }
      if (bVar5 < 3) goto LAB_140f347dd;
    }
  }
  if (*(char *)((longlong)param_1 + 0x6ca) == '\0') {
    (**(code **)(*param_1 + 0x578))(param_1,0);
  }
LAB_140f3488b:
  FUN_140f549e0(param_1);
  FUN_140f3aed0(param_1);
  FUN_1416f8340(local_188);
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1b8 + 1;
    lVar7 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1b8)(local_1b8);
      LOCK();
      piVar1 = (int *)((longlong)local_1b8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1b8 + 8))(local_1b8,1);
      }
    }
  }
  return;
}



// FUNCTION 140f34900 FUN_140f34900 body=39 status=ok
// SIG undefined FUN_140f34900(void)

undefined4 FUN_140f34900(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_140f2a1f0();
  FUN_140f262d0(param_1);
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0xf40);
  *(undefined4 *)(param_1 + 0xf40) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140f34930 FUN_140f34930 body=27 status=ok
// SIG undefined FUN_140f34930(void)

void FUN_140f34930(undefined8 param_1)

{
  FUN_140f2a2a0();
  FUN_142ebfbd0(param_1);
  return;
}



// FUNCTION 140f34960 FUN_140f34960 body=421 status=ok
// SIG undefined FUN_140f34960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f34960(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xb9);
  if (lVar2 != 0) {
    lVar3 = FUN_14142a560();
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
      uVar4 = FUN_140e10600(param_1);
      FUN_142f00490(uVar4,param_1[0xd0]);
    }
  }
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140f26f60;
  uVar4 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar4);
  if (local_28 != 0) {
    plVar6 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar6 = local_38;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar6 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar6 = local_88;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_c8 = 0;
  local_c0 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872820,&local_c8);
  FUN_140f29780(param_1);
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140f34b10 FUN_140f34b10 body=279 status=ok
// SIG undefined FUN_140f34b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f34b10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140f26b60;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140f34c30 FUN_140f34c30 body=116 status=ok
// SIG undefined FUN_140f34c30(void)

void FUN_140f34c30(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5c8);
  if (lVar2 != 0) {
    lVar3 = FUN_14142a560();
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
      FUN_140483870(lVar2 + 0x808,param_1);
    }
  }
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140f34cc0 FUN_140f34cc0 body=356 status=ok
// SIG undefined FUN_140f34cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f34cc0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [4];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c8[0] = 0xffffffff;
  uVar3 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    FUN_14170c210(local_c8);
    uVar3 = local_c8[0];
  }
  local_c8[0] = 0xffffffff;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144266c70;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = uVar3;
    uVar3 = 0xffffffff;
  }
  local_b8[0] = &LAB_140f26fe0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar4 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar4 = local_38;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar4 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar4 = local_88;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar3);
  FUN_1416f8340(local_c8[0]);
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140f34e30 FUN_140f34e30 body=2418 status=ok
// SIG undefined FUN_140f34e30(void)

void FUN_140f34e30(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_188;
  longlong *local_180;
  longlong local_178;
  longlong *local_170;
  longlong local_168;
  longlong *local_160;
  longlong local_158;
  longlong *local_150;
  longlong local_148;
  longlong *local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong *local_38;
  longlong local_28;
  
  local_180 = (longlong *)0x0;
  if (param_1 + 0x84 != &local_188) {
    param_1[0x84] = 0;
    local_188 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x85,&local_180);
    plVar4 = local_180;
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_180 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_180 + 8))(local_180,1);
        }
      }
    }
  }
  local_170 = (longlong *)0x0;
  if (param_1 + 0x86 != &local_178) {
    param_1[0x86] = 0;
    local_178 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x87,&local_170);
    plVar4 = local_170;
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_170 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
  }
  local_160 = (longlong *)0x0;
  if (param_1 + 0x88 != &local_168) {
    param_1[0x88] = 0;
    local_168 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x89,&local_160);
    plVar4 = local_160;
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_160 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
  }
  local_150 = (longlong *)0x0;
  if (param_1 + 0x8a != &local_158) {
    param_1[0x8a] = 0;
    local_158 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x8b,&local_150);
    plVar4 = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_150 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
  }
  local_140 = (longlong *)0x0;
  if (param_1 + 0x8c != &local_148) {
    param_1[0x8c] = 0;
    local_148 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x8d,&local_140);
    plVar4 = local_140;
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_140 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_140 + 8))(local_140,1);
        }
      }
    }
  }
  local_130 = (longlong *)0x0;
  if (param_1 + 0x8e != &local_138) {
    param_1[0x8e] = 0;
    local_138 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x8f,&local_130);
    plVar4 = local_130;
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_130 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
  }
  local_120 = (longlong *)0x0;
  if (param_1 + 0x90 != &local_128) {
    param_1[0x90] = 0;
    local_128 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x91,&local_120);
    plVar4 = local_120;
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_120 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
  }
  local_110 = (longlong *)0x0;
  if (param_1 + 0x92 != &local_118) {
    param_1[0x92] = 0;
    local_118 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x93,&local_110);
    plVar4 = local_110;
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_110 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_110 + 8))(local_110,1);
        }
      }
    }
  }
  local_100 = (longlong *)0x0;
  if (param_1 + 0x94 != &local_108) {
    param_1[0x94] = 0;
    local_108 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x95,&local_100);
    plVar4 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_100 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
  }
  local_f0 = (longlong *)0x0;
  if (param_1 + 0x98 != &local_f8) {
    param_1[0x98] = 0;
    local_f8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x99,&local_f0);
    plVar4 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
  }
  local_e0 = (longlong *)0x0;
  if (param_1 + 0x9a != &local_e8) {
    param_1[0x9a] = 0;
    local_e8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x9b,&local_e0);
    plVar4 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
  }
  local_d0 = (longlong *)0x0;
  if (param_1 + 0x9c != &local_d8) {
    param_1[0x9c] = 0;
    local_d8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x9d,&local_d0);
    plVar4 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
  }
  local_c0 = (longlong *)0x0;
  if (param_1 + 0x9e != &local_c8) {
    param_1[0x9e] = 0;
    local_c8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x9f,&local_c0);
    plVar4 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
  }
  local_b0 = (longlong *)0x0;
  if (param_1 + 0xa0 != &local_b8) {
    param_1[0xa0] = 0;
    local_b8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa1,&local_b0);
    plVar4 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
  }
  local_a0 = (longlong *)0x0;
  if (param_1 + 0xa2 != &local_a8) {
    param_1[0xa2] = 0;
    local_a8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa3,&local_a0);
    plVar4 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
  }
  local_90 = (longlong *)0x0;
  if (param_1 + 0xa4 != &local_98) {
    param_1[0xa4] = 0;
    local_98 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa5,&local_90);
    plVar4 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  local_80 = (longlong *)0x0;
  if (param_1 + 0xa6 != &local_88) {
    param_1[0xa6] = 0;
    local_88 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa7,&local_80);
    plVar4 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  local_70 = (longlong *)0x0;
  if (param_1 + 0xa8 != &local_78) {
    param_1[0xa8] = 0;
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa9,&local_70);
    plVar4 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  local_60 = (longlong *)0x0;
  if (param_1 + 0xaa != &local_68) {
    param_1[0xaa] = 0;
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xab,&local_60);
    plVar4 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  local_50 = (longlong *)0x0;
  if (param_1 + 0xac != &local_58) {
    param_1[0xac] = 0;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xad,&local_50);
    plVar4 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  plVar4 = (longlong *)param_1[0xca];
  *(undefined4 *)(param_1 + 0xbd) = 2;
  *(undefined4 *)((longlong)param_1 + 0x5ec) = 2;
  *(undefined4 *)(param_1 + 0xbe) = 2;
  *(undefined4 *)((longlong)param_1 + 0x5f4) = 2;
  *(undefined4 *)(param_1 + 0xbf) = 2;
  *(undefined4 *)((longlong)param_1 + 0x5fc) = 2;
  *(undefined4 *)(param_1 + 0xc0) = 2;
  *(undefined4 *)((longlong)param_1 + 0x604) = 2;
  *(undefined4 *)(param_1 + 0xc1) = 2;
  *(undefined4 *)((longlong)param_1 + 0x60c) = 2;
  if (plVar4 != (longlong *)0x0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      (**(code **)(*plVar4 + 0x288))(plVar4);
    }
  }
  param_1[0xca] = 0;
  FUN_142ec05c0(param_1);
  lVar6 = *param_1;
  uVar7 = FUN_1411c87b0(&local_48);
  (**(code **)(lVar6 + 0x358))(param_1,uVar7,1);
  if (local_28 != 0) {
    LOCK();
    piVar2 = (int *)(local_28 + 0x48);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  FUN_1416f8340(local_44);
  FUN_1416f8340(local_48);
  return;
}



// FUNCTION 140f357b0 FUN_140f357b0 body=212 status=ok
// SIG undefined FUN_140f357b0(void)

void FUN_140f357b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18 [2];
  
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x1a0) != &local_28) {
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1a8,&local_20);
    plVar4 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  if ((undefined8 *)(param_1 + 0x1b0) != local_18) {
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    plVar4 = *(longlong **)(param_1 + 0x1b8);
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    if (plVar4 != (longlong *)0x0) {
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
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 140f35890 FUN_140f35890 body=670 status=ok
// SIG undefined FUN_140f35890(void)

void FUN_140f35890(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_60 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x2c8) != &local_68) {
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x2d0,&local_60);
    plVar5 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  local_50 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x2d8) != &local_58) {
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x2e0,&local_50);
    plVar5 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  local_40 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x2e8) != &local_48) {
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x2f0,&local_40);
    plVar5 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  local_30 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x2f8) != &local_38) {
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x300,&local_30);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x308) != &local_28) {
    *(undefined8 *)(param_1 + 0x308) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x310,&local_20);
    plVar5 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x318) != &local_18) {
    *(undefined8 *)(param_1 + 0x318) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 800,&local_10);
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  FUN_142ebfc00(param_1);
  return;
}



// FUNCTION 140f35b30 FUN_140f35b30 body=211 status=ok
// SIG undefined FUN_140f35b30(void)

void FUN_140f35b30(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    iVar6 = 0;
    iVar3 = FUN_142eb7440();
    if (0 < iVar3) {
      do {
        lVar4 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x6c8),iVar6);
        if (lVar4 != 0) {
          lVar5 = UPackageMapClient::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (((bVar1) && (*(longlong *)(lVar4 + 0x308) != 0)) &&
             (cVar2 = (*(code *)**(undefined8 **)*param_2)(), cVar2 != '\0')) {
            FUN_140f461c0(param_1,lVar4);
          }
        }
        iVar6 = iVar6 + 1;
        iVar3 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x6c8));
      } while (iVar6 < iVar3);
    }
  }
  return;
}



// FUNCTION 140f35c10 FUN_140f35c10 body=167 status=ok
// SIG undefined FUN_140f35c10(void)

void FUN_140f35c10(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xb9);
  if (lVar2 != 0) {
    lVar3 = FUN_14142a560();
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
      uVar4 = FUN_140e10600(param_1);
      FUN_142f00490(uVar4,param_1[0xd0]);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x639) = 0;
  if (param_1[0xc6] != 0) {
    *(undefined1 *)((longlong)param_1 + 0x639) = *(undefined1 *)(param_1[0xc6] + 0x10e5);
  }
                    /* WARNING: Could not recover jumptable at 0x000140f35cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x580))(param_1,0);
  return;
}



// FUNCTION 140f35d10 FUN_140f35d10 body=437 status=ok
// SIG undefined FUN_140f35d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f35d10(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar6 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = thunk_FUN_140f19370;
  FUN_1420849a0(param_1,local_68,local_b8);
  if (local_78 != 0) {
    plVar7 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar7 = local_88;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar1 = DAT_146872910;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar5 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_140f35ded;
  }
  lVar5 = lVar6;
LAB_140f35ded:
  if (*(int *)(lVar5 + lVar1) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_68);
    if (local_78 != 0) {
      plVar7 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar7 = local_88;
      }
      if (plVar7 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar7 + 8))();
      }
    }
    (*local_b8[0])(lVar6);
    if (local_78 != 0) {
      plVar7 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar7 = local_88;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8);
    FUN_14208c4f0(param_1,local_b8);
  }
  if (local_28 != 0) {
    plVar7 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar7 = local_38;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f35ed0 FUN_140f35ed0 body=437 status=ok
// SIG undefined FUN_140f35ed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f35ed0(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar6 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = FUN_140f26ec0;
  FUN_1420849a0(param_1,local_68,local_b8);
  if (local_78 != 0) {
    plVar7 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar7 = local_88;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar1 = DAT_146872910;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar5 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_140f35fad;
  }
  lVar5 = lVar6;
LAB_140f35fad:
  if (*(int *)(lVar5 + lVar1) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_68);
    if (local_78 != 0) {
      plVar7 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar7 = local_88;
      }
      if (plVar7 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar7 + 8))();
      }
    }
    (*local_b8[0])(lVar6);
    if (local_78 != 0) {
      plVar7 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar7 = local_88;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8);
    FUN_14208c4f0(param_1,local_b8);
  }
  if (local_28 != 0) {
    plVar7 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar7 = local_38;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f36090 FUN_140f36090 body=701 status=ok
// SIG undefined FUN_140f36090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f36090(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0 [2];
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  plVar5 = *(longlong **)(param_1 + 0xa00);
  plVar8 = plVar5 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
  if (plVar5 != plVar8) {
    lVar3 = 0;
    do {
      lVar4 = *plVar5 + 0x170;
      if (*plVar5 == 0) {
        lVar4 = lVar3;
      }
      if (param_2 == lVar4) {
        lVar4 = plVar5[0x1a];
        local_e0[0] = 0xffffffff;
        if (plVar5[1] != 0) {
          FUN_14170c210(local_e0);
        }
        local_e4 = 0xffffffff;
        if (plVar5[2] != 0) {
          FUN_14170c210(&local_e4);
        }
        local_e8 = 0xffffffff;
        uVar6 = 0xffffffff;
        if (*plVar5 != 0) {
          FUN_14170c210(&local_e8);
          uVar6 = local_e8;
        }
        uVar9 = local_e0[0];
        uVar7 = local_e4;
        local_e4 = 0xffffffff;
        local_e0[0] = 0xffffffff;
        local_e8 = 0xffffffff;
        local_a8 = (longlong *)0x0;
        local_98 = 0;
        puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = &PTR_FUN_14461b7e8;
          puVar2[1] = param_1;
          *(int *)(puVar2 + 2) = (int)lVar4;
          *(undefined4 *)((longlong)puVar2 + 0x14) = uVar6;
          uVar6 = 0xffffffff;
          *(undefined4 *)(puVar2 + 3) = uVar7;
          uVar7 = 0xffffffff;
          *(undefined4 *)((longlong)puVar2 + 0x1c) = uVar9;
          uVar9 = 0xffffffff;
        }
        local_d8[0] = thunk_FUN_140f1bc10;
        FUN_1420849a0(param_1,local_88,local_d8);
        if (local_98 != 0) {
          plVar5 = local_c8;
          if (local_a8 != (longlong *)0x0) {
            plVar5 = local_a8;
          }
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5,0);
          }
        }
        if (local_a8 != (longlong *)0x0) {
          FMemory::Free();
        }
        FUN_1416f8340(uVar9);
        FUN_1416f8340(uVar7);
        FUN_1416f8340(uVar6);
        FUN_1416f8340(local_e8);
        FUN_1416f8340(local_e4);
        FUN_1416f8340(local_e0[0]);
        cVar1 = FUN_140f2ca60();
        if (cVar1 == '\0') {
          TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,local_88);
          if (local_98 != 0) {
            plVar5 = local_c8;
            if (local_a8 != (longlong *)0x0) {
              plVar5 = local_a8;
            }
            if (plVar5 != (longlong *)0x0) {
              lVar3 = (**(code **)(*plVar5 + 8))();
            }
          }
          (*local_d8[0])(lVar3);
          if (local_98 != 0) {
            plVar5 = local_c8;
            if (local_a8 != (longlong *)0x0) {
              plVar5 = local_a8;
            }
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))(plVar5,0);
            }
          }
          if (local_a8 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        else {
          TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8);
          FUN_14208c4f0(param_1,local_d8);
        }
        if (local_48 != 0) {
          plVar5 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar5 = local_58;
          }
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5,0);
          }
        }
        if (local_58 == (longlong *)0x0) {
          return;
        }
        FMemory::Free();
        return;
      }
      plVar5 = plVar5 + 0x1b;
    } while (plVar5 != plVar8);
  }
  return;
}



// FUNCTION 140f36350 FUN_140f36350 body=437 status=ok
// SIG undefined FUN_140f36350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f36350(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar6 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = thunk_FUN_140f1e490;
  FUN_1420849a0(param_1,local_68,local_b8);
  if (local_78 != 0) {
    plVar7 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar7 = local_88;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar1 = DAT_146872910;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar5 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_140f3642d;
  }
  lVar5 = lVar6;
LAB_140f3642d:
  if (*(int *)(lVar5 + lVar1) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_68);
    if (local_78 != 0) {
      plVar7 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar7 = local_88;
      }
      if (plVar7 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar7 + 8))();
      }
    }
    (*local_b8[0])(lVar6);
    if (local_78 != 0) {
      plVar7 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar7 = local_88;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8);
    FUN_14208c4f0(param_1,local_b8);
  }
  if (local_28 != 0) {
    plVar7 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar7 = local_38;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f36510 FUN_140f36510 body=27 status=ok
// SIG undefined FUN_140f36510(void)

void FUN_140f36510(longlong param_1)

{
  FUN_142ec19b0();
  *(undefined1 *)(param_1 + 0x4e9) = 0;
  return;
}



// FUNCTION 140f36530 FUN_140f36530 body=637 status=ok
// SIG undefined FUN_140f36530(void)

void FUN_140f36530(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  BOOL BVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  
  lVar9 = 0;
  if (param_4 == '\0') {
    local_58 = 0;
    local_50 = 0;
    (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x4e8))
              ((longlong *)(param_1 + -0x4d8),DAT_146872888,&local_58);
  }
  plVar8 = *(longlong **)(param_1 + 0x528);
  plVar11 = plVar8 + (longlong)*(int *)(param_1 + 0x530) * 0x1b;
  for (plVar10 = plVar8; lVar12 = lVar9, plVar10 != plVar11; plVar10 = plVar10 + 0x1b) {
    lVar12 = *plVar10;
    lVar5 = lVar12 + 0x170;
    if (lVar12 == 0) {
      lVar5 = lVar9;
    }
    if (param_2 == lVar5) break;
  }
  do {
    lVar5 = lVar9;
    if (plVar8 == plVar11) {
LAB_140f36606:
      BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa40));
      if (BVar4 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa40));
      }
      lVar9 = param_1 + -0x4d8;
      lVar7 = 0x740;
      if (*(char *)(param_1 + 0x959) != '\x01') {
        lVar7 = 0x5a8;
      }
      cVar3 = FUN_140eec880(lVar7 + param_1);
      if (cVar3 == '\0') {
        if ((lVar12 == 0) || (param_2 != lVar12 + 0x170)) {
          if ((lVar5 == 0) || (param_2 != lVar5 + 0x170)) {
            lVar12 = *(longlong *)(param_1 + 0x8d8);
            if ((lVar12 == 0) || (param_2 != lVar12 + 0x170)) {
              if (param_4 != '\0') {
                lVar5 = FUN_140f2b4b0(lVar9,param_3);
                if ((lVar5 == 0) || (*(longlong *)(param_1 + 0x538) != 0)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if ((*(char *)(param_1 + 0x4e8) == '\0') && (*(longlong *)(param_1 + 0x538) == 0)) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
                if ((bVar1) || (bVar2)) {
                  uVar6 = TScriptInterface<IBlendableInterface>::
                          TScriptInterface<IBlendableInterface><UMaterialInterface>(local_38,lVar12)
                  ;
                  FUN_142ed36d0(lVar9,uVar6,0);
                  local_48 = 0;
                  uStack_40 = 0;
                  FUN_142ed36d0(lVar9,&local_48,0);
                }
              }
              LOCK();
              *(undefined4 *)(param_1 + 0xadc) = 1;
              UNLOCK();
              LOCK();
              *(undefined4 *)(param_1 + 0x518) = 1;
              UNLOCK();
              LOCK();
              *(undefined4 *)(param_1 + 0xb0) = 1;
              UNLOCK();
              LOCK();
              *(undefined4 *)(param_1 + 0x514) = 1;
              UNLOCK();
            }
            else {
              FUN_140f35d10(lVar9,param_2,param_3,param_4);
            }
          }
          else {
            FUN_140f36350(lVar9,param_2,param_3,param_4);
          }
        }
        else {
          FUN_140f36090(lVar9,param_2,param_3,param_4);
        }
      }
      else {
        FUN_140f35ed0(lVar9,param_2,param_3,param_4);
      }
                    /* WARNING: Could not recover jumptable at 0x000140f367a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa40));
      return;
    }
    lVar5 = plVar8[1];
    lVar7 = lVar5 + 0x170;
    if (lVar5 == 0) {
      lVar7 = lVar9;
    }
    if (param_2 == lVar7) goto LAB_140f36606;
    plVar8 = plVar8 + 0x1b;
  } while( true );
}



// FUNCTION 140f367b0 FUN_140f367b0 body=95 status=ok
// SIG undefined FUN_140f367b0(void)

void FUN_140f367b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    local_68 = (undefined4)param_2;
    uStack_64 = (undefined4)((ulonglong)param_2 >> 0x20);
    uStack_60 = (undefined4)param_1;
    uStack_5c = (undefined4)((ulonglong)param_1 >> 0x20);
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = local_68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_64;
    *(undefined4 *)(puVar1 + 2) = uStack_60;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_5c;
  }
  local_58[0] = &LAB_140f270b0;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 140f36810 FUN_140f36810 body=72 status=ok
// SIG undefined FUN_140f36810(void)

void FUN_140f36810(longlong *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_14108b1e0();
  local_18 = 0;
  local_10 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872860,&local_18);
  *(undefined1 *)((longlong)param_1 + 0x9be) = 0;
  FUN_142ed2c00(param_1,1);
  return;
}



// FUNCTION 140f36860 FUN_140f36860 body=243 status=ok
// SIG undefined FUN_140f36860(void)

void FUN_140f36860(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18;
  undefined8 uStack_10;
  
  FUN_142ed2c00(param_1,0);
  if (*(longlong *)(param_1 + 0xa10) != 0) {
    FUN_140f2a350(param_1);
  }
  if (*(char *)(param_1 + 0x9c0) != '\0') {
    FUN_140f29a60(param_1,1);
  }
  lVar3 = *(longlong *)(param_1 + 0xdb0);
  local_18 = lVar3;
  if (lVar3 == 0) {
    uStack_10 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    uStack_10 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar2);
  }
  FUN_142ed36d0(param_1,&local_18,0);
  local_18 = 0;
  uStack_10 = 0;
  FUN_142ed36d0(param_1,&local_18,0);
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar3 != 0) {
    lVar4 = FUN_14145f370();
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
      FUN_1407665e0(lVar3 + 0xc28,param_1);
    }
  }
  thunk_FUN_142ec20c0(param_1);
  return;
}



// FUNCTION 140f36970 FUN_140f36970 body=1003 status=ok
// SIG undefined FUN_140f36970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f36970(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  cVar2 = *(char *)(param_1 + 0x9bd);
  if (cVar2 == '\x05') {
    cVar2 = *(char *)(param_1 + 0x9be);
    if (cVar2 != '\x05') {
      if (cVar2 == '\0') {
        cVar2 = FUN_142ebe120(param_1);
        if (cVar2 != '\0') {
          FUN_140f2c5f0(param_1,0);
        }
        *(undefined1 *)(param_1 + 0x9be) = 1;
      }
      else if (cVar2 == '\x01') {
        local_88 = (longlong *)0x0;
        local_78 = 0;
        puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
        if (puVar7 != (undefined8 *)0x0) {
          puVar7[1] = param_1;
          *puVar7 = &PTR_FUN_143f77b70;
        }
        local_b8[0] = &LAB_140f269a0;
        uVar3 = FUN_1420849a0(param_1,local_68,local_b8);
        FUN_14208c260(param_1,uVar3);
        if (local_28 != 0) {
          plVar4 = local_58;
          if (local_38 != (longlong *)0x0) {
            plVar4 = local_38;
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,0);
          }
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_78 != 0) {
          plVar4 = local_a8;
          if (local_88 != (longlong *)0x0) {
            plVar4 = local_88;
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,0);
          }
        }
        if (local_88 != (longlong *)0x0) {
          FMemory::Free();
        }
        FUN_140f2c4c0(param_1);
        FUN_140f31440(param_1);
        FUN_140f2f7f0(param_1);
        *(undefined1 *)(param_1 + 0x9be) = 2;
      }
      else if (cVar2 == '\x02') {
        FUN_140f3e730(param_1);
        FUN_140f491a0(param_1);
        *(undefined1 *)(param_1 + 0x9be) = 3;
      }
      else if (cVar2 == '\x03') {
        FUN_140f50e20(param_1);
        *(undefined1 *)(param_1 + 0x9be) = 4;
      }
      else if (cVar2 == '\x04') {
        cVar2 = FUN_140f51910();
        if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0xe20) != 0)) {
          cVar2 = FUN_140fca450(*(longlong *)(param_1 + 0xe20),param_1 + 0x928,param_1 + 0x908);
          if (cVar2 == '\0') {
            uVar3 = FUN_140e971d0(param_1);
            cVar2 = FUN_140eec940(uVar3);
            if (cVar2 != '\0') {
              FUN_140fca450(*(undefined8 *)(param_1 + 0xe20),param_1 + 0x930,param_1 + 0x908);
            }
          }
          else {
            lVar6 = *(longlong *)(param_1 + 0xe20);
            local_c8 = FUN_140f43340;
            uStack_c0 = 0;
            plVar8 = (longlong *)(lVar6 + 0x180);
            plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
            if (plVar4 != (longlong *)0x0) {
              *plVar4 = (longlong)&PTR_FUN_143f77b88;
              FWeakObjectPtr::operator=(plVar4 + 1,param_1);
              *(undefined4 *)(plVar4 + 2) = (undefined4)local_c8;
              *(undefined4 *)((longlong)plVar4 + 0x14) = local_c8._4_4_;
              *(undefined4 *)(plVar4 + 3) = uStack_c0;
              *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_bc;
              lVar5 = FDelegateHandle::GenerateNewID();
              plVar4[5] = lVar5;
              *plVar4 = (longlong)&PTR_FUN_143f77bd0;
            }
            if (&local_c8 != plVar8) {
              if (plVar4 == (longlong *)0x0) {
                if ((*(int *)(lVar6 + 0x188) != 0) &&
                   (plVar1 = (longlong *)*plVar8, plVar1 != (longlong *)0x0)) {
                  (**(code **)(*plVar1 + 0x28))(plVar1,0);
                  if (*plVar8 != 0) {
                    lVar5 = FMemory::Realloc(*plVar8,0,0);
                    *plVar8 = lVar5;
                  }
                  *(undefined4 *)(lVar6 + 0x188) = 0;
                }
              }
              else {
                (**(code **)(*plVar4 + 0x30))(plVar4,plVar8);
              }
            }
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x28))(plVar4,0);
              lVar6 = FMemory::Realloc(plVar4,0,0);
              if (lVar6 != 0) {
                FMemory::Free(lVar6);
              }
            }
          }
        }
        FUN_142edb720(param_1);
        *(undefined1 *)(param_1 + 0x9be) = 5;
      }
    }
  }
  else if (cVar2 == '\x01') {
    FUN_140f2f900(param_1);
    *(undefined1 *)(param_1 + 0x9bd) = 2;
  }
  else if (cVar2 == '\x02') {
    FUN_140f2fb00(param_1);
    FUN_140f30fc0(param_1);
    FUN_140f2f000(param_1);
    *(undefined1 *)(param_1 + 0x9bd) = 3;
  }
  else if (cVar2 == '\x03') {
    if (*(longlong *)(param_1 + 0xa70) != 0) {
      FUN_140f4c460();
    }
    if (*(longlong *)(param_1 + 0xa78) != 0) {
      FUN_140f4c460();
    }
    FUN_140f47890(param_1,1);
    *(undefined1 *)(param_1 + 0x9bd) = 4;
  }
  else if (cVar2 == '\x04') {
    FUN_140f50440(param_1);
    *(undefined1 *)(param_1 + 0x9bd) = 5;
  }
  return;
}



// FUNCTION 140f36d80 FUN_140f36d80 body=148 status=ok
// SIG undefined FUN_140f36d80(void)

void FUN_140f36d80(longlong param_1,longlong param_2)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    uVar2 = FUN_142eb62f0(param_2);
    *(undefined1 *)(param_1 + 0x864) = uVar2;
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar3 != 0) {
    lVar4 = FUN_14145f370();
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
      lVar4 = FUN_140cff230(lVar3);
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x6b) = *(undefined1 *)(param_1 + 0x864);
        *(undefined1 *)(lVar4 + 0x28) = 1;
        FUN_140d131d0(lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140f36e20 FUN_140f36e20 body=94 status=ok
// SIG undefined FUN_140f36e20(void)

void FUN_140f36e20(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x828);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x830) != 0)) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1 + 0x798,1,0);
                    /* WARNING: Could not recover jumptable at 0x000140f36e71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x830) + 0x2b0))
              (*(longlong **)(param_1 + 0x830),param_1 + 0x7b0,1,0);
    return;
  }
  return;
}



// FUNCTION 140f36e80 FUN_140f36e80 body=124 status=ok
// SIG undefined FUN_140f36e80(void)

void FUN_140f36e80(longlong *param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140f36e97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x580))(param_1,1);
    return;
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xba);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0xba);
    cVar1 = FUN_142ebe1d0(uVar2,param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_142ebd920(param_1);
      if ((cVar1 != '\0') && ((char)param_1[0xee] != '\0')) {
        (**(code **)(*param_1 + 0x578))(param_1,1);
      }
    }
  }
  return;
}



// FUNCTION 140f36f00 FUN_140f36f00 body=81 status=ok
// SIG undefined FUN_140f36f00(void)

void FUN_140f36f00(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_142d529c0(param_2,param_1 + 0x640);
  if (cVar1 != '\0') {
    FUN_140f538a0(param_1,param_2);
    if (*(longlong *)(param_1 + 0x768) != 0) {
      FUN_142088910(*(longlong *)(param_1 + 0x768),param_1 + 0x6e8);
    }
  }
  return;
}



// FUNCTION 140f36f60 FUN_140f36f60 body=57 status=ok
// SIG undefined FUN_140f36f60(void)

void FUN_140f36f60(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_142d529c0(param_2,param_1 + 0x640);
  if (cVar1 != '\0') {
    FUN_140f538a0(param_1,param_2);
  }
  return;
}



// FUNCTION 140f36fa0 FUN_140f36fa0 body=49 status=ok
// SIG undefined FUN_140f36fa0(void)

void FUN_140f36fa0(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if ((param_2 == '\x04') && (*(longlong *)(param_1 + 0x758) != 0)) {
    lVar1 = param_1 + 0x6b8;
    if (*(int *)(param_1 + 0x638) == 0) {
      lVar1 = param_1 + 0x718;
    }
    FUN_142088910(*(longlong *)(param_1 + 0x758),lVar1);
    return;
  }
  return;
}



// FUNCTION 140f36fe0 FUN_140f36fe0 body=283 status=ok
// SIG undefined FUN_140f36fe0(void)

void FUN_140f36fe0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined2 *local_18;
  int local_10;
  
  if (DAT_146b17150 != 0) {
    FUN_142874ac0();
  }
  if (param_2 != 0) {
    uVar3 = FUN_1427fe4c0(param_2);
    *(undefined4 *)(param_1 + 0x854) = uVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146872938) {
    _Init_thread_header(&DAT_146872938);
    if (DAT_146872938 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146872930 =
           (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
      _Init_thread_footer(&DAT_146872938);
    }
  }
  plVar1 = DAT_146872930;
  FString::PrintfImpl(&local_18,&DAT_144050d74,(double)*(float *)(param_1 + 0x854));
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f37100 FUN_140f37100 body=94 status=ok
// SIG undefined FUN_140f37100(void)

void FUN_140f37100(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x828);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x830) != 0)) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1 + 0x6b8,1,0);
                    /* WARNING: Could not recover jumptable at 0x000140f37151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x830) + 0x2b0))
              (*(longlong **)(param_1 + 0x830),param_1 + 0x6d0,1,0);
    return;
  }
  return;
}



// FUNCTION 140f37160 FUN_140f37160 body=283 status=ok
// SIG undefined FUN_140f37160(void)

void FUN_140f37160(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined2 *local_18;
  int local_10;
  
  if (DAT_146b17150 != 0) {
    FUN_142874ac0();
  }
  if (param_2 != 0) {
    uVar3 = FUN_1427fe4c0(param_2);
    *(undefined4 *)(param_1 + 0x858) = uVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146872948) {
    _Init_thread_header(&DAT_146872948);
    if (DAT_146872948 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146872940 =
           (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.UI.Level");
      _Init_thread_footer(&DAT_146872948);
    }
  }
  plVar1 = DAT_146872940;
  FString::PrintfImpl(&local_18,&DAT_144050d74,(double)*(float *)(param_1 + 0x858));
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f37280 FUN_140f37280 body=94 status=ok
// SIG undefined FUN_140f37280(void)

void FUN_140f37280(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x828);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x830) != 0)) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1 + 0x6e8,1,0);
                    /* WARNING: Could not recover jumptable at 0x000140f372d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x830) + 0x2b0))
              (*(longlong **)(param_1 + 0x830),param_1 + 0x700,1,0);
    return;
  }
  return;
}



// FUNCTION 140f372e0 FUN_140f372e0 body=94 status=ok
// SIG undefined FUN_140f372e0(void)

void FUN_140f372e0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x828);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x830) != 0)) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1 + 0x688,1,0);
                    /* WARNING: Could not recover jumptable at 0x000140f37331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x830) + 0x2b0))
              (*(longlong **)(param_1 + 0x830),param_1 + 0x6a0,1,0);
    return;
  }
  return;
}



// FUNCTION 140f37340 FUN_140f37340 body=242 status=ok
// SIG undefined FUN_140f37340(void)

void FUN_140f37340(longlong param_1,longlong param_2)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    uVar2 = FUN_142eb7a60(param_2);
    *(undefined1 *)(param_1 + 0x850) = uVar2;
  }
  if (DAT_146b17150 != 0) {
    lVar3 = FUN_142874ac0();
    if (lVar3 != 0) {
      FUN_14247c070(lVar3,*(undefined1 *)(param_1 + 0x850),1000);
    }
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar3 != 0) {
    lVar4 = FUN_14145f370();
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
      FUN_140d123b0(lVar3,*(undefined1 *)(param_1 + 0x850),*(undefined4 *)(param_1 + 0x854),
                    *(undefined4 *)(param_1 + 0x85c),*(undefined4 *)(param_1 + 0x860),
                    *(undefined4 *)(param_1 + 0x858));
    }
  }
  FUN_140f4e790(param_1,*(undefined1 *)(param_1 + 0x868),*(undefined8 *)(param_1 + 0x848),1);
  return;
}



// FUNCTION 140f37440 FUN_140f37440 body=58 status=ok
// SIG undefined FUN_140f37440(void)

void FUN_140f37440(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14208d120(param_1,(undefined8 *)(param_1 + 0x688),L"healthGlowAnim");
  if (cVar1 != '\0') {
    FUN_14203e030(*(undefined8 *)(param_1 + 0x688),L"fullHealthFlash");
    return;
  }
  return;
}



// FUNCTION 140f374d0 FUN_140f374d0 body=155 status=ok
// SIG undefined FUN_140f374d0(void)

void FUN_140f374d0(longlong *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(char *)((longlong)param_1 + 0x6c9) != '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_1468729b8) {
      _Init_thread_header(&DAT_1468729b8);
      if (DAT_1468729b8 == -1) {
        FName::FName(&DAT_1468729b0,"Interaction_Spinner_Cancel_Stop",1);
        _Init_thread_footer(&DAT_1468729b8);
      }
    }
    local_18 = 0;
    local_10 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,DAT_1468729b0,&local_18);
  }
  return;
}



// FUNCTION 140f37570 FUN_140f37570 body=526 status=ok
// SIG undefined FUN_140f37570(void)

void FUN_140f37570(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  FUN_142ec45d0();
  local_70 = 0xe;
  local_78 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"widgetWrapper",0x1c);
  local_88 = (longlong *)0x0;
  local_80 = 0;
  lVar2 = FUN_140e96f30(param_1,&local_78,0,6,&local_88);
  param_1[200] = lVar2;
  plVar5 = local_88;
  for (iVar4 = (int)local_80; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (param_1[200] != 0) {
    local_58 = 0;
    local_50 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"label",0xc);
    local_68 = (longlong *)0x0;
    local_60 = 0;
    lVar2 = FUN_140ecc7d0(param_1[200],&local_58,0,6,&local_68);
    param_1[0xc9] = lVar2;
    plVar5 = local_68;
    for (iVar4 = (int)local_60; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    if ((longlong *)param_1[0xc9] != (longlong *)0x0) {
      local_48 = 0;
      local_40 = 0;
      lVar2 = *(longlong *)param_1[0xc9];
      uVar3 = FText::FromString(local_38,&local_48);
      (**(code **)(lVar2 + 0x2b0))(param_1[0xc9],uVar3,1,0);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_30 + 1;
        lVar2 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140f37777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x580))(param_1,0);
  return;
}



// FUNCTION 140f37780 FUN_140f37780 body=1912 status=ok
// SIG undefined FUN_140f37780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f37780(longlong param_1)

{
  undefined1 **ppuVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 **ppuVar8;
  longlong lVar9;
  undefined1 auStack_268 [32];
  longlong **local_248;
  longlong *local_238;
  int local_230;
  longlong *local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 *local_e8 [4];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  FUN_142ec45d0();
  local_210 = 6;
  local_218 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
  FGenericPlatformString::Memcpy(local_218,L"icons",0xc);
  local_248 = &local_228;
  local_228 = (longlong *)0x0;
  local_220 = 0;
  local_160 = 0;
  uVar4 = FUN_140e96f30(param_1,&local_218,0,6);
  *(undefined8 *)(param_1 + 0x640) = uVar4;
  plVar7 = local_228;
  for (iVar6 = (int)local_220; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_228 != (longlong *)0x0) {
    FMemory::Free(local_228);
  }
  if (local_218 != 0) {
    FMemory::Free();
  }
  local_1f8 = 0;
  local_1f0 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
  FGenericPlatformString::Memcpy(local_1f8,L"labelContainer",0x1e);
  local_248 = &local_208;
  local_208 = (longlong *)0x0;
  local_200 = 0;
  local_158 = 0;
  uVar4 = FUN_140e96f30(param_1,&local_1f8,0,6);
  *(undefined8 *)(param_1 + 0x648) = uVar4;
  plVar7 = local_208;
  for (iVar6 = (int)local_200; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_208 != (longlong *)0x0) {
    FMemory::Free(local_208);
  }
  if (local_1f8 != 0) {
    FMemory::Free();
  }
  local_1d8 = 0;
  local_1d0 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
  FGenericPlatformString::Memcpy(local_1d8,L"label",0xc);
  local_248 = &local_1e8;
  local_1e8 = (longlong *)0x0;
  local_1e0 = 0;
  local_150 = 0;
  uVar4 = FUN_140ac4770(param_1,&local_1d8,0,6);
  *(undefined8 *)(param_1 + 0x650) = uVar4;
  plVar7 = local_1e8;
  for (iVar6 = (int)local_1e0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_1e8 != (longlong *)0x0) {
    FMemory::Free(local_1e8);
  }
  if (local_1d8 != 0) {
    FMemory::Free();
  }
  local_118 = 0;
  local_110 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"delta",0xc);
  local_108 = 0;
  local_100 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
  FGenericPlatformString::Memcpy(local_108,L"backgroundBar",0x1c);
  local_f8 = 0;
  local_f0 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
  FGenericPlatformString::Memcpy(local_f8,L"currentValueLabel",0x24);
  local_e8[0] = (undefined1 *)0x0;
  local_e8[1] = (undefined1 *)0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"maxValueLabel",0x1c);
  lVar9 = 4;
  local_238 = (longlong *)0x0;
  local_230 = 4;
  TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_238,4,0);
  puVar5 = &local_118;
  iVar6 = 4;
  plVar7 = local_238;
  do {
    *plVar7 = 0;
    iVar3 = *(int *)(puVar5 + 1);
    local_168 = (void *)*puVar5;
    *(int *)(plVar7 + 1) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)((longlong)plVar7 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar7,iVar3,0);
      _guard_xfg_dispatch_icall_nop((void *)*plVar7,local_168,(longlong)iVar3 * 2);
    }
    plVar7 = plVar7 + 2;
    puVar5 = puVar5 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  ppuVar8 = local_e8 + 2;
  do {
    ppuVar1 = ppuVar8 + -2;
    ppuVar8 = ppuVar8 + -2;
    lVar9 = lVar9 + -1;
    if (*ppuVar1 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  } while (lVar9 != 0);
  local_1c8 = 0;
  local_1c0 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
  FGenericPlatformString::Memcpy(local_1c8,L"dyingBar",0x12);
  local_168 = (void *)UGameInstanceGameParameters::GetPrivateStaticClass();
  local_248 = &local_238;
  uVar4 = FUN_140ecc190(param_1,&local_1c8,local_168,2);
  *(undefined8 *)(param_1 + 0x658) = uVar4;
  if (local_1c8 != 0) {
    FMemory::Free();
  }
  local_1b8 = 0;
  local_1b0 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
  FGenericPlatformString::Memcpy(local_1b8,L"reviveBar",0x14);
  local_148 = UGameInstanceGameParameters::GetPrivateStaticClass();
  local_248 = &local_238;
  uVar4 = FUN_140ecc190(param_1,&local_1b8,local_148,2);
  *(undefined8 *)(param_1 + 0x660) = uVar4;
  if (local_1b8 != 0) {
    FMemory::Free();
  }
  local_198 = 0;
  local_190 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
  FGenericPlatformString::Memcpy(local_198,L"actionText",0x16);
  local_248 = &local_1a8;
  local_1a8 = (longlong *)0x0;
  local_1a0 = 0;
  local_140 = 0;
  uVar4 = FUN_140ac4770(param_1,&local_198,0,6);
  *(undefined8 *)(param_1 + 0x670) = uVar4;
  plVar7 = local_1a8;
  for (iVar6 = (int)local_1a0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_1a8 != (longlong *)0x0) {
    FMemory::Free(local_1a8);
  }
  if (local_198 != 0) {
    FMemory::Free();
  }
  if (*(longlong **)(param_1 + 0x670) != (longlong *)0x0) {
    lVar9 = **(longlong **)(param_1 + 0x670);
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_138,L"Hold to Give Up",L"GFxFightForYourLifeWidget",L"GiveUpPrompt");
    (**(code **)(lVar9 + 0x2b0))(*(undefined8 *)(param_1 + 0x670),uVar4,1,0);
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_130 + 1;
      lVar9 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar2 = (int *)((longlong)local_130 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
  }
  local_178 = 0;
  local_170 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
  FGenericPlatformString::Memcpy(local_178,L"GiveUpHint",0x16);
  local_248 = &local_188;
  local_188 = (longlong *)0x0;
  local_180 = 0;
  uVar4 = FUN_140f139f0(param_1,&local_178,0,6);
  *(undefined8 *)(param_1 + 0x678) = uVar4;
  plVar7 = local_188;
  for (iVar6 = (int)local_180; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_188 != (longlong *)0x0) {
    FMemory::Free(local_188);
  }
  if (local_178 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x678) != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x678) + 0x308);
    uVar4 = FUN_140e10600(param_1);
    (**(code **)(lVar9 + 0x10))(*(longlong *)(param_1 + 0x678) + 0x308,0,uVar4);
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_e8[2] = &LAB_140f27160;
  uVar4 = FUN_1420849a0(param_1,local_88,local_e8 + 2);
  FUN_14208c260(param_1,uVar4);
  if (local_48 != 0) {
    plVar7 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar7 = local_58;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    plVar7 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar7 = local_a8;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  plVar7 = local_238;
  iVar6 = local_230;
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
    plVar7 = local_238;
    iVar6 = local_230;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_238 != (longlong *)0x0) {
    FMemory::Free(local_238);
  }
  return;
}



// FUNCTION 140f37f00 FUN_140f37f00 body=986 status=ok
// SIG undefined FUN_140f37f00(void)

void FUN_140f37f00(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  
  FUN_142ec5080();
  local_d0 = 10;
  local_d8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"levelText",0x14);
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  uVar3 = FUN_140ecc7d0(param_1,&local_d8,0,6,&local_e8);
  *(undefined8 *)(param_1 + 0x340) = uVar3;
  plVar7 = local_e8;
  for (iVar6 = (int)local_e0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  local_b8 = 0;
  local_b0 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,L"playerIcon",0x16);
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  uVar3 = FUN_140ecbdf0(param_1,&local_b8,0,6,&local_c8);
  *(undefined8 *)(param_1 + 0x348) = uVar3;
  plVar7 = local_c8;
  for (iVar6 = (int)local_c0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  local_98 = 0;
  local_90 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"playerName",0x16);
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  uVar3 = FUN_140ecc7d0(param_1,&local_98,0,6,&local_a8);
  *(undefined8 *)(param_1 + 0x350) = uVar3;
  plVar7 = local_a8;
  for (iVar6 = (int)local_a0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  local_78 = 0;
  local_70 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"playerInfo",0x16);
  local_88 = (longlong *)0x0;
  local_80 = 0;
  uVar3 = FUN_140ecc7d0(param_1,&local_78,0,6,&local_88);
  *(undefined8 *)(param_1 + 0x358) = uVar3;
  plVar7 = local_88;
  for (iVar6 = (int)local_80; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  local_58 = 0;
  local_50 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"partyInfo",0x14);
  local_68 = (longlong *)0x0;
  local_60 = 0;
  local_48 = 0;
  uVar3 = FUN_140ecc7d0(param_1,&local_58,0,6,&local_68);
  *(undefined8 *)(param_1 + 0x360) = uVar3;
  plVar7 = local_68;
  for (iVar6 = (int)local_60; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  puVar4 = (undefined8 *)FUN_142085870(param_1,local_40,L"systemIcons");
  *(undefined8 *)(param_1 + 0x368) = *puVar4;
  plVar7 = (longlong *)puVar4[1];
  plVar5 = *(longlong **)(param_1 + 0x370);
  if (plVar7 != plVar5) {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x370);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    *(longlong **)(param_1 + 0x370) = plVar7;
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_38 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  return;
}



// FUNCTION 140f382e0 FUN_140f382e0 body=686 status=ok
// SIG undefined FUN_140f382e0(void)

void FUN_140f382e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  FUN_142ef9e70();
  FUN_142085870(param_1,&local_18,L"elements");
  plVar2 = local_10;
  if (local_18 != 0) {
    *(longlong *)(param_1 + 0x170) = local_18;
    plVar7 = *(longlong **)(param_1 + 0x178);
    if (local_10 != plVar7) {
      if (local_10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_10 + 0xc) = *(int *)((longlong)local_10 + 0xc) + 1;
        UNLOCK();
        plVar7 = *(longlong **)(param_1 + 0x178);
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (plVar7 != (longlong *)0x0)) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      *(longlong **)(param_1 + 0x178) = plVar2;
    }
    FUN_1420392d0(local_18,&local_28,L"clips");
    plVar2 = local_20;
    if (local_28 != 0) {
      *(longlong *)(param_1 + 0x180) = local_28;
      plVar7 = *(longlong **)(param_1 + 0x188);
      if (local_20 != plVar7) {
        if (local_20 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
          UNLOCK();
          plVar7 = *(longlong **)(param_1 + 0x188);
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar3 == 1) && (plVar7 != (longlong *)0x0)) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
        *(longlong **)(param_1 + 0x188) = plVar2;
      }
      FUN_14204d420(local_28,param_1 + 400,L"grenadeIconRed");
      FUN_14204d420(local_28,param_1 + 0x1a0,L"arrowRed");
      FUN_14204d420(local_28,param_1 + 0x1b0,L"redPulse");
      FUN_14204d420(local_28,param_1 + 0x1c0,L"whiteIcon");
      FUN_14204d420(local_28,param_1 + 0x1d0,L"arrowWhite");
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_20 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_10 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x38);
  if (lVar6 != 0) {
    lVar5 = AGRumbleGameState::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(lVar6 + 0x630);
      lVar6 = FWeakObjectPtr::Get(lVar6 + 0x614);
      if (lVar6 != 0) {
        lVar5 = FUN_1414d9130();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(lVar6 + 0xeb8);
          *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(lVar6 + 0xebc);
        }
      }
    }
  }
  FUN_140f4d7f0(param_1,0,1);
  return;
}



// FUNCTION 140f38590 FUN_140f38590 body=413 status=ok
// SIG undefined FUN_140f38590(void)

void FUN_140f38590(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  FUN_142ec45d0();
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x648)) {
    do {
      if (iVar6 == 0) {
        local_38 = 0;
        local_30 = 0x13;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        FGenericPlatformString::Memcpy(local_38,L"grenadeIndicatorMC",0x26);
        local_48 = (longlong *)0x0;
        local_40 = 0;
        lVar2 = FUN_140f13110(param_1,&local_38,0,6,&local_48);
        plVar5 = local_48;
        lVar4 = local_38;
        for (iVar7 = (int)local_40; local_38 = lVar4, iVar7 != 0; iVar7 = iVar7 + -1) {
          if (*plVar5 != 0) {
            FMemory::Free();
          }
          plVar5 = plVar5 + 2;
          lVar4 = local_38;
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free(local_48);
          lVar4 = local_38;
        }
LAB_140f386bb:
        if (lVar4 != 0) {
          FMemory::Free();
        }
        if (lVar2 != 0) {
          iVar7 = *(int *)(param_1 + 0x658);
          iVar1 = iVar7 + 1;
          *(int *)(param_1 + 0x658) = iVar1;
          if (*(int *)(param_1 + 0x65c) < iVar1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x650);
          }
          *(longlong *)(*(longlong *)(param_1 + 0x650) + (longlong)iVar7 * 8) = lVar2;
        }
      }
      else if (*(longlong *)(param_1 + 0x2b8) != 0) {
        uVar3 = UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass();
        FString::PrintfImpl(local_28,L"grenadeIndicator%d",iVar6);
        lVar2 = FUN_140f12c60(*(undefined8 *)(param_1 + 0x2b8),"GrenadeIndicator",local_28,uVar3);
        lVar4 = local_28[0];
        goto LAB_140f386bb;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x648));
  }
  return;
}



// FUNCTION 140f38730 FUN_140f38730 body=741 status=ok
// SIG undefined FUN_140f38730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f38730(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FUN_142ec45d0();
  local_98 = &local_88;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  uVar4 = FUN_140e96f30(param_1,param_1 + 0x658,0,6);
  *(undefined8 *)(param_1 + 0x758) = uVar4;
  plVar9 = local_88;
  for (iVar8 = (int)local_80; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  if (*(longlong *)(param_1 + 0x758) != 0) {
    local_98 = &local_88;
    local_88 = (longlong *)0x0;
    local_80 = 0;
    uVar4 = FUN_140ecbdf0(*(longlong *)(param_1 + 0x758),param_1 + 0x678,0,6);
    *(undefined8 *)(param_1 + 0x760) = uVar4;
    plVar9 = local_88;
    for (iVar8 = (int)local_80; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
    if (*(longlong *)(param_1 + 0x760) != 0) {
      local_98 = &local_88;
      local_88 = (longlong *)0x0;
      local_80 = 0;
      uVar4 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x758),param_1 + 0x668,0,6);
      *(undefined8 *)(param_1 + 0x768) = uVar4;
      plVar9 = local_88;
      for (iVar8 = (int)local_80; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free(local_88);
      }
    }
    local_98 = &local_88;
    local_88 = (longlong *)0x0;
    local_80 = 0;
    uVar4 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x758),param_1 + 0x688,0,6);
    *(undefined8 *)(param_1 + 0x5f0) = uVar4;
    plVar9 = local_88;
    for (iVar8 = (int)local_80; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
  }
  FUN_140f53780(param_1,0);
  FWeakObjectPtr::operator=(&local_88,param_1);
  uVar2 = (undefined4)local_88;
  uVar3 = local_88._4_4_;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1444f8920;
    puVar5[1] = param_1;
    *(undefined4 *)(puVar5 + 2) = uVar2;
    *(undefined4 *)((longlong)puVar5 + 0x14) = uVar3;
  }
  local_78[0] = &LAB_140f26cf0;
  FUN_14208c260(param_1,local_78);
  if (local_38 != 0) {
    plVar9 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar9 = local_48;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar6 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined1 *)(param_1 + 0x770) = *(undefined1 *)(lVar6 + 0x1954);
    }
  }
  return;
}



// FUNCTION 140f38a20 FUN_140f38a20 body=249 status=ok
// SIG undefined FUN_140f38a20(void)

void FUN_140f38a20(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_142ec5080();
  uStack_10 = 0;
  local_18 = FUN_140f2af50;
  plVar1 = (longlong *)(param_1 + 0x188);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_14461b688;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_18._4_4_;
    *(undefined4 *)(plVar3 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
  }
  if (&local_18 != plVar1) {
    if (plVar3 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 400) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar4 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar4;
        }
        *(undefined4 *)(param_1 + 400) = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return;
}



// FUNCTION 140f38b20 FUN_140f38b20 body=281 status=ok
// SIG undefined FUN_140f38b20(void)

void FUN_140f38b20(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142ec5080();
  uVar5 = FUN_142085870(param_1,local_28,L"statUpgradeText");
  FUN_142ede260(param_1 + 0x308,uVar5);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  puVar6 = (undefined8 *)FUN_142085870(param_1,local_18,L"statUpgradeIcon");
  *(undefined8 *)(param_1 + 800) = *puVar6;
  plVar3 = (longlong *)puVar6[1];
  plVar7 = *(longlong **)(param_1 + 0x328);
  if (plVar3 != plVar7) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + 0x328);
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
    *(longlong **)(param_1 + 0x328) = plVar3;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 140f38c40 FUN_140f38c40 body=219 status=ok
// SIG undefined FUN_140f38c40(void)

void FUN_140f38c40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142ec5080();
  uVar5 = FUN_142085870(param_1,local_28,L"statLabel");
  FUN_142ede260(param_1 + 800,uVar5);
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
  uVar5 = FUN_142085870(param_1,local_18,L"statPercent");
  FUN_142ede260(param_1 + 0x308,uVar5);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 140f38d20 FUN_140f38d20 body=658 status=ok
// SIG undefined FUN_140f38d20(void)

void FUN_140f38d20(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *local_98;
  int local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [2];
  
  FUN_142ec45d0();
  local_50 = 0xe;
  local_58 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"backgroundBar",0x1c);
  local_48[0] = 0;
  local_48[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"maxValueLabel",0x1c);
  lVar8 = 2;
  local_98 = (longlong *)0x0;
  local_90 = 2;
  TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_98,2,0);
  puVar7 = &local_58;
  iVar6 = 2;
  plVar4 = local_98;
  do {
    *plVar4 = 0;
    iVar2 = *(int *)(puVar7 + 1);
    _Src = (void *)*puVar7;
    *(int *)(plVar4 + 1) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)((longlong)plVar4 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar4,iVar2,0);
      _guard_xfg_dispatch_icall_nop((void *)*plVar4,_Src,(longlong)iVar2 * 2);
    }
    plVar4 = plVar4 + 2;
    puVar7 = puVar7 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar5 = &stack0xffffffffffffffc8;
  do {
    plVar4 = (longlong *)(puVar5 + -0x10);
    puVar5 = puVar5 + -0x10;
    lVar8 = lVar8 + -1;
    if (*plVar4 != 0) {
      FMemory::Free();
    }
  } while (lVar8 != 0);
  uVar3 = AReplicationGraphDebugActor::GetPrivateStaticClass();
  lVar8 = FUN_140f13c90(param_1,param_1 + 0xc6,uVar3,2,&local_98);
  param_1[0xcc] = lVar8;
  uVar3 = (**(code **)(*param_1 + 0x4a8))(param_1,local_68,L"classNameLabel");
  FUN_142ede260(param_1 + 0xd3,uVar3);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_60 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  local_78 = 0;
  local_70 = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"healthInitializationMC",0x2e);
  local_88 = (longlong *)0x0;
  local_80 = 0;
  lVar8 = FUN_140e96f30(param_1,&local_78,0,6,&local_88);
  param_1[0xbe] = lVar8;
  plVar4 = local_88;
  for (iVar6 = (int)local_80; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  plVar4 = local_98;
  iVar6 = local_90;
  if (local_78 != 0) {
    FMemory::Free();
    plVar4 = local_98;
    iVar6 = local_90;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}



// FUNCTION 140f38fc0 FUN_140f38fc0 body=1336 status=ok
// SIG undefined FUN_140f38fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f38fc0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_118 [32];
  longlong **local_f8;
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FUN_142ec45d0();
  local_d0 = 0xc;
  local_d8 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"hintPrimary",0x18);
  local_f8 = &local_e8;
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  uVar2 = FUN_140f139f0(param_1,&local_d8,0,6);
  *(undefined8 *)(param_1 + 0x630) = uVar2;
  plVar5 = local_e8;
  for (iVar4 = (int)local_e0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x630) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x630) + 0x308);
    uVar2 = FUN_140e10600(param_1);
    (**(code **)(lVar1 + 0x10))(*(longlong *)(param_1 + 0x630) + 0x308,0,uVar2);
  }
  local_e8 = (longlong *)0x0;
  local_e0 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"interactionLabelPrimary",0x30);
  local_f8 = &local_d8;
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  uVar2 = FUN_140ac4770(param_1,&local_e8,0,6);
  *(undefined8 *)(param_1 + 0x638) = uVar2;
  plVar5 = local_d8;
  for (iVar4 = (int)local_d0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_e8 = (longlong *)0x0;
  local_e0 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"promptsWrapperPrimary",0x2c);
  local_f8 = &local_d8;
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_e8,0,6);
  *(undefined8 *)(param_1 + 0x640) = uVar2;
  plVar5 = local_d8;
  for (iVar4 = (int)local_d0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_e8 = (longlong *)0x0;
  local_e0 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"hintSecondary",0x1c);
  local_f8 = &local_d8;
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  uVar2 = FUN_140f139f0(param_1,&local_e8,0,6);
  *(undefined8 *)(param_1 + 0x648) = uVar2;
  plVar5 = local_d8;
  for (iVar4 = (int)local_d0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x648) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x648) + 0x308);
    uVar2 = FUN_140e10600(param_1);
    (**(code **)(lVar1 + 0x10))(*(longlong *)(param_1 + 0x648) + 0x308,0,uVar2);
  }
  local_e8 = (longlong *)0x0;
  local_e0 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"interactionLabelSecondary",0x34);
  local_f8 = &local_d8;
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  uVar2 = FUN_140ac4770(param_1,&local_e8,0,6);
  *(undefined8 *)(param_1 + 0x650) = uVar2;
  plVar5 = local_d8;
  for (iVar4 = (int)local_d0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_e8 = (longlong *)0x0;
  local_e0 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"promptsWrapperSecondary",0x30);
  local_f8 = &local_d8;
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_e8,0,6);
  *(undefined8 *)(param_1 + 0x658) = uVar2;
  plVar5 = local_d8;
  for (iVar4 = (int)local_d0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_140f4d1d0(param_1,1);
  FUN_140f4d1d0(param_1,1,0);
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_b8);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_1;
    *puVar3 = &PTR_FUN_143f77b70;
  }
  local_c8[0] = &LAB_140f269b0;
  uVar2 = FUN_1420849a0(param_1,local_78,local_c8);
  FUN_14208c260(param_1,uVar2);
  if (local_38 != 0) {
    plVar5 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar5 = local_48;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    plVar5 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar5 = local_98;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f39500 FUN_140f39500 body=850 status=ok
// SIG undefined FUN_140f39500(void)

void FUN_140f39500(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  FUN_142ef9e70();
  local_a0 = 0x12;
  local_a8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"animCustoUnlocked",0x24);
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  FUN_140e98b90(param_1,param_1 + 0x170,&local_a8,0,6,&local_b8);
  plVar5 = local_b8;
  for (iVar4 = (int)local_b0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  local_88 = 0;
  local_80 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"animDropped",0x18);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  FUN_140e98b90(param_1,param_1 + 0x1c0,&local_88,0,6,&local_98);
  plVar5 = local_98;
  for (iVar4 = (int)local_90; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    uVar3 = FUN_142085870(*(longlong *)(param_1 + 0x1c0),local_78,L"titleMC");
    FUN_142ede260(param_1 + 0x1c8,uVar3);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_70 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    uVar3 = FUN_142085870(*(undefined8 *)(param_1 + 0x1c0),local_68,L"titleDsMC");
    FUN_142ede260(param_1 + 0x1e0,uVar3);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_60 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    uVar3 = FUN_142085870(*(longlong *)(param_1 + 0x170),local_58,L"titleMC");
    FUN_142ede260(param_1 + 0x178,uVar3);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_50 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    uVar3 = FUN_142085870(*(undefined8 *)(param_1 + 0x170),local_48,L"titleDsMC");
    FUN_142ede260(param_1 + 400,uVar3);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    uVar3 = FUN_142085870(*(undefined8 *)(param_1 + 0x170),local_38,L"subtitleMC");
    FUN_142ede260(param_1 + 0x1a8,uVar3);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f39860 FUN_140f39860 body=2927 status=ok
// SIG undefined FUN_140f39860(void)

void FUN_140f39860(longlong *param_1)

{
  int *piVar1;
  longlong **pplVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong *local_138 [2];
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_88;
  longlong local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  
  FUN_142ec5080();
  local_170 = 9;
  local_178 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
  FGenericPlatformString::Memcpy(local_178,L"gridItem",0x12);
  local_188 = (longlong *)0x0;
  local_180 = 0;
  lVar5 = FUN_140ecbdf0(param_1,&local_178,0,6,&local_188);
  param_1[0x4d] = lVar5;
  plVar6 = local_188;
  for (iVar9 = (int)local_180; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_188 != (longlong *)0x0) {
    FMemory::Free(local_188);
  }
  if (local_178 != 0) {
    FMemory::Free();
  }
  if (param_1[0x4d] == 0) {
    param_1[0x4d] = (longlong)param_1;
  }
  *(undefined2 *)(param_1 + 0xcb) = 0;
  FUN_142ed2600(param_1,3);
  uStack_190._0_4_ = 0;
  local_198 = FUN_140f2afa0;
  pplVar2 = (longlong **)(param_1 + 0x31);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  local_138[0] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_FUN_14461b688;
    FWeakObjectPtr::operator=(plVar6 + 1,param_1);
    *(undefined4 *)(plVar6 + 2) = (undefined4)local_198;
    *(undefined4 *)((longlong)plVar6 + 0x14) = local_198._4_4_;
    *(undefined4 *)(plVar6 + 3) = (undefined4)uStack_190;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_190._4_4_;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar5;
  }
  if (local_138 != pplVar2) {
    if (plVar6 == (longlong *)0x0) {
      if (((int)param_1[0x32] != 0) && (plVar7 = *pplVar2, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar7 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar7;
        }
        *(undefined4 *)(param_1 + 0x32) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,pplVar2);
    }
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    local_138[0] = (longlong *)FMemory::Realloc(plVar6,0,0);
    if (local_138[0] != (longlong *)0x0) {
      FMemory::Free(local_138[0]);
    }
  }
  lVar5 = *param_1;
  uVar8 = FUN_1411c87b0(&local_98);
  (**(code **)(lVar5 + 0x358))(param_1,uVar8,1);
  if (local_78 != 0) {
    LOCK();
    piVar1 = (int *)(local_78 + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_88 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  FUN_1416f8340(local_94);
  FUN_1416f8340(local_98);
  if (param_1[0x4d] == 0) goto LAB_140f3a268;
  FUN_14208d2d0(param_1[0x4d],param_1 + 0xa6,L"missionItem");
  *(bool *)(param_1 + 0x83) = param_1[0xa6] != 0;
  *(bool *)((longlong)param_1 + 0x277) = param_1[0xa6] != 0;
  FUN_14208d2d0(param_1[0x4d],param_1 + 0x84,L"favoriteTrash");
  FUN_14208d2d0(param_1[0x4d],param_1 + 0x86,L"elementalWrapper");
  if (param_1[0x86] == 0) {
    FUN_14208d2d0(param_1[0x4d],param_1 + 0x88,L"elemental.elementalTypeIcon");
  }
  else {
    FUN_14204d380(param_1[0x86],param_1 + 0x88,L"elemental.elementalTypeIcon");
  }
  FUN_14208d2d0(param_1[0x4d],param_1 + 0x8a,L"WeaponRender.WeaponRenderWrapper.ExtTexRender");
  FUN_14208d2d0(param_1[0x4d],param_1 + 0x8c,L"WeaponRenderShadow.WeaponRenderWrapper.ExtTexRender")
  ;
  FUN_14208d2d0(param_1[0x4d],param_1 + 0x8e,L"rarityContent");
  uVar8 = FUN_142085870(param_1[0x4d],local_128,L"gridRarityText");
  FUN_142ede260(param_1 + 0xb1,uVar8);
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_120 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar1 = (int *)((longlong)local_120 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  FUN_14208d2d0(param_1[0x4d],param_1 + 0x90,L"itemScoreWrapper");
  uVar8 = FUN_142085870(param_1[0x4d],local_118,L"itemScoreWrapper.itemScore");
  FUN_142ede260(param_1 + 0xae,uVar8);
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_110 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)local_110 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  if ((param_1[0xaf] == 0) || (param_1[0xb0] == 0)) {
LAB_140f39ca7:
    uVar8 = FUN_142085870(param_1[0x4d],local_108,L"itemScore");
    FUN_142ede260(param_1 + 0xae,uVar8);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_100 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
  }
  else {
    piVar1 = (int *)(param_1[0xb0] + 8);
    LOCK();
    iVar9 = *piVar1;
    if (iVar9 == 0) {
      *piVar1 = 0;
      iVar9 = 0;
    }
    UNLOCK();
    if (iVar9 < 1) goto LAB_140f39ca7;
  }
  uVar8 = FUN_142085870(param_1[0x4d],local_f8,L"itemScoreShadow.itemScore");
  FUN_142ede260(param_1 + 0xb4,uVar8);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_f0 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  if ((param_1[0xb5] == 0) || (param_1[0xb6] == 0)) {
LAB_140f39d89:
    bVar3 = false;
  }
  else {
    piVar1 = (int *)(param_1[0xb6] + 8);
    LOCK();
    iVar9 = *piVar1;
    if (iVar9 == 0) {
      *piVar1 = 0;
      iVar9 = 0;
    }
    UNLOCK();
    if (iVar9 < 1) goto LAB_140f39d89;
    bVar3 = true;
  }
  if (bVar3) {
    FUN_14208d2d0(param_1[0x4d],param_1 + 0x92,L"itemScoreShadow");
  }
  else {
    uVar8 = FUN_142085870(param_1[0x4d],local_e8,L"itemScoreShadow");
    FUN_142ede260(param_1 + 0xb4,uVar8);
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_e0 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
  }
  cVar4 = FUN_14208d2d0(param_1[0x4d],param_1 + 0xac,L"emptyTextWrapper");
  if (cVar4 == '\0') {
    uVar8 = FUN_142085870(param_1[0x4d],local_c8,L"emptyText");
    FUN_142ede260(param_1 + 0xb7,uVar8);
    plVar6 = local_c0;
  }
  else {
    uVar8 = FUN_1420392d0(param_1[0xac],local_d8,L"emptyText");
    FUN_142ede260(param_1 + 0xb7,uVar8);
    plVar6 = local_d0;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  FUN_14208d2d0(param_1[0x4d],param_1 + 0x94,L"equippedFlourishAnim");
  FUN_14208d2d0(param_1[0x4d],param_1 + 0x96,L"manufacturerLogoWrapper");
  if (param_1[0x96] != 0) {
    FUN_14204d380(param_1[0x96],param_1 + 0x98,L"manufacturerLogoInner.manufacturerLogo");
  }
  if (param_1[0x98] == 0) {
    FUN_14208d2d0(param_1[0x4d],param_1 + 0x98,L"manufacturerLogo");
  }
  FUN_14208d2d0(param_1[0x4d],param_1 + 0x9a,L"lockedSlot");
  FUN_14208d2d0(param_1[0x4d],param_1 + 0x9c,L"invalidSlot");
  FUN_14208d2d0(param_1[0x4d],param_1 + 0x9e,L"cantEquip");
  cVar4 = FUN_14208d2d0(param_1[0x4d],param_1 + 0xaa,L"cosmeticLabelWrapper");
  if (cVar4 != '\0') {
    uVar8 = FUN_1420392d0(param_1[0xaa],local_b8,L"cosmeticLabel");
    FUN_142ede260(param_1 + 0xba,uVar8);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_b0 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
  }
  if ((param_1[0xbb] == 0) || (param_1[0xbc] == 0)) {
LAB_140f3a009:
    uVar8 = FUN_142085870(param_1[0x4d],local_a8,L"cosmeticLabel");
    FUN_142ede260(param_1 + 0xba,uVar8);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_a0 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
  }
  else {
    piVar1 = (int *)(param_1[0xbc] + 8);
    LOCK();
    iVar9 = *piVar1;
    if (iVar9 == 0) {
      *piVar1 = 0;
      iVar9 = 0;
    }
    UNLOCK();
    if (iVar9 < 1) goto LAB_140f3a009;
  }
  FUN_14208d2d0(param_1[0x4d],param_1 + 0xa0,L"equippedIconWrapper");
  if (param_1[0xa0] == 0) {
    FUN_14208d2d0(param_1[0x4d],param_1 + 0xa2,L"equippedIcon");
  }
  else {
    FUN_14204d380(param_1[0xa0],param_1 + 0xa2,L"equippedIcon");
  }
  FUN_14208d2d0(param_1[0x4d],param_1 + 0xa4,L"hintWrapper");
  local_158 = 0;
  local_150 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
  FGenericPlatformString::Memcpy(local_158,L"buttonHelp",0x16);
  local_168 = (longlong *)0x0;
  local_160 = 0;
  FUN_140e98630(param_1[0x4d],param_1 + 0xca,&local_158,0,6,&local_168);
  plVar6 = local_168;
  for (iVar9 = (int)local_160; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free(local_168);
  }
  if (local_158 != 0) {
    FMemory::Free();
  }
  if (param_1[0xca] == 0) {
    local_198 = (code *)0x0;
    uStack_190._0_4_ = 0x11;
    uStack_190._4_4_ = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
    FGenericPlatformString::Memcpy(local_198,L"hintWrapper.hint",0x22);
    local_148 = (longlong *)0x0;
    local_140 = 0;
    FUN_140e98630(param_1,param_1 + 0xca,&local_198,0,6,&local_148);
    plVar6 = local_148;
    for (iVar9 = (int)local_140; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free(local_148);
    }
    if (local_198 != (code *)0x0) {
      FMemory::Free();
    }
  }
  FUN_14208d2d0(param_1[0x4d],param_1 + 0xa8,L"loadingCircle");
LAB_140f3a268:
  if ((param_1[0xb8] != 0) && (param_1[0xb9] != 0)) {
    piVar1 = (int *)(param_1[0xb9] + 8);
    LOCK();
    iVar9 = *piVar1;
    if (iVar9 == 0) {
      *piVar1 = 0;
      iVar9 = 0;
    }
    UNLOCK();
    if (0 < iVar9) {
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_70,L"EMPTY",L"GFxInventoryItemWidget",L"EmptyText");
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xb7,uVar8,1,0);
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_68 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
    }
  }
  if (*(int *)((longlong)param_1 + 0x5f4) == 2 || *(int *)((longlong)param_1 + 0x5f4) == 1) {
    if (param_1[0xa0] == 0) {
      if (param_1[0xa2] != 0) {
        FUN_142056670(param_1[0xa2],0);
      }
    }
    else {
      FUN_14203e4e0(param_1[0xa0],&DAT_144612570);
    }
    *(undefined4 *)((longlong)param_1 + 0x5f4) = 0;
  }
  if (param_1[0xca] != 0) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Equip",L"GFxInventoryItemWidget",L"EquipText");
    FUN_142ed5ef0(param_1[0xca],&DAT_146b3e2a0,uVar8);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f3a3d0 FUN_140f3a3d0 body=144 status=ok
// SIG undefined FUN_140f3a3d0(void)

void FUN_140f3a3d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142ef9e70();
  puVar5 = (undefined8 *)FUN_142085870(param_1,local_18,L"allIcons");
  if ((undefined8 *)(param_1 + 0x170) != puVar5) {
    *(undefined8 *)(param_1 + 0x170) = *puVar5;
    *puVar5 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x178,puVar5 + 1);
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 140f3a460 FUN_140f3a460 body=225 status=ok
// SIG undefined FUN_140f3a460(void)

void FUN_140f3a460(longlong param_1)

{
  char cVar1;
  
  FUN_142ec3600();
  cVar1 = FUN_14208d2d0(param_1,param_1 + 0x2c8,L"loadingCircle");
  if (cVar1 != '\0') {
    FUN_14203e4e0(*(undefined8 *)(param_1 + 0x2c8),&DAT_144613538);
  }
  cVar1 = FUN_14208d2d0(param_1,param_1 + 0x2d8,L"invalidSlot");
  if (cVar1 != '\0') {
    cVar1 = FUN_14208d2d0(param_1,param_1 + 0x2d8,L"invalidSlot");
    if (cVar1 != '\0') {
      FUN_14203e4e0(*(undefined8 *)(param_1 + 0x2d8),&DAT_144613930);
    }
  }
  cVar1 = FUN_14208d2d0(param_1,param_1 + 0x2e8,L"trinketRenderWrapper.trinketRender");
  if (cVar1 != '\0') {
    FUN_142056670(*(undefined8 *)(param_1 + 0x2e8),0);
  }
  cVar1 = FUN_14208d2d0(param_1,param_1 + 0x2f8,L"trinketRenderShadow.trinketRender");
  if (cVar1 != '\0') {
    FUN_142056670(*(undefined8 *)(param_1 + 0x2f8),0);
  }
  return;
}



// FUNCTION 140f3a5c0 FUN_140f3a5c0 body=314 status=ok
// SIG undefined FUN_140f3a5c0(void)

undefined8 FUN_140f3a5c0(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  float *pfVar8;
  undefined8 uVar9;
  longlong local_28;
  longlong local_20;
  undefined1 local_18 [16];
  
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_1468725a8 == *param_2)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((bVar5) && (*(longlong **)(param_1 + 0x1f0) != (longlong *)0x0)) {
    plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x2b0))();
    if (plVar6 != (longlong *)0x0) {
      lVar7 = UPackageMapClient::GetPrivateStaticClass();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        pfVar8 = (float *)(**(code **)(*plVar6 + 0x328))
                                    (plVar6,local_18,*(undefined8 *)(param_1 + 0x1f0));
        fVar1 = pfVar8[3];
        fVar2 = pfVar8[1];
        fVar3 = pfVar8[2];
        fVar4 = *pfVar8;
        local_28 = plVar6[0x61];
        local_20 = plVar6[0x62];
        if (local_20 != 0) {
          LOCK();
          *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
          UNLOCK();
        }
        FUN_140f50f50(param_1 + -0x4d8,&local_28,
                      CONCAT44((fVar3 + fVar4) * 0.5,(fVar1 + fVar2) * 0.5));
        return 1;
      }
    }
  }
  uVar9 = FUN_142ec6030(param_1,param_2);
  return uVar9;
}



// FUNCTION 140f3a700 FUN_140f3a700 body=50 status=ok
// SIG undefined FUN_140f3a700(void)

undefined8 FUN_140f3a700(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) {
    FUN_142eb3990(param_1 + -0x4d8);
    return 1;
  }
  uVar1 = FUN_142ec6030();
  return uVar1;
}



// FUNCTION 140f3a740 FUN_140f3a740 body=679 status=ok
// SIG undefined FUN_140f3a740(void)

undefined8 FUN_140f3a740(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  longlong local_28 [4];
  
  if (*(char *)(param_1 + 0x8f0) != '\x06') {
    if (((*(char *)((longlong)param_2 + 0xc) != '\0') || (DAT_146b3e2b8 != *param_2)) ||
       (*(char *)(param_1 + 0x8f0) != '\x05')) {
      if ((*(longlong *)(param_1 + 0x658) != 0) && (*(longlong *)(param_1 + 0x660) != 0)) {
        cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x8d8);
        if (cVar2 != '\0') {
          cVar2 = FUN_140f28f90(param_1 + -0x4d8);
          if (((cVar2 != '\0') && (*(char *)((longlong)param_2 + 0xc) == '\0')) &&
             (DAT_1468725b0 == *param_2)) {
            cVar2 = FUN_140e1a9c0(*(undefined8 *)(param_1 + 0x658));
            if (cVar2 == '\0') {
              uVar4 = FWeakObjectPtr::Get(param_1 + 0x8d8);
              cVar2 = FUN_140e53ce0(uVar4,*(undefined8 *)(param_1 + 0x658));
              if (cVar2 != '\0') goto LAB_140f3a8c8;
            }
            uVar4 = FWeakObjectPtr::Get(param_1 + 0x8d8);
            cVar2 = FUN_140e53ce0(uVar4,*(undefined8 *)(param_1 + 0x658));
            FUN_140f4d440(*(undefined8 *)(param_1 + 0x660),cVar2 != '\0');
            uVar4 = FWeakObjectPtr::Get(param_1 + 0x8d8);
            FUN_1414b1ec0(uVar4,*(undefined8 *)(param_1 + 0x658),cVar2 == '\0');
            LOCK();
            *(undefined4 *)(param_1 + 0xb0) = 1;
            UNLOCK();
            return 1;
          }
        }
      }
LAB_140f3a8c8:
      cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x8d8);
      if (((cVar2 != '\0') && (*(char *)((longlong)param_2 + 0xc) == '\0')) &&
         (DAT_1468725a8 == *param_2)) {
        if (*(char *)(param_1 + 0x8f0) == '\x02') {
          if (*(longlong *)(param_1 + -0x218) != 0) {
            *(undefined1 *)(param_1 + 0x908) = 1;
            local_28[0] = 0;
            local_28[1] = 0xd;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
            FGenericPlatformString::Memcpy(local_28[0],L"allLockedOff",0x1a);
            FUN_142088910(*(undefined8 *)(param_1 + -0x218),local_28);
            if (local_28[0] != 0) {
              FMemory::Free();
            }
          }
          uVar4 = FWeakObjectPtr::Get(param_1 + 0x8d8);
          FUN_140e48fe0(uVar4,1);
          return 1;
        }
        if ((byte)(*(char *)(param_1 + 0x8f0) - 3U) < 2) {
          FUN_140f529f0(param_1 + -0x4d8,2);
          uVar4 = FWeakObjectPtr::Get(param_1 + 0x8d8);
          FUN_140e48fe0(uVar4,0);
          return 1;
        }
      }
      uVar4 = FUN_1410949b0(param_1,param_2);
      return uVar4;
    }
    lVar1 = *(longlong *)(param_1 + -0x4d8);
    local_28[2] = 0;
    local_28[3] = 0;
    puVar3 = (undefined8 *)FName::FName(local_res8,L"Close",1);
    (**(code **)(lVar1 + 0x4e8))(param_1 + -0x4d8,*puVar3,local_28 + 2);
    FUN_140f29e50(param_1 + -0x4d8);
  }
  return 1;
}



// FUNCTION 140f3a9f0 FUN_140f3a9f0 body=769 status=ok
// SIG undefined FUN_140f3a9f0(void)

undefined8 FUN_140f3a9f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  char cVar12;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_20;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  cVar12 = *(char *)((longlong)param_2 + 0xc);
  if ((cVar12 == '\0') && (DAT_146b3e2a0 == *param_2)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    lVar9 = FWeakObjectPtr::Get(param_1 + 0xb4);
    if (lVar9 != 0) {
      lVar10 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (((bVar8) && (lVar10 = FUN_140cff230(lVar9), lVar10 != 0)) &&
         (FUN_140d123b0(lVar9,*(undefined1 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x37c),
                        *(undefined4 *)(param_1 + 900),*(undefined4 *)(param_1 + 0x388),
                        *(undefined4 *)(param_1 + 0x380)), *(char *)(param_1 + 0x390) != '\0')) {
        *(undefined1 *)(lVar10 + 0x6b) = *(undefined1 *)(param_1 + 0x38c);
        *(undefined1 *)(lVar10 + 0x28) = 1;
        *(undefined1 *)(lVar10 + 0x2e9) = *(undefined1 *)(param_1 + 0x38d);
        *(undefined1 *)(lVar10 + 0x2ea) = *(undefined1 *)(param_1 + 0x38e);
      }
    }
    FUN_140f25440(param_1 + -0x4d8,0);
    if (DAT_1468b6148 != 0) {
      local_48[0] = 0;
      local_48[1] = 0;
      FConfigCacheIni::Flush(DAT_1468b6148,0,local_48);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
    FUN_142eb3990(param_1 + -0x4d8);
    if (*(char *)(param_1 + 0x390) != '\0') {
      local_10 = *(undefined8 *)(param_1 + 0x1a8);
      local_18[0] = 9;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x78,local_18);
    }
    plVar4 = (longlong *)CONCAT44(DAT_1469eaf50._4_4_,(undefined4)DAT_1469eaf50);
    lVar9 = CONCAT44(DAT_1469eaf48._4_4_,(undefined4)DAT_1469eaf48);
    lVar10 = 0;
    local_20 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar4 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
      lVar10 = CONCAT44(DAT_1469eaf50._4_4_,(undefined4)DAT_1469eaf50);
    }
    uVar7 = DAT_1469eaf48._4_4_;
    uVar6 = (undefined4)DAT_1469eaf48;
    if (lVar9 != 0) {
      local_38 = (undefined4)DAT_1469eaf48;
      uStack_34 = DAT_1469eaf48._4_4_;
      uStack_30 = (undefined4)DAT_1469eaf50;
      uStack_2c = DAT_1469eaf50._4_4_;
      if (lVar10 != 0) {
        LOCK();
        *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*(longlong *)CONCAT44(uVar7,uVar6) + 0x108))();
      if (CONCAT44(uStack_2c,uStack_30) != 0) {
        LOCK();
        piVar2 = (int *)(CONCAT44(uStack_2c,uStack_30) + 8);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          puVar5 = (undefined8 *)CONCAT44(uStack_2c,uStack_30);
          (**(code **)*puVar5)(puVar5);
          LOCK();
          piVar2 = (int *)((longlong)puVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*(longlong *)CONCAT44(uStack_2c,uStack_30) + 8))
                      ((longlong *)CONCAT44(uStack_2c,uStack_30),1);
            return 1;
          }
        }
      }
    }
  }
  else {
    if ((cVar12 == '\0') && (DAT_146b3e2b8 == *param_2)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      if (*(char *)(param_1 + 0x390) != '\0') {
        return 1;
      }
      FUN_140f25440(param_1 + -0x4d8,0);
      cVar12 = *(char *)((longlong)param_2 + 0xc);
    }
    if ((cVar12 == '\0') && (DAT_1468725a8 == *param_2)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if (!bVar8) {
      uVar11 = FUN_142ec6030(param_1,param_2);
      return uVar11;
    }
    FUN_140f4e790(param_1 + -0x4d8,*(undefined1 *)(param_1 + 0x390),*(undefined8 *)(param_1 + 0x370)
                  ,2);
  }
  return 1;
}



// FUNCTION 140f3ad00 FUN_140f3ad00 body=167 status=ok
// SIG undefined FUN_140f3ad00(void)

undefined8 FUN_140f3ad00(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar1 = param_1 + -0x4d8;
  cVar2 = FUN_1410875b0();
  if (cVar2 != '\0') {
    LOCK();
    bVar4 = *(int *)(param_1 + 0xae4) == 0;
    if (bVar4) {
      *(int *)(param_1 + 0xae4) = 0;
    }
    UNLOCK();
    if (bVar4) {
      cVar2 = FUN_140f2e470(lVar1,param_2);
      if (((cVar2 == '\0') && (cVar2 = FUN_1410949b0(param_1,param_2), cVar2 == '\0')) &&
         (cVar2 = FUN_140f2e870(lVar1,param_2), cVar2 == '\0')) {
        lVar3 = FUN_142eb65a0(lVar1);
        if (lVar3 == 0) {
          FUN_140f53310(lVar1);
        }
        return 0;
      }
      FUN_141081510(lVar1,param_2);
    }
  }
  return 1;
}



// FUNCTION 140f3adb0 FUN_140f3adb0 body=284 status=ok
// SIG undefined FUN_140f3adb0(void)

void FUN_140f3adb0(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  local_res10[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x678) != 0) {
    FUN_14170c210(local_res10);
  }
  local_res8[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x670) != 0) {
    FUN_14170c210(local_res8);
  }
  FWeakObjectPtr::operator=(&local_res18,param_1);
  uVar2 = local_res10[0];
  uVar3 = local_res8[0];
  local_res8[0] = 0xffffffff;
  local_res10[0] = 0xffffffff;
  local_48 = 0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b550;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res18;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_res1c;
    *(undefined4 *)(puVar1 + 3) = uVar3;
    uVar3 = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar2;
    uVar2 = 0xffffffff;
  }
  local_78[0] = &LAB_140f27070;
  FUN_14208c4f0(param_1,local_78);
  FUN_1416f8340(uVar2);
  FUN_1416f8340(uVar3);
  FUN_1416f8340(local_res8[0]);
  FUN_1416f8340(local_res10[0]);
  return;
}



// FUNCTION 140f3aed0 FUN_140f3aed0 body=444 status=ok
// SIG undefined FUN_140f3aed0(void)

void FUN_140f3aed0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20;
  undefined4 local_res24;
  longlong local_88;
  longlong *local_80;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FUN_140ad4c90(param_1,&local_88);
  if (local_88 != 0) {
    cVar6 = FTcpMessageTransportConnection::Init(local_88);
    if (cVar6 != '\0') {
      local_res18[0] = 0xffffffff;
      if (*(longlong *)(param_1 + 0x648) != 0) {
        FUN_14170c210(local_res18);
      }
      local_res10[0] = 0xffffffff;
      if (*(longlong *)(param_1 + 0x630) != 0) {
        FUN_14170c210(local_res10);
      }
      FWeakObjectPtr::operator=(&local_res20,param_1);
      uVar9 = local_res18[0];
      uVar8 = local_res10[0];
      local_res10[0] = 0xffffffff;
      local_res18[0] = 0xffffffff;
      local_48 = 0;
      local_38 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x20,local_68);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_14461b550;
        puVar7[1] = param_1;
        *(undefined4 *)(puVar7 + 2) = local_res20;
        *(undefined4 *)((longlong)puVar7 + 0x14) = local_res24;
        *(undefined4 *)(puVar7 + 3) = uVar8;
        uVar8 = 0xffffffff;
        *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar9;
        uVar9 = 0xffffffff;
      }
      local_78[0] = &LAB_140f269f0;
      FUN_14204c370(local_88,local_78);
      FUN_1416f8340(uVar9);
      FUN_1416f8340(uVar8);
      FUN_1416f8340(local_res10[0]);
      FUN_1416f8340(local_res18[0]);
    }
  }
  plVar5 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return;
}



// FUNCTION 140f3b090 FUN_140f3b090 body=403 status=ok
// SIG undefined FUN_140f3b090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f3b090(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  FUN_142ec64e0();
  lVar7 = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0xad8) = 1;
  UNLOCK();
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_143f3f130;
  }
  local_78[0] = FUN_140f26db0;
  FUN_140ee5c20(param_1 + 0x5a8,local_78);
  FUN_140ee5c20(param_1 + 0x740,local_78);
  lVar1 = DAT_1468728f8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar5 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_140f3b157;
  }
  lVar5 = lVar7;
LAB_140f3b157:
  if ((*(int *)(lVar5 + lVar1) != 0) && (*(longlong *)(param_1 + 0x948) != 0)) {
    FUN_140fd4540();
  }
  lVar1 = param_1 + -0x4d8;
  FUN_140f53310(lVar1);
  lVar5 = FUN_142eb65a0(lVar1);
  if ((lVar5 == 0) && (param_2 == '\x01')) {
    lVar5 = *(longlong *)(param_1 + 0x8d8);
    local_88 = lVar5;
    if (lVar5 != 0) {
      uVar6 = UBlendableInterface::GetPrivateStaticClass();
      lVar7 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar6);
    }
    local_80 = lVar7;
    FUN_142ed36d0(lVar1,&local_88,0);
  }
  if (local_38 != 0) {
    plVar8 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar8 = local_48;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f3b230 FUN_140f3b230 body=52 status=ok
// SIG undefined FUN_140f3b230(void)

void FUN_140f3b230(longlong param_1)

{
  FUN_140f2c4c0();
  if (*(char *)(param_1 + 0xe90) != '\0') {
    FUN_140f27170(param_1,1,1,0);
    return;
  }
  return;
}



// FUNCTION 140f3b270 FUN_140f3b270 body=247 status=ok
// SIG undefined FUN_140f3b270(void)

void FUN_140f3b270(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((char)param_1[0xee] == '\0') {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar4 = 0;
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2b8);
    }
    if ((param_2 != (longlong *)0x0) && (lVar4 != 0)) {
      uVar2 = FUN_14301f8f0();
      lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
      if ((lVar3 != 0) &&
         ((*(longlong *)(lVar3 + 0x208) != 0 &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x208) + 0x1d8) == lVar4)))) {
        cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xba);
        if (cVar1 != '\0') {
          uVar2 = FWeakObjectPtr::Get(param_1 + 0xba);
          cVar1 = FUN_142ebe1d0(uVar2,param_1);
          if ((cVar1 != '\0') && (cVar1 = FUN_142ebd920(param_1), cVar1 != '\0')) {
            (**(code **)(*param_1 + 0x578))(param_1,1);
          }
        }
        lVar4 = FUN_140eccbe0(param_1);
        if (lVar4 != 0) {
          FUN_140ccad40(lVar4,5);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f3b370 FUN_140f3b370 body=450 status=ok
// SIG undefined FUN_140f3b370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f3b370(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uStack_c0 = *param_2;
  lVar6 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_c8 = param_1;
  puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(puVar4 + 2) = uStack_c0;
    *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_bc;
  }
  local_b8[0] = thunk_FUN_140f1dbe0;
  FUN_1420849a0(param_1,local_68,local_b8);
  if (local_78 != 0) {
    plVar7 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar7 = local_88;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar1 = DAT_146872910;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar5 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_140f3b45a;
  }
  lVar5 = lVar6;
LAB_140f3b45a:
  if (*(int *)(lVar5 + lVar1) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_68);
    if (local_78 != 0) {
      plVar7 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar7 = local_88;
      }
      if (plVar7 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar7 + 8))();
      }
    }
    (*local_b8[0])(lVar6);
    if (local_78 != 0) {
      plVar7 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar7 = local_88;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8);
    FUN_14208c4f0(param_1,local_b8);
  }
  if (local_28 != 0) {
    plVar7 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar7 = local_38;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f3b540 FUN_140f3b540 body=642 status=ok
// SIG undefined FUN_140f3b540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f3b540(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4 [3];
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar4 = FUN_140f2b5e0();
  if (lVar4 == 0) {
    uVar10 = 0xffffffff;
  }
  else {
    puVar5 = (undefined4 *)FUN_142ffa6f0(lVar4,&local_e8,param_2);
    uVar10 = *puVar5;
  }
  local_e8 = 0xffffffff;
  if (param_3 != 0) {
    FUN_14170c210(&local_e8,param_3);
  }
  local_e4[0] = 0xffffffff;
  uVar9 = 0xffffffff;
  if (param_2 != 0) {
    FUN_14170c210(local_e4,param_2);
    uVar9 = local_e4[0];
  }
  uVar11 = local_e8;
  lVar4 = 0;
  local_e4[0] = 0xffffffff;
  local_e8 = 0xffffffff;
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_14461b830;
    puVar6[1] = param_1;
    *(undefined4 *)(puVar6 + 2) = uVar10;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar9;
    uVar9 = 0xffffffff;
    *(undefined4 *)(puVar6 + 3) = uVar11;
    uVar11 = 0xffffffff;
  }
  local_d8[0] = thunk_FUN_140f1d0a0;
  FUN_1420849a0(param_1,local_88,local_d8);
  if (local_98 != 0) {
    plVar8 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar8 = local_a8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar11);
  FUN_1416f8340(uVar9);
  FUN_1416f8340(local_e4[0]);
  FUN_1416f8340(local_e8);
  lVar1 = DAT_146872910;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar7 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_140f3b6de;
  }
  lVar7 = lVar4;
LAB_140f3b6de:
  if (*(int *)(lVar7 + lVar1) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,local_88);
    if (local_98 != 0) {
      plVar8 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar8 = local_a8;
      }
      if (plVar8 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar8 + 8))();
      }
    }
    (*local_d8[0])(lVar4);
    if (local_98 != 0) {
      plVar8 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar8 = local_a8;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8);
    FUN_14208c4f0(param_1,local_d8);
  }
  if (local_48 != 0) {
    plVar8 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar8 = local_58;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f3b7d0 FUN_140f3b7d0 body=450 status=ok
// SIG undefined FUN_140f3b7d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f3b7d0(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uStack_c0 = *param_2;
  lVar6 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_c8 = param_1;
  puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(puVar4 + 2) = uStack_c0;
    *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_bc;
  }
  local_b8[0] = thunk_FUN_140f18c90;
  FUN_1420849a0(param_1,local_68,local_b8);
  if (local_78 != 0) {
    plVar7 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar7 = local_88;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar1 = DAT_146872910;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar5 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_140f3b8ba;
  }
  lVar5 = lVar6;
LAB_140f3b8ba:
  if (*(int *)(lVar5 + lVar1) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_68);
    if (local_78 != 0) {
      plVar7 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar7 = local_88;
      }
      if (plVar7 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar7 + 8))();
      }
    }
    (*local_b8[0])(lVar6);
    if (local_78 != 0) {
      plVar7 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar7 = local_88;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8);
    FUN_14208c4f0(param_1,local_b8);
  }
  if (local_28 != 0) {
    plVar7 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar7 = local_38;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f3b9a0 FUN_140f3b9a0 body=642 status=ok
// SIG undefined FUN_140f3b9a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f3b9a0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4 [3];
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar4 = FUN_140f2b5e0();
  if (lVar4 == 0) {
    uVar10 = 0xffffffff;
  }
  else {
    puVar5 = (undefined4 *)FUN_142ffa6f0(lVar4,&local_e8,param_2);
    uVar10 = *puVar5;
  }
  local_e8 = 0xffffffff;
  if (param_3 != 0) {
    FUN_14170c210(&local_e8,param_3);
  }
  local_e4[0] = 0xffffffff;
  uVar9 = 0xffffffff;
  if (param_2 != 0) {
    FUN_14170c210(local_e4,param_2);
    uVar9 = local_e4[0];
  }
  uVar11 = local_e8;
  lVar4 = 0;
  local_e4[0] = 0xffffffff;
  local_e8 = 0xffffffff;
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_14461b830;
    puVar6[1] = param_1;
    *(undefined4 *)(puVar6 + 2) = uVar10;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar9;
    uVar9 = 0xffffffff;
    *(undefined4 *)(puVar6 + 3) = uVar11;
    uVar11 = 0xffffffff;
  }
  local_d8[0] = thunk_FUN_140f1ef70;
  FUN_1420849a0(param_1,local_88,local_d8);
  if (local_98 != 0) {
    plVar8 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar8 = local_a8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar11);
  FUN_1416f8340(uVar9);
  FUN_1416f8340(local_e4[0]);
  FUN_1416f8340(local_e8);
  lVar1 = DAT_146872910;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar7 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_140f3bb3e;
  }
  lVar7 = lVar4;
LAB_140f3bb3e:
  if (*(int *)(lVar7 + lVar1) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,local_88);
    if (local_98 != 0) {
      plVar8 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar8 = local_a8;
      }
      if (plVar8 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar8 + 8))();
      }
    }
    (*local_d8[0])(lVar4);
    if (local_98 != 0) {
      plVar8 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar8 = local_a8;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8);
    FUN_14208c4f0(param_1,local_d8);
  }
  if (local_48 != 0) {
    plVar8 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar8 = local_58;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}


