// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140f5dd40 FUN_140f5dd40 body=202 status=ok
// SIG undefined FUN_140f5dd40(void)

void FUN_140f5dd40(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = *param_1;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x778));
      *(undefined8 *)(lVar4 + 0x770) = 0;
      *(undefined8 *)(lVar4 + 0x780) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x778));
    }
  }
  return;
}



// FUNCTION 140f5de10 FUN_140f5de10 body=132 status=ok
// SIG undefined FUN_140f5de10(void)

void FUN_140f5de10(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = *param_1;
  iVar4 = *(int *)(lVar2 + 0x710) + -1;
  lVar3 = (longlong)iVar4;
  lVar1 = lVar2;
  if (-1 < iVar4) {
    do {
      if (lVar3 < 0) {
        lVar2 = *param_1;
      }
      else {
        lVar2 = lVar1;
        if (iVar4 < *(int *)(lVar1 + 0x710)) {
          FUN_140f8bd80(lVar1,*(undefined8 *)(*(longlong *)(lVar1 + 0x708) + lVar3 * 8));
          lVar1 = *param_1;
          lVar2 = lVar1;
        }
      }
      iVar4 = iVar4 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(lVar2 + 0x710) = 0;
  if (*(int *)(lVar2 + 0x714) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar2 + 0x708,0);
  }
  return;
}



// FUNCTION 140f5dea0 FUN_140f5dea0 body=151 status=ok
// SIG undefined FUN_140f5dea0(void)

void FUN_140f5dea0(undefined8 *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined8 local_res8;
  
  lVar3 = FUN_140eccca0(*param_1);
  if (lVar3 != 0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UGFxItemCard::OnWeaponChanged",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    FUN_14074ba20(lVar3 + 0x1050,*param_1,&LAB_140f61400,local_res8);
  }
  return;
}



// FUNCTION 140f5df40 FUN_140f5df40 body=588 status=ok
// SIG undefined FUN_140f5df40(void)

void FUN_140f5df40(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  longlong *plVar14;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 uStackX_14;
  int local_28;
  int local_24;
  longlong local_20;
  
  local_res10 = (undefined4)param_1[1];
  uStackX_14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar6 + 0xc);
    pwVar7 = (wchar_t *)0x0;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar11 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar11;
      pwVar7 = (wchar_t *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
               (longlong)(int)((uVar5 & 0xffff) - uVar11) * 0x18);
    }
    if (((*(uint *)(pwVar7 + 4) & 0x30000000) == 0) &&
       (lVar6 = FUN_1416f8720((int)param_1[2]), lVar6 != 0)) {
      uVar8 = FUN_1416f8720((int)param_1[2]);
      lVar6 = FUN_140cff1b0(uVar8);
      if (lVar6 != 0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop
                           (L"&UGFxIronbearWeaponWidget::OnInputDeviceChanged",L"::");
        pwVar7 = (wchar_t *)0x0;
        while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar7 = pwVar3;
        }
        FName::FName(&local_res10,pwVar7 + 2,1);
        lVar2 = CONCAT44(uStackX_14,local_res10);
        lVar10 = *param_1;
        plVar14 = (longlong *)(lVar6 + 0x5f8);
        FWeakObjectPtr::operator=(&local_28,0);
        local_20 = 0;
        FWeakObjectPtr::operator=(&local_28,lVar10);
        local_res8 = 0;
        local_20 = lVar2;
        if ((lVar2 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_28), lVar10 != 0)) {
          UObject::FindFunction(lVar10,local_20);
        }
        piVar12 = (int *)*plVar14;
        iVar1 = *(int *)(lVar6 + 0x600);
        for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar1 * 4; piVar13 = piVar13 + 4) {
          if ((((*piVar13 == local_28) && (piVar13[1] == local_24)) ||
              ((cVar4 = FWeakObjectPtr::IsValid(piVar13), cVar4 == '\0' &&
               (cVar4 = FWeakObjectPtr::IsValid(&local_28), cVar4 == '\0')))) &&
             (*(longlong *)(piVar13 + 2) == local_20)) {
            if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_140f5e156;
            break;
          }
        }
        iVar1 = *(int *)(lVar6 + 0x600);
        *(int *)(lVar6 + 0x600) = iVar1 + 1;
        if (*(int *)(lVar6 + 0x604) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar1);
        }
        piVar12 = (int *)((longlong)iVar1 * 0x10 + *plVar14);
        *piVar12 = local_28;
        piVar12[1] = local_24;
        *(longlong *)(piVar12 + 2) = local_20;
LAB_140f5e156:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
        param_1 = (longlong *)*param_1;
        (**(code **)(*param_1 + 0x2b0))(param_1,*(undefined1 *)((longlong)param_1 + 0x1c9));
      }
    }
  }
  return;
}



// FUNCTION 140f5e190 FUN_140f5e190 body=846 status=ok
// SIG undefined FUN_140f5e190(void)

void FUN_140f5e190(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  uint uVar13;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res18 [16];
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  uint uStack_ac;
  uint *puStack_a8;
  uint local_a0;
  uint uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  longlong *local_90;
  int iStack_88;
  uint uStack_84;
  uint *local_80;
  uint uStack_78;
  uint uStack_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  
  cVar6 = FWeakObjectPtr::IsValid(*param_1 + 0x106c);
  if (cVar6 != '\0') {
    local_b4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0x1000000;
    if (*(char *)(*param_1 + 0x11e0) != '\0') {
      cVar6 = FWeakObjectPtr::IsValid(*param_1 + 0x11e4);
      if (cVar6 == '\0') {
        local_b8 = CONCAT31(local_b8._1_3_,1);
      }
      else {
        uVar7 = FWeakObjectPtr::Get(*param_1 + 0x11e4);
        uVar5 = local_c0;
        lVar12 = (longlong)(int)local_c0;
        iVar9 = (int)local_c0 + 1;
        local_c0 = CONCAT44(local_c0._4_4_,iVar9);
        if (local_c0._4_4_ < iVar9) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    (&local_c8,uVar5 & 0xffffffff);
        }
        *(undefined8 *)(local_c8 + lVar12 * 8) = uVar7;
      }
    }
    local_b8._0_3_ = CONCAT12(1,(undefined2)local_b8);
    plVar8 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x106c);
    (**(code **)(*plVar8 + 0x4e8))(plVar8,param_2,0,0,&local_c8);
    plVar8 = (longlong *)(param_2 + 0x2b0);
    local_b0 = 0;
    uVar2 = *(uint *)(param_2 + 0x2d8);
    puVar1 = (uint *)(param_2 + 0x2c0);
    uStack_ac = 1;
    uStack_9c = 0;
    iStack_98 = 0;
    if (uVar2 != 0) {
      puVar11 = *(uint **)(param_2 + 0x2d0);
      if (*(uint **)(param_2 + 0x2d0) == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar3 = *puVar11;
      iStack_98 = 0;
      local_b0 = 0;
      while (uVar3 == 0) {
        lVar12 = (longlong)local_b0;
        iStack_98 = iStack_98 + 0x20;
        iVar9 = local_b0 + 1;
        bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b0;
        local_b0 = iVar9;
        if (bVar4) goto LAB_140f5e33d;
        uVar3 = puVar11[lVar12 + 1];
      }
      uStack_ac = -uVar3 & uVar3;
      iVar9 = 0x1f;
      if (uStack_ac != 0) {
        for (; uStack_ac >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_ac == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_9c = (iStack_98 - iVar9) + 0x1f;
      if ((int)uVar2 < (int)uStack_9c) {
LAB_140f5e33d:
        uStack_9c = uVar2;
      }
    }
    uVar3 = *(uint *)(param_2 + 0x2d8);
    uStack_78 = 0xffffffff;
    uStack_74 = uStack_9c;
    local_70 = CONCAT44(uStack_94,iStack_98);
    uStack_60 = CONCAT44(uStack_ac,local_b0);
    local_a0 = -1 << ((byte)uVar3 & 0x1f);
    uVar13 = uVar3 & 0xffffffe0;
    iStack_88 = local_b0;
    uStack_84 = uStack_ac;
    puStack_a8 = puVar1;
    uStack_9c = uVar3;
    local_80 = puVar1;
    local_68 = plVar8;
    puStack_58 = puVar1;
    uStack_48 = local_70;
    local_90 = plVar8;
    uStack_50 = uStack_78;
    uStack_4c = uStack_74;
    if (uVar3 != uVar2) {
      puVar11 = *(uint **)(param_2 + 0x2d0);
      if (*(uint **)(param_2 + 0x2d0) == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar10 = puVar11[(int)uVar3 >> 5] & local_a0;
      iVar9 = (int)uVar3 >> 5;
      while (uVar10 == 0) {
        uVar13 = uVar13 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_140f5e402;
        uVar10 = puVar11[(longlong)iVar9 + 1];
        local_a0 = 0xffffffff;
        iVar9 = iVar9 + 1;
      }
      uVar10 = -uVar10 & uVar10;
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
      uStack_9c = (uVar13 - iVar9) + 0x1f;
      uVar3 = uStack_9c;
      if ((int)uVar2 < (int)uStack_9c) {
LAB_140f5e402:
        uStack_9c = uVar2;
        uVar3 = uVar2;
      }
    }
    while (((uStack_74 != uVar3 || (local_80 != puVar1)) || (local_90 != plVar8))) {
      lVar12 = *(longlong *)(*local_90 + (longlong)(int)uStack_74 * 0x10);
      if (lVar12 != 0) {
        UActorComponent::SetTickableWhenPaused(lVar12,1);
      }
      uStack_78 = uStack_78 & ~uStack_84;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_88);
    }
    local_res8 = *(undefined4 *)(*param_1 + 0x106c);
    local_resc = *(undefined4 *)(*param_1 + 0x1070);
    FWeakObjectPtr::operator=(local_res18,param_2);
    lVar12 = *param_1;
    FUN_140f6f750(lVar12 + 0xf30,local_res18,&local_res8,lVar12 + 0xde4,lVar12 + 0xdf8);
    if (local_c8 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f5e4e0 FUN_140f5e4e0 body=220 status=ok
// SIG undefined FUN_140f5e4e0(void)

void FUN_140f5e4e0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      uVar5 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
      uVar6 = FUN_1416f8720((int)param_1[2]);
      (**(code **)(*(longlong *)(*param_1 + 0x630) + 8))
                ((longlong *)(*param_1 + 0x630),uVar6,uVar5,0);
      (**(code **)(*(longlong *)*param_1 + 0x578))((longlong *)*param_1,0);
      *(undefined1 *)(*param_1 + 0x808) = 1;
    }
  }
  return;
}



// FUNCTION 140f5e5c0 FUN_140f5e5c0 body=1729 status=ok
// SIG undefined FUN_140f5e5c0(void)

void FUN_140f5e5c0(undefined4 *param_1,longlong param_2,float *param_3)

{
  float fVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  void *pvVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong *local_res10 [2];
  undefined4 local_res20;
  undefined4 local_res24;
  longlong *local_148;
  float local_140;
  void *local_138;
  int local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  
  cVar3 = FWeakObjectPtr::IsValid(param_2);
  if ((cVar3 != '\0') && (cVar3 = FWeakObjectPtr::IsValid(param_2 + 0x40), cVar3 != '\0')) {
    cVar3 = FWeakObjectPtr::IsValid(param_2 + 0x58);
    if (cVar3 != '\0') {
      local_130 = *(int *)(param_2 + 0x50);
      lVar11 = (longlong)local_130;
      pvVar13 = *(void **)(param_2 + 0x48);
      plVar14 = (longlong *)0x0;
      local_138 = (void *)0x0;
      if (local_130 == 0) {
        local_12c = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (&local_138,local_130,0);
        _guard_xfg_dispatch_icall_nop(local_138,pvVar13,lVar11 << 3);
      }
      local_res20 = *param_1;
      local_res24 = param_1[1];
      TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
      ::FindId(param_2 + 0x60,local_res10,&local_res20);
      plVar9 = plVar14;
      if ((int)local_res10[0] != -1) {
        plVar9 = (longlong *)((longlong)(int)local_res10[0] * 0x20 + *(longlong *)(param_2 + 0x60));
      }
      plVar6 = plVar9 + 1;
      if (plVar9 == (longlong *)0x0) {
        plVar6 = plVar14;
      }
      if ((plVar6 == (longlong *)0x0) || ((int)plVar6[1] == 0)) {
        uVar7 = FWeakObjectPtr::Get(param_2 + 0x58);
        FUN_142397540(uVar7,1);
      }
      else {
        local_128 = 0;
        local_120 = 0;
        lVar11 = FWeakObjectPtr::Get(param_1);
        local_148 = (longlong *)0x0;
        local_140 = *(float *)(lVar11 + 0x238);
        lVar12 = (longlong)(int)local_140;
        pvVar13 = *(void **)(lVar11 + 0x230);
        if (local_140 != 0.0) {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&local_148,local_140,0);
          plVar14 = local_148;
          _guard_xfg_dispatch_icall_nop(local_148,pvVar13,lVar12 << 3);
        }
        plVar9 = (longlong *)*plVar6;
        local_res10[0] = plVar9 + (int)plVar6[1];
        if (plVar9 != local_res10[0]) {
          lVar11 = (longlong)(int)local_140;
          pvVar13 = local_138;
          iVar5 = local_130;
          do {
            iVar10 = 0;
            if (0 < iVar5) {
              lVar12 = 0;
              do {
                if (*(longlong *)((longlong)pvVar13 + lVar12) == *plVar9) {
                  iVar4 = (iVar5 - iVar10) + -1;
                  if (0 < iVar4) {
                    iVar4 = 1;
                  }
                  if (iVar4 != 0) {
                    _guard_xfg_dispatch_icall_nop
                              ((void *)((longlong)pvVar13 + (longlong)iVar10 * 8),
                               (void *)((longlong)pvVar13 + (longlong)(iVar5 - iVar4) * 8),
                               (longlong)iVar4 << 3);
                    iVar5 = local_130;
                  }
                  local_130 = iVar5 + -1;
                  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_138);
                  iVar10 = iVar10 + -1;
                  lVar12 = lVar12 + -8;
                  pvVar13 = local_138;
                  iVar5 = local_130;
                }
                iVar10 = iVar10 + 1;
                lVar12 = lVar12 + 8;
              } while (iVar10 < iVar5);
            }
            uVar2 = local_120;
            if (plVar14 != plVar14 + lVar11) {
              plVar6 = plVar14;
              do {
                if (*plVar6 == *plVar9) goto LAB_140f5e813;
                plVar6 = plVar6 + 1;
              } while (plVar6 != plVar14 + lVar11);
            }
            lVar12 = (longlong)(int)local_120;
            iVar5 = (int)local_120 + 1;
            local_120 = CONCAT44(local_120._4_4_,iVar5);
            if (local_120._4_4_ < iVar5) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_128,uVar2 & 0xffffffff);
            }
            *(longlong *)(local_128 + lVar12 * 8) = *plVar9;
            pvVar13 = local_138;
            iVar5 = local_130;
LAB_140f5e813:
            plVar9 = plVar9 + 1;
          } while (plVar9 != local_res10[0]);
        }
        lVar11 = param_2 + 0x58;
        uVar7 = FWeakObjectPtr::Get(lVar11);
        uVar8 = FWeakObjectPtr::Get(param_2 + 0x40);
        FUN_1424a3300(uVar8,uVar7,&local_128);
        uVar7 = FWeakObjectPtr::Get(lVar11);
        FUN_1423424e0(uVar7);
        uVar7 = FWeakObjectPtr::Get(lVar11);
        FUN_142397540(uVar7,0,1);
        lVar11 = FWeakObjectPtr::Get(lVar11);
        FBoxSphereBounds::TransformBy(lVar11 + 0x940,&local_118,param_2 + 0x10);
        if (0.0 < param_3[6]) {
          fVar19 = *param_3 - param_3[3];
          fVar17 = param_3[3] + *param_3;
          fVar18 = param_3[2] - param_3[5];
          fVar16 = param_3[5] + param_3[2];
          fVar1 = param_3[1];
          fVar20 = fVar1 - param_3[4];
          fVar15 = param_3[4] + fVar1;
          fVar23 = fVar19;
          if (fVar17 < fVar19) {
            fVar23 = fVar17;
          }
          fVar22 = fVar20;
          if (fVar15 < fVar20) {
            fVar22 = fVar15;
          }
          fVar21 = fVar18;
          if (fVar16 < fVar18) {
            fVar21 = fVar16;
          }
          if (fVar19 < fVar17) {
            fVar19 = fVar17;
          }
          if (fVar20 < fVar15) {
            fVar20 = fVar15;
          }
          if (fVar18 < fVar16) {
            fVar18 = fVar16;
          }
          fVar16 = local_118 - fStack_10c;
          fVar15 = fStack_114 - local_108;
          fVar17 = fStack_110 - fStack_104;
          if (fVar16 < fVar23) {
            fVar23 = fVar16;
          }
          if (fVar15 < fVar22) {
            fVar22 = fVar15;
          }
          if (fVar17 < fVar21) {
            fVar21 = fVar17;
          }
          if (fVar19 < fVar16) {
            fVar19 = fVar16;
          }
          if (fVar20 < fVar15) {
            fVar20 = fVar15;
          }
          if (fVar18 < fVar17) {
            fVar18 = fVar17;
          }
          fStack_10c = fStack_10c + local_118;
          local_108 = local_108 + fStack_114;
          fStack_104 = fStack_104 + fStack_110;
          if (fStack_10c < fVar23) {
            fVar23 = fStack_10c;
          }
          if (local_108 < fVar22) {
            fVar22 = local_108;
          }
          if (fStack_104 < fVar21) {
            fVar21 = fStack_104;
          }
          if (fVar19 < fStack_10c) {
            fVar19 = fStack_10c;
          }
          if (fVar20 < local_108) {
            fVar20 = local_108;
          }
          if (fVar18 < fStack_104) {
            fVar18 = fStack_104;
          }
          fVar19 = fVar19 - fVar23;
          fVar20 = fVar20 - fVar22;
          fVar18 = fVar18 - fVar21;
          fStack_10c = fVar19 * 0.5;
          fStack_e8 = fVar20 * 0.5;
          local_140 = fVar18 * 0.5;
          fVar23 = fVar23 + fStack_10c;
          fVar22 = fVar22 + fStack_e8;
          fVar21 = fVar21 + local_140;
          fVar18 = SQRT((fVar19 * fVar19 + fVar20 * fVar20 + fVar18 * fVar18) * 0.25);
          local_e0 = SQRT((fVar1 - fVar22) * (fVar1 - fVar22) +
                          (*param_3 - fVar23) * (*param_3 - fVar23) +
                          (param_3[2] - fVar21) * (param_3[2] - fVar21)) + param_3[6];
          local_100 = SQRT((fStack_114 - fVar22) * (fStack_114 - fVar22) +
                           (local_118 - fVar23) * (local_118 - fVar23) +
                           (fStack_110 - fVar21) * (fStack_110 - fVar21)) + local_100;
          if (local_e0 <= local_100) {
            local_e0 = local_100;
          }
          if (fVar18 <= local_e0) {
            local_e0 = fVar18;
          }
          uVar7 = CONCAT44(local_140,fStack_e8);
          local_100 = local_e0;
          local_f8 = fVar23;
          fStack_f4 = fVar22;
          fStack_f0 = fVar21;
          fStack_ec = fStack_10c;
          fStack_e4 = local_140;
        }
        else {
          uVar7 = CONCAT44(fStack_104,local_108);
          fVar23 = local_118;
          fVar22 = fStack_114;
          fVar21 = fStack_110;
        }
        *param_3 = fVar23;
        param_3[1] = fVar22;
        param_3[2] = fVar21;
        param_3[3] = fStack_10c;
        *(undefined8 *)(param_3 + 4) = uVar7;
        param_3[6] = local_100;
        if (plVar14 != (longlong *)0x0) {
          FMemory::Free(plVar14);
        }
        if (local_128 != 0) {
          FMemory::Free();
        }
      }
      uVar7 = FWeakObjectPtr::Get(param_2);
      uVar8 = FWeakObjectPtr::Get(param_2 + 0x40);
      FUN_1424a3300(uVar8,uVar7,&local_138);
      uVar7 = FWeakObjectPtr::Get(param_2);
      FUN_1423424e0(uVar7);
      if (local_138 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140f5ec90 FUN_140f5ec90 body=808 status=ok
// SIG undefined FUN_140f5ec90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f5ec90(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [4];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b4 = (undefined4)param_1[1];
  local_b0 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_b8);
  FUN_14172a400(local_b8);
  cVar3 = FWeakObjectPtr::IsValid(&local_b4);
  lVar6 = 0;
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_b4);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar10 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar10;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) & 0x30000000) == 0) {
      bVar2 = true;
      goto LAB_140f5ed30;
    }
  }
  bVar2 = false;
LAB_140f5ed30:
  if ((bVar2) && (lVar6 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar6 != 0)) {
    lVar5 = *(longlong *)(lVar6 + 0x148);
    if (lVar5 != 0) {
      lVar7 = FUN_142e4e3f0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (lVar5 = *(longlong *)(lVar5 + 0x540), lVar5 != 0)) {
        lVar7 = FUN_1413f24c0();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_140e33090(lVar5,*param_1);
          if (*(longlong *)(lVar6 + 400) == 0) {
            uVar9 = *(undefined8 *)(lVar6 + 0x3f8);
          }
          else {
            uVar9 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
          }
          lVar6 = *param_1;
          FUN_142880530(uVar9,lVar6 + 0x720);
          *(undefined8 *)(lVar6 + 0x720) = 0;
          return;
        }
      }
    }
    lVar5 = *param_1;
    if (*(longlong *)(lVar5 + 0x720) == 0) {
      uStack_a0 = 0;
      local_a8 = FUN_140f8bba0;
      if (*(longlong *)(lVar6 + 400) == 0) {
        uVar9 = *(undefined8 *)(lVar6 + 0x3f8);
      }
      else {
        uVar9 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
      }
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar8 + 1,lVar5);
        *(undefined4 *)(plVar8 + 2) = (undefined4)local_a8;
        *(undefined4 *)((longlong)plVar8 + 0x14) = local_a8._4_4_;
        *(undefined4 *)(plVar8 + 3) = uStack_a0;
        *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_9c;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar8[5] = lVar6;
        *plVar8 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_98 = 0;
      local_90 = 0;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_c0 = 0xbf800000;
      local_c8 = 1;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar9,lVar5 + 0x720,&local_98,0x3e800000);
      if (local_38 != 0) {
        plVar11 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar11 = local_48;
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x10))(plVar11,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        lVar6 = FMemory::Realloc(plVar8,0,0);
        if (lVar6 != 0) {
          FMemory::Free(lVar6);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f5efc0 FUN_140f5efc0 body=226 status=ok
// SIG undefined FUN_140f5efc0(void)

bool FUN_140f5efc0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = 0;
  if (*param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar5;
    if (*param_2 != 0) {
      lVar1 = FUN_142dfdfe0();
      for (lVar6 = *param_2; (lVar4 = lVar5, lVar6 != 0 && (lVar4 = *param_2, lVar6 != lVar1));
          lVar6 = *(longlong *)(lVar6 + 0x30)) {
      }
    }
    lVar4 = FUN_142dcdc10(*param_1,lVar4);
    if (*param_1 != 0) {
      lVar6 = lVar5;
      if (*param_3 != 0) {
        lVar2 = FUN_142dfdfe0();
        for (lVar1 = *param_3; (lVar6 = lVar5, lVar1 != 0 && (lVar6 = *param_3, lVar1 != lVar2));
            lVar1 = *(longlong *)(lVar1 + 0x30)) {
        }
      }
      lVar5 = FUN_142dcdc10(*param_1,lVar6);
    }
  }
  if ((lVar4 != 0) && (lVar5 != 0)) {
    iVar3 = FText::CompareTo(lVar4 + 0x40,lVar5 + 0x40,0);
    return iVar3 < 0;
  }
  return false;
}



// FUNCTION 140f5f0b0 FUN_140f5f0b0 body=482 status=ok
// SIG undefined FUN_140f5f0b0(void)

void FUN_140f5f0b0(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *local_res10;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined8 *local_48;
  uint local_40;
  uint local_3c;
  
  local_res18 = (undefined4)param_1[1];
  local_res1c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res10);
  FUN_14172a400(&local_res10);
  cVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (cVar1 != '\0') {
    lVar3 = FWeakObjectPtr::Get(&local_res18);
    puVar9 = (undefined8 *)0x0;
    iVar8 = *(int *)(lVar3 + 0xc);
    puVar5 = puVar9;
    if (iVar8 < (int)DAT_1469e91c4) {
      uVar6 = iVar8 >> 0x1f & 0xffff;
      uVar2 = iVar8 + uVar6;
      puVar5 = (undefined8 *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
               (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18);
    }
    if ((*(uint *)(puVar5 + 1) & 0x30000000) == 0) {
      iVar8 = 0;
      plVar12 = *(longlong **)(*param_1 + 0x708);
      uVar4 = (ulonglong)*(int *)(*param_1 + 0x710);
      local_48 = (undefined8 *)0x0;
      local_3c = 0;
      puVar5 = (undefined8 *)(uVar4 & 0x1fffffffffffffff);
      if (plVar12 + uVar4 < plVar12) {
        puVar5 = puVar9;
      }
      puVar7 = puVar9;
      puVar10 = puVar9;
      puVar11 = puVar9;
      puVar13 = puVar9;
      local_res10 = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        do {
          if ((*plVar12 != 0) &&
             (cVar1 = FUN_140f700b0(*plVar12,param_1 + 2), puVar5 = local_res10, cVar1 != '\0')) {
            iVar8 = (int)puVar7;
            local_40 = iVar8 + 1;
            if ((int)puVar11 < (int)local_40) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,puVar7);
              puVar11 = (undefined8 *)(ulonglong)local_3c;
              puVar10 = local_48;
            }
            puVar7 = (undefined8 *)(ulonglong)local_40;
            puVar10[iVar8] = *plVar12;
            puVar5 = local_res10;
          }
          iVar8 = (int)puVar7;
          plVar12 = plVar12 + 1;
          puVar13 = (undefined8 *)((longlong)puVar13 + 1);
        } while (puVar13 != puVar5);
      }
      puVar5 = (undefined8 *)
               ((ulonglong)((longlong)(puVar10 + iVar8) + (7 - (longlong)puVar10)) >> 3);
      if (puVar10 + iVar8 < puVar10) {
        puVar5 = puVar9;
      }
      puVar7 = puVar10;
      if (puVar5 != (undefined8 *)0x0) {
        do {
          FUN_140f8bd80(*param_1,*puVar7);
          puVar9 = (undefined8 *)((longlong)puVar9 + 1);
          puVar7 = puVar7 + 1;
        } while (puVar9 != puVar5);
      }
      if (puVar10 != (undefined8 *)0x0) {
        FMemory::Free(puVar10);
      }
    }
  }
  return;
}



// FUNCTION 140f5f2a0 FUN_140f5f2a0 body=2020 status=ok
// SIG undefined FUN_140f5f2a0(void)

void FUN_140f5f2a0(longlong *param_1)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  bool bVar21;
  uint local_res20;
  int *local_d8;
  uint local_d0;
  uint uStack_cc;
  ulonglong local_c8;
  int *local_c0;
  longlong local_b8;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  float local_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  int local_58;
  undefined1 local_54;
  undefined2 local_53;
  
  lVar8 = FUN_1416f8720((int)param_1[3]);
  if (lVar8 != 0) {
    lVar8 = FUN_1416f8720((int)param_1[3]);
    piVar15 = (int *)0x0;
    iVar16 = *(int *)(lVar8 + 0xc);
    piVar9 = piVar15;
    if (iVar16 < (int)DAT_1469e91c4) {
      uVar14 = iVar16 >> 0x1f & 0xffff;
      uVar7 = iVar16 + uVar14;
      piVar9 = (int *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                      (longlong)(int)((uVar7 & 0xffff) - uVar14) * 0x18);
    }
    if (((uint)piVar9[2] >> 0x1d & 1) == 0) {
      iVar16 = *(int *)(*param_1 + 0x710) + -1;
      local_d8 = (int *)0x0;
      local_res20 = 0;
      uStack_cc = 0;
      piVar9 = piVar15;
      piVar20 = piVar15;
      if (-1 < iVar16) {
        lVar8 = (longlong)iVar16 * 8;
        do {
          lVar13 = *(longlong *)(lVar8 + *(longlong *)(*param_1 + 0x708));
          if ((lVar13 != 0) && (*(char *)(lVar13 + 500) != '\0')) {
            iVar18 = (int)piVar9;
            local_d0 = iVar18 + 1;
            if ((int)piVar15 < (int)local_d0) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_d8,piVar9);
              piVar15 = (int *)(ulonglong)uStack_cc;
              piVar20 = local_d8;
            }
            piVar9 = (int *)(ulonglong)local_d0;
            piVar20[iVar18] = iVar16;
          }
          lVar8 = lVar8 + -8;
          iVar16 = iVar16 + -1;
        } while (-1 < iVar16);
        local_res20 = (uint)piVar9;
      }
      piVar15 = (int *)param_1[1];
      bVar21 = false;
      local_d8 = piVar15 + (longlong)(int)param_1[2] * 0x1c;
      if (piVar15 != local_d8) {
        piVar15 = piVar15 + 8;
        do {
          lVar8 = (longlong)(int)piVar9;
          bVar5 = false;
          piVar1 = piVar20 + lVar8;
          local_c0 = piVar15;
          if (piVar20 != piVar1) {
            piVar19 = piVar20;
            do {
              iVar16 = *piVar19;
              local_c8 = CONCAT44(local_c8._4_4_,iVar16);
              lVar13 = *(longlong *)(*(longlong *)(*param_1 + 0x708) + (longlong)iVar16 * 8);
              if (((*(int *)(lVar13 + 0x1d0) == piVar15[-3] &&
                   *(int *)(lVar13 + 0x1d8) == piVar15[-1]) &&
                  *(int *)(lVar13 + 0x1d4) == piVar15[-2]) &&
                  piVar15[-4] == *(int *)(lVar13 + 0x1cc)) {
                uVar12 = (ulonglong)iVar16;
                lVar13 = *(longlong *)(*(longlong *)(*param_1 + 0x708) + uVar12 * 8);
                *(undefined8 *)(lVar13 + 0x1b8) = *(undefined8 *)(piVar15 + 2);
                *(int *)(lVar13 + 0x1c0) = piVar15[4];
                *(undefined1 *)(lVar13 + 0x1f7) = 1;
                lVar13 = *(longlong *)(piVar15 + 6);
                if (lVar13 == 0) {
LAB_140f5f50e:
                  lVar13 = 0;
                }
                else {
                  lVar10 = FUN_1413b8c70();
                  if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                    bVar21 = false;
                  }
                  else {
                    bVar21 = true;
                  }
                  if (!bVar21) goto LAB_140f5f50e;
                }
                lVar10 = *param_1;
                lVar2 = *(longlong *)(*(longlong *)(lVar10 + 0x708) + uVar12 * 8);
                if (lVar13 != *(longlong *)(lVar2 + 0x1a8)) {
                  *(longlong *)(lVar2 + 0x1a8) = lVar13;
                  lVar10 = *param_1;
                }
                *(float *)(*(longlong *)(*(longlong *)(lVar10 + 0x708) + uVar12 * 8) + 0x1f0) =
                     (float)(uint)piVar15[5];
                cVar6 = FWeakObjectPtr::IsValid(piVar15);
                if (cVar6 != '\0') {
                  plVar3 = *(longlong **)(*(longlong *)(*param_1 + 0x708) + uVar12 * 8);
                  lVar13 = FWeakObjectPtr::Get(piVar15);
                  (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(lVar13 + 0x118));
                  uVar11 = FWeakObjectPtr::Get(piVar15);
                  lVar13 = *(longlong *)(*(longlong *)(*param_1 + 0x708) + uVar12 * 8);
                  SRWLock = (PSRWLOCK)(lVar13 + 0x228);
                  AcquireSRWLockShared(SRWLock);
                  local_b8 = lVar13 + 0x220;
                  cVar6 = FUN_140f12a40(uVar11,local_b8);
                  ReleaseSRWLockShared(SRWLock);
                  if (cVar6 != '\0') {
                    AcquireSRWLockExclusive(SRWLock);
                    FWeakObjectPtr::operator=(local_b8,uVar11);
                    ReleaseSRWLockExclusive(SRWLock);
                  }
                }
                if ((int)piVar9 != 0) {
                  local_res20 = 0;
                  lVar13 = 0;
                  bVar21 = *piVar20 != iVar16;
                  uVar7 = 0;
                  do {
                    uVar14 = uVar7;
                    do {
                      lVar13 = lVar13 + 1;
                      uVar14 = uVar14 + 1;
                      if (lVar8 <= lVar13) break;
                    } while (bVar21 == (piVar20[lVar13] != (int)uVar12));
                    if (bVar21 != false) {
                      if (local_res20 != uVar7) {
                        _guard_xfg_dispatch_icall_nop
                                  (piVar20 + (int)local_res20,piVar20 + (int)uVar7,
                                   (longlong)(int)(uVar14 - uVar7) << 2);
                      }
                      local_res20 = local_res20 + (uVar14 - uVar7);
                    }
                    uVar12 = local_c8 & 0xffffffff;
                    bVar21 = (bool)(bVar21 ^ 1);
                    piVar15 = local_c0;
                    uVar7 = uVar14;
                  } while (lVar13 < lVar8);
                }
                goto LAB_140f5f7d5;
              }
              piVar19 = piVar19 + 1;
            } while (piVar19 != piVar1);
          }
          cVar6 = FWeakObjectPtr::IsValid(piVar15);
          if (cVar6 == '\0') {
            local_c8 = 0;
          }
          else {
            lVar8 = FWeakObjectPtr::Get(piVar15);
            local_c8 = *(ulonglong *)(lVar8 + 0x118);
          }
          piVar19 = piVar15;
          if (local_c8 != 0) {
            iVar16 = 0;
            lVar8 = *param_1;
            if (0 < *(int *)(lVar8 + 0x710)) {
              local_c0 = (int *)0x0;
              piVar9 = piVar20;
joined_r0x000140f5f6bd:
              for (; piVar17 = local_c0, piVar9 != piVar1; piVar9 = piVar9 + 1) {
                if (*piVar9 == iVar16) goto LAB_140f5f74a;
              }
              plVar3 = *(longlong **)((longlong)local_c0 + *(longlong *)(lVar8 + 0x708));
              if (plVar3 == (longlong *)0x0) goto LAB_140f5f74a;
              lVar8 = FUN_141387000();
              if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
                  lVar8 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (!bVar4) goto LAB_140f5f74a;
              AcquireSRWLockShared((PSRWLOCK)(plVar3 + 0x43));
              uVar12 = FWeakObjectPtr::Get((longlong)plVar3 + 0x20c);
              ReleaseSRWLockShared((PSRWLOCK)(plVar3 + 0x43));
              piVar17 = local_c0;
              if (uVar12 != local_c8) goto LAB_140f5f74a;
              cVar6 = FWeakObjectPtr::IsValid(piVar15);
              if (cVar6 == '\0') {
                uVar11 = 0;
              }
              else {
                lVar8 = FWeakObjectPtr::Get(piVar15);
                uVar11 = *(undefined8 *)(lVar8 + 0x118);
              }
              (**(code **)(*plVar3 + 0x2a8))(plVar3,uVar11);
              plVar3[0x37] = *(longlong *)(piVar15 + 2);
              *(int *)(plVar3 + 0x38) = piVar15[4];
              *(undefined1 *)((longlong)plVar3 + 0x1f7) = 1;
              (**(code **)(*plVar3 + 0x2b8))(plVar3,1);
              uVar11 = *(undefined8 *)(piVar15 + -2);
              *(undefined8 *)((longlong)plVar3 + 0x1cc) = *(undefined8 *)(piVar15 + -4);
              *(undefined8 *)((longlong)plVar3 + 0x1d4) = uVar11;
LAB_140f5f7d5:
              bVar5 = true;
              bVar21 = true;
              piVar19 = piVar15;
            }
          }
LAB_140f5f7d9:
          if (!bVar5) {
            lVar8 = *(longlong *)(piVar19 + 6);
            if (lVar8 != 0) {
              lVar13 = FUN_1413b8c70();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) {
                if (*(char *)(lVar8 + 0x80) == '\0') {
                  local_78 = piVar19[-4];
                  iStack_74 = piVar19[-3];
                  iStack_70 = piVar19[-2];
                  iStack_6c = piVar19[-1];
                  uVar11 = 0;
                  local_98 = 0;
                  local_90 = 0;
                  local_88 = 0;
                  local_80 = 0;
                  local_53 = 0;
                  cVar6 = FWeakObjectPtr::IsValid(piVar19);
                  if (cVar6 != '\0') {
                    lVar13 = FWeakObjectPtr::Get(piVar19);
                    uVar11 = *(undefined8 *)(lVar13 + 0x118);
                  }
                  local_a0 = uVar11;
                  if ((*(char *)(lVar8 + 0x50) == '\0') &&
                     (cVar6 = FWeakObjectPtr::IsValid(piVar19), cVar6 != '\0')) {
                    local_98 = FWeakObjectPtr::Get(piVar19);
                  }
                  local_60 = *(undefined8 *)(piVar19 + 2);
                  local_64 = piVar19[0xf];
                  local_7c = (float)(uint)piVar19[5];
                  local_58 = piVar19[4];
                  local_54 = 1;
                  local_68 = piVar19[0xe];
                  local_a8 = lVar8;
                  FUN_140f8ba00(*param_1,&local_a8);
                }
                goto LAB_140f5f8f6;
              }
            }
            FWeakObjectPtr::IsValid(piVar19);
          }
LAB_140f5f8f6:
          piVar9 = (int *)(ulonglong)local_res20;
          piVar15 = piVar19 + 0x1c;
          local_c0 = piVar15;
        } while (piVar19 + 0x14 != local_d8);
      }
      for (piVar9 = piVar20; piVar9 != piVar20 + (int)local_res20; piVar9 = piVar9 + 1) {
        iVar16 = *piVar9;
        plVar3 = *(longlong **)(*(longlong *)(*param_1 + 0x708) + (longlong)iVar16 * 8);
        if (plVar3 == (longlong *)0x0) {
LAB_140f5f998:
          FUN_140f8bd80(*param_1,*(undefined8 *)
                                  (*(longlong *)(*param_1 + 0x708) + (longlong)iVar16 * 8));
        }
        else {
          lVar8 = FUN_141387000();
          if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((!bVar5) || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(plVar3), cVar6 == '\0'))
          goto LAB_140f5f998;
          (**(code **)(*plVar3 + 0x2b8))(plVar3,0);
        }
      }
      if (bVar21) {
        param_1 = (longlong *)*param_1;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146872ec0) &&
           (_Init_thread_header(&DAT_146872ec0), DAT_146872ec0 == -1)) {
          FName::FName(&DAT_146872eb8,"Breadcrumb_Updated",1);
          _Init_thread_footer(&DAT_146872ec0);
        }
        local_d8 = (int *)0x0;
        local_d0 = 0;
        uStack_cc = 0;
        (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872eb8,&local_d8);
      }
      if (piVar20 != (int *)0x0) {
        FMemory::Free(piVar20);
      }
    }
  }
  return;
LAB_140f5f74a:
  local_c0 = piVar17 + 2;
  iVar16 = iVar16 + 1;
  lVar8 = *param_1;
  piVar9 = piVar20;
  if (*(int *)(lVar8 + 0x710) <= iVar16) goto LAB_140f5f7d9;
  goto joined_r0x000140f5f6bd;
}



// FUNCTION 140f5fa90 FUN_140f5fa90 body=438 status=ok
// SIG undefined FUN_140f5fa90(void)

void FUN_140f5fa90(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x198);
  if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x1a8))) {
    plVar6 = *(longlong **)
              (*(longlong *)(*(longlong *)(lVar2 + 0x1a0) + (longlong)iVar1 * 8) + 0x188);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x280))();
      lVar2 = *(longlong *)
               (*(longlong *)(*param_1 + 0x1a0) + (longlong)*(int *)(*param_1 + 0x198) * 8);
      FUN_142f06340(*(undefined8 *)(lVar2 + 0x188),lVar2 + 0x1d0);
      uVar8 = 0;
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(*param_1 + 0x1a0) + (longlong)*(int *)(*param_1 + 0x198) * 8) +
       0x1d0) = 0;
      *(int *)(*param_1 + 0x198) = *(int *)(*param_1 + 0x198) + 1;
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x1b0) != 0) {
        iVar1 = *(int *)(lVar2 + 0x198);
        if (((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x1a8))) &&
           (lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x1a0) + (longlong)iVar1 * 8),
           *(longlong *)(lVar3 + 0x180) != 0)) {
          *(undefined8 *)(lVar3 + 0x1d0) = 0;
          lVar2 = *param_1;
          local_28 = 0;
          local_18 = 0;
          puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_48);
          if (puVar4 != (undefined8 *)0x0) {
            puVar4[1] = lVar2;
            *puVar4 = &PTR_FUN_143f77b70;
          }
          local_58[0] = &LAB_140f62d30;
          FUN_14208c5d0(*(undefined8 *)(*param_1 + 0x20),local_58);
          return;
        }
      }
      *(undefined1 *)(lVar2 + 0x1d1) = 1;
      *(undefined1 *)(*param_1 + 0x1d2) = 1;
      plVar6 = *(longlong **)(*param_1 + 0x1a0);
      uVar5 = (ulonglong)*(int *)(*param_1 + 0x1a8);
      uVar9 = uVar5 & 0x1fffffffffffffff;
      if (plVar6 + uVar5 < plVar6) {
        uVar9 = uVar8;
      }
      if (uVar9 != 0) {
        do {
          if ((*plVar6 == 0) || (*(longlong *)(*plVar6 + 0x188) == 0)) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
          plVar6 = plVar6 + 1;
          uVar8 = uVar8 + 1;
          *(undefined1 *)(*param_1 + 0x1d0) = uVar7;
        } while (uVar8 != uVar9);
      }
    }
  }
  return;
}



// FUNCTION 140f5fc50 FUN_140f5fc50 body=199 status=ok
// SIG undefined FUN_140f5fc50(void)

ulonglong FUN_140f5fc50(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  lVar4 = *(longlong *)(*param_1 + 0x990);
  if (lVar4 != 0) {
    plVar6 = *(longlong **)(lVar4 + 0x180);
    plVar1 = plVar6 + *(int *)(lVar4 + 0x188);
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      plVar2 = (longlong *)*plVar6;
      if (plVar2 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar2 + 0x340))(plVar2);
        cVar3 = FWeakObjectPtr::IsValid(lVar4 + 0xdc);
        if ((cVar3 != '\0') && (cVar3 = FWeakObjectPtr::IsValid(param_2 + 0xdc), cVar3 != '\0')) {
          lVar4 = (**(code **)(*plVar2 + 0x340))(plVar2);
          uVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                            (lVar4 + 0xdc,param_2 + 0xdc);
          if ((char)uVar5 != '\0') {
            return uVar5 & 0xffffffffffffff00;
          }
        }
      }
    }
  }
  return (ulonglong)*(byte *)(param_2 + 0x57);
}



// FUNCTION 140f5fd20 FUN_140f5fd20 body=410 status=ok
// SIG undefined FUN_140f5fd20(void)

void FUN_140f5fd20(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_18 [2];
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((((*(uint *)(lVar4 + 8) & 0x30000000) == 0) &&
        (cVar2 = FWeakObjectPtr::IsValid(param_1 + 2), cVar2 != '\0')) &&
       (cVar2 = FWeakObjectPtr::IsValid(param_1 + 3), cVar2 != '\0')) {
      (**(code **)(*(longlong *)*param_1 + 0x578))((longlong *)*param_1,0);
      cVar2 = FWeakObjectPtr::IsValid(param_1 + 4);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = FWeakObjectPtr::Get(param_1 + 4);
      }
      uVar6 = FWeakObjectPtr::Get(param_1 + 3);
      (**(code **)(*(longlong *)(*param_1 + 0x640) + 8))
                ((longlong *)(*param_1 + 0x640),uVar6,uVar5,0);
      if ((*(char *)(*param_1 + 0xc20) != '\0') && (*(longlong *)(*param_1 + 0x2b8) != 0)) {
        local_18[0] = 0;
        local_18[1] = 0xe;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xe,"moveToNewItem",0xe,0x3f);
        FUN_142088910(*(undefined8 *)(*param_1 + 0x2b8),local_18);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
      }
      *(undefined1 *)(*param_1 + 0xc20) = 1;
    }
  }
  return;
}



// FUNCTION 140f5fec0 FUN_140f5fec0 body=292 status=ok
// SIG undefined FUN_140f5fec0(void)

void FUN_140f5fec0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  
  cVar1 = FWeakObjectPtr::IsValid(*param_1 + 0x1f0);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(*param_1 + 0x1f0);
    FUN_1407665e0(lVar2 + 400,*param_1);
    lVar2 = FWeakObjectPtr::Get(*param_1 + 0x1f0);
    FUN_1407665e0(lVar2 + 0x1a0,*param_1);
  }
  cVar1 = FWeakObjectPtr::IsValid(*param_1 + 0x1e8);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(*param_1 + 0x1e8);
    FUN_1407665e0(lVar2 + 0x1e0,*param_1);
  }
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x180) != 0) {
    FUN_1407665e0(*(longlong *)(lVar2 + 0x180) + 400,lVar2);
    lVar2 = *param_1;
  }
  *(undefined8 *)(lVar2 + 0x180) = 0;
  FWeakObjectPtr::operator=(&local_res8,0);
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 0x1f0) = local_res8;
  *(undefined4 *)(lVar2 + 500) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 0x1e8) = local_res8;
  *(undefined4 *)(lVar2 + 0x1ec) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 0x1e0) = local_res8;
  *(undefined4 *)(lVar2 + 0x1e4) = local_resc;
  return;
}



// FUNCTION 140f5fff0 FUN_140f5fff0 body=166 status=ok
// SIG undefined FUN_140f5fff0(void)

void FUN_140f5fff0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar2 = *param_1;
  local_28 = 0;
  local_18 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = lVar2;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  lVar2 = *param_1;
  local_58[0] = &LAB_140f62c80;
  iVar1 = *(int *)(lVar2 + 0x198);
  lVar3 = *(longlong *)(lVar2 + 0x1a0);
  uVar5 = FUN_140ecde40(*(undefined8 *)(*(longlong *)(lVar3 + (longlong)iVar1 * 8) + 0x180),
                        *(undefined8 *)(lVar2 + 0x1b0),local_58,0,0);
  *(undefined8 *)(*(longlong *)(lVar3 + (longlong)iVar1 * 8) + 0x188) = uVar5;
  return;
}



// FUNCTION 140f600a0 FUN_140f600a0 body=317 status=ok
// SIG undefined FUN_140f600a0(void)

void FUN_140f600a0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    lVar5 = 0;
    iVar1 = *(int *)(lVar4 + 0xc);
    lVar4 = lVar5;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    if (((*(uint *)(lVar4 + 8) & 0x30000000) == 0) &&
       (cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x5d8), cVar2 != '\0')) {
      lVar4 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
      iVar1 = *(int *)(lVar4 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar6;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
      }
      if (((*(uint *)(lVar5 + 8) & 0x30000000) == 0) &&
         (lVar5 = FUN_140eccca0(*param_1), lVar5 != 0)) {
        FUN_1407665e0(lVar5 + 0x1050,*param_1);
        FUN_1407665e0(lVar5 + 0x1090,*param_1);
        FUN_1407665e0(lVar5 + 0x10a0,*param_1);
      }
    }
  }
  return;
}



// FUNCTION 140f601e0 FUN_140f601e0 body=1409 status=ok
// SIG undefined FUN_140f601e0(void)

void FUN_140f601e0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  wchar_t *pwVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  uint uVar14;
  undefined4 *puVar15;
  int *piVar16;
  wchar_t *pwVar17;
  bool bVar18;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  uStackX_14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_res10);
    pwVar17 = (wchar_t *)0x0;
    iVar1 = *(int *)(lVar7 + 0xc);
    pwVar13 = pwVar17;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar14 = iVar1 >> 0x1f & 0xffff;
      uVar6 = iVar1 + uVar14;
      pwVar13 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                (longlong)(int)((uVar6 & 0xffff) - uVar14) * 0x18);
    }
    if ((*(uint *)(pwVar13 + 4) & 0x30000000) == 0) {
      lVar7 = FUN_140eccbe0(*param_1);
      if (lVar7 != 0) {
        FWeakObjectPtr::operator=(lVar7 + 0x730,*param_1);
        uVar2 = *param_1;
        local_48 = FUN_140f79320;
        uStack_40 = uStack_40 & 0xffffffff00000000;
        plVar11 = (longlong *)(lVar7 + 0x7a8);
        plVar8 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = (longlong)&PTR_FUN_143fcfec0;
          FWeakObjectPtr::operator=(plVar8 + 1,uVar2);
          *(int *)(plVar8 + 2) = (int)local_48;
          *(int *)((longlong)plVar8 + 0x14) = local_48._4_4_;
          *(undefined4 *)(plVar8 + 3) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_40._4_4_;
          lVar9 = FDelegateHandle::GenerateNewID();
          plVar8[5] = lVar9;
          *plVar8 = (longlong)&PTR_FUN_143fcff08;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_res8);
          iVar1 = *(int *)(lVar7 + 0x7b0);
          *(int *)(lVar7 + 0x7b0) = iVar1 + 1;
          if (*(int *)(lVar7 + 0x7b4) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
          }
          puVar10 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar11);
          *puVar10 = plVar8;
          *(undefined4 *)(puVar10 + 1) = 3;
        }
        uVar2 = *param_1;
        local_48 = FUN_140f721b0;
        uStack_40 = uStack_40 & 0xffffffff00000000;
        plVar11 = (longlong *)(lVar7 + 0x830);
        plVar8 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = (longlong)&PTR_FUN_144631560;
          FWeakObjectPtr::operator=(plVar8 + 1,uVar2);
          *(int *)(plVar8 + 2) = (int)local_48;
          *(int *)((longlong)plVar8 + 0x14) = local_48._4_4_;
          *(undefined4 *)(plVar8 + 3) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_40._4_4_;
          lVar9 = FDelegateHandle::GenerateNewID();
          plVar8[5] = lVar9;
          *plVar8 = (longlong)&PTR_FUN_1446315a8;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_res8);
          iVar1 = *(int *)(lVar7 + 0x838);
          *(int *)(lVar7 + 0x838) = iVar1 + 1;
          if (*(int *)(lVar7 + 0x83c) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
          }
          puVar10 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar11);
          *puVar10 = plVar8;
          *(undefined4 *)(puVar10 + 1) = 3;
        }
        uVar2 = *param_1;
        local_48 = thunk_FUN_140f8beb0;
        uStack_40 = uStack_40 & 0xffffffff00000000;
        plVar8 = (longlong *)(lVar7 + 0x848);
        plVar11 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar11 != (longlong *)0x0) {
          *plVar11 = (longlong)&PTR_FUN_143fcfec0;
          FWeakObjectPtr::operator=(plVar11 + 1,uVar2);
          *(int *)(plVar11 + 2) = (int)local_48;
          *(int *)((longlong)plVar11 + 0x14) = local_48._4_4_;
          *(undefined4 *)(plVar11 + 3) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_40._4_4_;
          lVar9 = FDelegateHandle::GenerateNewID();
          plVar11[5] = lVar9;
          *plVar11 = (longlong)&PTR_FUN_143fcff08;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_res8);
          iVar1 = *(int *)(lVar7 + 0x850);
          *(int *)(lVar7 + 0x850) = iVar1 + 1;
          if (*(int *)(lVar7 + 0x854) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
          }
          puVar10 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar8);
          *puVar10 = plVar11;
          *(undefined4 *)(puVar10 + 1) = 3;
        }
      }
      lVar7 = FUN_140eccc40(*param_1);
      if (lVar7 != 0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::AddNewNameplateForPlayerState",L"::");
        pwVar13 = pwVar17;
        while (pwVar4 = pwVar12, pwVar4 != (wchar_t *)0x0) {
          pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar13 = pwVar4;
        }
        FName::FName(&local_res10,pwVar13 + 2,1);
        lVar9 = CONCAT44(uStackX_14,local_res10);
        uVar2 = *param_1;
        plVar11 = (longlong *)(lVar7 + 0xb68);
        FWeakObjectPtr::operator=(&local_48,0);
        uStack_40 = 0;
        FWeakObjectPtr::operator=(&local_48,uVar2);
        local_res8 = 0;
        uStack_40 = lVar9;
        if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
          UObject::FindFunction(lVar9,uStack_40);
        }
        piVar3 = (int *)*plVar11;
        iVar1 = *(int *)(lVar7 + 0xb70);
        for (piVar16 = piVar3; piVar16 != piVar3 + (longlong)iVar1 * 4; piVar16 = piVar16 + 4) {
          if ((((*piVar16 == (int)local_48) &&
               (local_48._4_4_ = (int)((ulonglong)local_48 >> 0x20),
               bVar18 = piVar16[1] == local_48._4_4_, bVar18)) ||
              ((cVar5 = FWeakObjectPtr::IsValid(piVar16), cVar5 == '\0' &&
               (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) &&
             (*(longlong *)(piVar16 + 2) == uStack_40)) {
            if ((int)((longlong)piVar16 - (longlong)piVar3 >> 4) != -1) goto LAB_140f605f0;
            break;
          }
        }
        iVar1 = *(int *)(lVar7 + 0xb70);
        *(int *)(lVar7 + 0xb70) = iVar1 + 1;
        if (*(int *)(lVar7 + 0xb74) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
        }
        puVar15 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar11);
        *puVar15 = (int)local_48;
        puVar15[1] = local_48._4_4_;
        *(ulonglong *)(puVar15 + 2) = uStack_40;
LAB_140f605f0:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
        pwVar13 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPrimaryCharacterChanged",L"::");
        while (pwVar12 = pwVar13, pwVar12 != (wchar_t *)0x0) {
          pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar12 + 1,L"::");
          pwVar17 = pwVar12;
        }
        FName::FName(&local_res10,pwVar17 + 2,1);
        lVar9 = CONCAT44(uStackX_14,local_res10);
        uVar2 = *param_1;
        plVar11 = (longlong *)(lVar7 + 0x8c0);
        FWeakObjectPtr::operator=(&local_48,0);
        uStack_40 = 0;
        FWeakObjectPtr::operator=(&local_48,uVar2);
        local_res8 = 0;
        uStack_40 = lVar9;
        if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
          UObject::FindFunction(lVar9,uStack_40);
        }
        piVar3 = (int *)*plVar11;
        iVar1 = *(int *)(lVar7 + 0x8c8);
        for (piVar16 = piVar3; piVar16 != piVar3 + (longlong)iVar1 * 4; piVar16 = piVar16 + 4) {
          if ((((*piVar16 == (int)local_48) &&
               (local_48._4_4_ = (int)((ulonglong)local_48 >> 0x20),
               bVar18 = piVar16[1] == local_48._4_4_, bVar18)) ||
              ((cVar5 = FWeakObjectPtr::IsValid(piVar16), cVar5 == '\0' &&
               (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) &&
             (*(longlong *)(piVar16 + 2) == uStack_40)) {
            if ((int)((longlong)piVar16 - (longlong)piVar3 >> 4) != -1) goto LAB_140f60730;
            break;
          }
        }
        iVar1 = *(int *)(lVar7 + 0x8c8);
        *(int *)(lVar7 + 0x8c8) = iVar1 + 1;
        if (*(int *)(lVar7 + 0x8cc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
        }
        puVar15 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar11);
        *puVar15 = (int)local_48;
        puVar15[1] = local_48._4_4_;
        *(ulonglong *)(puVar15 + 2) = uStack_40;
LAB_140f60730:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
      }
    }
  }
  return;
}



// FUNCTION 140f60770 FUN_140f60770 body=163 status=ok
// SIG undefined FUN_140f60770(void)

void FUN_140f60770(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FWeakObjectPtr::IsValid(param_2);
  if ((cVar3 != '\0') && (cVar3 = FWeakObjectPtr::IsValid(param_2 + 0x40), cVar3 != '\0')) {
    uVar1 = FWeakObjectPtr::Get(param_2);
    uVar2 = FWeakObjectPtr::Get(param_2 + 0x40);
    FUN_1424a3300(uVar2,uVar1,param_2 + 0x48);
    uVar1 = FWeakObjectPtr::Get(param_2);
    FUN_1423424e0(uVar1);
  }
  cVar3 = FWeakObjectPtr::IsValid(param_2 + 0x58);
  if (cVar3 == '\0') {
    return;
  }
  uVar1 = FWeakObjectPtr::Get(param_2 + 0x58);
  FUN_142397540(uVar1,1);
  return;
}



// FUNCTION 140f60820 FUN_140f60820 body=122 status=ok
// SIG undefined FUN_140f60820(void)

void FUN_140f60820(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 local_58 [80];
  
  local_res8 = *param_1;
  FUN_140f55130(local_58,&local_res8);
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x198);
  lVar3 = *(longlong *)(lVar2 + 0x1a0);
  uVar4 = FUN_140ecde40(*(undefined8 *)(*(longlong *)(lVar3 + (longlong)iVar1 * 8) + 0x180),
                        *(undefined8 *)(lVar2 + 0x1b0),local_58,0,0);
  *(undefined8 *)(*(longlong *)(lVar3 + (longlong)iVar1 * 8) + 0x188) = uVar4;
  return;
}



// FUNCTION 140f608a0 FUN_140f608a0 body=268 status=ok
// SIG undefined FUN_140f608a0(void)

void FUN_140f608a0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_18 [2];
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if (((((*(uint *)(lVar5 + 8) & 0x30000000) == 0) &&
         (plVar2 = (longlong *)*param_1, plVar2[0x5a] != 0)) && (plVar2[0x5b] != 0)) &&
       (plVar2[0x5c] != 0)) {
      (**(code **)(*plVar2 + 0x308))(plVar2,local_18,(char)param_1[2]);
      FUN_142088cf0(*(undefined8 *)(*param_1 + 0x2d0),local_18);
      FUN_142088cf0(*(undefined8 *)(*param_1 + 0x2d8),local_18);
      FUN_142088cf0(*(undefined8 *)(*param_1 + 0x2e0),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140f609b0 FUN_140f609b0 body=453 status=ok
// SIG undefined FUN_140f609b0(void)

void FUN_140f609b0(undefined8 *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  uint uVar8;
  wchar_t *pwVar9;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  code *local_28;
  undefined8 uStack_20;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    pwVar9 = (wchar_t *)0x0;
    iVar1 = *(int *)(lVar5 + 0xc);
    pwVar7 = pwVar9;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      pwVar7 = (wchar_t *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
               (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18);
    }
    if (((*(uint *)(pwVar7 + 4) & 0x30000000) == 0) && (lVar5 = FUN_140eccca0(*param_1), lVar5 != 0)
       ) {
      uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
      local_28 = FUN_140f8ba00;
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxInWorldIconContainer::RegisterTarget",L"::");
      pwVar7 = pwVar9;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar7 = pwVar2;
      }
      FName::FName(&local_res8,pwVar7 + 2,1);
      FUN_1407260e0(lVar5 + 0x1d40,*param_1,&local_28,local_res8);
      uStack_20 = uStack_20 & 0xffffffff00000000;
      local_28 = FUN_140f94740;
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxInWorldIconContainer::UnregisterTarget",L"::");
      while (pwVar6 = pwVar7, pwVar6 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar9 = pwVar6;
      }
      FName::FName(&local_res8,pwVar9 + 2,1);
      FUN_1407260e0(lVar5 + 0x1d50,*param_1,&local_28,local_res8);
    }
  }
  return;
}



// FUNCTION 140f60b80 FUN_140f60b80 body=781 status=ok
// SIG undefined FUN_140f60b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f60b80(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_a0 = (undefined4)param_1[1];
  local_9c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_b8);
  FUN_14172a400(local_b8);
  cVar3 = FWeakObjectPtr::IsValid(&local_a0);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_a0);
    lVar8 = 0;
    iVar1 = *(int *)(lVar5 + 0xc);
    lVar5 = lVar8;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar10 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar10;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar10) * 0x18;
    }
    if (((*(uint *)(lVar5 + 8) & 0x30000000) == 0) &&
       (lVar5 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar5 != 0)) {
      lVar6 = FUN_142f6c9f0(lVar5);
      lVar2 = *param_1;
      if (lVar6 == 0) {
        if (*(longlong *)(lVar2 + 0x718) == 0) {
          uStack_a8._0_4_ = 0;
          local_b0 = FUN_140f8bc90;
          if (*(longlong *)(lVar5 + 400) == 0) {
            uVar7 = *(undefined8 *)(lVar5 + 0x3f8);
          }
          else {
            uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
          }
          plVar9 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar9 != (longlong *)0x0) {
            *plVar9 = (longlong)&PTR_FUN_143f77b88;
            FWeakObjectPtr::operator=(plVar9 + 1,lVar2);
            *(undefined4 *)(plVar9 + 2) = (undefined4)local_b0;
            *(undefined4 *)((longlong)plVar9 + 0x14) = local_b0._4_4_;
            *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_a8;
            *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_a8._4_4_;
            lVar5 = FDelegateHandle::GenerateNewID();
            plVar9[5] = lVar5;
            *plVar9 = (longlong)&PTR_FUN_143f77bd0;
          }
          local_98 = 0;
          local_90 = 0;
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x30))(plVar9,&local_98);
          }
          FWeakObjectPtr::operator=(local_88,0);
          local_c0 = 0xbf800000;
          local_c8 = 1;
          local_80 = 0;
          local_48 = (longlong *)0x0;
          local_38 = 0;
          local_78 = AK::MemoryMgr::StartProfileThreadUsage;
          FUN_142880850(uVar7,lVar2 + 0x718,&local_98,0x3e800000);
          if (local_38 != 0) {
            plVar11 = local_68;
            if (local_48 != (longlong *)0x0) {
              plVar11 = local_48;
            }
            if (plVar11 != (longlong *)0x0) {
              (**(code **)(*plVar11 + 0x10))(plVar11,0);
            }
          }
          if (local_48 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x28))(plVar9,0);
            lVar5 = FMemory::Realloc(plVar9,0,0);
            if (lVar5 != 0) {
              FMemory::Free(lVar5);
            }
          }
        }
      }
      else {
        uStack_a8 = lVar8;
        local_b0 = (code *)lVar2;
        if (lVar2 != 0) {
          uVar7 = FUN_142f772d0();
          uStack_a8 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar7);
        }
        FUN_142f69080(lVar6,&local_b0);
        lVar2 = *param_1;
        local_b0 = (code *)lVar2;
        if (lVar2 != 0) {
          uVar7 = FUN_142f768a0();
          lVar8 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar7);
        }
        uStack_a8 = lVar8;
        FUN_142f690f0(lVar6,&local_b0,1);
        if (*(longlong *)(lVar5 + 400) == 0) {
          uVar7 = *(undefined8 *)(lVar5 + 0x3f8);
        }
        else {
          uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
        }
        lVar5 = *param_1;
        FUN_142880530(uVar7,lVar5 + 0x718);
        *(undefined8 *)(lVar5 + 0x718) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140f60e90 FUN_140f60e90 body=246 status=ok
// SIG undefined FUN_140f60e90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f60e90(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [80];
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_140f628c0(*param_1);
  uVar2 = *param_1;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = uVar2;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_68[0] = FUN_140f62b50;
  uVar2 = FUN_1420849a0(*param_1,local_b8,local_68);
  FUN_14208c4f0(*param_1,uVar2);
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
  return;
}



// FUNCTION 140f60f90 FUN_140f60f90 body=247 status=ok
// SIG undefined FUN_140f60f90(void)

void FUN_140f60f90(undefined8 *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined8 local_res8;
  
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 2);
  if ((cVar4 != '\0') && (lVar5 = FWeakObjectPtr::Get(param_1 + 2), lVar5 != 0)) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1407665e0(lVar5 + 0x1050,*param_1);
    }
  }
  lVar5 = FUN_140eccca0(*param_1);
  if (lVar5 != 0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxItemCard::OnWeaponChanged",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res8,pwVar3 + 2,1);
    FUN_14074ba20(lVar5 + 0x1050,*param_1,&LAB_140f61400,local_res8);
  }
  return;
}



// FUNCTION 140f61090 FUN_140f61090 body=358 status=ok
// SIG undefined FUN_140f61090(void)

void FUN_140f61090(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined8 local_res8;
  
  cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0x1f0);
  if (cVar3 != '\0') {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnReloadStarted",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    lVar5 = FWeakObjectPtr::Get(*param_1 + 0x1f0);
    FUN_14074ba20(lVar5 + 400,*param_1,FUN_140f794d0,local_res8);
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnReloadEnded",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    lVar5 = FWeakObjectPtr::Get(*param_1 + 0x1f0);
    FUN_14074ba20(lVar5 + 0x1a0,*param_1,FUN_140f794a0,local_res8);
    plVar6 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x1f0);
    uVar7 = (**(code **)(*plVar6 + 0x428))(plVar6);
    *(undefined4 *)(*param_1 + 0x1f8) = uVar7;
    *(undefined4 *)(*param_1 + 0x1fc) = *(undefined4 *)(*param_1 + 0x1f8);
  }
  return;
}



// FUNCTION 140f61200 FUN_140f61200 body=510 status=ok
// SIG undefined FUN_140f61200(void)

void FUN_140f61200(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  
  cVar1 = FWeakObjectPtr::IsValid(param_2);
  if ((cVar1 != '\0') && (cVar1 = FWeakObjectPtr::IsValid(param_2 + 0x40), cVar1 != '\0')) {
    iVar8 = 0;
    lVar3 = FWeakObjectPtr::Get(param_2);
    plVar5 = *(longlong **)(lVar3 + 0x10);
    lVar3 = plVar5[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar3 = plVar5[0x1f];
    }
    uVar4 = FWeakObjectPtr::Get(*param_1);
    uVar4 = FUN_142227070(uVar4,lVar3,0);
    FWeakObjectPtr::operator=(param_2 + 0x58,uVar4);
    cVar1 = FWeakObjectPtr::IsValid(param_2 + 0x58);
    if (cVar1 != '\0') {
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x58);
      lVar3 = FWeakObjectPtr::Get(param_2);
      (**(code **)(*plVar5 + 0x930))(plVar5,*(undefined8 *)(lVar3 + 0x718),1);
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_2);
      iVar2 = (**(code **)(*plVar5 + 0x6c8))(plVar5);
      if (0 < iVar2) {
        do {
          plVar5 = (longlong *)FWeakObjectPtr::Get(param_2);
          plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x58);
          lVar3 = *plVar6;
          uVar4 = (**(code **)(*plVar5 + 0x560))(plVar5,iVar8);
          (**(code **)(lVar3 + 0x568))(plVar6,iVar8,uVar4);
          iVar8 = iVar8 + 1;
          plVar5 = (longlong *)FWeakObjectPtr::Get(param_2);
          iVar2 = (**(code **)(*plVar5 + 0x6c8))(plVar5);
        } while (iVar8 < iVar2);
      }
      lVar3 = FWeakObjectPtr::Get(param_2 + 0x58);
      iVar8 = *(int *)(lVar3 + 0x90);
      *(int *)(lVar3 + 0x90) = iVar8 + 1;
      if (*(int *)(lVar3 + 0x94) < iVar8 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar3 + 0x88,iVar8);
      }
      *(undefined8 *)(*(longlong *)(lVar3 + 0x88) + (longlong)iVar8 * 8) = DAT_146872e50;
      uVar4 = FWeakObjectPtr::Get(param_2 + 0x58);
      FUN_142397540(uVar4,1);
      uVar4 = FWeakObjectPtr::Get(param_2);
      uVar7 = FWeakObjectPtr::Get(param_2 + 0x58);
      FUN_142399e30(uVar7,uVar4,0);
      uVar4 = FWeakObjectPtr::Get(param_2 + 0x58);
      FUN_14234b150(uVar4);
    }
  }
  return;
}



// FUNCTION 140f61410 `scalar_deleting_destructor' body=134 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSlateShapedTextPayload::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[4];
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
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140f614a0 FUN_140f614a0 body=43 status=ok
// SIG undefined FUN_140f614a0(void)

undefined8 * FUN_140f614a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 140f614d0 FUN_140f614d0 body=74 status=ok
// SIG undefined FUN_140f614d0(void)

undefined8 * FUN_140f614d0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)(param_1 + 4));
  TArray<FCollisionNotifyInfo,FDefaultAllocator>::~TArray<FCollisionNotifyInfo,FDefaultAllocator>
            (param_1 + 2);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140f61520 FUN_140f61520 body=299 status=ok
// SIG undefined FUN_140f61520(void)

longlong FUN_140f61520(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x950) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x940) != 0) {
    FMemory::Free();
  }
  lVar6 = 7;
  plVar7 = (longlong *)(param_1 + 0x988);
  do {
    plVar4 = (longlong *)plVar7[-0xb];
    lVar6 = lVar6 + -1;
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
    if (plVar7[-0xe] != 0) {
      FMemory::Free();
    }
    if (plVar7[-0x10] != 0) {
      FMemory::Free();
    }
    if (plVar7[-0x12] != 0) {
      FMemory::Free();
    }
    if (plVar7[-0x14] != 0) {
      FMemory::Free();
    }
    if (plVar7[-0x16] != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + -0xe;
  } while (lVar6 != 0);
  FUN_140f5a560(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x970);
  }
  return param_1;
}



// FUNCTION 140f61650 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
Chaos::TPBDRigidClusteredParticles<float,3>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_140f5a560();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x630);
  }
  return param_1;
}



// FUNCTION 140f61690 FUN_140f61690 body=132 status=ok
// SIG undefined FUN_140f61690(void)

void FUN_140f61690(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar2 = FUN_140eccbe0();
    FWeakObjectPtr::operator=(param_2 + 0x23c,uVar2);
    iVar1 = *(int *)(param_1 + 0x710);
    *(int *)(param_1 + 0x710) = iVar1 + 1;
    if (*(int *)(param_1 + 0x714) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x708,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x708) + (longlong)iVar1 * 8) = param_2;
    FUN_141356740(param_1,param_2);
  }
  return;
}



// FUNCTION 140f61720 FUN_140f61720 body=129 status=ok
// SIG undefined FUN_140f61720(void)

void FUN_140f61720(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x728);
    lVar3 = (longlong)*(int *)(param_1 + 0x730) * 0x10 + lVar2;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
      cVar1 = FUN_14058c1e0(lVar2 + 8,param_2);
      if (cVar1 != '\0') {
        if (lVar2 != 0) {
          return;
        }
        break;
      }
    }
    cVar1 = FUN_140f8b5d0(param_1,param_2);
    if (cVar1 == '\0') {
      FUN_140f65ed0(param_1);
    }
  }
  return;
}



// FUNCTION 140f617b0 FUN_140f617b0 body=87 status=ok
// SIG undefined FUN_140f617b0(void)

void FUN_140f617b0(longlong param_1,float param_2)

{
  double dVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    dVar1 = (double)FUN_142eeea40();
    FUN_142f113c0(*(undefined8 *)(param_1 + 0x20),SUB84(dVar1 * (double)param_2,0));
    dVar1 = (double)FUN_142eeca30(*(undefined8 *)(param_1 + 0x20));
    FUN_142f0da80(*(undefined8 *)(param_1 + 0x20),SUB84(dVar1 * (double)param_2,0));
  }
  return;
}



// FUNCTION 140f61810 FUN_140f61810 body=112 status=ok
// SIG undefined FUN_140f61810(void)

void FUN_140f61810(longlong param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if (*(longlong **)(param_1 + 0x180) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x420))();
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x448))();
    if (iVar2 < 1) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = (float)iVar1 / (float)iVar2;
    }
    *(float *)(param_1 + 0x208) = fVar3;
    FUN_140f8cc40(param_1,iVar1,iVar2);
  }
  return;
}



// FUNCTION 140f61880 FUN_140f61880 body=666 status=ok
// SIG undefined FUN_140f61880(void)

void FUN_140f61880(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  undefined4 uStack_1c;
  
  lVar9 = param_1 + 0x1064;
  lVar4 = FWeakObjectPtr::Get(lVar9);
  if (param_2 == lVar4) {
    return;
  }
  lVar4 = FWeakObjectPtr::Get(lVar9);
  if (lVar4 != 0) {
    lVar5 = FUN_14149b100();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140483870(lVar4 + 0x938,param_1);
    }
  }
  FWeakObjectPtr::operator=(lVar9,param_2);
  lVar4 = FWeakObjectPtr::Get(lVar9);
  if (lVar4 != 0) {
    lVar5 = FUN_14149b100();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar7 = (longlong *)(lVar4 + 0x938);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = 0x40f69850;
        *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
        *(undefined4 *)(plVar6 + 3) = 0;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_1c;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar5;
        *plVar6 = (longlong)&PTR_FUN_143f77bd0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
        (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
        iVar1 = *(int *)(lVar4 + 0x940);
        lVar5 = (longlong)iVar1;
        *(int *)(lVar4 + 0x940) = iVar1 + 1;
        if (*(int *)(lVar4 + 0x944) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
        }
        lVar4 = *plVar7;
        *(undefined8 *)(lVar4 + lVar5 * 0x10) = 0;
        *(longlong **)(lVar4 + lVar5 * 0x10) = plVar6;
        *(undefined4 *)(lVar4 + 8 + lVar5 * 0x10) = 3;
      }
    }
  }
  cVar3 = FWeakObjectPtr::IsValid(lVar9);
  if (cVar3 == '\0') {
    uVar8 = 0;
  }
  else {
    plVar7 = (longlong *)FWeakObjectPtr::Get(lVar9);
    uVar8 = FUN_14301f8f0();
    uVar8 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
  }
  FWeakObjectPtr::operator=(param_1 + 0x106c,uVar8);
  cVar3 = FUN_14044aea0(param_1 + 0x106c,0);
  if (cVar3 == '\0') {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  lVar9 = FUN_143025260();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
      != lVar9 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar9 = ATrap::GetActivationShapeComponent(param_2);
  if (lVar9 != 0) {
    lVar4 = FUN_14301f8f0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140f61afe;
  }
  lVar9 = 0;
LAB_140f61afe:
  FWeakObjectPtr::operator=(param_1 + 0x106c,lVar9);
  return;
}



// FUNCTION 140f61b20 FUN_140f61b20 body=284 status=ok
// SIG undefined FUN_140f61b20(void)

longlong FUN_140f61b20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong local_18 [2];
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x680) != 0)) &&
     (*(char *)(param_2 + 0x48) == '\0')) {
    if (*(char *)(param_2 + 0x50) == '\0') {
      FString::PrintfImpl(local_18,L"IconInst_%u",*(undefined4 *)(param_1 + 0x674));
      lVar1 = FUN_140f552a0(*(undefined8 *)(param_1 + 0x680),PTR_s_AllIcons_14629e600,local_18,0);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (lVar1 != 0) {
        FUN_142088cf0(lVar1,param_2 + 0x30);
      }
      *(int *)(param_1 + 0x674) = *(int *)(param_1 + 0x674) + 1;
      return lVar1;
    }
    if (*(char *)(param_2 + 0x50) == '\x01') {
      FString::PrintfImpl(local_18,L"IconInst_%u",*(undefined4 *)(param_1 + 0x674));
      lVar1 = FUN_140f55680(*(undefined8 *)(param_1 + 0x680),PTR_s_OverheadNameplate_14629e608,
                            local_18,0);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      *(int *)(param_1 + 0x674) = *(int *)(param_1 + 0x674) + 1;
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140f61c40 FUN_140f61c40 body=585 status=ok
// SIG undefined FUN_140f61c40(void)

void FUN_140f61c40(longlong param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 local_18;
  undefined4 local_10;
  
  *(byte *)(param_1 + 0x751) = *(byte *)(param_1 + 0x751) & 0xf6;
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (plVar5 == (longlong *)0x0) {
LAB_140f61cb1:
    plVar5 = (longlong *)0x0;
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_14145f370();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140f61cb1;
    lVar6 = plVar5[0xa5];
  }
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x5c8);
  if (lVar7 != 0) {
    lVar8 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140f61cfd;
  }
  lVar7 = 0;
LAB_140f61cfd:
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  if (lVar6 != 0) {
    if (lVar7 != 0) {
      *(byte *)(param_1 + 0x751) = *(byte *)(param_1 + 0x751) | 1;
      lVar7 = FUN_1422312c0(plVar5);
      if (((lVar7 == 0) || (iVar4 = FUN_14046e5c0(lVar7), iVar4 < 2)) ||
         (cVar2 = APlayerController::IsPrimaryPlayer(plVar5), cVar2 != '\0')) {
        bVar3 = 0;
      }
      else {
        bVar3 = 2;
      }
      *(byte *)(param_1 + 0x751) = *(byte *)(param_1 + 0x751) & 0xfd;
      *(byte *)(param_1 + 0x751) = *(byte *)(param_1 + 0x751) | bVar3;
      if ((lVar7 == 0) || (iVar4 = FUN_14046e5c0(lVar7), iVar4 < 2)) {
        bVar3 = 0;
      }
      else {
        bVar3 = 4;
      }
      *(byte *)(param_1 + 0x751) = *(byte *)(param_1 + 0x751) & 0xfb;
      *(byte *)(param_1 + 0x751) = *(byte *)(param_1 + 0x751) | bVar3;
      (**(code **)(*plVar5 + 0x830))(plVar5,param_1 + 0x754,param_1 + 0x760);
      if (*(longlong *)(lVar6 + 0x168) == 0) {
        local_10 = DAT_1464aa7c0;
        puVar9 = &local_18;
        local_18 = DAT_1464aa7b8;
      }
      else {
        puVar9 = (undefined8 *)FUN_14238d380(*(longlong *)(lVar6 + 0x168),&local_18);
      }
      *(undefined8 *)(param_1 + 0x76c) = *puVar9;
      *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(puVar9 + 1);
      if (*(longlong *)(lVar6 + 0x168) == 0) {
        local_10 = DAT_1464aa7b0;
        puVar9 = &local_18;
        local_18 = DAT_1464aa7a8;
      }
      else {
        puVar9 = (undefined8 *)FUN_142369f10(*(longlong *)(lVar6 + 0x168),&local_18);
      }
      *(undefined8 *)(param_1 + 0x778) = *puVar9;
      *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(puVar9 + 1);
      plVar5 = (longlong *)FUN_14270bb10(plVar5);
      if ((plVar5 != (longlong *)0x0) && (plVar5[0xe] != 0)) {
        bVar3 = (**(code **)(*plVar5 + 0x2d0))
                          (plVar5,*(undefined8 *)(plVar5[0xe] + 0xb0),0,param_1 + 0x790);
        *(byte *)(param_1 + 0x751) = *(byte *)(param_1 + 0x751) & 0xf7;
        *(byte *)(param_1 + 0x751) = *(byte *)(param_1 + 0x751) | (bVar3 & 1) << 3;
      }
      return;
    }
    return;
  }
  return;
}



// FUNCTION 140f61e90 FUN_140f61e90 body=2600 status=ok
// SIG undefined FUN_140f61e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140f61e90(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  float *pfVar14;
  undefined8 *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
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
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  undefined8 local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  ulonglong uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    lVar10 = 0;
    lVar11 = 0;
  }
  else {
    lVar10 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x50) + 0xf28);
    lVar11 = *(longlong *)(param_1 + 0x50);
  }
  if ((((lVar11 == 0) || (lVar10 == 0)) || (*(longlong *)(lVar10 + 0x168) == 0)) ||
     ((lVar11 = FUN_140e971d0(), lVar11 == 0 || (*(longlong *)(lVar11 + 0x528) == 0)))) {
    uVar8 = uRam00000001468b5b88;
    uVar7 = _DAT_1468b5b80;
    uVar12 = uRam00000001468b5b78;
    *param_2 = _DAT_1468b5b70;
    param_2[1] = uVar12;
    uVar12 = uRam00000001468b5b98;
    param_2[4] = _DAT_1468b5b90;
    param_2[5] = uVar12;
    param_2[2] = uVar7;
    param_2[3] = uVar8;
    return param_2;
  }
  if ((*(longlong *)(param_1 + 0x50) == 0) ||
     (lVar10 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x50) + 0xf28), lVar10 == 0)) {
    fStack_138 = 0.0;
    fStack_134 = 0.0;
    local_148 = 0;
    fStack_140 = 0.0;
    fStack_13c = 0.0;
    local_130 = 0.0;
    goto LAB_140f620c0;
  }
  uVar12 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x50) + 0x106c);
  lVar10 = *(longlong *)(lVar10 + 0x168);
  if (lVar10 == 0) {
LAB_140f61fec:
    lVar10 = 0;
  }
  else {
    lVar13 = FUN_1429bed90();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
         ) != lVar13 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140f61fec;
  }
  pfVar14 = (float *)FUN_142ffc2e0(&local_d8,lVar10,uVar12);
  fVar24 = pfVar14[3] - *pfVar14;
  fVar23 = pfVar14[4] - pfVar14[1];
  fVar22 = pfVar14[5] - pfVar14[2];
  fStack_13c = fVar24 * 0.5;
  fStack_138 = fVar23 * 0.5;
  fStack_134 = fVar22 * 0.5;
  fStack_160 = fStack_134;
  fStack_140 = fStack_134 + pfVar14[2];
  local_148 = CONCAT44(fStack_138 + pfVar14[1],fStack_13c + *pfVar14);
  local_130 = SQRT((fVar24 * fVar24 + fVar23 * fVar23 + fVar22 * fVar22) * 0.25);
LAB_140f620c0:
  local_f8 = *(undefined8 *)(param_1 + 0x78);
  uStack_f0 = *(undefined4 *)(param_1 + 0x80);
  local_128 = 0x3f800000;
  uStack_120 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0x3f800000;
  uStack_fc = 0;
  local_118 = 0x3f80000000000000;
  uStack_110 = 0;
  uStack_ec = 0x3f800000;
  puVar15 = (undefined8 *)FBoxSphereBounds::TransformBy(&local_148,&local_d8,&local_128);
  local_148 = *puVar15;
  fStack_140 = (float)puVar15[1];
  fStack_13c = (float)((ulonglong)puVar15[1] >> 0x20);
  fStack_138 = (float)puVar15[2];
  fStack_134 = (float)((ulonglong)puVar15[2] >> 0x20);
  local_130 = *(float *)(puVar15 + 3);
  fVar22 = fStack_134 / local_130 - *(float *)(param_1 + 0x2c);
  if (0.0 <= fVar22) {
    if (1.0 <= fVar22) {
      fVar22 = 1.0;
    }
  }
  else {
    fVar22 = 0.0;
  }
  _local_168 = *(undefined1 (*) [12])(param_1 + 0x110);
  if (((*(longlong **)(param_1 + 0x50) != (longlong *)0x0) &&
      (lVar10 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x148))(), lVar10 != 0)) &&
     (*(float *)(lVar10 + 0x798) - *(float *)(param_1 + 0x94) < *(float *)(param_1 + 0x30))) {
    fVar23 = 1.0;
    if ((*(longlong **)(param_1 + 0x50) != (longlong *)0x0) &&
       (lVar10 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x148))(), lVar10 != 0)) {
      fVar23 = (*(float *)(lVar10 + 0x798) - *(float *)(param_1 + 0x94)) /
               *(float *)(param_1 + 0x30);
      if (0.0 <= fVar23) {
        if (1.0 <= fVar23) {
          fVar23 = 1.0;
        }
      }
      else {
        fVar23 = 0.0;
      }
    }
    bVar1 = *(byte *)(param_1 + 0xa8);
    fVar24 = *(float *)(param_1 + 0x98) + 1.0;
    if ((bVar1 & 1) == 0) {
      fVar24 = 1.0 / fVar24;
    }
    fVar23 = _guard_xfg_dispatch_icall_nop(1.0 - fVar23,fVar24);
    auVar17 = _local_168;
    if ((bVar1 & 2) != 0) {
      fVar23 = -fVar23;
    }
    local_168._4_4_ =
         (float)local_168._4_4_ + (*(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x38)) * fVar23
    ;
    local_168._0_4_ =
         (float)local_168._0_4_ + (*(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x9c)) * fVar23
    ;
    fStack_15c = auVar17._12_4_;
    fStack_160 = fStack_160 + (*(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0x3c)) * fVar23;
  }
  lVar10 = *(longlong *)(param_1 + 0x50);
  fVar23 = *(float *)(lVar10 + 0x1020);
  fVar24 = *(float *)(lVar10 + 0x1024);
  fVar28 = *(float *)(lVar10 + 0x1028);
  fVar30 = *(float *)(lVar10 + 0x102c);
  pfVar14 = (float *)FRotator::Quaternion(local_168,&local_d8);
  fVar31 = *pfVar14;
  fVar32 = pfVar14[1];
  fVar33 = pfVar14[2];
  fVar26 = pfVar14[3];
  local_158 = fVar26 * fVar23 * _DAT_146872a60 + fVar30 * fVar31 + fVar33 * fVar24 * _DAT_146872a50
              + fVar32 * fVar28 * _DAT_146872a40;
  fStack_154 = fVar33 * fVar23 * fRam0000000146872a64 + fVar30 * fVar32 +
               fVar26 * fVar24 * fRam0000000146872a54 + fVar31 * fVar28 * fRam0000000146872a44;
  fStack_150 = fVar32 * fVar23 * fRam0000000146872a68 + fVar30 * fVar33 +
               fVar31 * fVar24 * fRam0000000146872a58 + fVar26 * fVar28 * fRam0000000146872a48;
  fStack_14c = fVar31 * fVar23 * fRam0000000146872a6c + fVar30 * fVar26 +
               fVar32 * fVar24 * fRam0000000146872a5c + fVar33 * fVar28 * fRam0000000146872a4c;
  cVar9 = FUN_140f70230(param_1);
  if (cVar9 == '\0') {
    fVar23 = *(float *)(param_1 + 0xf0);
    fVar24 = *(float *)(param_1 + 0xf4);
    fVar28 = *(float *)(param_1 + 0xf8);
    fVar30 = *(float *)(param_1 + 0xfc);
    fVar31 = *(float *)(param_1 + 0x100);
    fVar32 = *(float *)(param_1 + 0x104);
    fVar33 = *(float *)(param_1 + 0x108);
    fVar26 = *(float *)(param_1 + 0x10c);
    fVar25 = fVar26 * fVar23 * _DAT_146872a60 + fVar30 * fVar31 + fVar33 * fVar24 * _DAT_146872a50 +
             fVar32 * fVar28 * _DAT_146872a40;
    fVar27 = fVar33 * fVar23 * fRam0000000146872a64 + fVar30 * fVar32 +
             fVar26 * fVar24 * fRam0000000146872a54 + fVar31 * fVar28 * fRam0000000146872a44;
    fVar29 = fVar32 * fVar23 * fRam0000000146872a68 + fVar30 * fVar33 +
             fVar31 * fVar24 * fRam0000000146872a58 + fVar26 * fVar28 * fRam0000000146872a48;
    fVar30 = fVar31 * fVar23 * fRam0000000146872a6c + fVar30 * fVar26 +
             fVar32 * fVar24 * fRam0000000146872a5c + fVar33 * fVar28 * fRam0000000146872a4c;
    fVar32 = fVar25 * fStack_154;
    fVar33 = fVar25 * local_158;
    fVar23 = fVar27 * local_158;
    fVar24 = fVar27 * fStack_154;
    fVar28 = fVar29 * local_158;
    fVar31 = fVar29 * fStack_150;
    local_158 = fVar25 * fStack_14c * _DAT_146872a60 + fVar30 * local_158 +
                fVar27 * fStack_150 * _DAT_146872a50 + fVar29 * fStack_154 * _DAT_146872a40;
    fStack_154 = fVar25 * fStack_150 * fRam0000000146872a64 + fVar30 * fStack_154 +
                 fVar27 * fStack_14c * fRam0000000146872a54 + fVar28 * fRam0000000146872a44;
    fStack_150 = fVar32 * fRam0000000146872a68 + fVar30 * fStack_150 + fVar23 * fRam0000000146872a58
                 + fVar29 * fStack_14c * fRam0000000146872a48;
    fStack_e4 = fVar33 * fRam0000000146872a6c + fVar30 * fStack_14c + fVar24 * fRam0000000146872a5c
                + fVar31 * fRam0000000146872a4c;
    local_168._4_4_ = fStack_154;
    local_168._0_4_ = fStack_154;
    fStack_160 = fStack_154;
    fStack_15c = fStack_154;
    fStack_14c = fStack_e4;
  }
  else {
    fStack_e4 = 0.0;
    _local_168 = ZEXT416((uint)fStack_154);
  }
  plVar2 = *(longlong **)(param_1 + 0x50);
  fVar23 = *(float *)(param_1 + 0xb0);
  if (plVar2 == (longlong *)0x0) {
    fVar24 = (float)local_168._0_4_;
  }
  else {
    uVar18 = *(uint *)(plVar2 + 0x208) & _DAT_146872ac0;
    uVar19 = *(uint *)((longlong)plVar2 + 0x1044) & uRam0000000146872ac4;
    uVar20 = *(uint *)(plVar2 + 0x209) & uRam0000000146872ac8;
    uVar21 = *(uint *)((longlong)plVar2 + 0x104c) & uRam0000000146872acc;
    auVar16._4_4_ = uVar19;
    auVar16._0_4_ = uVar18;
    auVar16._8_4_ = uVar20;
    auVar16._12_4_ = uVar21;
    auVar17._4_4_ = uVar20;
    auVar17._0_4_ = uVar19;
    auVar17._8_4_ = uVar18;
    auVar17._12_4_ = uVar21;
    auVar17 = maxps(auVar16,auVar17);
    auVar3._4_4_ = uVar18;
    auVar3._0_4_ = uVar20;
    auVar3._8_4_ = uVar19;
    auVar3._12_4_ = uVar21;
    auVar17 = maxps(auVar17,auVar3);
    fVar23 = fVar23 * auVar17._0_4_;
    local_e8 = fStack_14c;
    fStack_e0 = fStack_e4;
    fStack_dc = fStack_e4;
    lVar10 = (**(code **)(*plVar2 + 0x148))();
    if ((lVar10 != 0) &&
       (*(float *)(lVar10 + 0x798) - *(float *)(param_1 + 0x94) < *(float *)(param_1 + 0x30))) {
      fVar24 = 1.0;
      if ((*(longlong **)(param_1 + 0x50) != (longlong *)0x0) &&
         (lVar10 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x148))(), lVar10 != 0)) {
        fVar24 = (*(float *)(lVar10 + 0x798) - *(float *)(param_1 + 0x94)) /
                 *(float *)(param_1 + 0x30);
        if (0.0 <= fVar24) {
          if (1.0 <= fVar24) {
            fVar24 = 1.0;
          }
        }
        else {
          fVar24 = 0.0;
        }
      }
      fVar23 = fVar23 * fVar24;
    }
    fStack_e4 = 0.0;
    fVar24 = fStack_154;
  }
  fVar23 = fVar23 / local_130;
  uStack_fc = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_ec = 0x3f800000;
  uStack_120 = uStack_120 & 0xffffffff;
  uStack_110 = uStack_110 & 0xffffffff;
  local_d8 = 0;
  uStack_d0 = 0;
  fVar28 = fStack_150 * 2.0;
  fVar31 = fVar24 * 2.0;
  fVar26 = local_158 * local_158 * 2.0;
  fVar25 = fStack_14c * local_158 * 2.0;
  local_e8 = fStack_14c * fVar28 + local_158 * fVar31;
  fStack_160 = fStack_140;
  local_168 = (undefined1  [8])local_148;
  fStack_15c = 0.0;
  lVar10 = *(longlong *)(param_1 + 0x50);
  fVar30 = local_148._4_4_ * (fVar25 + fVar24 * fVar28);
  fVar32 = (float)local_148 * local_e8;
  fVar33 = (float)local_148 * (local_158 * fVar28 - fStack_14c * fVar31);
  local_148._0_4_ =
       *(float *)(lVar10 + 0x1030) + *(float *)(param_1 + 0xc0) +
       (fStack_140 * (fStack_14c * fVar31 + local_158 * fVar28) + 0.0 +
       local_148._4_4_ * (local_158 * fVar31 - fStack_14c * fVar28) +
       (float)local_148 * (1.0 - (fStack_150 * fVar28 + fVar24 * fVar31))) * fVar23;
  local_148._4_4_ =
       *(float *)(lVar10 + 0x1034) + *(float *)(param_1 + 0xc4) +
       (fStack_140 * (fVar24 * fVar28 - fVar25) + 0.0 +
       local_148._4_4_ * (1.0 - (fStack_150 * fVar28 + fVar26)) + fVar32) * fVar23;
  fStack_140 = *(float *)(lVar10 + 0x1038) + *(float *)(param_1 + 200) +
               (fStack_140 * (1.0 - (fVar24 * fVar31 + fVar26)) + 0.0 + fVar30 + fVar33) * fVar23;
  fStack_e0 = fStack_e4;
  fStack_dc = fStack_e4;
  FUN_142708650(lVar11);
  fVar28 = (float)FUN_14271a5d0(lVar11);
  fVar24 = *(float *)(param_1 + 0x10);
  fVar28 = _guard_xfg_dispatch_icall_nop(fVar28 * 0.008726646);
  fVar28 = ((fVar22 + 1.0) * fVar24) / fVar28 - (float)local_148;
  fVar24 = 0.0 - local_148._4_4_;
  fVar22 = 0.0 - fStack_140;
  uVar12 = FQuat::Rotator(&local_158,local_168);
  FRotator::Quaternion(uVar12,&local_d8);
  *param_2 = local_d8;
  param_2[1] = CONCAT44(uStack_cc,uStack_d0);
  auVar5._4_4_ = fVar24;
  auVar5._0_4_ = fVar28;
  auVar5._8_4_ = fVar22;
  auVar5._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 2) = auVar5;
  auVar4._4_4_ = fVar23;
  auVar4._0_4_ = fVar23;
  auVar4._8_4_ = fVar23;
  auVar4._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 4) = auVar4;
  return param_2;
}



// FUNCTION 140f628c0 FUN_140f628c0 body=336 status=ok
// SIG undefined FUN_140f628c0(void)

void FUN_140f628c0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  float local_res8;
  float fStackX_c;
  float local_res10;
  float local_res14;
  undefined8 local_28;
  undefined4 local_20;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5d8);
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
    if (bVar1) {
      FUN_142eb8e90(param_1,&local_res10);
      uVar4 = 0;
      plVar5 = *(longlong **)(param_1 + 0x708);
      uVar6 = (longlong)*(int *)(param_1 + 0x710) & 0x1fffffffffffffff;
      if (plVar5 + *(int *)(param_1 + 0x710) < plVar5) {
        uVar6 = uVar4;
      }
      if (uVar6 != 0) {
        do {
          lVar3 = *plVar5;
          local_28 = *(undefined8 *)(lVar3 + 0x1b8);
          local_20 = *(undefined4 *)(lVar3 + 0x1c0);
          local_res8 = (float)DAT_1468b5d88;
          fStackX_c = DAT_1468b5d88._4_4_;
          USceneComponent::K2_AttachTo(lVar2,&local_28,&local_res8,1,0);
          plVar5 = plVar5 + 1;
          uVar4 = uVar4 + 1;
          *(ulonglong *)(lVar3 + 0x1c4) = CONCAT44(fStackX_c + local_res14,local_res8 + local_res10)
          ;
        } while (uVar4 != uVar6);
      }
    }
  }
  return;
}



// FUNCTION 140f62b50 FUN_140f62b50 body=41 status=ok
// SIG undefined FUN_140f62b50(void)

void FUN_140f62b50(undefined8 *param_1)

{
  FUN_140f8a440(*param_1);
  FUN_140f867b0(*param_1,0x3e23d70a,0);
  return;
}



// FUNCTION 140f62ca0 FUN_140f62ca0 body=52 status=ok
// SIG undefined FUN_140f62ca0(void)

void FUN_140f62ca0(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1416f8720(param_1[1]);
  uVar2 = FUN_1416f8720(*param_1);
  FUN_140f94340(uVar2,uVar1);
  return;
}



// FUNCTION 140f62d60 FUN_140f62d60 body=48 status=ok
// SIG undefined FUN_140f62d60(void)

void FUN_140f62d60(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140eccca0(*param_1);
  if (lVar1 != 0) {
    FUN_1407665e0(lVar1 + 0x1050,*param_1);
    return;
  }
  return;
}



// FUNCTION 140f62dd0 FUN_140f62dd0 body=129 status=ok
// SIG undefined FUN_140f62dd0(void)

longlong FUN_140f62dd0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint7 uVar6;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x106c);
  uVar5 = 0;
  if (lVar3 != 0) {
    lVar4 = APlayArea::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar4 + 0x90);
    uVar5 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar1) ||
       (uVar5 = *(ulonglong *)(*(longlong *)(lVar3 + 0x10) + 0x88),
       *(longlong *)(uVar5 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
      uVar5 = uVar5 & 0xffffffffffffff00;
      bVar2 = false;
    }
    else {
      uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
      bVar2 = true;
    }
    if (bVar2) goto LAB_140f62e29;
  }
  lVar3 = 0;
LAB_140f62e29:
  uVar6 = (uint7)(uVar5 >> 8);
  if ((*(char *)(param_1 + 0x11ec) != '\0') && (lVar3 != 0)) {
    return CONCAT71(uVar6,1);
  }
  return (ulonglong)uVar6 << 8;
}



// FUNCTION 140f62e60 FUN_140f62e60 body=62 status=ok
// SIG undefined FUN_140f62e60(void)

undefined1 FUN_140f62e60(longlong param_1)

{
  char cVar1;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x105c);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0x1058) != -1)) {
    cVar1 = FUN_140f62dd0(param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140f62ea0 FUN_140f62ea0 body=159 status=ok
// SIG undefined FUN_140f62ea0(void)

undefined8 FUN_140f62ea0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x990);
  if (lVar3 != 0) {
    plVar2 = *(longlong **)(lVar3 + 0x180);
    plVar4 = plVar2 + *(int *)(lVar3 + 0x188);
    for (; plVar2 != plVar4; plVar2 = plVar2 + 1) {
      if ((longlong *)*plVar2 == param_2) {
        lVar3 = (**(code **)(*param_2 + 0x340))(param_2);
        cVar1 = FWeakObjectPtr::IsValid(lVar3 + 0xdc);
        if (cVar1 == '\0') {
          return 0;
        }
        lVar3 = (**(code **)(*param_2 + 0x340))(param_2);
        plVar4 = (longlong *)FWeakObjectPtr::Get(lVar3 + 0xdc);
        uVar5 = FUN_14301f8f0();
        lVar3 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
        if (lVar3 == 0) {
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140f62f40 FUN_140f62f40 body=120 status=ok
// SIG undefined FUN_140f62f40(void)

undefined8 FUN_140f62f40(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_140f678e0(local_18,0);
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
    return 1;
  }
  return 1;
}



// FUNCTION 140f62fc0 FUN_140f62fc0 body=541 status=ok
// SIG undefined FUN_140f62fc0(void)

void FUN_140f62fc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  byte bVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  if ((((param_2 != 0) && (lVar4 = *(longlong *)(param_2 + 0x328), lVar4 != 0)) &&
      (*(longlong *)(param_1 + 0x170) != 0)) &&
     ((*(longlong *)(param_1 + 0x178) != 0 && (*(longlong *)(param_1 + 0x180) != 0)))) {
    lVar11 = *(longlong *)(param_1 + 0x38);
    bVar6 = 0;
    if (lVar11 != 0) {
      lVar7 = AMobActorKuroko::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (*(longlong *)(lVar11 + 0x758) != 0)) {
        bVar6 = FUN_142dd3360(*(longlong *)(lVar11 + 0x758),*(undefined8 *)(lVar4 + 0x10));
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x170) + 0x2b0))
              (*(longlong **)(param_1 + 0x170),lVar4 + 0x40,1,0);
    pwVar14 = L"CompleteText";
    bVar12 = (bVar6 ^ 1) + 1;
    pwVar13 = L"GFxLeaguesMenu";
    pwVar10 = L"COMPLETE";
    puVar9 = local_30;
    if (bVar6 == 0) {
      pwVar14 = L"IncompleteText";
      pwVar13 = L"GFxLeaguesMenu";
      pwVar10 = L"INCOMPLETE";
      puVar9 = local_48;
    }
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (puVar9,pwVar10,pwVar13,pwVar14);
    (**(code **)(**(longlong **)(param_1 + 0x178) + 0x2b0))
              (*(longlong **)(param_1 + 0x178),uVar8,1,0);
    if (((bVar12 & 2) != 0) && (bVar12 = bVar12 & 0xfd, local_40 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    if (((bVar12 & 1) != 0) && (local_28 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
    lVar11 = 0x58;
    if (bVar6 == 0) {
      lVar11 = 0x70;
    }
    (**(code **)(**(longlong **)(param_1 + 0x180) + 0x2b0))
              (*(longlong **)(param_1 + 0x180),lVar11 + lVar4,1,0);
  }
  return;
}



// FUNCTION 140f631e0 FUN_140f631e0 body=1085 status=ok
// SIG undefined FUN_140f631e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f631e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  longlong local_140;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [80];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  lVar9 = 0;
  if (lVar6 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140f63254;
  }
  lVar6 = lVar9;
LAB_140f63254:
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x5d8);
  if (cVar4 != '\0') {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x5d8);
    lVar7 = *(longlong *)(lVar7 + 0x848);
    if (lVar7 != 0) {
      lVar8 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar9 = FUN_1414002f0(lVar7);
      }
    }
  }
  if ((((lVar9 != *(longlong *)(param_1 + 0x6a0)) && (lVar6 != 0)) &&
      (*(longlong *)(lVar6 + 0x990) != lVar9)) && (lVar6 = FUN_140cfbfb0(lVar6), lVar6 != 0)) {
    FUN_140f94740(param_1,param_1 + 0x698);
    *(longlong *)(param_1 + 0x6a0) = lVar9;
    if ((lVar9 != 0) && (lVar7 = *(longlong *)(lVar9 + 0x4c0), lVar7 != 0)) {
      lVar8 = FUN_1429ff160();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *(longlong *)(param_1 + 0x6a8) = lVar7;
        local_168 = *(undefined4 *)(lVar7 + 0x220);
        uStack_164 = *(undefined4 *)(lVar7 + 0x224);
        local_160 = *(undefined4 *)(lVar7 + 0x228);
        uStack_dc = *(undefined4 *)(lVar7 + 0x22c);
        *(undefined4 *)(param_1 + 0x6e0) = local_168;
        *(undefined4 *)(param_1 + 0x6e4) = uStack_164;
        *(undefined4 *)(param_1 + 0x6e8) = local_160;
        *(undefined8 *)(param_1 + 0x698) = *(undefined8 *)(param_1 + 0x650);
        local_e8 = local_168;
        uStack_e4 = uStack_164;
        uStack_e0 = local_160;
        FText::FText(local_158);
        lVar7 = *(longlong *)(lVar9 + 0x1110);
        if (*(int *)(lVar6 + 0x270) != *(int *)(lVar6 + 0x29c)) {
          lVar8 = *(longlong *)(lVar6 + 0x2a8);
          if (*(longlong *)(lVar6 + 0x2a8) == 0) {
            lVar8 = lVar6 + 0x2a0;
          }
          iVar5 = *(int *)(lVar8 + ((longlong)((int)((ulonglong)lVar7 >> 0x20) + (int)lVar7) &
                                   (longlong)*(int *)(lVar6 + 0x2b0) - 1U) * 4);
          if (iVar5 != -1) {
            do {
              plVar12 = (longlong *)((longlong)iVar5 * 0x20 + *(longlong *)(lVar6 + 0x268));
              if (*plVar12 == lVar7) {
                if (((iVar5 != -1) && (plVar12 != (longlong *)0x0)) &&
                   (plVar12 != (longlong *)0xfffffffffffffff8)) {
                  uVar10 = FText::FromString(local_120);
                  FText::operator=(local_158,uVar10);
                  plVar12 = local_118;
                  goto LAB_140f6346d;
                }
                break;
              }
              iVar5 = (int)plVar12[3];
            } while (iVar5 != -1);
          }
        }
        uVar10 = (**(code **)(*(longlong *)(lVar9 + 0xd98) + 0x68))
                           ((longlong *)(lVar9 + 0xd98),local_108);
        FText::operator=(local_158,uVar10);
        plVar12 = local_100;
LAB_140f6346d:
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar12 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        local_140 = param_1;
        FText::FText(local_138,local_158);
        local_58 = (longlong *)0x0;
        local_48 = 0;
        puVar11 = (undefined8 *)FUN_140438ef0(0x28,local_78);
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &PTR_FUN_144605c20;
          puVar11[1] = local_140;
          FText::FText(puVar11 + 2,local_138);
        }
        local_88[0] = &LAB_140f62b40;
        uVar10 = FUN_1420849a0(param_1,local_d8,local_88);
        FUN_14208c4f0(param_1,uVar10);
        if (local_48 != 0) {
          plVar12 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar12 = local_58;
          }
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x10))(plVar12,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_130 + 1;
          lVar6 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar2 = (int *)((longlong)local_130 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_130 + 8))(local_130,1);
            }
          }
        }
        if (local_150 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_150 + 1;
          lVar6 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_150)(local_150);
            LOCK();
            piVar2 = (int *)((longlong)local_150 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_150 + 8))(local_150,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140f63620 FUN_140f63620 body=5853 status=ok
// SIG undefined FUN_140f63620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f63620(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  wchar_t *pwVar16;
  longlong *plVar17;
  char *pcVar18;
  undefined1 *puVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  undefined1 auStack_878 [32];
  longlong *local_858;
  longlong *local_850;
  longlong *local_848;
  longlong local_840;
  undefined4 *local_838;
  ulonglong *puStack_830;
  undefined1 local_828 [8];
  longlong *local_820;
  longlong local_810;
  longlong local_808 [13];
  undefined1 local_7a0 [8];
  longlong *local_798;
  ulonglong *local_788;
  undefined4 *puStack_780;
  undefined8 local_778;
  longlong local_770;
  undefined8 local_768;
  longlong local_760;
  undefined8 local_758;
  longlong local_750;
  undefined8 local_748;
  longlong local_740;
  undefined8 local_738;
  longlong local_730;
  undefined1 local_728 [8];
  longlong *local_720;
  undefined1 local_710 [8];
  longlong *local_708;
  undefined1 local_6f8 [8];
  longlong *local_6f0;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined1 local_6c8 [16];
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined1 local_6a8 [16];
  undefined8 local_698;
  undefined8 uStack_690;
  undefined1 local_688 [16];
  undefined8 local_678;
  undefined8 uStack_670;
  undefined1 local_668 [16];
  undefined8 local_658;
  undefined8 uStack_650;
  undefined1 local_648 [8];
  longlong *local_640;
  undefined1 local_630 [8];
  longlong *local_628;
  undefined1 local_618 [8];
  longlong *local_610;
  undefined1 local_600 [8];
  longlong *local_5f8;
  undefined1 local_5e8 [16];
  undefined1 local_5d8 [8];
  longlong *local_5d0;
  undefined1 local_5c0 [8];
  longlong *local_5b8;
  undefined1 local_5a8 [8];
  longlong *local_5a0;
  undefined1 local_590 [8];
  longlong *local_588;
  undefined1 local_578 [8];
  longlong *local_570;
  undefined1 local_560 [8];
  longlong *local_558;
  undefined1 local_548 [8];
  longlong *local_540;
  undefined1 local_530 [8];
  longlong *local_528;
  undefined1 local_518 [8];
  longlong *local_510;
  undefined1 local_500 [8];
  longlong *local_4f8;
  undefined1 local_4e8 [8];
  longlong *local_4e0;
  undefined1 local_4d0 [8];
  longlong *local_4c8;
  undefined1 local_4b8 [8];
  longlong *local_4b0;
  undefined1 local_4a0 [8];
  longlong *local_498;
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined1 local_438 [24];
  undefined1 local_420 [24];
  undefined1 local_408 [24];
  undefined1 local_3f0 [24];
  undefined1 local_3d8 [24];
  undefined1 local_3c0 [24];
  undefined1 local_3a8 [24];
  undefined1 local_390 [24];
  undefined1 local_378 [24];
  undefined1 local_360 [24];
  undefined1 local_348 [24];
  undefined1 local_330 [24];
  undefined1 local_318 [24];
  undefined1 local_300 [24];
  undefined4 local_2e8 [4];
  undefined1 local_2d8 [24];
  undefined1 local_2c0;
  undefined4 local_2b8;
  undefined1 local_2a8 [24];
  undefined1 local_290;
  undefined4 local_288 [4];
  undefined1 local_278 [24];
  char local_260 [8];
  undefined4 local_258;
  undefined1 local_248 [24];
  undefined1 local_230;
  undefined4 local_228;
  undefined1 local_218 [24];
  undefined1 local_200;
  undefined4 local_1f8 [4];
  undefined1 local_1e8 [24];
  char local_1d0 [8];
  undefined4 local_1c8;
  undefined1 local_1b8 [24];
  undefined1 local_1a0;
  undefined4 local_198;
  undefined1 local_188 [24];
  undefined1 local_170;
  ulonglong local_168 [2];
  undefined1 local_158 [24];
  char local_140 [8];
  undefined4 local_138;
  undefined1 local_128 [24];
  undefined1 local_110;
  undefined4 local_108;
  undefined1 local_f8 [24];
  undefined1 local_e0;
  ulonglong local_d8 [2];
  undefined1 local_c8 [24];
  char local_b0 [8];
  undefined4 local_a8;
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_878;
  local_850 = (longlong *)((ulonglong)local_850 & 0xffffffff00000000);
  if (*(longlong **)(param_1 + 0x180) != (longlong *)0x0) {
    local_848 = param_3;
    local_810 = param_2;
    local_808[0xc] = param_1;
    if (param_3 == (longlong *)0x0) {
      if ((*(longlong *)(param_1 + 0x170) != 0) && (*(longlong *)(param_1 + 0x178) != 0)) {
        lVar10 = **(longlong **)(param_1 + 0x180);
        uVar8 = FUN_1404b03b0();
        (**(code **)(lVar10 + 0x2b0))(*(undefined8 *)(param_1 + 0x180),uVar8,1,0);
        lVar10 = **(longlong **)(param_1 + 0x170);
        uVar8 = FUN_1404b03b0();
        (**(code **)(lVar10 + 0x2b0))(*(undefined8 *)(param_1 + 0x170),uVar8,1,0);
        lVar10 = **(longlong **)(param_1 + 0x178);
        uVar8 = FUN_1404b03b0();
        (**(code **)(lVar10 + 0x2b0))(*(undefined8 *)(param_1 + 0x178),uVar8,1,0);
        local_808[10] = 0;
        local_808[0xb] = 4;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_808 + 10,0);
        FGenericPlatformString::Memcpy(local_808[10],&DAT_14462b718,8);
        FUN_142088910(param_1,local_808 + 10);
        if (local_808[10] != 0) {
          FMemory::Free();
        }
      }
    }
    else {
      FText::FText(local_828);
      local_658 = (ulonglong *)CONCAT44(local_658._4_4_,(undefined4)local_658);
      uStack_650 = (ulonglong *)CONCAT44(uStack_650._4_4_,(undefined4)uStack_650);
      local_6d8 = (undefined4 *)CONCAT44(local_6d8._4_4_,(undefined4)local_6d8);
      uStack_6d0 = (undefined4 *)CONCAT44(uStack_6d0._4_4_,(undefined4)uStack_6d0);
      local_6b8 = (ulonglong *)CONCAT44(local_6b8._4_4_,(undefined4)local_6b8);
      uStack_6b0 = (ulonglong *)CONCAT44(uStack_6b0._4_4_,(undefined4)uStack_6b0);
      local_698 = (ulonglong *)CONCAT44(local_698._4_4_,(undefined4)local_698);
      uStack_690 = (ulonglong *)CONCAT44(uStack_690._4_4_,(undefined4)uStack_690);
      local_678 = (ulonglong *)CONCAT44(local_678._4_4_,(undefined4)local_678);
      uStack_670 = (ulonglong *)CONCAT44(uStack_670._4_4_,(undefined4)uStack_670);
      if (((param_2 != 0) &&
          (local_658 = (ulonglong *)CONCAT44(local_658._4_4_,(undefined4)local_658),
          uStack_650 = (ulonglong *)CONCAT44(uStack_650._4_4_,(undefined4)uStack_650),
          local_6d8 = (undefined4 *)CONCAT44(local_6d8._4_4_,(undefined4)local_6d8),
          uStack_6d0 = (undefined4 *)CONCAT44(uStack_6d0._4_4_,(undefined4)uStack_6d0),
          local_6b8 = (ulonglong *)CONCAT44(local_6b8._4_4_,(undefined4)local_6b8),
          uStack_6b0 = (ulonglong *)CONCAT44(uStack_6b0._4_4_,(undefined4)uStack_6b0),
          local_698 = (ulonglong *)CONCAT44(local_698._4_4_,(undefined4)local_698),
          uStack_690 = (ulonglong *)CONCAT44(uStack_690._4_4_,(undefined4)uStack_690),
          local_678 = (ulonglong *)CONCAT44(local_678._4_4_,(undefined4)local_678),
          uStack_670 = (ulonglong *)CONCAT44(uStack_670._4_4_,(undefined4)uStack_670),
          *(longlong *)(param_2 + 0x300) != 0)) &&
         ((0 < *(int *)(param_2 + 0x310) ||
          (((*(int *)(param_2 + 800) != 0 || (*(int *)(param_2 + 0x330) != 0)) ||
           (local_658 = (ulonglong *)CONCAT44(local_658._4_4_,(undefined4)local_658),
           uStack_650 = (ulonglong *)CONCAT44(uStack_650._4_4_,(undefined4)uStack_650),
           local_6d8 = (undefined4 *)CONCAT44(local_6d8._4_4_,(undefined4)local_6d8),
           uStack_6d0 = (undefined4 *)CONCAT44(uStack_6d0._4_4_,(undefined4)uStack_6d0),
           local_6b8 = (ulonglong *)CONCAT44(local_6b8._4_4_,(undefined4)local_6b8),
           uStack_6b0 = (ulonglong *)CONCAT44(uStack_6b0._4_4_,(undefined4)uStack_6b0),
           local_698 = (ulonglong *)CONCAT44(local_698._4_4_,(undefined4)local_698),
           uStack_690 = (ulonglong *)CONCAT44(uStack_690._4_4_,(undefined4)uStack_690),
           local_678 = (ulonglong *)CONCAT44(local_678._4_4_,(undefined4)local_678),
           uStack_670 = (ulonglong *)CONCAT44(uStack_670._4_4_,(undefined4)uStack_670),
           0 < *(int *)(param_2 + 0x340))))))) {
        lVar10 = **(longlong **)(param_1 + 0x170);
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_5c0,L"REWARDS",L"GFxLeaguesMenu",L"RewardsText");
        (**(code **)(lVar10 + 0x2b0))(*(undefined8 *)(param_1 + 0x170),uVar8,1,0);
        if (local_5b8 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_5b8 + 1;
          lVar10 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_5b8)(local_5b8);
            LOCK();
            piVar1 = (int *)((longlong)local_5b8 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_5b8 + 8))(local_5b8,1);
            }
          }
        }
        cVar7 = *(char *)(param_2 + 0x34c);
        pwVar21 = L"ChestUnlockedText";
        pwVar20 = L"GFxLeaguesMenu";
        pwVar16 = L"UNLOCKED";
        puVar19 = local_590;
        if (cVar7 == '\0') {
          pwVar21 = L"LockedText";
          pwVar20 = L"GFxLeaguesMenu";
          pwVar16 = L"LOCKED";
          puVar19 = local_5a8;
        }
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (puVar19,pwVar16,pwVar20,pwVar21);
        (**(code **)(**(longlong **)(param_1 + 0x178) + 0x2b0))
                  (*(longlong **)(param_1 + 0x178),uVar8,1,0);
        if (((2U - (cVar7 != '\0') & 2) != 0) && (local_5a0 != (longlong *)0x0)) {
          LOCK();
          plVar13 = local_5a0 + 1;
          lVar10 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_5a0)(local_5a0);
            LOCK();
            piVar1 = (int *)((longlong)local_5a0 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_5a0 + 8))(local_5a0,1);
            }
          }
        }
        if ((cVar7 != '\0') && (local_588 != (longlong *)0x0)) {
          LOCK();
          plVar13 = local_588 + 1;
          lVar10 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_588)(local_588);
            LOCK();
            piVar1 = (int *)((longlong)local_588 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_588 + 8))(local_588,1);
            }
          }
        }
        plVar17 = *(longlong **)(param_2 + 0x338);
        plVar13 = plVar17 + *(int *)(param_2 + 0x340);
        local_858 = plVar13;
        local_850 = plVar17;
        if (plVar17 != plVar13) {
          do {
            lVar10 = 0;
            plVar5 = (longlong *)*plVar17;
            local_850 = plVar17;
            FUN_1411e3dd0(local_7a0,plVar5);
            cVar7 = FText::IsEmpty(local_7a0);
            if (cVar7 == '\0') {
              if (plVar5 != (longlong *)0x0) {
                local_6e0 = FUN_14301f8f0();
                lVar9 = (**(code **)(*plVar5 + 0x628))(plVar5,local_6e0);
                if (lVar9 != 0) {
                  lVar10 = *(longlong *)(lVar9 + 0x208);
                }
              }
              if ((lVar10 == 0) || (*(longlong *)(lVar10 + 0x1d8) == 0)) {
LAB_140f63c6e:
                local_808[2] = 0;
                local_808[3] = 8;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_808 + 2,0);
                FGenericPlatformString::Memcpy(local_808[2],L"{0}{1}\n",0x10);
                lVar10 = FText::FText(local_3f0,local_7a0);
                lVar9 = FText::FText(local_3d8,local_828);
                uVar8 = FText::FromString(local_530,local_808 + 2);
                puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_478,uVar8);
                local_2e8[0] = 4;
                FText::FText(local_2d8,lVar9);
                local_2c0 = 1;
                local_2b8 = 4;
                FText::FText(local_2a8,lVar10);
                local_838 = local_2e8;
                local_290 = 1;
                puStack_830 = (ulonglong *)local_288;
                local_768 = *puVar12;
                local_760 = puVar12[1];
                if (local_760 != 0) {
                  LOCK();
                  *(int *)(local_760 + 8) = *(int *)(local_760 + 8) + 1;
                  UNLOCK();
                }
                local_6b8 = (ulonglong *)local_838;
                uStack_6b0 = puStack_830;
                uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                        TArray<FFormatArgumentValue,FDefaultAllocator>(local_6a8,&local_6b8);
                uVar8 = FText::Format(local_548,&local_768,uVar8);
                FText::FText(local_648,uVar8);
                plVar13 = local_540;
                if (local_540 != (longlong *)0x0) {
                  LOCK();
                  plVar17 = local_540 + 1;
                  lVar11 = *plVar17;
                  *(int *)plVar17 = (int)*plVar17 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_540)(local_540);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                TArray<FFormatArgumentValue,FDefaultAllocator>::
                ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_6a8);
                lVar11 = 2;
                pcVar18 = local_260;
                do {
                  lVar11 = lVar11 + -1;
                  pcVar2 = pcVar18 + -0x30;
                  if (*pcVar2 != '\0') {
                    *pcVar2 = '\0';
                    plVar13 = *(longlong **)(pcVar18 + -0x40);
                    if (plVar13 != (longlong *)0x0) {
                      LOCK();
                      plVar17 = plVar13 + 1;
                      lVar6 = *plVar17;
                      *(int *)plVar17 = (int)*plVar17 + -1;
                      UNLOCK();
                      if ((int)lVar6 == 1) {
                        (**(code **)*plVar13)(plVar13);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar13 + 0xc);
                        iVar4 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar4 == 1) {
                          (**(code **)(*plVar13 + 8))(plVar13,1);
                        }
                      }
                    }
                  }
                  pcVar18 = pcVar2;
                } while (lVar11 != 0);
                plVar13 = (longlong *)puVar12[1];
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  plVar17 = plVar13 + 1;
                  lVar11 = *plVar17;
                  *(int *)plVar17 = (int)*plVar17 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plVar13)(plVar13);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                plVar13 = *(longlong **)(lVar9 + 8);
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  plVar17 = plVar13 + 1;
                  lVar9 = *plVar17;
                  *(int *)plVar17 = (int)*plVar17 + -1;
                  UNLOCK();
                  if ((int)lVar9 == 1) {
                    (**(code **)*plVar13)(plVar13);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                plVar13 = *(longlong **)(lVar10 + 8);
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  plVar17 = plVar13 + 1;
                  lVar10 = *plVar17;
                  *(int *)plVar17 = (int)*plVar17 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*plVar13)(plVar13);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                FText::operator=(local_828,local_648);
                plVar13 = local_640;
                if (local_640 != (longlong *)0x0) {
                  LOCK();
                  plVar17 = local_640 + 1;
                  lVar10 = *plVar17;
                  *(int *)plVar17 = (int)*plVar17 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*local_640)(local_640);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                plVar13 = local_528;
                lVar10 = local_808[2];
                if (local_528 != (longlong *)0x0) {
                  LOCK();
                  plVar17 = local_528 + 1;
                  lVar9 = *plVar17;
                  *(int *)plVar17 = (int)*plVar17 + -1;
                  UNLOCK();
                  if ((int)lVar9 == 1) {
                    (**(code **)*local_528)(local_528);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    lVar10 = local_808[2];
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                      lVar10 = local_808[2];
                    }
                  }
                }
              }
              else {
                lVar10 = *(longlong *)(lVar10 + 0x1d8) + 0x40;
                cVar7 = FText::IsEmpty(lVar10);
                if (cVar7 != '\0') goto LAB_140f63c6e;
                local_808[0] = 0;
                local_808[1] = 0xd;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_808,0);
                FGenericPlatformString::Memcpy(local_808[0],L"{0}{1}: {2}\n",0x1a);
                lVar9 = FText::FText(local_438,local_7a0);
                local_840 = lVar9;
                lVar10 = FText::FText(local_420,lVar10);
                lVar11 = FText::FText(local_408,local_828);
                uVar8 = FText::FromString(local_560,local_808);
                puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_488,uVar8);
                local_288[0] = 4;
                FText::FText(local_278,lVar11);
                local_260[0] = '\x01';
                local_258 = 4;
                FText::FText(local_248,lVar10);
                local_230 = 1;
                local_228 = 4;
                FText::FText(local_218,lVar9);
                local_788 = (ulonglong *)local_288;
                local_200 = 1;
                puStack_780 = local_1f8;
                local_778 = *puVar12;
                local_770 = puVar12[1];
                if (local_770 != 0) {
                  LOCK();
                  *(int *)(local_770 + 8) = *(int *)(local_770 + 8) + 1;
                  UNLOCK();
                }
                local_6d8 = (undefined4 *)local_788;
                uStack_6d0 = puStack_780;
                uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                        TArray<FFormatArgumentValue,FDefaultAllocator>(local_6c8,&local_6d8);
                uVar8 = FText::Format(local_578,&local_778,uVar8);
                FText::FText(local_5d8,uVar8);
                plVar13 = local_570;
                if (local_570 != (longlong *)0x0) {
                  LOCK();
                  plVar17 = local_570 + 1;
                  lVar9 = *plVar17;
                  *(int *)plVar17 = (int)*plVar17 + -1;
                  UNLOCK();
                  if ((int)lVar9 == 1) {
                    (**(code **)*local_570)(local_570);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                TArray<FFormatArgumentValue,FDefaultAllocator>::
                ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_6c8);
                lVar9 = 3;
                pcVar18 = local_1d0;
                do {
                  lVar9 = lVar9 + -1;
                  pcVar2 = pcVar18 + -0x30;
                  if (*pcVar2 != '\0') {
                    *pcVar2 = '\0';
                    plVar13 = *(longlong **)(pcVar18 + -0x40);
                    if (plVar13 != (longlong *)0x0) {
                      LOCK();
                      plVar17 = plVar13 + 1;
                      lVar6 = *plVar17;
                      *(int *)plVar17 = (int)*plVar17 + -1;
                      UNLOCK();
                      if ((int)lVar6 == 1) {
                        (**(code **)*plVar13)(plVar13);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar13 + 0xc);
                        iVar4 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar4 == 1) {
                          (**(code **)(*plVar13 + 8))(plVar13,1);
                        }
                      }
                    }
                  }
                  pcVar18 = pcVar2;
                } while (lVar9 != 0);
                plVar13 = (longlong *)puVar12[1];
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  plVar17 = plVar13 + 1;
                  lVar9 = *plVar17;
                  *(int *)plVar17 = (int)*plVar17 + -1;
                  UNLOCK();
                  if ((int)lVar9 == 1) {
                    (**(code **)*plVar13)(plVar13);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                plVar13 = *(longlong **)(lVar11 + 8);
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  plVar17 = plVar13 + 1;
                  lVar9 = *plVar17;
                  *(int *)plVar17 = (int)*plVar17 + -1;
                  UNLOCK();
                  if ((int)lVar9 == 1) {
                    (**(code **)*plVar13)(plVar13);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                plVar13 = *(longlong **)(lVar10 + 8);
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  plVar17 = plVar13 + 1;
                  lVar10 = *plVar17;
                  *(int *)plVar17 = (int)*plVar17 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*plVar13)(plVar13);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                plVar13 = *(longlong **)(local_840 + 8);
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  plVar17 = plVar13 + 1;
                  lVar10 = *plVar17;
                  *(int *)plVar17 = (int)*plVar17 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*plVar13)(plVar13);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                FText::operator=(local_828,local_5d8);
                plVar13 = local_5d0;
                if (local_5d0 != (longlong *)0x0) {
                  LOCK();
                  plVar17 = local_5d0 + 1;
                  lVar10 = *plVar17;
                  *(int *)plVar17 = (int)*plVar17 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*local_5d0)(local_5d0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                plVar13 = local_558;
                lVar10 = local_808[0];
                if (local_558 != (longlong *)0x0) {
                  LOCK();
                  plVar17 = local_558 + 1;
                  lVar9 = *plVar17;
                  *(int *)plVar17 = (int)*plVar17 + -1;
                  UNLOCK();
                  if ((int)lVar9 == 1) {
                    (**(code **)*local_558)(local_558);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    lVar10 = local_808[0];
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                      lVar10 = local_808[0];
                    }
                  }
                }
              }
              plVar17 = local_850;
              plVar13 = local_858;
              if (lVar10 != 0) {
                FMemory::Free();
                plVar17 = local_850;
                plVar13 = local_858;
              }
            }
            plVar5 = local_798;
            if (local_798 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_798 + 1;
              lVar10 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_798)(local_798);
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
            plVar17 = plVar17 + 1;
            param_3 = local_848;
            param_2 = local_810;
            local_850 = plVar17;
          } while (plVar17 != plVar13);
        }
        plVar17 = *(longlong **)(param_2 + 0x308);
        plVar13 = plVar17 + *(int *)(param_2 + 0x310);
        local_858 = plVar13;
        if (plVar17 != plVar13) {
          do {
            lVar10 = *plVar17;
            if (((lVar10 != 0) && (*(longlong *)(lVar10 + 0xf0) != 0)) &&
               ((*(longlong *)(lVar10 + 0x130) == 0 ||
                (*(longlong *)(lVar10 + 0x130) == param_3[0x14b])))) {
              FText::FText(local_6f8,lVar10 + 0x30);
              cVar7 = FText::IsEmpty(local_6f8);
              if (cVar7 == '\0') {
                cVar7 = FText::IsEmpty(*(longlong *)(lVar10 + 0xf0) + 0x30);
                if (cVar7 == '\0') {
                  local_808[5] = 0xd;
                  local_808[4] = 0;
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_808 + 4,0);
                  FGenericPlatformString::Memcpy(local_808[4],L"{0}{1}: {2}\n",0x1a);
                  plVar13 = (longlong *)FText::FText(local_3c0,local_6f8);
                  local_850 = plVar13;
                  lVar10 = FText::FText(local_3a8,*(longlong *)(lVar10 + 0xf0) + 0x30);
                  local_840 = lVar10;
                  lVar9 = FText::FText(local_390,local_828);
                  uVar8 = FText::FromString(local_500,local_808 + 4);
                  puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_468,uVar8);
                  local_1f8[0] = 4;
                  FText::FText(local_1e8,lVar9);
                  local_1d0[0] = '\x01';
                  local_1c8 = 4;
                  FText::FText(local_1b8,lVar10);
                  local_1a0 = 1;
                  local_198 = 4;
                  FText::FText(local_188,plVar13);
                  local_838 = local_1f8;
                  local_170 = 1;
                  puStack_830 = local_168;
                  local_758 = *puVar12;
                  local_750 = puVar12[1];
                  if (local_750 != 0) {
                    LOCK();
                    *(int *)(local_750 + 8) = *(int *)(local_750 + 8) + 1;
                    UNLOCK();
                  }
                  local_698 = (ulonglong *)local_838;
                  uStack_690 = puStack_830;
                  uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                          TArray<FFormatArgumentValue,FDefaultAllocator>(local_688,&local_698);
                  uVar8 = FText::Format(local_518,&local_758,uVar8);
                  FText::FText(local_630,uVar8);
                  plVar13 = local_510;
                  if (local_510 != (longlong *)0x0) {
                    LOCK();
                    plVar5 = local_510 + 1;
                    lVar10 = *plVar5;
                    *(int *)plVar5 = (int)*plVar5 + -1;
                    UNLOCK();
                    if ((int)lVar10 == 1) {
                      (**(code **)*local_510)(local_510);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar13 + 0xc);
                      iVar4 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar4 == 1) {
                        (**(code **)(*plVar13 + 8))(plVar13,1);
                      }
                    }
                  }
                  TArray<FFormatArgumentValue,FDefaultAllocator>::
                  ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_688);
                  lVar10 = 3;
                  pcVar18 = local_140;
                  do {
                    lVar10 = lVar10 + -1;
                    pcVar2 = pcVar18 + -0x30;
                    if (*pcVar2 != '\0') {
                      *pcVar2 = '\0';
                      plVar13 = *(longlong **)(pcVar18 + -0x40);
                      if (plVar13 != (longlong *)0x0) {
                        LOCK();
                        plVar5 = plVar13 + 1;
                        lVar11 = *plVar5;
                        *(int *)plVar5 = (int)*plVar5 + -1;
                        UNLOCK();
                        if ((int)lVar11 == 1) {
                          (**(code **)*plVar13)(plVar13);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar13 + 0xc);
                          iVar4 = *piVar1;
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (iVar4 == 1) {
                            (**(code **)(*plVar13 + 8))(plVar13,1);
                          }
                        }
                      }
                    }
                    pcVar18 = pcVar2;
                  } while (lVar10 != 0);
                  plVar13 = (longlong *)puVar12[1];
                  if (plVar13 != (longlong *)0x0) {
                    LOCK();
                    plVar5 = plVar13 + 1;
                    lVar10 = *plVar5;
                    *(int *)plVar5 = (int)*plVar5 + -1;
                    UNLOCK();
                    if ((int)lVar10 == 1) {
                      (**(code **)*plVar13)(plVar13);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar13 + 0xc);
                      iVar4 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar4 == 1) {
                        (**(code **)(*plVar13 + 8))(plVar13,1);
                      }
                    }
                  }
                  plVar13 = *(longlong **)(lVar9 + 8);
                  if (plVar13 != (longlong *)0x0) {
                    LOCK();
                    plVar5 = plVar13 + 1;
                    lVar10 = *plVar5;
                    *(int *)plVar5 = (int)*plVar5 + -1;
                    UNLOCK();
                    if ((int)lVar10 == 1) {
                      (**(code **)*plVar13)(plVar13);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar13 + 0xc);
                      iVar4 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar4 == 1) {
                        (**(code **)(*plVar13 + 8))(plVar13,1);
                      }
                    }
                  }
                  plVar13 = *(longlong **)(local_840 + 8);
                  if (plVar13 != (longlong *)0x0) {
                    LOCK();
                    plVar5 = plVar13 + 1;
                    lVar10 = *plVar5;
                    *(int *)plVar5 = (int)*plVar5 + -1;
                    UNLOCK();
                    if ((int)lVar10 == 1) {
                      (**(code **)*plVar13)(plVar13);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar13 + 0xc);
                      iVar4 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar4 == 1) {
                        (**(code **)(*plVar13 + 8))(plVar13,1);
                      }
                    }
                  }
                  plVar13 = (longlong *)local_850[1];
                  if (plVar13 != (longlong *)0x0) {
                    LOCK();
                    plVar5 = plVar13 + 1;
                    lVar10 = *plVar5;
                    *(int *)plVar5 = (int)*plVar5 + -1;
                    UNLOCK();
                    if ((int)lVar10 == 1) {
                      (**(code **)*plVar13)(plVar13);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar13 + 0xc);
                      iVar4 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar4 == 1) {
                        (**(code **)(*plVar13 + 8))(plVar13,1);
                      }
                    }
                  }
                  FText::operator=(local_828,local_630);
                  plVar13 = local_628;
                  if (local_628 != (longlong *)0x0) {
                    LOCK();
                    plVar5 = local_628 + 1;
                    lVar10 = *plVar5;
                    *(int *)plVar5 = (int)*plVar5 + -1;
                    UNLOCK();
                    if ((int)lVar10 == 1) {
                      (**(code **)*local_628)(local_628);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar13 + 0xc);
                      iVar4 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar4 == 1) {
                        (**(code **)(*plVar13 + 8))(plVar13,1);
                      }
                    }
                  }
                  plVar13 = local_4f8;
                  if (local_4f8 != (longlong *)0x0) {
                    LOCK();
                    plVar5 = local_4f8 + 1;
                    lVar10 = *plVar5;
                    *(int *)plVar5 = (int)*plVar5 + -1;
                    UNLOCK();
                    if ((int)lVar10 == 1) {
                      (**(code **)*local_4f8)(local_4f8);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar13 + 0xc);
                      iVar4 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar4 == 1) {
                        (**(code **)(*plVar13 + 8))(plVar13,1);
                      }
                    }
                  }
                  plVar13 = local_858;
                  if (local_808[4] != 0) {
                    FMemory::Free();
                    plVar13 = local_858;
                  }
                }
              }
              plVar5 = local_6f0;
              if (local_6f0 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_6f0 + 1;
                lVar10 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*local_6f0)(local_6f0);
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
            plVar17 = plVar17 + 1;
            param_3 = local_848;
            param_2 = local_810;
          } while (plVar17 != plVar13);
        }
        plVar17 = *(longlong **)(param_2 + 0x318);
        plVar13 = plVar17 + *(int *)(param_2 + 800);
        local_848 = plVar13;
        if (plVar17 != plVar13) {
          do {
            lVar10 = *plVar17;
            if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0xf0) != 0)) {
              FText::FText(local_728,lVar10 + 0x30);
              cVar7 = FText::IsEmpty(local_728);
              if (cVar7 == '\0') {
                local_808[7] = 0xd;
                local_808[6] = 0;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_808 + 6,0);
                FGenericPlatformString::Memcpy(local_808[6],L"{0}{1}: {2}\n",0x1a);
                plVar13 = (longlong *)FText::FText(local_378,local_728);
                local_858 = plVar13;
                lVar10 = FText::FText(local_360,*(longlong *)(lVar10 + 0xf0) + 0x30);
                local_840 = lVar10;
                lVar9 = FText::FText(local_348,local_828);
                uVar8 = FText::FromString(local_4d0,local_808 + 6);
                puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_458,uVar8);
                local_168[0]._0_4_ = 4;
                FText::FText(local_158,lVar9);
                local_140[0] = '\x01';
                local_138 = 4;
                FText::FText(local_128,lVar10);
                local_110 = 1;
                local_108 = 4;
                FText::FText(local_f8,plVar13);
                local_838 = (undefined4 *)local_168;
                local_e0 = 1;
                puStack_830 = local_d8;
                local_748 = *puVar12;
                local_740 = puVar12[1];
                if (local_740 != 0) {
                  LOCK();
                  *(int *)(local_740 + 8) = *(int *)(local_740 + 8) + 1;
                  UNLOCK();
                }
                local_678 = (ulonglong *)local_838;
                uStack_670 = puStack_830;
                uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                        TArray<FFormatArgumentValue,FDefaultAllocator>(local_668,&local_678);
                uVar8 = FText::Format(local_4e8,&local_748,uVar8);
                FText::FText(local_618,uVar8);
                plVar13 = local_4e0;
                if (local_4e0 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = local_4e0 + 1;
                  lVar10 = *plVar5;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*local_4e0)(local_4e0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                TArray<FFormatArgumentValue,FDefaultAllocator>::
                ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_668);
                lVar10 = 3;
                pcVar18 = local_b0;
                do {
                  lVar10 = lVar10 + -1;
                  pcVar2 = pcVar18 + -0x30;
                  if (*pcVar2 != '\0') {
                    *pcVar2 = '\0';
                    plVar13 = *(longlong **)(pcVar18 + -0x40);
                    if (plVar13 != (longlong *)0x0) {
                      LOCK();
                      plVar5 = plVar13 + 1;
                      lVar11 = *plVar5;
                      *(int *)plVar5 = (int)*plVar5 + -1;
                      UNLOCK();
                      if ((int)lVar11 == 1) {
                        (**(code **)*plVar13)(plVar13);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar13 + 0xc);
                        iVar4 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar4 == 1) {
                          (**(code **)(*plVar13 + 8))(plVar13,1);
                        }
                      }
                    }
                  }
                  pcVar18 = pcVar2;
                } while (lVar10 != 0);
                plVar13 = (longlong *)puVar12[1];
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = plVar13 + 1;
                  lVar10 = *plVar5;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*plVar13)(plVar13);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                plVar13 = *(longlong **)(lVar9 + 8);
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = plVar13 + 1;
                  lVar10 = *plVar5;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*plVar13)(plVar13);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                plVar13 = *(longlong **)(local_840 + 8);
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = plVar13 + 1;
                  lVar10 = *plVar5;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*plVar13)(plVar13);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                plVar13 = (longlong *)local_858[1];
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = plVar13 + 1;
                  lVar10 = *plVar5;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*plVar13)(plVar13);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                FText::operator=(local_828,local_618);
                plVar13 = local_610;
                if (local_610 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = local_610 + 1;
                  lVar10 = *plVar5;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*local_610)(local_610);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                plVar13 = local_4c8;
                if (local_4c8 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = local_4c8 + 1;
                  lVar10 = *plVar5;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*local_4c8)(local_4c8);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                plVar13 = local_848;
                if (local_808[6] != 0) {
                  FMemory::Free();
                  plVar13 = local_848;
                }
              }
              plVar5 = local_720;
              if (local_720 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_720 + 1;
                lVar10 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*local_720)(local_720);
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
            plVar17 = plVar17 + 1;
            param_2 = local_810;
          } while (plVar17 != plVar13);
        }
        plVar17 = *(longlong **)(param_2 + 0x328);
        plVar13 = plVar17 + *(int *)(param_2 + 0x330);
        param_1 = local_808[0xc];
        local_848 = plVar13;
        if (plVar17 != plVar13) {
          do {
            lVar10 = *plVar17;
            if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0xf0) != 0)) {
              FText::FText(local_710,lVar10 + 0x30);
              cVar7 = FText::IsEmpty(local_710);
              if (cVar7 == '\0') {
                local_808[9] = 0xd;
                local_808[8] = 0;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_808 + 8,0);
                FGenericPlatformString::Memcpy(local_808[8],L"{0}{1}: {2}\n",0x1a);
                uVar8 = FText::FText(local_330,local_710);
                uVar14 = FText::FText(local_318,*(longlong *)(lVar10 + 0xf0) + 0x30);
                lVar10 = FText::FText(local_300,local_828);
                local_840 = lVar10;
                uVar15 = FText::FromString(local_4a0,local_808 + 8);
                puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_448,uVar15);
                local_d8[0]._0_4_ = 4;
                FText::FText(local_c8,lVar10);
                local_b0[0] = '\x01';
                local_a8 = 4;
                FText::FText(local_98,uVar14);
                local_80 = 1;
                local_78 = 4;
                FText::FText(local_68,uVar8);
                local_838 = (undefined4 *)local_d8;
                local_50 = 1;
                puStack_830 = local_48;
                local_738 = *puVar12;
                local_730 = puVar12[1];
                if (local_730 != 0) {
                  LOCK();
                  *(int *)(local_730 + 8) = *(int *)(local_730 + 8) + 1;
                  UNLOCK();
                }
                local_658 = (ulonglong *)local_838;
                uStack_650 = puStack_830;
                uVar15 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                         TArray<FFormatArgumentValue,FDefaultAllocator>(local_5e8,&local_658);
                uVar15 = FText::Format(local_4b8,&local_738,uVar15);
                FText::FText(local_600,uVar15);
                plVar13 = local_4b0;
                if (local_4b0 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = local_4b0 + 1;
                  lVar10 = *plVar5;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*local_4b0)(local_4b0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                TArray<FFormatArgumentValue,FDefaultAllocator>::
                ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_5e8);
                lVar10 = 3;
                puVar19 = &stack0xffffffffffffffc8;
                do {
                  puVar19 = puVar19 + -0x30;
                  TOptional<FExpressionError>::Reset(puVar19);
                  lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(puVar12);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_840)
                ;
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar14);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar8);
                FText::operator=(local_828,local_600);
                plVar13 = local_5f8;
                if (local_5f8 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = local_5f8 + 1;
                  lVar10 = *plVar5;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*local_5f8)(local_5f8);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                plVar13 = local_498;
                if (local_498 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = local_498 + 1;
                  lVar10 = *plVar5;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*local_498)(local_498);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                plVar13 = local_848;
                if (local_808[8] != 0) {
                  FMemory::Free();
                  plVar13 = local_848;
                }
              }
              plVar5 = local_708;
              if (local_708 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_708 + 1;
                lVar10 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*local_708)(local_708);
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
            plVar17 = plVar17 + 1;
            param_1 = local_808[0xc];
          } while (plVar17 != plVar13);
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x180) + 0x2b0))
                (*(longlong **)(param_1 + 0x180),local_828,1,0);
      if (local_820 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_820 + 1;
        lVar10 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_820)(local_820);
          LOCK();
          piVar1 = (int *)((longlong)local_820 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_820 + 8))(local_820,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140f64d00 FUN_140f64d00 body=290 status=ok
// SIG undefined FUN_140f64d00(void)

void FUN_140f64d00(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined4 local_148;
  undefined4 local_144;
  longlong *local_138;
  longlong local_128;
  undefined1 local_118 [272];
  
  FUN_140ed0240(local_118);
  FUN_1411c87b0(&local_148);
  uVar5 = 0;
  plVar6 = *(longlong **)(param_1 + 0x180);
  uVar7 = (longlong)*(int *)(param_1 + 0x188) & 0x1fffffffffffffff;
  if (plVar6 + *(int *)(param_1 + 0x188) < plVar6) {
    uVar7 = uVar5;
  }
  if (uVar7 != 0) {
    do {
      plVar3 = (longlong *)*plVar6;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x358))(plVar3,&local_148,1);
        (**(code **)(*plVar3 + 0x330))(plVar3,local_118);
      }
      plVar6 = plVar6 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar7);
  }
  if (local_128 != 0) {
    LOCK();
    piVar1 = (int *)(local_128 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_138 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  FUN_1416f8340(local_144);
  FUN_1416f8340(local_148);
  FUN_140e9c360(local_118);
  return;
}



// FUNCTION 140f64e30 FUN_140f64e30 body=694 status=ok
// SIG undefined FUN_140f64e30(void)

void FUN_140f64e30(longlong *param_1,longlong param_2)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined1 local_res18 [16];
  longlong local_68 [6];
  
  local_68[1] = 9;
  uVar6 = 0;
  local_68[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy(local_68[0],L"Positive",0x12);
  local_68[2] = 0;
  local_68[3] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  lVar5 = local_68[2];
  FGenericPlatformString::Memcpy(local_68[2],L"Neutral",0x10);
  local_68[4] = 0;
  local_68[5] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 4,0);
  lVar9 = local_68[4];
  FGenericPlatformString::Memcpy(local_68[4],L"Negative",0x12);
  SRWLock = (PSRWLOCK)(param_1 + 0x29);
  AcquireSRWLockExclusive(SRWLock);
  param_1[0x2a] = param_2;
  ReleaseSRWLockExclusive(SRWLock);
  AcquireSRWLockShared(SRWLock);
  local_res8[0] = 0xffffffff;
  if (param_1[0x28] != 0) {
    FUN_14170c210(local_res8);
  }
  local_res10[0] = 0xffffffff;
  if (param_1[0x2a] != 0) {
    FUN_14170c210(local_res10);
  }
  ReleaseSRWLockShared(SRWLock);
  lVar1 = FUN_1416f8720(local_res10[0]);
  if ((lVar1 == 0) || (lVar1 = FUN_1416f8720(local_res8[0]), lVar1 == 0)) {
    AcquireSRWLockExclusive(SRWLock);
    param_1[0x2a] = 0;
    ReleaseSRWLockExclusive(SRWLock);
  }
  else {
    plVar2 = (longlong *)FUN_1416f8720(local_res8[0]);
    uVar3 = FWeakObjectPtr::Get(param_1 + 3);
    uVar3 = (**(code **)(*plVar2 + 0x530))(plVar2,uVar3);
    plVar2 = (longlong *)FUN_1416f8720(local_res10[0]);
    uVar4 = FWeakObjectPtr::Get(param_1 + 3);
    uVar4 = (**(code **)(*plVar2 + 0x530))(plVar2,uVar4);
    FUN_142de6390(uVar4,uVar3);
    FName::FName(local_res18,L"Primary",1);
    plVar2 = (longlong *)FUN_142dec810(uVar3,local_res18);
    lVar5 = FUN_1416f8720(local_res8[0]);
    uVar8 = uVar6;
    uVar11 = uVar6;
    if (*(longlong *)(lVar5 + 0x208) != 0) {
      FUN_1416f8720(local_res8[0]);
    }
    do {
      uVar7 = 0;
      iVar10 = (int)uVar11;
      if (-1 < (longlong)uVar6) {
        if (iVar10 < (int)plVar2[1]) {
          uVar7 = *(undefined1 *)(uVar8 + 0x3c + *plVar2);
        }
        if (-1 < (longlong)uVar6) {
          if ((iVar10 < (int)param_1[0x22]) &&
             (lVar5 = *(longlong *)(param_1[0x21] + uVar6 * 8), lVar5 != 0)) {
            FUN_140f8d470(lVar5,uVar7);
          }
          if (((-1 < (longlong)uVar6) && (iVar10 < (int)param_1[0x24])) &&
             (lVar5 = *(longlong *)(param_1[0x23] + uVar6 * 8), lVar5 != 0)) {
            FUN_140f8d470(lVar5,uVar7);
          }
        }
      }
      uVar6 = uVar6 + 1;
      uVar8 = uVar8 + 0x40;
      lVar5 = local_68[2];
      lVar9 = local_68[4];
      uVar11 = (ulonglong)(iVar10 + 1);
    } while ((longlong)uVar8 < 0x180);
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_1416f8340(local_res10[0]);
  FUN_1416f8340(local_res8[0]);
  if (lVar9 != 0) {
    FMemory::Free(lVar9);
  }
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  if (local_68[0] != 0) {
    FMemory::Free(local_68[0]);
  }
  return;
}



// FUNCTION 140f650f0 FUN_140f650f0 body=602 status=ok
// SIG undefined FUN_140f650f0(void)

void FUN_140f650f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 local_res8 [2];
  undefined1 local_res18 [16];
  
  FUN_140f64e30();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x148));
  local_res8[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_14170c210(local_res8);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x148));
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0x90);
  lVar3 = FUN_1416f8720(local_res8[0]);
  uVar9 = 0;
  uVar8 = uVar9;
  if ((lVar3 != 0) && (lVar3 = FUN_1416f8720(local_res8[0]), *(longlong *)(lVar3 + 0x208) != 0)) {
    lVar3 = FUN_1416f8720(local_res8[0]);
    uVar8 = *(ulonglong *)(*(longlong *)(lVar3 + 0x208) + 0x1d8);
  }
  if (((((lVar1 != 0) && (uVar8 != 0)) && (lVar3 = FWeakObjectPtr::Get(param_1 + 0x18), lVar3 != 0))
      && ((*(ulonglong *)(lVar1 + 0x490) == 0 || (uVar8 != *(ulonglong *)(lVar1 + 0x490))))) &&
     ((*(ulonglong *)(lVar1 + 0x498) != 0 && (uVar8 == *(ulonglong *)(lVar1 + 0x498))))) {
    plVar4 = (longlong *)FUN_1416f8720(local_res8[0]);
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x18);
    uVar5 = (**(code **)(*plVar4 + 0x530))(plVar4,uVar5);
    if (param_2 != (longlong *)0x0) {
      uVar6 = FWeakObjectPtr::Get(param_1 + 0x18);
      uVar6 = (**(code **)(*param_2 + 0x530))(param_2,uVar6);
      FUN_142de6390(uVar6,uVar5);
    }
    FName::FName(local_res18,L"Primary",1);
    plVar4 = (longlong *)FUN_142dec810(uVar5,local_res18);
    uVar8 = uVar9;
    uVar10 = uVar9;
    uVar12 = uVar9;
    if (0 < (int)plVar4[1]) {
      do {
        lVar1 = *(longlong *)(uVar9 + *plVar4);
        if (lVar1 != 0) {
          lVar3 = UTextureRenderTarget2D::GetPrivateStaticClass();
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
            if (((longlong)uVar10 < 0) || (*(int *)(param_1 + 0x1a8) <= (int)uVar8)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              uVar8 = (ulonglong)((int)uVar8 + 1);
              lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + uVar10 * 8);
              uVar10 = uVar10 + 1;
              if (lVar1 != 0) {
                if (param_2 == (longlong *)0x0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = *(undefined1 *)(*plVar4 + 0x3c + uVar9);
                }
                FUN_140f8d550(lVar1,uVar7);
              }
            }
          }
        }
        uVar11 = (int)uVar12 + 1;
        uVar9 = uVar9 + 0x40;
        uVar12 = (ulonglong)uVar11;
      } while ((int)uVar11 < (int)plVar4[1]);
    }
  }
  FUN_1416f8340(local_res8[0]);
  return;
}



// FUNCTION 140f65350 FUN_140f65350 body=1160 status=ok
// SIG undefined FUN_140f65350(void)

void FUN_140f65350(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  lVar2 = FUN_1410833d0();
  if (lVar2 == 0) {
    return;
  }
  if (lVar2 == -0x6e0) {
    return;
  }
  if (*(char *)(param_1 + 0x7d8) == '\0') {
    return;
  }
  if ((*(char *)(lVar2 + 0x778) == '\x02') || (lVar2 = *(longlong *)(lVar2 + 0x748), lVar2 == 0)) {
LAB_140f653d0:
    if (*(char *)(param_1 + 0x7e0) != '\0') {
      return;
    }
  }
  else {
    lVar3 = FUN_1428dfc70();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140f653d0;
  }
  *(undefined1 *)(param_1 + 0x7d8) = 0;
  switch(*(undefined4 *)(param_1 + 0x7dc)) {
  case 1:
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x848);
    if (lVar2 == 0) {
LAB_140f6545e:
      lVar2 = 0;
    }
    else {
      lVar3 = FUN_14149b100();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140f6545e;
    }
    lVar3 = FUN_141083310(param_1);
    if (lVar3 == 0) {
LAB_140f654a7:
      lVar3 = 0;
    }
    else {
      lVar4 = FUN_141404840();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140f654a7;
    }
    if ((lVar2 != 0) && (lVar3 != 0)) {
      FUN_140e62a60(lVar3,lVar2,0);
    }
    break;
  case 2:
  case 7:
    break;
  case 3:
    lVar2 = FUN_140f578e0(param_1);
    if ((lVar2 != 0) && (lVar3 = FUN_140e21bd0(lVar2), lVar3 != 0)) {
      uVar5 = FUN_140e21bd0(lVar2);
      FUN_140e36cb0(uVar5,*(undefined8 *)(param_1 + 0x830));
    }
    break;
  case 4:
    lVar2 = FUN_141083310(param_1);
    uVar8 = 0;
    uVar6 = uVar8;
    if (lVar2 != 0) {
      lVar3 = FUN_141404840();
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
        uVar6 = *(ulonglong *)(lVar2 + 0x2298);
      }
    }
    if ((uVar6 != 0) && (*(longlong *)(param_1 + 0x830) != 0)) {
      do {
        local_38 = 0;
        local_30 = 0;
        local_48 = 0;
        local_40 = 0;
        FUN_142e43820(uVar6,uVar8,&local_48,&local_38,1,1);
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while ((int)uVar7 < 3);
      FUN_142d271f0(uVar6,*(undefined8 *)(param_1 + 0x830),0);
    }
    break;
  case 5:
    lVar2 = FUN_141083310(param_1);
    if (lVar2 == 0) {
LAB_140f65676:
      lVar2 = 0;
    }
    else {
      lVar3 = FUN_141404840();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140f65676;
      lVar2 = *(longlong *)(lVar2 + 0x2298);
    }
    if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x830) != 0)) {
      FUN_142d271f0(lVar2,*(longlong *)(param_1 + 0x830),0);
    }
    break;
  case 6:
    lVar2 = FUN_141083310(param_1);
    if (lVar2 != 0) {
      lVar3 = FUN_141404840();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) &&
         (lVar2 = (**(code **)(*(longlong *)(lVar2 + 0xd88) + 0xf0))((longlong *)(lVar2 + 0xd88),0),
         lVar2 != 0)) {
        lVar3 = FUN_14149b100();
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
          *(undefined8 *)(param_1 + 0x7a0) = *(undefined8 *)(lVar2 + 0x930);
          FUN_14127e590(lVar2,*(undefined8 *)(param_1 + 0x840));
          *(undefined8 *)(param_1 + 0x7a8) = *(undefined8 *)(param_1 + 0x840);
        }
      }
    }
    break;
  case 8:
    lVar2 = FUN_141083310(param_1);
    if (lVar2 != 0) {
      lVar3 = FUN_141404840();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(longlong *)(param_1 + 0x830) != 0)) {
        FUN_140e58390(lVar2);
      }
    }
    break;
  default:
    goto switchD_140f65410_default;
  }
switchD_140f65410_default:
  return;
}



// FUNCTION 140f65800 FUN_140f65800 body=111 status=ok
// SIG undefined FUN_140f65800(void)

undefined8 * FUN_140f65800(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144631620;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    FText::FText(puVar1 + 3,param_1 + 0x18);
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f65870 FUN_140f65870 body=129 status=ok
// SIG undefined FUN_140f65870(void)

undefined8 * FUN_140f65870(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144631650;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_1 + 0x20);
    *(undefined8 *)((longlong)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
    *(undefined8 *)((longlong)puVar1 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
    *(undefined8 *)((longlong)puVar1 + 0x34) = *(undefined8 *)(param_1 + 0x34);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f65900 FUN_140f65900 body=116 status=ok
// SIG undefined FUN_140f65900(void)

void FUN_140f65900(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1446315f0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    puVar2[10] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
    puVar2[0xc] = uVar1;
    puVar2[0xd] = *(undefined8 *)(param_1 + 0x68);
    return;
  }
  return;
}



// FUNCTION 140f65980 FUN_140f65980 body=146 status=ok
// SIG undefined FUN_140f65980(void)

undefined8 * FUN_140f65980(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144631608;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = 0;
    FUN_140f55a60(puVar1 + 2,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),0,0);
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x20));
    FUN_14170c210(puVar1 + 4,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f65a20 FUN_140f65a20 body=116 status=ok
// SIG undefined FUN_140f65a20(void)

undefined8 * FUN_140f65a20(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144631638;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f65aa0 FUN_140f65aa0 body=98 status=ok
// SIG undefined FUN_140f65aa0(void)

undefined8 * FUN_140f65aa0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144631668;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
    *(undefined1 *)((longlong)puVar1 + 0x19) = *(undefined1 *)(param_1 + 0x19);
    *(undefined1 *)((longlong)puVar1 + 0x1a) = *(undefined1 *)(param_1 + 0x1a);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140f65b10 FUN_140f65b10 body=66 status=ok
// SIG undefined FUN_140f65b10(void)

void FUN_140f65b10(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1446314d0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144631518;
  }
  return;
}



// FUNCTION 140f65b60 FUN_140f65b60 body=66 status=ok
// SIG undefined FUN_140f65b60(void)

void FUN_140f65b60(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144631440;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144631488;
  }
  return;
}



// FUNCTION 140f65bb0 FUN_140f65bb0 body=84 status=ok
// SIG undefined FUN_140f65bb0(void)

void FUN_140f65bb0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144631560;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1446315a8;
  }
  return;
}



// FUNCTION 140f65c10 FUN_140f65c10 body=177 status=ok
// SIG undefined FUN_140f65c10(void)

undefined8 FUN_140f65c10(longlong param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x240);
  if (lVar2 != 0) {
    lVar3 = AMobActorKuroko::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(lVar2 + 0x7ba) == *(char *)(param_1 + 0x2c8))) {
      if (param_3 == '\x03') {
        param_3 = '\x06';
      }
      else if (param_3 == '\x04') {
        param_3 = '\a';
      }
      else {
        param_3 = '\x05';
      }
    }
  }
  FUN_142eb2df0(param_1,param_2,param_3);
  return param_2;
}



// FUNCTION 140f65cd0 FUN_140f65cd0 body=84 status=ok
// SIG undefined FUN_140f65cd0(void)

void FUN_140f65cd0(longlong param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  FUN_142eb3860();
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x5d8) = local_res8;
  *(undefined4 *)(param_1 + 0x5dc) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x5e0) = local_res8;
  *(undefined4 *)(param_1 + 0x5e4) = local_resc;
  return;
}



// FUNCTION 140f65d30 FUN_140f65d30 body=96 status=ok
// SIG undefined FUN_140f65d30(void)

void FUN_140f65d30(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xba8) != 0) {
    FUN_1411eff10();
    FUN_1411f8450(*(undefined8 *)(param_1 + 0xba8));
    FUN_1407665e0(*(longlong *)(param_1 + 0xba8) + 0xe8,param_1);
    *(undefined8 *)(param_1 + 0xba8) = 0;
  }
  FUN_140ee38f0(param_1 + 0x9a8);
  FUN_142eb3890(param_1);
  return;
}



// FUNCTION 140f65d90 FUN_140f65d90 body=186 status=ok
// SIG undefined FUN_140f65d90(void)

void FUN_140f65d90(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  
  plVar1 = (longlong *)(param_1 + 0x7c0);
  plVar4 = (longlong *)*plVar1;
  uVar7 = (ulonglong)*(int *)(param_1 + 0x7c8);
  plVar5 = plVar4 + uVar7;
  if (plVar4 != plVar5) {
    do {
      uVar3 = 0;
      if (*plVar4 != 0) {
        uVar3 = *(undefined8 *)(*plVar4 + 0x10);
      }
      FUN_142227350(uVar3,0,1);
      if (*plVar4 != 0) {
        *(undefined8 *)(*plVar4 + 0x10) = 0;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar5);
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x7c8);
  }
  plVar5 = (longlong *)*plVar1;
  uVar6 = (uint)uVar7;
  while (uVar6 != 0) {
    puVar2 = (undefined8 *)*plVar5;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    plVar5 = plVar5 + 1;
    uVar6 = (int)uVar7 - 1;
    uVar7 = (ulonglong)uVar6;
  }
  *(undefined4 *)(param_1 + 0x7c8) = 0;
  if (*(int *)(param_1 + 0x7cc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  return;
}



// FUNCTION 140f65e50 FUN_140f65e50 body=117 status=ok
// SIG undefined FUN_140f65e50(void)

void FUN_140f65e50(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
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



// FUNCTION 140f65ed0 FUN_140f65ed0 body=234 status=ok
// SIG undefined FUN_140f65ed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f65ed0(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FWeakObjectPtr::operator=(&local_78,param_1);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_78;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_74;
  }
  local_68[0] = &LAB_140f62ab0;
  FUN_14208c260(param_1,local_68);
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f65fc0 FUN_140f65fc0 body=55 status=ok
// SIG undefined FUN_140f65fc0(void)

void FUN_140f65fc0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x170) != 0) {
    lVar1 = FUN_140f681d0();
    if (lVar1 != 0) {
      FUN_140e95f70(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140f66010 FUN_140f66010 body=130 status=ok
// SIG undefined FUN_140f66010(void)

void FUN_140f66010(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  local_10 = *(undefined4 *)(param_4 + 1);
  local_18 = *param_4;
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,&local_18,param_5);
  return;
}



// FUNCTION 140f660a0 FUN_140f660a0 body=117 status=ok
// SIG undefined FUN_140f660a0(void)

undefined8 FUN_140f660a0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = FWeakObjectPtr::Get();
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 8));
      if (lVar1 != 0) {
        plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
        uVar3 = FUN_14178ac60(plVar2,*(undefined8 *)(param_1 + 8));
        (**(code **)(*plVar2 + 0x208))(plVar2,uVar3,0);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140f66120 FUN_140f66120 body=52 status=ok
// SIG undefined FUN_140f66120(void)

undefined8 FUN_140f66120(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x170) != 0) {
    lVar1 = FUN_140f681d0();
    if (lVar1 != 0) {
      FUN_140e95f70(lVar1,param_2);
    }
  }
  return 1;
}



// FUNCTION 140f66160 FUN_140f66160 body=25 status=ok
// SIG undefined FUN_140f66160(void)

undefined1 FUN_140f66160(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_140f79530();
  }
  return 1;
}



// FUNCTION 140f66180 FUN_140f66180 body=158 status=ok
// SIG undefined FUN_140f66180(void)

bool FUN_140f66180(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    local_10 = *(undefined4 *)(param_4 + 1);
    local_18 = *param_4;
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,&local_18,param_5);
  }
  return lVar1 != 0;
}



// FUNCTION 140f66220 FUN_140f66220 body=88 status=ok
// SIG undefined FUN_140f66220(void)

undefined8 * FUN_140f66220(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = 0;
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x448);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    iVar2 = *(int *)(lVar1 + 8);
    bVar4 = iVar2 == 0;
    if (bVar4) {
      *(int *)(lVar1 + 8) = 0;
      iVar2 = 0;
    }
    UNLOCK();
    while (!bVar4) {
      LOCK();
      bVar4 = iVar2 == *(int *)(lVar1 + 8);
      if (bVar4) {
        *(int *)(lVar1 + 8) = iVar2 + 1;
      }
      UNLOCK();
      if (bVar4) {
        lVar3 = param_2[1];
        goto LAB_140f6625f;
      }
      LOCK();
      iVar2 = *(int *)(lVar1 + 8);
      bVar4 = iVar2 == 0;
      if (bVar4) {
        *(int *)(lVar1 + 8) = 0;
        iVar2 = 0;
      }
      UNLOCK();
    }
    param_2[1] = 0;
LAB_140f6625f:
    if (lVar3 != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0x440);
    }
  }
  return param_2;
}



// FUNCTION 140f66280 FUN_140f66280 body=136 status=ok
// SIG undefined FUN_140f66280(void)

float FUN_140f66280(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  if (*(longlong *)(param_1 + 0x10e0) != 0) {
    lVar2 = FUN_140e971d0();
    if (lVar2 != 0) {
      fVar3 = (float)FUN_140f664d0(param_1 + 0x1090);
      uVar1 = FUN_142708650(lVar2);
      fVar4 = (float)FUN_14271a5d0(lVar2,*(undefined4 *)(param_1 + 0x109c),uVar1);
      return fVar3 * fVar3 * (fVar4 - *(float *)(param_1 + 0x1120)) + *(float *)(param_1 + 0x1120);
    }
  }
  return 0.0;
}



// FUNCTION 140f66310 FUN_140f66310 body=53 status=ok
// SIG undefined FUN_140f66310(void)

undefined1 FUN_140f66310(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x11c0) != '\0') {
    return 5;
  }
  iVar1 = *(int *)(param_1 + 0x11b0);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x6a8))) {
    return *(undefined1 *)((longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x6a0));
  }
  return 0;
}



// FUNCTION 140f66370 FUN_140f66370 body=88 status=ok
// SIG undefined FUN_140f66370(void)

undefined8 * FUN_140f66370(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = 0;
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 600);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    iVar2 = *(int *)(lVar1 + 8);
    bVar4 = iVar2 == 0;
    if (bVar4) {
      *(int *)(lVar1 + 8) = 0;
      iVar2 = 0;
    }
    UNLOCK();
    while (!bVar4) {
      LOCK();
      bVar4 = iVar2 == *(int *)(lVar1 + 8);
      if (bVar4) {
        *(int *)(lVar1 + 8) = iVar2 + 1;
      }
      UNLOCK();
      if (bVar4) {
        lVar3 = param_2[1];
        goto LAB_140f663af;
      }
      LOCK();
      iVar2 = *(int *)(lVar1 + 8);
      bVar4 = iVar2 == 0;
      if (bVar4) {
        *(int *)(lVar1 + 8) = 0;
        iVar2 = 0;
      }
      UNLOCK();
    }
    param_2[1] = 0;
LAB_140f663af:
    if (lVar3 != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0x250);
    }
  }
  return param_2;
}



// FUNCTION 140f663d0 FUN_140f663d0 body=82 status=ok
// SIG undefined FUN_140f663d0(void)

undefined8 * FUN_140f663d0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = 0;
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    iVar2 = *(int *)(lVar1 + 8);
    bVar4 = iVar2 == 0;
    if (bVar4) {
      *(int *)(lVar1 + 8) = 0;
      iVar2 = 0;
    }
    UNLOCK();
    while (!bVar4) {
      LOCK();
      bVar4 = iVar2 == *(int *)(lVar1 + 8);
      if (bVar4) {
        *(int *)(lVar1 + 8) = iVar2 + 1;
      }
      UNLOCK();
      if (bVar4) {
        lVar3 = param_2[1];
        goto LAB_140f6640c;
      }
      LOCK();
      iVar2 = *(int *)(lVar1 + 8);
      bVar4 = iVar2 == 0;
      if (bVar4) {
        *(int *)(lVar1 + 8) = 0;
        iVar2 = 0;
      }
      UNLOCK();
    }
    param_2[1] = 0;
LAB_140f6640c:
    if (lVar3 != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0x40);
    }
  }
  return param_2;
}



// FUNCTION 140f66430 FUN_140f66430 body=160 status=ok
// SIG undefined FUN_140f66430(void)

undefined8 FUN_140f66430(longlong param_1,int *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [32];
  
  if (*(longlong *)(param_1 + 0x680) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x708);
    plVar1 = plVar3 + *(int *)(param_1 + 0x710);
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      lVar2 = *plVar3;
      if ((lVar2 != 0) &&
         (((*(int *)(lVar2 + 0x1d4) == param_2[2] && *(int *)(lVar2 + 0x1d8) == param_2[3]) &&
          *(int *)(lVar2 + 0x1d0) == param_2[1]) && *(int *)(lVar2 + 0x1cc) == *param_2)) {
        puVar4 = (undefined8 *)FUN_142ef62c0(*(longlong *)(param_1 + 0x680),local_res8,lVar2 + 400);
        *param_3 = *puVar4;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140f664d0 FUN_140f664d0 body=107 status=ok
// SIG undefined FUN_140f664d0(void)

float FUN_140f664d0(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  if ((*(longlong **)(param_1 + 0x50) != (longlong *)0x0) &&
     (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x148))(), lVar1 != 0)) {
    fVar2 = (*(float *)(lVar1 + 0x798) - *(float *)(param_1 + 0x94)) / *(float *)(param_1 + 0x30);
    if (fVar2 < 0.0) {
      return 0.0;
    }
    if (fVar2 < 1.0) {
      return fVar2;
    }
  }
  return 1.0;
}



// FUNCTION 140f66540 FUN_140f66540 body=88 status=ok
// SIG undefined FUN_140f66540(void)

undefined8 * FUN_140f66540(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = 0;
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x518);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    iVar2 = *(int *)(lVar1 + 8);
    bVar4 = iVar2 == 0;
    if (bVar4) {
      *(int *)(lVar1 + 8) = 0;
      iVar2 = 0;
    }
    UNLOCK();
    while (!bVar4) {
      LOCK();
      bVar4 = iVar2 == *(int *)(lVar1 + 8);
      if (bVar4) {
        *(int *)(lVar1 + 8) = iVar2 + 1;
      }
      UNLOCK();
      if (bVar4) {
        lVar3 = param_2[1];
        goto LAB_140f6657f;
      }
      LOCK();
      iVar2 = *(int *)(lVar1 + 8);
      bVar4 = iVar2 == 0;
      if (bVar4) {
        *(int *)(lVar1 + 8) = 0;
        iVar2 = 0;
      }
      UNLOCK();
    }
    param_2[1] = 0;
LAB_140f6657f:
    if (lVar3 != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0x510);
    }
  }
  return param_2;
}



// FUNCTION 140f665a0 FUN_140f665a0 body=688 status=ok
// SIG undefined FUN_140f665a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_140f665a0(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  void *_Src;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 auStack_748 [40];
  undefined4 local_720;
  undefined4 local_71c;
  longlong *local_710;
  longlong local_700;
  undefined4 local_6f8;
  undefined4 local_6f4;
  longlong *local_6e8;
  longlong local_6d8;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined4 local_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 local_688;
  void *local_680;
  int local_678;
  undefined4 local_674;
  undefined4 local_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined1 local_658 [1496];
  longlong local_80;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_748;
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x5d4);
  lVar9 = 0;
  if (lVar5 != 0) {
    lVar6 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140f66629;
  }
  lVar5 = lVar9;
LAB_140f66629:
  puVar7 = (undefined8 *)FUN_1411e6870(lVar5,param_4);
  local_6c8 = *puVar7;
  uStack_6c0 = puVar7[1];
  local_6b8 = puVar7[2];
  uStack_6b0 = puVar7[3];
  local_6a8 = *(undefined4 *)(puVar7 + 4);
  uStack_6a4 = *(undefined4 *)((longlong)puVar7 + 0x24);
  uStack_6a0 = *(undefined4 *)(puVar7 + 5);
  uStack_69c = *(undefined4 *)((longlong)puVar7 + 0x2c);
  local_698 = *(undefined4 *)(puVar7 + 6);
  uStack_694 = *(undefined4 *)((longlong)puVar7 + 0x34);
  uStack_690 = *(undefined4 *)(puVar7 + 7);
  uStack_68c = *(undefined4 *)((longlong)puVar7 + 0x3c);
  local_688 = *(undefined4 *)(puVar7 + 8);
  local_680 = (void *)0x0;
  local_678 = *(int *)(puVar7 + 10);
  lVar5 = (longlong)local_678;
  _Src = (void *)puVar7[9];
  bVar4 = false;
  if (local_678 == 0) {
    local_674 = 0;
  }
  else {
    FUN_1409b7fb0(&local_680,local_678,0);
    _guard_xfg_dispatch_icall_nop(local_680,_Src,lVar5 * 0x14);
  }
  local_670 = *(undefined4 *)(puVar7 + 0xb);
  uStack_66c = *(undefined4 *)((longlong)puVar7 + 0x5c);
  uStack_668 = *(undefined4 *)(puVar7 + 0xc);
  uStack_664 = *(undefined4 *)((longlong)puVar7 + 100);
  FUN_140a25aa0(local_658,puVar7 + 0xe);
  if ((param_3 == 0) || (*(longlong *)(param_1 + 0xba8) == 0)) {
    puVar8 = (undefined4 *)FUN_1411c87b0(&local_720);
    lVar9 = 2;
  }
  else {
    puVar8 = (undefined4 *)
             FUN_1411e2a40(*(longlong *)(param_1 + 0xba8),&local_6f8,param_3,&local_6c8);
    bVar4 = true;
  }
  *param_2 = *puVar8;
  *puVar8 = 0xffffffff;
  param_2[1] = puVar8[1];
  puVar8[1] = 0xffffffff;
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(puVar8 + 2);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar8 + 4);
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  param_2[6] = puVar8[6];
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(puVar8 + 8);
  *(undefined8 *)(puVar8 + 8) = 0;
  if ((int)lVar9 != 0) {
    if (local_700 != 0) {
      LOCK();
      piVar1 = (int *)(local_700 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    if (local_710 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_710 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_710)(local_710);
        LOCK();
        piVar1 = (int *)((longlong)local_710 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_710 + 8))(local_710,1);
        }
      }
    }
    FUN_1416f8340(local_71c);
    FUN_1416f8340(local_720);
  }
  if (bVar4) {
    if (local_6d8 != 0) {
      LOCK();
      piVar1 = (int *)(local_6d8 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    if (local_6e8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_6e8 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_6e8)(local_6e8);
        LOCK();
        piVar1 = (int *)((longlong)local_6e8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_6e8 + 8))(local_6e8,1);
        }
      }
    }
    FUN_1416f8340(local_6f4);
    FUN_1416f8340(local_6f8);
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  if (local_680 != (void *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140f66850 FUN_140f66850 body=88 status=ok
// SIG undefined FUN_140f66850(void)

undefined8 * FUN_140f66850(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = 0;
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x310);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    iVar2 = *(int *)(lVar1 + 8);
    bVar4 = iVar2 == 0;
    if (bVar4) {
      *(int *)(lVar1 + 8) = 0;
      iVar2 = 0;
    }
    UNLOCK();
    while (!bVar4) {
      LOCK();
      bVar4 = iVar2 == *(int *)(lVar1 + 8);
      if (bVar4) {
        *(int *)(lVar1 + 8) = iVar2 + 1;
      }
      UNLOCK();
      if (bVar4) {
        lVar3 = param_2[1];
        goto LAB_140f6688f;
      }
      LOCK();
      iVar2 = *(int *)(lVar1 + 8);
      bVar4 = iVar2 == 0;
      if (bVar4) {
        *(int *)(lVar1 + 8) = 0;
        iVar2 = 0;
      }
      UNLOCK();
    }
    param_2[1] = 0;
LAB_140f6688f:
    if (lVar3 != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0x308);
    }
  }
  return param_2;
}



// FUNCTION 140f668b0 FUN_140f668b0 body=88 status=ok
// SIG undefined FUN_140f668b0(void)

undefined8 * FUN_140f668b0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = 0;
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x390);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    iVar2 = *(int *)(lVar1 + 8);
    bVar4 = iVar2 == 0;
    if (bVar4) {
      *(int *)(lVar1 + 8) = 0;
      iVar2 = 0;
    }
    UNLOCK();
    while (!bVar4) {
      LOCK();
      bVar4 = iVar2 == *(int *)(lVar1 + 8);
      if (bVar4) {
        *(int *)(lVar1 + 8) = iVar2 + 1;
      }
      UNLOCK();
      if (bVar4) {
        lVar3 = param_2[1];
        goto LAB_140f668ef;
      }
      LOCK();
      iVar2 = *(int *)(lVar1 + 8);
      bVar4 = iVar2 == 0;
      if (bVar4) {
        *(int *)(lVar1 + 8) = 0;
        iVar2 = 0;
      }
      UNLOCK();
    }
    param_2[1] = 0;
LAB_140f668ef:
    if (lVar3 != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0x388);
    }
  }
  return param_2;
}



// FUNCTION 140f66910 FUN_140f66910 body=88 status=ok
// SIG undefined FUN_140f66910(void)

undefined8 * FUN_140f66910(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = 0;
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0xf0);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    iVar2 = *(int *)(lVar1 + 8);
    bVar4 = iVar2 == 0;
    if (bVar4) {
      *(int *)(lVar1 + 8) = 0;
      iVar2 = 0;
    }
    UNLOCK();
    while (!bVar4) {
      LOCK();
      bVar4 = iVar2 == *(int *)(lVar1 + 8);
      if (bVar4) {
        *(int *)(lVar1 + 8) = iVar2 + 1;
      }
      UNLOCK();
      if (bVar4) {
        lVar3 = param_2[1];
        goto LAB_140f6694f;
      }
      LOCK();
      iVar2 = *(int *)(lVar1 + 8);
      bVar4 = iVar2 == 0;
      if (bVar4) {
        *(int *)(lVar1 + 8) = 0;
        iVar2 = 0;
      }
      UNLOCK();
    }
    param_2[1] = 0;
LAB_140f6694f:
    if (lVar3 != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0xe8);
    }
  }
  return param_2;
}



// FUNCTION 140f66970 FUN_140f66970 body=125 status=ok
// SIG undefined FUN_140f66970(void)

undefined8 FUN_140f66970(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  local_18[1] = 6;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],&DAT_143f61010,0xc);
  plVar1 = local_18;
  if (1 < *(int *)(param_1 + 0x100)) {
    plVar1 = (longlong *)(param_1 + 0xf8);
  }
  FString::FString(param_2,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140f669f0 FUN_140f669f0 body=897 status=ok
// SIG undefined FUN_140f669f0(void)

undefined8 FUN_140f669f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  undefined1 local_a8 [4];
  undefined4 local_a4;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined1 local_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  local_a8[0] = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_57 = 0;
  uStack_56 = 0;
  uStack_55 = 1;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  uStack_30 = 0;
  local_2c = 0;
  local_a4 = 0;
  local_a0 = 1;
  uStack_54 = 1;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar4 != 0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140f66acc;
  }
  lVar4 = 0;
LAB_140f66acc:
  if (((param_3 != 0) && (lVar2 != 0)) && (lVar4 != 0)) {
    plVar9 = *(longlong **)(param_3 + 0x308);
    plVar1 = plVar9 + *(int *)(param_3 + 0x310);
    for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
      lVar5 = *plVar9;
      if ((lVar5 != 0) &&
         ((*(longlong *)(lVar5 + 0x130) == 0 ||
          (*(longlong *)(lVar5 + 0x130) == *(longlong *)(lVar4 + 0xa58))))) {
        lVar6 = *(longlong *)(lVar5 + 0xf0);
        if (lVar6 == *(longlong *)(lVar2 + 0x5a8)) {
          local_a4 = 5;
          pcVar8 = "QuickChange_Head";
          local_a0 = 1;
          uStack_57 = 1;
          local_50 = lVar5;
          goto LAB_140f66cc7;
        }
        if (lVar6 == *(longlong *)(lVar2 + 0x5c0)) {
          local_a4 = 8;
          local_50 = lVar5;
          goto LAB_140f66c34;
        }
        if (lVar6 == *(longlong *)(lVar2 + 0x5b8)) {
          local_a4 = 4;
          local_50 = lVar5;
          goto LAB_140f66c34;
        }
        lVar6 = UCircularThrobber::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_a4 = 3;
          local_a0 = 0;
          local_50 = lVar5;
          goto LAB_140f66c34;
        }
      }
    }
    plVar9 = *(longlong **)(param_3 + 0x328);
    plVar1 = plVar9 + *(int *)(param_3 + 0x330);
    for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
      lVar2 = *plVar9;
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xf0) != 0)) {
        local_a4 = 2;
        pcVar8 = "CrazyEarl_WeaponTrinket";
        local_a0 = 4;
        local_60 = lVar2;
        goto LAB_140f66cc7;
      }
    }
    if (0 < *(int *)(param_3 + 0x340)) {
      plVar9 = *(longlong **)(param_3 + 0x338);
      plVar1 = plVar9 + *(int *)(param_3 + 0x340);
      for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
        lVar2 = *plVar9;
        if (lVar2 != 0) {
          lVar4 = FUN_14149b100();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            local_a4 = 1;
            local_a0 = 1;
            uStack_55 = 0;
            uStack_54 = 0;
            FWeakObjectPtr::operator=(&local_38,lVar2);
          }
          else {
            local_a4 = 7;
            pcVar8 = "CrazyEarl_RoomDecoration";
            local_a0 = 6;
            local_98 = *(undefined8 *)(lVar2 + 0x10);
LAB_140f66cc7:
            puVar7 = (undefined8 *)FName::FName(local_res8,pcVar8,1);
            uStack_30 = (undefined4)*puVar7;
            local_2c = (undefined4)((ulonglong)*puVar7 >> 0x20);
          }
          goto LAB_140f66c34;
        }
      }
    }
    if (0 < *(int *)(param_3 + 800)) {
      local_a4 = 6;
      uStack_40 = **(undefined8 **)(param_3 + 0x318);
    }
  }
LAB_140f66c34:
  FUN_140f59e70(param_2,local_a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_70);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_80);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_90);
  return param_2;
}



// FUNCTION 140f66d80 FUN_140f66d80 body=90 status=ok
// SIG undefined FUN_140f66d80(void)

longlong FUN_140f66d80(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + -0x58);
  if (lVar2 != 0) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
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



// FUNCTION 140f66de0 FUN_140f66de0 body=2034 status=ok
// SIG undefined FUN_140f66de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f66de0(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_778 [32];
  longlong local_758;
  longlong local_750;
  int local_748;
  longlong local_740;
  longlong local_738;
  undefined1 local_730 [8];
  longlong *local_728;
  char local_718;
  undefined4 *local_708;
  undefined8 *puStack_700;
  undefined8 local_6f8;
  longlong local_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined1 local_6d8 [16];
  undefined1 local_6c8 [8];
  longlong *local_6c0;
  undefined1 local_6b0 [8];
  longlong *local_6a8;
  undefined1 local_698 [8];
  longlong *local_690;
  undefined1 local_680 [16];
  undefined1 local_670 [24];
  undefined1 local_658 [32];
  undefined4 local_638 [4];
  undefined1 local_628 [24];
  undefined1 local_610;
  undefined4 local_608;
  undefined1 local_5f8 [24];
  undefined1 local_5e0;
  undefined8 local_5d8;
  undefined1 local_5d0;
  undefined1 local_5c8 [8];
  longlong local_5c0 [75];
  undefined8 local_368;
  undefined8 local_360;
  undefined1 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_31c;
  longlong local_310;
  undefined4 local_308;
  undefined8 local_300;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  if ((((param_2 != 0) &&
       (local_48 = DAT_1468387a8 ^ (ulonglong)auStack_778, *(char *)(param_2 + 0x200) == '\0')) &&
      (0 < *(int *)(param_1 + 0xed8))) &&
     (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x106c), cVar4 != '\0')) {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x106c);
    uVar12 = 0;
    local_5d8 = *(undefined8 *)(lVar5 + 0x118);
    local_5d0 = 1;
    local_368 = 0;
    local_360 = 0;
    local_358 = 1;
    local_350 = 0;
    local_348 = 0;
    local_330 = 0;
    local_328 = 0;
    local_320 = 0xffffffff;
    local_31c = 0;
    local_310 = 0;
    local_308 = 0;
    local_300 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_142df0490(&local_5d8,param_2 + 0x1c0);
    FUN_142df0400(&local_5d8,param_2 + 0x1b0);
    lVar5 = FUN_1414ec2a0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar10 = *(longlong *)(param_2 + 600);
      lVar5 = lVar10 + (longlong)*(int *)(param_2 + 0x260) * 0x18;
      for (; lVar10 != lVar5; lVar10 = lVar10 + 0x18) {
        if ((*(byte *)(lVar10 + 4) & 1) != 0) {
          FUN_142df0400(&local_5d8,lVar10 + 8);
        }
      }
    }
    plVar11 = *(longlong **)(param_2 + 0x208);
    plVar7 = plVar11 + *(int *)(param_2 + 0x210);
    for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
      lVar5 = *plVar11;
      if (lVar5 != 0) {
        lVar10 = UXSkinAnimationProfile::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          uVar6 = UDamageableInterface::GetPrivateStaticClass();
          uVar6 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar6);
          FUN_142df03d0(&local_5d8,uVar6);
        }
      }
    }
    plVar7 = *(longlong **)(param_1 + 0xed0);
    uVar14 = (longlong)*(int *)(param_1 + 0xed8) & 0x1fffffffffffffff;
    if (plVar7 + *(int *)(param_1 + 0xed8) < plVar7) {
      uVar14 = uVar12;
    }
    if (uVar14 != 0) {
      do {
        lVar5 = *plVar7;
        if ((lVar5 != 0) && (cVar4 = FUN_142ded9b0(lVar5,&local_5d8), cVar4 != '\0')) {
          FUN_142de5080(&local_5d8,lVar5,0);
        }
        plVar7 = plVar7 + 1;
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar14);
    }
    UCheatManagerGunfire::GetAllCheats(&local_750);
    FUN_142de7fc0(&local_5d8,&local_750);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146872ef0) &&
       (_Init_thread_header(&DAT_146872ef0), DAT_146872ef0 == -1)) {
      FName::FName(&DAT_146872ee8,L"PartInspection",1);
      _Init_thread_footer(&DAT_146872ef0);
    }
    plVar7 = (longlong *)FUN_142dec810(&local_750,&DAT_146872ee8);
    lVar5 = *plVar7;
    lVar10 = (longlong)(int)plVar7[1] * 0x40 + lVar5;
    local_758 = lVar10;
    if (lVar5 != lVar10) {
      lVar15 = lVar5 + 0x20;
      do {
        uVar6 = FUN_1404b03b0();
        FText::FText(local_730,uVar6);
        local_718 = 0;
        cVar4 = FText::IsEmptyOrWhitespace(lVar15 + -0x18);
        if (cVar4 == '\0') {
          lVar10 = FText::FText(local_670);
          local_738 = lVar10;
          lVar8 = FText::FText(local_658,lVar15 + -0x18);
          local_740 = lVar8;
          uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_698,L"{0}: {1}",L"GFxItemInspectionMenu",L"StatWithDescFormat");
          puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_680,uVar6);
          local_638[0] = 4;
          FText::FText(local_628,lVar8);
          local_610 = 1;
          local_608 = 4;
          FText::FText(local_5f8,lVar10);
          local_708 = local_638;
          local_5e0 = 1;
          puStack_700 = &local_5d8;
          local_6f8 = *puVar9;
          local_6f0 = puVar9[1];
          if (local_6f0 != 0) {
            LOCK();
            *(int *)(local_6f0 + 8) = *(int *)(local_6f0 + 8) + 1;
            UNLOCK();
          }
          local_6e8 = local_708;
          uStack_6e0 = puStack_700;
          uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                  TArray<FFormatArgumentValue,FDefaultAllocator>(local_6d8,&local_6e8);
          uVar6 = FText::Format(local_6b0,&local_6f8,uVar6);
          FText::FText(local_6c8,uVar6);
          plVar7 = local_6a8;
          if (local_6a8 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_6a8 + 1;
            lVar10 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_6a8)(local_6a8);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_6d8);
          lVar10 = 2;
          plVar7 = local_5c0;
          do {
            lVar10 = lVar10 + -1;
            if ((char)plVar7[-4] != '\0') {
              *(undefined1 *)(plVar7 + -4) = 0;
              plVar11 = (longlong *)plVar7[-6];
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar11 + 1;
                lVar8 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*plVar11)(plVar11);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar11 + 0xc);
                  iVar13 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar13 == 1) {
                    (**(code **)(*plVar11 + 8))(plVar11,1);
                  }
                }
              }
            }
            plVar7 = plVar7 + -6;
          } while (lVar10 != 0);
          plVar7 = (longlong *)puVar9[1];
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar7 + 1;
            lVar10 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          plVar7 = *(longlong **)(local_740 + 8);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar7 + 1;
            lVar10 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          plVar7 = *(longlong **)(local_738 + 8);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar7 + 1;
            lVar10 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          FText::operator=(local_730,local_6c8);
          plVar7 = local_6c0;
          if (local_6c0 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_6c0 + 1;
            lVar10 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_6c0)(local_6c0);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          plVar7 = local_690;
          lVar10 = local_758;
          if (local_690 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_690 + 1;
            lVar8 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_690)(local_690);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              lVar10 = local_758;
              if (iVar13 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
                lVar10 = local_758;
              }
            }
          }
        }
        else {
          FText::operator=(local_730,lVar15);
        }
        cVar4 = FUN_142de8d10(lVar5);
        iVar13 = (int)param_3[1];
        local_718 = (cVar4 == '\0') + '\x01';
        *(int *)(param_3 + 1) = iVar13 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar13 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_3,iVar13);
        }
        lVar8 = (longlong)iVar13 * 0x20 + *param_3;
        FText::FText(lVar8,local_730);
        plVar7 = local_728;
        *(char *)(lVar8 + 0x18) = local_718;
        if (local_728 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_728 + 1;
          lVar8 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_728)(local_728);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        lVar5 = lVar5 + 0x40;
        lVar15 = lVar15 + 0x40;
      } while (lVar5 != lVar10);
    }
    if (local_748 != 0) {
      lVar5 = local_750 + 8;
      iVar13 = local_748;
      do {
        FUN_140dddf90(lVar5);
        lVar5 = lVar5 + 0x18;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    if (local_750 != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
    if (local_1f8 != 0) {
      FMemory::Free();
    }
    local_308 = 0;
    if (local_310 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_350);
    FUN_14099aac0(local_5c8);
  }
  return;
}



// FUNCTION 140f675e0 FUN_140f675e0 body=761 status=ok
// SIG undefined FUN_140f675e0(void)

void ** FUN_140f675e0(longlong param_1,void **param_2,longlong *param_3,int param_4)

{
  int *piVar1;
  void *_Src;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  void *_Src_00;
  int iVar8;
  undefined8 *puVar9;
  longlong local_res10;
  void *local_48;
  int local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  *param_2 = (void *)0x0;
  param_2[1] = (void *)0x8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"unknown");
  if (param_3 == (longlong *)0x0) {
    return param_2;
  }
  iVar8 = 0;
  if (0 < (int)param_3[9]) {
    lVar6 = 0;
    plVar2 = (longlong *)(param_3[8] + 8);
    do {
      if (*plVar2 == (longlong)param_4) goto LAB_140f67677;
      iVar8 = iVar8 + 1;
      lVar6 = lVar6 + 1;
      plVar2 = plVar2 + 2;
    } while (lVar6 < (int)param_3[9]);
  }
  iVar8 = -1;
LAB_140f67677:
  uVar3 = (**(code **)(*param_3 + 0x288))(param_3,local_38,iVar8);
  puVar4 = (undefined8 *)FText::ToString(uVar3);
  if (*(int *)(puVar4 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar4;
  }
  FName::FName(&local_res10,puVar7,1);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_30 + 8))(local_30);
      }
    }
  }
  if (*(int *)(param_1 + 0xe20) != *(int *)(param_1 + 0xe4c)) {
    lVar6 = *(longlong *)(param_1 + 0xe58);
    if (*(longlong *)(param_1 + 0xe58) == 0) {
      lVar6 = param_1 + 0xe50;
    }
    iVar8 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)local_res10 >> 0x20) + (int)local_res10) &
                             (longlong)*(int *)(param_1 + 0xe60) - 1U) * 4);
    if (iVar8 != -1) {
      lVar6 = *(longlong *)(param_1 + 0xe18);
      iVar5 = iVar8;
      do {
        if (*(longlong *)((longlong)iVar5 * 0x20 + lVar6) == local_res10) {
          if (iVar5 != -1) {
            if (iVar8 == -1) goto LAB_140f677f1;
            while (plVar2 = (longlong *)((longlong)iVar8 * 0x20 + lVar6), *plVar2 != local_res10) {
              iVar8 = (int)plVar2[3];
              if (iVar8 == -1) {
                FString::operator=(param_2,8);
                return param_2;
              }
            }
            if (iVar8 == -1) {
LAB_140f677f1:
              plVar2 = (longlong *)0x0;
            }
            FString::operator=(param_2,plVar2 + 1);
            return param_2;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar6);
      } while (iVar5 != -1);
    }
  }
  puVar9 = *(undefined8 **)(param_1 + 0xe68);
  puVar4 = puVar9 + (longlong)*(int *)(param_1 + 0xe70) * 3;
  do {
    if (puVar9 == puVar4) {
      return param_2;
    }
    if (param_3 == (longlong *)*puVar9) {
      iVar8 = 0;
      lVar6 = 0;
      if (0 < (int)param_3[9]) {
        plVar2 = (longlong *)(param_3[8] + 8);
        do {
          if (*plVar2 == (longlong)param_4) {
            if ((-1 < iVar8) && (iVar8 < *(int *)(puVar9 + 2))) {
              _Src_00 = (void *)0x0;
              puVar4 = (undefined8 *)((longlong)iVar8 * 0x10 + puVar9[1]);
              local_48 = (void *)0x0;
              local_40 = *(int *)(puVar4 + 1);
              lVar6 = (longlong)local_40;
              _Src = (void *)*puVar4;
              if (local_40 != 0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
                _Src_00 = local_48;
                _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar6 * 2);
              }
              iVar8 = local_40;
              if ((1 < local_40) && (param_2 != &local_48)) {
                *(int *)(param_2 + 1) = local_40;
                if ((local_40 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
                  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,local_40);
                  _guard_xfg_dispatch_icall_nop(*param_2,_Src_00,(longlong)iVar8 * 2);
                }
              }
              if (_Src_00 == (void *)0x0) {
                return param_2;
              }
              FMemory::Free(_Src_00);
              return param_2;
            }
            break;
          }
          iVar8 = iVar8 + 1;
          lVar6 = lVar6 + 1;
          plVar2 = plVar2 + 2;
        } while (lVar6 < (int)param_3[9]);
      }
    }
    puVar9 = puVar9 + 3;
  } while( true );
}



// FUNCTION 140f678e0 FUN_140f678e0 body=408 status=ok
// SIG undefined FUN_140f678e0(void)

undefined8 * FUN_140f678e0(undefined8 *param_1,undefined8 param_2)

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
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0xb8))(plVar6,local_18);
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



// FUNCTION 140f67a80 FUN_140f67a80 body=67 status=ok
// SIG undefined FUN_140f67a80(void)

undefined8 FUN_140f67a80(longlong param_1)

{
  undefined8 uVar1;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x218));
  uVar1 = FWeakObjectPtr::Get(param_1 + 0x20c);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x218));
  return uVar1;
}



// FUNCTION 140f67ad0 FUN_140f67ad0 body=9 status=ok
// SIG undefined FUN_140f67ad0(void)

undefined4 FUN_140f67ad0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1e4);
}



// FUNCTION 140f67ae0 FUN_140f67ae0 body=1652 status=ok
// SIG undefined FUN_140f67ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140f67ae0(longlong param_1,float *param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  float *pfVar7;
  undefined8 uVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_d8;
  float local_d0;
  longlong *local_c8;
  int local_c0;
  undefined8 local_ac;
  float local_a4;
  
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x228));
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x220);
  if (cVar2 == '\0') {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x218));
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x20c);
    if (cVar2 == '\0') {
      if (*(char *)(param_1 + 0x1f7) != '\0') {
        fVar14 = *(float *)(param_1 + 0x1c0);
        *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x1b8);
        param_2[2] = fVar14;
      }
    }
    else {
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x20c);
      fVar14 = DAT_1468b5d98;
      uVar6 = _DAT_1468b5d90;
      lVar4 = *(longlong *)(lVar4 + 0x168);
      if (lVar4 == 0) {
        local_d8 = _DAT_1468b5d90;
        local_d0 = DAT_1468b5d98;
      }
      else {
        local_d8 = *(undefined8 *)(lVar4 + 0x220);
        local_d0 = *(float *)(lVar4 + 0x228);
      }
      cVar2 = *(char *)(param_1 + 0x1f6);
      *(undefined8 *)param_2 = local_d8;
      param_2[2] = local_d0;
      if (cVar2 != '\0') {
        local_ac = uVar6;
        local_a4 = fVar14;
        cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x20c);
        if (cVar2 != '\0') {
          uVar6 = FUN_1429bed90();
          uVar8 = FWeakObjectPtr::Get(param_1 + 0x20c);
          AActor::GetComponentsByClass(uVar8,&local_c8,uVar6);
          plVar3 = local_c8 + local_c0;
          for (plVar9 = local_c8; plVar9 != plVar3; plVar9 = plVar9 + 1) {
            if (*plVar9 != 0) {
              FUN_1429bed90();
            }
          }
          if (local_c8 != (longlong *)0x0) {
            FMemory::Free(local_c8);
          }
        }
        *param_2 = (float)local_ac + 0.0 + *param_2;
        param_2[2] = local_a4 + 0.0 + param_2[2];
        param_2[1] = local_ac._4_4_ + 0.0 + param_2[1];
      }
      if (((*(float *)(param_1 + 0x230) == 0.0) && (*(float *)(param_1 + 0x234) == 0.0)) &&
         (*(float *)(param_1 + 0x238) == 0.0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        local_d8 = *(undefined8 *)(param_1 + 0x230);
        local_d0 = *(float *)(param_1 + 0x238);
        lVar4 = FWeakObjectPtr::Get(param_1 + 0x20c);
        lVar4 = *(longlong *)(lVar4 + 0x168);
        if (lVar4 == 0) {
          fVar17 = 1.0;
          fVar14 = 0.0;
          fVar16 = 0.0;
          fVar15 = 0.0;
        }
        else {
          fVar14 = *(float *)(lVar4 + 0x210);
          fVar16 = *(float *)(lVar4 + 0x214);
          fVar15 = *(float *)(lVar4 + 0x218);
          fVar17 = *(float *)(lVar4 + 0x21c);
        }
        fVar11 = local_d0 * fVar16 - local_d8._4_4_ * fVar15;
        fVar11 = fVar11 + fVar11;
        fVar10 = (float)local_d8 * fVar15 - local_d0 * fVar14;
        fVar12 = local_d8._4_4_ * fVar14 - (float)local_d8 * fVar16;
        fVar10 = fVar10 + fVar10;
        fVar12 = fVar12 + fVar12;
        *param_2 = (float)local_d8 + fVar17 * fVar11 + (fVar16 * fVar12 - fVar15 * fVar10) +
                   *param_2;
        param_2[1] = local_d8._4_4_ + fVar17 * fVar10 + (fVar15 * fVar11 - fVar14 * fVar12) +
                     param_2[1];
        param_2[2] = local_d0 + fVar17 * fVar12 + (fVar14 * fVar10 - fVar16 * fVar11) + param_2[2];
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x218));
  }
  else {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x220);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = FUN_142a07000();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) &&
         (cVar2 = (**(code **)(*plVar3 + 0x440))(plVar3,*(undefined8 *)(param_1 + 0x1b0)),
         cVar2 != '\0')) {
        puVar5 = (undefined8 *)
                 (**(code **)(*plVar3 + 0x428))(plVar3,&local_d8,*(undefined8 *)(param_1 + 0x1b0));
        fVar16 = *(float *)(puVar5 + 1);
        *(undefined8 *)param_2 = *puVar5;
        fVar14 = *(float *)(param_1 + 0x230);
        param_2[2] = fVar16;
        if ((fVar14 == 0.0) &&
           ((*(float *)(param_1 + 0x234) == 0.0 && (*(float *)(param_1 + 0x238) == 0.0)))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          uVar6 = (**(code **)(*plVar3 + 0x430))(plVar3,&local_d8,*(undefined8 *)(param_1 + 0x1b0));
          pfVar7 = (float *)FRotator::RotateVector(uVar6,&local_c8,param_1 + 0x230);
          fVar14 = pfVar7[1];
          *param_2 = *pfVar7 + *param_2;
          fVar16 = pfVar7[2];
          param_2[1] = fVar14 + param_2[1];
          param_2[2] = fVar16 + param_2[2];
        }
        goto LAB_140f6810f;
      }
    }
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x220);
    local_d0 = SUB164(*(undefined1 (*) [16])(lVar4 + 0x220),8);
    *(longlong *)param_2 = SUB168(*(undefined1 (*) [16])(lVar4 + 0x220),0);
    fVar14 = *(float *)(param_1 + 0x230);
    param_2[2] = local_d0;
    if (((fVar14 == 0.0) && (*(float *)(param_1 + 0x234) == 0.0)) &&
       (*(float *)(param_1 + 0x238) == 0.0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      local_d0 = *(float *)(param_1 + 0x238);
      uVar6 = *(undefined8 *)(param_1 + 0x230);
      fVar10 = (float)((ulonglong)uVar6 >> 0x20);
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x220);
      fVar14 = *(float *)(lVar4 + 0x210);
      fVar16 = *(float *)(lVar4 + 0x214);
      fVar15 = *(float *)(lVar4 + 0x218);
      fVar17 = *(float *)(lVar4 + 0x21c);
      local_d8._0_4_ = (float)uVar6;
      fVar13 = local_d0 * fVar16 - fVar10 * fVar15;
      fVar12 = (float)local_d8 * fVar15 - local_d0 * fVar14;
      fVar13 = fVar13 + fVar13;
      fVar11 = fVar10 * fVar14 - (float)local_d8 * fVar16;
      fVar12 = fVar12 + fVar12;
      fVar11 = fVar11 + fVar11;
      param_2[1] = fVar10 + fVar17 * fVar12 + (fVar13 * fVar15 - fVar11 * fVar14) + param_2[1];
      param_2[2] = local_d0 + fVar17 * fVar11 + (fVar12 * fVar14 - fVar13 * fVar16) + param_2[2];
      *param_2 = (float)local_d8 + fVar17 * fVar13 + (fVar11 * fVar16 - fVar12 * fVar15) + *param_2;
      local_d8 = uVar6;
    }
  }
LAB_140f6810f:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x228));
  return param_2;
}



// FUNCTION 140f68160 FUN_140f68160 body=67 status=ok
// SIG undefined FUN_140f68160(void)

undefined8 FUN_140f68160(longlong param_1)

{
  undefined8 uVar1;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x228));
  uVar1 = FWeakObjectPtr::Get(param_1 + 0x220);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x228));
  return uVar1;
}



// FUNCTION 140f681b0 FUN_140f681b0 body=25 status=ok
// SIG undefined FUN_140f681b0(void)

undefined8 * FUN_140f681b0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x238);
  *param_2 = *(undefined8 *)(param_1 + 0x230);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 140f681d0 FUN_140f681d0 body=97 status=ok
// SIG undefined FUN_140f681d0(void)

undefined8 FUN_140f681d0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
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
    if (bVar1) {
      return *(undefined8 *)(lVar2 + 0x1470);
    }
  }
  return 0;
}



// FUNCTION 140f68240 FUN_140f68240 body=436 status=ok
// SIG undefined FUN_140f68240(void)

undefined4 FUN_140f68240(longlong param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x11b8);
  *(undefined8 *)(param_1 + 0x11b8) = 0;
  if ((param_2 == *(int *)(param_1 + 0x11b0)) && (*(char *)(param_1 + 0x11c0) == '\0'))
  goto LAB_140f683de;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
  }
  *(undefined1 *)(param_1 + 0x11c0) = 0;
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x6a8))) {
    *(int *)(param_1 + 0x11b0) = param_2;
    if (*(longlong *)(param_1 + 0xef8) != 0) {
      FUN_142088cf0(*(longlong *)(param_1 + 0xef8),
                    (longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x6a0) + 0x10);
    }
    if (*(longlong *)(param_1 + 0xf18) != 0) {
      FUN_142ed4720(*(longlong *)(param_1 + 0xf18),
                    (longlong)*(int *)(param_1 + 0x11b0) * 0x38 + *(longlong *)(param_1 + 0x6a0) + 8
                   );
    }
    if (((*(longlong *)(param_1 + 0xf10) != 0) && (cVar4 = FUN_142ebe120(param_1), cVar4 != '\0'))
       && (cVar4 = FUN_142ebdd70(param_1), cVar4 == '\0')) {
      (**(code **)(**(longlong **)(param_1 + 0xf10) + 0x278))(*(longlong **)(param_1 + 0xf10),1);
    }
  }
  if (*(char *)(param_1 + 0x11c0) == '\0') {
    iVar2 = *(int *)(param_1 + 0x11b0);
    if ((iVar2 < 0) || (*(int *)(param_1 + 0x6a8) <= iVar2)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined1 *)((longlong)iVar2 * 0x38 + *(longlong *)(param_1 + 0x6a0));
    }
  }
  else {
    uVar5 = 5;
  }
  switch(uVar5) {
  case 0:
    *(undefined8 *)(param_1 + 0x11b8) = 0;
    goto switchD_140f68373_default;
  case 1:
    lVar6 = param_1 + 0x6d0;
    break;
  case 2:
    lVar6 = param_1 + 0x760;
    break;
  case 3:
    lVar6 = param_1 + 0x880;
    break;
  case 4:
    *(longlong *)(param_1 + 0x11b8) = param_1 + 0xa98;
    FUN_140f8c600(param_1 + 0x1090,0);
    goto switchD_140f68373_default;
  case 5:
    lVar6 = param_1 + 0xc48;
    break;
  default:
    goto switchD_140f68373_default;
  }
  *(longlong *)(param_1 + 0x11b8) = lVar6;
switchD_140f68373_default:
  plVar3 = *(longlong **)(param_1 + 0x11b8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
  }
LAB_140f683de:
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140f68410 FUN_140f68410 body=500 status=ok
// SIG undefined FUN_140f68410(void)

undefined8 FUN_140f68410(longlong param_1,longlong param_2,char param_3,byte param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  undefined1 local_18 [16];
  
  if (param_3 != '\x01') {
    return 0;
  }
  if (((*(longlong **)(param_1 + 0x50) == (longlong *)0x0) ||
      (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x148))(), lVar2 == 0)) ||
     (*(float *)(param_1 + 0x30) <= *(float *)(lVar2 + 0x798) - *(float *)(param_1 + 0x94))) {
    fVar5 = *(float *)(param_2 + 4);
    fVar4 = fVar5;
    if (ABS(fVar5) <= 0.001) {
      fVar4 = 0.0;
    }
    lVar2 = *(longlong *)(param_2 + 8);
    bVar1 = 0.0 < ABS(fVar4);
    if (lVar2 == DAT_146872c18) {
      if (bVar1) {
        *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | param_4;
        *(float *)(param_1 + 0x58) = fVar4 + *(float *)(param_1 + 0x58);
        return 1;
      }
    }
    else if (lVar2 == DAT_146872c20) {
      if (bVar1) {
        *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | param_4;
        *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) - fVar4;
        return 1;
      }
    }
    else if (lVar2 == DAT_146872c08) {
      if (bVar1) {
        *(byte *)(param_1 + 0x71) = *(byte *)(param_1 + 0x71) | param_4;
        *(float *)(param_1 + 100) = fVar4 + *(float *)(param_1 + 100);
        return 1;
      }
    }
    else {
      if (lVar2 != DAT_146872c10) {
        if (lVar2 == DAT_146872c28) {
          *(float *)(param_1 + 0x74) = fVar5 + *(float *)(param_1 + 0x74);
          return 1;
        }
        plVar3 = (longlong *)FName::FName(local_18,L"MouseWheelAxis",1);
        if (*(longlong *)(param_2 + 8) == *plVar3) {
          fVar5 = *(float *)(param_1 + 0x24);
        }
        else {
          plVar3 = (longlong *)FName::FName(local_18,L"KeyboardZoom",1);
          if (*(longlong *)(param_2 + 8) != *plVar3) {
            return 0;
          }
          fVar5 = *(float *)(param_1 + 0x28);
        }
        *(float *)(param_1 + 0x74) = *(float *)(param_1 + 0x74) - fVar5 * *(float *)(param_2 + 4);
        return 1;
      }
      if (bVar1) {
        *(byte *)(param_1 + 0x71) = *(byte *)(param_1 + 0x71) | param_4;
        *(float *)(param_1 + 0x68) = fVar4 + *(float *)(param_1 + 0x68);
      }
    }
  }
  return 1;
}



// FUNCTION 140f68610 FUN_140f68610 body=1966 status=ok
// SIG undefined FUN_140f68610(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140f68610(longlong param_1,ulonglong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  wchar_t *local_c8;
  undefined8 local_c0;
  longlong local_b8 [6];
  longlong *local_88;
  longlong *local_80;
  ulonglong local_70 [2];
  undefined4 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  if (param_2 == 0) {
    return;
  }
  lVar8 = FWeakObjectPtr::Get(param_2 + 0x106c);
  uVar18 = 0;
  if ((lVar8 == 0) || (uVar17 = *(ulonglong *)(lVar8 + 0x218), uVar17 == 0)) {
LAB_140f6869e:
    uVar17 = uVar18;
  }
  else {
    lVar8 = FUN_141436fd0();
    if ((*(int *)(*(longlong *)(uVar17 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar17 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140f6869e;
  }
  plVar9 = (longlong *)FUN_140e971d0(param_2);
  uVar10 = uVar18;
  if (plVar9 != (longlong *)0x0) {
    local_48 = FUN_142e035e0();
    uVar10 = (**(code **)(*plVar9 + 0x628))(plVar9,local_48);
  }
  plVar4 = (longlong *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x10c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar4,0);
  }
  if (uVar17 != 0) {
    plVar19 = *(longlong **)(uVar17 + 0x120);
    local_80 = plVar19 + (longlong)*(int *)(uVar17 + 0x128) * 5;
    if (plVar19 != local_80) {
      plVar19 = plVar19 + 2;
LAB_140f68730:
      lVar8 = FWeakObjectPtr::Get(plVar19 + -2);
      if (lVar8 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != (int)plVar19[-1]) && (local_b8[2] = 0, *plVar19 != 0)) {
          lVar8 = FUN_141796df0(plVar19);
          FWeakObjectPtr::operator=(plVar19 + -2,lVar8);
          if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(plVar19 + -1) = DAT_1464b56f4;
          }
          lVar8 = FWeakObjectPtr::Get(plVar19 + -2);
          if (lVar8 != 0) goto LAB_140f687a7;
        }
      }
      else {
LAB_140f687a7:
        lVar11 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          lVar11 = FUN_142dfdfe0();
          do {
            if (lVar8 == lVar11) {
              if (uVar10 == 0) goto LAB_140f68958;
              uVar14 = FWeakObjectPtr::Get(plVar19 + -2);
              uVar17 = uVar18;
              if (uVar14 == 0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                if ((DAT_1464b56f4 == (int)plVar19[-1]) || (local_b8[3] = 0, *plVar19 == 0))
                goto LAB_140f68af1;
                lVar8 = FUN_141796df0(plVar19);
                FWeakObjectPtr::operator=(plVar19 + -2,lVar8);
                if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  *(int *)(plVar19 + -1) = DAT_1464b56f4;
                }
                uVar14 = FWeakObjectPtr::Get(plVar19 + -2);
                if (uVar14 == 0) goto LAB_140f68af1;
              }
              lVar8 = FUN_14171bfe0();
              if ((*(int *)(*(longlong *)(uVar14 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(uVar14 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (!bVar6) goto LAB_140f68af1;
              uVar15 = FUN_142dfdfe0();
              uVar16 = uVar14;
              goto LAB_140f68ae0;
            }
            lVar8 = *(longlong *)(lVar8 + 0x30);
          } while (lVar8 != 0);
        }
      }
      if (param_3 != '\0') {
        local_b8[0] = 0;
        local_b8[1] = 0x20;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
        FGenericPlatformString::Memcpy(local_b8[0],L"RequestAsyncLoad SingleDelegate",0x40);
        uStack_50 = 0;
        local_58 = &LAB_140f71d00;
        local_70[1] = 0;
        local_60 = 0;
        puVar12 = (undefined8 *)operator_new(0x30,local_70 + 1);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(puVar12 + 1,param_2);
          *(undefined4 *)(puVar12 + 2) = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar12 + 0x14) = local_58._4_4_;
          *(undefined4 *)(puVar12 + 3) = uStack_50;
          *(undefined4 *)((longlong)puVar12 + 0x1c) = uStack_4c;
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar12[5] = uVar13;
          *puVar12 = &PTR_FUN_143f77bd0;
        }
        lVar8 = FUN_1422ca050();
        FStreamableManager::RequestAsyncLoad
                  (lVar8 + 0x178,local_b8 + 5,plVar19,local_70 + 1,0,0,0,local_b8);
        if (local_b8[0] != 0) {
          FMemory::Free();
        }
        iVar5 = *(int *)(param_1 + 0x118);
        iVar7 = iVar5 + 1;
        *(int *)(param_1 + 0x118) = iVar7;
        if (*(int *)(param_1 + 0x11c) < iVar7) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x110);
        }
        plVar3 = local_88;
        puVar12 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x110));
        *puVar12 = local_b8[5];
        puVar12[1] = local_88;
        if (local_88 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_88 + 1) = (int)local_88[1] + 1;
          UNLOCK();
          if (local_88 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_88 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_88)(local_88);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3);
              }
            }
          }
        }
      }
      goto LAB_140f68958;
    }
  }
LAB_140f68976:
  local_70[0] = uVar10;
  AlgoImpl::
  IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
            (*plVar4,(longlong)*(int *)(param_1 + 0x108),param_2 & 0xff,local_70);
  iVar5 = *(int *)(param_1 + 0x108);
  local_c8 = (wchar_t *)0x0;
  local_c0 = 0;
  if (iVar5 == 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8,0xd);
    iVar7 = (int)local_c0 + 0xd;
    local_c0 = CONCAT44(local_c0._4_4_,iVar7);
    if (local_c0._4_4_ < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8);
    }
    builtin_wcsncpy(local_c8,L"noChallenges",0xc);
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8,0xe);
        iVar7 = (int)local_c0 + 0xe;
        local_c0 = CONCAT44(local_c0._4_4_,iVar7);
        if (local_c0._4_4_ < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8);
        }
        builtin_wcsncpy(local_c8,L"twoChallenges",0xe);
      }
      else if (iVar5 == 3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8,0x10);
        iVar7 = (int)local_c0 + 0x10;
        local_c0 = CONCAT44(local_c0._4_4_,iVar7);
        if (local_c0._4_4_ < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8);
        }
        builtin_wcsncpy(local_c8,L"threeChallenges",0x10);
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8,0xf);
        iVar7 = (int)local_c0 + 0xf;
        local_c0 = CONCAT44(local_c0._4_4_,iVar7);
        if (local_c0._4_4_ < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8);
        }
        builtin_wcsncpy(local_c8,L"fourChallenges",0xf);
      }
      goto LAB_140f68d24;
    }
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8,0xd);
    iVar7 = (int)local_c0 + 0xd;
    local_c0 = CONCAT44(local_c0._4_4_,iVar7);
    if (local_c0._4_4_ < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8);
    }
    builtin_wcsncpy(local_c8,L"oneChallenge",0xc);
  }
  local_c8[0xc] = L'\0';
LAB_140f68d24:
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_142088cf0(*(longlong *)(param_1 + 0x58),&local_c8);
  }
  uVar17 = uVar18;
  if (0 < (longlong)iVar5) {
    do {
      iVar7 = (int)uVar17;
      if ((iVar7 < 0) || (*(int *)(param_1 + 0xf8) <= iVar7)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) && (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + uVar18 * 8), lVar8 != 0)
         ) {
        FUN_140f8d000(lVar8,plVar9,*plVar4 + (longlong)iVar7 * 8);
      }
      uVar17 = (ulonglong)(iVar7 + 1);
      uVar18 = uVar18 + 1;
    } while ((longlong)uVar18 < (longlong)iVar5);
  }
  if (local_c8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
  while (uVar16 = *(ulonglong *)(uVar16 + 0x30), uVar17 = uVar18, uVar16 != 0) {
LAB_140f68ae0:
    uVar17 = uVar14;
    if (uVar16 == uVar15) break;
  }
LAB_140f68af1:
  lVar8 = FUN_142dcdc10(uVar10,uVar17);
  if ((lVar8 == 0) || (*(char *)(lVar8 + 0x8a) != '\0')) goto LAB_140f68958;
  uVar14 = FWeakObjectPtr::Get(plVar19 + -2);
  uVar17 = uVar18;
  if (uVar14 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)plVar19[-1]) && (local_b8[4] = 0, *plVar19 != 0)) {
      lVar8 = FUN_141796df0(plVar19);
      FWeakObjectPtr::operator=(plVar19 + -2,lVar8);
      if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(plVar19 + -1) = DAT_1464b56f4;
      }
      uVar14 = FWeakObjectPtr::Get(plVar19 + -2);
      if (uVar14 != 0) goto LAB_140f68b89;
    }
  }
  else {
LAB_140f68b89:
    lVar8 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(uVar14 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      uVar15 = FUN_142dfdfe0();
      uVar16 = uVar14;
      do {
        uVar17 = uVar14;
        if (uVar16 == uVar15) break;
        uVar16 = *(ulonglong *)(uVar16 + 0x30);
        uVar17 = uVar18;
      } while (uVar16 != 0);
    }
  }
  iVar5 = *(int *)(param_1 + 0x108);
  *(int *)(param_1 + 0x108) = iVar5 + 1;
  if (*(int *)(param_1 + 0x10c) < iVar5 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar5);
  }
  *(ulonglong *)(*plVar4 + (longlong)iVar5 * 8) = uVar17;
LAB_140f68958:
  plVar3 = plVar19 + 3;
  plVar19 = plVar19 + 5;
  if (plVar3 == local_80) goto LAB_140f68976;
  goto LAB_140f68730;
}



// FUNCTION 140f68dc0 FUN_140f68dc0 body=1249 status=ok
// SIG undefined FUN_140f68dc0(void)

void FUN_140f68dc0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  longlong local_e8 [26];
  
  if (*(char *)((longlong)param_1 + 0xb72) != '\0') {
    if (*(char *)((longlong)param_1 + 0xb71) != (char)param_1[0x16e]) {
      *(char *)(param_1 + 0x16e) = *(char *)((longlong)param_1 + 0xb71);
    }
    if (*(char *)((longlong)param_1 + 0xb72) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0xb72) = 0;
    }
  }
  if (*(char *)((longlong)param_1 + 0xb75) != '\0') {
    if (*(char *)((longlong)param_1 + 0xb74) != *(char *)((longlong)param_1 + 0xb73)) {
      *(char *)((longlong)param_1 + 0xb73) = *(char *)((longlong)param_1 + 0xb74);
    }
    if (*(char *)((longlong)param_1 + 0xb75) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0xb75) = 0;
    }
  }
  cVar2 = (char)param_1[0x16e];
  cVar3 = *(char *)((longlong)param_1 + 0xb73);
  if (param_1[0x132] != 0) {
    if (cVar2 == '\0') {
LAB_140f68e6b:
      local_e8[8] = 0;
      local_e8[9] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 8,0);
      FGenericPlatformString::Memcpy(local_e8[8],L"default",0x10);
      FUN_142088cf0(param_1[0x132],local_e8 + 8);
      lVar6 = local_e8[8];
    }
    else if (cVar2 == '\x01') {
      if (cVar3 == '\x01') {
        local_e8[4] = 0;
        local_e8[5] = 0xb;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 4,0);
        FGenericPlatformString::Memcpy(local_e8[4],L"startTrade",0x16);
        FUN_142088910(param_1[0x132],local_e8 + 4);
        lVar6 = local_e8[4];
      }
      else {
        local_e8[6] = 0;
        local_e8[7] = 0xb;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 6,0);
        FGenericPlatformString::Memcpy(local_e8[6],L"readyTrade",0x16);
        FUN_142088910(param_1[0x132],local_e8 + 6);
        lVar6 = local_e8[6];
      }
    }
    else {
      if (cVar2 != '\x02') {
        if (cVar2 != '\x03') goto LAB_140f68eb6;
        goto LAB_140f68e6b;
      }
      if (cVar3 == '\x02') {
        local_e8[0] = 0;
        local_e8[1] = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
        FGenericPlatformString::Memcpy(local_e8[0],L"startDuel",0x14);
        FUN_142088910(param_1[0x132],local_e8);
        lVar6 = local_e8[0];
      }
      else {
        local_e8[2] = 0;
        local_e8[3] = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 2,0);
        FGenericPlatformString::Memcpy(local_e8[2],L"readyDuel",0x14);
        FUN_142088910(param_1[0x132],local_e8 + 2);
        lVar6 = local_e8[2];
      }
    }
    if (lVar6 != 0) {
      FMemory::Free();
    }
  }
LAB_140f68eb6:
  if (param_1[0x134] == 0) goto LAB_140f68f2a;
  if (cVar3 == '\0') {
LAB_140f68edf:
    local_e8[0x12] = 0;
    local_e8[0x13] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 0x12,0);
    FGenericPlatformString::Memcpy(local_e8[0x12],L"default",0x10);
    FUN_142088cf0(param_1[0x134],local_e8 + 0x12);
    lVar6 = local_e8[0x12];
  }
  else if (cVar3 == '\x01') {
    if (cVar2 == '\x01') {
      local_e8[0xe] = 0;
      local_e8[0xf] = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 0xe,0);
      FGenericPlatformString::Memcpy(local_e8[0xe],L"startTrade",0x16);
      FUN_142088910(param_1[0x134],local_e8 + 0xe);
      lVar6 = local_e8[0xe];
    }
    else {
      local_e8[0x10] = 0;
      local_e8[0x11] = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 0x10,0);
      FGenericPlatformString::Memcpy(local_e8[0x10],L"playerTradeReady",0x22);
      FUN_142088910(param_1[0x134],local_e8 + 0x10);
      lVar6 = local_e8[0x10];
    }
  }
  else {
    if (cVar3 != '\x02') {
      if (cVar3 != '\x03') goto LAB_140f68f2a;
      goto LAB_140f68edf;
    }
    if (cVar2 == '\x02') {
      local_e8[10] = 0;
      local_e8[0xb] = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 10,0);
      FGenericPlatformString::Memcpy(local_e8[10],L"startDuel",0x14);
      FUN_142088910(param_1[0x134],local_e8 + 10);
      lVar6 = local_e8[10];
    }
    else {
      local_e8[0xc] = 0;
      local_e8[0xd] = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 0xc,0);
      FGenericPlatformString::Memcpy(local_e8[0xc],L"playerDuelReady",0x20);
      FUN_142088910(param_1[0x134],local_e8 + 0xc);
      lVar6 = local_e8[0xc];
    }
  }
  if (lVar6 != 0) {
    FMemory::Free();
  }
LAB_140f68f2a:
  if ((cVar2 == cVar3) && ((byte)(cVar2 - 1U) < 2)) {
    LOCK();
    iVar1 = *(int *)((longlong)param_1 + 0xba4);
    *(int *)((longlong)param_1 + 0xba4) = 1;
    UNLOCK();
    if (iVar1 == 0) {
      if (param_1[0xc0] != 0) {
        local_e8[0x14] = 0;
        local_e8[0x15] = 0xf;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 0x14,0);
        FGenericPlatformString::Memcpy(local_e8[0x14],L"initiateAction",0x1e);
        FUN_142088910(param_1[0xc0],local_e8 + 0x14);
        if (local_e8[0x14] != 0) {
          FMemory::Free();
        }
      }
      plVar4 = (longlong *)param_1[0x12f];
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x278))(plVar4,1);
        local_e8[0x16] = 0;
        local_e8[0x17] = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 0x16,0);
        FGenericPlatformString::Memcpy(local_e8[0x16],L"countdown",0x14);
        FUN_142088910(param_1[0x12f],local_e8 + 0x16);
        if (local_e8[0x16] != 0) {
          FMemory::Free();
        }
      }
      lVar6 = *param_1;
      local_e8[0x18] = 0;
      local_e8[0x19] = 0;
      puVar5 = (undefined8 *)FName::FName(local_res8,L"Trading_Countdown_Tick",1);
      (**(code **)(lVar6 + 0x4e8))(param_1,*puVar5,local_e8 + 0x18);
    }
  }
  else {
    FUN_140f93390(param_1);
  }
  return;
}



// FUNCTION 140f692b0 FUN_140f692b0 body=174 status=ok
// SIG undefined FUN_140f692b0(void)

undefined8 FUN_140f692b0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = *(int *)(param_1 + 0x208);
  if (((1 < iVar1) && (*(char *)((longlong)param_3 + 0xc) == '\0')) && (DAT_146872e60 == *param_3))
  {
    *(int *)(param_1 + 0x210) = (*(int *)(param_1 + 0x210) + 1 + iVar1) % iVar1;
    if (param_2 != (longlong *)0x0) {
      lVar2 = *param_2;
      local_18 = 0;
      local_10 = 0;
      puVar3 = (undefined8 *)FName::FName(local_res8,L"Navigate",1);
      (**(code **)(lVar2 + 0x4e8))(param_2,*puVar3,&local_18);
    }
    FUN_140f8a510(param_1,param_2);
    return 1;
  }
  return 0;
}



// FUNCTION 140f69360 FUN_140f69360 body=529 status=ok
// SIG undefined FUN_140f69360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140f69360(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined1 local_res10 [8];
  longlong local_28 [4];
  
  if (param_2 != (longlong *)0x0) {
    cVar6 = FUN_140f62dd0(param_2);
    if (((cVar6 != '\0') && (*(char *)((longlong)param_3 + 0xc) == '\0')) &&
       (DAT_146872e58 == *param_3)) {
      if (((char)param_2[0x238] == '\0') && (param_2[0x1df] != 0)) {
        param_2[0x21d] = _DAT_1468b5d90;
        *(undefined4 *)(param_2 + 0x21e) = DAT_1468b5d98;
        *(longlong *)((longlong)param_2 + 0x10f4) = _DAT_1468b5d90;
        *(undefined4 *)((longlong)param_2 + 0x10fc) = DAT_1468b5d98;
        *(int *)((longlong)param_2 + 0x113c) = (int)param_2[0x214];
        *(undefined4 *)((longlong)param_2 + 0x1104) = 0;
        *(longlong *)((longlong)param_2 + 0x1144) = _DAT_1468b5d90;
        *(undefined4 *)((longlong)param_2 + 0x114c) = DAT_1468b5d98;
        uVar5 = DAT_1464aa81c;
        uVar4 = DAT_1464aa818;
        uVar3 = DAT_1464aa814;
        *(undefined4 *)(param_2 + 0x22c) = DAT_1464aa810;
        *(undefined4 *)((longlong)param_2 + 0x1164) = uVar3;
        *(undefined4 *)(param_2 + 0x22d) = uVar4;
        *(undefined4 *)((longlong)param_2 + 0x116c) = uVar5;
        uVar5 = DAT_1464aa81c;
        uVar4 = DAT_1464aa818;
        uVar3 = DAT_1464aa814;
        *(undefined4 *)(param_2 + 0x22e) = DAT_1464aa810;
        *(undefined4 *)((longlong)param_2 + 0x1174) = uVar3;
        *(undefined4 *)(param_2 + 0x22f) = uVar4;
        *(undefined4 *)((longlong)param_2 + 0x117c) = uVar5;
        plVar1 = (longlong *)param_2[0x237];
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
        }
        lVar2 = *param_2;
        param_2[0x237] = 0;
        local_28[2] = 0;
        local_28[3] = 0;
        puVar7 = (undefined8 *)FName::FName(local_res10,L"Navigate",1);
        (**(code **)(lVar2 + 0x4e8))(param_2,*puVar7,local_28 + 2);
        local_28[0] = 0;
        local_28[1] = 6;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        FGenericPlatformString::Memcpy(local_28[0],L"skins",0xc);
        FUN_142088cf0(param_2[0x1df],local_28);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        if (param_2[0x1e2] != 0) {
          cVar6 = FUN_142ebe120(param_2);
          if (cVar6 != '\0') {
            cVar6 = FUN_142ebdd70(param_2);
            if (cVar6 == '\0') {
              (**(code **)(*(longlong *)param_2[0x1e2] + 0x278))((longlong *)param_2[0x1e2],0);
            }
          }
        }
        plVar1 = param_2 + 0x189;
        *(undefined1 *)(param_2 + 0x238) = 1;
        param_2[0x237] = (longlong)plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
        }
      }
      LOCK();
      *(undefined4 *)(param_2 + 0xb1) = 1;
      UNLOCK();
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140f69580 FUN_140f69580 body=126 status=ok
// SIG undefined FUN_140f69580(void)

undefined8 FUN_140f69580(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res18 [16];
  undefined8 local_18;
  undefined8 local_10;
  
  if ((*(char *)((longlong)param_3 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_3)) {
    if (param_2 != (longlong *)0x0) {
      lVar1 = *param_2;
      local_18 = 0;
      local_10 = 0;
      puVar2 = (undefined8 *)FName::FName(local_res18,L"Navigate",1);
      (**(code **)(lVar1 + 0x4e8))(param_2,*puVar2,&local_18);
      FUN_140f68240(param_2,(int)param_2[0x236]);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 140f69600 FUN_140f69600 body=408 status=ok
// SIG undefined FUN_140f69600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140f69600(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  byte *pbVar6;
  ulonglong uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_888 [32];
  int local_868 [2];
  undefined4 local_860;
  undefined4 local_85c;
  undefined8 local_858;
  undefined8 local_850;
  undefined8 local_848;
  longlong *local_840;
  wchar_t local_838 [1024];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_888;
  bVar11 = false;
  pbVar6 = (byte *)FName::GetComparisonNameEntry(param_3 + 2);
  if (pbVar6 != (byte *)0x0) {
    pwVar9 = L"GbxMenu_DpadAxisY";
    iVar10 = 0;
    local_868[0] = 0;
    cVar4 = FName::SplitNameWithCheck(L"GbxMenu_DpadAxisY",local_838,0x400,local_868);
    if (cVar4 != '\0') {
      pwVar9 = local_838;
      iVar10 = local_868[0] + 1;
    }
    if (iVar10 == param_3[3]) {
      if ((*pbVar6 & 1) == 0) {
        iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(pwVar9,pbVar6 + 0x10);
      }
      else {
        iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
      }
      bVar11 = iVar10 == 0;
    }
  }
  if (((*(ulonglong *)(param_3 + 2) == DAT_146872c10) || (bVar11)) &&
     (lVar8 = *(longlong *)(param_1 + 0xa8), lVar8 != 0)) {
    local_860 = *param_3;
    local_85c = param_3[1];
    local_850 = *(undefined8 *)(param_3 + 4);
    local_848 = *(undefined8 *)(param_3 + 6);
    local_840 = *(longlong **)(param_3 + 8);
    if (local_840 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_840 + 1) = (int)local_840[1] + 1;
      UNLOCK();
      lVar8 = *(longlong *)(param_1 + 0xa8);
    }
    local_858 = DAT_146872c20;
    bVar5 = FUN_142f0b080(lVar8,&local_860);
    plVar3 = local_840;
    if (local_840 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_840 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_840)(local_840);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    uVar7 = (ulonglong)bVar5;
  }
  else {
    uVar7 = *(ulonglong *)(param_3 + 2) & 0xffffffffffffff00;
  }
  return uVar7;
}



// FUNCTION 140f697a0 FUN_140f697a0 body=170 status=ok
// SIG undefined FUN_140f697a0(void)

void FUN_140f697a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  if (((*(char *)(param_1 + 0xef0) != '\0') && (*(char *)(param_1 + 0xef1) != '\0')) &&
     (*(char *)(param_1 + 0xef2) != '\0')) {
    FUN_140f85ee0();
    FUN_142ecd4d0(param_1);
    if ((*(longlong *)(param_1 + 0xf00) != 0) &&
       (cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x106c), cVar3 != '\0')) {
      lVar1 = *(longlong *)(param_1 + 0xf00);
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x106c);
      (**(code **)(*(longlong *)(lVar1 + 0x1b0) + 8))(lVar1 + 0x1b0,uVar2,0,0);
    }
    FUN_140f68240(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140f69850 FUN_140f69850 body=47 status=ok
// SIG undefined FUN_140f69850(void)

undefined4 FUN_140f69850(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong **)(param_1 + 0xd50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xd50) + 0x300))();
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140f69880 FUN_140f69880 body=437 status=ok
// SIG undefined FUN_140f69880(void)

void FUN_140f69880(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  lVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x106c);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = APlayArea::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar2 = *(longlong *)(lVar2 + 0x118);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = FUN_14149b100();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x105c);
  if (lVar3 != 0) {
    lVar4 = ANavLinkProxy::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140f69981;
  }
  lVar3 = 0;
LAB_140f69981:
  if (((*(longlong *)(lVar2 + 0x930) != param_2) && (lVar3 != 0)) && ((int)param_1[0x20b] != -1)) {
    local_28 = 0;
    local_20 = 0;
    lVar4 = *param_1;
    puVar5 = (undefined8 *)FName::FName(local_res8,L"Confirm",1);
    (**(code **)(lVar4 + 0x4e8))(param_1,*puVar5,&local_28);
    FUN_1414302b0(lVar3,param_1 + 0x20b,param_2);
    if (DAT_14686b371 == '\0') {
      FUN_140bfbc60(&DAT_14686b370);
      DAT_14686b371 = '\x01';
    }
    FUN_140c057a0(&DAT_14686b370,param_1,lVar2,param_2);
  }
  return;
}



// FUNCTION 140f69a60 FUN_140f69a60 body=121 status=ok
// SIG undefined FUN_140f69a60(void)

void FUN_140f69a60(longlong param_1)

{
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    local_18[1] = 6;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18[0],6,"press",6,0x3f);
    FUN_142088910(*(undefined8 *)(param_1 + 0x1e8),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f69ae0 FUN_140f69ae0 body=32 status=ok
// SIG undefined FUN_140f69ae0(void)

undefined1 FUN_140f69ae0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x1e8) != '\0') &&
     (*(float *)(param_1 + 0x1ec) <= 1e-08 && *(float *)(param_1 + 0x1ec) != 1e-08)) {
    return 1;
  }
  return 0;
}



// FUNCTION 140f69b00 FUN_140f69b00 body=176 status=ok
// SIG undefined FUN_140f69b00(void)

undefined1 FUN_140f69b00(longlong param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x228));
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x220);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x228));
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x218));
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x20c);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x218));
  if ((((cVar2 != '\0') || (cVar1 != '\0')) ||
      ((*(char *)(param_1 + 0x1e8) != '\0' && (1e-08 < *(float *)(param_1 + 0x1ec))))) ||
     (*(char *)(param_1 + 0x1f5) != '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 140f69bb0 FUN_140f69bb0 body=379 status=ok
// SIG undefined FUN_140f69bb0(void)

void FUN_140f69bb0(longlong param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  wint_t wVar3;
  wint_t wVar4;
  undefined8 *puVar5;
  int iVar6;
  wint_t *pwVar7;
  undefined2 *puVar8;
  longlong local_28 [2];
  
  bVar2 = false;
  iVar6 = 0;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  if (param_2 == '\0') {
    puVar5 = (undefined8 *)FUN_142eeb970(*(longlong *)(param_1 + 0x20),local_28);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar5;
    }
    pwVar7 = &DAT_144630110;
    do {
      wVar3 = *(wint_t *)((longlong)(puVar8 + -0xa2318088) + (longlong)pwVar7);
      if ((wVar3 == 0) && (*pwVar7 == 0)) goto LAB_140f69c4e;
      if (wVar3 != *pwVar7) {
        wVar3 = towlower(wVar3);
        wVar4 = towlower(*pwVar7);
        if (wVar3 != wVar4) goto LAB_140f69c46;
      }
      pwVar7 = pwVar7 + 1;
    } while( true );
  }
LAB_140f69c66:
  bVar1 = false;
LAB_140f69c68:
  if ((bVar2) && (local_28[0] != 0)) {
    FMemory::Free();
  }
  local_28[0] = 0;
  if (bVar1) {
    local_28[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_28[0],5,&DAT_14462ee44,5,0x3f);
    FUN_142088910(*(undefined8 *)(param_1 + 0x20),local_28);
  }
  else {
    local_28[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_28[0],4,&DAT_14461d414,4,0x3f);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x20),local_28);
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
LAB_140f69c46:
  iVar6 = (uint)wVar3 - (uint)wVar4;
LAB_140f69c4e:
  bVar2 = true;
  if (iVar6 != 0) {
    bVar1 = true;
    goto LAB_140f69c68;
  }
  goto LAB_140f69c66;
}



// FUNCTION 140f69d30 FUN_140f69d30 body=110 status=ok
// SIG undefined FUN_140f69d30(void)

void FUN_140f69d30(longlong param_1)

{
  longlong local_18 [2];
  
  if (*(char *)(param_1 + 0x188) != '\0') {
    *(undefined1 *)(param_1 + 0x188) = 0;
    local_18[0] = 0;
    local_18[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"hide",10);
    FUN_142088910(param_1,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f69da0 FUN_140f69da0 body=140 status=ok
// SIG undefined FUN_140f69da0(void)

void FUN_140f69da0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_140f62ad0;
  FUN_14208c4f0(param_1,local_58);
  return;
}



// FUNCTION 140f69e30 FUN_140f69e30 body=152 status=ok
// SIG undefined FUN_140f69e30(void)

void FUN_140f69e30(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong local_18 [2];
  
  param_1[4] = param_2;
  FWeakObjectPtr::operator=(param_1 + 3,param_3);
  (**(code **)(*param_1 + 0x38))();
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_3 + 0xa58);
  }
  if ((*(longlong *)(DAT_146b33f38 + 0x90) != 0) && (lVar1 != 0)) {
    FName::ToString(lVar1 + 0x88,local_18);
    FUN_140f702b0(param_1,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f69ed0 FUN_140f69ed0 body=2490 status=ok
// SIG undefined FUN_140f69ed0(void)

void FUN_140f69ed0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong *local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  undefined8 local_100;
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
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xef8) != 0)) {
    local_168 = 0;
    local_160 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
    FGenericPlatformString::Memcpy(local_168,L"elementalContainer",0x26);
    local_178 = (longlong *)0x0;
    local_170 = 0;
    FUN_140e98b90(*(undefined8 *)(param_2 + 0xef8),param_1 + 8,&local_168,0,6,&local_178);
    plVar7 = local_178;
    for (iVar8 = (int)local_170; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_178 != (longlong *)0x0) {
      FMemory::Free(local_178);
    }
    if (local_168 != 0) {
      FMemory::Free();
    }
    local_148 = 0;
    local_140 = 0x21;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    FGenericPlatformString::Memcpy(local_148,L"elementalContainer.elementalTilt",0x42);
    plVar7 = (longlong *)(param_1 + 0xe0);
    local_158 = (longlong *)0x0;
    local_150 = 0;
    FUN_140e98b90(*(undefined8 *)(param_2 + 0xef8),plVar7,&local_148,0,6,&local_158);
    plVar6 = local_158;
    for (iVar8 = (int)local_150; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_158 != (longlong *)0x0) {
      FMemory::Free(local_158);
    }
    if (local_148 != 0) {
      FMemory::Free();
    }
    if (*plVar7 != 0) {
      uVar2 = FUN_142085870(*plVar7,local_f8,L"elementalText.elementalDamageText");
      FUN_142ede260(param_1 + 0xe8,uVar2);
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_f0 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar1 = (int *)((longlong)local_f0 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
      puVar3 = (undefined8 *)
               FUN_142085870(*plVar7,local_e8,L"elementalText.elementalDamageWrapper.elementalIcon")
      ;
      *(undefined8 *)(param_1 + 0x100) = *puVar3;
      plVar6 = (longlong *)puVar3[1];
      plVar5 = *(longlong **)(param_1 + 0x108);
      if (plVar6 != plVar5) {
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
          UNLOCK();
          plVar5 = *(longlong **)(param_1 + 0x108);
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        *(longlong **)(param_1 + 0x108) = plVar6;
      }
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_e0 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar1 = (int *)((longlong)local_e0 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
      uVar2 = FUN_142085870(*plVar7,local_d8,L"damageTypeText");
      FUN_142ede260(param_1 + 0x110,uVar2);
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_d0 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)local_d0 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
      }
      uVar2 = FUN_142085870(*plVar7,local_c8,L"damageEffectText");
      FUN_142ede260(param_1 + 0x128,uVar2);
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_c0 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
      uVar2 = FUN_142085870(*plVar7,local_b8,L"damageFrameHealth.healthDamageText");
      FUN_142ede260(param_1 + 0x140,uVar2);
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_b0 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)local_b0 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
      puVar3 = (undefined8 *)FUN_142085870(*plVar7,local_a8,L"damageFrameHealth.damageRating");
      *(undefined8 *)(param_1 + 0x158) = *puVar3;
      plVar6 = (longlong *)puVar3[1];
      plVar5 = *(longlong **)(param_1 + 0x160);
      if (plVar6 != plVar5) {
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
          UNLOCK();
          plVar5 = *(longlong **)(param_1 + 0x160);
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        *(longlong **)(param_1 + 0x160) = plVar6;
      }
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_a0 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      uVar2 = FUN_142085870(*plVar7,local_98,L"damageFrameShield.shieldDamageText");
      FUN_142ede260(param_1 + 0x168,uVar2);
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_90 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
      puVar3 = (undefined8 *)FUN_142085870(*plVar7,local_88,L"damageFrameShield.damageRating");
      *(undefined8 *)(param_1 + 0x180) = *puVar3;
      plVar6 = (longlong *)puVar3[1];
      plVar5 = *(longlong **)(param_1 + 0x188);
      if (plVar6 != plVar5) {
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
          UNLOCK();
          plVar5 = *(longlong **)(param_1 + 0x188);
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        *(longlong **)(param_1 + 0x188) = plVar6;
      }
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_80 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
      uVar2 = FUN_142085870(*plVar7,local_78,L"damageFrameArmor.armorDamageText");
      FUN_142ede260(param_1 + 400,uVar2);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_70 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      puVar3 = (undefined8 *)FUN_142085870(*plVar7,local_68,L"damageFrameArmor.damageRating");
      *(undefined8 *)(param_1 + 0x1a8) = *puVar3;
      plVar6 = (longlong *)puVar3[1];
      plVar5 = *(longlong **)(param_1 + 0x1b0);
      if (plVar6 != plVar5) {
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
          UNLOCK();
          plVar5 = *(longlong **)(param_1 + 0x1b0);
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        *(longlong **)(param_1 + 0x1b0) = plVar6;
      }
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_60 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      FUN_142085870(*plVar7,&local_118,L"elementalSwap");
      plVar7 = local_110;
      if (local_118 != 0) {
        *(longlong *)(param_1 + 0x1b8) = local_118;
        plVar6 = *(longlong **)(param_1 + 0x1c0);
        if (local_110 != plVar6) {
          if (local_110 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_110 + 0xc) = *(int *)((longlong)local_110 + 0xc) + 1;
            UNLOCK();
            plVar6 = *(longlong **)(param_1 + 0x1c0);
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
          *(longlong **)(param_1 + 0x1c0) = plVar7;
        }
        uVar2 = FUN_1420392d0(local_118,local_58,L"elementalDescription");
        FUN_142ede260(param_1 + 0x1c8,uVar2);
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_50 + 1;
          lVar4 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
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
        uVar2 = FUN_1420392d0(local_118,local_48,L"secondaryElemental");
        FUN_142ede260(param_1 + 0x1e0,uVar2);
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_40 + 1;
          lVar4 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)local_40 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_40 + 8))(local_40,1);
            }
          }
        }
        local_128 = 0;
        local_120 = 0x14;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
        FGenericPlatformString::Memcpy(local_128,L"changeViewHint.hint",0x28);
        local_138 = (longlong *)0x0;
        local_130 = 0;
        FUN_140e98440(local_118,param_1 + 0x1f8,&local_128,0,6,&local_138);
        plVar7 = local_138;
        for (iVar8 = (int)local_130; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          plVar7 = plVar7 + 2;
        }
        if (local_138 != (longlong *)0x0) {
          FMemory::Free(local_138);
        }
        if (local_128 != 0) {
          FMemory::Free();
        }
      }
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_110 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)local_110 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
          }
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x148) != 0) && (*(longlong *)(param_1 + 0x150) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x150) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (0 < iVar8) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x140,param_1 + 0x10,1,0);
      }
    }
    if ((*(longlong *)(param_1 + 0x170) != 0) && (*(longlong *)(param_1 + 0x178) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x178) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (0 < iVar8) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x168,param_1 + 0x28,1,0);
      }
    }
    if ((*(longlong *)(param_1 + 0x198) != 0) && (*(longlong *)(param_1 + 0x1a0) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x1a0) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (0 < iVar8) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 400,param_1 + 0x40,1,0);
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x1f8);
    if (lVar4 != 0) {
      local_100 = 0;
      local_108 = lVar4;
      uVar2 = UBlendableInterface::GetPrivateStaticClass();
      local_100 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar2);
      FUN_142ecff00(param_2,&local_108,DAT_146872e60);
      FUN_142ed3950(*(undefined8 *)(param_1 + 0x1f8),0);
    }
    if ((*(longlong *)(param_1 + 0x1e8) != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x1f0) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (0 < iVar8) {
        iVar8 = *(int *)(param_1 + 0x210);
        if ((iVar8 < 0) || (*(int *)(param_1 + 0x60) <= iVar8)) {
          lVar4 = FUN_1404b03b0();
        }
        else {
          lVar4 = *(longlong *)(param_1 + 0x58) + (longlong)iVar8 * 0x18;
        }
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x1e0,lVar4,1,0);
      }
    }
  }
  return;
}



// FUNCTION 140f6a890 FUN_140f6a890 body=1175 status=ok
// SIG undefined FUN_140f6a890(void)

void FUN_140f6a890(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((param_2 != 0) && (lVar2 = *(longlong *)(param_2 + 0xef8), lVar2 != 0)) {
    local_a8 = 0;
    local_a0 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    FGenericPlatformString::Memcpy(local_a8,L"itemCardWrapper",0x20);
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    FUN_140e98b90(lVar2,param_1 + 8,&local_a8,0,6,&local_b8);
    plVar6 = local_b8;
    for (iVar7 = (int)local_b0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
    FUN_142085870(lVar2,&local_78,L"weaponSkinContainer");
    plVar6 = local_70;
    if (local_78 != 0) {
      *(longlong *)(param_1 + 0x28) = local_78;
      plVar5 = *(longlong **)(param_1 + 0x30);
      if (local_70 != plVar5) {
        if (local_70 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
          UNLOCK();
          plVar5 = *(longlong **)(param_1 + 0x30);
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        *(longlong **)(param_1 + 0x30) = plVar6;
      }
      FUN_1420392d0(local_78,&local_c8,L"weaponSkinIndicator");
      plVar6 = local_c0;
      if (local_c8 != 0) {
        *(longlong *)(param_1 + 0x38) = local_c8;
        plVar5 = *(longlong **)(param_1 + 0x40);
        if (local_c0 != plVar5) {
          if (local_c0 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_c0 + 0xc) = *(int *)((longlong)local_c0 + 0xc) + 1;
            UNLOCK();
            plVar5 = *(longlong **)(param_1 + 0x40);
          }
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
          *(longlong **)(param_1 + 0x40) = plVar6;
        }
        puVar3 = (undefined8 *)FUN_1420392d0(local_c8,local_58,L"inner.newIndicator");
        *(undefined8 *)(param_1 + 0x48) = *puVar3;
        plVar6 = (longlong *)puVar3[1];
        plVar5 = *(longlong **)(param_1 + 0x50);
        if (plVar6 != plVar5) {
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
            UNLOCK();
            plVar5 = *(longlong **)(param_1 + 0x50);
          }
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
          *(longlong **)(param_1 + 0x50) = plVar6;
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_50 + 1;
          lVar2 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
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
        uVar4 = FUN_1420392d0(local_c8,local_48,L"inner.weaponSkinTitle");
        FUN_142ede260(param_1 + 0x58,uVar4);
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_40 + 1;
          lVar2 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)local_40 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_40 + 8))(local_40,1);
            }
          }
        }
        uVar4 = FUN_1420392d0(local_c8,local_38,L"inner.weaponSkinText");
        FUN_142ede260(param_1 + 0x70,uVar4);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_30 + 1;
          lVar2 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar1 = (int *)((longlong)local_30 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_30 + 8))(local_30,1);
            }
          }
        }
        local_88 = 0;
        local_80 = 0x10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        FGenericPlatformString::Memcpy(local_88,L"inner.skinsHint",0x20);
        local_98 = (longlong *)0x0;
        local_90 = 0;
        uVar4 = FUN_140f57150(local_c8,&local_88,0,6,&local_98);
        *(undefined8 *)(param_1 + 0x88) = uVar4;
        plVar6 = local_98;
        for (iVar7 = (int)local_90; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          plVar6 = plVar6 + 2;
        }
        if (local_98 != (longlong *)0x0) {
          FMemory::Free(local_98);
        }
        if (local_88 != 0) {
          FMemory::Free();
        }
      }
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_c0 + 1;
        lVar2 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
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
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_70 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x88);
    if (lVar2 != 0) {
      local_60 = 0;
      local_68 = lVar2;
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      local_60 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar4);
      FUN_142ecff00(param_2,&local_68,DAT_146872e58);
      FUN_142ed3950(*(undefined8 *)(param_1 + 0x88),0);
    }
    if ((*(longlong *)(param_1 + 0x60) != 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x68) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (0 < iVar7) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x58,param_1 + 0x10,1,0);
      }
    }
  }
  return;
}



// FUNCTION 140f6ad30 FUN_140f6ad30 body=2294 status=ok
// SIG undefined FUN_140f6ad30(void)

void FUN_140f6ad30(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  short *psVar10;
  int iVar11;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_1b8;
  ulonglong local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
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
  longlong local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  short *local_d8;
  int local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xef8) != 0)) {
    iVar11 = 0;
    local_198 = 0;
    local_190 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
    FGenericPlatformString::Memcpy(local_198,L"manufacturerContainer",0x2c);
    local_1a8 = (longlong *)0x0;
    local_1a0 = 0;
    local_res20 = 0;
    FUN_140e98b90(*(undefined8 *)(param_2 + 0xef8),param_1 + 8,&local_198,0,6,&local_1a8);
    plVar9 = local_1a8;
    for (iVar7 = (int)local_1a0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_1a8 != (longlong *)0x0) {
      FMemory::Free(local_1a8);
    }
    if (local_198 != 0) {
      FMemory::Free();
    }
    local_178 = 0;
    local_170 = 0x27;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
    FGenericPlatformString::Memcpy(local_178,L"manufacturerContainer.manufacturerTilt",0x4e);
    local_188 = (longlong *)0x0;
    local_180 = 0;
    local_b8 = 0;
    FUN_140e98b90(*(undefined8 *)(param_2 + 0xef8),param_1 + 0x58,&local_178,0,6,&local_188);
    plVar9 = local_188;
    for (iVar7 = (int)local_180; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free(local_188);
    }
    if (local_178 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x58) != 0) {
      puVar3 = (undefined8 *)
               FUN_142085870(*(longlong *)(param_1 + 0x58),local_88,
                             L"manufacturerLogoWrapper.manufacturerLogo");
      *(undefined8 *)(param_1 + 0x60) = *puVar3;
      plVar9 = (longlong *)puVar3[1];
      plVar6 = *(longlong **)(param_1 + 0x68);
      if (plVar9 != plVar6) {
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
          UNLOCK();
          plVar6 = *(longlong **)(param_1 + 0x68);
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        *(longlong **)(param_1 + 0x68) = plVar9;
      }
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_80 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
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
      uVar4 = FUN_142085870(*(undefined8 *)(param_1 + 0x58),local_78,L"manufacturerName");
      FUN_142ede260(param_1 + 0x70,uVar4);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_70 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      local_158 = 0;
      local_150 = 0x1e;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
      FGenericPlatformString::Memcpy(local_158,L"playCommercialHint.HintWidget",0x3c);
      local_168 = (longlong *)0x0;
      local_160 = 0;
      local_b0 = 0;
      FUN_140e98630(*(undefined8 *)(param_1 + 0x58),param_1 + 0x88,&local_158,0,6,&local_168);
      plVar9 = local_168;
      for (iVar7 = (int)local_160; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_168 != (longlong *)0x0) {
        FMemory::Free(local_168);
      }
      if (local_158 != 0) {
        FMemory::Free();
      }
      uVar4 = FUN_142085870(*(undefined8 *)(param_1 + 0x58),local_68,L"playCommercialText");
      FUN_142ede260(param_1 + 0x90,uVar4);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_60 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      local_138 = 0;
      local_130 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
      FGenericPlatformString::Memcpy(local_138,L"manufacturerText",0x22);
      local_148 = (longlong *)0x0;
      local_140 = 0;
      local_a8 = 0;
      FUN_140e99270(*(undefined8 *)(param_1 + 0x58),param_1 + 0xa8,&local_138,0,6,&local_148);
      plVar9 = local_148;
      for (iVar7 = (int)local_140; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_148 != (longlong *)0x0) {
        FMemory::Free(local_148);
      }
      if (local_138 != 0) {
        FMemory::Free();
      }
      local_118 = 0;
      local_110 = 0x1b;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
      FGenericPlatformString::Memcpy(local_118,L"scrollBarWrapper.scrollBar",0x36);
      local_128 = (longlong *)0x0;
      local_120 = 0;
      local_a0 = 0;
      FUN_140e98f00(*(undefined8 *)(param_1 + 0x58),param_1 + 0xb0,&local_118,0,6,&local_128);
      plVar9 = local_128;
      for (iVar7 = (int)local_120; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_128 != (longlong *)0x0) {
        FMemory::Free(local_128);
      }
      if (local_118 != 0) {
        FMemory::Free();
      }
      local_f8 = 0;
      local_f0 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
      FGenericPlatformString::Memcpy(local_f8,L"gridArea",0x12);
      local_108 = (longlong *)0x0;
      local_100 = 0;
      local_98 = 0;
      FUN_140e98b90(*(undefined8 *)(param_1 + 0x58),param_1 + 0xb8,&local_f8,0,6,&local_108);
      plVar9 = local_108;
      for (iVar7 = (int)local_100; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_108 != (longlong *)0x0) {
        FMemory::Free(local_108);
      }
      if (local_f8 != 0) {
        FMemory::Free();
      }
      uVar4 = FUN_142085870(*(undefined8 *)(param_1 + 0x58),local_58,L"manufacturerChallenges");
      FUN_142ede260(param_1 + 0xc0,uVar4);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_50 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
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
      uVar4 = FUN_142085870(*(undefined8 *)(param_1 + 0x58),local_48,L"challengeText");
      FUN_142ede260(param_1 + 0xd8,uVar4);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_40 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      local_90 = 0;
      do {
        local_res18 = 0;
        FString::PrintfImpl(&local_d8,L"challenge%d",iVar11);
        local_1b8 = 0;
        psVar10 = &DAT_143f3eda8;
        if (local_d0 != 0) {
          psVar10 = local_d8;
        }
        local_1b0 = 0;
        if ((psVar10 != (short *)0x0) && (*psVar10 != 0)) {
          lVar5 = -1;
          do {
            lVar2 = lVar5 + 1;
            lVar5 = lVar5 + 1;
          } while (psVar10[lVar2] != 0);
          uVar8 = (int)lVar5 + 1;
          local_1b0 = (ulonglong)uVar8;
          if (0 < (int)uVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
          }
          FGenericPlatformString::Memcpy(local_1b8,psVar10,(longlong)(int)uVar8 * 2);
        }
        local_e8 = (longlong *)0x0;
        local_e0 = 0;
        FUN_140f58600(*(undefined8 *)(param_1 + 0x58),&local_res18,&local_1b8,0,6,&local_e8);
        plVar9 = local_e8;
        for (iVar7 = (int)local_e0; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (local_e8 != (longlong *)0x0) {
          FMemory::Free(local_e8);
        }
        if (local_1b8 != 0) {
          FMemory::Free();
        }
        if (local_d8 != (short *)0x0) {
          FMemory::Free();
        }
        lVar5 = local_res18;
        if (local_res18 != 0) {
          iVar7 = *(int *)(param_1 + 0xf8);
          *(int *)(param_1 + 0xf8) = iVar7 + 1;
          if (*(int *)(param_1 + 0xfc) < iVar7 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xf0,iVar7);
          }
          *(longlong *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar7 * 8) = lVar5;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 4);
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        FUN_142f118f0(*(longlong *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),
                      *(undefined8 *)(param_1 + 0xb8));
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x88);
    if (lVar5 != 0) {
      local_c0 = 0;
      local_c8 = lVar5;
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      local_c0 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar4);
      FUN_142ecff00(param_2,&local_c8,DAT_146872b98);
      FUN_142ed3950(*(undefined8 *)(param_1 + 0x88),0);
    }
    if ((*(longlong *)(param_1 + 0x98) != 0) && (*(longlong *)(param_1 + 0xa0) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0xa0) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (0 < iVar7) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x90,param_1 + 0x10,1,0);
      }
    }
    if ((*(longlong *)(param_1 + 200) != 0) && (*(longlong *)(param_1 + 0xd0) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (0 < iVar7) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0xc0,param_1 + 0x28,1,0);
      }
    }
    if ((*(longlong *)(param_1 + 0xe0) != 0) && (*(longlong *)(param_1 + 0xe8) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (0 < iVar7) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0xd8,param_1 + 0x40,1,0);
      }
    }
  }
  return;
}



// FUNCTION 140f6b630 FUN_140f6b630 body=2682 status=ok
// SIG undefined FUN_140f6b630(void)

void FUN_140f6b630(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  longlong *plVar12;
  short *psVar13;
  int iVar14;
  uint uVar15;
  wchar_t *pwVar16;
  bool bVar17;
  undefined8 local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_1b8;
  ulonglong local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
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
  longlong local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  short *local_e8;
  int local_e0;
  longlong local_d8;
  wchar_t *local_d0;
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
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  
  pwVar10 = (wchar_t *)0x0;
  *(undefined4 *)(param_1 + 400) = 0;
  local_res10 = param_2;
  if (0x7fffffff < *(uint *)(param_1 + 0x194)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x188,0);
  }
  if (*(int *)(param_1 + 0x194) < *(int *)(param_1 + 0xd4)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x188);
  }
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xef8) != 0)) {
    local_198 = 0;
    local_190 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
    FGenericPlatformString::Memcpy(local_198,L"weaponPartsContainer",0x2a);
    local_1a8 = (longlong *)0x0;
    local_1a0 = 0;
    local_c8 = 0;
    FUN_140e98b90(*(undefined8 *)(param_2 + 0xef8),param_1 + 8,&local_198,0,6,&local_1a8);
    plVar12 = local_1a8;
    for (iVar14 = (int)local_1a0; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_1a8 != (longlong *)0x0) {
      FMemory::Free(local_1a8);
    }
    if (local_198 != 0) {
      FMemory::Free();
    }
    local_178 = 0;
    local_170 = 0x25;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
    FGenericPlatformString::Memcpy(local_178,L"weaponPartsContainer.weaponPartsTilt",0x4a);
    puVar2 = (undefined8 *)(param_1 + 0x108);
    local_188 = (longlong *)0x0;
    local_180 = 0;
    local_c0 = 0;
    cVar4 = FUN_140e98b90(*(undefined8 *)(param_2 + 0xef8),puVar2,&local_178,0,6,&local_188);
    plVar12 = local_188;
    for (iVar14 = (int)local_180; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free(local_188);
    }
    if (local_178 != 0) {
      FMemory::Free();
    }
    param_2 = local_res10;
    if (cVar4 != '\0') {
      uVar5 = FUN_142085870(*puVar2,local_a0,L"partTitle");
      FUN_142ede260(param_1 + 0x110,uVar5);
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_98 + 1;
        lVar7 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar1 = (int *)((longlong)local_98 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
      }
      uVar5 = FUN_142085870(*puVar2,local_90,L"effectText");
      FUN_142ede260(param_1 + 0x128,uVar5);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_88 + 1;
        lVar7 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)local_88 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
      uVar5 = FUN_142085870(*puVar2,local_80,L"partName");
      FUN_142ede260(param_1 + 0x140,uVar5);
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_78 + 1;
        lVar7 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)local_78 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_78 + 8))(local_78,1);
          }
        }
      }
      local_158 = 0;
      local_150 = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
      FGenericPlatformString::Memcpy(local_158,L"partsList",0x14);
      local_168 = (longlong *)0x0;
      local_160 = 0;
      local_b8 = 0;
      FUN_140f58970(*puVar2,param_1 + 0x158,&local_158,0,6,&local_168);
      plVar12 = local_168;
      for (iVar14 = (int)local_160; iVar14 != 0; iVar14 = iVar14 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
      if (local_168 != (longlong *)0x0) {
        FMemory::Free(local_168);
      }
      if (local_158 != 0) {
        FMemory::Free();
      }
      local_138 = 0;
      local_130 = 0x1b;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
      FGenericPlatformString::Memcpy(local_138,L"scrollBarWrapper.scrollBar",0x36);
      local_148 = (longlong *)0x0;
      local_140 = 0;
      local_b0 = 0;
      FUN_140e98f00(*puVar2,param_1 + 0x160,&local_138,0,6,&local_148);
      plVar12 = local_148;
      for (iVar14 = (int)local_140; iVar14 != 0; iVar14 = iVar14 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
      if (local_148 != (longlong *)0x0) {
        FMemory::Free(local_148);
      }
      if (local_138 != 0) {
        FMemory::Free();
      }
      puVar6 = (undefined8 *)FUN_142085870(*puVar2,local_70,L"lineAnchor");
      *(undefined8 *)(param_1 + 0x168) = *puVar6;
      plVar12 = (longlong *)puVar6[1];
      plVar11 = *(longlong **)(param_1 + 0x170);
      if (plVar12 != plVar11) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
          UNLOCK();
          plVar11 = *(longlong **)(param_1 + 0x170);
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
        *(longlong **)(param_1 + 0x170) = plVar12;
      }
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_68 + 1;
        lVar7 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
      FUN_142085870(*puVar2,&local_118,L"weaponBG");
      plVar12 = local_110;
      if (local_118 != 0) {
        *(longlong *)(param_1 + 0x178) = local_118;
        plVar11 = *(longlong **)(param_1 + 0x180);
        if (local_110 != plVar11) {
          if (local_110 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_110 + 0xc) = *(int *)((longlong)local_110 + 0xc) + 1;
            UNLOCK();
            plVar11 = *(longlong **)(param_1 + 0x180);
          }
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
          *(longlong **)(param_1 + 0x180) = plVar12;
        }
        uVar5 = FUN_1420392d0(local_118,local_60,L"partDescription");
        FUN_142ede260(param_1 + 0x198,uVar5);
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_58 + 1;
          lVar7 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar1 = (int *)((longlong)local_58 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_58 + 8))(local_58,1);
            }
          }
        }
        if (0 < *(int *)(param_1 + 0xd4)) {
          local_a8 = 0;
          pwVar16 = pwVar10;
          do {
            local_res8 = 0;
            FString::PrintfImpl(&local_e8,L"statRow%d",pwVar16);
            local_1b0 = 0;
            psVar13 = &DAT_143f3eda8;
            if (local_e0 != 0) {
              psVar13 = local_e8;
            }
            local_1b8 = 0;
            if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
              lVar7 = -1;
              do {
                lVar9 = lVar7 + 1;
                lVar7 = lVar7 + 1;
              } while (psVar13[lVar9] != 0);
              uVar15 = (int)lVar7 + 1;
              local_1b0 = (ulonglong)uVar15;
              if (0 < (int)uVar15) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
              }
              FGenericPlatformString::Memcpy(local_1b8,psVar13,(longlong)(int)uVar15 * 2);
            }
            local_128 = (longlong *)0x0;
            local_120 = 0;
            cVar4 = FUN_140f59050(local_118,&local_res8,&local_1b8,0,6,&local_128);
            plVar12 = local_128;
            for (iVar14 = (int)local_120; iVar14 != 0; iVar14 = iVar14 + -1) {
              if (*plVar12 != 0) {
                FMemory::Free();
              }
              plVar12 = plVar12 + 2;
            }
            if (local_128 != (longlong *)0x0) {
              FMemory::Free(local_128);
            }
            if (local_1b8 != 0) {
              FMemory::Free();
            }
            if (local_e8 != (short *)0x0) {
              FMemory::Free();
            }
            if (cVar4 != '\0') {
              iVar14 = *(int *)(param_1 + 400);
              *(int *)(param_1 + 400) = iVar14 + 1;
              if (*(int *)(param_1 + 0x194) < iVar14 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (param_1 + 0x188,iVar14);
              }
              *(undefined8 *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar14 * 8) = local_res8;
            }
            uVar15 = (int)pwVar16 + 1;
            pwVar16 = (wchar_t *)(ulonglong)uVar15;
          } while ((int)uVar15 < *(int *)(param_1 + 0xd4));
        }
      }
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_110 + 1;
        lVar7 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)local_110 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
          }
        }
      }
      param_2 = local_res10;
      if (*(longlong *)(param_1 + 0x160) != 0) {
        FUN_142f0f790(*(longlong *)(param_1 + 0x160),1);
        param_2 = local_res10;
      }
    }
  }
  plVar12 = *(longlong **)(param_1 + 0x170);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    iVar14 = (int)plVar12[1];
    bVar17 = iVar14 == 0;
    if (bVar17) {
      *(int *)(plVar12 + 1) = 0;
      iVar14 = 0;
    }
    UNLOCK();
    while (!bVar17) {
      LOCK();
      bVar17 = iVar14 == (int)plVar12[1];
      if (bVar17) {
        *(int *)(plVar12 + 1) = iVar14 + 1;
      }
      UNLOCK();
      if (bVar17) {
        if (plVar12 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x168) != 0) {
            FUN_142056670(*(longlong *)(param_1 + 0x168),0);
          }
          LOCK();
          plVar11 = plVar12 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar14 = (int)plVar12[1];
      bVar17 = iVar14 == 0;
      if (bVar17) {
        *(int *)(plVar12 + 1) = 0;
        iVar14 = 0;
      }
      UNLOCK();
    }
  }
  if ((*(longlong *)(param_1 + 0x130) != 0) && (*(longlong *)(param_1 + 0x138) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x138) + 8);
    LOCK();
    iVar14 = *piVar1;
    if (iVar14 == 0) {
      *piVar1 = 0;
      iVar14 = 0;
    }
    UNLOCK();
    if (0 < iVar14) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x128,param_1 + 0xd8,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x148) != 0) && (*(longlong *)(param_1 + 0x150) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x150) + 8);
    LOCK();
    iVar14 = *piVar1;
    if (iVar14 == 0) {
      *piVar1 = 0;
      iVar14 = 0;
    }
    UNLOCK();
    if (0 < iVar14) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x140,param_1 + 0xf0,1,0);
    }
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_142ef29a0(*(longlong *)(param_1 + 0x158),param_1 + 0x10);
    if ((param_2 != 0) && (cVar4 = FUN_142ebdd70(param_2), cVar4 != '\0')) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x378) = *(undefined4 *)(param_1 + 0xd0);
    }
    FUN_142ed4250(*(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x160));
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxItemInspectionMenu::OnPartsListCellFocused",L"::")
    ;
    pwVar16 = pwVar10;
    while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar16 = pwVar3;
    }
    FName::FName(&local_res18,pwVar16 + 2,1);
    lVar7 = *(longlong *)(param_1 + 0x158);
    FWeakObjectPtr::operator=(lVar7 + 0x330,param_2);
    *(longlong *)(lVar7 + 0x338) = local_res18;
    local_res10 = 0;
    if ((local_res18 != 0) && (lVar9 = FWeakObjectPtr::Get(lVar7 + 0x330), lVar9 != 0)) {
      UObject::FindFunction(lVar9,*(undefined8 *)(lVar7 + 0x338));
    }
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxItemInspectionMenu::OnPartsListCellClicked",L"::")
    ;
    pwVar16 = pwVar10;
    while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar16 = pwVar3;
    }
    FName::FName(&local_res20,pwVar16 + 2,1);
    lVar7 = *(longlong *)(param_1 + 0x158);
    FWeakObjectPtr::operator=(lVar7 + 0x340,param_2);
    *(longlong *)(lVar7 + 0x348) = local_res20;
    local_res10 = 0;
    if ((local_res20 != 0) && (lVar9 = FWeakObjectPtr::Get(lVar7 + 0x340), lVar9 != 0)) {
      UObject::FindFunction(lVar9,*(undefined8 *)(lVar7 + 0x348));
    }
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    FWeakObjectPtr::operator=(&local_108,0);
    FWeakObjectPtr::operator=(&local_100,0);
    FWeakObjectPtr::operator=(&local_f8,0);
    FWeakObjectPtr::operator=(&local_f0,0);
    lVar7 = *(longlong *)(param_1 + 0x158);
    local_d8 = lVar7;
    if (lVar7 != 0) {
      uVar5 = UBlendableInterface::GetPrivateStaticClass();
      pwVar10 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar5);
    }
    local_d0 = pwVar10;
    FUN_142ecfd10(param_2,&local_d8,&local_108);
  }
  return;
}



// FUNCTION 140f6c0b0 FUN_140f6c0b0 body=2429 status=ok
// SIG undefined FUN_140f6c0b0(void)

void FUN_140f6c0b0(longlong param_1,longlong param_2)

{
  int *piVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  wchar_t *pwVar12;
  longlong local_res18;
  longlong local_res20;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xef8) != 0)) {
    pwVar12 = (wchar_t *)0x0;
    local_1c8 = 0;
    local_1c0 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
    FGenericPlatformString::Memcpy(local_1c8,L"skinWrapper",0x18);
    local_1d8 = (longlong *)0x0;
    local_1d0 = 0;
    local_b8 = 0;
    cVar4 = FUN_140e98b90(*(undefined8 *)(param_2 + 0xef8),param_1 + 8,&local_1c8,0,6,&local_1d8);
    plVar10 = local_1d8;
    for (iVar11 = (int)local_1d0; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_1d8 != (longlong *)0x0) {
      FMemory::Free(local_1d8);
    }
    if (local_1c8 != 0) {
      FMemory::Free();
    }
    if (cVar4 != '\0') {
      uVar5 = FUN_142085870(*(undefined8 *)(param_1 + 8),local_98,L"skinsDetails.weaponSkinsTitle");
      FUN_142ede260(param_1 + 0x168,uVar5);
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_90 + 1;
        lVar3 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
      local_1a8 = 0;
      local_1a0 = 0x1c;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
      FGenericPlatformString::Memcpy(local_1a8,L"skinsDetails.scrollBarSkins",0x38);
      local_1b8 = (longlong *)0x0;
      local_1b0 = 0;
      FUN_140e98f00(*(undefined8 *)(param_1 + 8),param_1 + 0x110,&local_1a8,0,6,&local_1b8);
      plVar10 = local_1b8;
      for (iVar11 = (int)local_1b0; iVar11 != 0; iVar11 = iVar11 + -1) {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 2;
      }
      if (local_1b8 != (longlong *)0x0) {
        FMemory::Free(local_1b8);
      }
      if (local_1a8 != 0) {
        FMemory::Free();
      }
      FUN_142085870(*(undefined8 *)(param_1 + 8),&local_138,L"skinsDetails.skinRarityText");
      plVar10 = local_130;
      if (local_138 != 0) {
        *(longlong *)(param_1 + 0x140) = local_138;
        plVar9 = *(longlong **)(param_1 + 0x148);
        if (local_130 != plVar9) {
          if (local_130 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_130 + 0xc) = *(int *)((longlong)local_130 + 0xc) + 1;
            UNLOCK();
            plVar9 = *(longlong **)(param_1 + 0x148);
          }
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
          *(longlong **)(param_1 + 0x148) = plVar10;
        }
        uVar5 = FUN_1420392d0(local_138,local_88,L"skinRarityTextField");
        FUN_142ede260(param_1 + 0x150,uVar5);
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_80 + 1;
          lVar3 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)local_80 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
            }
          }
        }
      }
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_130 + 1;
        lVar3 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)local_130 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
    }
    local_188 = 0;
    local_180 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
    FGenericPlatformString::Memcpy(local_188,L"skinGrid",0x12);
    plVar10 = (longlong *)(param_1 + 0x108);
    local_198 = (longlong *)0x0;
    local_190 = 0;
    local_b0 = 0;
    FUN_140f58ce0(*(undefined8 *)(param_2 + 0xef8),plVar10,&local_188,0,6,&local_198);
    plVar9 = local_198;
    for (iVar11 = (int)local_190; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_198 != (longlong *)0x0) {
      FMemory::Free(local_198);
    }
    if (local_188 != 0) {
      FMemory::Free();
    }
    local_168 = 0;
    local_160 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
    FGenericPlatformString::Memcpy(local_168,L"navArrowLeft",0x1a);
    local_178 = (longlong *)0x0;
    local_170 = 0;
    local_a8 = 0;
    FUN_140f15b10(*(undefined8 *)(param_2 + 0xef8),param_1 + 0x118,&local_168,0,6,&local_178);
    plVar9 = local_178;
    for (iVar11 = (int)local_170; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_178 != (longlong *)0x0) {
      FMemory::Free(local_178);
    }
    if (local_168 != 0) {
      FMemory::Free();
    }
    local_148 = 0;
    local_140 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    FGenericPlatformString::Memcpy(local_148,L"navArrowRight",0x1c);
    local_158 = (longlong *)0x0;
    local_150 = 0;
    local_a0 = 0;
    FUN_140f15b10(*(undefined8 *)(param_2 + 0xef8),param_1 + 0x120,&local_148,0,6,&local_158);
    plVar9 = local_158;
    for (iVar11 = (int)local_150; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_158 != (longlong *)0x0) {
      FMemory::Free(local_158);
    }
    if (local_148 != 0) {
      FMemory::Free();
    }
    uVar5 = FUN_142085870(*(undefined8 *)(param_2 + 0xef8),local_78,L"skinName");
    FUN_142ede260(param_1 + 0x128,uVar5);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_70 + 1;
      lVar3 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if (*plVar10 != 0) {
      FUN_142ef29a0(*plVar10,param_1 + 0x10);
      cVar4 = FUN_142ebdd70(param_2);
      if (cVar4 != '\0') {
        *(undefined4 *)(*plVar10 + 0x378) = *(undefined4 *)(param_1 + 0xd0);
      }
      FUN_142ed4250(*plVar10,*(undefined8 *)(param_1 + 0x110));
      pwVar6 = _guard_xfg_dispatch_icall_nop
                         (L"&UGFxItemInspectionMenu::OnSkinsListCellFocused",L"::");
      pwVar8 = pwVar12;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar8 = pwVar2;
      }
      FName::FName(&local_res18,pwVar8 + 2,1);
      lVar3 = *plVar10;
      FWeakObjectPtr::operator=(lVar3 + 0x330,param_2);
      *(longlong *)(lVar3 + 0x338) = local_res18;
      if ((local_res18 != 0) && (lVar7 = FWeakObjectPtr::Get(lVar3 + 0x330), lVar7 != 0)) {
        UObject::FindFunction(lVar7,*(undefined8 *)(lVar3 + 0x338));
      }
      pwVar6 = _guard_xfg_dispatch_icall_nop
                         (L"&UGFxItemInspectionMenu::OnSkinsListCellClicked",L"::");
      pwVar8 = pwVar12;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar8 = pwVar2;
      }
      FName::FName(&local_res20,pwVar8 + 2,1);
      lVar3 = *plVar10;
      FWeakObjectPtr::operator=(lVar3 + 0x340,param_2);
      *(longlong *)(lVar3 + 0x348) = local_res20;
      if ((local_res20 != 0) && (lVar7 = FWeakObjectPtr::Get(lVar3 + 0x340), lVar7 != 0)) {
        UObject::FindFunction(lVar7,*(undefined8 *)(lVar3 + 0x348));
      }
      local_128 = 0;
      local_120 = 0;
      local_118 = 0;
      local_110 = 0;
      FWeakObjectPtr::operator=(&local_128,0);
      FWeakObjectPtr::operator=(&local_120,0);
      FWeakObjectPtr::operator=(&local_118,0);
      FWeakObjectPtr::operator=(&local_110,0);
      uVar5 = TScriptInterface<IBlendableInterface>::
              TScriptInterface<IBlendableInterface><UMaterialInterface>(local_68,*plVar10);
      FUN_142ecfd10(param_2,uVar5,&local_128);
    }
    if (*(longlong *)(param_1 + 0x118) != 0) {
      local_108 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      FWeakObjectPtr::operator=(&local_108,0);
      FWeakObjectPtr::operator=(&local_100,0);
      FWeakObjectPtr::operator=(&local_f8,0);
      FWeakObjectPtr::operator=(&local_f0,0);
      uVar5 = TScriptInterface<IBlendableInterface>::
              TScriptInterface<IBlendableInterface><UMaterialInterface>
                        (local_58,*(undefined8 *)(param_1 + 0x118));
      FUN_142ecfd10(param_2,uVar5,&local_108);
      pwVar6 = _guard_xfg_dispatch_icall_nop
                         (L"&UGFxItemInspectionMenu::OnSkinsListArrowClicked",L"::");
      pwVar8 = pwVar12;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar8 = pwVar2;
      }
      FName::FName(&local_c8,pwVar8 + 2,1);
      lVar3 = *(longlong *)(param_1 + 0x118);
      FWeakObjectPtr::operator=(lVar3 + 0x1b0,param_2);
      *(longlong *)(lVar3 + 0x1b8) = local_c8;
      if ((local_c8 != 0) && (lVar7 = FWeakObjectPtr::Get(lVar3 + 0x1b0), lVar7 != 0)) {
        UObject::FindFunction(lVar7,*(undefined8 *)(lVar3 + 0x1b8));
      }
    }
    if (*(longlong *)(param_1 + 0x120) != 0) {
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      FWeakObjectPtr::operator=(&local_e8,0);
      FWeakObjectPtr::operator=(&local_e0,0);
      FWeakObjectPtr::operator=(&local_d8,0);
      FWeakObjectPtr::operator=(&local_d0,0);
      uVar5 = TScriptInterface<IBlendableInterface>::
              TScriptInterface<IBlendableInterface><UMaterialInterface>
                        (local_48,*(undefined8 *)(param_1 + 0x120));
      FUN_142ecfd10(param_2,uVar5,&local_e8);
      pwVar8 = _guard_xfg_dispatch_icall_nop
                         (L"&UGFxItemInspectionMenu::OnSkinsListArrowClicked",L"::");
      while (pwVar6 = pwVar8, pwVar6 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar12 = pwVar6;
      }
      FName::FName(&local_c0,pwVar12 + 2,1);
      lVar3 = *(longlong *)(param_1 + 0x120);
      FWeakObjectPtr::operator=(lVar3 + 0x1b0,param_2);
      *(longlong *)(lVar3 + 0x1b8) = local_c0;
      if ((local_c0 != 0) && (lVar7 = FWeakObjectPtr::Get(lVar3 + 0x1b0), lVar7 != 0)) {
        UObject::FindFunction(lVar7,*(undefined8 *)(lVar3 + 0x1b8));
      }
    }
  }
  return;
}



// FUNCTION 140f6ca30 FUN_140f6ca30 body=2547 status=ok
// SIG undefined FUN_140f6ca30(void)

void FUN_140f6ca30(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  bool bVar19;
  longlong *local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  longlong *local_100;
  longlong local_f8 [2];
  longlong local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_14208d370(*(longlong *)(param_1 + 0x20),param_1 + 0x30,L"headerBackground");
    local_110 = *(longlong **)(param_1 + 0x38);
    uVar12 = 0;
    if (local_110 == (longlong *)0x0) {
LAB_140f6cab8:
      if (local_110 != (longlong *)0x0) {
        local_118 = *(longlong *)(param_1 + 0x30);
        if (local_118 != 0) {
          FUN_14204d420(local_118,param_1 + 0x40,L"foilCard");
          plVar15 = *(longlong **)(param_1 + 0x48);
          local_100 = plVar15;
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            iVar13 = (int)plVar15[1];
            bVar19 = iVar13 == 0;
            if (bVar19) {
              *(int *)(plVar15 + 1) = 0;
              iVar13 = 0;
            }
            UNLOCK();
            while (!bVar19) {
              LOCK();
              bVar19 = iVar13 == (int)plVar15[1];
              if (bVar19) {
                *(int *)(plVar15 + 1) = iVar13 + 1;
              }
              UNLOCK();
              if (bVar19) {
                if (plVar15 != (longlong *)0x0) {
                  local_108 = *(longlong *)(param_1 + 0x40);
                  if (local_108 != 0) {
                    FUN_142056670(local_108,0);
                  }
                  plVar3 = local_100;
                  LOCK();
                  plVar15 = plVar15 + 1;
                  lVar6 = *plVar15;
                  *(int *)plVar15 = (int)*plVar15 + -1;
                  UNLOCK();
                  if ((int)lVar6 == 1) {
                    (**(code **)*local_100)(local_100);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar3 + 0xc);
                    iVar13 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar13 == 1) {
                      (**(code **)(*local_100 + 8))(local_100,1);
                    }
                  }
                }
                break;
              }
              LOCK();
              iVar13 = (int)plVar15[1];
              bVar19 = iVar13 == 0;
              if (bVar19) {
                *(int *)(plVar15 + 1) = 0;
                iVar13 = 0;
              }
              UNLOCK();
            }
          }
        }
        plVar3 = local_110;
        LOCK();
        plVar15 = local_110 + 1;
        lVar6 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
          }
        }
      }
    }
    else {
      LOCK();
      iVar13 = (int)local_110[1];
      bVar19 = iVar13 == 0;
      if (bVar19) {
        *(int *)(local_110 + 1) = 0;
        iVar13 = 0;
      }
      UNLOCK();
      while (!bVar19) {
        LOCK();
        bVar19 = iVar13 == (int)local_110[1];
        if (bVar19) {
          *(int *)(local_110 + 1) = iVar13 + 1;
        }
        UNLOCK();
        if (bVar19) goto LAB_140f6cab8;
        LOCK();
        iVar13 = (int)local_110[1];
        bVar19 = iVar13 == 0;
        if (bVar19) {
          *(int *)(local_110 + 1) = 0;
          iVar13 = 0;
        }
        UNLOCK();
      }
    }
    uVar8 = FUN_142085870(*(undefined8 *)(param_1 + 0x20),local_a8,L"itemScoreValue");
    FUN_142ede260(param_1 + 0x50,uVar8);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_a0 + 1;
      lVar6 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    uVar8 = FUN_142085870(*(undefined8 *)(param_1 + 0x20),local_98,L"itemScoreLabel");
    FUN_142ede260(param_1 + 0x78,uVar8);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_90 + 1;
      lVar6 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x80) != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x88) + 8);
      LOCK();
      iVar13 = *piVar1;
      if (iVar13 == 0) {
        *piVar1 = 0;
        iVar13 = 0;
      }
      UNLOCK();
      if (0 < iVar13) {
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_68,L"ITEM SCORE",L"ItemCardObject",L"ItemScoreText");
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x78,uVar8,0,0);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_60 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)local_60 + 0xc);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
      }
    }
    FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 0x68,L"itemScoreRarity");
    FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 200,L"elementalWrapper");
    FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 0xb8,L"elementalIcon");
    FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 0xd8,L"manufacturerImageTint");
    FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 0xe8,L"manufacturerIcon");
    FUN_14208d370(*(undefined8 *)(param_1 + 0x20),(longlong *)(param_1 + 0xf8),L"mainStatContainer")
    ;
    plVar15 = (longlong *)(param_1 + 0x108);
    *(undefined4 *)(param_1 + 0x110) = 0;
    if (*(int *)(param_1 + 0x114) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar15,0);
    }
    plVar3 = *(longlong **)(param_1 + 0x100);
    uVar17 = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar13 = (int)plVar3[1];
      bVar19 = iVar13 == 0;
      if (bVar19) {
        *(int *)(plVar3 + 1) = 0;
        iVar13 = 0;
      }
      UNLOCK();
      while (!bVar19) {
        LOCK();
        bVar19 = iVar13 == (int)plVar3[1];
        if (bVar19) {
          *(int *)(plVar3 + 1) = iVar13 + 1;
        }
        UNLOCK();
        if (bVar19) {
          if (plVar3 == (longlong *)0x0) {
            return;
          }
          lVar6 = *(longlong *)(param_1 + 0xf8);
          uVar18 = uVar12;
          if (lVar6 != 0) goto LAB_140f6ce00;
          goto LAB_140f6d3bc;
        }
        LOCK();
        iVar13 = (int)plVar3[1];
        bVar19 = iVar13 == 0;
        if (bVar19) {
          *(int *)(plVar3 + 1) = 0;
          iVar13 = 0;
        }
        UNLOCK();
      }
    }
  }
  return;
LAB_140f6ce00:
  local_178 = (longlong *)0x0;
  local_170 = 0;
  FString::PrintfImpl(local_f8,L"statEntry%i",uVar18);
  cVar7 = FUN_142056870(lVar6,local_f8);
  uVar10 = uVar12;
  uVar16 = (uint)uVar18;
  if (cVar7 == '\0') {
    uVar8 = FUN_141359870();
    puVar9 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(lVar6 + 8,local_88);
    plVar14 = (longlong *)puVar9[1];
    local_d8 = *puVar9;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(lVar6 + 0x80);
    uVar5 = *(undefined8 *)(lVar6 + 0x78);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    local_d0 = plVar14;
    uVar10 = FUN_14203b750(uVar5,uVar8,local_f8,&local_d8,6,&local_178);
    if (uVar10 == 0) {
LAB_140f6cee2:
      uVar10 = uVar12;
    }
    else {
      lVar11 = FUN_141359870();
      if ((*(int *)(*(longlong *)(uVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      if (!bVar19) goto LAB_140f6cee2;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar14 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    plVar14 = local_80;
    uVar16 = uVar17;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_80 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
  }
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  plVar14 = local_178;
  for (iVar13 = (int)local_170; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar14 != 0) {
      FMemory::Free();
    }
    plVar14 = plVar14 + 2;
  }
  if (local_178 != (longlong *)0x0) {
    FMemory::Free(local_178);
  }
  if (uVar10 == 0) goto LAB_140f6d016;
  iVar13 = *(int *)(param_1 + 0x110);
  *(int *)(param_1 + 0x110) = iVar13 + 1;
  if (*(int *)(param_1 + 0x114) < iVar13 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar13);
  }
  uVar17 = uVar16 + 1;
  *(ulonglong *)(*plVar15 + (longlong)iVar13 * 8) = uVar10;
  uVar18 = (ulonglong)uVar17;
  goto LAB_140f6ce00;
LAB_140f6d016:
  local_158 = 0;
  local_150 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
  FGenericPlatformString::Memcpy(local_158,L"artifactIconRarity",0x26);
  local_168 = (longlong *)0x0;
  local_160 = 0;
  local_b8 = 0;
  uVar8 = FUN_140f55da0(lVar6,&local_158,0,6,&local_168);
  *(undefined8 *)(param_1 + 0x128) = uVar8;
  plVar15 = local_168;
  for (iVar13 = (int)local_160; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar15 != 0) {
      FMemory::Free();
    }
    plVar15 = plVar15 + 2;
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free(local_168);
  }
  if (local_158 != 0) {
    FMemory::Free();
  }
  plVar15 = (longlong *)(param_1 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  uVar18 = uVar12;
  if (*(int *)(param_1 + 0x1ac) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar15,0);
  }
  do {
    local_148 = (longlong *)0x0;
    local_140 = 0;
    FString::PrintfImpl(local_e8,L"statClassMod%i",uVar18);
    cVar7 = FUN_142056870(lVar6,local_e8);
    uVar10 = uVar12;
    if (cVar7 == '\0') {
      uVar8 = FUN_14135a630();
      puVar9 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(lVar6 + 8,local_78);
      plVar14 = (longlong *)puVar9[1];
      local_c8 = *puVar9;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      plVar4 = *(longlong **)(lVar6 + 0x80);
      uVar5 = *(undefined8 *)(lVar6 + 0x78);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      local_c0 = plVar14;
      uVar10 = FUN_14203b750(uVar5,uVar8,local_e8,&local_c8,6,&local_148);
      if (uVar10 == 0) {
LAB_140f6d1d5:
        uVar10 = uVar12;
      }
      else {
        lVar11 = FUN_14135a630();
        if ((*(int *)(*(longlong *)(uVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        if (!bVar19) goto LAB_140f6d1d5;
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar11 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar14 + 1;
        lVar11 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      plVar14 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_70 + 1;
        lVar11 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
    }
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
    plVar14 = local_148;
    for (iVar13 = (int)local_140; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      plVar14 = plVar14 + 2;
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free(local_148);
    }
    if (uVar10 == 0) {
LAB_140f6d3bc:
      LOCK();
      plVar15 = plVar3 + 1;
      lVar6 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar6 != 1) {
        return;
      }
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 != 1) {
        return;
      }
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
    local_128 = 0;
    local_120 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    FGenericPlatformString::Memcpy(local_128,L"iconContainer",0x1c);
    local_138 = (longlong *)0x0;
    local_130 = 0;
    local_b0 = 0;
    FUN_140e98b90(uVar10,uVar10 + 0x180,&local_128,0,6,&local_138);
    plVar14 = local_138;
    for (iVar13 = (int)local_130; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      plVar14 = plVar14 + 2;
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free(local_138);
    }
    if (local_128 != 0) {
      FMemory::Free();
    }
    iVar13 = *(int *)(param_1 + 0x1a8);
    *(int *)(param_1 + 0x1a8) = iVar13 + 1;
    if (*(int *)(param_1 + 0x1ac) < iVar13 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar13);
    }
    *(ulonglong *)(*plVar15 + (longlong)iVar13 * 8) = uVar10;
    uVar18 = (ulonglong)((int)uVar18 + 1);
  } while( true );
}



// FUNCTION 140f6d430 FUN_140f6d430 body=8634 status=ok
// SIG undefined FUN_140f6d430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f6d430(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  undefined2 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined1 auStack_598 [32];
  longlong **local_578;
  longlong **local_570;
  uint local_568;
  longlong *local_560;
  longlong local_558;
  longlong *local_550;
  undefined4 local_548 [2];
  longlong local_540;
  longlong local_538;
  longlong *local_530;
  longlong local_528;
  longlong *local_520;
  longlong local_518;
  undefined8 local_510;
  longlong *local_508;
  undefined8 local_500;
  longlong *local_4f8;
  undefined8 local_4f0;
  longlong *local_4e8;
  undefined8 local_4e0;
  longlong local_4d8;
  undefined8 local_4d0;
  longlong local_4c8;
  longlong *local_4c0;
  longlong *local_4b8;
  undefined8 local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  longlong *local_498;
  undefined8 local_490;
  longlong local_488;
  undefined8 local_480;
  longlong local_478;
  undefined8 local_470;
  longlong local_468 [7];
  longlong *local_430;
  longlong *local_428;
  undefined8 local_420;
  longlong *local_418;
  undefined8 local_410;
  longlong local_408;
  undefined8 local_400;
  longlong *local_3f8;
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
  longlong *local_378;
  undefined8 local_370;
  longlong local_368;
  undefined8 local_360;
  longlong *local_358;
  undefined8 local_350;
  longlong local_348;
  longlong *local_340;
  undefined4 local_338 [2];
  longlong local_330;
  longlong *local_328;
  undefined8 local_320;
  undefined8 local_318;
  longlong local_310;
  longlong *local_308;
  longlong local_300;
  longlong *local_2f8;
  longlong local_2f0;
  longlong *local_2e8;
  longlong *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  longlong local_2a8 [2];
  longlong local_298 [2];
  undefined2 *local_288;
  int local_280;
  undefined8 local_278;
  longlong *local_270;
  undefined8 local_268;
  longlong *local_260;
  longlong local_258 [2];
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_130 [16];
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [24];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_598;
  local_540 = param_1;
  FUN_140f6ca30();
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  uVar13 = 0;
  plVar20 = (longlong *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x124) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar20,0);
  }
  local_530 = *(longlong **)(param_1 + 0x100);
  local_568 = 0;
  if (local_530 != (longlong *)0x0) {
    LOCK();
    iVar14 = (int)local_530[1];
    bVar21 = iVar14 == 0;
    if (bVar21) {
      *(int *)(local_530 + 1) = 0;
      iVar14 = 0;
    }
    UNLOCK();
    while (!bVar21) {
      LOCK();
      bVar21 = iVar14 == (int)local_530[1];
      if (bVar21) {
        *(int *)(local_530 + 1) = iVar14 + 1;
      }
      UNLOCK();
      if (bVar21) {
        if (local_530 != (longlong *)0x0) {
          local_538 = *(longlong *)(param_1 + 0xf8);
          lVar11 = param_1;
          uVar19 = uVar13;
          if (local_538 == 0) goto LAB_140f6d889;
          goto LAB_140f6d650;
        }
        break;
      }
      LOCK();
      iVar14 = (int)local_530[1];
      bVar21 = iVar14 == 0;
      if (bVar21) {
        *(int *)(local_530 + 1) = 0;
        iVar14 = 0;
      }
      UNLOCK();
    }
  }
LAB_140f6d50d:
  FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 0x90,L"DLCrequirement");
  uVar8 = FUN_142085870(*(undefined8 *)(param_1 + 0x20),local_1d0,L"DLCrequirement.restrictionText")
  ;
  FUN_142ede260(param_1 + 0xa0,uVar8);
  if (local_1c8 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_1c8 + 1;
    lVar11 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_1c8)(local_1c8);
      LOCK();
      piVar1 = (int *)((longlong)local_1c8 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_1c8 + 8))(local_1c8,1);
      }
    }
  }
  FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 0x230,L"itemCardInner");
  FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 0x240,L"cardTypeWrapper");
  FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 0x250,L"equippedIcon");
  FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 0x260,L"itemIcon");
  plVar20 = *(longlong **)(param_1 + 0x268);
  local_308 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    iVar14 = (int)plVar20[1];
    bVar21 = iVar14 == 0;
    if (bVar21) {
      *(int *)(plVar20 + 1) = 0;
      iVar14 = 0;
    }
    UNLOCK();
    while (!bVar21) {
      LOCK();
      bVar21 = iVar14 == (int)plVar20[1];
      if (bVar21) {
        *(int *)(plVar20 + 1) = iVar14 + 1;
      }
      UNLOCK();
      if (bVar21) {
        if (plVar20 != (longlong *)0x0) {
          local_310 = *(longlong *)(param_1 + 0x260);
          if (local_310 != 0) {
            FUN_14204d420(local_310,param_1 + 0x270,L"weaponIconArt");
          }
          plVar15 = local_308;
          LOCK();
          plVar20 = plVar20 + 1;
          lVar11 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_308)(local_308);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_308 + 8))(local_308,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar14 = (int)plVar20[1];
      bVar21 = iVar14 == 0;
      if (bVar21) {
        *(int *)(plVar20 + 1) = 0;
        iVar14 = 0;
      }
      UNLOCK();
    }
  }
  FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 0x290,L"weaponRarity");
  plVar20 = *(longlong **)(param_1 + 0x298);
  local_2f8 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    iVar14 = (int)plVar20[1];
    bVar21 = iVar14 == 0;
    if (bVar21) {
      *(int *)(plVar20 + 1) = 0;
      iVar14 = 0;
    }
    UNLOCK();
    while (!bVar21) {
      LOCK();
      bVar21 = iVar14 == (int)plVar20[1];
      if (bVar21) {
        *(int *)(plVar20 + 1) = iVar14 + 1;
      }
      UNLOCK();
      if (bVar21) {
        if (plVar20 != (longlong *)0x0) {
          local_300 = *(longlong *)(param_1 + 0x290);
          if (local_300 != 0) {
            FUN_14204d420(local_300,param_1 + 0x280,L"weaponIconArt");
          }
          plVar15 = local_2f8;
          LOCK();
          plVar20 = plVar20 + 1;
          lVar11 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_2f8)(local_2f8);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_2f8 + 8))(local_2f8,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar14 = (int)plVar20[1];
      bVar21 = iVar14 == 0;
      if (bVar21) {
        *(int *)(plVar20 + 1) = 0;
        iVar14 = 0;
      }
      UNLOCK();
    }
  }
  uVar8 = FUN_142085870(*(undefined8 *)(param_1 + 0x20),local_1c0,L"itemType");
  FUN_142ede260(param_1 + 0x2e0,uVar8);
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_1b8 + 1;
    lVar11 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_1b8)(local_1b8);
      LOCK();
      piVar1 = (int *)((longlong)local_1b8 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_1b8 + 8))(local_1b8,1);
      }
    }
  }
  FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 0x2f8,L"itemTypeBG");
  FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 0x2a0,L"itemNameRarity");
  plVar20 = *(longlong **)(param_1 + 0x2a8);
  local_2e8 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    iVar14 = (int)plVar20[1];
    bVar21 = iVar14 == 0;
    if (bVar21) {
      *(int *)(plVar20 + 1) = 0;
      iVar14 = 0;
    }
    UNLOCK();
    while (!bVar21) {
      LOCK();
      bVar21 = iVar14 == (int)plVar20[1];
      if (bVar21) {
        *(int *)(plVar20 + 1) = iVar14 + 1;
      }
      UNLOCK();
      if (bVar21) {
        if (plVar20 != (longlong *)0x0) {
          lVar11 = *(longlong *)(param_1 + 0x2a0);
          local_2f0 = lVar11;
          if (lVar11 != 0) {
            local_408 = 0;
            local_400 = 9;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_408,0);
            FGenericPlatformString::Memcpy(local_408,L"itemName",0x12);
            local_570 = &local_418;
            local_418 = (longlong *)0x0;
            local_578 = (longlong **)CONCAT71(local_578._1_7_,6);
            local_410 = 0;
            local_1f8 = 0;
            cVar7 = FUN_140f59920(lVar11,param_1 + 0x2b0,&local_408,0);
            plVar15 = local_418;
            for (iVar14 = (int)local_410; iVar14 != 0; iVar14 = iVar14 + -1) {
              if (*plVar15 != 0) {
                FMemory::Free();
              }
              plVar15 = plVar15 + 2;
            }
            if (local_418 != (longlong *)0x0) {
              FMemory::Free(local_418);
            }
            if (local_408 != 0) {
              FMemory::Free();
            }
            if (cVar7 != '\0') {
              FUN_142f10ae0(*(undefined8 *)(param_1 + 0x2b0),0);
              FUN_142f0de70(*(undefined8 *)(param_1 + 0x2b0),PTR_DAT_14629e1e0);
            }
          }
          plVar15 = local_2e8;
          LOCK();
          plVar20 = plVar20 + 1;
          lVar11 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_2e8)(local_2e8);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_2e8 + 8))(local_2e8,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar14 = (int)plVar20[1];
      bVar21 = iVar14 == 0;
      if (bVar21) {
        *(int *)(plVar20 + 1) = 0;
        iVar14 = 0;
      }
      UNLOCK();
    }
  }
  FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 0x2b8,L"colorblindRarity");
  local_340 = *(longlong **)(param_1 + 0x2c0);
  if (local_340 == (longlong *)0x0) {
LAB_140f6dc78:
    if (local_340 != (longlong *)0x0) {
      local_348 = *(longlong *)(param_1 + 0x2b8);
      if (local_348 != 0) {
        uVar8 = FUN_1420392d0(local_348,local_1b0,L"colorblindRarityText");
        FUN_142ede260(param_1 + 0x2c8,uVar8);
        if (local_1a8 != (longlong *)0x0) {
          LOCK();
          plVar20 = local_1a8 + 1;
          lVar11 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_1a8)(local_1a8);
            LOCK();
            piVar1 = (int *)((longlong)local_1a8 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_1a8 + 8))(local_1a8,1);
            }
          }
        }
      }
      plVar15 = local_340;
      LOCK();
      plVar20 = local_340 + 1;
      lVar11 = *plVar20;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_340)(local_340);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_340 + 8))(local_340,1);
        }
      }
    }
  }
  else {
    LOCK();
    iVar14 = (int)local_340[1];
    bVar21 = iVar14 == 0;
    if (bVar21) {
      *(int *)(local_340 + 1) = 0;
      iVar14 = 0;
    }
    UNLOCK();
    while (!bVar21) {
      LOCK();
      bVar21 = iVar14 == (int)local_340[1];
      if (bVar21) {
        *(int *)(local_340 + 1) = iVar14 + 1;
      }
      UNLOCK();
      if (bVar21) goto LAB_140f6dc78;
      LOCK();
      iVar14 = (int)local_340[1];
      bVar21 = iVar14 == 0;
      if (bVar21) {
        *(int *)(local_340 + 1) = 0;
        iVar14 = 0;
      }
      UNLOCK();
    }
  }
  FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 0x308,L"itemRequirementRarity");
  uVar8 = FUN_142085870(*(undefined8 *)(param_1 + 0x20),local_1a0,L"levelRequirementValue");
  FUN_142ede260(param_1 + 0x318,uVar8);
  if (local_198 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_198 + 1;
    lVar11 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_198)(local_198);
      LOCK();
      piVar1 = (int *)((longlong)local_198 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_198 + 8))(local_198,1);
      }
    }
  }
  uVar8 = FUN_142085870(*(undefined8 *)(param_1 + 0x20),local_190,L"levelRequirementDescription");
  FUN_142ede260(param_1 + 0x330,uVar8);
  if (local_188 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_188 + 1;
    lVar11 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_188)(local_188);
      LOCK();
      piVar1 = (int *)((longlong)local_188 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_188 + 8))(local_188,1);
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x338) != 0) && (*(longlong *)(param_1 + 0x340) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x340) + 8);
    LOCK();
    iVar14 = *piVar1;
    if (iVar14 == 0) {
      *piVar1 = 0;
      iVar14 = 0;
    }
    UNLOCK();
    if (0 < iVar14) {
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_f8,L"LVL REQ.",L"ItemCardObject",L"LevelRequiredAbbreviated");
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x330,uVar8,1,0);
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar20 = local_f0 + 1;
        lVar11 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar1 = (int *)((longlong)local_f0 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
    }
  }
  FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 0x348,L"elementalTextWrapper");
  uVar8 = FUN_142085870(*(undefined8 *)(param_1 + 0x20),local_180,L"elementalDamage");
  FUN_142ede260(param_1 + 0x358,uVar8);
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_178 + 1;
    lVar11 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar1 = (int *)((longlong)local_178 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_178 + 8))(local_178,1);
      }
    }
  }
  uVar8 = FUN_142085870(*(undefined8 *)(param_1 + 0x20),local_170,L"elementalChance");
  FUN_142ede260(param_1 + 0x370,uVar8);
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_168 + 1;
    lVar11 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar1 = (int *)((longlong)local_168 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_168 + 8))(local_168,1);
      }
    }
  }
  FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 0x388,L"mainStatBackgroundWrapper");
  local_3e8 = 0;
  local_3e0 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3e8,0);
  FGenericPlatformString::Memcpy(local_3e8,L"mainStatBackground",0x26);
  local_570 = &local_3f8;
  local_3f8 = (longlong *)0x0;
  local_3f0 = 0;
  local_1f0 = 0;
  local_578 = (longlong **)CONCAT71(local_578._1_7_,6);
  FUN_140e98b90(*(undefined8 *)(param_1 + 0x20),param_1 + 0x398,&local_3e8,0);
  plVar20 = local_3f8;
  for (iVar14 = (int)local_3f0; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar20 != 0) {
      FMemory::Free();
    }
    plVar20 = plVar20 + 2;
  }
  if (local_3f8 != (longlong *)0x0) {
    FMemory::Free(local_3f8);
  }
  if (local_3e8 != 0) {
    FMemory::Free();
  }
  local_3c8 = 0;
  local_3c0 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3c8,0);
  FGenericPlatformString::Memcpy(local_3c8,L"backgroundRaritySides",0x2c);
  local_570 = &local_3d8;
  local_578 = (longlong **)CONCAT71(local_578._1_7_,6);
  local_3d8 = (longlong *)0x0;
  local_3d0 = 0;
  local_1e8 = 0;
  FUN_140e98b90(*(undefined8 *)(param_1 + 0x20),param_1 + 0x3a0,&local_3c8,0);
  plVar20 = local_3d8;
  for (iVar14 = (int)local_3d0; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar20 != 0) {
      FMemory::Free();
    }
    plVar20 = plVar20 + 2;
  }
  if (local_3d8 != (longlong *)0x0) {
    FMemory::Free(local_3d8);
  }
  if (local_3c8 != 0) {
    FMemory::Free();
  }
  local_3a8 = 0;
  local_3a0 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3a8,0);
  FGenericPlatformString::Memcpy(local_3a8,L"secondaryStats",0x1e);
  local_570 = &local_3b8;
  local_578 = (longlong **)CONCAT71(local_578._1_7_,6);
  local_3b8 = (longlong *)0x0;
  local_3b0 = 0;
  local_100 = 0;
  FUN_140e99270(*(undefined8 *)(param_1 + 0x20),param_1 + 0x3a8,&local_3a8,0);
  plVar20 = local_3b8;
  for (iVar14 = (int)local_3b0; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar20 != 0) {
      FMemory::Free();
    }
    plVar20 = plVar20 + 2;
  }
  if (local_3b8 != (longlong *)0x0) {
    FMemory::Free(local_3b8);
  }
  if (local_3a8 != 0) {
    FMemory::Free();
  }
  local_388 = 0;
  local_380 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_388,0);
  FGenericPlatformString::Memcpy(local_388,L"itemDescriptionSDU",0x26);
  local_570 = &local_398;
  local_578 = (longlong **)CONCAT71(local_578._1_7_,6);
  local_398 = (longlong *)0x0;
  local_390 = 0;
  local_248 = 0;
  FUN_140e99270(*(undefined8 *)(param_1 + 0x20),param_1 + 0x3b0,&local_388,0);
  plVar20 = local_398;
  for (iVar14 = (int)local_390; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar20 != 0) {
      FMemory::Free();
    }
    plVar20 = plVar20 + 2;
  }
  if (local_398 != (longlong *)0x0) {
    FMemory::Free(local_398);
  }
  if (local_388 != 0) {
    FMemory::Free();
  }
  local_368 = 0;
  local_360 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,0);
  FGenericPlatformString::Memcpy(local_368,L"itemDescription",0x20);
  local_570 = &local_378;
  local_578 = (longlong **)CONCAT71(local_578._1_7_,6);
  local_378 = (longlong *)0x0;
  local_370 = 0;
  local_208 = 0;
  FUN_140e99270(*(undefined8 *)(param_1 + 0x20),param_1 + 0x3b8,&local_368,0);
  plVar20 = local_378;
  for (iVar14 = (int)local_370; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar20 != 0) {
      FMemory::Free();
    }
    plVar20 = plVar20 + 2;
  }
  if (local_378 != (longlong *)0x0) {
    FMemory::Free(local_378);
  }
  if (local_368 != 0) {
    FMemory::Free();
  }
  if ((*(longlong *)(param_1 + 0x3b0) != 0) && (*(float *)(param_1 + 0x490) <= 1e-08)) {
    uVar22 = FUN_142eee550();
    *(undefined4 *)(param_1 + 0x490) = uVar22;
  }
  if ((*(longlong *)(param_1 + 0x3b8) != 0) && (*(float *)(param_1 + 0x48c) <= 1e-08)) {
    uVar22 = FUN_142eee550();
    *(undefined4 *)(param_1 + 0x48c) = uVar22;
    uVar22 = FUN_142eed950(*(undefined8 *)(param_1 + 0x3b8));
    *(undefined4 *)(param_1 + 0x498) = uVar22;
  }
  if (*(longlong *)(param_1 + 0x3a8) != 0) {
    uVar22 = FUN_142eed950();
    *(undefined4 *)(param_1 + 0x494) = uVar22;
    if (*(float *)(param_1 + 0x488) <= 1e-08) {
      uVar22 = FUN_142eee550(*(undefined8 *)(param_1 + 0x3a8));
      *(undefined4 *)(param_1 + 0x488) = uVar22;
      FUN_142f10ae0(*(undefined8 *)(param_1 + 0x3a8),0);
      FUN_142f0de70(*(undefined8 *)(param_1 + 0x3a8),PTR_DAT_14629e1e0);
    }
  }
  FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 0x3c0,L"artifactStats");
  local_550 = *(longlong **)(param_1 + 0x3c8);
  if (local_550 != (longlong *)0x0) {
    LOCK();
    iVar14 = (int)local_550[1];
    bVar21 = iVar14 == 0;
    if (bVar21) {
      *(int *)(local_550 + 1) = 0;
      iVar14 = 0;
    }
    UNLOCK();
    if (!bVar21) {
LAB_140f6e474:
      LOCK();
      bVar21 = iVar14 == (int)local_550[1];
      if (bVar21) {
        *(int *)(local_550 + 1) = iVar14 + 1;
      }
      UNLOCK();
      if (!bVar21) goto code_r0x000140f6e47e;
      if (local_550 != (longlong *)0x0) {
        local_558 = *(longlong *)(param_1 + 0x3c0);
        if (local_558 == 0) goto LAB_140f6e820;
        plVar20 = (longlong *)(param_1 + 0x188);
        *(undefined4 *)(param_1 + 400) = 0;
        local_560 = plVar20;
        if (0x7fffffff < *(uint *)(param_1 + 0x194)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(plVar20,0);
        }
        uVar8 = FUN_1420392d0(local_558,local_160,L"statEntryAction");
        FUN_142ede260(param_1 + 0x3d0,uVar8);
        if (local_158 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_158 + 1;
          lVar11 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_158)(local_158);
            LOCK();
            piVar1 = (int *)((longlong)local_158 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_158 + 8))(local_158,1);
            }
          }
        }
        local_518 = 0;
        local_510 = 0x13;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518,0);
        FGenericPlatformString::Memcpy(local_518,L"artifactIconRarity",0x26);
        local_570 = &local_358;
        local_578 = (longlong **)CONCAT71(local_578._1_7_,6);
        local_358 = (longlong *)0x0;
        local_350 = 0;
        local_200 = 0;
        FUN_140e989a0(local_558,param_1 + 0x128,&local_518,0);
        plVar15 = local_358;
        for (iVar14 = (int)local_350; iVar14 != 0; iVar14 = iVar14 + -1) {
          if (*plVar15 != 0) {
            FMemory::Free();
          }
          plVar15 = plVar15 + 2;
        }
        if (local_358 != (longlong *)0x0) {
          FMemory::Free(local_358);
        }
        uVar19 = uVar13;
        if (local_518 != 0) {
          FMemory::Free();
        }
        do {
          local_508 = (longlong *)0x0;
          local_500 = 0;
          local_568 = (uint)uVar19;
          FString::PrintfImpl(local_298,L"artifactEntry%i",uVar19);
          lVar11 = local_558;
          cVar7 = FUN_142056870(local_558,local_298);
          uVar10 = uVar13;
          uVar18 = (uint)uVar19;
          if (cVar7 == '\0') {
            uVar8 = FUN_14135a580();
            puVar9 = (undefined8 *)
                     TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(lVar11 + 8,local_150);
            plVar20 = (longlong *)puVar9[1];
            local_268 = *puVar9;
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
              UNLOCK();
            }
            plVar15 = *(longlong **)(local_558 + 0x80);
            uVar3 = *(undefined8 *)(local_558 + 0x78);
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
            }
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
              UNLOCK();
            }
            local_570 = &local_508;
            local_578 = (longlong **)CONCAT71(local_578._1_7_,6);
            local_260 = plVar20;
            uVar10 = FUN_14203b750(uVar3,uVar8,local_298,&local_268);
            if (uVar10 == 0) {
LAB_140f6e6e4:
              uVar10 = uVar13;
            }
            else {
              lVar11 = FUN_14135a580();
              if ((*(int *)(*(longlong *)(uVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                bVar21 = false;
              }
              else {
                bVar21 = true;
              }
              if (!bVar21) goto LAB_140f6e6e4;
            }
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar15 + 1;
              lVar11 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar1 = (int *)((longlong)plVar15 + 0xc);
                iVar14 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  (**(code **)(*plVar15 + 8))(plVar15,1);
                }
              }
            }
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              plVar15 = plVar20 + 1;
              lVar11 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar20)(plVar20);
                LOCK();
                piVar1 = (int *)((longlong)plVar20 + 0xc);
                iVar14 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  (**(code **)(*plVar20 + 8))(plVar20,1);
                }
              }
            }
            plVar15 = local_148;
            plVar20 = local_560;
            uVar18 = local_568;
            if (local_148 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_148 + 1;
              lVar11 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*local_148)(local_148);
                LOCK();
                piVar1 = (int *)((longlong)plVar15 + 0xc);
                iVar14 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar20 = local_560;
                uVar18 = local_568;
                if (iVar14 == 1) {
                  (**(code **)(*plVar15 + 8))(plVar15,1);
                  plVar20 = local_560;
                  uVar18 = local_568;
                }
              }
            }
          }
          if (local_298[0] != 0) {
            FMemory::Free();
          }
          plVar15 = local_508;
          for (iVar14 = (int)local_500; iVar14 != 0; iVar14 = iVar14 + -1) {
            if (*plVar15 != 0) {
              FMemory::Free();
            }
            plVar15 = plVar15 + 2;
          }
          if (local_508 != (longlong *)0x0) {
            FMemory::Free(local_508);
          }
          param_1 = local_540;
          if (uVar10 == 0) {
LAB_140f6e820:
            plVar15 = local_550;
            LOCK();
            plVar20 = local_550 + 1;
            lVar11 = *plVar20;
            *(int *)plVar20 = (int)*plVar20 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_550)(local_550);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*local_550 + 8))(local_550,1);
              }
            }
            break;
          }
          iVar14 = (int)plVar20[1];
          *(int *)(plVar20 + 1) = iVar14 + 1;
          if (*(int *)((longlong)plVar20 + 0xc) < iVar14 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar20,iVar14);
          }
          *(ulonglong *)(*plVar20 + (longlong)iVar14 * 8) = uVar10;
          uVar19 = (ulonglong)(uVar18 + 1);
        } while( true );
      }
    }
  }
LAB_140f6e857:
  FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 1000,L"artifactLegendary.icon");
  uVar8 = FUN_142085870(*(undefined8 *)(param_1 + 0x20),local_140,
                        L"artifactLegendary.legendaryDescription");
  FUN_142ede260(param_1 + 0x3f8,uVar8);
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_138 + 1;
    lVar11 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar1 = (int *)((longlong)local_138 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_138 + 8))(local_138,1);
      }
    }
  }
  FUN_14208d370(*(undefined8 *)(param_1 + 0x20),param_1 + 0x410,L"classModSkills");
  local_4c0 = *(longlong **)(param_1 + 0x418);
  lVar11 = param_1;
  if (local_4c0 != (longlong *)0x0) {
    LOCK();
    iVar14 = (int)local_4c0[1];
    bVar21 = iVar14 == 0;
    if (bVar21) {
      *(int *)(local_4c0 + 1) = 0;
      iVar14 = 0;
    }
    UNLOCK();
    while (!bVar21) {
      LOCK();
      bVar21 = iVar14 == (int)local_4c0[1];
      if (bVar21) {
        *(int *)(local_4c0 + 1) = iVar14 + 1;
      }
      UNLOCK();
      if (bVar21) {
        if (local_4c0 != (longlong *)0x0) {
          lVar12 = *(longlong *)(param_1 + 0x410);
          local_4c8 = lVar12;
          if (lVar12 != 0) {
            FUN_14204d420(lVar12,param_1 + 0x430,L"classModIconRarity");
            FUN_14204d420(lVar12,param_1 + 0x420,L"classModIconArt");
            plVar20 = (longlong *)(param_1 + 0x1a0);
            *(undefined4 *)(param_1 + 0x1a8) = 0;
            if (*(int *)(param_1 + 0x1ac) != 0) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(plVar20,0);
            }
            local_2b0 = 0;
            while( true ) {
              local_4f8 = (longlong *)0x0;
              local_4f0 = 0;
              FString::PrintfImpl(local_258,L"statClassMod%i",uVar13);
              local_578 = &local_4f8;
              lVar12 = FUN_140f55bb0(local_4c8,local_258,local_2b0,6);
              if (local_258[0] != 0) {
                FMemory::Free();
              }
              plVar15 = local_4f8;
              for (iVar14 = (int)local_4f0; iVar14 != 0; iVar14 = iVar14 + -1) {
                if (*plVar15 != 0) {
                  FMemory::Free();
                }
                plVar15 = plVar15 + 2;
              }
              if (local_4f8 != (longlong *)0x0) {
                FMemory::Free(local_4f8);
              }
              lVar11 = local_540;
              if (lVar12 == 0) break;
              FUN_14208d370(lVar12,lVar12 + 0x170,L"compareIcon");
              plVar15 = *(longlong **)(lVar12 + 0x178);
              if (plVar15 != (longlong *)0x0) {
                LOCK();
                iVar14 = (int)plVar15[1];
                bVar21 = iVar14 == 0;
                if (bVar21) {
                  *(int *)(plVar15 + 1) = 0;
                  iVar14 = 0;
                }
                UNLOCK();
                while (!bVar21) {
                  LOCK();
                  bVar21 = iVar14 == (int)plVar15[1];
                  if (bVar21) {
                    *(int *)(plVar15 + 1) = iVar14 + 1;
                  }
                  UNLOCK();
                  if (bVar21) {
                    if (*(longlong *)(lVar12 + 0x170) != 0) {
                      FUN_142056670(*(longlong *)(lVar12 + 0x170),0);
                    }
                    LOCK();
                    plVar4 = plVar15 + 1;
                    lVar11 = *plVar4;
                    *(int *)plVar4 = (int)*plVar4 + -1;
                    UNLOCK();
                    if ((int)lVar11 == 1) {
                      (**(code **)*plVar15)(plVar15);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar15 + 0xc);
                      iVar14 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar14 == 1) {
                        (**(code **)(*plVar15 + 8))(plVar15,1);
                      }
                    }
                    break;
                  }
                  LOCK();
                  iVar14 = (int)plVar15[1];
                  bVar21 = iVar14 == 0;
                  if (bVar21) {
                    *(int *)(plVar15 + 1) = 0;
                    iVar14 = 0;
                  }
                  UNLOCK();
                }
              }
              local_4d8 = 0;
              local_4d0 = 0xe;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4d8,0);
              FGenericPlatformString::Memcpy(local_4d8,L"iconContainer",0x1c);
              local_570 = &local_4e8;
              local_4e8 = (longlong *)0x0;
              local_578 = (longlong **)CONCAT71(local_578._1_7_,6);
              local_4e0 = 0;
              local_240 = 0;
              FUN_140e98b90(lVar12,lVar12 + 0x180,&local_4d8,0);
              plVar15 = local_4e8;
              for (iVar14 = (int)local_4e0; iVar14 != 0; iVar14 = iVar14 + -1) {
                if (*plVar15 != 0) {
                  FMemory::Free();
                }
                plVar15 = plVar15 + 2;
              }
              if (local_4e8 != (longlong *)0x0) {
                FMemory::Free(local_4e8);
              }
              if (local_4d8 != 0) {
                FMemory::Free();
              }
              iVar14 = *(int *)(param_1 + 0x1a8);
              *(int *)(param_1 + 0x1a8) = iVar14 + 1;
              if (*(int *)(param_1 + 0x1ac) < iVar14 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar20,iVar14);
              }
              uVar13 = (ulonglong)((int)uVar13 + 1);
              *(longlong *)(*plVar20 + (longlong)iVar14 * 8) = lVar12;
            }
          }
          plVar15 = local_4c0;
          LOCK();
          plVar20 = local_4c0 + 1;
          lVar12 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_4c0)(local_4c0);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_4c0 + 8))(local_4c0,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar14 = (int)local_4c0[1];
      bVar21 = iVar14 == 0;
      if (bVar21) {
        *(int *)(local_4c0 + 1) = 0;
        iVar14 = 0;
      }
      UNLOCK();
    }
  }
  FUN_14208d370(*(undefined8 *)(lVar11 + 0x20),lVar11 + 0x440,L"classModSkillDescription");
  local_520 = *(longlong **)(lVar11 + 0x448);
  if (local_520 != (longlong *)0x0) {
    LOCK();
    iVar14 = (int)local_520[1];
    bVar21 = iVar14 == 0;
    if (bVar21) {
      *(int *)(local_520 + 1) = 0;
      iVar14 = 0;
    }
    UNLOCK();
    if (!bVar21) {
LAB_140f6ec00:
      LOCK();
      bVar21 = iVar14 == (int)local_520[1];
      if (bVar21) {
        *(int *)(local_520 + 1) = iVar14 + 1;
      }
      UNLOCK();
      if (!bVar21) goto code_r0x000140f6ec0a;
      if (local_520 == (longlong *)0x0) goto LAB_140f6eeda;
      local_528 = *(longlong *)(lVar11 + 0x440);
      if (local_528 == 0) goto LAB_140f6eea3;
      if ((*(longlong *)(lVar11 + 0x458) == 0) || (*(longlong *)(lVar11 + 0x460) == 0)) {
LAB_140f6ec5b:
        uVar8 = FUN_1420392d0(local_528,local_130,L"legendaryDescription");
        FUN_142ede260(lVar11 + 0x450,uVar8);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_130);
      }
      else {
        piVar1 = (int *)(*(longlong *)(lVar11 + 0x460) + 8);
        LOCK();
        iVar14 = *piVar1;
        if (iVar14 == 0) {
          *piVar1 = 0;
          iVar14 = 0;
        }
        UNLOCK();
        if (iVar14 < 1) goto LAB_140f6ec5b;
      }
      AcquireSRWLockExclusive((PSRWLOCK)(lVar11 + 0x478));
      plVar20 = (longlong *)(lVar11 + 0x468);
      iVar14 = *(int *)(lVar11 + 0x474);
      iVar16 = *(int *)(lVar11 + 0x470);
      if (iVar14 < 0) {
        if (iVar16 != 0) {
          plVar15 = (longlong *)(*plVar20 + 0x10);
          do {
            plVar4 = (longlong *)*plVar15;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar14 == 1) && (plVar4 != (longlong *)0x0)) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
            plVar15 = plVar15 + 3;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
          iVar14 = *(int *)(lVar11 + 0x474);
        }
        *(undefined4 *)(lVar11 + 0x470) = 0;
        if (iVar14 != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeTo(plVar20,0);
        }
      }
      else {
        if (iVar16 != 0) {
          plVar15 = (longlong *)(*plVar20 + 0x10);
          do {
            plVar4 = (longlong *)*plVar15;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar14 == 1) && (plVar4 != (longlong *)0x0)) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
            plVar15 = plVar15 + 3;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
        }
        *(undefined4 *)(lVar11 + 0x470) = 0;
      }
      iVar14 = 1;
      while( true ) {
        FString::PrintfImpl(&local_288,L"skill%i",iVar14);
        puVar17 = &DAT_143f3eda8;
        if (local_280 != 0) {
          puVar17 = local_288;
        }
        uVar8 = FUN_1420392d0(local_528,local_120,puVar17);
        FUN_142eddd40(local_338,uVar8);
        plVar15 = local_118;
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_118 + 1;
          lVar12 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar16 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        if (local_288 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_330 == 0) break;
        if (local_328 == (longlong *)0x0) goto LAB_140f6ee91;
        LOCK();
        iVar16 = (int)local_328[1];
        if (iVar16 == 0) {
          *(int *)(local_328 + 1) = 0;
          iVar16 = 0;
        }
        UNLOCK();
        if (iVar16 < 1) break;
        iVar16 = *(int *)(lVar11 + 0x470);
        lVar12 = (longlong)iVar16;
        *(int *)(lVar11 + 0x470) = iVar16 + 1;
        if (*(int *)(lVar11 + 0x474) < iVar16 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar20,iVar16);
        }
        lVar5 = *plVar20;
        iVar14 = iVar14 + 1;
        *(undefined4 *)(lVar5 + lVar12 * 0x18) = local_338[0];
        *(longlong *)(lVar5 + 8 + lVar12 * 0x18) = local_330;
        *(longlong **)(lVar5 + 0x10 + lVar12 * 0x18) = local_328;
        local_328 = (longlong *)0x0;
        local_330 = 0;
      }
      if (local_328 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_328 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar14 == 1) && (local_328 != (longlong *)0x0)) {
          (**(code **)(*local_328 + 8))(local_328,1);
        }
      }
LAB_140f6ee91:
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar11 + 0x478));
LAB_140f6eea3:
      plVar15 = local_520;
      LOCK();
      plVar20 = local_520 + 1;
      lVar12 = *plVar20;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_520)(local_520);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_520 + 8))(local_520,1);
        }
      }
    }
  }
LAB_140f6eeda:
  local_4a8 = 0;
  local_4a0 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4a8,0);
  FGenericPlatformString::Memcpy(local_4a8,L"itemCardBottom",0x1e);
  local_570 = &local_4b8;
  local_578 = (longlong **)CONCAT71(local_578._1_7_,6);
  local_4b8 = (longlong *)0x0;
  local_4b0 = 0;
  local_238 = 0;
  FUN_140e98b90(*(undefined8 *)(lVar11 + 0x20),lVar11 + 0x508,&local_4a8,0);
  plVar20 = local_4b8;
  for (iVar14 = (int)local_4b0; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar20 != 0) {
      FMemory::Free();
    }
    plVar20 = plVar20 + 2;
  }
  if (local_4b8 != (longlong *)0x0) {
    FMemory::Free(local_4b8);
  }
  if (local_4a8 != 0) {
    FMemory::Free();
  }
  if ((*(longlong *)(lVar11 + 0x508) != 0) && (*(float *)(lVar11 + 0x4ac) <= 1e-08)) {
    FUN_142087ad0(*(longlong *)(lVar11 + 0x508),lVar11 + 0x4a8);
    FUN_14208d370(*(undefined8 *)(lVar11 + 0x508),lVar11 + 0x510,L"cardBottomRarity");
  }
  if (*(longlong *)(lVar11 + 0x398) != 0) {
    dVar6 = (double)FUN_142eeca30();
    *(float *)(lVar11 + 0x4c0) = (float)dVar6;
    lVar12 = FUN_142086190(*(undefined8 *)(lVar11 + 0x398),local_a8);
    local_b8 = *(undefined4 *)(lVar12 + 0x20);
    uStack_b4 = *(undefined4 *)(lVar12 + 0x24);
    uStack_b0 = *(undefined4 *)(lVar12 + 0x28);
    uStack_ac = *(undefined4 *)(lVar12 + 0x2c);
    *(undefined4 *)(lVar11 + 0x4c4) = uStack_b4;
  }
  local_488 = 0;
  local_480 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_488,0);
  FGenericPlatformString::Memcpy(local_488,L"manufacturerPiece",0x24);
  local_578 = (longlong **)CONCAT71(local_578._1_7_,6);
  local_498 = (longlong *)0x0;
  local_490 = 0;
  local_230 = 0;
  local_570 = &local_498;
  FUN_140e98b90(*(undefined8 *)(lVar11 + 0x20),lVar11 + 0x4d0,&local_488,0);
  plVar20 = local_498;
  for (iVar14 = (int)local_490; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar20 != 0) {
      FMemory::Free();
    }
    plVar20 = plVar20 + 2;
  }
  if (local_498 != (longlong *)0x0) {
    FMemory::Free(local_498);
  }
  if (local_488 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(lVar11 + 0x4d0) == 0) goto LAB_140f6f278;
  FUN_142087ad0(*(longlong *)(lVar11 + 0x4d0),lVar11 + 0x4b0,lVar11 + 0x4b4);
  if ((*(longlong *)(lVar11 + 0x4e0) == 0) || (*(longlong *)(lVar11 + 0x4e8) == 0)) {
LAB_140f6f105:
    uVar8 = FUN_142085870(*(undefined8 *)(lVar11 + 0x4d0),local_110,L"alreadyKnown");
    FUN_142ede260(lVar11 + 0x4d8,uVar8);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_110);
  }
  else {
    piVar1 = (int *)(*(longlong *)(lVar11 + 0x4e8) + 8);
    LOCK();
    iVar14 = *piVar1;
    if (iVar14 == 0) {
      *piVar1 = 0;
      iVar14 = 0;
    }
    UNLOCK();
    if (iVar14 < 1) goto LAB_140f6f105;
  }
  if ((*(longlong *)(lVar11 + 0x4e0) != 0) && (*(longlong *)(lVar11 + 0x4e8) != 0)) {
    piVar1 = (int *)(*(longlong *)(lVar11 + 0x4e8) + 8);
    LOCK();
    iVar14 = *piVar1;
    if (iVar14 == 0) {
      *piVar1 = 0;
      iVar14 = 0;
    }
    UNLOCK();
    if (0 < iVar14) {
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_e0,L"ALREADY KNOWN",L"ItemCardObject",L"AlreadyKnownText");
      UMistDebugEntityScreen::InspectEntity(lVar11 + 0x4d8,uVar8,1,0);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_e0);
      FUN_142f10d20(lVar11 + 0x4d8,0);
    }
  }
  local_478 = 0;
  local_470 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_478,0);
  FGenericPlatformString::Memcpy(local_478,L"manufacturerFill",0x22);
  local_570 = &local_2e0;
  local_578 = (longlong **)CONCAT71(local_578._1_7_,6);
  local_2e0 = (longlong *)0x0;
  local_2d8 = 0;
  local_228 = 0;
  FUN_140e98b90(*(undefined8 *)(lVar11 + 0x4d0),lVar11 + 0x4f0,&local_478,0);
  TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_2e0);
  if (local_478 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(lVar11 + 0x4f0) != 0) {
    lVar12 = FUN_142086190(*(longlong *)(lVar11 + 0x4f0),local_78);
    local_c8 = *(undefined4 *)(lVar12 + 0x20);
    uStack_c4 = *(undefined4 *)(lVar12 + 0x24);
    uStack_c0 = *(undefined4 *)(lVar12 + 0x28);
    uStack_bc = *(undefined4 *)(lVar12 + 0x2c);
    *(undefined4 *)(lVar11 + 0x4b8) = uStack_c4;
    dVar6 = (double)FUN_142eeca30(*(undefined8 *)(lVar11 + 0x4f0));
    *(float *)(lVar11 + 0x4bc) = (float)dVar6;
  }
LAB_140f6f278:
  local_468[0] = 0;
  local_468[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_468,0);
  FGenericPlatformString::Memcpy(local_468[0],L"manufacturerStats",0x24);
  local_570 = (longlong **)&local_2d0;
  plVar20 = (longlong *)(lVar11 + 0x4f8);
  local_578 = (longlong **)CONCAT71(local_578._1_7_,6);
  local_2d0 = 0;
  local_2c8 = 0;
  local_220 = 0;
  FUN_140e99270(*(undefined8 *)(lVar11 + 0x20),plVar20,local_468,0);
  TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_2d0);
  if (local_468[0] != 0) {
    FMemory::Free();
  }
  if (*plVar20 != 0) {
    uVar22 = FUN_142eee550();
    *(undefined4 *)(lVar11 + 0x484) = uVar22;
    FUN_142f10ae0(*plVar20,3);
    FUN_142f0de70(*plVar20,PTR_DAT_14629e1e0);
  }
  local_468[2] = 0;
  local_468[3] = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_468 + 2,0);
  FGenericPlatformString::Memcpy(local_468[2],L"manufacturerTextRarityTint",0x36);
  local_570 = (longlong **)&local_2c0;
  local_578 = (longlong **)CONCAT71(local_578._1_7_,6);
  local_2c0 = 0;
  local_2b8 = 0;
  local_218 = 0;
  FUN_140e98b90(*(undefined8 *)(lVar11 + 0x20),lVar11 + 0x500,local_468 + 2,0);
  TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_2c0);
  if (local_468[2] != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(lVar11 + 0x500) != 0) {
    local_548[0] = 0;
    FUN_142087ad0(*(longlong *)(lVar11 + 0x500),local_548,lVar11 + 0x4c8);
  }
  local_468[4] = 0;
  local_468[5] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_468 + 4,0);
  FGenericPlatformString::Memcpy(local_468[4],L"currency",0x12);
  local_570 = (longlong **)&local_320;
  local_578 = (longlong **)CONCAT71(local_578._1_7_,6);
  local_320 = 0;
  local_318 = 0;
  local_210 = 0;
  FUN_140f57f20(*(undefined8 *)(lVar11 + 0x20),lVar11 + 0x208,local_468 + 4,0);
  TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_320);
  if (local_468[4] != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(lVar11 + 0x208) != 0) {
    FUN_140f0a9a0(*(longlong *)(lVar11 + 0x208),*(undefined4 *)(lVar11 + 0x1f0));
    FUN_140f08510(*(undefined8 *)(lVar11 + 0x208),*(undefined4 *)(lVar11 + 0x1ec));
    FUN_140f0b470(*(undefined8 *)(lVar11 + 0x208),*(undefined4 *)(lVar11 + 0x1e8));
  }
  FUN_14208d370(*(undefined8 *)(lVar11 + 0x20),lVar11 + 0x520,L"lootBeamGlow");
  local_468[6] = 0;
  SharedPointerInternals::FSharedReferencer<1>::FSharedReferencer<1>(&local_430,lVar11 + 0x528);
  plVar15 = local_430;
  if (local_430 != (longlong *)0x0) {
    local_468[6] = *(longlong *)(lVar11 + 0x520);
  }
  if (local_468[6] != 0) {
    FUN_142056670(local_468[6],0);
  }
  plVar4 = local_430;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar15 + 1;
    lVar12 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_430)(local_430);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_430 + 8))(local_430,1);
      }
    }
  }
  if ((((longlong *)*plVar20 != (longlong *)0x0) && (*(longlong *)(lVar11 + 0x3a8) != 0)) &&
     (*(longlong *)(lVar11 + 0x3b8) != 0)) {
    lVar12 = *(longlong *)*plVar20;
    uVar8 = FUN_1404b03b0();
    (**(code **)(lVar12 + 0x2b0))(*plVar20,uVar8,1,0);
    lVar12 = **(longlong **)(lVar11 + 0x3a8);
    uVar8 = FUN_1404b03b0();
    (**(code **)(lVar12 + 0x2b0))(*(undefined8 *)(lVar11 + 0x3a8),uVar8,1,0);
    lVar12 = **(longlong **)(lVar11 + 0x3b8);
    uVar8 = FUN_1404b03b0();
    (**(code **)(lVar12 + 0x2b0))(*(undefined8 *)(lVar11 + 0x3b8),uVar8,1,0);
  }
  return;
LAB_140f6d650:
  local_428 = (longlong *)0x0;
  local_420 = 0;
  FString::PrintfImpl(local_2a8,L"statEntryMirror%i",uVar19);
  lVar11 = local_538;
  cVar7 = FUN_142056870(local_538,local_2a8);
  uVar10 = uVar13;
  uVar18 = (uint)uVar19;
  if (cVar7 == '\0') {
    uVar8 = FUN_141359870();
    puVar9 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(lVar11 + 8,local_1e0);
    plVar15 = (longlong *)puVar9[1];
    local_278 = *puVar9;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(local_538 + 0x80);
    uVar3 = *(undefined8 *)(local_538 + 0x78);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    local_570 = &local_428;
    local_578 = (longlong **)CONCAT71(local_578._1_7_,6);
    local_270 = plVar15;
    uVar10 = FUN_14203b750(uVar3,uVar8,local_2a8,&local_278);
    if (uVar10 == 0) {
LAB_140f6d744:
      uVar10 = uVar13;
    }
    else {
      lVar11 = FUN_141359870();
      if ((*(int *)(*(longlong *)(uVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      if (!bVar21) goto LAB_140f6d744;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar15 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    plVar15 = local_1d8;
    uVar18 = local_568;
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_1d8 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_1d8)(local_1d8);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        uVar18 = local_568;
        if (iVar14 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
          uVar18 = local_568;
        }
      }
    }
  }
  if (local_2a8[0] != 0) {
    FMemory::Free();
  }
  plVar15 = local_428;
  for (iVar14 = (int)local_420; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar15 != 0) {
      FMemory::Free();
    }
    plVar15 = plVar15 + 2;
  }
  if (local_428 != (longlong *)0x0) {
    FMemory::Free(local_428);
  }
  lVar11 = local_540;
  if (uVar10 == 0) goto LAB_140f6d889;
  iVar14 = *(int *)(param_1 + 0x120);
  *(int *)(param_1 + 0x120) = iVar14 + 1;
  if (*(int *)(param_1 + 0x124) < iVar14 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar20,iVar14);
  }
  local_568 = uVar18 + 1;
  uVar19 = (ulonglong)local_568;
  *(ulonglong *)(*plVar20 + (longlong)iVar14 * 8) = uVar10;
  goto LAB_140f6d650;
LAB_140f6d889:
  plVar15 = local_530;
  LOCK();
  plVar20 = local_530 + 1;
  lVar12 = *plVar20;
  *(int *)plVar20 = (int)*plVar20 + -1;
  UNLOCK();
  param_1 = lVar11;
  if ((int)lVar12 == 1) {
    (**(code **)*local_530)(local_530);
    LOCK();
    piVar1 = (int *)((longlong)plVar15 + 0xc);
    iVar14 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar14 == 1) {
      (**(code **)(*local_530 + 8))(local_530,1);
    }
  }
  goto LAB_140f6d50d;
code_r0x000140f6e47e:
  LOCK();
  iVar14 = (int)local_550[1];
  bVar21 = iVar14 == 0;
  if (bVar21) {
    *(int *)(local_550 + 1) = 0;
    iVar14 = 0;
  }
  UNLOCK();
  if (bVar21) goto LAB_140f6e857;
  goto LAB_140f6e474;
code_r0x000140f6ec0a:
  LOCK();
  iVar14 = (int)local_520[1];
  bVar21 = iVar14 == 0;
  if (bVar21) {
    *(int *)(local_520 + 1) = 0;
    iVar14 = 0;
  }
  UNLOCK();
  if (bVar21) goto LAB_140f6eeda;
  goto LAB_140f6ec00;
}



// FUNCTION 140f6f5f0 FUN_140f6f5f0 body=200 status=ok
// SIG undefined FUN_140f6f5f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f6f5f0(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar3 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140f6f654;
  }
  lVar3 = 0;
LAB_140f6f654:
  FUN_140f69e30(param_1 + 0x640,*(undefined8 *)(param_1 + 0x2b8),lVar3);
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    puVar5 = (undefined8 *)FUN_142086190(*(longlong *)(param_1 + 0x2b8),local_48);
    uVar1 = puVar5[1];
    *(undefined8 *)(param_1 + 0xbf0) = *puVar5;
    *(undefined8 *)(param_1 + 0xbf8) = uVar1;
    uVar1 = puVar5[3];
    *(undefined8 *)(param_1 + 0xc00) = puVar5[2];
    *(undefined8 *)(param_1 + 0xc08) = uVar1;
    uVar1 = puVar5[5];
    *(undefined8 *)(param_1 + 0xc10) = puVar5[4];
    *(undefined8 *)(param_1 + 0xc18) = uVar1;
  }
  return;
}



// FUNCTION 140f6f6c0 FUN_140f6f6c0 body=117 status=ok
// SIG undefined FUN_140f6f6c0(void)

void FUN_140f6f6c0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5d8);
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
    if (bVar1) goto LAB_140f6f715;
  }
  lVar2 = 0;
LAB_140f6f715:
  FUN_140f69e30(param_1 + 0x630,*(undefined8 *)(param_1 + 0x2b8),lVar2);
  return;
}



// FUNCTION 140f6f750 FUN_140f6f750 body=2267 status=ok
// SIG undefined FUN_140f6f750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f6f750(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  longlong *param_5)

{
  int *piVar1;
  uint *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined4 *puVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auStack_3b8 [32];
  uint local_398;
  undefined8 local_390;
  undefined1 local_388;
  undefined8 local_380;
  undefined1 local_378;
  undefined4 *local_368;
  longlong local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined1 local_338 [8];
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  void *local_318;
  int local_310;
  int local_30c;
  undefined1 local_308;
  undefined1 local_307;
  undefined4 local_304;
  byte local_300;
  undefined1 local_2f8 [24];
  undefined1 local_2e0 [24];
  undefined1 local_2c8 [24];
  undefined1 local_2b0 [24];
  undefined1 local_298;
  undefined4 local_294;
  undefined1 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined8 local_280;
  longlong local_278;
  undefined **local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  void *local_248;
  int local_240;
  undefined4 local_23c;
  undefined1 local_238;
  undefined1 local_237;
  undefined4 local_234;
  byte local_230;
  undefined1 local_228 [24];
  undefined1 local_210 [24];
  undefined1 local_1f8 [24];
  undefined1 local_1e0 [24];
  undefined1 local_1c8;
  undefined4 local_1c4;
  undefined1 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined4 *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 *local_178 [2];
  undefined1 local_168 [32];
  undefined8 local_148;
  undefined4 local_138;
  longlong local_128 [4];
  longlong *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
  local_368 = param_4;
  FUN_140f8c3d0();
  puVar18 = param_1 + 2;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *puVar18 = *param_3;
  param_1[3] = param_3[1];
  cVar8 = FWeakObjectPtr::IsValid(param_1);
  if (cVar8 == '\0') {
    return;
  }
  cVar8 = FWeakObjectPtr::IsValid(puVar18);
  if (cVar8 == '\0') {
    return;
  }
  lVar10 = FWeakObjectPtr::Get(param_1);
  lVar10 = *(longlong *)(lVar10 + 0x168);
  if (lVar10 == 0) {
    local_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_d8 = _DAT_146872a20 & _DAT_146872a30;
    uStack_d4 = uRam0000000146872a24 & uRam0000000146872a34;
    uStack_d0 = uRam0000000146872a28 & uRam0000000146872a38;
    uStack_cc = uRam0000000146872a2c & uRam0000000146872a3c;
    local_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_ec = uRam0000000146872a2c;
    local_78 = local_d8;
    uStack_74 = uStack_d4;
    uStack_70 = uStack_d0;
    uStack_6c = uStack_cc;
  }
  else {
    local_e8 = *(undefined4 *)(lVar10 + 0x220);
    uStack_e4 = *(undefined4 *)(lVar10 + 0x224);
    uStack_e0 = *(undefined4 *)(lVar10 + 0x228);
    uStack_dc = *(undefined4 *)(lVar10 + 0x22c);
    local_d8 = *(uint *)(lVar10 + 0x230);
    uStack_d4 = *(uint *)(lVar10 + 0x234);
    uStack_d0 = *(uint *)(lVar10 + 0x238);
    uStack_cc = *(uint *)(lVar10 + 0x23c);
    local_f8 = *(undefined4 *)(lVar10 + 0x210);
    uStack_f4 = *(undefined4 *)(lVar10 + 0x214);
    uStack_f0 = *(undefined4 *)(lVar10 + 0x218);
    uStack_ec = *(uint *)(lVar10 + 0x21c);
    local_b8 = local_e8;
    uStack_b4 = uStack_e4;
    uStack_b0 = uStack_e0;
    uStack_ac = uStack_dc;
    local_a8 = local_d8;
    uStack_a4 = uStack_d4;
    uStack_a0 = uStack_d0;
    uStack_9c = uStack_cc;
  }
  local_360 = FWeakObjectPtr::Get(puVar18);
  if (local_360 != 0) {
    lVar10 = FUN_14142bde0();
    if ((*(int *)(*(longlong *)(local_360 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_360 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) goto LAB_140f6f8a5;
  }
  local_360 = 0;
LAB_140f6f8a5:
  lVar10 = FWeakObjectPtr::Get(puVar18);
  lVar10 = *(longlong *)(lVar10 + 0x290);
  local_108 = (longlong *)0x0;
  local_100 = 0;
  uVar11 = FWeakObjectPtr::Get(param_1);
  FUN_140e3e400(uVar11,local_128,0);
  plVar14 = local_128;
  if (local_108 != (longlong *)0x0) {
    plVar14 = local_108;
  }
  plVar15 = plVar14 + (int)local_100;
  for (; plVar14 != plVar15; plVar14 = plVar14 + 1) {
    lVar19 = *plVar14;
    if (*(int *)(lVar19 + 0x908) != 0) {
      cVar8 = FWeakObjectPtr::IsValid(param_1 + 4);
      if (((cVar8 == '\0') && (lVar10 != 0)) &&
         (lVar12 = FVoicePacketImpl::GetSampleCounter(lVar10),
         *(longlong *)(lVar19 + 0x718) == lVar12)) {
        FUN_140f70030(param_1 + 4,lVar19,&local_f8);
        FWeakObjectPtr::operator=(param_1 + 0x14);
      }
      else if (local_360 != 0) {
        plVar3 = (longlong *)(param_1 + 0x30);
        iVar20 = param_1[0x32];
        iVar9 = iVar20 + 1;
        param_1[0x32] = iVar9;
        if ((int)param_1[0x33] < iVar9) {
          TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(plVar3);
        }
        lVar12 = *plVar3;
        lVar17 = (longlong)iVar20 * 0xb0;
        *(undefined4 *)(lVar17 + lVar12) = 0xffffffff;
        *(undefined4 *)(lVar17 + 4 + lVar12) = 0;
        uVar21 = uRam0000000146872a2c;
        puVar13 = (undefined8 *)(lVar17 + 0x20 + lVar12);
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar18 = (undefined4 *)(lVar17 + 0x10 + lVar12);
        *puVar18 = 0;
        puVar18[1] = 0;
        puVar18[2] = 0;
        puVar18[3] = uVar21;
        uVar21 = uRam0000000146872a24 & uRam0000000146872a34;
        uVar22 = uRam0000000146872a28 & uRam0000000146872a38;
        uVar23 = uRam0000000146872a2c & uRam0000000146872a3c;
        puVar2 = (uint *)(lVar17 + 0x30 + lVar12);
        *puVar2 = _DAT_146872a20 & _DAT_146872a30;
        puVar2[1] = uVar21;
        puVar2[2] = uVar22;
        puVar2[3] = uVar23;
        *(undefined4 *)(lVar17 + 0x40 + lVar12) = 0xffffffff;
        *(undefined4 *)(lVar17 + 0x44 + lVar12) = 0;
        *(undefined8 *)(lVar17 + 0x48 + lVar12) = 0;
        *(undefined8 *)(lVar17 + 0x50 + lVar12) = 0;
        *(undefined4 *)(lVar17 + 0x58 + lVar12) = 0xffffffff;
        *(undefined4 *)(lVar17 + 0x5c + lVar12) = 0;
        *(undefined8 *)(lVar17 + 0x60 + lVar12) = 0;
        *(undefined8 *)(lVar17 + 0x68 + lVar12) = 0;
        *(undefined8 *)(lVar17 + 0x80 + lVar12) = 0;
        *(undefined8 *)(lVar17 + 0x88 + lVar12) = 0;
        *(undefined4 *)(lVar17 + 0x90 + lVar12) = 0xffffffff;
        *(undefined4 *)(lVar17 + 0x94 + lVar12) = 0;
        *(undefined8 *)(lVar17 + 0xa0 + lVar12) = 0;
        *(undefined4 *)(lVar17 + 0xa8 + lVar12) = 0;
        lVar17 = *plVar3 + lVar17;
        FUN_140f8c560(lVar17);
        FWeakObjectPtr::operator=(lVar17,lVar19);
        puVar13 = (undefined8 *)FUN_14162bcf0(lVar19 + 0x210,local_68,&local_f8);
        uVar11 = puVar13[1];
        *(undefined8 *)(lVar17 + 0x10) = *puVar13;
        *(undefined8 *)(lVar17 + 0x18) = uVar11;
        uVar4 = *(undefined4 *)((longlong)puVar13 + 0x14);
        uVar5 = *(undefined4 *)(puVar13 + 3);
        uVar6 = *(undefined4 *)((longlong)puVar13 + 0x1c);
        *(undefined4 *)(lVar17 + 0x20) = *(undefined4 *)(puVar13 + 2);
        *(undefined4 *)(lVar17 + 0x24) = uVar4;
        *(undefined4 *)(lVar17 + 0x28) = uVar5;
        *(undefined4 *)(lVar17 + 0x2c) = uVar6;
        uVar4 = *(undefined4 *)((longlong)puVar13 + 0x24);
        uVar5 = *(undefined4 *)(puVar13 + 5);
        uVar6 = *(undefined4 *)((longlong)puVar13 + 0x2c);
        *(undefined4 *)(lVar17 + 0x30) = *(undefined4 *)(puVar13 + 4);
        *(undefined4 *)(lVar17 + 0x34) = uVar4;
        *(undefined4 *)(lVar17 + 0x38) = uVar5;
        *(undefined4 *)(lVar17 + 0x3c) = uVar6;
        TArray<FName,FDefaultAllocator>::operator=(lVar17 + 0x48);
      }
    }
    param_4 = local_368;
  }
  uStack_340 = &local_360;
  local_148 = 0;
  local_138 = 0;
  local_348 = param_1;
  puVar13 = (undefined8 *)FUN_140438ef0(0x18,local_168);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar13 + 1) = (undefined4)local_348;
    *(undefined4 *)((longlong)puVar13 + 0xc) = local_348._4_4_;
    *(undefined4 *)(puVar13 + 2) = (undefined4)uStack_340;
    *(undefined4 *)((longlong)puVar13 + 0x14) = uStack_340._4_4_;
  }
  local_178[0] = &LAB_140f62b20;
  uVar11 = FWeakObjectPtr::Get(param_1 + 2);
  FUN_142ff3570(uVar11,local_178);
  local_188 = *param_4;
  uStack_184 = param_4[1];
  uStack_180 = param_4[2];
  uStack_17c = param_4[3];
  local_190 = param_1;
  FUN_140f61200(&local_190,param_1 + 4);
  lVar10 = *(longlong *)(param_1 + 0x30);
  puVar18 = (undefined4 *)((longlong)(int)param_1[0x32] * 0xb0 + lVar10);
  local_368 = puVar18;
  if ((undefined4 *)lVar10 != puVar18) {
    lVar19 = lVar10 + 0x58;
    do {
      iVar20 = 0;
      cVar8 = FWeakObjectPtr::IsValid(lVar10);
      if ((cVar8 != '\0') && (cVar8 = FWeakObjectPtr::IsValid(lVar19 + -0x18), cVar8 != '\0')) {
        local_358 = 0;
        lVar12 = FWeakObjectPtr::Get(lVar10);
        plVar14 = *(longlong **)(lVar12 + 0x10);
        lVar12 = plVar14[0x1f];
        if (lVar12 == 0) {
          (**(code **)(*plVar14 + 0x368))(plVar14);
          lVar12 = plVar14[0x1f];
        }
        uVar11 = FWeakObjectPtr::Get(param_1);
        uVar11 = FUN_142227070(uVar11,lVar12,local_358);
        FWeakObjectPtr::operator=(lVar19,uVar11);
        cVar8 = FWeakObjectPtr::IsValid(lVar19);
        if (cVar8 != '\0') {
          plVar14 = (longlong *)FWeakObjectPtr::Get(lVar19);
          lVar12 = FWeakObjectPtr::Get(lVar10);
          (**(code **)(*plVar14 + 0x930))(plVar14,*(undefined8 *)(lVar12 + 0x718),1);
          plVar14 = (longlong *)FWeakObjectPtr::Get(lVar10);
          iVar9 = (**(code **)(*plVar14 + 0x6c8))(plVar14);
          if (0 < iVar9) {
            do {
              plVar14 = (longlong *)FWeakObjectPtr::Get(lVar10);
              plVar15 = (longlong *)FWeakObjectPtr::Get(lVar19);
              lVar12 = *plVar15;
              uVar11 = (**(code **)(*plVar14 + 0x560))(plVar14,iVar20);
              (**(code **)(lVar12 + 0x568))(plVar15,iVar20,uVar11);
              iVar20 = iVar20 + 1;
              plVar14 = (longlong *)FWeakObjectPtr::Get(lVar10);
              iVar9 = (**(code **)(*plVar14 + 0x6c8))(plVar14);
              puVar18 = local_368;
            } while (iVar20 < iVar9);
          }
          lVar12 = FWeakObjectPtr::Get(lVar19);
          iVar20 = *(int *)(lVar12 + 0x90);
          *(int *)(lVar12 + 0x90) = iVar20 + 1;
          if (*(int *)(lVar12 + 0x94) < iVar20 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar12 + 0x88,iVar20);
          }
          *(undefined8 *)(*(longlong *)(lVar12 + 0x88) + (longlong)iVar20 * 8) = DAT_146872e50;
          uVar11 = FWeakObjectPtr::Get(lVar19);
          FUN_142397540(uVar11,1);
          local_350 = 0;
          uVar11 = FWeakObjectPtr::Get(lVar10);
          uVar16 = FWeakObjectPtr::Get(lVar19);
          FUN_142399e30(uVar16,uVar11,0);
          uVar11 = FWeakObjectPtr::Get(lVar19);
          FUN_14234b150(uVar11);
        }
      }
      lVar10 = lVar10 + 0xb0;
      lVar19 = lVar19 + 0xb0;
    } while ((undefined4 *)lVar10 != puVar18);
  }
  if (*param_5 != 0) {
    lVar19 = USafeZone::GetPrivateStaticClass();
    for (lVar10 = *param_5; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
      if (lVar10 == lVar19) {
        if ((*param_5 != 0) &&
           (plVar14 = (longlong *)FWeakObjectPtr::Get(param_1), plVar14 != (longlong *)0x0)) {
          local_348 = (undefined4 *)FUN_142e27720();
          lVar10 = (**(code **)(*plVar14 + 0x628))(plVar14,local_348);
          if (lVar10 == 0) {
            FUN_1417846f0(plVar14,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                         );
            local_368 = (undefined4 *)lVar10;
            uVar11 = FUN_142e27720();
            local_378 = 0;
            local_380 = 0;
            local_388 = 0;
            local_390 = 0;
            local_398 = 0;
            lVar10 = FUN_1417985e0(uVar11,plVar14,0,0);
            FUN_14234b150(lVar10);
          }
          FUN_142c62180(local_338);
          iVar20 = local_310;
          lVar19 = (longlong)local_310;
          local_307 = 2;
          local_310 = local_310 + 1;
          if (local_30c < local_310) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_318,iVar20);
          }
          FUN_142c625d0((void *)(lVar19 * 0x38 + (longlong)local_318),&DAT_146b31788,DAT_146872e50);
          lVar19 = (longlong)local_310;
          local_268 = &PTR_FUN_143ff6170;
          local_260 = local_330;
          local_258 = local_328;
          local_250 = local_320;
          local_248 = (void *)0x0;
          local_240 = local_310;
          if (local_310 == 0) {
            local_23c = 0;
          }
          else {
            TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy
                      (&local_248,local_310,0);
            _guard_xfg_dispatch_icall_nop(local_248,local_318,lVar19 * 0x38);
          }
          local_238 = local_308;
          local_237 = local_307;
          local_234 = local_304;
          local_230 = local_230 ^ (local_300 ^ local_230) & 7;
          FUN_1405e0d90(local_228,local_2f8);
          FUN_1405e0d90(local_210,local_2e0);
          FUN_1405e0d90(local_1f8,local_2c8);
          FUN_1405e0d90(local_1e0,local_2b0);
          local_1c8 = local_298;
          local_1c4 = local_294;
          local_1c0 = local_290;
          local_1b8 = local_288;
          local_1b0 = local_280;
          local_1bc = local_28c;
          local_1a8 = local_278;
          if (local_278 != 0) {
            LOCK();
            *(int *)(local_278 + 0xc) = *(int *)(local_278 + 0xc) + 1;
            UNLOCK();
          }
          lVar19 = 0;
          if (*param_5 != 0) {
            lVar17 = USafeZone::GetPrivateStaticClass();
            for (lVar12 = *param_5;
                (lVar19 = 0, lVar12 != 0 && (lVar19 = *param_5, lVar12 != lVar17));
                lVar12 = *(longlong *)(lVar12 + 0x30)) {
            }
          }
          local_398 = local_398 & 0xffffff00;
          FUN_142c7bb40(lVar10,local_1a0,lVar19,&local_268);
          if (local_198 != (longlong *)0x0) {
            LOCK();
            plVar14 = local_198 + 1;
            lVar10 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_198)(local_198);
              LOCK();
              piVar1 = (int *)((longlong)local_198 + 0xc);
              iVar20 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar20 == 1) {
                (**(code **)(*local_198 + 8))(local_198,1);
              }
            }
          }
          FUN_142c63c50(local_338);
        }
        break;
      }
    }
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f70030 FUN_140f70030 body=128 status=ok
// SIG undefined FUN_140f70030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f70030(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  FUN_140f8c560();
  FWeakObjectPtr::operator=(param_1,param_2);
  puVar5 = (undefined8 *)FUN_14162bcf0(param_2 + 0x210,local_58,param_3);
  uVar4 = puVar5[1];
  *(undefined8 *)(param_1 + 0x10) = *puVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  uVar1 = *(undefined4 *)((longlong)puVar5 + 0x14);
  uVar2 = *(undefined4 *)(puVar5 + 3);
  uVar3 = *(undefined4 *)((longlong)puVar5 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(puVar5 + 2);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)puVar5 + 0x24);
  uVar2 = *(undefined4 *)(puVar5 + 5);
  uVar3 = *(undefined4 *)((longlong)puVar5 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(puVar5 + 4);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  TArray<FName,FDefaultAllocator>::operator=(param_1 + 0x48,param_2 + 0x920);
  return;
}



// FUNCTION 140f700b0 FUN_140f700b0 body=370 status=ok
// SIG undefined FUN_140f700b0(void)

ulonglong FUN_140f700b0(longlong param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x228));
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x220);
  if ((cVar3 == '\0') ||
     (lVar5 = FWeakObjectPtr::Get(param_1 + 0x220), lVar5 != *(longlong *)(param_2 + 0x10))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x228));
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x218));
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x20c);
  if ((cVar3 == '\0') ||
     (lVar5 = FWeakObjectPtr::Get(param_1 + 0x20c), lVar5 != *(longlong *)(param_2 + 8))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x218));
  if ((!bVar1) || (!bVar2)) {
    uVar4 = *(uint *)(param_1 + 0x1cc) | *(uint *)(param_1 + 0x1d0) | *(uint *)(param_1 + 0x1d4) |
            *(uint *)(param_1 + 0x1d8);
    uVar6 = (ulonglong)uVar4;
    if ((uVar4 == 0) ||
       (uVar4 = *(uint *)(param_2 + 0x3c) ^ *(uint *)(param_1 + 0x1d8), uVar6 = (ulonglong)uVar4,
       ((*(uint *)(param_2 + 0x34) != *(uint *)(param_1 + 0x1d0) ||
        *(uint *)(param_2 + 0x38) != *(uint *)(param_1 + 0x1d4)) || uVar4 != 0) ||
       *(uint *)(param_1 + 0x1cc) != *(uint *)(param_2 + 0x30))) goto LAB_140f70205;
  }
  uVar6 = *(ulonglong *)(param_2 + 0x18);
  if (*(ulonglong *)(param_1 + 0x1b0) == uVar6) {
    if (((ABS(*(float *)(param_1 + 0x230) - *(float *)(param_2 + 0x20)) <= 0.0001) &&
        (ABS(*(float *)(param_1 + 0x234) - *(float *)(param_2 + 0x24)) <= 0.0001)) &&
       (ABS(*(float *)(param_1 + 0x238) - *(float *)(param_2 + 0x28)) <= 0.0001)) {
      return CONCAT71((int7)(uVar6 >> 8),1);
    }
  }
LAB_140f70205:
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 140f70230 FUN_140f70230 body=69 status=ok
// SIG undefined FUN_140f70230(void)

bool FUN_140f70230(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x148))();
    if (lVar1 != 0) {
      return *(float *)(lVar1 + 0x798) - *(float *)(param_1 + 0x94) < *(float *)(param_1 + 0x30);
    }
  }
  return false;
}



// FUNCTION 140f70280 FUN_140f70280 body=8 status=ok
// SIG undefined FUN_140f70280(void)

undefined1 FUN_140f70280(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x1de);
}



// FUNCTION 140f70290 FUN_140f70290 body=22 status=ok
// SIG undefined FUN_140f70290(void)

void FUN_140f70290(longlong param_1)

{
  if (*(char *)(param_1 + 0x1a8) == '\0') {
    *(undefined1 *)(param_1 + 0x1a8) = 1;
    FUN_142ef5f70();
    return;
  }
  return;
}



// FUNCTION 140f702b0 FUN_140f702b0 body=505 status=ok
// SIG undefined FUN_140f702b0(void)

void FUN_140f702b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int local_res18 [4];
  undefined8 local_88;
  undefined1 local_80 [24];
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x90) == 0) {
    return;
  }
  plVar1 = (longlong *)(*(longlong *)(DAT_146b33f38 + 0x90) + 0xec8);
  TSet<TTuple<FString,BuildPatchServices::FMockManifestField>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res18,param_2);
  if (local_res18[0] == -1) {
    return;
  }
  lVar6 = (longlong)local_res18[0] * 0x40 + *plVar1;
  if (lVar6 == 0) {
    return;
  }
  if (lVar6 == -0x10) {
    return;
  }
  cVar4 = FSoftObjectPath::operator==(param_1 + 0x1b8,(undefined8 *)(lVar6 + 0x20));
  if ((cVar4 != '\0') && (*(char *)(param_1 + 0x1d0) != '\0')) {
    return;
  }
  iVar8 = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  if (0 < *(int *)(param_1 + 0x1a8)) {
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar7 + *(longlong *)(param_1 + 0x1a0)) + 0x188);
      if (lVar2 != 0) {
        FUN_142f06500(lVar2,0);
      }
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar8 < *(int *)(param_1 + 0x1a8));
  }
  local_88 = *(undefined8 *)(lVar6 + 0x20);
  FString::FString(local_80,lVar6 + 0x28);
  FSoftObjectPath::operator=(param_1 + 0x1b8,&local_88);
  lVar6 = FUN_141796df0(param_1 + 0x1b8);
  if (lVar6 != 0) {
    lVar7 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140f7041b;
  }
  lVar6 = 0;
LAB_140f7041b:
  *(longlong *)(param_1 + 0x1b0) = lVar6;
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (lVar6 == 0) {
    local_38 = 0;
    local_28 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_68[0] = &LAB_140f62af0;
    FUN_14204c280(local_68);
  }
  else {
    FUN_140f79530(param_1);
  }
  return;
}



// FUNCTION 140f704b0 FUN_140f704b0 body=586 status=ok
// SIG undefined FUN_140f704b0(void)

void FUN_140f704b0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar10;
  ulonglong uVar9;
  
  if (*(char *)(param_1 + 0xba0) == '\0') {
    uVar6 = 0;
    if (((*(longlong *)(param_1 + 0xb18) != 0) && (iVar5 = FUN_142eb7440(), 0 < iVar5)) &&
       (iVar5 = FUN_142eb7440(*(undefined8 *)(param_1 + 0xb18)), uVar9 = uVar6, 0 < iVar5)) {
      do {
        plVar3 = (longlong *)FUN_142eb6a30(*(undefined8 *)(param_1 + 0xb18),uVar9);
        if (plVar3 != (longlong *)0x0) {
          lVar4 = FUN_1413565b0();
          iVar5 = *(int *)(lVar4 + 0x90);
          if ((*(int *)(plVar3[2] + 0x90) < iVar5) ||
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)iVar5 * 8) != lVar4 + 0x88))
          {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            (**(code **)(*plVar3 + 0x360))(plVar3,CONCAT71((int7)(int3)((uint)iVar5 >> 8),2));
          }
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        iVar5 = FUN_142eb7440(*(undefined8 *)(param_1 + 0xb18));
      } while ((int)uVar8 < iVar5);
    }
    lVar4 = *(longlong *)(param_1 + 0x990);
    if ((lVar4 != 0) && (iVar5 = *(int *)(lVar4 + 0x188), uVar9 = uVar6, 0 < iVar5)) {
      do {
        if (((longlong)uVar9 < 0) || (iVar5 <= (int)uVar6)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) &&
           (plVar3 = *(longlong **)(*(longlong *)(lVar4 + 0x180) + uVar9 * 8),
           plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x360))(plVar3,0);
        }
        lVar4 = *(longlong *)(param_1 + 0x990);
        uVar8 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar8;
        iVar5 = *(int *)(lVar4 + 0x188);
        uVar9 = uVar9 + 1;
      } while ((int)uVar8 < iVar5);
    }
  }
  else if (*(char *)(param_1 + 0xba0) == '\x01') {
    lVar4 = *(longlong *)(param_1 + 0x990);
    iVar5 = 0;
    if ((lVar4 != 0) && (iVar2 = *(int *)(lVar4 + 0x188), 0 < iVar2)) {
      iVar7 = 0;
      lVar10 = 0;
      do {
        if ((lVar10 < 0) || (iVar2 <= iVar7)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) &&
           (plVar3 = *(longlong **)(*(longlong *)(lVar4 + 0x180) + lVar10 * 8),
           plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x360))(plVar3,2);
        }
        lVar4 = *(longlong *)(param_1 + 0x990);
        iVar7 = iVar7 + 1;
        lVar10 = lVar10 + 1;
        iVar2 = *(int *)(lVar4 + 0x188);
      } while (iVar7 < iVar2);
    }
    if (((*(longlong *)(param_1 + 0xb18) != 0) && (iVar2 = FUN_142eb7440(), 0 < iVar2)) &&
       (iVar2 = FUN_142eb7440(*(undefined8 *)(param_1 + 0xb18)), 0 < iVar2)) {
      do {
        plVar3 = (longlong *)FUN_142eb6a30(*(undefined8 *)(param_1 + 0xb18),iVar5);
        if (plVar3 != (longlong *)0x0) {
          lVar4 = FUN_1413565b0();
          if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
              != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            (**(code **)(*plVar3 + 0x360))(plVar3,0);
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = FUN_142eb7440(*(undefined8 *)(param_1 + 0xb18));
      } while (iVar5 < iVar2);
    }
  }
  return;
}



// FUNCTION 140f70700 FUN_140f70700 body=152 status=ok
// SIG undefined FUN_140f70700(void)

void FUN_140f70700(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  FUN_142ebee70();
  uVar4 = 0;
  plVar2 = (longlong *)param_1[0x128];
  uVar3 = (longlong)(int)param_1[0x129] & 0x1fffffffffffffff;
  if (plVar2 + (int)param_1[0x129] < plVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2b0))(plVar1,*(undefined1 *)((longlong)plVar1 + 0x1c9));
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000140f70791. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x578))(param_1,1);
  return;
}



// FUNCTION 140f707a0 FUN_140f707a0 body=59 status=ok
// SIG undefined FUN_140f707a0(void)

void FUN_140f707a0(longlong *param_1)

{
  FUN_142ebee70();
  if (param_1[200] != 0) {
    FUN_142f0ead0(param_1[200],0x3f800000);
  }
                    /* WARNING: Could not recover jumptable at 0x000140f707d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x578))(param_1,0);
  return;
}



// FUNCTION 140f707e0 FUN_140f707e0 body=421 status=ok
// SIG undefined FUN_140f707e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f707e0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_e8 [48];
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
  FUN_142ebee70();
  (**(code **)(*param_1 + 0x580))(param_1,1);
  *(undefined1 *)((longlong)param_1 + 0xc21) = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140f62c10;
  uVar6 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar6);
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
  plVar7 = (longlong *)param_1[0x16d];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar7[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar7 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar7[1];
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        if (plVar7 == (longlong *)0x0) {
          return;
        }
        if (param_1[0x16c] != 0) {
          FUN_142056670(param_1[0x16c],1);
        }
        LOCK();
        plVar1 = plVar7 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 != 1) {
          return;
        }
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 != 1) {
          return;
        }
        (**(code **)(*plVar7 + 8))(plVar7,1);
        return;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar7 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 140f70990 FUN_140f70990 body=34 status=ok
// SIG undefined FUN_140f70990(void)

void FUN_140f70990(longlong *param_1)

{
  FUN_142ebee70();
                    /* WARNING: Could not recover jumptable at 0x000140f709ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x580))(param_1,1);
  return;
}



// FUNCTION 140f709c0 FUN_140f709c0 body=167 status=ok
// SIG undefined FUN_140f709c0(void)

undefined8 FUN_140f709c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  if (((*(char *)(param_1 + 0xd15) == '\0') &&
      (plVar2 = *(longlong **)(param_1 + 0xce0), plVar2 != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,param_1 + -0x4d8,param_2), cVar3 != '\0')) {
    return 1;
  }
  if (*(char *)(param_1 + 0xce8) == '\0') {
    iVar1 = *(int *)(param_1 + 0xcd8);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x1d0) <= iVar1)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined1 *)((longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x1c8));
    }
  }
  else {
    uVar5 = 5;
  }
  cVar3 = FUN_140f68410(param_1 + 3000,param_2,uVar5,1);
  if (cVar3 != '\0') {
    return 1;
  }
  uVar4 = FOutputDevice::CanBeUsedOnAnyThread(param_1,param_2);
  return uVar4;
}



// FUNCTION 140f70a70 FUN_140f70a70 body=84 status=ok
// SIG undefined FUN_140f70a70(void)

undefined8 FUN_140f70a70(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x218) != 0) && (*(longlong *)(param_2 + 8) == DAT_146872c20)) {
    cVar1 = FUN_142f0b080();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  uVar2 = FUN_1410885f0(param_1,param_2);
  return uVar2;
}



// FUNCTION 140f70ad0 FUN_140f70ad0 body=2190 status=ok
// SIG undefined FUN_140f70ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f70ad0(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_228 [32];
  longlong *local_208;
  undefined2 local_1f8 [8];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8 [2];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8 [2];
  undefined4 *local_1a8;
  undefined4 *puStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  longlong local_178;
  undefined4 local_170;
  longlong local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  longlong local_140;
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  undefined1 local_128 [16];
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [24];
  undefined4 local_80 [4];
  undefined1 local_70 [8];
  longlong *local_68;
  char local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  lVar9 = FUN_140f681d0();
  if ((((lVar9 != 0) && (param_1[0x133] != 0)) &&
      (plVar4 = (longlong *)param_1[0x163], plVar4 != (longlong *)0x0)) &&
     ((char)param_1[0x174] == '\x01')) {
    (**(code **)(*plVar4 + 0x2b8))(plVar4,0xffffffff,0);
    if (param_1[0x173] != 0) {
      uVar10 = TScriptInterface<IBlendableInterface>::
               TScriptInterface<IBlendableInterface><UMaterialInterface>(local_b8);
      FUN_142ed36d0(param_1,uVar10,0);
      cVar8 = FUN_140e749e0(lVar9);
      bVar7 = true;
      if (cVar8 == '\0') {
        lVar12 = FUN_140e971d0(param_1);
        if (lVar12 != 0) {
          local_1b8[0] = 0;
          local_1b8[1] = 0;
          lVar13 = FUN_1422312c0(lVar12);
          if (lVar13 != 0) {
            lVar14 = FUN_14141f270();
            if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
               (bVar6 = bVar7,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
                (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
              bVar6 = false;
            }
            if ((bVar6) && (*(longlong **)(lVar9 + 0x470) != (longlong *)0x0)) {
              lVar9 = (**(code **)(**(longlong **)(lVar9 + 0x470) + 0x680))();
              if (lVar9 != 0) {
                lVar14 = UInputKeySelector::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
                   (bVar6 = bVar7,
                   *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                    (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
                  bVar6 = false;
                }
                if (bVar6) {
                  uStack_1e0 = *(longlong **)(lVar9 + 0x4c0);
                  local_1e8 = *(longlong **)(lVar9 + 0x4b8);
                  if (uStack_1e0 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(uStack_1e0 + 1) = (int)uStack_1e0[1] + 1;
                    UNLOCK();
                  }
                  if (local_1e8 != (longlong *)0x0) {
                    puVar11 = (undefined8 *)(**(code **)(*local_1e8 + 8))(local_1e8,local_130);
                    cVar8 = FUN_140bcac80(lVar13,*puVar11);
                    plVar2 = uStack_1e0;
                    plVar4 = uStack_1e0;
                    if (cVar8 == '\0') {
                      plVar5 = *(longlong **)(lVar9 + 0x538);
                      plVar4 = *(longlong **)(lVar9 + 0x540);
                      if (plVar4 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                        UNLOCK();
                      }
                      local_1c8._0_4_ = SUB84(plVar5,0);
                      local_50 = (undefined4)local_1c8;
                      local_1c8._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
                      uStack_4c = local_1c8._4_4_;
                      uStack_1c0._0_4_ = SUB84(plVar4,0);
                      uStack_48 = (undefined4)uStack_1c0;
                      uStack_1c0._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
                      uStack_44 = uStack_1c0._4_4_;
                      local_1c8 = local_1e8;
                      uStack_1c0 = uStack_1e0;
                      local_1e8 = plVar5;
                      if (uStack_1e0 != (longlong *)0x0) {
                        LOCK();
                        plVar5 = uStack_1e0 + 1;
                        lVar9 = *plVar5;
                        *(int *)plVar5 = (int)*plVar5 + -1;
                        UNLOCK();
                        if ((int)lVar9 == 1) {
                          puVar11 = (undefined8 *)*uStack_1e0;
                          uStack_1e0 = plVar4;
                          (*(code *)*puVar11)(plVar2);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar2 + 0xc);
                          iVar3 = *piVar1;
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          plVar4 = uStack_1e0;
                          if (iVar3 == 1) {
                            (**(code **)(*uStack_1c0 + 8))(uStack_1c0,1);
                            plVar4 = uStack_1e0;
                          }
                        }
                      }
                    }
                    uStack_1e0 = plVar4;
                    if (local_1e8 != (longlong *)0x0) {
                      local_158 = (undefined4)local_1e8;
                      uStack_154 = local_1e8._4_4_;
                      uStack_150 = (undefined4)uStack_1e0;
                      uStack_14c = uStack_1e0._4_4_;
                      if (uStack_1e0 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(uStack_1e0 + 1) = (int)uStack_1e0[1] + 1;
                        UNLOCK();
                      }
                      local_208 = local_1b8;
                      FUN_140d79f00(*(undefined8 *)(lVar13 + 0x478),&local_158,1,0);
                      plVar4 = (longlong *)CONCAT44(uStack_14c,uStack_150);
                      if (plVar4 != (longlong *)0x0) {
                        LOCK();
                        plVar2 = plVar4 + 1;
                        lVar9 = *plVar2;
                        *(int *)plVar2 = (int)*plVar2 + -1;
                        UNLOCK();
                        if ((int)lVar9 == 1) {
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
                    }
                  }
                  plVar4 = uStack_1e0;
                  if (uStack_1e0 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = uStack_1e0 + 1;
                    lVar9 = *plVar2;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)lVar9 == 1) {
                      (**(code **)*uStack_1e0)(uStack_1e0);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar4 + 0xc);
                      iVar3 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar3 == 1) {
                        (**(code **)(*uStack_1e0 + 8))(uStack_1e0,1);
                      }
                    }
                  }
                }
              }
              FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_100,L"Can\'t add item.",L"GFxItemTradingMenu",L"CantAddItemTitle");
              lVar9 = FText::FromString(local_98,local_1b8);
              uVar10 = FInternationalization::
                       ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                 (local_d0,L"{0} can\'t accept more items.",L"GFxItemTradingMenu",
                                  L"CantAddItemDesc");
              puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_a8,uVar10);
              local_80[0] = 4;
              FText::FText(local_70,lVar9);
              local_148 = *puVar11;
              local_1a8 = local_80;
              puStack_1a0 = &local_50;
              local_140 = puVar11[1];
              local_58 = '\x01';
              if (local_140 != 0) {
                LOCK();
                *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
                UNLOCK();
              }
              uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                       TArray<FFormatArgumentValue,FDefaultAllocator>(local_128,&local_1a8);
              uVar10 = FText::Format(local_e8,&local_148,uVar10);
              FText::FText(local_118,uVar10);
              if (local_e0 != (longlong *)0x0) {
                LOCK();
                plVar4 = local_e0 + 1;
                lVar13 = *plVar4;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)lVar13 == 1) {
                  (**(code **)*local_e0)(local_e0);
                  LOCK();
                  piVar1 = (int *)((longlong)local_e0 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_e0 + 8))(local_e0,1);
                  }
                }
              }
              TArray<FFormatArgumentValue,FDefaultAllocator>::
              ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_128);
              if ((local_58 != '\0') && (local_58 = '\0', local_68 != (longlong *)0x0)) {
                LOCK();
                plVar4 = local_68 + 1;
                lVar13 = *plVar4;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)lVar13 == 1) {
                  (**(code **)*local_68)(local_68);
                  LOCK();
                  piVar1 = (int *)((longlong)local_68 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_68 + 8))(local_68,1);
                  }
                }
              }
              plVar4 = (longlong *)puVar11[1];
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar4 + 1;
                lVar13 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar13 == 1) {
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
              plVar4 = *(longlong **)(lVar9 + 8);
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar4 + 1;
                lVar9 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
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
              if (local_c8 != (longlong *)0x0) {
                LOCK();
                plVar4 = local_c8 + 1;
                lVar9 = *plVar4;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*local_c8)(local_c8);
                  LOCK();
                  piVar1 = (int *)((longlong)local_c8 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_c8 + 8))(local_c8,1);
                  }
                }
              }
              FUN_140d15fd0(lVar12,local_100,local_118);
              if (local_110 != (longlong *)0x0) {
                LOCK();
                plVar4 = local_110 + 1;
                lVar9 = *plVar4;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*local_110)(local_110);
                  LOCK();
                  piVar1 = (int *)((longlong)local_110 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_110 + 8))(local_110,1);
                  }
                }
              }
              if (local_f8 != (longlong *)0x0) {
                LOCK();
                plVar4 = local_f8 + 1;
                lVar9 = *plVar4;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*local_f8)(local_f8);
                  LOCK();
                  piVar1 = (int *)((longlong)local_f8 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_f8 + 8))(local_f8,1);
                  }
                }
              }
            }
          }
          if (local_1b8[0] != 0) {
            FMemory::Free();
          }
        }
      }
      else {
        cVar8 = FWeakObjectPtr::IsValid(param_2 + 0xdc);
        if ((cVar8 != '\0') ||
           (cVar8 = FWeakObjectPtr::IsValid(param_2 + 0x5c), bVar6 = bVar7, cVar8 != '\0')) {
          bVar6 = false;
        }
        if (!bVar6) {
          (**(code **)(*(longlong *)param_1[0x173] + 0x330))((longlong *)param_1[0x173],param_2);
          lVar9 = *param_1;
          local_198 = 0;
          local_190 = 0;
          puVar11 = (undefined8 *)FName::FName(local_138,L"Trading_Place_Item",1);
          (**(code **)(lVar9 + 0x4e8))(param_1,*puVar11,&local_198);
        }
      }
      iVar3 = *(int *)(param_1[0x173] + 0x2d8);
      if (param_3 != 0) {
        lVar9 = FUN_1413621e0();
        if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (bVar6 = bVar7,
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
            (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar6 = false;
        }
        if (bVar6) {
          local_188 = 0xffffffff;
          uVar10 = FUN_1416f8720(*(undefined4 *)(param_3 + 0x688));
          FUN_14170c210(&local_188,uVar10);
          local_184 = 0xffffffff;
          uVar10 = FUN_1416f8720(*(undefined4 *)(param_3 + 0x68c));
          FUN_14170c210(&local_184,uVar10);
          local_180 = *(undefined8 *)(param_3 + 0x690);
          local_178 = *(longlong *)(param_3 + 0x698);
          if (local_178 != 0) {
            LOCK();
            *(int *)(local_178 + 8) = *(int *)(local_178 + 8) + 1;
            UNLOCK();
          }
          local_170 = *(undefined4 *)(param_3 + 0x6a0);
          local_168 = *(longlong *)(param_3 + 0x6a8);
          if (local_168 != 0) {
            LOCK();
            *(int *)(local_168 + 0x48) = *(int *)(local_168 + 0x48) + 1;
            UNLOCK();
          }
          (**(code **)(*(longlong *)param_1[0x173] + 0x358))
                    ((longlong *)param_1[0x173],&local_188,0);
          FUN_140ddef50(&local_188);
          if ((iVar3 < 0) || (*(int *)(param_1[0x133] + 0x188) <= iVar3)) {
            bVar7 = false;
          }
          if ((bVar7) &&
             (plVar4 = *(longlong **)(*(longlong *)(param_1[0x133] + 0x180) + (longlong)iVar3 * 8),
             plVar4 != (longlong *)0x0)) {
            lVar9 = *plVar4;
            uVar10 = (**(code **)(*(longlong *)param_1[0x173] + 0x340))();
            (**(code **)(lVar9 + 0x330))(plVar4,uVar10);
          }
          LOCK();
          *(undefined4 *)((longlong)param_1 + 0xbbc) = 1;
          UNLOCK();
          LOCK();
          *(undefined4 *)(param_1 + 0x177) = 1;
          UNLOCK();
        }
      }
      (**(code **)(*(longlong *)param_1[0x173] + 0x348))();
      uVar10 = (**(code **)(*(longlong *)param_1[0x173] + 0x340))();
      FUN_140f950c0(param_1,uVar10);
      lVar9 = (**(code **)(*(longlong *)param_1[0x173] + 0x340))();
      uVar10 = FWeakObjectPtr::Get(lVar9 + 0xdc);
      FUN_140f8cab0(param_1,*(undefined4 *)(param_1[0x173] + 0x2d8),uVar10);
      param_1[0x173] = 0;
    }
    local_1d8[0] = 0;
    local_1d8[1] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d8,0);
    FGenericPlatformString::Memcpy(local_1d8[0],L"focusOfferingPanel",0x26);
    FUN_142088910(param_1[0xc0],local_1d8);
    if (local_1d8[0] != 0) {
      FMemory::Free();
    }
    if (local_1f8 != (undefined2 *)((longlong)param_1 + 0xba1)) {
      *(undefined2 *)((longlong)param_1 + 0xba1) = 0x100;
    }
  }
  return;
}



// FUNCTION 140f71360 FUN_140f71360 body=373 status=ok
// SIG undefined FUN_140f71360(void)

void FUN_140f71360(longlong param_1,longlong param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_3 != (longlong *)0x0) {
    lVar3 = FUN_141324a80();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) &&
       (lVar3 = (**(code **)(*param_3 + 0x340))(param_3), *(char *)(lVar3 + 0x54) != '\0')) {
      (**(code **)(*param_3 + 0x378))(param_3);
      lVar3 = FUN_140e97230(param_1);
      if ((lVar3 != 0) && (lVar3 = (**(code **)(*(longlong *)(lVar3 + 0xd80) + 0x18))(), lVar3 != 0)
         ) {
        lVar4 = ANavLinkProxy::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) &&
           (lVar4 = (**(code **)(*param_3 + 0x340))(param_3), *(int *)(lVar4 + 0xd8) != -1)) {
          lVar4 = (**(code **)(*param_3 + 0x340))(param_3);
          FUN_143015ae0(lVar3,lVar4 + 0xd8,0,1);
        }
      }
    }
    cVar2 = FWeakObjectPtr::IsValid(param_2 + 0xdc);
    if (cVar2 != '\0') {
      FUN_140f950c0(param_1,param_2);
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x988) != 0) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x988) + 0x1b0);
    (**(code **)(*plVar5 + 0x20))(plVar5,0);
    LOCK();
    *(undefined4 *)(param_1 + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140f714e0 FUN_140f714e0 body=302 status=ok
// SIG undefined FUN_140f714e0(void)

void FUN_140f714e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    return;
  }
  lVar4 = FUN_141362b00();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 != 0) {
    lVar5 = FUN_141358f70();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140f71581;
  }
  lVar4 = 0;
LAB_140f71581:
  if (*(char *)((longlong)param_2 + 0xc) != '\0') {
    FUN_142ebe780(param_1,lVar2);
  }
  iVar1 = (int)param_2[1];
  if ((iVar1 == -1) || (*(char *)((longlong)param_2 + 0xe) == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((bVar3) && (lVar4 != 0)) {
    if ((iVar1 < 0) || (*(int *)(lVar4 + 0x1080) <= iVar1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_140f8e7a0(lVar2,lVar4,*(undefined8 *)(*(longlong *)(lVar4 + 0x1078) + (longlong)iVar1 * 8)
                   );
    }
  }
  FUN_142ed3540(lVar2 + 0x170,*(undefined1 *)((longlong)param_2 + 0xc),0);
  FUN_142ecf920(lVar2,0);
  return;
}



// FUNCTION 140f71610 FUN_140f71610 body=812 status=ok
// SIG undefined FUN_140f71610(void)

void FUN_140f71610(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    return;
  }
  lVar7 = FUN_1413625a0();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (!bVar11) {
    return;
  }
  lVar7 = *(longlong *)(param_1 + 0x38);
  if (lVar7 == 0) {
LAB_140f71742:
    lVar7 = 0;
  }
  else {
    lVar8 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (!bVar11) goto LAB_140f71742;
    lVar8 = FUN_141358f70();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if ((bVar11) && (lVar8 = FWeakObjectPtr::Get(), lVar8 != 0)) {
      lVar9 = APlayArea::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (bVar11) goto LAB_140f71748;
    }
  }
  lVar8 = 0;
LAB_140f71748:
  if (((int)param_2[1] == -1) || (*(char *)((longlong)param_2 + 0xe) == '\0')) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (bVar11) {
    FUN_140f8ea80();
    *(undefined1 *)(param_1 + 0x3d0) = 1;
  }
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (*(char *)((longlong)param_2 + 0xd) != '\0'))
  {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  if (bVar11) {
    if ((lVar7 != 0) && (lVar9 = FUN_140e971d0(), lVar9 != 0)) {
      iVar6 = (int)param_2[1];
      if ((iVar6 < 0) || (*(int *)(param_1 + 0x3c0) <= iVar6)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if ((bVar11) && (*(longlong *)(*(longlong *)(param_1 + 0x3b8) + (longlong)iVar6 * 8) != 0)) {
        FUN_140d02900();
      }
    }
    plVar4 = *(longlong **)(lVar3 + 0x310);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(plVar4 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (!bVar11) {
        LOCK();
        bVar11 = iVar6 == (int)plVar4[1];
        if (bVar11) {
          *(int *)(plVar4 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar11) {
          if (*(longlong *)(lVar3 + 0x308) != 0) {
            FUN_14203e4e0(*(longlong *)(lVar3 + 0x308),L"standard");
          }
          LOCK();
          plVar1 = plVar4 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar4)();
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
          break;
        }
        LOCK();
        iVar6 = (int)plVar4[1];
        bVar11 = iVar6 == 0;
        if (bVar11) {
          *(int *)(plVar4 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
    }
  }
  cVar5 = *(char *)((longlong)param_2 + 0xc);
  if ((cVar5 == '\0') || (*(char *)((longlong)param_2 + 0xd) == '\0')) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if ((bVar11) && (lVar7 != 0)) {
    LOCK();
    *(undefined4 *)(lVar7 + 0x588) = 1;
    UNLOCK();
    cVar5 = *(char *)((longlong)param_2 + 0xc);
  }
  if (cVar5 != '\0') {
    FUN_142ebe780(param_1,lVar3);
  }
  if ((lVar8 == 0) ||
     (*(longlong *)(lVar8 + 0x3f8) !=
      *(longlong *)(*(longlong *)(param_1 + 0x3b8) + (longlong)(int)param_2[1] * 8))) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  FUN_142ed2600(lVar3,3);
  FUN_142ed2820(lVar3,uVar10,1);
  FUN_142ed3540(lVar3 + 0x170,*(undefined1 *)((longlong)param_2 + 0xc),0);
  FUN_142ecf920(lVar3,0);
  return;
}



// FUNCTION 140f71940 FUN_140f71940 body=817 status=ok
// SIG undefined FUN_140f71940(void)

void FUN_140f71940(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  void *_Src;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  void **ppvVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  
  lVar12 = 0;
  iVar7 = 0;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    iVar7 = FUN_142eb7440();
    lVar9 = *(longlong *)(param_1 + 0x108);
    if (lVar9 != 0) {
      if ((-1 < param_3) && (param_3 < *(int *)(lVar9 + 0x3c0))) {
        lVar12 = *(longlong *)(*(longlong *)(lVar9 + 0x3b8) + (longlong)param_3 * 8);
      }
      if ((*(longlong *)(param_1 + 0x130) != 0) && (*(longlong *)(param_1 + 0x138) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x138) + 8);
        LOCK();
        iVar8 = *piVar1;
        if (iVar8 == 0) {
          *piVar1 = 0;
          iVar8 = 0;
        }
        UNLOCK();
        if (0 < iVar8) {
          lVar9 = lVar12 + 0x30;
          if (lVar12 == 0) {
            lVar9 = param_1 + 0xd8;
          }
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x128,lVar9,1,0);
        }
      }
      if ((*(longlong *)(param_1 + 0x158) != 0) && (*(longlong *)(param_1 + 0x160) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x160) + 8);
        LOCK();
        iVar8 = *piVar1;
        if (iVar8 == 0) {
          *piVar1 = 0;
          iVar8 = 0;
        }
        UNLOCK();
        if (0 < iVar8) {
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x150,param_1 + 0xf0,1,0);
        }
      }
      plVar3 = *(longlong **)(param_1 + 0x148);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar8 = (int)plVar3[1];
        bVar14 = iVar8 == 0;
        if (bVar14) {
          *(int *)(plVar3 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (!bVar14) {
          LOCK();
          bVar14 = iVar8 == (int)plVar3[1];
          if (bVar14) {
            *(int *)(plVar3 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar14) {
            if (plVar3 != (longlong *)0x0) {
              lVar9 = *(longlong *)(param_1 + 0x140);
              if (lVar9 != 0) {
                if ((lVar12 == 0) || (lVar4 = *(longlong *)(lVar12 + 0x180), lVar4 == 0)) {
                  local_58 = (void *)0x0;
                  local_50 = 7;
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
                  FGenericPlatformString::Memcpy(local_58,L"common",0xe);
                  ppvVar10 = &local_58;
                  bVar5 = false;
                  bVar14 = true;
                }
                else {
                  local_48 = (void *)0x0;
                  local_40 = *(int *)(lVar4 + 0x60);
                  lVar13 = (longlong)local_40;
                  _Src = *(void **)(lVar4 + 0x58);
                  if (local_40 == 0) {
                    ppvVar10 = &local_48;
                    bVar5 = true;
                    bVar14 = false;
                    local_3c = 0;
                  }
                  else {
                    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
                    _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar13 * 2);
                    ppvVar10 = &local_48;
                    bVar5 = true;
                    bVar14 = false;
                  }
                }
                FUN_14203e230(lVar9,ppvVar10);
                if ((bVar14) && (local_58 != (void *)0x0)) {
                  FMemory::Free();
                }
                if ((bVar5) && (local_48 != (void *)0x0)) {
                  FMemory::Free();
                }
              }
              LOCK();
              plVar2 = plVar3 + 1;
              lVar9 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            break;
          }
          LOCK();
          iVar8 = (int)plVar3[1];
          bVar14 = iVar8 == 0;
          if (bVar14) {
            *(int *)(plVar3 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
      }
      if ((param_2 != 0) &&
         ((*(char *)(param_2 + 0x11e0) == '\0' ||
          (cVar6 = FUN_1405dc8f0(param_2 + 0x11e4,lVar12), cVar6 != '\0')))) {
        *(undefined1 *)(param_2 + 0x11e0) = 1;
        FWeakObjectPtr::operator=(param_2 + 0x11e4,lVar12);
        FUN_140f89b20(param_2);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x118);
  if (plVar3 != (longlong *)0x0) {
    if ((iVar7 < 1) || (param_3 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
    (**(code **)(*plVar3 + 0x278))(plVar3,uVar11);
  }
  plVar3 = *(longlong **)(param_1 + 0x120);
  if (plVar3 != (longlong *)0x0) {
    if ((0 < iVar7) && (param_3 < iVar7 + -1)) {
                    /* WARNING: Could not recover jumptable at 0x000140f71c57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x278))(plVar3,1);
      return;
    }
    (**(code **)(*plVar3 + 0x278))(plVar3,0);
  }
  return;
}



// FUNCTION 140f71c80 FUN_140f71c80 body=114 status=ok
// SIG undefined FUN_140f71c80(void)

void FUN_140f71c80(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = UXGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140f71cce;
  }
  param_2 = 0;
LAB_140f71cce:
  if ((*(longlong *)(param_1 + 0x750) != 0) && (param_2 != 0)) {
    FUN_140f62fc0(*(longlong *)(param_1 + 0x750),param_2);
  }
  return;
}



// FUNCTION 140f71d20 thunk_FUN_140f92880 body=5 status=ok
// SIG undefined thunk_FUN_140f92880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_140f92880(longlong *param_1)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  undefined1 auStack_1a8 [32];
  longlong alStack_188 [5];
  longlong lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [8];
  longlong *plStack_110;
  undefined1 auStack_100 [8];
  longlong *plStack_f8;
  undefined1 auStack_e8 [8];
  longlong *plStack_e0;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [24];
  undefined4 auStack_98 [2];
  longlong lStack_90;
  undefined1 uStack_70;
  undefined4 uStack_68;
  longlong lStack_60;
  undefined1 uStack_40;
  ulonglong auStack_38 [2];
  
  auStack_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if ((((*(char *)((longlong)param_1 + 0x7ba) != '\x02') && (param_1[0xdb] != 0)) &&
      (param_1[0xdc] != 0)) && (param_1[0xe4] != 0)) {
    lVar10 = *param_1;
    *(undefined1 *)((longlong)param_1 + 0x7ba) = 2;
    uStack_158 = 0;
    uStack_150 = 0;
    puVar7 = (undefined8 *)FName::FName(auStack_148,L"SwapPanels",1);
    (**(code **)(lVar10 + 0x4e8))(param_1,*puVar7,&uStack_158);
    iVar6 = FUN_142eb7440(param_1[0xe4]);
    lVar10 = param_1[0xea];
    if (iVar6 < 1) {
      FUN_140f69d30(lVar10);
    }
    else if (*(char *)(lVar10 + 0x188) == '\0') {
      *(undefined1 *)(lVar10 + 0x188) = 1;
      alStack_188[0] = 0;
      alStack_188[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(alStack_188,0);
      FGenericPlatformString::Memcpy(alStack_188[0],L"show",10);
      FUN_142088910(lVar10,alStack_188);
      if (alStack_188[0] != 0) {
        FMemory::Free();
      }
    }
    alStack_188[2] = 0;
    alStack_188[3] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(alStack_188 + 2,0);
    FGenericPlatformString::Memcpy(alStack_188[2],L"challenges",0x16);
    FUN_142088cf0(param_1[0xdb],alStack_188 + 2);
    if (alStack_188[2] != 0) {
      FMemory::Free();
    }
    FUN_142ed4250(param_1[0xe4],param_1[0xe5]);
    if ((int)param_1[0xf0] < 1) {
      uVar8 = TScriptInterface<IBlendableInterface>::
              TScriptInterface<IBlendableInterface><UMaterialInterface>(auStack_c0,param_1[0xe4]);
    }
    else {
      uVar8 = TScriptInterface<IBlendableInterface>::
              TScriptInterface<IBlendableInterface><UMaterialInterface>
                        (auStack_d0,*(undefined8 *)param_1[0xef]);
    }
    FUN_142ed36d0(param_1,uVar8,0);
    if (param_1[0xdd] != 0) {
      lVar10 = param_1[0xf1];
      lVar5 = param_1[0xf0];
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (auStack_e8,L"REWARDS: {0}/{1} Unlocked",L"GFxLeaguesMenu",
                         L"RewardsUnlockedText");
      puVar7 = (undefined8 *)FTextFormat::FTextFormat(auStack_b0,uVar8);
      auStack_98[0] = 0;
      uStack_138 = auStack_98;
      uStack_70 = 0;
      uStack_130 = auStack_38;
      alStack_188[4] = *puVar7;
      lStack_160 = puVar7[1];
      uStack_68 = 0;
      uStack_40 = 0;
      if (lStack_160 != 0) {
        LOCK();
        *(int *)(lStack_160 + 8) = *(int *)(lStack_160 + 8) + 1;
        UNLOCK();
      }
      lStack_90 = (longlong)(int)lVar10;
      lStack_60 = (longlong)(int)lVar5;
      uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(auStack_128,&uStack_138);
      uVar8 = FText::Format(auStack_100,alStack_188 + 4,uVar8);
      FText::FText(auStack_118,uVar8);
      if (plStack_f8 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_f8 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_f8)(plStack_f8);
          LOCK();
          piVar1 = (int *)((longlong)plStack_f8 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_f8 + 8))(plStack_f8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(auStack_128);
      lVar10 = 2;
      pcVar9 = &stack0xfffffffffffffff0;
      do {
        lVar10 = lVar10 + -1;
        pcVar2 = pcVar9 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar4 = *(longlong **)(pcVar9 + -0x40);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar4 + 1;
            lVar5 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
        }
        pcVar9 = pcVar2;
      } while (lVar10 != 0);
      plVar4 = (longlong *)puVar7[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar4 + 1;
        lVar10 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      (**(code **)(*(longlong *)param_1[0xdd] + 0x2b0))((longlong *)param_1[0xdd],auStack_118,1,0);
      if (plStack_110 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_110 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_110)(plStack_110);
          LOCK();
          piVar1 = (int *)((longlong)plStack_110 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_110 + 8))(plStack_110,1);
          }
        }
      }
      if (plStack_e0 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_e0 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_e0)(plStack_e0);
          LOCK();
          piVar1 = (int *)((longlong)plStack_e0 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
          }
        }
      }
    }
    if ((param_1[0xd5] != 0) && (param_1[0xd6] != 0)) {
      FUN_142ecf920(param_1[0xd5],0);
      FUN_142ecf920(param_1[0xd6],0);
    }
  }
  return;
}



// FUNCTION 140f71d30 FUN_140f71d30 body=500 status=ok
// SIG undefined FUN_140f71d30(void)

void FUN_140f71d30(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_res10 [8];
  longlong local_18 [2];
  
  if (param_2 != 0) {
    lVar2 = FUN_141361db0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((bVar1) && (*(char *)(param_2 + 0x34d) != '\0')) && (param_1[0xeb] != 0)) &&
       ((param_1[0xe6] != 0 && (param_1[0xea] != 0)))) {
      local_18[1] = 5;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"open",10);
      FUN_142088cf0(param_2,local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      local_18[0] = 0;
      local_18[1] = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],&DAT_144626d78,8);
      FUN_142088cf0(*(undefined8 *)(param_2 + 0x2e8),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      FUN_140e28a80(param_1[0xeb],param_1[0xee],*(undefined4 *)(param_2 + 0x348));
      *(undefined1 *)(param_2 + 0x34d) = 0;
      local_18[0] = 0;
      local_18[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"play",10);
      FUN_142088910(param_1[0xe6],local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      local_18[0] = 0;
      local_18[1] = 0;
      lVar2 = *param_1;
      puVar3 = (undefined8 *)FName::FName(local_res10,L"TierRewardUnlocked",1);
      (**(code **)(lVar2 + 0x4e8))(param_1,*puVar3,local_18);
      uVar4 = FUN_140e971d0(param_1);
      FUN_140f63620(param_1[0xea],param_2,uVar4);
    }
  }
  return;
}



// FUNCTION 140f71f30 FUN_140f71f30 body=612 status=ok
// SIG undefined FUN_140f71f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f71f30(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  longlong local_e0 [3];
  code *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (param_2 != 0) {
    lVar2 = FUN_141361db0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140f71f9a;
  }
  param_2 = 0;
LAB_140f71f9a:
  lVar2 = *(longlong *)(param_1 + 0x750);
  if (lVar2 != 0) {
    if ((param_2 == 0) || (*(longlong *)(param_2 + 0x2e8) == 0)) {
      if (lVar2 != 0) {
        FUN_140f63620(lVar2,0,0);
      }
    }
    else {
      uVar3 = FUN_140e971d0(param_1);
      FUN_140f63620(*(undefined8 *)(param_1 + 0x750),param_2,uVar3);
      if (*(char *)(param_2 + 0x34d) != '\0') {
        local_e0[0] = 0;
        local_e0[1] = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e0,0);
        FGenericPlatformString::Memcpy(local_e0[0],&DAT_1446277d4,6);
        FUN_142088910(*(undefined8 *)(param_2 + 0x2e8),local_e0);
        if (local_e0[0] != 0) {
          FMemory::Free();
        }
      }
      local_e4 = 0xffffffff;
      FUN_14170c210(&local_e4,param_2);
      local_e8 = 0xffffffff;
      FUN_14170c210(&local_e8,param_1);
      uVar6 = local_e4;
      uVar5 = local_e8;
      local_e8 = 0xffffffff;
      local_e4 = 0xffffffff;
      local_98 = (longlong *)0x0;
      local_88 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_b8);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_14461b890;
        *(undefined4 *)(puVar4 + 1) = uVar5;
        uVar5 = 0xffffffff;
        *(undefined4 *)((longlong)puVar4 + 0xc) = uVar6;
        uVar6 = 0xffffffff;
      }
      local_c8[0] = FUN_140f62ca0;
      uVar3 = FUN_1420849a0(param_1,local_78,local_c8);
      FUN_14208c260(param_1,uVar3);
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
      FUN_1416f8340(uVar6);
      FUN_1416f8340(uVar5);
      FUN_1416f8340(local_e8);
      FUN_1416f8340(local_e4);
    }
  }
  return;
}



// FUNCTION 140f721a0 thunk_FUN_140f812c0 body=5 status=ok
// SIG undefined thunk_FUN_140f812c0(void)

void thunk_FUN_140f812c0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 auStackX_8 [2];
  undefined4 auStackX_10 [2];
  undefined4 uStackX_18;
  undefined4 uStackX_1c;
  undefined1 *apuStack_78 [2];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  undefined4 uStack_38;
  
  auStackX_10[0] = 0xffffffff;
  if (param_3 != 0) {
    FUN_14170c210(auStackX_10,param_3);
  }
  auStackX_8[0] = 0xffffffff;
  if (param_2 != 0) {
    FUN_14170c210(auStackX_8,param_2);
  }
  FWeakObjectPtr::operator=(&uStackX_18,param_1);
  uVar3 = auStackX_10[0];
  uVar2 = auStackX_8[0];
  auStackX_8[0] = 0xffffffff;
  auStackX_10[0] = 0xffffffff;
  uStack_48 = 0;
  uStack_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,auStack_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b550;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = uStackX_18;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStackX_1c;
    *(undefined4 *)(puVar1 + 3) = uVar2;
    uVar2 = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar3;
    uVar3 = 0xffffffff;
  }
  apuStack_78[0] = &LAB_140f62c40;
  FUN_14208c4f0(param_1,apuStack_78);
  FUN_1416f8340(uVar3);
  FUN_1416f8340(uVar2);
  FUN_1416f8340(auStackX_8[0]);
  FUN_1416f8340(auStackX_10[0]);
  return;
}



// FUNCTION 140f721b0 FUN_140f721b0 body=1018 status=ok
// SIG undefined FUN_140f721b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140f72475) */
/* WARNING: Removing unreachable block (ram,0x000140f72486) */
/* WARNING: Removing unreachable block (ram,0x000140f7249d) */

void FUN_140f721b0(longlong param_1,undefined ***param_2,longlong param_3,undefined8 *param_4,
                  longlong param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined **local_110;
  undefined **local_108;
  undefined **ppuStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if ((param_2[1] == (undefined **)0x0) ||
     (cVar3 = (**(code **)(*param_2[1] + 0x20))(), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  FUN_140f8beb0(param_1,param_2);
  if (param_5 == 0) {
    return;
  }
  if (*(longlong *)(param_5 + 0x48) == 0) {
    return;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  local_98 = 0;
  local_84 = 0;
  local_82 = 0;
  puVar4 = (undefined8 *)FGuid::NewGuid(local_68);
  local_a8 = *puVar4;
  uStack_a0 = puVar4[1];
  local_88 = *(undefined4 *)(param_4 + 1);
  local_d8 = *(undefined8 *)(param_5 + 0x48);
  local_90 = *param_4;
  local_d0 = param_3;
  if (param_3 == 0) goto LAB_140f723ff;
  uVar5 = UGameplayTagAssetInterface::GetPrivateStaticClass();
  plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar5);
  if ((plVar6 != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*plVar6 + 0x20))(plVar6), cVar3 == '\x01')) {
    local_78 = FUN_141437130();
    plVar6 = (longlong *)AGameStateBase::OnRep_GameModeClass(param_3,local_78);
    if (plVar6 != (longlong *)0x0) {
      lVar7 = FUN_141437130();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140f722fa;
LAB_140f72348:
      local_c0 = 0;
      local_128 = 0;
      local_c8 = plVar6;
      goto LAB_140f723ff;
    }
LAB_140f722fa:
    local_70 = AArchVisCharacter::StaticClass();
    plVar6 = (longlong *)AGameStateBase::OnRep_GameModeClass(param_3,local_70);
    if (plVar6 != (longlong *)0x0) {
      lVar7 = AArchVisCharacter::StaticClass();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_140f72348;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146872eb0) &&
       (_Init_thread_header(&DAT_146872eb0), DAT_146872eb0 == -1)) {
      FName::FName(&DAT_146872ea8,"SnapZoom",1);
      _Init_thread_footer(&DAT_146872eb0);
    }
    local_128 = FUN_142e5c1e0();
    plVar6 = (longlong *)AGameStateBase::OnRep_GameModeClass(param_3,local_128);
    if (plVar6 != (longlong *)0x0) {
      lVar7 = FUN_142e5c1e0();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (cVar3 = (**(code **)(*plVar6 + 0x440))(plVar6,DAT_146872ea8), cVar3 != '\0'))
      {
        local_c0 = DAT_146872ea8;
        local_c8 = plVar6;
        goto LAB_140f723ff;
      }
    }
  }
  local_82 = 1;
LAB_140f723ff:
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_110 = &PTR_FUN_143f740c8;
  uStack_e0 = 0;
  local_108 = (undefined **)0x0;
  ppuStack_100 = (undefined **)0x0;
  if (param_2 != &local_110) {
    local_108 = param_2[1];
    ppuStack_100 = param_2[2];
    if (ppuStack_100 != (undefined **)0x0) {
      LOCK();
      *(int *)(ppuStack_100 + 1) = *(int *)(ppuStack_100 + 1) + 1;
      UNLOCK();
    }
    local_120._0_4_ = SUB84(local_108,0);
    local_58 = (undefined4)local_120;
    local_120._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
    uStack_54 = local_120._4_4_;
    uStack_118._0_4_ = SUB84(ppuStack_100,0);
    uStack_50 = (undefined4)uStack_118;
    uStack_118._4_4_ = (undefined4)((ulonglong)ppuStack_100 >> 0x20);
    uStack_4c = uStack_118._4_4_;
    local_120 = 0;
    uStack_118 = 0;
  }
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(&local_f8,param_2 + 3);
  iVar1 = *(int *)(param_1 + 0x740);
  local_e8 = local_a8;
  uStack_e0 = uStack_a0;
  *(int *)(param_1 + 0x740) = iVar1 + 1;
  if (*(int *)(param_1 + 0x744) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x738,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x738));
  *puVar4 = &PTR_FUN_143f73d18;
  puVar4[1] = local_108;
  puVar4[2] = ppuStack_100;
  if (ppuStack_100 != (undefined **)0x0) {
    LOCK();
    *(int *)(ppuStack_100 + 1) = *(int *)(ppuStack_100 + 1) + 1;
    UNLOCK();
  }
  *puVar4 = &PTR_FUN_143f740c8;
  puVar4[3] = 0;
  puVar4[4] = 0;
  *(undefined4 *)(puVar4 + 5) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar4 + 0x2c) = local_a8._4_4_;
  *(undefined4 *)(puVar4 + 6) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uStack_a0._4_4_;
  FUN_140f8ba00(param_1,&local_d8);
  FUN_1404bf980(&local_110);
  return;
}



// FUNCTION 140f725b0 FUN_140f725b0 body=439 status=ok
// SIG undefined FUN_140f725b0(void)

void FUN_140f725b0(longlong param_1,char param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *local_88;
  uint local_80;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  puVar4 = (undefined8 *)0x0;
  if (param_2 == '\0') {
    iVar2 = 0;
    plVar7 = *(longlong **)(param_1 + 0x708);
    local_88 = (undefined8 *)0x0;
    local_7c = 0;
    puVar6 = (undefined8 *)((longlong)*(int *)(param_1 + 0x710) & 0x1fffffffffffffff);
    if (plVar7 + *(int *)(param_1 + 0x710) < plVar7) {
      puVar6 = puVar4;
    }
    puVar3 = puVar4;
    puVar5 = puVar4;
    puVar8 = puVar4;
    puVar9 = puVar4;
    if (puVar6 != (undefined8 *)0x0) {
      do {
        lVar1 = *plVar7;
        if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1a8) == *(longlong *)(param_1 + 0x658))) {
          iVar2 = (int)puVar3;
          local_80 = iVar2 + 1;
          if ((int)puVar8 < (int)local_80) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,puVar3);
            lVar1 = *plVar7;
            puVar8 = (undefined8 *)(ulonglong)local_7c;
            puVar9 = local_88;
          }
          puVar3 = (undefined8 *)(ulonglong)local_80;
          puVar9[iVar2] = lVar1;
        }
        iVar2 = (int)puVar3;
        plVar7 = plVar7 + 1;
        puVar5 = (undefined8 *)((longlong)puVar5 + 1);
      } while (puVar5 != puVar6);
    }
    puVar6 = (undefined8 *)((ulonglong)((longlong)(puVar9 + iVar2) + (7 - (longlong)puVar9)) >> 3);
    if (puVar9 + iVar2 < puVar9) {
      puVar6 = puVar4;
    }
    puVar3 = puVar9;
    if (puVar6 != (undefined8 *)0x0) {
      do {
        FUN_140f8bd80(param_1,*puVar3);
        puVar4 = (undefined8 *)((longlong)puVar4 + 1);
        puVar3 = puVar3 + 1;
      } while (puVar4 != puVar6);
    }
    if (puVar9 != (undefined8 *)0x0) {
      FMemory::Free(puVar9);
    }
    return;
  }
  local_30 = *param_3;
  local_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = *param_4;
  uStack_44 = param_4[1];
  uStack_40 = param_4[2];
  uStack_3c = param_4[3];
  local_68 = 0;
  local_60 = 0;
  local_38 = 0;
  local_24 = 0x100;
  local_22 = 0;
  local_28 = *(undefined4 *)(param_3 + 1);
  local_78 = *(undefined8 *)(param_1 + 0x658);
  FUN_140f8ba00(local_48,&local_78);
  return;
}



// FUNCTION 140f72770 FUN_140f72770 body=34 status=ok
// SIG undefined FUN_140f72770(void)

void FUN_140f72770(longlong *param_1)

{
  FUN_142ebfbd0();
                    /* WARNING: Could not recover jumptable at 0x000140f7278b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x580))(param_1,1);
  return;
}



// FUNCTION 140f727a0 FUN_140f727a0 body=313 status=ok
// SIG undefined FUN_140f727a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f727a0(longlong param_1)

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
  *(undefined2 *)(param_1 + 0xc20) = 0;
  cVar1 = FUN_142ebd920();
  if ((cVar1 != '\0') || (*(char *)(param_1 + 0x5f8) != '\0')) {
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = param_1;
      *puVar2 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = FUN_140f62d60;
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
  }
  FUN_142ebfbd0(param_1);
  return;
}



// FUNCTION 140f728e0 FUN_140f728e0 body=27 status=ok
// SIG undefined FUN_140f728e0(void)

void FUN_140f728e0(longlong param_1)

{
  FUN_142ebfbd0();
  *(undefined1 *)(param_1 + 0x808) = 0;
  return;
}



// FUNCTION 140f72900 FUN_140f72900 body=387 status=ok
// SIG undefined FUN_140f72900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f72900(undefined8 param_1)

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
  local_b8[0] = &LAB_140f62b80;
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
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140f62c00;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c4f0(param_1,uVar2);
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



// FUNCTION 140f72a90 FUN_140f72a90 body=171 status=ok
// SIG undefined FUN_140f72a90(void)

void FUN_140f72a90(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar1 = *(longlong **)(param_1 + 0x940);
  uVar2 = (longlong)*(int *)(param_1 + 0x948) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x948) < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x288))();
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  *(undefined4 *)(param_1 + 0x948) = 0;
  if (*(int *)(param_1 + 0x94c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x940,0);
  }
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140f72b40 FUN_140f72b40 body=1423 status=ok
// SIG undefined FUN_140f72b40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f72b40(longlong param_1)

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
  undefined4 uVar10;
  undefined1 auStack_338 [32];
  undefined2 local_318;
  undefined4 local_308 [2];
  longlong *local_300;
  longlong *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  longlong *local_2d0;
  LARGE_INTEGER local_2c8 [2];
  undefined1 *local_2b8 [2];
  undefined1 local_2a8 [32];
  undefined8 local_288;
  undefined4 local_278;
  undefined1 *local_268 [2];
  undefined1 local_258 [32];
  undefined8 local_238;
  undefined4 local_228;
  longlong *local_218;
  longlong *local_210;
  undefined1 local_208 [16];
  longlong local_1f8 [4];
  longlong *local_1d8;
  int local_1c8;
  undefined1 *local_1b8 [2];
  longlong local_1a8 [4];
  longlong *local_188;
  int local_178;
  undefined1 *local_168 [2];
  longlong local_158 [4];
  longlong *local_138;
  int local_128;
  LARGE_INTEGER local_118 [24];
  longlong local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  plVar9 = (longlong *)0x0;
  local_288 = 0;
  local_278 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_2a8);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_2e8 = 0;
  local_2b8[0] = &LAB_140f62cf0;
  local_2e0 = 0x2b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e8,0);
  local_318 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_2e8,0x2b,"UGFxIronBearRechargeWeaponWidget::OnDeinit");
  FUN_140cdf730(local_118,&local_2e8,local_2b8);
  QueryPerformanceCounter(local_2c8);
  local_118[0] = local_2c8[0];
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
  local_300 = plVar7;
  local_2f8 = plVar9;
  SharedPointerInternals::EnableSharedFromThis(&local_300,plVar7,plVar7);
  *(undefined1 *)(local_300 + 2) = 1;
  local_2d0 = (longlong *)local_300[1];
  local_58 = *local_300;
  if (local_2d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2d0 + 1) = (int)local_2d0[1] + 1;
    UNLOCK();
  }
  local_2d8 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_50,&local_2d0);
  plVar9 = local_2d0;
  if (local_2d0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_2d0 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_2d0)(local_2d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_2d0 + 8))(local_2d0,1);
      }
    }
  }
  local_188 = (longlong *)0x0;
  local_178 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_1a8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1444f8620;
    puVar5[1] = local_118;
  }
  local_1b8[0] = &LAB_140cee980;
  local_218 = local_300;
  local_210 = local_2f8;
  if (local_2f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2f8 + 1) = (int)local_2f8[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_208,local_1b8);
  local_238 = 0;
  local_228 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x70,local_258);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_CopyToEmptyStorage_1444f8578;
    puVar5[2] = local_218;
    puVar5[3] = local_210;
    if (local_210 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_210 + 1) = (int)local_210[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar5 + 4,local_208);
  }
  local_268[0] = &LAB_140cee8d0;
  if (local_1c8 != 0) {
    plVar9 = local_1f8;
    if (local_1d8 != (longlong *)0x0) {
      plVar9 = local_1d8;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_1d8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar9 = local_210;
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_210 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_210)(local_210);
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
  if (local_178 != 0) {
    plVar9 = local_1a8;
    if (local_188 != (longlong *)0x0) {
      plVar9 = local_188;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_188 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar9 = local_2f8;
  if (local_2f8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_2f8 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_2f8)(local_2f8);
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
  FUN_14204c280(local_268);
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
  local_308[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_14170c210(local_308);
  }
  FWeakObjectPtr::operator=(&local_2f0,param_1);
  uVar10 = local_308[0];
  local_308[0] = 0xffffffff;
  local_138 = (longlong *)0x0;
  local_128 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x20,local_158);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_144605c50;
    puVar5[1] = param_1;
    *(undefined4 *)(puVar5 + 2) = local_2f0;
    *(undefined4 *)((longlong)puVar5 + 0x14) = local_2ec;
    *(undefined4 *)(puVar5 + 3) = uVar10;
    uVar10 = 0xffffffff;
  }
  local_168[0] = &LAB_140f62b90;
  FUN_14208c300(param_1,local_168);
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
  FUN_1416f8340(uVar10);
  FUN_1416f8340(local_308[0]);
  thunk_FUN_14208af70(param_1);
  FUN_140ce1dc0(local_118);
  return;
}



// FUNCTION 140f730d0 FUN_140f730d0 body=129 status=ok
// SIG undefined FUN_140f730d0(void)

void FUN_140f730d0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5d8);
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
    if (bVar1) {
      lVar2 = FUN_140cff1b0(lVar2);
      if (lVar2 != 0) {
        FUN_1407665e0(lVar2 + 0x5f8,param_1);
      }
    }
  }
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140f73160 FUN_140f73160 body=279 status=ok
// SIG undefined FUN_140f73160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f73160(undefined8 param_1)

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
  local_b8[0] = &LAB_140f62ba0;
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



// FUNCTION 140f73280 FUN_140f73280 body=308 status=ok
// SIG undefined FUN_140f73280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f73280(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0xffffffff;
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_14170c210(&local_88);
  }
  FWeakObjectPtr::operator=(&local_84,param_1);
  uVar2 = local_88;
  local_88 = 0xffffffff;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c50;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_84;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_80;
    *(undefined4 *)(puVar1 + 3) = uVar2;
    uVar2 = 0xffffffff;
  }
  local_78[0] = &LAB_140f62b90;
  FUN_14208c300(param_1,local_78);
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar2);
  FUN_1416f8340(local_88);
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 140f733c0 FUN_140f733c0 body=242 status=ok
// SIG undefined FUN_140f733c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f733c0(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FWeakObjectPtr::operator=(&local_78,param_1);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_78;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_74;
  }
  local_68[0] = &LAB_140f62d10;
  FUN_14208c260(param_1,local_68);
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140f734c0 FUN_140f734c0 body=187 status=ok
// SIG undefined FUN_140f734c0(void)

undefined4 FUN_140f734c0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined2 local_res20 [4];
  undefined2 local_18 [8];
  
  lVar3 = FUN_140f681d0();
  uVar2 = 0;
  if (lVar3 != 0) {
    cVar1 = *(char *)((ulonglong)(*(char *)(param_1 + 0xb72) != '\0') + 0xb70 + param_1);
    lVar3 = FUN_140f681d0(param_1);
    if (cVar1 == '\x02') {
      if (lVar3 != 0) {
        FUN_140e96110(lVar3,0);
      }
      if (local_res20 != (undefined2 *)(param_1 + 0xb71)) {
        *(undefined2 *)(param_1 + 0xb71) = 0x100;
      }
      *(undefined1 *)(param_1 + 0xbb4) = 2;
      LOCK();
      uVar2 = *(undefined4 *)(param_1 + 0x588);
      *(undefined4 *)(param_1 + 0x588) = 1;
      UNLOCK();
      return uVar2;
    }
    if (lVar3 != 0) {
      FUN_140e96110(lVar3,2);
    }
    if (local_18 != (undefined2 *)(param_1 + 0xb71)) {
      *(undefined2 *)(param_1 + 0xb71) = 0x102;
    }
    *(undefined1 *)(param_1 + 0xbb4) = 1;
    LOCK();
    uVar2 = *(undefined4 *)(param_1 + 0x588);
    *(undefined4 *)(param_1 + 0x588) = 1;
    UNLOCK();
  }
  return uVar2;
}



// FUNCTION 140f73580 FUN_140f73580 body=43 status=ok
// SIG undefined FUN_140f73580(void)

void FUN_140f73580(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140eccca0();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140f7359e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x5c8))(param_1);
    return;
  }
  return;
}



// FUNCTION 140f735b0 FUN_140f735b0 body=366 status=ok
// SIG undefined FUN_140f735b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f735b0(longlong param_1,char param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 *local_a8 [2];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_142ec1770();
  lVar1 = param_1 + -0x170;
  FWeakObjectPtr::operator=(&local_b8,lVar1);
  local_78 = (longlong *)0x0;
  local_68 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_98);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144631668;
    puVar2[1] = lVar1;
    *(undefined4 *)(puVar2 + 2) = (undefined4)local_b8;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_b8._4_4_;
    *(char *)(puVar2 + 3) = param_2;
    *(undefined1 *)((longlong)puVar2 + 0x19) = param_3;
    *(undefined1 *)((longlong)puVar2 + 0x1a) = param_4;
  }
  local_a8[0] = &LAB_140f62d40;
  FUN_14208c300(lVar1,local_a8);
  if (local_68 != 0) {
    plVar3 = local_98;
    if (local_78 != (longlong *)0x0) {
      plVar3 = local_78;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  if ((*(longlong *)(param_1 + 0x178) != 0) && (2 < (byte)(param_2 - 5U))) {
    local_b8 = 0;
    local_b0 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,&DAT_14462b368,8);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x178),&local_b8);
    if (local_b8 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f73760 FUN_140f73760 body=541 status=ok
// SIG undefined FUN_140f73760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f73760(longlong *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [80];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  FUN_142ec1f90();
  *(undefined4 *)(param_1 + 0x176) = 0;
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0xbbc) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x177) = 1;
  UNLOCK();
  lVar4 = *param_1;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  puVar3 = (undefined8 *)FName::FName(local_c8,L"Trading_Open",1);
  (**(code **)(lVar4 + 0x4e8))(param_1,*puVar3,&local_d8);
  FUN_140f8cec0(param_1,1);
  FUN_140f87600(param_1);
  uVar7 = 0;
  lVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x594);
  uVar2 = 0;
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
    uVar2 = uVar7;
    if ((bVar1) && (param_1[0xd5] != 0)) {
      lVar4 = (**(code **)(*(longlong *)(lVar4 + 0xd80) + 0x18))();
      if (lVar4 != 0) {
        lVar5 = ANavLinkProxy::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar2 = FUN_142ff7c90(lVar4,param_1[0xd5]);
        }
      }
    }
  }
  local_38 = (longlong *)0x0;
  local_28 = 0;
  local_d8 = param_1;
  uStack_d0._0_4_ = uVar2;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_d8;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_d8._4_4_;
    *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_d0._4_4_;
  }
  local_68[0] = &LAB_140f62bc0;
  uVar6 = FUN_1420849a0(param_1,local_b8,local_68);
  FUN_14208c4f0(param_1,uVar6);
  if (local_28 != 0) {
    plVar8 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar8 = local_38;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f73980 FUN_140f73980 body=36 status=ok
// SIG undefined FUN_140f73980(void)

void FUN_140f73980(longlong param_1)

{
  FUN_142ef9e70();
  *(undefined2 *)(param_1 + 0x1dd) = 0x101;
  *(undefined1 *)(param_1 + 0x1df) = 0;
  return;
}



// FUNCTION 140f739b0 FUN_140f739b0 body=431 status=ok
// SIG undefined FUN_140f739b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f739b0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FUN_142ec45d0();
  FWeakObjectPtr::operator=(&local_98,param_1);
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = (undefined4)local_98;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_98._4_4_;
  }
  local_78[0] = &LAB_140f62d20;
  FUN_14208c260(param_1,local_78);
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
  local_88 = 0;
  local_80 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"inWorldContainer",0x22);
  local_a8 = &local_98;
  local_98 = (longlong *)0x0;
  local_90 = 0;
  lVar2 = FUN_140e96f30(param_1,&local_88,0,6);
  param_1[0xd0] = lVar2;
  plVar4 = local_98;
  for (iVar3 = (int)local_90; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  FUN_140f8a440(param_1);
  FUN_140f8b4e0(param_1);
  FUN_140f65ed0(param_1);
  FUN_140f8bc90(param_1);
  FUN_140f8bba0(param_1);
  (**(code **)(*param_1 + 0x580))(param_1,1);
  return;
}



// FUNCTION 140f73b60 FUN_140f73b60 body=281 status=ok
// SIG undefined FUN_140f73b60(void)

void FUN_140f73b60(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_18 [16];
  
  FUN_142ec45d0();
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5d8);
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
    if ((bVar1) && (lVar2 = *(longlong *)(lVar2 + 0x990), lVar2 != 0)) {
      lVar4 = FUN_1413ffd50();
      lVar3 = *(longlong *)(lVar2 + 0x10);
      if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar5 = FUN_140a64730(lVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),2));
        uVar6 = FString::FString(local_18,param_1 + 0x960);
        FUN_140f90f40(param_1,uVar5,uVar6,2);
        uVar5 = FUN_140a64730(lVar2,1);
        uVar6 = FString::FString(local_18,param_1 + 0x950);
        FUN_140f90f40(param_1,uVar5,uVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 140f73c80 FUN_140f73c80 body=971 status=ok
// SIG undefined FUN_140f73c80(void)

void FUN_140f73c80(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  
  FUN_142ec45d0();
  local_d0 = 0x14;
  local_d8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"durationProgressBar",0x28);
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  uVar3 = FUN_140ecc190(param_1,&local_d8,0,6,&local_e8);
  *(undefined8 *)(param_1 + 0x640) = uVar3;
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
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x640) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x640) + 0x2b0) = 0;
  }
  local_b8 = 0;
  local_b0 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,L"labelAnim",0x14);
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  uVar3 = FUN_140e96f30(param_1,&local_b8,0,6,&local_c8);
  *(undefined8 *)(param_1 + 0x648) = uVar3;
  plVar5 = local_c8;
  for (iVar4 = (int)local_c0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x648) != 0) {
    local_a8 = 0;
    local_a0 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    FGenericPlatformString::Memcpy(local_a8,L"startTimerFlourish",0x26);
    FUN_142088910(*(undefined8 *)(param_1 + 0x648),&local_a8);
    if (local_a8 != 0) {
      FMemory::Free();
    }
  }
  local_88 = 0;
  local_80 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"fuelLabel",0x14);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_88,0,6,&local_98);
  *(undefined8 *)(param_1 + 0x650) = uVar3;
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
  if (*(longlong **)(param_1 + 0x650) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0x650);
    uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,L"FUEL",L"GFxIronbearDurationWidget",L"FuelText");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x650),uVar3,1,0);
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
  }
  local_68 = 0;
  local_60 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"borderAnim",0x16);
  local_78 = (longlong *)0x0;
  local_70 = 0;
  uVar3 = FUN_140e96f30(param_1,&local_68,0,6,&local_78);
  *(undefined8 *)(param_1 + 0x658) = uVar3;
  plVar5 = local_78;
  for (iVar4 = (int)local_70; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x658) != 0) {
    local_58[0] = 0;
    local_58[1] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"startTimerFlourish",0x26);
    FUN_142088910(*(undefined8 *)(param_1 + 0x658),local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f74050 FUN_140f74050 body=640 status=ok
// SIG undefined FUN_140f74050(void)

void FUN_140f74050(longlong param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  int *piVar11;
  int iVar12;
  wchar_t *pwVar13;
  bool bVar14;
  longlong local_res10;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  FUN_142ec45d0();
  pwVar13 = (wchar_t *)0x0;
  local_20 = 0xf;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"exitButtonText",0x1e);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  uVar4 = FUN_140ac4770(param_1,&local_28,0,6,&local_38);
  *(undefined8 *)(param_1 + 0x630) = uVar4;
  plVar10 = local_38;
  for (iVar12 = (int)local_30; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  pwVar7 = pwVar13;
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if (bVar14) {
      pwVar7 = (wchar_t *)FUN_140cff1b0(lVar5);
    }
  }
  FUN_140f77490(param_1);
  if (pwVar7 != (wchar_t *)0x0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInputTypeChanged",L"::");
    while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar13 = pwVar2;
    }
    FName::FName(&local_res10,pwVar13 + 2,1);
    pwVar13 = pwVar7 + 0x2fc;
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = local_res10;
    if ((local_res10 != 0) && (lVar5 = FWeakObjectPtr::Get(&local_38), lVar5 != 0)) {
      UObject::FindFunction(lVar5,local_30);
    }
    piVar1 = *(int **)pwVar13;
    iVar12 = *(int *)(pwVar7 + 0x300);
    for (piVar11 = piVar1; piVar11 != piVar1 + (longlong)iVar12 * 4; piVar11 = piVar11 + 4) {
      if (((*piVar11 == (int)local_38) &&
          (local_38._4_4_ = (int)((ulonglong)local_38 >> 0x20),
          bVar14 = piVar11[1] == local_38._4_4_, bVar14)) ||
         ((cVar3 = FWeakObjectPtr::IsValid(piVar11), cVar3 == '\0' &&
          (cVar3 = FWeakObjectPtr::IsValid(&local_38), cVar3 == '\0')))) {
        bVar14 = true;
      }
      else {
        bVar14 = false;
      }
      if ((bVar14) && (*(longlong *)(piVar11 + 2) == local_30)) {
        bVar14 = true;
      }
      else {
        bVar14 = false;
      }
      if (bVar14) {
        if ((int)((longlong)piVar11 - (longlong)piVar1 >> 4) != -1) goto LAB_140f742b3;
        break;
      }
    }
    iVar12 = *(int *)(pwVar7 + 0x300);
    *(int *)(pwVar7 + 0x300) = iVar12 + 1;
    if (*(int *)(pwVar7 + 0x302) < iVar12 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pwVar13,iVar12);
    }
    puVar9 = (undefined4 *)((longlong)iVar12 * 0x10 + *(longlong *)pwVar13);
    *puVar9 = (int)local_38;
    puVar9[1] = local_38._4_4_;
    *(longlong *)(puVar9 + 2) = local_30;
LAB_140f742b3:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(pwVar13);
  }
  return;
}



// FUNCTION 140f742d0 FUN_140f742d0 body=698 status=ok
// SIG undefined FUN_140f742d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f742d0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_118 [32];
  longlong **local_f8;
  longlong **local_f0;
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
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_b8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_c8[0] = &LAB_140f62a90;
  uVar2 = FUN_1420849a0(param_1,local_78,local_c8);
  FUN_14208c260(param_1,uVar2);
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
  if (local_88 != 0) {
    plVar4 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar4 = local_98;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_d8 = (longlong *)0x0;
  local_d0 = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"hintBarWrapper.hintBar",0x2e);
  local_f8 = &local_e8;
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  lVar3 = FUN_140f139f0(param_1,&local_d8,0,6);
  param_1[0xc6] = lVar3;
  plVar4 = local_e8;
  for (iVar5 = (int)local_e0; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (param_1[0xc6] != 0) {
    lVar3 = *(longlong *)(param_1[0xc6] + 0x308);
    uVar2 = FUN_140e10600(param_1);
    (**(code **)(lVar3 + 0x10))(param_1[0xc6] + 0x308,0,uVar2);
    FUN_140f77260(param_1);
  }
  local_e8 = (longlong *)0x0;
  local_e0 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"hintText",0x12);
  local_f0 = &local_d8;
  local_d8 = (longlong *)0x0;
  local_f8 = (longlong **)CONCAT71(local_f8._1_7_,6);
  local_d0 = 0;
  FUN_140ecf4e0(param_1,param_1 + 199,&local_e8,0);
  plVar4 = local_d8;
  for (iVar5 = (int)local_d0; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[199];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,param_1 + 200,1,0);
  }
  (**(code **)(*param_1 + 0x580))(param_1,1);
  return;
}



// FUNCTION 140f74590 FUN_140f74590 body=47 status=ok
// SIG undefined FUN_140f74590(void)

void FUN_140f74590(longlong *param_1)

{
  FUN_142ec45d0();
  if ((char)param_1[0xbf] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140f745b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x5d0))(param_1);
    return;
  }
  return;
}



// FUNCTION 140f745c0 FUN_140f745c0 body=32 status=ok
// SIG undefined FUN_140f745c0(void)

void FUN_140f745c0(longlong *param_1)

{
  FUN_142ec45d0();
                    /* WARNING: Could not recover jumptable at 0x000140f745d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5d0))(param_1);
  return;
}



// FUNCTION 140f745e0 FUN_140f745e0 body=310 status=ok
// SIG undefined FUN_140f745e0(void)

void FUN_140f745e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142ef9e70();
  uVar5 = FUN_142085870(param_1,local_38,L"statName");
  FUN_142ede260(param_1 + 0x170,uVar5);
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
  uVar5 = FUN_142085870(param_1,local_28,L"statValue");
  FUN_142ede260(param_1 + 0x188,uVar5);
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
  uVar5 = FUN_142085870(param_1,local_18,L"artifactElementalTextField");
  FUN_142ede260(param_1 + 0x1a0,uVar5);
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



// FUNCTION 140f74720 FUN_140f74720 body=285 status=ok
// SIG undefined FUN_140f74720(void)

void FUN_140f74720(longlong param_1)

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
  
  FUN_142ef9e70();
  FUN_14208d370(param_1,param_1 + 400,L"modIcon");
  FUN_14208d370(param_1,param_1 + 0x170,L"statIcon");
  FUN_14208d370(param_1,param_1 + 0x180,L"iconTint");
  uVar5 = FUN_142085870(param_1,local_28,L"statValue");
  FUN_142ede260(param_1 + 0x1a0,uVar5);
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
  uVar5 = FUN_142085870(param_1,local_18,L"statName");
  FUN_142ede260(param_1 + 0x1b8,uVar5);
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



// FUNCTION 140f74840 FUN_140f74840 body=219 status=ok
// SIG undefined FUN_140f74840(void)

void FUN_140f74840(longlong param_1)

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
  
  FUN_142ef9e70();
  uVar5 = FUN_142085870(param_1,local_28,L"totalPoints");
  FUN_142ede260(param_1 + 400,uVar5);
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
  uVar5 = FUN_142085870(param_1,local_18,L"pointsAdded");
  FUN_142ede260(param_1 + 0x1a8,uVar5);
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



// FUNCTION 140f74920 FUN_140f74920 body=518 status=ok
// SIG undefined FUN_140f74920(void)

void FUN_140f74920(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ef9f10();
  uVar5 = FUN_142085870(param_1,local_48,L"challengeDiscription");
  FUN_142ede260(param_1 + 0x318,uVar5);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  uVar5 = FUN_142085870(param_1,local_38,L"manufacturerBigNumber");
  FUN_142ede260(param_1 + 0x330,uVar5);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  uVar5 = FUN_142085870(param_1,local_28,L"manufacturerSmallNumber");
  FUN_142ede260(param_1 + 0x348,uVar5);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  FUN_142f0ead0(param_1,0);
  if ((*(longlong *)(param_1 + 800) != 0) && (*(longlong *)(param_1 + 0x328) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x328) + 8);
    LOCK();
    iVar4 = *piVar2;
    if (iVar4 == 0) {
      *piVar2 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      uVar5 = FUN_1404b03b0();
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x318,uVar5,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x338) != 0) && (*(longlong *)(param_1 + 0x340) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x340) + 8);
    LOCK();
    iVar4 = *piVar2;
    if (iVar4 == 0) {
      *piVar2 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      uVar5 = FUN_1404b03b0();
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x330,uVar5,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x350) != 0) && (*(longlong *)(param_1 + 0x358) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x358) + 8);
    LOCK();
    iVar4 = *piVar2;
    if (iVar4 == 0) {
      *piVar2 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      uVar5 = FUN_1404b03b0();
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x348,uVar5,1,0);
    }
  }
  return;
}



// FUNCTION 140f74b30 FUN_140f74b30 body=374 status=ok
// SIG undefined FUN_140f74b30(void)

void FUN_140f74b30(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142ec5080();
  puVar5 = (undefined8 *)FUN_142085870(param_1,local_38,L"partIcon");
  *(undefined8 *)(param_1 + 0x308) = *puVar5;
  plVar3 = (longlong *)puVar5[1];
  plVar7 = *(longlong **)(param_1 + 0x310);
  if (plVar3 != plVar7) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + 0x310);
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
    *(longlong **)(param_1 + 0x310) = plVar3;
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  uVar6 = FUN_142085870(param_1,local_28,L"partName");
  FUN_142ede260(param_1 + 0x318,uVar6);
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
  uVar6 = FUN_142085870(param_1,local_18,L"partDescription");
  FUN_142ede260(param_1 + 0x330,uVar6);
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



// FUNCTION 140f74cb0 FUN_140f74cb0 body=184 status=ok
// SIG undefined FUN_140f74cb0(void)

void FUN_140f74cb0(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong local_res10;
  
  FUN_142ec4360();
  pwVar3 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCellChanged",L"::");
  pwVar2 = (wchar_t *)0x0;
  while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
    pwVar2 = pwVar1;
  }
  FName::FName(&local_res10,pwVar2 + 2,1);
  FWeakObjectPtr::operator=(param_1 + 800,param_1);
  *(longlong *)(param_1 + 0x328) = local_res10;
  if ((local_res10 != 0) && (lVar4 = FWeakObjectPtr::Get(param_1 + 800), lVar4 != 0)) {
    UObject::FindFunction(lVar4,*(undefined8 *)(param_1 + 0x328));
  }
  return;
}



// FUNCTION 140f74d70 FUN_140f74d70 body=774 status=ok
// SIG undefined FUN_140f74d70(void)

void FUN_140f74d70(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142ec5080();
  FUN_142085870(param_1,&local_58,L"skinImage");
  plVar3 = local_50;
  if (local_58 != 0) {
    *(longlong *)(param_1 + 0x308) = local_58;
    plVar7 = *(longlong **)(param_1 + 0x310);
    if (local_50 != plVar7) {
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
        UNLOCK();
        plVar7 = *(longlong **)(param_1 + 0x310);
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
      *(longlong **)(param_1 + 0x310) = plVar3;
    }
    puVar5 = (undefined8 *)FUN_1420392d0(local_58,local_38,L"rarityIndicator");
    *(undefined8 *)(param_1 + 0x318) = *puVar5;
    plVar3 = (longlong *)puVar5[1];
    plVar7 = *(longlong **)(param_1 + 800);
    if (plVar3 != plVar7) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar7 = *(longlong **)(param_1 + 800);
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
      *(longlong **)(param_1 + 800) = plVar3;
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    puVar5 = (undefined8 *)FUN_1420392d0(local_58,local_28,L"skinPreview.previewIcon");
    *(undefined8 *)(param_1 + 0x328) = *puVar5;
    plVar3 = (longlong *)puVar5[1];
    plVar7 = *(longlong **)(param_1 + 0x330);
    if (plVar3 != plVar7) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar7 = *(longlong **)(param_1 + 0x330);
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
      *(longlong **)(param_1 + 0x330) = plVar3;
    }
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
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  FUN_142085870(param_1,&local_48,L"skinTextRarity");
  plVar3 = local_40;
  if (local_48 != 0) {
    *(longlong *)(param_1 + 0x338) = local_48;
    plVar7 = *(longlong **)(param_1 + 0x340);
    if (local_40 != plVar7) {
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_40 + 0xc) = *(int *)((longlong)local_40 + 0xc) + 1;
        UNLOCK();
        plVar7 = *(longlong **)(param_1 + 0x340);
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
      *(longlong **)(param_1 + 0x340) = plVar3;
    }
    uVar6 = FUN_1420392d0(local_48,local_18,L"rareSkinText");
    FUN_142ede260(param_1 + 0x348,uVar6);
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
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 140f75080 FUN_140f75080 body=609 status=ok
// SIG undefined FUN_140f75080(void)

void FUN_140f75080(longlong param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong *plVar10;
  longlong local_res10;
  int local_38;
  int local_34;
  longlong local_30;
  
  FUN_142ec4360();
  FUN_142f10940(param_1,1);
  lVar5 = *(longlong *)(param_1 + 0x3c8);
  if (lVar5 == 0) {
    lVar5 = NewObject<UMaterialParameterCollectionInstance>(param_1);
    *(longlong *)(param_1 + 0x3c8) = lVar5;
  }
  if (lVar5 != 0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnThumbnailLoaded",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    lVar7 = local_res10;
    lVar5 = *(longlong *)(param_1 + 0x3c8);
    plVar10 = (longlong *)(lVar5 + 0xe8);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = lVar7;
    if ((lVar7 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_30);
    }
    piVar8 = (int *)*plVar10;
    iVar1 = *(int *)(lVar5 + 0xf0);
    for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar1 * 4; piVar9 = piVar9 + 4) {
      if ((((*piVar9 == local_38) && (piVar9[1] == local_34)) ||
          ((cVar4 = FWeakObjectPtr::IsValid(piVar9), cVar4 == '\0' &&
           (cVar4 = FWeakObjectPtr::IsValid(&local_38), cVar4 == '\0')))) &&
         (*(longlong *)(piVar9 + 2) == local_30)) {
        if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140f75226;
        break;
      }
    }
    iVar1 = *(int *)(lVar5 + 0xf0);
    *(int *)(lVar5 + 0xf0) = iVar1 + 1;
    if (*(int *)(lVar5 + 0xf4) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
    }
    piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar10);
    *piVar8 = local_38;
    piVar8[1] = local_34;
    *(longlong *)(piVar8 + 2) = local_30;
LAB_140f75226:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
  }
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCellChanged",L"::");
  pwVar3 = (wchar_t *)0x0;
  while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar3 = pwVar2;
  }
  FName::FName(&local_res10,pwVar3 + 2,1);
  FWeakObjectPtr::operator=(param_1 + 800,param_1);
  *(longlong *)(param_1 + 0x328) = local_res10;
  if ((local_res10 != 0) && (lVar5 = FWeakObjectPtr::Get(param_1 + 800), lVar5 != 0)) {
    UObject::FindFunction(lVar5,*(undefined8 *)(param_1 + 0x328));
  }
  return;
}



// FUNCTION 140f752f0 FUN_140f752f0 body=121 status=ok
// SIG undefined FUN_140f752f0(void)

void FUN_140f752f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142ef9e70();
  uVar5 = FUN_142085870(param_1,local_18,L"statText");
  FUN_142ede260(param_1 + 0x170,uVar5);
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



// FUNCTION 140f75370 FUN_140f75370 body=518 status=ok
// SIG undefined FUN_140f75370(void)

void FUN_140f75370(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ec5080();
  local_10 = 0xe;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"challengeName",0x1c);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x308) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"progress",0x12);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x310) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"progress.currentValueLabel",0x36);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x318) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f75580 FUN_140f75580 body=370 status=ok
// SIG undefined FUN_140f75580(void)

void FUN_140f75580(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_142ef9e70();
  *(undefined1 *)(param_1 + 0x6e0) = 1;
  *(undefined1 *)(param_1 + 0x6e2) = 1;
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnItemCardLoadComplete",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res10,pwVar4 + 2,1);
  plVar1 = (longlong *)(param_1 + 0x170);
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = local_res10;
  if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_20);
  }
  piVar8 = (int *)*plVar1;
  iVar2 = *(int *)(param_1 + 0x178);
  piVar9 = piVar8;
  do {
    if (piVar9 == piVar8 + (longlong)iVar2 * 4) {
LAB_140f756a4:
      iVar2 = *(int *)(param_1 + 0x178);
      *(int *)(param_1 + 0x178) = iVar2 + 1;
      if (*(int *)(param_1 + 0x17c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar8 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar8 = local_28;
      piVar8[1] = local_24;
      *(longlong *)(piVar8 + 2) = local_20;
LAB_140f756dd:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      return;
    }
    if ((((*piVar9 == local_28) && (piVar9[1] == local_24)) ||
        ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
         (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
       (*(longlong *)(piVar9 + 2) == local_20)) {
      if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140f756dd;
      goto LAB_140f756a4;
    }
    piVar9 = piVar9 + 4;
  } while( true );
}



// FUNCTION 140f75700 FUN_140f75700 body=354 status=ok
// SIG undefined FUN_140f75700(void)

void FUN_140f75700(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_142ef9e70();
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnItemCardLoadComplete",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res10,pwVar4 + 2,1);
  plVar1 = (longlong *)(param_1 + 0x170);
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = local_res10;
  if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_20);
  }
  piVar8 = (int *)*plVar1;
  iVar2 = *(int *)(param_1 + 0x178);
  piVar9 = piVar8;
  do {
    if (piVar9 == piVar8 + (longlong)iVar2 * 4) {
LAB_140f75814:
      iVar2 = *(int *)(param_1 + 0x178);
      *(int *)(param_1 + 0x178) = iVar2 + 1;
      if (*(int *)(param_1 + 0x17c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar8 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar8 = local_28;
      piVar8[1] = local_24;
      *(longlong *)(piVar8 + 2) = local_20;
LAB_140f7584d:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      return;
    }
    if ((((*piVar9 == local_28) && (piVar9[1] == local_24)) ||
        ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
         (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
       (*(longlong *)(piVar9 + 2) == local_20)) {
      if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140f7584d;
      goto LAB_140f75814;
    }
    piVar9 = piVar9 + 4;
  } while( true );
}



// FUNCTION 140f75870 FUN_140f75870 body=1560 status=ok
// SIG undefined FUN_140f75870(void)

void FUN_140f75870(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong **pplVar8;
  undefined4 uVar9;
  longlong *local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FUN_142ec3600();
  local_140 = 0xd;
  local_148 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
  FGenericPlatformString::Memcpy(local_148,L"unlockNumber",0x1a);
  local_158 = (longlong *)0x0;
  local_150 = 0;
  uVar4 = FUN_140ecc7d0(param_1,&local_148,0,6,&local_158);
  *(undefined8 *)(param_1 + 0x2c8) = uVar4;
  plVar7 = local_158;
  for (iVar6 = (int)local_150; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_158 != (longlong *)0x0) {
    FMemory::Free(local_158);
  }
  if (local_148 != 0) {
    FMemory::Free();
  }
  local_128 = 0;
  local_120 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
  FGenericPlatformString::Memcpy(local_128,L"chestLocked",0x18);
  local_138 = (longlong *)0x0;
  local_130 = 0;
  uVar4 = FUN_140ecbdf0(param_1,&local_128,0,6,&local_138);
  *(undefined8 *)(param_1 + 0x2d0) = uVar4;
  plVar7 = local_138;
  for (iVar6 = (int)local_130; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_138 != (longlong *)0x0) {
    FMemory::Free(local_138);
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  local_108 = 0;
  local_100 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
  FGenericPlatformString::Memcpy(local_108,L"chestAvailable",0x1e);
  local_118 = (longlong *)0x0;
  local_110 = 0;
  uVar4 = FUN_140ecbdf0(param_1,&local_108,0,6,&local_118);
  *(undefined8 *)(param_1 + 0x2d8) = uVar4;
  plVar7 = local_118;
  for (iVar6 = (int)local_110; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free(local_118);
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  local_e8 = 0;
  local_e0 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"chestOpen",0x14);
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  uVar4 = FUN_140ecbdf0(param_1,&local_e8,0,6,&local_f8);
  *(undefined8 *)(param_1 + 0x2e0) = uVar4;
  plVar7 = local_f8;
  for (iVar6 = (int)local_f0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  local_c8 = 0;
  local_c0 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"selectionHintWrapper",0x2a);
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  local_78 = 0;
  uVar4 = FUN_140ecbdf0(param_1,&local_c8,0,6,&local_d8);
  *(undefined8 *)(param_1 + 0x2e8) = uVar4;
  plVar7 = local_d8;
  for (iVar6 = (int)local_d0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  local_a8 = 0;
  local_a0 = 0x2b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"selectionHintWrapper.unlockHint.buttonText",0x56);
  pplVar8 = &local_b8;
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  local_70 = 0;
  uVar4 = FUN_140ecc7d0(param_1,&local_a8,0,6,pplVar8);
  uVar9 = (undefined4)((ulonglong)pplVar8 >> 0x20);
  *(undefined8 *)(param_1 + 0x2f0) = uVar4;
  plVar7 = local_b8;
  for (iVar6 = (int)local_b0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    uVar9 = (undefined4)((ulonglong)pplVar8 >> 0x20);
    plVar7 = plVar7 + 2;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (lVar2 != 0) {
      lVar5 = UInputKeySelector::GetPrivateStaticClass();
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
        uVar4 = FUN_140e971d0(lVar2);
        FUN_142ef30e0(local_60,DAT_146b3e2a0,uVar4,0,CONCAT44(uVar9,0xbf800000),0);
        (**(code **)(**(longlong **)(param_1 + 0x2f0) + 0x2b0))
                  (*(longlong **)(param_1 + 0x2f0),local_60,1,0);
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_58 + 1;
          lVar2 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar1 = (int *)((longlong)local_58 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_58 + 8))(local_58,1);
            }
          }
        }
        goto LAB_140f75d66;
      }
    }
    lVar2 = **(longlong **)(param_1 + 0x2f0);
    uVar4 = FUN_1404b03b0();
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x2f0),uVar4,1,0);
  }
LAB_140f75d66:
  local_88 = 0;
  local_80 = 0x24;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"selectionHintWrapper.buttonHelpText",0x48);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  local_68 = 0;
  uVar4 = FUN_140ecc7d0(param_1,&local_88,0,6,&local_98);
  *(undefined8 *)(param_1 + 0x2f8) = uVar4;
  plVar7 = local_98;
  for (iVar6 = (int)local_90; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0x2f8);
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,L"UNLOCK REWARD",L"GFxLeaguesMenu",L"UnlockRewardText");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x2f8),uVar4,1,0);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_40 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f75e90 FUN_140f75e90 body=518 status=ok
// SIG undefined FUN_140f75e90(void)

void FUN_140f75e90(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ef9e70();
  local_10 = 6;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"title",0xc);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"subtitle",0x12);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x178) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"body",10);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x180) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f760a0 FUN_140f760a0 body=1576 status=ok
// SIG undefined FUN_140f760a0(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_140f760a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  wchar_t *pwVar13;
  char *pcVar14;
  int iVar15;
  char *pcVar16;
  ulonglong uVar17;
  undefined8 local_res8;
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar8 = param_1 + -0x4d8;
  bVar5 = true;
  if (*(char *)(param_1 + 0xce8) == '\0') {
    iVar1 = *(int *)(param_1 + 0xcd8);
    if ((iVar1 < 0) || (bVar3 = bVar5, *(int *)(param_1 + 0x1d0) <= iVar1)) {
      bVar3 = false;
    }
    if (bVar3) {
      cVar6 = *(char *)((longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x1c8));
      if (cVar6 == '\x01') {
        if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146872e38 == *param_2)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          cVar6 = *(char *)(param_1 + 0xd15);
          *(bool *)(param_1 + 0xd15) = cVar6 == '\0';
          if (cVar6 == '\0') {
            if (*(longlong *)(param_1 + 0xa20) != 0) {
              local_68[0] = 0;
              local_68[1] = 4;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
              FGenericPlatformString::Memcpy(local_68[0],&DAT_14461c1b8,8);
              FUN_142088cf0(*(undefined8 *)(param_1 + 0xa20),local_68);
              if (local_68[0] != 0) {
                FMemory::Free();
              }
            }
            if (*(longlong *)(param_1 + 0xa38) == 0) {
              return 1;
            }
            cVar6 = FUN_142ebe120(lVar8);
            if (cVar6 == '\0') {
              return 1;
            }
            cVar6 = FUN_142ebdd70(lVar8);
            if (cVar6 != '\0') {
              return 1;
            }
            (**(code **)(**(longlong **)(param_1 + 0xa38) + 0x278))
                      (*(longlong **)(param_1 + 0xa38),0);
            return 1;
          }
          iVar1 = *(int *)(param_1 + 0xcd8);
          if ((iVar1 < 0) || (*(int *)(param_1 + 0x1d0) <= iVar1)) {
            bVar5 = false;
          }
          if (!bVar5) {
            return 1;
          }
          if (*(longlong *)(param_1 + 0xa20) != 0) {
            FUN_142088cf0(*(longlong *)(param_1 + 0xa20),
                          (longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x1c8) + 0x10);
          }
          if (*(longlong *)(param_1 + 0xa38) == 0) {
            return 1;
          }
          cVar6 = FUN_142ebe120(lVar8);
          if (cVar6 == '\0') {
            return 1;
          }
          cVar6 = FUN_142ebdd70(lVar8);
          if (cVar6 != '\0') {
            return 1;
          }
          (**(code **)(**(longlong **)(param_1 + 0xa38) + 0x278))(*(longlong **)(param_1 + 0xa38),1)
          ;
          return 1;
        }
        if ((*(char *)((longlong)param_2 + 0xc) != '\0') ||
           (bVar3 = bVar5, DAT_146872e40 != *param_2)) {
          bVar3 = false;
        }
        if (bVar3) {
          FUN_140f8c600(param_1 + 3000,0);
          return 1;
        }
        plVar7 = (longlong *)FName::FName(&local_res8,L"GbxMenu_MouseWheelDown",1);
        if ((*(char *)((longlong)param_2 + 0xc) != '\0') || (bVar3 = bVar5, *plVar7 != *param_2)) {
          bVar3 = false;
        }
        if (bVar3) {
LAB_140f76304:
          local_48 = 0;
          local_40 = 0;
          uStack_38 = 0;
          local_54 = 0x3f800000;
          plVar7 = (longlong *)FName::FName(&local_res8,L"GbxMenu_MouseWheelDown",1);
          if ((*(char *)((longlong)param_2 + 0xc) != '\0') || (bVar3 = bVar5, *plVar7 != *param_2))
          {
            bVar3 = false;
          }
          pwVar13 = L"MouseWheelAxis";
          if (!bVar3) {
            pwVar13 = L"KeyboardZoom";
          }
          FName::FName(&local_res8,pwVar13,1);
          local_50 = local_res8;
          local_58 = (undefined4)param_2[1];
          uVar2 = FUN_140f66310(lVar8);
          cVar4 = FUN_140f68410(param_1 + 3000,&local_58,uVar2,0);
          if (cVar4 != '\0') {
            return 1;
          }
        }
        else {
          if ((*(char *)((longlong)param_2 + 0xc) != '\0') ||
             (bVar3 = bVar5, DAT_146872c78 != *param_2)) {
            bVar3 = false;
          }
          if (bVar3) goto LAB_140f76304;
        }
        plVar7 = (longlong *)FName::FName(&local_res8,L"GbxMenu_MouseWheelUp",1);
        if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (*plVar7 == *param_2)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (!bVar3) {
          if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146872c70 == *param_2)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (!bVar3) goto LAB_140f76482;
        }
        local_48 = 0;
        local_40 = 0;
        uStack_38 = 0;
        local_54 = 0xbf800000;
        plVar7 = (longlong *)FName::FName(&local_res8,L"GbxMenu_MouseWheelUp",1);
        if ((*(char *)((longlong)param_2 + 0xc) != '\0') || (bVar3 = bVar5, *plVar7 != *param_2)) {
          bVar3 = false;
        }
        pwVar13 = L"MouseWheelAxis";
        if (!bVar3) {
          pwVar13 = L"KeyboardZoom";
        }
        FName::FName(&local_res8,pwVar13,1);
        local_50 = local_res8;
        local_58 = (undefined4)param_2[1];
        uVar2 = FUN_140f66310(lVar8);
        cVar4 = FUN_140f68410(param_1 + 3000,&local_58,uVar2,0);
        if (cVar4 != '\0') {
          return 1;
        }
      }
    }
    else {
      cVar6 = '\0';
    }
  }
  else {
    cVar6 = '\x05';
  }
LAB_140f76482:
  if (*(char *)(param_1 + 0xd15) == '\0') {
    plVar7 = *(longlong **)(param_1 + 0xce0);
    if ((plVar7 != (longlong *)0x0) &&
       (cVar4 = (**(code **)(*plVar7 + 0x28))(plVar7,lVar8,param_2), cVar4 != '\0')) {
      return 1;
    }
    if (cVar6 == '\x05') goto LAB_140f766a4;
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146872bc0 == *param_2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      iVar1 = *(int *)(param_1 + 0x1d0);
      if (iVar1 < 1) {
        return 1;
      }
      iVar15 = 1;
      do {
        iVar11 = (*(int *)(param_1 + 0xcd8) + iVar1 + iVar15) % iVar1;
        uVar17 = (ulonglong)iVar11;
        if ((iVar11 < 0) || (iVar1 <= iVar11)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          pcVar14 = *(char **)(param_1 + 0xa08);
          pcVar16 = pcVar14 + *(int *)(param_1 + 0xa10);
          if (pcVar14 != pcVar16) {
            do {
              if (*pcVar14 == *(char *)(uVar17 * 0x38 + *(longlong *)(param_1 + 0x1c8)))
              goto LAB_140f76603;
              pcVar14 = pcVar14 + 1;
            } while (pcVar14 != pcVar16);
          }
        }
        bVar5 = iVar1 <= iVar15;
        iVar15 = iVar15 + 1;
        if (bVar5) {
          return 1;
        }
      } while( true );
    }
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146872bc8 == *param_2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      iVar1 = *(int *)(param_1 + 0x1d0);
      if (iVar1 < 1) {
        return 1;
      }
      iVar11 = iVar1 + -1 + *(int *)(param_1 + 0xcd8);
      iVar15 = 1;
      do {
        iVar12 = iVar11 % iVar1;
        uVar17 = (ulonglong)iVar12;
        if ((iVar12 < 0) || (iVar1 <= iVar12)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          pcVar14 = *(char **)(param_1 + 0xa08);
          pcVar16 = pcVar14 + *(int *)(param_1 + 0xa10);
          if (pcVar14 != pcVar16) {
            do {
              if (*pcVar14 == *(char *)(uVar17 * 0x38 + *(longlong *)(param_1 + 0x1c8))) {
LAB_140f76603:
                FUN_140f68240(lVar8,uVar17 & 0xffffffff);
                return 1;
              }
              pcVar14 = pcVar14 + 1;
            } while (pcVar14 != pcVar16);
          }
        }
        iVar11 = iVar11 + -1;
        bVar5 = iVar1 <= iVar15;
        iVar15 = iVar15 + 1;
        if (bVar5) {
          return 1;
        }
      } while( true );
    }
  }
  if (cVar6 == '\x05') {
LAB_140f766a4:
    uVar10 = FUN_142ec6030(param_1,param_2);
    return uVar10;
  }
  if ((*(char *)((longlong)param_2 + 0xc) != '\0') || (bVar3 = bVar5, DAT_146872e48 != *param_2)) {
    bVar3 = false;
  }
  if ((!bVar3) || (cVar6 = FUN_140f62f40(lVar8), cVar6 == '\0')) goto LAB_140f766a4;
  lVar8 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar8 != 0) {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    if (bVar5) goto LAB_140f76694;
  }
  lVar8 = 0;
LAB_140f76694:
  FUN_140c29280(lVar8,0);
  return 1;
}



// FUNCTION 140f766d0 FUN_140f766d0 body=2779 status=ok
// SIG undefined FUN_140f766d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_140f766d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_478 [32];
  longlong *local_458;
  char local_448;
  undefined2 local_440 [4];
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  longlong local_418 [2];
  undefined4 *local_408;
  undefined4 *puStack_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  longlong local_3c0;
  undefined1 local_3b8 [8];
  undefined4 local_3b0;
  undefined1 local_3ac;
  undefined1 local_3a8 [8];
  undefined8 local_3a0;
  longlong *plStack_398;
  undefined1 local_390;
  undefined1 local_388 [8];
  undefined1 local_380 [8];
  undefined1 local_378 [8];
  undefined1 local_370 [16];
  undefined1 local_360 [8];
  longlong *local_358;
  undefined1 local_348 [8];
  longlong *local_340;
  undefined1 local_330 [40];
  undefined1 local_308 [8];
  longlong *local_300;
  undefined1 local_2f0 [8];
  longlong *local_2e8;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [32];
  undefined1 local_2a8 [272];
  undefined1 local_198 [272];
  undefined4 local_88 [4];
  undefined1 local_78 [8];
  longlong *local_70;
  char local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  plVar2 = (longlong *)(param_1 + -0x4d8);
  lVar8 = FUN_140f681d0(plVar2);
  plVar15 = (longlong *)0x0;
  cVar6 = *(char *)((ulonglong)(*(char *)(param_1 + 0x6ca) != '\0') + 0x6c8 + param_1);
  if (cVar6 == '\x01') {
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146872bd0 == *param_2)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      iVar7 = *(int *)(param_1 + 0x6d8) + 1;
      *(int *)(param_1 + 0x6d8) = iVar7;
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x448) <= iVar7)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        *(undefined4 *)(param_1 + 0x6d8) = 0;
        LOCK();
        *(undefined4 *)(param_1 + 0x6e4) = 1;
        UNLOCK();
        return '\x01';
      }
LAB_140f767d1:
      LOCK();
      *(undefined4 *)(param_1 + 0x6e4) = 1;
      UNLOCK();
      return '\x01';
    }
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146872bd8 == *param_2)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      iVar7 = *(int *)(param_1 + 0x6d8) + -1;
      *(int *)(param_1 + 0x6d8) = iVar7;
      if (iVar7 < 0) {
        *(int *)(param_1 + 0x6d8) = *(int *)(param_1 + 0x448) + -1;
      }
      goto LAB_140f767d1;
    }
  }
  if (*(longlong *)(param_1 + 0x4b8) == 0) {
LAB_140f7683b:
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      if (cVar6 == '\0') {
        if ((byte)(*(char *)((ulonglong)(*(char *)(param_1 + 0x69a) != '\0') + 0x698 + param_1) - 1U
                  ) < 2) {
          lVar8 = FUN_140f681d0(plVar2);
          if (lVar8 != 0) {
            FUN_140e96110(lVar8,0);
          }
          if (local_440 != (undefined2 *)(param_1 + 0x699)) {
            *(undefined2 *)(param_1 + 0x699) = 0x100;
          }
          *(undefined1 *)(param_1 + 0x6dc) = 2;
          LOCK();
          *(undefined4 *)(param_1 + 0xb0) = 1;
          UNLOCK();
          return '\x01';
        }
      }
      else if (cVar6 == '\x01') {
        _guard_xfg_dispatch_icall_nop(local_198,0,0x110);
        FName::FName(local_3b8,&DAT_143f3eda8,1);
        local_3ac = 0;
        local_3b0 = 0xffffffff;
        FName::FName(local_3a8,&DAT_143f3eda8,1);
        local_390 = 0;
        local_3a0 = 0;
        plStack_398 = (longlong *)0x0;
        uVar12 = FUN_140ed0240(local_198);
        FUN_140f70ad0(plVar2,uVar12,0,local_3b8);
        FUN_140e9c360(local_198);
        plVar2 = plStack_398;
        if (plStack_398 != (longlong *)0x0) {
          LOCK();
          plVar15 = plStack_398 + 1;
          lVar8 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_398)(plStack_398);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
              return '\x01';
            }
          }
        }
        goto LAB_140f77137;
      }
      if (lVar8 != 0) {
        thunk_FUN_1414b7270(lVar8);
        lVar8 = *plVar2;
        local_3f8 = 0;
        local_3f0 = 0;
        puVar9 = (undefined8 *)FName::FName(local_388,L"Trading_Cancel",1);
        (**(code **)(lVar8 + 0x4e8))(plVar2,*puVar9,&local_3f8);
        return '\x01';
      }
    }
    local_448 = FUN_142ec6030(param_1,param_2);
    bVar4 = true;
    if (local_448 == '\0') {
      if ((cVar6 == '\0') &&
         (cVar6 = *(char *)((ulonglong)(*(char *)(param_1 + 0x69a) != '\0') + 0x698 + param_1),
         bVar4 = true, cVar6 != '\x01' && cVar6 != '\x02')) {
        if ((*(char *)((longlong)param_2 + 0xc) != '\0') ||
           (bVar3 = bVar4, DAT_146872b98 != *param_2)) {
          bVar3 = false;
        }
        if (bVar3) {
          plVar10 = (longlong *)FUN_142eb65a0(plVar2);
          if (plVar10 == (longlong *)0x0) {
LAB_140f76b74:
            plVar16 = (longlong *)0x0;
          }
          else {
            lVar11 = FUN_1413621e0();
            if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (bVar3 = bVar4,
               *(longlong *)
                (*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
               lVar11 + 0x88)) {
              bVar3 = false;
            }
            if (!bVar3) goto LAB_140f76b74;
            lVar11 = *(longlong *)(param_1 + 0x4c0);
            plVar15 = (longlong *)0x0;
            plVar16 = plVar10;
            if (lVar11 != 0) {
              iVar7 = (int)plVar10[0x5b];
              if ((iVar7 < 0) || (*(int *)(lVar11 + 0x188) <= iVar7)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                plVar15 = *(longlong **)(*(longlong *)(lVar11 + 0x180) + (longlong)iVar7 * 8);
              }
            }
          }
          if ((((plVar16 != (longlong *)0x0) &&
               (cVar6 = FUN_140f62ea0(plVar2,plVar16), cVar6 != '\0')) &&
              (plVar15 != (longlong *)0x0)) && (lVar8 != 0)) {
            cVar6 = FUN_140e747d0(lVar8);
            if (cVar6 != '\0') {
              FUN_140ed0240(local_2a8);
              FUN_1411c87b0(local_330);
              (**(code **)(*plVar16 + 0x358))(plVar16,local_330,1);
              (**(code **)(*plVar16 + 0x330))(plVar16,local_2a8);
              (**(code **)(*plVar15 + 0x358))(plVar15,local_330,1);
              (**(code **)(*plVar15 + 0x330))(plVar15,local_2a8);
              (**(code **)(*plVar16 + 0x348))(plVar16);
              uVar12 = (**(code **)(*plVar16 + 0x340))(plVar16);
              FUN_140f950c0(plVar2,uVar12);
              FUN_140f8cab0(plVar2,(int)plVar16[0x5b],0);
              LOCK();
              *(undefined4 *)(param_1 + 0x6e4) = 1;
              UNLOCK();
              FUN_140ddef50(local_330);
              FUN_140e9c360(local_2a8);
              return '\x01';
            }
            lVar11 = FUN_140e971d0(plVar2);
            if (lVar11 != 0) {
              local_418[0] = 0;
              local_418[1] = 0;
              lVar13 = FUN_1422312c0(lVar11);
              if (lVar13 != 0) {
                lVar14 = FUN_14141f270();
                if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
                   (bVar3 = bVar4,
                   *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
                    (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
                  bVar3 = false;
                }
                if (((bVar3) && (*(longlong **)(lVar8 + 0x470) != (longlong *)0x0)) &&
                   (lVar8 = (**(code **)(**(longlong **)(lVar8 + 0x470) + 0x680))(), lVar8 != 0)) {
                  lVar14 = UInputKeySelector::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
                    bVar4 = false;
                  }
                  if (bVar4) {
                    uStack_430 = *(longlong **)(lVar8 + 0x4c0);
                    local_438 = *(longlong **)(lVar8 + 0x4b8);
                    if (uStack_430 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(uStack_430 + 1) = (int)uStack_430[1] + 1;
                      UNLOCK();
                    }
                    if (local_438 != (longlong *)0x0) {
                      puVar9 = (undefined8 *)(**(code **)(*local_438 + 8))(local_438,local_378);
                      cVar6 = FUN_140bcac80(lVar13,*puVar9);
                      plVar15 = uStack_430;
                      plVar2 = uStack_430;
                      if (cVar6 == '\0') {
                        plVar10 = *(longlong **)(lVar8 + 0x538);
                        plVar2 = *(longlong **)(lVar8 + 0x540);
                        if (plVar2 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
                          UNLOCK();
                        }
                        local_428._0_4_ = SUB84(plVar10,0);
                        local_58 = (undefined4)local_428;
                        local_428._4_4_ = (undefined4)((ulonglong)plVar10 >> 0x20);
                        uStack_54 = local_428._4_4_;
                        uStack_420._0_4_ = SUB84(plVar2,0);
                        uStack_50 = (undefined4)uStack_420;
                        uStack_420._4_4_ = (undefined4)((ulonglong)plVar2 >> 0x20);
                        uStack_4c = uStack_420._4_4_;
                        local_428 = local_438;
                        uStack_420 = uStack_430;
                        local_438 = plVar10;
                        if (uStack_430 != (longlong *)0x0) {
                          LOCK();
                          plVar10 = uStack_430 + 1;
                          lVar8 = *plVar10;
                          *(int *)plVar10 = (int)*plVar10 + -1;
                          UNLOCK();
                          if ((int)lVar8 == 1) {
                            puVar9 = (undefined8 *)*uStack_430;
                            uStack_430 = plVar2;
                            (*(code *)*puVar9)(plVar15);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar15 + 0xc);
                            iVar7 = *piVar1;
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            plVar2 = uStack_430;
                            if (iVar7 == 1) {
                              (**(code **)(*uStack_420 + 8))(uStack_420,1);
                              plVar2 = uStack_430;
                            }
                          }
                        }
                      }
                      uStack_430 = plVar2;
                      if (local_438 != (longlong *)0x0) {
                        local_3d8 = (undefined4)local_438;
                        uStack_3d4 = local_438._4_4_;
                        uStack_3d0 = (undefined4)uStack_430;
                        uStack_3cc = uStack_430._4_4_;
                        if (uStack_430 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(uStack_430 + 1) = (int)uStack_430[1] + 1;
                          UNLOCK();
                        }
                        local_458 = local_418;
                        FUN_140d79f00(*(undefined8 *)(lVar13 + 0x478),&local_3d8,1,0);
                        plVar2 = (longlong *)CONCAT44(uStack_3cc,uStack_3d0);
                        if (plVar2 != (longlong *)0x0) {
                          LOCK();
                          plVar15 = plVar2 + 1;
                          lVar8 = *plVar15;
                          *(int *)plVar15 = (int)*plVar15 + -1;
                          UNLOCK();
                          if ((int)lVar8 == 1) {
                            (**(code **)*plVar2)(plVar2);
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
                    plVar2 = uStack_430;
                    if (uStack_430 != (longlong *)0x0) {
                      LOCK();
                      plVar15 = uStack_430 + 1;
                      lVar8 = *plVar15;
                      *(int *)plVar15 = (int)*plVar15 + -1;
                      UNLOCK();
                      if ((int)lVar8 == 1) {
                        (**(code **)*uStack_430)(uStack_430);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar2 + 0xc);
                        iVar7 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar7 == 1) {
                          (**(code **)(*uStack_430 + 8))(uStack_430,1);
                        }
                      }
                    }
                  }
                }
              }
              FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_348,L"Can\'t Remove item.",L"GFxItemTradingMenu",
                         L"CantRemoveItemTitle");
              lVar8 = FText::FromString(local_2c8,local_418);
              uVar12 = FInternationalization::
                       ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                 (local_2f0,L"{0}\'s items won\'t fit in your backpack.",
                                  L"GFxItemTradingMenu",L"CantRemoveItemDesc");
              puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_2d8,uVar12);
              local_88[0] = 4;
              FText::FText(local_78,lVar8);
              local_3c8 = *puVar9;
              local_408 = local_88;
              puStack_400 = &local_58;
              local_3c0 = puVar9[1];
              local_60 = '\x01';
              if (local_3c0 != 0) {
                LOCK();
                *(int *)(local_3c0 + 8) = *(int *)(local_3c0 + 8) + 1;
                UNLOCK();
              }
              uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                       TArray<FFormatArgumentValue,FDefaultAllocator>(local_370,&local_408);
              uVar12 = FText::Format(local_308,&local_3c8,uVar12);
              FText::FText(local_360,uVar12);
              if (local_300 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_300 + 1;
                lVar13 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar13 == 1) {
                  (**(code **)*local_300)(local_300);
                  LOCK();
                  piVar1 = (int *)((longlong)local_300 + 0xc);
                  iVar7 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*local_300 + 8))(local_300,1);
                  }
                }
              }
              TArray<FFormatArgumentValue,FDefaultAllocator>::
              ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_370);
              if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
                LOCK();
                plVar2 = local_70 + 1;
                lVar13 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar13 == 1) {
                  (**(code **)*local_70)(local_70);
                  LOCK();
                  piVar1 = (int *)((longlong)local_70 + 0xc);
                  iVar7 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*local_70 + 8))(local_70,1);
                  }
                }
              }
              plVar2 = (longlong *)puVar9[1];
              if (plVar2 != (longlong *)0x0) {
                LOCK();
                plVar15 = plVar2 + 1;
                lVar13 = *plVar15;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)lVar13 == 1) {
                  (**(code **)*plVar2)(plVar2);
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
              plVar2 = *(longlong **)(lVar8 + 8);
              if (plVar2 != (longlong *)0x0) {
                LOCK();
                plVar15 = plVar2 + 1;
                lVar8 = *plVar15;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*plVar2)(plVar2);
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
              if (local_2e8 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_2e8 + 1;
                lVar8 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_2e8)(local_2e8);
                  LOCK();
                  piVar1 = (int *)((longlong)local_2e8 + 0xc);
                  iVar7 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*local_2e8 + 8))(local_2e8,1);
                  }
                }
              }
              FUN_140d15fd0(lVar11,local_348,local_360);
              if (local_358 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_358 + 1;
                lVar8 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_358)(local_358);
                  LOCK();
                  piVar1 = (int *)((longlong)local_358 + 0xc);
                  iVar7 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*local_358 + 8))(local_358,1);
                  }
                }
              }
              if (local_340 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_340 + 1;
                lVar8 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_340)(local_340);
                  LOCK();
                  piVar1 = (int *)((longlong)local_340 + 0xc);
                  iVar7 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*local_340 + 8))(local_340,1);
                  }
                }
              }
              if (local_418[0] != 0) {
                FMemory::Free();
              }
            }
            goto LAB_140f77137;
          }
          if (((*(longlong *)(param_1 + 0x4b8) != 0) &&
              (plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x4b8) + 400),
              plVar15 != (longlong *)0x0)) && (plVar15 == plVar10)) {
            FUN_140f09980(plVar15,0);
            lVar8 = FUN_140f681d0(plVar2);
            if (lVar8 != 0) {
              FUN_140e95f70(lVar8,0);
            }
          }
        }
      }
    }
    else {
      cVar6 = *(char *)((longlong)param_2 + 0xc);
      if ((cVar6 != '\0') || (DAT_146872b48 != *param_2)) {
        bVar4 = false;
      }
      if (!bVar4) {
        if ((cVar6 == '\0') && (DAT_146872b50 == *param_2)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (!bVar4) {
          if ((cVar6 == '\0') && (DAT_146872b38 == *param_2)) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if (!bVar4) {
            if ((cVar6 == '\0') && (DAT_146872b40 == *param_2)) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (!bVar4) goto LAB_140f77176;
          }
        }
      }
      lVar8 = *plVar2;
      local_3e8 = 0;
      local_3e0 = 0;
      puVar9 = (undefined8 *)FName::FName(local_380,L"Trading_Nav",1);
      (**(code **)(lVar8 + 0x4e8))(plVar2,*puVar9,&local_3e8);
    }
LAB_140f77176:
    LOCK();
    *(undefined4 *)(param_1 + 0xb0) = 1;
    UNLOCK();
  }
  else {
    if ((*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 400) == 0) ||
       (cVar5 = FUN_140eec820(), cVar5 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140f7683b;
    if ((*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 400) == 0) ||
       (cVar5 = FUN_140ee8150(), cVar5 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140f7683b;
LAB_140f77137:
    local_448 = '\x01';
  }
  return local_448;
}



// FUNCTION 140f771b0 FUN_140f771b0 body=171 status=ok
// SIG undefined FUN_140f771b0(void)

undefined8 FUN_140f771b0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    if (DAT_146872e98 == *param_2) {
      uVar1 = *(byte *)(param_1 + 0x2e0) + 1;
      uVar3 = 1;
      if (uVar1 < 4) {
        uVar3 = uVar1;
      }
      FUN_140f87860(param_1 + -0x4d8,uVar3);
      FUN_140f92cf0(param_1 + -0x4d8);
      return 1;
    }
    if (DAT_146872bd8 == *param_2) {
      FUN_140f92cf0(param_1 + -0x4d8);
      return 1;
    }
    if (DAT_146872bd0 == *param_2) {
      FUN_140f92880(param_1 + -0x4d8);
      return 1;
    }
  }
  uVar2 = FUN_1410949b0();
  return uVar2;
}



// FUNCTION 140f77260 FUN_140f77260 body=140 status=ok
// SIG undefined FUN_140f77260(void)

void FUN_140f77260(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_140f62bb0;
  FUN_14208c4f0(param_1,local_58);
  return;
}



// FUNCTION 140f77320 FUN_140f77320 body=356 status=ok
// SIG undefined FUN_140f77320(void)

void FUN_140f77320(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FUN_142ec64e0();
  plVar10 = *(longlong **)(param_1 + 0x2a0);
  plVar3 = plVar10 + *(int *)(param_1 + 0x2a8);
  if (plVar10 != plVar3) {
    do {
      lVar5 = *plVar10;
      if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x2f0) != 0)) {
        lVar8 = FWeakObjectPtr::Get(param_1 + 0xb4);
        if (lVar8 == 0) {
LAB_140f773d3:
          lVar8 = 0;
        }
        else {
          lVar9 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) goto LAB_140f773d3;
        }
        FUN_142ef30e0(local_48,DAT_146b3e2a0,lVar8,0,0xbf800000,0);
        (**(code **)(**(longlong **)(lVar5 + 0x2f0) + 0x2b0))
                  (*(longlong **)(lVar5 + 0x2f0),local_48,1);
        plVar7 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar3);
  }
  return;
}



// FUNCTION 140f77490 FUN_140f77490 body=788 status=ok
// SIG undefined FUN_140f77490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f77490(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 *local_f8;
  ulonglong *puStack_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [16];
  undefined1 local_70 [24];
  undefined4 local_58 [4];
  undefined1 local_48 [8];
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar6 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140f774fd;
  }
  lVar6 = 0;
LAB_140f774fd:
  if ((*(longlong *)(param_1 + 0x630) != 0) && (lVar6 != 0)) {
    local_108 = 0;
    lVar6 = FUN_142ef39a0(local_70,DAT_146872c80,lVar6,0);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_98,L"Hold {0}  to Eject",L"GFxIronbearEjectWidget",L"EjectText");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_80,uVar8);
    local_58[0] = 4;
    FText::FText(local_48,lVar6);
    local_e8 = *puVar9;
    local_f8 = local_58;
    local_e0 = puVar9[1];
    local_30 = '\x01';
    if (local_e0 != 0) {
      LOCK();
      *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
      UNLOCK();
    }
    puStack_f0 = local_28;
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_d8,&local_f8);
    uVar8 = FText::Format(local_b0,&local_e8,uVar8);
    FText::FText(local_c8,uVar8);
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a8 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_d8);
    if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_40 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    plVar4 = (longlong *)puVar9[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    plVar4 = *(longlong **)(lVar6 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_90 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    (**(code **)(**(longlong **)(param_1 + 0x630) + 0x2b0))
              (*(longlong **)(param_1 + 0x630),local_c8,1,0);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_c0 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f777b0 FUN_140f777b0 body=367 status=ok
// SIG undefined FUN_140f777b0(void)

void FUN_140f777b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  
  if (param_2 == 0) {
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar5 = FWeakObjectPtr::Get(param_2 + 0x1064);
    uVar6 = FWeakObjectPtr::Get(param_2 + 0x106c);
  }
  plVar1 = (longlong *)(param_1 + 0x200);
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(int *)(param_1 + 0x20c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  FUN_1411e14e0(uVar5,uVar6,plVar1);
  iVar2 = *(int *)(param_1 + 0x208);
  if (iVar2 != 0) {
    iVar10 = 0;
    if (*(longlong **)*plVar1 == (longlong *)0x0) {
      bVar11 = false;
    }
    else {
      cVar4 = (**(code **)(**(longlong **)*plVar1 + 0x278))();
      bVar11 = cVar4 != '\0';
    }
    lVar7 = 0;
    iVar8 = 0;
    do {
      iVar9 = iVar8;
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar9 + 1;
        if (iVar2 <= lVar7) break;
        plVar3 = *(longlong **)(*plVar1 + lVar7 * 8);
        if (plVar3 == (longlong *)0x0) {
          bVar12 = false;
        }
        else {
          cVar4 = (**(code **)(*plVar3 + 0x278))();
          bVar12 = cVar4 != '\0';
        }
      } while (bVar11 == bVar12);
      if (bVar11 != false) {
        if (iVar10 != iVar8) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar10 * 8),
                     (void *)(*plVar1 + (longlong)iVar8 * 8),(longlong)(iVar9 - iVar8) << 3);
        }
        iVar10 = iVar10 + (iVar9 - iVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar8 = iVar9;
    } while (lVar7 < iVar2);
    *(int *)(param_1 + 0x208) = iVar10;
  }
  *(undefined4 *)(param_1 + 0x210) = 0;
  FUN_140f8a510(param_1,param_2);
  return;
}



// FUNCTION 140f77920 FUN_140f77920 body=566 status=ok
// SIG undefined FUN_140f77920(void)

void FUN_140f77920(longlong param_1,longlong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  bool bVar10;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (param_2 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x50);
    lVar8 = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (!bVar10) {
        LOCK();
        bVar10 = iVar5 == (int)plVar3[1];
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar10) {
          lVar6 = *(longlong *)(param_1 + 0x48);
          if (lVar6 != 0) {
            FUN_142056670(lVar6,0,param_3,param_4,lVar6);
          }
          LOCK();
          plVar1 = plVar3 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
          break;
        }
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar10 = iVar5 == 0;
        if (bVar10) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    if ((*(longlong *)(param_1 + 0x78) != 0) && (*(longlong *)(param_1 + 0x80) != 0)) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 8);
      LOCK();
      iVar5 = *piVar2;
      if (iVar5 == 0) {
        *piVar2 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) {
        lVar6 = FWeakObjectPtr::Get(param_2 + 0x106c);
        if (lVar6 != 0) {
          lVar7 = APlayArea::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          if (bVar10) {
            lVar8 = *(longlong *)(lVar6 + 0x3f8);
          }
        }
        lVar6 = lVar8 + 0x30;
        if (lVar8 == 0) {
          lVar6 = param_2 + 0x688;
        }
        FText::FText(local_38,lVar6);
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x70,local_38,1,0);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_30 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar2 = (int *)((longlong)local_30 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_30 + 8))(local_30,1);
            }
          }
        }
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (!bVar10) {
        LOCK();
        bVar10 = iVar5 == (int)plVar3[1];
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar10) {
          lVar8 = *(longlong *)(param_1 + 0x28);
          if (lVar8 != 0) {
            cVar4 = FUN_140f62dd0(param_2);
            pwVar9 = L"off";
            if (cVar4 != '\0') {
              pwVar9 = L"show";
            }
            FUN_14203e030(lVar8,pwVar9);
          }
          LOCK();
          plVar1 = plVar3 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 != 1) {
            return;
          }
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 != 1) {
            return;
          }
          (**(code **)(*plVar3 + 8))(plVar3,1);
          return;
        }
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar10 = iVar5 == 0;
        if (bVar10) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
  }
  return;
}



// FUNCTION 140f77b60 FUN_140f77b60 body=1046 status=ok
// SIG undefined FUN_140f77b60(void)

void FUN_140f77b60(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  bool bVar12;
  bool bVar13;
  longlong local_e8 [2];
  wchar_t *local_d8;
  int local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  
  if (param_2 != 0) {
    pwVar9 = (wchar_t *)0x0;
    lVar5 = FWeakObjectPtr::Get(param_2 + 0x106c);
    pwVar11 = pwVar9;
    if (lVar5 != 0) {
      pwVar11 = *(wchar_t **)(lVar5 + 0x218);
    }
    if (pwVar11 != (wchar_t *)0x0) {
      FUN_141436fd0();
    }
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      bVar12 = pwVar11 == (wchar_t *)0x0;
      if (bVar12) {
        uVar8 = FUN_1404b03b0();
        puVar6 = (undefined1 *)FText::FText(local_88,uVar8);
      }
      else {
        FText::FText(local_b8,pwVar11 + 0x60);
        puVar6 = local_b8;
      }
      (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x2b0))
                (*(longlong **)(param_1 + 0xa8),puVar6,1,0);
      if ((bVar12) && (local_80 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_80 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
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
      if ((!bVar12) && (local_b0 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_b0 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)local_b0 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
    }
    bVar12 = false;
    plVar2 = *(longlong **)(param_1 + 0x68);
    local_c0 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar13 = iVar4 == 0;
      if (bVar13) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (!bVar13) {
        LOCK();
        bVar13 = iVar4 == (int)plVar2[1];
        if (bVar13) {
          *(int *)(plVar2 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar13) {
          lVar5 = *(longlong *)(param_1 + 0x60);
          local_c8 = lVar5;
          if (lVar5 != 0) {
            if (pwVar11 == (wchar_t *)0x0) {
              pwVar7 = L"DesignerFixMe";
              pwVar9 = local_d8;
            }
            else {
              local_e8[0] = 0;
              local_e8[1] = 6;
              bVar12 = true;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
              FGenericPlatformString::Memcpy(local_e8[0],&DAT_143f61010,0xc);
              pwVar7 = (wchar_t *)local_e8;
              if (1 < *(int *)(pwVar11 + 0x80)) {
                pwVar7 = pwVar11 + 0x7c;
              }
              local_d8 = (wchar_t *)0x0;
              local_d0 = *(int *)(pwVar7 + 4);
              lVar10 = (longlong)local_d0;
              _Src = *(void **)pwVar7;
              if (local_d0 != 0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,local_d0,0);
                pwVar9 = local_d8;
                _guard_xfg_dispatch_icall_nop(local_d8,_Src,lVar10 * 2);
              }
              iVar4 = local_d0;
              if (local_e8[0] != 0) {
                FMemory::Free();
              }
              pwVar7 = L"";
              if (iVar4 != 0) {
                pwVar7 = pwVar9;
              }
            }
            FUN_14203e4e0(lVar5,pwVar7);
            if ((bVar12) && (pwVar9 != (wchar_t *)0x0)) {
              FMemory::Free(pwVar9);
            }
          }
          plVar3 = local_c0;
          LOCK();
          plVar2 = plVar2 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_c0 + 8))(local_c0,1);
            }
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar13 = iVar4 == 0;
        if (bVar13) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    if ((*(longlong *)(param_1 + 0x78) != 0) && (*(longlong *)(param_1 + 0x80) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        bVar12 = pwVar11 == (wchar_t *)0x0;
        if (bVar12) {
          uVar8 = FUN_1404b03b0();
          uVar8 = FText::FText(local_70,uVar8);
        }
        else {
          FText::FText(local_a0,pwVar11 + 0x54);
          uVar8 = FText::ToUpper(local_a0,local_58);
        }
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x70,uVar8,1,0);
        if ((bVar12) && (local_68 != (longlong *)0x0)) {
          LOCK();
          plVar2 = local_68 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar1 = (int *)((longlong)local_68 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_68 + 8))(local_68,1);
            }
          }
        }
        if ((!bVar12) && (local_50 != (longlong *)0x0)) {
          LOCK();
          plVar2 = local_50 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
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
        if ((!bVar12) && (local_98 != (longlong *)0x0)) {
          LOCK();
          plVar2 = local_98 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_98)(local_98);
            LOCK();
            piVar1 = (int *)((longlong)local_98 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_98 + 8))(local_98,1);
            }
          }
        }
      }
    }
    FUN_140f68610(param_1,param_2,1);
  }
  return;
}



// FUNCTION 140f77f80 FUN_140f77f80 body=306 status=ok
// SIG undefined FUN_140f77f80(void)

void FUN_140f77f80(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (param_2 != 0) {
    FText::FText(local_38);
    lVar4 = FWeakObjectPtr::Get(param_2 + 0x106c);
    if (lVar4 != 0) {
      FText::FText(local_20,lVar4 + 0x268);
      FText::operator=(local_38);
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
            (**(code **)(*local_18 + 8))(local_18);
          }
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x118) != 0) && (*(longlong *)(param_1 + 0x120) != 0)) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x120) + 8);
      LOCK();
      iVar3 = *piVar2;
      if (iVar3 == 0) {
        *piVar2 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x110,local_38,1,0);
      }
    }
    if (*(longlong *)(param_1 + 0x158) != 0) {
      FUN_142f0a7c0(*(longlong *)(param_1 + 0x158),*(undefined4 *)(param_2 + 0x1080));
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
  }
  return;
}



// FUNCTION 140f780c0 FUN_140f780c0 body=124 status=ok
// SIG undefined FUN_140f780c0(void)

int FUN_140f780c0(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1058);
  if (*param_2 == iVar1) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x105c);
    uVar2 = FUN_142fffe20(uVar2,param_1 + 0x1058);
    FUN_140f61880(param_1,uVar2);
    FUN_140f8c3d0(param_1 + 0xf30);
    if (*(longlong **)(param_1 + 0xd50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xd50) + 0x300))();
    }
    FUN_140f89b20(param_1);
    LOCK();
    iVar1 = *(int *)(param_1 + 0x588);
    *(int *)(param_1 + 0x588) = 1;
    UNLOCK();
  }
  return iVar1;
}



// FUNCTION 140f78140 FUN_140f78140 body=392 status=ok
// SIG undefined FUN_140f78140(void)

void FUN_140f78140(longlong param_1)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  uVar6 = 0;
  uVar2 = FUN_1420fc090(*(undefined8 *)(param_1 + 0x38));
  if (uVar2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(uVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140f781a7;
  }
  uVar2 = uVar6;
LAB_140f781a7:
  uVar4 = uVar6;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_28 = 0;
    local_20 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"itemCard",0x12);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    uVar6 = 3;
    uVar4 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x180),&local_28,0,6,&local_38);
  }
  if ((uVar6 & 2) != 0) {
    uVar6 = (ulonglong)((uint)uVar6 & 0xfffffffd);
    plVar5 = local_38;
    for (iVar7 = (int)local_30; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  if (((uVar6 & 1) != 0) && (local_28 != 0)) {
    FMemory::Free();
  }
  if ((uVar2 != 0) && (uVar4 != 0)) {
    FUN_14208ff10(uVar4,0,0);
    FUN_140f69e30(param_1 + 0x1b0,uVar4,uVar2);
  }
  FUN_140f660a0(param_1 + 0x198);
  return;
}



// FUNCTION 140f782d0 FUN_140f782d0 body=392 status=ok
// SIG undefined FUN_140f782d0(void)

void FUN_140f782d0(longlong param_1)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  uVar6 = 0;
  uVar2 = FUN_1420fc090(*(undefined8 *)(param_1 + 0x38));
  if (uVar2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(uVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140f78337;
  }
  uVar2 = uVar6;
LAB_140f78337:
  uVar4 = uVar6;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_28 = 0;
    local_20 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"itemCardAbbreviated",0x28);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    uVar6 = 3;
    uVar4 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x180),&local_28,0,6,&local_38);
  }
  if ((uVar6 & 2) != 0) {
    uVar6 = (ulonglong)((uint)uVar6 & 0xfffffffd);
    plVar5 = local_38;
    for (iVar7 = (int)local_30; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  if (((uVar6 & 1) != 0) && (local_28 != 0)) {
    FMemory::Free();
  }
  if ((uVar2 != 0) && (uVar4 != 0)) {
    FUN_14208ff10(uVar4,0,0);
    FUN_140f69e30(param_1 + 0x1b0,uVar4,uVar2);
  }
  FUN_140f660a0(param_1 + 0x198);
  return;
}



// FUNCTION 140f78490 FUN_140f78490 body=239 status=ok
// SIG undefined FUN_140f78490(void)

void FUN_140f78490(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined1 local_10;
  
  plVar4 = *(longlong **)(param_3 + 0x20);
  local_28 = *(undefined8 *)(param_3 + 0x10);
  local_20 = *(undefined8 *)(param_3 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = DAT_146872ba0;
  local_30 = *(undefined4 *)(param_3 + 8);
  local_2c = *(undefined1 *)(param_3 + 0xc);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_10 = 0;
  local_18 = plVar4;
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
  (**(code **)(*(longlong *)(param_1 + 0x760) + 0x28))
            ((longlong *)(param_1 + 0x760),param_1,&local_38);
  plVar4 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_18)(local_18);
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



// FUNCTION 140f78580 FUN_140f78580 body=282 status=ok
// SIG undefined FUN_140f78580(void)

void FUN_140f78580(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  plVar2 = *(longlong **)(param_1 + 0xce0);
  lVar1 = param_1 + -0x4d8;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
    *(undefined8 *)(param_1 + 0xce0) = 0;
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xb84);
  if (cVar3 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0xb84);
    FUN_1407665e0(lVar4 + 0x2f8,lVar1);
  }
  FUN_140f61880(lVar1,0);
  if ((*(longlong *)(param_1 + 0xa30) != 0) && (*(longlong *)(param_1 + -0x220) != 0)) {
    FUN_142f06340(*(longlong *)(param_1 + -0x220),param_1 + 0xd18);
    FUN_142f06340(*(undefined8 *)(param_1 + -0x220),param_1 + 0xd20);
    FUN_142f06340(*(undefined8 *)(param_1 + -0x220),param_1 + 0xd28);
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0xa50) = local_res8;
  *(undefined4 *)(param_1 + 0xa54) = local_resc;
  FUN_140f8c3d0(param_1 + 0xa58);
  if (*(longlong *)(param_1 + 0xa48) != 0) {
    FUN_142227350(*(longlong *)(param_1 + 0xa48),0,1);
    *(undefined8 *)(param_1 + 0xa48) = 0;
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 140f786a0 FUN_140f786a0 body=137 status=ok
// SIG undefined FUN_140f786a0(void)

void FUN_140f786a0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f681d0(param_1 + -0x9b);
  if (lVar2 != 0) {
    FUN_140e8a2f0(lVar2);
  }
  FUN_140f8cec0(param_1 + -0x9b,0);
  cVar1 = (**(code **)(*param_1 + 0x98))(param_1);
  if (cVar1 != '\0') {
    if (param_1[0x97] != 0) {
      FUN_140f64d00();
    }
    if (param_1[0x98] != 0) {
      FUN_140f64d00();
    }
    if (param_1[0x99] != 0) {
      FUN_140f64d00();
    }
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 140f78730 FUN_140f78730 body=136 status=ok
// SIG undefined FUN_140f78730(void)

void FUN_140f78730(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1d0);
  if (lVar1 != 0) {
    FWeakObjectPtr::operator=(lVar1 + 0x1b0,0);
    *(undefined8 *)(lVar1 + 0x1b8) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x1d8);
  if (lVar1 != 0) {
    FWeakObjectPtr::operator=(lVar1 + 0x1b0,0);
    *(undefined8 *)(lVar1 + 0x1b8) = 0;
  }
  FUN_140f65d90(param_1 + -0x4d8);
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 140f787c0 FUN_140f787c0 body=149 status=ok
// SIG undefined FUN_140f787c0(void)

void FUN_140f787c0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142ec85a0();
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar2 != 0) {
    lVar3 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140f7881a;
  }
  lVar2 = 0;
LAB_140f7881a:
  lVar2 = FUN_1411fca70(param_1 + 0x1d8,lVar2);
  *(longlong *)(param_1 + 0xa48) = lVar2;
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x47a) = 1;
    AActor::SetActorTickEnabled(*(undefined8 *)(param_1 + 0xa48),1);
  }
  return;
}



// FUNCTION 140f78860 FUN_140f78860 body=864 status=ok
// SIG undefined FUN_140f78860(void)

/* WARNING: Removing unreachable block (ram,0x000140f78a52) */

void FUN_140f78860(longlong param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  float local_res8;
  float fStackX_c;
  undefined4 local_78;
  float local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  FUN_142ec8c70();
  lVar7 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar7 == 0) {
LAB_140f788da:
    lVar7 = 0;
  }
  else {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140f788da;
  }
  (**(code **)(*DAT_1469f4590 + 0x48))(DAT_1469f4590,&local_res8);
  fVar11 = local_res8 - *(float *)(param_1 + 0xcec);
  fVar10 = fStackX_c - *(float *)(param_1 + 0xcf0);
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar3 != '\0') {
    lVar8 = FWeakObjectPtr::Get(param_1 + 0xc4);
    lVar8 = FWeakObjectPtr::Get(lVar8 + 0x38);
    if (lVar8 != 0) {
      uVar5 = FUN_142eb7540(param_1 + -0x4d8);
      uVar4 = FUN_142ef58f0(lVar8,&DAT_1469e9880,uVar5);
      *(undefined1 *)(param_1 + 0xcf4) = uVar4;
    }
  }
  if (*(char *)(param_1 + 0xcf5) == '\0') {
    *(ulonglong *)(param_1 + 0xcec) = CONCAT44(fStackX_c,local_res8);
  }
  else {
    FSlateApplication::SetCursorPos((int)DAT_1469f4590,(int)param_1 + 0xcec);
  }
  if (lVar7 != 0) {
    if ((((*(char *)(param_1 + 0xcf4) == '\0') && (*(char *)(param_1 + 0xcf5) == '\0')) &&
        ((*(uint *)(param_1 + -0x498) & 0x100) != 0)) &&
       ((cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xc4), cVar3 != '\0' &&
        (lVar8 = FWeakObjectPtr::Get(param_1 + 0xc4), *(char *)(lVar8 + 0xb8) == '\x02')))) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    *(uint *)(lVar7 + 0x6a8) = *(uint *)(lVar7 + 0x6a8) & 0xfffffffe;
    *(uint *)(lVar7 + 0x6a8) = *(uint *)(lVar7 + 0x6a8) | uVar6;
  }
  if (*(char *)(param_1 + 0xce8) == '\0') {
    iVar1 = *(int *)(param_1 + 0xcd8);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x1d0) <= iVar1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(char *)((longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x1c8)) == '\x01')) {
      if ((iVar1 < 0) || (*(int *)(param_1 + 0x1d0) <= iVar1)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      lVar7 = param_1 + 3000;
      local_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_78 = 0xffffffff;
      if (*(char *)(param_1 + 0xcf4) == '\0') {
        if (*(char *)(param_1 + 0xcf5) == '\0') goto LAB_140f78b3d;
        local_74 = fVar11 * *(float *)(param_1 + 0xbd8);
        local_70 = DAT_146872c18;
        FUN_140f68410(lVar7,&local_78,uVar4,0);
        fVar11 = *(float *)(param_1 + 0xbd8);
        local_70 = DAT_146872c20;
      }
      else {
        local_74 = fVar11 * *(float *)(param_1 + 0xbd4);
        local_70 = DAT_146872c08;
        FUN_140f68410(lVar7,&local_78,uVar4,0);
        fVar11 = *(float *)(param_1 + 0xbd4);
        local_70 = DAT_146872c10;
      }
      local_74 = -(fVar10 * fVar11);
      FUN_140f68410(lVar7,&local_78,uVar4,0);
    }
  }
LAB_140f78b3d:
  FUN_140f93c50(param_1 + 3000,param_2);
  FUN_140f89470(param_1 + -0x4d8);
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xa50);
  if (cVar3 != '\0') {
    plVar9 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xa50);
    (**(code **)(*plVar9 + 0x608))(plVar9,0x3f800000,1,0);
  }
  return;
}



// FUNCTION 140f78bc0 FUN_140f78bc0 body=156 status=ok
// SIG undefined FUN_140f78bc0(void)

void FUN_140f78bc0(longlong param_1)

{
  longlong lVar1;
  
  FUN_142ec8c70();
  lVar1 = FUN_140f681d0(param_1 + -0x4d8);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x458) == '\x02')) {
    FUN_142eb3990(param_1 + -0x4d8);
  }
  else {
    if ((undefined1 *)(lVar1 + 0x459) != (undefined1 *)(param_1 + 0x699)) {
      if (*(char *)(param_1 + 0x69a) != '\0') {
        *(undefined1 *)(param_1 + 0x69a) = 0;
      }
      *(undefined1 *)(param_1 + 0x699) = *(undefined1 *)(lVar1 + 0x459);
      *(undefined1 *)(param_1 + 0x69a) = 1;
    }
    if ((undefined1 *)(lVar1 + 0x478) != (undefined1 *)(param_1 + 0x69c)) {
      if (*(char *)(param_1 + 0x69d) != '\0') {
        *(undefined1 *)(param_1 + 0x69d) = 0;
      }
      *(undefined1 *)(param_1 + 0x69c) = *(undefined1 *)(lVar1 + 0x478);
      *(undefined1 *)(param_1 + 0x69d) = 1;
      return;
    }
  }
  return;
}



// FUNCTION 140f78c60 FUN_140f78c60 body=31 status=ok
// SIG undefined FUN_140f78c60(void)

void FUN_140f78c60(longlong param_1)

{
  FUN_142ec8c70();
  FUN_140f65350(param_1 + -0x4d8);
  return;
}



// FUNCTION 140f78c80 FUN_140f78c80 body=134 status=ok
// SIG undefined FUN_140f78c80(void)

void FUN_140f78c80(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  char local_18;
  undefined7 uStack_17;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  cVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
                    (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"buttonDown",
                     &local_38,((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10);
  if ((cVar1 == '\0') || (local_18 != '\0')) {
    *(undefined1 *)(param_1 + 0x11cd) = 1;
  }
  if ((local_20 >> 6 & 1) != 0) {
    (**(code **)(*local_28 + 0x10))(local_28,&local_38,CONCAT71(uStack_17,local_18));
  }
  return;
}



// FUNCTION 140f78d20 FUN_140f78d20 body=123 status=ok
// SIG undefined FUN_140f78d20(void)

void FUN_140f78d20(longlong param_1,longlong param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  undefined8 local_18;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
            (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"buttonDown",&local_38,
             ((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10);
  *(undefined1 *)(param_1 + 0x11cd) = 0;
  if ((local_20 >> 6 & 1) != 0) {
    (**(code **)(*local_28 + 0x10))(local_28,&local_38,local_18);
  }
  return;
}



// FUNCTION 140f78da0 thunk_FUN_140f92cf0 body=5 status=ok
// SIG undefined thunk_FUN_140f92cf0(void)

void thunk_FUN_140f92cf0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined4 auStackX_8 [2];
  longlong alStack_88 [8];
  undefined1 auStack_48 [8];
  longlong *plStack_40;
  undefined1 auStack_30 [8];
  longlong *plStack_28;
  
  auStackX_8[0] = 0;
  if (((((*(char *)((longlong)param_1 + 0x7ba) != '\x01') && (param_1[0xdb] != 0)) &&
       (param_1[0xdc] != 0)) && ((param_1[0xdd] != 0 && (param_1[0xea] != 0)))) &&
     (param_1[0xde] != 0)) {
    if (*(char *)((longlong)param_1 + 0x7ba) == '\0') {
      alStack_88[0] = 0;
      alStack_88[1] = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(alStack_88,0);
      FGenericPlatformString::Memcpy(alStack_88[0],&DAT_144628cf0,8);
      FUN_142088910(param_1[0xea],alStack_88);
      if (alStack_88[0] != 0) {
        FMemory::Free();
      }
    }
    else {
      lVar6 = *param_1;
      alStack_88[4] = 0;
      alStack_88[5] = 0;
      puVar7 = (undefined8 *)FName::FName(auStackX_8,L"SwapPanels",1);
      (**(code **)(lVar6 + 0x4e8))(param_1,*puVar7,alStack_88 + 4);
      FUN_140f69d30(param_1[0xea]);
    }
    *(undefined1 *)((longlong)param_1 + 0x7ba) = 1;
    alStack_88[2] = 0;
    alStack_88[3] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(alStack_88 + 2,0);
    FGenericPlatformString::Memcpy(alStack_88[2],L"event",0xc);
    FUN_142088cf0(param_1[0xdb],alStack_88 + 2);
    if (alStack_88[2] != 0) {
      FMemory::Free();
    }
    if (param_1[0xdd] != 0) {
      cVar4 = *(char *)((longlong)param_1 + 0x7b9);
      cVar5 = (char)param_1[0xf7];
      puVar9 = auStack_30;
      pwVar12 = L"ActiveText";
      pwVar11 = L"GFxLeaguesMenu";
      pwVar10 = L"[skillScreenGreen]ACTIVE[/skillScreenGreen]";
      if (cVar5 != cVar4) {
        pwVar12 = L"InactiveText";
        pwVar11 = L"GFxLeaguesMenu";
        pwVar10 = L"[red]INACTIVE[/red]";
        puVar9 = auStack_48;
      }
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (puVar9,pwVar10,pwVar11,pwVar12);
      (**(code **)(*(longlong *)param_1[0xdd] + 0x2b0))((longlong *)param_1[0xdd],uVar8,1,0);
      if ((((cVar5 != cVar4) + 1U & 2) != 0) && (plStack_40 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plStack_40 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar2 = (int *)((longlong)plStack_40 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_40 + 8))(plStack_40,1);
          }
        }
      }
      if ((cVar5 == cVar4) && (plStack_28 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plStack_28 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_28)(plStack_28);
          LOCK();
          piVar2 = (int *)((longlong)plStack_28 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_28 + 8))(plStack_28,1);
          }
        }
      }
    }
    alStack_88[6] = 0;
    alStack_88[7] = 0;
    FUN_142ed36d0(param_1,alStack_88 + 6,0);
    if ((param_1[0xd5] != 0) && (param_1[0xd6] != 0)) {
      FUN_142ecf920(param_1[0xd5],0);
      FUN_142ecf920(param_1[0xd6],0);
    }
  }
  FUN_140f94340(param_1,0);
  return;
}



// FUNCTION 140f78db0 FUN_140f78db0 body=716 status=ok
// SIG undefined FUN_140f78db0(void)

void FUN_140f78db0(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int *piVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined4 local_res8 [2];
  undefined1 local_138 [272];
  
  plVar4 = (longlong *)FUN_142eb65a0();
  plVar13 = (longlong *)0x0;
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_1413621e0();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140f78e0a;
  }
  plVar4 = plVar13;
LAB_140f78e0a:
  lVar5 = FUN_140f681d0();
  if (((*(longlong *)(param_1 + 0x9a0) != 0) && (lVar5 != 0)) &&
     (plVar14 = plVar13, *(longlong *)(lVar5 + 0x470) != 0)) {
    do {
      lVar6 = *(longlong *)(param_1 + 0x9a0);
      iVar12 = (int)plVar13;
      if (lVar6 != 0) {
        if ((iVar12 < 0) || (*(int *)(lVar6 + 0x188) <= iVar12)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) &&
           (plVar13 = *(longlong **)((longlong)plVar14 + *(longlong *)(lVar6 + 0x180)),
           plVar13 != (longlong *)0x0)) {
          lVar6 = (**(code **)(*plVar13 + 0x340))();
          lVar7 = FWeakObjectPtr::Get(lVar6 + 0xdc);
          lVar6 = *(longlong *)((longlong)plVar14 + lVar5 + 0x480);
          if (lVar7 != lVar6) {
            LOCK();
            *(undefined4 *)(param_1 + 3000) = 1;
            UNLOCK();
            uVar8 = (**(code **)(*(longlong *)(*(longlong *)(lVar5 + 0x470) + 0xd80) + 0x18))();
            FUN_1411e38c0(local_138,lVar6,uVar8);
            plVar13 = *(longlong **)
                       ((longlong)plVar14 + *(longlong *)(*(longlong *)(param_1 + 0x9a0) + 0x180));
            (**(code **)(*plVar13 + 0x330))(plVar13,local_138);
            plVar13 = *(longlong **)
                       ((longlong)plVar14 + *(longlong *)(*(longlong *)(param_1 + 0x9a0) + 0x180));
            if (plVar4 == plVar13) {
              uVar8 = (**(code **)(*plVar13 + 0x340))();
              FUN_140f950c0(param_1,uVar8);
            }
            FUN_140e9c360(local_138);
          }
        }
      }
      lVar6 = *(longlong *)(param_1 + 0x9a0);
      uVar2 = *(undefined4 *)(lVar5 + 0x47c);
      if (local_res8 != (undefined4 *)(lVar6 + 0x1b4)) {
        *(undefined4 *)(lVar6 + 0x1b4) = uVar2;
        *(undefined1 *)(lVar6 + 0x1b8) = 1;
      }
      piVar1 = (int *)(lVar6 + 0x1b0);
      if ((*(char *)(lVar6 + 0x1b8) == '\0') || (*(int *)(lVar6 + 0x1b4) == *piVar1)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      local_res8[0] = uVar2;
      if (bVar3) {
        if ((*(char *)(lVar6 + 0x1b8) == '\0') || (*(int *)(lVar6 + 0x1b4) == *piVar1)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          piVar11 = (int *)(lVar6 + 0x1b4);
          if (*(char *)(lVar6 + 0x1b8) == '\0') {
            piVar11 = piVar1;
          }
          *piVar1 = *piVar11;
        }
        if (*(char *)(lVar6 + 0x1b8) != '\0') {
          *(undefined1 *)(lVar6 + 0x1b8) = 0;
        }
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        lVar7 = *(longlong *)(DAT_146b33f38 + 0x90);
        if (lVar7 != 0) {
          lVar9 = FUN_1414d9130();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            puVar10 = (undefined8 *)FUN_1411e4840(lVar7);
            FUN_140f0abd0(*(undefined8 *)(lVar6 + 0x198),*puVar10,uVar2,0);
          }
        }
      }
      plVar13 = (longlong *)(ulonglong)(iVar12 + 1U);
      plVar14 = plVar14 + 1;
    } while (iVar12 + 1U < 4);
  }
  return;
}



// FUNCTION 140f79080 FUN_140f79080 body=53 status=ok
// SIG undefined FUN_140f79080(void)

void FUN_140f79080(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  if (((param_1 != 0) && (-1 < iVar1)) && (iVar1 < *(int *)(param_1 + 0x1080))) {
    FUN_140f8e2a0(param_1 + 0xa98,param_1,
                  *(undefined8 *)(*(longlong *)(param_1 + 0x1078) + (longlong)iVar1 * 8));
    return;
  }
  return;
}



// FUNCTION 140f790c0 FUN_140f790c0 body=358 status=ok
// SIG undefined FUN_140f790c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f790c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  FUN_142ecb050();
  FWeakObjectPtr::operator=(&local_e0,param_3);
  FWeakObjectPtr::operator=(&local_e8,param_2);
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c80;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_e8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_e4;
    *(undefined4 *)(puVar1 + 3) = local_e0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_dc;
  }
  local_d8[0] = &LAB_140f62db0;
  uVar2 = FUN_1420849a0(param_1,local_88,local_d8);
  FUN_14208c260(param_1,uVar2);
  if (local_48 != 0) {
    plVar3 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar3 = local_58;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    plVar3 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar3 = local_a8;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f79230 FUN_140f79230 body=237 status=ok
// SIG undefined FUN_140f79230(void)

void FUN_140f79230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FUN_142ecb050();
  FWeakObjectPtr::operator=(&local_88,param_3);
  FWeakObjectPtr::operator=(&local_res20,param_2);
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_48 = 0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x28,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b538;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined4 *)(puVar1 + 3) = local_res20;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_res24;
    *(undefined4 *)(puVar1 + 4) = local_88;
    *(undefined4 *)((longlong)puVar1 + 0x24) = local_84;
  }
  local_78[0] = &LAB_140f62a20;
  FUN_14204c280(local_78);
  return;
}



// FUNCTION 140f79320 FUN_140f79320 body=353 status=ok
// SIG undefined FUN_140f79320(void)

void FUN_140f79320(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 0x748) != 0) {
    FText::FText(local_58);
    cVar5 = FText::IsEmpty(local_58);
    if (cVar5 != '\0') {
      uVar6 = FUN_140ff71e0(*(undefined8 *)(param_1 + 0x748),local_40);
      FText::operator=(local_58,uVar6);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      cVar5 = FText::IsEmpty(local_58);
      if (cVar5 != '\0') {
        uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_28,&DAT_14461ebd8,L"GFxInWorldIconContainer",L"PetText");
        FText::operator=(local_58,uVar6);
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
    }
    FUN_141019060(*(undefined8 *)(param_1 + 0x748),local_58);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  return;
}



// FUNCTION 140f79490 thunk_FUN_140f8b4e0 body=5 status=ok
// SIG undefined thunk_FUN_140f8b4e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_140f8b4e0(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 *apuStack_68 [2];
  longlong alStack_58 [4];
  longlong *plStack_38;
  int iStack_28;
  ulonglong uStack_18;
  
  uStack_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FWeakObjectPtr::operator=(&uStack_78,param_1);
  plStack_38 = (longlong *)0x0;
  iStack_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,alStack_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = uStack_78;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_74;
  }
  apuStack_68[0] = &LAB_140f62d50;
  FUN_14208c260(param_1,apuStack_68);
  if (iStack_28 != 0) {
    plVar2 = alStack_58;
    if (plStack_38 != (longlong *)0x0) {
      plVar2 = plStack_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (plStack_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f794a0 FUN_140f794a0 body=44 status=ok
// SIG undefined FUN_140f794a0(void)

void FUN_140f794a0(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined1 *)(param_1 + 0x200) = 0;
  plVar1 = *(longlong **)(param_1 + 0x1d0);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140f794c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x278))(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 140f794d0 FUN_140f794d0 body=80 status=ok
// SIG undefined FUN_140f794d0(void)

void FUN_140f794d0(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined1 *)(param_1 + 0x200) = 1;
  plVar1 = *(longlong **)(param_1 + 0x1d0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x278))(plVar1,1);
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_142f0ead0(*(longlong *)(param_1 + 0x198),0);
    return;
  }
  return;
}



// FUNCTION 140f79520 thunk_FUN_140f8beb0 body=5 status=ok
// SIG undefined thunk_FUN_140f8beb0(void)

void thunk_FUN_140f8beb0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  void *pvVar11;
  void *pvVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  void *pvVar16;
  void *_Src;
  ulonglong uStack_d8;
  undefined8 uStack_d0;
  void *pvStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (((*(int *)(param_1 + 0x740) != 0) && (*(longlong **)(param_2 + 8) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar2 != '\0')) {
    uVar5 = 0;
    lVar15 = *(longlong *)(param_1 + 0x738);
    lStack_b8 = (longlong)*(int *)(param_1 + 0x740) * 0x38 + lVar15;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uVar14 = uVar5;
    if (lVar15 != lStack_b8) {
      do {
        if (((*(longlong **)(lVar15 + 8) == (longlong *)0x0) ||
            (cVar2 = (**(code **)(**(longlong **)(lVar15 + 8) + 0x20))(), cVar2 == '\0')) ||
           ((*(longlong **)(param_2 + 8) == (longlong *)0x0 ||
            (cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar2 == '\0')))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((((*(longlong **)(lVar15 + 8) == (longlong *)0x0) ||
             (cVar2 = (**(code **)(**(longlong **)(lVar15 + 8) + 0x20))(), cVar2 == '\0')) &&
            ((*(longlong **)(param_2 + 8) == (longlong *)0x0 ||
             (cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar2 == '\0')))) ||
           ((bVar1 && (cVar2 = (**(code **)**(undefined8 **)(param_2 + 8))(), cVar2 != '\0')))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          uStack_a8 = *(undefined8 *)(lVar15 + 8);
          lStack_a0 = *(longlong *)(lVar15 + 0x10);
          if (lStack_a0 != 0) {
            LOCK();
            *(int *)(lStack_a0 + 8) = *(int *)(lStack_a0 + 8) + 1;
            UNLOCK();
            uVar14 = uStack_d0 & 0xffffffff;
          }
          pvVar4 = (void *)0x0;
          iVar6 = 0;
          plVar10 = *(longlong **)(param_1 + 0x708);
          iStack_88 = *(int *)(lVar15 + 0x28);
          iStack_84 = *(int *)(lVar15 + 0x2c);
          iStack_80 = *(int *)(lVar15 + 0x30);
          iStack_7c = *(int *)(lVar15 + 0x34);
          ppuStack_b0 = &PTR_FUN_143f740c8;
          uStack_98 = 0;
          uStack_90 = 0;
          pvStack_c8 = (void *)0x0;
          pvVar12 = (void *)((longlong)*(int *)(param_1 + 0x710) & 0x1fffffffffffffff);
          if (plVar10 + *(int *)(param_1 + 0x710) < plVar10) {
            pvVar12 = pvVar4;
          }
          uStack_c0 = 0;
          pvVar11 = pvVar4;
          pvVar16 = pvVar4;
          _Src = pvVar4;
          if (pvVar12 != (void *)0x0) {
            do {
              lVar3 = *plVar10;
              if ((lVar3 != 0) &&
                 (((*(int *)(lVar3 + 0x1d0) == iStack_84 && *(int *)(lVar3 + 0x1d4) == iStack_80) &&
                  *(int *)(lVar3 + 0x1d8) == iStack_7c) && iStack_88 == *(int *)(lVar3 + 0x1cc))) {
                iVar6 = (int)pvVar4;
                uVar7 = iVar6 + 1;
                uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar7);
                if ((int)pvVar11 < (int)uVar7) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&pvStack_c8);
                  lVar3 = *plVar10;
                  pvVar11 = (void *)(uStack_c0 >> 0x20);
                  _Src = pvStack_c8;
                  uVar7 = (uint)uStack_c0;
                }
                pvVar4 = (void *)(ulonglong)uVar7;
                *(longlong *)((longlong)_Src + (longlong)iVar6 * 8) = lVar3;
              }
              iVar6 = (int)pvVar4;
              plVar10 = plVar10 + 1;
              pvVar16 = (void *)((longlong)pvVar16 + 1);
            } while (pvVar16 != pvVar12);
          }
          FUN_1404bf980(&ppuStack_b0);
          uVar5 = uStack_d8;
          if (iVar6 != 0) {
            iVar13 = (int)uVar14;
            if (uStack_d0._4_4_ < iVar6 + (int)uVar14) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(&uStack_d8);
              iVar13 = (int)uStack_d0;
            }
            uVar5 = uStack_d8;
            _guard_xfg_dispatch_icall_nop
                      ((void *)(uStack_d8 + (longlong)iVar13 * 8),_Src,(longlong)iVar6 << 3);
            uVar14 = (ulonglong)(uint)(iVar13 + iVar6);
            uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar13 + iVar6);
          }
          if (_Src != (void *)0x0) {
            FMemory::Free(_Src);
          }
        }
        lVar15 = lVar15 + 0x38;
      } while (lVar15 != lStack_b8);
      uVar8 = 0;
      if ((int)uVar14 != 0) {
        uVar14 = uVar5 + (longlong)(int)uVar14 * 8;
        uVar9 = (uVar14 - uVar5) + 7 >> 3;
        if (uVar14 < uVar5) {
          uVar9 = uVar8;
        }
        if (uVar9 != 0) {
          do {
            FUN_140f8bd80(param_1);
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar9);
        }
      }
    }
    uStack_70 = *(undefined8 *)(param_2 + 8);
    lStack_68 = *(longlong *)(param_2 + 0x10);
    if (lStack_68 != 0) {
      LOCK();
      *(int *)(lStack_68 + 8) = *(int *)(lStack_68 + 8) + 1;
      UNLOCK();
    }
    uStack_60 = 0;
    ppuStack_78 = &PTR_FUN_143f740c8;
    uStack_58 = 0;
    FUN_140f59b10((longlong *)(param_1 + 0x738),&ppuStack_78);
    FUN_1404bf980(&ppuStack_78);
    if (uStack_d8 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f79530 FUN_140f79530 body=296 status=ok
// SIG undefined FUN_140f79530(void)

void FUN_140f79530(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x1b8) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  lVar3 = FUN_141796df0();
  if (lVar3 != 0) {
    lVar4 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140f795ad;
  }
  lVar3 = 0;
LAB_140f795ad:
  *(longlong *)(param_1 + 0x1b0) = lVar3;
  if (lVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x198);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x1a8) <= iVar1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) &&
        (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar1 * 8), lVar3 != 0))
       && (*(longlong *)(lVar3 + 0x180) != 0)) {
      *(undefined8 *)(lVar3 + 0x1d0) = 0;
      local_28 = 0;
      local_18 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_48);
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[1] = param_1;
        *puVar5 = &PTR_FUN_143f77b70;
      }
      local_58[0] = &LAB_140f62d00;
      FUN_14208c5d0(*(undefined8 *)(param_1 + 0x20),local_58);
    }
  }
  return;
}



// FUNCTION 140f79660 FUN_140f79660 body=42 status=ok
// SIG undefined FUN_140f79660(void)

void FUN_140f79660(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xd50);
  if (lVar1 != 0) {
    if (param_2 == *(longlong *)(param_1 + 0xd60)) {
      FUN_142ebe7f0(lVar1,1,0);
      return;
    }
    if (param_2 == *(longlong *)(param_1 + 0xd68)) {
      FUN_142ebe7f0(lVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 140f79690 FUN_140f79690 body=118 status=ok
// SIG undefined FUN_140f79690(void)

void FUN_140f79690(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_2 + 8);
  lVar2 = *(longlong *)(param_1 + 0xd50);
  if (((lVar2 == 0) || (iVar1 < 0)) || (*(int *)(lVar2 + 0x3c0) <= iVar1)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 0x3b8) + (longlong)iVar1 * 8);
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x105c);
  if ((cVar3 != '\0') && (*(int *)(param_1 + 0x1058) != -1)) {
    cVar3 = FUN_140f62dd0(param_1);
    if (cVar3 != '\0') {
      FUN_140f69880(param_1,uVar4);
    }
  }
  return;
}



// FUNCTION 140f79710 FUN_140f79710 body=22 status=ok
// SIG undefined FUN_140f79710(void)

void FUN_140f79710(longlong param_1,longlong param_2)

{
  FUN_140f71940(param_1 + 0xc48,param_1,*(undefined4 *)(param_2 + 8));
  return;
}



// FUNCTION 140f79730 FUN_140f79730 body=114 status=ok
// SIG undefined FUN_140f79730(void)

void FUN_140f79730(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_1413621e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140f7977e;
  }
  param_2 = 0;
LAB_140f7977e:
  if ((*(longlong *)(param_1 + 0x170) != 0) && (param_2 != 0)) {
    FUN_140f93210(*(longlong *)(param_1 + 0x170),param_2);
  }
  return;
}



// FUNCTION 140f797b0 FUN_140f797b0 body=302 status=ok
// SIG undefined FUN_140f797b0(void)

void FUN_140f797b0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_18 [2];
  
  plVar5 = (longlong *)0x0;
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1413621e0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140f79805;
  }
  param_2 = plVar5;
LAB_140f79805:
  if ((*(longlong *)(param_1 + 0x170) != 0) && (param_2 != (longlong *)0x0)) {
    uVar4 = (**(code **)(*param_2 + 0x340))(param_2);
    FUN_140f950c0(*(undefined8 *)(param_1 + 0x170),uVar4);
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    if (param_2 == (longlong *)0x0) {
      iVar2 = -1;
    }
    else {
      iVar2 = (int)param_2[0x5b];
    }
    FString::PrintfImpl(local_18,L"Page%d",iVar2 / 2 + 1);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x178),local_18);
    plVar7 = *(longlong **)(param_1 + 0x180);
    plVar6 = (longlong *)((longlong)*(int *)(param_1 + 0x188) & 0x1fffffffffffffff);
    if (plVar7 + *(int *)(param_1 + 0x188) < plVar7) {
      plVar6 = plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      do {
        if ((longlong *)*plVar7 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar7 + 0x348))();
        }
        plVar7 = plVar7 + 1;
        plVar5 = (longlong *)((longlong)plVar5 + 1);
      } while (plVar5 != plVar6);
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f798e0 FUN_140f798e0 body=62 status=ok
// SIG undefined FUN_140f798e0(void)

void FUN_140f798e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x170);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x988) != 0)) {
    plVar2 = (longlong *)(*(longlong *)(lVar1 + 0x988) + 0x1b0);
    (**(code **)(*plVar2 + 0x20))(plVar2,0);
    LOCK();
    *(undefined4 *)(lVar1 + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140f79920 FUN_140f79920 body=249 status=ok
// SIG undefined FUN_140f79920(void)

void FUN_140f79920(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ecbc30();
  if ((char)param_1[0xbf] != '\0') {
    local_18 = 0;
    *(undefined1 *)(param_1 + 0x16e) = 1;
    *(undefined1 *)((longlong)param_1 + 0xb72) = 1;
    local_10 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"itemCard",0x12);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    lVar1 = FUN_140e96f30(param_1,&local_18,0,6,&local_28);
    param_1[0x57] = lVar1;
    plVar2 = local_28;
    for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
                    /* WARNING: Could not recover jumptable at 0x000140f79a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x5d0))(param_1);
    return;
  }
  return;
}



// FUNCTION 140f79a20 FUN_140f79a20 body=1573 status=ok
// SIG undefined FUN_140f79a20(void)

void FUN_140f79a20(longlong param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 local_res8;
  longlong local_res10;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined1 *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  FUN_142ecbc80();
  TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
            (param_1 + 0x68,&DAT_1469e9880);
  TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
            (param_1 + 0x68,&DAT_1469e9850);
  *(longlong *)(param_1 + 0xef8) = *(longlong *)(param_1 + 0x600);
  bVar6 = 0;
  if (*(longlong *)(param_1 + 0x600) != 0) {
    local_a8 = (longlong *)0x0;
    local_a0 = 0x1f;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    FGenericPlatformString::Memcpy(local_a8,L"itemCardWrapper.itemCardLoader",0x3e);
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    FUN_140e97ee0(*(undefined8 *)(param_1 + 0xef8),param_1 + 0xf00,&local_a8,0,6,&local_b8);
    plVar11 = local_b8;
    for (iVar12 = (int)local_b0; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0xf00) != 0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnItemCardReady",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res10,pwVar3 + 2,1);
      lVar9 = *(longlong *)(param_1 + 0xf00);
      FWeakObjectPtr::operator=(lVar9 + 0x198,param_1);
      *(longlong *)(lVar9 + 0x1a0) = local_res10;
      local_res8 = 0;
      if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(lVar9 + 0x198), lVar8 != 0)) {
        UObject::FindFunction(lVar8,*(undefined8 *)(lVar9 + 0x1a0));
      }
      lVar9 = *(longlong *)(param_1 + 0xf00);
      uVar1 = *(undefined8 *)(param_1 + 0x680);
      if (*(char *)(lVar9 + 0x1a8) == '\0') {
        *(undefined1 *)(lVar9 + 0x1a8) = 1;
        FUN_142ef5f70(lVar9,uVar1);
        lVar9 = *(longlong *)(param_1 + 0xf00);
      }
      FUN_142f10940(lVar9,1);
    }
    cVar5 = FUN_142ebe120(param_1);
    if ((cVar5 != '\0') && (cVar5 = FUN_142ebdd70(param_1), cVar5 == '\0')) {
      local_b8 = (longlong *)0x0;
      local_b0 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      FGenericPlatformString::Memcpy(local_b8,L"navAnim",0x10);
      local_a8 = (longlong *)0x0;
      local_a0 = 0;
      FUN_140e98b90(*(undefined8 *)(param_1 + 0xef8),param_1 + 0xf10,&local_b8,0,6,&local_a8);
      plVar11 = local_a8;
      for (iVar12 = (int)local_a0; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 2;
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free(local_a8);
      }
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    local_b8 = (longlong *)0x0;
    local_b0 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,L"navigation",0x16);
    local_a8 = (longlong *)0x0;
    local_a0 = 0;
    FUN_140f595b0(*(undefined8 *)(param_1 + 0xef8),param_1 + 0xf18,&local_b8,0,6,&local_a8);
    plVar11 = local_a8;
    for (iVar12 = (int)local_a0; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  local_b8 = (longlong *)0x0;
  local_b0 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,L"mouseDragArea",0x1c);
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  FUN_140ecf270(param_1,param_1 + 0xf08,&local_b8,0,6,&local_a8);
  plVar11 = local_a8;
  for (iVar12 = (int)local_a0; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_140f8f870(param_1,1);
  (**(code **)(*(longlong *)(param_1 + 0x6d0) + 8))((longlong *)(param_1 + 0x6d0),param_1);
  (**(code **)(*(longlong *)(param_1 + 0x760) + 8))((longlong *)(param_1 + 0x760),param_1);
  (**(code **)(*(longlong *)(param_1 + 0x880) + 8))((longlong *)(param_1 + 0x880),param_1);
  (**(code **)(*(longlong *)(param_1 + 0xa98) + 8))((longlong *)(param_1 + 0xa98),param_1);
  (**(code **)(*(longlong *)(param_1 + 0xc48) + 8))((longlong *)(param_1 + 0xc48),param_1);
  *(undefined1 *)(param_1 + 0xef0) = 1;
  *(longlong *)(param_1 + 0x10e0) = param_1;
  FUN_140f8c600(param_1 + 0x1090,1);
  if ((*(longlong **)(param_1 + 0x10e0) != (longlong *)0x0) &&
     (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x10e0) + 0x148))(), lVar9 != 0)) {
    *(undefined4 *)(param_1 + 0x1124) = *(undefined4 *)(lVar9 + 0x798);
    lVar9 = FUN_140e971d0(*(undefined8 *)(param_1 + 0x10e0));
    if ((lVar9 != 0) && (*(longlong **)(lVar9 + 0x528) != (longlong *)0x0)) {
      uVar13 = (**(code **)(**(longlong **)(lVar9 + 0x528) + 0x8b8))();
      *(undefined4 *)(param_1 + 0x1120) = uVar13;
    }
  }
  iVar12 = rand();
  if (0.5 < (float)iVar12 * 3.051851e-05) {
    bVar6 = 2;
  }
  *(byte *)(param_1 + 0x1138) = *(byte *)(param_1 + 0x1138) & 0xfd;
  *(byte *)(param_1 + 0x1138) = *(byte *)(param_1 + 0x1138) | bVar6;
  iVar12 = rand();
  *(undefined8 *)(param_1 + 0x112c) = *(undefined8 *)(param_1 + 0x10d0);
  *(byte *)(param_1 + 0x1138) = *(byte *)(param_1 + 0x1138) & 0xfe;
  *(byte *)(param_1 + 0x1138) = *(byte *)(param_1 + 0x1138) | 0.5 < (float)iVar12 * 3.051851e-05;
  *(undefined4 *)(param_1 + 0x1134) = *(undefined4 *)(param_1 + 0x10d8);
  iVar12 = rand();
  *(float *)(param_1 + 0x1130) = ((float)iVar12 * 3.051851e-05 - 0.5) * *(float *)(param_1 + 0x1130)
  ;
  iVar12 = rand();
  *(float *)(param_1 + 0x112c) = ((float)iVar12 * 3.051851e-05 - 0.5) * *(float *)(param_1 + 0x112c)
  ;
  iVar12 = rand();
  *(float *)(param_1 + 0x1134) = ((float)iVar12 * 3.051851e-05 - 0.5) * *(float *)(param_1 + 0x1134)
  ;
  iVar12 = rand();
  *(float *)(param_1 + 0x1128) = (float)iVar12 * *(float *)(param_1 + 0x10dc) * 3.051851e-05;
  FWeakObjectPtr::operator=(&local_res8,param_1);
  uVar13 = (undefined4)local_res8;
  uVar4 = local_res8._4_4_;
  local_68 = 0;
  local_58 = 0;
  puVar10 = (undefined8 *)FUN_140438ef0(0x18,local_88);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_FUN_1444f8920;
    puVar10[1] = param_1;
    *(undefined4 *)(puVar10 + 2) = uVar13;
    *(undefined4 *)((longlong)puVar10 + 0x14) = uVar4;
  }
  local_98[0] = &LAB_140f62b00;
  FUN_14204c280(local_98);
  FUN_140f697a0(param_1);
  return;
}



// FUNCTION 140f7a050 FUN_140f7a050 body=5439 status=ok
// SIG undefined FUN_140f7a050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f7a050(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  char cVar3;
  DWORD DVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  longlong *plVar16;
  wchar_t *pwVar17;
  undefined1 auStack_428 [32];
  undefined8 local_408;
  longlong **local_400;
  undefined1 local_3f8;
  undefined8 local_3f0;
  undefined1 local_3e8;
  undefined1 local_3d8 [8];
  undefined8 local_3d0;
  int local_3c8;
  int local_3c4;
  longlong local_3c0;
  int local_3b8;
  int local_3b4;
  longlong local_3b0;
  int local_3a8;
  int local_3a4;
  longlong local_3a0;
  longlong *local_398;
  undefined8 local_390;
  longlong local_388;
  undefined8 local_380;
  longlong *local_378;
  undefined8 local_370;
  longlong local_368;
  undefined8 local_360;
  longlong *local_358;
  undefined8 local_350;
  longlong *local_348;
  undefined8 local_340;
  longlong local_338;
  undefined8 local_330;
  longlong *local_328;
  undefined8 local_320;
  longlong local_318;
  undefined8 local_310;
  longlong *local_308;
  undefined8 local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  longlong *local_2e8;
  undefined8 local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  undefined8 local_2c0;
  longlong *local_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  undefined8 local_290;
  longlong local_288;
  undefined8 local_280;
  longlong *local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  longlong *local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  wchar_t *local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined8 local_140;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_428;
  FUN_142ecbc80();
  FUN_14172a070(local_3d8,0);
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  pwVar17 = (wchar_t *)0x0;
  local_1e8 = 0;
  uVar6 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
  local_3e8 = 0;
  local_3f0 = 0;
  local_3f8 = 0;
  local_400 = (longlong **)0x0;
  local_408 = (longlong **)((ulonglong)local_408._4_4_ << 0x20);
  uVar6 = FUN_1417985e0(uVar6,param_1,0,0);
  *(undefined8 *)(param_1 + 0xba8) = uVar6;
  FUN_14172a400(local_3d8);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  pwVar12 = *(wchar_t **)(DAT_146b33f38 + 0x90);
  if (pwVar12 == (wchar_t *)0x0) {
LAB_140f7a13c:
    pwVar12 = pwVar17;
  }
  else {
    lVar7 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(pwVar12 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar12 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140f7a13c;
  }
  lVar7 = DAT_146872e78;
  if ((*(longlong *)(param_1 + 0xba8) != 0) && (pwVar12 != (wchar_t *)0x0)) {
    local_1b8 = *(undefined4 *)(pwVar12 + 0x5bc);
    uStack_1b4 = *(undefined4 *)(pwVar12 + 0x5be);
    uStack_1b0 = *(undefined4 *)(pwVar12 + 0x5c0);
    uStack_1ac = *(undefined4 *)(pwVar12 + 0x5c2);
    local_1a8 = *(undefined8 *)(pwVar12 + 0x5c4);
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar4 = GetCurrentThreadId();
      pwVar12 = (wchar_t *)0x1;
      if (DVar4 == DAT_1468c21c0) goto LAB_140f7a1c3;
    }
    else {
LAB_140f7a1c3:
      pwVar12 = pwVar17;
    }
    uStack_1b4 = *(undefined4 *)(lVar7 + (longlong)pwVar12 * 4);
    FUN_1411f9620(*(undefined8 *)(param_1 + 0xba8),&local_1b8);
    uVar5 = FUN_142eb7a90(param_1);
    *(undefined4 *)(*(longlong *)(param_1 + 0xba8) + 0xd8) = uVar5;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxItemTradingMenu::OnThumbnailLoaded",L"::");
    pwVar12 = pwVar17;
    while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar12 = pwVar2;
    }
    FName::FName(&local_1e0,pwVar12 + 2,1);
    lVar7 = *(longlong *)(param_1 + 0xba8);
    plVar16 = (longlong *)(lVar7 + 0xe8);
    FWeakObjectPtr::operator=(&local_3b8,0);
    local_3b0 = 0;
    FWeakObjectPtr::operator=(&local_3b8,param_1);
    local_3b0 = local_1e0;
    local_3d0 = 0;
    if ((local_1e0 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_3b8), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_3b0);
    }
    piVar13 = (int *)*plVar16;
    iVar15 = *(int *)(lVar7 + 0xf0);
    for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)iVar15 * 4; piVar14 = piVar14 + 4) {
      if (((*piVar14 == local_3b8) && (piVar14[1] == local_3b4)) ||
         ((cVar3 = FWeakObjectPtr::IsValid(piVar14), cVar3 == '\0' &&
          (cVar3 = FWeakObjectPtr::IsValid(&local_3b8), cVar3 == '\0')))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if ((bVar1) && (*(longlong *)(piVar14 + 2) == local_3b0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_140f7a34e;
        break;
      }
    }
    iVar15 = *(int *)(lVar7 + 0xf0);
    *(int *)(lVar7 + 0xf0) = iVar15 + 1;
    if (*(int *)(lVar7 + 0xf4) < iVar15 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar15);
    }
    piVar13 = (int *)((longlong)iVar15 * 0x10 + *plVar16);
    *piVar13 = local_3b8;
    piVar13[1] = local_3b4;
    *(longlong *)(piVar13 + 2) = local_3b0;
LAB_140f7a34e:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar16);
  }
  if (*(longlong *)(param_1 + 0x600) == 0) {
    return;
  }
  local_2c8 = 0;
  local_2c0 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c8,0);
  FGenericPlatformString::Memcpy(local_2c8,L"menuIntro",0x14);
  FUN_142088910(*(undefined8 *)(param_1 + 0x600),&local_2c8);
  if (local_2c8 != 0) {
    FMemory::Free();
  }
  local_2a8 = 0;
  local_2a0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
  local_408 = (longlong **)CONCAT62(local_408._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_2a8,0x10,"offeringPanelMC");
  local_400 = &local_2b8;
  puVar11 = (undefined8 *)(param_1 + 0x990);
  local_408 = (longlong **)CONCAT71(local_408._1_7_,6);
  local_2b8 = (longlong *)0x0;
  local_2b0 = 0;
  local_140 = 0;
  cVar3 = FUN_140f59240(*(undefined8 *)(param_1 + 0x600),puVar11,&local_2a8,0);
  plVar16 = local_2b8;
  for (iVar15 = (int)local_2b0; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar16 != 0) {
      FMemory::Free();
    }
    plVar16 = plVar16 + 2;
  }
  if (local_2b8 != (longlong *)0x0) {
    FMemory::Free(local_2b8);
  }
  if (local_2a8 != 0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    FUN_140f8f0e0(*puVar11,param_1);
    local_288 = 0;
    local_280 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
    FGenericPlatformString::Memcpy(local_288,&DAT_144622a00,0x2a);
    local_408 = &local_298;
    local_298 = (longlong *)0x0;
    local_290 = 0;
    local_178 = 0;
    plVar10 = (longlong *)FUN_140ecc7d0(*puVar11,&local_288,0,6);
    plVar16 = local_298;
    for (iVar15 = (int)local_290; iVar15 != 0; iVar15 = iVar15 + -1) {
      if (*plVar16 != 0) {
        FMemory::Free();
      }
      plVar16 = plVar16 + 2;
    }
    if (local_298 != (longlong *)0x0) {
      FMemory::Free(local_298);
    }
    if (local_288 != 0) {
      FMemory::Free();
    }
    if (plVar10 != (longlong *)0x0) {
      lVar7 = *plVar10;
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_138,L"Offering",L"GFxItemTradingMenu",L"OfferingPanelHeader");
      (**(code **)(lVar7 + 0x2b0))(plVar10,uVar6,1,0);
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_130 + 1;
        lVar7 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar13 = (int *)((longlong)local_130 + 0xc);
          iVar15 = *piVar13;
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
    }
  }
  local_268 = 0;
  local_260 = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
  local_408 = (longlong **)CONCAT62(local_408._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_268,0x17,"offeringPanelUnfocused");
  local_400 = &local_278;
  local_408 = (longlong **)CONCAT71(local_408._1_7_,6);
  local_278 = (longlong *)0x0;
  local_270 = 0;
  local_180 = 0;
  cVar3 = FUN_140f59240(*(undefined8 *)(param_1 + 0x600),(undefined8 *)(param_1 + 0x998),&local_268,
                        0);
  plVar16 = local_278;
  for (iVar15 = (int)local_270; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar16 != 0) {
      FMemory::Free();
    }
    plVar16 = plVar16 + 2;
  }
  if (local_278 != (longlong *)0x0) {
    FMemory::Free(local_278);
  }
  if (local_268 != 0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    FUN_140f8f0e0(*(undefined8 *)(param_1 + 0x998),param_1);
  }
  local_248 = 0;
  local_240 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
  local_408 = (longlong **)CONCAT62(local_408._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_248,0x11,"receivingPanelMC");
  local_400 = &local_258;
  puVar11 = (undefined8 *)(param_1 + 0x9a0);
  local_408 = (longlong **)CONCAT71(local_408._1_7_,6);
  local_258 = (longlong *)0x0;
  local_250 = 0;
  local_188 = 0;
  cVar3 = FUN_140f59240(*(undefined8 *)(param_1 + 0x600),puVar11,&local_248,0);
  plVar16 = local_258;
  for (iVar15 = (int)local_250; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar16 != 0) {
      FMemory::Free();
    }
    plVar16 = plVar16 + 2;
  }
  if (local_258 != (longlong *)0x0) {
    FMemory::Free(local_258);
  }
  if (local_248 != 0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    FUN_140f8f0e0(*puVar11,param_1);
    local_2d8 = 0;
    local_2d0 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d8,0);
    FGenericPlatformString::Memcpy(local_2d8,L"receivingPanelLabel",0x28);
    local_408 = &local_358;
    local_358 = (longlong *)0x0;
    local_350 = 0;
    local_190 = 0;
    plVar10 = (longlong *)FUN_140ecc7d0(*puVar11,&local_2d8,0,6);
    plVar16 = local_358;
    for (iVar15 = (int)local_350; iVar15 != 0; iVar15 = iVar15 + -1) {
      if (*plVar16 != 0) {
        FMemory::Free();
      }
      plVar16 = plVar16 + 2;
    }
    if (local_358 != (longlong *)0x0) {
      FMemory::Free(local_358);
    }
    if (local_2d8 != 0) {
      FMemory::Free();
    }
    if (plVar10 != (longlong *)0x0) {
      lVar7 = *plVar10;
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_120,L"Receiving",L"GFxItemTradingMenu",L"ReceivingPanelHeader");
      (**(code **)(lVar7 + 0x2b0))(plVar10,uVar6,1,0);
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_118 + 1;
        lVar7 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar13 = (int *)((longlong)local_118 + 0xc);
          iVar15 = *piVar13;
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*local_118 + 8))(local_118,1);
          }
        }
      }
    }
  }
  local_2f8 = 0;
  local_2f0 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f8,0);
  FGenericPlatformString::Memcpy(local_2f8,L"backpack.currency",0x24);
  local_400 = &local_2e8;
  puVar11 = (undefined8 *)(param_1 + 0xb68);
  local_408 = (longlong **)CONCAT71(local_408._1_7_,6);
  local_2e8 = (longlong *)0x0;
  local_2e0 = 0;
  local_198 = 0;
  cVar3 = FUN_140f57f20(*(undefined8 *)(param_1 + 0x600),puVar11,&local_2f8,0);
  plVar16 = local_2e8;
  for (iVar15 = (int)local_2e0; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar16 != 0) {
      FMemory::Free();
    }
    plVar16 = plVar16 + 2;
  }
  if (local_2e8 != (longlong *)0x0) {
    FMemory::Free(local_2e8);
  }
  if (local_2f8 != 0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    FUN_140f0b470(*puVar11,*(undefined4 *)(param_1 + 0x8b4));
    FUN_140f0a9a0(*puVar11,*(undefined4 *)(param_1 + 0x8b8));
    FUN_140f08510(*puVar11,*(undefined4 *)(param_1 + 0x8bc));
  }
  local_318 = 0;
  local_310 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318,0);
  FGenericPlatformString::Memcpy(local_318,L"countdownMC",0x18);
  local_400 = &local_308;
  local_408 = (longlong **)CONCAT71(local_408._1_7_,6);
  local_308 = (longlong *)0x0;
  local_300 = 0;
  local_1a0 = 0;
  cVar3 = FUN_140e98b90(*(undefined8 *)(param_1 + 0x600),param_1 + 0x978,&local_318,0);
  plVar16 = local_308;
  for (iVar15 = (int)local_300; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar16 != 0) {
      FMemory::Free();
    }
    plVar16 = plVar16 + 2;
  }
  if (local_308 != (longlong *)0x0) {
    FMemory::Free(local_308);
  }
  if (local_318 != 0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    local_338 = 0;
    local_330 = 0x17;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_338,0);
    FGenericPlatformString::Memcpy(local_338,L"hintWrapper.cancelHint",0x2e);
    local_408 = (longlong **)CONCAT71(local_408._1_7_,6);
    local_328 = (longlong *)0x0;
    local_320 = 0;
    local_168 = 0;
    local_400 = &local_328;
    FUN_140e98630(*(undefined8 *)(param_1 + 0x978),param_1 + 0x980,&local_338,0);
    plVar16 = local_328;
    for (iVar15 = (int)local_320; iVar15 != 0; iVar15 = iVar15 + -1) {
      if (*plVar16 != 0) {
        FMemory::Free();
      }
      plVar16 = plVar16 + 2;
    }
    if (local_328 != (longlong *)0x0) {
      FMemory::Free(local_328);
    }
    if (local_338 != 0) {
      FMemory::Free();
    }
    lVar7 = *(longlong *)(param_1 + 0x980);
    local_1c0 = pwVar17;
    local_1c8 = lVar7;
    if (lVar7 != 0) {
      uVar6 = UBlendableInterface::GetPrivateStaticClass();
      local_1c0 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar6);
    }
    FUN_142ecff00(param_1,&local_1c8,DAT_146b3e2b8);
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar11 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[1] = param_1;
    *puVar11 = &PTR_FUN_143f77b70;
  }
  local_d8[0] = &LAB_140f62a60;
  uVar6 = FUN_1420849a0(param_1,local_88,local_d8);
  FUN_14208c940(param_1,uVar6);
  if (local_48 != 0) {
    plVar16 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar16 = local_58;
    }
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0x10))(plVar16,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    plVar16 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar16 = local_a8;
    }
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0x10))(plVar16,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  FWeakObjectPtr::operator=(param_1 + 0x8a4,*(undefined8 *)(param_1 + 0x600));
  uVar6 = FUN_140e971d0(param_1);
  FWeakObjectPtr::operator=(param_1 + 0x894,uVar6);
  FWeakObjectPtr::operator=(param_1 + 0x89c,param_1);
  plVar16 = (longlong *)(param_1 + 0x850);
  if ((wchar_t *)*plVar16 != L"GridItem") {
    *(undefined4 *)(param_1 + 0x858) = 0;
    pwVar12 = pwVar17;
    if (*(int *)(param_1 + 0x85c) != 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar16,9);
      pwVar12 = (wchar_t *)(ulonglong)*(uint *)(param_1 + 0x858);
    }
    iVar15 = (int)pwVar12 + 9;
    *(int *)(param_1 + 0x858) = iVar15;
    if (*(int *)(param_1 + 0x85c) < iVar15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar16);
    }
    builtin_wcsncpy((wchar_t *)*plVar16,L"GridItem",9);
  }
  plVar16 = (longlong *)(param_1 + 0x860);
  if ((wchar_t *)*plVar16 != L"GridItem") {
    *(undefined4 *)(param_1 + 0x868) = 0;
    pwVar12 = pwVar17;
    if (*(int *)(param_1 + 0x86c) != 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar16,9);
      pwVar12 = (wchar_t *)(ulonglong)*(uint *)(param_1 + 0x868);
    }
    iVar15 = (int)pwVar12 + 9;
    *(int *)(param_1 + 0x868) = iVar15;
    if (*(int *)(param_1 + 0x86c) < iVar15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar16);
    }
    builtin_wcsncpy((wchar_t *)*plVar16,L"GridItem",9);
  }
  *(undefined1 *)(param_1 + 0x808) = 2;
  lVar7 = DAT_146872e90;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    pwVar12 = (wchar_t *)0x1;
    if (DVar4 != DAT_1468c21c0) goto LAB_140f7ad49;
  }
  pwVar12 = pwVar17;
LAB_140f7ad49:
  plVar16 = (longlong *)(param_1 + 0x9a8);
  *(undefined4 *)(param_1 + 0x848) = *(undefined4 *)(lVar7 + (longlong)pwVar12 * 4);
  FUN_140eeb880(plVar16,param_1 + 0x798,0);
  pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxItemTradingMenu::OnBackpackGridItemSelected",L"::");
  pwVar12 = pwVar17;
  while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar12 = pwVar2;
  }
  FName::FName(&local_1d8,pwVar12 + 2,1);
  FWeakObjectPtr::operator=(&local_3a8,0);
  local_3a0 = 0;
  FWeakObjectPtr::operator=(&local_3a8,param_1);
  local_3a0 = local_1d8;
  local_3d0 = 0;
  if ((local_1d8 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_3a8), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_3a0);
  }
  piVar13 = (int *)*plVar16;
  iVar15 = *(int *)(param_1 + 0x9b0);
  for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)iVar15 * 4; piVar14 = piVar14 + 4) {
    if (((*piVar14 == local_3a8) && (piVar14[1] == local_3a4)) ||
       ((cVar3 = FWeakObjectPtr::IsValid(piVar14), cVar3 == '\0' &&
        (cVar3 = FWeakObjectPtr::IsValid(&local_3a8), cVar3 == '\0')))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (*(longlong *)(piVar14 + 2) == local_3a0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_140f7aeb5;
      break;
    }
  }
  iVar15 = *(int *)(param_1 + 0x9b0);
  *(int *)(param_1 + 0x9b0) = iVar15 + 1;
  if (*(int *)(param_1 + 0x9b4) < iVar15 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar15);
  }
  piVar13 = (int *)((longlong)iVar15 * 0x10 + *plVar16);
  *piVar13 = local_3a8;
  piVar13[1] = local_3a4;
  *(longlong *)(piVar13 + 2) = local_3a0;
LAB_140f7aeb5:
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar16);
  pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxItemTradingMenu::OnBackpackGridItemClicked",L"::");
  while (pwVar8 = pwVar12, pwVar8 != (wchar_t *)0x0) {
    pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
    pwVar17 = pwVar8;
  }
  FName::FName(&local_1d0,pwVar17 + 2,1);
  plVar16 = (longlong *)(param_1 + 0x9b8);
  FWeakObjectPtr::operator=(&local_3c8,0);
  local_3c0 = 0;
  FWeakObjectPtr::operator=(&local_3c8,param_1);
  local_3c0 = local_1d0;
  local_3d0 = 0;
  if ((local_1d0 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_3c8), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_3c0);
  }
  piVar13 = (int *)*plVar16;
  iVar15 = *(int *)(param_1 + 0x9c0);
  piVar14 = piVar13;
  do {
    if (piVar14 == piVar13 + (longlong)iVar15 * 4) {
LAB_140f7afe1:
      iVar15 = *(int *)(param_1 + 0x9c0);
      *(int *)(param_1 + 0x9c0) = iVar15 + 1;
      if (*(int *)(param_1 + 0x9c4) < iVar15 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar15);
      }
      piVar13 = (int *)((longlong)iVar15 * 0x10 + *plVar16);
      *piVar13 = local_3c8;
      piVar13[1] = local_3c4;
      *(longlong *)(piVar13 + 2) = local_3c0;
LAB_140f7b01c:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar16);
      lVar7 = *(longlong *)(param_1 + 0xb18);
      if (lVar7 != 0) {
        *(undefined1 *)(lVar7 + 0x242) = 1;
        *(undefined8 *)(lVar7 + 0x244) = *(undefined8 *)(param_1 + 0x968);
        *(undefined4 *)(lVar7 + 0x1ec) = *(undefined4 *)(param_1 + 0x970);
        *(undefined4 *)(lVar7 + 0x1e8) = *(undefined4 *)(param_1 + 0x974);
        local_238 = 0;
        local_230 = 0x23;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,0);
        FGenericPlatformString::Memcpy(local_238,L"backpack.backpackHeader.headerText",0x46);
        local_400 = &local_348;
        local_408 = (longlong **)CONCAT71(local_408._1_7_,6);
        local_348 = (longlong *)0x0;
        local_340 = 0;
        local_3d0 = 0;
        cVar3 = FUN_140e99270(*(undefined8 *)(param_1 + 0x600),param_1 + 0xb40,&local_238,0);
        plVar16 = local_348;
        for (iVar15 = (int)local_340; iVar15 != 0; iVar15 = iVar15 + -1) {
          if (*plVar16 != 0) {
            FMemory::Free();
          }
          plVar16 = plVar16 + 2;
        }
        if (local_348 != (longlong *)0x0) {
          FMemory::Free(local_348);
        }
        if (local_238 != 0) {
          FMemory::Free();
        }
        if (cVar3 != '\0') {
          lVar7 = **(longlong **)(param_1 + 0xb40);
          uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_108,L"INVENTORY",L"GFxItemTradingMenu",L"InventoryText");
          (**(code **)(lVar7 + 0x2b0))(*(undefined8 *)(param_1 + 0xb40),uVar6,1,0);
          if (local_100 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_100 + 1;
            lVar7 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_100)(local_100);
              LOCK();
              piVar13 = (int *)((longlong)local_100 + 0xc);
              iVar15 = *piVar13;
              *piVar13 = *piVar13 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*local_100 + 8))(local_100,1);
              }
            }
          }
        }
        local_218 = 0;
        local_210 = 0x23;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
        FGenericPlatformString::Memcpy(local_218,L"backpack.backpackHeader.filterText",0x46);
        local_400 = &local_228;
        local_408 = (longlong **)CONCAT71(local_408._1_7_,6);
        local_228 = (longlong *)0x0;
        local_220 = 0;
        local_170 = 0;
        cVar3 = FUN_140e99270(*(undefined8 *)(param_1 + 0x600),param_1 + 0xb48,&local_218,0);
        plVar16 = local_228;
        for (iVar15 = (int)local_220; iVar15 != 0; iVar15 = iVar15 + -1) {
          if (*plVar16 != 0) {
            FMemory::Free();
          }
          plVar16 = plVar16 + 2;
        }
        if (local_228 != (longlong *)0x0) {
          FMemory::Free(local_228);
        }
        if (local_218 != 0) {
          FMemory::Free();
        }
        if (cVar3 != '\0') {
          lVar7 = **(longlong **)(param_1 + 0xb48);
          uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_f0,L"All Items",L"GFxItemTradingMenu",L"AllItemsFilter");
          (**(code **)(lVar7 + 0x2b0))(*(undefined8 *)(param_1 + 0xb48),uVar6,1,0);
          if (local_e8 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_e8 + 1;
            lVar7 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_e8)(local_e8);
              LOCK();
              piVar13 = (int *)((longlong)local_e8 + 0xc);
              iVar15 = *piVar13;
              *piVar13 = *piVar13 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*local_e8 + 8))(local_e8,1);
              }
            }
          }
        }
        local_1f8 = 0;
        local_1f0 = 0x21;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
        FGenericPlatformString::Memcpy(local_1f8,L"backpack.backpackHeader.sortText",0x42);
        local_400 = &local_208;
        local_408 = (longlong **)CONCAT71(local_408._1_7_,6);
        local_208 = (longlong *)0x0;
        local_200 = 0;
        FUN_140e99270(*(undefined8 *)(param_1 + 0x600),param_1 + 0xb50,&local_1f8,0);
        plVar16 = local_208;
        for (iVar15 = (int)local_200; iVar15 != 0; iVar15 = iVar15 + -1) {
          if (*plVar16 != 0) {
            FMemory::Free();
          }
          plVar16 = plVar16 + 2;
        }
        if (local_208 != (longlong *)0x0) {
          FMemory::Free(local_208);
        }
        if (local_1f8 != 0) {
          FMemory::Free();
        }
        local_388 = 0;
        local_380 = 0x2e;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_388,0);
        FGenericPlatformString::Memcpy
                  (local_388,L"backpack.backpackHeader.backpackPrevHint.hint",0x5c);
        local_400 = &local_398;
        local_408 = (longlong **)CONCAT71(local_408._1_7_,6);
        local_398 = (longlong *)0x0;
        local_390 = 0;
        cVar3 = FUN_140e98630(*(undefined8 *)(param_1 + 0x600),(undefined8 *)(param_1 + 0xb58),
                              &local_388,0);
        plVar16 = local_398;
        for (iVar15 = (int)local_390; iVar15 != 0; iVar15 = iVar15 + -1) {
          if (*plVar16 != 0) {
            FMemory::Free();
          }
          plVar16 = plVar16 + 2;
        }
        if (local_398 != (longlong *)0x0) {
          FMemory::Free(local_398);
        }
        if (local_388 != 0) {
          FMemory::Free();
        }
        if (cVar3 != '\0') {
          TScriptInterface<IBlendableInterface>::
          TScriptInterface<IBlendableInterface><UMaterialInterface>
                    (local_160,*(undefined8 *)(param_1 + 0xb58));
          FUN_142ecff00(param_1,local_160,DAT_146872bd0);
        }
        local_368 = 0;
        local_360 = 0x2e;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,0);
        FGenericPlatformString::Memcpy
                  (local_368,L"backpack.backpackHeader.backpackNextHint.hint",0x5c);
        local_400 = &local_378;
        local_408 = (longlong **)CONCAT71(local_408._1_7_,6);
        local_378 = (longlong *)0x0;
        local_370 = 0;
        cVar3 = FUN_140e98630(*(undefined8 *)(param_1 + 0x600),param_1 + 0xb60,&local_368,0);
        plVar16 = local_378;
        for (iVar15 = (int)local_370; iVar15 != 0; iVar15 = iVar15 + -1) {
          if (*plVar16 != 0) {
            FMemory::Free();
          }
          plVar16 = plVar16 + 2;
        }
        if (local_378 != (longlong *)0x0) {
          FMemory::Free(local_378);
        }
        if (local_368 != 0) {
          FMemory::Free();
        }
        if (cVar3 != '\0') {
          TScriptInterface<IBlendableInterface>::
          TScriptInterface<IBlendableInterface><UMaterialInterface>
                    (local_150,*(undefined8 *)(param_1 + 0xb60));
          FUN_142ecff00(param_1,local_150,DAT_146872bd8);
        }
      }
      return;
    }
    if (((*piVar14 == local_3c8) && (piVar14[1] == local_3c4)) ||
       ((cVar3 = FWeakObjectPtr::IsValid(piVar14), cVar3 == '\0' &&
        (cVar3 = FWeakObjectPtr::IsValid(&local_3c8), cVar3 == '\0')))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (*(longlong *)(piVar14 + 2) == local_3c0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_140f7b01c;
      goto LAB_140f7afe1;
    }
    piVar14 = piVar14 + 4;
  } while( true );
}



// FUNCTION 140f7b590 FUN_140f7b590 body=5596 status=ok
// SIG undefined FUN_140f7b590(void)

void FUN_140f7b590(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined1 *puVar10;
  char *pcVar11;
  char cVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  int iVar15;
  double dVar16;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong local_res18;
  longlong local_res20;
  longlong local_468;
  undefined8 local_460;
  longlong *local_458;
  undefined8 local_450;
  longlong local_448;
  undefined8 local_440;
  longlong *local_438;
  undefined8 local_430;
  longlong local_428;
  undefined8 local_420;
  longlong *local_418;
  undefined8 local_410;
  longlong local_408;
  undefined8 local_400;
  longlong *local_3f8;
  undefined8 local_3f0;
  longlong local_3e8;
  undefined8 local_3e0;
  longlong *local_3d8;
  undefined8 local_3d0;
  longlong *local_3c8;
  undefined8 local_3c0;
  longlong local_3b8;
  undefined8 local_3b0;
  longlong *local_3a8;
  undefined8 local_3a0;
  longlong local_398;
  undefined8 local_390;
  longlong *local_388;
  undefined8 local_380;
  longlong local_378;
  undefined8 local_370;
  longlong *local_368;
  undefined8 local_360;
  longlong local_358;
  undefined8 local_350;
  longlong *local_348;
  undefined8 local_340;
  longlong local_338;
  undefined8 local_330;
  longlong *local_328;
  undefined8 local_320;
  longlong *local_318;
  undefined8 local_310;
  longlong local_308;
  undefined8 local_300;
  longlong *local_2f8;
  undefined8 local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  longlong *local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  undefined8 local_2c0;
  longlong *local_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  undefined8 local_290;
  longlong local_288;
  undefined8 local_280;
  longlong *local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong local_188;
  wchar_t *local_180;
  longlong local_178;
  wchar_t *local_170;
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  
  thunk_FUN_142ecbc80();
  *(undefined1 *)((longlong)param_1 + 0x7ba) = 1;
  FWeakObjectPtr::operator=(local_168,0);
  FWeakObjectPtr::operator=(local_160,0);
  FWeakObjectPtr::operator=(local_158,0);
  FWeakObjectPtr::operator=(local_150,0);
  pwVar14 = (wchar_t *)0x0;
  local_300 = 0xc;
  local_308 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_308,0);
  FGenericPlatformString::Memcpy(local_308,L"eventButton",0x18);
  local_318 = (longlong *)0x0;
  local_310 = 0;
  local_148 = 0;
  lVar4 = FUN_140f57340(param_1,&local_308,0,6,&local_318);
  param_1[0xd5] = lVar4;
  plVar13 = local_318;
  for (iVar15 = (int)local_310; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_318 != (longlong *)0x0) {
    FMemory::Free(local_318);
  }
  if (local_308 != 0) {
    FMemory::Free();
  }
  if (param_1[0xd5] != 0) {
    *(undefined1 *)(param_1[0xd5] + 0x2c8) = 1;
    lVar4 = param_1[0xd5];
    local_180 = pwVar14;
    local_188 = lVar4;
    if (lVar4 != 0) {
      uVar5 = UBlendableInterface::GetPrivateStaticClass();
      local_180 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
    }
    FUN_142ecfd10(param_1,&local_188,local_168);
    *(undefined1 *)(param_1[0xd5] + 0x198) = 2;
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxLeaguesMenu::OnOverviewBigButtonClicked",L"::");
    pwVar8 = pwVar14;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar8 = pwVar3;
    }
    FName::FName(&local_res18,pwVar8 + 2,1);
    lVar4 = param_1[0xd5];
    FWeakObjectPtr::operator=(lVar4 + 0x1b0,param_1);
    *(longlong *)(lVar4 + 0x1b8) = local_res18;
    local_res8 = 0;
    if ((local_res18 != 0) && (lVar7 = FWeakObjectPtr::Get(lVar4 + 0x1b0), lVar7 != 0)) {
      UObject::FindFunction(lVar7,*(undefined8 *)(lVar4 + 0x1b8));
    }
  }
  local_2e8 = 0;
  local_2e0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e8,0);
  FGenericPlatformString::Memcpy(local_2e8,L"challengeButton",0x20);
  local_2f8 = (longlong *)0x0;
  local_2f0 = 0;
  local_140 = 0;
  lVar4 = FUN_140f57340(param_1,&local_2e8,0,6,&local_2f8);
  param_1[0xd6] = lVar4;
  plVar13 = local_2f8;
  for (iVar15 = (int)local_2f0; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_2f8 != (longlong *)0x0) {
    FMemory::Free(local_2f8);
  }
  if (local_2e8 != 0) {
    FMemory::Free();
  }
  if (param_1[0xd6] != 0) {
    *(undefined1 *)(param_1[0xd6] + 0x2c8) = 2;
    lVar4 = param_1[0xd6];
    local_170 = pwVar14;
    local_178 = lVar4;
    if (lVar4 != 0) {
      uVar5 = UBlendableInterface::GetPrivateStaticClass();
      local_170 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
    }
    FUN_142ecfd10(param_1,&local_178,local_168);
    *(undefined1 *)(param_1[0xd6] + 0x198) = 2;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxLeaguesMenu::OnChallengesBigButtonClicked",L"::");
    while (pwVar6 = pwVar8, pwVar6 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
      pwVar14 = pwVar6;
    }
    FName::FName(&local_res20,pwVar14 + 2,1);
    lVar4 = param_1[0xd6];
    FWeakObjectPtr::operator=(lVar4 + 0x1b0,param_1);
    *(longlong *)(lVar4 + 0x1b8) = local_res20;
    local_res8 = 0;
    if ((local_res20 != 0) && (lVar7 = FWeakObjectPtr::Get(lVar4 + 0x1b0), lVar7 != 0)) {
      UObject::FindFunction(lVar7,*(undefined8 *)(lVar4 + 0x1b8));
    }
    local_2c8 = 0;
    local_2c0 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c8,0);
    FGenericPlatformString::Memcpy(local_2c8,L"nameText",0x12);
    local_2d8 = (longlong *)0x0;
    local_2d0 = 0;
    local_138 = 0;
    lVar4 = FUN_140ecc7d0(param_1[0xd6],&local_2c8,0,6,&local_2d8);
    param_1[0xd7] = lVar4;
    plVar13 = local_2d8;
    for (iVar15 = (int)local_2d0; iVar15 != 0; iVar15 = iVar15 + -1) {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 2;
    }
    if (local_2d8 != (longlong *)0x0) {
      FMemory::Free(local_2d8);
    }
    if (local_2c8 != 0) {
      FMemory::Free();
    }
    if ((longlong *)param_1[0xd7] != (longlong *)0x0) {
      lVar4 = *(longlong *)param_1[0xd7];
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_a0,L"CHALLENGES",L"GFxLeaguesMenu",L"ChallengesText");
      (**(code **)(lVar4 + 0x2b0))(param_1[0xd7],uVar5,1,0);
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_98 + 1;
        lVar4 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar1 = (int *)((longlong)local_98 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
      }
    }
    local_2a8 = 0;
    local_2a0 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
    FGenericPlatformString::Memcpy(local_2a8,L"detailsText",0x18);
    local_2b8 = (longlong *)0x0;
    local_2b0 = 0;
    local_130 = 0;
    lVar4 = FUN_140ecc7d0(param_1[0xd6],&local_2a8,0,6,&local_2b8);
    param_1[0xd8] = lVar4;
    plVar13 = local_2b8;
    for (iVar15 = (int)local_2b0; iVar15 != 0; iVar15 = iVar15 + -1) {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 2;
    }
    if (local_2b8 != (longlong *)0x0) {
      FMemory::Free(local_2b8);
    }
    if (local_2a8 != 0) {
      FMemory::Free();
    }
  }
  local_288 = 0;
  local_280 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
  FGenericPlatformString::Memcpy(local_288,L"leftArrow",0x14);
  local_298 = (longlong *)0x0;
  local_290 = 0;
  local_128 = 0;
  lVar4 = FUN_140f139f0(param_1,&local_288,0,6,&local_298);
  param_1[0xd9] = lVar4;
  plVar13 = local_298;
  for (iVar15 = (int)local_290; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_298 != (longlong *)0x0) {
    FMemory::Free(local_298);
  }
  if (local_288 != 0) {
    FMemory::Free();
  }
  lVar4 = param_1[0xd9];
  if (lVar4 != 0) {
    local_1a0 = 0;
    local_1a8 = lVar4;
    uVar5 = UBlendableInterface::GetPrivateStaticClass();
    local_1a0 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
    FUN_142ecff00(param_1,&local_1a8,DAT_146872bd8);
  }
  local_268 = 0;
  local_260 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
  FGenericPlatformString::Memcpy(local_268,L"rightArrow",0x16);
  local_278 = (longlong *)0x0;
  local_270 = 0;
  local_120 = 0;
  lVar4 = FUN_140f139f0(param_1,&local_268,0,6,&local_278);
  param_1[0xda] = lVar4;
  plVar13 = local_278;
  for (iVar15 = (int)local_270; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_278 != (longlong *)0x0) {
    FMemory::Free(local_278);
  }
  if (local_268 != 0) {
    FMemory::Free();
  }
  lVar4 = param_1[0xda];
  if (lVar4 != 0) {
    local_190 = 0;
    local_198 = lVar4;
    uVar5 = UBlendableInterface::GetPrivateStaticClass();
    local_190 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
    FUN_142ecff00(param_1,&local_198,DAT_146872bd0);
  }
  local_248 = 0;
  local_240 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
  FGenericPlatformString::Memcpy(local_248,L"mainPanel",0x14);
  local_258 = (longlong *)0x0;
  local_250 = 0;
  local_118 = 0;
  lVar4 = FUN_140e96f30(param_1,&local_248,0,6,&local_258);
  param_1[0xdb] = lVar4;
  plVar13 = local_258;
  for (iVar15 = (int)local_250; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_258 != (longlong *)0x0) {
    FMemory::Free(local_258);
  }
  if (local_248 != 0) {
    FMemory::Free();
  }
  local_228 = 0;
  local_220 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
  FGenericPlatformString::Memcpy(local_228,L"headerText",0x16);
  local_238 = (longlong *)0x0;
  local_230 = 0;
  local_110 = 0;
  lVar4 = FUN_140ac4770(param_1,&local_228,0,6,&local_238);
  param_1[0xdc] = lVar4;
  plVar13 = local_238;
  for (iVar15 = (int)local_230; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_238 != (longlong *)0x0) {
    FMemory::Free(local_238);
  }
  if (local_228 != 0) {
    FMemory::Free();
  }
  local_208 = 0;
  local_200 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
  FGenericPlatformString::Memcpy(local_208,L"subtitleTop",0x18);
  local_3d8 = (longlong *)0x0;
  local_3d0 = 0;
  local_108 = 0;
  lVar4 = FUN_140ac4770(param_1,&local_208,0,6,&local_3d8);
  param_1[0xdd] = lVar4;
  plVar13 = local_3d8;
  for (iVar15 = (int)local_3d0; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_3d8 != (longlong *)0x0) {
    FMemory::Free(local_3d8);
  }
  if (local_208 != 0) {
    FMemory::Free();
  }
  local_1e8 = 0;
  local_1e0 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
  FGenericPlatformString::Memcpy(local_1e8,L"eventDetailsText",0x22);
  local_1f8 = (longlong *)0x0;
  local_1f0 = 0;
  local_a8 = 0;
  lVar4 = FUN_140ac4770(param_1,&local_1e8,0,6,&local_1f8);
  param_1[0xde] = lVar4;
  plVar13 = local_1f8;
  for (iVar15 = (int)local_1f0; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_1f8 != (longlong *)0x0) {
    FMemory::Free(local_1f8);
  }
  if (local_1e8 != 0) {
    FMemory::Free();
  }
  local_1c8 = 0;
  local_1c0 = 0x1c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
  FGenericPlatformString::Memcpy(local_1c8,L"eventDetailsPanel.ScrollBar",0x38);
  local_1d8 = (longlong *)0x0;
  local_1d0 = 0;
  local_100 = 0;
  lVar4 = FUN_140f13f30(param_1,&local_1c8,0,6,&local_1d8);
  param_1[0xdf] = lVar4;
  plVar13 = local_1d8;
  for (iVar15 = (int)local_1d0; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_1d8 != (longlong *)0x0) {
    FMemory::Free(local_1d8);
  }
  if (local_1c8 != 0) {
    FMemory::Free();
  }
  local_468 = 0;
  local_460 = 0x1e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_468,0);
  FGenericPlatformString::Memcpy(local_468,L"eventDetailsPanel.detailsMask",0x3c);
  local_1b8 = (longlong *)0x0;
  local_1b0 = 0;
  local_f8 = 0;
  lVar4 = FUN_140e96f30(param_1,&local_468,0,6,&local_1b8);
  param_1[0xe0] = lVar4;
  plVar13 = local_1b8;
  for (iVar15 = (int)local_1b0; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_1b8 != (longlong *)0x0) {
    FMemory::Free(local_1b8);
  }
  if (local_468 != 0) {
    FMemory::Free();
  }
  if (((param_1[0xde] != 0) && (param_1[0xdf] != 0)) && (param_1[0xe0] != 0)) {
    FUN_142f118f0();
  }
  local_448 = 0;
  local_440 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_448,0);
  FGenericPlatformString::Memcpy(local_448,L"rewardBar",0x14);
  local_458 = (longlong *)0x0;
  local_450 = 0;
  local_f0 = 0;
  lVar4 = FUN_140e96f30(param_1,&local_448,0,6,&local_458);
  param_1[0xe1] = lVar4;
  plVar13 = local_458;
  for (iVar15 = (int)local_450; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_458 != (longlong *)0x0) {
    FMemory::Free(local_458);
  }
  if (local_448 != 0) {
    FMemory::Free();
  }
  local_428 = 0;
  local_420 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_428,0);
  FGenericPlatformString::Memcpy(local_428,L"chestContainer",0x1e);
  local_438 = (longlong *)0x0;
  local_430 = 0;
  local_e8 = 0;
  lVar4 = FUN_140e96f30(param_1,&local_428,0,6,&local_438);
  param_1[0xe2] = lVar4;
  plVar13 = local_438;
  for (iVar15 = (int)local_430; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_438 != (longlong *)0x0) {
    FMemory::Free(local_438);
  }
  if (local_428 != 0) {
    FMemory::Free();
  }
  if (param_1[0xe2] != 0) {
    dVar16 = (double)FUN_142eeea40();
    *(float *)(param_1 + 0xfa) = (float)dVar16;
  }
  local_408 = 0;
  local_400 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_408,0);
  FGenericPlatformString::Memcpy(local_408,L"subtitleMiddle",0x1e);
  local_418 = (longlong *)0x0;
  local_410 = 0;
  local_e0 = 0;
  lVar4 = FUN_140ac4770(param_1,&local_408,0,6,&local_418);
  param_1[0xe3] = lVar4;
  plVar13 = local_418;
  for (iVar15 = (int)local_410; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_418 != (longlong *)0x0) {
    FMemory::Free(local_418);
  }
  if (local_408 != 0) {
    FMemory::Free();
  }
  local_3e8 = 0;
  local_3e0 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3e8,0);
  FGenericPlatformString::Memcpy(local_3e8,L"challenges",0x16);
  local_3f8 = (longlong *)0x0;
  local_3f0 = 0;
  local_d8 = 0;
  lVar4 = FUN_140ecb410(param_1,&local_3e8,0,6,&local_3f8);
  param_1[0xe4] = lVar4;
  plVar13 = local_3f8;
  for (iVar15 = (int)local_3f0; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_3f8 != (longlong *)0x0) {
    FMemory::Free(local_3f8);
  }
  if (local_3e8 != 0) {
    FMemory::Free();
  }
  local_3b8 = 0;
  local_3b0 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3b8,0);
  FGenericPlatformString::Memcpy(local_3b8,L"challenges.ScrollBar",0x2a);
  local_3c8 = (longlong *)0x0;
  local_3c0 = 0;
  local_d0 = 0;
  lVar4 = FUN_140f13f30(param_1,&local_3b8,0,6,&local_3c8);
  param_1[0xe5] = lVar4;
  plVar13 = local_3c8;
  for (iVar15 = (int)local_3c0; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_3c8 != (longlong *)0x0) {
    FMemory::Free(local_3c8);
  }
  if (local_3b8 != 0) {
    FMemory::Free();
  }
  local_398 = 0;
  local_390 = 0x21;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_398,0);
  FGenericPlatformString::Memcpy(local_398,L"rewardFeedback.animCustoUnlocked",0x42);
  local_3a8 = (longlong *)0x0;
  local_3a0 = 0;
  local_c8 = 0;
  lVar4 = FUN_140e96f30(param_1,&local_398,0,6,&local_3a8);
  param_1[0xe6] = lVar4;
  plVar13 = local_3a8;
  for (iVar15 = (int)local_3a0; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_3a8 != (longlong *)0x0) {
    FMemory::Free(local_3a8);
  }
  if (local_398 != 0) {
    FMemory::Free();
  }
  if (param_1[0xe6] != 0) {
    local_378 = 0;
    local_370 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_378,0);
    FGenericPlatformString::Memcpy(local_378,L"titleMC",0x10);
    local_388 = (longlong *)0x0;
    local_380 = 0;
    local_c0 = 0;
    lVar4 = FUN_140ecc7d0(param_1[0xe6],&local_378,0,6,&local_388);
    param_1[0xe7] = lVar4;
    plVar13 = local_388;
    for (iVar15 = (int)local_380; iVar15 != 0; iVar15 = iVar15 + -1) {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 2;
    }
    if (local_388 != (longlong *)0x0) {
      FMemory::Free(local_388);
    }
    if (local_378 != 0) {
      FMemory::Free();
    }
    if ((longlong *)param_1[0xe7] != (longlong *)0x0) {
      lVar4 = *(longlong *)param_1[0xe7];
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_88,L"REWARD",L"GFxLeaguesMenu",L"RewardText");
      (**(code **)(lVar4 + 0x2b0))(param_1[0xe7],uVar5,1,0);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_80 + 1;
        lVar4 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
    }
    local_358 = 0;
    local_350 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,0);
    FGenericPlatformString::Memcpy(local_358,L"titleDsMC",0x14);
    local_368 = (longlong *)0x0;
    local_360 = 0;
    local_b8 = 0;
    lVar4 = FUN_140ecc7d0(param_1[0xe6],&local_358,0,6,&local_368);
    param_1[0xe8] = lVar4;
    plVar13 = local_368;
    for (iVar15 = (int)local_360; iVar15 != 0; iVar15 = iVar15 + -1) {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 2;
    }
    if (local_368 != (longlong *)0x0) {
      FMemory::Free(local_368);
    }
    if (local_358 != 0) {
      FMemory::Free();
    }
    if ((longlong *)param_1[0xe8] != (longlong *)0x0) {
      lVar4 = *(longlong *)param_1[0xe8];
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_70,L"REWARD",L"GFxLeaguesMenu",L"RewardText");
      (**(code **)(lVar4 + 0x2b0))(param_1[0xe8],uVar5,1,0);
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_68 + 1;
        lVar4 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
    }
    local_338 = 0;
    local_330 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_338,0);
    FGenericPlatformString::Memcpy(local_338,L"subtitleMC",0x16);
    local_348 = (longlong *)0x0;
    local_340 = 0;
    local_b0 = 0;
    lVar4 = FUN_140ecc7d0(param_1[0xe6],&local_338,0,6,&local_348);
    param_1[0xe9] = lVar4;
    plVar13 = local_348;
    for (iVar15 = (int)local_340; iVar15 != 0; iVar15 = iVar15 + -1) {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 2;
    }
    if (local_348 != (longlong *)0x0) {
      FMemory::Free(local_348);
    }
    if (local_338 != 0) {
      FMemory::Free();
    }
    if ((longlong *)param_1[0xe9] != (longlong *)0x0) {
      lVar4 = *(longlong *)param_1[0xe9];
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_58,L"Unlocked!",L"GFxLeaguesMenu",L"RewardUnlockedSubtitleText");
      (**(code **)(lVar4 + 0x2b0))(param_1[0xe9],uVar5,1,0);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_50 + 1;
        lVar4 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
  }
  local_218 = 0;
  local_210 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
  FGenericPlatformString::Memcpy(local_218,L"rightPanel",0x16);
  local_328 = (longlong *)0x0;
  local_320 = 0;
  lVar4 = FUN_140f575e0(param_1,&local_218,0,6,&local_328);
  param_1[0xea] = lVar4;
  plVar13 = local_328;
  for (iVar15 = (int)local_320; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_328 != (longlong *)0x0) {
    FMemory::Free(local_328);
  }
  if (local_218 != 0) {
    FMemory::Free();
  }
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar7 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (lVar7 != 0) {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar4 != 0)) {
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      puVar10 = (undefined1 *)FUN_140cb6000(&local_res8,uVar5);
      *(undefined1 *)((longlong)param_1 + 0x7b9) = *puVar10;
      param_1[0xeb] = *(longlong *)(lVar7 + 0xc98);
      pcVar11 = (char *)FUN_140cb6000(local_res10,lVar4);
      cVar12 = *pcVar11;
      if (cVar12 == '\0') {
        cVar12 = '\x01';
      }
      FUN_140f87860(param_1,cVar12);
    }
  }
  FUN_140f92cf0(param_1);
  FUN_142ecd4d0(param_1);
  return;
}



// FUNCTION 140f7cbb0 FUN_140f7cbb0 body=325 status=ok
// SIG undefined FUN_140f7cbb0(void)

void FUN_140f7cbb0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_142ed3950(*(longlong *)(param_1 + 0x88),0);
  }
  plVar9 = (longlong *)(param_1 + 0x110);
  plVar6 = (longlong *)*plVar9;
  uVar8 = (ulonglong)*(int *)(param_1 + 0x118);
  plVar5 = plVar6 + uVar8 * 2;
  if (plVar6 != plVar5) {
    do {
      if (*plVar6 != 0) {
        FUN_142833de0();
      }
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar5);
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x118);
  }
  iVar4 = *(int *)(param_1 + 0x11c);
  if (iVar4 < 0) {
    if ((int)uVar8 != 0) {
      plVar6 = (longlong *)(*plVar9 + 8);
      do {
        plVar5 = (longlong *)*plVar6;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar3 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
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
        plVar6 = plVar6 + 2;
        uVar7 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 != 0);
      iVar4 = *(int *)(param_1 + 0x11c);
    }
    *(undefined4 *)(param_1 + 0x118) = 0;
    if (iVar4 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar9,0);
    }
  }
  else {
    if ((int)uVar8 != 0) {
      plVar6 = (longlong *)(*plVar9 + 8);
      do {
        plVar5 = (longlong *)*plVar6;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar5 + 1;
          lVar3 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
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
        plVar6 = plVar6 + 2;
        uVar7 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 != 0);
    }
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  return;
}



// FUNCTION 140f7cd00 FUN_140f7cd00 body=54 status=ok
// SIG undefined FUN_140f7cd00(void)

void FUN_140f7cd00(undefined8 param_1,longlong param_2)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_2 != 0) {
    local_18 = 0;
    uStack_10 = 0;
    FUN_142ed36d0(param_2,&local_18,0);
    FUN_140f96430(param_2,0);
  }
  return;
}



// FUNCTION 140f7cd40 FUN_140f7cd40 body=108 status=ok
// SIG undefined FUN_140f7cd40(void)

void FUN_140f7cd40(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_2 != 0) {
    local_18 = 0;
    uStack_10 = 0;
    FUN_142ed36d0(param_2,&local_18,0);
    FUN_142ed1500(param_2);
    if (*(char *)(param_2 + 0x11e0) != '\0') {
      *(undefined1 *)(param_2 + 0x11e0) = 0;
      FWeakObjectPtr::operator=(&local_res10,0);
      *(undefined4 *)(param_2 + 0x11e4) = local_res10;
      *(undefined4 *)(param_2 + 0x11e8) = local_res14;
      FUN_140f89b20(param_2);
    }
  }
  return;
}



// FUNCTION 140f7cdb0 FUN_140f7cdb0 body=64 status=ok
// SIG undefined FUN_140f7cdb0(void)

void FUN_140f7cdb0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x40))();
  if (param_1[0x3f] != 0) {
    FUN_142ed3950(param_1[0x3f],1);
  }
                    /* WARNING: Could not recover jumptable at 0x000140f7cdec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  return;
}



// FUNCTION 140f7cdf0 FUN_140f7cdf0 body=96 status=ok
// SIG undefined FUN_140f7cdf0(void)

void FUN_140f7cdf0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  
  (**(code **)(*param_1 + 0x40))();
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xf00) != 0)) {
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0xf00) + 0x1b0);
    (**(code **)(*plVar1 + 0x18))(plVar1,0);
  }
  if (param_1[0x11] != 0) {
    FUN_142ed3950(param_1[0x11],1);
  }
                    /* WARNING: Could not recover jumptable at 0x000140f7ce4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  return;
}



// FUNCTION 140f7ce50 FUN_140f7ce50 body=64 status=ok
// SIG undefined FUN_140f7ce50(void)

void FUN_140f7ce50(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x40))();
  if (param_1[0x11] != 0) {
    FUN_142ed3950(param_1[0x11],1);
  }
                    /* WARNING: Could not recover jumptable at 0x000140f7ce8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  return;
}



// FUNCTION 140f7ce90 FUN_140f7ce90 body=156 status=ok
// SIG undefined FUN_140f7ce90(void)

void FUN_140f7ce90(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  (**(code **)(*param_1 + 0x40))();
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  if ((param_2 != 0) && (lVar1 = param_1[0x2b], lVar1 != 0)) {
    local_10 = 0;
    local_18 = lVar1;
    uVar3 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar3);
    FUN_142ed36d0(param_2,&local_18,0);
    plVar2 = (longlong *)param_1[0x2b];
    if (0 < (int)plVar2[0x50]) {
      (**(code **)(*plVar2 + 0x2b8))(plVar2,0,1,0);
    }
  }
  return;
}



// FUNCTION 140f7cf30 FUN_140f7cf30 body=374 status=ok
// SIG undefined FUN_140f7cf30(void)

void FUN_140f7cf30(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong local_18;
  ulonglong local_10;
  
  (**(code **)(*param_1 + 0x40))();
  if ((param_2 != 0) && (param_1[0x21] != 0)) {
    FUN_140f83210(param_1,param_2);
    lVar5 = param_1[0x21];
    uVar9 = 0;
    local_10 = uVar9;
    local_18 = lVar5;
    if (lVar5 != 0) {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar4);
    }
    FUN_142ed36d0(param_2,&local_18,0);
    cVar2 = FWeakObjectPtr::IsValid(param_2 + 0x105c);
    uVar8 = uVar9;
    if ((cVar2 != '\0') && (lVar5 = FWeakObjectPtr::Get(param_2 + 0x106c), lVar5 != 0)) {
      lVar6 = APlayArea::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      uVar8 = 0;
      if (bVar1) {
        uVar8 = *(ulonglong *)(lVar5 + 0x3f8);
      }
    }
    plVar7 = (longlong *)param_1[0x21];
    if (0 < (int)plVar7[0x50]) {
      uVar11 = uVar9;
      if (0 < (int)plVar7[0x78]) {
        do {
          if (*(ulonglong *)(uVar9 + plVar7[0x77]) == uVar8) {
            (**(code **)(*plVar7 + 0x2b8))(plVar7,uVar11,1,0);
          }
          uVar10 = (int)uVar11 + 1;
          uVar9 = uVar9 + 8;
          uVar11 = (ulonglong)uVar10;
        } while ((int)uVar10 < (int)plVar7[0x78]);
        plVar7 = (longlong *)param_1[0x21];
      }
      iVar3 = FUN_142eb7a00(plVar7);
      if (iVar3 == -1) {
        (**(code **)(*(longlong *)param_1[0x21] + 0x2b8))((longlong *)param_1[0x21],0,1,0);
      }
    }
  }
  return;
}



// FUNCTION 140f7d0b0 FUN_140f7d0b0 body=489 status=ok
// SIG undefined FUN_140f7d0b0(void)

void FUN_140f7d0b0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)(param_1 + 0x6a8) < 1) {
    return;
  }
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x6a0) + 8);
  while (*plVar3 != param_2) {
    iVar5 = iVar5 + 1;
    plVar3 = plVar3 + 7;
    if (*(int *)(param_1 + 0x6a8) <= iVar5) {
      return;
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x11b8);
  *(undefined8 *)(param_1 + 0x11b8) = 0;
  if ((iVar5 == *(int *)(param_1 + 0x11b0)) && (*(char *)(param_1 + 0x11c0) == '\0'))
  goto LAB_140f7d283;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
  }
  *(undefined1 *)(param_1 + 0x11c0) = 0;
  if ((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x6a8))) {
    *(int *)(param_1 + 0x11b0) = iVar5;
    if (*(longlong *)(param_1 + 0xef8) != 0) {
      FUN_142088cf0(*(longlong *)(param_1 + 0xef8),
                    (longlong)iVar5 * 0x38 + *(longlong *)(param_1 + 0x6a0) + 0x10);
    }
    if (*(longlong *)(param_1 + 0xf18) != 0) {
      FUN_142ed4720(*(longlong *)(param_1 + 0xf18),
                    (longlong)*(int *)(param_1 + 0x11b0) * 0x38 + *(longlong *)(param_1 + 0x6a0) + 8
                   );
    }
    if (((*(longlong *)(param_1 + 0xf10) != 0) && (cVar1 = FUN_142ebe120(param_1), cVar1 != '\0'))
       && (cVar1 = FUN_142ebdd70(param_1), cVar1 == '\0')) {
      (**(code **)(**(longlong **)(param_1 + 0xf10) + 0x278))(*(longlong **)(param_1 + 0xf10),1);
    }
  }
  if (*(char *)(param_1 + 0x11c0) == '\0') {
    iVar5 = *(int *)(param_1 + 0x11b0);
    if ((iVar5 < 0) || (*(int *)(param_1 + 0x6a8) <= iVar5)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined1 *)((longlong)iVar5 * 0x38 + *(longlong *)(param_1 + 0x6a0));
    }
  }
  else {
    uVar2 = 5;
  }
  switch(uVar2) {
  case 0:
    *(undefined8 *)(param_1 + 0x11b8) = 0;
    goto switchD_140f7d218_default;
  case 1:
    lVar4 = param_1 + 0x6d0;
    break;
  case 2:
    lVar4 = param_1 + 0x760;
    break;
  case 3:
    lVar4 = param_1 + 0x880;
    break;
  case 4:
    *(longlong *)(param_1 + 0x11b8) = param_1 + 0xa98;
    FUN_140f8c600(param_1 + 0x1090,0);
    goto switchD_140f7d218_default;
  case 5:
    lVar4 = param_1 + 0xc48;
    break;
  default:
    goto switchD_140f7d218_default;
  }
  *(longlong *)(param_1 + 0x11b8) = lVar4;
switchD_140f7d218_default:
  plVar3 = *(longlong **)(param_1 + 0x11b8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
  }
LAB_140f7d283:
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return;
}



// FUNCTION 140f7d2e0 FUN_140f7d2e0 body=116 status=ok
// SIG undefined FUN_140f7d2e0(void)

void FUN_140f7d2e0(longlong *param_1,float param_2)

{
  longlong *local_res8 [4];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (((char)param_1[0x3d] != '\0') && (*(char *)((longlong)param_1 + 0x1dd) != '\0')) {
    param_2 = *(float *)((longlong)param_1 + 0x1ec) - param_2;
    *(float *)((longlong)param_1 + 0x1ec) = param_2;
    if (param_2 <= 1e-08) {
      (**(code **)(*param_1 + 0x278))(param_1,0);
      local_res8[0] = param_1;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x2e,local_res8);
    }
  }
  return;
}



// FUNCTION 140f7d360 FUN_140f7d360 body=445 status=ok
// SIG undefined FUN_140f7d360(void)

void FUN_140f7d360(longlong param_1,float param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(longlong *)(param_1 + 0x198) == 0) {
    return;
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x1f0);
  if (cVar2 == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x200) != '\0') {
    *(float *)(param_1 + 0x1fc) = param_2 + *(float *)(param_1 + 0x1fc);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x1e0);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x1e0);
    cVar2 = (**(code **)(*plVar3 + 0x2a0))(plVar3);
    if (cVar2 != '\0') {
      fVar5 = *(float *)(param_1 + 0x204);
      goto LAB_140f7d419;
    }
  }
  fVar5 = 1.0;
LAB_140f7d419:
  if (*(float *)(param_1 + 0x1f8) <= 0.0) {
    fVar6 = 1.0;
  }
  else {
    fVar6 = *(float *)(param_1 + 0x1fc) / *(float *)(param_1 + 0x1f8);
  }
  if (*(char *)(param_1 + 0x200) == '\0') {
    fVar6 = *(float *)(param_1 + 0x208);
  }
  if (0.0 <= fVar6) {
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
  }
  else {
    fVar6 = 0.0;
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x1e0);
  if (cVar2 == '\0') {
    fVar4 = 0.0;
  }
  else {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x1e0);
    fVar4 = (float)FUN_1430774d0(uVar1);
  }
  fVar7 = 0.0;
  if ((0.0 <= fVar4) && (fVar7 = fVar4, 1.0 <= fVar4)) {
    fVar7 = 1.0;
  }
  fVar5 = (float)FMath::FInterpConstantTo
                           (*(undefined4 *)(param_1 + 0x1cc),(1.0 - fVar5) * fVar7 + fVar6 * fVar5,
                            param_2,0x40800000);
  if (0.0001 <= ABS(*(float *)(param_1 + 0x1cc) - fVar5)) {
    *(float *)(param_1 + 0x1cc) = fVar5;
    FUN_142f0ead0(*(undefined8 *)(param_1 + 0x198),fVar5);
  }
  return;
}



// FUNCTION 140f7d520 FUN_140f7d520 body=172 status=ok
// SIG undefined FUN_140f7d520(void)

void FUN_140f7d520(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    if (*(longlong *)(param_1 + 0x198) != 0) {
      FUN_142f0ead0(*(longlong *)(param_1 + 0x198),
                    *(undefined4 *)(*(longlong *)(param_1 + 0x1d8) + 0x218));
    }
    if ((*(longlong *)(param_1 + 0x1d0) != 0) && (cVar2 = FUN_142088620(), cVar2 == '\0')) {
      if ((*(byte *)(*(longlong *)(param_1 + 0x1d8) + 0x229) & 1) == 0) {
        return;
      }
      plVar1 = *(longlong **)(param_1 + 0x1d0);
      if (plVar1 == (longlong *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000140f7d592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x278))(plVar1,1);
      return;
    }
    if (((*(byte *)(*(longlong *)(param_1 + 0x1d8) + 0x229) & 1) == 0) &&
       (plVar1 = *(longlong **)(param_1 + 0x1d0), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140f7d5bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x278))(plVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 140f7d5d0 BeginDestroy body=27 status=ok
// SIG undefined BeginDestroy(void)

void UFlowChart::BeginDestroy(undefined8 param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_140f94d40(param_1);
  return;
}



// FUNCTION 140f7d5f0 FUN_140f7d5f0 body=381 status=ok
// SIG undefined FUN_140f7d5f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f7d5f0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_e8 [32];
  code *local_c8 [2];
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined4 local_88;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_142efe330();
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    FUN_1411fd550(*(longlong *)(param_1 + 0x3c8),param_2);
  }
  if (*(char *)(param_1 + 0x3d0) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x3d0) = 0;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  lVar3 = *(longlong *)(param_1 + 0x3c8);
  local_78 = (code *)&LAB_140f62be0;
  if (lVar3 == 0) goto LAB_140f7d70a;
  local_98 = 0;
  local_88 = 0;
  if (local_38 == 0) {
LAB_140f7d6f1:
    local_c8[0] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    plVar2 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar2 = local_48;
    }
    if (plVar2 == (longlong *)0x0) goto LAB_140f7d6f1;
    plVar2 = (longlong *)(**(code **)*plVar2)(plVar2,local_b8);
    (**(code **)(*plVar2 + 8))(plVar2);
    lVar3 = *(longlong *)(param_1 + 0x3c8);
    local_c8[0] = local_78;
  }
  FUN_1411f67c0(lVar3,local_c8);
LAB_140f7d70a:
  if (local_38 != 0) {
    plVar2 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar2 = local_48;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f7d770 FUN_140f7d770 body=972 status=ok
// SIG undefined FUN_140f7d770(void)

void FUN_140f7d770(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong *local_118;
  longlong **local_110;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 *local_d8 [2];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  FUN_142eccee0();
  bVar4 = false;
  if ((*(char *)((longlong)param_1 + 0xba2) != '\0') &&
     (*(char *)((longlong)param_1 + 0xba1) != (char)param_1[0x174])) {
    cVar5 = *(char *)((ulonglong)(*(char *)((longlong)param_1 + 0xba2) != '\0') + 0xba0 +
                     (longlong)param_1);
    *(char *)(param_1 + 0x174) = cVar5;
    if (*(char *)((longlong)param_1 + 0xba2) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0xba2) = 0;
      cVar5 = (char)param_1[0x174];
    }
    cVar3 = *(char *)((longlong)param_1 + 0xbb4);
    bVar4 = true;
    if (cVar5 == '\0') {
      lVar10 = *param_1;
      *(undefined1 *)((longlong)param_1 + 0xbb4) = 2;
      local_128 = 0;
      local_120 = 0;
      puVar6 = (undefined8 *)FName::FName(local_res20,L"Trading_Tab_Slide",1);
      puVar8 = &local_128;
LAB_140f7d87d:
      (**(code **)(lVar10 + 0x4e8))(param_1,*puVar6,puVar8);
    }
    else {
      if (cVar5 == '\x01') {
        lVar10 = *param_1;
        *(undefined1 *)((longlong)param_1 + 0xbb4) = 0;
        local_138 = 0;
        local_130 = 0;
        puVar6 = (undefined8 *)FName::FName(local_res18,L"Trading_Tab_Slide",1);
        puVar8 = &local_138;
        goto LAB_140f7d87d;
      }
      if (cVar5 == '\x02') {
        *(undefined1 *)((longlong)param_1 + 0xbb4) = 2;
      }
    }
    if (cVar3 != *(char *)((longlong)param_1 + 0xbb4)) {
      LOCK();
      *(undefined4 *)(param_1 + 0xb1) = 1;
      UNLOCK();
    }
  }
  cVar5 = FUN_140ee3fa0(param_1 + 0x135);
  if (cVar5 != '\0') {
    LOCK();
    *(undefined4 *)(param_1 + 0x177) = 1;
    UNLOCK();
  }
  if (param_1[0x175] != 0) {
    FUN_1411fd550(param_1[0x175],param_2);
    LOCK();
    lVar10 = param_1[0x177];
    *(int *)(param_1 + 0x177) = 0;
    UNLOCK();
    if ((int)lVar10 != 0) {
      local_110 = &local_res8;
      local_res8 = param_1;
      local_118 = param_1;
      if (param_1[0x175] != 0) {
        FUN_1411f57e0();
        FUN_140f5d180(&local_118);
        FUN_1411dba20(param_1[0x175]);
        FUN_140f5d180(&local_118);
        FUN_1411f5630(param_1[0x175]);
      }
    }
  }
  plVar9 = (longlong *)param_1[0x16d];
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x2a0))(plVar9,param_2);
  }
  if (param_1[0x131] != 0) {
    plVar9 = (longlong *)(param_1[0x131] + 0x1b0);
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
  }
  LOCK();
  iVar2 = *(int *)((longlong)param_1 + 0xbbc);
  *(int *)((longlong)param_1 + 0xbbc) = 0;
  UNLOCK();
  if (iVar2 == 0) {
    if (!bVar4) goto LAB_140f7dac6;
  }
  else {
    uVar7 = FUN_1404b03b0();
    FText::FText(local_108,uVar7);
    iVar2 = (int)param_1[0x176];
    local_f0 = 0;
    if ((-1 < iVar2) && (iVar2 < (int)param_1[0x124])) {
      lVar10 = (longlong)iVar2 * 0x20 + param_1[0x123];
      FText::operator=(local_108,lVar10);
      local_f0 = *(undefined1 *)(lVar10 + 0x18);
    }
    uStack_e0 = local_108;
    local_a8 = 0;
    local_98 = 0;
    local_e8 = param_1;
    puVar8 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar8 + 1) = (undefined4)local_e8;
      *(undefined4 *)((longlong)puVar8 + 0xc) = local_e8._4_4_;
      *(undefined4 *)(puVar8 + 2) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)puVar8 + 0x14) = uStack_e0._4_4_;
    }
    local_58 = 0;
    local_d8[0] = &LAB_140f62b30;
    local_48 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_78);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = param_1;
      *puVar8 = &PTR_FUN_143f77b70;
    }
    local_88[0] = &LAB_140f62c90;
    FUN_140f04a90(param_1 + 0x135,1,local_88,local_d8);
    plVar9 = (longlong *)param_1[0x16a];
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x2b0))(plVar9,local_108,1,0);
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x177) = 1;
    UNLOCK();
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_100 + 1;
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
  }
  FUN_140f704b0(param_1);
LAB_140f7dac6:
  if (((param_1[0x132] != 0) && (param_1[0x134] != 0)) &&
     (((*(char *)((longlong)param_1 + 0xb72) != '\0' &&
       (*(char *)((longlong)param_1 + 0xb71) != (char)param_1[0x16e])) ||
      ((*(char *)((longlong)param_1 + 0xb75) != '\0' &&
       (*(char *)((longlong)param_1 + 0xb74) != *(char *)((longlong)param_1 + 0xb73))))))) {
    FUN_140f68dc0(param_1);
  }
  return;
}



// FUNCTION 140f7db40 FUN_140f7db40 body=49 status=ok
// SIG undefined FUN_140f7db40(void)

void FUN_140f7db40(longlong param_1,undefined4 param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
                    /* WARNING: Could not recover jumptable at 0x000140f7db6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x1b0) + 0x28))((longlong *)(param_1 + 0x1b0),param_2);
  return;
}



// FUNCTION 140f7db80 FUN_140f7db80 body=633 status=ok
// SIG undefined FUN_140f7db80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f7db80(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_118 [2];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined1 local_e8 [80];
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  FUN_140f61c40();
  uVar7 = 0;
  if ((char)param_1[0xea] != '\0') {
    *(undefined1 *)(param_1 + 0xea) = 0;
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar2 != 0) {
      lVar2 = FUN_142f6c9f0(lVar2);
      if (lVar2 != 0) {
        local_118[0] = 0xffffffff;
        FUN_14170c210(local_118,param_1);
        uStack_108 = 0;
        local_128 = 0;
        local_110 = param_1;
        FUN_140f55a60(&uStack_108,*(undefined8 *)(lVar2 + 0x660),*(undefined4 *)(lVar2 + 0x668),0);
        uVar5 = local_118[0];
        local_f8 = local_118[0];
        local_118[0] = 0xffffffff;
        local_68 = (longlong *)0x0;
        local_58 = 0;
        puVar3 = (undefined8 *)FUN_140438ef0(0x28,local_88);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &PTR_FUN_144631608;
          puVar3[1] = local_110;
          puVar3[2] = 0;
          local_128 = 0;
          FUN_140f55a60(puVar3 + 2,uStack_108,local_100,0);
          *(undefined4 *)(puVar3 + 4) = uVar5;
          uVar5 = 0xffffffff;
          local_f8 = 0xffffffff;
        }
        local_98[0] = &LAB_140f62c70;
        FUN_14208c4f0(param_1,local_98);
        FUN_1416f8340(uVar5);
        TArray<FCollisionNotifyInfo,FDefaultAllocator>::
        ~TArray<FCollisionNotifyInfo,FDefaultAllocator>(&uStack_108);
        FUN_1416f8340(local_118[0]);
      }
    }
  }
  FUN_140f631e0(param_1);
  plVar6 = (longlong *)param_1[0xe1];
  uVar8 = (longlong)(int)param_1[0xe2] & 0x1fffffffffffffff;
  if (plVar6 + (int)param_1[0xe2] < plVar6) {
    uVar8 = uVar7;
  }
  if (uVar8 != 0) {
    do {
      plVar1 = (longlong *)*plVar6;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2f8))(plVar1,param_2);
      }
      plVar6 = plVar6 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar8);
  }
  FUN_140f628c0(param_1);
  local_68 = (longlong *)0x0;
  local_58 = 0;
  local_110 = param_1;
  uStack_108._0_4_ = param_2;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_88);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_110;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_110._4_4_;
    *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_108;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_108._4_4_;
  }
  local_98[0] = &LAB_140f62a70;
  uVar4 = FUN_1420849a0(param_1,local_e8,local_98);
  FUN_14208c4f0(param_1,uVar4);
  if (local_58 != 0) {
    plVar6 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar6 = local_68;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142ecd1d0(param_1,param_2);
  return;
}


