// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140bae380 FUN_140bae380 body=47 status=ok
// SIG undefined FUN_140bae380(void)

void FUN_140bae380(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_140d65620(lVar1);
    FMemory::operator_delete(lVar1,0x300);
    return;
  }
  return;
}



// FUNCTION 140bae3b0 FUN_140bae3b0 body=47 status=ok
// SIG undefined FUN_140bae3b0(void)

void FUN_140bae3b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_140b9d330(lVar1);
    FMemory::operator_delete(lVar1,0x498);
    return;
  }
  return;
}



// FUNCTION 140bae3e0 FUN_140bae3e0 body=47 status=ok
// SIG undefined FUN_140bae3e0(void)

void FUN_140bae3e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_140b9d770(lVar1);
    FMemory::operator_delete(lVar1,0x98);
    return;
  }
  return;
}



// FUNCTION 140bae410 FUN_140bae410 body=14 status=ok
// SIG undefined FUN_140bae410(void)

void FUN_140bae410(longlong param_1)

{
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x10),2);
  return;
}



// FUNCTION 140bae420 FUN_140bae420 body=1010 status=ok
// SIG undefined FUN_140bae420(void)

void FUN_140bae420(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_a8;
  int local_a0;
  longlong *local_98;
  int local_90;
  longlong *local_88;
  int local_80;
  longlong *local_78;
  int local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  
  FUN_1404d0c50(&local_60,0);
  if (local_60 == (longlong *)0x0) goto switchD_140bae49b_default;
  lVar4 = (**(code **)(*local_60 + 0x10))(local_60,0x11f);
  if (lVar4 == 0) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
    goto switchD_140bae49b_default;
  }
  switch(*(undefined4 *)(lVar4 + 0x110)) {
  case 0:
  case 1:
  case 2:
  case 6:
    local_78 = (longlong *)0x0;
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    local_70 = 3;
    local_78 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      plVar5[1] = (longlong)param_1;
      *plVar5 = (longlong)&DAT_143f3ed00;
      plVar5[2] = (longlong)FUN_140bd2540;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar4;
      *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    plVar5 = (longlong *)(**(code **)(*local_60 + 0xd8))(local_60,local_38,&local_78);
    param_1[9] = *plVar5;
    if (local_70 == 0) {
LAB_140bae786:
      if (local_78 != (longlong *)0x0) {
        FMemory::Free(local_78);
      }
    }
    else if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x28))(local_78,0);
      if (local_78 != (longlong *)0x0) {
        local_78 = (longlong *)FMemory::Realloc(local_78,0,0);
      }
      local_70 = 0;
      goto LAB_140bae786;
    }
    local_68 = 0x11f;
    (**(code **)(*local_60 + 0xd0))(local_60,0x11f);
    goto switchD_140bae49b_default;
  case 3:
    local_a8 = (longlong *)0x0;
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    local_a0 = 3;
    local_a8 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      plVar5[1] = (longlong)param_1;
      *plVar5 = (longlong)&DAT_143f3ed00;
      plVar5[2] = (longlong)FUN_140bd2540;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar4;
      *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    plVar5 = (longlong *)(**(code **)(*local_60 + 0x60))(local_60,local_50,&local_a8);
    param_1[7] = *plVar5;
    plVar5 = local_a8;
    if (local_a0 != 0) {
      if (local_a8 == (longlong *)0x0) goto switchD_140bae49b_default;
      (**(code **)(*local_a8 + 0x28))(local_a8,0);
      if (local_a8 != (longlong *)0x0) {
        local_a8 = (longlong *)FMemory::Realloc(local_a8,0,0);
      }
      local_a0 = 0;
      plVar5 = local_a8;
    }
    break;
  case 4:
    local_98 = (longlong *)0x0;
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    local_90 = 3;
    local_98 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      plVar5[1] = (longlong)param_1;
      *plVar5 = (longlong)&DAT_143f3ed00;
      plVar5[2] = (longlong)FUN_140bd2540;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar4;
      *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    plVar5 = (longlong *)(**(code **)(*local_60 + 0xb0))(local_60,local_48,&local_98);
    param_1[8] = *plVar5;
    if (local_90 == 0) {
LAB_140bae602:
      if (local_98 != (longlong *)0x0) {
        FMemory::Free(local_98);
      }
    }
    else if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x28))(local_98,0);
      if (local_98 != (longlong *)0x0) {
        local_98 = (longlong *)FMemory::Realloc(local_98,0,0);
      }
      local_90 = 0;
      goto LAB_140bae602;
    }
    (**(code **)(*local_60 + 0xa8))(local_60,0x11f);
    goto switchD_140bae49b_default;
  case 5:
    local_88 = (longlong *)0x0;
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    local_80 = 3;
    local_88 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      plVar5[1] = (longlong)param_1;
      *plVar5 = (longlong)&DAT_143f3ed00;
      plVar5[2] = (longlong)FUN_140bd2540;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar4;
      *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    plVar5 = (longlong *)(**(code **)(*local_60 + 0xb0))(local_60,local_40,&local_88);
    param_1[8] = *plVar5;
    plVar5 = local_88;
    if (local_80 != 0) {
      if (local_88 == (longlong *)0x0) goto switchD_140bae49b_default;
      (**(code **)(*local_88 + 0x28))(local_88,0);
      if (local_88 != (longlong *)0x0) {
        local_88 = (longlong *)FMemory::Realloc(local_88,0,0);
      }
      local_80 = 0;
      plVar5 = local_88;
    }
    break;
  default:
    goto switchD_140bae49b_default;
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
switchD_140bae49b_default:
  plVar5 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
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



// FUNCTION 140bae830 FUN_140bae830 body=541 status=ok
// SIG undefined FUN_140bae830(void)

void FUN_140bae830(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if ((((lVar3 != 0) && ((*(uint *)(lVar3 + 0x830) >> 2 & 1) != 0)) && ((char)param_1[99] == '\0'))
     && (((param_1[0x86] == 0 || (*(char *)(param_1[0x86] + 10) == '\0')) &&
         (((char)param_1[0x16f] == '\0' && (lVar3 = FUN_140bb89c0(param_1), lVar3 != 0)))))) {
    FUN_141105d40(lVar3,0);
  }
  FUN_142d6f280(param_1);
  FUN_140ba8e20(param_1);
  FUN_140bf4350(param_1,1);
  puVar8 = (undefined8 *)0x0;
  plVar1 = param_1 + 0x1c7;
  *(undefined4 *)(param_1 + 0x1f2) = 0;
  if (plVar1 != &local_28) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = 0;
    param_1[0x1c8] = 0;
  }
  FUN_140baffe0(param_1 + 0x1b0,0);
  TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x1ba,0);
  TSet<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x1d4,0);
  *(undefined1 *)(param_1 + 0x1d3) = 0;
  puVar4 = (undefined8 *)operator_new();
  puVar7 = puVar8;
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    *puVar4 = &PTR_FUN_144317ad0;
    puVar7 = puVar4;
  }
  FUN_140be4f80(param_1,puVar7);
  uStack_20 = 0;
  local_28 = FUN_140bd4330;
  plVar1 = param_1 + 0xc4;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_1442cc120;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    *(undefined4 *)(plVar5 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar5 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar5 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_1c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar3;
    *plVar5 = (longlong)&PTR_FUN_1442cc168;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    plVar6 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
    iVar2 = (int)param_1[0xc5];
    puVar8 = (undefined8 *)*plVar6;
    *(int *)(param_1 + 0xc5) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x62c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar7 = plVar5;
    *(undefined4 *)(puVar7 + 1) = 3;
  }
  param_1[0x42] = (longlong)puVar8;
  FUN_140db79d0(param_1 + 0xbe);
  FUN_140ba8040(param_1);
  return;
}



// FUNCTION 140baea50 FUN_140baea50 body=2693 status=ok
// SIG undefined FUN_140baea50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140baea50(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined1 auStack_398 [32];
  longlong *local_378;
  undefined1 local_370;
  longlong *local_358;
  longlong *plStack_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 local_33c;
  longlong local_338;
  longlong *local_328;
  longlong *plStack_320;
  undefined8 *local_318;
  longlong **pplStack_310;
  longlong local_308;
  undefined8 local_300;
  longlong *local_2f8;
  longlong *plStack_2f0;
  longlong local_2e8;
  undefined1 local_2e0 [8];
  undefined4 local_2d8;
  undefined4 local_2d4;
  longlong local_2d0;
  undefined1 local_2c8 [8];
  longlong *local_2c0;
  undefined8 local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  longlong *local_288;
  longlong *plStack_280;
  undefined1 local_278 [8];
  longlong *local_270;
  undefined1 local_260 [8];
  longlong *local_258;
  undefined8 *local_248;
  longlong **pplStack_240;
  undefined1 local_238 [16];
  undefined8 *local_228;
  longlong **pplStack_220;
  undefined1 local_218 [16];
  undefined1 local_208 [8];
  undefined1 local_200 [8];
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined **local_1c0;
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  lVar7 = FUN_140bb6170();
  if (lVar7 == 0) {
    return;
  }
  pwVar8 = (wchar_t *)FUN_14244f490(param_1,0);
  if (pwVar8 != (wchar_t *)0x0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140baeafb;
  }
  pwVar8 = (wchar_t *)0x0;
LAB_140baeafb:
  FWeakObjectPtr::operator=(&local_340,0);
  local_338 = 0;
  pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnConfirmDisconnect",L"::");
  pwVar5 = (wchar_t *)0x0;
  while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar5 = pwVar4;
  }
  FName::FName(&local_2e8,pwVar5 + 2,1);
  FWeakObjectPtr::operator=(&local_340,param_1);
  local_338 = local_2e8;
  local_348 = 0;
  if ((local_2e8 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_340), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_338);
  }
  local_328 = (longlong *)0x0;
  plStack_320 = (longlong *)0x0;
  FUN_140bba620(param_1,&local_358,&local_328);
  plVar14 = local_358;
  if (local_358 != (longlong *)0x0) {
    plVar10 = (longlong *)(**(code **)(*local_358 + 8))(local_358,local_208);
    lVar7 = *plVar10;
    plVar11 = (longlong *)(**(code **)(*param_1 + 0x338))(param_1,local_200);
    plVar10 = plStack_350;
    if (lVar7 != *plVar11) {
      if (plStack_320 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_320 + 1) = (int)plStack_320[1] + 1;
        UNLOCK();
      }
      local_48 = local_328;
      plStack_40 = plStack_320;
      local_2f8 = local_358;
      plStack_2f0 = plStack_350;
      local_358 = local_328;
      plStack_350 = plStack_320;
      plVar14 = local_328;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar10 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar14 = local_358;
          if (iVar2 == 1) {
            (**(code **)(*plStack_2f0 + 8))(plStack_2f0,1);
            plVar14 = local_358;
          }
        }
      }
    }
  }
  FText::FText(local_260);
  FText::FText(local_2c8);
  FText::FText(local_278);
  if (plVar14 != (longlong *)0x0) {
    local_288 = local_358;
    plStack_280 = plStack_350;
    local_308 = 0;
    local_300 = 0;
    if (plStack_350 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_350 + 1) = (int)plStack_350[1] + 1;
      UNLOCK();
    }
    local_378 = &local_308;
    FUN_140d79f00(param_1[0x8f],&local_288,1);
    plVar14 = plStack_280;
    if (plStack_280 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_280 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_280)(plStack_280);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    uVar12 = FText::FromString(local_188,&local_308);
    FText::operator=(local_278,uVar12);
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_180 + 1;
      lVar7 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar1 = (int *)((longlong)local_180 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_180 + 8))(local_180,1);
        }
      }
    }
    if (local_308 != 0) {
      FMemory::Free();
    }
  }
  uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_170,L"Leave Group?",L"OakGameInstance",
                      L"ConfirmDisconnectHeaderLeaveGroup");
  FText::operator=(local_260,uVar12);
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_168 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar1 = (int *)((longlong)local_168 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_168 + 8))(local_168,1);
      }
    }
  }
  lVar7 = FText::FText(local_d8,local_278);
  uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_140,L"Are you sure you want to leave {0}\'s group?",L"OakGameInstance",
                      L"LeaveGroupText");
  puVar13 = (undefined8 *)FTextFormat::FTextFormat(local_e8,uVar12);
  local_a8[0] = 4;
  FText::FText(local_98,lVar7);
  local_2b0 = *puVar13;
  local_318 = (undefined8 *)local_a8;
  pplStack_310 = (longlong **)local_78;
  local_2a8 = puVar13[1];
  local_80 = '\x01';
  if (local_2a8 != 0) {
    LOCK();
    *(int *)(local_2a8 + 8) = *(int *)(local_2a8 + 8) + 1;
    UNLOCK();
  }
  local_248 = local_318;
  pplStack_240 = pplStack_310;
  uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
           TArray<FFormatArgumentValue,FDefaultAllocator>(local_238,&local_248);
  uVar12 = FText::Format(local_158,&local_2b0,uVar12);
  FText::FText(local_1f0,uVar12);
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_150 + 1;
    lVar6 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)local_150 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_238);
  if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
    LOCK();
    plVar14 = local_90 + 1;
    lVar6 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  plVar14 = (longlong *)puVar13[1];
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar14 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  plVar14 = *(longlong **)(lVar7 + 8);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar14 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  FText::operator=(local_2c8,local_1f0);
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1e8 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar1 = (int *)((longlong)local_1e8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1e8 + 8))(local_1e8,1);
      }
    }
  }
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_138 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
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
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar7 == 0) || ((*(uint *)(lVar7 + 0x830) >> 2 & 1) == 0)) {
    lVar7 = FText::FText(local_c0,local_2c8);
    uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_110,L"{0} Doing so will return you to the Main Menu.",
                        L"OakGameInstance",L"ReturnToMainMenuNotice");
    puVar13 = (undefined8 *)FTextFormat::FTextFormat(local_f8,uVar12);
    local_78[0] = 4;
    FText::FText(local_68,lVar7);
    local_2a0 = *puVar13;
    local_318 = (undefined8 *)local_78;
    pplStack_310 = &local_48;
    local_298 = puVar13[1];
    local_50 = '\x01';
    if (local_298 != 0) {
      LOCK();
      *(int *)(local_298 + 8) = *(int *)(local_298 + 8) + 1;
      UNLOCK();
    }
    local_228 = local_318;
    pplStack_220 = pplStack_310;
    uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_218,&local_228);
    uVar12 = FText::Format(local_128,&local_2a0,uVar12);
    FText::FText(local_1d8,uVar12);
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_120 + 1;
      lVar6 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar1 = (int *)((longlong)local_120 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_218);
    if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
      LOCK();
      plVar14 = local_60 + 1;
      lVar6 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    plVar14 = (longlong *)puVar13[1];
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar14 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    plVar14 = *(longlong **)(lVar7 + 8);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar14 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    FText::operator=(local_2c8,local_1d8);
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_1d0 + 1;
      lVar7 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar1 = (int *)((longlong)local_1d0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_108 + 1;
      lVar7 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)local_108 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_108 + 8))(local_108,1);
        }
      }
    }
  }
  FUN_140c0e000();
  local_1c0 = &PTR_FUN_1443170a0;
  FText::FText(local_1b8,local_260);
  FText::FText(local_1a0,local_2c8);
  puVar13 = (undefined8 *)FName::FName(local_1f8,L"GbxShiftOverlay",1);
  plVar14 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar13);
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0xb0))(plVar14,DAT_14686a658);
  }
  FWeakObjectPtr::operator=(&local_348,0);
  FWeakObjectPtr::operator=(local_2e0,pwVar8);
  local_2d8 = local_340;
  local_2d4 = local_33c;
  local_2d0 = local_338;
  local_378 = &local_348;
  local_370 = 0;
  FUN_140c23780(3,&local_1c0,&local_2d8,local_2e0);
  FUN_140b9cdd0(&local_1c0);
  if (local_270 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_270 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_270)(local_270);
      LOCK();
      piVar1 = (int *)((longlong)local_270 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_270 + 8))(local_270,1);
      }
    }
  }
  if (local_2c0 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_2c0 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_2c0)(local_2c0);
      LOCK();
      piVar1 = (int *)((longlong)local_2c0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_2c0 + 8))(local_2c0,1);
      }
    }
  }
  if (local_258 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_258 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_258)(local_258);
      LOCK();
      piVar1 = (int *)((longlong)local_258 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_258 + 8))(local_258,1);
      }
    }
  }
  plVar14 = plStack_350;
  if (plStack_350 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_350 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_350)(plStack_350);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_350 + 8))(plStack_350,1);
      }
    }
  }
  plVar14 = plStack_320;
  if (plStack_320 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_320 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_320)(plStack_320);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_320 + 8))(plStack_320,1);
      }
    }
  }
  return;
}



// FUNCTION 140baf4e0 FUN_140baf4e0 body=1167 status=ok
// SIG undefined FUN_140baf4e0(void)

void FUN_140baf4e0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 local_res10;
  longlong local_res18;
  undefined1 local_res20 [8];
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined2 local_190;
  undefined4 local_188;
  undefined4 local_184;
  longlong local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [24];
  undefined1 local_150 [24];
  longlong local_138;
  int local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_120;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  lVar7 = FUN_14244f490(param_1,0);
  if (lVar7 != 0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FWeakObjectPtr::operator=(&local_188,0);
      local_180 = 0;
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&UOakGameInstance::OnNATHelpChoiceMade",L"::");
      pwVar6 = (wchar_t *)0x0;
      while (pwVar5 = pwVar9, pwVar5 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar6 = pwVar5;
      }
      FName::FName(&local_res18,pwVar6 + 2,1);
      FWeakObjectPtr::operator=(&local_188,param_1);
      local_180 = local_res18;
      local_res10 = 0;
      if ((local_res18 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_188), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_180);
      }
      FUN_140b99f70(local_168);
      local_128 = local_188;
      local_124 = local_184;
      local_120 = local_180;
      FText::operator=(local_168,&DAT_14686f528);
      FText::operator=(local_150,&DAT_14686f540);
      uVar10 = FUN_1404b03b0();
      FText::FText(local_1b8,uVar10);
      local_1a0 = 0;
      local_198 = 0;
      local_190 = 1;
      puVar11 = (undefined8 *)FName::FName(&local_res10,&DAT_1442e8ecc,1);
      local_1a0 = *puVar11;
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_78,&DAT_1442f1210,L"OakGameInstance",L"DialogChoice_Yes");
      FText::operator=(local_1b8,uVar10);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      iVar3 = local_130;
      lVar8 = (longlong)local_130;
      local_198 = DAT_146b3e2a0;
      local_130 = local_130 + 1;
      if (local_12c < local_130) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_138,iVar3);
      }
      lVar8 = lVar8 * 0x30 + local_138;
      FText::FText(lVar8,local_1b8);
      *(undefined8 *)(lVar8 + 0x18) = local_1a0;
      *(undefined8 *)(lVar8 + 0x20) = local_198;
      *(undefined1 *)(lVar8 + 0x28) = (undefined1)local_190;
      *(undefined1 *)(lVar8 + 0x29) = local_190._1_1_;
      puVar11 = (undefined8 *)FName::FName(local_res20,&DAT_1442e8edc,1);
      local_1a0 = *puVar11;
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_60,&DAT_1442edc74,L"OakGameInstance",L"DialogChoice_No");
      FText::operator=(local_1b8,uVar10);
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      iVar3 = local_130;
      lVar8 = (longlong)local_130;
      local_198 = DAT_146b3e2b8;
      local_130 = local_130 + 1;
      if (local_12c < local_130) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_138,iVar3);
      }
      lVar8 = lVar8 * 0x30 + local_138;
      FText::FText(lVar8,local_1b8);
      *(undefined8 *)(lVar8 + 0x18) = local_1a0;
      *(undefined8 *)(lVar8 + 0x20) = local_198;
      *(undefined1 *)(lVar8 + 0x28) = (undefined1)local_190;
      *(undefined1 *)(lVar8 + 0x29) = local_190._1_1_;
      puVar11 = (undefined8 *)FName::FName(local_178,"NoRemind",1);
      local_1a0 = *puVar11;
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_48,L"No, and don\'t ask again",L"OakGameInstance",
                          L"DialogChoice_NoRemind");
      FText::operator=(local_1b8,uVar10);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      iVar3 = local_130;
      lVar8 = (longlong)local_130;
      local_198 = DAT_14686a1f8;
      local_130 = local_130 + 1;
      if (local_12c < local_130) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_138,iVar3);
      }
      lVar8 = lVar8 * 0x30 + local_138;
      FText::FText(lVar8,local_1b8);
      *(undefined8 *)(lVar8 + 0x18) = local_1a0;
      *(undefined8 *)(lVar8 + 0x20) = local_198;
      *(undefined1 *)(lVar8 + 0x28) = (undefined1)local_190;
      *(undefined1 *)(lVar8 + 0x29) = local_190._1_1_;
      FUN_1410f3080(lVar7,local_168);
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1b0 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar2 = (int *)((longlong)local_1b0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_1b0 + 8))(local_1b0,1);
          }
        }
      }
      FUN_140b9d1a0(local_168);
    }
  }
  return;
}



// FUNCTION 140baf970 FUN_140baf970 body=430 status=ok
// SIG undefined FUN_140baf970(void)

undefined8 FUN_140baf970(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_18;
  longlong *local_10;
  
  uVar6 = (**(code **)(*param_1 + 0x148))();
  lVar7 = FUN_140d3a420(uVar6);
  if (lVar7 == 0) {
    plVar3 = *(longlong **)(param_2 + 8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
          return 0;
        }
      }
    }
  }
  else {
    lVar7 = FUN_140d3a750(lVar7,param_2);
    if (lVar7 != 0) {
      lVar8 = FUN_142b45e90();
      FUN_142b4a990(*(undefined8 *)(lVar8 + 0x18),&local_18,param_2);
      if (local_18 != 0) {
        cVar4 = FUN_142b54900();
        if (cVar4 != '\0') {
          if ((*(char *)(lVar7 + 0x1f9) != '\0') ||
             ((param_3 != '\0' && (*(char *)(lVar7 + 0x1fa) != '\0')))) goto LAB_140bafa7a;
          cVar4 = FUN_142b54800(local_18);
          if (cVar4 != '\0') {
            cVar4 = FUN_142b547c0(local_18);
            if (cVar4 != '\0') {
LAB_140bafa7a:
              if (local_10 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_10 + 1;
                lVar7 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_10)(local_10);
                  LOCK();
                  piVar2 = (int *)((longlong)local_10 + 0xc);
                  iVar5 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*local_10 + 8))(local_10,1);
                  }
                }
              }
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
              return 1;
            }
            iVar5 = FUN_142b47070(local_18);
            if (iVar5 != 0) goto LAB_140bafa7a;
          }
        }
      }
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_10 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)local_10 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  }
  return 0;
}



// FUNCTION 140bafb20 FUN_140bafb20 body=445 status=ok
// SIG undefined FUN_140bafb20(void)

undefined8 FUN_140bafb20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  if (*(char *)(param_1 + 0x588) == '\0') {
    plVar3 = *(longlong **)(param_1 + 0x4e8);
    lVar6 = *(longlong *)(param_1 + 0x4e0);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    cVar5 = *(char *)(lVar6 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar3)();
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
    if (((1 < (byte)(cVar5 - 3U)) &&
        (lVar6 = UGameInstance::GetFirstGamePlayer(param_1), lVar6 != 0)) &&
       (plVar3 = *(longlong **)(lVar6 + 0x30), plVar3 != (longlong *)0x0)) {
      lVar6 = FUN_14145f370();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (cVar5 = FUN_140d01b90(plVar3), cVar5 == '\0')) {
        cVar5 = FUN_140c1a2d0();
        if (cVar5 != '\0') {
          return 1;
        }
        lVar6 = (**(code **)(*plVar3 + 0xfa8))(plVar3);
        if (lVar6 != 0) {
          iVar9 = *(int *)(lVar6 + 0x48);
          iVar10 = 0;
          if (0 < iVar9) {
            lVar11 = 0;
            do {
              if ((lVar11 < 0) || (iVar9 <= iVar10)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (((bVar4) &&
                  (plVar3 = *(longlong **)(*(longlong *)(lVar6 + 0x40) + lVar11 * 8),
                  plVar3 != (longlong *)0x0)) &&
                 (lVar7 = (**(code **)(*plVar3 + 0x278))(), lVar7 != 0)) {
                lVar8 = AGMeshParameterCue::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  cVar5 = FUN_141104c40(lVar7);
                  if (cVar5 == '\0') {
                    return 0;
                  }
                  return 1;
                }
              }
              iVar9 = *(int *)(lVar6 + 0x48);
              iVar10 = iVar10 + 1;
              lVar11 = lVar11 + 1;
            } while (iVar10 < iVar9);
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140bafce0 FUN_140bafce0 body=220 status=ok
// SIG undefined FUN_140bafce0(void)

void FUN_140bafce0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)*param_1;
  for (iVar6 = *(int *)(param_1 + 1); iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = &PTR_FUN_143f740c8;
    if (puVar7[3] != 0) {
      FMemory::Free();
    }
    *puVar7 = &PTR_FUN_143f73d18;
    plVar4 = (longlong *)puVar7[2];
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
    puVar7 = puVar7 + 5;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140bafdc0 FUN_140bafdc0 body=155 status=ok
// SIG undefined FUN_140bafdc0(void)

void FUN_140bafdc0(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  for (iVar2 = (int)param_1[1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*(longlong *)(lVar1 + 0x108) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x80) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x68) != 0) {
      FMemory::Free();
    }
    FUN_1404bf980(lVar1 + 0x28);
    FUN_1404bf980(lVar1);
    lVar1 = lVar1 + 0x118;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<280,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 140bafe60 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
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



// FUNCTION 140bafee0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<TSharedPtr<FString,1>,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = ConditionalRehash(param_1,param_2);
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



// FUNCTION 140baff60 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<TSharedRef<FString,1>,unsigned_short>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,unsigned_short,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<TSharedRef<FString,1>,unsigned_short>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<EOS_EpicAccountIdDetails_*,TSharedRef<IAttributeAccessInterface,0>_>,TDefaultMapHashableKeyFuncs<EOS_EpicAccountIdDetails_*,TSharedRef<IAttributeAccessInterface,0>,0>,FDefaultSetAllocator>
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



// FUNCTION 140baffe0 FUN_140baffe0 body=117 status=ok
// SIG undefined FUN_140baffe0(void)

void FUN_140baffe0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_140bb0cd0();
  cVar1 = TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
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



// FUNCTION 140bb0060 FUN_140bb0060 body=488 status=ok
// SIG undefined FUN_140bb0060(void)

void FUN_140bb0060(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_140bb0131;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_140bb0131:
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
      lVar5 = (longlong)iStack_2c * 0x90 + *param_1;
      *(undefined4 *)(lVar5 + 0x80) = 0;
      if (*(longlong *)(lVar5 + 0x78) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar5 + 0x38);
      if (*(longlong *)(lVar5 + 0x28) != 0) {
        FMemory::Free();
      }
      FUN_1404bf980(lVar5);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 140bb0250 FUN_140bb0250 body=582 status=ok
// SIG undefined FUN_140bb0250(void)

void FUN_140bb0250(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar8 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar8 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar6 = *puVar11;
    iStack_60 = 0;
    while (uVar6 == 0) {
      lVar7 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar10 = local_78 + 1;
      bVar5 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar10;
      if (bVar5) goto LAB_140bb0324;
      uVar6 = puVar11[lVar7 + 1];
    }
    uStack_74 = -uVar6 & uVar6;
    iVar10 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_64 = (iStack_60 - iVar10) + 0x1f;
    if (iVar8 < iStack_64) {
LAB_140bb0324:
      iStack_64 = iVar8;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar8) {
    do {
      lVar12 = (longlong)iStack_3c * 0x50 + *param_1;
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar12 + 0x38);
      iVar8 = *(int *)(lVar12 + 0x30);
      lVar7 = *(longlong *)(lVar12 + 0x28);
      if (iVar8 != 0) {
        plVar9 = (longlong *)(lVar7 + 8);
        do {
          plVar4 = (longlong *)*plVar9;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar4 + 1;
            lVar7 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar3 = (int *)((longlong)plVar4 + 0xc);
              iVar10 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar9 = plVar9 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        lVar7 = *(longlong *)(lVar12 + 0x28);
      }
      if (lVar7 != 0) {
        FMemory::Free();
      }
      FUN_1404bf980(lVar12);
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar6 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar6) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140bb04a0 FUN_140bb04a0 body=575 status=ok
// SIG undefined FUN_140bb04a0(void)

void FUN_140bb04a0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar8 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar8 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar6 = *puVar11;
    iStack_60 = 0;
    while (uVar6 == 0) {
      lVar7 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar10 = local_78 + 1;
      bVar5 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar10;
      if (bVar5) goto LAB_140bb0574;
      uVar6 = puVar11[lVar7 + 1];
    }
    uStack_74 = -uVar6 & uVar6;
    iVar10 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_64 = (iStack_60 - iVar10) + 0x1f;
    if (iVar8 < iStack_64) {
LAB_140bb0574:
      iStack_64 = iVar8;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar8) {
    do {
      lVar12 = (longlong)iStack_3c * 0x40 + *param_1;
      iVar8 = *(int *)(lVar12 + 0x30);
      lVar7 = *(longlong *)(lVar12 + 0x28);
      if (iVar8 != 0) {
        plVar9 = (longlong *)(lVar7 + 8);
        do {
          plVar4 = (longlong *)*plVar9;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar4 + 1;
            lVar7 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar3 = (int *)((longlong)plVar4 + 0xc);
              iVar10 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar9 = plVar9 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        lVar7 = *(longlong *)(lVar12 + 0x28);
      }
      if (lVar7 != 0) {
        FMemory::Free();
      }
      FUN_1404bf980(lVar12);
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar6 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar6) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140bb06e0 FUN_140bb06e0 body=516 status=ok
// SIG undefined FUN_140bb06e0(void)

void FUN_140bb06e0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint *puVar11;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar4 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = *puVar11;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar8 == 0) {
      lVar9 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar10 = local_78 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar10;
      if (bVar6) goto LAB_140bb07b4;
      uVar8 = puVar11[lVar9 + 1];
    }
    uStack_74 = -uVar8 & uVar8;
    iVar10 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_64 = (iStack_60 - iVar10) + 0x1f;
    if (iVar4 < iStack_64) {
LAB_140bb07b4:
      iStack_64 = iVar4;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar4) {
    do {
      lVar9 = (longlong)iStack_3c * 0x40 + *param_1;
      plVar5 = *(longlong **)(lVar9 + 0x30);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      FUN_1404bf980(lVar9);
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar8 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar8) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar8;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140bb08f0 Empty body=400 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
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
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_140bb09c1;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
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
LAB_140bb09c1:
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
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
                (*param_1 + (longlong)iStack_1c * 0x28);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140bb0a80 FUN_140bb0a80 body=577 status=ok
// SIG undefined FUN_140bb0a80(void)

void FUN_140bb0a80(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar4 != 0) {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar8 = *puVar12;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar8 == 0) {
      lVar10 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar11 = local_78 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar11;
      if (bVar6) goto LAB_140bb0b54;
      uVar8 = puVar12[lVar10 + 1];
    }
    uStack_74 = -uVar8 & uVar8;
    iVar11 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    iStack_64 = (iStack_60 - iVar11) + 0x1f;
    if (iVar4 < iStack_64) {
LAB_140bb0b54:
      iStack_64 = iVar4;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar4) {
    do {
      lVar9 = (longlong)iStack_3c;
      lVar10 = *param_1;
      plVar5 = *(longlong **)(lVar10 + 0x18 + lVar9 * 0x28);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      plVar5 = *(longlong **)(lVar10 + lVar9 * 0x28 + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar8 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar8) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar8;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140bb0cd0 FUN_140bb0cd0 body=499 status=ok
// SIG undefined FUN_140bb0cd0(void)

void FUN_140bb0cd0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
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
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar4 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = *puVar10;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar7 == 0) {
      lVar8 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar9 = local_68 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar9;
      if (bVar6) goto LAB_140bb0da4;
      uVar7 = puVar10[lVar8 + 1];
    }
    uStack_64 = -uVar7 & uVar7;
    iVar9 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_54 = (iStack_50 - iVar9) + 0x1f;
    if (iVar4 < iStack_54) {
LAB_140bb0da4:
      iStack_54 = iVar4;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar4) {
    do {
      lVar8 = (longlong)iStack_2c * 0x30 + *param_1;
      if (*(longlong *)(lVar8 + 0x18) != 0) {
        FMemory::Free();
      }
      plVar5 = *(longlong **)(lVar8 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar7 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar7) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140bb0ed0 FUN_140bb0ed0 body=2171 status=ok
// SIG undefined FUN_140bb0ed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bb0ed0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  void *_Dst;
  undefined8 uVar13;
  undefined8 *puVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  bool bVar19;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  longlong *local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0 [2];
  longlong *local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  int *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  int local_70;
  longlong *local_68;
  longlong local_60 [5];
  
  local_60[4] = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_c0[0] = param_2;
  local_b0 = param_1;
  FUN_142d5ce20();
  lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar8 != 0) && ((*(uint *)(lVar8 + 0x830) >> 2 & 1) != 0)) && (param_2 != 0)) {
    TSet<TTuple<TSharedRef<FString,1>,unsigned_short>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,unsigned_short,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 0x1a0,0);
    local_60[0] = 0;
    local_60[1] = 0;
    local_60[2] = 0;
    local_60[3] = 0;
    UWorld::GetPlayerControllerIterator(param_2,&local_78);
    while( true ) {
      if ((local_70 < 0) || (*(int *)(local_78 + 8) <= local_70)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      if (!bVar19) break;
      plVar9 = (longlong *)FWeakObjectPtr::Get();
      if (plVar9 != (longlong *)0x0) {
        lVar8 = FUN_14145f370();
        if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        if ((bVar19) && (lVar8 = FUN_14270bb10(), lVar8 != 0)) {
          lVar8 = FUN_14270bb10();
          uVar1 = *(uint *)(lVar8 + 0x108);
          if (uVar1 < 4) {
            lVar8 = (**(code **)(*plVar9 + 0xfa8))(plVar9);
            local_60[(int)uVar1] = lVar8;
          }
        }
      }
      local_70 = local_70 + 1;
    }
    piVar15 = (int *)((longlong)param_1 + 0xf4);
    local_d0 = 0;
    do {
      piVar18 = (int *)local_60[local_d0];
      local_c8 = piVar15;
      local_98 = piVar18;
      if ((piVar18 != (int *)0x0) &&
         (lVar8 = (longlong)(piVar15[-1] + -1), local_88 = lVar8, -1 < piVar15[-1] + -1)) {
        do {
          plVar9 = *(longlong **)(*(longlong *)(piVar15 + -3) + lVar8 * 8);
          local_a8 = plVar9;
          if (plVar9 != (longlong *)0x0) {
            local_88 = lVar8;
            plVar10 = (longlong *)(**(code **)(*plVar9 + 0x278))();
            if (plVar10 == (longlong *)0x0) {
LAB_140bb10d4:
              plVar10 = (longlong *)0x0;
              local_68 = (longlong *)0x0;
            }
            else {
              lVar11 = UInputKeySelector::GetPrivateStaticClass();
              if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
                  lVar11 + 0x88)) {
                bVar19 = false;
              }
              else {
                bVar19 = true;
              }
              if (!bVar19) goto LAB_140bb10d4;
              local_68 = plVar10;
              (**(code **)(*plVar10 + 0x280))(plVar10);
            }
            lVar11 = (longlong)(int)local_b0[0xb9];
            if ((int)local_b0[0xb9] != 0) {
              iVar17 = 0;
              lVar8 = 0;
              bVar19 = *(longlong **)local_b0[0xb8] != plVar10;
              plVar9 = local_b0;
              iVar7 = 0;
              do {
                lVar8 = lVar8 + 1;
                iVar16 = iVar7 + 1;
                if (lVar8 < lVar11) {
                  do {
                    if (bVar19 != (*(longlong **)(plVar9[0xb8] + lVar8 * 8) != plVar10)) break;
                    iVar16 = iVar16 + 1;
                    lVar8 = lVar8 + 1;
                  } while (lVar8 < lVar11);
                }
                if (bVar19 != false) {
                  if (iVar17 != iVar7) {
                    _guard_xfg_dispatch_icall_nop
                              ((void *)(plVar9[0xb8] + (longlong)iVar17 * 8),
                               (void *)(plVar9[0xb8] + (longlong)iVar7 * 8),
                               (longlong)(iVar16 - iVar7) << 3);
                    plVar9 = local_b0;
                  }
                  iVar17 = iVar17 + (iVar16 - iVar7);
                }
                bVar19 = (bool)(bVar19 ^ 1);
                iVar7 = iVar16;
              } while (lVar8 < lVar11);
              *(int *)(plVar9 + 0xb9) = iVar17;
              lVar8 = local_88;
              plVar9 = local_a8;
              piVar18 = local_98;
            }
            lVar11 = plVar9[7];
            if (lVar11 != 0) {
              lVar12 = UPawnAction_Sequence::StaticClass();
              if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                bVar19 = false;
              }
              else {
                bVar19 = true;
              }
              if (bVar19) {
                *(undefined4 *)(lVar11 + 0xb8) = 0;
                if (*(int *)(lVar11 + 0xbc) != 0) {
                  TArray<void_*,FDefaultAllocator>::ResizeTo(lVar11 + 0xb0,0);
                }
              }
            }
            FUN_142ee8aa0(piVar18);
            piVar15 = local_c8;
          }
          lVar8 = lVar8 + -1;
          local_88 = lVar8;
        } while (-1 < lVar8);
      }
      lVar8 = local_d0;
      piVar15[-1] = 0;
      if (*piVar15 != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(piVar15 + -3);
      }
      local_d0 = lVar8 + 1;
      piVar15 = piVar15 + 4;
      param_1 = local_b0;
      param_2 = local_c0[0];
      local_c8 = piVar15;
    } while (local_d0 < 4);
  }
  if (param_1[0x3f] != 0) {
    FUN_140c0f7a0();
  }
  *(undefined1 *)(param_1 + 0xb1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xba9) = 0;
  if ((longlong *)param_1[0x164] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x164] + 0x2a8))();
  }
  if (DAT_1469f4590 != 0) {
    FUN_141890fb0(DAT_1469f4590,2);
    FUN_1418c0e60(DAT_1469f4590);
  }
  lVar8 = param_1[0x212];
  if (lVar8 == 0) {
    _Dst = (void *)operator_new(0x270);
    lVar8 = 0;
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x270);
      lVar8 = FUN_140b99d60(_Dst);
    }
    param_1[0x212] = lVar8;
  }
  FUN_140d9f600(lVar8,8);
  lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar8 != 0) {
    uVar13 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar7 = FUN_1428cf800(uVar13);
    if (iVar7 == 3) goto LAB_140bb13f8;
  }
  lVar8 = param_1[0x15d];
  if (lVar8 != 0) {
    plVar10 = *(longlong **)(lVar8 + 0x238);
    plVar9 = plVar10 + *(int *)(lVar8 + 0x240);
    for (; plVar10 != plVar9; plVar10 = plVar10 + 1) {
      lVar11 = *plVar10;
      if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0xc0) == DAT_14686a168)) goto LAB_140bb13f3;
    }
    plVar10 = *(longlong **)(lVar8 + 0x248);
    plVar9 = plVar10 + *(int *)(lVar8 + 0x250);
    for (; plVar10 != plVar9; plVar10 = plVar10 + 1) {
      lVar11 = *plVar10;
      if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0xc0) == DAT_14686a168)) goto LAB_140bb13f3;
    }
  }
LAB_140bb139f:
  if ((param_2 != 0) && (lVar8 = *(longlong *)(param_2 + 0x148), lVar8 != 0)) {
    lVar11 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    if (bVar19) {
      FUN_140cbcb40(lVar8);
    }
  }
  if ((char)param_1[0x238] != '\0') goto LAB_140bb14b9;
  lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  bVar6 = 0;
  if (lVar8 != 0) {
    bVar6 = (byte)(*(uint *)(lVar8 + 0x830) >> 2) & 1;
  }
LAB_140bb14b1:
  FUN_140bc2fb0(param_1,bVar6);
LAB_140bb14b9:
  FUN_140bce120(param_1);
  lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar8 != 0) && ((*(uint *)(lVar8 + 0x830) >> 2 & 1) != 0)) {
    FUN_140be3ca0(param_1);
  }
  if (param_1[0xb6] != 0) {
    FUN_140f04fb0(param_1[0xb6],param_2,&DAT_14686a610);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14686a6c0) && (_Init_thread_header(&DAT_14686a6c0), DAT_14686a6c0 == -1))
  {
    FName::FName(&DAT_14686a6b8,"Recruitment_P",1);
    _Init_thread_footer(&DAT_14686a6c0);
  }
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x18) == DAT_14686a6b8)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if ((*(longlong *)(DAT_146b33f38 + 0x90) != 0) &&
       (lVar8 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x90) + 0x3e0), lVar8 != 0)) {
      lVar11 = UPawnAction_Sequence::StaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      if (bVar19) {
        local_c0[0] = 0;
        local_c0[1] = 0x20;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c0,0);
        FGenericPlatformString::Memcpy(local_c0[0],L"RequestAsyncLoad SingleDelegate",0x40);
        FWeakObjectPtr::operator=(&local_d0,lVar8);
        FWeakObjectPtr::operator=(&local_c8,param_1);
        uVar4 = (undefined4)local_c8;
        uVar5 = local_c8._4_4_;
        uVar2 = (undefined4)local_d0;
        uVar3 = local_d0._4_4_;
        local_98 = local_c8;
        local_90 = (undefined4)local_d0;
        local_8c = local_d0._4_4_;
        local_a8 = (longlong *)0x0;
        local_a0 = 0;
        puVar14 = (undefined8 *)operator_new(0x28,&local_a8);
        if (puVar14 != (undefined8 *)0x0) {
          *puVar14 = &PTR_GetPoolName_144318748;
          *(undefined4 *)(puVar14 + 1) = uVar4;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uVar5;
          *(undefined4 *)(puVar14 + 2) = uVar2;
          *(undefined4 *)((longlong)puVar14 + 0x14) = uVar3;
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar14[4] = uVar13;
          *puVar14 = &PTR_GetPoolName_144318790;
        }
        lVar11 = FUN_1422ca050();
        local_e0 = local_c0;
        local_e8 = 0;
        local_f0 = 1;
        local_f8 = 0;
        FStreamableManager::RequestAsyncLoad(lVar11 + 0x178,&local_88,lVar8 + 0x58,&local_a8);
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_80 + 1;
          lVar8 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar15 = (int *)((longlong)local_80 + 0xc);
            iVar7 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
            }
          }
        }
        if (local_c0[0] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
LAB_140bb13f3:
  if (lVar11 == 0) goto LAB_140bb139f;
LAB_140bb13f8:
  if ((param_2 == 0) || (lVar8 = *(longlong *)(param_2 + 0x148), lVar8 == 0)) goto LAB_140bb14b9;
  lVar11 = FUN_141424d10();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
      != lVar11 + 0x88)) {
    bVar19 = false;
  }
  else {
    bVar19 = true;
  }
  if (((!bVar19) || (*(char *)(lVar8 + 0x638) == '\0')) ||
     ((lVar8 = (**(code **)(*param_1 + 0x148))(param_1), lVar8 != 0 &&
      (((*(uint *)(lVar8 + 0x830) >> 2 & 1) != 0 && ((char)param_1[0x238] != '\0'))))))
  goto LAB_140bb14b9;
  bVar6 = 0;
  goto LAB_140bb14b1;
}



// FUNCTION 140bb1750 FUN_140bb1750 body=629 status=ok
// SIG undefined FUN_140bb1750(void)

void FUN_140bb1750(code *param_1,undefined4 param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  char cVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar11;
  wchar_t *pwVar12;
  bool bVar13;
  undefined8 local_res8;
  undefined4 local_res10;
  code *local_48;
  ulonglong uStack_40;
  wchar_t *pwVar10;
  
  pwVar10 = (wchar_t *)0x0;
  local_res10 = param_2;
  if (*(longlong *)(param_1 + 0x490) != 0) {
    uStack_40 = uStack_40 & 0xffffffff00000000;
    local_48 = FUN_140bdbe30;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSequenceStop",L"::");
    pwVar12 = pwVar10;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar12 = pwVar2;
    }
    FName::FName(&local_res8,pwVar12 + 2,1);
    FUN_140a4d850(*(longlong *)(param_1 + 0x490) + 0x398,param_1,&local_48,local_res8);
    cVar3 = UMovieSceneSequencePlayer::IsPlaying(*(longlong *)(param_1 + 0x490));
    if (cVar3 != '\0') {
      FUN_141f66f00(*(longlong *)(param_1 + 0x490));
    }
    *(longlong *)(param_1 + 0x490) = 0;
    param_1[0x488] = (code)0x0;
  }
  uVar5 = AActor::GetWorldTimerManager(param_1);
  FUN_1428800b0(uVar5,param_1);
  uVar5 = (**(code **)(*(longlong *)param_1 + 0x148))(param_1);
  lVar6 = FUN_142f6c9f0(uVar5);
  if (lVar6 != 0) {
    uStack_40 = 0;
    local_48 = param_1;
    uVar5 = FUN_142f768a0();
    uStack_40 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar5);
    FUN_142f6e000(lVar6,&local_48);
  }
  lVar6 = FUN_1422312c0(param_1);
  if (lVar6 != 0) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) {
      FWeakObjectPtr::operator=(&local_res8,param_1);
      iVar1 = *(int *)(lVar6 + 0xd68);
      if (iVar1 != 0) {
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (*(undefined8 *)(lVar6 + 0xd60),&local_res8);
        bVar13 = cVar3 == '\0';
        pwVar12 = pwVar10;
        do {
          uVar8 = (uint)pwVar10;
          uVar9 = uVar8;
          do {
            uVar9 = uVar9 + 1;
            pwVar10 = (wchar_t *)(ulonglong)uVar9;
            if (iVar1 <= (int)uVar9) break;
            cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                              (*(longlong *)(lVar6 + 0xd60) + (longlong)(int)uVar9 * 8,&local_res8);
          } while (bVar13 == (cVar3 == '\0'));
          if (bVar13 != false) {
            uVar11 = (uint)pwVar12;
            if (uVar11 != uVar8) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(lVar6 + 0xd60) + (longlong)(int)uVar11 * 8),
                         (void *)(*(longlong *)(lVar6 + 0xd60) + (longlong)(int)uVar8 * 8),
                         (longlong)(int)(uVar9 - uVar8) << 3);
            }
            pwVar12 = (wchar_t *)(ulonglong)(uVar11 + (uVar9 - uVar8));
          }
          bVar13 = (bool)(bVar13 ^ 1);
        } while ((int)uVar9 < iVar1);
        *(int *)(lVar6 + 0xd68) = (int)pwVar12;
      }
    }
  }
  FUN_14222a250(param_1,local_res10);
  return;
}



// FUNCTION 140bb19d0 FUN_140bb19d0 body=323 status=ok
// SIG undefined FUN_140bb19d0(void)

void FUN_140bb19d0(longlong param_1,undefined8 param_2,undefined8 *param_3,char param_4,char param_5
                  )

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  if ((param_4 != '\0') && (param_5 == '\0')) {
    puVar7 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
    FUN_140bbd560(&local_38,*puVar7);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x90))(local_38,param_2,param_3,0);
      plVar4 = (longlong *)param_3[1];
      local_28 = *param_3;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_20 = plVar4;
      iVar6 = FUN_140bbba30(*(undefined8 *)(param_1 + 8),&local_28);
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
      if (iVar6 == 2) {
        TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
                  (*(longlong *)(param_1 + 8) + 0xa38,param_3,2);
      }
    }
    plVar4 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bb1b20 FUN_140bb1b20 body=270 status=ok
// SIG undefined FUN_140bb1b20(void)

void FUN_140bb1b20(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 local_res8;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  if ((lVar3 != 0) &&
     (cVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))
                        (*(undefined8 **)(param_1 + 0x10),*param_2), cVar2 != '\0')) {
    local_res8 = *(undefined8 *)(lVar3 + 0xd78);
    *(undefined8 *)(lVar3 + 0xd78) = 0;
    uStack_20 = 0;
    local_38 = 0;
    local_30 = 0;
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    local_28 = FUN_140bd3c60;
    puVar4 = (undefined8 *)operator_new(0x30,&local_38);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_144318dd0;
      FWeakObjectPtr::operator=(puVar4 + 1,lVar3);
      *(undefined4 *)(puVar4 + 2) = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar4 + 0x14) = local_28._4_4_;
      *(undefined4 *)(puVar4 + 3) = uStack_20;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_1c;
      *(undefined4 *)(puVar4 + 4) = uVar1;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[5] = uVar5;
      *puVar4 = &PTR_FUN_144318e18;
    }
    FUN_140bb45f0(lVar3,param_1 + 0x10,param_1 + 0x28,&local_38);
    if ((*(longlong *)(lVar3 + 0x1f8) != 0) &&
       (plVar6 = (longlong *)UUGMenuManager::GetFadeHUD(), plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x88))(plVar6,&local_res8);
    }
  }
  return;
}



// FUNCTION 140bb1c30 FUN_140bb1c30 body=66 status=ok
// SIG undefined FUN_140bb1c30(void)

void FUN_140bb1c30(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  param_1 = param_1 + 8;
  cVar3 = FWeakObjectPtr::IsValid(param_1);
  if (cVar3 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1);
    *(undefined1 *)(lVar1 + 0x11c0) = 0;
    uVar2 = FWeakObjectPtr::Get(param_1);
    FUN_140bc2fb0(uVar2,0);
    return;
  }
  return;
}



// FUNCTION 140bb1c80 FUN_140bb1c80 body=84 status=ok
// SIG undefined FUN_140bb1c80(void)

void FUN_140bb1c80(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_140bd3c60(uVar1,param_2,param_1 + 0x10,param_4,*(undefined4 *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 140bb1ce0 FUN_140bb1ce0 body=111 status=ok
// SIG undefined FUN_140bb1ce0(void)

void FUN_140bb1ce0(longlong param_1,undefined4 param_2)

{
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_28 = *(undefined8 *)(param_1 + 0x20);
  local_20 = *(longlong *)(param_1 + 0x28);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_18 = *(undefined8 *)(param_1 + 0x10);
  local_10 = *(longlong *)(param_1 + 0x18);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_140bdda90(*(undefined8 *)(param_1 + 8),&local_18,&local_28,*(undefined4 *)(param_1 + 0x30),
                param_2);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 5000) = 0;
  return;
}



// FUNCTION 140bb1d60 FUN_140bb1d60 body=157 status=ok
// SIG undefined FUN_140bb1d60(void)

undefined8 FUN_140bb1d60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res18 [16];
  longlong *local_18;
  longlong *local_10;
  
  puVar6 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
  FUN_1404cf890(&local_18,*puVar6);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x118))(local_18,param_1 + 8);
  }
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



// FUNCTION 140bb1e00 FUN_140bb1e00 body=174 status=ok
// SIG undefined FUN_140bb1e00(void)

undefined8 * FUN_140bb1e00(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  code *local_20;
  undefined8 uStack_18;
  
  lVar4 = FWeakObjectPtr::Get(param_1 + 8);
  local_20 = *(code **)(param_1 + 0x10);
  uStack_18 = *(undefined8 *)(param_1 + 0x18);
  puVar5 = (undefined8 *)(*local_20)((int)uStack_18 + lVar4,local_38,param_3);
  *param_2 = *puVar5;
  param_2[1] = puVar5[1];
  puVar5[1] = 0;
  *puVar5 = 0;
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
  return param_2;
}



// FUNCTION 140bb1eb0 Execute body=101 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UGameViewportClient,TTypeWrapper<void>___cdecl(UWorld_*,enum_ETravelFailure::Type,FString_const_&)>
     ::Execute(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140bb1f12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140bb1f20 FUN_140bb1f20 body=101 status=ok
// SIG undefined FUN_140bb1f20(void)

void FUN_140bb1f20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140bb1f82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140bb1f90 Execute body=101 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UGameViewportClient,TTypeWrapper<void>___cdecl(wchar_t_const_*,bool_&,bool_&)>
     ::Execute(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140bb1ff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140bb2000 FUN_140bb2000 body=112 status=ok
// SIG undefined FUN_140bb2000(void)

void FUN_140bb2000(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140bb206d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140bb2070 FUN_140bb2070 body=99 status=ok
// SIG undefined FUN_140bb2070(void)

void FUN_140bb2070(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140bb20d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140bb20e0 FUN_140bb20e0 body=103 status=ok
// SIG undefined FUN_140bb20e0(void)

void FUN_140bb20e0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140bb2144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140bb2150 FUN_140bb2150 body=110 status=ok
// SIG undefined FUN_140bb2150(void)

void FUN_140bb2150(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140bb21bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140bb21c0 FUN_140bb21c0 body=101 status=ok
// SIG undefined FUN_140bb21c0(void)

void FUN_140bb21c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140bb2222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140bb2230 FUN_140bb2230 body=114 status=ok
// SIG undefined FUN_140bb2230(void)

void FUN_140bb2230(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140bb229f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140bb22b0 FUN_140bb22b0 body=150 status=ok
// SIG undefined FUN_140bb22b0(void)

void FUN_140bb22b0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 local_28 [2];
  code *local_18;
  undefined8 uStack_10;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  local_18 = *(code **)(param_1 + 0x10);
  uStack_10 = *(undefined8 *)(param_1 + 0x18);
  local_28[0] = 0;
  FUN_140b946a0(local_28,*param_3,*(undefined4 *)(param_3 + 1),0,0);
  (*local_18)((int)uStack_10 + lVar1,param_2,local_28);
  FUN_1404bed10(param_3);
  return;
}



// FUNCTION 140bb2350 FUN_140bb2350 body=159 status=ok
// SIG undefined FUN_140bb2350(void)

void FUN_140bb2350(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 8);
  local_38 = *param_2;
  local_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  pcVar5 = *(code **)(param_1 + 0x10);
  iStack_18 = *(int *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (*pcVar5)(iStack_18 + lVar6,&local_38,param_3);
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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



// FUNCTION 140bb23f0 Execute body=69 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UUGGameInstance,TTypeWrapper<void>___cdecl(FName)>::
     Execute(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140bb2432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2);
  return;
}



// FUNCTION 140bb2440 FUN_140bb2440 body=101 status=ok
// SIG undefined FUN_140bb2440(void)

void FUN_140bb2440(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140bb24a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140bb24b0 Execute body=103 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UTTLMatchmakeRefereeManager,TTypeWrapper<void>___cdecl(FName,FUniqueNetId_const_&,bool)>
     ::Execute(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140bb2514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140bb2520 FUN_140bb2520 body=85 status=ok
// SIG undefined FUN_140bb2520(void)

void FUN_140bb2520(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140bb2572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 140bb2580 FUN_140bb2580 body=99 status=ok
// SIG undefined FUN_140bb2580(void)

void FUN_140bb2580(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140bb25e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140bb25f0 FUN_140bb25f0 body=99 status=ok
// SIG undefined FUN_140bb25f0(void)

void FUN_140bb25f0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140bb2650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140bb2660 Execute body=99 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UUGGameInstance,TTypeWrapper<void>___cdecl(int,FUniqueNetId_const_&,FUniqueNetId_const_&)>
     ::Execute(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140bb26c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140bb26d0 FUN_140bb26d0 body=107 status=ok
// SIG undefined FUN_140bb26d0(void)

void FUN_140bb26d0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4,
             *(undefined4 *)(param_1 + 0x20));
  return;
}



// FUNCTION 140bb2740 FUN_140bb2740 body=99 status=ok
// SIG undefined FUN_140bb2740(void)

void FUN_140bb2740(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140bb27a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140bb27b0 FUN_140bb27b0 body=102 status=ok
// SIG undefined FUN_140bb27b0(void)

void FUN_140bb27b0(longlong param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140bb2813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140bb2820 FUN_140bb2820 body=205 status=ok
// SIG undefined FUN_140bb2820(void)

void FUN_140bb2820(longlong param_1,undefined1 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 8);
  local_38 = *param_3;
  local_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  pcVar5 = *(code **)(param_1 + 0x10);
  iStack_18 = *(int *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  local_30 = param_3[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (*pcVar5)(iStack_18 + lVar6,param_2,&local_38,param_4,param_5,param_6);
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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



// FUNCTION 140bb28f0 FUN_140bb28f0 body=119 status=ok
// SIG undefined FUN_140bb28f0(void)

undefined8 * FUN_140bb28f0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong local_18;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  puVar2 = (undefined8 *)(**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1)
  ;
  *param_2 = 0;
  *param_2 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  if (local_18 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140bb2970 Execute body=70 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,AArchVisCharacter,TTypeWrapper<void>___cdecl(float)>::
     Execute(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140bb29b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2);
  return;
}



// FUNCTION 140bb29c0 FUN_140bb29c0 body=264 status=ok
// SIG undefined FUN_140bb29c0(void)

ulonglong FUN_140bb29c0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  ulonglong in_RAX;
  undefined8 local_18;
  longlong local_10;
  
  if ((((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) &&
     (in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))(), (char)in_RAX != '\0')) {
    if ((int)param_1[1] == 0) {
      param_1 = (longlong *)0x0;
    }
    else {
      param_1 = (longlong *)*param_1;
    }
    local_18 = *param_2;
    local_10 = param_2[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    bVar6 = (**(code **)(*param_1 + 0x40))(param_1,&local_18,param_3,param_4);
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
    }
    return (ulonglong)bVar6;
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar7 = (int)lVar5 - 1;
    in_RAX = (ulonglong)uVar7;
    if (uVar7 == 0) {
      in_RAX = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        in_RAX = (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140bb2ad0 FUN_140bb2ad0 body=336 status=ok
// SIG undefined FUN_140bb2ad0(void)

undefined8
FUN_140bb2ad0(longlong param_1,undefined8 param_2,undefined8 *param_3,char param_4,char param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  if ((param_4 != '\0') && (param_5 == '\0')) {
    puVar7 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
    FUN_140bbd560(&local_38,*puVar7);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x90))(local_38,param_2,param_3,0);
      plVar4 = (longlong *)param_3[1];
      local_28 = *param_3;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_20 = plVar4;
      iVar6 = FUN_140bbba30(*(undefined8 *)(param_1 + 8),&local_28);
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
      if (iVar6 == 2) {
        TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
                  (*(longlong *)(param_1 + 8) + 0xa38,param_3,2);
      }
    }
    plVar4 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    return 1;
  }
  return 1;
}



// FUNCTION 140bb2c20 FUN_140bb2c20 body=282 status=ok
// SIG undefined FUN_140bb2c20(void)

undefined8 FUN_140bb2c20(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 local_res8;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar3 != 0) {
    cVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))
                      (*(undefined8 **)(param_1 + 0x10),*param_2);
    if (cVar2 != '\0') {
      local_res8 = *(undefined8 *)(lVar3 + 0xd78);
      *(undefined8 *)(lVar3 + 0xd78) = 0;
      uStack_20 = 0;
      local_38 = 0;
      local_30 = 0;
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      local_28 = FUN_140bd3c60;
      puVar4 = (undefined8 *)operator_new(0x30,&local_38);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_144318dd0;
        FWeakObjectPtr::operator=(puVar4 + 1,lVar3);
        *(undefined4 *)(puVar4 + 2) = (undefined4)local_28;
        *(undefined4 *)((longlong)puVar4 + 0x14) = local_28._4_4_;
        *(undefined4 *)(puVar4 + 3) = uStack_20;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_1c;
        *(undefined4 *)(puVar4 + 4) = uVar1;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[5] = uVar5;
        *puVar4 = &PTR_FUN_144318e18;
      }
      FUN_140bb45f0(lVar3,param_1 + 0x10,param_1 + 0x28,&local_38);
      if (*(longlong *)(lVar3 + 0x1f8) != 0) {
        plVar6 = (longlong *)UUGMenuManager::GetFadeHUD();
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x88))(plVar6,&local_res8);
        }
      }
    }
    return 1;
  }
  return 1;
}



// FUNCTION 140bb2d40 FUN_140bb2d40 body=63 status=ok
// SIG undefined FUN_140bb2d40(void)

undefined1 FUN_140bb2d40(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  param_1 = param_1 + 8;
  cVar3 = FWeakObjectPtr::IsValid(param_1);
  if (cVar3 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1);
    *(undefined1 *)(lVar1 + 0x11c0) = 0;
    uVar2 = FWeakObjectPtr::Get(param_1);
    FUN_140bc2fb0(uVar2,0);
  }
  return 1;
}



// FUNCTION 140bb2d80 FUN_140bb2d80 body=86 status=ok
// SIG undefined FUN_140bb2d80(void)

undefined1 FUN_140bb2d80(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_140bd3c60(uVar1,param_2,param_1 + 0x10,param_4,*(undefined4 *)(param_1 + 0x20));
  }
  return 1;
}



// FUNCTION 140bb2de0 FUN_140bb2de0 body=113 status=ok
// SIG undefined FUN_140bb2de0(void)

undefined8 FUN_140bb2de0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_28 = *(undefined8 *)(param_1 + 0x20);
  local_20 = *(longlong *)(param_1 + 0x28);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_18 = *(undefined8 *)(param_1 + 0x10);
  local_10 = *(longlong *)(param_1 + 0x18);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_140bdda90(*(undefined8 *)(param_1 + 8),&local_18,&local_28,*(undefined4 *)(param_1 + 0x30),
                param_2);
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(lVar1 + 5000) = 0;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 140bb2e60 FUN_140bb2e60 body=20 status=ok
// SIG undefined FUN_140bb2e60(void)

undefined1 FUN_140bb2e60(longlong param_1)

{
  FUN_140ba1300(param_1 + 8);
  return 1;
}



// FUNCTION 140bb2e80 ExecuteIfSafe body=129 status=ok
// SIG undefined ExecuteIfSafe(void)

bool TBaseUObjectMethodDelegateInstance<0,UGameViewportClient,void___cdecl(UWorld_*,enum_ETravelFailure::Type,FString_const_&)>
     ::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4);
  }
  return lVar1 != 0;
}



// FUNCTION 140bb2f10 FUN_140bb2f10 body=129 status=ok
// SIG undefined FUN_140bb2f10(void)

bool FUN_140bb2f10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4);
  }
  return lVar1 != 0;
}



// FUNCTION 140bb2fa0 ExecuteIfSafe body=129 status=ok
// SIG undefined ExecuteIfSafe(void)

bool TBaseUObjectMethodDelegateInstance<0,UGameViewportClient,void___cdecl(wchar_t_const_*,bool_&,bool_&)>
     ::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4);
  }
  return lVar1 != 0;
}



// FUNCTION 140bb3030 FUN_140bb3030 body=129 status=ok
// SIG undefined FUN_140bb3030(void)

bool FUN_140bb3030(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4);
  }
  return lVar1 != 0;
}



// FUNCTION 140bb30c0 FUN_140bb30c0 body=140 status=ok
// SIG undefined FUN_140bb30c0(void)

bool FUN_140bb30c0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4,param_5);
  }
  return lVar1 != 0;
}



// FUNCTION 140bb3150 FUN_140bb3150 body=129 status=ok
// SIG undefined FUN_140bb3150(void)

bool FUN_140bb3150(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4);
  }
  return lVar1 != 0;
}



// FUNCTION 140bb31e0 FUN_140bb31e0 body=131 status=ok
// SIG undefined FUN_140bb31e0(void)

bool FUN_140bb31e0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4);
  }
  return lVar1 != 0;
}



// FUNCTION 140bb3270 FUN_140bb3270 body=148 status=ok
// SIG undefined FUN_140bb3270(void)

bool FUN_140bb3270(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4,param_5,param_6)
    ;
  }
  return lVar1 != 0;
}



// FUNCTION 140bb3310 FUN_140bb3310 body=129 status=ok
// SIG undefined FUN_140bb3310(void)

bool FUN_140bb3310(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4);
  }
  return lVar1 != 0;
}



// FUNCTION 140bb33a0 FUN_140bb33a0 body=142 status=ok
// SIG undefined FUN_140bb33a0(void)

bool FUN_140bb33a0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4,param_5);
  }
  return lVar1 != 0;
}



// FUNCTION 140bb3430 FUN_140bb3430 body=237 status=ok
// SIG undefined FUN_140bb3430(void)

bool FUN_140bb3430(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28 [2];
  code *local_18;
  undefined8 uStack_10;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 == 0) {
    FUN_1404bed10(param_3);
  }
  else {
    local_38 = 0;
    FUN_140b946a0(&local_38,*param_3,*(undefined4 *)(param_3 + 1),0,0);
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    local_18 = *(code **)(param_1 + 0x10);
    uStack_10 = *(undefined8 *)(param_1 + 0x18);
    local_28[0] = 0;
    FUN_140b946a0(local_28,local_38,local_30,0,0);
    (*local_18)((int)uStack_10 + lVar2,param_2,local_28);
    FUN_1404bed10(&local_38);
    FUN_1404bed10(param_3);
  }
  return lVar1 != 0;
}



// FUNCTION 140bb3520 FUN_140bb3520 body=311 status=ok
// SIG undefined FUN_140bb3520(void)

undefined8 FUN_140bb3520(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 8);
  plVar4 = (longlong *)param_2[1];
  if (lVar6 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    uVar7 = 0;
  }
  else {
    uVar7 = *param_2;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    lVar6 = FWeakObjectPtr::Get(param_1 + 8);
    local_30 = *(undefined4 *)(param_1 + 0x10);
    uStack_2c = *(undefined4 *)(param_1 + 0x14);
    pcVar5 = *(code **)(param_1 + 0x10);
    iStack_28 = *(int *)(param_1 + 0x18);
    uStack_24 = *(undefined4 *)(param_1 + 0x1c);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_48 = uVar7;
    local_40 = plVar4;
    (*pcVar5)(iStack_28 + lVar6,&local_48,param_3);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 140bb3660 ExecuteIfSafe body=111 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseUObjectMethodDelegateInstance<0,UUGGameInstance,void___cdecl(FName)>::ExecuteIfSafe
          (longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2);
    return 1;
  }
  return 0;
}



// FUNCTION 140bb36d0 FUN_140bb36d0 body=129 status=ok
// SIG undefined FUN_140bb36d0(void)

bool FUN_140bb36d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4);
  }
  return lVar1 != 0;
}



// FUNCTION 140bb3760 ExecuteIfSafe body=131 status=ok
// SIG undefined ExecuteIfSafe(void)

bool TBaseUObjectMethodDelegateInstance<0,UTTLMatchmakeRefereeManager,void___cdecl(FName,FUniqueNetId_const_&,bool)>
     ::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4);
  }
  return lVar1 != 0;
}



// FUNCTION 140bb37f0 FUN_140bb37f0 body=111 status=ok
// SIG undefined FUN_140bb37f0(void)

bool FUN_140bb37f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3);
  }
  return lVar1 != 0;
}



// FUNCTION 140bb3860 FUN_140bb3860 body=129 status=ok
// SIG undefined FUN_140bb3860(void)

bool FUN_140bb3860(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4);
  }
  return lVar1 != 0;
}



// FUNCTION 140bb38f0 FUN_140bb38f0 body=139 status=ok
// SIG undefined FUN_140bb38f0(void)

bool FUN_140bb38f0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4,param_5);
  }
  return lVar1 != 0;
}



// FUNCTION 140bb3980 ExecuteIfSafe body=129 status=ok
// SIG undefined ExecuteIfSafe(void)

bool TBaseUObjectMethodDelegateInstance<0,UUGGameInstance,void___cdecl(int,FUniqueNetId_const_&,FUniqueNetId_const_&)>
     ::ExecuteIfSafe(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4);
  }
  return lVar1 != 0;
}



// FUNCTION 140bb3a10 FUN_140bb3a10 body=136 status=ok
// SIG undefined FUN_140bb3a10(void)

bool FUN_140bb3a10(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4,
               *(undefined4 *)(param_1 + 0x20));
  }
  return lVar1 != 0;
}



// FUNCTION 140bb3aa0 FUN_140bb3aa0 body=139 status=ok
// SIG undefined FUN_140bb3aa0(void)

bool FUN_140bb3aa0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4,param_5);
  }
  return lVar1 != 0;
}



// FUNCTION 140bb3b30 FUN_140bb3b30 body=131 status=ok
// SIG undefined FUN_140bb3b30(void)

bool FUN_140bb3b30(longlong param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4);
  }
  return lVar1 != 0;
}



// FUNCTION 140bb3bc0 FUN_140bb3bc0 body=361 status=ok
// SIG undefined FUN_140bb3bc0(void)

undefined8
FUN_140bb3bc0(longlong param_1,undefined1 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 8);
  plVar4 = (longlong *)param_3[1];
  if (lVar6 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    uVar7 = 0;
  }
  else {
    uVar7 = *param_3;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    lVar6 = FWeakObjectPtr::Get(param_1 + 8);
    local_30 = *(undefined4 *)(param_1 + 0x10);
    uStack_2c = *(undefined4 *)(param_1 + 0x14);
    pcVar5 = *(code **)(param_1 + 0x10);
    iStack_28 = *(int *)(param_1 + 0x18);
    uStack_24 = *(undefined4 *)(param_1 + 0x1c);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_48 = uVar7;
    local_40 = plVar4;
    (*pcVar5)(iStack_28 + lVar6,param_2,&local_48,param_4,param_5,param_6);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    plVar4 = (longlong *)param_3[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 140bb3d30 FUN_140bb3d30 body=292 status=ok
// SIG undefined FUN_140bb3d30(void)

void FUN_140bb3d30(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_18 [2];
  
  FBaseGraphTask::GetSmallTaskAllocator();
  FUN_1419e5460();
  uVar3 = FName::ToString(&DAT_14686a8f0,local_18);
  FShaderPipelineCache::OpenPipelineFileCache(uVar3,DAT_146ab62cc);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  FUN_141a0cce0(2);
  FUN_141a0a7b0();
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_144319540;
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
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 140bb3e60 FUN_140bb3e60 body=233 status=ok
// SIG undefined FUN_140bb3e60(void)

void FUN_140bb3e60(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  FUN_141a0cce0(0);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_144319550;
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



// FUNCTION 140bb3f50 FUN_140bb3f50 body=231 status=ok
// SIG undefined FUN_140bb3f50(void)

void FUN_140bb3f50(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  FUN_141a10300();
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_144318d30;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
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



// FUNCTION 140bb4040 FUN_140bb4040 body=253 status=ok
// SIG undefined FUN_140bb4040(void)

void FUN_140bb4040(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  FUN_1411f3560(param_1[3] + 0x7a0,*(undefined4 *)(param_1 + 2),
                *(int *)((longlong)param_1 + 0x14) == 1);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1443194f8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 140bb4140 FUN_140bb4140 body=247 status=ok
// SIG undefined FUN_140bb4140(void)

void FUN_140bb4140(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_140ba09d0(param_1 + 2,uVar3);
  FUN_140b9c260(param_1 + 2);
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_1443194e8;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 140bb4240 FUN_140bb4240 body=231 status=ok
// SIG undefined FUN_140bb4240(void)

void FUN_140bb4240(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  ConsoleCommandSavePipelineFileCache();
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_144319508;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
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



// FUNCTION 140bb4330 FUN_140bb4330 body=21 status=ok
// SIG undefined FUN_140bb4330(void)

void FUN_140bb4330(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140bb7220();
  FUN_140d75b20(uVar1);
  return;
}



// FUNCTION 140bb4350 FUN_140bb4350 body=170 status=ok
// SIG undefined FUN_140bb4350(void)

longlong FUN_140bb4350(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  plVar4 = plVar1;
  while( true ) {
    if (plVar4 == plVar1 + (longlong)(int)lVar2 * 0x1d) {
      return 0xffffffff;
    }
    if ((((*plVar4 != 0) && ((undefined8 *)*param_2 != (undefined8 *)0x0)) &&
        (cVar3 = (*(code *)**(undefined8 **)*param_2)(), cVar3 != '\0')) &&
       (((plVar4[2] != 0 && ((undefined8 *)param_2[2] != (undefined8 *)0x0)) &&
        (cVar3 = (*(code *)**(undefined8 **)param_2[2])(), cVar3 != '\0')))) break;
    plVar4 = plVar4 + 0x1d;
  }
  return ((longlong)plVar4 - (longlong)plVar1) / 0xe8;
}



// FUNCTION 140bb4400 Find body=106 status=ok
// SIG undefined Find(void)

longlong TArray<TScriptInterface<ITTLArsenalHUDMakerInterface>,FDefaultAllocator>::Find
                   (longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != plVar1 + (longlong)(int)param_1[1] * 2) {
    plVar2 = plVar1;
    do {
      if (*plVar2 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = plVar2[1];
      }
      if (*param_2 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = param_2[1];
      }
      if ((lVar4 == lVar3) && (*plVar2 == *param_2)) {
        return (longlong)plVar2 - (longlong)plVar1 >> 4;
      }
      plVar2 = plVar2 + 2;
    } while (plVar2 != plVar1 + (longlong)(int)param_1[1] * 2);
  }
  return 0xffffffff;
}



// FUNCTION 140bb4470 FUN_140bb4470 body=381 status=ok
// SIG undefined FUN_140bb4470(void)

void FUN_140bb4470(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_48 [8];
  longlong *local_40;
  int local_38;
  longlong *local_30;
  longlong *local_28;
  
  FUN_1404d0c50(&local_30,0);
  if (local_30 == (longlong *)0x0) goto LAB_140bb4590;
  FString::operator=(param_1 + 0x50,param_3);
  local_40 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_38 = 3;
  local_40 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_140bd3330;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar6 = (undefined8 *)(**(code **)(*local_30 + 0x1b0))(local_30,local_48,&local_40);
  *(undefined8 *)(param_1 + 0x60) = *puVar6;
  if (local_38 == 0) {
LAB_140bb4571:
    if (local_40 != (longlong *)0x0) {
      FMemory::Free(local_40);
    }
  }
  else if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x28))(local_40,0);
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)FMemory::Realloc(local_40,0,0);
    }
    local_38 = 0;
    goto LAB_140bb4571;
  }
  (**(code **)(*local_30 + 0x1a8))(local_30,param_2,param_3);
LAB_140bb4590:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  return;
}



// FUNCTION 140bb45f0 FUN_140bb45f0 body=1220 status=ok
// SIG undefined FUN_140bb45f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bb45f0(longlong param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  int local_190;
  void *local_188;
  ulonglong local_180;
  undefined8 local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  void *local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined **local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined **local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_158 = (code *)(param_3 + 0x28);
  plVar8 = (longlong *)0x0;
  local_188 = (void *)0x0;
  local_180 = 0;
  cVar5 = FUN_1404a96c0(local_158,DAT_14686a630,&local_188);
  if ((cVar5 == '\0') || ((int)local_180 < 2)) {
    local_118 = &PTR_FUN_143f769a8;
    local_110 = 0;
    local_f0 = &PTR_FUN_143f769a0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d4 = 0;
    local_cc = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0xffffffff;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 9999;
    if (((int)param_4[1] != 0) &&
       (((longlong *)*param_4 != (longlong *)0x0 &&
        (cVar5 = (**(code **)(*(longlong *)*param_4 + 0x18))(), cVar5 != '\0')))) {
      if ((int)param_4[1] != 0) {
        plVar8 = (longlong *)*param_4;
      }
      (**(code **)(*plVar8 + 0x40))(plVar8,2,param_2,&local_118);
    }
    FUN_1404bf650(&local_118);
    goto LAB_140bb4a66;
  }
  puVar6 = (undefined8 *)FName::FName(local_130,L"SPARK",1);
  FUN_1404d0c50(&local_168,*puVar6);
  plVar8 = local_168;
  if (local_168 != (longlong *)0x0) {
    local_170 = (longlong *)param_2[1];
    local_178 = *param_2;
    if (local_170 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_170 + 1) = (int)local_170[1] + 1;
      UNLOCK();
    }
    if ((undefined8 *)(param_1 + 0xf18) != &local_178) {
      *(undefined8 *)(param_1 + 0xf18) = local_178;
      local_178 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xf20,&local_170);
    }
    plVar7 = local_170;
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_170 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      plVar8 = local_168;
      if ((int)lVar9 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar8 = local_168;
        if (iVar3 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
          plVar8 = local_168;
        }
      }
    }
    ppvVar2 = (void **)(param_1 + 0xf28);
    if (ppvVar2 != &local_188) {
      lVar9 = (longlong)(int)local_180;
      local_148 = local_188;
      *(int *)(param_1 + 0xf30) = (int)local_180;
      if (((int)local_180 == 0) && (*(int *)(param_1 + 0xf34) == 0)) {
        *(undefined4 *)(param_1 + 0xf34) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar2,local_180 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppvVar2,local_148,lVar9 * 2);
      }
    }
    plVar7 = (longlong *)(param_1 + 0xf50);
    if (param_4 != plVar7) {
      if (((int)param_4[1] == 0) || (plVar4 = (longlong *)*param_4, plVar4 == (longlong *)0x0)) {
        if ((*(int *)(param_1 + 0xf58) != 0) &&
           (plVar4 = (longlong *)*plVar7, plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          if (*plVar7 != 0) {
            lVar9 = FMemory::Realloc(*plVar7,0,0);
            *plVar7 = lVar9;
          }
          *(undefined4 *)(param_1 + 0xf58) = 0;
        }
      }
      else {
        (**(code **)(*plVar4 + 0x30))(plVar4,plVar7);
      }
    }
    puVar6 = (undefined8 *)FName::FName(local_128,L"FRIENDPASSCODE",1);
    FUN_1404a96c0(local_158,*puVar6,param_1 + 0xf38);
    if (*(longlong *)(param_1 + 0xf48) == 0) {
      uStack_150 = 0;
      local_198 = (longlong *)0x0;
      local_158 = FUN_140bd3400;
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      local_190 = 3;
      local_198 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_144318e60;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        *(undefined4 *)(plVar7 + 2) = (undefined4)local_158;
        *(undefined4 *)((longlong)plVar7 + 0x14) = local_158._4_4_;
        *(undefined4 *)(plVar7 + 3) = uStack_150;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_14c;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar9;
        *plVar7 = (longlong)&PTR_FUN_144318ea8;
      }
      puVar6 = (undefined8 *)(**(code **)(*plVar8 + 0x1b0))(plVar8,local_120,&local_198);
      *(undefined8 *)(param_1 + 0xf48) = *puVar6;
      if (local_190 != 0) {
        if (local_198 == (longlong *)0x0) goto LAB_140bb48f4;
        (**(code **)(*local_198 + 0x28))(local_198,0);
        if (local_198 != (longlong *)0x0) {
          local_198 = (longlong *)FMemory::Realloc(local_198,0,0);
        }
        local_190 = 0;
      }
      if (local_198 != (longlong *)0x0) {
        FMemory::Free(local_198);
      }
    }
LAB_140bb48f4:
    local_140 = *(undefined8 *)(param_1 + 0xf18);
    local_138 = *(longlong **)(param_1 + 0xf20);
    if (local_138 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_138 + 1) = (int)local_138[1] + 1;
      UNLOCK();
      plVar8 = local_168;
    }
    (**(code **)(*plVar8 + 0x1a8))(plVar8,&local_140,&local_188);
    plVar8 = local_138;
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_138 + 1;
      lVar9 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  plVar8 = local_160;
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_160 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_160 + 8))(local_160,1);
      }
    }
  }
LAB_140bb4a66:
  if (local_188 != (void *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return;
}



// FUNCTION 140bb4ac0 FUN_140bb4ac0 body=711 status=ok
// SIG undefined FUN_140bb4ac0(void)

void FUN_140bb4ac0(longlong param_1,char param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 local_308 [184];
  undefined1 local_250 [24];
  undefined1 local_238 [24];
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined1 local_208 [232];
  undefined1 local_120 [16];
  undefined1 local_110 [232];
  undefined1 local_28 [16];
  
  if ((*(longlong *)(param_1 + 0x4e0) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x4e0) + 0x10) == '\0')) {
    if (param_2 == '\0') {
      FUN_140dc08b0();
    }
    else {
      FUN_140dc0b70(param_3);
    }
  }
  else {
    cVar2 = FUN_140678610();
    if (cVar2 != '\0') {
      if (param_2 == '\0') {
        lVar3 = FUN_140db9ba0(local_208);
      }
      else {
        lVar3 = FUN_140dbb160(local_110,param_3);
      }
      FUN_140b9a160(local_308,lVar3);
      FText::FText(local_250,lVar3 + 0xb8);
      FText::FText(local_238,lVar3 + 0xd0);
      local_220 = *(undefined8 *)(lVar3 + 0xe8);
      *(undefined8 *)(lVar3 + 0xe8) = 0;
      local_218 = *(undefined4 *)(lVar3 + 0xf0);
      local_214 = *(undefined4 *)(lVar3 + 0xf4);
      *(undefined8 *)(lVar3 + 0xf0) = 0;
      if (param_2 == '\0') {
        FUN_140b9c710(local_120);
        FUN_140b9d5e0(local_208);
      }
      else {
        FUN_140b9c710(local_28);
        FUN_140b9d5e0(local_110);
      }
      cVar2 = FUN_140dc1380(local_308);
      if (cVar2 == '\0') {
        TBaseMulticastDelegate<void>::Broadcast(param_1 + 0xc60);
      }
      else {
        *(undefined1 *)(param_1 + 0x12d0) = 1;
        if ((param_2 != '\0') && (puVar1 = (undefined8 *)(param_1 + 0x12d8), param_3 != puVar1)) {
          if (*(char *)(param_1 + 0x1310) != '\0') {
            *(undefined1 *)(param_1 + 0x1310) = 0;
            FUN_140b9da90(puVar1);
          }
          *puVar1 = *param_3;
          lVar3 = param_3[1];
          *(longlong *)(param_1 + 0x12e0) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(param_1 + 0x12e8) = param_3[2];
          *(undefined8 *)(param_1 + 0x12f0) = 0;
          iVar4 = *(int *)(param_3 + 4);
          lVar3 = param_3[3];
          *(int *)(param_1 + 0x12f8) = iVar4;
          if (iVar4 == 0) {
            *(undefined4 *)(param_1 + 0x12fc) = 0;
          }
          else {
            TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1 + 0x12f0,iVar4,0);
            lVar6 = *(longlong *)(param_1 + 0x12f0);
            puVar5 = (undefined4 *)(lVar3 + 0x14);
            do {
              FString::FString(lVar6,puVar5 + -5);
              *(undefined4 *)(lVar6 + 0x10) = puVar5[-1];
              *(undefined4 *)(lVar6 + 0x14) = *puVar5;
              lVar6 = lVar6 + 0x18;
              iVar4 = iVar4 + -1;
              puVar5 = puVar5 + 6;
            } while (iVar4 != 0);
          }
          *(undefined8 *)(param_1 + 0x1300) = 0;
          iVar4 = *(int *)(param_3 + 6);
          lVar3 = param_3[5];
          *(int *)(param_1 + 0x1308) = iVar4;
          if (iVar4 == 0) {
            *(undefined4 *)(param_1 + 0x130c) = 0;
          }
          else {
            TArray<FOptionRowData,FDefaultAllocator>::ResizeForCopy(param_1 + 0x1300,iVar4,0);
            lVar6 = *(longlong *)(param_1 + 0x1300);
            do {
              FUN_140b99af0(lVar6,lVar3);
              lVar6 = lVar6 + 0x128;
              lVar3 = lVar3 + 0x128;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          *(undefined1 *)(param_1 + 0x1310) = 1;
        }
        FUN_140ba8040(param_1);
      }
      FUN_140b9c710(&local_220);
      FUN_140b9d5e0(local_308);
      return;
    }
  }
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0xc60);
  return;
}



// FUNCTION 140bb4d90 FUN_140bb4d90 body=2425 status=ok
// SIG undefined FUN_140bb4d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bb4d90(longlong param_1)

{
  int *piVar1;
  void *pvVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  DWORD DVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  double dVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined1 auStack_4d8 [32];
  uint local_4b8;
  undefined8 local_4a8;
  longlong *plStack_4a0;
  longlong local_498 [8];
  void *local_458;
  ulonglong local_450;
  void *local_448;
  ulonglong local_440;
  longlong local_438;
  undefined8 local_430;
  void *local_428;
  int local_420;
  undefined8 local_418;
  longlong *plStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8 [2];
  longlong local_3a0 [2];
  longlong local_390 [2];
  longlong local_380 [2];
  longlong local_370 [2];
  longlong local_360 [3];
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  longlong local_2b8 [2];
  longlong local_2a8 [2];
  undefined8 local_298;
  longlong *local_290;
  longlong local_288;
  longlong local_280;
  float local_278;
  void *local_270;
  int local_268;
  undefined4 local_264;
  void *local_260;
  int local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined4 local_108;
  void *local_100;
  int local_f8;
  undefined4 local_f4;
  uint local_f0;
  undefined1 local_e8 [48];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_4d8;
  local_4b8 = 0;
  lVar8 = UGameInstance::GetFirstGamePlayer();
  local_438 = lVar8;
  lVar9 = FUN_140bba540();
  if (*(char *)(param_1 + 0x13a0) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x13a1) == '\0') {
    return;
  }
  if (DAT_146af4a80 == 0) {
    return;
  }
  if (lVar8 == 0) {
    return;
  }
  if (lVar9 == 0) {
    return;
  }
  if (DAT_146ab6358 == (longlong *)0x0) {
    return;
  }
  dVar16 = *(double *)(param_1 + 0x13b0) - *(double *)(param_1 + 0x13a8);
  *(undefined2 *)(param_1 + 0x13a0) = 1;
  if (dVar16 <= 0.0) {
    dVar16 = 0.0;
  }
  fVar18 = (float)dVar16;
  if (*(char *)(param_1 + 0x13a2) == '\0') {
    local_498[0] = 0;
    local_498[1] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_498,0);
    FGenericPlatformString::Memcpy(local_498[0],L"{{DateTime}}",0x1a);
    uVar10 = FUN_14247e410(local_2b8,local_498);
    FString::operator=(lVar9 + 0x1c0,uVar10);
    if (local_2b8[0] != 0) {
      FMemory::Free();
    }
    if (local_498[0] != 0) {
      FMemory::Free();
    }
    *(float *)(lVar9 + 0x1e4) = (float)*(double *)(DAT_146af4a80 + 0x88);
    *(float *)(lVar9 + 0x1e0) = (float)(1000.0 / *(double *)(DAT_146af4a80 + 0x88));
    FString::operator=(lVar9 + 0x1d0,DAT_146af4a80 + 0x50);
    *(float *)(lVar9 + 0x1f0) = fVar18;
  }
  lVar8 = DAT_14686a5f8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    lVar12 = 1;
    if (DVar7 != DAT_1468c21c0) goto LAB_140bb4f5c;
  }
  lVar12 = 0;
LAB_140bb4f5c:
  if (0 < *(int *)(lVar8 + lVar12 * 4)) {
    local_448 = (void *)0x0;
    local_440 = 0;
    local_458 = (void *)0x0;
    local_450 = 0;
    FUN_1416a0990(&local_448,&local_458);
    FUN_1416a13c0(&local_348);
    FUN_14169e170(local_3a8,&DAT_146ab6ae8);
    local_408 = 0xffffffffffffffff;
    uStack_400 = 0xffffffffffffffff;
    local_3f8 = 0xffffffffffffffff;
    uStack_3f0 = 0xffffffffffffffff;
    local_3b8 = 0;
    uStack_3b0 = 0;
    local_3e8 = 0;
    uStack_3e0 = 0;
    local_3d8 = 0;
    uStack_3d0 = 0;
    local_3c8 = 0;
    uStack_3c0 = 0;
    (**(code **)(*DAT_146ab6358 + 0x1f0))(DAT_146ab6358,&local_408);
    lVar8 = DAT_1468536c8;
    if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
      bVar6 = FUN_14059f100(DAT_1468536c8);
      local_4b8 = (uint)bVar6;
      bVar4 = true;
      bVar3 = false;
      plVar11 = (longlong *)FUN_14059b1b0(lVar8,local_2a8);
    }
    else {
      local_4b8 = 0xffffffff;
      local_498[2] = 0;
      bVar4 = false;
      bVar3 = true;
      local_498[3] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_498 + 2,0);
      FGenericPlatformString::Memcpy(local_498[2],L"Unknown",0x10);
      plVar11 = local_498 + 2;
    }
    pvVar2 = (void *)*plVar11;
    *plVar11 = 0;
    lVar8 = plVar11[1];
    local_420 = (int)lVar8;
    plVar11[1] = 0;
    local_428 = pvVar2;
    if ((bVar3) && (local_498[2] != 0)) {
      FMemory::Free();
    }
    if ((bVar4) && (local_2a8[0] != 0)) {
      FMemory::Free();
    }
    uVar17 = 0;
    uVar19 = 0;
    cVar5 = FUN_140cba6c0(lVar9);
    if (cVar5 != '\0') {
      uVar17 = *(undefined4 *)(lVar9 + 0xf8);
      uVar19 = *(undefined4 *)(lVar9 + 0xf4);
    }
    lVar12 = FUN_142547b50(local_438,local_e8);
    local_290 = *(longlong **)(lVar12 + 0x10);
    local_298 = *(undefined8 *)(lVar12 + 8);
    iVar15 = (int)lVar8;
    if (local_290 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_290 + 1) = (int)local_290[1] + 1;
      UNLOCK();
      iVar15 = local_420;
    }
    local_4a8 = local_298;
    plStack_4a0 = local_290;
    FUN_1404bf980(local_e8);
    pvVar2 = local_448;
    plVar11 = local_290;
    if (local_290 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_290 + 1) = (int)local_290[1] + 1;
      UNLOCK();
      plVar11 = plStack_4a0;
      iVar15 = local_420;
    }
    lVar8 = (longlong)(int)local_440;
    local_270 = (void *)0x0;
    local_268 = (int)local_440;
    local_288 = lVar9;
    local_280 = param_1;
    local_278 = fVar18;
    if ((int)local_440 == 0) {
      local_264 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_270,local_440 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_270,pvVar2,lVar8 * 2);
    }
    pvVar2 = local_458;
    lVar8 = (longlong)(int)local_450;
    local_260 = (void *)0x0;
    local_258 = (int)local_450;
    if ((int)local_450 == 0) {
      local_254 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_260,local_450 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_260,pvVar2,lVar8 * 2);
    }
    local_248 = local_348;
    local_240 = local_340;
    local_238 = local_338;
    local_230 = local_330;
    local_228 = local_328;
    local_220 = local_320;
    local_218 = local_318;
    local_210 = local_310;
    local_208 = local_308;
    local_200 = local_300;
    local_1f8 = local_2f8;
    local_1f0 = local_2f0;
    local_1e8 = local_2e8;
    local_1e0 = local_2e0;
    local_1d8 = local_2d8;
    local_1c0 = local_408;
    uStack_1b8 = uStack_400;
    local_1d0 = local_2d0;
    local_1b0 = local_3f8;
    uStack_1a8 = uStack_3f0;
    local_1c8 = local_2c8;
    uStack_188 = CONCAT44(uStack_3cc,uStack_3d0);
    local_1a0 = local_3e8;
    uStack_198 = uStack_3e0;
    local_160 = local_3a8[0];
    local_190 = local_3d8;
    local_180 = local_3c8;
    uStack_178 = uStack_3c0;
    local_170 = local_3b8;
    uStack_168 = uStack_3b0;
    local_250 = uVar19;
    FString::FString(local_158,local_3a0);
    FString::FString(local_148,local_390);
    FString::FString(local_138,local_380);
    FString::FString(local_128,local_370);
    FString::FString(local_118,local_360);
    local_100 = (void *)0x0;
    local_108 = uVar17;
    local_f8 = iVar15;
    if (iVar15 == 0) {
      local_f4 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_100,iVar15,0);
      _guard_xfg_dispatch_icall_nop(local_100,local_428,(longlong)iVar15 * 2);
    }
    local_f0 = local_4b8;
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar13 = (undefined8 *)FUN_140438ef0(0x1b8,local_a8);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = &PTR_FUN_144319518;
      FUN_140b99470(puVar13 + 1,&local_298);
    }
    local_498[6] = 0;
    local_b8[0] = &LAB_140ba5620;
    local_498[7] = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_498 + 6,0);
    FGenericPlatformString::Memcpy(local_498[6],L"benchmark_results",0x24);
    local_498[4] = 0;
    local_498[5] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_498 + 4,0);
    FGenericPlatformString::Memcpy(local_498[4],L"gbxtelemetry",0x1a);
    local_418 = local_4a8;
    plStack_410 = plStack_4a0;
    plVar14 = (longlong *)0x0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      plVar14 = plStack_4a0;
    }
    FUN_142b62c30(&local_418,local_498 + 4,local_498 + 6,local_b8);
    plVar11 = plStack_410;
    if (plStack_410 != (longlong *)0x0) {
      LOCK();
      plVar14 = plStack_410 + 1;
      lVar8 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      plVar14 = plStack_4a0;
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_410)(plStack_410);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar14 = plStack_4a0;
        if (iVar15 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
          plVar14 = plStack_4a0;
        }
      }
    }
    if (local_498[4] != 0) {
      FMemory::Free();
    }
    if (local_498[6] != 0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      plVar11 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar11 = local_88;
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_140b9c180(&local_298);
    plVar11 = plStack_4a0;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar14 + 1;
      lVar8 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_4a0)(plStack_4a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plStack_4a0 + 8))(plStack_4a0,1);
        }
      }
    }
    if (local_428 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_360[0] != 0) {
      FMemory::Free();
    }
    if (local_370[0] != 0) {
      FMemory::Free();
    }
    if (local_380[0] != 0) {
      FMemory::Free();
    }
    if (local_390[0] != 0) {
      FMemory::Free();
    }
    if (local_3a0[0] != 0) {
      FMemory::Free();
    }
    if (local_458 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_448 != (void *)0x0) {
      FMemory::Free();
    }
  }
  lVar8 = *(longlong *)(local_438 + 0x30);
  if (lVar8 != 0) {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_140d12e80(lVar8);
    }
  }
  if (*(char *)(param_1 + 0x13a2) == '\0') {
    FUN_140be5070(param_1);
  }
  else {
    *(int *)(param_1 + 0x13bc) = *(int *)(param_1 + 0x13bc) + -1;
    if (*(int *)(param_1 + 0x13bc) < 1) {
      FUN_1416a8180(0);
    }
    else {
      local_430 = 0;
      FUN_140bc8be0(param_1,&local_430);
    }
  }
  return;
}



// FUNCTION 140bb5710 FUN_140bb5710 body=705 status=ok
// SIG undefined FUN_140bb5710(void)

void FUN_140bb5710(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined1 local_res8 [8];
  longlong *local_58;
  longlong *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  if ((char)param_1[0x180] == '\0') {
    *(undefined1 *)(param_1 + 0x180) = 1;
    lVar7 = FUN_14244f490(param_1,0);
    if (lVar7 != 0) {
      lVar8 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        FUN_142714700(lVar7);
        AK::MemoryMgr::StartProfileThreadUsage((long)lVar7);
      }
    }
    cVar6 = FText::IsEmpty(param_2 + 8);
    if ((cVar6 == '\0') && (cVar6 = FText::IsEmpty(param_2 + 0x20), cVar6 == '\0')) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      cVar6 = FText::IsEmpty(param_1 + 0x96);
      if ((cVar6 == '\0') && (cVar6 = FText::IsEmpty(param_1 + 0x99), cVar6 == '\0')) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (!bVar4) {
        FText::operator=(param_1 + 0x96,param_2 + 8);
        FText::operator=(param_1 + 0x99,param_2 + 0x20);
      }
    }
    puVar9 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
    FUN_140bbd560(&local_58,*puVar9);
    plVar11 = local_50;
    if (local_58 != (longlong *)0x0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_140bb7680(param_1,&local_48);
      puVar12 = local_48 + (longlong)(int)local_40 * 2;
      plVar11 = local_50;
      for (puVar9 = local_48; puVar9 != puVar12; puVar9 = puVar9 + 2) {
        local_38 = *puVar9;
        local_30 = puVar9[1];
        if (local_30 != 0) {
          LOCK();
          *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
          UNLOCK();
          plVar11 = local_50;
        }
        lVar7 = FUN_14244c070(param_1,&local_38);
        if (lVar7 == 0) {
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            plVar11 = local_50;
          }
          (**(code **)(*local_58 + 0x48))(local_58,puVar9);
          plVar5 = local_50;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar11 + 1;
            lVar7 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            plVar11 = local_50;
            if ((int)lVar7 == 1) {
              (**(code **)*local_50)(local_50);
              plVar11 = local_50;
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_50 + 8))(local_50,1);
              }
            }
          }
        }
      }
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_48);
    }
    FUN_140beb220(param_1,0);
    if (param_1[0x16e] != 0) {
      FUN_140c54800();
    }
    FUN_140ba9a10(param_1);
    FUN_140bf2810(param_1);
    lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar3 = *(undefined8 *)(lVar7 + 0x38);
    uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_142876830(DAT_146b17150,uVar10,uVar3);
    FUN_142d5abe0(param_1);
    plVar5 = local_50;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar11 + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bb59e0 SetContent body=42 status=ok
// SIG undefined SetContent(void)

void UContentWidget::SetContent(undefined8 param_1,undefined8 param_2)

{
  FUN_140ba9020();
  FUN_140bb5710(param_1,param_2);
  return;
}



// FUNCTION 140bb5a10 FUN_140bb5a10 body=971 status=ok
// SIG undefined FUN_140bb5a10(void)

void FUN_140bb5a10(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong local_88;
  int local_80;
  undefined **local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  FUN_140bafce0(param_3,0);
  plVar12 = (longlong *)param_2[1];
  uVar7 = *param_2;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  iVar5 = (int)param_3[1];
  lVar11 = (longlong)iVar5;
  *(int *)(param_3 + 1) = iVar5 + 1;
  local_48 = uVar7;
  if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_3,iVar5);
  }
  lVar10 = *param_3;
  *(undefined ***)(lVar10 + lVar11 * 0x28) = &PTR_FUN_143f73d18;
  *(undefined8 *)(lVar10 + 8 + lVar11 * 0x28) = uVar7;
  *(longlong **)(lVar10 + 0x10 + lVar11 * 0x28) = plVar12;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  *(undefined ***)(lVar10 + lVar11 * 0x28) = &PTR_FUN_143f740c8;
  *(undefined8 *)(lVar10 + 0x18 + lVar11 * 0x28) = 0;
  *(undefined8 *)(lVar10 + 0x20 + lVar11 * 0x28) = 0;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar12 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  }
  lVar11 = FUN_140bb7870(param_1);
  if ((lVar11 != 0) && (iVar5 = FUN_1404cc400(lVar11,param_1 + 0x165), iVar5 != -1)) {
    lVar11 = (longlong)iVar5 * 0x40 + *(longlong *)(lVar11 + 0x60);
    if ((*(longlong **)(lVar11 + 0x10) == (longlong *)0x0) ||
       (cVar4 = (**(code **)(**(longlong **)(lVar11 + 0x10) + 0x20))(), cVar4 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_1404b8a10(param_3,lVar11 + 8);
    }
    lVar10 = *(longlong *)(lVar11 + 0x30);
    lVar11 = lVar10 + (longlong)*(int *)(lVar11 + 0x38) * 0x28;
    for (; lVar10 != lVar11; lVar10 = lVar10 + 0x28) {
      if ((*(longlong **)(lVar10 + 8) == (longlong *)0x0) ||
         (cVar4 = (**(code **)(**(longlong **)(lVar10 + 8) + 0x20))(), cVar4 == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_1404b8a10(param_3,lVar10);
      }
    }
  }
  uVar7 = *param_2;
  uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar11 = FUN_142481360(uVar6,uVar7);
  if ((lVar11 != 0) && (plVar12 = *(longlong **)(lVar11 + 0x508), plVar12 != (longlong *)0x0)) {
    lVar11 = FUN_1429c30a0();
    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
        lVar11 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar11 = (**(code **)(*plVar12 + 0x280))(plVar12);
      if (lVar11 != 0) {
        plVar12 = (longlong *)plVar12[0x32e];
      }
      if (plVar12 != (longlong *)0x0) {
        uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
        UWorld::GetPlayerControllerIterator(uVar7,&local_88);
        while( true ) {
          if ((local_80 < 0) || (*(int *)(local_88 + 8) <= local_80)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) break;
          plVar8 = (longlong *)FWeakObjectPtr::Get();
          if ((plVar8 != (longlong *)0x0) && (plVar8[0x8c] != 0)) {
            plVar9 = *(longlong **)(plVar8[0x8c] + 0x4b8);
            if ((plVar9 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar9 + 0x20))(), cVar4 == '\0')) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((bVar3) &&
               (plVar9 = (longlong *)(**(code **)(*plVar8 + 0x4a8))(), plVar9 != (longlong *)0x0)) {
              lVar11 = (**(code **)(*plVar9 + 0x280))();
              if (lVar11 != 0) {
                plVar9 = (longlong *)plVar9[0x32e];
              }
              if ((plVar9 != (longlong *)0x0) && (plVar12 == plVar9)) {
                lVar11 = *(longlong *)(plVar8[0x8c] + 0x4c0);
                uVar7 = *(undefined8 *)(plVar8[0x8c] + 0x4b8);
                if (lVar11 != 0) {
                  LOCK();
                  *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
                  UNLOCK();
                }
                local_78 = &PTR_FUN_143f740c8;
                local_60 = 0;
                local_58 = 0;
                local_70 = uVar7;
                local_68 = lVar11;
                iVar5 = FUN_1404cc060(param_3,&local_78);
                if (iVar5 == -1) {
                  iVar5 = (int)param_3[1];
                  lVar10 = (longlong)iVar5;
                  *(int *)(param_3 + 1) = iVar5 + 1;
                  if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
                    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_3,iVar5);
                  }
                  lVar2 = *param_3;
                  *(undefined ***)(lVar2 + lVar10 * 0x28) = &PTR_FUN_143f73d18;
                  *(undefined8 *)(lVar2 + 8 + lVar10 * 0x28) = uVar7;
                  *(longlong *)(lVar2 + 0x10 + lVar10 * 0x28) = lVar11;
                  if (lVar11 != 0) {
                    LOCK();
                    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
                    UNLOCK();
                  }
                  *(undefined ***)(lVar2 + lVar10 * 0x28) = &PTR_FUN_143f740c8;
                  *(undefined8 *)(lVar2 + 0x18 + lVar10 * 0x28) = 0;
                  *(undefined8 *)(lVar2 + 0x20 + lVar10 * 0x28) = 0;
                }
                FUN_1404bf980();
              }
            }
          }
          local_80 = local_80 + 1;
        }
      }
    }
  }
  return;
}



// FUNCTION 140bb5de0 FUN_140bb5de0 body=162 status=ok
// SIG undefined FUN_140bb5de0(void)

undefined1
FUN_140bb5de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  longlong *local_20;
  longlong *local_18;
  
  FUN_1404cf890(&local_20,0,param_3,param_4,0);
  if (local_20 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*local_20 + 0x210))(local_20,param_2,param_3,param_4);
  }
  plVar5 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 140bb5e90 FUN_140bb5e90 body=328 status=ok
// SIG undefined FUN_140bb5e90(void)

undefined8 FUN_140bb5e90(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FText::FText();
  if (1 < param_2) {
    if (param_2 < 5) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_38,
                         L"There was an error while attempting to connect to the host. Please try again."
                         ,L"OakGameInstanceBeaconMessageDescriptions",L"GenericConnectionError");
      FText::operator=(param_1,uVar5);
      plVar6 = local_30;
      goto LAB_140bb5f8d;
    }
    if (param_2 == 5) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_50,
                         L"Unable to connect to the host because they do not have the required space."
                         ,L"OakGameInstanceBeaconMessageDescriptions",L"TooManyPlayers");
      FText::operator=(param_1,uVar5);
      plVar6 = local_48;
      goto LAB_140bb5f8d;
    }
    if (param_2 == 6) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_68,
                         L"Unable to connect to the host because they aren\'t accepting players at this time."
                         ,L"OakGameInstanceBeaconMessageDescriptions",
                         L"HostNotAcceptingReservations");
      FText::operator=(param_1,uVar5);
      plVar6 = local_60;
      goto LAB_140bb5f8d;
    }
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_20,L"UNKNOWN MESSAGE TYPE!",L"OakGameInstanceBeaconMessageDescriptions",
                     L"UnknownMessageType");
  FText::operator=(param_1,uVar5);
  plVar6 = local_18;
LAB_140bb5f8d:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140bb5fe0 FUN_140bb5fe0 body=387 status=ok
// SIG undefined FUN_140bb5fe0(void)

longlong FUN_140bb5fe0(void)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong local_40 [2];
  undefined4 local_30;
  undefined8 local_2c;
  longlong local_20;
  longlong local_18 [2];
  
  local_60 = 0x4c;
  local_68 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  uVar2 = local_68;
  FGenericPlatformString::Memcpy
            (local_68,L"/Game/Dialog/Scripts/Scripted/DialogScript_RNR_Intro.DialogScript_RNR_Intro"
             ,0x98);
  local_50 = (undefined4)local_60;
  local_4c = local_60._4_4_;
  local_48 = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_58 = uVar2;
  FUN_1417978e0(&local_48,&local_58);
  local_20 = local_48;
  local_30 = 0xffffffff;
  local_2c = 0;
  FString::FString(local_18,local_40);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  lVar3 = FUN_1405ec200(&local_30);
  if (lVar3 != 0) {
    FUN_140600840();
  }
  lVar3 = FWeakObjectPtr::Get(&local_30);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != local_2c._4_4_) && (local_20 != 0)) {
      lVar3 = FUN_141796df0(&local_20);
      FWeakObjectPtr::operator=(&local_30,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_2c = CONCAT44(DAT_1464b56f4,(undefined4)local_2c);
      }
      lVar3 = FWeakObjectPtr::Get(&local_30);
      if (lVar3 != 0) goto LAB_140bb6104;
    }
  }
  else {
LAB_140bb6104:
    lVar4 = FUN_140600840();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140bb613d;
  }
  lVar3 = 0;
LAB_140bb613d:
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return lVar3;
}



// FUNCTION 140bb6170 FUN_140bb6170 body=132 status=ok
// SIG undefined FUN_140bb6170(void)

longlong FUN_140bb6170(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)(param_1 + 0xae8);
  if (lVar2 == 0) {
    return 0;
  }
  plVar4 = *(longlong **)(lVar2 + 0x238);
  plVar1 = plVar4 + *(int *)(lVar2 + 0x240);
  while( true ) {
    if (plVar4 == plVar1) {
      plVar4 = *(longlong **)(lVar2 + 0x248);
      plVar1 = plVar4 + *(int *)(lVar2 + 0x250);
      while( true ) {
        if (plVar4 == plVar1) {
          return 0;
        }
        lVar2 = *plVar4;
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xc0) == DAT_14686a168)) break;
        plVar4 = plVar4 + 1;
      }
      return lVar2;
    }
    lVar3 = *plVar4;
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0xc0) == DAT_14686a168)) break;
    plVar4 = plVar4 + 1;
  }
  return lVar3;
}



// FUNCTION 140bb6200 FUN_140bb6200 body=132 status=ok
// SIG undefined FUN_140bb6200(void)

longlong FUN_140bb6200(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)(param_1 + 0xae8);
  if (lVar2 == 0) {
    return 0;
  }
  plVar4 = *(longlong **)(lVar2 + 0x238);
  plVar1 = plVar4 + *(int *)(lVar2 + 0x240);
  while( true ) {
    if (plVar4 == plVar1) {
      plVar4 = *(longlong **)(lVar2 + 0x248);
      plVar1 = plVar4 + *(int *)(lVar2 + 0x250);
      while( true ) {
        if (plVar4 == plVar1) {
          return 0;
        }
        lVar2 = *plVar4;
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xc0) == DAT_14686a180)) break;
        plVar4 = plVar4 + 1;
      }
      return lVar2;
    }
    lVar3 = *plVar4;
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0xc0) == DAT_14686a180)) break;
    plVar4 = plVar4 + 1;
  }
  return lVar3;
}



// FUNCTION 140bb6290 FUN_140bb6290 body=836 status=ok
// SIG undefined FUN_140bb6290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bb6290(longlong *param_1,undefined1 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a8 [2];
  longlong local_a0;
  longlong local_98;
  int local_90;
  int local_88;
  char local_84;
  int local_80;
  longlong *local_78;
  longlong local_70;
  int local_68;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c8 = param_2;
  local_b0 = param_3;
  uVar8 = (**(code **)(*param_1 + 0x148))();
  local_c0 = FUN_1413ffe00();
  if (local_c0 != 0) {
    lVar9 = FUN_1413ffe00();
    lVar13 = local_c0;
    do {
      if (lVar13 == lVar9) goto LAB_140bb6300;
      lVar13 = *(longlong *)(lVar13 + 0x30);
    } while (lVar13 != 0);
  }
  local_c0 = 0;
LAB_140bb6300:
  local_a8[0] = 5;
  local_50 = '\0';
  local_b8 = uVar8;
  FUN_14044bc80(&local_a0,&local_b8,&local_c0);
  FUN_14045a130(local_a8);
  iVar18 = local_88;
  plVar16 = local_78;
joined_r0x000140bb6331:
  local_78 = plVar16;
  local_88 = iVar18;
  if (local_84 == '\0') {
    if ((local_78 != (longlong *)0x0) && ((char)local_78[0x25] != '\x03')) {
      (**(code **)(*local_78 + 0x650))(local_78,param_2,param_3);
    }
    lVar13 = local_a0;
    iVar18 = local_88 + 1;
    if (iVar18 < local_68 + local_90) {
      lVar9 = (longlong)iVar18 * 8;
      iVar17 = local_68;
      iVar14 = local_90;
      do {
        if (iVar18 < iVar14) {
          plVar16 = *(longlong **)(local_98 + lVar9);
        }
        else {
          plVar16 = *(longlong **)(local_70 + (longlong)(iVar18 - iVar14) * 8);
        }
        local_80 = local_80 + 1;
        if ((plVar16 != (longlong *)0x0) &&
           (lVar10 = AActor::GetLevel(plVar16), iVar17 = local_68, iVar14 = local_90, lVar10 != 0))
        {
          if ((local_a8[0] & 1) != 0) {
            iVar1 = *(int *)((longlong)plVar16 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar15 = iVar1 >> 0x1f & 0xffff;
              uVar7 = iVar1 + uVar15;
              lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                       (longlong)(int)((uVar7 & 0xffff) - uVar15) * 0x18;
            }
            else {
              lVar11 = 0;
            }
            if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) goto LAB_140bb6515;
          }
          if (((local_a8[0] >> 1 & 1) == 0) ||
             (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(plVar16), iVar17 = local_68,
             iVar14 = local_90, cVar6 != '\0')) {
            if ((local_a8[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar10 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar10 + 0x205) & 0x10) == 0)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              piVar2 = *(int **)(lVar10 + 600);
              if (((*(longlong *)(lVar10 + 0xc0) == 0) ||
                  (piVar12 = (int *)UWorld::GetActiveLevelCollection(), piVar12 == (int *)0x0)) ||
                 (piVar2 == piVar12)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((bVar3) || (bVar3 = false, bVar4)) {
                bVar3 = true;
              }
              iVar17 = local_68;
              iVar14 = local_90;
              if ((!bVar5) || (!bVar3)) goto LAB_140bb6515;
            }
            lVar10 = ULevel::GetWorld(lVar10);
            iVar17 = local_68;
            iVar14 = local_90;
            if (lVar10 == lVar13) {
              lVar10 = AActor::GetLevel(plVar16);
              param_3 = local_b0;
              param_2 = local_c8;
              if (lVar10 == *(longlong *)(lVar13 + 0x30)) goto joined_r0x000140bb6331;
              lVar10 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(plVar16[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar16[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                  lVar10 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              iVar17 = local_68;
              iVar14 = local_90;
              param_3 = local_b0;
              param_2 = local_c8;
              if (!bVar5) goto joined_r0x000140bb6331;
            }
          }
        }
LAB_140bb6515:
        iVar18 = iVar18 + 1;
        lVar9 = lVar9 + 8;
        if (iVar17 + iVar14 <= iVar18) break;
      } while( true );
    }
    local_78 = (longlong *)0x0;
    local_84 = '\x01';
  }
  if (local_50 != '\0') {
    local_50 = 0;
    UWorld::RemoveOnActorSpawnedHandler(local_a0,local_58);
    if (local_70 != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140bb65e0 FUN_140bb65e0 body=514 status=ok
// SIG undefined FUN_140bb65e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_140bb65e0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_f8 [32];
  int local_d8 [4];
  undefined8 local_c8;
  longlong lStack_c0;
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
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d8[2] = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FUN_140dbb7c0(*(longlong *)(param_1 + 0x4e0),local_d8,local_d8 + 2,local_d8 + 1);
  }
  iVar3 = local_d8[0];
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_80,
                     L"A match has been found and will be starting shortly.\n\nStarting in: {0}s",
                     L"OakGameInstance",L"ConfirmMatchMessage");
  puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_68,uVar6);
  local_58[0] = 0;
  local_50 = (longlong)iVar3;
  local_b8 = local_58;
  puStack_b0 = local_28;
  local_c8 = *puVar7;
  lStack_c0 = puVar7[1];
  local_30 = '\0';
  if (lStack_c0 != 0) {
    LOCK();
    *(int *)(lStack_c0 + 8) = *(int *)(lStack_c0 + 8) + 1;
    UNLOCK();
  }
  uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_a8,&local_b8);
  uVar6 = FText::Format(local_98,&local_c8,uVar6);
  FText::FText(param_2,uVar6);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_90 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_30 != '\0') {
    local_30 = '\0';
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_40 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  }
  plVar4 = (longlong *)puVar7[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 140bb67f0 FUN_140bb67f0 body=162 status=ok
// SIG undefined FUN_140bb67f0(void)

undefined4 FUN_140bb67f0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  longlong *local_18;
  longlong *local_10;
  
  local_res10[0] = 3;
  local_res18 = 0;
  FUN_1404cf890(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x140))(local_18,param_1,4,local_res10);
  }
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
    return local_res10[0];
  }
  return local_res10[0];
}



// FUNCTION 140bb68a0 FUN_140bb68a0 body=8 status=ok
// SIG undefined FUN_140bb68a0(void)

undefined1 FUN_140bb68a0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x458);
}



// FUNCTION 140bb68b0 FUN_140bb68b0 body=277 status=ok
// SIG undefined FUN_140bb68b0(void)

ulonglong FUN_140bb68b0(undefined8 param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  bool bVar8;
  longlong local_28 [2];
  
  bVar8 = false;
  lVar4 = FUN_14244f490(param_1,0);
  if (lVar4 == 0) {
LAB_140bb691e:
    plVar7 = (longlong *)ANavVolume::GetPrivateStaticClass();
    uVar6 = plVar7[0x1f];
    if (uVar6 == 0) {
      (**(code **)(*plVar7 + 0x368))(plVar7);
      uVar6 = plVar7[0x1f];
    }
  }
  else {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((!bVar2) || (uVar6 = FUN_140cff230(lVar4), uVar6 == 0)) goto LAB_140bb691e;
  }
  bVar1 = *(byte *)(uVar6 + 0x1e2);
  if (bVar1 == 1) {
    bVar8 = true;
    uVar6 = FUN_140bb8480(param_1,local_28,2);
    if (0 < *(int *)(uVar6 + 8)) {
      bVar2 = true;
      goto LAB_140bb6976;
    }
  }
  bVar2 = false;
LAB_140bb6976:
  if ((bVar8) && (local_28[0] != 0)) {
    uVar6 = FMemory::Free();
  }
  if (bVar2) {
    uVar6 = uVar6 & 0xffffffffffffff00;
  }
  else if (bVar1 == 1) {
    cVar3 = FUN_140ba5120(param_1);
    uVar6 = (ulonglong)(cVar3 == '\0');
  }
  else {
    uVar6 = (ulonglong)bVar1;
  }
  return uVar6;
}



// FUNCTION 140bb69d0 FUN_140bb69d0 body=80 status=ok
// SIG undefined FUN_140bb69d0(void)

undefined8 * FUN_140bb69d0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    uVar2 = FUN_1428cc8c0(lVar1,local_18);
    FString::operator=(param_2,uVar2);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 140bb6a20 FUN_140bb6a20 body=114 status=ok
// SIG undefined FUN_140bb6a20(void)

undefined8 * FUN_140bb6a20(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(int *)(param_1 + 0x1060) < 2) || (*(char *)(param_1 + 0x1068) != '\0')) {
    if (*(longlong *)(param_1 + 0x4e0) == 0) {
      return param_2;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x4e0) + 0x10) == '\0') {
      return param_2;
    }
    cVar1 = FUN_140678610();
    if (cVar1 != '\0') {
      return param_2;
    }
    param_1 = FUN_140573010(*(undefined8 *)(param_1 + 0x4e0));
  }
  else {
    param_1 = param_1 + 0x1058;
  }
  FString::operator=(param_2,param_1);
  return param_2;
}



// FUNCTION 140bb6aa0 FUN_140bb6aa0 body=291 status=ok
// SIG undefined FUN_140bb6aa0(void)

undefined4 FUN_140bb6aa0(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  uVar4 = 0;
  uVar7 = 0;
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if ((lVar5 == 0) || ((*(uint *)(lVar5 + 0x830) >> 2 & 1) == 0)) {
    lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar4 = uVar7;
    if (lVar5 != 0) {
      lVar5 = UWorld::GetGameState<APVPGameState>(lVar5);
      if (lVar5 != 0) {
        cVar3 = FUN_1407c3030(lVar5 + 0x670);
        if (cVar3 != '\0') {
          uVar4 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(lVar5 + 0x670);
        }
      }
    }
  }
  else {
    lVar5 = FUN_14244f490(param_1,0);
    if (lVar5 != 0) {
      lVar6 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar5 = FUN_140cfbfb0(lVar5);
        if (lVar5 != 0) {
          cVar3 = FWebMMovieStreamer::IsLastMovieInPlaylist();
          uVar4 = uVar7;
          if (cVar3 == '\0') {
            iVar1 = *(int *)(lVar5 + 0x140);
            if ((iVar1 < 0) || (*(int *)(lVar5 + 0x2c0) <= iVar1)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              return *(undefined4 *)(*(longlong *)(lVar5 + 0x2b8) + 4 + (longlong)iVar1 * 0xc);
            }
          }
        }
      }
    }
  }
  return uVar4;
}



// FUNCTION 140bb6bd0 FUN_140bb6bd0 body=605 status=ok
// SIG undefined FUN_140bb6bd0(void)

ulonglong FUN_140bb6bd0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined **local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong local_30;
  undefined8 local_28;
  
  local_68 = *param_2;
  uVar11 = 0;
  uVar12 = 0;
  local_60 = param_2[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  cVar6 = FUN_140bca7d0(param_1,&local_68);
  if (cVar6 == '\0') {
    lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((lVar8 == 0) || ((*(uint *)(lVar8 + 0x830) >> 2 & 1) == 0)) {
      lVar8 = FUN_140b96130(param_1,param_2);
      if (lVar8 == 0) goto LAB_140bb6def;
      uVar11 = *(ulonglong *)(lVar8 + 0x570);
      goto joined_r0x000140bb6de2;
    }
    lVar8 = FUN_140bb7f10(param_1,param_2);
    if (lVar8 == 0) goto LAB_140bb6def;
    uVar7 = *(uint *)(lVar8 + 0x54);
  }
  else {
    lVar8 = (**(code **)(*param_1 + 0x148))();
    if ((lVar8 == 0) || ((*(uint *)(lVar8 + 0x830) >> 2 & 1) == 0)) {
      local_58 = *param_2;
      local_50 = param_2[1];
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      lVar8 = FUN_14244c070(param_1,&local_58);
      if ((lVar8 != 0) && (lVar8 = *(longlong *)(lVar8 + 0x30), lVar8 != 0)) {
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
          uVar11 = *(ulonglong *)(lVar8 + 0xa58);
        }
      }
joined_r0x000140bb6de2:
      uVar12 = 0;
      if (uVar11 == 0) goto LAB_140bb6def;
    }
    else {
      local_40 = *param_2;
      local_38 = (longlong *)param_2[1];
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      local_48 = &PTR_FUN_143f740c8;
      local_30 = 0;
      local_28 = 0;
      uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar8 = FUN_140c125c0(&local_48,uVar9);
      local_48 = &PTR_FUN_143f740c8;
      if (local_30 != 0) {
        FMemory::Free();
      }
      plVar5 = local_38;
      local_48 = &PTR_FUN_143f73d18;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_38)(local_38);
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
      uVar12 = uVar11;
      if ((lVar8 == 0) || (lVar10 = FUN_140d3b710(lVar8), lVar10 == 0)) goto LAB_140bb6def;
      uVar11 = FUN_140d3b710(lVar8);
    }
    uVar7 = FUN_1409ac010(uVar11);
  }
  uVar12 = (ulonglong)uVar7;
  if (uVar7 != 0) {
    return uVar12;
  }
LAB_140bb6def:
  if ((0 < (int)param_1[0x158]) && (*(longlong *)param_1[0x157] != 0)) {
    uVar11 = FUN_1409ac010();
    return uVar11;
  }
  return uVar12;
}



// FUNCTION 140bb6e30 FUN_140bb6e30 body=466 status=ok
// SIG undefined FUN_140bb6e30(void)

ulonglong FUN_140bb6e30(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined **local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 local_18;
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  if ((lVar6 == 0) || ((*(uint *)(lVar6 + 0x830) >> 2 & 1) == 0)) {
    lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar6 = 0;
    if (lVar9 != 0) {
      lVar6 = *(longlong *)(lVar9 + 0x148);
    }
    if (lVar6 != 0) {
      plVar10 = *(longlong **)(lVar6 + 0x470);
      plVar2 = plVar10 + *(int *)(lVar6 + 0x478);
      for (; plVar10 != plVar2; plVar10 = plVar10 + 1) {
        lVar6 = *plVar10;
        if (lVar6 != 0) {
          lVar9 = UInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            if ((*(longlong **)(lVar6 + 0x4b8) == (longlong *)0x0) ||
               (cVar5 = (**(code **)(**(longlong **)(lVar6 + 0x4b8) + 0x20))(), cVar5 == '\0')) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((bVar4) &&
               (cVar5 = (*(code *)**(undefined8 **)*param_2)
                                  ((undefined8 *)*param_2,*(undefined8 *)(lVar6 + 0x4b8)),
               cVar5 != '\0')) {
              return (ulonglong)*(uint *)(lVar6 + 0x568);
            }
          }
        }
      }
    }
  }
  else {
    local_30 = *param_2;
    local_28 = (longlong *)param_2[1];
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    local_20 = 0;
    local_18 = 0;
    local_38 = &PTR_FUN_143f740c8;
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar6 = FUN_140c125c0(&local_38,uVar7);
    local_38 = &PTR_FUN_143f740c8;
    if (local_20 != 0) {
      FMemory::Free();
    }
    plVar2 = local_28;
    local_38 = &PTR_FUN_143f73d18;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_28 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
    if (lVar6 != 0) {
      uVar8 = FUN_140c10350(*(undefined4 *)(lVar6 + 0xa0));
      return uVar8;
    }
  }
  return 1;
}



// FUNCTION 140bb7010 FUN_140bb7010 body=241 status=ok
// SIG undefined FUN_140bb7010(void)

undefined8 * FUN_140bb7010(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_res18 [8];
  longlong *local_28;
  longlong *local_20;
  longlong local_18 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  puVar5 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
  FUN_1404d0c50(&local_28,*puVar5);
  if (local_28 != (longlong *)0x0) {
    lVar6 = (**(code **)(*local_28 + 0x10))(local_28,0x11f);
    if ((lVar6 != 0) && (plVar4 = *(longlong **)(lVar6 + 0xa0), plVar4 != (longlong *)0x0)) {
      uVar7 = (**(code **)(*plVar4 + 0x38))(plVar4,local_18);
      FString::operator=(param_2,uVar7);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 140bb7110 FUN_140bb7110 body=113 status=ok
// SIG undefined FUN_140bb7110(void)

undefined8 * FUN_140bb7110(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  if ((char)param_1[0xb1] != '\0') {
    FString::FString(param_2,param_1 + 0xb2);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    uVar2 = FUN_1428cc8c0(lVar1,local_18);
    FString::operator=(param_2,uVar2);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 140bb7190 FUN_140bb7190 body=135 status=ok
// SIG undefined FUN_140bb7190(void)

void * FUN_140bb7190(longlong param_1)

{
  void *_Dst;
  
  _Dst = *(void **)(param_1 + 0x10a8);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)operator_new(0x78);
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x78);
      *(undefined8 *)((longlong)_Dst + 0x10) = 0;
      *(undefined8 *)((longlong)_Dst + 0x28) = 0;
      *(undefined8 *)((longlong)_Dst + 0x30) = 0;
      *(undefined4 *)((longlong)_Dst + 0x38) = 0xffffffff;
      *(undefined4 *)((longlong)_Dst + 0x3c) = 0;
      *(undefined8 *)((longlong)_Dst + 0x48) = 0;
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      *(undefined4 *)((longlong)_Dst + 0x58) = 10;
      *(undefined8 *)((longlong)_Dst + 0x60) = 0;
      *(undefined4 *)((longlong)_Dst + 0x68) = 0x3f800000;
      *(undefined8 *)((longlong)_Dst + 0x70) = 0;
    }
    *(void **)(param_1 + 0x10a8) = _Dst;
  }
  return _Dst;
}



// FUNCTION 140bb7220 FUN_140bb7220 body=383 status=ok
// SIG undefined FUN_140bb7220(void)

undefined8 * FUN_140bb7220(longlong param_1)

{
  undefined8 *_Dst;
  
  _Dst = *(undefined8 **)(param_1 + 0x1098);
  if (_Dst == (undefined8 *)0x0) {
    _Dst = (undefined8 *)operator_new(0x148);
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x148);
      _Dst[4] = 0;
      _Dst[6] = 0;
      _Dst[7] = 0;
      _Dst[9] = 0;
      _Dst[10] = 0;
      _Dst[0xb] = 0;
      _Dst[0xc] = 0;
      *(undefined4 *)(_Dst + 0xd) = 0;
      *(undefined4 *)(_Dst + 0xe) = 0;
      *(undefined4 *)((longlong)_Dst + 0x74) = 0x41700000;
      *(undefined4 *)(_Dst + 0xf) = 0x40400000;
      *(undefined4 *)((longlong)_Dst + 0x7c) = 0x43960000;
      *(undefined4 *)(_Dst + 0x10) = 100;
      *(undefined4 *)((longlong)_Dst + 0x84) = 3;
      *(undefined4 *)(_Dst + 0x11) = 0x32;
      *(undefined1 *)((longlong)_Dst + 0x8c) = 1;
      *(undefined4 *)(_Dst + 0x12) = 0x41700000;
      *(undefined4 *)((longlong)_Dst + 0x94) = 0x43960000;
      _Dst[0x13] = 0x43340000;
      *(undefined1 *)(_Dst + 0x14) = 0;
      *_Dst = &PTR_FUN_144317988;
      _Dst[0x15] = 0;
      _Dst[0x16] = 0;
      _Dst[0x17] = 0x3f800000;
      *(undefined4 *)(_Dst + 0x18) = 0;
      *(undefined4 *)((longlong)_Dst + 0xc4) = 0x42700000;
      _Dst[0x19] = 0x41700000;
      _Dst[0x1a] = 0;
      _Dst[0x1b] = 0;
      _Dst[0x1e] = 0;
      _Dst[0x1f] = 0;
      *(undefined4 *)(_Dst + 0x20) = 0xffffffff;
      *(undefined4 *)((longlong)_Dst + 0x104) = 0;
      _Dst[0x22] = 0;
      *(undefined4 *)(_Dst + 0x23) = 0;
      _Dst[0x24] = 0;
      _Dst[0x25] = 0;
      _Dst[0x26] = 2;
      _Dst[0x27] = 0;
      _Dst[0x28] = 0;
    }
    *(undefined8 **)(param_1 + 0x1098) = _Dst;
  }
  return _Dst;
}



// FUNCTION 140bb73a0 FUN_140bb73a0 body=146 status=ok
// SIG undefined FUN_140bb73a0(void)

void * FUN_140bb73a0(longlong param_1)

{
  void *_Dst;
  
  _Dst = *(void **)(param_1 + 0x10a0);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)operator_new(0x80);
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x80);
      *(undefined4 *)((longlong)_Dst + 8) = 100;
      *(undefined8 *)((longlong)_Dst + 0x18) = 0;
      *(undefined8 *)((longlong)_Dst + 0x30) = 0;
      *(undefined8 *)((longlong)_Dst + 0x38) = 0;
      *(undefined4 *)((longlong)_Dst + 0x40) = 0xffffffff;
      *(undefined4 *)((longlong)_Dst + 0x44) = 0;
      *(undefined8 *)((longlong)_Dst + 0x50) = 0;
      *(undefined4 *)((longlong)_Dst + 0x58) = 0;
      *(undefined8 *)((longlong)_Dst + 0x60) = 0;
      *(undefined4 *)((longlong)_Dst + 0x68) = 0x40000000;
      *(undefined1 *)((longlong)_Dst + 0x6c) = 0;
      *(undefined8 *)((longlong)_Dst + 0x70) = 0;
      *(undefined8 *)((longlong)_Dst + 0x78) = 0;
    }
    *(void **)(param_1 + 0x10a0) = _Dst;
  }
  return _Dst;
}



// FUNCTION 140bb7440 FUN_140bb7440 body=104 status=ok
// SIG undefined FUN_140bb7440(void)

void FUN_140bb7440(longlong param_1)

{
  void *_Dst;
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x1090) == 0) {
    _Dst = (void *)operator_new(0x270);
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x270);
      uVar1 = FUN_140b99d60(_Dst);
      *(undefined8 *)(param_1 + 0x1090) = uVar1;
      return;
    }
    *(undefined8 *)(param_1 + 0x1090) = 0;
  }
  return;
}



// FUNCTION 140bb74b0 FUN_140bb74b0 body=380 status=ok
// SIG undefined FUN_140bb74b0(void)

void * FUN_140bb74b0(longlong param_1)

{
  void *_Dst;
  
  _Dst = *(void **)(param_1 + 0x1080);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)operator_new(0x1c0);
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x1c0);
      *(undefined4 *)((longlong)_Dst + 0x10) = 2;
      *(undefined8 *)((longlong)_Dst + 0x20) = 0;
      *(undefined8 *)((longlong)_Dst + 0x38) = 0;
      *(undefined8 *)((longlong)_Dst + 0x40) = 0;
      *(undefined4 *)((longlong)_Dst + 0x48) = 0xffffffff;
      *(undefined4 *)((longlong)_Dst + 0x4c) = 0;
      *(undefined8 *)((longlong)_Dst + 0x58) = 0;
      *(undefined4 *)((longlong)_Dst + 0x60) = 0;
      *(undefined8 *)((longlong)_Dst + 0x68) = 0;
      *(undefined8 *)((longlong)_Dst + 0x70) = 0;
      *(undefined8 *)((longlong)_Dst + 0x88) = 0;
      *(undefined8 *)((longlong)_Dst + 0x90) = 0;
      *(undefined4 *)((longlong)_Dst + 0x98) = 0xffffffff;
      *(undefined4 *)((longlong)_Dst + 0x9c) = 0;
      *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
      *(undefined4 *)((longlong)_Dst + 0xb0) = 0;
      *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
      *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
      *(undefined4 *)((longlong)_Dst + 200) = 0;
      *(undefined1 *)((longlong)_Dst + 0xcc) = 0;
      *(undefined8 *)((longlong)_Dst + 0xd0) = 0;
      *(undefined8 *)((longlong)_Dst + 0xd8) = 0;
      *(undefined8 *)((longlong)_Dst + 0xf0) = 0;
      *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
      *(undefined4 *)((longlong)_Dst + 0x100) = 0xffffffff;
      *(undefined4 *)((longlong)_Dst + 0x104) = 0;
      *(undefined8 *)((longlong)_Dst + 0x110) = 0;
      *(undefined4 *)((longlong)_Dst + 0x118) = 0;
      *(undefined8 *)((longlong)_Dst + 0x120) = 0;
      *(undefined8 *)((longlong)_Dst + 0x128) = 0;
      *(undefined8 *)((longlong)_Dst + 0x140) = 0;
      *(undefined8 *)((longlong)_Dst + 0x148) = 0;
      *(undefined4 *)((longlong)_Dst + 0x150) = 0xffffffff;
      *(undefined4 *)((longlong)_Dst + 0x154) = 0;
      *(undefined8 *)((longlong)_Dst + 0x160) = 0;
      *(undefined4 *)((longlong)_Dst + 0x168) = 0;
      *(undefined8 *)((longlong)_Dst + 0x170) = 0;
      *(undefined8 *)((longlong)_Dst + 0x178) = 0;
      *(undefined8 *)((longlong)_Dst + 400) = 0;
      *(undefined8 *)((longlong)_Dst + 0x198) = 0;
      *(undefined4 *)((longlong)_Dst + 0x1a0) = 0xffffffff;
      *(undefined4 *)((longlong)_Dst + 0x1a4) = 0;
      *(undefined8 *)((longlong)_Dst + 0x1b0) = 0;
      *(undefined4 *)((longlong)_Dst + 0x1b8) = 0;
    }
    *(void **)(param_1 + 0x1080) = _Dst;
  }
  return _Dst;
}



// FUNCTION 140bb7630 FUN_140bb7630 body=70 status=ok
// SIG undefined FUN_140bb7630(void)

void FUN_140bb7630(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x1088) == 0) {
    lVar1 = operator_new(0x1a8);
    if (lVar1 != 0) {
      uVar2 = FUN_140d64540(lVar1);
      *(undefined8 *)(param_1 + 0x1088) = uVar2;
      return;
    }
    *(undefined8 *)(param_1 + 0x1088) = 0;
  }
  return;
}



// FUNCTION 140bb7680 FUN_140bb7680 body=428 status=ok
// SIG undefined FUN_140bb7680(void)

void FUN_140bb7680(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x148), lVar7 != 0)) {
    uVar10 = 0;
    plVar12 = *(longlong **)(lVar7 + 0x470);
    uVar11 = (longlong)*(int *)(lVar7 + 0x478) & 0x1fffffffffffffff;
    if (plVar12 + *(int *)(lVar7 + 0x478) < plVar12) {
      uVar11 = uVar10;
    }
    if (uVar11 != 0) {
      do {
        lVar7 = *plVar12;
        if ((((lVar7 != 0) && ((*(byte *)(lVar7 + 0x484) & 0x14) == 0)) &&
            (*(longlong **)(lVar7 + 0x4b8) != (longlong *)0x0)) &&
           (cVar6 = (**(code **)(**(longlong **)(lVar7 + 0x4b8) + 0x20))(), cVar6 != '\0')) {
          puVar8 = (undefined8 *)*param_2;
          uVar4 = *(undefined8 *)(lVar7 + 0x4b8);
          puVar9 = puVar8 + (longlong)(int)param_2[1] * 2;
          for (; puVar8 != puVar9; puVar8 = puVar8 + 2) {
            cVar6 = (*(code *)**(undefined8 **)*puVar8)((undefined8 *)*puVar8,uVar4);
            if (cVar6 != '\0') goto LAB_140bb77f2;
          }
          plVar5 = *(longlong **)(lVar7 + 0x4c0);
          uVar4 = *(undefined8 *)(lVar7 + 0x4b8);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          iVar3 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
          }
          puVar8 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
          *puVar8 = uVar4;
          puVar8[1] = plVar5;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar5 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if ((iVar3 == 1) && (plVar5 != (longlong *)0x0)) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
        }
LAB_140bb77f2:
        plVar12 = plVar12 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar11);
    }
  }
  return;
}



// FUNCTION 140bb7840 FUN_140bb7840 body=48 status=ok
// SIG undefined FUN_140bb7840(void)

undefined8 FUN_140bb7840(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = FUN_142f6caf0(uVar1);
  if (lVar2 != 0) {
    uVar1 = FUN_142f5a870(lVar2);
    return uVar1;
  }
  return 0xffffffff;
}



// FUNCTION 140bb7870 FUN_140bb7870 body=132 status=ok
// SIG undefined FUN_140bb7870(void)

longlong FUN_140bb7870(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)(param_1 + 0xae8);
  if (lVar2 == 0) {
    return 0;
  }
  plVar4 = *(longlong **)(lVar2 + 0x238);
  plVar1 = plVar4 + *(int *)(lVar2 + 0x240);
  while( true ) {
    if (plVar4 == plVar1) {
      plVar4 = *(longlong **)(lVar2 + 0x248);
      plVar1 = plVar4 + *(int *)(lVar2 + 0x250);
      while( true ) {
        if (plVar4 == plVar1) {
          return 0;
        }
        lVar2 = *plVar4;
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xc0) == DAT_14686a160)) break;
        plVar4 = plVar4 + 1;
      }
      return lVar2;
    }
    lVar3 = *plVar4;
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0xc0) == DAT_14686a160)) break;
    plVar4 = plVar4 + 1;
  }
  return lVar3;
}



// FUNCTION 140bb7900 FUN_140bb7900 body=132 status=ok
// SIG undefined FUN_140bb7900(void)

longlong FUN_140bb7900(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)(param_1 + 0xae8);
  if (lVar2 == 0) {
    return 0;
  }
  plVar4 = *(longlong **)(lVar2 + 0x238);
  plVar1 = plVar4 + *(int *)(lVar2 + 0x240);
  while( true ) {
    if (plVar4 == plVar1) {
      plVar4 = *(longlong **)(lVar2 + 0x248);
      plVar1 = plVar4 + *(int *)(lVar2 + 0x250);
      while( true ) {
        if (plVar4 == plVar1) {
          return 0;
        }
        lVar2 = *plVar4;
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xc0) == DAT_14686a178)) break;
        plVar4 = plVar4 + 1;
      }
      return lVar2;
    }
    lVar3 = *plVar4;
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0xc0) == DAT_14686a178)) break;
    plVar4 = plVar4 + 1;
  }
  return lVar3;
}



// FUNCTION 140bb7990 FUN_140bb7990 body=129 status=ok
// SIG undefined FUN_140bb7990(void)

int FUN_140bb7990(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = -1;
  lVar1 = UGameInstance::FindLocalPlayerFromControllerId(param_1,0xffffffff);
  while (lVar1 != 0) {
    iVar2 = iVar2 + -1;
    lVar1 = UGameInstance::FindLocalPlayerFromControllerId(param_1,iVar2);
  }
  if ((-1 < param_2) &&
     ((*(char *)(param_1 + 0xba8) == '\0' ||
      (lVar1 = UGameInstance::FindLocalPlayerFromControllerId(param_1,param_2), lVar1 == 0)))) {
    return param_2;
  }
  return iVar2;
}



// FUNCTION 140bb7a20 FUN_140bb7a20 body=34 status=ok
// SIG undefined FUN_140bb7a20(void)

undefined4 FUN_140bb7a20(longlong param_1)

{
  if ((*(char *)(param_1 + 0x318) != '\0') &&
     ((*(int *)(param_1 + 0x220) == 0 || (*(int *)(param_1 + 0x220) == 3)))) {
    return *(undefined4 *)(param_1 + 0x300);
  }
  return 0;
}



// FUNCTION 140bb7a50 FUN_140bb7a50 body=71 status=ok
// SIG undefined FUN_140bb7a50(void)

undefined8 * FUN_140bb7a50(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x318) == '\0') ||
     ((*(int *)(param_1 + 0x220) != 0 && (*(int *)(param_1 + 0x220) != 3)))) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = *(undefined8 *)(param_1 + 0x228);
    lVar1 = *(longlong *)(param_1 + 0x230);
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 140bb7aa0 FUN_140bb7aa0 body=381 status=ok
// SIG undefined FUN_140bb7aa0(void)

undefined8 FUN_140bb7aa0(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FText::FText(param_2);
  if (param_3 == 3) {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"Unable to join. The requested game is full.",L"OakGameInstance",
                       L"JoinFailedFullSession");
    FText::operator=(param_2,uVar6);
  }
  else if (param_3 == 4) {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,
                       L"Unable to join, too many recent online requests. Please wait and try again later."
                       ,L"OakGameInstance",L"JoinFailedRateLimit");
    FText::operator=(param_2,uVar6);
    local_30 = local_48;
  }
  else {
    if (param_3 != 8) goto LAB_140bb7b9c;
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_68,
                       L"The connection to the host failed. The game session no longer exists.",
                       L"OakGameInstance",L"JoinFailedSessionNoLongerExists");
    FText::operator=(param_2,uVar6);
    local_30 = local_60;
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
LAB_140bb7b9c:
  cVar5 = FText::IsEmpty(param_2);
  if (cVar5 != '\0') {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,L"Could not connect to host.",L"OakGameInstance",L"JoinFailed");
    FText::operator=(param_2,uVar6);
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
  }
  return param_2;
}



// FUNCTION 140bb7c20 FUN_140bb7c20 body=417 status=ok
// SIG undefined FUN_140bb7c20(void)

void FUN_140bb7c20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar5 < DAT_14686a6a0) {
    _Init_thread_header(&DAT_14686a6a0);
    if (DAT_14686a6a0 == -1) {
      uVar1 = AUGAreaEffectActor::GetPrivateStaticClass();
      AUGAreaEffectActor::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"CinematicData",1);
      DAT_14686a698 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_14686a6a0);
    }
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686a698 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_14686a698 + 0x40) + (short)iVar3;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686a698 + 0x30));
  }
  if (*piVar5 < DAT_14686a6b0) {
    _Init_thread_header(&DAT_14686a6b0);
    if (DAT_14686a6b0 == -1) {
      uVar1 = AUGAreaEffectActor::GetPrivateStaticClass();
      AUGAreaEffectActor::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"CinematicState",1);
      DAT_14686a6a8 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_14686a6b0);
    }
  }
  if (0 < *(int *)(DAT_14686a6a8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_14686a6a8 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_14686a6a8 + 0x30));
  }
  return;
}



// FUNCTION 140bb7dd0 FUN_140bb7dd0 body=303 status=ok
// SIG undefined FUN_140bb7dd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140bb7dd0(longlong param_1,longlong *param_2)

{
  void *_Dst;
  undefined2 *_Src;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *local_28;
  int local_20;
  undefined4 local_1c;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(char *)(param_1 + 0x440) != '\x02') {
    return param_2;
  }
  iVar2 = (int)_DAT_146b18950 + -1;
  if ((int)_DAT_146b18950 == 0) {
    iVar2 = 0;
  }
  local_20 = iVar2 + 2;
  local_28 = (undefined2 *)0x0;
  local_1c = 0;
  if (0 < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  }
  iVar3 = local_20;
  _Src = local_28;
  *local_28 = 0x3f;
  _guard_xfg_dispatch_icall_nop(local_28 + 1,DAT_146b18948,(longlong)iVar2 * 2);
  _Src[(longlong)iVar2 + 1] = 0;
  if ((iVar3 != 0) && (iVar3 = iVar3 + -1, iVar3 != 0)) {
    iVar2 = (int)param_2[1];
    iVar1 = (uint)(iVar2 == 0) + iVar2 + iVar3;
    *(int *)(param_2 + 1) = iVar1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    _Dst = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar3 * 2);
    *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
  }
  if (_Src != (undefined2 *)0x0) {
    FMemory::Free(_Src);
  }
  return param_2;
}



// FUNCTION 140bb7f00 GetWeightmapTextures body=8 status=ok
// SIG undefined GetWeightmapTextures(void)

longlong ULandscapeComponent::GetWeightmapTextures(longlong param_1)

{
  return param_1 + 0x4f0;
}



// FUNCTION 140bb7f10 FUN_140bb7f10 body=117 status=ok
// SIG undefined FUN_140bb7f10(void)

void FUN_140bb7f10(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  plVar2 = (longlong *)*param_2;
  plVar1 = (longlong *)FName::FName(local_res10,L"SPARK",1);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,local_res18);
  if (*plVar2 == *plVar1) {
    FUN_140b95f90();
    return;
  }
  FUN_140b95e30(param_1 + 0x4f0,param_2);
  return;
}



// FUNCTION 140bb7f90 FUN_140bb7f90 body=29 status=ok
// SIG undefined FUN_140bb7f90(void)

undefined1 FUN_140bb7f90(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140bb6170();
  if (lVar1 != 0) {
    FLiveLinkSubject::IsRebroadcasted(lVar1);
  }
  return 0;
}



// FUNCTION 140bb7fb0 FUN_140bb7fb0 body=387 status=ok
// SIG undefined FUN_140bb7fb0(void)

longlong FUN_140bb7fb0(void)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong local_40 [2];
  undefined4 local_30;
  undefined8 local_2c;
  longlong local_20;
  longlong local_18 [2];
  
  local_60 = 0x48;
  local_68 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  uVar2 = local_68;
  FGenericPlatformString::Memcpy
            (local_68,L"/Game/Dialog/Styles/DialogStyle_LocalCallouts.DialogStyle_LocalCallouts",
             0x90);
  local_50 = (undefined4)local_60;
  local_4c = local_60._4_4_;
  local_48 = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_58 = uVar2;
  FUN_1417978e0(&local_48,&local_58);
  local_20 = local_48;
  local_30 = 0xffffffff;
  local_2c = 0;
  FString::FString(local_18,local_40);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  lVar3 = FUN_1405ec200(&local_30);
  if (lVar3 != 0) {
    FUN_140600120();
  }
  lVar3 = FWeakObjectPtr::Get(&local_30);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != local_2c._4_4_) && (local_20 != 0)) {
      lVar3 = FUN_141796df0(&local_20);
      FWeakObjectPtr::operator=(&local_30,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_2c = CONCAT44(DAT_1464b56f4,(undefined4)local_2c);
      }
      lVar3 = FWeakObjectPtr::Get(&local_30);
      if (lVar3 != 0) goto LAB_140bb80d4;
    }
  }
  else {
LAB_140bb80d4:
    lVar4 = FUN_140600120();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140bb810d;
  }
  lVar3 = 0;
LAB_140bb810d:
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return lVar3;
}



// FUNCTION 140bb8140 FUN_140bb8140 body=824 status=ok
// SIG undefined FUN_140bb8140(void)

longlong * FUN_140bb8140(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int local_res10 [2];
  undefined1 local_res20 [8];
  undefined1 local_98 [16];
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  local_res10[0] = 0;
  FUN_140bbb2b0();
  plVar7 = (longlong *)*param_2;
  if (plVar7 == (longlong *)0x0) {
    return param_2;
  }
  plVar7 = (longlong *)(**(code **)(*plVar7 + 8))(plVar7,local_res20);
  lVar3 = *plVar7;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x338))(param_1,local_98);
  if (lVar3 != *plVar7) {
    FUN_140bbc6f0(param_1,&local_88,param_3);
    if (local_88 == 0) {
      plVar7 = &local_68;
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      bVar6 = false;
      bVar5 = false;
      bVar4 = true;
    }
    else {
      local_58 = local_88;
      plStack_50 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
        UNLOCK();
      }
      plVar7 = (longlong *)FUN_140d7d990(param_1[0x210],local_48,&local_58);
      bVar6 = true;
      bVar5 = true;
      bVar4 = false;
    }
    if (param_2 != plVar7) {
      *param_2 = *plVar7;
      *plVar7 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,plVar7 + 1);
    }
    plVar7 = plStack_60;
    if ((bVar4) && (plStack_60 != (longlong *)0x0)) {
      LOCK();
      plVar8 = plStack_60 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
    if ((bVar5) && (local_40 != (longlong *)0x0)) {
      LOCK();
      plVar7 = local_40 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    plVar7 = plStack_50;
    if ((bVar6) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar8 = plStack_50 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    if ((*param_2 == 0) && (local_88 != 0)) {
      local_38 = local_88;
      plStack_30 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
        UNLOCK();
      }
      FUN_140549810(param_1 + 0x1d4,local_res10,&local_38);
      plVar7 = plStack_80;
      plVar8 = (longlong *)0x0;
      if (local_res10[0] != -1) {
        plVar8 = (longlong *)(param_1[0x1d4] + (longlong)local_res10[0] * 0x28);
      }
      plVar9 = plVar8 + 2;
      if (plVar8 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_80 + 1;
        lVar3 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_80 + 8))(plStack_80,1);
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        local_70 = (longlong *)plVar9[1];
        local_78 = *plVar9;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
        }
        if (param_2 != &local_78) {
          *param_2 = local_78;
          local_78 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_70);
        }
        plVar7 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_70 + 1;
          lVar3 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_70 + 8))(local_70,1);
            }
          }
        }
      }
    }
    plVar7 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_80 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_80 + 8))(plStack_80,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140bb8480 FUN_140bb8480 body=619 status=ok
// SIG undefined FUN_140bb8480(void)

longlong * FUN_140bb8480(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int local_res10 [2];
  undefined4 local_res18;
  undefined8 local_res20;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  undefined **local_60 [2];
  longlong *local_50;
  longlong local_48;
  
  uVar10 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  local_res20 = 0;
  local_res18 = param_3;
  FUN_1404cf890(&local_80,0);
  if (local_80 != (longlong *)0x0) {
    puVar11 = *(undefined8 **)(param_1 + 0x38);
    uVar9 = (longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff;
    if (puVar11 + *(int *)(param_1 + 0x40) < puVar11) {
      uVar9 = uVar10;
    }
    if (uVar9 != 0) {
      do {
        uVar5 = *puVar11;
        local_res10[0] = 1;
        lVar8 = FUN_142547b50(uVar5,local_60);
        plVar6 = *(longlong **)(lVar8 + 0x10);
        lVar8 = *(longlong *)(lVar8 + 8);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        local_60[0] = &PTR_FUN_143f740c8;
        if (local_48 != 0) {
          FMemory::Free();
        }
        plVar3 = local_50;
        local_60[0] = &PTR_FUN_143f73d18;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_50)(local_50);
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
        if (lVar8 != 0) {
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          local_70 = lVar8;
          local_68 = plVar6;
          (**(code **)(*local_80 + 0x140))(local_80,&local_70,local_res18,local_res10);
          plVar3 = local_68;
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_68 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_68)(local_68);
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
        }
        if (local_res10[0] == 1) {
          iVar4 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar4 * 8) = uVar5;
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar6 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        puVar11 = puVar11 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar9);
    }
  }
  plVar6 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_78 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140bb86f0 FUN_140bb86f0 body=464 status=ok
// SIG undefined FUN_140bb86f0(void)

longlong * FUN_140bb86f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined **local_58 [2];
  longlong *local_48;
  longlong local_40;
  
  uVar8 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  uVar10 = (longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff;
  if (puVar9 + *(int *)(param_1 + 0x40) < puVar9) {
    uVar10 = uVar8;
  }
  if (uVar10 != 0) {
    do {
      lVar6 = FUN_142547b50(*puVar9,local_58);
      plVar4 = *(longlong **)(lVar6 + 0x10);
      lVar6 = *(longlong *)(lVar6 + 8);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_58[0] = &PTR_FUN_143f740c8;
      if (local_40 != 0) {
        FMemory::Free();
      }
      plVar7 = local_48;
      local_58[0] = &PTR_FUN_143f73d18;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      if (lVar6 == 0) {
LAB_140bb883d:
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar4 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
      }
      else {
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
        }
        plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *param_2);
        *plVar7 = lVar6;
        plVar7[1] = (longlong)plVar4;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          plVar7 = plVar4 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
          goto LAB_140bb883d;
        }
      }
      puVar9 = puVar9 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar10);
  }
  return param_2;
}



// FUNCTION 140bb88c0 FUN_140bb88c0 body=248 status=ok
// SIG undefined FUN_140bb88c0(void)

undefined4 FUN_140bb88c0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  uVar6 = 0;
  if (*param_2 != 0) {
    FUN_1404cf890(&local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_18 = *param_2;
      local_10 = (longlong *)param_2[1];
      if (local_10 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_10 + 1) = (int)local_10[1] + 1;
        UNLOCK();
      }
      uVar6 = (**(code **)(*local_28 + 0x78))(local_28,&local_18);
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
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
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
    return uVar6;
  }
  return 0;
}



// FUNCTION 140bb89c0 FUN_140bb89c0 body=350 status=ok
// SIG undefined FUN_140bb89c0(void)

longlong FUN_140bb89c0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  
  plVar12 = *(longlong **)(param_1 + 0x38);
  lVar8 = 0;
  plVar1 = plVar12 + *(int *)(param_1 + 0x40);
  do {
    if (plVar12 == plVar1) {
      return lVar8;
    }
    if ((*plVar12 != 0) && (plVar2 = *(longlong **)(*plVar12 + 0x30), plVar2 != (longlong *)0x0)) {
      lVar6 = FUN_14145f370();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (lVar6 = (**(code **)(*plVar2 + 0xfa8))(plVar2), lVar6 != 0)) {
        uVar7 = FUN_14137f3f0();
        cVar4 = FUN_142ef5b10(lVar6,uVar7);
        if (cVar4 != '\0') {
          iVar5 = *(int *)(lVar6 + 0x48);
          iVar11 = 0;
          lVar10 = 0;
          if (0 < iVar5) {
            do {
              if ((lVar10 < 0) || (iVar5 <= iVar11)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (((bVar3) &&
                  (plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x40) + lVar10 * 8),
                  plVar2 != (longlong *)0x0)) &&
                 (lVar8 = (**(code **)(*plVar2 + 0x278))(), lVar8 != 0)) {
                lVar9 = FUN_14137f3f0();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) break;
              }
              iVar5 = *(int *)(lVar6 + 0x48);
              lVar8 = 0;
              iVar11 = iVar11 + 1;
              lVar10 = lVar10 + 1;
            } while (iVar11 < iVar5);
          }
        }
      }
    }
    plVar12 = plVar12 + 1;
  } while( true );
}



// FUNCTION 140bb8b20 FUN_140bb8b20 body=186 status=ok
// SIG undefined FUN_140bb8b20(void)

undefined8 FUN_140bb8b20(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x830) >> 2 & 1) != 0)) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar2 = UWorld::GetWorldSettings(uVar3,0,1);
    if (lVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar2 = UWorld::GetWorldSettings(uVar3,0,1);
      lVar2 = *(longlong *)(lVar2 + 0x658);
      if (lVar2 != 0) {
        lVar4 = UTextureRenderTargetCube::GetPrivateStaticClass();
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
          return *(undefined8 *)(lVar2 + 200);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140bb8be0 FUN_140bb8be0 body=233 status=ok
// SIG undefined FUN_140bb8be0(void)

undefined8 FUN_140bb8be0(longlong *param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x830) >> 2 & 1) != 0)) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar2 = UWorld::GetWorldSettings(uVar3,0,1);
    if (lVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar2 = UWorld::GetWorldSettings(uVar3,0,1);
      lVar2 = *(longlong *)(lVar2 + 0x658);
      if (lVar2 != 0) {
        lVar4 = UTextureRenderTargetCube::GetPrivateStaticClass();
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
          if ((param_2 < 0) || (*(int *)(lVar2 + 0xc0) <= param_2)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            return *(undefined8 *)(*(longlong *)(lVar2 + 0xb8) + (longlong)param_2 * 8);
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140bb8cd0 FUN_140bb8cd0 body=207 status=ok
// SIG undefined FUN_140bb8cd0(void)

longlong FUN_140bb8cd0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x830) >> 2 & 1) != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar2 = UWorld::GetWorldSettings(uVar3,0,1);
      if (lVar2 != 0) {
        uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar2 = UWorld::GetWorldSettings(uVar3,0,1);
        lVar2 = *(longlong *)(lVar2 + 0x658);
        if (lVar2 != 0) {
          lVar4 = UTextureRenderTargetCube::GetPrivateStaticClass();
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
            return lVar2 + 0xb8;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140bb8da0 FUN_140bb8da0 body=25 status=ok
// SIG undefined FUN_140bb8da0(void)

undefined8 FUN_140bb8da0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0xb20) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140bb8daf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xb20) + 0x2a0))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 140bb8dc0 FUN_140bb8dc0 body=349 status=ok
// SIG undefined FUN_140bb8dc0(void)

undefined4 FUN_140bb8dc0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  
  uVar2 = FUN_1404b0120();
  lVar6 = FUN_140b825a0(param_1);
  if (lVar6 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_140cb6340(lVar6);
  }
  FUN_140dbd240(&local_28,param_2);
  iVar1 = *(int *)(param_1 + 0x1078);
  FUN_140dbb710(&local_38);
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  puVar8 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar8 = local_38;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar7);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar5 = 0;
  if (iVar4 == 0) {
    lVar6 = UMagicLeapARPinFunctionLibrary::IsTrackerValid();
    uVar5 = 0;
    if (lVar6 != 0) {
      uVar5 = FUN_140aae880(lVar6);
    }
  }
  puVar7 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar7 = local_28;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  FString::PrintfImpl(&local_38,L"%d-%s-%s-%d-%d-%d",uVar2,puVar8,puVar7,uVar3,0 < iVar1,uVar5);
  puVar7 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar7 = local_38;
  }
  uVar2 = FCrc::StrCrc32<wchar_t>(puVar7,0);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 140bb8f20 FUN_140bb8f20 body=167 status=ok
// SIG undefined FUN_140bb8f20(void)

longlong FUN_140bb8f20(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  
  puVar2 = *(undefined8 **)(param_1 + 0x1200);
  iVar1 = *(int *)(param_1 + 0x1208);
  puVar6 = puVar2;
  while( true ) {
    if (puVar6 == puVar2 + (longlong)iVar1 * 5) {
      return 0xffffffff;
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    if (*(int *)(puVar6 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar6;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
    if (iVar3 == 0) break;
    puVar6 = puVar6 + 5;
  }
  return ((longlong)puVar6 - (longlong)puVar2) / 0x28;
}



// FUNCTION 140bb8fd0 FUN_140bb8fd0 body=190 status=ok
// SIG undefined FUN_140bb8fd0(void)

void FUN_140bb8fd0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x1200);
  lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x1208) * 0x28;
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x28) {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
    }
    FString::FString((longlong)iVar2 * 0x10 + *param_2,lVar3);
    iVar2 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_3,iVar2);
    }
    FText::FText(*param_3 + (longlong)iVar2 * 0x18,lVar3 + 0x10);
  }
  return;
}



// FUNCTION 140bb9090 FUN_140bb9090 body=23 status=ok
// SIG undefined FUN_140bb9090(void)

bool FUN_140bb9090(void)

{
  char cVar1;
  
  cVar1 = FUN_140bb68b0();
  return cVar1 == '\x01';
}



// FUNCTION 140bb90b0 FUN_140bb90b0 body=22 status=ok
// SIG undefined FUN_140bb90b0(void)

int FUN_140bb90b0(void)

{
  byte bVar1;
  
  bVar1 = FUN_140b81c70();
  return ((uint)bVar1 + (uint)bVar1 * 4) * 2;
}



// FUNCTION 140bb90d0 FUN_140bb90d0 body=237 status=ok
// SIG undefined FUN_140bb90d0(void)

undefined8 * FUN_140bb90d0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_142450450(param_1,&local_28);
  if (local_28 != 0) {
    local_18 = local_28;
    plStack_10 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
    }
    FUN_140d79f00(*(undefined8 *)(param_1 + 0x478),&local_18,0,0,param_2);
    plVar3 = plStack_10;
    if (plStack_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_10)(plStack_10);
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
  }
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_20 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plStack_20 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140bb91c0 FUN_140bb91c0 body=274 status=ok
// SIG undefined FUN_140bb91c0(void)

int FUN_140bb91c0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar5 = FUN_140bb7900();
  lVar6 = FUN_140bb7870(param_1);
  if (lVar6 == 0) {
    plVar7 = (longlong *)FUN_141424bc0();
    lVar6 = plVar7[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x368))(plVar7);
      lVar6 = plVar7[0x1f];
    }
    iVar1 = FUN_142480900(lVar6);
    iVar2 = FUN_14046e5c0(param_1);
    iVar1 = iVar1 - iVar2;
  }
  else {
    iVar1 = FUN_1404cfa10(lVar6);
  }
  if (lVar5 == 0) {
    plVar7 = (longlong *)FUN_141424bc0();
    lVar5 = plVar7[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x368))(plVar7);
      lVar5 = plVar7[0x1f];
    }
    iVar2 = FUN_142480900(lVar5);
    iVar3 = FUN_14046e5c0(param_1);
    iVar2 = iVar2 - iVar3;
  }
  else {
    iVar2 = FUN_1404cfa10(lVar5);
  }
  plVar7 = (longlong *)FUN_141424bc0();
  lVar5 = plVar7[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar5 = plVar7[0x1f];
  }
  iVar3 = FUN_142480900(lVar5);
  iVar4 = FUN_140bba270(param_1);
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  if (iVar3 - iVar4 <= iVar2) {
    iVar2 = iVar3 - iVar4;
  }
  return iVar2;
}



// FUNCTION 140bb92e0 FUN_140bb92e0 body=80 status=ok
// SIG undefined FUN_140bb92e0(void)

int FUN_140bb92e0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = FUN_14046e5c0();
  lVar3 = FUN_140bb7900(param_1);
  if (lVar3 == 0) {
    lVar3 = FUN_140bb7870(param_1);
    if (lVar3 == 0) {
      return iVar1;
    }
  }
  iVar2 = FUN_1404cfb00(lVar3);
  return iVar2 + iVar1;
}



// FUNCTION 140bb9330 FUN_140bb9330 body=175 status=ok
// SIG undefined FUN_140bb9330(void)

undefined8 FUN_140bb9330(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((lVar2 == 0) || ((*(uint *)(lVar2 + 0x830) >> 2 & 1) == 0)) {
    plVar5 = (longlong *)FUN_140b823b0(param_1);
    if (plVar5 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140bb93cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar5 + 0x408))(plVar5);
      return uVar4;
    }
  }
  else {
    lVar2 = FUN_14244f490(param_1,0);
    if (lVar2 != 0) {
      lVar3 = FUN_14145f370();
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
        lVar2 = FUN_140cfbfb0(lVar2);
        if (lVar2 != 0) {
          uVar4 = FUN_140c10350(*(undefined4 *)(lVar2 + 0xa0));
          return uVar4;
        }
      }
    }
  }
  return 1;
}



// FUNCTION 140bb93e0 FUN_140bb93e0 body=80 status=ok
// SIG undefined FUN_140bb93e0(void)

ulonglong FUN_140bb93e0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar2 = (**(code **)(*param_1 + 0x148))();
  lVar3 = FUN_142f6caf0(uVar2);
  if (lVar3 != 0) {
    lVar4 = FUN_142f59790(lVar3);
    if (lVar4 == 0) {
      iVar1 = FUN_142f5a870(lVar3);
      if (iVar1 < 0) {
        return 0;
      }
      uVar5 = (ulonglong)(iVar1 + 1);
    }
    else {
      uVar5 = FUN_142f5e2e0(lVar3,lVar4);
    }
    if (-1 < (int)uVar5) {
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 140bb9430 FUN_140bb9430 body=1695 status=ok
// SIG undefined FUN_140bb9430(void)

ulonglong FUN_140bb9430(longlong param_1)

{
  longlong *plVar1;
  void *_Src;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  int *piVar14;
  longlong lVar15;
  bool bVar16;
  int local_res10 [2];
  undefined8 local_res18;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  longlong local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  
  lVar9 = 0;
  local_res10[0] = 0;
  lVar7 = FUN_14244f490(param_1,0);
  if (lVar7 == 0) {
LAB_140bb9531:
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
    if (!bVar16) goto LAB_140bb9531;
    lVar8 = FUN_140cff230(lVar7);
    if (lVar8 != 0) {
      local_e0 = *(int *)(lVar8 + 0x1f0);
      lVar15 = (longlong)local_e0;
      _Src = *(void **)(lVar8 + 0x1e8);
      local_e8 = (void *)0x0;
      if (local_e0 == 0) {
        local_dc = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,local_e0,0);
        _guard_xfg_dispatch_icall_nop(local_e8,_Src,lVar15 * 2);
      }
      uVar4 = FUN_140bb8f20(param_1,&local_e8);
      if (local_e8 != (void *)0x0) {
        FMemory::Free();
      }
      if (((int)uVar4 < 0) || (*(int *)(param_1 + 0x1208) <= (int)uVar4)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      if (bVar16) {
        return (ulonglong)uVar4;
      }
    }
  }
  lVar8 = lVar9;
  if ((*(longlong *)(param_1 + 0x1f8) != 0) &&
     (lVar9 = UUGMenuManager::GetFadeHUD(), lVar8 = 0, lVar9 != 0)) {
    lVar8 = 1;
    plVar10 = (longlong *)FUN_140d3ccb0(lVar9,local_78);
    if (*plVar10 != 0) {
      bVar16 = true;
      goto LAB_140bb9575;
    }
  }
  bVar16 = false;
LAB_140bb9575:
  if ((lVar8 != 0) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_70 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar14 = (int *)((longlong)local_70 + 0xc);
      iVar5 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (bVar16) {
    bVar16 = lVar7 == 0;
    if (bVar16) {
      plVar10 = &local_d8;
      lVar7 = 0;
      local_d8 = 0;
      plStack_d0 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)FUN_142dcf3a0(lVar7,local_68);
      lVar7 = *plVar10;
    }
    plVar2 = (longlong *)plVar10[1];
    plVar10[1] = 0;
    *plVar10 = 0;
    plVar10 = plStack_d0;
    if ((bVar16) && (plStack_d0 != (longlong *)0x0)) {
      LOCK();
      plVar1 = plStack_d0 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar14 = (int *)((longlong)plVar10 + 0xc);
        iVar5 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
        }
      }
    }
    if ((!bVar16) && (local_60 != (longlong *)0x0)) {
      LOCK();
      plVar10 = local_60 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar14 = (int *)((longlong)local_60 + 0xc);
        iVar5 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    if (lVar7 != 0) {
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      plStack_b0 = (longlong *)0x0;
      local_f8 = (undefined4)lVar7;
      uStack_f4 = (undefined4)((ulonglong)lVar7 >> 0x20);
      uStack_f0 = SUB84(plVar2,0);
      uStack_ec = (undefined4)((ulonglong)plVar2 >> 0x20);
      local_88 = local_f8;
      uStack_84 = uStack_f4;
      uStack_80 = uStack_f0;
      uStack_7c = uStack_ec;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      puVar11 = (undefined8 *)FUN_140d3ccb0(lVar9,local_58);
      cVar3 = FUN_140dee000(*puVar11,&local_88,&local_b8);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_50 + 1;
        lVar7 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar14 = (int *)((longlong)local_50 + 0xc);
          iVar5 = *piVar14;
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      plVar10 = (longlong *)CONCAT44(uStack_7c,uStack_80);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar10 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar14 = (int *)((longlong)plVar10 + 0xc);
          iVar5 = *piVar14;
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      if (((cVar3 != '\0') && (0 < (int)local_90)) && (*(int *)(local_98 + 0x28) < 100)) {
        lVar7 = *(longlong *)(param_1 + 0x1260);
        lVar9 = (longlong)*(int *)(param_1 + 0x1268) * 0x20 + lVar7;
        if (lVar7 != lVar9) {
          lVar8 = local_98 + 0x10;
          do {
            cVar3 = FString::StartsWith(lVar8,lVar7,1);
            if (cVar3 != '\0') {
              uVar4 = FUN_140bb8f20(param_1,lVar7 + 0x10);
              uVar13 = (ulonglong)uVar4;
              if (((int)uVar4 < 0) || (*(int *)(param_1 + 0x1208) <= (int)uVar4))
              goto LAB_140bb97b4;
              bVar16 = true;
              goto LAB_140bb97b6;
            }
            lVar7 = lVar7 + 0x20;
          } while (lVar7 != lVar9);
        }
        uVar13 = 0xffffffff;
LAB_140bb97b4:
        bVar16 = false;
LAB_140bb97b6:
        if (bVar16) {
          FUN_140b7a560(&local_98);
          plVar10 = plStack_b0;
          if (plStack_b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_b0 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plStack_b0)(plStack_b0);
              LOCK();
              piVar14 = (int *)((longlong)plVar10 + 0xc);
              iVar5 = *piVar14;
              *piVar14 = *piVar14 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
          if (plVar2 == (longlong *)0x0) {
            return uVar13;
          }
          LOCK();
          plVar10 = plVar2 + 1;
          lVar7 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar7 != 1) {
            return uVar13;
          }
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar14 = (int *)((longlong)plVar2 + 0xc);
          iVar5 = *piVar14;
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (iVar5 != 1) {
            return uVar13;
          }
          (**(code **)(*plVar2 + 8))(plVar2,1);
          return uVar13;
        }
      }
      FUN_140b7a560(&local_98);
      plVar10 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_b0 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar14 = (int *)((longlong)plVar10 + 0xc);
          iVar5 = *piVar14;
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar2 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar14 = (int *)((longlong)plVar2 + 0xc);
        iVar5 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  lVar9 = 0;
  lVar7 = FInternationalization::Get();
  plVar10 = *(longlong **)(lVar7 + 0x30);
  local_48 = *(undefined8 *)(lVar7 + 0x28);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_140572fd0(local_48);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x1210,local_res10,uVar12);
  if ((local_res10[0] != -1) &&
     (lVar7 = *(longlong *)(param_1 + 0x1210) + (longlong)local_res10[0] * 0x28, lVar7 != 0)) {
    lVar9 = lVar7 + 0x10;
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar14 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (lVar9 != 0) {
    uVar13 = FUN_140bb8f20(param_1,lVar9);
    if (((int)uVar13 < 0) || (*(int *)(param_1 + 0x1208) <= (int)uVar13)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if (bVar16) {
      return uVar13;
    }
  }
  local_res18 = 0;
  Online::GetIdentityInterface(&local_c8,0);
  if (local_c8 != (longlong *)0x0) {
    iVar5 = (**(code **)(*local_c8 + 0x40))();
    if (*(int *)(param_1 + 0x1278) != *(int *)(param_1 + 0x12a4)) {
      lVar7 = *(longlong *)(param_1 + 0x12b0);
      if (*(longlong *)(param_1 + 0x12b0) == 0) {
        lVar7 = param_1 + 0x12a8;
      }
      iVar6 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x12b8) - 1U & (longlong)iVar5) * 4);
      if (iVar6 != -1) {
        do {
          piVar14 = (int *)((longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x1270));
          if (*piVar14 == iVar5) {
            if (((iVar6 != -1) && (piVar14 != (int *)0x0)) && (piVar14 != (int *)0xfffffffffffffff8)
               ) {
              uVar4 = FUN_140bb8f20(param_1);
              uVar13 = (ulonglong)uVar4;
              if (((int)uVar4 < 0) || (*(int *)(param_1 + 0x1208) <= (int)uVar4)) {
                bVar16 = false;
              }
              else {
                bVar16 = true;
              }
              if (bVar16) goto LAB_140bb9a7b;
            }
            break;
          }
          iVar6 = piVar14[6];
        } while (iVar6 != -1);
      }
    }
  }
  uVar13 = 0;
LAB_140bb9a7b:
  plVar10 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c0 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar14 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  return uVar13;
}



// FUNCTION 140bb9ae0 FUN_140bb9ae0 body=169 status=ok
// SIG undefined FUN_140bb9ae0(void)

void FUN_140bb9ae0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x30);
    lVar3 = (longlong)*(int *)(lVar3 + 0x38) * 0x68 + lVar4;
    for (; lVar4 != lVar3; lVar4 = lVar4 + 0x68) {
      puVar2 = (undefined8 *)
               (**(code **)(*(longlong *)(lVar4 + 0x38) + 0x18))(lVar4 + 0x38,local_res8);
      iVar1 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                        (param_2,puVar2);
      if (iVar1 == -1) {
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *puVar2;
      }
    }
  }
  return;
}



// FUNCTION 140bb9b90 FUN_140bb9b90 body=187 status=ok
// SIG undefined FUN_140bb9b90(void)

longlong FUN_140bb9b90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x10c0);
  plVar1 = plVar7 + *(int *)(param_1 + 0x10c8);
  lVar3 = 0;
  do {
    if (plVar7 == plVar1) {
      return lVar3;
    }
    lVar6 = *param_2;
    lVar8 = *plVar7;
    if (lVar6 != 0) {
      lVar4 = FUN_14143d350();
      lVar5 = lVar6;
      do {
        if (lVar5 == lVar4) goto LAB_140bb9bf6;
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
    lVar6 = 0;
LAB_140bb9bf6:
    lVar5 = *(longlong *)(lVar8 + 0x10);
    if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      lVar8 = lVar3;
    }
    plVar7 = plVar7 + 1;
    lVar3 = lVar8;
  } while( true );
}



// FUNCTION 140bb9c50 FUN_140bb9c50 body=144 status=ok
// SIG undefined FUN_140bb9c50(void)

undefined8 FUN_140bb9c50(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_14244f490(param_1,0);
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
    if ((bVar1) && (*(char *)(lVar2 + 0x128) == '\x03')) {
      uVar4 = FUN_140bb9b90(param_1,param_2);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 140bb9ce0 FUN_140bb9ce0 body=1272 status=ok
// SIG undefined FUN_140bb9ce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140bb9ce0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  wchar_t _C;
  longlong lVar4;
  char cVar5;
  wint_t wVar6;
  wint_t wVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  ulonglong *puStack_1a0;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong *plStack_178;
  undefined1 local_170 [16];
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
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  undefined4 local_60 [4];
  undefined1 local_50 [8];
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  FText::FText(param_2);
  uVar8 = FUN_1404cd0b0(local_148,param_4);
  FText::operator=(param_2,uVar8);
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_140 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar1 = (int *)((longlong)local_140 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  cVar5 = FText::IsEmpty(param_2);
  if (cVar5 == '\0') {
    return param_2;
  }
  if (param_3 == 3) {
LAB_140bba153:
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"Your connection has been lost. Please check your network.",
                       L"OakGameInstanceNetworkFailureDescriptions",L"ConnectionLost");
    FText::operator=(param_2,uVar8);
    if (local_98 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    plVar12 = local_98 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 != 1) {
      return param_2;
    }
    (**(code **)*local_98)(local_98);
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return param_2;
    }
    (**(code **)(*local_98 + 8))(local_98,1);
    return param_2;
  }
  if (param_3 == 4) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,L"Your connection has timed out. Please check your network.",
                       L"OakGameInstanceNetworkFailureDescriptions",L"ConnectionTimeout");
    FText::operator=(param_2,uVar8);
    plVar12 = local_b0;
  }
  else {
    if (param_3 == 5) {
      if (*(int *)(param_4 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*param_4;
      }
      pwVar13 = L"HostClosedConnection";
      do {
        _C = *(wchar_t *)((longlong)(puVar11 + -0xa218409c) + (longlong)pwVar13);
        if ((_C == L'\0') && (*pwVar13 == L'\0')) goto LAB_140bba0bd;
        if (_C != *pwVar13) {
          wVar6 = towlower(_C);
          wVar7 = towlower(*pwVar13);
          if (wVar6 != wVar7) goto LAB_140bba0b2;
        }
        pwVar13 = pwVar13 + 1;
      } while( true );
    }
    if (param_3 == 6) {
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_100,
                         L"The match you are trying to join is running an incompatible version of the game. Please try upgrading your game version."
                         ,L"OakGameInstanceNetworkFailureDescriptions",L"OutdatedClient");
      FText::operator=(param_2,uVar8);
      plVar12 = local_f8;
    }
    else {
      if (param_3 == 8) goto LAB_140bba153;
      local_180 = 0;
      plStack_178 = (longlong *)0x0;
      lVar9 = FText::AsNumber(local_78,param_3,0,&local_180);
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_118,L"UNKNOWN FAILURE TYPE! (Code: {0})",
                         L"OakGameInstanceNetworkFailureDescriptions",L"UnknownFailureType");
      puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_88,uVar8);
      local_60[0] = 4;
      FText::FText(local_50,lVar9);
      local_190 = *puVar10;
      local_1a8 = local_60;
      puStack_1a0 = &local_30;
      local_188 = puVar10[1];
      local_38 = '\x01';
      if (local_188 != 0) {
        LOCK();
        *(int *)(local_188 + 8) = *(int *)(local_188 + 8) + 1;
        UNLOCK();
      }
      uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_170,&local_1a8);
      uVar8 = FText::Format(local_130,&local_190,uVar8);
      FText::FText(local_160,uVar8);
      if (local_128 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_128 + 1;
        lVar4 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_128)(local_128);
          LOCK();
          piVar1 = (int *)((longlong)local_128 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_128 + 8))(local_128,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_170);
      if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
        LOCK();
        plVar12 = local_48 + 1;
        lVar4 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      plVar12 = (longlong *)puVar10[1];
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar12 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      plVar12 = *(longlong **)(lVar9 + 8);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar12 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      FText::operator=(param_2,local_160);
      if (local_158 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_158 + 1;
        lVar9 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_158)(local_158);
          LOCK();
          piVar1 = (int *)((longlong)local_158 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_158 + 8))(local_158,1);
          }
        }
      }
      plVar12 = plStack_178;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_110 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)local_110 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar12 = plStack_178;
          if (iVar3 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
            plVar12 = plStack_178;
          }
        }
      }
    }
  }
  goto LAB_140bb9ff6;
LAB_140bba0b2:
  if (wVar6 == wVar7) {
LAB_140bba0bd:
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_e8,L"The host closed the connection.",
                       L"OakGameInstanceNetworkFailureDescriptions",L"HostClosedConnection");
    FText::operator=(param_2,uVar8);
    plVar12 = local_e0;
  }
  else {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d0,L"Unable to connect to the host. Please check your network.",
                       L"OakGameInstanceNetworkFailureDescriptions",L"FailureReceived");
    FText::operator=(param_2,uVar8);
    plVar12 = local_c8;
  }
LAB_140bb9ff6:
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140bba1e0 FUN_140bba1e0 body=66 status=ok
// SIG undefined FUN_140bba1e0(void)

longlong FUN_140bba1e0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 0x140) != 0) {
      return param_1[0x16e];
    }
  }
  return 0;
}



// FUNCTION 140bba230 FUN_140bba230 body=62 status=ok
// SIG undefined FUN_140bba230(void)

int FUN_140bba230(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = -1;
  lVar1 = UGameInstance::FindLocalPlayerFromControllerId(param_1,0xffffffff);
  while (lVar1 != 0) {
    iVar2 = iVar2 + -1;
    lVar1 = UGameInstance::FindLocalPlayerFromControllerId(param_1,iVar2);
  }
  return iVar2;
}



// FUNCTION 140bba270 FUN_140bba270 body=158 status=ok
// SIG undefined FUN_140bba270(void)

int FUN_140bba270(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x830) >> 2 & 1) != 0)) {
    iVar1 = FUN_14046e5c0(param_1);
    lVar3 = FUN_140bb7870(param_1);
    if (lVar3 == 0) {
      lVar3 = FUN_140bb6170(param_1);
      if (lVar3 == 0) {
        return iVar1;
      }
    }
    iVar2 = FUN_1404cfb00(lVar3);
    return iVar2 + iVar1;
  }
  local_18 = 0;
  local_10 = 0;
  FUN_140bb7680(param_1,&local_18);
  iVar1 = (int)local_10;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
  return iVar1;
}



// FUNCTION 140bba310 FUN_140bba310 body=309 status=ok
// SIG undefined FUN_140bba310(void)

ulonglong FUN_140bba310(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  uVar6 = 0;
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 != 0) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = UWorld::GetWorldSettings(uVar4,0,1);
    if (lVar3 != 0) {
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar3 = UWorld::GetWorldSettings(uVar4,0,1);
      lVar3 = *(longlong *)(lVar3 + 0x658);
      if (lVar3 != 0) {
        lVar5 = UTextureRenderTargetCube::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          plVar8 = *(longlong **)(lVar3 + 0xb8);
          uVar9 = (longlong)*(int *)(lVar3 + 0xc0) & 0x1fffffffffffffff;
          if (plVar8 + *(int *)(lVar3 + 0xc0) < plVar8) {
            uVar9 = uVar6;
          }
          uVar7 = uVar6;
          if (uVar9 != 0) {
            do {
              if (*plVar8 != 0) {
                cVar2 = FUN_140e53de0();
                if (cVar2 != '\0') {
                  uVar6 = (ulonglong)((int)uVar6 + 1);
                }
              }
              plVar8 = plVar8 + 1;
              uVar7 = uVar7 + 1;
            } while (uVar7 != uVar9);
          }
          return uVar6;
        }
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 140bba450 FUN_140bba450 body=233 status=ok
// SIG undefined FUN_140bba450(void)

ulonglong FUN_140bba450(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  uVar2 = 0;
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if ((lVar1 == 0) || ((*(uint *)(lVar1 + 0x830) >> 2 & 1) == 0)) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_140bb7680(param_1,&local_28);
    puVar4 = local_28 + (longlong)(int)local_20 * 2;
    for (puVar3 = local_28; puVar3 != puVar4; puVar3 = puVar3 + 2) {
      local_18 = *puVar3;
      local_10 = puVar3[1];
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
      }
      lVar1 = FUN_14244c070(param_1,&local_18);
      if (lVar1 == 0) {
        uVar2 = (ulonglong)((int)uVar2 + 1);
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_28);
  }
  else {
    lVar1 = FUN_140bb7870(param_1);
    if ((lVar1 != 0) || (lVar1 = FUN_140bb6170(param_1), lVar1 != 0)) {
      uVar2 = FUN_1404cfb00(lVar1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 140bba540 FUN_140bba540 body=133 status=ok
// SIG undefined FUN_140bba540(void)

longlong FUN_140bba540(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (DAT_146b17150 != 0) {
    lVar2 = FUN_142874ac0();
    if (lVar2 != 0) {
      lVar2 = FUN_142874ac0(DAT_146b17150);
      if (lVar2 != 0) {
        lVar3 = FUN_141424dd0();
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
  return 0;
}



// FUNCTION 140bba5d0 FUN_140bba5d0 body=7 status=ok
// SIG undefined FUN_140bba5d0(void)

undefined4 FUN_140bba5d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1054);
}



// FUNCTION 140bba5e0 FUN_140bba5e0 body=19 status=ok
// SIG undefined FUN_140bba5e0(void)

undefined8 FUN_140bba5e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1f8) == 0) {
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + 0xa8);
}



// FUNCTION 140bba600 GetOnlineSessionClass body=26 status=ok
// SIG undefined GetOnlineSessionClass(void)

undefined8 * UFGGameInstance::GetOnlineSessionClass(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = UFGOnlineSessionClient::GetPrivateStaticClass();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 140bba620 FUN_140bba620 body=1770 status=ok
// SIG undefined FUN_140bba620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_140bba620(longlong *param_1,longlong *param_2,longlong **param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_188 [40];
  longlong local_160;
  longlong *plStack_158;
  longlong local_150;
  longlong *plStack_148;
  longlong *local_140;
  longlong *plStack_138;
  longlong local_130;
  longlong *plStack_128;
  longlong *local_120;
  longlong *plStack_118;
  longlong *local_110;
  longlong *aplStack_108 [2];
  longlong *local_f8;
  undefined4 local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c0;
  undefined **local_b8 [2];
  longlong *local_a8;
  longlong local_a0;
  longlong local_90;
  longlong *plStack_88;
  longlong local_80;
  longlong *plStack_78;
  longlong *local_70;
  longlong *plStack_68;
  longlong local_60;
  longlong *plStack_58;
  longlong *local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  plVar10 = (longlong *)0x0;
  *param_2 = 0;
  param_2[1] = 0;
  local_f0 = 0;
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if (lVar7 != 0) {
    uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar6 = FUN_1428cf800(uVar8);
    if (iVar6 == 3) goto LAB_140bba88c;
  }
  lVar7 = FUN_140bb6170(param_1);
  if (lVar7 == 0) {
    lVar7 = UGameInstance::GetFirstGamePlayer(param_1);
    if (lVar7 == 0) {
      return param_2;
    }
    lVar9 = FUN_142547b50(lVar7,local_b8);
    lVar7 = *(longlong *)(lVar9 + 8);
    plVar10 = *(longlong **)(lVar9 + 0x10);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_160 = lVar7;
    plStack_158 = plVar10;
    if (&local_160 != param_2) {
      local_160 = *param_2;
      plStack_158 = (longlong *)param_2[1];
      *param_2 = lVar7;
      param_2[1] = (longlong)plVar10;
      local_90 = lVar7;
      plStack_88 = plVar10;
    }
    plVar10 = plStack_158;
    if (plStack_158 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_158 + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_158)(plStack_158);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plStack_158 + 8))(plStack_158,1);
        }
      }
    }
    local_b8[0] = &PTR_FUN_143f740c8;
    if (local_a0 != 0) {
      FMemory::Free();
    }
    local_b8[0] = &PTR_FUN_143f73d18;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_a8 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
    if (param_3 == (longlong **)0x0) {
      return param_2;
    }
    local_e8 = *param_2;
    if (local_e8 == 0) {
      return param_2;
    }
    local_e0 = (longlong *)param_2[1];
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    if ((param_1[0x3f] == 0) || (lVar7 = UUGMenuManager::GetFadeHUD(), lVar7 == 0)) {
      local_110 = (longlong *)0x0;
      aplStack_108[0] = (longlong *)0x0;
    }
    else {
      FUN_140d3b970(lVar7,&local_110,&local_e8);
    }
    if (param_3 != &local_110) {
      *param_3 = local_110;
      local_110 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_3 + 1,aplStack_108);
    }
    plVar10 = aplStack_108[0];
    if (aplStack_108[0] != (longlong *)0x0) {
      LOCK();
      plVar11 = aplStack_108[0] + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*aplStack_108[0])(aplStack_108[0]);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    plVar10 = local_e0;
    if (local_e0 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    plVar11 = local_e0 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) {
      return param_2;
    }
    (**(code **)*local_e0)(local_e0);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 != 1) {
      return param_2;
    }
    (**(code **)(*plVar10 + 8))(plVar10,1);
    return param_2;
  }
LAB_140bba88c:
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar7 == 0) || ((*(uint *)(lVar7 + 0x830) >> 2 & 1) == 0)) {
    lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar7 != 0) {
      lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar7 = *(longlong *)(lVar7 + 0x148);
      if (lVar7 != 0) {
        lVar9 = FUN_142e4e3f0();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) && (lVar9 = *(longlong *)(lVar7 + 0x558), lVar9 != 0)) {
          lVar3 = *(longlong *)(lVar9 + 0x4b8);
          plVar10 = *(longlong **)(lVar9 + 0x4c0);
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          local_130 = lVar3;
          plStack_128 = plVar10;
          if (&local_130 != param_2) {
            local_130 = *param_2;
            plStack_128 = (longlong *)param_2[1];
            *param_2 = lVar3;
            param_2[1] = (longlong)plVar10;
            local_60 = lVar3;
            plStack_58 = plVar10;
          }
          plVar10 = plStack_128;
          if (plStack_128 != (longlong *)0x0) {
            LOCK();
            plVar11 = plStack_128 + 1;
            lVar9 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plStack_128)(plStack_128);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plStack_128 + 8))(plStack_128,1);
              }
            }
          }
          if ((param_3 != (longlong **)0x0) && (lVar7 = *(longlong *)(lVar7 + 0x558), lVar7 != 0)) {
            lVar9 = UInputKeySelector::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              plVar10 = *(longlong **)(lVar7 + 0x540);
              plVar11 = *(longlong **)(lVar7 + 0x538);
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                UNLOCK();
              }
              local_120 = plVar11;
              plStack_118 = plVar10;
              if (&local_120 != param_3) {
                local_120 = *param_3;
                plStack_118 = param_3[1];
                *param_3 = plVar11;
                param_3[1] = plVar10;
                local_50 = plVar11;
                plStack_48 = plVar10;
              }
              plVar10 = plStack_118;
              if (plStack_118 != (longlong *)0x0) {
                LOCK();
                plVar11 = plStack_118 + 1;
                lVar7 = *plVar11;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*plStack_118)(plStack_118);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar10 + 0xc);
                  iVar6 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*plStack_118 + 8))(plStack_118,1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    lVar7 = FUN_140bb6170(param_1);
    if ((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x68))) {
      plVar11 = *(longlong **)(*(longlong *)(lVar7 + 0x60) + 0x18);
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x60) + 0x10);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      local_150 = lVar7;
      plStack_148 = plVar11;
      if (&local_150 != param_2) {
        local_150 = *param_2;
        plStack_148 = (longlong *)param_2[1];
        *param_2 = lVar7;
        param_2[1] = (longlong)plVar11;
        local_80 = lVar7;
        plStack_78 = plVar11;
      }
      plVar11 = plStack_148;
      if (plStack_148 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_148 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_148)(plStack_148);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_148 + 8))(plStack_148,1);
          }
        }
      }
      if ((param_3 != (longlong **)0x0) && (local_d8 = *param_2, local_d8 != 0)) {
        local_d0 = (longlong *)param_2[1];
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
          UNLOCK();
        }
        lVar7 = FUN_140bb7f10(param_1,&local_d8);
        plVar11 = local_d0;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_d0 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_d0)(local_d0);
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
        if (lVar7 == 0) {
          bVar5 = false;
          bVar4 = true;
          local_c0 = (longlong *)0x0;
          plVar11 = plVar10;
        }
        else {
          plVar10 = *(longlong **)(lVar7 + 0x38);
          bVar5 = true;
          bVar4 = false;
          plVar11 = *(longlong **)(lVar7 + 0x30);
          local_f8 = plVar10;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        local_140 = plVar11;
        plStack_138 = plVar10;
        if (&local_140 != param_3) {
          local_140 = *param_3;
          plStack_138 = param_3[1];
          *param_3 = plVar11;
          param_3[1] = plVar10;
          local_70 = plVar11;
          plStack_68 = plVar10;
        }
        plVar10 = plStack_138;
        if (plStack_138 != (longlong *)0x0) {
          LOCK();
          plVar11 = plStack_138 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_138)(plStack_138);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plStack_138 + 8))(plStack_138,1);
            }
          }
        }
        plVar10 = local_c0;
        if ((bVar4) && (local_c0 != (longlong *)0x0)) {
          LOCK();
          plVar11 = local_c0 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_c0 + 8))(local_c0,1);
            }
          }
        }
        plVar10 = local_f8;
        if ((bVar5) && (local_f8 != (longlong *)0x0)) {
          LOCK();
          plVar11 = local_f8 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_f8 + 8))(local_f8,1);
            }
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140bbad10 FUN_140bbad10 body=356 status=ok
// SIG undefined FUN_140bbad10(void)

undefined8 FUN_140bbad10(undefined8 param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  longlong *local_20;
  longlong *local_18;
  
  FUN_1404d0c50(&local_20,0);
  if (local_20 != (longlong *)0x0) {
    lVar7 = *local_20;
    puVar6 = (undefined8 *)FName::FName(local_38,L"__NatConnectivitySesssion__",1);
    lVar7 = (**(code **)(lVar7 + 0x2c8))(local_20,*puVar6);
    if (lVar7 != 0) {
      puVar6 = (undefined8 *)FName::FName(local_30,L"__PresenceMinPort__",1);
      cVar5 = FUN_1404a9610(lVar7,*puVar6,param_2);
      if ((cVar5 != '\0') && (0 < *param_2)) {
        puVar6 = (undefined8 *)FName::FName(local_28,L"__PresenceMaxPort__",1);
        cVar5 = FUN_1404a9610(lVar7,*puVar6,param_3);
        plVar4 = local_18;
        if ((cVar5 != '\0') && (0 < *param_3)) {
          if (local_18 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_18 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_18)(local_18);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_18 + 8))(local_18,1);
              }
            }
          }
          return 1;
        }
      }
    }
  }
  plVar4 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return 0;
}



// FUNCTION 140bbae80 FUN_140bbae80 body=81 status=ok
// SIG undefined FUN_140bbae80(void)

undefined8 FUN_140bbae80(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  FText::FText(param_2);
  lVar1 = FUN_140bbaee0(param_1,param_3);
  if (lVar1 != 0) {
    FText::operator=(param_2,lVar1 + 0x90);
  }
  return param_2;
}



// FUNCTION 140bbaee0 FUN_140bbaee0 body=507 status=ok
// SIG undefined FUN_140bbaee0(void)

longlong FUN_140bbaee0(undefined8 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_48;
  longlong local_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  if (param_2 == 0) {
    return 0;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar4 = *(longlong *)(DAT_146b33f38 + 0x88);
  if (lVar4 == 0) {
LAB_140bbaf56:
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_1413e4d70();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140bbaf56;
  }
  if (*(int *)(lVar4 + 0x448) != *(int *)(lVar4 + 0x474)) {
    lVar3 = *(longlong *)(lVar4 + 0x480);
    if (*(longlong *)(lVar4 + 0x480) == 0) {
      lVar3 = lVar4 + 0x478;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(lVar4 + 0x488) - 1U & (longlong)param_2) * 4);
    if (iVar2 != -1) {
      lVar4 = *(longlong *)(lVar4 + 0x440);
      do {
        lVar3 = (longlong)iVar2 * 0x20;
        if (*(int *)(lVar3 + lVar4) == param_2) {
          if (((iVar2 != -1) && (lVar4 = (longlong)iVar2 * 0x20 + lVar4, lVar4 != 0)) &&
             (lVar4 != -8)) {
            plVar5 = (longlong *)FString::FString(local_38);
            local_28 = 0;
            local_20 = 0;
            local_18 = 0;
            local_48 = *plVar5;
            *plVar5 = 0;
            local_40 = plVar5[1];
            plVar5[1] = 0;
            FUN_1417978e0(&local_28,&local_48);
            if (*plVar5 != 0) {
              FMemory::Free();
            }
            goto LAB_140bbafe2;
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x18 + lVar4);
      } while (iVar2 != -1);
    }
  }
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_1417978e0(&local_28,&local_48);
LAB_140bbafe2:
  lVar4 = FUN_141796df0(&local_28);
  if (lVar4 != 0) {
    lVar3 = UTextureRenderTarget2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140bbb0ab;
  }
  lVar4 = 0;
LAB_140bbb0ab:
  if (local_20 != 0) {
    FMemory::Free();
  }
  return lVar4;
}



// FUNCTION 140bbb0e0 FUN_140bbb0e0 body=56 status=ok
// SIG undefined FUN_140bbb0e0(void)

longlong FUN_140bbb0e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0xab8);
  plVar1 = plVar3 + *(int *)(param_1 + 0xac0);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    lVar2 = *plVar3;
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x88) == *param_2)) break;
    plVar3 = plVar3 + 1;
  }
  return lVar2;
}



// FUNCTION 140bbb120 FUN_140bbb120 body=102 status=ok
// SIG undefined FUN_140bbb120(void)

longlong FUN_140bbb120(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = UGameInstance::FindLocalPlayerFromControllerId();
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(lVar2 + 0x30);
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
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140bbb190 FUN_140bbb190 body=279 status=ok
// SIG undefined FUN_140bbb190(void)

longlong FUN_140bbb190(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18;
  int local_10;
  
  if (*param_2 != 0) {
    lVar3 = (**(code **)(*param_1 + 0x148))();
    if (lVar3 != 0) {
      UWorld::GetPlayerControllerIterator(lVar3,&local_18);
      while( true ) {
        if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        lVar3 = FWeakObjectPtr::Get();
        if (lVar3 != 0) {
          lVar4 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (lVar4 = *(longlong *)(lVar3 + 0x460), lVar4 != 0)) {
            if (*(longlong **)(lVar4 + 0x4b8) == (longlong *)0x0) {
LAB_140bbb25a:
              bVar1 = false;
            }
            else {
              cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x4b8) + 0x20))();
              if (cVar2 == '\0') goto LAB_140bbb25a;
              bVar1 = true;
            }
            if (bVar1) {
              cVar2 = (*(code *)**(undefined8 **)*param_2)
                                ((undefined8 *)*param_2,*(undefined8 *)(lVar4 + 0x4b8));
              if (cVar2 != '\0') {
                return lVar3;
              }
            }
          }
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140bbb2b0 FUN_140bbb2b0 body=1562 status=ok
// SIG undefined FUN_140bbb2b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_140bbb2b0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  bool bVar6;
  char cVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_178 [40];
  longlong local_150;
  longlong *plStack_148;
  longlong local_138;
  longlong *plStack_130;
  longlong local_128;
  longlong *plStack_120;
  longlong local_118;
  longlong *plStack_110;
  longlong local_108;
  longlong *plStack_100;
  longlong local_f8;
  longlong *plStack_f0;
  longlong local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  longlong *plStack_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined **local_a8 [2];
  longlong *local_98;
  longlong local_90;
  longlong local_80;
  longlong *plStack_78;
  longlong local_70;
  longlong *plStack_68;
  longlong local_60;
  longlong *plStack_58;
  longlong local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  plVar9 = (longlong *)*param_3;
  plVar8 = (longlong *)FName::FName(local_b8,L"SPARK",1);
  plVar9 = (longlong *)(**(code **)(*plVar9 + 8))(plVar9,local_b0);
  if (*plVar9 != *plVar8) {
    *param_2 = *param_3;
    lVar10 = param_3[1];
    param_2[1] = lVar10;
    if (lVar10 == 0) {
      return param_2;
    }
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
    return param_2;
  }
  plVar8 = (longlong *)param_1[7];
  local_150 = 0;
  plStack_148 = (longlong *)0x0;
  plVar9 = plVar8 + (int)param_1[8];
  for (; plVar8 != plVar9; plVar8 = plVar8 + 1) {
    if (*plVar8 != 0) {
      lVar10 = FUN_142547b50(*plVar8,local_a8);
      local_138 = *(longlong *)(lVar10 + 8);
      plStack_130 = *(longlong **)(lVar10 + 0x10);
      if (plStack_130 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_130 + 1) = (int)plStack_130[1] + 1;
        UNLOCK();
      }
      local_a8[0] = &PTR_FUN_143f740c8;
      if (local_90 != 0) {
        FMemory::Free();
      }
      plVar3 = local_98;
      local_a8[0] = &PTR_FUN_143f73d18;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_98)(local_98);
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
      if (local_138 != 0) {
        local_c8 = local_138;
        plStack_c0 = plStack_130;
        if (plStack_130 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_130 + 1) = (int)plStack_130[1] + 1;
          UNLOCK();
        }
        if ((param_1[0x3f] == 0) || (lVar10 = UUGMenuManager::GetFadeHUD(), lVar10 == 0)) {
          local_e8 = 0;
          plStack_e0 = (longlong *)0x0;
        }
        else {
          FUN_140d3b970(lVar10,&local_e8,&local_c8);
        }
        plVar3 = plStack_c0;
        if (plStack_c0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_c0 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plStack_c0)(plStack_c0);
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
        if ((local_e8 != 0) &&
           (cVar7 = (*(code *)**(undefined8 **)*param_3)(), plVar3 = plStack_148, cVar7 != '\0')) {
          if (plStack_130 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_130 + 1) = (int)plStack_130[1] + 1;
            UNLOCK();
          }
          local_80 = local_138;
          plStack_78 = plStack_130;
          local_f8 = local_150;
          plStack_f0 = plStack_148;
          local_150 = local_138;
          plStack_148 = plStack_130;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar9 = plVar3 + 1;
            lVar10 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
              }
            }
          }
          plVar9 = plStack_e0;
          if (plStack_e0 != (longlong *)0x0) {
            LOCK();
            plVar8 = plStack_e0 + 1;
            lVar10 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plStack_e0)(plStack_e0);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          plVar9 = plStack_130;
          if (plStack_130 != (longlong *)0x0) {
            LOCK();
            plVar8 = plStack_130 + 1;
            lVar10 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plStack_130)(plStack_130);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plStack_130 + 8))(plStack_130,1);
              }
            }
          }
          if (local_150 != 0) goto LAB_140bbb888;
          break;
        }
        plVar3 = plStack_e0;
        if (plStack_e0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_e0 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plStack_e0)(plStack_e0);
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
      }
      plVar3 = plStack_130;
      if (plStack_130 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_130 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_130)(plStack_130);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_130 + 8))(plStack_130,1);
          }
        }
      }
    }
  }
  lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar10 == 0) || ((*(uint *)(lVar10 + 0x830) >> 2 & 1) == 0)) {
    lVar10 = FUN_140bbb8d0(param_1,param_3);
    if (lVar10 != 0) {
      lVar11 = UInputKeySelector::GetPrivateStaticClass();
      plVar9 = plStack_148;
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        local_60 = *(longlong *)(lVar10 + 0x4b8);
        plStack_58 = *(longlong **)(lVar10 + 0x4c0);
        if (plStack_58 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_58 + 1) = (int)plStack_58[1] + 1;
          UNLOCK();
        }
        local_108 = local_150;
        plStack_100 = plStack_148;
        local_150 = local_60;
        plVar8 = plStack_58;
        if (plStack_148 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_148 + 1;
          lVar10 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            puVar5 = (undefined8 *)*plStack_148;
            plStack_148 = plStack_58;
            (*(code *)*puVar5)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            plVar9 = plStack_100;
            goto joined_r0x000140bbb78e;
          }
        }
        goto LAB_140bbb7a0;
      }
    }
  }
  else {
    lVar10 = FUN_140bb7f10(param_1,param_3);
    plVar9 = plStack_148;
    if (lVar10 != 0) {
      local_70 = *(longlong *)(lVar10 + 8);
      plStack_68 = *(longlong **)(lVar10 + 0x10);
      if (plStack_68 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_68 + 1) = (int)plStack_68[1] + 1;
        UNLOCK();
      }
      local_118 = local_150;
      plStack_110 = plStack_148;
      local_150 = local_70;
      plVar8 = plStack_68;
      if (plStack_148 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_148 + 1;
        lVar10 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          puVar5 = (undefined8 *)*plStack_148;
          plStack_148 = plStack_68;
          (*(code *)*puVar5)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar9 = plStack_110;
joined_r0x000140bbb78e:
          plVar8 = plStack_148;
          if (iVar4 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
            plVar8 = plStack_148;
          }
        }
      }
LAB_140bbb7a0:
      plStack_148 = plVar8;
      if (local_150 != 0) goto LAB_140bbb888;
    }
  }
  if (param_1[0x210] != 0) {
    FUN_140d7d990(param_1[0x210],&local_128,param_3);
    plVar9 = plStack_148;
    if (local_128 != 0) {
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
        UNLOCK();
      }
      local_50 = local_128;
      plStack_48 = plStack_120;
      local_d8 = local_150;
      plStack_d0 = plStack_148;
      local_150 = local_128;
      plStack_148 = plStack_120;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
          }
        }
      }
    }
    if (plStack_120 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_120 + 1;
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_120)(plStack_120);
        LOCK();
        piVar2 = (int *)((longlong)plStack_120 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_120 + 8))(plStack_120,1);
        }
      }
    }
  }
LAB_140bbb888:
  *param_2 = local_150;
  param_2[1] = (longlong)plStack_148;
  return param_2;
}



// FUNCTION 140bbb8d0 FUN_140bbb8d0 body=346 status=ok
// SIG undefined FUN_140bbb8d0(void)

longlong FUN_140bbb8d0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x148), lVar4 != 0)) {
    plVar9 = *(longlong **)(lVar4 + 0x470);
    plVar1 = plVar9 + *(int *)(lVar4 + 0x478);
    for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
      lVar4 = *plVar9;
      if (lVar4 != 0) {
        lVar5 = UInputKeySelector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          plVar7 = (longlong *)*param_2;
          plVar6 = (longlong *)FName::FName(local_res8,L"SPARK",1);
          plVar7 = (longlong *)(**(code **)(*plVar7 + 8))(plVar7,local_res18);
          if (*plVar7 == *plVar6) {
            if ((*(longlong **)(lVar4 + 0x538) == (longlong *)0x0) ||
               (cVar3 = (**(code **)(**(longlong **)(lVar4 + 0x538) + 0x20))(), cVar3 == '\0')) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              uVar8 = *(undefined8 *)(lVar4 + 0x538);
LAB_140bbb9ea:
              cVar3 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,uVar8);
              if (cVar3 != '\0') {
                return lVar4;
              }
            }
          }
          else {
            if ((*(longlong **)(lVar4 + 0x4b8) == (longlong *)0x0) ||
               (cVar3 = (**(code **)(**(longlong **)(lVar4 + 0x4b8) + 0x20))(), cVar3 == '\0')) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              uVar8 = *(undefined8 *)(lVar4 + 0x4b8);
              goto LAB_140bbb9ea;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140bbba30 FUN_140bbba30 body=865 status=ok
// SIG undefined FUN_140bbba30(void)

undefined8 FUN_140bbba30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 local_res18 [16];
  longlong *local_c8;
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
  longlong local_70;
  undefined **local_68 [2];
  longlong *local_58;
  longlong local_50;
  
  puVar6 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
  FUN_140bbd560(&local_c8,*puVar6);
  if ((local_c8 != (longlong *)0x0) && (lVar7 = *param_2, lVar7 != 0)) {
    puVar11 = *(undefined8 **)(param_1 + 0x38);
    puVar6 = puVar11 + *(int *)(param_1 + 0x40);
    if (puVar11 != puVar6) {
      do {
        lVar7 = FUN_142547b50(*puVar11,local_68);
        plVar9 = *(longlong **)(lVar7 + 0x10);
        lVar7 = *(longlong *)(lVar7 + 8);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        local_68[0] = &PTR_FUN_143f740c8;
        if (local_50 != 0) {
          FMemory::Free();
        }
        plVar3 = local_58;
        local_68[0] = &PTR_FUN_143f73d18;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_58 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_58)(local_58);
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
        if (lVar7 != 0) {
          local_a8 = *param_2;
          local_a0 = (longlong *)param_2[1];
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
            UNLOCK();
          }
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          local_b8 = lVar7;
          local_b0 = plVar9;
          cVar5 = (**(code **)(*local_c8 + 0x88))(local_c8,&local_b8,&local_a8);
          plVar3 = local_b0;
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_b0 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_b0)(local_b0);
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
          plVar3 = local_a0;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_a0 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_a0)(local_a0);
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
          if (cVar5 != '\0') {
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar9 + 1;
              lVar7 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar2 = (int *)((longlong)plVar9 + 0xc);
                iVar4 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar9 + 8))(plVar9,1);
                }
              }
            }
            uVar10 = 2;
            goto LAB_140bbbd2a;
          }
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar9 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        puVar11 = puVar11 + 1;
      } while (puVar11 != puVar6);
      lVar7 = *param_2;
    }
    local_70 = param_2[1];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    local_78 = lVar7;
    lVar8 = FUN_14244c070(param_1,&local_78);
    lVar7 = *param_2;
    plVar9 = (longlong *)param_2[1];
    if (lVar8 == 0) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_88 = lVar7;
      local_80 = plVar9;
      cVar5 = (**(code **)(*local_c8 + 0x60))(local_c8,&local_88);
      plVar9 = local_80;
    }
    else {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_98 = lVar7;
      local_90 = plVar9;
      cVar5 = (**(code **)(*local_c8 + 0x58))(local_c8,&local_98);
      plVar9 = local_90;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar9 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (cVar5 != '\0') {
      uVar10 = 1;
      goto LAB_140bbbd2a;
    }
  }
  uVar10 = 0;
LAB_140bbbd2a:
  plVar9 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_c0 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  return uVar10;
}



// FUNCTION 140bbbda0 FUN_140bbbda0 body=329 status=ok
// SIG undefined FUN_140bbbda0(void)

longlong * FUN_140bbbda0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  longlong *local_res8;
  undefined8 *local_res10;
  undefined8 local_res18;
  
  *param_2 = 0;
  param_2[1] = 0;
  local_res18 = param_3;
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if ((lVar5 == 0) || ((*(uint *)(lVar5 + 0x830) >> 2 & 1) == 0)) {
    FUN_140bb7680(param_1,param_2);
    local_res8 = param_1;
    FUN_140b96210(param_2,&local_res8);
  }
  else if (param_2 != param_1 + 0x91) {
    iVar8 = (int)param_2[1];
    if (iVar8 != 0) {
      plVar9 = (longlong *)(*param_2 + 8);
      do {
        plVar4 = (longlong *)*plVar9;
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
        plVar9 = plVar9 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = (int)param_1[0x92];
    puVar7 = (undefined8 *)param_1[0x91];
    *(int *)(param_2 + 1) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar8);
      puVar6 = (undefined8 *)*param_2;
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar6 = *puVar7;
        lVar5 = puVar7[1];
        puVar6[1] = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        puVar6 = puVar6 + 2;
        puVar7 = puVar7 + 2;
      }
    }
  }
  local_res10 = &local_res18;
  FUN_140b96410(param_2,&local_res10);
  return param_2;
}



// FUNCTION 140bbbef0 OnAssetAdded body=8 status=ok
// SIG undefined OnAssetAdded(void)

longlong UAssetRegistryImpl::OnAssetAdded(longlong param_1)

{
  return param_1 + 0x9f0;
}



// FUNCTION 140bbbf00 FUN_140bbbf00 body=192 status=ok
// SIG undefined FUN_140bbbf00(void)

undefined4 FUN_140bbbf00(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x5e8)) {
    lVar6 = 0;
    do {
      if ((int)param_2[1] == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      if (*(int *)(lVar6 + 8 + *(longlong *)(param_1 + 0x5e0)) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = *(undefined2 **)(lVar6 + *(longlong *)(param_1 + 0x5e0));
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
      if (iVar2 == 0) {
        uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x5e0) + 0x10 + (longlong)iVar5 * 0x18);
        if (*param_2 == 0) {
          return uVar1;
        }
        FMemory::Free();
        return uVar1;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while (iVar5 < *(int *)(param_1 + 0x5e8));
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return 0xffffffff;
}



// FUNCTION 140bbbfc0 FUN_140bbbfc0 body=400 status=ok
// SIG undefined FUN_140bbbfc0(void)

undefined8 * FUN_140bbbfc0(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *local_18;
  longlong *local_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146852c60) && (_Init_thread_header(&DAT_146852c60), DAT_146852c60 == -1))
  {
    FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
    _Init_thread_footer(&DAT_146852c60);
  }
  uVar3 = DAT_146852c58;
  uVar4 = FUN_14168dc80();
  plVar5 = (longlong *)FModuleManager::GetModule(uVar4,uVar3);
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x50))(plVar5,0);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_18);
    if (((local_18 != (longlong *)0x0) &&
        (lVar6 = (**(code **)(*local_18 + 0x10))(local_18,0x11f), lVar6 != 0)) &&
       (plVar5 = *(longlong **)(lVar6 + 0xa0), plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x38))(plVar5,param_2);
      if (local_10 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar5 = local_10 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 != 1) {
        return param_2;
      }
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return param_2;
      }
      (**(code **)(*local_10 + 8))(local_10,1);
      return param_2;
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_10 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140bbc150 FUN_140bbc150 body=734 status=ok
// SIG undefined FUN_140bbc150(void)

void FUN_140bbc150(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  lVar8 = FUN_140bb7870();
  if (lVar8 == 0) {
    lVar8 = FUN_140bb6170(param_1);
  }
  lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar9 == 0) || ((*(uint *)(lVar9 + 0x830) >> 2 & 1) == 0)) || (lVar8 == 0)) {
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_140bb7680(param_1,&local_48);
    puVar14 = local_48 + (longlong)(int)local_40 * 2;
    for (puVar13 = local_48; puVar13 != puVar14; puVar13 = puVar13 + 2) {
      local_38 = *puVar13;
      local_30 = puVar13[1];
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      lVar8 = FUN_14244c070(param_1,&local_38);
      if (lVar8 == 0) {
        TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
        ::AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&>
                  (param_2,puVar13);
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_48);
    return;
  }
  lVar9 = *(longlong *)(lVar8 + 0x60);
  lVar8 = (longlong)*(int *)(lVar8 + 0x68) * 0x40 + lVar9;
  do {
    if (lVar9 == lVar8) {
      return;
    }
    lVar2 = *(longlong *)(lVar9 + 0x10);
    if (lVar2 != 0) {
      plVar3 = *(longlong **)(lVar9 + 0x18);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      plVar4 = (longlong *)*param_2;
      lVar11 = (longlong)(int)param_2[1];
      for (plVar10 = plVar4; plVar10 != plVar4 + lVar11 * 2; plVar10 = plVar10 + 2) {
        if (*plVar10 == lVar2) {
          if ((int)((longlong)plVar10 - (longlong)plVar4 >> 4) != -1) goto LAB_140bbc259;
          break;
        }
      }
      iVar7 = (int)param_2[1] + 1;
      *(int *)(param_2 + 1) = iVar7;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2);
      }
      lVar5 = *param_2;
      *(longlong *)(lVar5 + lVar11 * 0x10) = lVar2;
      *(longlong **)(lVar5 + 8 + lVar11 * 0x10) = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
LAB_140bbc259:
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar3 + 1;
          lVar2 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
      }
    }
    lVar11 = *(longlong *)(lVar9 + 0x30);
    lVar2 = lVar11 + (longlong)*(int *)(lVar9 + 0x38) * 0x28;
    for (; lVar11 != lVar2; lVar11 = lVar11 + 0x28) {
      lVar5 = *(longlong *)(lVar11 + 8);
      if (lVar5 != 0) {
        plVar3 = *(longlong **)(lVar11 + 0x10);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        plVar4 = (longlong *)*param_2;
        lVar12 = (longlong)(int)param_2[1];
        for (plVar10 = plVar4; plVar10 != plVar4 + lVar12 * 2; plVar10 = plVar10 + 2) {
          if (*plVar10 == lVar5) {
            if ((int)((longlong)plVar10 - (longlong)plVar4 >> 4) != -1) goto LAB_140bbc329;
            break;
          }
        }
        iVar7 = (int)param_2[1] + 1;
        *(int *)(param_2 + 1) = iVar7;
        if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2);
        }
        lVar6 = *param_2;
        *(longlong *)(lVar6 + lVar12 * 0x10) = lVar5;
        *(longlong **)(lVar6 + 8 + lVar12 * 0x10) = plVar3;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
LAB_140bbc329:
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar3 + 1;
            lVar5 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
        }
      }
    }
    lVar9 = lVar9 + 0x40;
  } while( true );
}



// FUNCTION 140bbc430 FUN_140bbc430 body=253 status=ok
// SIG undefined FUN_140bbc430(void)

undefined8 * FUN_140bbc430(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_res10;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar7 = 0;
  local_res10 = param_2;
  plVar5 = (longlong *)FUN_1404b0000(&local_res10);
  bVar8 = plVar5 != (longlong *)0x0;
  if (bVar8) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_28);
    uVar7 = *puVar6;
  }
  else {
    puVar6 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  *param_1 = uVar7;
  param_1[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (bVar8) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  plVar5 = plStack_30;
  if ((!bVar8) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140bbc530 FUN_140bbc530 body=93 status=ok
// SIG undefined FUN_140bbc530(void)

undefined8 FUN_140bbc530(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x490);
  if (lVar1 != 0) {
    lVar3 = FUN_1407eff40();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return *(undefined8 *)(lVar1 + 0x8a0);
    }
  }
  return 0;
}



// FUNCTION 140bbc590 FUN_140bbc590 body=184 status=ok
// SIG undefined FUN_140bbc590(void)

undefined8 * FUN_140bbc590(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1404d0c50(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    lVar5 = (**(code **)(*local_18 + 0x10))(local_18,0x11f);
    if ((lVar5 != 0) && (plVar4 = *(longlong **)(lVar5 + 0xa0), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
      goto LAB_140bbc5f6;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_140bbc5f6:
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140bbc650 FUN_140bbc650 body=60 status=ok
// SIG undefined FUN_140bbc650(void)

void FUN_140bbc650(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  FUN_140b9e780(param_2,param_1 + 0x420);
  local_res8 = param_3;
  FUN_140b96ed0(param_2,&local_res8);
  return;
}



// FUNCTION 140bbc690 FUN_140bbc690 body=89 status=ok
// SIG undefined FUN_140bbc690(void)

undefined8 * FUN_140bbc690(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    lVar1 = UUGMenuManager::GetFadeHUD();
    if (lVar1 != 0) {
      FUN_140d3b970(lVar1,param_2,param_3);
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140bbc6f0 FUN_140bbc6f0 body=603 status=ok
// SIG undefined FUN_140bbc6f0(void)

longlong * FUN_140bbc6f0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar4 = (longlong *)*param_3;
  plVar3 = (longlong *)FName::FName(local_res18,L"SPARK",1);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 8))(plVar4,local_res20);
  if (*plVar4 == *plVar3) {
    *param_2 = *param_3;
    lVar5 = param_3[1];
    param_2[1] = lVar5;
    if (lVar5 == 0) {
      return param_2;
    }
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    return param_2;
  }
  local_60 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0x1f8) == 0) || (lVar5 = UUGMenuManager::GetFadeHUD(), lVar5 == 0)) {
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    FUN_140d3b970(lVar5,&local_58,param_3);
  }
  local_68 = local_58;
  local_58 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_60,&plStack_50);
  plVar4 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_50 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (local_68 == 0) {
    plVar4 = (longlong *)FUN_140bbc950(param_1,local_48,param_3);
    if (&local_68 != plVar4) {
      local_68 = *plVar4;
      *plVar4 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_60,plVar4 + 1);
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_40 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
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
    if (local_68 == 0) {
      if (*(longlong *)(param_1 + 0x1080) != 0) {
        plVar4 = (longlong *)FUN_140d84960(*(longlong *)(param_1 + 0x1080),local_38,param_3);
        if (&local_68 != plVar4) {
          local_68 = *plVar4;
          *plVar4 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&local_60,plVar4 + 1);
        }
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_30 + 1;
          lVar5 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
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
        if (local_68 != 0) goto LAB_140bbc7f6;
      }
      plVar4 = local_60;
      *param_2 = 0;
      param_2[1] = 0;
      if (local_60 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar3 = local_60 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 != 1) {
        return param_2;
      }
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return param_2;
      }
      (**(code **)(*local_60 + 8))(local_60,1);
      return param_2;
    }
  }
LAB_140bbc7f6:
  *param_2 = local_68;
  param_2[1] = (longlong)local_60;
  return param_2;
}



// FUNCTION 140bbc950 FUN_140bbc950 body=230 status=ok
// SIG undefined FUN_140bbc950(void)

undefined8 * FUN_140bbc950(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((lVar2 == 0) || ((*(uint *)(lVar2 + 0x830) >> 2 & 1) == 0)) {
    lVar2 = FUN_140bbb8d0(param_1,param_3);
    if (lVar2 != 0) {
      lVar3 = UInputKeySelector::GetPrivateStaticClass();
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
        *param_2 = *(undefined8 *)(lVar2 + 0x538);
        lVar2 = *(longlong *)(lVar2 + 0x540);
        goto LAB_140bbc9fa;
      }
    }
  }
  else {
    lVar2 = FUN_140bb7f10(param_1,param_3);
    if (lVar2 != 0) {
      *param_2 = *(undefined8 *)(lVar2 + 0x30);
      lVar2 = *(longlong *)(lVar2 + 0x38);
LAB_140bbc9fa:
      param_2[1] = lVar2;
      if (lVar2 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140bbca70 GetIdentityInterface body=253 status=ok
// SIG undefined GetIdentityInterface(void)

undefined8 * Online::GetIdentityInterface(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_res10;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar7 = 0;
  local_res10 = param_2;
  plVar5 = (longlong *)FUN_1404b0000(&local_res10);
  bVar8 = plVar5 != (longlong *)0x0;
  if (bVar8) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x80))(plVar5,local_28);
    uVar7 = *puVar6;
  }
  else {
    puVar6 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  *param_1 = uVar7;
  param_1[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (bVar8) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  plVar5 = plStack_30;
  if ((!bVar8) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140bbcb70 FUN_140bbcb70 body=975 status=ok
// SIG undefined FUN_140bbcb70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_140bbcb70(longlong param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  undefined2 *puVar16;
  int iVar17;
  longlong lVar18;
  float fVar19;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  longlong local_c8;
  longlong local_c0 [2];
  uint local_b0 [2];
  longlong local_a8;
  longlong local_a0;
  int local_98;
  int local_90;
  char local_8c;
  int local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  undefined8 local_60;
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  fVar19 = 0.0;
  lVar9 = FUN_1429ba1d0();
  lVar10 = *(longlong *)(param_1 + 0x120);
  if (lVar10 == 0) {
    lVar10 = FUN_1423407b0(param_1);
  }
  if (lVar9 != 0) {
    lVar11 = FUN_1429ba1d0();
    lVar18 = lVar9;
    do {
      if (lVar18 == lVar11) goto LAB_140bbcbe0;
      lVar18 = *(longlong *)(lVar18 + 0x30);
    } while (lVar18 != 0);
  }
  lVar9 = 0;
LAB_140bbcbe0:
  local_b0[0] = 5;
  local_58 = '\0';
  local_c8 = lVar10;
  local_c0[0] = lVar9;
  FUN_14044bc80(&local_a8,&local_c8,local_c0);
  FUN_14045a130(local_b0);
  iVar7 = local_90;
  lVar10 = local_80;
joined_r0x000140bbcc11:
  local_80 = lVar10;
  local_90 = iVar7;
  if (local_8c == '\0') {
    local_c8 = *(longlong *)(local_80 + 0x18);
    FName::ToString(&local_c8,local_c0);
    local_d8 = 0xffffffff;
    puVar16 = &DAT_143f3eda8;
    if (DAT_1462982d8 != 0) {
      puVar16 = DAT_1462982d0;
    }
    iVar7 = FUN_141592950(local_c0,puVar16,1);
    if (local_c0[0] != 0) {
      FMemory::Free();
    }
    lVar9 = local_a8;
    if (iVar7 != -1) {
      fVar19 = 1.0;
      if (*(longlong *)(local_80 + 0x458) != 0) {
        fVar19 = *(float *)(*(longlong *)(local_80 + 0x458) + 0x28);
      }
      fVar19 = *(float *)(local_80 + 0x4bc) / fVar19;
    }
    iVar7 = local_90 + 1;
    if (iVar7 < local_70 + local_98) {
      lVar18 = (longlong)iVar7 * 8;
      iVar17 = local_70;
      iVar14 = local_98;
      do {
        if (iVar7 < iVar14) {
          lVar10 = *(longlong *)(local_a0 + lVar18);
        }
        else {
          lVar10 = *(longlong *)(local_78 + (longlong)(iVar7 - iVar14) * 8);
        }
        local_88 = local_88 + 1;
        if ((lVar10 != 0) &&
           (lVar11 = AActor::GetLevel(lVar10), iVar17 = local_70, iVar14 = local_98, lVar11 != 0)) {
          if ((local_b0[0] & 1) != 0) {
            iVar1 = *(int *)(lVar10 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar15 = iVar1 >> 0x1f & 0xffff;
              uVar8 = iVar1 + uVar15;
              lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                       (longlong)(int)((uVar8 & 0xffff) - uVar15) * 0x18;
            }
            else {
              lVar12 = 0;
            }
            if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) != 0) goto LAB_140bbce75;
          }
          if (((local_b0[0] >> 1 & 1) == 0) ||
             (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar10), iVar17 = local_70,
             iVar14 = local_98, cVar6 != '\0')) {
            if ((local_b0[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar11 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar11 + 0x205) & 0x10) == 0)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              piVar2 = *(int **)(lVar11 + 600);
              if (((*(longlong *)(lVar11 + 0xc0) == 0) ||
                  (piVar13 = (int *)UWorld::GetActiveLevelCollection(), piVar13 == (int *)0x0)) ||
                 (piVar2 == piVar13)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((bVar3) || (bVar3 = false, bVar4)) {
                bVar3 = true;
              }
              iVar17 = local_70;
              iVar14 = local_98;
              if ((!bVar5) || (!bVar3)) goto LAB_140bbce75;
            }
            lVar11 = ULevel::GetWorld(lVar11);
            iVar17 = local_70;
            iVar14 = local_98;
            if (lVar11 == lVar9) {
              lVar11 = AActor::GetLevel(lVar10);
              if (lVar11 == *(longlong *)(lVar9 + 0x30)) goto joined_r0x000140bbcc11;
              lVar11 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              iVar17 = local_70;
              iVar14 = local_98;
              if (!bVar5) goto joined_r0x000140bbcc11;
            }
          }
        }
LAB_140bbce75:
        iVar7 = iVar7 + 1;
        lVar18 = lVar18 + 8;
        if (iVar17 + iVar14 <= iVar7) break;
      } while( true );
    }
    local_80 = 0;
    local_8c = '\x01';
  }
  if (local_58 != '\0') {
    local_58 = 0;
    UWorld::RemoveOnActorSpawnedHandler(local_a8,local_60);
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (local_a0 != 0) {
      FMemory::Free();
    }
  }
  return fVar19;
}



// FUNCTION 140bbcf40 FUN_140bbcf40 body=350 status=ok
// SIG undefined FUN_140bbcf40(void)

longlong FUN_140bbcf40(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  
  plVar12 = *(longlong **)(param_1 + 0x38);
  lVar8 = 0;
  plVar1 = plVar12 + *(int *)(param_1 + 0x40);
  do {
    if (plVar12 == plVar1) {
      return lVar8;
    }
    if ((*plVar12 != 0) && (plVar2 = *(longlong **)(*plVar12 + 0x30), plVar2 != (longlong *)0x0)) {
      lVar6 = FUN_14145f370();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (lVar6 = (**(code **)(*plVar2 + 0xfa8))(plVar2), lVar6 != 0)) {
        uVar7 = AGImpulseWindProjectile::GetPrivateStaticClass();
        cVar4 = FUN_142ef5b10(lVar6,uVar7);
        if (cVar4 != '\0') {
          iVar5 = *(int *)(lVar6 + 0x48);
          iVar11 = 0;
          lVar10 = 0;
          if (0 < iVar5) {
            do {
              if ((lVar10 < 0) || (iVar5 <= iVar11)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (((bVar3) &&
                  (plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x40) + lVar10 * 8),
                  plVar2 != (longlong *)0x0)) &&
                 (lVar8 = (**(code **)(*plVar2 + 0x278))(), lVar8 != 0)) {
                lVar9 = AGImpulseWindProjectile::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) break;
              }
              iVar5 = *(int *)(lVar6 + 0x48);
              lVar8 = 0;
              iVar11 = iVar11 + 1;
              lVar10 = lVar10 + 1;
            } while (iVar11 < iVar5);
          }
        }
      }
    }
    plVar12 = plVar12 + 1;
  } while( true );
}



// FUNCTION 140bbd0a0 GetUnifiedDriverVersion body=504 status=ok
// SIG undefined GetUnifiedDriverVersion(void)

undefined8 * FGPUDriverInfo::GetUnifiedDriverVersion(int *param_1,undefined8 *param_2)

{
  short *psVar1;
  void *pvVar2;
  void *_Src;
  void **ppvVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  
  if (*param_1 == 0x10de) {
    lVar8 = -1;
    iVar7 = param_1[0xc];
    if (iVar7 == 0) {
      puVar9 = &DAT_143f3eda8;
      iVar4 = -1;
    }
    else {
      puVar9 = *(undefined2 **)(param_1 + 10);
      iVar4 = iVar7 + -1;
    }
    local_30 = (void *)0x0;
    if (iVar7 == 0) {
      iVar4 = 0;
    }
    lVar5 = (longlong)iVar4;
    if (6 < iVar4) {
      iVar4 = 6;
    }
    psVar1 = puVar9 + (lVar5 - iVar4);
    local_38 = (void *)0x0;
    if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
      do {
        lVar8 = lVar8 + 1;
      } while (psVar1[lVar8] != 0);
      uVar6 = (int)lVar8 + 1;
      local_30 = (void *)(ulonglong)uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      FGenericPlatformString::Memcpy(local_38,psVar1,(longlong)(int)uVar6 * 2);
    }
    ppvVar3 = (void **)FString::Replace(&local_38,&local_28,&DAT_143f73c90,&DAT_143f3eda8,1);
    if (&local_38 != ppvVar3) {
      if (local_38 != (void *)0x0) {
        FMemory::Free();
      }
      local_38 = *ppvVar3;
      *ppvVar3 = (void *)0x0;
      local_30 = ppvVar3[1];
      ppvVar3[1] = (void *)0x0;
    }
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
    local_28 = (void *)0x0;
    local_20 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    _Src = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_143f73c90,4);
    if (((int)local_20 != 0) && (iVar7 = (int)local_20 + -1, iVar7 != 0)) {
      if ((int)local_30 == 0) {
        local_30 = (void *)CONCAT44(local_30._4_4_,(int)local_20);
        if (local_30._4_4_ < (int)local_20) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        }
        pvVar2 = local_38;
        ::_guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar2) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::Insert(&local_38,_Src,iVar7,3);
      }
    }
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
    *param_2 = local_38;
    *(int *)(param_2 + 1) = (int)local_30;
    *(int *)((longlong)param_2 + 0xc) = local_30._4_4_;
    return param_2;
  }
  FString::FString(param_2);
  return param_2;
}



// FUNCTION 140bbd2a0 FUN_140bbd2a0 body=628 status=ok
// SIG undefined FUN_140bbd2a0(void)

undefined1 FUN_140bbd2a0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)FName::FName(local_res10,L"SPARK",1);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1,local_res18);
  if (*plVar1 == *plVar2) {
    return 6;
  }
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)FName::FName(local_res10,&DAT_1442f3f40,1);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1,local_res18);
  if (*plVar1 != *plVar2) {
    plVar1 = (longlong *)*param_2;
    plVar2 = (longlong *)FName::FName(local_res10,L"EPIC",1);
    plVar1 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1,local_res18);
    if (*plVar1 != *plVar2) {
      plVar1 = (longlong *)*param_2;
      plVar2 = (longlong *)FName::FName(local_res10,L"STEAM",1);
      plVar1 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1,local_res18);
      if (*plVar1 == *plVar2) {
        return 3;
      }
      plVar1 = (longlong *)*param_2;
      plVar2 = (longlong *)FName::FName(local_res10,L"QUAIL",1);
      plVar1 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1,local_res18);
      if (*plVar1 == *plVar2) {
        return 4;
      }
      plVar1 = (longlong *)*param_2;
      plVar2 = (longlong *)FName::FName(local_res10,L"LIVE",1);
      plVar1 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1,local_res18);
      if (*plVar1 != *plVar2) {
        plVar1 = (longlong *)*param_2;
        plVar2 = (longlong *)FName::FName(local_res10,L"ANVIL",1);
        plVar1 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1,local_res18);
        if (*plVar1 != *plVar2) {
          plVar1 = (longlong *)*param_2;
          plVar2 = (longlong *)FName::FName(local_res10,&DAT_1442f4008,1);
          plVar1 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1,local_res18);
          if (*plVar1 != *plVar2) {
            plVar1 = (longlong *)*param_2;
            plVar2 = (longlong *)FName::FName(local_res10,&DAT_1442f4010,1);
            plVar1 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1,local_res18);
            if (*plVar1 != *plVar2) {
              return 7;
            }
          }
          return 1;
        }
      }
      return 0;
    }
  }
  return 2;
}



// FUNCTION 140bbd520 FUN_140bbd520 body=52 status=ok
// SIG undefined FUN_140bbd520(void)

undefined8 FUN_140bbd520(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
  FUN_140bbd560(param_1,*puVar1);
  return param_1;
}



// FUNCTION 140bbd560 FUN_140bbd560 body=250 status=ok
// SIG undefined FUN_140bbd560(void)

undefined8 * FUN_140bbd560(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_res10;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar7 = 0;
  local_res10 = param_2;
  plVar5 = (longlong *)FUN_1404b0000(&local_res10);
  bVar8 = plVar5 != (longlong *)0x0;
  if (bVar8) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x40))(plVar5,local_28);
    uVar7 = *puVar6;
  }
  else {
    puVar6 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  *param_1 = uVar7;
  param_1[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (bVar8) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  plVar5 = plStack_30;
  if ((!bVar8) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140bbd660 FUN_140bbd660 body=1310 status=ok
// SIG undefined FUN_140bbd660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bbd660(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_228 [32];
  undefined1 *local_208;
  undefined1 local_200;
  undefined4 *local_1f8;
  ulonglong *puStack_1f0;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined1 local_190 [8];
  undefined1 local_188 [16];
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined **local_148;
  undefined1 local_140 [24];
  undefined1 local_128 [24];
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
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
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_228;
  local_1b0 = *param_2;
  local_1a8 = param_2[1];
  if (local_1a8 != 0) {
    LOCK();
    *(int *)(local_1a8 + 8) = *(int *)(local_1a8 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FUN_14244c070(param_1,&local_1b0);
  puVar7 = (undefined8 *)FName::FName(local_190,L"GbxShiftOverlay",1);
  plVar8 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar7);
  if ((plVar8 != (longlong *)0x0) &&
     (cVar5 = (**(code **)(*plVar8 + 0x50))(plVar8,uVar6), cVar5 != '\0')) {
    return;
  }
  if (param_4 != 0) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_160,L"An error occurred when attempting to accept a friend request: {0}",
               L"OakGameInstance",L"AcceptFriendRequestError_Base");
    FText::FText(local_1e8);
    if (param_4 == 2) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_c8,L"The target user is already friends with you.",L"OakGameInstance"
                         ,L"AcceptFriendRequestError_AlreadyFriends");
      FText::operator=(local_1e8,uVar6);
      plVar8 = local_c0;
    }
    else if (param_4 == 5) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_e0,L"The requested friend invitation could not be found.",
                         L"OakGameInstance",L"AcceptFriendRequestError_UserNotFound");
      FText::operator=(local_1e8,uVar6);
      plVar8 = local_d8;
    }
    else if (param_4 == 6) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_f8,L"The SHiFT network is currently unavailable.",L"OakGameInstance",
                         L"AcceptFriendRequestError_MissingBackendService");
      FText::operator=(local_1e8,uVar6);
      plVar8 = local_f0;
    }
    else {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_110,L"Unknown reason.",L"OakGameInstance",
                         L"AcceptFriendRequestError_UnknownReason");
      FText::operator=(local_1e8,uVar6);
      plVar8 = local_108;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    lVar9 = FText::FText(local_70,local_1e8);
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_80,local_160);
    local_58[0] = 4;
    FText::FText(local_48,lVar9);
    local_1a0 = *puVar7;
    local_1f8 = local_58;
    puStack_1f0 = local_28;
    local_198 = puVar7[1];
    local_30 = '\x01';
    if (local_198 != 0) {
      LOCK();
      *(int *)(local_198 + 8) = *(int *)(local_198 + 8) + 1;
      UNLOCK();
    }
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_188,&local_1f8);
    uVar6 = FText::Format(local_b0,&local_1a0,uVar6);
    FText::FText(local_178,uVar6);
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_a8 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar2 = (int *)((longlong)local_a8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_188);
    if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_40 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    plVar8 = (longlong *)puVar7[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    plVar8 = *(longlong **)(lVar9 + 8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_98,L"Error Accepting Friend Request",L"OakGameInstance",
                       L"AcceptFriendRequestError");
    local_148 = &PTR_FUN_1443170a0;
    FText::FText(local_140,uVar6);
    FText::FText(local_128,local_178);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_90 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_170 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar2 = (int *)((longlong)local_170 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
    FWeakObjectPtr::operator=(local_1d0,0);
    FWeakObjectPtr::operator=(local_1c8,0);
    FWeakObjectPtr::operator=(local_1c0,0);
    local_200 = 2;
    local_1b8 = 0;
    local_208 = local_1d0;
    FUN_140c23780(2,&local_148,local_1c0,local_1c8);
    FUN_140b9cdd0(&local_148);
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1e0 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1e0)(local_1e0);
        LOCK();
        piVar2 = (int *)((longlong)local_1e0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1e0 + 8))(local_1e0,1);
        }
      }
    }
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_158 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar2 = (int *)((longlong)local_158 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_158 + 8))(local_158,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bbdb80 FUN_140bbdb80 body=1716 status=ok
// SIG undefined FUN_140bbdb80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bbdb80(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_2c8 [32];
  undefined1 *local_2a8;
  undefined1 local_2a0;
  undefined1 local_298 [8];
  longlong *local_290;
  undefined4 *local_278;
  ulonglong *puStack_270;
  undefined1 local_268 [8];
  undefined1 local_260 [8];
  undefined1 local_258 [8];
  undefined1 local_250 [8];
  undefined1 local_248 [8];
  undefined8 local_240;
  undefined1 local_238 [8];
  undefined8 local_230;
  undefined8 local_228;
  longlong local_220;
  undefined8 local_218;
  longlong local_210;
  undefined1 local_208 [8];
  undefined1 local_200 [16];
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined **local_1c0;
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined **local_188;
  undefined1 local_180 [24];
  undefined1 local_168 [24];
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [24];
  undefined4 local_50 [4];
  undefined1 local_40 [8];
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_228 = *param_2;
  local_220 = param_2[1];
  if (local_220 != 0) {
    LOCK();
    *(int *)(local_220 + 8) = *(int *)(local_220 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FUN_14244c070(param_1,&local_228);
  puVar7 = (undefined8 *)FName::FName(local_208,L"GbxShiftOverlay",1);
  plVar8 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar7);
  if ((plVar8 != (longlong *)0x0) &&
     (cVar5 = (**(code **)(*plVar8 + 0x50))(plVar8,uVar6), cVar5 != '\0')) {
    return;
  }
  if (param_4 == 0) {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_90,L"The target user has received your SHiFT friend request.",
                       L"OakGameInstance",L"AddFriendSuccess_Description");
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_a8,L"Friend Request Sent",L"OakGameInstance",L"AddFriendSuccess");
    local_188 = &PTR_FUN_1443170a0;
    FText::FText(local_180,uVar10);
    FText::FText(local_168,uVar6);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_a0 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_88 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    FWeakObjectPtr::operator=(local_258,0);
    FWeakObjectPtr::operator=(local_250,0);
    FWeakObjectPtr::operator=(local_238,0);
    local_2a0 = 2;
    local_230 = 0;
    local_2a8 = local_258;
    FUN_140c23780(1,&local_188,local_238,local_250);
    FUN_140b9cdd0(&local_188);
  }
  else {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_1d8,L"An error occurred when attempting to add a friend: {0}",
               L"OakGameInstance",L"AddFriendError_Base");
    FText::FText(local_298);
    if (param_4 == 2) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_f0,L"The target user is already friends with you.",L"OakGameInstance"
                         ,L"AddFriendError_AlreadyFriends");
      FText::operator=(local_298,uVar6);
    }
    else if (param_4 == 3) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_108,L"You already have an invite pending for the specified player.",
                         L"OakGameInstance",L"AddFriendError_InvitePending");
      FText::operator=(local_298,uVar6);
      local_e8 = local_100;
    }
    else if (param_4 == 5) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_120,L"The target user could not be found.",L"OakGameInstance",
                         L"AddFriendError_NotFound");
      FText::operator=(local_298,uVar6);
      local_e8 = local_118;
    }
    else if (param_4 == 6) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_138,L"The SHiFT network is currently unavailable.",L"OakGameInstance"
                         ,L"AddFriendError_MissingBackendService");
      FText::operator=(local_298,uVar6);
      local_e8 = local_130;
    }
    else {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_150,L"Unknown reason.",L"OakGameInstance",
                         L"AddFriendError_UnknownReason");
      FText::operator=(local_298,uVar6);
      local_e8 = local_148;
    }
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_e8 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)local_e8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
    lVar9 = FText::FText(local_68,local_298);
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_78,local_1d8);
    local_50[0] = 4;
    FText::FText(local_40,lVar9);
    local_218 = *puVar7;
    local_278 = local_50;
    puStack_270 = &local_20;
    local_210 = puVar7[1];
    local_28 = '\x01';
    if (local_210 != 0) {
      LOCK();
      *(int *)(local_210 + 8) = *(int *)(local_210 + 8) + 1;
      UNLOCK();
    }
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_200,&local_278);
    uVar6 = FText::Format(local_d8,&local_218,uVar6);
    FText::FText(local_1f0,uVar6);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_d0 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_200);
    if ((local_28 != '\0') && (local_28 = '\0', local_38 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_38 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    plVar8 = (longlong *)puVar7[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    plVar8 = *(longlong **)(lVar9 + 8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_c0,L"Error Adding Friend",L"OakGameInstance",L"AddFriendError");
    local_1c0 = &PTR_FUN_1443170a0;
    FText::FText(local_1b8,uVar6);
    FText::FText(local_1a0,local_1f0);
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_b8 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1e8 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar1 = (int *)((longlong)local_1e8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1e8 + 8))(local_1e8,1);
        }
      }
    }
    FWeakObjectPtr::operator=(local_268,0);
    FWeakObjectPtr::operator=(local_260,0);
    FWeakObjectPtr::operator=(local_248,0);
    local_2a0 = 2;
    local_240 = 0;
    local_2a8 = local_268;
    FUN_140c23780(2,&local_1c0,local_248,local_260);
    FUN_140b9cdd0(&local_1c0);
    if (local_290 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_290 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_290)(local_290);
        LOCK();
        piVar1 = (int *)((longlong)local_290 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_290 + 8))(local_290,1);
        }
      }
    }
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1d0 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar1 = (int *)((longlong)local_1d0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bbe240 FUN_140bbe240 body=814 status=ok
// SIG undefined FUN_140bbe240(void)

void FUN_140bbe240(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  DWORD DVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined **local_68 [2];
  longlong *local_58;
  longlong local_50;
  
  FUN_140ba23b0();
  *(undefined1 *)((longlong)param_1 + 0xbad) = 0;
  lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar10 = DAT_14686a650;
  if (((lVar8 != 0) && ((*(uint *)(lVar8 + 0x830) >> 2 & 1) != 0)) && ((char)param_1[0x175] == '\0')
     ) {
    TArray<Chaos::TAABBTreeLeafArray<int,0>,TSizedDefaultAllocator<32>_>::Reset(&DAT_14686a610);
    thunk_FUN_140f069b0(param_1[0xb6],&DAT_14686a610);
    return;
  }
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  uVar13 = 0;
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    uVar9 = 4;
    if (DVar7 != DAT_1468c21c0) goto LAB_140bbe309;
  }
  uVar9 = uVar13;
LAB_140bbe309:
  DAT_146297e10 = *(undefined4 *)(uVar9 + lVar10);
  puVar12 = (undefined8 *)param_1[7];
  uVar9 = (longlong)(int)param_1[8] & 0x1fffffffffffffff;
  if (puVar12 + (int)param_1[8] < puVar12) {
    uVar9 = uVar13;
  }
  if (uVar9 != 0) {
    do {
      lVar10 = FUN_142547b50(*puVar12,local_68);
      plVar5 = *(longlong **)(lVar10 + 0x10);
      lVar10 = *(longlong *)(lVar10 + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_68[0] = &PTR_FUN_143f740c8;
      if (local_50 != 0) {
        FMemory::Free();
      }
      plVar3 = local_58;
      local_68[0] = &PTR_FUN_143f73d18;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_58)(local_58);
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
      if (lVar10 != 0) {
        lVar8 = FUN_142b45e90();
        uVar11 = *(undefined8 *)(lVar8 + 0x18);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_88 = lVar10;
        local_80 = plVar5;
        FUN_142b41880(uVar11,&local_88);
        plVar3 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_80)(local_80);
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
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_78 = lVar10;
        local_70 = plVar5;
        FUN_142b41f30(uVar11,&local_78);
        plVar3 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_70)(local_70);
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
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar10 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
      puVar12 = puVar12 + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar9);
  }
  uVar11 = FUN_140bb7220(param_1);
  FUN_140d75b20(uVar11);
  return;
}



// FUNCTION 140bbe570 FUN_140bbe570 body=131 status=ok
// SIG undefined FUN_140bbe570(void)

void FUN_140bbe570(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x38);
  plVar1 = plVar5 + *(int *)(param_1 + 0x40);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    lVar2 = *(longlong *)(*plVar5 + 0x30);
    if (lVar2 != 0) {
      lVar4 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_140d08690(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 140bbe600 FUN_140bbe600 body=1184 status=ok
// SIG undefined FUN_140bbe600(void)

void FUN_140bbe600(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  
  plVar10 = param_1 + 0x9e;
  lVar13 = *plVar10;
  lVar7 = param_1[0x9f];
  for (lVar12 = lVar13; lVar12 != (longlong)(int)lVar7 * 0x118 + lVar13; lVar12 = lVar12 + 0x118) {
    cVar8 = FUniqueNetIdWrapper::operator==(param_2,lVar12);
    if (cVar8 != '\0') {
      iVar9 = (int)((lVar12 - lVar13) / 0x118);
      goto LAB_140bbe661;
    }
  }
  iVar9 = -1;
LAB_140bbe661:
  if (iVar9 != -1) {
    lVar13 = (longlong)iVar9 * 0x118 + *plVar10;
    FUN_1404c0940(lVar13,param_2);
    FUN_1404c0940(lVar13 + 0x28,param_2 + 0x28);
    *(undefined4 *)(lVar13 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(lVar13 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(lVar13 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined1 *)(lVar13 + 0x5c) = *(undefined1 *)(param_2 + 0x5c);
    *(undefined1 *)(lVar13 + 0x5d) = *(undefined1 *)(param_2 + 0x5d);
    *(undefined4 *)(lVar13 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)(lVar13 + 100) = *(undefined4 *)(param_2 + 100);
    FString::operator=(lVar13 + 0x68,param_2 + 0x68);
    *(undefined4 *)(lVar13 + 0x78) = *(undefined4 *)(param_2 + 0x78);
    FString::operator=(lVar13 + 0x80,param_2 + 0x80);
    *(undefined4 *)(lVar13 + 0x90) = *(undefined4 *)(param_2 + 0x90);
    *(undefined4 *)(lVar13 + 0x94) = *(undefined4 *)(param_2 + 0x94);
    *(undefined4 *)(lVar13 + 0x98) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(lVar13 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
    *(undefined1 *)(lVar13 + 0xa0) = *(undefined1 *)(param_2 + 0xa0);
    *(undefined1 *)(lVar13 + 0xa1) = *(undefined1 *)(param_2 + 0xa1);
    *(undefined1 *)(lVar13 + 0xa2) = *(undefined1 *)(param_2 + 0xa2);
    uVar6 = *(undefined8 *)(param_2 + 0xac);
    *(undefined8 *)(lVar13 + 0xa4) = *(undefined8 *)(param_2 + 0xa4);
    *(undefined8 *)(lVar13 + 0xac) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0xbc);
    *(undefined8 *)(lVar13 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
    *(undefined8 *)(lVar13 + 0xbc) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0xcc);
    *(undefined8 *)(lVar13 + 0xc4) = *(undefined8 *)(param_2 + 0xc4);
    *(undefined8 *)(lVar13 + 0xcc) = uVar6;
    *(undefined1 *)(lVar13 + 0xd4) = *(undefined1 *)(param_2 + 0xd4);
    *(undefined1 *)(lVar13 + 0xd5) = *(undefined1 *)(param_2 + 0xd5);
    *(undefined1 *)(lVar13 + 0xd6) = *(undefined1 *)(param_2 + 0xd6);
    uVar6 = *(undefined8 *)(param_2 + 0xe0);
    *(undefined8 *)(lVar13 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
    *(undefined8 *)(lVar13 + 0xe0) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0xf0);
    *(undefined8 *)(lVar13 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
    *(undefined8 *)(lVar13 + 0xf0) = uVar6;
    uVar3 = *(undefined4 *)(param_2 + 0xfc);
    uVar4 = *(undefined4 *)(param_2 + 0x100);
    uVar5 = *(undefined4 *)(param_2 + 0x104);
    *(undefined4 *)(lVar13 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
    *(undefined4 *)(lVar13 + 0xfc) = uVar3;
    *(undefined4 *)(lVar13 + 0x100) = uVar4;
    *(undefined4 *)(lVar13 + 0x104) = uVar5;
    FString::operator=(lVar13 + 0x108,param_2 + 0x108);
    goto LAB_140bbe9c9;
  }
  iVar9 = (int)param_1[0x9f];
  *(int *)(param_1 + 0x9f) = iVar9 + 1;
  if (*(int *)((longlong)param_1 + 0x4fc) < iVar9 + 1) {
    FUN_1404f33d0(plVar10,iVar9);
  }
  FUN_140b9a740((longlong)iVar9 * 0x118 + *plVar10,param_2);
  if ((*(longlong **)(param_2 + 8) != (longlong *)0x0) &&
     (cVar8 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar8 != '\0')) {
    local_res10 = *(undefined8 *)(param_2 + 8);
    iVar9 = FUN_1404bb3d0(param_1 + 0x93,&local_res10);
    if (0 < iVar9) {
      plVar10 = (longlong *)
                (**(code **)(**(longlong **)(param_2 + 8) + 8))
                          (*(longlong **)(param_2 + 8),local_res18);
      lVar13 = *plVar10;
      plVar10 = (longlong *)(**(code **)(*param_1 + 0x338))(param_1,local_res20);
      lVar12 = 0x30;
      if (lVar13 == *plVar10) {
        lVar12 = 8;
      }
      plVar10 = *(longlong **)(lVar12 + 8 + param_2);
      lVar13 = *(longlong *)(lVar12 + param_2);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      if (lVar13 != 0) {
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        local_58 = lVar13;
        local_50 = plVar10;
        FUN_140c236f0(1,1,&local_58);
        if (plVar10 == (longlong *)0x0) goto LAB_140bbe7ba;
        LOCK();
        plVar1 = plVar10 + 1;
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar10 + 1;
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
  }
LAB_140bbe7ba:
  if ((*(longlong **)(param_2 + 0x30) != (longlong *)0x0) &&
     (cVar8 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x20))(), cVar8 != '\0')) {
    local_78 = *(undefined8 *)(param_2 + 0x30);
    local_70 = *(longlong **)(param_2 + 0x38);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    FUN_140d94a80(param_1[0x8f],&local_78);
    plVar10 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
LAB_140bbe9c9:
  local_48 = *(undefined8 *)(param_2 + 8);
  local_40 = *(longlong *)(param_2 + 0x10);
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_140beada0(param_1,&local_48,*(undefined1 *)(param_2 + 0x5d));
  pcVar11 = (char *)FUN_140dbc5d0(param_1 + 0xbe,local_res8);
  if ((*pcVar11 == '\x01') && (1 < *(int *)(param_2 + 0x110))) {
    local_68 = *(undefined8 *)(param_2 + 8);
    local_60 = *(longlong **)(param_2 + 0x10);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    FUN_140d691f0(param_1[0x8f],&local_68,param_2 + 0x108);
    plVar10 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x19d);
  FUN_140bf5100(param_1);
  return;
}



// FUNCTION 140bbeaa0 FUN_140bbeaa0 body=1573 status=ok
// SIG undefined FUN_140bbeaa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bbeaa0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_2a8 [32];
  undefined1 *local_288;
  undefined1 local_280;
  undefined4 *local_278;
  ulonglong *puStack_270;
  undefined1 local_268 [8];
  undefined1 local_260 [8];
  undefined1 local_258 [8];
  undefined1 local_250 [8];
  undefined1 local_248 [8];
  undefined8 local_240;
  undefined1 local_238 [8];
  undefined8 local_230;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined **local_1a8;
  undefined1 local_1a0 [24];
  undefined1 local_188 [24];
  undefined **local_170;
  undefined1 local_168 [24];
  undefined1 local_150 [24];
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  local_210 = *param_2;
  local_208 = param_2[1];
  if (local_208 != 0) {
    LOCK();
    *(int *)(local_208 + 8) = *(int *)(local_208 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FUN_14244c070(param_1,&local_210);
  puVar7 = (undefined8 *)FName::FName(local_1f0,L"GbxShiftOverlay",1);
  plVar8 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar7);
  if ((plVar8 != (longlong *)0x0) &&
     (cVar5 = (**(code **)(*plVar8 + 0x50))(plVar8,uVar6), cVar5 != '\0')) {
    return;
  }
  if (param_4 == 0) {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a8,L"The target user has been blocked on the SHiFT network.",
                       L"OakGameInstance",L"BlockUserSuccess_Description");
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_c0,L"User Blocked",L"OakGameInstance",L"BlockUserSuccess");
    local_170 = &PTR_FUN_1443170a0;
    FText::FText(local_168,uVar10);
    FText::FText(local_150,uVar6);
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_b8 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_a0 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    FWeakObjectPtr::operator=(local_258,0);
    FWeakObjectPtr::operator=(local_250,0);
    FWeakObjectPtr::operator=(local_238,0);
    local_280 = 2;
    local_230 = 0;
    local_288 = local_258;
    FUN_140c23780(1,&local_170,local_238,local_250);
    FUN_140bc0a50(param_1,param_3,0);
    FUN_140b9cdd0(&local_170);
  }
  else {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_1c0,L"An error occurred when attempting to block a user: {0}",
               L"OakGameInstance",L"BlockUserError_Base");
    FText::FText(local_228);
    if (param_4 == 2) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_108,L"The target user is already blocked.",L"OakGameInstance",
                         L"BlockUserError_AlreadyFriends");
      FText::operator=(local_228,uVar6);
    }
    else if (param_4 == 6) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_120,L"The SHiFT network is currently unavailable.",L"OakGameInstance"
                         ,L"BlockUserError_MissingBackendService");
      FText::operator=(local_228,uVar6);
      local_100 = local_118;
    }
    else {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_138,L"Unknown reason.",L"OakGameInstance",
                         L"BlockUserError_UnknownReason");
      FText::operator=(local_228,uVar6);
      local_100 = local_130;
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_100 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
    lVar9 = FText::FText(local_80,local_228);
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_90,local_1c0);
    local_68[0] = 4;
    FText::FText(local_58,lVar9);
    local_200 = *puVar7;
    local_278 = local_68;
    puStack_270 = local_38;
    local_1f8 = puVar7[1];
    local_40 = '\x01';
    if (local_1f8 != 0) {
      LOCK();
      *(int *)(local_1f8 + 8) = *(int *)(local_1f8 + 8) + 1;
      UNLOCK();
    }
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_1e8,&local_278);
    uVar6 = FText::Format(local_f0,&local_200,uVar6);
    FText::FText(local_1d8,uVar6);
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_e8 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)local_e8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1e8);
    if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_50 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    plVar8 = (longlong *)puVar7[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    plVar8 = *(longlong **)(lVar9 + 8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d8,L"Error Blocking User",L"OakGameInstance",L"BlockUserError");
    local_1a8 = &PTR_FUN_1443170a0;
    FText::FText(local_1a0,uVar6);
    FText::FText(local_188,local_1d8);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_d0 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1d0 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar1 = (int *)((longlong)local_1d0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
    FWeakObjectPtr::operator=(local_268,0);
    FWeakObjectPtr::operator=(local_260,0);
    FWeakObjectPtr::operator=(local_248,0);
    local_280 = 2;
    local_240 = 0;
    local_288 = local_268;
    FUN_140c23780(2,&local_1a8,local_248,local_260);
    FUN_140b9cdd0(&local_1a8);
    if (local_220 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_220 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_220)(local_220);
        LOCK();
        piVar1 = (int *)((longlong)local_220 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_220 + 8))(local_220,1);
        }
      }
    }
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1b8 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar1 = (int *)((longlong)local_1b8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1b8 + 8))(local_1b8,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bbf0d0 FUN_140bbf0d0 body=471 status=ok
// SIG undefined FUN_140bbf0d0(void)

void FUN_140bbf0d0(longlong *param_1,char param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if (((lVar5 != 0) && ((*(uint *)(lVar5 + 0x830) >> 2 & 1) != 0)) && ((char)param_1[0x175] == '\0')
     ) {
    if (param_2 == '\0') {
      FUN_1404cf890(&local_38,0);
      bVar7 = local_38 == (longlong *)0x0;
      if (bVar7) {
        puVar6 = &local_28;
        local_28 = 0;
        plStack_20 = (longlong *)0x0;
      }
      else {
        puVar6 = (undefined8 *)(**(code **)(*local_38 + 0x58))(local_38,local_18,param_4);
      }
      FUN_1407fcc20(param_1 + 0x17c,param_4,puVar6);
      plVar3 = plStack_20;
      if (bVar7) {
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_20 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_20)(plStack_20);
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
      }
      if ((!bVar7) && (local_10 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_10 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)local_10 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
      plVar3 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
    TArray<Chaos::TAABBTreeLeafArray<int,0>,TSizedDefaultAllocator<32>_>::Reset(&DAT_14686a610);
    return;
  }
  if (param_2 != '\0') {
    FUN_140bab890(param_1,param_4,0,0,0,1);
    return;
  }
  FUN_140bab430(param_1,param_4);
  return;
}



// FUNCTION 140bbf2b0 FUN_140bbf2b0 body=235 status=ok
// SIG undefined FUN_140bbf2b0(void)

void FUN_140bbf2b0(longlong *param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (((lVar3 == 0) || ((*(uint *)(lVar3 + 0x830) >> 2 & 1) == 0)) || ((char)param_1[0x175] != '\0')
     ) {
    if (param_3 < 0) {
      FUN_140bab430(param_1,param_2);
    }
    else {
      cVar1 = FUN_140dc1290(&DAT_14686a610,param_4);
      if ((-1 < param_4) && (param_4 != param_3)) {
        FUN_140dce590(&DAT_14686a610,param_4);
      }
      cVar2 = FUN_140dc1290(&DAT_14686a610,param_4);
      if ((cVar1 != '\0') && (cVar2 == '\0')) {
        FUN_140bbf0d0(param_1,0,0,param_4);
      }
      uVar4 = UGameInstance::FindLocalPlayerFromControllerId(param_1,param_3);
      FUN_140bab890(param_1,param_3,uVar4,0,0,1);
    }
  }
  else {
    TArray<Chaos::TAABBTreeLeafArray<int,0>,TSizedDefaultAllocator<32>_>::Reset(&DAT_14686a610);
  }
  return;
}



// FUNCTION 140bbf3a0 FUN_140bbf3a0 body=170 status=ok
// SIG undefined FUN_140bbf3a0(void)

void FUN_140bbf3a0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined1 local_18 [8];
  undefined8 local_10;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (((lVar1 != 0) && ((*(uint *)(lVar1 + 0x830) >> 2 & 1) != 0)) &&
     (*(char *)((longlong)param_1 + 0xba9) == '\0')) {
    FUN_140bf2810(param_1);
    FWeakObjectPtr::operator=(local_res8,0);
    FWeakObjectPtr::operator=(local_res18,0);
    FWeakObjectPtr::operator=(local_18,0);
    local_10 = 0;
    FUN_140c23780(2,param_2,local_18,local_res18,local_res8,2);
    return;
  }
  FUN_140bb5710(param_1,param_2);
  return;
}



// FUNCTION 140bbf450 FUN_140bbf450 body=1727 status=ok
// SIG undefined FUN_140bbf450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bbf450(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_258 [32];
  longlong *local_238;
  undefined1 local_230;
  longlong local_228;
  longlong *plStack_220;
  longlong local_218 [2];
  code *local_208;
  ulonglong *puStack_200;
  LARGE_INTEGER local_1f8;
  longlong local_1f0;
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [8];
  undefined8 local_1d8;
  longlong local_1c8;
  longlong *plStack_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  longlong *local_178;
  code *local_168;
  ulonglong *puStack_160;
  code *local_158;
  ulonglong *puStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined **local_108;
  undefined1 local_100 [24];
  undefined1 local_e8 [24];
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [16];
  undefined1 local_90 [24];
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_258;
  if ((*(char *)(param_1 + 0x458) == '\0') && (*(char *)(param_1 + 0xb18) != '\0')) {
    return;
  }
  uVar5 = FUN_140bb74b0();
  local_238 = (longlong *)CONCAT44(local_238._4_4_,3);
  FUN_140d7da70(uVar5,&local_1a8,param_2,param_3);
  if (local_1a8 == 0) {
    plVar7 = (longlong *)*param_3;
    plVar6 = (longlong *)FName::FName(local_198,L"SPARK",1);
    plVar7 = (longlong *)(**(code **)(*plVar7 + 8))(plVar7,local_190);
    if (*plVar7 == *plVar6) {
      FUN_140bbb2b0(param_1,&local_228,param_3);
      plVar7 = plStack_220;
      if (local_228 != 0) {
        local_1c8 = local_228;
        plStack_1c0 = plStack_220;
        if (plStack_220 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_220 + 1) = (int)plStack_220[1] + 1;
          UNLOCK();
        }
        uVar5 = FUN_140bb74b0(param_1);
        local_238 = (longlong *)CONCAT44(local_238._4_4_,3);
        plVar6 = (longlong *)FUN_140d7da70(uVar5,local_180,param_2,&local_1c8);
        lVar8 = *plVar6;
        if (local_178 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_178 + 1;
          lVar3 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          plVar7 = plStack_220;
          if ((int)lVar3 == 1) {
            (**(code **)*local_178)(local_178);
            LOCK();
            piVar1 = (int *)((longlong)local_178 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar7 = plStack_220;
            if (iVar2 == 1) {
              (**(code **)(*local_178 + 8))(local_178,1);
              plVar7 = plStack_220;
            }
          }
        }
        plVar6 = plStack_1c0;
        if (plStack_1c0 != (longlong *)0x0) {
          LOCK();
          plVar7 = plStack_1c0 + 1;
          lVar3 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          plVar7 = plStack_220;
          if ((int)lVar3 == 1) {
            (**(code **)*plStack_1c0)(plStack_1c0);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar7 = plStack_220;
            if (iVar2 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
              plVar7 = plStack_220;
            }
          }
        }
        plVar6 = plStack_220;
        if (lVar8 != 0) {
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar7 + 1;
            lVar8 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plStack_220)(plStack_220);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plStack_220 + 8))(plStack_220,1);
              }
            }
          }
          goto LAB_140bbfaaf;
        }
      }
      plVar6 = plStack_220;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar7 + 1;
        lVar8 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_220)(plStack_220);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_220 + 8))(plStack_220,1);
          }
        }
      }
    }
    local_238 = local_218;
    local_218[0] = 0;
    local_218[1] = 0;
    cVar4 = FUN_140d79f00(*(undefined8 *)(param_1 + 0x478),param_3,1,0);
    if (cVar4 == '\0') {
      FUN_140d938f0(*(undefined8 *)(param_1 + 0x478),param_3);
      iVar2 = *(int *)(param_1 + 0x1448);
      *(int *)(param_1 + 0x1448) = iVar2 + 1;
      if (*(int *)(param_1 + 0x144c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x1440,iVar2);
      }
      puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x1440));
      *puVar9 = *param_3;
      lVar8 = param_3[1];
      puVar9[1] = lVar8;
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      QueryPerformanceCounter(&local_1f8);
      *(double *)(param_1 + 0x1450) = (double)local_1f8.QuadPart * DAT_1468b02f8 + 16777216.0;
      if (*(longlong *)(param_1 + 0x1438) == 0) {
        local_208 = FUN_140bdcff0;
        puStack_200 = (ulonglong *)((ulonglong)puStack_200 & 0xffffffff00000000);
        local_168 = FUN_140bdcff0;
        puStack_160 = puStack_200;
        puVar9 = (undefined8 *)
                 FUN_140722860(*(longlong *)(param_1 + 0x478) + 0x1e0,local_188,param_1,&local_168);
        *(undefined8 *)(param_1 + 0x1438) = *puVar9;
      }
    }
    else {
      lVar8 = FText::FromString(local_90,local_218);
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_b8,L"You have been invited to be a SHiFT friend by {0}",
                         L"OakGameInstance",L"FriendInviteReceivedSpecific");
      puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_a0,uVar5);
      local_78[0] = 4;
      FText::FText(local_68,lVar8);
      local_1b8 = *puVar9;
      local_208 = (code *)local_78;
      puStack_200 = local_48;
      local_1b0 = puVar9[1];
      local_50 = '\x01';
      if (local_1b0 != 0) {
        LOCK();
        *(int *)(local_1b0 + 8) = *(int *)(local_1b0 + 8) + 1;
        UNLOCK();
      }
      local_158 = local_208;
      puStack_150 = puStack_200;
      uVar5 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_148,&local_158);
      uVar5 = FText::Format(local_d0,&local_1b8,uVar5);
      FText::FText(local_120,uVar5);
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_c8 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_148);
      if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
        LOCK();
        plVar7 = local_60 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      plVar7 = (longlong *)puVar9[1];
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
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      plVar7 = *(longlong **)(lVar8 + 8);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        lVar8 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_b0 + 1;
        lVar8 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (local_138,L"Friend Invite Received",L"OakGameInstance",L"FriendInviteReceivedTitle"
                );
      FWeakObjectPtr::operator=(&local_1f0,0);
      FWeakObjectPtr::operator=(local_1e8,0);
      FWeakObjectPtr::operator=(local_1e0,0);
      local_1d8 = 0;
      local_108 = &PTR_FUN_1443170a0;
      FText::FText(local_100,local_138);
      FText::FText(local_e8,local_120);
      local_238 = &local_1f0;
      local_230 = 2;
      FUN_140c23780(1,&local_108,local_1e0,local_1e8);
      FUN_140b9cdd0(&local_108);
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_130 + 1;
        lVar8 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)local_130 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_118 + 1;
        lVar8 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar1 = (int *)((longlong)local_118 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_118 + 8))(local_118,1);
          }
        }
      }
    }
    if (local_218[0] != 0) {
      FMemory::Free();
    }
  }
LAB_140bbfaaf:
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1a0 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1a0)(local_1a0);
      LOCK();
      piVar1 = (int *)((longlong)local_1a0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1a0 + 8))(local_1a0,1);
      }
    }
  }
  return;
}



// FUNCTION 140bbfb10 FUN_140bbfb10 body=472 status=ok
// SIG undefined FUN_140bbfb10(void)

void FUN_140bbfb10(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined **local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (((lVar4 == 0) || ((*(uint *)(lVar4 + 0x830) >> 2 & 1) == 0)) || ((char)param_1[0x175] != '\0')
     ) {
    *(char *)((longlong)param_1 + 0xbab) = param_2;
    if (param_2 == '\0') {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_58,L"Connection Error",L"OakGameInstance",L"BeaconErrorDialogCaption"
                        );
      local_40 = &PTR_FUN_1443170a0;
      FText::FText(local_38,uVar5);
      FText::FText(local_20,&DAT_14686f630);
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
      local_40 = &PTR_FUN_1443170a0;
      FUN_140bc02f0(param_1,&local_40,2);
      local_40 = &PTR_FUN_1443170a0;
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
      local_78 = 0;
      uStack_70 = 0;
      FUN_140c236f0(1,8,&local_78);
      return;
    }
    FUN_140be9330(param_1);
    local_68 = 0;
    uStack_60 = 0;
    FUN_140c236f0(1,9,&local_68);
  }
  return;
}



// FUNCTION 140bbfcf0 GetArchetypeFromRequiredInfo body=19 status=ok
// SIG undefined GetArchetypeFromRequiredInfo(void)

void UObject::GetArchetypeFromRequiredInfo(void)

{
  FUN_140bbfd10();
  return;
}



// FUNCTION 140bbfd10 FUN_140bbfd10 body=1493 status=ok
// SIG undefined FUN_140bbfd10(void)

void FUN_140bbfd10(longlong *param_1,undefined8 *param_2,int param_3,int param_4,byte param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 local_res8 [8];
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong local_148 [3];
  longlong local_130;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined **local_100;
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined **local_98 [2];
  longlong *local_88;
  longlong *local_70;
  undefined **local_60 [2];
  longlong *local_50;
  longlong *local_38;
  
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if (((lVar7 != 0) && ((*(uint *)(lVar7 + 0x830) >> 2 & 1) != 0)) && ((char)param_1[0x175] == '\0')
     ) {
    return;
  }
  local_148[2] = *param_2;
  local_130 = param_2[1];
  if (local_130 != 0) {
    LOCK();
    *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
    UNLOCK();
  }
  lVar7 = FUN_14244c070(param_1,local_148 + 2);
  if (lVar7 == 0) {
    return;
  }
  if ((param_5 != 0) && (lVar7 == param_1[0x132])) {
    return;
  }
  cVar6 = FUN_14254a1f0(lVar7);
  if (cVar6 == '\0') {
    if (param_3 == 2) {
      if (param_5 == 0) {
        return;
      }
      puVar9 = (undefined8 *)FName::FName(local_128,L"SPARK",1);
      FUN_140bbd560(&local_158,*puVar9);
      if (local_158 != (longlong *)0x0) {
        (**(code **)(*local_158 + 0x30))(local_158,param_2);
      }
      plVar12 = local_150;
      if (local_150 == (longlong *)0x0) {
        return;
      }
      LOCK();
      plVar1 = local_150 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 != 1) {
        return;
      }
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 != 1) {
        return;
      }
      lVar7 = *local_150;
      goto LAB_140bc01c0;
    }
    if (param_3 != 1) {
      if (param_5 == 0) {
        if (param_3 != 0) {
          return;
        }
        lVar4 = *(longlong *)(lVar7 + 0x30);
        if (lVar4 != 0) {
          lVar11 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            cVar6 = FUN_140bca8a0(param_1);
            if (cVar6 == '\0') {
              local_148[0] = 0;
              local_148[1] = 0;
              FUN_140d0dc60(lVar4,local_148);
              if (local_148[0] != 0) {
                FMemory::Free();
                FUN_140bee990(param_1,lVar7);
                return;
              }
            }
            else {
              plVar12 = (longlong *)FUN_1424503b0(param_1);
              if (plVar12 != (longlong *)0x0) {
                lVar11 = FUN_14145f370();
                if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
                    lVar11 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if ((bVar5) && (lVar11 = (**(code **)(*plVar12 + 0xfa8))(plVar12), lVar11 != 0)) {
                  FUN_142efd770(lVar11,lVar4);
                }
              }
            }
          }
        }
        FUN_140bee990(param_1,lVar7);
        return;
      }
      if (param_3 != 0) {
        return;
      }
    }
    uVar8 = FUN_140b9a050(local_60,param_5);
    FUN_140bc02f0(param_1,uVar8,2);
    local_60[0] = &PTR_FUN_1443170a0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_38 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  }
  else {
    if ((param_3 == 1) || ((param_5 != 0 && (param_3 == 0)))) {
      uVar8 = FUN_140b9a050(local_98,param_5);
      FUN_140bc02f0(param_1,uVar8,2);
      local_98[0] = &PTR_FUN_1443170a0;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_70 + 1;
        lVar7 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_88 + 1;
        lVar7 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar2 = (int *)((longlong)local_88 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
      if (param_4 != 2) {
        return;
      }
      if (*(char *)((longlong)param_1 + 0xbab) == '\0') {
        return;
      }
      local_110 = 0;
      uStack_108 = 0;
      FUN_140c236f0(1,param_5 + 4,&local_110);
      return;
    }
    if (param_3 == 2) {
      FUN_140be9330(param_1);
      uVar8 = FUN_140bb7630(param_1);
      FUN_140d87910(uVar8,param_1);
      uVar8 = FUN_140bb7630(param_1);
      FUN_140d74dd0(uVar8);
      if (param_5 != 0) {
        puVar9 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
        FUN_140bbd560(&local_168,*puVar9);
        if (local_168 != (longlong *)0x0) {
          (**(code **)(*local_168 + 0x30))(local_168,param_2);
        }
        plVar12 = local_160;
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_160 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_160 + 8))(local_160,1);
            }
          }
        }
      }
      if (param_4 != 1) {
        return;
      }
      local_120 = 0;
      uStack_118 = 0;
      FUN_140c236f0(1,param_5 + 6,&local_120);
      return;
    }
    if (param_3 != 0) {
      return;
    }
    cVar6 = FUN_140bca8a0(param_1);
    if (cVar6 == '\0') {
      FUN_140be3520(param_1);
      FUN_140be97d0(param_1);
    }
    if (param_1[0x16e] != 0) {
      thunk_FUN_140c54800(param_1[0x16e],lVar7);
      FUN_1411fd0c0(param_1 + 0xf4,0,0);
    }
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b0,
                       L"You have been returned to the title screen because a sign-out change occurred."
                       ,L"OakGameInstance",L"SignedOutMessage");
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_c8,L"Signed Out",L"OakGameInstance",L"SignedOutTitle");
    local_100 = &PTR_FUN_1443170a0;
    FText::FText(local_f8,uVar10);
    FText::FText(local_e0,uVar8);
    FUN_140ba9020(param_1);
    FUN_140bb5710(param_1,&local_100);
    FUN_140b9cdd0(&local_100);
    local_50 = local_a8;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_c0 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)local_c0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        local_50 = local_a8;
        if (iVar3 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
          local_50 = local_a8;
        }
      }
    }
  }
  if (local_50 == (longlong *)0x0) {
    return;
  }
  LOCK();
  plVar12 = local_50 + 1;
  lVar7 = *plVar12;
  *(int *)plVar12 = (int)*plVar12 + -1;
  UNLOCK();
  if ((int)lVar7 != 1) {
    return;
  }
  (**(code **)*local_50)(local_50);
  LOCK();
  piVar2 = (int *)((longlong)local_50 + 0xc);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 != 1) {
    return;
  }
  lVar7 = *local_50;
  local_150 = local_50;
LAB_140bc01c0:
  (**(code **)(lVar7 + 8))(local_150,1);
  return;
}



// FUNCTION 140bc02f0 FUN_140bc02f0 body=1154 status=ok
// SIG undefined FUN_140bc02f0(void)

void FUN_140bc02f0(longlong *param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined **local_68 [2];
  longlong *local_58;
  longlong local_50;
  
  local_res10 = param_2;
  lVar9 = (**(code **)(*param_1 + 0x148))();
  if (((lVar9 != 0) && ((*(uint *)(lVar9 + 0x830) >> 2 & 1) != 0)) && ((char)param_1[0x175] == '\0')
     ) {
    return;
  }
  lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar9 != 0) && ((*(uint *)(lVar9 + 0x830) >> 2 & 1) != 0)) &&
     (lVar9 = FUN_140bb89c0(param_1), lVar9 != 0)) {
    FUN_141105d40(lVar9,param_3);
  }
  FUN_140ba8040(param_1);
  *(undefined1 *)(param_1 + 0x238) = 0;
  puVar14 = (undefined8 *)param_1[7];
  puVar4 = puVar14 + (int)param_1[8];
  for (; puVar14 != puVar4; puVar14 = puVar14 + 1) {
    lVar9 = FUN_142547b50(*puVar14,local_68);
    plVar6 = *(longlong **)(lVar9 + 0x10);
    lVar9 = *(longlong *)(lVar9 + 8);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_68[0] = &PTR_FUN_143f740c8;
    if (local_50 != 0) {
      FMemory::Free();
    }
    plVar3 = local_58;
    local_68[0] = &PTR_FUN_143f73d18;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (lVar9 != 0) {
      puVar10 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
      FUN_1404cf890(&local_88,*puVar10);
      if (local_88 != (longlong *)0x0) {
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        local_78 = lVar9;
        local_70 = plVar6;
        iVar8 = (**(code **)(*local_88 + 0x78))(local_88,&local_78);
        plVar3 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_70)(local_70);
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
        plVar3 = local_80;
        if (iVar8 == 2) {
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_80 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_80 + 8))(local_80,1);
              }
            }
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar6 + 1;
            lVar9 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          goto LAB_140bc05ba;
        }
      }
      plVar3 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar6 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  lVar9 = param_1[0x211];
  if (lVar9 == 0) {
    lVar11 = operator_new(0x1a8);
    lVar9 = 0;
    if (lVar11 != 0) {
      lVar9 = FUN_140d64540(lVar11);
    }
    param_1[0x211] = lVar9;
  }
  FUN_140d709d0(lVar9);
  lVar9 = param_1[0x211];
  if (lVar9 == 0) {
    lVar11 = operator_new(0x1a8);
    lVar9 = 0;
    if (lVar11 != 0) {
      lVar9 = FUN_140d64540(lVar11);
    }
    param_1[0x211] = lVar9;
  }
  FUN_140da0180(lVar9);
LAB_140bc05ba:
  cVar7 = FUN_140ba5eb0(param_1,0);
  pcVar13 = (char *)&DAT_14686a12c;
  if (cVar7 != '\0') {
    pcVar13 = (char *)&DAT_146297e30;
  }
  if ((char)param_1[0x88] == *pcVar13) {
    return;
  }
  FUN_140bc2f10(param_1);
  if ((DAT_146b17150 != (longlong *)0x0) &&
     (lVar9 = (**(code **)(*param_1 + 0x148))(param_1), lVar9 != 0)) {
    uVar12 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar9 = FUN_142884640(DAT_146b17150,uVar12);
    if (lVar9 != 0) {
      lVar9 = *DAT_146b17150;
      uVar12 = (**(code **)(*param_1 + 0x148))(param_1);
      (**(code **)(lVar9 + 0x488))(DAT_146b17150,uVar12,0);
      FUN_140bc2fb0(param_1,0);
    }
  }
  lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar9 != 0) {
    uVar12 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar8 = FUN_1428cf800(uVar12);
    if (iVar8 == 3) goto LAB_140bc06b3;
  }
  lVar9 = FUN_140bb6170(param_1);
  if (lVar9 == 0) {
    if (param_4 != '\0') {
      FUN_140bf2810();
      return;
    }
    FUN_140bf26e0(param_1,pcVar13);
    return;
  }
LAB_140bc06b3:
  FUN_140bbf3a0(param_1,local_res10);
  return;
}



// FUNCTION 140bc0780 FUN_140bc0780 body=710 status=ok
// SIG undefined FUN_140bc0780(void)

void FUN_140bc0780(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined **local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if ((lVar5 == 0) || ((*(uint *)(lVar5 + 0x830) >> 2 & 1) == 0)) {
    lVar5 = FUN_140bbb8d0(param_1,param_2);
    if (lVar5 != 0) {
      lVar6 = UInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_14146d8d0(lVar5);
      }
    }
  }
  else {
    lVar5 = FUN_140bb7870(param_1);
    if (lVar5 == 0) {
      lVar5 = FUN_140bb6170(param_1);
      if (lVar5 == 0) goto LAB_140bc0a1b;
      local_48 = *param_2;
      local_40 = (longlong *)param_2[1];
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      local_50 = &PTR_FUN_143f740c8;
      local_38 = 0;
      local_30 = 0;
      if ((*(longlong *)(lVar5 + 200) != 0) &&
         (lVar5 = FUN_1425bd330(*(longlong *)(lVar5 + 200),6), lVar5 != 0)) {
        lVar6 = FUN_1404e6fc0();
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
          FUN_140b970d0(lVar5,0,0x1d,&local_50);
        }
      }
      local_50 = &PTR_FUN_143f740c8;
      if (local_38 != 0) {
        FMemory::Free();
      }
      local_50 = &PTR_FUN_143f73d18;
      plVar8 = local_40;
    }
    else {
      local_70 = *param_2;
      local_68 = (longlong *)param_2[1];
      if (local_68 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        UNLOCK();
      }
      plVar8 = *(longlong **)(lVar5 + 0x48);
      local_78 = &PTR_FUN_143f740c8;
      local_60 = 0;
      local_58 = 0;
      if ((plVar8 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar8 + 0x390))(plVar8), cVar4 != '\0')) {
        plVar7 = *(longlong **)(*(longlong *)(lVar5 + 0x48) + 0x98);
        plVar8 = plVar7 + *(int *)(*(longlong *)(lVar5 + 0x48) + 0xa0);
        for (; plVar7 != plVar8; plVar7 = plVar7 + 1) {
          if ((*plVar7 != 0) && (lVar5 = FUN_1425bd330(*plVar7,6), lVar5 != 0)) {
            lVar6 = FUN_1404e6fc0();
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
              FUN_140b970d0(lVar5,0,0x1d,&local_78);
            }
          }
        }
      }
      local_78 = &PTR_FUN_143f740c8;
      if (local_60 != 0) {
        FMemory::Free();
      }
      local_78 = &PTR_FUN_143f73d18;
      plVar8 = local_68;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
LAB_140bc0a1b:
  FUN_140d94190(param_1[0x8f] + 0x1f8,param_2);
  return;
}



// FUNCTION 140bc0a50 FUN_140bc0a50 body=551 status=ok
// SIG undefined FUN_140bc0a50(void)

void FUN_140bc0a50(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res20 [8];
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *plStack_20;
  
  puVar6 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
  FUN_140bbd560(&local_48,*puVar6);
  FUN_140bbb2b0(param_1,&local_58,param_2);
  FUN_140bbc6f0(param_1,&local_68,param_2);
  plVar7 = plStack_60;
  if ((local_48 != 0) && (local_58 != 0)) {
    uVar5 = FUN_140bbba30(param_1,&local_58);
    local_38 = local_58;
    plStack_30 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
    }
    TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
              (param_1 + 0xa38,&local_38,uVar5);
    plVar7 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
    plVar7 = plStack_60;
    if (local_68 != 0) {
      local_28 = local_68;
      plStack_20 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
        UNLOCK();
      }
      TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
                (param_1 + 0xa38,&local_28,uVar5);
      plVar1 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_20 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        plVar7 = plStack_60;
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_20)(plStack_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar7 = plStack_60;
          if (iVar3 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
            plVar7 = plStack_60;
          }
        }
      }
    }
  }
  plVar1 = plStack_60;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar7 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  plVar7 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  plVar7 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140bc0c80 FUN_140bc0c80 body=989 status=ok
// SIG undefined FUN_140bc0c80(void)

void FUN_140bc0c80(longlong *param_1,undefined8 *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined8 local_168;
  undefined1 local_160 [8];
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined **local_e0;
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined **local_a8;
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined1 local_70 [8];
  longlong *local_68;
  undefined **local_58 [2];
  longlong *local_48;
  longlong *local_30;
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if (((lVar5 != 0) && ((*(uint *)(lVar5 + 0x830) >> 2 & 1) != 0)) && ((char)param_1[0x175] == '\0')
     ) {
    return;
  }
  if (param_3 != 0) {
    return;
  }
  if (param_4 != 1) {
    return;
  }
  local_150 = *param_2;
  local_148 = param_2[1];
  if (local_148 != 0) {
    LOCK();
    *(int *)(local_148 + 8) = *(int *)(local_148 + 8) + 1;
    UNLOCK();
  }
  lVar5 = FUN_14244c070(param_1,&local_150);
  if (lVar5 == 0) {
    return;
  }
  cVar4 = FUN_140bc9f60(param_1);
  if ((cVar4 == '\0') && (cVar4 = FUN_140bc2c90(param_1), cVar4 != '\0')) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_128,L"Session Ended",L"OakGameInstance",L"RemotePlayersKickedNoPrivilegeTitle")
    ;
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_140,L"Online permissions have changed.",L"OakGameInstance",
               L"RemotePlayersKickedNoPrivilegeMessage");
    FWeakObjectPtr::operator=(local_res8,0);
    FWeakObjectPtr::operator=(local_188,0);
    FWeakObjectPtr::operator=(local_170,0);
    local_e0 = &PTR_FUN_1443170a0;
    local_168 = 0;
    FText::FText(local_d8,local_128);
    FText::FText(local_c0,local_140);
    FUN_140c23780(1,&local_e0,local_170,local_188,local_res8,2);
    FUN_140b9cdd0(&local_e0);
    plVar7 = local_120;
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_138 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar2 = (int *)((longlong)local_138 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar7 = local_120;
        if (iVar3 == 1) {
          (**(code **)(*local_138 + 8))(local_138,1);
          plVar7 = local_120;
        }
      }
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x1054) == 0) goto LAB_140bc0f62;
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_f8,L"Matchmaking Cancelled",L"OakGameInstance",
               L"MatchmakingCancelledNoPrivilegeTitle");
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_110,L"Online permissions have changed.",L"OakGameInstance",
               L"MatchmakingCancelledNoPrivilegeMessage");
    FWeakObjectPtr::operator=(local_180,0);
    FWeakObjectPtr::operator=(local_178,0);
    FWeakObjectPtr::operator=(local_160,0);
    local_a8 = &PTR_FUN_1443170a0;
    local_158 = 0;
    FText::FText(local_a0,local_f8);
    FText::FText(local_88,local_110);
    FUN_140c23780(1,&local_a8,local_160,local_178,local_180,2);
    FUN_140b9cdd0(&local_a8);
    plVar7 = local_f0;
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_108 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar2 = (int *)((longlong)local_108 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar7 = local_f0;
        if (iVar3 == 1) {
          (**(code **)(*local_108 + 8))(local_108,1);
          plVar7 = local_f0;
        }
      }
    }
  }
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
LAB_140bc0f62:
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_70,
                     L"A player does not have the correct online permissions to access multiplayer features."
                     ,L"OakGameInstance",L"OnlinePrivilegeLostErrorMessage");
  uVar6 = FUN_140b998f0(local_58,uVar6);
  FUN_140bc02f0(param_1,uVar6,1);
  local_58[0] = &PTR_FUN_1443170a0;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_48 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_68 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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



// FUNCTION 140bc1060 FUN_140bc1060 body=1243 status=ok
// SIG undefined FUN_140bc1060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bc1060(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_208 [32];
  undefined1 *local_1e8;
  undefined1 local_1e0;
  undefined4 *local_1d8;
  ulonglong *puStack_1d0;
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong local_178;
  undefined1 local_170 [8];
  undefined1 local_168 [16];
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined **local_128;
  undefined1 local_120 [24];
  undefined1 local_108 [24];
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [24];
  undefined4 local_50 [4];
  undefined1 local_40 [8];
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_190 = *param_2;
  local_188 = param_2[1];
  if (local_188 != 0) {
    LOCK();
    *(int *)(local_188 + 8) = *(int *)(local_188 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FUN_14244c070(param_1,&local_190);
  puVar7 = (undefined8 *)FName::FName(local_170,L"GbxShiftOverlay",1);
  plVar8 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar7);
  if ((plVar8 != (longlong *)0x0) &&
     (cVar5 = (**(code **)(*plVar8 + 0x50))(plVar8,uVar6), cVar5 != '\0')) {
    return;
  }
  if (param_4 != 0) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_140,L"An error occurred when attempting to reject a friend request: {0}",
               L"OakGameInstance",L"RejectFriendRequestError_Base");
    FText::FText(local_1a8);
    if (param_4 == 5) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_c0,L"The requested friend invitation could not be found.",
                         L"OakGameInstance",L"RejectFriendRequestError_UserNotFound");
      FText::operator=(local_1a8,uVar6);
    }
    else if (param_4 == 6) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_d8,L"The SHiFT network is currently unavailable.",L"OakGameInstance",
                         L"RejectFriendRequestError_MissingBackendService");
      FText::operator=(local_1a8,uVar6);
      local_b8 = local_d0;
    }
    else {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_f0,L"Unknown reason.",L"OakGameInstance",
                         L"RejectFriendRequestError_UnknownReason");
      FText::operator=(local_1a8,uVar6);
      local_b8 = local_e8;
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_b8 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    lVar9 = FText::FText(local_68,local_1a8);
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_78,local_140);
    local_50[0] = 4;
    FText::FText(local_40,lVar9);
    local_180 = *puVar7;
    local_1d8 = local_50;
    puStack_1d0 = &local_20;
    local_178 = puVar7[1];
    local_28 = '\x01';
    if (local_178 != 0) {
      LOCK();
      *(int *)(local_178 + 8) = *(int *)(local_178 + 8) + 1;
      UNLOCK();
    }
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_168,&local_1d8);
    uVar6 = FText::Format(local_a8,&local_180,uVar6);
    FText::FText(local_158,uVar6);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_a0 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_168);
    if ((local_28 != '\0') && (local_28 = '\0', local_38 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_38 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    plVar8 = (longlong *)puVar7[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    plVar8 = *(longlong **)(lVar9 + 8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_90,L"Error Rejecting Friend Request",L"OakGameInstance",
                       L"RejectFriendRequestError");
    local_128 = &PTR_FUN_1443170a0;
    FText::FText(local_120,uVar6);
    FText::FText(local_108,local_158);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_88 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_150 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)local_150 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
    FWeakObjectPtr::operator=(local_1c8,0);
    FWeakObjectPtr::operator=(local_1c0,0);
    FWeakObjectPtr::operator=(local_1b8,0);
    local_1e0 = 2;
    local_1b0 = 0;
    local_1e8 = local_1c8;
    FUN_140c23780(2,&local_128,local_1b8,local_1c0);
    FUN_140b9cdd0(&local_128);
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1a0 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar1 = (int *)((longlong)local_1a0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_138 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar1 = (int *)((longlong)local_138 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_138 + 8))(local_138,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bc1540 FUN_140bc1540 body=1579 status=ok
// SIG undefined FUN_140bc1540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bc1540(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_298 [32];
  undefined1 *local_278;
  undefined1 local_270;
  undefined4 *local_268;
  ulonglong *puStack_260;
  undefined1 local_258 [8];
  undefined1 local_250 [8];
  undefined1 local_248 [8];
  undefined1 local_240 [8];
  undefined1 local_238 [8];
  undefined8 local_230;
  undefined1 local_228 [8];
  undefined8 local_220;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined **local_198;
  undefined1 local_190 [24];
  undefined1 local_178 [24];
  undefined **local_160;
  undefined1 local_158 [24];
  undefined1 local_140 [24];
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
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
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_298;
  local_200 = *param_2;
  local_1f8 = param_2[1];
  if (local_1f8 != 0) {
    LOCK();
    *(int *)(local_1f8 + 8) = *(int *)(local_1f8 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FUN_14244c070(param_1,&local_200);
  puVar7 = (undefined8 *)FName::FName(local_1e0,L"GbxShiftOverlay",1);
  plVar8 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar7);
  if ((plVar8 != (longlong *)0x0) &&
     (cVar5 = (**(code **)(*plVar8 + 0x50))(plVar8,uVar6), cVar5 != '\0')) {
    return;
  }
  if (param_4 == 0) {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_98,L"The target user been removed from your SHiFT friends list.",
                       L"OakGameInstance",L"RemoveFriendSuccess_Description");
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_b0,L"Friend Removed",L"OakGameInstance",L"RemoveFriendSuccess");
    local_160 = &PTR_FUN_1443170a0;
    FText::FText(local_158,uVar10);
    FText::FText(local_140,uVar6);
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_a8 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_90 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    FWeakObjectPtr::operator=(local_248,0);
    FWeakObjectPtr::operator=(local_240,0);
    FWeakObjectPtr::operator=(local_228,0);
    local_270 = 2;
    local_220 = 0;
    local_278 = local_248;
    FUN_140c23780(1,&local_160,local_228,local_240);
    FUN_140b9cdd0(&local_160);
  }
  else {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_1b0,L"An error occurred when attempting to remove a friend: {0}",
               L"OakGameInstance",L"RemoveFriendError_Base");
    FText::FText(local_218);
    if (param_4 == 2) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_f8,L"The target user is not friends with you.",L"OakGameInstance",
                         L"RemoveFriendError_NotFriends");
      FText::operator=(local_218,uVar6);
    }
    else if (param_4 == 6) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_110,L"The SHiFT network is currently unavailable.",L"OakGameInstance"
                         ,L"RemoveFriendError_MissingBackendService");
      FText::operator=(local_218,uVar6);
      local_f0 = local_108;
    }
    else {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_128,L"Unknown reason.",L"OakGameInstance",
                         L"RemoveFriendError_UnknownReason");
      FText::operator=(local_218,uVar6);
      local_f0 = local_120;
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_f0 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    lVar9 = FText::FText(local_70,local_218);
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_80,local_1b0);
    local_58[0] = 4;
    FText::FText(local_48,lVar9);
    local_1f0 = *puVar7;
    local_268 = local_58;
    puStack_260 = local_28;
    local_1e8 = puVar7[1];
    local_30 = '\x01';
    if (local_1e8 != 0) {
      LOCK();
      *(int *)(local_1e8 + 8) = *(int *)(local_1e8 + 8) + 1;
      UNLOCK();
    }
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_1d8,&local_268);
    uVar6 = FText::Format(local_e0,&local_1f0,uVar6);
    FText::FText(local_1c8,uVar6);
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_d8 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1d8);
    if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_40 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    plVar8 = (longlong *)puVar7[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    plVar8 = *(longlong **)(lVar9 + 8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_c8,L"Error Removing Friend",L"OakGameInstance",L"RemoveFriendError");
    local_198 = &PTR_FUN_1443170a0;
    FText::FText(local_190,uVar6);
    FText::FText(local_178,local_1c8);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_c0 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1c0 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar1 = (int *)((longlong)local_1c0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1c0 + 8))(local_1c0,1);
        }
      }
    }
    FWeakObjectPtr::operator=(local_258,0);
    FWeakObjectPtr::operator=(local_250,0);
    FWeakObjectPtr::operator=(local_238,0);
    local_270 = 2;
    local_230 = 0;
    local_278 = local_258;
    FUN_140c23780(2,&local_198,local_238,local_250);
    FUN_140b9cdd0(&local_198);
    if (local_210 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_210 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_210)(local_210);
        LOCK();
        piVar1 = (int *)((longlong)local_210 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_210 + 8))(local_210,1);
        }
      }
    }
    if (local_1a8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1a8 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1a8)(local_1a8);
        LOCK();
        piVar1 = (int *)((longlong)local_1a8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1a8 + 8))(local_1a8,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bc1b70 FUN_140bc1b70 body=535 status=ok
// SIG undefined FUN_140bc1b70(void)

void FUN_140bc1b70(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  void **ppvVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  
  FUN_140bbc430(&local_78,0);
  plVar9 = local_78;
  if (local_78 != (longlong *)0x0) {
    local_68 = 0;
    local_60 = 0;
    FUN_140bb7680(param_1,&local_68);
    local_98 = (void *)0x0;
    local_90 = 0;
    lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar5 != 0) {
      ppvVar6 = (void **)FUN_1428cc8c0(lVar5,local_58);
      if (&local_98 != ppvVar6) {
        iVar3 = *(int *)(ppvVar6 + 1);
        pvVar4 = *ppvVar6;
        local_90 = CONCAT44(local_90._4_4_,iVar3);
        if ((iVar3 == 0) && (local_90._4_4_ == 0)) {
          local_90 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,iVar3);
          _guard_xfg_dispatch_icall_nop(local_98,pvVar4,(longlong)iVar3 * 2);
        }
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
    }
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar7 = FUN_140c13bc0(local_48,&local_98,uVar7);
    puVar8 = (undefined8 *)FText::ToString(uVar7);
    local_88 = (void *)0x0;
    local_80 = *(int *)(puVar8 + 1);
    lVar5 = (longlong)local_80;
    pvVar4 = (void *)*puVar8;
    if (local_80 == 0) {
      local_7c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_80,0);
      _guard_xfg_dispatch_icall_nop(local_88,pvVar4,lVar5 * 2);
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_40 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      plVar9 = local_78;
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar9 = local_78;
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
          plVar9 = local_78;
        }
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,param_2,&local_68,&local_88);
    if (local_88 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_98 != (void *)0x0) {
      FMemory::Free();
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_68);
  }
  plVar9 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return;
}



// FUNCTION 140bc1d90 FUN_140bc1d90 body=311 status=ok
// SIG undefined FUN_140bc1d90(void)

void FUN_140bc1d90(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined **local_40 [2];
  longlong *local_30;
  longlong *local_18;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (((lVar4 == 0) || ((*(uint *)(lVar4 + 0x830) >> 2 & 1) == 0)) || ((char)param_1[0x175] != '\0')
     ) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Your connection to Xbox Live was lost.",L"OakGameInstance",
                       L"SessionFailureMessage");
    uVar5 = FUN_140b998f0(local_40,uVar5);
    FUN_140bc02f0(param_1,uVar5,2);
    local_40[0] = &PTR_FUN_1443170a0;
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



// FUNCTION 140bc1ed0 OnJunkSplitConfirmed body=19 status=ok
// SIG undefined OnJunkSplitConfirmed(void)

void UInventoryWidget::OnJunkSplitConfirmed(void)

{
  FUN_140bbfd10();
  return;
}



// FUNCTION 140bc1ef0 FUN_140bc1ef0 body=569 status=ok
// SIG undefined FUN_140bc1ef0(void)

void FUN_140bc1ef0(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined **local_40 [2];
  longlong *local_30;
  longlong *local_18;
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if (((lVar5 != 0) && ((*(uint *)(lVar5 + 0x830) >> 2 & 1) != 0)) && ((char)param_1[0x175] == '\0')
     ) {
    return;
  }
  local_98 = *param_2;
  local_90 = param_2[1];
  if (local_90 != 0) {
    LOCK();
    *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
    UNLOCK();
  }
  lVar5 = FUN_14244c070(param_1,&local_98);
  if (lVar5 == 0) {
    return;
  }
  cVar4 = FUN_14254a1f0(lVar5);
  if (cVar4 == '\0') {
    return;
  }
  lVar5 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_88,param_2);
  if ((local_88 == 0) || (cVar4 = FUN_142b6e510(), cVar4 != '\0')) {
    if (param_3 == '\0') {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_58,L"Your connection to Gearbox Software SHiFT was lost.",
                         L"OakGameInstance",L"XmppDisconnectMessage");
      uVar6 = FUN_140b998f0(local_40,uVar6);
      FUN_140bc02f0(param_1,uVar6,2);
      local_40[0] = &PTR_FUN_1443170a0;
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_18 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      if (*(char *)((longlong)param_1 + 0xbab) == '\0') goto LAB_140bc20e1;
      puVar7 = &local_78;
      local_78 = 0;
      uStack_70 = 0;
      uVar6 = 5;
    }
    else {
      FUN_140be9330(param_1);
      puVar7 = &local_68;
      local_68 = 0;
      uStack_60 = 0;
      uVar6 = 7;
    }
    FUN_140c236f0(1,uVar6,puVar7);
  }
LAB_140bc20e1:
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 140bc2130 FUN_140bc2130 body=51 status=ok
// SIG undefined FUN_140bc2130(void)

void FUN_140bc2130(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)*param_2 + 0x20))();
  if (cVar1 != '\0') {
    FUN_140bcd700(param_1,param_2);
  }
  return;
}



// FUNCTION 140bc2170 FUN_140bc2170 body=1573 status=ok
// SIG undefined FUN_140bc2170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bc2170(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_2a8 [32];
  undefined1 *local_288;
  undefined1 local_280;
  undefined4 *local_278;
  ulonglong *puStack_270;
  undefined1 local_268 [8];
  undefined1 local_260 [8];
  undefined1 local_258 [8];
  undefined1 local_250 [8];
  undefined1 local_248 [8];
  undefined8 local_240;
  undefined1 local_238 [8];
  undefined8 local_230;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined **local_1a8;
  undefined1 local_1a0 [24];
  undefined1 local_188 [24];
  undefined **local_170;
  undefined1 local_168 [24];
  undefined1 local_150 [24];
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  local_210 = *param_2;
  local_208 = param_2[1];
  if (local_208 != 0) {
    LOCK();
    *(int *)(local_208 + 8) = *(int *)(local_208 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FUN_14244c070(param_1,&local_210);
  puVar7 = (undefined8 *)FName::FName(local_1f0,L"GbxShiftOverlay",1);
  plVar8 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar7);
  if ((plVar8 != (longlong *)0x0) &&
     (cVar5 = (**(code **)(*plVar8 + 0x50))(plVar8,uVar6), cVar5 != '\0')) {
    return;
  }
  if (param_4 == 0) {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a8,L"The target user has been unblocked on the SHiFT network.",
                       L"OakGameInstance",L"UnblockUserSuccess_Description");
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_c0,L"User Unblocked",L"OakGameInstance",L"UnblockUserSuccess");
    local_170 = &PTR_FUN_1443170a0;
    FText::FText(local_168,uVar10);
    FText::FText(local_150,uVar6);
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_b8 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_a0 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    FWeakObjectPtr::operator=(local_258,0);
    FWeakObjectPtr::operator=(local_250,0);
    FWeakObjectPtr::operator=(local_238,0);
    local_280 = 2;
    local_230 = 0;
    local_288 = local_258;
    FUN_140c23780(1,&local_170,local_238,local_250);
    FUN_140bc0a50(param_1,param_3,0);
    FUN_140b9cdd0(&local_170);
  }
  else {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_1c0,L"An error occurred when attempting to unblock a user: {0}",
               L"OakGameInstance",L"UnblockUserError_Base");
    FText::FText(local_228);
    if (param_4 == 2) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_108,L"The target user is already unblocked.",L"OakGameInstance",
                         L"UnblockUserError_AlreadyFriends");
      FText::operator=(local_228,uVar6);
    }
    else if (param_4 == 6) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_120,L"The SHiFT network is currently unavailable.",L"OakGameInstance"
                         ,L"UnblockUserError_MissingBackendService");
      FText::operator=(local_228,uVar6);
      local_100 = local_118;
    }
    else {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_138,L"Unknown reason.",L"OakGameInstance",
                         L"UnblockUserError_UnknownReason");
      FText::operator=(local_228,uVar6);
      local_100 = local_130;
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_100 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
    lVar9 = FText::FText(local_80,local_228);
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_90,local_1c0);
    local_68[0] = 4;
    FText::FText(local_58,lVar9);
    local_200 = *puVar7;
    local_278 = local_68;
    puStack_270 = local_38;
    local_1f8 = puVar7[1];
    local_40 = '\x01';
    if (local_1f8 != 0) {
      LOCK();
      *(int *)(local_1f8 + 8) = *(int *)(local_1f8 + 8) + 1;
      UNLOCK();
    }
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_1e8,&local_278);
    uVar6 = FText::Format(local_f0,&local_200,uVar6);
    FText::FText(local_1d8,uVar6);
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_e8 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)local_e8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1e8);
    if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_50 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    plVar8 = (longlong *)puVar7[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    plVar8 = *(longlong **)(lVar9 + 8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d8,L"Error Unblocking User",L"OakGameInstance",L"UnblockUserError");
    local_1a8 = &PTR_FUN_1443170a0;
    FText::FText(local_1a0,uVar6);
    FText::FText(local_188,local_1d8);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_d0 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1d0 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar1 = (int *)((longlong)local_1d0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
    FWeakObjectPtr::operator=(local_268,0);
    FWeakObjectPtr::operator=(local_260,0);
    FWeakObjectPtr::operator=(local_248,0);
    local_280 = 2;
    local_240 = 0;
    local_288 = local_268;
    FUN_140c23780(2,&local_1a8,local_248,local_260);
    FUN_140b9cdd0(&local_1a8);
    if (local_220 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_220 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_220)(local_220);
        LOCK();
        piVar1 = (int *)((longlong)local_220 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_220 + 8))(local_220,1);
        }
      }
    }
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1b8 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar1 = (int *)((longlong)local_1b8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1b8 + 8))(local_1b8,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bc27a0 FUN_140bc27a0 body=735 status=ok
// SIG undefined FUN_140bc27a0(void)

undefined8 FUN_140bc27a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 local_res10 [8];
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  undefined **local_58 [2];
  longlong *local_48;
  longlong local_40;
  
  puVar8 = (undefined8 *)FName::FName(local_res10,L"SPARK",1);
  FUN_140bbd560(&local_88,*puVar8);
  if (local_88 != 0) {
    plVar11 = *(longlong **)(param_1 + 0x38);
    plVar4 = plVar11 + *(int *)(param_1 + 0x40);
    for (; plVar11 != plVar4; plVar11 = plVar11 + 1) {
      if (*plVar11 != 0) {
        lVar9 = FUN_142547b50(*plVar11,local_58);
        plVar6 = *(longlong **)(lVar9 + 0x10);
        lVar9 = *(longlong *)(lVar9 + 8);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        local_58[0] = &PTR_FUN_143f740c8;
        if (local_40 != 0) {
          FMemory::Free();
        }
        plVar3 = local_48;
        local_58[0] = &PTR_FUN_143f73d18;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_48)(local_48);
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
        if (lVar9 != 0) {
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          local_78 = lVar9;
          local_70 = plVar6;
          lVar9 = FUN_142b45e90();
          FUN_142b4a990(*(undefined8 *)(lVar9 + 0x18),&local_68,&local_78);
          plVar3 = local_70;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_70 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_70)(local_70);
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
          plVar3 = local_60;
          if ((local_68 != 0) && (*(char *)(local_68 + 600) == '\0')) {
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_60 + 1;
              lVar9 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_60)(local_60);
                LOCK();
                piVar2 = (int *)((longlong)local_60 + 0xc);
                iVar5 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*local_60 + 8))(local_60,1);
                }
              }
            }
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar6 + 1;
              lVar9 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
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
            uVar10 = 0;
            goto LAB_140bc2999;
          }
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_60 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_60)(local_60);
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
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar6 + 1;
          lVar9 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
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
      }
    }
  }
  uVar10 = 1;
LAB_140bc2999:
  plVar4 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_80 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return uVar10;
}



// FUNCTION 140bc2a80 FUN_140bc2a80 body=521 status=ok
// SIG undefined FUN_140bc2a80(void)

undefined1 FUN_140bc2a80(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined **local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  cVar5 = FUN_140bca7d0(param_1,&local_58);
  if (cVar5 == '\0') {
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((lVar6 != 0) && ((*(uint *)(lVar6 + 0x830) >> 2 & 1) != 0)) {
      lVar6 = FUN_140bb7f10(param_1,param_2);
      if (lVar6 == 0) {
        return 0;
      }
      return *(undefined1 *)(lVar6 + 0x5c);
    }
    lVar6 = FUN_140b96130(param_1,param_2);
    if (lVar6 == 0) {
      return 0;
    }
    bVar9 = *(longlong *)(lVar6 + 0x570) == 0;
  }
  else {
    lVar6 = (**(code **)(*param_1 + 0x148))();
    if ((lVar6 == 0) || ((*(uint *)(lVar6 + 0x830) >> 2 & 1) == 0)) {
      local_48 = *param_2;
      local_40 = param_2[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      lVar6 = FUN_14244c070(param_1,&local_48);
      if (lVar6 == 0) {
        return 0;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
      if (lVar6 == 0) {
        return 0;
      }
      lVar8 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (!bVar9) {
        return 0;
      }
      bVar9 = *(longlong *)(lVar6 + 0xa58) == 0;
    }
    else {
      local_30 = *param_2;
      local_28 = (longlong *)param_2[1];
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      local_20 = 0;
      local_18 = 0;
      local_38 = &PTR_FUN_143f740c8;
      uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar6 = FUN_140c125c0(&local_38,uVar7);
      local_38 = &PTR_FUN_143f740c8;
      if (local_20 != 0) {
        FMemory::Free();
      }
      plVar4 = local_28;
      local_38 = &PTR_FUN_143f73d18;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_28)(local_28);
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
      if (lVar6 == 0) {
        return 0;
      }
      lVar6 = FUN_140d3b710(lVar6);
      bVar9 = lVar6 == 0;
    }
  }
  if (bVar9) {
    return 0;
  }
  return 1;
}



// FUNCTION 140bc2c90 FUN_140bc2c90 body=269 status=ok
// SIG undefined FUN_140bc2c90(void)

bool FUN_140bc2c90(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((lVar2 == 0) || ((*(uint *)(lVar2 + 0x830) >> 2 & 1) == 0)) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_140bb7680(param_1,&local_28);
    puVar4 = local_28 + (longlong)(int)local_20 * 2;
    for (puVar3 = local_28; puVar3 != puVar4; puVar3 = puVar3 + 2) {
      local_18 = *puVar3;
      local_10 = puVar3[1];
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
      }
      lVar2 = FUN_14244c070(param_1,&local_18);
      if (lVar2 == 0) {
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_28);
        return true;
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_28);
  }
  else {
    lVar2 = FUN_140bb7870(param_1);
    if ((lVar2 != 0) || (lVar2 = FUN_140bb6170(param_1), lVar2 != 0)) {
      iVar1 = FUN_1404cfb00(lVar2);
      return 0 < iVar1;
    }
  }
  return false;
}



// FUNCTION 140bc2da0 FUN_140bc2da0 body=148 status=ok
// SIG undefined FUN_140bc2da0(void)

undefined4 FUN_140bc2da0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = UGameInstance::GetGameViewportClient();
  if ((lVar4 != 0) && (iVar2 = FUN_14046e5c0(param_1), iVar2 == *(int *)(lVar4 + 0x78))) {
    return 0;
  }
  plVar5 = (longlong *)FUN_141424bc0();
  lVar4 = plVar5[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    lVar4 = plVar5[0x1f];
  }
  iVar2 = FUN_142480900(lVar4);
  iVar3 = FUN_140bba270(param_1);
  if (iVar3 == iVar2) {
    return 0;
  }
  lVar4 = FUN_140bb7900(param_1);
  if ((lVar4 != 0) && (cVar1 = FUN_1404d5760(lVar4), cVar1 != '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 140bc2e40 FUN_140bc2e40 body=208 status=ok
// SIG undefined FUN_140bc2e40(void)

bool FUN_140bc2e40(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if ((*(char *)(param_1 + 0x458) != '\0') || (*(char *)(param_1 + 0xb18) == '\0')) {
    return 0 < *(int *)(param_1 + 0x428);
  }
  lVar3 = *(longlong *)(param_1 + 0x420);
  iVar4 = 0;
  lVar5 = (longlong)*(int *)(param_1 + 0x428) * 0xe8 + lVar3;
  do {
    if (lVar3 == lVar5) {
      return 0 < iVar4;
    }
    plVar2 = *(longlong **)(lVar3 + 0x10);
    if (plVar2 == (longlong *)0x0) {
LAB_140bc2ed0:
      iVar4 = iVar4 + 1;
    }
    else {
      plVar1 = (longlong *)FName::FName(local_res8,L"SPARK",1);
      plVar2 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,local_res10);
      if (*plVar2 != *plVar1) goto LAB_140bc2ed0;
    }
    lVar3 = lVar3 + 0xe8;
  } while( true );
}



// FUNCTION 140bc2f10 FUN_140bc2f10 body=145 status=ok
// SIG undefined FUN_140bc2f10(void)

void FUN_140bc2f10(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14244f490(param_1,0);
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
    if (bVar1) goto LAB_140bc2f64;
  }
  lVar2 = 0;
LAB_140bc2f64:
  if (((*(longlong *)(param_1 + 0xfd0) != 0) && (lVar2 != 0)) &&
     (*(longlong *)(lVar2 + 0x1428) != 0)) {
    FUN_1411e79a0(*(longlong *)(lVar2 + 0x1428),*(undefined8 *)(param_1 + 0xfd0));
    *(undefined8 *)(param_1 + 0xfd0) = 0;
  }
  return;
}



// FUNCTION 140bc2fb0 FUN_140bc2fb0 body=1651 status=ok
// SIG undefined FUN_140bc2fb0(void)

void FUN_140bc2fb0(longlong *param_1,char param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  bool bVar22;
  longlong local_res20;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  void *local_110;
  int local_108;
  longlong *local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8 [2];
  undefined1 local_d8 [24];
  longlong local_c0;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  lVar18 = (longlong)(int)param_1[0xb9];
  uVar13 = 0;
  local_f0 = param_1 + 0xb8;
  if ((int)param_1[0xb9] != 0) {
    bVar22 = *(longlong *)param_1[0xb8] != 0;
    uVar16 = uVar13;
    uVar20 = uVar13;
    do {
      iVar5 = (int)uVar16;
      uVar13 = uVar13 + 1;
      uVar16 = (ulonglong)(iVar5 + 1);
      if ((longlong)uVar13 < lVar18) {
        do {
          if (bVar22 != (*(longlong *)(param_1[0xb8] + uVar13 * 8) != 0)) break;
          uVar16 = (ulonglong)((int)uVar16 + 1);
          uVar13 = uVar13 + 1;
        } while ((longlong)uVar13 < lVar18);
      }
      iVar21 = (int)uVar16 - iVar5;
      if (bVar22 != false) {
        iVar19 = (int)uVar20;
        if (iVar19 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_1[0xb8] + (longlong)iVar19 * 8),
                     (void *)(param_1[0xb8] + (longlong)iVar5 * 8),(longlong)iVar21 << 3);
        }
        uVar20 = (ulonglong)(uint)(iVar19 + iVar21);
      }
      bVar22 = (bool)(bVar22 ^ 1);
    } while ((longlong)uVar13 < lVar18);
    *(int *)(param_1 + 0xb9) = (int)uVar20;
  }
  lVar18 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar18 != 0) &&
     ((lVar6 = (**(code **)(*param_1 + 0x148))(param_1), lVar6 == 0 ||
      ((*(uint *)(lVar6 + 0x830) >> 2 & 1) == 0)))) {
    FUN_140baab60(param_1 + 7);
    bVar22 = false;
    bVar3 = false;
    UWorld::GetPlayerControllerIterator(lVar18,&local_110);
    while( true ) {
      if ((local_108 < 0) || (*(int *)((longlong)local_110 + 8) <= local_108)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) break;
      plVar7 = (longlong *)FWeakObjectPtr::Get();
      local_100 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        lVar18 = FUN_14145f370();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar18 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar18 + 0x90) * 8)
            != lVar18 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar18 = 0;
          local_res20 = 0;
          cVar4 = (**(code **)(*plVar7 + 0x768))(plVar7);
          if (((cVar4 != '\0') && (local_res20 = FUN_142eeb890(plVar7), local_res20 != 0)) &&
             (*(longlong *)(local_res20 + 0x18) != DAT_14686a638)) {
            local_res20 = lVar18;
          }
          lVar6 = (**(code **)(plVar7[0x130] + 0x10))();
          local_f8 = lVar6;
          if (lVar6 != 0) {
            lVar8 = FUN_1414d9130();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              cVar4 = (**(code **)(*plVar7 + 0x768))(plVar7);
              if ((cVar4 != '\0') && (!bVar22)) {
                lVar14 = *(longlong *)(lVar6 + 0x180);
                local_138 = 0;
                local_130 = 0;
                lVar8 = lVar14 + (longlong)*(int *)(lVar6 + 0x188) * 0x28;
                if (lVar14 != lVar8) {
                  do {
                    lVar9 = FWeakObjectPtr::Get(lVar14);
                    if (lVar9 == 0) {
                      LOCK();
                      if (DAT_1464b56f4 == 0) {
                        DAT_1464b56f4 = 0;
                      }
                      UNLOCK();
                      if ((DAT_1464b56f4 != *(int *)(lVar14 + 8)) &&
                         (local_128 = 0, *(longlong *)(lVar14 + 0x10) != 0)) {
                        lVar18 = FUN_141796df0();
                        FWeakObjectPtr::operator=(lVar14,lVar18);
                        if ((lVar18 != 0) || (DAT_1469e7e10 == '\0')) {
                          LOCK();
                          if (DAT_1464b56f4 == 0) {
                            DAT_1464b56f4 = 0;
                          }
                          UNLOCK();
                          *(int *)(lVar14 + 8) = DAT_1464b56f4;
                        }
                        lVar9 = FWeakObjectPtr::Get(lVar14);
                        lVar18 = local_138;
                        if (lVar9 != 0) goto LAB_140bc32d4;
                      }
                      local_120 = 0;
                      lVar18 = local_138;
                      if (*(longlong *)(lVar14 + 0x10) == 0) goto LAB_140bc32d4;
                      bVar22 = true;
                    }
                    else {
LAB_140bc32d4:
                      bVar22 = false;
                    }
                    uVar13 = local_130;
                    if (bVar22) {
                      lVar9 = (longlong)(int)local_130;
                      iVar5 = (int)local_130 + 1;
                      local_130 = CONCAT44(local_130._4_4_,iVar5);
                      if (local_130._4_4_ < iVar5) {
                        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow
                                  (&local_138,uVar13 & 0xffffffff);
                        lVar18 = local_138;
                      }
                      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar18 + lVar9 * 0x28,lVar14);
                    }
                    lVar14 = lVar14 + 0x28;
                  } while (lVar14 != lVar8);
                  if (0 < (int)local_130) {
                    lVar8 = lVar18 + (longlong)(int)local_130 * 0x28;
                    lVar14 = lVar18;
                    for (; lVar14 != lVar8; lVar14 = lVar14 + 0x28) {
                      FWeakObjectPtr::operator=(&local_118,param_1);
                      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_d8,lVar14);
                      local_b0 = local_118;
                      local_ac = local_114;
                      local_68 = 0;
                      local_58 = 0;
                      puVar10 = (undefined8 *)FUN_140438ef0(0x38,local_88);
                      if (puVar10 != (undefined8 *)0x0) {
                        *puVar10 = &PTR_FUN_1443187d8;
                        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(puVar10 + 1,local_d8);
                        *(undefined4 *)(puVar10 + 6) = local_b0;
                        *(undefined4 *)((longlong)puVar10 + 0x34) = local_ac;
                      }
                      local_98[0] = &LAB_140ba56b0;
                      FSoftObjectPath::ToString(lVar14 + 0x10,local_e8);
                      FUN_142046c50(local_a8,lVar14 + 0x10,local_e8,local_98);
                      plVar7 = local_a0;
                      if (local_a0 != (longlong *)0x0) {
                        LOCK();
                        plVar15 = local_a0 + 1;
                        lVar18 = *plVar15;
                        *(int *)plVar15 = (int)*plVar15 + -1;
                        UNLOCK();
                        if ((int)lVar18 == 1) {
                          (**(code **)*local_a0)(local_a0);
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
                      if (local_e8[0] != 0) {
                        FMemory::Free();
                      }
                      if (local_c0 != 0) {
                        FMemory::Free();
                      }
                      plVar7 = local_100;
                      lVar6 = local_f8;
                      lVar18 = local_138;
                    }
                  }
                }
                bVar22 = true;
                bVar3 = true;
                if ((int)local_130 != 0) {
                  plVar15 = (longlong *)(lVar18 + 0x18);
                  iVar5 = (int)local_130;
                  do {
                    if (*plVar15 != 0) {
                      FMemory::Free();
                    }
                    plVar15 = plVar15 + 5;
                    iVar5 = iVar5 + -1;
                  } while (iVar5 != 0);
                }
                if (lVar18 != 0) {
                  FMemory::Free(lVar18);
                }
              }
              cVar4 = FUN_142ee1fd0();
              if (((cVar4 != '\0') &&
                  (cVar4 = (**(code **)(*plVar7 + 0x768))(plVar7), cVar4 != '\0')) &&
                 (lVar18 = (**(code **)(*plVar7 + 0xfa8))(plVar7), plVar15 = local_f0, lVar18 != 0))
              {
                puVar17 = *(undefined8 **)(lVar6 + 0x170);
                puVar10 = puVar17 + *(int *)(lVar6 + 0x178);
                for (; puVar17 != puVar10; puVar17 = puVar17 + 1) {
                  uVar12 = *puVar17;
                  uVar11 = (**(code **)(*plVar7 + 0xfa8))(plVar7);
                  lVar18 = FUN_142f02280(uVar11,uVar12);
                  if (lVar18 != 0) {
                    lVar6 = UInputKeySelector::GetPrivateStaticClass();
                    if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                      bVar22 = false;
                    }
                    else {
                      bVar22 = true;
                    }
                    if (bVar22) {
                      iVar5 = (int)plVar15[1];
                      *(int *)(plVar15 + 1) = iVar5 + 1;
                      if (*(int *)((longlong)plVar15 + 0xc) < iVar5 + 1) {
                        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                  (plVar15,iVar5);
                      }
                      *(longlong *)(*plVar15 + (longlong)iVar5 * 8) = lVar18;
                      uVar12 = (**(code **)(*plVar7 + 0xfa8))(plVar7);
                      FUN_142f001d0(uVar12);
                    }
                  }
                  bVar22 = bVar3;
                }
              }
            }
          }
          FUN_142ee4240();
          if (local_res20 != 0) {
            FUN_142f02570(plVar7,local_res20);
          }
        }
      }
      local_108 = local_108 + 1;
    }
  }
  if ((param_2 != '\0') && (cVar4 = FUN_1411ea8f0(param_1 + 0xf4), cVar4 != '\0')) {
    FUN_1411fd0c0(param_1 + 0xf4,1,0);
  }
  FUN_1411e7960(param_1 + 0xf4);
  FUN_140ba81c0(param_1);
  return;
}



// FUNCTION 140bc3630 FUN_140bc3630 body=135 status=ok
// SIG undefined FUN_140bc3630(void)

void FUN_140bc3630(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0xfc8) != 0) && (lVar2 = FUN_14244f490(param_1,0), lVar2 != 0)) {
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
    if ((bVar1) && (*(longlong *)(lVar2 + 0x1428) != 0)) {
      FUN_1411e79a0(*(longlong *)(lVar2 + 0x1428),*(undefined8 *)(param_1 + 0xfc8));
      *(undefined8 *)(param_1 + 0xfc8) = 0;
    }
  }
  return;
}



// FUNCTION 140bc36c0 FUN_140bc36c0 body=10353 status=ok
// SIG undefined FUN_140bc36c0(void)

void FUN_140bc36c0(longlong *param_1)

{
  int *piVar1;
  wchar_t **ppwVar2;
  void *_Src;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  undefined8 uVar11;
  wchar_t *pwVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  wchar_t *pwVar16;
  undefined4 uStack_6cc;
  longlong *local_6c8;
  int local_6c0;
  longlong *local_6b8;
  int local_6b0;
  longlong *local_6a8;
  int local_6a0;
  longlong *local_698;
  int local_690;
  longlong *local_688;
  int local_680;
  longlong *local_678;
  int local_670;
  longlong *local_668;
  int local_660;
  longlong *local_658;
  int local_650;
  longlong *local_648;
  int local_640;
  undefined8 local_638;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  wchar_t *local_628;
  longlong *local_620;
  longlong local_618;
  int local_610;
  wchar_t *local_608;
  wchar_t *local_600;
  longlong local_5f8;
  int local_5f0;
  longlong local_5e8;
  int local_5e0;
  longlong local_5d8;
  int local_5d0;
  longlong local_5c8;
  int local_5c0;
  longlong local_5b8;
  int local_5b0;
  longlong local_5a8;
  int local_5a0;
  wchar_t *local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined4 local_560;
  undefined4 local_55c;
  undefined8 local_558;
  undefined8 local_550;
  wchar_t *local_548;
  undefined8 local_540;
  undefined4 local_538;
  undefined8 local_530;
  undefined4 local_528;
  undefined8 local_520;
  undefined4 local_518;
  undefined8 local_510;
  undefined4 local_508;
  undefined8 local_500;
  undefined4 local_4f8;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined8 local_4e0;
  undefined4 local_4d8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined8 local_490;
  undefined4 local_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined8 local_470;
  undefined4 local_468;
  undefined8 local_460;
  undefined4 local_458;
  undefined8 local_450;
  undefined4 local_448;
  undefined8 local_440;
  undefined4 local_438;
  undefined8 local_430;
  undefined4 local_428;
  undefined8 local_420;
  undefined4 local_418;
  undefined8 local_410;
  undefined4 local_408;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  longlong local_3b0;
  longlong *local_3a8 [2];
  longlong *local_398 [2];
  longlong *local_388 [2];
  longlong *local_378 [2];
  longlong *local_368 [2];
  longlong *local_358 [2];
  longlong *local_348 [2];
  longlong *local_338 [2];
  longlong *local_328 [2];
  undefined1 local_318 [8];
  undefined1 local_310 [8];
  undefined1 local_308 [8];
  undefined1 local_300 [8];
  undefined1 local_2f8 [8];
  undefined1 local_2f0 [8];
  undefined1 local_2e8 [8];
  undefined1 local_2e0 [8];
  undefined1 local_2d8 [8];
  undefined1 local_2d0 [8];
  undefined1 local_2c8 [8];
  undefined1 local_2c0 [8];
  undefined1 local_2b8 [8];
  undefined1 local_2b0 [8];
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [8];
  undefined1 local_298 [8];
  undefined1 local_290 [8];
  undefined1 local_288 [8];
  undefined1 local_280 [8];
  undefined1 local_278 [8];
  undefined1 local_270 [8];
  undefined1 local_268 [8];
  undefined1 local_260 [8];
  undefined1 local_258 [8];
  undefined1 local_250 [8];
  undefined1 local_248 [8];
  undefined1 local_240 [8];
  undefined1 local_238 [8];
  undefined1 local_230 [8];
  undefined1 local_228 [8];
  undefined1 local_220 [8];
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  undefined1 local_208 [8];
  undefined1 local_200 [8];
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined1 local_178 [16];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined1 local_158 [16];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined1 local_138 [16];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 local_118 [16];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 local_e8 [16];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  longlong *local_58;
  
  FUN_142d62cc0();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  pwVar16 = (wchar_t *)0x0;
  uVar5 = FUN_1414778f0();
  plVar6 = (longlong *)FUN_1417985e0(uVar5,param_1,0,0,0,0,0,0,0);
  param_1[0x3f] = (longlong)plVar6;
  lVar7 = *plVar6;
  uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  (**(code **)(lVar7 + 0x278))(param_1[0x3f],uVar5);
  if ((char)param_1[0x1f1] != '\0') {
    uStack_630 = 0;
    local_638 = FUN_140bf12f0;
    local_6a8 = (longlong *)0x0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_6a0 = 3;
    local_6a8 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)IDelegateInstance::vftable;
      *plVar6 = (longlong)&PTR_FUN_1443187f0;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = (undefined4)local_638;
      *(undefined4 *)((longlong)plVar6 + 0x14) = local_638._4_4_;
      *(undefined4 *)(plVar6 + 3) = uStack_630;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_62c;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar7;
    }
    uVar5 = FUN_14164ab60();
    FUN_14158f860(uVar5,local_300,&local_6a8,L"UOakGameInstance_TickIdleConnections",
                  *(undefined4 *)((longlong)param_1 + 0xf9c));
    if (local_6a0 != 0) {
      if (local_6a8 == (longlong *)0x0) goto LAB_140bc3839;
      (**(code **)(*local_6a8 + 0x28))(local_6a8,0);
      if (local_6a8 != (longlong *)0x0) {
        local_6a8 = (longlong *)FMemory::Realloc(local_6a8,0,0);
      }
      local_6a0 = 0;
    }
    if (local_6a8 != (longlong *)0x0) {
      FMemory::Free(local_6a8);
    }
  }
LAB_140bc3839:
  lVar7 = FUN_140cb5ff0();
  if (lVar7 == 0) {
    lVar7 = operator_new(0xd8);
    pwVar8 = pwVar16;
    if (lVar7 != 0) {
      pwVar8 = (wchar_t *)FUN_140c63410(lVar7);
    }
    pwVar9 = (wchar_t *)operator_new(0x18);
    local_548 = pwVar16;
    if (pwVar9 != (wchar_t *)0x0) {
      pwVar9[4] = L'\x01';
      pwVar9[5] = L'\0';
      *(undefined ***)pwVar9 = &PTR_FUN_143f3f2e0;
      pwVar9[6] = L'\x01';
      pwVar9[7] = L'\0';
      *(wchar_t **)(pwVar9 + 8) = pwVar8;
      local_548 = pwVar9;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_550,pwVar8,pwVar8);
    local_550 = 0;
    DAT_14686caa0 = pwVar8;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_14686caa8,&local_548);
    pwVar8 = local_548;
    if (local_548 != (wchar_t *)0x0) {
      LOCK();
      pwVar9 = local_548 + 4;
      iVar4 = *(int *)pwVar9;
      *(int *)pwVar9 = *(int *)pwVar9 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (*(code *)**(undefined8 **)local_548)(local_548);
        LOCK();
        pwVar9 = pwVar8 + 6;
        iVar4 = *(int *)pwVar9;
        *(int *)pwVar9 = *(int *)pwVar9 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*(longlong *)pwVar8 + 8))(pwVar8,1);
        }
      }
    }
    uVar5 = FUN_140cb5ff0();
    FUN_140cbad20(uVar5,param_1,1);
  }
  DAT_1462a155c = 1;
  DAT_1462a0878 = 1;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  plVar6 = param_1 + 0x157;
  if (plVar6 != (longlong *)(DAT_146b33f38 + 0xf0)) {
    iVar4 = *(int *)(DAT_146b33f38 + 0xf8);
    _Src = *(void **)(DAT_146b33f38 + 0xf0);
    *(int *)(param_1 + 0x158) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0xac4) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xac4) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar6,iVar4);
      _guard_xfg_dispatch_icall_nop((void *)*plVar6,_Src,(longlong)iVar4 << 3);
    }
  }
  if (param_1[0x23e] == 0) {
    lVar7 = FUN_140db7950();
    param_1[0x23e] = lVar7;
  }
  FUN_140dc08b0();
  FUN_140bc6c30(param_1);
  FUN_1411e8250(param_1 + 0xf4,param_1);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if ((DAT_1469f4590 != 0) && (*(longlong *)(DAT_146b33f38 + 0x90) != 0)) {
    lVar7 = FUN_142ee6f80(param_1);
    param_1[0xb5] = lVar7;
    if (lVar7 != 0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&UOakGameInstance::OnHandleUnpairedMenuInput",L"::");
      pwVar8 = pwVar16;
      while (pwVar12 = pwVar9, pwVar12 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar12 + 1,L"::");
        pwVar8 = pwVar12;
      }
      FName::FName(&local_3b0,pwVar8 + 2,1);
      lVar7 = param_1[0xb5];
      FWeakObjectPtr::operator=(lVar7 + 0x28,param_1);
      *(longlong *)(lVar7 + 0x30) = local_3b0;
      if ((local_3b0 != 0) && (lVar10 = FWeakObjectPtr::Get(lVar7 + 0x28), lVar10 != 0)) {
        UObject::FindFunction(lVar10,*(undefined8 *)(lVar7 + 0x30));
      }
      local_198 = 0x40be1580;
      uStack_194 = 1;
      uStack_190 = 0;
      FUN_140b94360(param_1[0xb5] + 0x38,param_1,&local_198);
    }
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar5 = ULowEntryLatentActionObject::GetPrivateStaticClass();
    lVar7 = FUN_1417985e0(uVar5,param_1,0,0,0,0,0,0,0);
    param_1[0xb6] = lVar7;
    if (lVar7 != 0) {
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar7);
    }
  }
  uVar5 = GetTransientPackage();
  FUN_1417846f0(uVar5,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar11 = FUN_141386e20();
  lVar7 = FUN_1417985e0(uVar11,uVar5,0,0,0,0,0,0,0);
  param_1[0xb7] = lVar7;
  if (lVar7 != 0) {
    FUN_140ff9800(lVar7,100,param_1);
  }
  pwVar9 = (wchar_t *)operator_new(0x308);
  pwVar8 = pwVar16;
  if (pwVar9 != (wchar_t *)0x0) {
    _guard_xfg_dispatch_icall_nop(pwVar9,0,0x308);
    FUN_1404bdb30(pwVar9);
    *(undefined ***)pwVar9 = &PTR_FUN_144316cc8;
    pwVar9[0x130] = L'\0';
    pwVar9[0x131] = L'\0';
    pwVar9[0x132] = L'\0';
    pwVar9[0x133] = L'\0';
    pwVar9[0x134] = L'\0';
    pwVar9[0x135] = L'\0';
    pwVar9[0x136] = L'\0';
    pwVar9[0x137] = L'\0';
    pwVar9[0x138] = L'\x02';
    pwVar9[0x139] = L'\0';
    pwVar9[0x13a] = L'\0';
    pwVar9[0x13b] = L'\0';
    pwVar9[0x13c] = L'\0';
    pwVar9[0x13d] = L'\0';
    pwVar9[0x13e] = L'\0';
    pwVar9[0x13f] = L'\0';
    pwVar9[0x140] = L'\0';
    pwVar9[0x141] = L'\0';
    pwVar9[0x142] = L'\0';
    pwVar9[0x143] = L'\0';
    pwVar9[0x144] = L'\x02';
    pwVar9[0x145] = L'\0';
    pwVar9[0x146] = L'\0';
    pwVar9[0x147] = L'\0';
    pwVar9[0x148] = L'\0';
    pwVar9[0x149] = L'\0';
    pwVar9[0x14a] = L'\0';
    pwVar9[0x14b] = L'\0';
    pwVar9[0x14c] = L'\0';
    pwVar9[0x14d] = L'\0';
    pwVar9[0x14e] = L'\0';
    pwVar9[0x14f] = L'\0';
    pwVar9[0x150] = L'\x02';
    pwVar9[0x151] = L'\0';
    pwVar9[0x152] = L'\0';
    pwVar9[0x153] = L'\0';
    pwVar9[0x154] = L'\0';
    pwVar9[0x155] = L'\0';
    pwVar9[0x156] = L'\0';
    pwVar9[0x157] = L'\0';
    pwVar9[0x158] = L'\0';
    pwVar9[0x159] = L'\0';
    pwVar9[0x15a] = L'\0';
    pwVar9[0x15b] = L'\0';
    pwVar9[0x15c] = L'\x02';
    pwVar9[0x15d] = L'\0';
    pwVar9[0x15e] = L'\0';
    pwVar9[0x15f] = L'\0';
    pwVar9[0x160] = L'\0';
    pwVar9[0x161] = L'\0';
    pwVar9[0x162] = L'\0';
    pwVar9[0x163] = L'\0';
    pwVar9[0x164] = L'\0';
    pwVar9[0x165] = L'\0';
    pwVar9[0x166] = L'\0';
    pwVar9[0x167] = L'\0';
    pwVar9[0x168] = L'\x02';
    pwVar9[0x169] = L'\0';
    pwVar9[0x16a] = L'\0';
    pwVar9[0x16b] = L'\0';
    pwVar9[0x16c] = L'\0';
    pwVar9[0x16d] = L'\0';
    pwVar9[0x16e] = L'\0';
    pwVar9[0x16f] = L'\0';
    pwVar9[0x170] = L'\0';
    pwVar9[0x171] = L'\0';
    pwVar9[0x172] = L'\0';
    pwVar9[0x173] = L'\0';
    pwVar9[0x174] = L'\x02';
    pwVar9[0x175] = L'\0';
    pwVar9[0x176] = L'\0';
    pwVar9[0x177] = L'\0';
    pwVar9[0x178] = L'\0';
    pwVar9[0x179] = L'\0';
    pwVar9[0x17a] = L'\0';
    pwVar9[0x17b] = L'\0';
    pwVar9[0x17c] = L'\0';
    pwVar9[0x17d] = L'\0';
    pwVar9[0x17e] = L'\0';
    pwVar9[0x17f] = L'\0';
    pwVar9[0x180] = L'\x02';
    pwVar9[0x181] = L'\0';
    pwVar9[0x182] = L'\0';
    pwVar9[0x183] = L'\0';
    pwVar8 = pwVar9;
  }
  param_1[0x15d] = (longlong)pwVar8;
  if (pwVar8 != (wchar_t *)0x0) {
    FUN_1404d32a0(pwVar8,param_1);
  }
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_558 = 0;
  uVar5 = FUN_1430a7e70();
  lVar7 = FUN_1417985e0(uVar5,param_1,0,0,0,0,0,0,0);
  param_1[0x34] = lVar7;
  lVar7 = operator_new(0x300);
  pwVar8 = pwVar16;
  if (lVar7 != 0) {
    pwVar8 = (wchar_t *)FUN_140d62ca0(lVar7,param_1);
  }
  pwVar12 = (wchar_t *)operator_new(0x18);
  pwVar9 = pwVar16;
  if (pwVar12 != (wchar_t *)0x0) {
    pwVar12[4] = L'\x01';
    pwVar12[5] = L'\0';
    pwVar12[6] = L'\x01';
    pwVar12[7] = L'\0';
    *(undefined ***)pwVar12 = &PTR_FUN_144319b00;
    *(wchar_t **)(pwVar12 + 8) = pwVar8;
    pwVar9 = pwVar12;
  }
  local_608 = pwVar8;
  local_600 = pwVar9;
  SharedPointerInternals::EnableSharedFromThis(&local_608,pwVar8,pwVar8);
  if ((wchar_t **)(param_1 + 0x8f) != &local_608) {
    param_1[0x8f] = (longlong)pwVar8;
    local_608 = (wchar_t *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x90,&local_600);
    pwVar9 = local_600;
  }
  if (pwVar9 != (wchar_t *)0x0) {
    LOCK();
    pwVar8 = pwVar9 + 4;
    iVar4 = *(int *)pwVar8;
    *(int *)pwVar8 = *(int *)pwVar8 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (*(code *)**(undefined8 **)pwVar9)(pwVar9);
      LOCK();
      pwVar8 = pwVar9 + 6;
      iVar4 = *(int *)pwVar8;
      *(int *)pwVar8 = *(int *)pwVar8 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*(longlong *)pwVar9 + 8))(pwVar9,1);
      }
    }
  }
  uVar5 = FUN_140bb74b0(param_1);
  FUN_140d87250(uVar5);
  if (((char)param_1[0x8b] == '\0') && ((char)param_1[0x163] != '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  uVar11 = FUN_140bb74b0(param_1);
  FUN_140d9fcc0(uVar11,uVar5);
  plVar6 = (longlong *)FUN_140bb74b0(param_1);
  plVar13 = (longlong *)FMemory::Realloc(0,0x30);
  pwVar8 = pwVar16;
  local_58 = plVar13;
  if (plVar13 != (longlong *)0x0) {
    *plVar13 = (longlong)&PTR_FUN_144012f30;
    FWeakObjectPtr::operator=(plVar13 + 1,param_1);
    *(undefined4 *)(plVar13 + 2) = 0x40bd4eb0;
    *(undefined4 *)((longlong)plVar13 + 0x14) = 1;
    *(undefined4 *)(plVar13 + 3) = 0;
    *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_6cc;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar13[5] = lVar7;
    *plVar13 = (longlong)&PTR_FUN_144012f78;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
    plVar14 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13,local_2f8);
    iVar4 = (int)plVar6[1];
    pwVar8 = (wchar_t *)*plVar14;
    *(int *)(plVar6 + 1) = iVar4 + 1;
    if (*(int *)((longlong)plVar6 + 0xc) < iVar4 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar4);
    }
    puVar15 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar6);
    *puVar15 = plVar13;
    *(undefined4 *)(puVar15 + 1) = 3;
  }
  param_1[0x233] = (longlong)pwVar8;
  local_588 = 0;
  FUN_140bbc430(local_328,0);
  if (local_328[0] != (longlong *)0x0) {
    local_698 = (longlong *)0x0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_690 = 3;
    local_698 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)IDelegateInstance::vftable;
      *plVar6 = (longlong)&PTR_FUN_1442cc120;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = 0x40bc1b70;
      *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
      *(undefined4 *)(plVar6 + 3) = 0;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_6cc;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar7;
      *plVar6 = (longlong)&PTR_FUN_1442cc168;
    }
    plVar6 = (longlong *)(**(code **)(*local_328[0] + 0x20))(local_328[0],local_2f0,&local_698);
    param_1[0x234] = *plVar6;
    if (local_690 != 0) {
      if (local_698 == (longlong *)0x0) goto LAB_140bc3fb5;
      (**(code **)(*local_698 + 0x28))(local_698,0);
      if (local_698 != (longlong *)0x0) {
        local_698 = (longlong *)FMemory::Realloc(local_698,0,0);
      }
      local_690 = 0;
    }
    if (local_698 != (longlong *)0x0) {
      FMemory::Free(local_698);
    }
  }
LAB_140bc3fb5:
  local_580 = 0;
  FUN_1404cf890(local_338,0);
  if (local_338[0] != (longlong *)0x0) {
    local_688 = (longlong *)0x0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_680 = 3;
    local_688 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_144318830;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = 0x40bbfcf0;
      *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
      *(undefined4 *)(plVar6 + 3) = 0;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_6cc;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar7;
      *plVar6 = (longlong)&PTR_FUN_144318878;
    }
    (**(code **)(*local_338[0] + 0x80))(local_338[0],local_2e8,&local_688);
    if (local_680 == 0) {
LAB_140bc4095:
      if (local_688 != (longlong *)0x0) {
        FMemory::Free(local_688);
      }
    }
    else if (local_688 != (longlong *)0x0) {
      (**(code **)(*local_688 + 0x28))(local_688,0);
      if (local_688 != (longlong *)0x0) {
        local_688 = (longlong *)FMemory::Realloc(local_688,0,0);
      }
      local_680 = 0;
      goto LAB_140bc4095;
    }
    local_678 = (longlong *)0x0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_670 = 3;
    local_678 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)IDelegateInstance::vftable;
      *plVar6 = (longlong)&PTR_FUN_144318830;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = 0x40bc0c80;
      *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
      *(undefined4 *)(plVar6 + 3) = 0;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_6cc;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar7;
      *plVar6 = (longlong)&PTR_FUN_144318878;
    }
    (**(code **)(*local_338[0] + 0x148))(local_338[0],local_2e0,&local_678);
    if (local_670 == 0) {
LAB_140bc415f:
      if (local_678 != (longlong *)0x0) {
        FMemory::Free(local_678);
      }
    }
    else if (local_678 != (longlong *)0x0) {
      (**(code **)(*local_678 + 0x28))(local_678,0);
      if (local_678 != (longlong *)0x0) {
        local_678 = (longlong *)FMemory::Realloc(local_678,0,0);
      }
      local_670 = 0;
      goto LAB_140bc415f;
    }
    local_668 = (longlong *)0x0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_660 = 3;
    local_668 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)IDelegateInstance::vftable;
      *plVar6 = (longlong)&PTR_FUN_144012f30;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = 0x40bc0780;
      *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
      *(undefined4 *)(plVar6 + 3) = 0;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_6cc;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar7;
      *plVar6 = (longlong)&PTR_FUN_144012f78;
    }
    (**(code **)(*local_338[0] + 0x1c8))(local_338[0],local_2d8,&local_668);
    if (local_660 != 0) {
      if (local_668 == (longlong *)0x0) goto LAB_140bc4236;
      (**(code **)(*local_668 + 0x28))(local_668,0);
      if (local_668 != (longlong *)0x0) {
        local_668 = (longlong *)FMemory::Realloc(local_668,0,0);
      }
      local_660 = 0;
    }
    if (local_668 != (longlong *)0x0) {
      FMemory::Free(local_668);
    }
  }
LAB_140bc4236:
  puVar15 = (undefined8 *)FName::FName(local_2d0,L"SPARK",1);
  FUN_1404cf890(local_348,*puVar15);
  if (local_348[0] != (longlong *)0x0) {
    local_658 = (longlong *)0x0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_650 = 3;
    local_658 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_144318830;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = 0x40bc1ed0;
      *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
      *(undefined4 *)(plVar6 + 3) = 0;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_6cc;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar7;
      *plVar6 = (longlong)&PTR_FUN_144318878;
    }
    (**(code **)(*local_348[0] + 0x80))(local_348[0],local_2c8,&local_658);
    if (local_650 != 0) {
      if (local_658 == (longlong *)0x0) goto LAB_140bc432e;
      (**(code **)(*local_658 + 0x28))(local_658,0);
      if (local_658 != (longlong *)0x0) {
        local_658 = (longlong *)FMemory::Realloc(local_658,0,0);
      }
      local_650 = 0;
    }
    if (local_658 != (longlong *)0x0) {
      FMemory::Free(local_658);
    }
  }
LAB_140bc432e:
  puVar15 = (undefined8 *)FName::FName(local_308,L"SPARK",1);
  FUN_1404d0c50(local_358,*puVar15);
  if (local_358[0] != (longlong *)0x0) {
    local_648 = (longlong *)0x0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_640 = 3;
    local_648 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)IDelegateInstance::vftable;
      *plVar6 = (longlong)&PTR_FUN_1443188c0;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = 0x40bdc1e0;
      *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
      *(undefined4 *)(plVar6 + 3) = 0;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_6cc;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar7;
      *plVar6 = (longlong)&PTR_FUN_144318908;
    }
    (**(code **)(*local_358[0] + 0x228))(local_358[0],local_2c0,&local_648);
    if (local_640 == 0) {
LAB_140bc4423:
      if (local_648 != (longlong *)0x0) {
        FMemory::Free(local_648);
      }
    }
    else if (local_648 != (longlong *)0x0) {
      (**(code **)(*local_648 + 0x28))(local_648,0);
      if (local_648 != (longlong *)0x0) {
        local_648 = (longlong *)FMemory::Realloc(local_648,0,0);
      }
      local_640 = 0;
      goto LAB_140bc4423;
    }
    local_6c8 = (longlong *)0x0;
    local_6c0 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_6c8);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_144318950;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40bda9b0;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_144318998;
    }
    (**(code **)(*local_358[0] + 0x2d8))(local_358[0],local_2b8,&local_6c8);
    if (local_6c0 == 0) {
LAB_140bc44ed:
      if (local_6c8 != (longlong *)0x0) {
        FMemory::Free(local_6c8);
      }
    }
    else if (local_6c8 != (longlong *)0x0) {
      (**(code **)(*local_6c8 + 0x28))(local_6c8,0);
      if (local_6c8 != (longlong *)0x0) {
        local_6c8 = (longlong *)FMemory::Realloc(local_6c8,0,0);
      }
      local_6c0 = 0;
      goto LAB_140bc44ed;
    }
    local_6b8 = (longlong *)0x0;
    local_6b0 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_6b8);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_144318950;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40be1800;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_144318998;
    }
    (**(code **)(*local_358[0] + 0x300))(local_358[0],local_2b0,&local_6b8);
    if (local_6b0 == 0) {
LAB_140bc45a9:
      if (local_6b8 != (longlong *)0x0) {
        FMemory::Free(local_6b8);
      }
    }
    else if (local_6b8 != (longlong *)0x0) {
      (**(code **)(*local_6b8 + 0x28))(local_6b8,0);
      if (local_6b8 != (longlong *)0x0) {
        local_6b8 = (longlong *)FMemory::Realloc(local_6b8,0,0);
      }
      local_6b0 = 0;
      goto LAB_140bc45a9;
    }
    local_540 = 0;
    local_538 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_540);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_1443189e0;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40be1180;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_144318a28;
    }
    (**(code **)(*local_358[0] + 0x60))(local_358[0],local_2a8,&local_540);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_540);
  }
  local_578 = 0;
  FUN_1404d0c50(local_368,0);
  if (local_368[0] != (longlong *)0x0) {
    local_530 = 0;
    local_528 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_530);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_1442cc120;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40bc1d90;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_1442cc168;
    }
    (**(code **)(*local_368[0] + 800))(local_368[0],local_2a0,&local_530);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_530);
    local_520 = 0;
    local_518 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_520);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_1443188c0;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40bdc1e0;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_144318908;
    }
    (**(code **)(*local_368[0] + 0x228))(local_368[0],local_298,&local_520);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_520);
    local_510 = 0;
    local_508 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_510);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_144318a70;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40bdcfd0;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_144318ab8;
    }
    (**(code **)(*local_368[0] + 0x410))(local_368[0],local_290,&local_510);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_510);
    local_500 = 0;
    local_4f8 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_500);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_144318b00;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40bd7c00;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_144318b48;
    }
    (**(code **)(*local_368[0] + 0x430))(local_368[0],local_280,&local_500);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_500);
    local_4f0 = 0;
    local_4e8 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_4f0);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_1443189e0;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40bdbe10;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_144318a28;
    }
    (**(code **)(*local_368[0] + 0x1e8))(local_368[0],local_278,&local_4f0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4f0);
    local_3c0 = 0;
    local_3b8 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_3c0);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_144318b90;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40bd90d0;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_144318bd8;
    }
    (**(code **)(*local_368[0] + 0x208))(local_368[0],local_270,&local_3c0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3c0);
  }
  local_570 = 0;
  Online::GetIdentityInterface(local_378,0);
  if (local_378[0] != (longlong *)0x0) {
    uVar3 = (**(code **)(*local_378[0] + 0x10))(local_378[0]);
    *(undefined1 *)((longlong)param_1 + 0xbab) = uVar3;
    local_4e0 = 0;
    local_4d8 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_4e0);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_143fcff50;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40bbfb10;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_143fcff98;
    }
    (**(code **)(*local_378[0] + 0x18))(local_378[0],local_268,&local_4e0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4e0);
  }
  puVar15 = (undefined8 *)FName::FName(local_260,L"SPARK",1);
  FUN_140bbd560(local_388,*puVar15);
  if (local_388[0] != (longlong *)0x0) {
    local_4d0 = 0;
    local_4c8 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_4d0);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_144089a20;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40bc0a50;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_144089a68;
    }
    (**(code **)(*local_388[0] + 0x68))(local_388[0],local_258,&local_4d0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4d0);
    local_4c0 = 0;
    local_4b8 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_4c0);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_144060be0;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40437760;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_144060c28;
    }
    (**(code **)(*local_388[0] + 200))(local_388[0],local_250,&local_4c0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4c0);
  }
  local_568 = 0;
  Online::GetSessionInterface(local_398,0);
  if (local_398[0] != (longlong *)0x0) {
    local_4b0 = 0;
    local_4a8 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_4b0);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_144318c20;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40bbdb80;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_144318c68;
    }
    (**(code **)(*local_398[0] + 0x30))(local_398[0],local_248,&local_4b0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4b0);
  }
  puVar15 = (undefined8 *)FName::FName(local_240,L"SPARK",1);
  Online::GetSessionInterface(local_3a8,*puVar15);
  if (local_3a8[0] != (longlong *)0x0) {
    local_4a0 = 0;
    local_498 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_4a0);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_144318c20;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40bbdb80;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_144318c68;
    }
    (**(code **)(*local_3a8[0] + 0x30))(local_3a8[0],local_238,&local_4a0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4a0);
    local_490 = 0;
    local_488 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_490);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_144012f30;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40bbf450;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_144012f78;
    }
    (**(code **)(*local_3a8[0] + 0x50))(local_3a8[0],local_230,&local_490);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_490);
    local_480 = 0;
    local_478 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_480);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_144318c20;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40bc1540;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_144318c68;
    }
    (**(code **)(*local_3a8[0] + 0x70))(local_3a8[0],local_228,&local_480);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_480);
    lVar7 = *local_3a8[0];
    local_188 = 0x40bbeaa0;
    uStack_184 = 1;
    uStack_180 = 0;
    uVar5 = TBaseDelegate<TTypeWrapper<void>_>::CreateUObject<AFlarePlayerController>
                      (local_178,param_1,&local_188);
    (**(code **)(lVar7 + 0x90))(local_3a8[0],local_220,uVar5);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_178);
    lVar7 = *local_3a8[0];
    local_168 = 0x40bc2170;
    uStack_164 = 1;
    uStack_160 = 0;
    uVar5 = TBaseDelegate<TTypeWrapper<void>_>::CreateUObject<AFlarePlayerController>
                      (local_158,param_1,&local_168);
    (**(code **)(lVar7 + 0xb0))(local_3a8[0],local_218,uVar5);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_158);
    lVar7 = *local_3a8[0];
    local_148 = 0x40bbd660;
    uStack_144 = 1;
    uStack_140 = 0;
    uVar5 = TBaseDelegate<TTypeWrapper<void>_>::CreateUObject<AFlarePlayerController>
                      (local_138,param_1,&local_148);
    (**(code **)(lVar7 + 0xd0))(local_3a8[0],local_210,uVar5);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_138);
    lVar7 = *local_3a8[0];
    local_128 = 0x40bc1060;
    uStack_124 = 1;
    uStack_120 = 0;
    uVar5 = TBaseDelegate<TTypeWrapper<void>_>::CreateUObject<AFlarePlayerController>
                      (local_118,param_1,&local_128);
    (**(code **)(lVar7 + 0xf0))(local_3a8[0],local_208,uVar5);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_118);
  }
  lVar7 = FUN_142b45e90();
  local_470 = 0;
  local_468 = 0;
  lVar7 = *(longlong *)(lVar7 + 0x18);
  puVar15 = (undefined8 *)operator_new(0x30,&local_470);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_144318cb0;
    FWeakObjectPtr::operator=(puVar15 + 1,param_1);
    *(undefined4 *)(puVar15 + 2) = 0x40bbc6f0;
    *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar15[5] = uVar5;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x100,&local_470);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_470);
  local_460 = 0;
  local_458 = 0;
  puVar15 = (undefined8 *)operator_new(0x30,&local_460);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_144318cb0;
    FWeakObjectPtr::operator=(puVar15 + 1,param_1);
    *(undefined4 *)(puVar15 + 2) = 0x40bbb2b0;
    *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar15[5] = uVar5;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x150,&local_460);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_460);
  local_450 = 0;
  local_448 = 0;
  puVar15 = (undefined8 *)operator_new(0x30,&local_450);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_1440f9050;
    FWeakObjectPtr::operator=(puVar15 + 1,param_1);
    *(undefined4 *)(puVar15 + 2) = 0x40bd0c00;
    *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar15[5] = uVar5;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x178,&local_450);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_450);
  local_108 = 0x40bc1ef0;
  uStack_104 = 1;
  uStack_100 = 0;
  FUN_140b94130(lVar7 + 0xd0,local_200,param_1,&local_108);
  local_440 = 0;
  local_438 = 0;
  puVar15 = (undefined8 *)operator_new(0x30,&local_440);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_1440f9050;
    FWeakObjectPtr::operator=(puVar15 + 1,param_1);
    *(undefined4 *)(puVar15 + 2) = 0x40be03a0;
    *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar15[5] = uVar5;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x110,&local_440);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_440);
  local_5f8 = 0;
  local_5f0 = 0;
  puVar15 = (undefined8 *)operator_new(0x30,&local_5f8);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_1443195a0;
    FWeakObjectPtr::operator=(puVar15 + 1,param_1);
    *(undefined4 *)(puVar15 + 2) = 0x40be0b20;
    *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar15[5] = uVar5;
    *puVar15 = &PTR_FUN_1443195e8;
  }
  if ((local_5f0 != 0) && (local_5f8 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(lVar7 + 0x138,local_1f8,&local_5f8);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_5f8);
  local_430 = 0;
  local_428 = 0;
  puVar15 = (undefined8 *)operator_new(0x30,&local_430);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_144318cf0;
    FWeakObjectPtr::operator=(puVar15 + 1,param_1);
    *(undefined4 *)(puVar15 + 2) = 0x40bd5320;
    *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar15[5] = uVar5;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x18,&local_430);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_430);
  local_f8 = 0x40bc2130;
  uStack_f4 = 1;
  uStack_f0 = 0;
  uVar5 = TBaseDelegate<TTypeWrapper<void>_>::CreateUObject<AFlarePlayerController>
                    (local_e8,param_1,&local_f8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x188,uVar5);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_e8);
  local_420 = 0;
  local_418 = 0;
  puVar15 = (undefined8 *)operator_new(0x30,&local_420);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_144319630;
    FWeakObjectPtr::operator=(puVar15 + 1,param_1);
    *(undefined4 *)(puVar15 + 2) = 0x40bb5de0;
    *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar15[5] = uVar5;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x198,&local_420);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_420);
  local_410 = 0;
  local_408 = 0;
  puVar15 = (undefined8 *)operator_new(0x30,&local_410);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_144319670;
    FWeakObjectPtr::operator=(puVar15 + 1,param_1);
    *(undefined4 *)(puVar15 + 2) = 0x40ba3520;
    *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar15[5] = uVar5;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x1a8,&local_410);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_410);
  local_400 = 0;
  local_3f8 = 0;
  puVar15 = (undefined8 *)operator_new(0x30,&local_400);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_144319670;
    FWeakObjectPtr::operator=(puVar15 + 1,param_1);
    *(undefined4 *)(puVar15 + 2) = 0x40bbad10;
    *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar15[5] = uVar5;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x1c8,&local_400);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_400);
  local_d8 = 0x40bd3e90;
  uStack_d4 = 1;
  uStack_d0 = 0;
  FUN_140b94210(param_1 + 0xd3,local_1f0,param_1,&local_d8);
  local_5e8 = 0;
  local_5e0 = 0;
  puVar15 = (undefined8 *)operator_new(0x30,&local_5e8);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_1443196b0;
    FWeakObjectPtr::operator=(puVar15 + 1,param_1);
    *(undefined4 *)(puVar15 + 2) = 0x40bbf0d0;
    *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar15[5] = uVar5;
    *puVar15 = &PTR_FUN_1443196f8;
  }
  if ((local_5e0 != 0) && (local_5e8 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(&DAT_1464aef50,local_1e8,&local_5e8);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_5e8);
  local_5d8 = 0;
  local_5d0 = 0;
  puVar15 = (undefined8 *)operator_new(0x30,&local_5d8);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_144319740;
    FWeakObjectPtr::operator=(puVar15 + 1,param_1);
    *(undefined4 *)(puVar15 + 2) = 0x40bbf2b0;
    *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar15[5] = uVar5;
    *puVar15 = &PTR_FUN_144319788;
  }
  if ((local_5d0 != 0) && (local_5d8 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(&DAT_1464aef68,local_1e0,&local_5d8);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_5d8);
  local_c8 = 0x40bbe570;
  uStack_c4 = 1;
  uStack_c0 = 0;
  TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
            (&DAT_1464af370,local_1d8,param_1,&local_c8);
  local_b8 = 0x40bbe240;
  uStack_b4 = 1;
  uStack_b0 = 0;
  TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
            (&DAT_1464af3b8,local_1d0,param_1,&local_b8);
  local_5c8 = 0;
  local_5c0 = 0;
  puVar15 = (undefined8 *)operator_new(0x30,&local_5c8);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_1443197d0;
    FWeakObjectPtr::operator=(puVar15 + 1,param_1);
    *(undefined4 *)(puVar15 + 2) = 0x40bd7d30;
    *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar15[5] = uVar5;
    *puVar15 = &PTR_FUN_144319818;
  }
  if ((local_5c0 != 0) && (local_5c8 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(param_1 + 0xc,local_1c8,&local_5c8);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_5c8);
  local_5b8 = 0;
  local_5b0 = 0;
  puVar15 = (undefined8 *)operator_new(0x30,&local_5b8);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_14416caa8;
    FWeakObjectPtr::operator=(puVar15 + 1,param_1);
    *(undefined4 *)(puVar15 + 2) = 0x40bde410;
    *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar15[5] = uVar5;
    *puVar15 = &PTR_FUN_14416caf0;
  }
  if ((local_5b0 != 0) && (local_5b8 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(&DAT_146533130,local_1c0,&local_5b8);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_5b8);
  FUN_140bc5f40(param_1);
  uVar5 = FUN_140bb7630(param_1);
  FUN_140d87910(uVar5,param_1);
  plVar6 = (longlong *)FUN_140bb7440(param_1);
  (**(code **)(*plVar6 + 8))(plVar6,param_1);
  plVar6 = (longlong *)FUN_140bb7220(param_1);
  (**(code **)(*plVar6 + 8))(plVar6,param_1);
  uVar5 = FUN_140bb73a0(param_1);
  FUN_140d86e30(uVar5,param_1);
  uVar5 = FUN_140bb7190(param_1);
  FUN_140d86ac0(uVar5,param_1);
  if (param_1[0x21a] != 0) {
    FUN_140dc0920(param_1[0x21a],param_1);
  }
  plVar6 = (longlong *)param_1[0x218];
  pwVar8 = (wchar_t *)((longlong)(int)param_1[0x219] & 0x1fffffffffffffff);
  if (plVar6 + (int)param_1[0x219] < plVar6) {
    pwVar8 = pwVar16;
  }
  pwVar9 = pwVar16;
  if (pwVar8 != (wchar_t *)0x0) {
    do {
      if (*plVar6 != 0) {
        FUN_140c480b0(*plVar6,param_1);
      }
      plVar6 = plVar6 + 1;
      pwVar9 = (wchar_t *)((longlong)pwVar9 + 1);
    } while (pwVar9 != pwVar8);
  }
  lVar7 = operator_new(0x498);
  pwVar8 = pwVar16;
  if (lVar7 != 0) {
    pwVar8 = (wchar_t *)FUN_140da7f30(lVar7,param_1);
  }
  plVar6 = (longlong *)FUN_140b96190(pwVar8);
  ppwVar2 = (wchar_t **)(param_1 + 0x9c);
  local_628 = pwVar8;
  local_620 = plVar6;
  if (pwVar8 != (wchar_t *)0x0) {
    if ((*(longlong *)pwVar8 != 0) && (*(longlong *)(pwVar8 + 4) != 0)) {
      piVar1 = (int *)(*(longlong *)(pwVar8 + 4) + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) goto LAB_140bc5905;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *(wchar_t **)pwVar8 = pwVar8;
    SharedPointerInternals::FWeakReferencer<1>::AssignReferenceController(pwVar8 + 4,plVar6);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar6 + 1;
      lVar7 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    }
  }
LAB_140bc5905:
  if (ppwVar2 != &local_628) {
    *ppwVar2 = pwVar8;
    local_628 = (wchar_t *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x9d,&local_620);
  }
  plVar6 = local_620;
  if (local_620 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_620 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_620)(local_620);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_620 + 8))(local_620,1);
      }
    }
  }
  pwVar8 = *ppwVar2;
  if (pwVar8 != (wchar_t *)0x0) {
    local_5a8 = 0;
    local_5a0 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_5a8);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_143fcff50;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40bd64d0;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_143fcff98;
    }
    if ((local_5a0 != 0) && (local_5a8 != 0)) {
      FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(pwVar8 + 0x214,local_1b8,&local_5a8);
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_5a8);
    pwVar8 = *ppwVar2;
    local_3f0 = 0;
    local_3e8 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_3f0);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_1442cc120;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40bd62d0;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_1442cc168;
    }
    TBaseMulticastDelegate<void>::Add(pwVar8 + 0x220,local_288,&local_3f0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3f0);
    local_a8 = 0x40bd6360;
    uStack_a4 = 1;
    uStack_a0 = 0;
    FUN_1407ffe80(*ppwVar2 + 0x22c,param_1,&local_a8);
    pwVar8 = *ppwVar2;
    local_3e0 = 0;
    local_3d8 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_3e0);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40bd6390;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_143fcff08;
    }
    TBaseDelegate<FSlateBrush_const_*>::operator=(pwVar8 + 0x234,&local_3e0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3e0);
    pwVar8 = *ppwVar2;
    local_3d0 = 0;
    local_3c8 = 0;
    puVar15 = (undefined8 *)operator_new(0x30,&local_3d0);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40bd6440;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_143fcff08;
    }
    TBaseDelegate<FSlateBrush_const_*>::operator=(pwVar8 + 0x23c,&local_3d0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3d0);
    local_98 = 0x40bd66c0;
    uStack_94 = 1;
    uStack_90 = 0;
    FUN_1407ffe80(*ppwVar2 + 0x244,param_1,&local_98);
    FUN_140dbfe50(*ppwVar2);
  }
  local_88 = 0x40bd2ae0;
  uStack_84 = 1;
  uStack_80 = 0;
  TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
            (&DAT_1464af058,local_1b0,param_1,&local_88);
  ppwVar2 = (wchar_t **)(param_1 + 300);
  if (*ppwVar2 == (wchar_t *)0x0) {
    lVar7 = operator_new(0x98);
    if (lVar7 != 0) {
      pwVar16 = (wchar_t *)FUN_140b9a330(lVar7,param_1);
    }
    local_590 = FUN_140b961d0(pwVar16);
    local_598 = pwVar16;
    SharedPointerInternals::EnableSharedFromThis(&local_598,pwVar16,pwVar16);
    if (ppwVar2 != &local_598) {
      *ppwVar2 = pwVar16;
      local_598 = (wchar_t *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x12d,&local_590);
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_598);
  }
  FUN_140df39e0(param_1);
  if ((param_1[0x3f] != 0) &&
     (plVar6 = (longlong *)UUGMenuManager::GetFadeHUD(), plVar6 != (longlong *)0x0)) {
    local_78 = 0x40be1220;
    uStack_74 = 1;
    uStack_70 = 0;
    plVar13 = (longlong *)FUN_140b94130(plVar6 + 7,local_1a8,param_1,&local_78);
    local_638 = (code *)0x0;
    uStack_630 = 0;
    param_1[0x140] = *plVar13;
    puVar15 = (undefined8 *)operator_new(0x30,&local_638);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_1442cc120;
      FWeakObjectPtr::operator=(puVar15 + 1,param_1);
      *(undefined4 *)(puVar15 + 2) = 0x40be1440;
      *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_6cc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar15[5] = uVar5;
      *puVar15 = &PTR_FUN_1442cc168;
    }
    (**(code **)(*plVar6 + 0x1e0))(plVar6,local_1a0,&local_638);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_638);
  }
  local_68 = 0x40bd4d40;
  uStack_64 = 1;
  uStack_60 = 0;
  plVar6 = (longlong *)
           TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                     (&DAT_146532738,local_318,param_1,&local_68);
  param_1[0x27c] = *plVar6;
  FWeakObjectPtr::operator=(&local_560,param_1);
  lVar7 = DAT_146b17150;
  local_618 = 0;
  local_610 = 0;
  puVar15 = (undefined8 *)operator_new(0x20,&local_618);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_GetPoolName_144319860;
    *(undefined4 *)(puVar15 + 1) = local_560;
    *(undefined4 *)((longlong)puVar15 + 0xc) = local_55c;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar15[3] = uVar5;
    *puVar15 = &PTR_GetPoolName_1443198a8;
  }
  if ((local_610 != 0) && (local_618 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(lVar7 + 0x9d0,local_310,&local_618);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_618);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_3a8);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_398);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_388);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_378);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_368);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_358);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_348);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_338);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_328);
  return;
}



// FUNCTION 140bc5f40 FUN_140bc5f40 body=3298 status=ok
// SIG undefined FUN_140bc5f40(void)

void FUN_140bc5f40(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(longlong *)(param_1 + 0xae8) == 0) {
    return;
  }
  uStack_30 = 0;
  local_38 = FUN_140bcf380;
  local_48 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_40 = 3;
  local_48 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)IDelegateInstance::vftable;
    *plVar1 = (longlong)&PTR_FUN_1443190e0;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_2c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_144319128;
  }
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0xd8))
            (*(longlong **)(param_1 + 0xae8),local_res8,&local_48);
  if (local_40 == 0) {
LAB_140bc6035:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_140bc6035;
  }
  uStack_30 = 0;
  local_48 = (longlong *)0x0;
  local_38 = FUN_140bcef60;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_14428ae88;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_2c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_14428aed0;
  }
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x78))
            (*(longlong **)(param_1 + 0xae8),local_res8,&local_48);
  if (local_40 == 0) {
LAB_140bc60f4:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_140bc60f4;
  }
  uStack_30 = 0;
  local_48 = (longlong *)0x0;
  local_38 = FUN_140bcf0a0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_2c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143fcff08;
  }
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x58))
            (*(longlong **)(param_1 + 0xae8),local_res8,&local_48);
  if (local_40 == 0) {
LAB_140bc61b3:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_140bc61b3;
  }
  uStack_30 = 0;
  local_48 = (longlong *)0x0;
  local_38 = FUN_140bcf4f0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)IDelegateInstance::vftable;
    *plVar1 = (longlong)&PTR_FUN_144012f30;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_2c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_144012f78;
  }
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x38))
            (*(longlong **)(param_1 + 0xae8),local_res8,&local_48);
  if (local_40 == 0) {
LAB_140bc6275:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_140bc6275;
  }
  uStack_30 = 0;
  local_48 = (longlong *)0x0;
  local_38 = FUN_140bcf6f0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)IDelegateInstance::vftable;
    *plVar1 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_2c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143fcff08;
  }
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x18))
            (*(longlong **)(param_1 + 0xae8),local_res8,&local_48);
  if (local_40 == 0) {
LAB_140bc6337:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_140bc6337;
  }
  uStack_30 = 0;
  local_48 = (longlong *)0x0;
  local_38 = FUN_140bcf140;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_2c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143fcff08;
  }
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x98))
            (*(longlong **)(param_1 + 0xae8),local_res8,&local_48);
  if (local_40 == 0) {
LAB_140bc63f5:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_140bc63f5;
  }
  uStack_30 = 0;
  local_48 = (longlong *)0x0;
  local_38 = (code *)&LAB_140bcf110;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)IDelegateInstance::vftable;
    *plVar1 = (longlong)&PTR_FUN_144089a20;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_2c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_144089a68;
  }
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0xb8))
            (*(longlong **)(param_1 + 0xae8),local_res8,&local_48);
  if (local_40 == 0) {
LAB_140bc64ba:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_140bc64ba;
  }
  uStack_30 = 0;
  local_48 = (longlong *)0x0;
  local_38 = FUN_140bcf2f0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)IDelegateInstance::vftable;
    *plVar1 = (longlong)&PTR_FUN_144319170;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_2c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_1443191b8;
  }
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x118))
            (*(longlong **)(param_1 + 0xae8),local_res8,&local_48);
  if (local_40 == 0) {
LAB_140bc657f:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_140bc657f;
  }
  uStack_30 = 0;
  local_48 = (longlong *)0x0;
  local_38 = AK::MemoryMgr::StartProfileThreadUsage;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)IDelegateInstance::vftable;
    *plVar1 = (longlong)&PTR_FUN_144319200;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_2c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_144319248;
  }
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x138))
            (*(longlong **)(param_1 + 0xae8),local_res8,&local_48);
  if (local_40 == 0) {
LAB_140bc6644:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_140bc6644;
  }
  uStack_30 = 0;
  local_48 = (longlong *)0x0;
  local_38 = (code *)&LAB_140bcf2b0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)IDelegateInstance::vftable;
    *plVar1 = (longlong)&PTR_FUN_144319290;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_2c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_1443192d8;
  }
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x158))
            (*(longlong **)(param_1 + 0xae8),local_res8,&local_48);
  if (local_40 == 0) {
LAB_140bc6709:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_140bc6709;
  }
  uStack_30 = 0;
  local_48 = (longlong *)0x0;
  local_38 = FUN_140bced10;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)IDelegateInstance::vftable;
    *plVar1 = (longlong)&PTR_FUN_1443188c0;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_2c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_144318908;
  }
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x198))
            (*(longlong **)(param_1 + 0xae8),local_res8,&local_48);
  if (local_40 == 0) {
LAB_140bc67ce:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_140bc67ce;
  }
  uStack_30 = 0;
  local_48 = (longlong *)0x0;
  local_38 = FUN_140bcede0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)IDelegateInstance::vftable;
    *plVar1 = (longlong)&PTR_FUN_1443188c0;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_2c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_144318908;
  }
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x1b8))
            (*(longlong **)(param_1 + 0xae8),local_res8,&local_48);
  if (local_40 == 0) {
LAB_140bc689b:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_140bc689b;
  }
  uStack_30 = 0;
  local_38 = FUN_140bcf630;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  puVar3 = (undefined8 *)operator_new(0x30,&local_48);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1443188c0;
    FWeakObjectPtr::operator=(puVar3 + 1,param_1);
    *(undefined4 *)(puVar3 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_38._4_4_;
    *(undefined4 *)(puVar3 + 3) = uStack_30;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_2c;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[5] = uVar4;
    *puVar3 = &PTR_FUN_144318908;
  }
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x1d8))
            (*(longlong **)(param_1 + 0xae8),local_res8,&local_48);
  if (local_40 == 0) {
LAB_140bc6955:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_140bc6955;
  }
  uStack_30 = 0;
  local_38 = FUN_140bcf600;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  puVar3 = (undefined8 *)operator_new(0x30,&local_48);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_144319320;
    FWeakObjectPtr::operator=(puVar3 + 1,param_1);
    *(undefined4 *)(puVar3 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_38._4_4_;
    *(undefined4 *)(puVar3 + 3) = uStack_30;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_2c;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[5] = uVar4;
    *puVar3 = &PTR_FUN_144319368;
  }
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x1f8))
            (*(longlong **)(param_1 + 0xae8),local_res8,&local_48);
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) goto LAB_140bc6a1c;
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
LAB_140bc6a1c:
  uStack_30 = 0;
  local_38 = (code *)&LAB_140bcedd0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  puVar3 = (undefined8 *)operator_new(0x30,&local_48);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_144012f30;
    FWeakObjectPtr::operator=(puVar3 + 1,param_1);
    *(undefined4 *)(puVar3 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_38._4_4_;
    *(undefined4 *)(puVar3 + 3) = uStack_30;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_2c;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[5] = uVar4;
    *puVar3 = &PTR_FUN_144012f78;
  }
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x318))
            (*(longlong **)(param_1 + 0xae8),local_res8,&local_48);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  uStack_30 = 0;
  local_38 = (code *)&LAB_140bcedd0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  puVar3 = (undefined8 *)operator_new(0x30,&local_48);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_144012f30;
    FWeakObjectPtr::operator=(puVar3 + 1,param_1);
    *(undefined4 *)(puVar3 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_38._4_4_;
    *(undefined4 *)(puVar3 + 3) = uStack_30;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_2c;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[5] = uVar4;
    *puVar3 = &PTR_FUN_144012f78;
  }
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x398))
            (*(longlong **)(param_1 + 0xae8),local_res8,&local_48);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  uStack_30 = 0;
  local_38 = (code *)&LAB_140bcf0f0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  puVar3 = (undefined8 *)operator_new(0x30,&local_48);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_14428ae88;
    FWeakObjectPtr::operator=(puVar3 + 1,param_1);
    *(undefined4 *)(puVar3 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_38._4_4_;
    *(undefined4 *)(puVar3 + 3) = uStack_30;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_2c;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[5] = uVar4;
    *puVar3 = &PTR_FUN_14428aed0;
  }
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x2b8))
            (*(longlong **)(param_1 + 0xae8),local_res8,&local_48);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  uStack_30 = 0;
  local_38 = (code *)&LAB_140bd0550;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  puVar3 = (undefined8 *)operator_new(0x30,&local_48);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1443193b0;
    FWeakObjectPtr::operator=(puVar3 + 1,param_1);
    *(undefined4 *)(puVar3 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_38._4_4_;
    *(undefined4 *)(puVar3 + 3) = uStack_30;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_2c;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[5] = uVar4;
    *puVar3 = &PTR_FUN_1443193f8;
  }
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x2d8))
            (*(longlong **)(param_1 + 0xae8),local_res8,&local_48);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  return;
}



// FUNCTION 140bc6c30 FUN_140bc6c30 body=7228 status=ok
// SIG undefined FUN_140bc6c30(void)

void FUN_140bc6c30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  void *local_6f8;
  ulonglong local_6f0;
  void *local_6e8;
  ulonglong local_6e0;
  void *local_6d8;
  ulonglong local_6d0;
  void *local_6c8;
  ulonglong local_6c0;
  longlong local_6b8 [98];
  void *local_3a8;
  undefined8 local_3a0;
  undefined1 local_398 [8];
  longlong *local_390;
  void *local_380;
  undefined8 local_378;
  undefined1 local_370 [8];
  longlong *local_368;
  void *local_358;
  undefined8 local_350;
  undefined1 local_348 [8];
  longlong *local_340;
  void *local_330;
  undefined8 local_328;
  undefined1 local_320 [8];
  longlong *local_318;
  undefined1 local_308 [4];
  undefined1 local_304 [4];
  undefined1 local_300 [4];
  undefined1 local_2fc [4];
  undefined1 local_2f8 [4];
  undefined1 local_2f4 [4];
  undefined1 local_2f0 [4];
  undefined1 local_2ec [4];
  undefined1 local_2e8 [4];
  undefined1 local_2e4 [4];
  undefined1 local_2e0 [4];
  undefined1 local_2dc [4];
  undefined1 local_2d8 [4];
  undefined1 local_2d4 [4];
  undefined1 local_2d0 [8];
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined1 local_1e8 [4];
  undefined1 local_1e4 [4];
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined4 *local_188;
  longlong *local_180;
  undefined4 *local_178;
  longlong *local_170;
  undefined4 *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  
  plVar3 = (longlong *)(param_1 + 0x1200);
  plVar10 = (longlong *)*plVar3;
  for (iVar11 = *(int *)(param_1 + 0x1208); iVar11 != 0; iVar11 = iVar11 + -1) {
    plVar8 = (longlong *)plVar10[3];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 5;
  }
  *(undefined4 *)(param_1 + 0x1208) = 0;
  if (*(int *)(param_1 + 0x120c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (plVar3,0);
  }
  lVar5 = param_1 + 0x1210;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Empty(lVar5,0);
  plVar10 = (longlong *)(param_1 + 0x1260);
  plVar8 = (longlong *)*plVar10;
  for (iVar11 = *(int *)(param_1 + 0x1268); iVar11 != 0; iVar11 = iVar11 + -1) {
    if (plVar8[2] != 0) {
      FMemory::Free();
    }
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 4;
  }
  *(undefined4 *)(param_1 + 0x1268) = 0;
  if (*(int *)(param_1 + 0x126c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (plVar10,0);
  }
  local_6d8 = (void *)0x0;
  local_6d0 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6d8,0);
  FGenericPlatformString::Memcpy(local_6d8,L"Europe",0xe);
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_a8,L"Europe",L"MatchmakingRegions",L"Europe");
  local_380 = (void *)0x0;
  lVar9 = (longlong)(int)local_6d0;
  local_378 = CONCAT44(local_378._4_4_,(int)local_6d0);
  if ((int)local_6d0 == 0) {
    local_378 = local_6d0 & 0xffffffff;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_380,local_6d0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_380,local_6d8,lVar9 * 2);
  }
  FText::FText(local_370,uVar6);
  iVar11 = *(int *)(param_1 + 0x1208);
  *(int *)(param_1 + 0x1208) = iVar11 + 1;
  if (*(int *)(param_1 + 0x120c) < iVar11 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar3,iVar11);
  }
  lVar9 = *plVar3;
  *(undefined8 *)(lVar9 + (longlong)iVar11 * 0x28) = 0;
  puVar7 = (undefined8 *)(lVar9 + (longlong)iVar11 * 0x28);
  *puVar7 = local_380;
  local_380 = (void *)0x0;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_378;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_378._4_4_;
  local_378 = 0;
  FText::FText(puVar7 + 2,local_370);
  if (local_368 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_368 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_368)(local_368);
      LOCK();
      piVar2 = (int *)((longlong)local_368 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_368 + 8))(local_368,1);
      }
    }
  }
  if (local_380 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_a0 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (local_6d8 != (void *)0x0) {
    FMemory::Free();
  }
  local_6c8 = (void *)0x0;
  local_6c0 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6c8,0);
  FGenericPlatformString::Memcpy(local_6c8,L"NorthAmerica",0x1a);
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_60,L"N. America",L"MatchmakingRegions",L"NorthAmerica");
  lVar9 = (longlong)(int)local_6c0;
  local_350 = CONCAT44(local_350._4_4_,(int)local_6c0);
  local_358 = (void *)0x0;
  if ((int)local_6c0 == 0) {
    local_350 = local_6c0 & 0xffffffff;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_358,local_6c0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_358,local_6c8,lVar9 * 2);
  }
  FText::FText(local_348,uVar6);
  iVar11 = *(int *)(param_1 + 0x1208);
  *(int *)(param_1 + 0x1208) = iVar11 + 1;
  if (*(int *)(param_1 + 0x120c) < iVar11 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar3,iVar11);
  }
  lVar9 = *plVar3;
  *(undefined8 *)(lVar9 + (longlong)iVar11 * 0x28) = 0;
  puVar7 = (undefined8 *)(lVar9 + (longlong)iVar11 * 0x28);
  *puVar7 = local_358;
  local_358 = (void *)0x0;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_350;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_350._4_4_;
  local_350 = 0;
  FText::FText(puVar7 + 2,local_348);
  if (local_340 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_340 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_340)(local_340);
      LOCK();
      piVar2 = (int *)((longlong)local_340 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_340 + 8))(local_340,1);
      }
    }
  }
  if (local_358 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_58 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  if (local_6c8 != (void *)0x0) {
    FMemory::Free();
  }
  local_6f8 = (void *)0x0;
  local_6f0 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6f8,0);
  FGenericPlatformString::Memcpy(local_6f8,L"Asia",10);
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_90,L"Asia",L"MatchmakingRegions",L"Asia");
  lVar9 = (longlong)(int)local_6f0;
  local_328 = CONCAT44(local_328._4_4_,(int)local_6f0);
  local_330 = (void *)0x0;
  if ((int)local_6f0 == 0) {
    local_328 = local_6f0 & 0xffffffff;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_330,local_6f0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_330,local_6f8,lVar9 * 2);
  }
  FText::FText(local_320,uVar6);
  iVar11 = *(int *)(param_1 + 0x1208);
  *(int *)(param_1 + 0x1208) = iVar11 + 1;
  if (*(int *)(param_1 + 0x120c) < iVar11 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar3,iVar11);
  }
  lVar9 = *plVar3;
  *(undefined8 *)(lVar9 + (longlong)iVar11 * 0x28) = 0;
  puVar7 = (undefined8 *)(lVar9 + (longlong)iVar11 * 0x28);
  *puVar7 = local_330;
  local_330 = (void *)0x0;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_328;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_328._4_4_;
  local_328 = 0;
  FText::FText(puVar7 + 2,local_320);
  if (local_318 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_318 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_318)(local_318);
      LOCK();
      piVar2 = (int *)((longlong)local_318 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_318 + 8))(local_318,1);
      }
    }
  }
  if (local_330 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_88 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  if (local_6f8 != (void *)0x0) {
    FMemory::Free();
  }
  local_6e8 = (void *)0x0;
  local_6e0 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6e8,0);
  FGenericPlatformString::Memcpy(local_6e8,L"Australia",0x14);
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_78,L"Australia",L"MatchmakingRegions",L"Australia");
  lVar9 = (longlong)(int)local_6e0;
  local_3a0 = CONCAT44(local_3a0._4_4_,(int)local_6e0);
  local_3a8 = (void *)0x0;
  if ((int)local_6e0 == 0) {
    local_3a0 = local_6e0 & 0xffffffff;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_3a8,local_6e0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_3a8,local_6e8,lVar9 * 2);
  }
  FText::FText(local_398,uVar6);
  iVar11 = *(int *)(param_1 + 0x1208);
  *(int *)(param_1 + 0x1208) = iVar11 + 1;
  if (*(int *)(param_1 + 0x120c) < iVar11 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar3,iVar11);
  }
  lVar9 = *plVar3;
  *(undefined8 *)(lVar9 + (longlong)iVar11 * 0x28) = 0;
  puVar7 = (undefined8 *)(lVar9 + (longlong)iVar11 * 0x28);
  *puVar7 = local_3a8;
  local_3a8 = (void *)0x0;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_3a0;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_3a0._4_4_;
  local_3a0 = 0;
  FText::FText(puVar7 + 2,local_398);
  if (local_390 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_390 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_390)(local_390);
      LOCK();
      piVar2 = (int *)((longlong)local_390 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_390 + 8))(local_390,1);
      }
    }
  }
  if (local_3a8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_70 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_6e8 != (void *)0x0) {
    FMemory::Free();
  }
  local_6b8[0x26] = 0;
  local_6b8[0x27] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x26,0);
  FGenericPlatformString::Memcpy(local_6b8[0x26],L"NorthAmerica",0x1a);
  local_6b8[0x24] = 0;
  local_6b8[0x25] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x24,0);
  FGenericPlatformString::Memcpy(local_6b8[0x24],&DAT_1442fe9e4,6);
  local_e8 = local_6b8 + 0x24;
  local_e0 = local_6b8 + 0x26;
  FUN_140497620(lVar5,local_res20,&local_e8,0);
  if (local_6b8[0x24] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0x26] != 0) {
    FMemory::Free();
  }
  local_6b8[0x2a] = 0;
  local_6b8[0x2b] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x2a,0);
  FGenericPlatformString::Memcpy(local_6b8[0x2a],L"NorthAmerica",0x1a);
  local_6b8[0x28] = 0;
  local_6b8[0x29] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x28,0);
  FGenericPlatformString::Memcpy(local_6b8[0x28],&DAT_1442ff284,6);
  local_148 = local_6b8 + 0x28;
  local_140 = local_6b8 + 0x2a;
  FUN_140497620(lVar5,local_2d4,&local_148,0);
  if (local_6b8[0x28] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0x2a] != 0) {
    FMemory::Free();
  }
  local_6b8[0x2e] = 0;
  local_6b8[0x2f] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x2e,0);
  FGenericPlatformString::Memcpy(local_6b8[0x2e],L"NorthAmerica",0x1a);
  local_6b8[0] = 0;
  local_6b8[1] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8,0);
  FGenericPlatformString::Memcpy(local_6b8[0],&DAT_1442ff594,6);
  local_138 = local_6b8;
  local_130 = local_6b8 + 0x2e;
  FUN_140497620(lVar5,local_2d0,&local_138,0);
  if (local_6b8[0] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0x2e] != 0) {
    FMemory::Free();
  }
  local_6b8[0x32] = 0;
  local_6b8[0x33] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x32,0);
  FGenericPlatformString::Memcpy(local_6b8[0x32],L"Europe",0xe);
  local_6b8[0x30] = 0;
  local_6b8[0x31] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x30,0);
  FGenericPlatformString::Memcpy(local_6b8[0x30],&DAT_1442ff6e4,6);
  local_128 = local_6b8 + 0x30;
  local_120 = local_6b8 + 0x32;
  FUN_140497620(lVar5,local_1e8,&local_128,0);
  if (local_6b8[0x30] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0x32] != 0) {
    FMemory::Free();
  }
  local_6b8[0x36] = 0;
  local_6b8[0x37] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x36,0);
  FGenericPlatformString::Memcpy(local_6b8[0x36],L"Europe",0xe);
  local_6b8[0x34] = 0;
  local_6b8[0x35] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x34,0);
  FGenericPlatformString::Memcpy(local_6b8[0x34],&DAT_1442ff7d4,6);
  local_118 = local_6b8 + 0x34;
  local_110 = local_6b8 + 0x36;
  FUN_140497620(lVar5,local_1e4,&local_118,0);
  if (local_6b8[0x34] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0x36] != 0) {
    FMemory::Free();
  }
  local_6b8[0x3a] = 0;
  local_6b8[0x3b] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x3a,0);
  FGenericPlatformString::Memcpy(local_6b8[0x3a],L"Europe",0xe);
  local_6b8[0x38] = 0;
  local_6b8[0x39] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x38,0);
  FGenericPlatformString::Memcpy(local_6b8[0x38],&DAT_1442ffb94,6);
  local_108 = local_6b8 + 0x38;
  local_100 = local_6b8 + 0x3a;
  FUN_140497620(lVar5,local_1e0,&local_108,0);
  if (local_6b8[0x38] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0x3a] != 0) {
    FMemory::Free();
  }
  local_6b8[2] = 0;
  local_6b8[3] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 2,0);
  FGenericPlatformString::Memcpy(local_6b8[2],L"Europe",0xe);
  local_6b8[0x3c] = 0;
  local_6b8[0x3d] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x3c,0);
  FGenericPlatformString::Memcpy(local_6b8[0x3c],&DAT_1443000a4,6);
  local_f8 = local_6b8 + 0x3c;
  local_f0 = local_6b8 + 2;
  FUN_140497620(lVar5,local_308,&local_f8,0);
  if (local_6b8[0x3c] != 0) {
    FMemory::Free();
  }
  if (local_6b8[2] != 0) {
    FMemory::Free();
  }
  local_6b8[6] = 0;
  local_6b8[7] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 6,0);
  FGenericPlatformString::Memcpy(local_6b8[6],L"Europe",0xe);
  local_6b8[4] = 0;
  local_6b8[5] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 4,0);
  FGenericPlatformString::Memcpy(local_6b8[4],&DAT_1443003b4,6);
  local_158 = local_6b8 + 4;
  local_150 = local_6b8 + 6;
  FUN_140497620(lVar5,local_304,&local_158,0);
  if (local_6b8[4] != 0) {
    FMemory::Free();
  }
  if (local_6b8[6] != 0) {
    FMemory::Free();
  }
  local_6b8[10] = 0;
  local_6b8[0xb] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 10,0);
  FGenericPlatformString::Memcpy(local_6b8[10],L"Europe",0xe);
  local_6b8[8] = 0;
  local_6b8[9] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 8,0);
  FGenericPlatformString::Memcpy(local_6b8[8],&DAT_1443004e4,6);
  local_d8 = local_6b8 + 8;
  local_d0 = local_6b8 + 10;
  FUN_140497620(lVar5,local_300,&local_d8,0);
  if (local_6b8[8] != 0) {
    FMemory::Free();
  }
  if (local_6b8[10] != 0) {
    FMemory::Free();
  }
  local_6b8[0xe] = 0;
  local_6b8[0xf] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0xe,0);
  FGenericPlatformString::Memcpy(local_6b8[0xe],L"Europe",0xe);
  local_6b8[0xc] = 0;
  local_6b8[0xd] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0xc,0);
  FGenericPlatformString::Memcpy(local_6b8[0xc],&DAT_1443005d4,6);
  local_c8 = local_6b8 + 0xc;
  local_c0 = local_6b8 + 0xe;
  FUN_140497620(lVar5,local_2fc,&local_c8,0);
  if (local_6b8[0xc] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0xe] != 0) {
    FMemory::Free();
  }
  local_6b8[0x12] = 0;
  local_6b8[0x13] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x12,0);
  FGenericPlatformString::Memcpy(local_6b8[0x12],L"Asia",10);
  local_6b8[0x10] = 0;
  local_6b8[0x11] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x10,0);
  FGenericPlatformString::Memcpy(local_6b8[0x10],&DAT_144300654,6);
  local_b8 = local_6b8 + 0x10;
  local_b0 = local_6b8 + 0x12;
  FUN_140497620(lVar5,local_2f8,&local_b8,0);
  if (local_6b8[0x10] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0x12] != 0) {
    FMemory::Free();
  }
  local_6b8[0x16] = 0;
  local_6b8[0x17] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x16,0);
  FGenericPlatformString::Memcpy(local_6b8[0x16],L"Asia",10);
  local_6b8[0x14] = 0;
  local_6b8[0x15] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x14,0);
  FGenericPlatformString::Memcpy(local_6b8[0x14],&DAT_1443006f4,6);
  local_1d0 = local_6b8 + 0x16;
  local_1d8 = local_6b8 + 0x14;
  FUN_140497620(lVar5,local_2f4,&local_1d8,0);
  if (local_6b8[0x14] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0x16] != 0) {
    FMemory::Free();
  }
  local_6b8[0x1c] = 0;
  local_6b8[0x1d] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x1c,0);
  FGenericPlatformString::Memcpy(local_6b8[0x1c],L"Asia",10);
  local_6b8[0x18] = 0;
  local_6b8[0x19] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x18,0);
  FGenericPlatformString::Memcpy(local_6b8[0x18],&DAT_1443012f4,6);
  local_1c8 = local_6b8 + 0x18;
  local_1c0 = local_6b8 + 0x1c;
  FUN_140497620(lVar5,local_2f0,&local_1c8,0);
  if (local_6b8[0x18] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0x1c] != 0) {
    FMemory::Free();
  }
  local_6b8[0x20] = 0;
  local_6b8[0x21] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x20,0);
  FGenericPlatformString::Memcpy(local_6b8[0x20],L"Asia",10);
  local_6b8[0x1e] = 0;
  local_6b8[0x1f] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x1e,0);
  FGenericPlatformString::Memcpy(local_6b8[0x1e],&DAT_144301384,6);
  local_1b8 = local_6b8 + 0x1e;
  local_1b0 = local_6b8 + 0x20;
  FUN_140497620(lVar5,local_2ec,&local_1b8,0);
  if (local_6b8[0x1e] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0x20] != 0) {
    FMemory::Free();
  }
  local_6b8[0x2c] = 0;
  local_6b8[0x2d] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x2c,0);
  FGenericPlatformString::Memcpy(local_6b8[0x2c],L"Australia",0x14);
  local_6b8[0x22] = 0;
  local_6b8[0x23] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x22,0);
  FGenericPlatformString::Memcpy(local_6b8[0x22],&DAT_144301c64,6);
  local_1a8 = local_6b8 + 0x22;
  local_1a0 = local_6b8 + 0x2c;
  FUN_140497620(lVar5,local_2d8,&local_1a8,0);
  if (local_6b8[0x22] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0x2c] != 0) {
    FMemory::Free();
  }
  local_6b8[0x3e] = 0;
  local_6b8[0x3f] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x3e,0);
  FGenericPlatformString::Memcpy(local_6b8[0x3e],L"Australia",0x14);
  local_6b8[0x1a] = 0;
  local_6b8[0x1b] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x1a,0);
  FGenericPlatformString::Memcpy(local_6b8[0x1a],&DAT_144301e94,6);
  local_198 = local_6b8 + 0x1a;
  local_190 = local_6b8 + 0x3e;
  FUN_140497620(lVar5,local_2e8,&local_198,0);
  if (local_6b8[0x1a] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0x3e] != 0) {
    FMemory::Free();
  }
  local_6b8[0x42] = 0;
  local_6b8[0x43] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x42,0);
  FGenericPlatformString::Memcpy(local_6b8[0x42],L"NorthAmerica",0x1a);
  local_6b8[0x40] = 0;
  local_6b8[0x41] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x40,0);
  FGenericPlatformString::Memcpy(local_6b8[0x40],L"spark_us",0x12);
  FString::FString(&local_2c8,local_6b8 + 0x40);
  FString::FString(&local_2b8,local_6b8 + 0x42);
  iVar11 = *(int *)(param_1 + 0x1268);
  *(int *)(param_1 + 0x1268) = iVar11 + 1;
  if (*(int *)(param_1 + 0x126c) < iVar11 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar10,iVar11);
  }
  puVar7 = (undefined8 *)((longlong)iVar11 * 0x20 + *plVar10);
  *puVar7 = local_2c8;
  *(undefined4 *)(puVar7 + 1) = local_2c0;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_2bc;
  puVar7[2] = local_2b8;
  *(undefined4 *)(puVar7 + 3) = local_2b0;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = local_2ac;
  if (local_6b8[0x40] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0x42] != 0) {
    FMemory::Free();
  }
  local_6b8[0x46] = 0;
  local_6b8[0x47] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x46,0);
  FGenericPlatformString::Memcpy(local_6b8[0x46],L"NorthAmerica",0x1a);
  local_6b8[0x44] = 0;
  local_6b8[0x45] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x44,0);
  FGenericPlatformString::Memcpy(local_6b8[0x44],L"spark_can",0x14);
  FString::FString(&local_2a8,local_6b8 + 0x44);
  FString::FString(&local_298,local_6b8 + 0x46);
  iVar11 = *(int *)(param_1 + 0x1268);
  *(int *)(param_1 + 0x1268) = iVar11 + 1;
  if (*(int *)(param_1 + 0x126c) < iVar11 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar10,iVar11);
  }
  puVar7 = (undefined8 *)((longlong)iVar11 * 0x20 + *plVar10);
  *puVar7 = local_2a8;
  *(undefined4 *)(puVar7 + 1) = local_2a0;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_29c;
  puVar7[2] = local_298;
  *(undefined4 *)(puVar7 + 3) = local_290;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = local_28c;
  if (local_6b8[0x44] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0x46] != 0) {
    FMemory::Free();
  }
  local_6b8[0x4a] = 0;
  local_6b8[0x4b] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x4a,0);
  FGenericPlatformString::Memcpy(local_6b8[0x4a],L"NorthAmerica",0x1a);
  local_6b8[0x48] = 0;
  local_6b8[0x49] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x48,0);
  FGenericPlatformString::Memcpy(local_6b8[0x48],L"spark_sa",0x12);
  FString::FString(&local_288,local_6b8 + 0x48);
  FString::FString(&local_278,local_6b8 + 0x4a);
  iVar11 = *(int *)(param_1 + 0x1268);
  *(int *)(param_1 + 0x1268) = iVar11 + 1;
  if (*(int *)(param_1 + 0x126c) < iVar11 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar10,iVar11);
  }
  puVar7 = (undefined8 *)((longlong)iVar11 * 0x20 + *plVar10);
  *puVar7 = local_288;
  *(undefined4 *)(puVar7 + 1) = local_280;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_27c;
  puVar7[2] = local_278;
  *(undefined4 *)(puVar7 + 3) = local_270;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = local_26c;
  if (local_6b8[0x48] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0x4a] != 0) {
    FMemory::Free();
  }
  local_6b8[0x4e] = 0;
  local_6b8[0x4f] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x4e,0);
  FGenericPlatformString::Memcpy(local_6b8[0x4e],L"Europe",0xe);
  local_6b8[0x4c] = 0;
  local_6b8[0x4d] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x4c,0);
  FGenericPlatformString::Memcpy(local_6b8[0x4c],L"spark_eu",0x12);
  FString::FString(&local_268,local_6b8 + 0x4c);
  FString::FString(&local_258,local_6b8 + 0x4e);
  iVar11 = *(int *)(param_1 + 0x1268);
  *(int *)(param_1 + 0x1268) = iVar11 + 1;
  if (*(int *)(param_1 + 0x126c) < iVar11 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar10,iVar11);
  }
  puVar7 = (undefined8 *)((longlong)iVar11 * 0x20 + *plVar10);
  *puVar7 = local_268;
  *(undefined4 *)(puVar7 + 1) = local_260;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_25c;
  puVar7[2] = local_258;
  *(undefined4 *)(puVar7 + 3) = local_250;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = local_24c;
  if (local_6b8[0x4c] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0x4e] != 0) {
    FMemory::Free();
  }
  local_6b8[0x52] = 0;
  local_6b8[0x53] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x52,0);
  FGenericPlatformString::Memcpy(local_6b8[0x52],L"Asia",10);
  local_6b8[0x50] = 0;
  local_6b8[0x51] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x50,0);
  FGenericPlatformString::Memcpy(local_6b8[0x50],L"spark_ap",0x12);
  FString::FString(&local_248,local_6b8 + 0x50);
  FString::FString(&local_238,local_6b8 + 0x52);
  iVar11 = *(int *)(param_1 + 0x1268);
  *(int *)(param_1 + 0x1268) = iVar11 + 1;
  if (*(int *)(param_1 + 0x126c) < iVar11 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar10,iVar11);
  }
  puVar7 = (undefined8 *)((longlong)iVar11 * 0x20 + *plVar10);
  *puVar7 = local_248;
  *(undefined4 *)(puVar7 + 1) = local_240;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_23c;
  puVar7[2] = local_238;
  *(undefined4 *)(puVar7 + 3) = local_230;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = local_22c;
  if (local_6b8[0x50] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0x52] != 0) {
    FMemory::Free();
  }
  local_6b8[0x56] = 0;
  local_6b8[0x57] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x56,0);
  FGenericPlatformString::Memcpy(local_6b8[0x56],L"Asia",10);
  local_6b8[0x54] = 0;
  local_6b8[0x55] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x54,0);
  FGenericPlatformString::Memcpy(local_6b8[0x54],L"spark_jp",0x12);
  FString::FString(&local_228,local_6b8 + 0x54);
  FString::FString(&local_218,local_6b8 + 0x56);
  iVar11 = *(int *)(param_1 + 0x1268);
  *(int *)(param_1 + 0x1268) = iVar11 + 1;
  if (*(int *)(param_1 + 0x126c) < iVar11 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar10,iVar11);
  }
  puVar7 = (undefined8 *)((longlong)iVar11 * 0x20 + *plVar10);
  *puVar7 = local_228;
  *(undefined4 *)(puVar7 + 1) = local_220;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_21c;
  puVar7[2] = local_218;
  *(undefined4 *)(puVar7 + 3) = local_210;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = local_20c;
  if (local_6b8[0x54] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0x56] != 0) {
    FMemory::Free();
  }
  local_6b8[0x5a] = 0;
  local_6b8[0x5b] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x5a,0);
  FGenericPlatformString::Memcpy(local_6b8[0x5a],L"Australia",0x14);
  local_6b8[0x58] = 0;
  local_6b8[0x59] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x58,0);
  FGenericPlatformString::Memcpy(local_6b8[0x58],L"spark_aus",0x14);
  FString::FString(&local_208,local_6b8 + 0x58);
  FString::FString(&local_1f8,local_6b8 + 0x5a);
  iVar11 = *(int *)(param_1 + 0x1268);
  *(int *)(param_1 + 0x1268) = iVar11 + 1;
  if (*(int *)(param_1 + 0x126c) < iVar11 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar10,iVar11);
  }
  puVar7 = (undefined8 *)((longlong)iVar11 * 0x20 + *plVar10);
  *puVar7 = local_208;
  *(undefined4 *)(puVar7 + 1) = local_200;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_1fc;
  puVar7[2] = local_1f8;
  *(undefined4 *)(puVar7 + 3) = local_1f0;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = local_1ec;
  if (local_6b8[0x58] != 0) {
    FMemory::Free();
  }
  if (local_6b8[0x5a] != 0) {
    FMemory::Free();
  }
  local_6b8[0x5c] = 0;
  local_6b8[0x5d] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x5c,0);
  FGenericPlatformString::Memcpy(local_6b8[0x5c],L"Europe",0xe);
  local_188 = local_res8;
  local_res8[0] = 1;
  local_180 = local_6b8 + 0x5c;
  FUN_140b953f0(param_1 + 0x1270,local_2e4,&local_188,0);
  if (local_6b8[0x5c] != 0) {
    FMemory::Free();
  }
  local_6b8[0x5e] = 0;
  local_6b8[0x5f] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x5e,0);
  FGenericPlatformString::Memcpy(local_6b8[0x5e],L"NorthAmerica",0x1a);
  local_178 = local_res10;
  local_res10[0] = 0;
  local_170 = local_6b8 + 0x5e;
  FUN_140b953f0(param_1 + 0x1270,local_2e0,&local_178,0);
  if (local_6b8[0x5e] != 0) {
    FMemory::Free();
  }
  local_6b8[0x60] = 0;
  local_6b8[0x61] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6b8 + 0x60,0);
  FGenericPlatformString::Memcpy(local_6b8[0x60],L"Asia",10);
  local_168 = local_res18;
  local_res18[0] = 2;
  local_160 = local_6b8 + 0x60;
  FUN_140b953f0(param_1 + 0x1270,local_2dc,&local_168,0);
  if (local_6b8[0x60] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140bc8870 FUN_140bc8870 body=256 status=ok
// SIG undefined FUN_140bc8870(void)

void FUN_140bc8870(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  
  lVar8 = *(longlong *)(param_1 + 0x28);
  if (lVar8 != 0) {
    puVar7 = *(undefined8 **)(lVar8 + 0x30);
    puVar6 = puVar7 + (longlong)*(int *)(lVar8 + 0x38) * 0xd;
    if (puVar7 != puVar6) {
      plVar9 = puVar7 + 7;
      do {
        plVar2 = (longlong *)(**(code **)(*plVar9 + 0x18))(plVar9,local_res8);
        if (*plVar2 != 0) {
          lVar3 = FUN_142f71d80();
          lVar8 = *plVar2;
          for (lVar5 = lVar8; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
            if (lVar5 == lVar3) goto LAB_140bc88f7;
          }
        }
        lVar8 = 0;
LAB_140bc88f7:
        if (param_3 != 0) {
          lVar3 = FUN_142f71d80();
          lVar5 = param_3;
          do {
            lVar4 = param_3;
            if (lVar5 == lVar3) goto LAB_140bc8914;
            lVar5 = *(longlong *)(lVar5 + 0x30);
          } while (lVar5 != 0);
        }
        lVar4 = 0;
LAB_140bc8914:
        if ((lVar8 == lVar4) &&
           (cVar1 = FUN_142f635c0(param_2,plVar9,param_1 + -0x458), cVar1 != '\0')) {
          FUN_140be24e0(param_1 + -0x458,*puVar7);
          return;
        }
        puVar7 = puVar7 + 0xd;
        plVar9 = plVar9 + 0xd;
      } while (puVar7 != puVar6);
    }
  }
  return;
}



// FUNCTION 140bc8970 FUN_140bc8970 body=620 status=ok
// SIG undefined FUN_140bc8970(void)

void FUN_140bc8970(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined4 local_res8 [2];
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_38;
  
  lVar7 = 0;
  local_res8[0] = 0;
  lVar10 = 0;
  if (*(longlong *)(param_1 + 0x460) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x1f8) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)UUGMenuManager::GetFadeHUD();
    lVar10 = lVar7;
    if (plVar5 != (longlong *)0x0) {
      local_70 = *(longlong **)(param_1 + 0x468);
      local_78 = *(undefined8 *)(param_1 + 0x460);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      lVar10 = 1;
      cVar4 = FUN_142d868e0(plVar5,&local_78);
      if (cVar4 == '\0') {
        bVar3 = true;
        goto LAB_140bc8a00;
      }
    }
  }
  bVar3 = false;
LAB_140bc8a00:
  plVar6 = local_70;
  if ((lVar10 != 0) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_70 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_70)(local_70);
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
  if (bVar3) {
    uStack_40 = 0;
    local_48 = FUN_140bd5750;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_38 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_144089a20;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = (undefined4)local_48;
      *(undefined4 *)((longlong)plVar6 + 0x14) = local_48._4_4_;
      *(undefined4 *)(plVar6 + 3) = uStack_40;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_3c;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar7;
      *plVar6 = (longlong)&PTR_FUN_144089a68;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5 + 7,1);
      plVar8 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
      iVar2 = (int)plVar5[8];
      lVar7 = *plVar8;
      *(int *)(plVar5 + 8) = iVar2 + 1;
      if (*(int *)((longlong)plVar5 + 0x44) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5 + 7,iVar2);
      }
      puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + plVar5[7]);
      *puVar9 = plVar6;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
    *(longlong *)(param_1 + 0xfb8) = lVar7;
    local_68 = *(undefined8 *)(param_1 + 0x460);
    local_60 = *(longlong **)(param_1 + 0x468);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar5 + 0x48))(plVar5,&local_68);
    plVar5 = local_60;
  }
  else {
    local_58 = *(undefined8 *)(param_1 + 0x460);
    local_50 = *(longlong **)(param_1 + 0x468);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    FUN_140bd5750(param_1,&local_58,1);
    plVar5 = local_50;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 140bc8be0 FUN_140bc8be0 body=999 status=ok
// SIG undefined FUN_140bc8be0(void)

void FUN_140bc8be0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  LARGE_INTEGER local_res8;
  longlong local_38 [4];
  
  lVar2 = FUN_140bba540();
  if (((*(char *)(param_1 + 0x13a1) == '\0') && (lVar2 != 0)) &&
     (local_res8.QuadPart = 0, *param_2 == 0)) {
    *(undefined2 *)(param_1 + 0x13a0) = 0x100;
    plVar3 = (longlong *)UGameInstance::GetGameViewportClient(param_1);
    if (plVar3 != (longlong *)0x0) {
      local_38[0] = 0;
      local_38[1] = 0x25;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],L"DelayedCmd 500f CE CE_BenchmarkStart",0x4a);
      (**(code **)(*plVar3 + 0x2e8))(plVar3,local_38 + 2,local_38);
      if (local_38[2] != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      local_38[0] = 0;
      local_38[1] = 0x27;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],L"GbxCoreStat.PauseGCWhileBenchmarking 0",0x4e);
      (**(code **)(*plVar3 + 0x2e8))(plVar3,local_38 + 2,local_38);
      if (local_38[2] != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      local_38[0] = 0;
      local_38[1] = 0x1e;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],L"GbxCoreStat.BenchmarkMemory 0",0x3c);
      (**(code **)(*plVar3 + 0x2e8))(plVar3,local_38 + 2,local_38);
      if (local_38[2] != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if ((*(char *)(param_1 + 0x13a2) == '\0') && (cVar1 = FUN_140cb6290(lVar2), cVar1 == '\0')) {
        local_38[0] = 0;
        local_38[1] = 0x2c;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
        FGenericPlatformString::Memcpy
                  (local_38[0],L"GbxCoreStat.BenchmarkDataOutputSummaryTXT 0",0x58);
        (**(code **)(*plVar3 + 0x2e8))(plVar3,local_38 + 2,local_38);
        if (local_38[2] != 0) {
          FMemory::Free();
        }
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        local_38[0] = 0;
        local_38[1] = 0x20;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
        uVar5 = 0x40;
        pwVar4 = L"GbxCoreStat.BenchmarkFilePath 0";
      }
      else {
        local_38[0] = 0;
        local_38[1] = 0x2c;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
        FGenericPlatformString::Memcpy
                  (local_38[0],L"GbxCoreStat.BenchmarkDataOutputSummaryTXT 1",0x58);
        (**(code **)(*plVar3 + 0x2e8))(plVar3,local_38 + 2,local_38);
        if (local_38[2] != 0) {
          FMemory::Free();
        }
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        local_38[0] = 0;
        local_38[1] = 0x39;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
        uVar5 = 0x72;
        pwVar4 = L"GbxCoreStat.BenchmarkFilePath BenchmarkData_{{DateTime}}";
      }
      FGenericPlatformString::Memcpy(local_38[0],pwVar4,uVar5);
      (**(code **)(*plVar3 + 0x2e8))(plVar3,local_38 + 2,local_38);
      if (local_38[2] != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if ((*(char *)(param_1 + 0x13a2) == '\0') && (cVar1 = FUN_140cb6290(lVar2), cVar1 != '\x02'))
      {
        local_38[0] = 0;
        local_38[1] = 0x25;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
        pwVar4 = L"GbxCoreStat.BenchmarkDataOutputCSV 0";
      }
      else {
        local_38[0] = 0;
        local_38[1] = 0x25;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
        pwVar4 = L"GbxCoreStat.BenchmarkDataOutputCSV 1";
      }
      FGenericPlatformString::Memcpy(local_38[0],pwVar4,0x4a);
      (**(code **)(*plVar3 + 0x2e8))(plVar3,local_38 + 2,local_38);
      if (local_38[2] != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    local_38[0] = 0;
    local_38[1] = 0;
    uVar5 = FName::FName(&local_res8,L"/Game/Maps/Benchmark/Benchmark_P",1);
    FUN_140bc8fd0(param_1,uVar5,local_38,0);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    QueryPerformanceCounter(&local_res8);
    *(double *)(param_1 + 0x13a8) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  }
  return;
}



// FUNCTION 140bc8fd0 FUN_140bc8fd0 body=2033 status=ok
// SIG undefined FUN_140bc8fd0(void)

void FUN_140bc8fd0(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  void *pvVar15;
  void *pvVar16;
  void *local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  char local_res20;
  void *local_1f8;
  uint local_1f0;
  int local_1ec;
  void *local_1e8;
  uint local_1e0;
  int local_1dc;
  void *local_1d8;
  uint local_1d0;
  int local_1cc;
  void *local_1c8;
  uint local_1c0;
  int local_1bc;
  void *local_1b8;
  uint local_1b0;
  int local_1ac;
  void *local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  void *local_190;
  ulonglong local_188;
  longlong local_180 [2];
  void *local_170;
  int local_168;
  undefined4 local_164;
  void *local_160;
  ulonglong local_158;
  undefined1 local_150 [8];
  undefined8 local_148;
  void *local_140;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined4 local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined8 *local_e0;
  int local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [16];
  undefined4 local_c0;
  undefined **local_b8;
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_198 = (**(code **)(*param_1 + 0x148))();
  if (local_198 == 0) {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0xba9) = 1;
  lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar8 != 0) &&
     ((iVar6 = FUN_1428cf800(lVar8), iVar6 == 0 || (*(longlong *)(lVar8 + 0x38) == 0)))) {
    FString::FString(local_128,lVar8 + 0x560);
    FString::FString(local_118,lVar8 + 0x570);
    local_108 = *(undefined4 *)(lVar8 + 0x580);
    FString::FString(local_100,lVar8 + 0x588);
    FString::FString(local_f0,lVar8 + 0x598);
    puVar14 = *(undefined8 **)(lVar8 + 0x5a8);
    local_e0 = (undefined8 *)0x0;
    iVar6 = *(int *)(lVar8 + 0x5b0);
    local_d8 = iVar6;
    if (iVar6 == 0) {
      local_d4 = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_e0,iVar6,0);
      puVar12 = local_e0;
      do {
        *puVar12 = 0;
        iVar7 = *(int *)(puVar14 + 1);
        pvVar16 = (void *)*puVar14;
        *(int *)(puVar12 + 1) = iVar7;
        if (iVar7 == 0) {
          *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar12,iVar7,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar12,pvVar16,(longlong)iVar7 * 2);
        }
        puVar12 = puVar12 + 2;
        puVar14 = puVar14 + 2;
        iVar6 = iVar6 + -1;
        param_2 = local_res10;
      } while (iVar6 != 0);
    }
    FString::FString(local_d0,lVar8 + 0x5b8);
    local_c0 = *(undefined4 *)(lVar8 + 0x5c8);
    cVar5 = FUN_1428cfbe0(lVar8,local_128);
    FURL::~FURL(local_128);
    param_3 = local_res18;
    param_4 = local_res20;
    if (cVar5 == '\0') goto LAB_140bc962b;
  }
  pvVar16 = (void *)0x0;
  cVar5 = FUN_140bf4350(param_1,0);
  if (cVar5 != '\0') {
    FUN_140bb7dd0(param_1,&local_160);
    lVar8 = FUN_140bb7870(param_1);
    if (lVar8 != 0) {
      FUN_1404e1dd0(lVar8,param_4);
    }
    if (param_4 == '\0') {
      FUN_140beb220(param_1,1);
    }
    lVar8 = FUN_140b825a0(param_1);
    if (lVar8 != 0) {
      *(undefined1 *)(lVar8 + 0x638) = 0;
    }
    local_1a8 = (void *)0x0;
    local_1a0 = 0;
    FName::ToString(param_2,&local_190);
    FUN_140bf2f90(param_1,param_3,&local_190,&local_1a8);
    FUN_1411fbe40(param_1 + 0xf4,&local_190);
    lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((lVar8 != 0) && ((*(uint *)(lVar8 + 0x830) >> 2 & 1) != 0)) {
      lVar8 = FUN_140bb7870(param_1);
      pvVar15 = local_190;
      iVar6 = (int)local_188;
      if (lVar8 != 0) {
        local_170 = (void *)0x0;
        local_168 = (int)local_188;
        if ((int)local_188 == 0) {
          local_164 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_170,local_188 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_170,pvVar15,(longlong)iVar6 * 2);
        }
        FUN_140dd09a0(lVar8,&local_170);
      }
    }
    FUN_140ba9a10(param_1);
    pvVar11 = local_190;
    local_1d0 = (int)local_188;
    local_1d8 = (void *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_1d8,(8 - (uint)((int)local_188 != 0)) + (int)local_188,0);
    pvVar15 = local_1d8;
    _guard_xfg_dispatch_icall_nop(local_1d8,pvVar11,(longlong)(int)local_188 * 2);
    uVar13 = local_1d0;
    lVar8 = (longlong)(int)local_1d0;
    local_1d0 = (8 - (uint)(local_1d0 != 0)) + local_1d0;
    if (local_1cc < (int)local_1d0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,uVar13);
      pvVar15 = local_1d8;
    }
    builtin_wcsncpy((wchar_t *)((lVar8 - (ulonglong)(uVar13 != 0)) * 2 + (longlong)pvVar15),
                    L"?listen",8);
    uVar13 = (uint)local_158;
    if ((int)local_1d0 < 2) {
      local_1c8 = (void *)0x0;
      pvVar11 = pvVar15;
      local_1c0 = uVar13;
      local_140 = pvVar15;
      if (uVar13 == 0) {
        local_1bc = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1c8,local_158 & 0xffffffff,0);
        pvVar16 = local_1c8;
        _guard_xfg_dispatch_icall_nop(local_1c8,local_160,(longlong)(int)uVar13 * 2);
        local_158 = (ulonglong)local_1c0;
      }
    }
    else {
      iVar6 = uVar13 - 1;
      if (uVar13 == 0) {
        iVar6 = 0;
      }
      if ((local_1d0 != 0) || (iVar7 = 1, iVar6 == 0)) {
        iVar7 = 0;
      }
      pvVar11 = (void *)0x0;
      local_140 = (void *)0x0;
      local_1f8 = pvVar15;
      local_1f0 = local_1d0;
      local_1ec = local_1cc;
      if (local_1cc < (int)(iVar7 + local_1d0 + iVar6)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo();
      }
      uVar13 = local_1f0;
      local_158 = (ulonglong)local_1f0;
      pvVar16 = local_1f8;
      if (iVar6 != 0) {
        lVar8 = (longlong)(int)local_1f0;
        local_1f0 = local_1f0 + (local_1f0 == 0) + iVar6;
        if (local_1ec < (int)local_1f0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,local_158);
        }
        pvVar16 = local_1f8;
        local_158 = (ulonglong)local_1f0;
        pvVar15 = (void *)((longlong)local_1f8 + (lVar8 - (ulonglong)(uVar13 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar15,local_160,(longlong)iVar6 * 2);
        *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar15) = 0;
      }
      local_1c0 = (uint)local_158;
      local_1c8 = pvVar16;
      local_1bc = local_1ec;
    }
    pvVar15 = local_1a8;
    uVar13 = (uint)local_158;
    if ((int)uVar13 < 2) {
      lVar8 = (longlong)(int)(uint)local_1a0;
      local_1b8 = (void *)0x0;
      local_1b0 = (uint)local_1a0;
      if ((uint)local_1a0 == 0) {
        local_1ac = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1b8,local_1a0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_1b8,pvVar15,lVar8 * 2);
      }
      if (pvVar16 != (void *)0x0) {
        FMemory::Free(pvVar16);
      }
    }
    else {
      iVar6 = 0;
      if ((uint)local_1a0 != 0) {
        iVar6 = (uint)local_1a0 - 1;
      }
      if ((uVar13 != 0) || (iVar7 = 1, iVar6 == 0)) {
        iVar7 = 0;
      }
      local_1e8 = pvVar16;
      local_1e0 = uVar13;
      local_1dc = local_1bc;
      if (local_1bc < (int)(iVar7 + uVar13 + iVar6)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1e8);
        local_158 = (ulonglong)local_1e0;
      }
      uVar13 = (uint)local_158;
      local_res8 = local_1a8;
      local_1b8 = local_1e8;
      local_1b0 = uVar13;
      local_1ac = local_1dc;
      if (iVar6 != 0) {
        local_1e0 = (uVar13 == 0) + uVar13 + iVar6;
        if (local_1dc < (int)local_1e0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,local_158 & 0xffffffff);
        }
        iVar7 = local_1dc;
        uVar4 = local_1e0;
        pvVar15 = local_1e8;
        pvVar16 = (void *)((longlong)local_1e8 +
                          ((longlong)(int)uVar13 - (ulonglong)(uVar13 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar16,local_res8,(longlong)iVar6 * 2);
        *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar16) = 0;
        local_1b8 = pvVar15;
        local_1b0 = uVar4;
        local_1ac = iVar7;
      }
    }
    if (pvVar11 != (void *)0x0) {
      FMemory::Free(pvVar11);
    }
    FUN_142d6f160(param_1);
    lVar8 = local_198;
    cVar5 = FUN_1428d76e0(local_198,&local_1b8,1,0);
    if (cVar5 == '\0') {
      bVar3 = false;
      FUN_140bf4350(param_1,1);
      if (*(longlong *)(lVar8 + 0x38) != 0) {
        FUN_14288fa60(DAT_146b17150,lVar8);
      }
    }
    else {
      bVar3 = true;
    }
    if (local_1b8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_190 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_1a8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_160 != (void *)0x0) {
      FMemory::Free(local_160);
    }
    if (bVar3) {
      return;
    }
  }
LAB_140bc962b:
  *(undefined1 *)((longlong)param_1 + 0xba9) = 0;
  if ((char)param_1[0x180] == '\0') {
    local_180[1] = 0x25;
    local_180[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_180,0);
    FGenericPlatformString::Memcpy(local_180[0],L"Unknown network error during travel.",0x4a);
    uVar9 = FText::FromString(local_68,local_180);
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_80,L"Network Error",L"OakGameInstance",L"NetworkError");
    local_b8 = &PTR_FUN_1443170a0;
    FText::FText(local_b0,uVar10);
    FText::FText(local_98,uVar9);
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_78 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)local_78 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    if (local_180[0] != 0) {
      FMemory::Free();
    }
    FWeakObjectPtr::operator=(&local_res8,0);
    FWeakObjectPtr::operator=(&local_198,0);
    FWeakObjectPtr::operator=(local_150,0);
    local_148 = 0;
    FUN_140c23780(2,&local_b8,local_150,&local_198,&local_res8,2);
    FUN_140b9cdd0(&local_b8);
  }
  return;
}



// FUNCTION 140bc97d0 FUN_140bc97d0 body=496 status=ok
// SIG undefined FUN_140bc97d0(void)

void FUN_140bc97d0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_b8 [4];
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined **local_88;
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x830) >> 2 & 1) != 0)) {
    local_b8[2] = 0;
    local_b8[3] = 0x38;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 2,0);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_b8[2],0x38,"Sorry, the inspect feature has not yet been implemented",0x38,0x3f)
    ;
    local_b8[0] = 0;
    local_b8[1] = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_b8[0],0x14,"Not Yet Implemented",0x14,0x3f);
    uVar5 = FText::FromString(local_38,local_b8 + 2);
    uVar6 = FText::FromString(local_50,local_b8);
    local_88 = &PTR_FUN_1443170a0;
    FText::FText(local_80,uVar6);
    FText::FText(local_68,uVar5);
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
    if (local_b8[0] != 0) {
      FMemory::Free();
    }
    if (local_b8[2] != 0) {
      FMemory::Free();
    }
    FWeakObjectPtr::operator=(local_res18,0);
    FWeakObjectPtr::operator=(local_res20,0);
    FWeakObjectPtr::operator=(local_98,0);
    local_90 = 0;
    FUN_140c23780(2,&local_88,local_98,local_res20,local_res18,2);
    FUN_140b9cdd0(&local_88);
  }
  return;
}



// FUNCTION 140bc99c0 FUN_140bc99c0 body=49 status=ok
// SIG undefined FUN_140bc99c0(void)

void FUN_140bc99c0(longlong param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = *(undefined4 *)(param_1 + 0x142c);
  local_14 = *(undefined4 *)(param_1 + 0x1430);
  local_10 = *(undefined4 *)(param_1 + 0x1434);
  FUN_1405eb5e0(&local_18);
  return;
}



// FUNCTION 140bc9a00 FUN_140bc9a00 body=994 status=ok
// SIG undefined FUN_140bc9a00(void)

void FUN_140bc9a00(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  ulonglong in_stack_fffffffffffffed8;
  undefined2 *local_118;
  undefined8 local_110;
  longlong local_108 [3];
  longlong *local_f0;
  longlong *local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  longlong local_a0 [2];
  undefined **local_90;
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  bVar3 = false;
  bVar2 = false;
  cVar5 = FUN_140ba67e0(param_1,param_3);
  if (cVar5 == '\0') {
    return;
  }
  FUN_140ba89d0(param_1);
  plVar8 = (longlong *)*param_3;
  plVar7 = (longlong *)FName::FName(local_b0,L"SPARK",1);
  plVar8 = (longlong *)(**(code **)(*plVar8 + 8))(plVar8,local_a8);
  if (*plVar8 != *plVar7) {
    FUN_1404d0c50(&local_f0,0);
    if (local_f0 != (longlong *)0x0) {
      local_108[2] = 0x11f;
      (**(code **)(*local_f0 + 0x1d8))(local_f0,param_2,0x11f,param_3);
    }
    plVar8 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar7 = local_e8 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 != 1) {
      return;
    }
    (**(code **)*local_e8)(local_e8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 != 1) {
      return;
    }
    lVar10 = *local_e8;
    local_b8 = local_e8;
    goto LAB_140bc9db1;
  }
  if ((*(char *)(param_1 + 0x458) != '\0') || (*(char *)(param_1 + 0xb19) == '\0')) {
    FUN_140dc0dc0(param_1 + 0x5f0,param_2,param_3);
    return;
  }
  uVar9 = FUN_140bb74b0(param_1);
  FUN_140d7da70(uVar9,&local_c0,param_2,param_3,in_stack_fffffffffffffed8 & 0xffffffff00000000);
  local_118 = (undefined2 *)0x0;
  local_110 = 0;
  if (local_c0 == (longlong *)0x0) {
LAB_140bc9b6b:
    bVar4 = false;
  }
  else {
    local_108[0] = 0;
    local_108[1] = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
    FGenericPlatformString::Memcpy(local_108[0],L"active_service_name",0x28);
    bVar3 = true;
    bVar2 = false;
    cVar5 = (**(code **)(*local_c0 + 0x20))(local_c0,local_108,&local_118);
    if ((cVar5 == '\0') || ((int)local_110 < 2)) goto LAB_140bc9b6b;
    lVar10 = FUN_142b45e90();
    puVar11 = (undefined8 *)FUN_142b495d0(*(undefined8 *)(lVar10 + 0x18),local_a0);
    if (*(int *)(puVar11 + 1) == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = (undefined2 *)*puVar11;
    }
    bVar3 = true;
    bVar2 = true;
    puVar13 = &DAT_143f3eda8;
    if ((int)local_110 != 0) {
      puVar13 = local_118;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar14);
    if (iVar6 != 0) goto LAB_140bc9b6b;
    bVar4 = true;
  }
  if ((bVar2) && (local_a0[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_108[0] != 0)) {
    FMemory::Free();
  }
  if (bVar4) {
    FUN_140dc0dc0(param_1 + 0x5f0,param_2,param_3);
  }
  else {
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,
                       L"To send invites to cross-platform users you must enable cross-play.",
                       L"OakGameInstance",L"InviteFailedCrossplayRequiredMessage");
    uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_58,L"Cross-play Required",L"OakGameInstance",
                        L"InviteFailedCrossplayRequiredTitle");
    local_90 = &PTR_FUN_1443170a0;
    FText::FText(local_88,uVar12);
    FText::FText(local_70,uVar9);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_50 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_38 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    FWeakObjectPtr::operator=(local_e0,0);
    FWeakObjectPtr::operator=(local_d8,0);
    FWeakObjectPtr::operator=(local_d0,0);
    local_c8 = 0;
    FUN_140c23780(2,&local_90,local_d0,local_d8,local_e0,2);
    FUN_140b9cdd0(&local_90);
  }
  if (local_118 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_b8 == (longlong *)0x0) {
    return;
  }
  LOCK();
  plVar8 = local_b8 + 1;
  lVar10 = *plVar8;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)lVar10 != 1) {
    return;
  }
  (**(code **)*local_b8)(local_b8);
  LOCK();
  piVar1 = (int *)((longlong)local_b8 + 0xc);
  iVar6 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar6 != 1) {
    return;
  }
  lVar10 = *local_b8;
LAB_140bc9db1:
  (**(code **)(lVar10 + 8))(local_b8,1);
  return;
}



// FUNCTION 140bc9df0 FUN_140bc9df0 body=260 status=ok
// SIG undefined FUN_140bc9df0(void)

ulonglong FUN_140bc9df0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  ulonglong in_RAX;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if ((char)param_1[0x175] != '\0') goto LAB_140bc9eec;
  lVar5 = (**(code **)(*param_1 + 0x148))();
  in_RAX = 0;
  if ((lVar5 == 0) ||
     (uVar4 = *(uint *)(lVar5 + 0x830) >> 2, in_RAX = (ulonglong)uVar4 & 0xffffffffffffff01,
     (uVar4 & 1) == 0)) goto LAB_140bc9eec;
  lVar5 = UGameInstance::GetFirstGamePlayer(param_1);
  if ((lVar5 == 0) || (plVar2 = *(longlong **)(lVar5 + 0x30), plVar2 == (longlong *)0x0)) {
LAB_140bc9e83:
    in_RAX = 0;
  }
  else {
    lVar5 = FUN_14145f370();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140bc9e83;
    in_RAX = (**(code **)(*plVar2 + 0xfa8))(plVar2);
  }
  if (0 < *(int *)(in_RAX + 0x48)) {
    plVar2 = (longlong *)(in_RAX + 0x40);
    in_RAX = (ulonglong)*(int *)(in_RAX + 0x48);
    plVar2 = *(longlong **)(*plVar2 + -8 + in_RAX * 8);
    if (plVar2 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar2 + 0x278))();
      in_RAX = 0;
      if (lVar5 != 0) {
        lVar6 = AGImpulseWindProjectile::GetPrivateStaticClass();
        iVar1 = *(int *)(lVar6 + 0x90);
        uVar7 = (longlong)iVar1;
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar1) ||
           (uVar7 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0x88),
           *(longlong *)(uVar7 + (longlong)iVar1 * 8) != lVar6 + 0x88)) {
          in_RAX = uVar7 & 0xffffffffffffff00;
        }
        else {
          in_RAX = CONCAT71((int7)(uVar7 >> 8),1);
        }
        if ((char)in_RAX != '\0') {
          return CONCAT71((int7)(in_RAX >> 8),1);
        }
      }
    }
  }
LAB_140bc9eec:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140bc9f00 FUN_140bc9f00 body=61 status=ok
// SIG undefined FUN_140bc9f00(void)

ulonglong FUN_140bc9f00(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  uVar3 = 0;
  if (((lVar2 != 0) &&
      (uVar1 = *(uint *)(lVar2 + 0x830) >> 2, uVar3 = (ulonglong)uVar1 & 0xffffffffffffff01,
      (uVar1 & 1) != 0)) && ((char)param_1[0x175] == '\0')) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140bc9f40 FUN_140bc9f40 body=24 status=ok
// SIG undefined FUN_140bc9f40(void)

undefined1 FUN_140bc9f40(longlong param_1)

{
  if ((*(char *)(param_1 + 0x13c1) != '\0') && (*(char *)(param_1 + 0x13c0) == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140bc9f60 FUN_140bc9f60 body=75 status=ok
// SIG undefined FUN_140bc9f60(void)

undefined8 FUN_140bc9f60(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar1 = FUN_1428cf800(uVar3);
    if (iVar1 == 3) {
      return 1;
    }
  }
  lVar2 = FUN_140bb6170(param_1);
  if (lVar2 != 0) {
    return 1;
  }
  return 0;
}



// FUNCTION 140bc9fb0 FUN_140bc9fb0 body=204 status=ok
// SIG undefined FUN_140bc9fb0(void)

bool FUN_140bc9fb0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852c60) {
    _Init_thread_header(&DAT_146852c60);
    if (DAT_146852c60 == -1) {
      FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
      _Init_thread_footer(&DAT_146852c60);
    }
  }
  uVar1 = DAT_146852c58;
  uVar2 = FUN_14168dc80();
  plVar3 = (longlong *)FModuleManager::GetModule(uVar2,uVar1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,local_res18[0]);
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,local_res18);
    return *plVar3 == param_2;
  }
  return false;
}



// FUNCTION 140bca080 FUN_140bca080 body=364 status=ok
// SIG undefined FUN_140bca080(void)

undefined8 FUN_140bca080(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *local_28;
  undefined8 local_20;
  
  if (*(longlong *)(param_2 + 8) != 0) {
    lVar3 = FUN_14244bf10();
    if (lVar3 != 0) {
      return 1;
    }
    lVar3 = FUN_140bb7870(param_1);
    if ((lVar3 != 0) || (lVar3 = FUN_140bb6170(param_1), lVar3 != 0)) {
      lVar6 = *(longlong *)(lVar3 + 0x60);
      lVar3 = (longlong)*(int *)(lVar3 + 0x68) * 0x40 + lVar6;
      for (; lVar6 != lVar3; lVar6 = lVar6 + 0x40) {
        if (((*(longlong **)(lVar6 + 0x10) != (longlong *)0x0) &&
            (cVar2 = (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x20))(), cVar2 != '\0')) &&
           (cVar2 = (**(code **)**(undefined8 **)(param_2 + 8))
                              (*(undefined8 **)(param_2 + 8),*(undefined8 *)(lVar6 + 0x10)),
           cVar2 != '\0')) {
          return 1;
        }
        lVar4 = *(longlong *)(lVar6 + 0x30);
        lVar1 = lVar4 + (longlong)*(int *)(lVar6 + 0x38) * 0x28;
        for (; lVar4 != lVar1; lVar4 = lVar4 + 0x28) {
          if (((*(longlong **)(lVar4 + 8) != (longlong *)0x0) &&
              (cVar2 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x20))(), cVar2 != '\0')) &&
             (cVar2 = (**(code **)**(undefined8 **)(param_2 + 8))
                                (*(undefined8 **)(param_2 + 8),*(undefined8 *)(lVar4 + 8)),
             cVar2 != '\0')) {
            return 1;
          }
        }
      }
    }
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_140bb7680(param_1,&local_28);
    puVar7 = local_28 + (longlong)(int)local_20 * 2;
    for (puVar5 = local_28; puVar5 != puVar7; puVar5 = puVar5 + 2) {
      cVar2 = (**(code **)**(undefined8 **)(param_2 + 8))(*(undefined8 **)(param_2 + 8),*puVar5);
      if (cVar2 != '\0') {
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_28);
        return 1;
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_28);
  }
  return 0;
}


